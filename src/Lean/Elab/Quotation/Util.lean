/-
Copyright (c) 2020 Sebastian Ullrich. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Ullrich
-/
module

prelude
public import Lean.Elab.Term
public import Lean.Linter.Init
import Init.Omega
import Init.Data.Array.Mem

public section

namespace Lean.Elab.Term.Quotation
open Lean.Syntax

register_builtin_option hygiene : Bool := {
  defValue := true
  descr    := "Annotate identifiers in quotations such that they are resolved relative to the scope at their declaration, not that at their eventual use/expansion, to avoid accidental capturing. Note that quotations/notations already defined are unaffected."
}

def getAntiquotationIds (stx : Syntax) : TermElabM (Array Ident) := do
  let mut ids := #[]
  for stx in stx.topDown (firstChoiceOnly := true) do
    if (isAntiquot stx || isTokenAntiquot stx) && !isEscapedAntiquot stx then
      let anti := getAntiquotTerm stx
      if anti.isIdent then ids := ids.push ⟨anti⟩
      else if anti.isOfKind ``Parser.Term.hole then pure ()
      else throwErrorAt stx "complex antiquotation not allowed here"
  return ids

/-- Get all pattern vars (as `Syntax.ident`s) in `stx` -/
partial def getPatternVars (stx : Syntax) : TermElabM (Array Syntax) :=
  if stx.isQuot then
    getAntiquotationIds stx
  else match stx with
    | `(_)            => return #[]
    | `($id:ident)    => return #[id]
    | `($id:ident@$e) => return (← getPatternVars e).push id
    | _               => throwErrorAt stx "unsupported pattern in syntax match{indentD stx}"

def getPatternsVars (pats : Array Syntax) : TermElabM (Array Syntax) :=
  pats.foldlM (fun vars pat => do return vars ++ (← getPatternVars pat)) #[]

/--
Given an antiquotation like `$e:term` (i.e. `Syntax.antiquotKind?` returns `some`),
returns the `"term"` atom if present.
-/
def getAntiquotKindSpec? (antiquot : Syntax) : Option Syntax :=
  let name := antiquot[3][1]
  if name.isMissing then none else some name

def resolveSectionVariable (sectionVars : NameMap Name) (id : Name) : List (Name × List String) :=
  -- decode macro scopes from name before recursion
  let extractionResult := extractMacroScopes id
  let rec loop : Name → List String → List (Name × List String)
    | id@(.str p s), projs =>
      -- NOTE: we assume that macro scopes always belong to the projected constant, not the projections
      let id := { extractionResult with name := id }.review
      match sectionVars.find? id with
      | some newId => [(newId, projs)]
      | none       => loop p (s::projs)
    | _, _ => []
  loop extractionResult.name []

/-- Collect named `?x` synthetic holes inside ordinary quotation content, ignoring `?_`,
antiquotations, nested quotations, and `expr` quotations. -/
def collectNamedSyntaxHoles (stx : Syntax) : Array (Syntax × Name) :=
  go stx #[]
where
  go (cur : Syntax) (acc : Array (Syntax × Name)) : Array (Syntax × Name) :=
    if cur.isOfKind `Lean.Parser.Term.syntheticHole then
      if cur[1].isIdent then acc.push (cur, cur[1].getId.eraseMacroScopes) else acc
    else if cur.isAntiquot || cur.isTokenAntiquot || cur.isAntiquotSplice ||
        cur.isAntiquotSuffixSplice || cur.isQuot ||
        cur.isOfKind `Lean.Parser.Term.exprQuot then
      acc
    else
      match cur with
      | .node _ _ args =>
        args.foldl (init := acc) fun a child => go child a
      | _ => acc
  termination_by sizeOf cur
  decreasing_by
    simp_wf
    have := Array.sizeOf_lt_of_mem ‹_›
    omega

/-- Emit `linter.exprQuot.syntaxHole` warnings for named `?x` holes inside ordinary syntax
quotation content `quotContent` appearing in an `Expr` context. -/
def warnNamedSyntaxHolesInQuot (quotContent : Syntax) : TermElabM Unit := do
  unless Linter.getLinterValue Linter.linter.exprQuot.syntaxHole (← Linter.getLinterOptions) do
    return
  for (holeStx, name) in collectNamedSyntaxHoles quotContent do
    Linter.logLintIf Linter.linter.exprQuot.syntaxHole holeStx
      m!"named pattern variable `?{name}` inside ordinary syntax quotation in an `Expr` \
         context; did you mean `` `(expr| ...) ``?"

