import Lean

/-!
# FRAP Reflection & Transition Systems (`ProofByReflection.v` & `TransitionSystems.v`)

Ports two core automation patterns from Adam Chlipala's *Formal Reasoning About Programs*:
- **Part A (`ProofByReflection.v`)**: Verified classical propositional sequent checker
  (`Formula`, `formulaDenote`, `checkFormula_sound`) and `my_tauto` reification using
  `ExprTemplate` and an explicit `isProp` arrow guard for non-dependent `Type → Prop` arrows.
- **Part B (`TransitionSystems.v`)**: `invertHyp`, `frap_simp` (`propositional` + `Exists`
  inversion + `omega`), and `[lockSys, TrSys.step]` pattern unfolding proving mutual exclusion
  and counter invariants for a two-thread lock transition system.
-/

namespace ExprQuotUseCaseFrap
open Lean Meta Elab Tactic

/-! ## Part A: Verified Propositional Sequent Reflection (`ProofByReflection.v`) -/

inductive Formula where
  | atomic (v : Nat) | truth | falsehood | not (f : Formula)
  | and (f1 f2 : Formula) | or (f1 f2 : Formula) | imp (f1 f2 : Formula)

def Formula.size : Formula → Nat
  | .atomic _ | .truth | .falsehood => 1
  | .not f => f.size + 1
  | .and f1 f2 | .or f1 f2 | .imp f1 f2 => f1.size + f2.size + 1

def formulaDenote (env : Nat → Prop) : Formula → Prop
  | .atomic v => env v | .truth => True | .falsehood => False
  | .not f => ¬ formulaDenote env f
  | .and f1 f2 => formulaDenote env f1 ∧ formulaDenote env f2
  | .or f1 f2 => formulaDenote env f1 ∨ formulaDenote env f2
  | .imp f1 f2 => formulaDenote env f1 → formulaDenote env f2

def nthProp : List Prop → Nat → Prop
  | [], _ => False | p :: _, 0 => p | _ :: ps, n + 1 => nthProp ps n

