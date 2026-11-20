import Lean

/-!
Regression tests for all PR #1 design decisions from the `/grill-me` review (`Q1`–`Q9`).
Every test section documents the old behavior vs. new behavior explicitly.
-/

namespace ExprQuotGrillMeRegressions

open Lean Meta Elab Tactic
open Lean.Meta.Sym (SymM)

private def assertTrue (label : String) (ok : Bool) : MetaM Unit := do
  unless ok do
    throwError "{label}: assertion failed"

private def assertEq [BEq α] [Repr α] (label : String) (actual expected : α) :
    MetaM Unit := do
  unless actual == expected do
    throwError "{label}: got {repr actual}, expected {repr expected}"

/-! ## A1: Wildcard `_` under pattern binders -/

section A1WildcardUnderBinders

-- Old behavior: `structAssign` rejected ANY pattern variable whose value mentioned a pattern
-- binder `fv` not in `args`, even non-captured wildcards `_` inside `(expr| ∀ x, ?P x → _)`.
-- New behavior: non-captured holes (`captureVars[varIdx] == false`) allow pattern-bound `fvar`s
-- as long as every `fvar` in `args` is accounted for, while real dependent binders under `_`
-- still require `∀ (h : ?P x), _`.

private def matchImpBody (e : Expr) : MetaM (Option (Expr × Bool)) :=
  match e with
  | `(expr| ∀ x, ?P x → _)     => return some (P, false)
  | `(expr| ∀ (x : Nat), _)    => return some (mkConst ``Nat, true)
  | _                          => return none

private def matchAllUnderWildcards (e : Expr) : MetaM Bool := do
  let r1 ← match e with
    | `(expr| ∀ x, ?P x → _ = _) => let _ := P; pure true
    | _ => pure false
  let r2 ← match e with
    | `(expr| ∀ x : Nat, x > 0 → ∃ y : Nat, _) => pure true
    | _ => pure false
  return r1 || r2

#guard_msgs in
run_meta do
  let evenPred ← withLocalDeclD `n (mkConst ``Nat) fun n => do
    mkLambdaFVars #[n] (← mkEq n (mkNatLit 0))
  -- `∀ x : Nat, Even x → x = 0`: wildcard `_` mentions `x`, should match arm 1 (`?P x → _`).
  let e1 ← withLocalDeclD `x (mkConst ``Nat) fun x => do
    let dom := (evenPred.beta #[x]).headBeta
    let body ← mkEq x (mkNatLit 0)
    mkForallFVars #[x] (mkForall `_ .default dom body)
  let some (p1, false) ← matchImpBody e1
    | throwError "A1: expected `?P x → _` to match when `_` mentions `x`"
  assertTrue "A1: captured P" (← isDefEq p1 evenPred)
  -- Wildcard `=` and `∃` mentions `x`.
  let eqRefl ← withLocalDeclD `x (mkConst ``Nat) fun x => do
    let dom := (evenPred.beta #[x]).headBeta
    let body ← mkEq x x
    mkForallFVars #[x] (mkForall `_ .default dom body)
  let exGoal ← withLocalDeclD `x (mkConst ``Nat) fun x => do
    let hGt ← mkAppM ``GT.gt #[x, mkNatLit 0]
    let exBody ← withLocalDeclD `y (mkConst ``Nat) fun y => do
      mkAppM ``Exists #[← mkLambdaFVars #[y] (← mkEq x y)]
    mkForallFVars #[x] (mkForall `_ .default hGt exBody)
  assertTrue "A1: wildcard `=` mentions `x`" (← matchAllUnderWildcards eqRefl)
  assertTrue "A1: existential wildcard mentions `x`" (← matchAllUnderWildcards exGoal)
  -- Dependent binder `(h : P x) → h = h` still MUST NOT match `∀ x, ?P x → _`.
  let pFun := mkLambda `n .default (mkConst ``Nat) (mkConst ``True)
  let qDep ← withLocalDeclD `x (mkConst ``Nat) fun x => do
    withLocalDeclD `h (mkApp pFun x) fun h => do
      mkForallFVars #[x, h] (← mkAppM ``Eq #[h, h])
  let rDep ← match qDep with
    | `(expr| ∀ x, ?P x → _) => let _ := P; pure true
    | _ => pure false
  assertTrue "A1: dependent `∀ x (h : P x), ...` still rejected by `→ _`" (!rDep)

end A1WildcardUnderBinders

/-! ## A2: Stop macro pre-expansion inside `exprQuot` -/

section A2NoMacroPreExpansion

-- Old behavior: `Match.expandMacrosInPatterns` and `PatternVar.expandPatternMacros` macro-
-- expanded `if c then a else b` inside `(expr| ...)` BEFORE `elabExprQuotPattern`, silently
-- rewriting it to `match ...` and dropping pattern vars (`?c`) or emitting broken checks.
-- New behavior: `Match.lean` and `PatternVar.lean` leave `Parser.Term.exprQuot` untouched so
-- `elabExprQuotPattern` elaborates the original term once in the proper pattern mode.

