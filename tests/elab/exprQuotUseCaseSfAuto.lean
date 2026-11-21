import Lean

/-!
# Software Foundations (`Auto.v` & `SearchTree.v`) with `expr` Quotations

Self-contained ports of two classic Rocq `match goal` chapters:
- **Part A (`Auto.v`)**: `Imp` with `repeat`, `find_rwd` (`firstHyp` + `$E` pin), and `find_eqn`
  using Miller higher-order `?L x = ?R x` patterns to prove `ceval_deterministic'`.
- **Part B (`SearchTree.v`)**: `Tree`, `bound`, `lookup`, `insert`, `ForallT`, `BST`,
  `bdestruct` / `bdestruct_guard`, and `bdall` proving BST `lookup` / `insert` invariants.
-/

namespace ExprQuotUseCaseSfAuto
open Lean Meta Elab Tactic

/-- Runs `t` without incrementality/recovery, committing on success and restoring state on error. -/
def tryCommit (t : TacticM Unit) : TacticM Bool :=
  Term.withoutTacticIncrementality true <| Term.withoutErrToSorry <| withoutRecover do
    let s ← Tactic.saveState
    Tactic.tryCatch (t *> pure true) fun _ => do s.restore (restoreInfo := true); return false

/-- Ltac's `repeat t` across all current goals, stopping per branch when `t` fails. -/
partial def repeatAll (t : TacticM Unit) : TacticM Unit := do
  let mut acc := #[]
  for g in ← getUnsolvedGoals do
    setGoals [g]
    if ← tryCommit t then repeatAll t; acc := acc ++ (← getUnsolvedGoals)
    else acc := acc.push g
  setGoals acc.toList

private def goalSnapshot (g : MVarId) : MetaM (Expr × Array Expr) := g.withContext do
  return (← instantiateMVars (← g.getType), (← localHypTypes).map (·.2))

/-! ## Part A: Software Foundations Vol. 1 (`Auto.v`) -/

abbrev State := String → Nat
def tUpdate (st : State) (x : String) (v : Nat) : State := fun x' => if x == x' then v else st x'

inductive AExp where | num (n : Nat) | id (x : String) | plus (a₁ a₂ : AExp)
inductive BExp where | btrue | bfalse | beq (a₁ a₂ : AExp) | bnot (b : BExp)
def aeval (st : State) : AExp → Nat
  | .num n => n | .id x => st x | .plus a₁ a₂ => aeval st a₁ + aeval st a₂
def beval (st : State) : BExp → Bool
  | .btrue => true | .bfalse => false
  | .beq a₁ a₂ => aeval st a₁ == aeval st a₂ | .bnot b => !beval st b

inductive Com where
  | skip | asgn (x : String) (a : AExp) | seq (c₁ c₂ : Com)
  | ite (b : BExp) (c₁ c₂ : Com) | while (b : BExp) (c : Com) | repeat (c : Com) (b : BExp)

inductive Ceval : Com → State → State → Prop where
  | skip : Ceval .skip st st
  | asgn : aeval st a = n → Ceval (.asgn x a) st (tUpdate st x n)
  | seq : Ceval c₁ st st' → Ceval c₂ st' st'' → Ceval (.seq c₁ c₂) st st''
  | ifTrue : beval st b = true → Ceval c₁ st st' → Ceval (.ite b c₁ c₂) st st'
  | ifFalse : beval st b = false → Ceval c₂ st st' → Ceval (.ite b c₁ c₂) st st'
  | whileFalse : beval st b = false → Ceval (.while b c) st st
  | whileTrue : beval st b = true → Ceval c st st' → Ceval (.while b c) st' st'' →
      Ceval (.while b c) st st''
  | repeatEnd : Ceval c st st' → beval st' b = true → Ceval (.repeat c b) st st'
  | repeatLoop : Ceval c st st' → beval st' b = false → Ceval (.repeat c b) st' st'' →
      Ceval (.repeat c b) st st''

/--
Rocq original (`Auto.v`):
```coq
Ltac find_rwd := match goal with
  | H1: ?E = true, H2: ?E = false |- _ =>
      let H := fresh in assert (H: True) by (rewrite H1 in H2; inversion H2)
  end.
```
`firstHyp` with `except := [h1]` and `$E` pin closes directly via `mkNoConfusion`.
-/
scoped elab "find_rwd" : tactic => do
  firstHyp fun h1 => fun
    | `(expr/reducible| (?E : Bool) = true) =>
      firstHyp (except := [h1]) fun h2 => fun
        | `(expr/reducible| ($E : Bool) = false) => do
          let g ← getMainGoal
          g.assign (← mkNoConfusion (← g.getType) (← mkEqTrans (← mkEqSymm h1) h2))
          replaceMainGoal []
        | _ => failure
    | _ => failure

