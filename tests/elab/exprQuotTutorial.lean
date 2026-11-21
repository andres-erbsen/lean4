import Lean

/-!
# Tutorial: Quasi-Quoted `Expr` Patterns (`expr` Quotations)

A tour of Lean's `` `(expr[/rel]| ...) `` syntax for matching, inspecting, and building `Expr`:
1. Native control flow (`match`, `if let`, `for case`, `modulo`) and constructor mixing.
2. Linear `?x` binders, `$x`/`$e` pins, independent `_` wildcards, and Miller `?P x`.
3. Matching relations (`/structural`, `+inst`, `/reducible`, `/defeq`, `/sym`), `[±items]`,
   `±beta`/`±zeta` (`let` re-wrapping), and `+proj` vs. `[S.field]` projections.
4. Term construction with `` `(expr| ...) `` (static vs. runtime instances, `?h`/`?_` holes).
5. Goal and context streams (`localHypTypes`, `localHypDecls`, `firstHyp`, `subterms`,
   `subtermsUnderBinders`, `matchDiscriminants`).
6. Diagnostics (`#check_pattern`, `trace.Meta.Match.expr`, `linter.exprQuot.*`).
7. Concise comparison with Rocq `Ltac` (`match goal` / `context[...]`).
-/

namespace ExprQuotTutorial
open Lean Meta Elab Tactic

/-! ## Chapter 1: Patterns in Native Control Flow