private def matchIfLt (e : Expr) : MetaM (Option (Expr × Expr)) :=
  match e with
  | `(expr| if (?x : Nat) < ?y then $x else $y) => return some (x, y)
  | _ => return none

private def matchIfInConstructs (e : Expr) : MetaM (Array Expr) := do
  let mut out := #[]
  -- 1. `if let`
  if let `(expr| if ?c then ?a else ?b) := e then
    out := out ++ #[c, a, b]
  -- 2. `fun |`
  let f : Expr → MetaM (Option Expr) := fun
    | `(expr| if ?c then _ else _) => pure (some c)
    | _ => pure none
  if let some c ← f e then
    out := out.push c
  -- 3. `match` multi-arm
  let c2 ← match e with
    | `(expr| Nat.succ ?n) => pure n
    | `(expr| if ?c then _ else _) => pure c
    | _ => pure (mkConst ``Nat.zero)
  out := out.push c2
  -- 4. `for case` over `subterms`
  for case (`(expr| if ?c then _ else _), _) in subterms e do
    out := out.push c
  return out

private def matchDite (e : Expr) : MetaM (Option (Expr × Expr × Expr)) :=
  match e with
  | `(expr| if h : ?c then ?a h else ?b) => return some (c, a, b)
  | _ => return none

#guard_msgs in
run_meta do
  withLocalDeclD `a (mkConst ``Nat) fun a =>
  withLocalDeclD `b (mkConst ``Nat) fun b => do
    let ltProp ← mkAppM ``LT.lt #[a, b]
    let ifGood ← mkAppM ``ite #[ltProp, a, b]
    let some (x, y) ← matchIfLt ifGood
      | throwError "A2: expected `if (?x : Nat) < ?y then $x else $y` to match"
    assertTrue "A2: x == a" (x == a)
    assertTrue "A2: y == b" (y == b)
    let ifWrong ← mkAppM ``ite #[mkConst ``True, a, b]
    assertTrue "A2: reject `if True then a else b`" (← matchIfLt ifWrong).isNone
    let cs ← matchIfInConstructs ifGood
    assertEq "A2: constructs captured count" cs.size 6
    let diteExpr ← withLocalDeclD `h ltProp fun h => do
      let thenLam ← mkLambdaFVars #[h] a
      let elseLam ← withLocalDeclD `hn (mkApp (mkConst ``Not) ltProp) fun hn =>
        mkLambdaFVars #[hn] b
      mkAppOptM ``dite #[none, some ltProp, none, some thenLam, some elseLam]
    let some (dc, da, db) ← matchDite diteExpr
      | throwError "A2: expected `dite` pattern `if h : ?c then ?a h else ?b` to match"
    assertTrue "A2: dite c" (dc == ltProp)
    assertTrue "A2: dite b" (db == b)
    assertTrue "A2: dite a is lam" da.isLambda

end A2NoMacroPreExpansion

/-! ## A5a: Reject `?g ..` / `$g ..` while keeping `List.cons ..` -/

section A5aEllipsisOnHoleHead

-- Old behavior: `(expr| ?g ..)` and `(expr| $g ..)` silently dropped `..` or produced broken
-- binder patterns/templates instead of rejecting variable heads with `..`.
-- New behavior: compile-time error on `?g ..` and `$g ..` in both patterns and templates,
-- while static constant-head `(expr| List.cons ..)` still elaborates.

/--
error: `..` after a pattern variable or pin is not supported; for a constant head write `f ..`
-/
#guard_msgs (substring := true) in
def badPatHoleEllipsis (e : Expr) : MetaM Bool :=
  match e with
  | `(expr| ?g ..) => let _ := g; return true
  | _              => return false

/--
error: `..` after a pattern variable or pin is not supported; for a constant head write `f ..`
-/
#guard_msgs (substring := true) in
def badPatPinEllipsis (g e : Expr) : MetaM Bool :=
  match e with
  | `(expr| $g ..) => return true
  | _              => return false

/--
error: `..` after a hole or splice is not supported in expr templates; pass explicit arguments
-/
#guard_msgs (substring := true) in
def badTmplSpliceEllipsis (g : Expr) : MetaM Expr :=
  `(expr| $g ..)

/--
error: `..` after a hole or splice is not supported in expr templates; pass explicit arguments
-/
#guard_msgs (substring := true) in
def badTmplHoleEllipsis : MetaM Expr :=
  `(expr| ?g ..)

#guard_msgs in
def okStaticConsEllipsis (e : Expr) : MetaM Bool :=
  match e with
  | `(expr| List.cons ..) => return true
  | _                     => return false

end A5aEllipsisOnHoleHead

/-! ## A5b: Reject non-unfoldable `[Const]` relation items -/

section A5bUnfoldableConstValidation

-- Old behavior: `[Subtype.property]`, `[Nat.succ]`, `[Nat.rec]` were accepted silently as no-ops
-- because non-definitions lack an unfolding equation.
-- New behavior: `ExprMatchRel.validateUnfoldableConst` rejects them at compile time.

