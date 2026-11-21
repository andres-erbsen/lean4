import Lean

/-!
# Rocq Stdlib Showcase (`Corelib.Init.Tactics` & `Program.Equality`)

Self-contained port of five classic Rocq Standard Library tactics showcasing delta-item
unfolding, `localHypDecls`, structure projection matching, `/defeq` pins, and dependent
elimination:

- `contradict H`: `[Not, Ne]` unifies `¬ A`, `A → False`, and `a ≠ b` across all four quadrants.
- `destruct_all T`: `localHypDecls` (`val? = none`) skips `let`-bindings and matches `abbrev`s.
- `simpl_subtype_proj`: `[Subtype.val]` (without `+proj`) reduces `@Subtype.val` and `.proj`.
- `simpl_heqs`: `(expr/defeq| @HEq ?α ?x $α ?y)` converts homogeneous `HEq`s via `eq_of_heq`.
- `simplify_dep_elim`: dependent elimination for `HEq`, `K`/`t = t`, `Sigma`/`PSigma`, and `block`.
-/

namespace ExprQuotUseCaseRocqStdlib

/-- Marker halting `simplify_dep_elim` at the remaining proof (`Program/Equality.v`). -/
def block {α : Sort u} (a : α) : α := a

private def simplification_heq {α : Sort u} (B : Sort v) (x y : α) (h : x = y → B) :
    x ≍ y → B :=
  fun hj => h (eq_of_heq hj)

private def simplification_K {α : Sort u} (x : α) (B : x = x → Sort v) (h : B rfl) :
    ∀ p : x = x, B p :=
  fun _ => h

section Tactics
open Lean Meta Elab Tactic

private def tryCommit (t : TacticM Unit) : TacticM Bool :=
  Term.withoutTacticIncrementality true <| Term.withoutErrToSorry <| withoutRecover do
    let s ← Tactic.saveState
    Tactic.tryCatch (t *> pure true) fun _ => do
      s.restore (restoreInfo := true); return false

private partial def repeatAll (t : TacticM Unit) : TacticM Unit := do
  let mut acc := #[]
  for g in ← getUnsolvedGoals do
    setGoals [g]
    if ← tryCommit t then repeatAll t; acc := acc ++ (← getUnsolvedGoals)
    else acc := acc.push g
  setGoals acc.toList

private def applyc (c : Name) : TacticM Unit :=
  liftMetaTactic fun g => do withReducible <| g.apply (← mkConstWithFreshMVarLevels c)

/-! ## 1. `contradict H` (`[Not, Ne]`) -/

private def ensureFalseTarget (g : MVarId) : MetaM MVarId := g.withContext do
  if let `(False) := ← instantiateMVars (← g.getType) then return g
  let [gF] ← g.apply (← mkConstWithFreshMVarLevels ``False.elim) | throwError "contradict: failed"
  return gF

private def negPosCore (g : MVarId) (h : FVarId) : MetaM MVarId := do
  let [gA] ← (← ensureFalseTarget g).apply (mkFVar h) | throwError "contradict: expected negation"
  gA.clear h

private def posPosCore (g : MVarId) (h : FVarId) : MetaM MVarId := do
  let A ← g.withContext do instantiateMVars (← h.getType)
  let (_, gRev) ← (← ensureFalseTarget g).revert #[h]
  gRev.withContext do
    -- `[Not]` drops the `Prop` constraint on `Nat → False`, so check `isProp A` before folding.
    if ← isProp A then
      if let `(_ → False) := ← instantiateMVars (← gRev.getType) then
        if let some gF ← observing? (gRev.replaceTargetDefEq (← `(expr| ¬ $A))) then return gF
    return gRev

private def saveNegCore (tac : MVarId → FVarId → MetaM MVarId)
    (g : MVarId) (h : FVarId) : MetaM MVarId := do
  let hName ← g.withContext do h.getUserName
  let (x, g1) ← g.intro1
  let g2 ← tac g1 h
  g2.withContext do
    unless (← getLCtx).contains x do throwError "contradict: premise depended on `{hName}`"
    g2.rename x hName

/--
Rocq (`Corelib/Init/Tactics.v`):
```coq
Ltac contradict H := ...
  match goal with | |- (~_) => ... | |- (_->False) => ... | |- _ => ... end ...
```
`` `(expr[Not, Ne]| ¬ _) `` unifies `¬ A`, `A → False`, and `a ≠ b` without duplicate arms.
-/
def contradictCore (hName : Name) : TacticM Unit := withMainContext do
  let some decl := (← getLCtx).findFromUserName? hName
    | throwError "contradict: unknown `{hName}`"
  let h := decl.fvarId
  let g ← getMainGoal
  let isGoalNeg : Bool ← match ← instantiateMVars (← g.getType) with
    | `(expr[Not, Ne]| ¬ _) => pure true
    | _ => pure false
  match ← instantiateMVars (← h.getType) with
  | `(expr[Not, Ne]| ¬ _) =>
    replaceMainGoal [← if isGoalNeg then saveNegCore negPosCore g h else negPosCore g h]
  | _ =>
    if let some [] ← observing? (do
        if (← g.cases h).isEmpty then return ([] : List MVarId) else failure) then
      replaceMainGoal []
    else
      replaceMainGoal [← if isGoalNeg then saveNegCore posPosCore g h else posPosCore g h]

scoped elab "contradict " h:ident : tactic => contradictCore h.getId

/-! ## 2. `destruct_all T` (`localHypDecls` with `val? = none`) -/

/--
Rocq (`Corelib/Init/Tactics.v`):
```coq
Ltac destruct_all t := match goal with | x : t |- _ => destruct x; destruct_all t | _ => idtac end.
```
`for case (x, `(expr/reducible| $T), none) in ← localHypDecls` skips `let`-bindings (`val? = none`)
so `cases` never drops local definitions, while `/reducible` matches `abbrev`s.
-/
partial def destructAll (T : Expr) : TacticM Unit := focus <| withMainContext do
  for case (x, `(expr/reducible| $T), none) in ← localHypDecls do
    let subgoals ← (← getMainGoal).cases x.fvarId!
    let mut out := []
    for sub in subgoals do
      setGoals [sub.mvarId]; destructAll T; out := out ++ (← getUnsolvedGoals)
    setGoals out; return