/--
Rocq original (`Auto.v`):
```coq
Ltac find_eqn := match goal with
  | H1: forall x, ?P x -> ?L = ?R, H2: ?P ?X |- _ => rewrite (H1 X H2) in *
  end.
```
Miller higher-order `?L x = ?R x` avoids variable-escape rejection when `x` occurs in `R`;
`Lean.Meta.subst` eliminates `FVar` equations globally across the telescope, while a snapshot
progress check terminates `repeat find_eqn` on non-`FVar` rewrites.
-/
scoped elab "find_eqn" : tactic => do
  firstHyp fun h1 ty1 => do
    let `(expr/reducible| ∀ x, ?P x → ?L x = ?R x) := ty1 | failure
    let _ := (L, R)
    firstHyp (except := [h1]) fun h2 ty2 => do
      let `(expr/reducible| $P ?X) := ty2 | failure
      let pf := mkAppN h1 #[X, h2]
      let some (_, lhs, rhs) := (← inferType pf).eq? | failure
      if ← isDefEq lhs rhs then failure
      let g ← getMainGoal
      let before ← goalSnapshot g
      let uname ← g.withContext do return (← getLCtx).getUnusedName `heq
      let (fv, g') ← g.withContext <| g.note uname pf
      if lhs.isFVar || rhs.isFVar then
        if let some g'' ← observing? (Lean.Meta.subst g' fv) then
          replaceMainGoal [g'']; return
      replaceMainGoal [g']
      let id := mkIdent uname
      unless ← tryCommit (evalTactic (← `(tactic| (rw [$id:ident] at *; try clear $id:ident)))) do
        failure
      if before == (← goalSnapshot (← getMainGoal)) then failure

/-- Rocq `Auto.v` theorem `ceval_deterministic'`. -/
theorem ceval_deterministic' (c : Com) (st st₁ st₂ : State)
    (E₁ : Ceval c st st₁) (E₂ : Ceval c st st₂) : st₁ = st₂ := by
  induction E₁ generalizing st₂ <;> cases E₂
  all_goals (try subst_vars)
  all_goals repeat find_eqn
  all_goals try find_rwd
  all_goals try rfl

example (f g : Nat → Nat) (P : Nat → Prop) (a : Nat)
    (h1 : ∀ x, P x → f x = g x) (h2 : P a) (h3 : g a = 42) : f a = 42 := by
  repeat find_eqn
  exact h3

/-! ## Part B: Verified Functional Algorithms (`SearchTree.v`) -/

abbrev Key := Nat
inductive Tree (V : Type) where
  | E : Tree V | T (l : Tree V) (k : Key) (v : V) (r : Tree V)
def emptyTree {V : Type} : Tree V := .E
def bound {V : Type} (x : Key) : Tree V → Bool
  | .E => false | .T l y _ r => if x < y then bound x l else if x > y then bound x r else true
def lookup {V : Type} (d : V) (x : Key) : Tree V → V
  | .E => d | .T l y v r => if x < y then lookup d x l else if x > y then lookup d x r else v
def insert {V : Type} (x : Key) (v : V) : Tree V → Tree V
  | .E => .T .E x v .E
  | .T l y v' r => if x < y then .T (insert x v l) y v' r
    else if x > y then .T l y v' (insert x v r) else .T l x v r
def ForallT {V : Type} (P : Key → V → Prop) : Tree V → Prop
  | .E => True | .T l k v r => P k v ∧ ForallT P l ∧ ForallT P r
inductive BST {V : Type} : Tree V → Prop where
  | E : BST .E
  | T {l : Tree V} {x : Key} {v : V} {r : Tree V} :
      ForallT (fun y _ => y < x) l → ForallT (fun y _ => y > x) r →
      BST l → BST r → BST (.T l x v r)

theorem bool_false_of_iff_not {b : Bool} {P : Prop} (hiff : b = true ↔ P) (hn : ¬ P) :
    b = false := Bool.eq_false_iff.mpr (mt hiff.mp hn)

private inductive GuardKind where | prop (p : Expr) | bool (p iffPf : Expr)

