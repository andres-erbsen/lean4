import Lean

/-!
# Separation Logic Frame Cancellation with `expr` Quotations

A self-contained separation logic (`HProp`, `HProp.emp`, `HProp.sep`, `HProp.pts`, `HProp.pure`,
`HProp.ex`, `Holds`, `Entails`) and a `sep_cancel` tactic combining:
- structural `emp`/`sep` reification and normalization via `` `(expr| ...) ``;
- `ExprTemplate` entailment proof-term synthesis (`normalizeSep`, `proveSepAppend`, `pullClause`);
- backtracking frame cancellation across existential witness metavariables using
  `MVarId.firstHyp?` and `isDefEq`.
-/

namespace ExprQuotUseCaseSepLogic

abbrev Addr := Nat
abbrev Heap := Addr → Option Nat

def Heap.disjoint (h₁ h₂ : Heap) : Prop := ∀ a, h₁ a = none ∨ h₂ a = none
def Heap.union (h₁ h₂ : Heap) : Heap := fun a => (h₁ a).or (h₂ a)
def Heap.single (l : Addr) (v : Nat) : Heap := fun a => if a = l then some v else none

private theorem Heap.disjoint_symm {h₁ h₂ : Heap} (h : Heap.disjoint h₁ h₂) :
    Heap.disjoint h₂ h₁ := fun a => (h a).symm
private theorem Heap.union_comm {h₁ h₂ : Heap} (h : Heap.disjoint h₁ h₂) :
    Heap.union h₁ h₂ = Heap.union h₂ h₁ := by
  funext a; dsimp [Heap.union]; rcases h a with ha | ha <;> simp [ha]
private theorem Heap.union_assoc (h₁ h₂ h₃ : Heap) :
    Heap.union (Heap.union h₁ h₂) h₃ = Heap.union h₁ (Heap.union h₂ h₃) := by
  funext a; dsimp [Heap.union]; cases h₁ a <;> rfl
private theorem Heap.union_empty_left {h₁ h₂ : Heap} (he : ∀ a, h₁ a = none) :
    Heap.union h₁ h₂ = h₂ := by funext a; simp [Heap.union, he a]
private theorem Heap.disjoint_union_l {h₁ h₂ h₃ : Heap} :
    Heap.disjoint (Heap.union h₁ h₂) h₃ ↔ Heap.disjoint h₁ h₃ ∧ Heap.disjoint h₂ h₃ := by
  simp only [Heap.disjoint, Heap.union, Option.or_eq_none_iff]
  exact ⟨fun h => ⟨fun a => (h a).imp_left (·.1), fun a => (h a).imp_left (·.2)⟩,
    fun ⟨ha, hb⟩ a => match ha a, hb a with
      | .inl h1, .inl h2 => .inl ⟨h1, h2⟩ | .inr h3, _ | _, .inr h3 => .inr h3⟩

structure HProp where pred : Heap → Prop

def Holds (h : Heap) (P : HProp) : Prop := P.pred h
def HProp.emp : HProp := ⟨fun h => ∀ a, h a = none⟩
def HProp.pts (l : Addr) (v : Nat) : HProp := ⟨fun h => h = Heap.single l v⟩
def HProp.pure (P : Prop) : HProp := ⟨fun h => P ∧ HProp.emp.pred h⟩
def HProp.sep (P Q : HProp) : HProp :=
  ⟨fun h => ∃ h₁ h₂, Heap.disjoint h₁ h₂ ∧ h = Heap.union h₁ h₂ ∧ P.pred h₁ ∧ Q.pred h₂⟩
def HProp.ex {α : Type} (P : α → HProp) : HProp := ⟨fun h => ∃ x, (P x).pred h⟩
def Entails (P Q : HProp) : Prop := ∀ h, Holds h P → Holds h Q

scoped infixr:65 " ∗ " => HProp.sep
scoped notation:70 l:max " ↦ " v:max => HProp.pts l v
scoped notation:max "⌜" P "⌝" => HProp.pure P
scoped macro "∃ʰ " x:ident ", " p:term : term => `(HProp.ex fun $x => $p)
scoped infix:55 " ⊨ " => Holds
scoped infix:50 " ⊢ₛ " => Entails

namespace Entails
theorem refl (P : HProp) : P ⊢ₛ P := fun _ h => h
theorem trans {P Q R : HProp} (h₁ : P ⊢ₛ Q) (h₂ : Q ⊢ₛ R) : P ⊢ₛ R := fun h hp => h₂ h (h₁ h hp)
theorem sep_congr {P₁ P₂ Q₁ Q₂ : HProp} (hP : P₁ ⊢ₛ P₂) (hQ : Q₁ ⊢ₛ Q₂) : P₁ ∗ Q₁ ⊢ₛ P₂ ∗ Q₂ :=
  fun _ ⟨h₁, h₂, hd, hu, p₁, q₁⟩ => ⟨h₁, h₂, hd, hu, hP h₁ p₁, hQ h₂ q₁⟩
