import Lean

/-!
# Finite Set Decision Procedure Showcase (`Stdlib.MSets.MSetDecide` / `fsetdec`)

Self-contained port of Rocq's `Stdlib.MSets.MSetDecide` (`WDecideOn`):

- `FSet α`: list-backed finite set model with `Membership`, set ops, and `*_iff` specs.
- `isMSetProp`: 15-arm `DiscrTree`-indexed `` `(expr/structural +inst| ...) `` classifier
  replacing Rocq's `Inductive MSet_Prop` + `auto 100` hint search.
- `discard_nonMSet`: reverse-order context pruning via `localHypTypes` + `MVarId.tryClear`.
- `collectElemWitnesses`: binder-aware witness extraction via `subtermsUnderBinders`.
- `fsetdec`: normalization, witness instantiation, `substMSet`, and `whileGoals` + lazy
  `Classical.em` decision loop.
-/

namespace ExprQuotUseCaseFSetDec

structure FSet (α : Type u) where
  elems : List α

namespace FSet
section
variable {α : Type u}

def Mem (x : α) (s : FSet α) : Prop := x ∈ s.elems
def Subset (s₁ s₂ : FSet α) : Prop := ∀ x : α, Mem x s₁ → Mem x s₂
def EqSet (s₁ s₂ : FSet α) : Prop := ∀ x : α, Mem x s₁ ↔ Mem x s₂
def Empty (s : FSet α) : Prop := ∀ x : α, ¬ Mem x s

instance : Membership α (FSet α) where mem s x := Mem x s
instance : EmptyCollection (FSet α) where emptyCollection := ⟨[]⟩
instance : Singleton α (FSet α) where singleton x := ⟨[x]⟩
instance : Insert α (FSet α) where insert x s := ⟨x :: s.elems⟩
instance : Union (FSet α) where union s₁ s₂ := ⟨s₁.elems ++ s₂.elems⟩
instance [DecidableEq α] : Inter (FSet α) where
  inter s₁ s₂ := ⟨s₁.elems.filter (fun x => decide (x ∈ s₂.elems))⟩
instance [DecidableEq α] : SDiff (FSet α) where
  sdiff s₁ s₂ := ⟨s₁.elems.filter (fun x => !decide (x ∈ s₂.elems))⟩
instance : HasSubset (FSet α) where Subset := Subset
instance [DecidableEq α] (x : α) (s : FSet α) : Decidable (x ∈ s) :=
  inferInstanceAs (Decidable (x ∈ s.elems))

theorem empty_iff (x : α) : (x ∈ (∅ : FSet α)) ↔ False := by
  change x ∈ ([] : List α) ↔ False; simp
theorem singleton_iff (x y : α) : (x ∈ ({y} : FSet α)) ↔ x = y := by
  change x ∈ [y] ↔ x = y; simp
theorem insert_iff (x y : α) (s : FSet α) : (x ∈ Insert.insert y s) ↔ x = y ∨ x ∈ s := by
  change x ∈ y :: s.elems ↔ x = y ∨ x ∈ s.elems; simp
theorem union_iff (x : α) (s₁ s₂ : FSet α) : (x ∈ s₁ ∪ s₂) ↔ x ∈ s₁ ∨ x ∈ s₂ := by
  change x ∈ s₁.elems ++ s₂.elems ↔ x ∈ s₁.elems ∨ x ∈ s₂.elems; simp
theorem inter_iff [DecidableEq α] (x : α) (s₁ s₂ : FSet α) : (x ∈ s₁ ∩ s₂) ↔ x ∈ s₁ ∧ x ∈ s₂ := by
  change x ∈ (s₁.elems.filter fun a => decide (a ∈ s₂.elems)) ↔ x ∈ s₁.elems ∧ x ∈ s₂.elems; simp
theorem diff_iff [DecidableEq α] (x : α) (s₁ s₂ : FSet α) :
    (x ∈ s₁ \ s₂) ↔ x ∈ s₁ ∧ ¬ (x ∈ s₂) := by
  change x ∈ (s₁.elems.filter fun a => !decide (a ∈ s₂.elems)) ↔
    x ∈ s₁.elems ∧ ¬ (x ∈ s₂.elems); simp
theorem subset_iff (s₁ s₂ : FSet α) : (s₁ ⊆ s₂) ↔ ∀ x : α, x ∈ s₁ → x ∈ s₂ := Iff.rfl
theorem eqSet_iff (s₁ s₂ : FSet α) : EqSet s₁ s₂ ↔ ∀ x : α, x ∈ s₁ ↔ x ∈ s₂ := Iff.rfl
theorem emptySet_iff (s : FSet α) : Empty s ↔ ∀ x : α, ¬ (x ∈ s) := Iff.rfl
end

theorem not_and_iff (P Q : Prop) : (¬ (P ∧ Q)) ↔ (¬ P ∨ ¬ Q) := by
  by_cases hp : P <;> by_cases hq : Q <;> simp [hp, hq]
theorem not_or_iff (P Q : Prop) : (¬ (P ∨ Q)) ↔ (¬ P ∧ ¬ Q) := by
  by_cases hp : P <;> by_cases hq : Q <;> simp [hp, hq]
theorem not_imp_iff (P Q : Prop) : (¬ (P → Q)) ↔ (P ∧ ¬ Q) := by
  by_cases hp : P <;> by_cases hq : Q <;> simp [hp, hq]
theorem not_iff_iff (P Q : Prop) : (¬ (P ↔ Q)) ↔ ((P ∧ ¬ Q) ∨ (¬ P ∧ Q)) := by
  by_cases hp : P <;> by_cases hq : Q <;> simp [hp, hq]
end FSet

section Tactics
open Lean Meta Elab Tactic

private def tryCommit (t : TacticM Unit) : TacticM Bool :=
  Term.withoutTacticIncrementality true <| Term.withoutErrToSorry <| withoutRecover do
    let s ← Tactic.saveState
    Tactic.tryCatch (t *> pure true) fun _ => do
      s.restore (restoreInfo := true); return false

private def allGoals (t : TacticM Unit) : TacticM Unit := do
  let mut acc := #[]
  for g in ← getUnsolvedGoals do setGoals [g]; t; acc := acc ++ (← getUnsolvedGoals)
  setGoals acc.toList

private partial def repeatAll (t : TacticM Unit) : TacticM Unit := do
  let mut acc := #[]
  for g in ← getUnsolvedGoals do
    setGoals [g]
    if ← tryCommit t then repeatAll t; acc := acc ++ (← getUnsolvedGoals)
    else acc := acc.push g
  setGoals acc.toList

private def extractFSetElemTy? (setTy : Expr) : MetaM (Option Expr) := do
  match ← whnfR setTy with | `(expr/structural| FSet ?α) => return some α | _ => return none