/--
error: invalid relation item `Subtype.property`: `Subtype.property` is a theorem
-/
#guard_msgs (substring := true) in
def badItemThm (e : Expr) : MetaM Bool :=
  match e with
  | `(expr [Subtype.property]| Subtype.property ?s) => let _ := s; return true
  | _ => return false

/--
error: invalid relation item `Nat.succ`: `Nat.succ` is a constructor and has no unfolding
-/
#guard_msgs in
def badItemCtor (e : Expr) : MetaM Bool :=
  match e with
  | `(expr [Nat.succ]| Nat.succ ?n) => let _ := n; return true
  | _ => return false

/--
error: invalid relation item `Nat.rec`: `Nat.rec` is a recursor and has no unfolding
-/
#guard_msgs in
def badItemRec (e : Expr) : MetaM Bool :=
  match e with
  | `(expr [Nat.rec]| Nat.rec ..) => return true
  | _ => return false

end A5bUnfoldableConstValidation

/-! ## A3 (`Q2`): Exact indexed vs. linear `/reducible` agreement & cache invalidation -/

section A3ReducibleIndexAndCache

-- Old behavior:
-- 1. `withRelDefEqConfig` left `unificationHints := true` and `implicitBump := true`, causing
--    single-arm `/reducible` to match `¬ ?A` against `P → False` and `@Eq ImpNat ?x ?y` against
--    `@Eq Nat a b` where multi-arm `DiscrTree` returned empty.
-- 2. `DiscrTree.mkPath` lacked `.natVal` reduction via `Meta.reduceNat?`, root offset keys, and
--    star annotations on nested Nat literals/offsets, so `fTag 5` missed `fTag (2 + 3)`.
-- 3. `metaIndexCacheRef` keyed only on `(constGen, declLogSize)`, risking stale entries under
--    `local reducible` across `section ... end` rollbacks.
-- New behavior: exact single-arm vs. multi-arm agreement verified with `exprQuot.debug.checkIndex`,
-- and transitive reducibility dependency checks invalidate `metaIndexCacheRef` across `local`.

set_option exprQuot.debug.checkIndex true

opaque fTag : Nat → Nat

@[implicit_reducible] def ImpNatAlias : Type := Nat

private def matchNotOnlyRed (e : Expr) : MetaM Nat :=
  match e with
  | `(expr/reducible| ¬ ?A) => let _ := A; return 1
  | _ => return 0

private def matchNotMultiRed (e : Expr) : MetaM Nat :=
  match e with
  | `(expr/reducible| ¬ ?A)  => let _ := A; return 1
  | `(expr/reducible| True)  => return 2
  | _ => return 0

private def matchNotExplicitRed (e : Expr) : MetaM Nat :=
  match e with
  | `(expr/reducible [Not]| ¬ ?A) => let _ := A; return 1
  | `(expr/reducible [Not]| True) => return 2
  | _ => return 0

private def matchImpFalseRed (e : Expr) : MetaM Nat :=
  match e with
  | `(expr/reducible| (?p : Prop) → False) => let _ := p; return 1
  | `(expr/reducible| True)                => return 2
  | _ => return 0

private def matchMiscSingleRed (e : Expr) : MetaM Nat :=
  match e with
  | `(expr/reducible| ((?a : Nat), (?b : Nat))) => let _ := (a, b); return 1
  | _ => return 0

private def matchMiscMultiRed (e : Expr) : MetaM Nat :=
  match e with
  | `(expr/reducible| ((?a : Nat), (?b : Nat))) => let _ := (a, b); return 1
  | `(expr/reducible| ())                       => return 2
  | `(expr/reducible| Nat.succ ?n)              => let _ := n; return 3
  | `(expr/reducible| fTag 5)                   => return 4
  | `(expr/reducible| @Eq ImpNatAlias ?x ?y)    => let _ := (x, y); return 5
  | _ => return 0

private def matchUnitSingleRed (e : Expr) : MetaM Nat :=
  match e with
  | `(expr/reducible| ()) => return 2
  | _ => return 0

private def matchSuccSingleRed (e : Expr) : MetaM Nat :=
  match e with
  | `(expr/reducible| Nat.succ ?n) => let _ := n; return 3
  | _ => return 0

private def matchFTag5SingleRed (e : Expr) : MetaM Nat :=
  match e with
  | `(expr/reducible| fTag 5) => return 4
  | _ => return 0

private def matchImpAliasSingleRed (e : Expr) : MetaM Nat :=
  match e with
  | `(expr/reducible| @Eq ImpNatAlias ?x ?y) => let _ := (x, y); return 5
  | _ => return 0