theorem emp_sep_mp (P : HProp) : HProp.emp ∗ P ⊢ₛ P := by
  rintro _ ⟨_, _, _, rfl, he, hp⟩; simpa [Holds, Heap.union_empty_left he] using hp
theorem emp_sep_mpr (P : HProp) : P ⊢ₛ HProp.emp ∗ P :=
  fun h hp => ⟨fun _ => none, h, fun _ => .inl rfl, by funext _; rfl, fun _ => rfl, hp⟩
theorem sep_comm (P Q : HProp) : P ∗ Q ⊢ₛ Q ∗ P := fun _ ⟨h₁, h₂, hd, hu, hp, hq⟩ =>
  ⟨h₂, h₁, Heap.disjoint_symm hd, hu.trans (Heap.union_comm hd), hq, hp⟩
theorem sep_emp_mp (P : HProp) : P ∗ HProp.emp ⊢ₛ P := trans (sep_comm P HProp.emp) (emp_sep_mp P)
theorem sep_emp_mpr (P : HProp) : P ⊢ₛ P ∗ HProp.emp := trans (emp_sep_mpr P) (sep_comm HProp.emp P)
theorem sep_assoc_mp (P Q R : HProp) : (P ∗ Q) ∗ R ⊢ₛ P ∗ (Q ∗ R) := by
  rintro _ ⟨h₁₂, h₃, hd, rfl, ⟨h₁, h₂, hd₁₂, rfl, hp, hq⟩, hr⟩
  have ⟨hd₁₃, hd₂₃⟩ := Heap.disjoint_union_l.mp hd
  have hd₁₂₃ := Heap.disjoint_symm
    (Heap.disjoint_union_l.mpr ⟨Heap.disjoint_symm hd₁₂, Heap.disjoint_symm hd₁₃⟩)
  exact ⟨h₁, Heap.union h₂ h₃, hd₁₂₃, Heap.union_assoc h₁ h₂ h₃, hp, ⟨h₂, h₃, hd₂₃, rfl, hq, hr⟩⟩
theorem sep_assoc_mpr (P Q R : HProp) : P ∗ (Q ∗ R) ⊢ₛ (P ∗ Q) ∗ R := by
  rintro _ ⟨h₁, h₂₃, hd, rfl, hp, ⟨h₂, h₃, hd₂₃, rfl, hq, hr⟩⟩
  have ⟨hd₂₁, hd₃₁⟩ := Heap.disjoint_union_l.mp (Heap.disjoint_symm hd)
  exact ⟨Heap.union h₁ h₂, h₃, Heap.disjoint_union_l.mpr ⟨Heap.disjoint_symm hd₃₁, hd₂₃⟩,
    (Heap.union_assoc h₁ h₂ h₃).symm, ⟨h₁, h₂, Heap.disjoint_symm hd₂₁, rfl, hp, hq⟩, hr⟩
theorem sep_left_comm (P Q R : HProp) : P ∗ (Q ∗ R) ⊢ₛ Q ∗ (P ∗ R) :=
  trans (sep_assoc_mpr P Q R) (trans (sep_congr (sep_comm P Q) (refl R)) (sep_assoc_mp Q P R))
theorem ex_l {α : Type} {P : α → HProp} {Q : HProp} (h : ∀ x, P x ⊢ₛ Q) : HProp.ex P ⊢ₛ Q :=
  fun _ ⟨x, hx⟩ => h x _ hx
theorem ex_r {α : Type} {P : HProp} {Q : α → HProp} (x : α) (h : P ⊢ₛ Q x) : P ⊢ₛ HProp.ex Q :=
  fun _ hp => ⟨x, h _ hp⟩
theorem pure_l {P : Prop} {Q R : HProp} (h : P → Q ⊢ₛ R) : ⌜P⌝ ∗ Q ⊢ₛ R := by
  rintro _ ⟨_, h₂, _, rfl, ⟨hp, he⟩, hq⟩; simpa [Holds, Heap.union_empty_left he] using h hp h₂ hq
theorem pure_r {P : Prop} {Q R : HProp} (hQR : Q ⊢ₛ R) (hp : P) : Q ⊢ₛ ⌜P⌝ ∗ R :=
  fun h hq => ⟨fun _ => none, h, fun _ => .inl rfl, by funext _; rfl, ⟨hp, fun _ => rfl⟩,
    hQR h hq⟩
end Entails

section Tactic
open Lean Meta Elab Tactic