/--
Return `true` iff `stx` is a bare `` `(p) `` quotation (`Lean.Parser.Term.quot` with 3 args),
excluding explicit categories (`` `(term| ...) ``, user `declare_syntax_cat` with 1 arg) and
`` ``(p) `` (`precheckedQuot`).
-/
def isBareTermQuot (stx : Syntax) : Bool :=
  stx.isOfKind `Lean.Parser.Term.quot && stx.getNumArgs == 3

/--
Return `true` iff quotation body `stx` contains syntax-only antiquotation forms (`%$tk`,
`$[...]*`, `$xs,*`, typed `$x:kind`, or anonymous `$_`) that cannot occur in an `expr` pattern.
-/
partial def hasSyntaxOnlyAntiquot (stx : Syntax) : Bool :=
  if stx.isTokenAntiquot || stx.isAntiquotSplice || stx.isAntiquotSuffixSplice then
    true
  else if isAntiquots stx then
    let anti := getCanonicalAntiquot stx
    if isEscapedAntiquot anti then
      false
    else
      !anti[3].isNone || (getAntiquotTerm anti).isOfKind `Lean.Parser.Term.hole
  else if stx.isQuot || stx.isOfKind `Lean.Parser.Term.exprQuot ||
      stx.isOfKind `Lean.Parser.Term.precheckedQuot then
    false
  else
    match stx with
    | .node _ _ args => args.any hasSyntaxOnlyAntiquot
    | _ => false

/-- Return `true` iff `stx` is a bare `` `(p) `` quotation with no syntax-only antiquotations. -/
def isCandidateBareExprQuot (stx : Syntax) : Bool :=
  isBareTermQuot stx && !hasSyntaxOnlyAntiquot stx[1]

/--
Return `true` iff bare `` `(p) `` quotation `quot` should check `discr`'s type for promotion:
always for candidate expr quots and named-hole quots (so mixed patterns like `` `($_ + ?x) ``
on `Expr` reach `ExprQuot` diagnostics), and for atomic identifiers (`O(1)` `lctx` lookup).
-/
def shouldCheckBareQuotDiscr (discr : Term) (quot : Syntax) : Bool :=
  isBareTermQuot quot &&
    (!hasSyntaxOnlyAntiquot quot[1] || !(collectNamedSyntaxHoles quot[1]).isEmpty ||
      (match discr.raw with
       | .ident _ _ id [] => !id.isAnonymous
       | _ => false))

private partial def collectUnescapedIdentAntiquots (stx : Syntax) : Array Name :=
  go stx #[]
where
  go (cur : Syntax) (acc : Array Name) : Array Name :=
    if isAntiquots cur then
      let anti := getCanonicalAntiquot cur
      if isEscapedAntiquot anti then
        acc
      else
        let t := getAntiquotTerm anti
        if t.isIdent then acc.push t.getId else acc
    else if cur.isTokenAntiquot || cur.isAntiquotSplice || cur.isAntiquotSuffixSplice ||
        cur.isQuot || cur.isOfKind `Lean.Parser.Term.exprQuot ||
        cur.isOfKind `Lean.Parser.Term.precheckedQuot then
      acc
    else
      match cur with
      | .node _ _ args => args.foldl (init := acc) fun a c => go c a
      | _ => acc

/--
Collect unescaped bare plain identifier pattern names in the same arm (excluding `skipCol`),
so `couldBeBareExprQuotOnMVar` treats cross-column binders as bound rather than fresh holes.
-/
def collectArmPlainIdentPats (pats : TSyntaxArray `term) (skipCol : Nat) : NameSet :=
  Id.run do
    let mut s : NameSet := {}
    for h : i in *...pats.size do
      if i != skipCol && pats[i].raw.isIdent then
        s := s.insert pats[i].raw.getId.eraseMacroScopes
    return s