#guard_msgs in
run_meta do
  withLocalDeclD `P (mkSort .zero) fun p =>
  withLocalDeclD `prodVar (mkApp2 (mkConst ``Prod [0, 0]) (mkConst ``Nat) (mkConst ``Nat))
      fun prodVar =>
  withLocalDeclD `uVar (mkConst ``Unit) fun uVar =>
  withLocalDeclD `a (mkConst ``Nat) fun a =>
  withLocalDeclD `b (mkConst ``Nat) fun b => do
    let pToFalse := mkForall `_ .default p (mkConst ``False)
    let notP := mkApp (mkConst ``Not) p
    -- 1. `¬ ?A` vs `P → False` misses both single-arm and multi-arm without `[Not]`.
    assertEq "A3: single ¬?A vs P→False" (← matchNotOnlyRed pToFalse) 0
    assertEq "A3: multi ¬?A vs P→False" (← matchNotMultiRed pToFalse) 0
    assertEq "A3: multi [Not] ¬?A vs P→False" (← matchNotExplicitRed pToFalse) 1
    -- 2. `(?p : Prop) → False` vs `¬ P` misses without `[Not]`.
    assertEq "A3: (?p : Prop) → False vs ¬ P" (← matchImpFalseRed notP) 0
    -- 3. Structure eta `(?a, ?b)` on fvar `prodVar : Nat × Nat` hits both.
    assertEq "A3: struct eta single" (← matchMiscSingleRed prodVar) 1
    assertEq "A3: struct eta multi" (← matchMiscMultiRed prodVar) 1
    -- 4. Unit eta `()` on `uVar : Unit` hits both.
    assertEq "A3: unit eta single" (← matchUnitSingleRed uVar) 2
    assertEq "A3: unit eta multi" (← matchMiscMultiRed uVar) 2
    -- 5. `Nat.succ ?n` on `5` hits both.
    assertEq "A3: Nat.succ single on 5" (← matchSuccSingleRed (mkNatLit 5)) 3
    assertEq "A3: Nat.succ multi on 5" (← matchMiscMultiRed (mkNatLit 5)) 3
    -- 6. Nested numeral `fTag 5` on `fTag (2 + 3)` hits both.
    let twoPlusThree ← mkAppM ``HAdd.hAdd #[mkNatLit 2, mkNatLit 3]
    let fTwoPlusThree := mkApp (mkConst ``fTag) twoPlusThree
    assertEq "A3: fTag 5 single on fTag (2 + 3)" (← matchFTag5SingleRed fTwoPlusThree) 4
    assertEq "A3: fTag 5 multi on fTag (2 + 3)" (← matchMiscMultiRed fTwoPlusThree) 4
    -- 7. `@[implicit_reducible]` alias: single-arm and multi-arm agree (`implicitBump := false`).
    let eqNat ← mkAppOptM ``Eq #[some (mkConst ``Nat), some a, some b]
    assertEq "A3: ImpAlias single" (← matchImpAliasSingleRed eqNat) 0
    assertEq "A3: ImpAlias multi" (← matchMiscMultiRed eqNat) 0

-- `local reducible` cache invalidation across `section ... end` rollbacks.
def localRedTarget : Nat := 42

private def matchLocalTargetMulti (e : Expr) : MetaM Nat :=
  match e with
  | `(expr/reducible| localRedTarget) => return 1
  | `(expr/reducible| 0)              => return 2
  | _                                 => return 0

#guard_msgs in
run_meta do
  assertEq "A3 cache before local" (← matchLocalTargetMulti (mkNatLit 42)) 0

section LocalRedInner
set_option allowUnsafeReducibility true in
attribute [local reducible] localRedTarget

#guard_msgs in
run_meta do
  assertEq "A3 cache inside local reducible" (← matchLocalTargetMulti (mkNatLit 42)) 1

end LocalRedInner

section SiblingAfterRollback
def unrelatedDeclInSibling : Nat := 7

#guard_msgs in
run_meta do
  assertEq "A3 cache invalidated after section rollback"
    (← matchLocalTargetMulti (mkNatLit 42)) 0

end SiblingAfterRollback

end A3ReducibleIndexAndCache

/-! ## C1 (`Q3`): `linter.exprQuot.collapsedPattern` & `#check_pattern` normal form -/

section C1CollapsedPatternLinter

-- Old behavior: patterns whose root collapses to a bare pattern variable under their own relation
-- (like `(expr/reducible| Subtype.val (Subtype.mk ?v _))` or `(expr/defeq| id ?x)`) compiled
-- silently and matched arbitrary expressions.
-- New behavior: runtime matching stays faithful, `linter.exprQuot.collapsedPattern` warns, and
-- `#check_pattern` displays `collapsed normal form: ...`.

set_option linter.exprQuot.collapsedPattern true

/--
warning: pattern collapses under `reducible [+inst, +beta, +zeta, +proj, +eta] (items: none)`
to `?v`, matching arbitrary expressions
-/
#guard_msgs (whitespace := lax, substring := true) in
def warnCollapsedRed (e : Expr) : MetaM Bool :=
  match e with
  | `(expr/reducible| Subtype.val (Subtype.mk (?v : Nat) _)) => let _ := v; return true
  | _ => return false

/--
warning: pattern collapses under
`structural [-inst, -beta, -zeta, +proj, -eta] (items: +Subtype.val)` to `?v`
-/
#guard_msgs (whitespace := lax, substring := true) in
def warnCollapsedProj (e : Expr) : MetaM Bool :=
  match e with
  | `(expr [Subtype.val] +proj| Subtype.val (Subtype.mk (?v : Nat) _)) => let _ := v; return true
  | _ => return false

