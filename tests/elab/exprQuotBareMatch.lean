import Lean

namespace ExprQuotBareMatchTest

open Lean Meta Elab Term

/-! ## 1. Basic, indexed, macro, pin, and higher-order bare `(p)` patterns -/

private def matchArithIndexed (e : Expr) : MetaM String :=
  match e with
  | `((?a : Nat) + ?_) => return s!"add:{a}"
  | `((?a : Nat) * ?_) => return s!"mul:{a}"
  | `(if ?c then ?_ else ?_) => return s!"ite:{c}"
  | _ => return "miss"

private def matchPinAndSelfPin (e pin : Expr) : MetaM String :=
  match e with
  | `((?a : Nat) + $a + $pin) => return s!"pin:{a}"
  | `((?a : Nat) + $(mkRawNatLit 42)) => return s!"exprpin:{a}"
  | _ => return "miss"

set_option linter.unusedVariables true in
private def matchForallMiller (e : Expr) : MetaM (Option Expr) :=
  match e with
  | `(∀ x : Nat, ?P x) => return some (P.beta #[mkNatLit 7])
  | _ => return none

/-! ## 2. Nested constructors, `as`-patterns, multi-column, dependent types -/

private def matchNestedOpt (opt : Option Expr) : MetaM String :=
  match opt with
  | some `((?a : Nat) + ?b) => return s!"some_add:{a},{b}"
  | some (h@`((?a : Nat) * _)) => return s!"some_as:{h.getAppFn},{a}"
  | none => return "none"
  | _ => return "other"

private def matchPairAndList (pair : Expr × Expr) (xs : List Expr) : MetaM String :=
  match pair, xs with
  | (`(?a), `(?b)), [`((?c : Nat) + _)] => return s!"pair_list:{a},{b},{c}"
  | _, _ => return "miss"

private def matchRecordAndAscr (r : Expr × Nat) (e : Expr) : MetaM String :=
  match r, e with
  | { fst := `((?a : Nat) + _), snd := n }, (`((?b : Nat) * _) : Expr) =>
    return s!"rec:{n},{a},{b}"
  | _, _ => return "miss"

private def matchTopAs (e : Expr) : MetaM (Option Expr) :=
  match e with
  | h@`((?a : Nat) + ?b) => return some (mkApp2 h a b)
  | _ => return none

private def matchDependentCol (b : Bool) (v : if b then Expr else Nat) : MetaM Nat :=
  match b, v with
  | true, `((?a : Nat) + ?b) => return if a == b then 10 else 20
  | false, n => return n
  | _, _ => return 0

/-! ## 3. Control flow: `if let`, `let`, `let ... |`, `do`, `backward.do.legacy`, `modulo` -/

private def testTermControlFlow (e : Expr) (opt : Option Expr) (pair : Expr × Expr) :
    MetaM Bool := do
  let r1 ← if let `((?a : Nat) + ?b) := e then pure (a == b) else pure false
  let r2 ← if let some `((?a : Nat) + _) := opt then pure true else pure false
  let (`(?x), `(?y)) := pair | return false
  let `(?z) := e | return false
  return r1 && r2 && (x == y || z == e)

private def testDoControlFlow (es : List Expr) (pinVal : Expr) : MetaM String := do
  let mut acc := ""
  for case `((?a : Nat) + _) in es do
    acc := acc ++ s!"{a.dbgToString},"
  let mut p := pinVal
  if let `((?a : Nat) + _) := pinVal then
    p := a
  let `((?lhs : Nat) + $p) := pinVal | return "pin_miss"
  if lhs != p then
    return "bad_lhs"
  do match pinVal with
  | `((?a : Nat) + ?b) =>
    if a == b then
      return acc ++ "same"
    acc := acc ++ "diff"
  | _ => return "not_add"
  let mut `(?a + ?b) := pinVal | return "unreachable"
  a := b
  return s!"{acc}:{a == b}"

section LegacyDo
set_option backward.do.legacy true

private def testLegacyDo (e : Expr) (opt : Option Expr) (n : Nat) : MetaM String := do
  if let `((?a : Nat) + $(mkNatLit n)) := e then
    return s!"legacy_if_let:{a}"
  let some `(?x) := opt | return "miss"
  match e with
  | `((?a : Nat) * ?b) => return s!"legacy_mul:{a},{b},{x}"
  | _ => return s!"legacy_other:{x}"

end LegacyDo

private def matchModuloBareReducible (e : Expr) (opt : Option Expr) : MetaM String := do
  let r1 ← match (modulo := reducible) e with
    | `((?a : Nat) + 0) => pure s!"add0:{a}"
    | _ => pure "miss"
  let r2 ← match (modulo := +inst) opt with
    | some `((?a : Nat) + ?b) => pure s!"opt:{a},{b}"
    | _ => pure "miss"
  return s!"{r1}|{r2}"

private def testModuloUnconstrainedMVar := fun x => (do
  match (modulo := reducible) x with
  | `(?a) => return a == Lean.mkConst ``Nat
  | _ => return false : MetaM Bool)

/-! ## 4. Unresolved metavariable discriminants (`?m`) -/

private def testPolyMapExpr (xs : List Expr) : MetaM (List Expr) :=
  xs.mapM fun e => match e with | `((?a : Nat) + _) => return a | _ => return e

private def testPolyMapSyntax (xs : List Syntax) : List Syntax :=
  xs.map fun stx => match stx with | `($a + $_) => a.raw | _ => stx

private def testPolyDoMapExpr (xs : List Expr) : MetaM (List Expr) :=
  xs.mapM fun e => do match e with | `((?a : Nat) + _) => return a | _ => return e

private def inferSyntaxFn :=
  fun stx => match stx with | `($a + $_) => a.raw | _ => stx

private def testSyntaxHoleInDoNotBound (stx : Syntax) : MetaM Nat := do
  let mut x := 42
  let `(f ?x) := stx | do
    x := x + 1
    return x
  x := x + 10
  match stx with
  | `(g ?x) => x := x + 100
  | _ => pure ()
  return x

section LegacyDoSyntaxHole
set_option backward.do.legacy true

private def testSyntaxHoleInLegacyDoNotBound (stx : Syntax) : MetaM Nat := do
  let mut x := 42
  let `(f ?x) := stx | do
    x := x + 1
    return x
  x := x + 10
  match stx with
  | `(g ?x) => x := x + 100
  | _ => pure ()
  return x

end LegacyDoSyntaxHole

private def testParenTypedBareExprLet (e : Expr) : MetaM (Option (Expr × Expr)) := do
  let (`((?a : Nat) + ?b)) := e | return none
  let (`((?c : Nat) + ?d) : Expr) := e | return none
  return some (mkApp2 (mkConst ``HAdd.hAdd) a d, mkApp2 (mkConst ``HAdd.hAdd) c b)

private def testPolyParenMapExpr (xs : List Expr) : MetaM (List Expr) :=
  xs.mapM fun x => do
    let (`((?a : Nat) + ?_)) := x | return x
    return a

private def testSyntaxSpliceMapMAndShadow (x : Syntax) (stxs : Array Syntax) : MacroM Nat := do
  let fromSplice ← match x with
    | `([$[$x],*]) => pure x.size
    | _ => pure 0
  let fromMapM ← match stxs.mapM (fun | `($a + $b) => some (a, b) | _ => none) with
    | some pairs => pure pairs.size
    | none => pure 0
  return fromSplice + fromMapM

