/-
Copyright (c) 2025 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
module
prelude
import Init.Grind
import Lean.Meta.Tactic.Grind.Arith.Simproc
import Lean.Meta.ExprPatternCore
public import Lean.Meta.Tactic.Grind.PropagatorAttr
public section
namespace Lean.Meta.Grind.Arith.CommRing

-- Canonical instances are matched structurally because `grind` uses the canonicalizer.
builtin_grind_propagator propagatePower ↑HPow.hPow := fun e => do
  -- **Note**: We are not checking whether the `^` instance is the expected ones.
  let_expr HPow.hPow α n α' _ a b := e | return ()
  let_expr Nat := n | return ()
  unless isSameExpr α α' do return ()
  traverseEqc b fun bENode => do
    let b' := bENode.self
    let `((?b₁ : Nat) + ?b₂) := b' | return ()
    let pwFn := e.appFn!.appFn!
    let r ← mkMul (mkApp2 pwFn a b₁) (mkApp2 pwFn a b₂)
    let r ← preprocess r
    internalize r.expr (← getGeneration e)
    let some h ← mkSemiringThm ``Grind.Semiring.pow_add_congr α | return ()
    let h := mkApp7 h a r.expr b b₁ b₂ (← mkEqProof b b') (← r.getProof)
    pushEq e r.expr h

end Lean.Meta.Grind.Arith.CommRing
