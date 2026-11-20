import Lean

/-!
# Verdi `StructTact` Showcase (`StructTactics.v`)

Self-contained port of structural, name-independent tactics from `uwplse/StructTact`:

- `break_match` / `break_if`: splits compiled `match`es (`matchDiscriminants`) and `ite`/`dite`
  conditionals (`subterms` inside-out), handling `Decidable` via `Decidable.falseTrueCases`.
- `break_and` / `break_exists` / `tuple_inversion`: splits connectives and injects pair equations.
- `find_rewrite` / `find_reverse_rewrite`: loop-guarded rewriting via `subterms`.
- `smash_handler`: name-free cleanup loop proving Verdi-style key-value replica invariants.
-/

namespace ExprQuotUseCaseStructTact

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

private def reduceMatchesStep : TacticM Unit := liftMetaTactic1 fun g => g.withContext do
  let red (e : Expr) : MetaM Expr := do
    Meta.transform (← instantiateMVars e) (post := fun cur => do
    match ← reduceMatcher? cur with
    | .reduced e' => return .visit e'.headBeta
    | _ => return .continue)
  let mut g' := g
  let t ← g.getType
  let t' ← red t
  if t' != t then g' ← g'.replaceTargetDefEq t'
  for d in ← getLCtx do
    if d.isImplementationDetail then continue
    let ty' ← red d.type
    if ty' != d.type then g' ← g'.replaceLocalDeclDefEq d.fvarId ty'
  if g' == g then failure
  return some g'