private def matchNatRel? (e : Expr) : MetaM (Option Expr) := do
  match (modulo := reducible) e with
  | `((?X : Nat) = ?Y) => some <$> `(expr| ($X : Nat) = $Y)
  | `((?X : Nat) ≤ ?Y) => some <$> `(expr| ($X : Nat) ≤ $Y)
  | `((?X : Nat) < ?Y) => some <$> `(expr| ($X : Nat) < $Y)
  | _ => return none

private def matchBoolCmp? (b : Expr) : MetaM (Option GuardKind) := do
  match (modulo := reducible) b with
  | `(Nat.beq ?X ?Y) =>
    return some (.bool (← `(expr| ($X : Nat) = $Y)) (← `(expr| Iff.of_eq (@Nat.beq_eq $X $Y))))
  | `((?X : Nat) == ?Y) =>
    return some (.bool (← `(expr| ($X : Nat) = $Y)) (← `(expr| @beq_iff_eq Nat _ _ $X $Y)))
  | `(Nat.ble ?X ?Y) =>
    return some (.bool (← `(expr| ($X : Nat) ≤ $Y)) (← `(expr| Iff.of_eq (@Nat.ble_eq $X $Y))))
  | `(Nat.blt ?X ?Y) =>
    return some (.bool (← `(expr| ($X : Nat) < $Y)) (← `(expr| Iff.of_eq (@Nat.blt_eq $X $Y))))
  | `(@decide ?p ?d) =>
    let some rel ← matchNatRel? p | return none
    return some (.bool rel (← `(expr| @decide_eq_true_iff $rel $d)))
  | _ => return none

