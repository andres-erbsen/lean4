/-
Copyright (c) 2026 Lean FRO LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sebastian Graf
-/
module

prelude
public import Lean.Elab.Term
meta import Lean.Parser.Do
import Lean.Elab.PatternVar
import Lean.Elab.Quotation
import Lean.Elab.ExprQuot

public section

namespace Lean.Elab.Do

open Lean Meta Parser.Term

-- support both regular and syntax match; try syntax-quotation first so simple
-- patterns (identifiers, holes, antiquotations) are handled without macro
-- expansion and fall back to the regular pattern-var collector for
-- everything else. When both fail, the regular collector's error wins and
-- usually points at the offending pattern with a meaningful message instead
-- of the catch-all "unsupported pattern in syntax match".
/--
Promote a top-level bare `` `(p) `` pattern iff `rhs` elaborates to `Lean.Expr` (postponing on
candidate `.isMVar`). Leaves `Syntax` and other types untouched.
-/
def promoteBarePatForRhs (pattern : Term) (rhs : Term)
    (depDiscrFVars : FVarIdSet := {}) : TermElabM Term := do
  let some q := Term.ExprQuot.unwrapTopBareTermQuot? pattern.raw | return pattern
  unless Term.Quotation.shouldCheckBareQuotDiscr rhs q do
    return pattern
  match ← Term.Quotation.classifyDiscrTypeSilent rhs depDiscrFVars with
  | .isExpr => return ⟨Term.ExprQuot.promoteAllBareTermQuotsInPat pattern.raw⟩
  | .isMVar =>
    if ← Term.Quotation.couldBeBareExprQuotOnMVar q then
      Term.tryPostpone
    return pattern
  | .other => return pattern

def getPatternVarsEx (pattern : Term) : TermElabM (Array Ident) :=
  open TSyntax.Compat in -- until PatternVar := Ident
  if Term.ExprQuot.hasExprQuotInPat pattern then
    Term.getPatternVars pattern
  else
    try
      return ← Term.Quotation.getPatternVars pattern
    catch
      | ex@(.internal _) => throw ex
      | _ =>
        if (Term.ExprQuot.unwrapTopBareTermQuot? pattern.raw).isNone &&
            Term.ExprQuot.hasBareTermQuotInPat pattern.raw then
          try
            return ← Term.getPatternVars (Term.ExprQuot.promoteAllBareTermQuotsInPat pattern)
          catch
            | ex@(.internal _) => throw ex
            | _ => return ← Term.getPatternVars pattern
        else
          return ← Term.getPatternVars pattern

def getPatternsVarsEx (patterns : Array Term) : TermElabM (Array Ident) :=
  open TSyntax.Compat in -- until PatternVar := Ident
  if patterns.any (Term.ExprQuot.hasExprQuotInPat ·) then
    Term.getPatternsVars patterns
  else
    try
      return ← Term.Quotation.getPatternsVars patterns
    catch
      | ex@(.internal _) => throw ex
      | _ =>
        if patterns.any (fun p =>
            (Term.ExprQuot.unwrapTopBareTermQuot? p.raw).isNone &&
            Term.ExprQuot.hasBareTermQuotInPat p.raw) then
          try
            return ← Term.getPatternsVars
              (patterns.map (Term.ExprQuot.promoteAllBareTermQuotsInPat ·))
          catch
            | ex@(.internal _) => throw ex
            | _ => return ← Term.getPatternsVars patterns
        else
          return ← Term.getPatternsVars patterns

private def getLetIdVars (letId : TSyntax ``letId) : TermElabM (Array Ident) := do
  match letId with
  | `(letId| _) => return #[]
  | `(letId| $id:ident) => return #[id]
  | `(letId| $s:hygieneInfo) => return #[HygieneInfo.mkIdent s `this (canonical := true)]
  | _ => throwError "Not a letId: {letId}"

def getLetIdDeclVars (letIdDecl : TSyntax ``letIdDecl) : TermElabM (Array Ident) := do
  -- def letIdDecl := leading_parser letIdLhs >> " := " >> termParser
  -- def letIdLhs : Parser := letId >> many (ppSpace >> letIdBinder) >> optType
  -- NB: `letIdLhs` does not introduce a new node
  getLetIdVars ⟨letIdDecl.raw[0]⟩

def getLetPatDeclVars (letPatDecl : TSyntax ``letPatDecl) : TermElabM (Array Ident) := do
  -- def letPatDecl := leading_parser termParser >> pushNone >> optType >> " := " >> termParser
  let pattern : Term := ⟨letPatDecl.raw[0]⟩
  let optType := letPatDecl.raw[2]
  let rhs : Term := ⟨letPatDecl.raw[4]⟩
  let rhsTyped ← if optType.isNone then pure rhs else `(($rhs : $(⟨optType[0][1]⟩)))
  let pattern ← promoteBarePatForRhs pattern rhsTyped
  getPatternVarsEx pattern

private def getLetEqnsDeclVars (letEqnsDecl : TSyntax ``letEqnsDecl) : TermElabM (Array Ident) :=
  -- def letEqnsDecl := leading_parser letIdLhs >> matchAlts
  -- def letIdLhs : Parser := letId >> many (ppSpace >> letIdBinder) >> optType
  -- NB: `letIdLhs` does not introduce a new node
  getLetIdVars ⟨letEqnsDecl.raw[0]⟩

def getLetDeclVars (letDecl : TSyntax ``letDecl) : TermElabM (Array Ident) := do
  match letDecl with
  | `(letDecl| $letIdDecl:letIdDecl) => getLetIdDeclVars letIdDecl
  | `(letDecl| $letPatDecl:letPatDecl) => getLetPatDeclVars ⟨letPatDecl⟩
  | `(letDecl| $letEqnsDecl:letEqnsDecl) => getLetEqnsDeclVars letEqnsDecl
  | _ => throwError "Not a let declaration: {toString letDecl}"

private def getLetRecDeclVars (letRecDecl : TSyntax ``letRecDecl) : TermElabM (Array Ident) := do
  -- def letRecDecl := optional docComment >> optional «attributes» >> letDecl >> Termination.suffix
  getLetDeclVars ⟨letRecDecl.raw[2]⟩

def getLetRecDeclsVars (letRecDecls : TSyntax ``letRecDecls) : TermElabM (Array Ident) := do
  -- def letRecDecls := sepBy1 letRecDecl ", "
  let `(letRecDecls| $[$letRecDecls:letRecDecl],*) := letRecDecls | throwUnsupportedSyntax
  let mut allVars := #[]
  for letRecDecl in letRecDecls do
    let vars ← getLetRecDeclVars letRecDecl
    allVars := allVars ++ vars
  return allVars

def getExprPatternVarsEx (exprPattern : TSyntax ``matchExprPat) : TermElabM (Array Ident) := do
  let `(matchExprPat| $[$var? @]? $_funName:ident $pvars*) := exprPattern | throwUnsupportedSyntax
  match var? with
  | some var => return #[var] ++ pvars.filter (·.raw.isIdent) |>.map (⟨·⟩)
  | none => return pvars.filter (·.raw.isIdent) |>.map (⟨·⟩)