Write `` `(expr[/rel]| pat) `` with **no space** between `` `( `` and `expr`. Patterns plug into
`match`, `if let`, `let ... |`, `fun |`, and `for case`, composing cleanly with ordinary
constructors (`Option`, `Expr.lam`). `match` requires a catch-all `_`/variable arm, and rejects
`match h : e` equality binders because matching checks `rel` rather than propositional equality. -/

def describeOpt (o : Option Expr) : MetaM String :=
  match o with
  | none => return "none"
  | some (.lam _ _ _ _) => return "lambda"
  | some `((?x : Nat) + ?y) => return s!"add({x.isFVar},{y.isFVar})"
  | some _ => return "other"

abbrev MyNat := Nat

def matchModulo (e : Expr) : MetaM String :=
  match (modulo := reducible) e with
  | `(expr/structural| (?x : Nat) + 0) => let _ := x; return "exact"
  | `((?x : MyNat) + 0) => let _ := x; return "reducible"
  | _ => return "miss"

#guard_msgs in
run_meta withLocalDeclD `x (mkConst ``Nat) fun x => do
  let lam := mkLambda `z .default (mkConst ``Nat) (mkBVar 0)
  let xZero ← `(expr| ($x : Nat) + 0)
  let xOne ← `(expr| ($x : Nat) + 1)
  unless (← describeOpt none) == "none" && (← describeOpt (some lam)) == "lambda" do
    throwError "unexpected Option/lam match"
  unless (← describeOpt (some xZero)) == "add(true,false)" do throwError "unexpected add"
  let mut zeros := []
  for case `((?n : Nat) + 0) in [xOne, xZero] do zeros := zeros ++ [n]
  unless zeros == [x] do throwError "for case mismatch"
  unless (← matchModulo xZero) == "exact" do throwError "modulo structural override failed"
  unless (← matchModulo (← `(expr| ($x : MyNat) + (0 : MyNat)))) == "reducible" do
    throwError "modulo reducible failed"
  if let `(_ + (?r : Nat)) := xOne then
    unless r == mkNatLit 1 do throwError "if let mismatch"

/-! ## Chapter 2: Binders, Pins, Wildcards, and Miller Patterns

- `?x` binds `x : Expr` linearly and rejects bound-var capture (`∀ x, ?Q` fails on `∀ n, n = n`).
  Repeating `?x` is a compile-time error; write `$x` for self-pins or `$e` for external pins.
  Matching runs in `withNewMCtxDepth`, keeping caller metavariables rigid.
- Multiple `_` wildcards are independent; non-captured `_` under binders (`∀ x, ?P x → _`) discards
  bound variables. Miller `?P x` captures a lambda (`eta`-peeling trailing `x`), instantiated via
  `P.beta #[t]` while preserving inner lambdas under `/structural`. -/

def matchSelfPin (e : Expr) : MetaM Bool :=
  match e with | `((?x : Nat) + $x) => return true | _ => return false

#guard_msgs in
run_meta withLocalDeclD `x (mkConst ``Nat) fun x =>
  withLocalDeclD `y (mkConst ``Nat) fun y => do
  unless (← matchSelfPin (← `(expr| ($x : Nat) + $x))) do throwError "self-pin failed"
  if ← matchSelfPin (← `(expr| ($x : Nat) + $y)) then throwError "self-pin matched x + y"
  let `($x + ?_) := (← `(expr| ($x : Nat) + $y)) | throwError "external pin failed"
  let `(_ = _) := (← `(expr| (($x : Nat) + 1) = ($y + 2))) | throwError "wildcards failed"
  match (← `(expr| ∀ n : Nat, n = 0 → n + 1 = 1)) with
  | `(∀ x, ?P x → ?Q) => let _ := (P, Q); throwError "bound var escaped into `?Q`"
  | `(∀ x, ?P x → _) =>
    unless P == (← `(expr| fun n : Nat => n = 0)) do throwError "Miller P under wildcard mismatch"
  | _ => throwError "expected `∀ x, ?P x → _` to match"
  let `(∀ x : Nat, ?P x) := (← `(expr| ∀ n : Nat, n + 1 = 2)) | throwError "Miller failed"
  unless P.beta #[mkNatLit 3] == (← `(expr| (3 : Nat) + 1 = 2)) do throwError "P.beta mismatch"

/-! ## Chapter 3: Relations, `[±items]`, `±beta`/`±zeta`, and Projections

Patterns default to `/structural` (syntactic modulo `mdata`, head mvars, proofs). Add `+inst` to
check `[instImplicit]` args at `.instances` transparency, or use `/reducible`, `/instances`,
`/defeq`, or `/sym` (requiring `[MonadSym m]` such as `SymM`; `-inst` is disallowed on these).

- `[±items]` apply left-to-right (last wins): `[Not, Ne]` unfolds `¬`/`≠` (needed under `/reducible`
  where hints are off), `[+def]` unfolds a constant, and `[+$x]` unfolds a dependent `let` local.
- `+beta` reduces head beta-redexes; `+zeta` looks through `let` expressions and `let`-locals, and
  under `/structural +zeta` re-wraps captured subterms with only the `let` bindings they reference.
- `+proj` contracts constructor `.proj` redexes, while `[S.field]` unfolds `S.field` to `.proj` so
  surface `s.val` and kernel `.proj` match uniformly (`[S.field] +proj` collapses `⟨?v, _⟩.val`). -/

@[reducible] def altAddNat : Add Nat := ⟨Nat.add⟩
def tagNat (n : Nat) : Nat := n + 1

#guard_msgs in
run_meta withLocalDeclD `x (mkConst ``Nat) fun x =>
  withLocalDeclD `P (mkSort .zero) fun p => do
  let nat := mkConst ``Nat
  let altAdd := mkApp4 (mkConst ``HAdd.hAdd [0, 0, 0]) nat nat nat
    (mkApp2 (mkConst ``instHAdd [0]) nat (mkConst ``altAddNat))
  let altExpr := mkApp2 altAdd x (mkNatLit 0)
  if let `((?a : Nat) + 0) := altExpr then
    let _ := a; throwError "plain `/structural` must reject non-canonical `Add`"
  let `(expr +inst| (?a : Nat) + 0) := altExpr | throwError "`+inst` failed"
  unless a == x do throwError "`+inst` capture mismatch"
  let pToFalse := mkForall `_ .default p (mkConst ``False)
  if let `(expr/reducible| ¬ ?_) := pToFalse then throwError "hints must be off under `/reducible`"
  let `(expr/reducible [Not, Ne]| ¬ ?q) := pToFalse | throwError "`[Not, Ne]` failed"
  unless q == p do throwError "`[Not, Ne]` mismatch"
  let tagged := mkApp (mkConst ``tagNat) x
  let `(expr [+tagNat]| (?a : Nat) + 1) := tagged | throwError "`[+tagNat]` failed"
  let `(expr/defeq| (?b : Nat) + 1) := tagged | throwError "`/defeq` failed"
  let betaRedex := mkApp (mkLambda `z .default nat (mkNatAdd (mkBVar 0) (mkNatLit 1))) x
  let `(expr +beta| (?c : Nat) + 1) := betaRedex | throwError "`+beta` failed"
  unless a == x && b == x && c == x do throwError "unfold/beta capture mismatch"
  let eLet := mkLet `keep nat (mkNatLit 10) <| mkLet `unused nat (mkNatLit 99) <|
    mkNatAdd (mkNatAdd (mkBVar 1) (mkBVar 1)) (mkNatLit 0)
  let `(expr +zeta| (?y : Nat) + 0) := eLet | throwError "`+zeta` failed"
  unless y == mkLet `keep nat (mkNatLit 10) (mkNatAdd (mkBVar 0) (mkBVar 0)) do
    throwError "`+zeta` must re-wrap only `keep`"
  withLetDecl `lv nat (mkNatLit 4) fun lv => do
    let `(expr [+$lv]| (4 : Nat)) := lv | throwError "`[+$lv]` failed"
  let pred ← withLocalDeclD `n nat fun n => do
    mkLambdaFVars #[n] (← mkAppM ``GT.gt #[n, mkNatLit 0])
  let subTy := mkApp2 (mkConst ``Subtype [1]) nat pred
  withLocalDeclD `s subTy fun s => do
    let projExpr := Expr.proj ``Subtype 0 s
    if let `(Subtype.val ?_) := projExpr then throwError "plain structural matched `.proj`"
    let `(expr [Subtype.val]| Subtype.val ?s') := projExpr | throwError "`[Subtype.val]` failed"
    unless s' == s do throwError "`[Subtype.val]` capture mismatch"
    let mkFive ← mkAppM ``Subtype.mk #[mkNatLit 5, ← mkDecideProof (← `(expr| (5 : Nat) > 0))]
    let redex ← mkAppM ``Subtype.val #[mkFive]
    let `(expr [Subtype.val]| Subtype.val (Subtype.mk ?v _)) := redex | throwError "redex collapsed"
    let `(expr +proj| (5 : Nat)) := Expr.proj ``Subtype 0 mkFive | throwError "`+proj` failed"
    let `(expr [Subtype.val] +proj| (5 : Nat)) := redex | throwError "`[Subtype.val] +proj` failed"
    unless v == mkNatLit 5 do throwError "redex capture mismatch"

/-! ## Chapter 4: Building Terms with `` `(expr| ...) ``

In term position, `` `(expr| t) `` elaborates to `MetaM Expr`, checking `$e` splices via `/defeq`
by default, preserving `let`/`fun` without beta-reducing `$f $x`, and keeping pointer sharing.
Concrete splice types (`($a : Nat) + 1`) resolve typeclasses statically with zero runtime mvars;
untyped `$a + $b` synthesizes splice-dependent instances at runtime. Explicit `?h` (shared per name)
and `?_` (distinct) allocate `.syntheticOpaque` holes; unresolved implicits fail statically. -/

elab "split_conj" : tactic => withMainContext do
  let goal ← getMainGoal
  let `(?a ∧ ?b) ← getMainTarget | throwError "split_conj: expected conjunction"
  let pf ← `(expr| (And.intro ?l ?r : $a ∧ $b))
  goal.assign pf
  replaceMainGoal (← getMVarsNoDelayed pf).toList

example (p q : Prop) (hp : p) (hq : q) : p ∧ q := by
  split_conj <;> assumption

#guard_msgs in
run_meta do
  let lam := mkLambda `x .default (mkConst ``Nat) (mkNatAdd (mkBVar 0) (mkNatLit 1))
  let seven := mkNatLit 7
  let appExpr ← `(expr| $lam $seven)
  unless appExpr.isApp && ptrEq appExpr.appFn! lam && ptrEq appExpr.appArg! seven do
    throwError "`$f $x` must remain an unreduced `.app` with pointer sharing"
  let mvsBefore := (← getMCtx).mvarCounter
  let typedAdd ← `(expr| ($seven : Nat) + (1 : Nat))
  unless (← getMCtx).mvarCounter == mvsBefore do throwError "static template allocated mvars"
  Meta.check typedAdd
  let shared ← `(expr| (?h : Nat) + ?h)
  let distinct ← `(expr| (?_ : Nat) + ?_)
  unless (← getMVars shared).size == 1 && (← getMVars distinct).size == 2 do
    throwError "expected shared `?h` (1) and distinct `?_` (2)"

/-! ## Chapter 5: Goal and Context Streams

- `localHypTypes` and `localHypDecls` inspect the `LocalContext` (wrap direct `TacticM` calls in
  `withMainContext`). In `localHypDecls`, `val?` is `some v` only for dependent `let` declarations.
- `firstHyp` / `firstHyp?` (`TacticM`) and `MVarId.firstHyp` / `MVarId.firstHyp?` scan newest-first
  (`reverse := true`), enter the goal context, support `except`, and roll back failures atomically.
- `subterms` visits closed `(sub, ctx)` pairs outermost-first; `subtermsUnderBinders` opens
  `.lam`/`.forallE`/`.letE` binders live (`ctx.binders`) and re-abstracts them in `ctx.fill`.
- `matchDiscriminants` visits `match` discriminants; for `if`/`dite`, use `subterms`. -/

elab "try_impl_hyp" : tactic => do
  let goal ← getMainGoal
  goal.firstHyp fun h ty => do
    let `(expr/reducible| ?_ → _) := ty | failure
    let [g] ← goal.apply h | failure
    g.assumption
  replaceMainGoal []

example (p q r : Prop) : p → (p → r) → (q → r) → r := by
  intros
  try_impl_hyp

#guard_msgs in
run_meta withLocalDeclD `x (mkConst ``Nat) fun x =>
  withLetDecl `dep (mkConst ``Nat) x fun dep =>
  withLetDecl (nondep := true) `nondep (mkConst ``Nat) x fun _ => do
  unless (← localHypTypes).size == 3 do throwError "expected 3 locals"
  let decls ← localHypDecls
  unless ((decls.find? (·.1 == dep)).bind (·.2.2)).isSome do throwError "expected `some` for `let`"
  unless (decls.filter (fun (_, _, v?) => v?.isNone)).size == 2 do
    throwError "expected `none` for `x` and `have`"
  let forallExpr ← `(expr| ∀ n : Nat, n + 0 = n)
  let mut rebuilt? : Option Expr := none
  for case (`((?a : Nat) + 0), ctx) in subtermsUnderBinders forallExpr do
    if ctx.binders.size == 1 then rebuilt? := some (ctx.fill a)
  unless rebuilt? == some (← `(expr| ∀ n : Nat, n = n)) do throwError "under-binders fill mismatch"
  let eqOne ← `(expr| (1 : Nat) = 1)
  let iteExpr ← `(expr| if $eqOne then (1 : Nat) else 2)
  unless (← matchDiscriminants iteExpr |>.toArray).isEmpty do throwError "`ite` is not a `match`"
  let mut iteConds := #[]
  for case (`(if ?c then _ else _), _) in subterms iteExpr do iteConds := iteConds.push c
  unless iteConds == #[eqOne] do throwError "expected `ite` condition via `subterms`"