scoped elab "destruct_all " t:term : tactic => withMainContext do
  destructAll (← Term.elabType t)

/-! ## 3. `simpl_subtype_proj` (`[Subtype.val]` without `+proj`) -/

/--
Rocq (`Program/Tactics.v`): `simpl proj1_sig in *`.
`[Subtype.val]` (without `+proj`, which collapses the pattern to `?x`) matches `@Subtype.val`
and kernel `.proj ``Subtype 0`; `.proj ``Subtype 1` handles theorem `Subtype.property`.
-/
def simplSubtypeProjIn (e : Expr) : MetaM Expr := do
  Meta.transform (← instantiateMVars e) (post := fun cur => do
    match cur with
    | `(expr/structural [Subtype.val]| Subtype.val (Subtype.mk ?x _)) => return .visit x
    | `(expr/structural| Subtype.property (Subtype.mk _ ?p)) => return .visit p
    | .proj ``Subtype 1 inner =>
      if let `(expr/structural| Subtype.mk _ ?p) := inner then return .visit p
      return .continue
    | _ => return .continue)

def simplSubtypeProj : TacticM Unit := liftMetaTactic1 fun g => g.withContext do
  let mut g' := g
  let t ← g.getType; let t' ← simplSubtypeProjIn t
  if t' != t then g' ← g'.replaceTargetDefEq t'
  for d in ← getLCtx do
    if d.isImplementationDetail then continue
    let ty' ← simplSubtypeProjIn d.type
    if ty' != d.type then g' ← g'.replaceLocalDeclDefEq d.fvarId ty'
  if g' == g then throwError "simpl_subtype_proj: no progress"
  return some g'

scoped elab "simpl_subtype_proj" : tactic => simplSubtypeProj

/-! ## 4. `simpl_heqs` (`/defeq` `@HEq ?α ?x $α ?y`) -/

/--
Rocq (`Program/Equality.v`):
```coq
Ltac simpl_JMeq := repeat match goal with | [ H : @JMeq ?x ?X ?y ?Y |- _ ] => ... end.
```
`` `(expr/defeq| @HEq ?α ?x $α ?y) `` converts only homogeneous `HEq`s via `eq_of_heq`.
-/
def simplOneHEq : TacticM Unit := firstHyp fun h => fun
  | `(expr/defeq| @HEq ?α ?x $α ?y) => do
    let _ := (α, x, y); let g ← getMainGoal
    let (_, g1) ← g.note (← h.fvarId!.getUserName) (← mkAppM ``eq_of_heq #[h])
    replaceMainGoal [← g1.clear h.fvarId!]
  | _ => failure

scoped elab "simpl_heqs" : tactic => repeatAll simplOneHEq

/-! ## 5. `simplify_dep_elim` (`Program/Equality.v`) -/

private def introInjectAndRevert : TacticM Unit := do
  let (h, g1) ← (← getMainGoal).intro1
  match ← g1.withContext (Meta.injection g1 h) with
  | .solved => replaceMainGoal []
  | .subgoal mvarId newEqs _ => replaceMainGoal [(← mvarId.revert newEqs).2]

/--
Rocq (`Program/Equality.v`):
```coq
Ltac simplify_one_dep_elim_term c := match c with
  | @JMeq _ _ _ _ -> _ => ... | ?t = ?t -> _ => ... | block ?T => fail 1 | forall x, _ => ... end.
```
`` `(expr/reducible| ∀ _ : (?t : _) = $t, _) `` matches both non-dependent `t = t → B` and
dependent `∀ p : t = t, B p`, dispatching deletion vs `simplification_K`.
-/
def simplifyOneDepElim : TacticM Unit := withMainContext do
  let tgt ← getMainTarget
  match tgt with
  | `(expr/reducible| block _) => throwError "simplify_one_dep_elim: reached block"
  | `(expr/defeq| @HEq ?α ?x $α ?y → _) =>
    let _ := (α, x, y); applyc ``simplification_heq
  | `(expr/reducible| ∀ _ : (?t : _) = $t, _) =>
    let _ := t
    if !tgt.bindingBody!.hasLooseBVars then
      let (h, g1) ← (← getMainGoal).intro1
      replaceMainGoal [← g1.clear h]
    else applyc ``simplification_K
  | `(expr/reducible| @Sigma.mk _ _ _ _ = @Sigma.mk _ _ _ _ → _)
  | `(expr/reducible| @PSigma.mk _ _ _ _ = @PSigma.mk _ _ _ _ → _) => introInjectAndRevert
  | `(expr/reducible| (?x : _) = (?y : _) → _) =>
    let trySubst : TacticM Unit := do
      unless (x.isFVar && !y.hasAnyFVar (· == x.fvarId!)) ||
          (y.isFVar && !x.hasAnyFVar (· == y.fvarId!)) do failure
      let (h, g1) ← (← getMainGoal).intro1
      replaceMainGoal [← g1.withContext <| Meta.subst g1 h]
    let tryDiscrim : TacticM Unit := do
      let (_, g1) ← (← getMainGoal).intro1
      unless ← g1.contradictionCore { emptyType := false } do failure
      replaceMainGoal []
    trySubst <|> introInjectAndRevert <|> tryDiscrim <|>
      liftMetaTactic1 fun g => return some (← g.intro1).2
  | `(expr/reducible| ∀ _, _) => liftMetaTactic1 fun g => return some (← g.intro1).2
  | _ => throwError "simplify_one_dep_elim: no match"

scoped elab "simplify_dep_elim" : tactic => repeatAll simplifyOneDepElim

end Tactics

/-! ## Showcase Proofs & Negative Tests -/

theorem contradict_neg_neg_ne (x y z : Nat) (h : x ≠ y) (hz : y = z → x = y) : y ≠ z := by
  contradict h; exact hz h
theorem contradict_pos_neg_unfolded (P Q : Prop) (h : P) (hn : Q → ¬ P) : Q → False := by
  contradict h; exact hn h
theorem contradict_zero_eq_one (Q : Prop) (h : 0 = 1) : Q := by contradict h
theorem contradict_nonprop (Q : Prop) (h : Nat) (hn : Nat → False) : Q := by
  contradict h; exact hn

abbrev Flag := Bool
theorem destruct_all_abbrev_skips_let (a b : Flag) :
    let k : Bool := true; (a && (b || k)) = a := by
  intro k; destruct_all Bool
  all_goals have hk : k = true := rfl; simp [hk]

theorem simpl_subtype_proj_both (x : Nat) (hx : x > 0) :
    (⟨x, hx⟩ : {n : Nat // n > 0}).val + 1 = x + 1 := by
  unfold Subtype.val; simpl_subtype_proj
  fail_if_success simpl_subtype_proj
  rfl

theorem simpl_heqs_after_subst {α : Type} {P : α → Type} (a b : α) (pa : P a) (pb : P b)
    (hEq : a = b) (hHeq : pa ≍ pb) : (⟨a, pa⟩ : Sigma P) = ⟨b, pb⟩ := by
  simpl_heqs
  fail_if_success (have : pa = pb := ‹_›; exact this)
  subst hEq; simpl_heqs; subst hHeq; rfl

inductive Vec (α : Type) : Nat → Type where
  | nil : Vec α 0 | cons : α → Vec α n → Vec α (n + 1)

theorem dep_elim_vec {α : Type} {n : Nat} (a b : α) (va vb : Vec α n) :
    (⟨n + 1, Vec.cons a va⟩ : (m : Nat) × Vec α m) = ⟨n + 1, Vec.cons b vb⟩ →
    a = b ∧ va = vb := by
  simplify_dep_elim; exact ⟨rfl, rfl⟩

theorem dep_elim_K_and_block (x : Nat) (Q : x = x → Prop) (hq : Q rfl) :
    ∀ p : x = x, block (Q p) := by
  simplify_dep_elim; exact hq

theorem dep_elim_discrim (n : Nat) : (0 : Nat) = 1 → n = n + 1 := by simplify_dep_elim

end ExprQuotUseCaseRocqStdlib
