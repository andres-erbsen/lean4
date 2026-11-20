module

import Lean.Elab.Tactic.Basic

/-!
Verifies that using `(expr| ...)` in a `module` without `import Lean.Meta.ExprPatternCore`
reports a clear import-requirement diagnostic rather than a misleading monad-lifting error.
-/

namespace ExprQuotMissingCoreImportTest

open Lean Meta

/-- error: expr quotation requires `import Lean.Meta.ExprPatternCore` -/
#guard_msgs in
def rejectMatchWithoutCore (e : Expr) : MetaM Nat :=
  match e with
  | `(expr| ?x) => let _ := x; return 1
  | _ => return 0

/-- error: expr quotation requires `import Lean.Meta.ExprPatternCore` -/
#guard_msgs in
def rejectBuildWithoutCore : MetaM Expr :=
  `(expr| (1 : Nat) + 2)

/-- error: expr quotation `/sym` requires `import Lean.Meta.ExprPattern` -/
#guard_msgs in
def rejectSymWithoutCore : MetaM Expr :=
  `(expr/sym| (1 : Nat) + 2)

end ExprQuotMissingCoreImportTest