private def subtermOccurs (needle haystack : Expr) : MetaM Bool := do
  let needle ← instantiateMVars needle
  let haystack ← instantiateMVars haystack
  if needle == haystack then return true
  if needle.isFVar && !haystack.hasAnyFVar (· == needle.fvarId!) then return false
  for case (`(expr/reducible| $needle), _) in subterms haystack (includeAppPrefixes := true) do
    return true
  return false

private def casesDiscr (x : Expr) (hyps : Array FVarId)
    (fallbackHyps : Array FVarId := #[]) : TacticM Unit := withMainContext do
  let x ← instantiateMVars x
  if (← isConstructorApp'? x).isSome || (← isProof x) then failure
  let isDec ← match ← instantiateMVars (← inferType x) with
    | `(expr/reducible| Decidable _) => pure true
    | _ => pure false
  let g ← getMainGoal
  let isNonLetFVar ← if x.isFVar then pure !(← x.fvarId!.getDecl).isLet else pure false
  let subgoals ←
    if isDec && isNonLetFVar then
      pure ((← g.induction x.fvarId! ``Decidable.falseTrueCases).toList.map (·.mvarId))
    else
      let xName ← mkFreshUserName `x
      let hName? ← if isDec then pure none else some <$> mkFreshBinderNameForTactic `h
      let arg : GeneralizeArg := { expr := x, xName? := some xName, hName? }
      let tryGen (hs : Array FVarId) := do
        let (_, newVars, g') ← g.generalizeHyp #[arg] hs
        let some xNew := newVars[0]? | throwError "casesDiscr: generalize produced no variable"
        return (xNew, g')
      let (xNew, g') ← try tryGen hyps catch _ =>
        if fallbackHyps != hyps then tryGen fallbackHyps else failure
      g'.withContext do
        if isDec then pure ((← g'.induction xNew ``Decidable.falseTrueCases).toList.map (·.mvarId))
        else pure ((← g'.cases xNew).toList.map (·.mvarId))
  let mut out := []
  for sg in subgoals do
    setGoals [sg]; discard <| tryCommit reduceMatchesStep; out := out ++ (← getUnsolvedGoals)
  setGoals out

private def propHypFVarIds : TacticM (Array FVarId) := withMainContext do
  let mut res := #[]
  for (h, ty) in ← localHypTypes do
    if h.isFVar && (← isProp ty) then res := res.push h.fvarId!
  return res

/-! ## 1. `break_match` & `break_if` -/

/--
Rocq (`StructTactics.v`):
```coq
Ltac break_match := match goal with
  | [ |- context [ match ?X with _ => _ end ] ] => destruct X eqn:?
  | [ H : context [ match ?X with _ => _ end ] |- _ ] => destruct X eqn:? end.
```
Scans `matchDiscriminants` in target then hypotheses. Because Lean's `if`/`dite` are
definitions (`@ite`/`@dite`) rather than `MatcherApp`s, `break_if` complements `break_match`
via `subterms`, and `Decidable` splits via `Decidable.falseTrueCases`.
-/
def breakMatchGoal : TacticM Unit := withMainContext do
  let hyps ← propHypFVarIds
  for (x, _) in matchDiscriminants (← getMainTarget) do
    if ← tryCommit (casesDiscr x hyps) then return
  if ← tryCommit reduceMatchesStep then return
  throwError "break_match_goal: no match found"

def breakMatchHyp : TacticM Unit :=
  firstHyp fun h ty => do
    let hyps ← propHypFVarIds
    for (x, _) in matchDiscriminants ty do
      if ← tryCommit (casesDiscr x hyps #[h.fvarId!]) then return
    failure

def breakMatch : TacticM Unit := breakMatchGoal <|> breakMatchHyp

private def splitIfCond (c dec : Expr) : TacticM Unit := withMainContext do
  let simpAll (g : MVarId) : MetaM MVarId := do
    let mut g ← simpIfTarget g
    for fv in ← g.getNondepPropHyps do g ← simpIfLocalDecl g fv
    return g
  let hName ← mkFreshBinderNameForTactic `h
  let (s1, s2) ← (← getMainGoal).byCasesDec (← instantiateMVars c) (← instantiateMVars dec) hName
  let g1 ← simpAll s1.mvarId; let g2 ← simpAll s2.mvarId
  if s1.mvarId == g1 && s2.mvarId == g2 then failure
  replaceMainGoal [g1, g2]

private partial def splitFirstIfIn (e : Expr) : TacticM Unit := withMainContext do
  for (sub, _) in subterms e do
    match sub with
    | `(expr| @ite _ ?c ?d _ _) | `(expr| @dite _ ?c ?d _ _) =>
      if ← tryCommit (splitFirstIfIn c) then return
      if ← tryCommit (splitIfCond c d) then return
    | _ => pure ()
  failure

def breakIfGoal : TacticM Unit := withMainContext do splitFirstIfIn (← getMainTarget)
def breakIfHyp : TacticM Unit := firstHyp fun _ ty => splitFirstIfIn ty
def breakIf : TacticM Unit := breakIfGoal <|> breakIfHyp

scoped elab "break_match_goal" : tactic => breakMatchGoal
scoped elab "break_match_hyp" : tactic => breakMatchHyp
scoped elab "break_match" : tactic => breakMatch
scoped elab "break_if_goal" : tactic => breakIfGoal
scoped elab "break_if_hyp" : tactic => breakIfHyp
scoped elab "break_if" : tactic => breakIf

/-! ## 2. `break_and`, `break_exists`, `tuple_inversion` -/

private def breakAndStep : TacticM Unit := firstHyp fun h => fun
  | `(expr/reducible| _ ∧ _) =>
    liftMetaTactic fun g => return (← g.cases h.fvarId!).toList.map (·.mvarId)
  | _ => failure

private def breakExistsStep : TacticM Unit := firstHyp fun h => fun
  | `(expr/reducible| ∃ _, _) =>
    liftMetaTactic fun g => return (← g.cases h.fvarId!).toList.map (·.mvarId)
  | _ => failure

/--
Rocq (`StructTactics.v`):
```coq
Ltac tuple_inversion := match goal with | [ H : (_, _) = (_, _) |- _ ] => inv H end.
```
Injects polymorphic pair equalities and requires `h` to be cleared so `repeat'` never loops.
-/
def tupleInversion : TacticM Unit := firstHyp fun h => fun
  | `(expr/reducible| (?a, ?b) = (?c, ?d)) => do
    let _ := (a, b, c, d)
    match ← Meta.injection (← getMainGoal) h.fvarId! with
    | .solved => replaceMainGoal []
    | .subgoal g' _ _ =>
      if ← g'.withContext (return (← getLCtx).contains h.fvarId!) then failure
      replaceMainGoal [g']
  | _ => failure

scoped elab "tuple_inversion" : tactic => tupleInversion

/-! ## 3. Loop-Guarded `find_rewrite` & `find_reverse_rewrite` -/

/--
Rocq (`StructTactics.v`):
```coq
Ltac find_rewrite := match goal with | [ H : _ = _ |- _ ] => rewrite H in * end.
```
Guards against loops under `repeat'` via `subtermOccurs lhs rhs` (skipping `x = x` and
`a = a + 1`) and remaps `visited` through `replaceLocalDecl`'s `FVarSubst`.
-/
def findRewriteCore (symm : Bool) : TacticM Unit := firstHyp fun h => fun
  | `(expr/reducible| ?X = ?Y) => do
    let (lhs, rhs) := if symm then (Y, X) else (X, Y)
    if ← subtermOccurs lhs rhs then failure
    let mut curH := h
    let mut changed := false
    if ← tryCommit do
        let g ← getMainGoal; let tgt ← getMainTarget
        let r ← g.rewrite tgt curH (symm := symm)
        unless r.mvarIds.isEmpty && r.eNew != tgt do failure
        replaceMainGoal [← g.replaceTargetEq r.eNew r.eqProof] then
      changed := true
    let mut visited : Array Expr := #[curH]
    while true do
      let mut stepDone := false
      for (h', ty') in ← withMainContext <| localHypTypes (reverse := true) do
        if visited.contains h' then continue
        visited := visited.push h'
        if let some rep ← observing? do
            let g ← getMainGoal
            let r ← g.rewrite ty' curH (symm := symm)
            unless r.mvarIds.isEmpty && r.eNew != ty' do failure
            let rep ← g.replaceLocalDecl h'.fvarId! r.eNew r.eqProof
            if ← rep.mvarId.withContext (return (← getLCtx).contains h'.fvarId!) then failure
            replaceMainGoal [rep.mvarId]; return rep then
          curH := rep.subst.apply curH
          visited := (visited.map rep.subst.apply).push (mkFVar rep.fvarId)
          changed := true; stepDone := true; break
      unless stepDone do break
    unless changed do failure
  | _ => failure

scoped elab "find_rewrite" : tactic => findRewriteCore false
scoped elab "find_reverse_rewrite" : tactic => findRewriteCore true

scoped elab "smash_handler" : tactic =>
  repeatAll (breakAndStep <|> breakExistsStep <|> breakMatch <|> breakIf <|>
    tupleInversion <|> findRewriteCore false)

end Tactics

/-! ## Verdi-Style Key-Value Replica Showcase & Unit Tests -/

inductive Role where | primary | backup deriving DecidableEq
inductive Msg where
  | put (reqId k v : Nat) | get (reqId k : Nat) | sync (epoch k v : Nat)
  | reply (reqId : Nat) (v : Option Nat) deriving DecidableEq

structure State where
  role : Role
  epoch : Nat
  frozen : Bool
  activeKey : Option Nat
  activeVal : Nat
  deriving DecidableEq

def State.write (st : State) (k v : Nat) : State :=
  { st with activeKey := some k, activeVal := v }

def State.read (st : State) (k : Nat) : Option Nat :=
  match st.activeKey with | none => none | some k' => if k = k' then some st.activeVal else none

def handleMsg (st : State) (msg : Msg) : State × List Msg :=
  match msg with
  | .put reqId k v =>
    if st.frozen then (st, [.reply reqId none])
    else match st.role with
      | .primary =>
        if v = 0 then (st, [.reply reqId none])
        else (st.write k v, [.sync st.epoch k v, .reply reqId (some v)])
      | .backup => (st, [.reply reqId none])
  | .get reqId k =>
    match st.role with
    | .primary => match st.read k with
      | some v => (st, [.reply reqId (some v)]) | none => (st, [.reply reqId none])
    | .backup => (st, [.reply reqId none])
  | .sync e k v =>
    match st.role with
    | .primary => (st, [])
    | .backup =>
      if _ : st.epoch ≤ e then ({ st.write k v with epoch := e }, []) else (st, [])
  | .reply _ _ => (st, [])

theorem handleMsg_epoch_mono :
    ∀ st msg st' out, handleMsg st msg = (st', out) → st.epoch ≤ st'.epoch := by
  intros; dsimp [handleMsg, State.write, State.read] at *
  smash_handler
  all_goals
    repeat' find_reverse_rewrite
    try dsimp
    omega

theorem handleMsg_frozen_no_sync :
    ∀ st msg st' out, st.frozen = true → handleMsg st msg = (st', out) →
      ∀ e k v, .sync e k v ∉ out := by
  intros; dsimp [handleMsg] at *
  smash_handler
  all_goals
    repeat' find_reverse_rewrite
    simp

theorem handleMsg_backup_no_sync :
    ∀ st msg st' out, st.role = .backup → handleMsg st msg = (st', out) →
      (∀ m ∈ out, ∃ r, m = .reply r none) := by
  intros; dsimp [handleMsg] at *
  smash_handler
  all_goals
    repeat' find_rewrite
    first
    | contradiction
    | (repeat' find_reverse_rewrite
       simp only [List.mem_cons, List.not_mem_nil, or_false] at *
       <;> exact ⟨_, by assumption⟩)

-- Unit checks: `dite` binder hides `match` until `break_if_goal`, loop-safe `find_rewrite`,
-- and polymorphic nested `tuple_inversion`.
theorem test_dite_hides_match (n : Nat) (f : n > 0 → Option Nat) :
    (if h : n > 0 then (match f h with | none => 0 | some k => k) else 0) ≥ 0 := by
  fail_if_success break_match_goal
  break_if_goal
  · break_match_goal <;> omega
  · omega

theorem test_find_rewrite_no_loop :
    ∀ a b c : Nat, a = b → b = b → a = a + 1 → c = b → a = c := by
  intros
  repeat' find_rewrite
  rfl

theorem test_tuple_inversion_poly {α β γ : Type} (a1 a2 : α) (b1 b2 : β) (c1 c2 : γ)
    (h : (a1, (b1, c1)) = (a2, (b2, c2))) : a1 = a2 ∧ b1 = b2 ∧ c1 = c2 := by
  repeat' tuple_inversion
  exact ⟨‹_›, ‹_›, ‹_›⟩

end ExprQuotUseCaseStructTact
