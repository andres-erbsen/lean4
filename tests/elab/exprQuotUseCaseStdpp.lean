import Lean

/-!
# `std++` Tactics Showcase (`coq-std++` `theories/tactics.v`)

Self-contained port of core `coq-std++` proof automation to `expr` quotations and PR #2 goal
combinators (`Tactic.whileGoals`, `Tactic.andThenSubgoals`):

- `fast_done`: trivial closing (`assumptionCore`, `True`, symmetry, contradictions, `refl`).
- `simplify_eq`: variable substitution, constructor discrimination/injection, shared-term chaining.
- `forall_and_step`: distributes `∀ x, P x ∧ Q x` inside outer `∀` binders via
  `subtermsUnderBinders` and `ExprContext.binders`/`ExprContext.fill`.
- `naive_solver`: iterative-deepening solver built on `whileGoals` and witness-guarded
  `andThenSubgoals` over `Exists.intro`.
-/

namespace ExprQuotUseCaseStdpp

section Tactics
open Lean Meta Elab Tactic

private def tryCommit (t : TacticM Unit) : TacticM Bool :=
  Term.withoutTacticIncrementality true <| Term.withoutErrToSorry <| withoutRecover do
    let s ← Tactic.saveState
    Tactic.tryCatch (t *> pure true) fun _ => do
      s.restore (restoreInfo := true); return false

private def applyc (c : Name) : TacticM Unit :=
  liftMetaTactic fun g => do withReducible <| g.apply (← mkConstWithFreshMVarLevels c)

private def casesHyp (h : Expr) : TacticM Unit :=
  liftMetaTactic fun g => return (← g.cases h.fvarId!).toList.map (·.mvarId)

/-! ## 1. `fast_done` -/