/-! ## 5. Syntax-only isolation, custom syntax cats, and diagnostics -/

declare_syntax_cat mybarecat
syntax ident : mybarecat

private def customCatSyntaxOnly (s : Syntax) : String :=
  match s with
  | `(mybarecat| $x:ident) => toString x.getId
  | _ => "miss"

section DiagAndIsolation

set_option linter.exprQuot.syntaxHole true in
/--
warning: named pattern variable `?x` inside ordinary syntax quotation in an `Expr` context;
did you mean `` `(expr| ...) ``?

Note: This linter can be disabled with `set_option linter.exprQuot.syntaxHole false`
---
error: syntax quotation pattern on an `Expr` discriminant; use `` `(...) `` or `` `(expr| ...) ``
-/
#guard_msgs (whitespace := lax) in
private def explicitTermQuotOnExpr (e : Expr) : Nat :=
  match e with
  | `(term| ?x + 1) => 1
  | _ => 0

set_option linter.exprQuot.syntaxHole true in
/--
warning: named pattern variable `?x` inside ordinary syntax quotation in an `Expr` context;
did you mean `` `(expr| ...) ``?

Note: This linter can be disabled with `set_option linter.exprQuot.syntaxHole false`
---
error: syntax quotation pattern on an `Expr` discriminant; use `` `(...) `` or `` `(expr| ...) ``
-/
#guard_msgs (whitespace := lax) in
private def explicitTermQuotInModulo (e : Expr) : Nat :=
  match (modulo := reducible) e with
  | `(term| ?x + 1) => 1
  | _ => 0

/-- error: Invalid pattern -/
#guard_msgs in
private def precheckedQuotNotPromoted (e : Expr) : Nat :=
  match e with
  | ``(?x + 1) => 1
  | _ => 0

set_option linter.exprQuot.syntaxHole true in
/--
warning: named pattern variable `?x` inside ordinary syntax quotation in an `Expr` context;
did you mean `` `(expr| ...) ``?