private def inferMSetTypes? : TacticM (Option (Expr × Expr)) := withMainContext do
  let checkExpr (e : Expr) : MetaM (Option (Expr × Expr)) := do
    for (sub, _) in subterms e do
      match sub with
      | `(expr/structural| FSet ?α) => return some (α, sub)
      | `(expr/structural +inst| @Membership.mem _ _ _ ?s _)
      | `(expr/structural +inst| @HasSubset.Subset _ _ ?s _)
      | `(expr/structural +inst| FSet.Empty ?s) | `(expr/structural +inst| FSet.EqSet ?s _)
      | `(expr/structural +inst| FSet.Subset ?s _) | `(expr/structural +inst| FSet.Mem _ ?s) =>
        let sTy ← inferType s
        if let some α ← extractFSetElemTy? sTy then return some (α, sTy)
      | _ => pure ()
    return none
  if let some res ← checkExpr (← getMainTarget) then return some res
  for (_, ty) in ← localHypTypes (reverse := true) do
    if let some α ← extractFSetElemTy? ty then return some (α, ty)
    if let some res ← checkExpr ty then return some res
  return none

/--
Rocq (`Stdlib.MSets.MSetDecide`): `Inductive MSet_elt_Prop` / `Inductive MSet_Prop`.
15-arm `DiscrTree`-indexed `/structural +inst` matcher replacing Rocq's auxiliary inductives and
`auto 100`. Raw typeclass heads + `isDefEq` match reducible aliases (`abbrev NatSet := FSet Nat`).
-/
partial def isMSetProp (elemTy setTy e : Expr) : MetaM Bool := do
  match (modulo := structural +inst) e with
  | `(True) => return true
  | `(False) => return true
  | `(¬ ?P) => isMSetProp elemTy setTy P
  | `(?P ∧ ?Q) => isMSetProp elemTy setTy P <&&> isMSetProp elemTy setTy Q
  | `(?P ∨ ?Q) => isMSetProp elemTy setTy P <&&> isMSetProp elemTy setTy Q
  | `(?P ↔ ?Q) => isMSetProp elemTy setTy P <&&> isMSetProp elemTy setTy Q
  | `(@Eq ?T _ _) => isDefEq T elemTy <||> isDefEq T setTy
  | `(@Ne ?T _ _) => isDefEq T elemTy <||> isDefEq T setTy
  | `(FSet.Empty ?s) => isDefEq (← inferType s) setTy
  | `(FSet.EqSet ?s₁ _) => isDefEq (← inferType s₁) setTy
  | `(FSet.Subset ?s₁ _) => isDefEq (← inferType s₁) setTy
  | `(FSet.Mem ?x ?s) =>
    isDefEq (← inferType x) elemTy <&&> isDefEq (← inferType s) setTy
  | `(@Membership.mem _ _ _ ?s ?x) =>
    isDefEq (← inferType x) elemTy <&&> isDefEq (← inferType s) setTy
  | `(@HasSubset.Subset _ _ ?s₁ _) => isDefEq (← inferType s₁) setTy
  | `(?P → ?Q) =>
    if (← isProp P) && (← isProp Q) then
      isMSetProp elemTy setTy P <&&> isMSetProp elemTy setTy Q
    else return false
  | _ =>
    if let .forallE n dom body bi := e then
      if ← isDefEq dom elemTy then
        withLocalDecl n bi dom fun fv => isMSetProp elemTy setTy (body.instantiate1 fv)
      else return false
    else return false

