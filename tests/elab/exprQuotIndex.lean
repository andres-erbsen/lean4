import Lean

/-!
Comprehensive tests for shared-relation `DiscrTree` indexing in native `match` over `expr`
quotations:
- Equivalence between indexed dispatch and direct linear pattern matching across `.structural`,
  `.reducible`, and `.sym`.
- `.structural` soundness: does NOT reduce `.proj` or beta redexes, respects `+inst` across
  differing instances, handles higher-order `?f x`, closed proofs, arrows, `fvar`s, and caller
  `mvar`s.
- `.reducible` soundness: handles root `Nat.succ _`, `Nat.zero`, `0`, `2`, `(fun x => x + ?a)`,
  `Sort _`, reducible aliases, `eta`, `let`, static `[items]`, and literal <-> numeral equivalence.
- `/sym` indexing soundness: handles root & subterm offsets (`?n + 1`, `f 5` matching
  `f (1 + 4)`), `letE`, local `let`-fvar `zetaDelta`, beta redexes, `eta`, and lambdas/sorts.
- Strict ascending source order, deduplication (no double evaluation), single evaluation of pin
  conditions on matched candidates only, mixed/prefix/multi-column/non-indexed boundaries,
  50-branch dispatch sanity, lazy `O(|pattern|)` deep-spine unassigned-mvar behavior, and
  programmatic `.proj` indexing.
-/

namespace ExprQuotIndexTest

open Lean Meta
open Lean.Meta.Sym (SymM)

-- Cross-check indexed dispatch against skipped arms linearly (`Q2`/`A3`).
set_option exprQuot.debug.checkIndex true

private def assertEq [BEq α] [Repr α] (label : String) (actual expected : α) :
    MetaM Unit := do
  unless actual == expected do
    throwError "{label}: got {repr actual}, expected {repr expected}"

/-! ## 1. `.structural` & `.structural +inst` soundness -/

namespace Structural

opaque fTag : Nat → Nat
opaque gTag : Nat → Nat
opaque pCarry {P : Prop} (h : P) (x : Nat) : Nat

private def structMatch (e : Expr) : MetaM Nat :=
  match e with
  | `(?a + $a)            => let _ := a; return 1
  | `(?a + ?b)            => let _ := (a, b); return 2
  | `(Nat.succ ?n)        => let _ := n; return 3
  | `(?α → ?β)            => let _ := (α, β); return 4
  | `((?p : Nat × Nat).1) => let _ := p; return 5
  | `(fTag ?x)            => let _ := x; return 6
  | `(pCarry _ ?x)        => let _ := x; return 7
  | `(?f 0)               => let _ := f; return 8
  | `(fun x => ?b)        => let _ := b; return 9
  | _                           => return 0

private def structOracle (e : Expr) : MetaM Nat := do
  match e with | `(?a + $a) => let _ := a; return 1 | _ => pure ()
  match e with | `(?a + ?b) => let _ := (a, b); return 2 | _ => pure ()
  match e with | `(Nat.succ ?n) => let _ := n; return 3 | _ => pure ()
  match e with | `(?α → ?β) => let _ := (α, β); return 4 | _ => pure ()
  match e with | `((?p : Nat × Nat).1) => let _ := p; return 5 | _ => pure ()
  match e with | `(fTag ?x) => let _ := x; return 6 | _ => pure ()
  match e with | `(pCarry _ ?x) => let _ := x; return 7 | _ => pure ()
  match e with | `(?f 0) => let _ := f; return 8 | _ => pure ()
  match e with | `(fun x => ?b) => let _ := b; return 9 | _ => pure ()
  return 0

