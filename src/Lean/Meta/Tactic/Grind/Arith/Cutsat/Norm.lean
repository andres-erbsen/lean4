/-
Copyright (c) 2025 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module
prelude
public import Lean.Meta.Tactic.Grind.Arith.Cutsat.Util
import Lean.Meta.ExprPatternCore
public section
namespace Lean.Meta.Grind.Arith.Cutsat
/-!
`Int` expressions are normalized by the `grind` preprocessor, but we
dynamically convert expressions from other types into `Int` expressions
and these expressions must be normalized inside of the cutsat module.
-/

-- Canonical instances are matched structurally because `grind` uses the canonicalizer.
/-- Converts the given integer expression into `Int.Internal.Linear.Expr` -/
partial def toLinearExpr (e : Expr) (generation : Nat := 0) : GoalM Int.Internal.Linear.Expr := do
  let toVar (e : Expr) := do
    let e ← shareCommon e
    if (← alreadyInternalized e) then
      return .var (← mkVar e)
    else
      internalize e generation
      return .var (← mkVar e)
  let mul (a b : Expr) := do
    match (← getIntValue? a) with
    | some k => return .mulL k (← toLinearExpr b)
    | none => match (← getIntValue? b) with
      | some k => return .mulR (← toLinearExpr a) k
      | none => toVar e
  match e with
  | `((@OfNat.ofNat _ _ _ : Int)) =>
    if let some n ← getIntValue? e then return .num n
    else toVar e
  | `(- (?a : Int)) => return .neg (← toLinearExpr a)
  | `((?a : Int) + ?b) => return .add (← toLinearExpr a) (← toLinearExpr b)
  | `((?a : Int) - ?b) => return .sub (← toLinearExpr a) (← toLinearExpr b)
  | `((?a : Int) * ?b) => mul a b
  | _ => toVar e

end Lean.Meta.Grind.Arith.Cutsat