Note: This linter can be disabled with `set_option linter.exprQuot.syntaxHole false`
-/
#guard_msgs (whitespace := lax, drop error, check warning) in
private def termPosBareQuotNotPromoted : Expr :=
  `(?x + 1)

/--
error: `h:` cannot prove meta-level `Expr` equality for a top-level quotation pattern;
use `mkEqRefl` for an object-level kernel equality proof
-/
#guard_msgs (whitespace := lax) in
private def eqProofRejected (e : Expr) : Nat :=
  match h : e with
  | `(?a + ?b) => 1
  | _ => 0

set_option linter.exprQuot.syntaxHole true in
/--
warning: named pattern variable `?x` inside ordinary syntax quotation in an `Expr` context;
did you mean `` `(expr| ...) ``?

Note: This linter can be disabled with `set_option linter.exprQuot.syntaxHole false`
---
error: syntax quotation pattern on an `Expr` discriminant; use `` `(...) `` or `` `(expr| ...) ``
-/
#guard_msgs (whitespace := lax) in
private def asPatSyntaxHoleInExprMatch (e : Expr) : Nat :=
  match (modulo := reducible) e with
  | h@`(term| ?x + 1) => 1
  | _ => 0

/-- error: mutable variable `a` cannot be shadowed -/
#guard_msgs in
private def dependentMatchMutShadowRejected (e : Expr) : MetaM Unit := do
  let mut a := Lean.mkConst ``Nat
  match (dependent := true) e with
  | `((?a : Nat) + ?b) => pure ()
  | _ => a := Lean.mkConst ``Bool

/-- error: Invalid pattern -/
#guard_msgs in
private def parenSyntaxHoleInDoNoFalseMutShadow (stx : Syntax) : MetaM Nat := do
  let mut x := 42
  let (`(f ?x)) := stx | do
    x := x + 1
    return x
  return x

end DiagAndIsolation

@[reducible] private def bareMyZero : Nat := 0

/-! ## 6. Execution & InfoTree checks -/

