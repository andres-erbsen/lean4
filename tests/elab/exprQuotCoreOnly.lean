module

import Lean.Meta.ExprPatternCore

/-!
Verifies that `Lean.Meta.ExprPatternCore` does not pull in `Lean.Meta.Sym.SymM` or
`Lean.Meta.ExprPattern`, while supporting non-`/sym` `` `(expr[rel]| ...) `` matching,
term templates, and `subterms`, and rejecting `/sym` quotations cleanly.
-/

namespace ExprQuotCoreOnlyTest

open Lean Meta

#guard_msgs in
run_meta do
  let env ← getEnv
  for forbidden in [
    `Lean.Meta.Sym.SymM,
    `Lean.Meta.ExprPattern.matchSymResolvedOrElse,
    `Lean.Meta.MonadSym
  ] do
    if env.contains forbidden then
      throwError "unexpected `Sym` symbol in Core-only environment: {forbidden}"

private def matchAndBuildCore (e : Expr) : MetaM (Option Expr) := do
  match e with
  | `(expr +inst| (?a : Nat) + ?b) =>
    let res ← `(expr| ($b : Nat) + $a)
    return some res
  | _ => return none

#guard_msgs in
run_meta do
  let a := mkNatLit 2
  let b := mkNatLit 3
  let sum ← mkAppM ``HAdd.hAdd #[a, b]
  let some swapped ← matchAndBuildCore sum
    | throwError "expected Core-only `(expr +inst| ...)` match to succeed"
  Meta.check swapped
  let mut foundSub := false
  for (sub, ctx) in subterms sum do
    if let `(2) := sub then
      let repl := ctx.fill (mkNatLit 9)
      Meta.check repl
      foundSub := true
      break
  unless foundSub do
    throwError "expected `subterms` + `(expr| 2)` match to succeed"

/-- error: expr quotation `/sym` requires `import Lean.Meta.ExprPattern` -/
#guard_msgs in
def rejectSymMatchWithoutImport (e : Expr) : MetaM Nat :=
  match e with
  | `(expr/sym| ?x) => let _ := x; return 1
  | _ => return 0

/-- error: expr quotation `/sym` requires `import Lean.Meta.ExprPattern` -/
#guard_msgs in
def rejectSymBuildWithoutImport : MetaM Expr :=
  `(expr/sym| (1 : Nat) + 2)

end ExprQuotCoreOnlyTest
