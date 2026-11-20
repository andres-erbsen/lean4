/-
Copyright (c) 2026 Andres Erbsen. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Andres Erbsen
-/
module

prelude
public import Lean.Elab.Tactic.Basic
public import Lean.Meta.ExprPattern

public section

namespace Lean.Elab.Tactic

/--
Extract an informative inner error message from a failed `firstHyp` attempt, ignoring bare
`Alternative.failure` throws (`"Failed"` / `"failed"`) and non-abort internal exceptions.
-/
def firstHypInnerError? (ex : Exception) (msgsBefore : Nat) : CoreM (Option MessageData) := do
  if isAbortTacticException ex then
    let errs := (← Core.getMessageLog).toArray.extract msgsBefore |>.filter (·.severity == .error)
    return errs.back?.map (·.data)
  else if ex matches .internal .. then
    return none
  else
    let s ← ex.toMessageData.toString
    if s == "Failed" || s == "failed" then
      return none
    return some ex.toMessageData

private def firstHypCore (f : Expr → Expr → TacticM α)
    (reverse : Bool := true) (except : List Expr := [])
    (collectErr : Bool := false) : TacticM (Option α × Option MessageData) :=
  Term.withoutTacticIncrementality true <| Term.withoutErrToSorry <| withoutRecover do
    (← getMainGoal).withContext do
      let hyps ← (Meta.localHypTypes (reverse := reverse) (except := except) :
        MetaM (Array (Expr × Expr)))
      let mut lastErr? : Option MessageData := none
      for (h, ty) in hyps do
        let s ← saveState
        let msgsBefore ← if collectErr then (·.toArray.size) <$> Core.getMessageLog else pure 0
        -- Use `Tactic.tryCatch` (non-backtracking) so `MessageLog` still holds any logged error
        -- until `s.restore` below.
        match ← Tactic.tryCatch (Except.ok <$> f h ty) (fun ex => return Except.error ex) with
        | .ok res => return (some res, none)
        | .error ex =>
          if collectErr then
            if let some msg ← firstHypInnerError? ex msgsBefore then
              lastErr? := some msg
          s.restore (restoreInfo := true)
      return (none, lastErr?)

/--
Try `f h ty` on each non-implementation-detail hypothesis `(h, ty)` of the main goal and return
the first succeeding result `some r`.

Hypotheses are tried newest first by default (`reverse := true`, matching Rocq `match goal`); pass
`reverse := false` for oldest first. Free variables listed in `except` are skipped (useful when
nesting `firstHyp` calls with `except := [h1]` to match multiple distinct hypotheses), and assigned
metavariables in `ty` are instantiated before `f` is invoked inside the main goal's local context
(`withMainContext` is handled automatically).

Execution runs inside `Term.withoutTacticIncrementality true`, `Term.withoutErrToSorry`, and
`withoutRecover`. If an arm fails, `Tactic.SavedState` is atomically rolled back with
`restoreInfo := true`—reverting metavariable assignments, goal list edits, message log entries,
term elaboration state, and info trees without admitting `sorry` or leaking errors—before trying
the next hypothesis. Returns `none` if no hypothesis succeeds.
-/
def firstHyp? (f : Expr → Expr → TacticM α)
    (reverse : Bool := true) (except : List Expr := []) : TacticM (Option α) :=
  (·.1) <$> firstHypCore f (reverse := reverse) (except := except) (collectErr := false)

/--
Like `Lean.Elab.Tactic.firstHyp?`, but throws `"firstHyp: no hypothesis matched"` (appending the
last non-`failure` inner error if any attempt threw one) if no hypothesis succeeds.
-/
def firstHyp (f : Expr → Expr → TacticM α)
    (reverse : Bool := true) (except : List Expr := []) : TacticM α := do
  match ← firstHypCore f (reverse := reverse) (except := except) (collectErr := true) with
  | (some a, _)        => return a
  | (none, some err)   => throwError "firstHyp: no hypothesis matched (last error: {err})"
  | (none, none)       => throwError "firstHyp: no hypothesis matched"

end Lean.Elab.Tactic