/-- Structurally recursive sequent checker so `checkFormula f = true` reduces by kernel `rfl`. -/
def checkSequentFuel : Nat → List Formula → List Nat → List Formula → List Nat → Bool
  | 0, _, _, _, _ => false
  | fuel + 1, h :: hyps', atomsH, goals, atomsG =>
    match h with
    | .atomic v => if atomsG.contains v then true
        else checkSequentFuel fuel hyps' (v :: atomsH) goals atomsG
    | .truth => checkSequentFuel fuel hyps' atomsH goals atomsG
    | .falsehood => true
    | .not h' => checkSequentFuel fuel hyps' atomsH (h' :: goals) atomsG
    | .and h1 h2 => checkSequentFuel fuel (h1 :: h2 :: hyps') atomsH goals atomsG
    | .or h1 h2 => checkSequentFuel fuel (h1 :: hyps') atomsH goals atomsG &&
        checkSequentFuel fuel (h2 :: hyps') atomsH goals atomsG
    | .imp h1 h2 => checkSequentFuel fuel hyps' atomsH (h1 :: goals) atomsG &&
        checkSequentFuel fuel (h2 :: hyps') atomsH goals atomsG
  | fuel + 1, [], atomsH, g :: goals', atomsG =>
    match g with
    | .atomic v => if atomsH.contains v then true
        else checkSequentFuel fuel [] atomsH goals' (v :: atomsG)
    | .truth => true
    | .falsehood => checkSequentFuel fuel [] atomsH goals' atomsG
    | .not g' => checkSequentFuel fuel [g'] atomsH goals' atomsG
    | .and g1 g2 => checkSequentFuel fuel [] atomsH (g1 :: goals') atomsG &&
        checkSequentFuel fuel [] atomsH (g2 :: goals') atomsG
    | .or g1 g2 => checkSequentFuel fuel [] atomsH (g1 :: g2 :: goals') atomsG
    | .imp g1 g2 => checkSequentFuel fuel [g1] atomsH (g2 :: goals') atomsG
  | _ + 1, [], _, [], _ => false

def checkFormula (f : Formula) : Bool := checkSequentFuel (f.size + 1) [] [] [f] []

private def allF (env : Nat → Prop) : List Formula → Prop
  | [] => True | f :: fs => formulaDenote env f ∧ allF env fs
private def anyF (env : Nat → Prop) : List Formula → Prop
  | [] => False | f :: fs => formulaDenote env f ∨ anyF env fs

theorem checkSequentFuel_sound (env : Nat → Prop) :
    ∀ fuel hyps atomsH goals atomsG,
      (∀ v ∈ atomsH, env v) → allF env hyps →
      checkSequentFuel fuel hyps atomsH goals atomsG = true →
      (∃ v ∈ atomsG, env v) ∨ anyF env goals
  | 0, _, _, _, _, _, _, hOk => by simp [checkSequentFuel] at hOk
  | fuel + 1, h :: hyps', atomsH, goals, atomsG, hH, ⟨hh, hHyps'⟩, hOk => by
    have ih := checkSequentFuel_sound env fuel
    cases h with
    | atomic v =>
      simp only [checkSequentFuel] at hOk; split at hOk
      · next hc => exact Or.inl ⟨v, List.mem_of_elem_eq_true hc, hh⟩
      · exact ih hyps' (v :: atomsH) goals atomsG
          (fun _ hu => (List.mem_cons.mp hu).elim (· ▸ hh) (hH _)) hHyps' hOk
    | truth => exact ih hyps' atomsH goals atomsG hH hHyps' hOk
    | falsehood => exact False.elim hh
    | not h' =>
      exact (ih hyps' atomsH (h' :: goals) atomsG hH hHyps' hOk).elim
        Or.inl (·.elim (False.elim ∘ hh) Or.inr)
    | and h1 h2 => exact ih (h1 :: h2 :: hyps') atomsH goals atomsG hH ⟨hh.1, hh.2, hHyps'⟩ hOk
    | or h1 h2 =>
      simp only [checkSequentFuel, Bool.and_eq_true] at hOk
      exact hh.elim (fun h1 => ih (_ :: hyps') atomsH goals atomsG hH ⟨h1, hHyps'⟩ hOk.1)
        (fun h2 => ih (_ :: hyps') atomsH goals atomsG hH ⟨h2, hHyps'⟩ hOk.2)
    | imp h1 h2 =>
      simp only [checkSequentFuel, Bool.and_eq_true] at hOk
      by_cases h1t : formulaDenote env h1
      · exact ih (h2 :: hyps') atomsH goals atomsG hH ⟨hh h1t, hHyps'⟩ hOk.2
      · exact (ih hyps' atomsH (h1 :: goals) atomsG hH hHyps' hOk.1).elim
          Or.inl (·.elim (False.elim ∘ h1t) Or.inr)
  | fuel + 1, [], atomsH, g :: goals', atomsG, hH, _, hOk => by
    have ih := checkSequentFuel_sound env fuel
    cases g with
    | atomic v =>
      simp only [checkSequentFuel] at hOk; split at hOk
      · next hc => exact Or.inr (Or.inl (hH v (List.mem_of_elem_eq_true hc)))
      · exact (ih [] atomsH goals' (v :: atomsG) hH trivial hOk).elim
          (fun ⟨u, hu, he⟩ => (List.mem_cons.mp hu).elim
            (fun h => Or.inr (Or.inl (h ▸ he))) (fun hu' => Or.inl ⟨u, hu', he⟩))
          (Or.inr ∘ Or.inr)
    | truth => exact Or.inr (Or.inl trivial)
    | falsehood => exact (ih [] atomsH goals' atomsG hH trivial hOk).elim Or.inl (Or.inr ∘ Or.inr)
    | not g' =>
      by_cases hg : formulaDenote env g'
      · exact (ih [g'] atomsH goals' atomsG hH ⟨hg, trivial⟩ hOk).elim Or.inl (Or.inr ∘ Or.inr)
      · exact Or.inr (Or.inl hg)
    | and g1 g2 =>
      simp only [checkSequentFuel, Bool.and_eq_true] at hOk
      exact (ih [] atomsH (g1 :: goals') atomsG hH trivial hOk.1).elim Or.inl
        (·.elim (fun hg1 => (ih [] atomsH (g2 :: goals') atomsG hH trivial hOk.2).elim
          Or.inl (·.elim (fun hg2 => Or.inr (Or.inl ⟨hg1, hg2⟩)) (Or.inr ∘ Or.inr)))
          (Or.inr ∘ Or.inr))
    | or g1 g2 =>
      exact (ih [] atomsH (g1 :: g2 :: goals') atomsG hH trivial hOk).elim Or.inl
        (·.elim (Or.inr ∘ Or.inl ∘ Or.inl) (·.elim (Or.inr ∘ Or.inl ∘ Or.inr) (Or.inr ∘ Or.inr)))
    | imp g1 g2 =>
      by_cases hg1 : formulaDenote env g1
      · exact (ih [g1] atomsH (g2 :: goals') atomsG hH ⟨hg1, trivial⟩ hOk).elim Or.inl
          (·.elim (fun hg2 => Or.inr (Or.inl fun _ => hg2)) (Or.inr ∘ Or.inr))
      · exact Or.inr (Or.inl fun h => False.elim (hg1 h))
  | _ + 1, [], _, [], _, _, _, hOk => by simp [checkSequentFuel] at hOk

theorem checkFormula_sound (env : Nat → Prop) (f : Formula)
    (hOk : checkFormula f = true) : formulaDenote env f := by
  rcases checkSequentFuel_sound env (f.size + 1) [] [] [f] [] (fun _ h => nomatch h) trivial hOk
    with ⟨_, h, _⟩ | h | h <;> first | exact h | cases h

private def position (x : Expr) (ls : List Expr) : MetaM (Option Nat) := do
  for (y, i) in ls.zipIdx do
    if let `(expr| $x) := y then return some i
  return none

/-- Guards `(expr| ?Q1 → ?Q2)` so `Type → Prop` arrows (e.g. `Nat → P`) remain atomic. -/
private def isPropImp? (e : Expr) : MetaM (Option (Expr × Expr)) := do
  let `(expr| ?Q1 → ?Q2) := e | return none
  if (← isProp Q1) && (← isProp Q2) then return some (Q1, Q2) else return none

private partial def varsIn (P : Expr) (acc : List Expr) : MetaM (List Expr) := do
  match P with
  | `(expr| True) | `(expr| False) => return acc
  | `(expr| ¬ ?Q) => varsIn Q acc
  | `(expr| ?Q1 ∧ ?Q2) | `(expr| ?Q1 ∨ ?Q2) => varsIn Q2 (← varsIn Q1 acc)
  | _ =>
    if let some (Q1, Q2) ← isPropImp? P then varsIn Q2 (← varsIn Q1 acc)
    else if (← position P acc).isSome then return acc else return P :: acc

private partial def reifyFormula (P : Expr) (vars : List Expr) : MetaM Expr := do
  match P with
  | `(expr| True) => `(expr| Formula.truth)
  | `(expr| False) => `(expr| Formula.falsehood)
  | `(expr| ¬ ?Q) => `(expr| Formula.not $(← reifyFormula Q vars))
  | `(expr| ?Q1 ∧ ?Q2) => `(expr| Formula.and $(← reifyFormula Q1 vars) $(← reifyFormula Q2 vars))
  | `(expr| ?Q1 ∨ ?Q2) => `(expr| Formula.or $(← reifyFormula Q1 vars) $(← reifyFormula Q2 vars))
  | _ =>
    if let some (Q1, Q2) ← isPropImp? P then
      `(expr| Formula.imp $(← reifyFormula Q1 vars) $(← reifyFormula Q2 vars))
    else
      let some idx ← position P vars | throwError "reifyFormula: unbound atom {P}"
      `(expr| Formula.atomic $(mkNatLit idx))

/--
Rocq original (`frap/ProofByReflection.v`):
```coq
Ltac my_tauto :=
  repeat match goal with
  | [ |- forall x : ?P, _ ] => match type of P with Prop => fail 1 | _ => intro end
  end;
  match goal with
  | [ |- ?P ] => let vars := vars_in P (@nil Prop) in let p := reify_tauto' P vars in
      change (formulaDenote (nth_default False vars) p)
  end; apply backward_ok; reflexivity.
```
Key differences: `isPropImp?` explicitly checks `isProp Q1 && isProp Q2` so non-dependent
`Type → Prop` arrows (`Nat → P`) stay atomic, and `ExprTemplate` slices annotate `List Prop`.
-/
scoped elab "my_tauto" : tactic => do
  while true do
    let `(expr| ∀ _ : ?T, _) ← withMainContext getMainTarget | break
    if ← withMainContext (isProp T) then break
    evalTactic (← `(tactic| intro))
  withMainContext do
    let tgt ← getMainTarget
    let vars ← varsIn tgt []
    let varsExpr ← vars.foldrM (fun v acc => `(expr| ($v : Prop) :: ($acc : List Prop)))
      (← `(expr| ([] : List Prop)))
    let denoted ← `(expr| formulaDenote (nthProp $varsExpr) $(← reifyFormula tgt vars))
    replaceMainGoal [← (← getMainGoal).replaceTargetDefEq denoted]
    liftMetaTactic fun g => g.apply (mkConst ``checkFormula_sound)
    evalTactic (← `(tactic| rfl))

theorem tauto_quantified_and_nonprop_arrow (Even : Nat → Prop)
    (D : ∀ n, n > 0 → Prop) (k : Nat) (Q : Prop) :
    ((∀ n : Nat, Even n) → (Nat → Q) → (∀ h : k > 0, D k h)) →
    ¬ (∀ h : k > 0, D k h) → (Nat → Q) → ¬ (∀ m : Nat, Even m) := by
  my_tauto

theorem tauto_classical_peirce (A B : Prop) :
    (((A → B) → A) → A) ∧ (B ∨ ¬ B) ∧ (False → True) := by
  my_tauto

/-! ## Part B: Transition-System Invariants (`TransitionSystems.v`) -/

private def tryCommit (t : TacticM Unit) : TacticM Bool :=
  Term.withoutTacticIncrementality true <| Term.withoutErrToSorry <| withoutRecover do
    let s ← Tactic.saveState
    Tactic.tryCatch (t *> pure true) fun _ => do s.restore (restoreInfo := true); return false

private partial def repeatAll (t : TacticM Unit) : TacticM Unit := do
  let mut acc := #[]
  for g in ← getUnsolvedGoals do
    setGoals [g]
    if ← tryCommit t then repeatAll t; acc := acc ++ (← getUnsolvedGoals)
    else acc := acc.push g
  setGoals acc.toList

private def allGoals (t : TacticM Unit) : TacticM Unit := do
  let mut acc := #[]
  for g in ← getUnsolvedGoals do
    setGoals [g]; t; acc := acc ++ (← getUnsolvedGoals)
  setGoals acc.toList

/-- Case-splits `h` (generalizing non-`fvar` indices if needed) and prunes contradictions. -/
def invertHyp (h : Expr) : TacticM Unit := focus do
  liftMetaTactic fun g => g.withContext do
    let s ← saveState
    let gs ← try pure ((← g.cases h.fvarId!).toList.map (·.mvarId)) catch _ =>
      restoreState s
      let ty ← whnf (← inferType h)
      let .const indName _ := ty.getAppFn | throwError "invertHyp: not inductive: {ty}"
      let .inductInfo indVal ← getConstInfo indName | throwError "invertHyp: not inductive"
      let genArgs := (ty.getAppArgs[indVal.numParams:].toArray.filter (!·.isFVar)).map fun a =>
        { expr := a, xName? := some `idx, hName? := some `heq : GeneralizeArg }
      if genArgs.isEmpty then throwError "invertHyp: cases failed on {h} : {ty}"
      let (fvarSubst, _, g') ← g.generalizeHyp genArgs #[h.fvarId!]
      pure ((← g'.cases (fvarSubst.apply h).fvarId!).toList.map (·.mvarId))
    gs.filterM fun g' => notM (g'.contradictionCore { emptyType := false })
  allGoals (evalTactic (← `(tactic| try subst_vars)))

private def propositionalStep : TacticM Unit := withMainContext do
  let g ← getMainGoal
  let tgt ← getMainTarget
  let hyps ← localHypTypes (reverse := true)
  for case (h, `(expr/reducible| $tgt)) in hyps do g.assign h; replaceMainGoal []; return
  match tgt with
  | `(expr/reducible| True) => g.assign (mkConst ``True.intro); replaceMainGoal []; return
  | `(expr/reducible| ?x = $x) => let _ := x; evalTactic (← `(tactic| rfl)); return
  | `(expr/reducible| _ ∧ _) => replaceMainGoal (← g.apply (mkConst ``And.intro)); return
  | `(expr/reducible| _ ↔ _) => replaceMainGoal (← g.apply (mkConst ``Iff.intro)); return
  | `(expr/reducible| ¬ _) => evalTactic (← `(tactic| intro)); return
  | `(expr/reducible| (?P : Prop) → _) => let _ := P; evalTactic (← `(tactic| intro)); return
  | _ => pure ()
  for (h, ty) in hyps do
    match ty with
    | `(expr/reducible| False) | `(expr/reducible| _ ∧ _)
    | `(expr/reducible| _ ∨ _) | `(expr/reducible| Exists _) =>
      replaceMainGoal ((← g.cases h.fvarId!).toList.map (·.mvarId)); return
    | _ => pure ()
  firstHyp fun h1 => fun
    | `(expr/reducible| (?P : Prop) → ?Q) => do
      let _ := Q
      firstHyp (except := [h1]) fun h2 => fun
        | `(expr/reducible| $P) => do
          let (_, g') ← g.withContext <| g.note (← h1.fvarId!.getUserName) (mkApp h1 h2)
          replaceMainGoal [← g'.clear h1.fvarId!]
        | _ => failure
    | _ => failure

private def frapSimpStep : TacticM Unit := do
  let snap : TacticM _ := do (← getUnsolvedGoals).mapM fun g => g.withContext do
    return (← instantiateMVars (← g.getType), (← localHypTypes).size)
  let before ← snap
  allGoals do
    evalTactic (← `(tactic| intros))
    evalTactic (← `(tactic| try simp only [eq_self_iff_true, true_and, and_true, true_or, or_true,
      true_implies, false_implies, not_true_eq_false, not_false_eq_true,
      Bool.false_eq_true, Bool.true_eq_false] at *))
    evalTactic (← `(tactic| try subst_vars))
  repeatAll propositionalStep
  let gs ← (← getUnsolvedGoals).filterM fun g => notM (g.contradictionCore { emptyType := false })
  setGoals gs
  if before == (← snap) then throwError "frap_simp: no progress"

scoped elab "frap_simp" : tactic => do
  repeatAll frapSimpStep
  allGoals (evalTactic (← `(tactic| try omega)))

inductive PC where | idle | crit deriving DecidableEq
abbrev LockState := PC × PC × Bool × Nat × Nat × Nat

inductive LockStep : LockState → LockState → Prop where
  | enter1 : LockStep (.idle, pc2, false, c1, c2, tot) (.crit, pc2, true, c1, c2, tot)
  | exit1  : LockStep (.crit, pc2, l, c1, c2, tot) (.idle, pc2, false, c1 + 1, c2, tot + 1)
  | enter2 : LockStep (pc1, .idle, false, c1, c2, tot) (pc1, .crit, true, c1, c2, tot)
  | exit2  : LockStep (pc1, .crit, l, c1, c2, tot) (pc1, .idle, false, c1, c2 + 1, tot + 1)

structure TrSys (St : Type) where
  initial : St → Prop
  step : St → St → Prop

def lockSys : TrSys LockState where
  initial s := ∃ n, s = (.idle, .idle, false, n, 0, n)
  step := LockStep

inductive Reachable (sys : TrSys St) : St → Prop where
  | init : sys.initial s → Reachable sys s
  | step : Reachable sys s → sys.step s s' → Reachable sys s'

/--
Rocq original (`frap/TransitionSystems.v`):
```coq
Theorem invariant_induction : forall (V : Type) (sys : trsys V) (P : V -> Prop),
  (forall s, initial sys s -> P s) ->
  (forall s s', step sys s s' -> P s -> P s') ->
  forall s, invariantFor sys s -> P s.
```
-/
theorem invariant_induction (sys : TrSys St) (inv : St → Prop)
    (hInit : ∀ s, sys.initial s → inv s) (hStep : ∀ s s', sys.step s s' → inv s → inv s') :
    ∀ s, Reachable sys s → inv s := by
  intro s h; induction h with | init hi => exact hInit _ hi | step _ hs ih => exact hStep _ _ hs ih

/-- `[lockSys, TrSys.step]` lets `expr/reducible` unfold `lockSys.step` into `LockStep` inline. -/
scoped elab "invert_lock_step" : tactic => repeatAll <|
  firstHyp fun h => fun
    | `(expr/reducible [lockSys, TrSys.step]| LockStep _ _) => invertHyp h
    | _ => failure

def lockInv : LockState → Prop
  | (pc1, pc2, locked, c1, c2, tot) =>
    (pc1 = .crit → locked = true) ∧ (pc2 = .crit → locked = true) ∧
    ¬ (pc1 = .crit ∧ pc2 = .crit) ∧ (locked = true → pc1 = .crit ∨ pc2 = .crit) ∧
    tot = c1 + c2

theorem lockSys_invariant : ∀ s, Reachable lockSys s → lockInv s := by
  apply invariant_induction
  · intro s hInit; dsimp [lockSys] at hInit; frap_simp
    all_goals dsimp [lockInv]; frap_simp
  · intro s s' hStep hInv; invert_lock_step
    all_goals (dsimp [lockInv] at *; frap_simp)

theorem lockSys_mutex : ∀ s, Reachable lockSys s → ¬ (s.1 = .crit ∧ s.2.1 = .crit) :=
  fun s h => (lockSys_invariant s h).2.2.1

end ExprQuotUseCaseFrap