/-- info: [1, 2, 3, 4, 5, 6, 7, 8, 9] -/
#guard_msgs in
run_meta do
  let results : List Nat := [
    ← structMatch (← `(expr| 1 + 1)),
    ← structMatch (← `(expr| 1 + 2)),
    ← structMatch (mkApp (mkConst ``Nat.succ) (mkNatLit 0)),
    ← structMatch (mkForall `a .default (mkConst ``Nat) (mkConst ``Bool)),
    ← structMatch (← `(expr| ($(mkNatLit 0), $(mkNatLit 1)).1)),
    ← structMatch (mkApp (mkConst ``fTag) (mkNatLit 1)),
    ← structMatch (← `(expr| pCarry trivial 5)),
    ← structMatch (← `(expr| gTag 0)),
    ← structMatch (mkLambda `y .default (mkConst ``Nat) (mkNatLit 9))
  ]
  logInfo m!"{results}"

/-- info: [0, 0, 0] -/
#guard_msgs in
run_meta do
  -- Structural must NOT fold raw `.proj`, beta-reduce `(fun y => fTag 9) 1`, or instantiate mvars
  let rawProj := Expr.proj ``Prod 0 (mkApp4 (mkConst ``Prod.mk [0, 0])
    (mkConst ``Nat) (mkConst ``Nat) (mkNatLit 0) (mkNatLit 1))
  let betaRedex := mkApp (mkLambda `y .default (mkConst ``Nat) (← `(expr| fTag 9))) (mkNatLit 1)
  let mv ← mkFreshExprMVar (some (mkConst ``Nat))
  logInfo m!"{[← structMatch rawProj, ← structMatch betaRedex, ← structMatch mv]}"

private abbrev nonStructTwo : Nat := Nat.succ (Nat.succ Nat.zero)
private abbrev nonStructFun : Nat → Nat := fun x => x + 1
private abbrev nonStructArrow : Type := Nat → Bool

run_meta do
  let rawProj := Expr.proj ``Prod 0 (mkApp4 (mkConst ``Prod.mk [0, 0])
    (mkConst ``Nat) (mkConst ``Nat) (mkNatLit 1) (mkNatLit 2))
  let corpus : Array Expr := #[
    ← `(expr| 1 + 1), ← `(expr| 1 + 2), mkApp (mkConst ``Nat.succ) (mkNatLit 0),
    mkForall `a .default (mkConst ``Nat) (mkConst ``Bool), ← `(expr| (0, 1).1),
    mkApp (mkConst ``fTag) (mkNatLit 1), ← `(expr| pCarry trivial 5), ← `(expr| gTag 0),
    mkLambda `y .default (mkConst ``Nat) (mkNatLit 9),
    mkApp (mkLambda `y .default (mkConst ``Nat) (← `(expr| fTag 9))) (mkNatLit 1),
    mkNatLit 2, mkRawNatLit 2, mkNatLit 0, mkRawNatLit 0, mkConst ``nonStructTwo,
    mkConst ``nonStructFun, mkSort 1, mkConst ``nonStructArrow,
    mkLet `u (mkSort 2) (mkSort 1) (mkBVar 0), rawProj
  ]
  for item in corpus do
    assertEq "structMatch" (← structMatch item) (← structOracle item)

end Structural

section StructuralInst

private abbrev MyNat := Nat
@[instance_reducible] private def OddNat := Nat
private abbrev MyFin5 := Fin 5
set_option warn.classDefReducibility false in
private def weirdAdd : HAdd Nat Nat Nat := ⟨fun a b => a - b⟩

private def structInstMatch (e : Expr) : MetaM Nat :=
  match (modulo := +inst) e with
  | `((?a : Nat) + ?b) => let _ := (a, b); return 1
  | `((?a : Nat) - ?b) => let _ := (a, b); return 2
  | `((?a : Nat) * ?b) => let _ := (a, b); return 3
  | _                   => return 0

private def structInstFinLt? (e : Expr) : MetaM (Option Expr) :=
  match (modulo := +inst) e with
  | `((?a : Fin ?n) < ?b) => let _ := (a, b); return some n
  | `((?a : Nat) < ?b)    => let _ := (a, b); return some (mkNatLit 0)
  | _                      => return none

/-- info: 1 -/
#guard_msgs in
run_meta do
  -- `.structural +inst` with alternative `HAdd` instance expression (let-bound instance)
  let instTy := mkApp3 (mkConst ``HAdd [0, 0, 0])
    (mkConst ``Nat) (mkConst ``Nat) (mkConst ``Nat)
  let haddInst ← synthInstance instTy
  let haddLetInst := mkAppN (mkConst ``HAdd.hAdd [0, 0, 0])
    #[mkConst ``Nat, mkConst ``Nat, mkConst ``Nat,
      mkLet `inst instTy haddInst (mkBVar 0), mkNatLit 1, mkNatLit 1]
  logInfo m!"{← structInstMatch haddLetInst}"

#guard_msgs in
run_meta do
  -- OutParam alias `@[instance_reducible] def OddNat := Nat`: `(42 - n : OddNat)`
  withLocalDeclD `n (mkConst ``Nat) fun n => do
    let oddSub := mkApp6 (mkConst ``HSub.hSub [0, 0, 0])
      (mkConst ``Nat) (mkConst ``Nat) (mkConst ``OddNat)
      (mkApp2 (mkConst ``instHSub [0]) (mkConst ``Nat) (mkConst ``instSubNat))
      (mkNatLit 42) n
    assertEq "OddNat HSub" (← structInstMatch oddSub) 2
  -- Carrier alias `abbrev MyNat := Nat`: `(x : MyNat) + y`
  withLocalDeclD `x (mkConst ``MyNat) fun x =>
  withLocalDeclD `y (mkConst ``MyNat) fun y => do
    let myAdd := mkApp6 (mkConst ``HAdd.hAdd [0, 0, 0])
      (mkConst ``MyNat) (mkConst ``MyNat) (mkConst ``MyNat)
      (mkApp2 (mkConst ``instHAdd [0]) (mkConst ``MyNat) (mkConst ``instAddNat)) x y
    assertEq "MyNat HAdd" (← structInstMatch myAdd) 1
  -- Type alias with pattern variable `abbrev MyFin5 := Fin 5`: captures `n == 5`
  withLocalDeclD `x (mkConst ``MyFin5) fun x =>
  withLocalDeclD `y (mkConst ``MyFin5) fun y => do
    let finLt := mkApp4 (mkConst ``LT.lt [0])
      (mkConst ``MyFin5) (mkApp (mkConst ``instLTFin) (mkNatLit 5)) x y
    assertEq "MyFin5 LT" (← structInstFinLt? finLt) (some (mkNatLit 5))
  -- Non-`instance_reducible` custom instance must NOT match standard `Nat` `+`
  let badAdd := mkApp6 (mkConst ``HAdd.hAdd [0, 0, 0])
    (mkConst ``Nat) (mkConst ``Nat) (mkConst ``Nat)
    (mkConst ``weirdAdd) (mkNatLit 1) (mkNatLit 2)
  assertEq "weirdAdd negative" (← structInstMatch badAdd) 0

end StructuralInst

/-! ## 2. `.reducible` soundness (literals, offsets, aliases, lambdas, sorts, `[items]`) -/

namespace Reducible

abbrev redTwo : Nat := Nat.succ (Nat.succ Nat.zero)
abbrev redFun : Nat → Nat := fun x => x + 1
abbrev redArrow : Type := Nat → Bool
opaque fTag : Nat → Nat

private def reducibleMatch (e : Expr) : MetaM Nat :=
  match e with
  | `(expr/reducible| $(mkNatLit 2))  => return 1
  | `(expr/reducible| Nat.succ ?n)    => let _ := n; return 2
  | `(expr/reducible| Nat.zero)       => return 3
  | `(expr/reducible| fun x => x + ?a) => let _ := a; return 4
  | `(expr/reducible| Type)           => return 5
  | `(expr/reducible| ?α → ?β)        => let _ := (α, β); return 6
  | `(expr/reducible| fTag ?x)        => let _ := x; return 7
  | _                                 => return 0

private def reducibleOracle (e : Expr) : MetaM Nat := do
  match e with | `(expr/reducible| $(mkNatLit 2)) => return 1 | _ => pure ()
  match e with | `(expr/reducible| Nat.succ ?n) => let _ := n; return 2 | _ => pure ()
  match e with | `(expr/reducible| Nat.zero) => return 3 | _ => pure ()
  match e with | `(expr/reducible| fun x => x + ?a) => let _ := a; return 4 | _ => pure ()
  match e with | `(expr/reducible| Type) => return 5 | _ => pure ()
  match e with | `(expr/reducible| ?α → ?β) => let _ := (α, β); return 6 | _ => pure ()
  match e with | `(expr/reducible| fTag ?x) => let _ := x; return 7 | _ => pure ()
  return 0

/-- info: [1, 1, 2, 3, 4, 5, 6, 7] -/
#guard_msgs in
run_meta do
  -- `mkNatLit 2` pattern vs `Nat.succ (Nat.succ Nat.zero)` & `redTwo`
  let twoUnary :=
    mkApp (mkConst ``Nat.succ) (mkApp (mkConst ``Nat.succ) (mkConst ``Nat.zero))
  let sortLet := mkLet `u (mkSort 2) (mkSort 1) (mkBVar 0)
  let letF := mkLet `y (mkConst ``Nat) (mkNatLit 3) (mkApp (mkConst ``fTag) (mkBVar 0))
  let results : List Nat := [
    ← reducibleMatch twoUnary,
    ← reducibleMatch (mkConst ``redTwo),
    ← reducibleMatch (mkNatLit 5),
    ← reducibleMatch (mkNatLit 0),
    ← reducibleMatch (mkConst ``redFun),
    ← reducibleMatch sortLet,
    ← reducibleMatch (mkConst ``redArrow),
    ← reducibleMatch letF
  ]
  logInfo m!"{results}"

run_meta do
  let rawProj := Expr.proj ``Prod 0 (mkApp4 (mkConst ``Prod.mk [0, 0])
    (mkConst ``Nat) (mkConst ``Nat) (mkNatLit 1) (mkNatLit 2))
  let corpus : Array Expr := #[
    ← `(expr| 1 + 1), ← `(expr| 1 + 2), mkApp (mkConst ``Nat.succ) (mkNatLit 0),
    mkForall `a .default (mkConst ``Nat) (mkConst ``Bool), ← `(expr| (0, 1).1),
    mkApp (mkConst ``fTag) (mkNatLit 1),
    mkLambda `y .default (mkConst ``Nat) (mkNatLit 9),
    mkApp (mkLambda `y .default (mkConst ``Nat) (← `(expr| fTag 9))) (mkNatLit 1),
    mkNatLit 2, mkRawNatLit 2, mkNatLit 0, mkRawNatLit 0, mkConst ``redTwo, mkConst ``redFun,
    mkSort 1, mkConst ``redArrow, mkLet `u (mkSort 2) (mkSort 1) (mkBVar 0), rawProj
  ]
  for item in corpus do
    assertEq "reducibleMatch" (← reducibleMatch item) (← reducibleOracle item)

end Reducible

namespace ReducibleItems

def customUnf (x : Nat) : Nat := x + 10
opaque fTag : Nat → Nat

private def reducibleItemsMatch (e : Expr) : MetaM Nat :=
  match e with
  | `(expr/reducible [+customUnf]| ?x + 10) => let _ := x; return 1
  | `(expr/reducible [+customUnf]| fTag ?x) => let _ := x; return 2
  | _                                       => return 0

/-- info: (1, 2) -/
#guard_msgs in
run_meta do
  let cApp := mkApp (mkConst ``customUnf) (mkNatLit 4)
  let fApp := mkApp (mkConst ``fTag) (mkNatLit 4)
  logInfo m!"({← reducibleItemsMatch cApp}, {← reducibleItemsMatch fApp})"

end ReducibleItems

/-! ## 3. `/sym` shared-relation indexing soundness -/

namespace Sym

opaque fTag : Nat → Nat

private def symIndexedMatch [Monad m] [Meta.MonadSym m] (e : Expr) : m Nat :=
  match e with
  | `(expr/sym| fTag 5)        => return 1
  | `(expr/sym| Nat.succ ?n)   => let _ := n; return 2
  | `(expr/sym| ?x + $x)       => let _ := x; return 3
  | `(expr/sym| ?x + 1)        => let _ := x; return 4
  | `(expr/sym| fun x => x + ?a) => let _ := a; return 5
  | `(expr/sym| Type)          => return 6
  | _                          => return 0

private def symOracle (e : Expr) : SymM Nat := do
  match e with | `(expr/sym| fTag 5) => return 1 | _ => pure ()
  match e with | `(expr/sym| Nat.succ ?n) => let _ := n; return 2 | _ => pure ()
  match e with | `(expr/sym| ?x + $x) => let _ := x; return 3 | _ => pure ()
  match e with | `(expr/sym| ?x + 1) => let _ := x; return 4 | _ => pure ()
  match e with | `(expr/sym| fun x => x + ?a) => let _ := a; return 5 | _ => pure ()
  match e with | `(expr/sym| Type) => return 6 | _ => pure ()
  return 0

/-- info: [1, 2, 5, 6] -/
#guard_msgs in
run_meta SymM.run do
  -- `fTag (1 + 4)` must NOT be missed by subterm `5` key in `Sym.DiscrTree`!
  let fOnePlusFour ← `(expr/sym| fTag ((1 : Nat) + 4))
  let lamPlus ← `(expr/sym| fun x => x + 7)
  let results : List Nat := [
    ← symIndexedMatch fOnePlusFour,
    ← symIndexedMatch (mkNatLit 5),
    ← symIndexedMatch lamPlus,
    ← symIndexedMatch (mkSort 1)
  ]
  logInfo m!"{results}"

/-- info: [2, 3, 2, 3] -/
#guard_msgs in
run_meta SymM.run do
  -- `let x := 9; 9 + x` is an offset term (`? + 9`), so `Nat.succ ?n` matches first in order
  let letBodyOffset ← withLocalDeclD `v (mkConst ``Nat) fun v => do
    return (← `(expr/sym| 9 + $v)).abstract #[v]
  let letSumOffset := mkLet `x (mkConst ``Nat) (mkNatLit 9) letBodyOffset
  -- Without numeric RHS (`fTag 9 + fTag 9`), `Nat.succ ?n` skips to nonlinear `?x + $x`!
  let tag9 ← `(expr/sym| fTag 9)
  let letBodyTag ← withLocalDeclD `v (mkConst ``Nat) fun v => do
    return (← `(expr/sym| $tag9 + $v)).abstract #[v]
  let letSumTag := mkLet `x (mkConst ``Nat) tag9 letBodyTag
  let rZ ← withLetDecl `z (mkConst ``Nat) (mkNatLit 4) fun zVar => do
    symIndexedMatch (← `(expr/sym| Nat.succ $zVar))
  let tag4 ← `(expr/sym| fTag 4)
  let rW ← withLetDecl `w (mkConst ``Nat) tag4 fun wVar => do
    symIndexedMatch (← `(expr/sym| $wVar + $tag4))
  let results : List Nat := [
    ← symIndexedMatch letSumOffset,
    ← symIndexedMatch letSumTag,
    rZ,
    rW
  ]
  logInfo m!"{results}"

