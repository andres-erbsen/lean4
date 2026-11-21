/-!
Regression tests for `PartialFixpoint` (`mkIsMeetProof`) with `expr` quotations:
- Mutual dependent-parameter `inductive_fixpoint` & `coinductive_fixpoint` predicates exercising
  Miller-pattern higher-order unification in `is_meet_pi` and multi-component `is_meet_pprod`.
-/

namespace PartialFixpointExprQuotTest

mutual
  def depEven : (n : Nat) → Fin n → Prop
    | 0, _ => False
    | n + 1, i => i.val = 0 ∨ ∃ j : Fin n, i.val = j.val + 1 ∧ depOdd n j
  inductive_fixpoint

  def depOdd : (n : Nat) → Fin n → Prop
    | 0, _ => False
    | n + 1, i => ∃ j : Fin n, i.val = j.val + 1 ∧ depEven n j
  inductive_fixpoint
end

/--
info: PartialFixpointExprQuotTest.depEven.strong_induct (pred_1 pred_2 : (n : Nat) → Fin n → Prop)
  (hyp_1 :
    ∀ (n : Nat) (a : Fin n),
      (match n, a with
        | 0, x => False
        | n.succ, i => ↑i = 0 ∨ ∃ j, ↑i = ↑j + 1 ∧ pred_2 n j ∧ depOdd n j) →
        pred_1 n a)
  (hyp_2 :
    ∀ (n : Nat) (a : Fin n),
      (match n, a with
        | 0, x => False
        | n.succ, i => ∃ j, ↑i = ↑j + 1 ∧ pred_1 n j ∧ depEven n j) →
        pred_2 n a)
  (n : Nat) (a✝ : Fin n) : depEven n a✝ → pred_1 n a✝
-/
#guard_msgs in
#check depEven.strong_induct

theorem depEven_or_depOdd_pos {n : Nat} {i : Fin n} (h : depEven n i) : 0 < n := by
  refine depEven.mutual_induct (fun n _ => 0 < n) (fun n _ => 0 < n) ?_ ?_ |>.1 n i h
  · intro m j hm
    cases m with
    | zero => cases hm
    | succ k => exact Nat.succ_pos k
  · intro m j hm
    cases m with
    | zero => cases hm
    | succ k => exact Nat.succ_pos k

mutual
  def depCoA (n : Nat) (i : Fin n) : Prop := i.val < n ∧ depCoB n i
  coinductive_fixpoint

  def depCoB (n : Nat) (i : Fin n) : Prop := depCoA n i
  coinductive_fixpoint
end

/--
info: PartialFixpointExprQuotTest.depCoA.strong_coinduct (n : Nat) (i : Fin n) (pred_1 pred_2 : Prop)
  (hyp_1 : pred_1 → ↑i < n ∧ (pred_2 ∨ depCoB n i)) (hyp_2 : pred_2 → pred_1 ∨ depCoA n i) : pred_1 → depCoA n i
-/
#guard_msgs in
#check depCoA.strong_coinduct

theorem depCoA_holds (n : Nat) (i : Fin n) : depCoA n i :=
  depCoA.coinduct n i True True (fun _ => ⟨i.isLt, trivial⟩) (fun _ => trivial) trivial

-- Varying dependent parameters in `coinductive_fixpoint`.
mutual
  def depCoA2 : (n : Nat) → Fin n → Prop
    | n, i => i.val < n ∧ depCoB2 n i
  coinductive_fixpoint

  def depCoB2 : (n : Nat) → Fin n → Prop
    | n, i => depCoA2 n i
  coinductive_fixpoint
end

theorem depCoA2_holds (n : Nat) (i : Fin n) : depCoA2 n i :=
  depCoA2.coinduct (fun _ _ => True) (fun _ _ => True)
    (fun _ i _ => ⟨i.isLt, trivial⟩) (fun _ _ _ => trivial) n i trivial

end PartialFixpointExprQuotTest