/-! ## Chapter 6: `#check_pattern`, `trace.Meta.Match.expr`, and Linters

`#check_pattern` prints resolved relations, binders, pins, wildcards, instances, and `DiscrTree`
keys without running a match. `trace.Meta.Match.expr` logs indexed candidates and the first
mismatch. All four `linter.exprQuot.*` linters (`numeralDefaulting`, `collapsedPattern`,
`uncheckedType`, `syntaxHole`) default to `true`, while `linter.unusedVariables` ignores
object-level binders inside `` `(expr| ∀ x, _) ``. -/

/--
info: pattern: ?x + ?y
relation: structural [-inst, -beta, -zeta, -proj, -eta] (items: none)
binders: ?x : Nat (first-order), ?y : Nat (first-order)
pins: none
wildcards: none
fixed instances: `instHAdd` : HAdd Nat Nat Nat (at `HAdd.hAdd` arg #3),
  `instAddNat` : Add Nat (at `instHAdd` arg #1)
polymorphic instances: none
universe params: none
closed proofs: none
indexing: eligible (DiscrTree keys: [HAdd.hAdd, Nat, Nat, Nat, instHAdd, Nat, instAddNat, *, *])
-/
#guard_msgs (whitespace := lax) in
#check_pattern `(expr| (?x : Nat) + ?y)