/--
warning: pattern collapses under `defeq [+inst, +beta, +zeta, +proj, +eta] (items: none)` to `?x`
-/
#guard_msgs (whitespace := lax, substring := true) in
def warnCollapsedDefeq (e : Expr) : MetaM Bool :=
  match e with
  | `(expr/defeq| id (?x : Nat)) => let _ := x; return true
  | _ => return false

-- Positive non-collapsing controls: `[Subtype.val]` without `+proj` stops at `.proj Subtype 0`,
-- and `[Not]` preserves `¬ ?A = (?A → False)` (`forallE`, not bare `?A`).
#guard_msgs in
def noWarnUncollapsedProj (e : Expr) : MetaM Bool :=
  match e with
  | `(expr [Subtype.val]| Subtype.val (Subtype.mk (?v : Nat) _)) => let _ := v; return true
  | `(expr [Not]| ¬ ?A) => let _ := A; return true
  | _ => return false

/--
info: pattern: ⟨?v, _⟩.val
collapsed normal form: ?v
relation: reducible [+inst, +beta, +zeta, +proj, +eta] (items: none)
binders: ?v : Nat (first-order)
pins: none
wildcards:
  var #0 : Nat → Prop [unresolved implicit @ `Subtype.val` arg #1 (implicit),
    `Subtype.mk` arg #1 (implicit); captured (repeated)]
  var #2 : _ ?v [explicit `_`/`?_` @ `Subtype.mk` arg #3 (explicit); not captured]
fixed instances: none
polymorphic instances: none
universe params: none
closed proofs: none
indexing: eligible (DiscrTree keys: [*])
-/
#guard_msgs (whitespace := lax) in
set_option linter.exprQuot.collapsedPattern false in
#check_pattern `(expr/reducible| Subtype.val (Subtype.mk (?v : Nat) _))

end C1CollapsedPatternLinter

/-! ## B1 (`Q4`): Projection mismatch trace hint -/

section B1ProjMismatchHint

-- Old behavior: when `@Subtype.val ... ?s` met kernel `.proj Subtype 0 s` under `/structural`,
-- `trace.Meta.Match.expr` gave only a raw mismatch without pointing to `[Subtype.val]`.
-- New behavior: `trace.Meta.Match.expr` emits an explicit `[Subtype.val]` hint.

/--
trace: [Meta.Match.expr] [structural] failed:
      ?x.val
    against:
      s.1
    first mismatch:
      ?x.val
    against:
      s.1
    (projection function `Subtype.val` vs kernel projection;
      add `[Subtype.val]` to match both encodings)