/--
Rocq (`stdpp/theories/tactics.v`):
```coq
Ltac fast_done :=
  solve [ eassumption | symmetry; eassumption | apply not_symmetry; eassumption | reflexivity ].
```
Uses `MVarId.assumptionCore` so caller metavariables (e.g. existential witnesses) unify across
`withNewMCtxDepth`, and tries `refl`/`applyRfl`/`hrefl` last.
-/
def fastDoneCore : TacticM Unit := focus <| withMainContext do
  let g ← getMainGoal
  let tgt ← getMainTarget
  let hyps ← localHypTypes (reverse := true)
  let close (pf : Expr) : TacticM Unit := do g.assign pf; replaceMainGoal []
  if ← g.assumptionCore then replaceMainGoal []; return
  if let `(expr/reducible| True) := tgt then close (mkConst ``True.intro); return
  match tgt with
  | `(expr/reducible| _ = _) =>
    for (h, _) in hyps do
      if ← tryCommit (do if (← g.apply (← mkEqSymm h)).isEmpty then replaceMainGoal [] else failure)
      then return
  | `(expr/reducible| ?lhs ≠ ?rhs) =>
    for case (h, `(expr/reducible| $rhs ≠ $lhs)) in hyps do
      if ← tryCommit (close (← mkAppM ``Ne.symm #[h])) then return
  | `(expr/reducible| ?P ↔ ?Q) =>
    for case (h, `(expr/reducible| $Q ↔ $P)) in hyps do
      if ← tryCommit (close (← mkAppM ``Iff.symm #[h])) then return
  | _ => pure ()
  for case (h, `(expr/reducible| False)) in hyps do close (← mkFalseElim tgt h); return
  for case (h, `(expr/reducible| ?x ≠ $x)) in hyps do
    if ← tryCommit (close (← mkFalseElim tgt (mkApp h (← mkEqRefl x)))) then return
  for case (h1, `(expr/reducible| ¬ ?P)) in hyps do
    for case (h2, `(expr/reducible| $P)) in hyps do
      if h1 != h2 then
        if ← tryCommit (close (← mkFalseElim tgt (mkApp h1 h2))) then return
  if ← tryCommit (liftMetaFinishingTactic fun m => m.refl <|> m.applyRfl <|> m.hrefl) then
    return
  throwError "fast_done: could not solve goal"

scoped elab "fast_done" : tactic => fastDoneCore

/-! ## 2. `simplify_eq` -/

private def simplifyEqStep (forbidden : FVarIdSet) :
    TacticM (Option FVarIdSet) := withMainContext do
  let g ← getMainGoal
  let tgt ← getMainTarget
  let excluded := forbidden.toList.map mkFVar
  let passNe (h ty : Expr) : TacticM FVarIdSet := do
    let `(expr/reducible| ?lhs ≠ ?rhs) := ty | failure
    let mEq ← mkFreshExprSyntheticOpaqueMVar (← mkEq lhs rhs)
    let oldGoals ← getGoals
    let ok ← tryCommit do
      setGoals [mEq.mvarId!]; fastDoneCore
      unless (← getUnsolvedGoals).isEmpty do failure
    setGoals oldGoals
    unless ok do failure
    g.assign (← mkFalseElim tgt (mkApp h mEq)); replaceMainGoal []; return forbidden
  let passRefl (h ty : Expr) : TacticM FVarIdSet := do
    let `(expr/reducible| ?x = $x) := ty | failure
    let _ := x; replaceMainGoal [← g.clear h.fvarId!]; return forbidden
  let passSubst (h ty : Expr) : TacticM FVarIdSet := do
    let `(expr/reducible| ?lhs = ?rhs) := ty | failure
    let tryDir (v other : Expr) (symm : Bool) : TacticM FVarIdSet := do
      unless v.isFVar do failure
      if ← exprDependsOn other v.fvarId! then failure
      replaceMainGoal [(← Meta.substCore g h.fvarId! (symm := symm)).2]; return forbidden
    tryDir lhs rhs false <|> tryDir rhs lhs true
  let passCtor (h ty : Expr) : TacticM FVarIdSet := do
    let `(expr/reducible| ?lhs = ?rhs) := ty | failure
    if lhs.isRawNatLit && rhs.isRawNatLit then
      if lhs != rhs && (← g.contradictionCore { useDecide := true, emptyType := false }) then
        replaceMainGoal []; return forbidden
      failure
    let some lCtor ← isConstructorApp'? lhs | failure
    let some rCtor ← isConstructorApp'? rhs | failure
    if lCtor.name != rCtor.name then
      if ← g.contradictionCore { useDecide := false, emptyType := false } then
        replaceMainGoal []; return forbidden
    match ← Meta.injection g h.fvarId! with
    | .solved => replaceMainGoal []; return forbidden
    | .subgoal g' newEqs _ =>
      let keep ← g'.withContext (return (← getLCtx).contains h.fvarId!)
      if newEqs.isEmpty && keep then failure
      replaceMainGoal [g']
      return if keep then forbidden.insert h.fvarId! else forbidden
  let passShared (h1 ty1 : Expr) : TacticM FVarIdSet := do
    let `(expr/reducible| ?lhs1 = ?rhs1) := ty1 | failure
    let (o, flip1) ← match (← isConstructorApp'? lhs1).isSome,
        (← isConstructorApp'? rhs1).isSome with
      | false, true => pure (lhs1, false)
      | true, false => pure (rhs1, true)
      | _, _ => failure
    firstHyp (except := h1 :: excluded) fun h2 ty2 => do
      let flip2 ← match ty2 with
        | `(expr/reducible| $o = ?r) =>
          if (← isConstructorApp'? r).isSome then pure false else failure
        | `(expr/reducible| ?l = $o) =>
          if (← isConstructorApp'? l).isSome then pure true else failure
        | _ => failure
      let h1' ← if flip1 then pure h1 else mkEqSymm h1
      let h2' ← if flip2 then mkEqSymm h2 else pure h2
      let (_, g') ← g.note ((← getLCtx).getUnusedName `Heq) (← mkEqTrans h1' h2')
      let g'' ← g'.tryClear h2.fvarId!
      replaceMainGoal [g'']
      return if ← g''.withContext (return (← getLCtx).contains h2.fvarId!) then
        forbidden.insert h2.fvarId! else forbidden
  for pass in [passNe, passRefl, passSubst, passCtor, passShared] do
    if let some res ← firstHyp? (except := excluded) pass then return some res
  return none

/--
Rocq (`stdpp/theories/tactics.v`):
```coq
Tactic Notation "simplify_eq" := repeat match goal with
  | H : _ ≠ _ |- _ => by case H | H : ?x = _ |- _ => subst x | H : _ = _ |- _ => discriminate H
  | H : ?f _ = ?f _ |- _ => progress injection H as H | ... (* up to 6 args *) ... end.
```
Matches `(expr/reducible| ?lhs = ?rhs)` once with `isConstructorApp'?` + `Meta.injection` instead
of per-arity `?f _ = ?f _` clauses (which miss nullary, multi-arg, and dependent constructors).
-/
def simplifyEqCore (requireProgress : Bool := false) : TacticM Unit := do
  let mut forbidden : FVarIdSet := {}
  let mut progressed := false
  while !(← getUnsolvedGoals).isEmpty do
    let some forbidden' ← simplifyEqStep forbidden | break
    forbidden := forbidden'; progressed := true
  if requireProgress && !progressed then throwError "simplify_eq: no progress"

scoped elab "simplify_eq" : tactic => simplifyEqCore

/-! ## 3. `forall_and` Pre-Pass (`subtermsUnderBinders`) -/

/--
Rocq (`stdpp/theories/tactics.v`):
```coq
repeat match goal with
| H : context [∀ _, _ ∧ _ ] |- _ => repeat setoid_rewrite forall_and_distr in H; revert H
end.
```
Uses `subtermsUnderBinders` to find `∀ x, ?P x ∧ ?Q x` inside outer `∀` binders, lifting
the `propext` equality across `ctx.binders` via `funext` + `congrArg` and `ctx.fill`.
-/
def forallAndStep : TacticM Unit :=
  firstHyp fun h ty => do
    for case (`(expr/reducible| ∀ x, ?P x ∧ ?Q x), ctx) in subtermsUnderBinders ty do
      unless ← ctx.binders.allM (fun fv => return !(← fv.fvarId!.getDecl).isLet) do continue
      let mut fnEq ← mkAppM ``propext #[← mkAppOptM ``forall_and #[none, P, Q]]
      let some (_, _, rhs) := (← inferType fnEq).eq? | failure
      for bv in ctx.binders.reverse do
        let some (_, lhsB, rhsB) := (← inferType fnEq).eq? | failure
        fnEq ← mkAppOptM ``funext #[some (← inferType bv), none,
          some (← mkLambdaFVars #[bv] lhsB), some (← mkLambdaFVars #[bv] rhsB),
          some (← mkLambdaFVars #[bv] fnEq)]
      let holeTy ← mkForallFVars ctx.binders (mkSort .zero)
      let ctxFn ← withLocalDeclD `h holeTy fun hole =>
        mkLambdaFVars #[hole] (ctx.fill (mkAppN hole ctx.binders))
      unless ← isTypeCorrect ctxFn do continue
      let proof ← mkCongrArg ctxFn fnEq
      let tyNew := ctx.fill rhs
      unless ← isDefEq (← inferType proof) (← mkEq ty tyNew) do continue
      if ← tryCommit (liftMetaTactic1 fun g =>
          return some (← g.replaceLocalDecl h.fvarId! tyNew proof).mvarId) then return
    failure

scoped elab "forall_and_step" : tactic => forallAndStep

/-! ## 4. `naive_solver` (`whileGoals` + Witness-Guarded `andThenSubgoals`) -/

private partial def oposeInstantiate (h term ty : Expr) (subgoals : Array MVarId) :
    MetaM (Expr × Array MVarId) := do
  match ← whnfR ty with
  | .forallE _ d b _ =>
    if !b.hasLooseBVar 0 && (← isProp d) then
      let m ← mkFreshExprSyntheticOpaqueMVar d
      oposeInstantiate h (mkApp term m) b (subgoals.push m.mvarId!)
    else
      let ev ← mkFreshExprMVarAt ((← getLCtx).erase h.fvarId!) (← getLocalInstances) d
      oposeInstantiate h (mkApp term ev) (b.instantiate1 ev) subgoals
  | _ => return (term, subgoals)

private def naiveDetStep (tac : TacticM Unit) : TacticM Unit := withMainContext do
  if ← tryCommit fastDoneCore then return
  let tgt ← getMainTarget
  match tgt with
  | `(expr/reducible| ∀ _, _) => liftMetaTactic1 fun g => return some (← g.intro1).2; return
  | `(expr/reducible| _ ↔ _) => applyc ``Iff.intro; return
  | _ => pure ()
  let hyps ← localHypTypes (reverse := true)
  for (h, ty) in hyps do
    match ty with
    | `(expr/reducible| False) | `(expr/reducible| Option.isSome none = true)
    | `(expr/reducible| _ ∧ _) | `(expr/reducible| Exists _) | `(expr/reducible| _ ↔ _) =>
      casesHyp h; return
    | _ => pure ()
  if (← firstHyp? fun h1 => fun
      | `(expr/reducible| ∀ _ : (?P : Prop), _) =>
        firstHyp (except := [h1]) fun h2 => fun
          | `(expr/reducible| $P) => do
            let g ← getMainGoal
            let (_, g') ← g.note (← h1.fvarId!.getUserName) (mkApp h1 h2)
            replaceMainGoal [← g'.clear h1.fvarId!]
          | _ => failure
      | _ => failure).isSome then return
  if ← tryCommit (simplifyEqCore (requireProgress := true)) then return
  if let `(expr/reducible| _ ∧ _) := tgt then applyc ``And.intro; return
  for case (h, `(expr/reducible| _ ∨ _)) in hyps do casesHyp h; return
  if ← tryCommit (do tac; unless (← getUnsolvedGoals).isEmpty do failure) then return
  throwError "naiveDetStep: no progress"

private partial def naiveGo (tac : TacticM Unit) (n : Nat) : TacticM Unit :=
  whileGoals <| withMainContext do
    if ← tryCommit (naiveDetStep tac) then return
    let tgt ← getMainTarget
    let tryExists : TacticM Unit := do
      let `(expr/reducible| Exists _) := tgt | failure
      -- `Exists.intro` produces `[P ?w, ?w]`; if solving `P ?w` assigns `?w`,
      -- `andThenSubgoals` skips `?w`, otherwise `throwError` rejects witness leakage.
      andThenSubgoals (applyc ``Exists.intro) (naiveGo tac n)
        (throwError "naive_solver: unresolved existential witness")
    let tryOr : TacticM Unit := do
      let `(expr/reducible| _ ∨ _) := tgt | failure
      (applyc ``Or.inl *> naiveGo tac n) <|> (applyc ``Or.inr *> naiveGo tac n)
    let applyHyp : TacticM Unit := do
      let n' + 1 := n | throwError "naive_solver: out of fuel"
      firstHyp fun h ty => do
        let `(expr/reducible| ∀ _, _) := ty | failure
        unless ← isProp ty do failure
        if (← h.fvarId!.hasForwardDeps) || (← exprDependsOn tgt h.fvarId!) then failure
        let tryEApply := liftMetaTactic fun g => g.withContext do
          (← g.apply h).mapM (·.tryClear h.fvarId!)
        let tryOPose := liftMetaTactic fun g => g.withContext do
          let (instTerm, prems) ← oposeInstantiate h h ty #[]
          let (_, g') ← g.note ((← getLCtx).getUnusedName `H) instTerm
          return prems.toList ++ [← g'.tryClear h.fvarId!]
        (tryEApply <|> tryOPose) *> naiveGo tac n'
    tryExists <|> tryOr <|> applyHyp

/--
Rocq (`stdpp/theories/tactics.v`):
```coq
Tactic Notation "naive_solver" tactic(tac) :=
  unfold iff, not in *; (* forall_and pre-pass *); iter go [1..6].
```
Combines `forallAndStep` with iterative deepening (`n = 1..6`) over `whileGoals` `naiveGo`.
-/
def naiveSolverCore (tac : TacticM Unit := failure) : TacticM Unit := focus do
  let origGoal ← getMainGoal
  evalTactic (← `(tactic| try unfold Not at *))
  evalTactic (← `(tactic| try simp only [iff_iff_implies_and_implies] at *))
  while (← tryCommit forallAndStep) do pure ()
  for n in [1, 2, 3, 4, 5, 6] do
    if ← tryCommit (do
        naiveGo tac n; ensureHasNoMVars (← instantiateMVars (.mvar origGoal))) then
      return
  throwError "naive_solver: failed to solve goal"

scoped elab "naive_solver" : tactic => naiveSolverCore
scoped elab "naive_solver" "(" tac:tactic ")" : tactic => naiveSolverCore (evalTactic tac)

end Tactics

/-! ## Examples -/

example (a b : Nat) (h : a = b) : b = a := by fast_done
example (a b : Nat) (h1 : a = b) (h2 : b ≠ a) : False := by simplify_eq
example (f : Nat → Option Nat) (k x y : Nat)
    (h1 : f k = some x) (h2 : f k = some y) : x = y := by
  simplify_eq; fast_done

example (A : Type) (P Q : A → A → Prop) (h : ∀ y x, P y x ∧ Q y x) :
    ∀ y, (∀ x, P y x) ∧ (∀ x, Q y x) := by
  forall_and_step; exact h

example (A : Type) (P Q : A → A → Prop) (R : Prop)
    (h : (∀ y x, P y x ∧ Q y x) → R) :
    (∀ y, (∀ x, P y x) ∧ (∀ x, Q y x)) → R := by
  forall_and_step; exact h

theorem cons_pair_inj {α β : Type} {a₁ a₂ : α} {b₁ b₂ : β} {xs ys : List (α × β)} :
    (a₁, b₁) :: xs = (a₂, b₂) :: ys → a₁ = a₂ ∧ b₁ = b₂ ∧ xs = ys := by
  naive_solver

theorem forall_and_nested_showcase {A : Type} (P Q : A → A → Prop) (R : Prop) :
    ((∀ y, (∀ x, P y x) ∧ (∀ x, Q y x)) → R) → (∀ y x, P y x ∧ Q y x) → R := by
  naive_solver

theorem firstorder_or_exists_showcase {A : Type} (P Q R S : A → Prop) (a : A) :
    P a → (∀ x, P x → Q x ∨ R x) → (∀ x, ¬ R x) → (∀ x, Q x → S x) → ∃ x, S x := by
  naive_solver

theorem custom_tac_fallback (x y : Nat) (P : Nat → Prop) :
    (∀ z, P z ∧ z < 10) → x + y < 5 → P x ∧ x + y < 10 := by
  naive_solver (omega)

-- Witness-leakage guard: `(∃ _ : Nat, True)` leaves `?w : Nat` unresolved, so `Or.inl` is
-- rolled back in favor of `Or.inr`; standalone `∃ _ : Nat, True` is rejected.
example : (∃ _ : Nat, True) ∨ (2 + 2 = 4) := by naive_solver
example : ∃ _ : Nat, True := by
  fail_if_success naive_solver
  exact ⟨0, trivial⟩

end ExprQuotUseCaseStdpp