/--
trace: [Meta.Match.expr] [structural] failed:
      ?x + ?x
    against:
      1 + 2
-/
#guard_msgs (whitespace := lax, substring := true) in
run_meta withOptions (·.setBool `trace.Meta.Match.expr true) do
  discard <| matchSelfPin (← `(expr| (1 : Nat) + (2 : Nat)))

/-- warning: pattern numeral `0` relies on defaulting to `Nat` -/
#guard_msgs (whitespace := lax, substring := true) in
set_option linter.exprQuot.numeralDefaulting true in
def lintNumeral (e : Expr) : MetaM Bool :=
  match e with | `(_ + 0) => return true | _ => return false

/--
warning: pattern collapses under
`defeq [+inst, +beta, +zeta, +proj, +eta] (items: none)` to `?x`
-/
#guard_msgs (whitespace := lax, substring := true) in
set_option linter.exprQuot.collapsedPattern true in
def lintCollapsed (e : Expr) : MetaM Bool :=
  match e with | `(expr/defeq| id (?x : Nat)) => let _ := x; return true | _ => return false

/-- warning: type ascription `(?x : Nat)` is not checked at runtime under `/structural` -/
#guard_msgs (whitespace := lax, substring := true) in
set_option linter.exprQuot.uncheckedType true in
def lintUncheckedType (e : Expr) : MetaM Bool :=
  match e with | `((?x : Nat)) => let _ := x; return true | _ => return false

/--
warning: named pattern variable `?x` inside ordinary syntax quotation in an `Expr` context;
did you mean `` `(expr| ...) ``?