/-- Reifies a flat list of atomic `HProp` clauses as right-associated `HProp.sep ... HProp.emp`. -/
def denote : List Expr → MetaM Expr
  | [] => `(expr| HProp.emp)
  | p :: ps => do `(expr| HProp.sep $p $(← denote ps))

/-- Builds `HProp.sep (denote ps) (denote qs) ⊢ₛ denote (ps ++ qs)` and its inverse. -/
partial def proveSepAppend : List Expr → List Expr → MetaM (Expr × Expr)
  | [], qs => do
    let dq ← denote qs
    return (← `(expr| Entails.emp_sep_mp $dq), ← `(expr| Entails.emp_sep_mpr $dq))
  | p :: ps, qs => do
    let (mp, mpr) ← proveSepAppend ps qs
    let (dp, dq) := (← denote ps, ← denote qs)
    return (
      ← `(expr| Entails.trans (Entails.sep_assoc_mp $p $dp $dq)
        (Entails.sep_congr (Entails.refl $p) $mp)),
      ← `(expr| Entails.trans (Entails.sep_congr (Entails.refl $p) $mpr)
        (Entails.sep_assoc_mpr $p $dp $dq)))

/-- Structural `emp`/`sep` normalizer returning `(clauses, e ⊢ₛ denote cs, denote cs ⊢ₛ e)`. -/
partial def normalizeSep (e : Expr) : MetaM (List Expr × Expr × Expr) := do
  match ← instantiateMVars e with
  | `(expr| HProp.emp) =>
    return ([], ← `(expr| Entails.refl HProp.emp), ← `(expr| Entails.refl HProp.emp))
  | `(expr| HProp.sep ?p ?q) =>
    let (ps, toP, fromP) ← normalizeSep p
    let (qs, toQ, fromQ) ← normalizeSep q
    let (appMp, appMpr) ← proveSepAppend ps qs
    return (ps ++ qs,
      ← `(expr| Entails.trans (Entails.sep_congr $toP $toQ) $appMp),
      ← `(expr| Entails.trans $appMpr (Entails.sep_congr $fromP $fromQ)))
  | e =>
    return ([e], ← `(expr| Entails.sep_emp_mpr $e), ← `(expr| Entails.sep_emp_mp $e))