-/
#guard_msgs (whitespace := lax) in
run_meta do
  withOptions (fun o => o.set `trace.Meta.Match.expr true) do
    let pred ← withLocalDeclD `n (mkConst ``Nat) fun n => do
      mkLambdaFVars #[n] (← mkAppM ``GT.gt #[n, mkNatLit 0])
    let subTy := mkApp2 (mkConst ``Subtype [1]) (mkConst ``Nat) pred
    withLocalDeclD `s subTy fun s => do
      let projExpr := Expr.proj ``Subtype 0 s
      let matched ← match projExpr with
        | `(expr| Subtype.val ?x) => let _ := x; pure true
        | _                       => pure false
      assertTrue "B1: structural Subtype.val does not match .proj" (!matched)

end B1ProjMismatchHint

/-! ## B2 + A5c (`Q5`): Type-only binders & `linter.exprQuot.uncheckedType` -/

section B2AndA5cTypeAscriptions

-- Old behavior:
-- 1. `(expr| (?x : ?T))` and `(expr| (?f : ?A → ?B) ?x)` compiled under `/structural`, leaving
--    `T` / `A` / `B` unbound or uncheckable.
-- 2. `(expr| (?x : Nat))` silently ignored `: Nat` under `/structural` with no lint warning.
-- New behavior: type-only binders are compile errors under `/structural` (succeed under
-- `/reducible` and `/sym`), and `linter.exprQuot.uncheckedType` warns on unenforced ascriptions.

/--
error: pattern variable `?T` occurs only in the type of another pattern variable;
-/
#guard_msgs (whitespace := lax, substring := true) in
def badStructTypeOnlyVar (e : Expr) : MetaM Bool :=
  match e with
  | `(expr| (?x : ?T)) => let _ := (x, T); return true
  | _ => return false

/--
error: pattern variable `?A` occurs only in the type of another pattern variable;
-/
#guard_msgs (whitespace := lax, substring := true) in
def badStructTypeOnlyApp (e : Expr) : MetaM Bool :=
  match e with
  | `(expr| (?f : ?A → ?B) ?x) => let _ := (f, A, B, x); return true
  | _ => return false

#guard_msgs in
def okReducibleAndSymTypeOnly (e : Expr) : SymM Bool := do
  let r1 ← match e with
    | `(expr/reducible| (?x : ?T)) => let _ := (x, T); pure true
    | _ => pure false
  let r2 ← match e with
    | `(expr/sym| (?x : ?T)) => let _ := (x, T); pure true
    | _ => pure false
  return r1 && r2

set_option linter.exprQuot.uncheckedType true

/--
warning: type ascription `(?x : Nat)` is not checked at runtime under `/structural`
-/
#guard_msgs (substring := true) in
def warnUncheckedScalar (e : Expr) : MetaM Bool :=
  match e with
  | `(expr| (?x : Nat)) => let _ := x; return true
  | _ => return false

/--
warning: type ascription `(?Q1 : Prop)` is not checked at runtime under `/structural`
-/
#guard_msgs (substring := true) in
def warnUncheckedArrow (e : Expr) : MetaM Bool :=
  match e with
  | `(expr| (?Q1 : Prop) → (?Q2 : Prop)) => let _ := (Q1, Q2); return true
  | _ => return false

-- Constrained occurrences (`Nat` enforced via `HAdd.hAdd` args or wild `: _`) do NOT warn.
#guard_msgs in
def noWarnConstrainedTypes (e : Expr) : MetaM Bool :=
  match e with
  | `(expr| (?x : Nat) + ?y) => let _ := (x, y); return true
  | `(expr| (?x : _) = ?y)   => let _ := (x, y); return true
  | _ => return false

end B2AndA5cTypeAscriptions

/-! ## Q7 / Q7b (`B4`): `subtermsUnderBinders` & `ExprContext.binders` / `fill` -/

section Q7SubtermsUnderBinders

-- Old behavior: `subterms` only emitted closed subterms (`!cur.hasLooseBVars`), skipping subterms
-- inside `∀`/`fun`/`let` binders when needed for quantified hypothesis scanning or rebuilding.
-- New behavior: `subterms` stays pure `Id`-compatible, while `subtermsUnderBinders` descends into
-- `∀`/`fun`/`let` with opened `withLocalDecl`/`withLetDecl` `fvar`s, exposes `ctx.binders`
-- outermost-first, and automatically re-abstracts `fvar`s in pure `ctx.fill`.

#guard_msgs in
run_meta do
  -- `fun (x : Nat) => let z := x + 0; ∀ (w : Nat), z + w + 0 = x + w`
  let root ← withLocalDeclD `x (mkConst ``Nat) fun x => do
    let xPlus0 ← mkAppM ``HAdd.hAdd #[x, mkNatLit 0]
    withLetDecl `z (mkConst ``Nat) xPlus0 fun z => do
      let innerForall ← withLocalDeclD `w (mkConst ``Nat) fun w => do
        let zw ← mkAppM ``HAdd.hAdd #[z, w]
        let zwPlus0 ← mkAppM ``HAdd.hAdd #[zw, mkNatLit 0]
        let xw ← mkAppM ``HAdd.hAdd #[x, w]
        mkForallFVars #[w] (← mkEq zwPlus0 xw)
      mkLambdaFVars #[x] (← mkLetFVars #[z] innerForall)
  -- Pure `Id`-mode `subterms` still compiles and sees NO open `fvar + 0` occurrences.
  let closedSubs : Array Expr := (subterms root).toArray.map (·.1)
  assertTrue "Q7: pure Id subterms never exposes loose fvars/open body"
    (!closedSubs.any (·.hasLooseBVars))
  -- `subtermsUnderBinders` visits both `x + 0` (under 1 binder `x`) and `z + w + 0` (under
  -- 3 binders `[x, z, w]`) with valid live `LocalContext` and rebuilds closed well-typed `Expr`.
  let mut binderCounts : Array Nat := #[]
  let mut rebuilt? : Option Expr := none
  for case (`(expr| ?a + 0), ctx) in subtermsUnderBinders root do
    let aTy ← inferType a
    assertTrue "Q7: inferType a = Nat" (← isDefEq aTy (mkConst ``Nat))
    binderCounts := binderCounts.push ctx.binders.size
    if ctx.binders.size == 3 then
      -- Check outer-to-inner binder order `[x, z, w]`.
      let names ← ctx.binders.mapM fun bv => return (← bv.fvarId!.getUserName)
      assertEq "Q7: binders outer-to-inner" names #[`x, `z, `w]
      rebuilt? := some (ctx.fill a)
  assertEq "Q7: visited `?a + 0` binder depths" binderCounts #[1, 3]
  let some rebuilt := rebuilt? | throwError "Q7: expected depth-3 rebuilt expression"
  assertTrue "Q7: rebuilt has no loose bvars" (!rebuilt.hasLooseBVars)
  check rebuilt

end Q7SubtermsUnderBinders

/-! ## C2, C3, C4 (`Q9`): Pretty-printing, unusedVariables hook, and template hint -/

section Q9Diagnostics

-- Old behavior (`C2`): `#check_pattern` and trace threw "failed to pretty print expression" / `_✝`
-- when printing dependent projections like `(?s : Subtype P).val` or multiple `_` wildcards.
-- New behavior: `lambdaBoundedTelescope` with `pp.sanitizeNames := false` prints cleanly.