private def matchGuard? (e : Expr) : MetaM (Option GuardKind) := do
  match (modulo := reducible) e with
  | `(@ite _ ?c _ _ _) =>
    if let some p ← matchNatRel? c then return some (.prop p)
    if let `(expr/reducible| ?b = true) := c then return ← matchBoolCmp? b
    return none
  | `(@cond _ ?b _ _) => matchBoolCmp? b
  | _ => return none

private def simpExcept (g : MVarId) (keep : FVarId) (hyps : Array Expr) (thms : Array Name) :
    MetaM (List MVarId) := g.withContext do
  let mut s : SimpTheorems := {}
  for name in thms do s ← s.addConst name
  for pf in hyps do s ← s.add (.fvar pf.fvarId!) #[] pf
  let ctx ← Simp.mkContext (simpTheorems := #[s]) (congrTheorems := ← Meta.getSimpCongrTheorems)
  let mut toSimp : Array FVarId := #[]
  for d in ← getLCtx do
    if !d.isImplementationDetail && d.fvarId != keep then toSimp := toSimp.push d.fvarId
  let (res?, _) ← simpGoal g ctx #[← Simp.getSimprocs] (simplifyTarget := true)
    (fvarIdsToSimp := toSimp)
  return match res? with | none => [] | some (_, g') => [g']

private def destructGuard (g : MVarId) (gk : GuardKind) : MetaM (List MVarId) := g.withContext do
  let p := match gk with | .prop p => p | .bool p _ => p
  let (sPos, sNeg) ← g.byCases p ((← getLCtx).getUnusedName `hbd)
  match gk with
  | .prop _ =>
    return (← simpExcept sPos.mvarId sPos.fvarId #[.fvar sPos.fvarId] #[]) ++
           (← simpExcept sNeg.mvarId sNeg.fvarId #[.fvar sNeg.fvarId] #[])
  | .bool _ iffPf =>
    let go s thms mkPf := s.mvarId.withContext do
      let (hbFv, g1) ← s.mvarId.note ((← getLCtx).getUnusedName `hb) (← mkPf)
      (← simpExcept g1 s.fvarId #[.fvar hbFv] thms).mapM (·.tryClear hbFv)
    return (← go sPos #[``Bool.cond_true] (mkAppM ``Iff.mpr #[iffPf, .fvar sPos.fvarId])) ++
           (← go sNeg #[``Bool.cond_false, ``Bool.false_eq_true]
             (mkAppM ``bool_false_of_iff_not #[iffPf, .fvar sNeg.fvarId]))

/--
Rocq original (`SearchTree.v`): `bdestruct_guard` splits a comparison conditional in the goal.
Under `/reducible`, `>` / `≥` normalize to `<` / `≤`, and `simpExcept` preserves the fresh
inequality hypothesis for `omega`.
-/
def bdestructGuard : TacticM Unit := withMainContext do
  let g ← getMainGoal
  for (sub, _) in subterms (← instantiateMVars (← g.getType)) do
    if let some gk ← matchGuard? sub then replaceMainGoal (← destructGuard g gk); return
  throwError "bdestruct_guard: no comparison conditional in goal target"

scoped elab "bdestruct_guard" : tactic => bdestructGuard
scoped elab "bdestruct " t:term : tactic => withMainContext do
  let g ← getMainGoal
  let e ← Term.elabTerm t none
  if let some gk ← matchBoolCmp? e then replaceMainGoal (← destructGuard g gk)
  else if let some p ← matchNatRel? e then replaceMainGoal (← destructGuard g (.prop p))
  else throwError "bdestruct: unsupported comparison{indentExpr e}"

/--
Rocq original (`SearchTree.v`):
```coq
Ltac bdall := repeat (simpl; bdestruct_guard; try lia; auto).
```
-/
partial def bdallStep (extra : Array Name := #[]) : TacticM Unit := do
  let before ← goalSnapshot (← getMainGoal)
  discard <| tryCommit <| evalTactic (← `(tactic|
    simp only [Key, emptyTree, bound, lookup, insert, ForallT] at *))
  if (← getUnsolvedGoals).isEmpty then return
  if ← tryCommit bdestructGuard then return
  if ← tryCommit (evalTactic (← `(tactic| omega))) then return
  let handled ← withMainContext do
    let g ← getMainGoal
    let appRule n : TacticM Bool := do replaceMainGoal (← g.apply (mkConst n)); return true
    match (modulo := reducible) ← getMainTarget with
    | `(True) => g.assign (mkConst ``True.intro); replaceMainGoal []; return true
    | `(_ ∧ _) => appRule ``And.intro
    | `(BST .E) => appRule ``BST.E
    | `(BST (.T _ _ _ _)) => appRule ``BST.T
    | _ => return false
  if handled then return
  if ← tryCommit (firstHyp fun h => fun
      | `(expr/reducible| _ ∧ _) =>
        liftMetaTactic fun g => return (← g.cases h.fvarId!).toList.map (·.mvarId)
      | _ => failure) then return
  for thm in extra do
    if ← tryCommit (do
        liftMetaTactic fun g => do g.apply (← mkConstWithFreshMVarLevels thm)
        repeatAll (bdallStep extra)
        unless (← getUnsolvedGoals).isEmpty do failure) then return
  if ← tryCommit (evalTactic (← `(tactic| solve_by_elim))) then return
  if ← tryCommit (evalTactic (← `(tactic| rfl))) then return
  if before == (← goalSnapshot (← getMainGoal)) then throwError "bdall: no progress"

scoped elab "bdall" : tactic => repeatAll (bdallStep #[])
scoped elab "bdall" "[" ids:ident,* "]" : tactic => do
  repeatAll (bdallStep (← ids.getElems.mapM (resolveGlobalConstNoOverload ·)))

theorem empty_tree_BST {V : Type} : BST (emptyTree (V := V)) := by bdall
theorem lookup_empty {V : Type} (d : V) (k : Key) : lookup d k emptyTree = d := by bdall
theorem lookup_insert_eq {V : Type} (t : Tree V) (d : V) (k : Key) (v : V) :
    lookup d k (insert k v t) = v := by induction t <;> bdall
theorem lookup_insert_neq {V : Type} (t : Tree V) (d : V) (k k' : Key) (v : V) (hne : k ≠ k') :
    lookup d k' (insert k v t) = lookup d k' t := by induction t <;> bdall
theorem bound_default {V : Type} (k : Key) (d : V) (t : Tree V) (hb : bound k t = false) :
    lookup d k t = d := by induction t <;> bdall
theorem ForallT_insert {V : Type} (P : Key → V → Prop) (t : Tree V)
    (ht : ForallT P t) (k : Key) (v : V) (hpk : P k v) :
    ForallT P (insert k v t) := by induction t <;> bdall

theorem insert_BST {V : Type} (t : Tree V) (k : Key) (v : V) (h : BST t) :
    BST (insert k v t) := by
  induction h with
  | E => bdall
  | @T l x v' r hl hr _ _ ihl ihr =>
    bdall [ForallT_insert] <;> ((have : k = x := by dsimp [Key]; omega); subst this; assumption)

example (x y : Key) :
    (bif x == y then 1 else bif Nat.blt x y then 2 else 3) ≤ 3 := by bdall

example (x y : Key) :
    (bif decide (x ≥ y) then (if Nat.ble y x then 2 else 1) else 3) ≤ 3 := by
  bdestruct (decide (x ≥ y)) <;> bdall

end ExprQuotUseCaseSfAuto
