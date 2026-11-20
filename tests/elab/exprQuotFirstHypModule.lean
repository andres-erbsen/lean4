module

import Lean.Elab.Tactic.FirstHyp

/-!
Verifies that a `module` importing only `Lean.Elab.Tactic.FirstHyp` (without explicitly importing
`Lean.Meta.ExprPatternCore` or `Lean.Meta.ExprPattern`) has zero `SymM` dependency while still
supporting `(expr| ...)` patterns inside `firstHyp` predicates.
-/

namespace ExprQuotFirstHypModuleTest

open Lean Meta Elab Tactic

#guard_msgs in
run_meta do
  if (← getEnv).contains `Lean.Meta.Sym.SymM then
    throwError "unexpected `Lean.Meta.Sym.SymM` in `FirstHyp`-only environment"

private def firstHypCoreTac : TacticM Unit :=
  firstHyp fun hFVar ty => do
    let `(expr| (?x : Nat) + 0 = $x) := ty | failure
    (← getMainGoal).assign hFVar
    replaceMainGoal []

#guard_msgs in
run_meta do
  withLocalDeclD `n (mkConst ``Nat) fun n => do
    let lhs ← mkAppM ``HAdd.hAdd #[n, mkNatLit 0]
    let eqTy ← mkEq lhs n
    withLocalDeclD `h eqTy fun h => do
      let goal ← mkFreshExprSyntheticOpaqueMVar eqTy
      let rem ← Term.TermElabM.run' <| Tactic.run goal.mvarId! firstHypCoreTac
      unless rem.isEmpty do
        throwError "expected `firstHypCoreTac` to close goal"
      let proof ← instantiateMVars goal
      unless proof == h do
        throwError "expected `firstHypCoreTac` to assign `{h}`, got `{proof}`"
      Meta.check proof

end ExprQuotFirstHypModuleTest