Note: This linter can be disabled with `set_option linter.exprQuot.syntaxHole false`
---
error: syntax quotation pattern on an `Expr` discriminant;
use `` `(...) `` or `` `(expr| ...) ``
-/
#guard_msgs (whitespace := lax) in
set_option linter.exprQuot.syntaxHole true in
def lintSyntaxHole (e : Expr) : Nat :=
  match e with | `(term| ?x + 1) => 1 | _ => 0

/-! ## Chapter 7: Concise Rocq `Ltac` Comparison

Rocq fuses hypothesis search, context traversal, non-linear pinning, and term building into one:
```coq
match goal with
| [ H1 : ?P, H2 : context[?P -> ?Q] |- _ ] => ...
end
```
Lean composes explicit primitives: `firstHyp` (+ `except`) for newest-first backtracking search,
`subtermsUnderBinders` (`ctx.binders` + `ctx.fill`) for `context[...]`, `$P` for explicit pinning,
and `` `(expr| ...) `` (`ExprTemplate`) for type-checked proof construction. -/

private theorem impEqOf (p q : Prop) (hp : p) : (p → q) = q :=
  propext ⟨(· hp), fun hq _ => hq⟩

/-- Simplify `P → Q` to `Q` inside any `∀`-quantified hypothesis using `h1 : P`. -/
elab "use_hyp_under" : tactic => do
  let goal ← getMainGoal
  firstHyp fun h1 P => do
    firstHyp (except := [h1]) fun h2 ty2 => do
      for case (`(expr/reducible| $P → ?Q), ctx) in subtermsUnderBinders ty2 do
        unless ← ctx.binders.allM (fun fv => return !(← fv.fvarId!.getDecl).isLet) do continue
        let mut fnEq ← `(expr| impEqOf $P $Q $h1)
        for bv in ctx.binders.reverse do
          let some (_, lhsB, rhsB) := (← inferType fnEq).eq? | failure
          fnEq ← mkAppOptM ``funext #[some (← inferType bv), none,
            some (← mkLambdaFVars #[bv] lhsB), some (← mkLambdaFVars #[bv] rhsB),
            some (← mkLambdaFVars #[bv] fnEq)]
        let holeTy ← mkForallFVars ctx.binders (mkSort .zero)
        let ctxFn ← withLocalDeclD `h holeTy fun h =>
          mkLambdaFVars #[h] (ctx.fill (mkAppN h ctx.binders))
        unless ← isTypeCorrect ctxFn do continue
        let pf ← mkCongrArg ctxFn fnEq
        let tyNew := ctx.fill Q
        if ← isDefEq (← inferType pf) (← mkEq ty2 tyNew) then
          replaceMainGoal [(← goal.replaceLocalDecl h2.fvarId! tyNew pf).mvarId]
          return
      failure

example (P : Prop) (Q R : Nat → Prop) (hp : P) (h : ∀ n, (P → Q n) ∧ R n) : Q 3 ∧ R 3 := by
  use_hyp_under
  exact h 3

end ExprQuotTutorial
