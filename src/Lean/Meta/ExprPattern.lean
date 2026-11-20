/-
Copyright (c) 2026 Andres Erbsen. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Andres Erbsen
-/
module

prelude
public import Lean.Meta.ExprPatternCore
public import Lean.Meta.Sym.SymM
import Lean.Meta.DiscrTree
import Lean.Meta.Sym.Pattern
import Lean.Meta.Sym.Offset
import Lean.Meta.Sym.Simp.DiscrTree
import Lean.Meta.Sym.SynthInstance
import Lean.Meta.Sym.InstantiateS
import Lean.Meta.Sym.InstantiateMVarsS
import Lean.Meta.Sym.Eta

public section

/-!
# `/sym` Matching, Template Instantiation, and Indexing for Quasi-Quoted `Expr` Patterns

Extends `Lean.Meta.ExprPatternCore` with `MonadSym` and the `/sym` backend backed by
`Lean.Meta.Sym`, keeping core `/structural`, `/reducible`, `/instances`, `/defeq`, `ExprTemplate`,
`ExprContext`, `MVarId.firstHyp`, and `subterms` free of `Lean.Meta.Sym.*` dependencies.
-/

namespace Lean.Meta
open ExprPattern.Internal

/--
Typeclass for monads capable of executing `Lean.Meta.Sym.SymM` computations, used by
`` `(expr/sym| ...) `` matching and term-building quotations.
-/
class MonadSym (m : Type → Type v) where
  /-- Lift a `SymM` computation into `m`. -/
  liftSym {α : Type} : Sym.SymM α → m α

instance [MonadLiftT Sym.SymM m] : MonadSym m where
  liftSym x := liftM x

/-! ## `/sym` matching & term building (`SymM`) -/

private structure SymSiteKeyCache (κ α : Type) [BEq κ] [Hashable κ] where
  bySite : Std.HashMap Name (Nat × α) := {}
  byKey  : Std.HashMap κ (Nat × α) := {}

private builtin_initialize exprSymPatExt :
    Sym.SymExtension (SymSiteKeyCache (List Name × Expr × Nat) Sym.Pattern) ←
  Sym.registerSymExtension (return {})

private builtin_initialize exprSymTmplExt : Sym.SymExtension (SymSiteKeyCache Expr Expr) ←
  Sym.registerSymExtension (return {})

private structure SymIdxCacheState where
  entries : Std.HashMap Name (Nat × DiscrTree Nat) := {}

private builtin_initialize exprSymIdxExt : Sym.SymExtension SymIdxCacheState ←
  Sym.registerSymExtension (return {})

private def ensureSymExpr (e : Expr) : Sym.SymM Expr := do
  if ← Sym.isMaxShared e then
    Sym.instantiateMVarsS e
  else
    Sym.shareCommon (← instantiateMVars e)

private def symHasFreshTemp (mctx : MetavarContext) (baseDepth mvarCounterSaved : Nat)
    (e : Expr) : Bool :=
  if !e.hasMVar then
    false
  else
    (e.find? fun
      | .mvar id    => (mctx.findDecl? id).any (·.index >= mvarCounterSaved)
      | .sort u     => levelHasTempMVar mctx baseDepth u
      | .const _ us => us.any (levelHasTempMVar mctx baseDepth)
      | _           => false).isSome

@[inline]
private def getOrMkSymSiteKey {κ α : Type} [BEq κ] [Hashable κ]
    (ext : Sym.SymExtension (SymSiteKeyCache κ α)) (siteId : Name) (mkKey : Unit → κ)
    (mk : Sym.SymM α) : Sym.SymM α := do
  let constGen := (← getEnv).constGen
  let st ← ext.getState
  if !siteId.isAnonymous then
    if let some (gen, cached) := st.bySite[siteId]? then
      if gen == constGen then
        return cached
  else
    let k := mkKey ()
    if let some (gen, cached) := st.byKey[k]? then
      if gen == constGen then
        return cached
  let val ← mk
  ext.modifyState fun s =>
    if !siteId.isAnonymous then
      { s with bySite := s.bySite.insert siteId (constGen, val) }
    else
      { s with byKey := s.byKey.insert (mkKey ()) (constGen, val) }
  return val

private def getOrMkSymPattern (siteId : Name) (p : ExprPattern) : Sym.SymM Sym.Pattern :=
  getOrMkSymSiteKey exprSymPatExt siteId (fun _ => (p.levelParams, p.lam, p.numVars)) do
    Sym.mkPatternFromLambda p.lam p.levelParams p.numVars (zetaDelta := false)

private def checkSymPinEq (captured pinVal : Expr) : Sym.SymM Bool := do
  if ← Sym.isDefEqS captured pinVal (unify := false) (zetaDelta := true) then
    return true
  -- Allow proof irrelevance when a direct `$h` pin binds a proof term.
  if (← isProof captured) && (← isProof pinVal) then
    let ty1 ← ensureSymExpr (← inferType captured)
    let ty2 ← ensureSymExpr (← inferType pinVal)
    return ← Sym.isDefEqS ty1 ty2 (unify := false) (zetaDelta := true)
  return false

private def symTracePrefixMatches (p : ExprPattern) (pinIdxs : Array Nat)
    (pins : Array Expr) (vars : Array (Option Expr)) (pe e : Expr) :
    Sym.SymM (Bool × Array (Option Expr)) := do
  match pe with
  | .mdata _ b => symTracePrefixMatches p pinIdxs pins vars b e
  | .bvar i =>
    let k := p.numVars - 1 - i
    let e := (Sym.etaReduce e).consumeMData
    if let some pos := pinIdxs.idxOf? k then
      let ok ← checkSymPinEq e (pins.getD pos default)
      return (ok, vars)
    else
      match vars.getD k none with
      | none    => return (true, vars.setIfInBounds k (some e))
      | some v' => return (← checkSymPinEq e v', vars)
  | pe =>
    let e' := (Sym.etaReduce e).consumeMData
    if eqModMData pe e' then
      return (true, vars)
    match pe, e' with
    | .app pf pa, .app ef ea =>
      let (okF, vars) ← symTracePrefixMatches p pinIdxs pins vars pf ef
      if !okF then return (false, vars)
      symTracePrefixMatches p pinIdxs pins vars pa ea
    | _, _ => return (false, vars)
termination_by sizeOf pe

private def findFirstSymMismatch (fuel : Nat) (p : ExprPattern) (pinIdxs : Array Nat)
    (pins : Array Expr) (vars : Array (Option Expr)) (pe e : Expr) :
    Sym.SymM (MessageData × Array (Option Expr)) := do
  let mkFmtMsg (pFmt : Format) (eSub : Expr) : Sym.SymM MessageData :=
    return m!"first mismatch:{indentD pFmt}\nagainst:{indentExpr eSub}\n(sym mismatch)"
  let mkExprMsg (pSub eSub : Expr) : Sym.SymM MessageData :=
    addMessageContext
      m!"first mismatch:{indentExpr pSub}\nagainst:{indentExpr eSub}\n(sym mismatch)"
  match fuel with
  | 0 =>
    let pFmt ← formatPatExpr p pinIdxs pins #[] pe
    return (← mkFmtMsg pFmt e, vars)
  | fuel + 1 =>
    let pe := pe.consumeMData
    let e := (Sym.etaReduce e).consumeMData
    if let .letE _ _ pv pb _ := pe then
      return ← findFirstSymMismatch fuel p pinIdxs pins vars (pb.instantiate1 pv) e
    if let .letE x t v b nondep := e then
      return ← withLetDecl x t v (nondep := nondep) fun y =>
        findFirstSymMismatch fuel p pinIdxs pins vars pe (b.instantiate1 y)
    if let .fvar fv := e.getAppFn then
      if let some val ← Sym.getLetValueS? fv then
        let e' := if e.isApp then val.betaRev e.getAppRevArgs else val
        return ← findFirstSymMismatch fuel p pinIdxs pins vars pe e'
    if e.isApp && e.getAppFn.isLambda then
      return ← findFirstSymMismatch fuel p pinIdxs pins vars pe e.headBeta
    if let .bvar i := pe.getAppFn then
      let k := p.numVars - 1 - i
      if pe.isApp then
        if let some pos := pinIdxs.idxOf? k then
          if e.isApp && pe.getAppNumArgs == e.getAppNumArgs then
            let pinApp := mkAppN (pins.getD pos default) pe.getAppArgs
            return ← findFirstSymMismatch fuel p pinIdxs pins vars pinApp e
      else if let some v' := vars.getD k none then
        return (← mkExprMsg v' e, vars)
    match pe, e with
    | .app pf pa, .app ef ea =>
      let (okF, vars') ← symTracePrefixMatches p pinIdxs pins vars pf ef
      if okF then
        findFirstSymMismatch fuel p pinIdxs pins vars' pa ea
      else
        findFirstSymMismatch fuel p pinIdxs pins vars pf ef
    | .forallE _ pd pb _, .forallE n ed eb _
    | .lam _ pd pb _,     .lam n ed eb _ =>
      let (okD, vars') ← symTracePrefixMatches p pinIdxs pins vars pd ed
      if !okD then
        findFirstSymMismatch fuel p pinIdxs pins vars pd ed
      else
        withLocalDeclD n ed fun y =>
          findFirstSymMismatch fuel p pinIdxs pins vars' (pb.instantiate1 y) (eb.instantiate1 y)
    | _, _ =>
      let pFmt ← formatPatExpr p pinIdxs pins #[] pe
      return (← mkFmtMsg pFmt e, vars)

private def matchSymCore? (siteId : Name) (p : ExprPattern) (rel : ResolvedExprMatchRel)
    (pinIdxs : Array Nat) (pins : Array Expr) (e : Expr) : Sym.SymM (Option (Array Expr)) := do
  validateResolvedRel rel
  let symPat ← getOrMkSymPattern siteId p
  let e ← ensureSymExpr e
  let traceEnabled ← isTracingEnabledFor `Meta.Match.expr
  let traceFail (msg : MessageData) : Sym.SymM (Option (Array Expr)) := do
    if traceEnabled then
      let patFmt ← formatPatExpr p pinIdxs pins #[] p.body
      let eInst ← instantiateMVarsIfNeeded e
      trace[Meta.Match.expr]
        "[sym] failed:{indentD patFmt}\nagainst:{indentExpr eInst}\n{msg}"
    return none
  let baseDepth := (← getMCtx).depth
  withNewMCtxDepth do
    let mvarCounterSaved := (← getMCtx).mvarCounter
    let some res ← symPat.match? e (zetaDelta := true)
      | if traceEnabled then
          let initVars := Array.replicate p.numVars none
          let (mmMsg, _) ← findFirstSymMismatch 64 p pinIdxs pins initVars p.body e
          return ← traceFail mmMsg
        return none
    unless res.unresolvedInsts.isEmpty do
      return ← traceFail m!"unresolved instance argument(s)"
    for h : i in *...pinIdxs.size do
      let pinIdx := pinIdxs[i]
      let pinVal ← ensureSymExpr (pins.getD i default)
      let captured ← Sym.instantiateMVarsS (res.args.getD pinIdx default)
      if symHasFreshTemp (← getMCtx) baseDepth mvarCounterSaved captured then
        return ← traceFail m!"fresh metavariable in pinned capture:{indentExpr captured}"
      unless ← checkSymPinEq captured pinVal do
        return ← traceFail
          m!"first mismatch:{indentExpr pinVal}\nagainst:{indentExpr captured}\n(pin mismatch)"
    let mut namedOut : Array Expr := Array.emptyWithCapacity p.namedIdx.size
    for idx in p.namedIdx do
      let val ← Sym.instantiateMVarsS (res.args.getD idx default)
      if symHasFreshTemp (← getMCtx) baseDepth mvarCounterSaved val then
        return ← traceFail m!"fresh metavariable in captured term:{indentExpr val}"
      namedOut := namedOut.push val
    if traceEnabled then
      let patFmt ← formatPatExpr p pinIdxs pins #[] p.body
      let eInst ← instantiateMVarsIfNeeded e
      trace[Meta.Match.expr]
        "[sym] matched:{indentD patFmt}\nagainst:{indentExpr eInst}"
    return some namedOut