run_meta SymM.run do
  let symCorpus : Array Expr := #[
    ← `(expr/sym| fTag ((1 : Nat) + 4)), mkNatLit 5, mkRawNatLit 5,
    ← `(expr/sym| (fTag 9) + (fTag 9)), ← `(expr/sym| (fTag 9) + 1),
    ← `(expr/sym| fun x => x + 7), mkSort 1, mkNatLit 0,
    mkLet `x (mkConst ``Nat) (mkNatLit 9) (← `(expr/sym| 9 + 9))
  ]
  for item in symCorpus do
    assertEq "symIndexedMatch" (← symIndexedMatch item) (← symOracle item)

end Sym

/-! ## 4. Source order, dedup, single side-effect, & non-indexed boundaries -/

section PinOrderAndDedup

/-- info: (1, 1) -/
#guard_msgs in
run_meta do
  let countRef ← IO.mkRef 0
  let p ← `(expr| 10)
  let dispatchWithPin (e : Expr) : MetaM Nat :=
    match e with
    | `($p + ?y) => do countRef.modify (· + 1); let _ := y; return 1
    | `(?a + ?b) => do countRef.modify (· + 1); let _ := (a, b); return 2
    | `(_ + _)   => do countRef.modify (· + 1); return 3
    | _                => return 0
  let pinRes ← dispatchWithPin (← `(expr| 10 + 20))
  logInfo m!"({pinRes}, {← countRef.get})"

end PinOrderAndDedup

section MixedColumns

/-- info: (99, 20) -/
#guard_msgs in
run_meta do
  -- Prefix constructor alt followed by >= 2 simple expr alts on col 1
  let mixedCols (flag : Nat) (e : Expr) : MetaM Nat :=
    match flag, e with
    | 0, _                => return 99
    | _, `(?a + ?b) => let _ := (a, b); return 10
    | _, `(?a * ?b) => let _ := (a, b); return 20
    | _, _                => return 0
  let mix0 ← mixedCols 0 (← `(expr| 1 + 2))
  let mix1 ← mixedCols 1 (← `(expr| 1 * 2))
  logInfo m!"({mix0}, {mix1})"

end MixedColumns

section NonIndexedFallback

/-- info: (1, 2) -/
#guard_msgs in
run_meta do
  -- Disabled flags / `/instances` / `/defeq` / local `$d` fall back cleanly to linear match
  let withNegFlag (e : Expr) : MetaM Nat :=
    match e with
    | `(expr/reducible -beta| ?a + ?b) => let _ := (a, b); return 1
    | `(expr/reducible -beta| ?a * ?b) => let _ := (a, b); return 2
    | _                                => return 0
  let withInstances (e : Expr) : MetaM Nat :=
    match e with
    | `(expr/instances| ?a + ?b) => let _ := (a, b); return 1
    | `(expr/instances| ?a * ?b) => let _ := (a, b); return 2
    | _                          => return 0
  let negRes ← withNegFlag (← `(expr| 1 + 2))
  let instRes ← withInstances (← `(expr| 1 * 2))
  logInfo m!"({negRes}, {instRes})"

end NonIndexedFallback

/-! ## 5. 50-branch `DiscrTree` scale sanity -/

namespace Scale

opaque k0 : Nat → Nat
opaque k1 : Nat → Nat
opaque k2 : Nat → Nat
opaque k3 : Nat → Nat
opaque k4 : Nat → Nat
opaque k5 : Nat → Nat
opaque k6 : Nat → Nat
opaque k7 : Nat → Nat
opaque k8 : Nat → Nat
opaque k9 : Nat → Nat

private def bigDispatch50 (e : Expr) : MetaM Nat :=
  match e with
  | `(k0 (k0 ?x)) => let _ := x; return 1
  | `(k0 (k1 ?x)) => let _ := x; return 2
  | `(k0 (k2 ?x)) => let _ := x; return 3
  | `(k0 (k3 ?x)) => let _ := x; return 4
  | `(k0 (k4 ?x)) => let _ := x; return 5
  | `(k1 (k0 ?x)) => let _ := x; return 6
  | `(k1 (k1 ?x)) => let _ := x; return 7
  | `(k1 (k2 ?x)) => let _ := x; return 8
  | `(k1 (k3 ?x)) => let _ := x; return 9
  | `(k1 (k4 ?x)) => let _ := x; return 10
  | `(k2 (k0 ?x)) => let _ := x; return 11
  | `(k2 (k1 ?x)) => let _ := x; return 12
  | `(k2 (k2 ?x)) => let _ := x; return 13
  | `(k2 (k3 ?x)) => let _ := x; return 14
  | `(k2 (k4 ?x)) => let _ := x; return 15
  | `(k3 (k0 ?x)) => let _ := x; return 16
  | `(k3 (k1 ?x)) => let _ := x; return 17
  | `(k3 (k2 ?x)) => let _ := x; return 18
  | `(k3 (k3 ?x)) => let _ := x; return 19
  | `(k3 (k4 ?x)) => let _ := x; return 20
  | `(k4 (k0 ?x)) => let _ := x; return 21
  | `(k4 (k1 ?x)) => let _ := x; return 22
  | `(k4 (k2 ?x)) => let _ := x; return 23
  | `(k4 (k3 ?x)) => let _ := x; return 24
  | `(k4 (k4 ?x)) => let _ := x; return 25
  | `(k5 (k0 ?x)) => let _ := x; return 26
  | `(k5 (k1 ?x)) => let _ := x; return 27
  | `(k5 (k2 ?x)) => let _ := x; return 28
  | `(k5 (k3 ?x)) => let _ := x; return 29
  | `(k5 (k4 ?x)) => let _ := x; return 30
  | `(k6 (k0 ?x)) => let _ := x; return 31
  | `(k6 (k1 ?x)) => let _ := x; return 32
  | `(k6 (k2 ?x)) => let _ := x; return 33
  | `(k6 (k3 ?x)) => let _ := x; return 34
  | `(k6 (k4 ?x)) => let _ := x; return 35
  | `(k7 (k0 ?x)) => let _ := x; return 36
  | `(k7 (k1 ?x)) => let _ := x; return 37
  | `(k7 (k2 ?x)) => let _ := x; return 38
  | `(k7 (k3 ?x)) => let _ := x; return 39
  | `(k7 (k4 ?x)) => let _ := x; return 40
  | `(k8 (k0 ?x)) => let _ := x; return 41
  | `(k8 (k1 ?x)) => let _ := x; return 42
  | `(k8 (k2 ?x)) => let _ := x; return 43
  | `(k8 (k3 ?x)) => let _ := x; return 44
  | `(k8 (k4 ?x)) => let _ := x; return 45
  | `(k9 (k0 ?x)) => let _ := x; return 46
  | `(k9 (k1 ?x)) => let _ := x; return 47
  | `(k9 (k2 ?x)) => let _ := x; return 48
  | `(k9 (k3 ?x)) => let _ := x; return 49
  | `(k9 (k4 ?x)) => let _ := x; return 50
  | _                   => return 0

/-- info: (50, 0) -/
#guard_msgs in
run_meta do
  let probe := mkApp (mkConst ``k9) (mkApp (mkConst ``k4) (mkNatLit 7))
  let mut last := 0
  for _ in *...200 do
    last ← bigDispatch50 probe
  let miss := mkApp (mkConst ``k9) (mkApp (mkConst ``k8) (mkNatLit 7))
  logInfo m!"({last}, {← bigDispatch50 miss})"

/-! ## 6. Lazy `O(|pattern|)` deep-spine unassigned-mvar scaling in indexed dispatch -/

namespace DeepSpine

opaque fTag : Nat → Nat

private def deepSpineMatch (e : Expr) : MetaM (Option Expr) :=
  match e with
  | `(k0 ?x) => return some x
  | `(k1 ?x) => return some x
  | `(k2 ?x) => return some x
  | _              => return none

/-- info: (true, 0, true, 50, true) -/
#guard_msgs in
run_meta do
  let mv ← mkFreshExprMVar (some (mkConst ``Nat))
  let mut deep := mv
  for _ in *...2000 do
    deep := mkApp (mkConst ``fTag) deep
  -- 1. Match shallowly over deep spine with unassigned mvar without instantiating it
  let hit ← deepSpineMatch (mkApp (mkConst ``k0) deep)
  let hitOk := hit.any (· == deep)
  -- 2. Indexed miss over 50-branch tree must skip cleanly in `O(|pattern|)`
  let missExpr := mkApp (mkConst ``k9) (mkApp (mkConst ``k8) deep)
  let mut missRes := 0
  for _ in *...200 do
    missRes ← bigDispatch50 missExpr
  let stillUnassigned := !(← mv.mvarId!.isAssigned)
  -- 3. Assigned head mvar resolves lazily at inspected head without eager deep traversal
  let headRootMV ← mkFreshExprMVar (some (mkConst ``Nat))
  headRootMV.mvarId!.assign (mkApp (mkConst ``k9) (mkApp (mkConst ``k4) (mkNatLit 7)))
  let resolvedHeadRes ← bigDispatch50 headRootMV
  -- 4. Unassigned mvar at head returns catch-all without failing
  let freeHeadMV ← mkFreshExprMVar (some (mkConst ``Nat))
  let freeRes ← deepSpineMatch (mkApp (mkConst ``k3) deep)
  let freeHeadRes ← bigDispatch50 freeHeadMV
  let okFree := freeRes.isNone && freeHeadRes == 0
  logInfo m!"({hitOk}, {missRes}, {stillUnassigned}, {resolvedHeadRes}, {okFree})"

end DeepSpine

end Scale

/-! ## 7. Programmatic `.proj` `DiscrTree.Key.proj` indexing -/

section ProgrammaticProj

/-- info: (1, 2, 0) -/
#guard_msgs in
run_meta do
  let patProj0 : ExprPattern :=
    { levelParams := []
      lam := mkLambda `p .default (mkConst ``Expr) (Expr.proj ``Prod 0 (mkBVar 0))
      numVars := 1, namedIdx := #[0], firstOrder := #[true] }
  let patProj1 : ExprPattern :=
    { levelParams := []
      lam := mkLambda `p .default (mkConst ``Expr) (Expr.proj ``Prod 1 (mkBVar 0))
      numVars := 1, namedIdx := #[0], firstOrder := #[true] }
  let relStruct : ExprMatchRel := { engine := .structural }
  let resolvedStruct ← relStruct.resolve
  let runProjIdx (e : Expr) : MetaM Nat :=
    ExprPattern.matchIndexedOrElse `ExprQuotIndexTest.projSite #[patProj0, patProj1]
      relStruct e
      #[fun scrut next => ExprPattern.matchResolvedOrElse patProj0 resolvedStruct #[] #[] scrut
          (fun _ => return 1) next,
        fun scrut next => ExprPattern.matchResolvedOrElse patProj1 resolvedStruct #[] #[] scrut
          (fun _ => return 2) next]
      (fun _ => return 0)
  let p0 := Expr.proj ``Prod 0 (mkApp4 (mkConst ``Prod.mk [0, 0])
    (mkConst ``Nat) (mkConst ``Nat) (mkNatLit 1) (mkNatLit 2))
  let p1 := Expr.proj ``Prod 1 (mkApp4 (mkConst ``Prod.mk [0, 0])
    (mkConst ``Nat) (mkConst ``Nat) (mkNatLit 1) (mkNatLit 2))
  let r0 ← runProjIdx p0
  let r1 ← runProjIdx p1
  let rMiss ← runProjIdx (mkNatLit 0)
  logInfo m!"({r0}, {r1}, {rMiss})"

end ProgrammaticProj

namespace InlineStructuralFastPath

private def matchSingleMulMod (e : Expr) : MetaM (Option (Expr × Expr × Expr)) :=
  match e with
  | `(expr/structural| ((?a : Nat) * ?b) % ?mE) => return some (a, b, mE)
  | _ => return none

private def matchMultiArith (e : Expr) : MetaM String :=
  match (modulo := structural) e with
  | `((?a : Nat) + _) => return s!"nat_add:{!a.isMData}"
  | `((?a : Nat) - _) => return s!"nat_sub:{!a.isMData}"
  | `(((_ : Nat) * _) % _) => return "nat_mul_mod"
  | `((?a : Nat) * _) => return s!"nat_mul:{!a.isMData}"
  | `((@OfNat.ofNat _ _ _ : Nat)) => return "nat_ofNat"
  | `((?a : Int) + _) => return s!"int_add:{!a.isMData}"
  | `((?a : Int) * _) => return s!"int_mul:{!a.isMData}"
  | `((@OfNat.ofNat _ _ _ : Int)) => return "int_ofNat"
  | _ => return "miss"

private def matchPolyEq (e : Expr) : MetaM String :=
  match (modulo := structural) e with
  | `((@Eq.{2} Type _ _)) => return "eq_type0"
  | `((?lhs = ?rhs)) => return s!"eq:{!lhs.isMData}:{!rhs.isMData}"
  | _ => return "miss"

private inductive RawPair where
  | mk (fst snd : Nat) : RawPair

private class SameFin (x : Fin 5) where
  u : Unit := ()

private instance instSameFin (x : Fin 5) : SameFin x := {}

private def tagFin (x : Fin 5) [SameFin x] : Nat := 0

private theorem pf25a : 2 < 5 := by decide
private theorem pf25b : 2 < 5 := by decide

private def matchSingleTagFin (e : Expr) : MetaM (Option Expr) :=
  match e with
  | `(expr/structural| tagFin ?x) => return some x
  | _ => return none

private def matchIndexedTagFin (e : Expr) : MetaM String :=
  match (modulo := structural) e with
  | `(expr| tagFin _) => return "tagFin"
  | `(expr| Nat.succ _) => return "succ"
  | _ => return "miss"

private def matchSingleIntOfNat (e : Expr) : MetaM Bool :=
  match e with
  | `(expr/structural| (@OfNat.ofNat _ _ _ : Int)) => return true
  | _ => return false

private def matchMixedNonConst (e : Expr) : MetaM String :=
  match (modulo := structural) e with
  | `(Prop) => return "prop"
  | `((?p : RawPair).1) => return s!"fst:{!p.isMData}"
  | `((?a : Nat) + _) => return s!"nat_add:{!a.isMData}"
  | _ => return "miss"

private def mkTypedOfNat (ty : Expr) (n : Nat) : MetaM Expr :=
  mkAppOptM ``OfNat.ofNat #[some ty, some (mkRawNatLit n), none]

private def runAllInlineChecks : MetaM Unit := do
  let natTy := mkConst ``Nat
  let intTy := mkConst ``Int
  let n1 ← mkTypedOfNat natTy 1
  let n2 ← mkTypedOfNat natTy 2
  let n3 ← mkTypedOfNat natTy 3
  let natMul ← mkAppM ``HMul.hMul #[n1, n2]
  let natMulMod ← mkAppM ``HMod.hMod #[natMul, n3]
  assert! (← matchSingleMulMod natMulMod) == some (n1, n2, n3)
  assert! (← matchMultiArith natMulMod) == "nat_mul_mod"
  let natAdd ← mkAppM ``HAdd.hAdd #[n1, n2]
  let natSub ← mkAppM ``HSub.hSub #[n1, n2]
  assert! (← matchMultiArith natAdd) == "nat_add:true"
  assert! (← matchMultiArith natSub) == "nat_sub:true"
  assert! (← matchMultiArith natMul) == "nat_mul:true"
  assert! (← matchMultiArith n1) == "nat_ofNat"
  let i1 ← mkTypedOfNat intTy 1
  let i2 ← mkTypedOfNat intTy 2
  assert! (← matchMultiArith (← mkAppM ``HAdd.hAdd #[i1, i2])) == "int_add:true"
  assert! (← matchMultiArith (← mkAppM ``HMul.hMul #[i1, i2])) == "int_mul:true"
  assert! (← matchMultiArith i1) == "int_ofNat"
  let eqProof := mkApp3 (mkConst ``Eq [0]) (mkConst ``True) (mkConst ``True.intro)
    (mkConst ``True.intro)
  let eqProp := mkApp3 (mkConst ``Eq [1]) (mkSort 0) (mkConst ``True) (mkConst ``False)
  let eqType0 := mkApp3 (mkConst ``Eq [2]) (mkSort 1) natTy intTy
  let eqType0Max := mkApp3 (mkConst ``Eq [Level.max 2 2]) (mkSort 1) natTy intTy
  let eqType1 := mkApp3 (mkConst ``Eq [3]) (mkSort 2) (mkSort 1) (mkSort 1)
  assert! (← matchPolyEq eqProof) == "eq:true:true"
  assert! (← matchPolyEq eqProp) == "eq:true:true"
  assert! (← matchPolyEq eqType0) == "eq_type0"
  assert! (← matchPolyEq eqType0Max) == "eq_type0"
  assert! (← matchPolyEq eqType1) == "eq:true:true"
  -- Mixed non-const heads
  assert! (← matchMixedNonConst (mkSort 0)) == "prop"
  let pairVal := mkApp2 (mkConst ``RawPair.mk) n1 n2
  assert! (← matchMixedNonConst (Expr.proj ``RawPair 0 pairVal)) == "fst:true"
  assert! (← matchMixedNonConst natAdd) == "nat_add:true"
  -- `.mdata` on root, intermediate spine, and captured argument
  let mdataArg := Expr.mdata {} n1
  let mdataSpine :=
    Expr.mdata {} (mkApp (Expr.mdata {} (mkApp (natAdd.appFn!.appFn!) mdataArg)) n2)
  assert! (← matchMultiArith mdataSpine) == "nat_add:true"
  let singleMData ← matchSingleMulMod
    (Expr.mdata {} (← mkAppM ``HMod.hMod #[← mkAppM ``HMul.hMul #[mdataArg, n2], n3]))
  assert! singleMData == some (n1, n2, n3)
  -- Assigned root and nested metavariables fall back cleanly to the slow engine
  let mRoot ← mkFreshExprMVar natTy
  mRoot.mvarId!.assign natAdd
  assert! (← matchMultiArith mRoot) == "nat_add:true"
  let mNested ← mkFreshExprMVar natTy
  mNested.mvarId!.assign n1
  let nestedMulMod ← mkAppM ``HMod.hMod #[← mkAppM ``HMul.hMul #[mNested, n2], n3]
  assert! (← matchMultiArith nestedMulMod) == "nat_mul_mod"
  assert! (← matchSingleMulMod nestedMulMod).isSome
  -- Repeated `.bvar`s (`OfNat.ofNat`): `.mdata`, mismatching args, and proof-irrelevance fallback
  let i3 := mkRawNatLit 3
  let i4 := mkRawNatLit 4
  let inst3 ← mkAppOptM ``instOfNat #[some i3]
  let inst4 ← mkAppOptM ``instOfNat #[some i4]
  let intOfNatMData := mkApp3 (mkConst ``OfNat.ofNat [0]) intTy (Expr.mdata {} i3) inst3
  let intOfNatMismatch := mkApp3 (mkConst ``OfNat.ofNat [0]) intTy i3 inst4
  assert! (← matchMultiArith intOfNatMData) == "int_ofNat"
  assert! (← matchSingleIntOfNat intOfNatMData)
  assert! (← matchMultiArith intOfNatMismatch) == "miss"
  assert! !(← matchSingleIntOfNat intOfNatMismatch)
  let mkFin2 (h : Name) : Expr :=
    mkApp3 (mkConst ``Fin.mk) (mkNatLit 5) (mkNatLit 2) (mkConst h)
  let finA := mkFin2 ``pf25a
  let finB := mkFin2 ``pf25b
  let sameFinInst := mkApp (mkConst ``instSameFin) finB
  let tagExpr := mkApp2 (mkConst ``tagFin) finA sameFinInst
  assert! (← matchSingleTagFin tagExpr) == some finA
  assert! (← matchIndexedTagFin tagExpr) == "tagFin"

/--
info: ok
---
trace: [Meta.Match.expr] [indexed structural] trying candidates [0] of 8 for:
      1 + 2
[Meta.Match.expr] [structural] matched:
      ?a + _
    against:
      1 + 2
[Meta.Match.expr] [structural] failed:
      ?a * ?b % ?mE
    against:
      1 + 2
    first mismatch:
      @HMod.hMod
    against:
      @HAdd.hAdd
    (constant mismatch)
-/
#guard_msgs in
run_meta do
  runAllInlineChecks
  withOptions (fun o => o.setBool `exprQuot.debug.checkIndex true) runAllInlineChecks
  let natTy := mkConst ``Nat
  let n1 ← mkTypedOfNat natTy 1
  let natAdd ← mkAppM ``HAdd.hAdd #[n1, ← mkTypedOfNat natTy 2]
  let traceMsgs ← withOptions (fun o => o.setBool `trace.Meta.Match.expr true) do
    let before := (← getTraces).size
    discard <| matchMultiArith natAdd
    discard <| matchSingleMulMod natAdd
    return (← getTraces).size - before
  assert! traceMsgs > 0
  logInfo "ok"

end InlineStructuralFastPath

end ExprQuotIndexTest