/--
Rocq (`Stdlib.MSets.MSetDecide`): `discard_nonMSet` prunes non-MSet hypotheses newest-first using
`MVarId.tryClear` so dependent witnesses (e.g., bounds inside `Fin n`) stay intact.
-/
def discardNonMSet (elemTy setTy : Expr) : TacticM Unit := liftMetaTactic1 fun g => g.withContext do
  let mut g' := g
  for (h, ty) in ← localHypTypes (reverse := true) do
    if ← isProp ty then
      unless ← isMSetProp elemTy setTy ty do g' ← g'.tryClear h.fvarId!
  return some g'

scoped elab "discard_nonMSet" : tactic => do
  let some (elemTy, setTy) ← inferMSetTypes?
    | throwError "discard_nonMSet: could not infer FSet types"
  discardNonMSet elemTy setTy

/-- Collects closed element witnesses in `∈`/`=` across target and hyps, incl. under binders. -/
private def collectElemWitnesses (elemTy setTy : Expr) : TacticM (Array Expr) := withMainContext do
  let mut raw : Array Expr := #[]
  let scan (e : Expr) (acc : Array Expr) : MetaM (Array Expr) := do
    let mut out := acc
    for (sub, ctx) in subtermsUnderBinders e do
      let bvs := ctx.binders.map (·.fvarId!)
      match (modulo := structural +inst) sub with
      | `(@Membership.mem _ _ _ ?s ?x)
      | `(FSet.Mem ?x ?s) =>
        if !x.hasAnyFVar (bvs.contains ·) then
          if (← isDefEq (← inferType x) elemTy) && (← isDefEq (← inferType s) setTy) then
            out := out.push x
      | `(@Eq ?T ?x ?y) =>
        if ← isDefEq T elemTy then
          if !x.hasAnyFVar (bvs.contains ·) then out := out.push x
          if !y.hasAnyFVar (bvs.contains ·) then out := out.push y
      | _ => pure ()
    return out
  raw ← scan (← getMainTarget) raw
  for (h, ty) in ← localHypTypes do
    if ← isDefEq ty elemTy then raw := raw.push h
    if ← isProp ty then raw ← scan ty raw
  let mut dedup : Array Expr := #[]
  for w in raw do unless ← dedup.anyM (isDefEq · w) do dedup := dedup.push w
  return dedup

private def instMSetHyps (elemTy setTy : Expr) : TacticM Unit := withMainContext do
  let witnesses ← collectElemWitnesses elemTy setTy
  for (h, ty) in ← localHypTypes (reverse := true) do
    if ← isProp ty then
      if let .forallE _ dom _ _ := (← whnfR ty) then
        if ← isDefEq dom elemTy then
          for w in witnesses do
            let pf := mkApp h w
            let pTy ← inferType pf
            unless ← (← localHypTypes).anyM fun (_, t) => isDefEq t pTy do
              let g ← getMainGoal
              replaceMainGoal [(← g.note ((← getLCtx).getUnusedName `Hinst) pf).2]