/--
When a discriminant has an unresolved metavariable type `?m`, return `false` if `quot` contains
an atomic `$id` antiquotation that is neither bound by `?id`/`extraBound` nor in local/global
scope (meaning `$id` is a fresh syntax-pattern binder such as `` `($a + $b) ``, so `match_syntax`
should elaborate immediately without postponing).
-/
def couldBeBareExprQuotOnMVar (quot : Syntax) (extraBound : NameSet := {}) : TermElabM Bool := do
  unless isCandidateBareExprQuot quot do
    return false
  let body := quot[1]
  let patBinders : NameSet :=
    (collectNamedSyntaxHoles body).foldl (init := extraBound) fun s p => s.insert p.2
  let lctx ← getLCtx
  for id in collectUnescapedIdentAntiquots body do
    let inLocal := (lctx.findFromUserName? id).isSome
    let inGlobal := !(← resolveGlobalName id (enableLog := false)).isEmpty
    unless patBinders.contains id.eraseMacroScopes || inLocal || inGlobal do
      return false
  return true

/-- Expected-type classification for promoting bare `` `(p) `` quotations in pattern matching. -/
inductive QuotDiscrTypeClass where
  | isExpr
  | isMVar
  | other
  deriving BEq

private def isSyntaxTypeHead (ty : Expr) : Bool :=
  ty.isConstOf ``Lean.Syntax || ty.getAppFn.isConstOf ``Lean.TSyntax

private def hasNonInductDepExprType (ty : Expr) (depDiscrFVars : FVarIdSet) : MetaM Bool := do
  if depDiscrFVars.isEmpty || isSyntaxTypeHead ty || ty.isForall then
    return false
  if let .const c _ := ty.getAppFn then
    if let some (.inductInfo _) := (← getEnv).find? c then
      return false
  return ty.hasAnyFVar depDiscrFVars.contains && (ty.find? (·.isConstOf ``Lean.Expr)).isSome

private def classifyRawDiscrType (rawTy : Expr)
    (depDiscrFVars : FVarIdSet := {}) : MetaM QuotDiscrTypeClass := do
  let ty ← Meta.whnf (← instantiateMVars rawTy)
  if ty.isConstOf ``Lean.Expr then
    return .isExpr
  if ty.getAppFn.isMVar then
    return .isMVar
  if ← hasNonInductDepExprType ty depDiscrFVars then
    return .isExpr
  return .other

/--
Collect `FVarId`s of atomic local identifier discriminants other than column `excludeCol`, so
dependent discriminant types (e.g. `v : if b then Expr else Nat`) can still promote bare
`` `(p) `` patterns when they mention `Lean.Expr` under a non-inductive eliminator.
-/
def collectOtherDiscrFVars (discrs : TSyntaxArray `term) (excludeCol : Nat) :
    TermElabM FVarIdSet := do
  let lctx ← getLCtx
  let mut fvars : FVarIdSet := {}
  for h : colIdx in *...discrs.size do
    if colIdx != excludeCol then
      if let .ident _ _ id [] := discrs[colIdx].raw then
        if !id.isAnonymous then
          if let some ldecl := lctx.findFromUserName? id then
            fvars := fvars.insert ldecl.fvarId
  return fvars

/--
Classify `discr`'s type as `Lean.Expr`, an unassigned mvar app, or `.other`. Uses an `O(1)`
`LocalContext` lookup for atomic local identifiers to avoid re-elaborating syntax-match
discriminants, and wraps compound fallback elaboration in `withEnableInfoTree false`.
-/
def classifyDiscrTypeSilent (discr : Term)
    (depDiscrFVars : FVarIdSet := {}) : TermElabM QuotDiscrTypeClass := do
  if let .ident _ _ id [] := discr.raw then
    if !id.isAnonymous then
      if let some ldecl := (← getLCtx).findFromUserName? id then
        return ← try
          classifyRawDiscrType ldecl.type depDiscrFVars
        catch
          | ex@(.internal _ _) => throw ex
          | _ => pure .other
  let savedMsgs ← Core.getMessageLog
  try
    Core.resetMessageLog
    withEnableInfoTree false <| withoutModifyingElabMetaStateWithInfo <| withoutErrToSorry do
      let d ← Term.elabTerm discr none
      if (← Core.getMessageLog).hasErrors then
        return .other
      classifyRawDiscrType (← Meta.inferType d) depDiscrFVars
  catch
    | ex@(.internal id _) =>
      if id == postponeExceptionId then
        throw ex
      return .other
    | _ => return .other
  finally
    Core.setMessageLog savedMsgs

end Lean.Elab.Term.Quotation