/--
Match compiled pattern `p` against `e` using the `Lean.Meta.Sym` matching engine in `SymM`,
checking any `$e` pins at `pinIdxs` with `Sym.isDefEqS` (`unify := false`) and rejecting
unresolved instances or fresh temporary metavariables.
-/
def ExprPattern.matchSym? (p : ExprPattern) (rel : ExprMatchRel) (e : Expr)
    (pinIdxs : Array Nat := #[]) (pins : Array Expr := #[]) :
    Sym.SymM (Option (Array Expr)) := do
  validateRelCore rel
  matchSymCore? .anonymous p (emptyResolvedRel rel) pinIdxs pins e

/--
CPS matching combinator for `/sym` with a pre-resolved static relation `rel`, caching the
compiled `Sym.Pattern` in `Sym.SymExtension` keyed by `siteId`.
-/
@[inline]
def ExprPattern.matchSymResolvedOrElse {m : Type → Type v} [Monad m] [MonadSym m] {α : Type}
    (siteId : Name) (p : ExprPattern) (rel : ResolvedExprMatchRel)
    (pinIdxs : Array Nat) (pins : Array Expr) (e : Expr)
    (onMatch : Array Expr → m α) (onFail : Unit → m α) : m α := do
  match ← MonadSym.liftSym (matchSymCore? siteId p rel pinIdxs pins e) with
  | some xs => onMatch xs
  | none    => onFail ()

private def matchSymSiteCore? (siteId : Name) (p : ExprPattern) (rel : ExprMatchRel)
    (pinIdxs : Array Nat) (pins : Array Expr) (localItems : Array (Bool × Expr)) (e : Expr) :
    Sym.SymM (Option (Array Expr)) := do
  validateRelCore rel localItems
  matchSymCore? siteId p (emptyResolvedRel rel) pinIdxs pins e

/--
CPS matching combinator for `/sym`, validating `rel`/`localItems` at runtime and caching the
compiled `Sym.Pattern` in `Sym.SymExtension` keyed by `siteId`.
-/
@[inline]
def ExprPattern.matchSymSiteOrElse {m : Type → Type v} [Monad m] [MonadSym m] {α : Type}
    (siteId : Name) (p : ExprPattern) (rel : ExprMatchRel)
    (pinIdxs : Array Nat) (pins : Array Expr) (localItems : Array (Bool × Expr)) (e : Expr)
    (onMatch : Array Expr → m α) (onFail : Unit → m α) : m α := do
  match ← MonadSym.liftSym (matchSymSiteCore? siteId p rel pinIdxs pins localItems e) with
  | some xs => onMatch xs
  | none    => onFail ()

private def getOrMkSymTemplate (siteId : Name) (tmpl : ExprTemplate) : Sym.SymM Expr :=
  getOrMkSymSiteKey exprSymTmplExt siteId (fun _ => tmpl.lam) do
    -- Share closed template once per site; never run `shareCommon` on open `hasLooseBVars` bodies.
    Sym.shareCommon (← Sym.foldProjs tmpl.lam)

private def synthSymTCWithError (tcMV : MVarId) (tcTy : Expr) : Sym.SymM Unit := do
  let inst ←
    if let some inst ← Sym.synthInstance? tcTy then
      pure inst
    else
      try
        Meta.synthInstance tcTy
      catch ex =>
        throwError "expr quotation failed to synthesize dependent instance{indentExpr tcTy}\n\
          {ex.toMessageData}"
  tcMV.assign (← Sym.shareCommon inst)

private def instantiateSymCore (siteId : Name) (tmpl : ExprTemplate)
    (rel : ResolvedExprMatchRel) (splices : Array Expr) : Sym.SymM Expr := do
  validateResolvedRel rel
  let lamShared ← getOrMkSymTemplate siteId tmpl
  let n := tmpl.varKinds.size
  if n == 0 && tmpl.levelParams.isEmpty then
    return lamShared
  let baseDepth := (← getMCtx).depth
  let baseLCtxSize := (← getLCtx).decls.size
  let (domsShared, bodyShared) := peelTemplateLambdas n lamShared
  let _ := domsShared
  let (usResolved, substAfterSplices, holePlans) ← withNewMCtxDepth do
    let us ← tmpl.levelParams.mapM fun _ => mkFreshLevelMVar
    let lam :=
      if us.isEmpty then lamShared
      else lamShared.instantiateLevelParams tmpl.levelParams us
    let (doms, _body) := peelTemplateLambdas n lam
    let mut subst : Array Expr := Array.emptyWithCapacity doms.size
    let mut pendingTCs : Array MVarId := #[]
    let mut holePlaceholders : Array HolePlaceholder := #[]
    for h : i in *...doms.size do
      let expTyRaw := doms[i].instantiateRevRange 0 subst.size subst
      let mut expTy ← instantiateMVars expTyRaw
      match tmpl.varKinds.getD i .infer with
      | .infer =>
        let mv ← mkFreshExprMVar (some expTy)
        subst := subst.push mv
      | .tc =>
        let mv ← mkFreshExprMVar (some expTy) .synthetic
        subst := subst.push mv
        pendingTCs := pendingTCs.push mv.mvarId!
      | .splice pos =>
        let rawVal := splices.getD pos default
        if rawVal.hasLooseBVars then
          throwError "expr quotation splice expression contains loose bound variable:\
            {indentExpr rawVal}"
        let val ← ensureSymExpr rawVal
        let argTy ← instantiateMVars (← inferType val)
        let (ok, pendingTCs', expTy') ← checkSpliceTypeWithPendingTCs
          synthSymTCWithError baseDepth baseLCtxSize holePlaceholders pendingTCs argTy expTy
          fun aTy eTy =>
            if Sym.isSameExpr aTy eTy then pure true
            else withTransparency .default <| isDefEq aTy eTy
        pendingTCs := pendingTCs'
        expTy := expTy'
        unless ok do
          let expTyShown ← instantiateMVars expTy
          throwError "expr quotation splice type mismatch: argument{indentExpr val}\n\
            has type{indentExpr argTy}\nbut is expected to have type{indentExpr expTyShown}"
        subst := subst.push val
      | .hole userName? =>
        let mv ← mkFreshExprMVar (some expTy) .syntheticOpaque
        subst := subst.push mv
        holePlaceholders := holePlaceholders.push (i, mv.mvarId!, userName?)
    resolveRemainingTCs synthSymTCWithError baseDepth pendingTCs
    let mctx ← getMCtx
    let mut usResolved : List Level := []
    for u in us do
      let u' ← instantiateLevelMVars u
      if levelHasTempMVar mctx baseDepth u' then
        throwError "expr quotation failed to resolve universe level at runtime"
      usResolved := u' :: usResolved
    usResolved := usResolved.reverse
    let mut finalSubst := subst
    for h : i in *...doms.size do
      match tmpl.varKinds.getD i .infer with
      | .infer | .tc =>
        let v ← instantiateMVars (finalSubst.getD i default)
        if hasTempMVar (← getMCtx) baseDepth v then
          throwError "expr quotation failed to resolve implicit argument at runtime:\
            {indentExpr v}"
        finalSubst := finalSubst.setIfInBounds i (← ensureSymExpr v)
      | .splice _ | .hole _ => pure ()
    let holePlans ← validateTempHolePlans baseDepth holePlaceholders
    return (usResolved, finalSubst, holePlans)
  let finalSubst ← materializeHolePlans holePlans substAfterSplices ensureSymExpr Sym.shareCommon
  -- `bodyShared` and every entry of `finalSubst` are already maximally shared in `Sym.State`.
  let closedBody ← Sym.instantiateRevS bodyShared finalSubst
  if tmpl.levelParams.isEmpty then
    return closedBody
  else
    Sym.shareCommon (closedBody.instantiateLevelParams tmpl.levelParams usResolved)

/--
Instantiate a compiled `ExprTemplate` in any `[MonadSym m]` monad with a pre-resolved static
`/sym` relation `rel`, caching the folded & maximally shared closed template per `siteId`.
-/
@[inline]
def ExprTemplate.instantiateSymResolved {m : Type → Type v} [Monad m] [MonadSym m]
    (siteId : Name) (tmpl : ExprTemplate) (rel : ResolvedExprMatchRel)
    (splices : Array Expr) : m Expr :=
  MonadSym.liftSym (instantiateSymCore siteId tmpl rel splices)

private def instantiateSymSiteCore (siteId : Name) (tmpl : ExprTemplate) (rel : ExprMatchRel)
    (splices : Array Expr) (localItems : Array (Bool × Expr)) : Sym.SymM Expr := do
  validateRelCore rel localItems
  instantiateSymCore siteId tmpl (emptyResolvedRel rel) splices

/--
Instantiate a compiled `ExprTemplate` in any `[MonadSym m]` monad under `/sym`, validating `rel`
and `localItems` at runtime and caching the shared closed template per `siteId`.
-/
@[inline]
def ExprTemplate.instantiateSymSite {m : Type → Type v} [Monad m] [MonadSym m]
    (siteId : Name) (tmpl : ExprTemplate) (rel : ExprMatchRel)
    (splices : Array Expr) (localItems : Array (Bool × Expr) := #[]) : m Expr :=
  MonadSym.liftSym (instantiateSymSiteCore siteId tmpl rel splices localItems)

/-! ## `/sym` `DiscrTree` match dispatch -/

private def annotateSymNatAndOffsets : Expr → Expr
  | .mdata _ b => annotateSymNatAndOffsets b
  | e =>
    if (Sym.isOffset? e).isSome || Sym.isQuasiOffset e || (Sym.isNatValue? e).isSome ||
        e.isConstOf ``Nat.zero || e.isRawNatLit || e.isLambda || e.isSort then
      DiscrTree.mkNoindexAnnotation e
    else
      match e with
      | .app f a         => mkApp (annotateSymNatAndOffsets f) (annotateSymNatAndOffsets a)
      | .forallE n d b bi =>
        .forallE n (annotateSymNatAndOffsets d) (annotateSymNatAndOffsets b) bi
      | _                => e

private def mkSymPatDiscrTreeKeys (p : Sym.Pattern) : Array DiscrTree.Key :=
  let patExpr := annotateSymNatAndOffsets p.pattern
  if DiscrTree.hasNoindexAnnotation patExpr then
    #[.star]
  else
    Sym.Pattern.mkDiscrTreeKeys { p with pattern := patExpr }

private def symResolveMVars (mctx : MetavarContext) : Nat → Expr → Expr
  | 0, e => e
  | fuel + 1, e =>
    if e.hasExprMVar then
      match e.getAppFn with
      | .mvar mvarId =>
        match mctx.getExprAssignmentCore? mvarId with
        | some v => symResolveMVars mctx fuel (v.betaRev e.getAppRevArgs)
        | none   => e
      | _ => e
    else
      e

private def symGetKey (e : Expr) : DiscrTree.Key :=
  match e.getAppFn' with
  | .lit v            => .lit v
  | .const declName _ => .const declName e.getAppNumArgs'
  | .fvar fvarId      => .fvar fvarId e.getAppNumArgs'
  | .forallE ..       => .arrow
  | _                 => .other

private def symPushArgsTodo (todo : Array Expr) (e : Expr) : Array Expr :=
  match e with
  | .app f a         => symPushArgsTodo (todo.push a) f
  | .forallE _ d b _ => todo.push b |>.push d
  | .mdata _ e       => symPushArgsTodo todo e
  | _                => todo

private def symZetaHeadLets (e : Expr) (subst : Array Expr := #[]) : Expr :=
  match e with
  | .mdata _ b => symZetaHeadLets b subst
  | .letE _ _ v b _ =>
    symZetaHeadLets b (subst.push (v.instantiateBetaRevRange 0 subst.size subst))
  | _ =>
    if subst.isEmpty then e else e.instantiateBetaRevRange 0 subst.size subst

-- Terminates modulo `SymM` recursion depth (`withIncRecDepth`) while unfolding head redexes.
private partial def symTrieGetMatch (accRef : IO.Ref (Array Nat)) (mctx : MetavarContext)
    (fuel : Nat) (todo : Array Expr) (t : DiscrTree.Trie Nat) (visitStar : Bool := true) :
    Sym.SymM Unit :=
  withIncRecDepth do
  match t with
  | .chain key child =>
    if todo.isEmpty then
      return ()
    let raw := todo.back!
    let todoPop := todo.pop
    let e := Sym.etaReduce (symResolveMVars mctx fuel raw.consumeMData) |>.consumeMData
    if key == .star then
      if visitStar then
        symTrieGetMatch accRef mctx fuel todoPop child
    else
      if key == symGetKey e then
        symTrieGetMatch accRef mctx fuel (symPushArgsTodo todoPop e) child
      if e.isLet then
        symTrieGetMatch accRef mctx fuel (todoPop.push (symZetaHeadLets e)) (.chain key child)
          (visitStar := false)
      else if let .fvar fv := e.getAppFn then
        if let some val ← Sym.getLetValueS? fv then
          let nextE := if e.isApp then val.betaRev e.getAppRevArgs else val
          symTrieGetMatch accRef mctx fuel (todoPop.push nextE) (.chain key child)
            (visitStar := false)
      else if e.isApp && e.getAppFn.isLambda then
        symTrieGetMatch accRef mctx fuel (todoPop.push e.headBeta)
          (.chain key child) (visitStar := false)
  | .node vs cs =>
    if todo.isEmpty then
      accRef.modify (· ++ vs)
    else if h : cs.size = 0 then
      return ()
    else
      let raw := todo.back!
      let todoPop := todo.pop
      let e := Sym.etaReduce (symResolveMVars mctx fuel raw.consumeMData) |>.consumeMData
      if visitStar && cs[0].1 == .star then
        symTrieGetMatch accRef mctx fuel todoPop cs[0].2
      let k := symGetKey e
      if k != .star then
        if let some (_, child) := cs.binSearch (k, default) (fun a b => a.1 < b.1) then
          symTrieGetMatch accRef mctx fuel (symPushArgsTodo todoPop e) child
      if e.isLet then
        symTrieGetMatch accRef mctx fuel (todoPop.push (symZetaHeadLets e)) (.node vs cs)
          (visitStar := false)
      else if let .fvar fv := e.getAppFn then
        if let some val ← Sym.getLetValueS? fv then
          let nextE := if e.isApp then val.betaRev e.getAppRevArgs else val
          symTrieGetMatch accRef mctx fuel (todoPop.push nextE) (.node vs cs)
            (visitStar := false)
      else if e.isApp && e.getAppFn.isLambda then
        symTrieGetMatch accRef mctx fuel (todoPop.push e.headBeta) (.node vs cs)
          (visitStar := false)

-- Terminates modulo `SymM` recursion depth (`withIncRecDepth`) while unfolding head redexes.
private partial def symRootMatch (accRef : IO.Ref (Array Nat)) (mctx : MetavarContext)
    (fuel : Nat) (d : DiscrTree Nat) (e : Expr) : Sym.SymM Unit :=
  withIncRecDepth do
  let e := Sym.etaReduce (symResolveMVars mctx fuel e.consumeMData) |>.consumeMData
  if let some child := d.root.find? (symGetKey e) then
    symTrieGetMatch accRef mctx fuel (symPushArgsTodo #[] e) child
  if e.isLet then
    symRootMatch accRef mctx fuel d (symZetaHeadLets e)
  else if let .fvar fv := e.getAppFn then
    if let some val ← Sym.getLetValueS? fv then
      let nextE := if e.isApp then val.betaRev e.getAppRevArgs else val
      symRootMatch accRef mctx fuel d nextE
  else if e.isApp && e.getAppFn.isLambda then
    symRootMatch accRef mctx fuel d e.headBeta

private def symDiscrTreeGetMatch (d : DiscrTree Nat) (e : Expr) : Sym.SymM (Array Nat) := do
  let mctx ← getMCtx
  let fuel := maxRecDepth.get (← getOptions)
  let init :=
    match d.root.find? .star with
    | some (.node vs _) => vs
    | _                 => #[]
  let accRef ← IO.mkRef init
  symRootMatch accRef mctx fuel d e
  return sortAndDedupCands (← accRef.get)

private def getOrMkSymIndex (siteId : Name) (pats : Array ExprPattern) :
    Sym.SymM (DiscrTree Nat) := do
  let constGen := (← getEnv).constGen
  let st ← exprSymIdxExt.getState
  if !siteId.isAnonymous then
    if let some (gen, cached) := st.entries[siteId]? then
      if gen == constGen then
        return cached
  let mut tree : DiscrTree Nat := {}
  for h : i in *...pats.size do
    let pat := pats[i]
    let patSite := if siteId.isAnonymous then .anonymous else siteId ++ .num `pat i
    let symPat ← getOrMkSymPattern patSite pat
    tree := tree.insertKeyValue (mkSymPatDiscrTreeKeys symPat) i
  unless siteId.isAnonymous do
    exprSymIdxExt.modifyState fun s =>
      { s with entries := s.entries.insert siteId (constGen, tree) }
  return tree

private def matchSymIndexedCandidates (siteId : Name) (pats : Array ExprPattern)
    (rel : ResolvedExprMatchRel) (scrutinee : Expr) : Sym.SymM (Array Nat × Expr) := do
  validateResolvedRel rel
  let tree ← getOrMkSymIndex siteId pats
  let e ← ensureSymExpr scrutinee
  let cands ← symDiscrTreeGetMatch tree e
  if ← isTracingEnabledFor `Meta.Match.expr then
    let scrut ← instantiateMVarsIfNeeded e
    if cands.isEmpty then
      trace[Meta.Match.expr]
        "[indexed sym] 0 of {pats.size} candidate(s) matched index for:{indentExpr scrut}"
    else
      trace[Meta.Match.expr]
        "[indexed sym] trying candidates {cands.toList} of {pats.size} for:{indentExpr scrut}"
  return (cands, e)

/--
Indexed CPS match dispatcher for consecutive single-slot `/sym` alternatives in any `[MonadSym m]`
monad. Builds and caches a `Sym.Simp.DiscrTree Nat` in `Sym.SymExtension` keyed by `siteId`,
retrieves candidate indices modulo `let`/`zetaDelta`/beta/eta/offsets/numerals, sorts & deduplicates
them in source order, and invokes `tryAt[idx]` only on candidate branches.
-/
@[inline]
def ExprPattern.matchSymIndexedOrElse {m : Type → Type v} [Monad m] [MonadSym m] {α : Type}
    (siteId : Name) (pats : Array ExprPattern) (rel : ResolvedExprMatchRel) (scrutinee : Expr)
    (tryAt : Array (Expr → (Unit → m α) → m α)) (onFail : Unit → m α) : m α := do
  let (cands, e) ← MonadSym.liftSym (matchSymIndexedCandidates siteId pats rel scrutinee)
  dispatchCandidates cands e tryAt onFail

/--
Compute the `DiscrTree` key path that `p` produces under relation `rel` (including `/sym`), or
`none` if `rel` is not index-sound. Intended for diagnostics such as `#check_pattern`.
-/
def ExprPattern.discTreeKeys? (rel : ExprMatchRel) (p : ExprPattern) :
    MetaM (Option (Array DiscrTree.Key)) := do
  unless rel.isIndexSound do
    return none
  if rel.engine == .sym then
    let symPat ← Sym.SymM.run <| Sym.mkPatternFromLambda p.lam p.levelParams p.numVars
      (zetaDelta := false)
    return some (mkSymPatDiscrTreeKeys symPat)
  p.discTreeKeysMeta? rel

end Lean.Meta