/-- Pulls `xs[idx]` to the head, returning both `denote xs ⊢ₛ sep x ...` and its inverse. -/
def pullClause : List Expr → Nat → MetaM (Expr × Expr × Expr)
  | x :: rest, 0 => do
    let pf ← `(expr| Entails.refl (HProp.sep $x $(← denote rest)))
    return (x, pf, pf)
  | x :: rest, idx + 1 => do
    let (y, subTo, subFrom) ← pullClause rest idx
    let dr' ← denote (rest.eraseIdx idx)
    return (y,
      ← `(expr| Entails.trans (Entails.sep_congr (Entails.refl $x) $subTo)
        (Entails.sep_left_comm $x $y $dr')),
      ← `(expr| Entails.trans (Entails.sep_left_comm $y $x $dr')
        (Entails.sep_congr (Entails.refl $x) $subFrom)))
  | [], _ => throwError "pullClause: index out of bounds"

private def clauseOrder (xs : List Expr) : List (Expr × Nat) :=
  xs.zipIdx.filter (!·.1.hasExprMVar) ++ xs.zipIdx.filter fun (x, _) => x.hasExprMVar && !x.isMVar

/--
Cancels `denote lhs ⊢ₛ denote rhs`, matching closed clauses first and then backtracking across
existential witness metavariables and an optional trailing RHS frame metavariable `?F`.
-/
partial def cancelProof (lhs rhs : List Expr) : MetaM (Option Expr) := do
  if lhs.isEmpty && rhs.isEmpty then
    return some (← `(expr| Entails.refl HProp.emp))
  if let [.mvar m] := rhs then
    let dLhs ← denote lhs
    if ← commitWhen (isDefEq (.mvar m) dLhs) then
      return some (← `(expr| Entails.sep_emp_mpr $dLhs))
    return none
  let some (r, j) := (clauseOrder rhs).head? | return none
  for (l, i) in clauseOrder lhs do
    let closedPair := !l.hasExprMVar && !r.hasExprMVar
    let res? ← commitWhenSomeNoEx? do
      unless ← isDefEq l r do return none
      let lhs' ← (lhs.eraseIdx i).mapM instantiateMVars
      let rhs' ← (rhs.eraseIdx j).mapM instantiateMVars
      let some restPf ← cancelProof lhs' rhs' | return none
      let (_, lhsPull, _) ← pullClause (← lhs.mapM instantiateMVars) i
      let (r', _, rhsPull) ← pullClause (← rhs.mapM instantiateMVars) j
      let midPf ← `(expr| Entails.sep_congr (Entails.refl $r') $restPf)
      return some (← `(expr| Entails.trans $lhsPull (Entails.trans $midPf $rhsPull)))
    if let some pf := res? then return some pf
    if closedPair && (← isDefEq l r) then return none
  return none

/-- Builds a proof of `P ⊢ₛ Q` if `P` cancels into `Q`. -/
def solveEntails (P Q : Expr) : MetaM (Option Expr) := do
  withConfig (fun cfg => { cfg with assignSyntheticOpaque := true }) do
    let (lhs, toNorm, _) ← normalizeSep P
    let (rhs, _, fromNorm) ← normalizeSep Q
    let some mid ← cancelProof lhs rhs | return none
    return some (← `(expr| Entails.trans $toNorm (Entails.trans $mid $fromNorm)))

private def applyAndIntro (rule : Name) : TacticM Unit := do
  replaceMainGoal (← (← getMainGoal).apply (← mkConstWithFreshMVarLevels rule))
  evalTactic (← `(tactic| intro _))

/-- One step of `sep_cancel`: peels `ex`/`pure`, cancels `Entails`, or discharges `Holds`. -/
partial def sepCancelStep : TacticM Unit := withMainContext do
  let g ← getMainGoal
  let tgt ← getMainTarget
  match tgt with
  | `(expr| Entails (HProp.ex _) _) => applyAndIntro ``Entails.ex_l
  | `(expr| Entails (HProp.sep (HProp.pure _) _) _) => applyAndIntro ``Entails.pure_l
  | `(expr| Entails _ (HProp.ex _)) =>
    replaceMainGoal (← g.apply (← mkConstWithFreshMVarLevels ``Entails.ex_r))
  | `(expr| Entails _ (HProp.sep (HProp.pure _) _)) =>
    andThenSubgoals (do replaceMainGoal (← g.apply (mkConst ``Entails.pure_r)))
      (first := whileGoals sepCancelStep)
      (rest := evalTactic (← `(tactic| try (first | rfl | assumption | omega | decide))))
  | `(expr| Entails ?P ?Q) =>
    if let some pf ← solveEntails P Q then g.assign pf; replaceMainGoal []
    else throwError "sep_cancel: cannot prove{indentExpr tgt}"
  | `(expr| Exists _) =>
    replaceMainGoal (← g.apply (← mkConstWithFreshMVarLevels ``Exists.intro))
  | `(expr| Holds ?h ?Q) =>
    let some pf ← g.firstHyp? fun hyp hypTy => do
        let `(expr/reducible| Holds ?h' ?P) := hypTy | failure
        unless ← isDefEq h' h do failure
        let some entPf ← solveEntails P Q | failure
        `(expr| ($entPf : Entails $P $Q) $h $hyp)
      | throwError "sep_cancel: no matching heap hypothesis for{indentExpr tgt}"
    g.assign pf; replaceMainGoal []
  | _ => throwError "sep_cancel: unsupported goal{indentExpr tgt}"

scoped elab "sep_cancel" : tactic => whileGoals sepCancelStep
end Tactic

/-! ## Examples -/

theorem cancel_reorder_frame (l₁ l₂ : Addr) (v₁ v₂ : Nat) (F : HProp) :
    l₁ ↦ v₁ ∗ l₂ ↦ v₂ ∗ F ⊢ₛ F ∗ l₂ ↦ v₂ ∗ l₁ ↦ v₁ := by sep_cancel

theorem emp_normalization (l₁ l₂ : Addr) :
    (HProp.emp ∗ l₁ ↦ 1) ∗ (l₂ ↦ 2 ∗ HProp.emp) ⊢ₛ l₂ ↦ 2 ∗ HProp.emp ∗ l₁ ↦ 1 := by sep_cancel

theorem cancel_exists_and_pure (l₁ l₂ : Addr) :
    (∃ʰ u, ⌜2 < 5⌝ ∗ l₁ ↦ u ∗ l₂ ↦ 10) ⊢ₛ ∃ʰ F, ∃ʰ v, ⌜v > 5⌝ ∗ l₂ ↦ v ∗ F := by sep_cancel

/--
`MVarId.firstHyp?` iterates newest-first and rolls back any witness unification (`?w := 99`)
made while testing `_hWrong` before succeeding on `hRight` (`?w := 42`).
-/
theorem holds_backtrack_hyps (h hOther : Heap) (l₁ l₂ l₃ : Addr)
    (hRight : h ⊨ l₁ ↦ 42 ∗ l₂ ↦ 7) (_hWrong : h ⊨ l₁ ↦ 99 ∗ l₃ ↦ 9)
    (_hDiffHeap : hOther ⊨ l₁ ↦ 42 ∗ l₂ ↦ 7) :
    ∃ w, h ⊨ l₁ ↦ w ∗ l₂ ↦ 7 := by sep_cancel

end ExprQuotUseCaseSepLogic