private def substMSetStep (elemTy setTy : Expr) : TacticM Unit := firstHyp fun h ty => do
  let `(expr/structural +inst| @Eq ?T ?x ?y) := ty | failure
  unless ← (isDefEq T elemTy <||> isDefEq T setTy) do failure
  let g ← getMainGoal
  if ← isDefEq x y then
    let g' ← g.tryClear h.fvarId!; if g' == g then failure; replaceMainGoal [g']; return
  if ← tryCommit (liftMetaTactic1 fun m => some <$> Lean.Meta.subst m h.fvarId!) then return
  if (subterms y).toArray.any (·.1 == x) then failure
  let mut rewrote := false
  let tgt ← getMainTarget
  if (subterms tgt).toArray.any (·.1 == x) then
    let r ← g.rewrite tgt h
    if r.mvarIds.isEmpty && r.eNew != tgt then
      replaceMainGoal [← g.replaceTargetEq r.eNew r.eqProof]; rewrote := true
  unless rewrote do
    for (h', ty') in ← localHypTypes (reverse := true) (except := [h]) do
      if (← isProp ty') && (subterms ty').toArray.any (·.1 == x) then
        let r ← g.rewrite ty' h
        if r.mvarIds.isEmpty && r.eNew != ty' then
          replaceMainGoal [(← g.replaceLocalDecl h'.fvarId! r.eNew r.eqProof).mvarId]
          rewrote := true; break
  unless rewrote do failure
  replaceMainGoal [← (← getMainGoal).tryClear h.fvarId!]

private def fsetPropStep : TacticM Unit := withMainContext do
  let g ← getMainGoal; let tgt ← getMainTarget
  let hyps ← localHypTypes (reverse := true)
  match (modulo := reducible) tgt with
  | `(_ ∧ _) | `(_ ↔ _) =>
    evalTactic (← `(tactic| constructor)); return
  | `(¬ _) | `(@Ne _ _ _) =>
    liftMetaTactic1 fun m => return some (← m.intro1).2; return
  | `(?P → ?Q) =>
    if (← isProp P) && (← isProp Q) then
      liftMetaTactic1 fun m => return some (← m.intro1).2; return
  | _ => pure ()
  for (h, ty) in hyps do
    match ty with
    | `(expr/reducible| False) | `(expr/reducible| _ ∧ _) | `(expr/reducible| _ ∨ _)
    | `(expr/reducible| _ ↔ _) | `(expr/reducible| Exists _) =>
      liftMetaTactic fun m => return (← m.cases h.fvarId!).toList.map (·.mvarId); return
    | `(expr/structural +inst| @Ne _ ?a ?b) | `(expr/structural +inst| ¬ (@Eq _ ?a ?b)) =>
      if ← isDefEq a b then
        g.assign (← mkFalseElim tgt (mkApp h (← mkEqRefl a))); replaceMainGoal []; return
    | `(expr/reducible| (@Eq _ ?a ?b) → _) =>
      if ← isDefEq a b then
        let (_, g') ← g.note (← h.fvarId!.getUserName) (mkApp h (← mkEqRefl a))
        replaceMainGoal [← g'.clear h.fvarId!]; return
    | _ => pure ()
  firstHyp fun h1 ty1 => do
    unless ← isProp ty1 do failure
    firstHyp (except := [h1]) fun h2 => fun
      | `(expr/structural +inst| ¬ $ty1) => do
        g.assign (← mkFalseElim tgt (mkApp h2 h1)); replaceMainGoal []
      | _ => failure