/--
info: pattern: (?s.val, ?a + _ + _)
relation: structural [-inst, -beta, -zeta, -proj, -eta] (items: none)
binders: ?s : { n // n > 0 } (first-order), ?a : Nat (first-order)
pins: none
wildcards:
  var #2 : Nat [explicit `_`/`?_` @ `HAdd.hAdd` arg #5 (explicit); not captured]
  var #3 : Nat [explicit `_`/`?_` @ `HAdd.hAdd` arg #5 (explicit); not captured]
fixed instances: `instLTNat` : LT Nat (at `GT.gt` arg #1),
  `instOfNatNat 0` : OfNat Nat 0 (at `OfNat.ofNat` arg #2),
  `instHAdd` : HAdd Nat Nat Nat (at `HAdd.hAdd` arg #3),
  `instAddNat` : Add Nat (at `instHAdd` arg #1),
  `instHAdd` : HAdd Nat Nat Nat (at `HAdd.hAdd` arg #3),
  `instAddNat` : Add Nat (at `instHAdd` arg #1)
polymorphic instances: none
universe params: none
closed proofs: none
indexing: eligible (DiscrTree keys: [Prod.mk, Nat, Nat, Subtype.val, Nat, ◾, *,
  HAdd.hAdd, Nat, Nat, Nat, instHAdd, Nat, instAddNat, HAdd.hAdd, Nat, Nat, Nat,
  instHAdd, Nat, instAddNat, *, *, *])
-/
#guard_msgs (whitespace := lax) in
#check_pattern `(expr| ((?s : { n : Nat // n > 0 }).val, (?a : Nat) + _ + _))

/--
info: pattern: ?s.val
relation: structural [-inst, -beta, -zeta, -proj, -eta] (items: none)
binders: ?s : { n // n > 0 } (first-order)
pins: none
wildcards: none
fixed instances: `instLTNat` : LT Nat (at `GT.gt` arg #1),
  `instOfNatNat 0` : OfNat Nat 0 (at `OfNat.ofNat` arg #2)
polymorphic instances: none
universe params: none
closed proofs: none
indexing: eligible (DiscrTree keys: [Subtype.val, Nat, ◾, *])
-/
#guard_msgs (whitespace := lax) in
#check_pattern `(expr| (?s : { n : Nat // n > 0 }).val)

-- Old behavior (`C3`): `linter.unusedVariables` flagged `x` inside object-level pattern binders
-- `(expr| ∀ x : Nat, _)` where `x` is only bound at the object level.
-- New behavior: built-in `unusedVariablesIgnoreFn` ignores object-level binders inside `exprQuot`
-- while STILL warning on unused `?x` captures and unused meta-level splice binders.

set_option linter.unusedVariables true

#guard_msgs in
def noUnusedVarOnObjectBinder (e : Expr) : MetaM Bool :=
  match e with
  | `(expr| ∀ x : Nat, _) => return true
  | _                     => return false

/--
warning: Variable name `x` is not explicitly referenced.

Hint: The binding can be removed (if unused) or named `_` (if used implicitly).
-/
#guard_msgs (substring := true) in
def warnUnusedPatCapture (e : Expr) : MetaM Nat :=
  match e with
  | `(expr| (?x : Nat) + 1) => return 0
  | _                       => return 1

/--
warning: Variable name `unusedMeta` is not explicitly referenced.

Hint: The binding can be removed (if unused) or named `_` (if used implicitly).
-/
#guard_msgs (substring := true) in
def warnUnusedSpliceBinder (v : Expr) : MetaM Expr :=
  let f := fun (unusedMeta : Nat) => v
  `(expr| $(f 0) + 1)

-- Old behavior (`C4`): `` `(expr| []) `` only showed "don't know how to synthesize ...".
-- New behavior: `reportTermBuildErrors` appends the template determination `Note:`.

/--
error: don't know how to synthesize implicit argument `α`
  @List.nil ?m.1
context:
⊢ Type ?u.2

Note: expr templates must be fully determined at compile time
-/
#guard_msgs (substring := true) in
def badUndeterminedEmptyList : MetaM Expr := `(expr| [])

end Q9Diagnostics

/-! ## Assigned `Level.mvar` & self-pin `Expr.mvar` lazy resolution in `/structural` -/

section AssignedMVarStructural

-- Old behavior:
-- 1. `matchLevel` normalized raw `Level`s without calling `instantiateLevelMVars`, so raw
--    scrutinees containing assigned `Level.mvar`s (e.g., `LocalDecl.value` of `let l := j - 1`)
--    failed `(expr| (?a : Nat) - ?b)` and `(expr +inst| (?a : Nat) - ?b)` with universe mismatch.
-- 2. Nonlinear self-pins `$x` ran `structGo ctx v' rhs ... (isPat := false)` with `pe.consumeMData`
--    only (without `resolveHeadMVar pe`), failing when `?x` captured an uninstantiated `Expr.mvar`
--    on its first occurrence and matched an instantiated term on its second.
-- New behavior: `matchLevel`, `unfoldConstStep?`, and `!isPat` `structGo` instantiate assigned
-- `Level.mvar`s and head `Expr.mvar`s lazily on inspected nodes.

private def polyConst.{u} (_ : Type u) (n : Nat) : Nat := n

private def polyWrap.{u} {α : Type u} (x : α) (n : Nat) : Nat :=
  (@Prod.mk Nat α n x).1

set_option exprQuot.debug.checkIndex true in
private def matchSubMultiInst (e : Expr) : MetaM (Option (Nat × Expr × Expr)) :=
  match e with
  | `(expr +inst| (?a : Nat) + ?b) => return some (1, a, b)
  | `(expr +inst| (?a : Nat) - ?b) => return some (2, a, b)
  | _                              => return none

#guard_msgs in
set_option exprQuot.debug.checkIndex true in
run_meta do
  withLocalDeclD `a (mkConst ``Nat) fun a =>
  withLocalDeclD `b (mkConst ``Nat) fun b => do
    let u0 ← mkFreshLevelMVar
    let u1 ← mkFreshLevelMVar
    let u2 ← mkFreshLevelMVar
    let _ ← isLevelDefEq u0 .zero
    let _ ← isLevelDefEq u1 .zero
    let _ ← isLevelDefEq u2 .zero
    let natTy := mkConst ``Nat
    let instSub := mkApp2 (mkConst ``instHSub [u0]) natTy (mkConst ``instSubNat)
    let rawSub := mkApp6 (mkConst ``HSub.hSub [u0, u1, u2]) natTy natTy natTy instSub a b
    -- 1. Single-arm `/structural` with assigned `Level.mvar`s in scrutinee:
    let singleHit ← match rawSub with
      | `(expr| (?x : Nat) - ?y) => pure (x == a && y == b)
      | _                        => pure false
    assertTrue "assigned Level.mvar single-arm structural" singleHit
    -- 2. Multi-arm `DiscrTree`-indexed `/structural +inst` with assigned `Level.mvar`s
    --    plus nested assigned type/instance args and negative unassigned level mvar:
    let some (2, x, y) ← matchSubMultiInst rawSub
      | throwError "expected multi-arm +inst match on rawSub with assigned Level.mvar"
    assertTrue "assigned Level.mvar multi-arm +inst captures" (x == a && y == b)
    let tyMV ← mkFreshExprMVar (mkSort (.succ .zero))
    tyMV.mvarId!.assign natTy
    let instAdd := mkApp2 (mkConst ``instHAdd [0]) natTy (mkConst ``instAddNat)
    let instMV ← mkFreshExprMVar (mkApp3 (mkConst ``HAdd [0, 0, 0]) natTy natTy natTy)
    instMV.mvarId!.assign instAdd
    let rawAddNested := mkApp6 (mkConst ``HAdd.hAdd [0, 0, 0]) tyMV tyMV tyMV instMV a b
    let some (1, ax, ay) ← matchSubMultiInst rawAddNested
      | throwError "expected multi-arm +inst match on @HAdd.hAdd with assigned type mvar"
    assertTrue "assigned nested type mvar multi-arm +inst captures" (ax == a && ay == b)
    let uFree ← mkFreshLevelMVar
    let unassSub := mkApp6 (mkConst ``HSub.hSub [uFree, uFree, uFree])
      natTy natTy natTy instSub a b
    assertTrue "unassigned Level.mvar does not match" (← matchSubMultiInst unassSub).isNone
    assertTrue "unassigned Level.mvar stays unassigned" (← instantiateLevelMVars uFree).isMVar
    -- 3. `unfoldConstStep?` & level matching on non-zero assigned `Level.mvar` on `polyConst.{?v}`:
    let lv1 ← mkFreshLevelMVar
    let _ ← isLevelDefEq lv1 (.succ .zero)
    let type0 := mkSort (.succ .zero)
    let rawPoly := mkApp2 (mkConst ``polyConst [lv1]) type0 a
    let polyDirect ← match rawPoly with
      | `(expr| polyConst Type ?x) => pure (x == a)
      | _                          => pure false
    assertTrue "assigned Level.mvar in polyConst" polyDirect
    let polyWrapExpr := mkApp3 (mkConst ``polyWrap [lv1]) type0 natTy a
    let polyUnfolded ← match polyWrapExpr with
      | `(expr [polyWrap]| (@Prod.fst Nat Type (?x, Nat))) => pure (x == a)
      | _                                                  => pure false
    assertTrue "assigned Level.mvar in unfoldConstStep?" polyUnfolded
    -- 4. Nonlinear self-pin `$x` where 1st occ has assigned `Expr.mvar` + `Level.mvar` and
    --    2nd occ has instantiated `a` + `Level.zero`:
    let mv ← mkFreshExprMVar natTy
    mv.mvarId!.assign a
    let lhsRaw := mkApp6 (mkConst ``HSub.hSub [u0, u1, u2]) natTy natTy natTy instSub b mv
    let rhsClean ← mkAppM ``HSub.hSub #[b, a]
    let eqRaw ← mkEq lhsRaw rhsClean
    let selfPinHit ← match eqRaw with
      | `(expr| (?x : Nat) = $x) => pure (x == lhsRaw)
      | _                        => pure false
    assertTrue "nonlinear self-pin with assigned nested Expr.mvar & Level.mvar" selfPinHit

end AssignedMVarStructural

end ExprQuotGrillMeRegressions