/-- info: ok -/
#guard_msgs in
run_meta do
  let n1 := mkNatLit 1
  let n2 := mkNatLit 2
  let add12 ← mkAppM ``HAdd.hAdd #[n1, n2]
  let mul12 ← mkAppM ``HMul.hMul #[n1, n2]
  assert! (← matchArithIndexed add12).startsWith "add:"
  assert! (← matchArithIndexed mul12).startsWith "mul:"
  withOptions (fun o => o.setBool `exprQuot.debug.checkIndex true) do
    assert! (← matchArithIndexed add12).startsWith "add:"
  let addSelfPin ← mkAppM ``HAdd.hAdd #[← mkAppM ``HAdd.hAdd #[n1, n1], n2]
  assert! (← matchPinAndSelfPin addSelfPin n2).startsWith "pin:"
  let depBody ← withLocalDeclD `x (mkConst ``Nat) fun x => do
    mkForallFVars #[x] (← mkAppM ``HAdd.hAdd #[x, mkNatLit 3])
  let some applied ← matchForallMiller depBody | throwError "expected forall match"
  assert! applied == (← mkAppM ``HAdd.hAdd #[mkNatLit 7, mkNatLit 3])
  assert! (← matchNestedOpt (some add12)).startsWith "some_add:"
  assert! (← matchNestedOpt (some mul12)).startsWith "some_as:"
  assert! (← matchPairAndList (n1, n2) [add12]).startsWith "pair_list:"
  assert! (← matchRecordAndAscr (add12, 5) mul12).startsWith "rec:5,"
  assert! (← matchTopAs add12).isSome
  assert! (← matchDependentCol true add12) == 20
  let depFalse : if false then Expr else Nat := (9 : Nat)
  assert! (← matchDependentCol false depFalse) == 9
  assert! !(← testTermControlFlow add12 (some add12) (n1, n2))
  assert! (← testDoControlFlow [add12] (← mkAppM ``HAdd.hAdd #[n1, n1])) |>.endsWith "same"
  assert! (← testLegacyDo mul12 (some n1) 0).startsWith "legacy_mul:"
  assert! (← testModuloUnconstrainedMVar (Lean.mkConst ``Nat))
  assert! ((← testPolyMapExpr [add12]) == [n1])
  assert! ((← testPolyDoMapExpr [add12]) == [n1])
  let _ : List Syntax → List Syntax := testPolyMapSyntax
  let _ : Syntax → Syntax := inferSyntaxFn
  assert! (customCatSyntaxOnly (mkIdent `hello)) == "miss"
  let pqStx ← `(``(?x + 1))
  assert! !ExprQuot.hasBareTermQuotInPat pqStx.raw
  let fHoleStx ← `(term| f ?x)
  assert! (← testSyntaxHoleInDoNotBound fHoleStx.raw) == 52
  assert! (← testSyntaxHoleInDoNotBound (mkIdent `other)) == 43
  assert! (← testSyntaxHoleInLegacyDoNotBound fHoleStx.raw) == 52
  assert! (← testSyntaxHoleInLegacyDoNotBound (mkIdent `other)) == 43
  let arrStx ← `(term| [a, b])
  let sumStx ← `(term| 1 + 2)
  assert! (← liftMacroM <| testSyntaxSpliceMapMAndShadow arrStx.raw #[sumStx.raw]) == 3
  assert! (← testPolyParenMapExpr [add12]) == [n1]
  assert! (← testParenTypedBareExprLet add12).isSome
  -- Object-level kernel `rfl` proof after modulo-reducible quotation matching:
  let addMyZero ← mkAppM ``HAdd.hAdd #[mkNatLit 5, mkConst ``bareMyZero]
  assert! (← matchModuloBareReducible addMyZero (some add12)).startsWith "add0:"
  match (modulo := reducible) addMyZero with
  | `((?a : Nat) + 0) =>
    let prf ← mkEqRefl addMyZero
    let goalTy ← `(expr| $addMyZero = ($a : Nat) + 0)
    Meta.check prf
    assert! (← isDefEq (← inferType prf) goalTy)
  | _ => throwError "expected reducible add0 match"
  logInfo "ok"

/-- info: InfoTree spans OK -/
#guard_msgs in
#eval show TermElabM Unit from do
  -- `classifyDiscrTypeSilent` must classify only strict `Lean.Expr` as `.isExpr`:
  let patParen ← `(term| (`(f ?x)))
  let patAscr ← `(term| (`(f ?x) : Syntax))
  let patNamedEq ← `(term| h@hEq:`(f ?x))
  assert! (ExprQuot.unwrapTopBareTermQuot? patParen.raw).isSome
  assert! (ExprQuot.unwrapTopBareTermQuot? patAscr.raw).isSome
  assert! (ExprQuot.unwrapTopBareTermQuot? patNamedEq.raw).isSome
  let optAddStx ← `((some (mkConst ``Nat) : Option Expr))
  let arrExprStx ← `(#[(mkConst ``Nat)])
  assert! (← Quotation.classifyDiscrTypeSilent optAddStx) == .other
  assert! (← Quotation.classifyDiscrTypeSilent arrExprStx) == .other
  withLocalDeclD `e (mkConst ``Lean.Expr) fun _ => do
    assert! (← Quotation.classifyDiscrTypeSilent (mkIdent `e)) == .isExpr
  withLocalDeclD `s (mkConst ``Lean.Syntax) fun _ => do
    assert! (← Quotation.classifyDiscrTypeSilent (mkIdent `s)) == .other
  let input :=
    "fun (e : Expr) => (match e with | `((?a : Nat) + ?b) => pure (a, b) " ++
    "| _ => pure (e, e) : Lean.Meta.MetaM (Lean.Expr × Lean.Expr))"
  let .ok stx := Parser.runParserCategory (← getEnv) `term input "<test>"
    | throwError "failed to parse bare quotation InfoTree test"
  let savedInfo ← getInfoState
  try
    modifyInfoState fun s => { s with enabled := true, trees := {} }
    discard <| withoutModifyingElabMetaStateWithInfo <| Term.elabTerm stx none
    let trees ← getInfoTrees
    let (sawBinderA, sawBinderB) := trees.foldl (init := (false, false)) fun acc t =>
      t.foldInfo (init := acc) fun _ info (sawA, sawB) =>
        match info with
        | .ofTermInfo ti =>
          if ti.isBinder && ti.stx.getPos?.isSome && ti.stx.getTailPos?.isSome then
            let id := ti.stx.getId.eraseMacroScopes
            (sawA || id == `a, sawB || id == `b)
          else
            (sawA, sawB)
        | _ => (sawA, sawB)
    unless sawBinderA && sawBinderB do
      throwError "missing binder TermInfo for bare quotation holes: a={sawBinderA}, b={sawBinderB}"
  finally
    setInfoState savedInfo
  logInfo "InfoTree spans OK"

end ExprQuotBareMatchTest