private partial def fsetAuto (g : MVarId) (depth : Nat := 8) : MetaM Bool := g.withContext do
  if ← g.assumptionCore then return true
  if (← observing? g.refl).isSome then return true
  if depth == 0 then return false
  if (← whnfR (← g.getType)).isForall then return ← fsetAuto (← g.intro1).2 depth
  let hyps := (← getLCtx).foldl (init := #[]) fun hs d =>
    if d.isImplementationDetail then hs else hs.push d.toExpr
  for r in hyps ++ #[mkConst ``True.intro, mkConst ``And.intro,
      mkConst ``Or.inl, mkConst ``Or.inr] do
    unless ← isProp (← inferType r) do continue
    let s ← saveState
    try
      let gs ← withReducible <| g.apply r
      if ← gs.allM fun g' => return (← isProp (← g'.getType)) && (← fsetAuto g' (depth - 1))
      then return true
    catch _ => pure ()
    restoreState s
  return false

private def assertOneDec (elemTy setTy : Expr) : TacticM Unit := withMainContext do
  let hyps ← localHypTypes (reverse := true)
  let decided (atom : Expr) : MetaM Bool := hyps.anyM fun (_, ty) => do
    if ← isDefEq ty atom then return true
    if let `(expr/structural +inst| ¬ ?P) := ty then return ← isDefEq P atom
    return false
  let collect (e : Expr) : MetaM (Array Expr) := do
    let mut out := #[]
    for (sub, _) in subterms e do
      match (modulo := structural +inst) sub with
      | `(@Membership.mem _ _ _ ?s ?x) =>
        if (← isDefEq (← inferType x) elemTy) && (← isDefEq (← inferType s) setTy) then
          out := out.push sub
      | `(@Eq ?T _ _) =>
        if ← isDefEq T elemTy then out := out.push sub
      | _ => pure ()
    return out
  let mut cands ← collect (← getMainTarget)
  for (_, ty) in hyps do if ← isProp ty then cands := cands ++ (← collect ty)
  for atom in cands do
    unless ← decided atom do
      let g ← getMainGoal
      let (hEm, g') ← g.note `hdec (← mkAppM ``Classical.em #[atom])
      replaceMainGoal ((← g'.cases hEm).toList.map (·.mvarId)); return
  failure

private partial def fsetdecRec (elemTy setTy : Expr) (fuel : Nat := 16) : TacticM Unit :=
  whileGoals do
    if ← tryCommit fsetPropStep then return
    if ← tryCommit (do
        unless ← fsetAuto (← getMainGoal) do failure
        replaceMainGoal []) then return
    if ← tryCommit (substMSetStep elemTy setTy) then return
    let fuel' + 1 := fuel | throwError "fsetdec: out of decidability fuel"
    if ← tryCommit (assertOneDec elemTy setTy) then
      allGoals (fsetdecRec elemTy setTy fuel')
    else
      throwError "fsetdec: goal beyond MSet fragment"

/--
Rocq (`Stdlib.MSets.MSetDecide`): `intros; discard_nonMSet; fsetdec_body`.
Each phase uses `allGoals` so early discharge (e.g., `x ∈ ∅`) finishes cleanly.
-/
def fsetdec : TacticM Unit := do
  evalTactic (← `(tactic| intros))
  let some (elemTy, setTy) ← inferMSetTypes? | throwError "fsetdec: could not infer FSet types"
  discardNonMSet elemTy setTy
  allGoals (evalTactic (← `(tactic| try simp only [FSet.subset_iff, FSet.eqSet_iff,
    FSet.emptySet_iff] at *)))
  allGoals (repeatAll <| withMainContext do
    match (modulo := reducible) ← getMainTarget with
    | `(_ ∧ _) | `(_ ↔ _) => evalTactic (← `(tactic| constructor))
    | `(∀ _, _) | `(¬ _) =>
      liftMetaTactic1 fun m => return some (← m.intro1).2
    | _ => failure)
  allGoals (instMSetHyps elemTy setTy)
  allGoals (evalTactic (← `(tactic| try simp only [FSet.empty_iff, FSet.singleton_iff,
    FSet.insert_iff, FSet.union_iff, FSet.inter_iff, FSet.diff_iff, Classical.not_not,
    not_true_eq_false, not_false_eq_true, FSet.not_and_iff, FSet.not_or_iff,
    FSet.not_iff_iff, FSet.not_imp_iff, Classical.not_forall] at *)))
  allGoals (fsetdecRec elemTy setTy)

scoped elab "fsetdec" : tactic => fsetdec

end Tactics

/-! ## Classic `fsetdec` Theorems, Context Pruning, & Nested-Binder Witnesses -/

section Examples
variable {α : Type u} (s s₁ s₂ s₃ t₁ t₂ : FSet α) (x y : α)

theorem subset_trans : s₁ ⊆ s₂ → s₂ ⊆ s₃ → s₁ ⊆ s₃ := by fsetdec
theorem singleton_subset_mem : ({x} : FSet α) ⊆ s ↔ x ∈ s := by fsetdec
theorem insert_union_comm : FSet.EqSet (insert x (s₁ ∪ s₂)) (insert x s₁ ∪ s₂) := by fsetdec
theorem mem_singleton_subst : x ∈ ({y} : FSet α) → y ∈ s → x ∈ s := by fsetdec
theorem insert_mem_neq : x ∈ insert y s → x ≠ y → x ∈ s := by fsetdec
theorem nonvar_eq_mem (f g : α → α) : f x = g y → f x ∈ s → g y ∈ s := by fsetdec

section DecidableOps
variable [DecidableEq α]
theorem union_inter_distr : FSet.EqSet (s₁ ∪ (s₂ ∩ s₃)) ((s₁ ∪ s₂) ∩ (s₁ ∪ s₃)) := by fsetdec
theorem diff_inter_demorgan : FSet.EqSet (s \ (t₁ ∩ t₂)) ((s \ t₁) ∪ (s \ t₂)) := by fsetdec
theorem diff_union_inter_partition : FSet.EqSet ((s \ t₁) ∪ (s ∩ t₁)) s := by fsetdec
end DecidableOps

theorem dependent_hyp_preserved (n : Nat) (hPos : 0 < n)
    (s₁ s₂ : FSet (Fin n)) (hx : ⟨0, hPos⟩ ∈ s₁) : ⟨0, hPos⟩ ∈ s₁ ∪ s₂ := by
  have hArith : n + 1 > 0 := Nat.succ_pos n
  discard_nonMSet
  fail_if_success exact hArith
  fsetdec

abbrev NatSet := FSet Nat
theorem natset_alias_test (s₁ s₂ : NatSet) (x : Nat) (hx : x ∈ insert 0 s₁) (hne : x ≠ 0) :
    x ∈ s₁ ∪ s₂ := by
  fsetdec

theorem nested_forall_witness_test (s₁ s₂ : FSet α) (a : α)
    (hNested : (∀ y : α, a ∈ insert y s₁) → a ∈ s₁) (hPrem : ∀ y : α, a ∈ insert y s₁)
    (hSub : s₁ ⊆ s₂) : a ∈ s₂ := by
  fsetdec

example (a b : Nat) (h : a < b) : a < b + 1 := by
  fail_if_success fsetdec
  omega

end Examples
end ExprQuotUseCaseFSetDec
