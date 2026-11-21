/-
Copyright (c) 2026 Andres Erbsen. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Andres Erbsen
-/
module

prelude
public import Lean.Meta.Basic
public import Lean.Meta.HasAssignableMVar
public import Lean.Meta.InferType
public import Lean.Meta.ExprDefEq
public import Lean.Meta.GetUnfoldableConst
public import Lean.Meta.FunInfo
public import Lean.Meta.AppBuilder
public import Lean.Meta.Tactic.Simp.SimpTheorems
import Lean.Meta.WHNF
import Init.Omega
public import Lean.Meta.Match.MatcherApp.Basic
import Lean.Meta.DiscrTree
import Lean.Util.CollectMVars

public section

/-!
# Core Runtime Representation, Non-`/sym` Engines, Templates, and Contexts for `Expr` Patterns

Defines:
- `ExprMatchEngine`, `ExprMatchItem`, `ExprMatchFlags`, `ExprMatchRel`, and `ResolvedExprMatchRel`
  for configuring structural and definitional matching relations (`structural`, `reducible`,
  `instances`, `defeq`, `sym`, `[±item, ...]`, and `±inst`/`±beta`/`±zeta`/`±proj`/`±eta`).
- `ExprPattern` and `ExprPattern.compile`, supporting:
  - `O(|pattern|)` structural matching with wildcard elision, lazy head-mvar resolution, empty-bound
    and closed-subterm `hasAnyFVar` skips,
  - syntactic/pointer-equality fast path before proof-irrelevance checks on closed mismatches,
  - precomputed pattern `levelParam` node sets and `.const`/`.sort` universe level checks,
  - direct pin pre-seeding and per-site `ResolvedExprMatchRel` runtime caching, and
  - lazy look-through with consistent `let`-rewrapping across structural and `isDefEq` engines.
- `ExprContext` (`ExprContext.fill`), `localHypTypes`, `localHypDecls`, `MVarId.firstHyp?`,
  `MVarId.firstHyp`, `Subterms` (`subterms`), and `MatchDiscriminants` (`matchDiscriminants`).
-/

namespace Lean.Meta

/--
Engine selecting how an `ExprPattern` is matched against a target `Expr`.

Note on `let` preservation: `/structural +zeta` is the faithful non-substituting look-through
engine. The `isDefEq`-based engines (`/reducible`, `/instances`, `/defeq`) lift and re-wrap outer
or inspected `let` expressions when possible, but still fall back to `isDefEq` substitution when a
`let` value depends on a pattern binder, and may return captures in `isDefEq`-normalized form.
-/
inductive ExprMatchEngine where
  /-- Truly syntactic structural matching (modulo `mdata`, assigned metavariables, and proofs). -/
  | structural
  /--
  Definitional equality with `.reducible` transparency as the base unfold set (see `ExprMatchEngine`
  notes on `isDefEq` `let`-substitution and normalization).
  -/
  | reducible
  /--
  Definitional equality with `.instances` transparency as the base unfold set (see `ExprMatchEngine`
  notes on `isDefEq` `let`-substitution and normalization).
  -/
  | instances
  /--
  Definitional equality with `.default` transparency as the base unfold set (see `ExprMatchEngine`
  notes on `isDefEq` `let`-substitution and normalization).
  -/
  | defeq
  /-- Sym matching engine backed by `Lean.Meta.Sym`. -/
  | sym
  deriving Inhabited, BEq, Repr

builtin_initialize registerTraceClass `Meta.Match.expr

register_builtin_option exprQuot.debug.checkIndex : Bool := {
  defValue := false
  descr := "cross-check DiscrTree-indexed expr pattern matches against skipped linear arms"
}

/-- A static constant or simp-set item in an expr quotation relation `[items]` list. -/
structure ExprMatchItem where
  /-- `true` to allow unfolding, `false` to block unfolding. -/
  positive  : Bool
  /-- Constant or simp-set name. -/
  declName  : Name
  /-- `true` if `declName` names a registered simp set (e.g. `simp` or `my_simps`). -/
  isSimpSet : Bool := false
  deriving Inhabited, BEq, Repr

/-- Overrides for `±inst`, `±beta`, `±zeta`, `±proj`, `±eta` in an expr quotation relation. -/
structure ExprMatchFlags where
  /--
  Override for instance-implicit argument definitional matching (`±inst`). Defaults to `false` on
  `.structural` (`+inst` opts in) and `true` on all other engines, where `-inst` is rejected.
  -/
  inst : Option Bool := none
  /-- Override for beta-reduction (`±beta`). -/
  beta : Option Bool := none
  /-- Override for `let` and context `zetaDelta` look-through (`±zeta`). -/
  zeta : Option Bool := none
  /-- Override for structure projection reduction (`±proj`). -/
  proj : Option Bool := none
  /-- Override for eta equivalence/expansion (`±eta`). -/
  eta  : Option Bool := none
  deriving Inhabited, BEq, Repr

/-- Resolved matching flags after applying engine defaults (no `Option`). -/
structure ResolvedExprMatchFlags where
  /--
  Compare instance-implicit arguments via `.instances` `isDefEq` when structural fails (`true` by
  default on non-`.structural` engines, where `-inst` is rejected).
  -/
  inst : Bool
  /-- Allow beta-reduction during matching. -/
  beta : Bool
  /-- Allow `let`-expression and local-def `zetaDelta` unfolding/look-through. -/
  zeta : Bool
  /-- Allow structure projection reduction. -/
  proj : Bool
  /-- Allow eta equivalence/expansion. -/
  eta  : Bool
  deriving Inhabited, BEq, Repr

/-- Matching relation specification for an `` `(expr[rel]| ...) `` quotation. -/
structure ExprMatchRel where
  /-- Base matching engine. -/
  engine : ExprMatchEngine := .structural
  /-- Static constant and simp-set unfold overrides, evaluated left-to-right. -/
  items  : Array ExprMatchItem := #[]
  /-- Explicit `±flag` overrides relative to the engine defaults. -/
  flags  : ExprMatchFlags := {}
  deriving Inhabited, BEq, Repr

/-- Resolve engine defaults with explicit flag overrides. -/
def ExprMatchRel.resolveFlags (rel : ExprMatchRel) : ResolvedExprMatchFlags :=
  let d := match rel.engine with
    | .structural => false
    | .reducible | .instances | .defeq | .sym => true
  { inst := rel.flags.inst.getD d
    beta := rel.flags.beta.getD d
    zeta := rel.flags.zeta.getD d
    proj := rel.flags.proj.getD d
    eta  := rel.flags.eta.getD d }

private def engineNameStr : ExprMatchEngine → String
  | .structural => "structural"
  | .reducible  => "reducible"
  | .instances  => "instances"
  | .defeq      => "defeq"
  | .sym        => "sym"

private def validateSymFlags (flags : ResolvedExprMatchFlags) : CoreM Unit := do
  unless flags.inst do
    throwError "expr quotation `/sym` relation does not support disabling `-inst`"
  unless flags.beta do
    throwError "expr quotation `/sym` relation does not support disabling `-beta`"
  unless flags.zeta do
    throwError "expr quotation `/sym` relation does not support disabling `-zeta`"
  unless flags.proj do
    throwError "expr quotation `/sym` relation does not support disabling `-proj`"
  unless flags.eta do
    throwError "expr quotation `/sym` relation does not support disabling `-eta`"

namespace ExprPattern.Internal

def validateRelCore (rel : ExprMatchRel) (localItems : Array (Bool × Expr) := #[]) :
    CoreM Unit := do
  let flags := rel.resolveFlags
  if rel.engine == .sym then
    unless rel.items.isEmpty do
      throwError "expr quotation `/sym` relation does not support `[items]` unfold overrides"
    unless localItems.isEmpty do
      throwError "expr quotation `/sym` relation does not support local `$x` unfold overrides"
    validateSymFlags flags
  else if rel.engine != .structural && !flags.inst then
    throwError "expr quotation `/{engineNameStr rel.engine}` relation does not support disabling \
      `-inst`; use `/structural` for syntactic instance comparison"

end ExprPattern.Internal

open ExprPattern.Internal

/--
Return `true` when `a` and `b` share the same runtime matching behavior (same engine, static
item overrides, and resolved `±flag` defaults).
-/
def ExprMatchRel.sameStaticBehavior (a b : ExprMatchRel) : Bool :=
  a.engine == b.engine && a.items == b.items && a.resolveFlags == b.resolveFlags

/--
Return `true` if shared-relation `DiscrTree` indexing is sound for static relation `rel`:
- `.structural` when `rel.items` is empty and `beta`/`zeta`/`proj`/`eta` are all `false`;
- `.reducible` when `beta`/`zeta`/`proj`/`eta` are all `true`;
- `.sym` (which validates no `[items]` or disabled flags).
-/
def ExprMatchRel.isIndexSound (rel : ExprMatchRel) : Bool :=
  let f := rel.resolveFlags
  match rel.engine with
  | .structural => rel.items.isEmpty && !f.beta && !f.zeta && !f.proj && !f.eta
  | .reducible  => f.beta && f.zeta && f.proj && f.eta
  | .sym        => rel.items.isEmpty && f.inst && f.beta && f.zeta && f.proj && f.eta
  | .instances | .defeq => false

/--
A pre-validated, pre-resolved matching relation produced by `ExprMatchRel.resolveStatic` and
`ResolvedExprMatchRel.withLocalItems`. Caching this across repeated match attempts avoids repeating
simp-extension lookups and declaration validation per scrutinee.
-/
structure ResolvedExprMatchRel where
  /-- Base matching engine. -/
  engine        : ExprMatchEngine
  /-- Resolved boolean flags. -/
  flags         : ResolvedExprMatchFlags
  /-- Validated static unfold rules in reverse order (later rules override earlier ones). -/
  itemRulesRev  : Array (Bool × Sum Name SimpTheorems) := #[]
  /-- Validated positive local `let` free variables (`+$x`). -/
  posFVars      : Array FVarId := #[]
  /-- Validated negative local `let` free variables (`-$x`). -/
  negFVars      : Array FVarId := #[]
  /-- `true` if any unfolding feature or item override is active. -/
  hasUnfolding  : Bool := false
  deriving Inhabited

namespace ExprPattern.Internal

def validateResolvedRel (rel : ResolvedExprMatchRel) : CoreM Unit := do
  if rel.engine == .sym then
    unless rel.itemRulesRev.isEmpty do
      throwError "expr quotation `/sym` relation does not support `[items]` unfold overrides"
    unless rel.posFVars.isEmpty && rel.negFVars.isEmpty do
      throwError "expr quotation `/sym` relation does not support local `$x` unfold overrides"
    validateSymFlags rel.flags
  else if rel.engine != .structural && !rel.flags.inst then
    throwError "expr quotation `/{engineNameStr rel.engine}` relation does not support disabling \
      `-inst`; use `/structural` for syntactic instance comparison"

end ExprPattern.Internal

open ExprPattern.Internal

private def simpTheoremsUnfolds (thms : SimpTheorems) (declName : Name) : Bool :=
  thms.isDeclToUnfold declName ||
    (thms.toUnfoldThms.contains declName && !thms.erased.contains (.decl declName))

namespace ExprPattern.Internal

def emptyResolvedRel (rel : ExprMatchRel) : ResolvedExprMatchRel :=
  let flags := rel.resolveFlags
  { engine := rel.engine
    flags
    hasUnfolding := flags.beta || flags.zeta || flags.proj || flags.eta }

end ExprPattern.Internal

open ExprPattern.Internal

private structure CachedSiteRel where
  rel         : ExprMatchRel
  constGen    : Nat
  declLogSize : Nat
  isExporting : Bool
  mainModule  : Name
  resolved    : ResolvedExprMatchRel
  simpSlots   : Array (Nat × SimpExtension × Bool)

private builtin_initialize resolvedRelCacheRef : IO.Ref (Std.HashMap Name CachedSiteRel) ←
  IO.mkRef {}

private def constKindNoUnfoldDesc? : ConstantInfo → Option String
  | .defnInfo _   => none
  | .thmInfo _    => some "a theorem"
  | .ctorInfo _   => some "a constructor"
  | .inductInfo _ => some "an inductive type"
  | .recInfo _    => some "a recursor"
  | .axiomInfo _  => some "an axiom"
  | .opaqueInfo _ => some "an opaque constant"
  | .quotInfo _   => some "a quotient primitive"

/-- Validate that `declName` exists in `env` and denotes an unfoldable definition. -/
def ExprMatchRel.validateUnfoldableConst (env : Environment) (declName : Name) : CoreM Unit := do
  let some cinfo := env.find? declName
    | throwError "unknown constant `{declName}` in expr match relation"
  if let some kindDesc := constKindNoUnfoldDesc? cinfo then
    throwError
      "invalid relation item `{declName}`: `{declName}` is {kindDesc} and has no unfolding"

private def resolveStaticCore (rel : ExprMatchRel) :
    MetaM (ResolvedExprMatchRel × Array (Nat × SimpExtension × Bool)) := do
  validateRelCore rel
  if rel.items.isEmpty then
    return (emptyResolvedRel rel, #[])
  let env ← getEnv
  let flags := rel.resolveFlags
  let mut rulesRev : Array (Bool × Sum Name SimpTheorems) := #[]
  let mut simpSlotsFwd : Array (Nat × SimpExtension × Bool) := #[]
  let mut posConsts : NameHashSet := {}
  let mut posSimpSets : Array SimpTheorems := #[]
  for item in rel.items do
    if item.isSimpSet then
      let some ext ← getSimpExtension? item.declName
        | throwError "unknown simp attribute `{item.declName}`"
      let thms ← ext.getTheorems
      if !item.positive && rel.engine == .structural then
        if posSimpSets.isEmpty && posConsts.isEmpty then
          throwError "invalid relation item `-{item.declName}`: \
            `structural` does not unfold any simp-set definitions by default"
      if item.positive then
        posSimpSets := posSimpSets.push thms
      simpSlotsFwd := simpSlotsFwd.push (rulesRev.size, ext, item.positive)
      rulesRev := rulesRev.push (item.positive, .inr thms)
    else
      ExprMatchRel.validateUnfoldableConst env item.declName
      if !item.positive && rel.engine == .structural then
        let inPosSimp := posSimpSets.any (simpTheoremsUnfolds · item.declName)
        unless posConsts.contains item.declName || inPosSimp do
          throwError "invalid relation item `-{item.declName}`: \
            `structural` does not unfold `{item.declName}` by default"
      if item.positive then
        posConsts := posConsts.insert item.declName
      rulesRev := rulesRev.push (item.positive, .inl item.declName)
  let n := rulesRev.size
  rulesRev := rulesRev.reverse
  let simpSlots := simpSlotsFwd.map fun (fwdIdx, ext, pos) => (n - 1 - fwdIdx, ext, pos)
  let resolved : ResolvedExprMatchRel := {
    engine       := rel.engine
    flags
    itemRulesRev := rulesRev
    hasUnfolding := flags.beta || flags.zeta || flags.proj || flags.eta || !rulesRev.isEmpty
  }
  return (resolved, simpSlots)

/--
Validate static `[items]` rules and resolve simp attributes once per site.
Rejects unknown constants, unknown simp attributes, and `-item` overrides over an empty
`structural` base.
-/
def ExprMatchRel.resolveStatic (rel : ExprMatchRel) : MetaM ResolvedExprMatchRel := do
  return (← resolveStaticCore rel).1

/--
Cached variant of `ExprMatchRel.resolveStatic` keyed by `siteId` in a runtime `IO.Ref`.
Validates against `Environment` counters (`constGen`, `declChangeLog.size`, `isExporting`,
`mainModule`) without `ObjectPtr` or `modifyEnv`, and refreshes simp extension states in `O(1)`
without re-calling `getSimpExtension?` or re-validating constants.
-/
def ExprMatchRel.resolveStaticCached (siteId : Name) (rel : ExprMatchRel) :
    MetaM ResolvedExprMatchRel := do
  validateRelCore rel
  if rel.items.isEmpty then
    return emptyResolvedRel rel
  if siteId.isAnonymous then
    return ← rel.resolveStatic
  let env ← getEnv
  if let some entry := (← resolvedRelCacheRef.get)[siteId]? then
    if entry.rel == rel && entry.constGen == env.constGen &&
        entry.declLogSize == env.declChangeLog.size &&
        entry.isExporting == env.isExporting &&
        entry.mainModule == env.header.mainModule then
      if entry.simpSlots.isEmpty then
        return entry.resolved
      let mut rulesRev := entry.resolved.itemRulesRev
      for (revIdx, ext, pos) in entry.simpSlots do
        rulesRev := rulesRev.setIfInBounds revIdx (pos, .inr (ext.getState env))
      return { entry.resolved with itemRulesRev := rulesRev }
  let (resolved, simpSlots) ← resolveStaticCore rel
  let cached : CachedSiteRel := {
    rel
    constGen    := env.constGen
    declLogSize := env.declChangeLog.size
    isExporting := env.isExporting
    mainModule  := env.header.mainModule
    resolved
    simpSlots
  }
  resolvedRelCacheRef.modify (·.insert siteId cached)
  return resolved

namespace ExprPattern.Internal

@[inline]
def instantiateMVarsIfNeeded (e : Expr) : MetaM Expr :=
  if e.hasExprMVar || e.hasLevelMVar then instantiateMVars e else pure e

end ExprPattern.Internal

open ExprPattern.Internal

private def resolveHeadMVar (e : Expr) : MetaM Expr := do
  go (maxRecDepth.get (← getOptions)) e
where
  go (fuel : Nat) (cur : Expr) : MetaM Expr := do
    let cur := cur.consumeMData
    if !cur.hasExprMVar then
      return cur
    let fn := cur.getAppFn.consumeMData
    if !fn.isMVar then
      return cur
    match fuel with
    | 0 => throwError maxRecDepthErrorMessage
    | fuel + 1 =>
      let fn' ← instantiateMVars fn
      if fn' == fn then
        return cur
      let res := (mkAppN fn' cur.getAppArgs).consumeMData
      if res.getAppFn.consumeMData.isMVar then go fuel res else pure res

/--
Validate and attach local `$x` definition overrides `(positive, expr)` onto a statically resolved
relation `r`. Each item must denote a free variable referring to a dependent `let` declaration in
the current local context; `-$x` fails if neither `+zeta` nor a prior `+$x` enables unfolding `x`.
-/
def ResolvedExprMatchRel.withLocalItems (r : ResolvedExprMatchRel)
    (localItems : Array (Bool × Expr)) : MetaM ResolvedExprMatchRel := do
  validateResolvedRel r
  if r.engine == .sym && !localItems.isEmpty then
    throwError "expr quotation `/sym` relation does not support local `$x` unfold overrides"
  if localItems.isEmpty then
    let hasUnf := r.flags.beta || r.flags.zeta || r.flags.proj || r.flags.eta ||
      !r.itemRulesRev.isEmpty
    return { r with posFVars := #[], negFVars := #[], hasUnfolding := hasUnf }
  let lctx ← getLCtx
  let mut pos : Array FVarId := #[]
  let mut neg : Array FVarId := #[]
  for (isPos, rawE) in localItems do
    let e ← instantiateMVarsIfNeeded rawE
    let .fvar fv := e.consumeMData
      | throwError "local relation item `$...` must evaluate to a free variable, \
          got{indentExpr e}"
    let some decl := lctx.find? fv
      | throwError "local relation item `{e}` is not in the local context"
    if (decl.value? (allowNondep := false)).isNone then
      throwError "local relation item `{mkFVar fv}` is not a `let`-bound local definition \
        (non-dependent `have` and non-let hypotheses cannot be unfolded)"
    if isPos then
      pos := pos.filter (· != fv)
      neg := neg.filter (· != fv)
      pos := pos.push fv
    else
      unless r.flags.zeta || pos.contains fv do
        throwError "invalid local relation item `-{mkFVar fv}`: \
          local definitions are not unfolded by default under this relation"
      pos := pos.filter (· != fv)
      neg := neg.filter (· != fv)
      neg := neg.push fv
  return {
    r with
    posFVars     := pos
    negFVars     := neg
    hasUnfolding := r.flags.beta || r.flags.zeta || r.flags.proj || r.flags.eta ||
      !r.itemRulesRev.isEmpty || !pos.isEmpty || !neg.isEmpty
  }

/-- Resolve both static `[items]` and dynamic local `$x` items in one call. -/
def ExprMatchRel.resolve (rel : ExprMatchRel)
    (localItems : Array (Bool × Expr) := #[]) (siteId : Name := .anonymous) :
    MetaM ResolvedExprMatchRel := do
  validateRelCore rel localItems
  let r ←
    if rel.items.isEmpty then
      pure (emptyResolvedRel rel)
    else
      rel.resolveStaticCached siteId
  if localItems.isEmpty then
    return r
  r.withLocalItems localItems

private def levelHasPatParam (patParams : List Name) : Level → Bool
  | .zero      => false
  | .succ u    => levelHasPatParam patParams u
  | .max u v   => levelHasPatParam patParams u || levelHasPatParam patParams v
  | .imax u v  => levelHasPatParam patParams u || levelHasPatParam patParams v
  | .param n   => patParams.contains n
  | .mvar _    => false

private def hasPatLevelParam (patParams : List Name) (e : Expr) : Bool :=
  if patParams.isEmpty || !e.hasLevelParam then false else go e
where
  go (e : Expr) : Bool :=
    if !e.hasLevelParam then false
    else match e with
      | .sort u           => levelHasPatParam patParams u
      | .const _ us       => us.any (levelHasPatParam patParams)
      | .app f a          => go f || go a
      | .lam _ t b _      => go t || go b
      | .forallE _ t b _  => go t || go b
      | .letE _ t v b _   => go t || go v || go b
      | .mdata _ b        => go b
      | .proj _ _ b       => go b
      | _                 => false

private def computePatLevelNodes (patParams : List Name) (body : Expr) : ExprSet :=
  if patParams.isEmpty || !body.hasLevelParam then {}
  else
    let (_, st) := (go body).run (({} : ExprMap Bool), ({} : ExprSet))
    st.2
where
  go : Expr → StateM (ExprMap Bool × ExprSet) Bool
    | .mdata _ b => go b
    | e => do
      if !e.hasLevelParam then
        return false
      if let some cached := (← get).1[e]? then
        return cached
      let res ← match e with
        | .sort u          => pure (levelHasPatParam patParams u)
        | .const _ us      => pure (us.any (levelHasPatParam patParams))
        | .app f a         =>
          let hf ← go f
          let ha ← go a
          pure (hf || ha)
        | .lam _ t b _     =>
          let ht ← go t
          let hb ← go b
          pure (ht || hb)
        | .forallE _ t b _ =>
          let ht ← go t
          let hb ← go b
          pure (ht || hb)
        | .letE _ t v b _  =>
          let ht ← go t
          let hv ← go v
          let hb ← go b
          pure (ht || hv || hb)
        | .proj _ _ b      => go b
        | _                => pure false
      modify fun (memo, set) =>
        (memo.insert e res, if res then set.insert e else set)
      return res

private def stripOuterLambdas : Nat → Expr → Expr
  | n + 1, .lam _ _ b _ => stripOuterLambdas n b
  | _,     e            => e

/-- Structural root head and arity summary used for `O(1)` fast rejection in `matchStructural?`. -/
inductive PatHeadGuard where
  /-- No static head guard (root variable, zero-arity pin, or proof-irrelevant root). -/
  | any
  /-- Root must match `.const declName _` applied to `arity` arguments (modulo `mdata`/mvars). -/
  | const (declName : Name) (arity : Nat)
  /-- Root must match pattern variable `varIdx` applied to `arity` non-`Prop` arguments. -/
  | pinApp (varIdx : Nat) (arity : Nat)
  /-- Root (modulo `mdata` and head metavariables) must be a lambda. -/
  | lam
  /-- Root (modulo `mdata` and head metavariables) must be a forall/pi type. -/
  | forallE
  /-- Root (modulo `mdata` and head metavariables) must be a `Sort`. -/
  | sort
  /-- Root (modulo `mdata` and head metavariables) must equal literal `val`. -/
  | lit (val : Literal)
  /-- Root (modulo `mdata` and head metavariables) must be projection `.proj typeName idx _`. -/
  | proj (typeName : Name) (idx : Nat)
  deriving Inhabited, BEq, Repr

/--
A compiled `Expr` pattern `lam = fun x₀ … xₙ₋₁ => body`, closed up to `levelParams`.
Wildcards, unresolved implicits, pins (`$e`), and `?`-binders are all abstracted as lambdas;
`namedIdx` locates the `?`-binders in source order.
-/
structure ExprPattern where
  /-- Universe parameter names abstracted in `lam`. -/
  levelParams   : List Name
  /-- Pattern expression wrapped in `numVars` outer lambdas. -/
  lam           : Expr
  /-- Number of outer lambda binders in `lam`. -/
  numVars       : Nat
  /-- Index (into `x₀ … xₙ₋₁`) of each named `?`-binder, in order of first occurrence. -/
  namedIdx      : Array Nat
  /-- `true` for variables that should only be solved first-order in structural matching. -/
  firstOrder    : Array Bool
  /--
  `true` if variable `i` may need materializing (it is named or occurs multiple times).
  If empty on an uncompiled pattern, every variable is treated as potentially captured.
  -/
  captureVars   : Array Bool := #[]
  /-- Map from closed proof subterms of `body` (modulo `mdata`) to their inferred types. -/
  closedProofs  : ExprMap Expr := {}
  /-- Subterms of `body` (modulo `mdata`) mentioning a pattern parameter in `levelParams`. -/
  patLevelNodes : ExprSet := {}
  /-- `true` if `compile` populated `captureVars` and `closedProofs`. -/
  precomputed   : Bool := false
  /-- Precomputed root head/arity guard for fast rejection in `matchStructural?`. -/
  headGuard     : PatHeadGuard := .any
  deriving Inhabited

/-- Return the body of `p` with the `p.numVars` outer lambdas stripped. -/
def ExprPattern.body (p : ExprPattern) : Expr :=
  stripOuterLambdas p.numVars p.lam

@[inline]
private def ExprPattern.shouldCapture (p : ExprPattern) (k : Nat) : Bool :=
  p.captureVars.getD k true

@[inline]
private def hasPatLevelFast (pat : ExprPattern) (isOrigPat : Bool) (e : Expr) : Bool :=
  if pat.levelParams.isEmpty || !e.hasLevelParam then
    false
  else if isOrigPat && pat.precomputed then
    pat.patLevelNodes.contains e
  else
    hasPatLevelParam pat.levelParams e

private def computeCaptureVars (body : Expr) (numVars : Nat) (namedIdx : Array Nat) :
    Array Bool := Id.run do
  let mut occs : Array Nat := .replicate numVars 0
  let rec count (e : Expr) (depth : Nat) (occs : Array Nat) : Array Nat :=
    if e.looseBVarRange <= depth then
      occs
    else match e with
      | .bvar i =>
        if i >= depth && i - depth < numVars then
          let k := numVars - 1 - (i - depth)
          let c := occs.getD k 0
          if c >= 2 then occs else occs.setIfInBounds k (c + 1)
        else
          occs
      | .app f a         => count a depth (count f depth occs)
      | .lam _ t b _     => count b (depth + 1) (count t depth occs)
      | .forallE _ t b _ => count b (depth + 1) (count t depth occs)
      | .letE _ t v b _  => count b (depth + 1) (count v depth (count t depth occs))
      | .mdata _ b       => count b depth occs
      | .proj _ _ b      => count b depth occs
      | _                => occs
  occs := count body 0 occs
  let mut capture : Array Bool := .replicate numVars false
  for k in *...numVars do
    if occs.getD k 0 >= 2 then
      capture := capture.setIfInBounds k true
  for idx in namedIdx do
    capture := capture.setIfInBounds idx true
  return capture

private def collectClosedProofs (patParams : List Name) (body : Expr) :
    MetaM (ExprMap Expr) := do
  withLCtx {} {} do
    let (_, st) ← (go body).run (({}, {}) : Std.HashSet Expr × ExprMap Expr)
    return st.2
where
  canBeProof : Expr → Bool
    | .bvar _ | .sort _ | .lit _ | .forallE _ _ _ _ | .mvar _ => false
    | _ => true
  go : Expr → StateRefT (Std.HashSet Expr × ExprMap Expr) MetaM Unit
    | .mdata _ b => go b
    | e => do
      if (← get).1.contains e then
        return
      modify fun (vis, pf) => (vis.insert e, pf)
      if !e.hasLooseBVars && !e.hasFVar && !hasPatLevelParam patParams e && canBeProof e then
        try
          if ← isProof e then
            let ty ← instantiateMVarsIfNeeded (← inferType e)
            if !ty.hasMVar && !ty.hasFVar then
              modify fun (vis, pf) => (vis, pf.insert e ty)
        catch _ =>
          pure ()
      match e with
      | .app f a         => go f; go a
      | .lam _ t b _     => go t; go b
      | .forallE _ t b _ => go t; go b
      | .letE _ t v b _  => go t; go v; go b
      | .proj _ _ b      => go b
      | _                => pure ()

/--
Precompute `captureVars`, `closedProofs`, and `patLevelNodes` for `p` so structural matching skips
materializing single-occurrence wildcards, rejects non-proof closed mismatches in `O(1)`, and checks
pattern universe parameters without re-traversing subterms.
-/
def ExprPattern.compile (p : ExprPattern) : MetaM ExprPattern := do
  let body := p.body
  let captureVars := computeCaptureVars body p.numVars p.namedIdx
  let closedProofs ← collectClosedProofs p.levelParams body
  let patLevelNodes := computePatLevelNodes p.levelParams body
  let rootMayBeProof :=
    !body.hasLooseBVars &&
    (closedProofs.contains body.consumeMData || hasPatLevelParam p.levelParams body)
  let headGuard ←
    if rootMayBeProof then
      pure .any
    else
      match body.consumeMData with
      | .forallE ..    => pure .forallE
      | .lam ..        => pure .lam
      | .sort ..       => pure .sort
      | .lit l         => pure (.lit l)
      | .proj sn idx _ => pure (.proj sn idx)
      | pe =>
        let fn := pe.getAppFn'
        let arity := pe.getAppNumArgs'
        match fn with
        | .const c _ => pure (.const c arity)
        | .bvar i =>
          if arity > 0 && i < p.numVars then
            let k := p.numVars - 1 - i
            try
              withLCtx {} {} <| lambdaBoundedTelescope p.lam p.numVars fun xs _ => do
                if xs.size == p.numVars then
                  if h : k < xs.size then
                    if !(← isProp (← inferType xs[k])) then
                      return .pinApp k arity
                return .any
            catch _ =>
              pure .any
          else
            pure .any
        | _ => pure .any
  return { p with captureVars, closedProofs, patLevelNodes, precomputed := true, headGuard }

namespace ExprPattern.Internal

def eqModMData (a b : Expr) : Bool :=
  match a, b with
  | .mdata _ a', b' => eqModMData a' b'
  | a', .mdata _ b' => eqModMData a' b'
  | .app f₁ a₁, .app f₂ a₂ => eqModMData f₁ f₂ && eqModMData a₁ a₂
  | .lam _ d₁ b₁ _, .lam _ d₂ b₂ _ => eqModMData d₁ d₂ && eqModMData b₁ b₂
  | .forallE _ d₁ b₁ _, .forallE _ d₂ b₂ _ => eqModMData d₁ d₂ && eqModMData b₁ b₂
  | .letE _ t₁ v₁ b₁ _, .letE _ t₂ v₂ b₂ _ =>
    eqModMData t₁ t₂ && eqModMData v₁ v₂ && eqModMData b₁ b₂
  | .proj s₁ i₁ e₁, .proj s₂ i₂ e₂ => s₁ == s₂ && i₁ == i₂ && eqModMData e₁ e₂
  | _, _ => a == b
termination_by sizeOf a + sizeOf b

end ExprPattern.Internal

open ExprPattern.Internal

private structure LetEntry where
  fv       : FVarId
  userName : Name
  type     : Expr
  val      : Expr
  nondep   : Bool
  deriving Inhabited

private def rewrapLets (e : Expr) (lets : Array LetEntry) : Expr :=
  if lets.isEmpty || !e.hasFVar then e else
    lets.foldr (init := e) fun entry res =>
      if res.hasAnyFVar (· == entry.fv) then
        mkLet entry.userName entry.type entry.val
          (res.abstract #[mkFVar entry.fv]) entry.nondep
      else
        res

private def substAssigned (e : Expr) (σ : Array (Option Expr)) (numVars : Nat) : Expr :=
  if !e.hasLooseBVars then e else go e 0
where
  go (e : Expr) (depth : Nat) : Expr :=
    if !e.hasLooseBVars then e else
    match e with
    | .bvar i =>
      if i >= depth && i - depth < numVars then
        let k := numVars - 1 - (i - depth)
        match σ.getD k none with
        | some v => v
        | none   => e
      else e
    | .app f a         => .app (go f depth) (go a depth)
    | .lam n t b bi    => .lam n (go t depth) (go b (depth + 1)) bi
    | .forallE n t b bi => .forallE n (go t depth) (go b (depth + 1)) bi
    | .letE n t v b nd => .letE n (go t depth) (go v depth) (go b (depth + 1)) nd
    | .mdata m b       => .mdata m (go b depth)
    | .proj s i b      => .proj s i (go b depth)
    | _                => e

private def substAssignedLevels (e : Expr) (patParams : List Name)
    (levels : Array (Option Level)) : Expr :=
  if patParams.isEmpty || !e.hasLevelParam || levels.all (·.isNone) then e
  else
    let lvlSubst := patParams.zip levels.toList |>.filterMap fun (n, l?) =>
      l?.map (n, ·)
    if lvlSubst.isEmpty then e
    else e.instantiateLevelParams (lvlSubst.map (·.1)) (lvlSubst.map (·.2))

private def fallbackTracePlaceholders (p : ExprPattern) (pinIdxs : Array Nat)
    (pins : Array Expr) (pinLabels : Array String) : Array (Option Expr) := Id.run do
  let mut res : Array (Option Expr) := Array.emptyWithCapacity p.numVars
  let mut cur := p.lam
  for i in *...p.numVars do
    match cur with
    | .lam n _ b _ =>
      let e :=
        if let some pos := pinIdxs.idxOf? i then
          if hPin : pos < pins.size then
            pins[pos]
          else if hLbl : pos < pinLabels.size then
            mkConst (Name.mkSimple s!"${pinLabels[pos]}")
          else
            mkConst `_pin
        else if p.namedIdx.contains i then
          mkConst (Name.mkSimple s!"?{n.eraseMacroScopes}")
        else
          mkConst `_
      res := res.push (some e)
      cur := b
    | _ => break
  return res

private def withPatTraceEnvCore (p : ExprPattern) (pinIdxs : Array Nat) (pins : Array Expr)
    (pinLabels : Array String) (levels : Array (Option Level))
    (k : Array Expr → Array (Option Expr) → MetaM α) : MetaM α := do
  let lam := substAssignedLevels p.lam p.levelParams levels
  let outerLCtx := (← getLCtx).sanitizeNames.run' { options := (← getOptions) }
  let outerInsts ← getLocalInstances
  withLCtx outerLCtx outerInsts do
    lambdaBoundedTelescope lam p.numVars fun xs _ => do
      if xs.size != p.numVars then
        return ← k #[] (fallbackTracePlaceholders p pinIdxs pins pinLabels)
      let (renamedLCtx, subst) ← do
        let mut lctx ← getLCtx
        let mut out : Array (Option Expr) := Array.emptyWithCapacity p.numVars
        let mut cur := lam
        for i in *...p.numVars do
          let some x := xs[i]? | break
          let fv := x.fvarId!
          match cur with
          | .lam n _ b _ =>
            if let some pos := pinIdxs.idxOf? i then
              if hPin : pos < pins.size then
                out := out.push (some pins[pos])
              else if hLbl : pos < pinLabels.size then
                lctx := lctx.setUserName fv (Name.mkSimple s!"${pinLabels[pos]}")
                out := out.push (some x)
              else
                lctx := lctx.setUserName fv `_pin
                out := out.push (some x)
            else if p.namedIdx.contains i then
              lctx := lctx.setUserName fv (Name.mkSimple s!"?{n.eraseMacroScopes}")
              out := out.push (some x)
            else
              lctx := lctx.setUserName fv `_
              out := out.push (some x)
            cur := b
          | _ => break
        pure (lctx, out)
      let curInsts ← getLocalInstances
      withLCtx renamedLCtx curInsts <|
        withOptions (fun o => pp.sanitizeNames.set o false) <|
          k xs subst

private def withPatTraceEnv [MonadControlT MetaM m] [Monad m]
    (p : ExprPattern) (pinIdxs : Array Nat) (pins : Array Expr)
    (pinLabels : Array String) (levels : Array (Option Level))
    (k : Array Expr → Array (Option Expr) → m α) : m α :=
  controlAt MetaM fun runInBase =>
    withPatTraceEnvCore p pinIdxs pins pinLabels levels fun xs subst =>
      runInBase (k xs subst)

namespace ExprPattern.Internal

def formatPatExpr (p : ExprPattern) (pinIdxs : Array Nat) (pins : Array Expr)
    (levels : Array (Option Level)) (e : Expr) (pinLabels : Array String := #[]) : MetaM Format :=
  withPatTraceEnv p pinIdxs pins pinLabels levels fun _ subst => do
    let eLvl := substAssignedLevels e p.levelParams levels
    ppExpr (substAssigned eLvl subst p.numVars)

end ExprPattern.Internal

open ExprPattern.Internal

private def shouldUnfoldConstByRules (rulesRev : Array (Bool × Sum Name SimpTheorems))
    (declName : Name) : Bool := Id.run do
  for (pos, entry) in rulesRev do
    match entry with
    | .inl c =>
      if c == declName then
        return pos
    | .inr thms =>
      if simpTheoremsUnfolds thms declName then
        return pos
  return false

private structure StructState where
  vars          : Array (Option Expr)
  levels        : Array (Option Level)
  firstMismatch? : Option MessageData := none

private abbrev StructM := StateT StructState MetaM

private structure StructCtx where
  pat          : ExprPattern
  flags        : ResolvedExprMatchFlags
  itemRulesRev : Array (Bool × Sum Name SimpTheorems)
  posFVars     : Array FVarId
  negFVars     : Array FVarId
  hasUnfolding : Bool
  traceEnabled : Bool := false
  pinIdxs      : Array Nat := #[]
  pins         : Array Expr := #[]

private def StructCtx.shouldUnfoldConst (ctx : StructCtx) (declName : Name) : Bool :=
  shouldUnfoldConstByRules ctx.itemRulesRev declName

private def StructCtx.shouldUnfoldFVar (ctx : StructCtx) (fv : FVarId) : Bool :=
  if ctx.posFVars.contains fv then true
  else if ctx.negFVars.contains fv then false
  else ctx.flags.zeta

private def tryCheckpoint (ctx : StructCtx) (act : StructM Bool) : StructM Bool := do
  let saved ← get
  if ← act then
    if ctx.traceEnabled then
      modify fun st => { st with firstMismatch? := saved.firstMismatch? }
    return true
  let childMismatch? := (← get).firstMismatch?
  set { saved with firstMismatch? := saved.firstMismatch?.orElse fun _ => childMismatch? }
  return false

private def tryUnfoldBranch (ctx : StructCtx) (act : StructM Bool) : StructM Bool := do
  if !ctx.traceEnabled then
    return ← tryCheckpoint ctx act
  let saved ← get
  modify fun st => { st with firstMismatch? := none }
  if ← act then
    modify fun st => { st with firstMismatch? := saved.firstMismatch? }
    return true
  let childMismatch? := (← get).firstMismatch?
  set { saved with firstMismatch? := childMismatch?.orElse fun _ => saved.firstMismatch? }
  return false

@[inline]
private def recordMismatch (ctx : StructCtx) (pe e : Expr) (isPat : Bool)
    (reason : String) : StructM Unit := do
  if ctx.traceEnabled && (← get).firstMismatch?.isNone then
    let st ← get
    let patFmt ←
      if isPat then
        formatPatExpr ctx.pat ctx.pinIdxs ctx.pins st.levels pe
      else
        ppExpr pe
    let msg ← addMessageContext
      m!"first mismatch:{indentD patFmt}\nagainst:{indentExpr e}\n({reason})"
    modify fun st => { st with firstMismatch? := some msg }

private def withIncStructRecDepth (act : StructM α) : StructM α := fun s =>
  withIncRecDepth (act s)

private def isProofSafe (t : Expr) : MetaM Bool := do
  try isProof t catch _ => return false

private def inferTypeSafe (t : Expr) : MetaM (Option Expr) := do
  try
    let ty ← inferType t
    some <$> instantiateMVarsIfNeeded ty
  catch _ => return none

private def matchLevel (ctx : StructCtx) (isPat : Bool) (u₁ u₂ : Level) : StructM Bool := do
  let u₁ ← if u₁.hasMVar then instantiateLevelMVars u₁ else pure u₁
  let u₂ ← if u₂.hasMVar then instantiateLevelMVars u₂ else pure u₂
  let l₁ := u₁.normalize
  let l₂ := u₂.normalize
  if l₁ == l₂ && (!isPat || !levelHasPatParam ctx.pat.levelParams l₁) then
    return true
  go l₁ l₂
where
  go : Level → Level → StructM Bool
    | .zero,       .zero       => return true
    | .succ a,     .succ b     => go a b
    | .max a₁ b₁,  .max a₂ b₂  => go a₁ a₂ <&&> go b₁ b₂
    | .imax a₁ b₁, .imax a₂ b₂ => go a₁ a₂ <&&> go b₁ b₂
    | .param n₁,   l₂          => do
      if isPat then
        if let some idx := ctx.pat.levelParams.idxOf? n₁ then
          match (← get).levels.getD idx none with
          | none =>
            modify fun st => { st with levels := st.levels.setIfInBounds idx (some l₂) }
            return true
          | some boundL =>
            return boundL == l₂
      return Level.param n₁ == l₂
    | .mvar m₁,    .mvar m₂    => return m₁ == m₂
    | _,           _           => return false

private def matchLevelList (ctx : StructCtx) (isPat : Bool) : List Level → List Level → StructM Bool
  | [],      []      => return true
  | u :: us, v :: vs => matchLevel ctx isPat u v <&&> matchLevelList ctx isPat us vs
  | _,       _       => return false

private def allDistinct (xs : Array Expr) : Bool := Id.run do
  for h₁ : i in *...xs.size do
    for h₂ : j in (i + 1)...xs.size do
      if xs[i] == xs[j] then
        return false
  return true

private def unfoldConstStep? (ctx : StructCtx) (t : Expr) : MetaM (Option Expr) := do
  let .const cname us := t.getAppFn | return none
  unless ctx.shouldUnfoldConst cname do return none
  let some cinfo := (← getEnv).find? cname | return none
  unless cinfo.hasValue && cinfo.levelParams.length == us.length do return none
  let us ← if us.any Level.hasMVar then us.mapM instantiateLevelMVars else pure us
  let val ← instantiateValueLevelParams cinfo us
  return some (val.betaRev t.getAppRevArgs)

private def unfoldFVarStep? (ctx : StructCtx) (t : Expr) (lets : Array LetEntry) :
    MetaM (Option Expr) := do
  let .fvar fv := t.getAppFn | return none
  unless ctx.shouldUnfoldFVar fv do return none
  let val? ← match lets.find? (·.fv == fv) with
    | some entry => pure (some entry.val)
    | none =>
      match ← fv.findDecl? with
      | some decl =>
        match decl.value? (allowNondep := false) with
        | some v => some <$> instantiateMVarsIfNeeded v
        | none   => pure none
      | none => pure none
  let some val := val? | return none
  return some (mkAppN val t.getAppArgs)

-- Non-terminating in general because arbitrary unfolding / projection chains may diverge;
-- guarded dynamically by `withIncRecDepth`.
private partial def reduceProjTarget (ctx : StructCtx) (c : Expr) (lets : Array LetEntry) :
    MetaM Expr :=
  withIncRecDepth do
    let c ← resolveHeadMVar c
    if ctx.flags.beta && c.isHeadBetaTarget then
      return ← reduceProjTarget ctx c.headBeta lets
    if let .proj _ i inner := c then
      let inner' ← reduceProjTarget ctx inner lets
      if let some projected ← projectCore? inner' i then
        return ← reduceProjTarget ctx projected lets
    if let some unfolded ← unfoldFVarStep? ctx c lets then
      return ← reduceProjTarget ctx unfolded lets
    if let some unfolded ← unfoldConstStep? ctx c then
      return ← reduceProjTarget ctx unfolded lets
    return c

private def etaExpandOne? (ctx : StructCtx) (t : Expr) : MetaM (Option Expr) := do
  try
    let ty ← instantiateMVarsIfNeeded (← inferType t)
    let ty := ty.consumeMData
    if let .forallE x d _ bi := ty then
      return some (mkLambda x bi d (mkApp t (mkBVar 0)))
    if let some ty' ← unfoldConstStep? ctx ty then
      if let .forallE x d _ bi := ty' then
        return some (mkLambda x bi d (mkApp t (mkBVar 0)))
    return none
  catch _ => return none

private def isInstDispatchArg (fi : FunInfo) (idx : Nat) : Bool :=
  if h : idx < fi.paramInfo.size then
    let p := fi.paramInfo[idx]
    if p.isInstance then
      true
    else if !p.isExplicit then
      Id.run do
        for h₂ : k in (idx + 1)...fi.paramInfo.size do
          if fi.paramInfo[k].isInstance && fi.paramInfo[k].backDeps.contains idx then
            return true
        return false
    else
      false
  else
    false

private def hasDistinctInductHeads (env : Environment) (e₁ e₂ : Expr) : Bool :=
  match e₁.getAppFn.consumeMData, e₂.getAppFn.consumeMData with
  | .const c₁ _, .const c₂ _ =>
    c₁ != c₂ &&
    (match env.find? c₁, env.find? c₂ with
     | some (.inductInfo _), some (.inductInfo _) => true
     | _, _ => false)
  | _, _ => false

private def isInstArgAt (f : Expr) : MetaM Bool := do
  if f.hasLooseBVars then
    return false
  try
    let argIdx := f.getAppNumArgs
    let fi ← getFunInfo f.getAppFn
    return isInstDispatchArg fi argIdx
  catch _ =>
    return false

private def matchInstArgDefEq (ctx : StructCtx) (pa f a : Expr)
    (bound : Array Expr) : StructM Bool := do
  unless ctx.flags.inst && !a.hasLooseBVars do
    return false
  let env ← getEnv
  if hasDistinctInductHeads env pa a then
    return false
  unless ← isInstArgAt f do
    return false
  let st ← get
  let paVar := substAssigned pa st.vars ctx.pat.numVars
  if !paVar.hasLooseBVars then
    if hasDistinctInductHeads env paVar a then
      return false
    let paInst := substAssignedLevels paVar ctx.pat.levelParams st.levels
    withNewMCtxDepth <| withTransparency .instances do
      if ctx.pat.levelParams.isEmpty || !hasPatLevelParam ctx.pat.levelParams paInst then
        isDefEq paInst a
      else
        let mut unassignedNames : List Name := []
        let mut unassignedIdxs : List Nat := []
        let mut idx := 0
        for p in ctx.pat.levelParams do
          if (st.levels.getD idx none).isNone then
            unassignedNames := p :: unassignedNames
            unassignedIdxs := idx :: unassignedIdxs
          idx := idx + 1
        let fresh ← unassignedNames.mapM fun _ => mkFreshLevelMVar
        let paPrepared := paInst.instantiateLevelParams unassignedNames fresh
        if !(← isDefEq paPrepared a) then
          return false
        let resolved ← fresh.mapM instantiateLevelMVars
        for (lIdx, lvl) in unassignedIdxs.zip resolved do
          unless ← hasAssignableLevelMVar lvl do
            modify fun s => { s with levels := s.levels.setIfInBounds lIdx (some lvl) }
        return true
  else
    if paVar.looseBVarRange > ctx.pat.numVars then
      return false
    withNewMCtxDepth <| withTransparency .instances do
      let mut allLvls : Array Level := Array.emptyWithCapacity ctx.pat.levelParams.length
      let mut unassignedLvls : Array (Nat × Level) := #[]
      let mut lIdx := 0
      for _ in ctx.pat.levelParams do
        if let some lvl := st.levels.getD lIdx none then
          allLvls := allLvls.push (← instantiateLevelMVars lvl)
        else
          let u ← mkFreshLevelMVar
          allLvls := allLvls.push u
          unassignedLvls := unassignedLvls.push (lIdx, u)
        lIdx := lIdx + 1
      let allLvlsList := allLvls.toList
      let lam :=
        if ctx.pat.levelParams.isEmpty then ctx.pat.lam
        else ctx.pat.lam.instantiateLevelParams ctx.pat.levelParams allLvlsList
      let mut subst : Array Expr := Array.emptyWithCapacity ctx.pat.numVars
      let mut unassignedVars : Array (Nat × Expr) := #[]
      let mut cur := lam
      for i in *...ctx.pat.numVars do
        match cur with
        | .lam _ d b _ =>
          if let some v := st.vars.getD i none then
            subst := subst.push v
          else
            let ty := d.instantiateRevRange 0 subst.size subst
            let mv ← mkFreshExprMVar (some ty)
            subst := subst.push mv
            unassignedVars := unassignedVars.push (i, mv)
          cur := b
        | _ => break
      if subst.size != ctx.pat.numVars then
        return false
      let paInst :=
        if ctx.pat.levelParams.isEmpty then pa
        else pa.instantiateLevelParams ctx.pat.levelParams allLvlsList
      let paPrepared := paInst.instantiateRevRange 0 subst.size subst
      if !(← isDefEq paPrepared a) then
        return false
      let mut varUpdates : Array (Nat × Expr) := #[]
      for (vIdx, mv) in unassignedVars do
        let val ← instantiateMVars mv
        if val != mv then
          if ← hasAssignableMVar val then
            return false
          if !bound.isEmpty && val.hasAnyFVar (bound.contains <| .fvar ·) then
            return false
          if ctx.pat.shouldCapture vIdx then
            varUpdates := varUpdates.push (vIdx, val)
      let mut lvlUpdates : Array (Nat × Level) := #[]
      for (uIdx, u) in unassignedLvls do
        let lvl ← instantiateLevelMVars u
        if !(← hasAssignableLevelMVar lvl) then
          lvlUpdates := lvlUpdates.push (uIdx, lvl)
      if !varUpdates.isEmpty || !lvlUpdates.isEmpty then
        modify fun s => Id.run do
          let mut vars := s.vars
          for (vIdx, val) in varUpdates do
            vars := vars.setIfInBounds vIdx (some val)
          let mut levels := s.levels
          for (uIdx, lvl) in lvlUpdates do
            levels := levels.setIfInBounds uIdx (some lvl)
          return { s with vars, levels }
      return true

private def projMismatchHintSide? (env : Environment) (ctx : StructCtx) (app proj : Expr) :
    Option String := do
  let .proj structName idx _ := proj | none
  let .const projFn _ := app.getAppFn | none
  let some pinfo := env.getProjectionFnInfo? projFn | none
  guard <| app.getAppNumArgs == pinfo.numParams + 1
  let sinfo ← getStructureInfo? env structName
  guard <| sinfo.getProjFn? idx == some projFn
  guard <| !ctx.shouldUnfoldConst projFn
  return s!"projection function `{projFn}` vs kernel projection; \
    add `[{projFn}]` to match both encodings"

-- Mutual structural matching can unfold definitions, beta-reduce, or project arbitrarily deeply;
-- guarded at runtime by `withIncStructRecDepth`.
mutual
  private partial def structAssign (ctx : StructCtx) (k : Nat) (pe rawV : Expr)
      (bound : Array Expr) (lets : Array LetEntry) (isPat : Bool)
      (args : Array Expr := #[]) : StructM Bool := do
    let prev? := (← get).vars.getD k none
    if prev?.isNone && !ctx.pat.shouldCapture k then
      if bound.isEmpty || args.size == bound.size || !rawV.hasFVar then
        return true
      let wrapped := rewrapLets rawV lets
      if wrapped.hasAnyFVar fun fv =>
          bound.contains (.fvar fv) && !args.contains (.fvar fv) then
        recordMismatch ctx pe wrapped isPat "bound variable escapes pattern capture"
        return false
      return true
    let wrapped := rewrapLets rawV lets
    let val ←
      if args.isEmpty then
        pure wrapped
      else
        let mut lctx ← getLCtx
        let mut changed := false
        for arg in args do
          if let .fvar fv := arg then
            if let some d := lctx.find? fv then
              if d.isLet (allowNondep := true) then
                lctx := lctx.modifyLocalDecl fv fun decl =>
                  .cdecl decl.index decl.fvarId decl.userName decl.type .default decl.kind
                changed := true
        let lamVal ←
          if changed then
            withLCtx' lctx <| mkLambdaFVars args wrapped (etaReduce := true)
          else
            mkLambdaFVars args wrapped (etaReduce := true)
        pure (if ctx.flags.eta then lamVal.eta else lamVal)
    if !bound.isEmpty && args.size < bound.size && val.hasFVar then
      if val.hasAnyFVar (bound.contains <| .fvar ·) then
        recordMismatch ctx pe val isPat "bound variable escapes pattern capture"
        return false
    match prev? with
    | none =>
      modify fun st => { st with vars := st.vars.setIfInBounds k (some val) }
      return true
    | some v' =>
      if eqModMData v' val then
        return true
      let rhs := if args.isEmpty then rawV else val
      let rhsLets := if args.isEmpty then lets else #[]
      return ← tryCheckpoint ctx (structGo ctx v' rhs bound rhsLets (isPat := false) false)

  private partial def structDirectMatch (ctx : StructCtx) (pe e : Expr)
      (bound : Array Expr) (lets : Array LetEntry) (isPat isOrigPat : Bool) : StructM Bool := do
    match pe, e with
    | .app pf pa, .app f a =>
      if !(← structGo ctx pf f bound lets isPat isOrigPat) then
        return false
      if ← tryCheckpoint ctx (structGo ctx pa a bound lets isPat isOrigPat) then
        return true
      if isPat then
        return ← tryCheckpoint ctx (matchInstArgDefEq ctx pa f a bound)
      return false
    | .forallE _ pd pb _, .forallE x d b bi
    | .lam _ pd pb _,     .lam x d b bi =>
      if !(← structGo ctx pd d bound lets isPat isOrigPat) then return false
      withLocalDecl x bi d fun y =>
        structGo ctx (pb.instantiate1 y) (b.instantiate1 y) (bound.push y) lets isPat isOrigPat
    | .letE _ pt pv pb _, .letE x t v b nondep =>
      if !(← structGo ctx pt t bound lets isPat isOrigPat) then return false
      if !(← structGo ctx pv v bound lets isPat isOrigPat) then return false
      withLetDecl x t v (nondep := nondep) fun y =>
        structGo ctx (pb.instantiate1 y) (b.instantiate1 y) (bound.push y) lets isPat isOrigPat
    | .proj sn₁ i₁ pe', .proj sn₂ i₂ e' =>
      if sn₁ != sn₂ || i₁ != i₂ then
        recordMismatch ctx pe e isPat "projection mismatch"
        return false
      structGo ctx pe' e' bound lets isPat isOrigPat
    | .const c₁ us₁, .const c₂ us₂ =>
      if c₁ != c₂ then
        recordMismatch ctx pe e isPat "constant mismatch"
        return false
      if !(← matchLevelList ctx isPat us₁ us₂) then
        recordMismatch ctx pe e isPat "universe level mismatch"
        return false
      return true
    | .sort u₁, .sort u₂ =>
      if !(← matchLevel ctx isPat u₁ u₂) then
        recordMismatch ctx pe e isPat "universe level mismatch"
        return false
      return true
    | .lit l₁, .lit l₂ =>
      if l₁ != l₂ then
        recordMismatch ctx pe e isPat "literal mismatch"
        return false
      return true
    | .fvar f₁, .fvar f₂ =>
      if f₁ != f₂ then
        recordMismatch ctx pe e isPat "free variable mismatch"
        return false
      return true
    | .mvar m₁, .mvar m₂ =>
      if m₁ != m₂ then
        recordMismatch ctx pe e isPat "metavariable mismatch"
        return false
      return true
    | _, _ =>
      if pe != e then
        if ctx.traceEnabled then
          let env ← getEnv
          let hint? := (projMismatchHintSide? env ctx pe e).orElse fun _ =>
            projMismatchHintSide? env ctx e pe
          if let some hint := hint? then
            recordMismatch ctx pe e isPat hint
            return false
        recordMismatch ctx pe e isPat "structural mismatch"
        return false
      return true

  private partial def matchProofIrrel (ctx : StructCtx) (pe e : Expr)
      (bound : Array Expr) (lets : Array LetEntry) (isPat isOrigPat : Bool) : StructM Bool := do
    if pe.hasLooseBVars || e.hasLooseBVars then
      return false
    if isPat && isOrigPat && ctx.pat.precomputed && !pe.hasFVar &&
        !hasPatLevelFast ctx.pat true pe then
      let some peTy := ctx.pat.closedProofs[pe]? | return false
      unless ← isProofSafe e do return false
      let some eTy ← inferTypeSafe e | return false
      return ← tryCheckpoint ctx (structGo ctx peTy eTy bound lets (isPat := false) false)
    let st ← get
    let peResolved :=
      if isPat then substAssignedLevels pe ctx.pat.levelParams st.levels else pe
    unless (← isProofSafe e) && (← isProofSafe peResolved) do
      return false
    let some peTy ← inferTypeSafe peResolved | return false
    let some eTy ← inferTypeSafe e | return false
    tryCheckpoint ctx (structGo ctx peTy eTy bound lets
      (isPat := isPat && !ctx.pat.levelParams.isEmpty) false)

  private partial def structGo (ctx : StructCtx) (pe e : Expr)
      (bound : Array Expr) (lets : Array LetEntry)
      (isPat : Bool) (isOrigPat : Bool := isPat) : StructM Bool :=
    withIncStructRecDepth do
      let pe ← resolveHeadMVar pe
      let e ← resolveHeadMVar e
      if isPat then
        if let .bvar i := pe.getAppFn then
          let k := ctx.pat.numVars - 1 - i
          let args := pe.getAppArgs
          if args.isEmpty then
            return ← structAssign ctx k pe e bound lets isPat
          if !ctx.pat.firstOrder.getD k false && args.all bound.contains && allDistinct args then
            return ← structAssign ctx k pe e bound lets isPat args
      if !pe.hasLooseBVars && pe == e then
        if !isPat || !hasPatLevelFast ctx.pat isOrigPat pe then
          return true
      if ← tryCheckpoint ctx (structDirectMatch ctx pe e bound lets isPat isOrigPat) then
        return true
      if ← matchProofIrrel ctx pe e bound lets isPat isOrigPat then
        return true
      unless ctx.hasUnfolding do
        return false
      -- Lazy look-through on `e` and (if items/flags allow or pinned head) `pe`.
      if ctx.flags.zeta then
        if let .letE x t v b nondep := e then
          if ← tryUnfoldBranch ctx (withLetDecl x t v (nondep := nondep) fun y =>
              let lets' := lets.push {
                fv := y.fvarId!, userName := x, type := t, val := v, nondep
              }
              structGo ctx pe (b.instantiate1 y) bound lets' isPat isOrigPat) then
            return true
      if let some e' ← unfoldFVarStep? ctx e lets then
        if ← tryUnfoldBranch ctx (structGo ctx pe e' bound lets isPat isOrigPat) then
          return true
      if ctx.flags.beta && e.isHeadBetaTarget then
        if ← tryUnfoldBranch ctx (structGo ctx pe e.headBeta bound lets isPat isOrigPat) then
          return true
      if ctx.flags.proj then
        if let .proj s i c := e then
          let c' ← reduceProjTarget ctx c lets
          if ctx.flags.zeta then
            if let .letE x t v b nondep := c' then
              if ← tryUnfoldBranch ctx
                  (structGo ctx pe (mkLet x t v (mkProj s i b) nondep)
                    bound lets isPat isOrigPat) then
                return true
          if let some projected ← projectCore? c' i then
            if ← tryUnfoldBranch ctx (structGo ctx pe projected bound lets isPat isOrigPat) then
              return true
      if let some e' ← unfoldConstStep? ctx e then
        if ← tryUnfoldBranch ctx (structGo ctx pe e' bound lets isPat isOrigPat) then
          return true
      if ctx.flags.eta then
        if !pe.isLambda && e.isLambda then
          let eEta := e.eta
          if eEta != e then
            if ← tryUnfoldBranch ctx (structGo ctx pe eEta bound lets isPat isOrigPat) then
              return true
          if let some peExp ← etaExpandOne? ctx pe then
            if ← tryUnfoldBranch ctx (structGo ctx peExp e bound lets isPat false) then
              return true
        if pe.isLambda && !e.isLambda then
          if let some eExp ← etaExpandOne? ctx e then
            if ← tryUnfoldBranch ctx (structGo ctx pe eExp bound lets isPat isOrigPat) then
              return true
      if isPat && pe.isApp then
        if let .bvar i := pe.getAppFn then
          let k := ctx.pat.numVars - 1 - i
          if let some headVal := (← get).vars.getD k none then
            let peApplied := mkAppN headVal pe.getAppArgs
            if ← tryUnfoldBranch ctx
                (structGo ctx peApplied e bound lets (isPat := true) false) then
              return true
      if let some pe' ← unfoldFVarStep? ctx pe #[] then
        if ← tryUnfoldBranch ctx (structGo ctx pe' e bound lets isPat false) then
          return true
      if ctx.flags.beta && pe.isHeadBetaTarget then
        if ← tryUnfoldBranch ctx (structGo ctx pe.headBeta e bound lets isPat false) then
          return true
      if ctx.flags.zeta then
        if let .letE _ _ pv pb _ := pe then
          if ← tryUnfoldBranch ctx
              (structGo ctx (pb.instantiate1 pv) e bound lets isPat false) then
            return true
      if ctx.flags.proj then
        if let .proj _ i pc := pe then
          let pc' ← reduceProjTarget ctx pc #[]
          if let some projected ← projectCore? pc' i then
            if ← tryUnfoldBranch ctx (structGo ctx projected e bound lets isPat false) then
              return true
      if let some pe' ← unfoldConstStep? ctx pe then
        if ← tryUnfoldBranch ctx (structGo ctx pe' e bound lets isPat false) then
          return true
      return false
end

private def fastRejectStructural (p : ExprPattern) (pinIdxs : Array Nat) (pins : Array Expr)
    (e : Expr) : Bool :=
  match p.headGuard with
  | .any => false
  | .const c arity =>
    let fn := e.getAppFn'
    !fn.isMVar && !(fn.isConstOf c && e.getAppNumArgs' == arity)
  | .pinApp k arity =>
    let fn := e.getAppFn'
    if fn.isMVar then
      false
    else
      match pinIdxs.idxOf? k with
      | some pinPos =>
        let rawPin := pins.getD pinPos default
        if !rawPin.hasExprMVar then
          if let .const c _ := rawPin.getAppFn' then
            !(fn.isConstOf c && e.getAppNumArgs' == rawPin.getAppNumArgs' + arity)
          else
            e.getAppNumArgs' < arity
        else
          e.getAppNumArgs' < arity
      | none => e.getAppNumArgs' < arity
  | .lam =>
    let e0 := e.consumeMData
    !e.getAppFn'.isMVar && !e0.isLambda
  | .forallE =>
    let e0 := e.consumeMData
    !e.getAppFn'.isMVar && !e0.isForall
  | .sort =>
    let e0 := e.consumeMData
    !e.getAppFn'.isMVar && !e0.isSort
  | .lit l =>
    let e0 := e.consumeMData
    !e.getAppFn'.isMVar && e0 != .lit l
  | .proj sn idx =>
    !e.getAppFn'.isMVar &&
      match e.consumeMData with
      | .proj sn2 idx2 _ => sn != sn2 || idx != idx2
      | _                => true

private def matchStructural? (p : ExprPattern) (rel : ResolvedExprMatchRel)
    (pinIdxs : Array Nat) (pins : Array Expr) (e : Expr) : MetaM (Option (Array Expr)) := do
  if !rel.hasUnfolding && rel.posFVars.isEmpty && rel.itemRulesRev.isEmpty &&
      fastRejectStructural p pinIdxs pins e then
    unless ← isTracingEnabledFor `Meta.Match.expr do
      return none
  let n := p.numVars
  let traceEnabled ← isTracingEnabledFor `Meta.Match.expr
  let mut initVars : Array (Option Expr) := .replicate n none
  let mut resolvedPins : Array Expr :=
    if traceEnabled then Array.emptyWithCapacity pins.size else #[]
  for (idx, rawPin) in pinIdxs.zip pins do
    let pin ← instantiateMVarsIfNeeded rawPin
    initVars := initVars.setIfInBounds idx (some pin)
    if traceEnabled then
      resolvedPins := resolvedPins.push pin
  let ctx : StructCtx := {
    pat          := p
    flags        := rel.flags
    itemRulesRev := rel.itemRulesRev
    posFVars     := rel.posFVars
    negFVars     := rel.negFVars
    hasUnfolding := rel.hasUnfolding
    traceEnabled
    pinIdxs      := if traceEnabled then pinIdxs else #[]
    pins         := resolvedPins
  }
  let initState : StructState := {
    vars   := initVars
    levels := .replicate p.levelParams.length none
  }
  let (ok, st) ← (structGo ctx p.body e #[] #[] (isPat := true) true).run initState
  let namedVals? := if ok then p.namedIdx.mapM fun i => st.vars.getD i none else none
  if traceEnabled then
    let patFmt ← formatPatExpr p pinIdxs resolvedPins st.levels p.body
    let eInst ← instantiateMVarsIfNeeded e
    if namedVals?.isSome then
      trace[Meta.Match.expr]
        "[structural] matched:{indentD patFmt}\nagainst:{indentExpr eInst}"
    else
      match st.firstMismatch? with
      | some mm =>
        trace[Meta.Match.expr]
          "[structural] failed:{indentD patFmt}\nagainst:{indentExpr eInst}\n{mm}"
      | none =>
        trace[Meta.Match.expr]
          "[structural] failed:{indentD patFmt}\nagainst:{indentExpr eInst}"
  return namedVals?

private def withLocalDefItems (zetaFlag : Bool) (posFVars negFVars : Array FVarId)
    (x : MetaM α) : MetaM α := do
  if zetaFlag then
    if negFVars.isEmpty then
      return ← x
    let mut lctx ← getLCtx
    for fv in negFVars do
      if let some d := lctx.find? fv then
        if d.isLet (allowNondep := true) then
          lctx := lctx.modifyLocalDecl fv fun decl =>
            .cdecl decl.index decl.fvarId decl.userName decl.type .default decl.kind
    withLCtx' lctx (withFreshCache x)
  else if posFVars.isEmpty then
    if (← read).zetaDeltaSet.isEmpty then
      x
    else
      withFreshCache <| withReader (fun ctx => { ctx with zetaDeltaSet := {} }) x
  else
    let mut posSet : FVarIdSet := {}
    for fv in posFVars do
      posSet := posSet.insert fv
    withFreshCache <| withReader (fun ctx => { ctx with zetaDeltaSet := posSet }) x

private def engineTransparency : ExprMatchEngine → TransparencyMode
  | .structural => .none
  | .reducible  => .reducible
  | .instances  => .instances
  | .defeq      => .default
  | .sym        => .reducible

private def withRelDefEqConfig (transparency : TransparencyMode)
    (flags : ResolvedExprMatchFlags) (withZeta withZetaDelta : Bool)
    (k : MetaM α) : MetaM α :=
  withOptions (fun opts =>
    let opts := if !flags.proj then opts.setBool `backward.isDefEq.lazyWhnfCore false else opts
    if transparency == .reducible then
      opts.setBool `backward.isDefEq.implicitBump false
    else
      opts) <|
  withConfig (fun cfg => { cfg with
    transparency
    unificationHints := false
    beta             := flags.beta
    zeta             := withZeta
    zetaDelta        := withZetaDelta
    zetaHave         := withZeta
    zetaUnused       := withZeta
    proj             := if flags.proj then .yesWithDelta else .no
    etaStruct        := if flags.eta then .all else .none
  }) k

private def runDefEqOnce (p : ExprPattern) (pinIdxs : Array Nat) (pins : Array Expr)
    (transparency : TransparencyMode) (flags : ResolvedExprMatchFlags)
    (withZeta withZetaDelta : Bool) (curE : Expr) : MetaM (Option (Array Expr)) := do
  withRelDefEqConfig transparency flags withZeta withZetaDelta do
    withNewMCtxDepth do
      let us ← p.levelParams.mapM fun _ => mkFreshLevelMVar
      let lam := p.lam.instantiateLevelParams p.levelParams us
      let mut subst : Array Expr := Array.mkEmpty p.numVars
      let mut cur := lam
      for i in *...p.numVars do
        match cur with
        | .lam _ d b _ =>
          if let some pinPos := pinIdxs.idxOf? i then
            subst := subst.push (pins.getD pinPos default)
          else
            let ty := d.instantiateRevRange 0 subst.size subst
            let mv ← mkFreshExprMVar (some ty)
            subst := subst.push mv
          cur := b
        | _ => break
      let pe := cur.instantiateRevRange 0 subst.size subst
      unless ← isDefEq pe curE do
        return none
      let namedVals ← p.namedIdx.mapM fun idx =>
        instantiateMVarsIfNeeded (subst.getD idx default)
      if ← namedVals.anyM hasAssignableMVar then
        return none
      return some namedVals

private def countLeadingLetMData : Expr → Nat
  | .mdata _ b      => countLeadingLetMData b + 1
  | .letE _ _ _ b _ => countLeadingLetMData b + 1
  | _               => 0

private def isPatHoleOrBVar (numVars : Nat) (pinIdxs : Array Nat)
    (pe : Expr) (patDepth : Nat) : Bool :=
  match pe with
  | .bvar _ => true
  | _ =>
    if pe.looseBVarRange <= patDepth then false
    else match pe.getAppFn.consumeMData with
      | .bvar i =>
        if i >= patDepth && i - patDepth < numVars then
          !pinIdxs.contains (numVars - 1 - (i - patDepth))
        else
          false
      | _ => false

private def isCompositePat : Expr → Bool
  | .app .. | .lam .. | .forallE .. | .letE .. | .proj .. => true
  | _ => false

private def needsWhnfForComposite (pe e : Expr) : Bool :=
  match pe, e with
  | .app .., .app .. =>
    match pe.getAppFn.consumeMData, e.getAppFn.consumeMData with
    | .const c₁ _, .const c₂ _ => c₁ != c₂
    | _,           .lam .. | _, .letE .. | _, .proj .. | _, .mvar .. => true
    | _,           _ => false
  | .app ..,     _ => true
  | .lam ..,     .lam .. => false
  | .lam ..,     _ => true
  | .forallE .., .forallE .. => false
  | .forallE .., _ => true
  | .letE ..,    .letE .. => false
  | .letE ..,    _ => true
  | .proj ..,    .proj .. => false
  | .proj ..,    _ => true
  | _,           _ => false

private def whnfNoZeta (transparency : TransparencyMode) (flags : ResolvedExprMatchFlags)
    (e : Expr) : MetaM Expr :=
  withRelDefEqConfig transparency flags false false (whnf e)

mutual
  private def liftInspectedLetsStep (numVars : Nat) (pinIdxs : Array Nat)
      (transparency : TransparencyMode) (flags : ResolvedExprMatchFlags)
      (pe curE : Expr) (patDepth whnfFuel : Nat) (lets : Array LetEntry)
      (k : Expr → Array LetEntry → MetaM (Option (Array Expr))) :
      MetaM (Option (Array Expr)) :=
    match pe with
    | .app pf pa =>
      match curE with
      | .app ef ea =>
        liftInspectedLetsGo numVars pinIdxs transparency flags pf ef patDepth whnfFuel
          (countLeadingLetMData ef) lets fun ef' lets₁ =>
            liftInspectedLetsGo numVars pinIdxs transparency flags pa ea patDepth whnfFuel
              (countLeadingLetMData ea) lets₁ fun ea' lets₂ =>
                k (curE.updateApp! ef' ea') lets₂
      | _ => k curE lets
    | .lam _ pd pb _ =>
      match curE with
      | .lam _ t b _ =>
        liftInspectedLetsGo numVars pinIdxs transparency flags pd t patDepth whnfFuel
          (countLeadingLetMData t) lets fun t' lets₁ =>
            liftInspectedLetsGo numVars pinIdxs transparency flags pb b (patDepth + 1) whnfFuel
              (countLeadingLetMData b) lets₁ fun b' lets₂ =>
                k (curE.updateLambdaE! t' b') lets₂
      | _ => k curE lets
    | .forallE _ pd pb _ =>
      match curE with
      | .forallE _ t b _ =>
        liftInspectedLetsGo numVars pinIdxs transparency flags pd t patDepth whnfFuel
          (countLeadingLetMData t) lets fun t' lets₁ =>
            liftInspectedLetsGo numVars pinIdxs transparency flags pb b (patDepth + 1) whnfFuel
              (countLeadingLetMData b) lets₁ fun b' lets₂ =>
                k (curE.updateForallE! t' b') lets₂
      | _ => k curE lets
    | .letE _ pt pv pb _ =>
      match curE with
      | .letE _ t v b nd =>
        liftInspectedLetsGo numVars pinIdxs transparency flags pt t patDepth whnfFuel
          (countLeadingLetMData t) lets fun t' lets₁ =>
            liftInspectedLetsGo numVars pinIdxs transparency flags pv v patDepth whnfFuel
              (countLeadingLetMData v) lets₁ fun v' lets₂ =>
                liftInspectedLetsGo numVars pinIdxs transparency flags pb b (patDepth + 1) whnfFuel
                  (countLeadingLetMData b) lets₂ fun b' lets₃ =>
                    k (curE.updateLet! t' v' b' nd) lets₃
      | _ => k curE lets
    | .proj sn₁ i₁ pe' =>
      match curE with
      | .proj sn₂ i₂ e' =>
        if sn₁ != sn₂ || i₁ != i₂ then
          k curE lets
        else
          liftInspectedLetsGo numVars pinIdxs transparency flags pe' e' patDepth whnfFuel
            (countLeadingLetMData e') lets fun e'' lets' =>
              k (curE.updateProj! e'') lets'
      | _ => k curE lets
    | _ => k curE lets
  termination_by (sizeOf pe, whnfFuel, 0, 0)

  private def liftInspectedLetsGo (numVars : Nat) (pinIdxs : Array Nat)
      (transparency : TransparencyMode) (flags : ResolvedExprMatchFlags)
      (pe curE : Expr) (patDepth whnfFuel letFuel : Nat) (lets : Array LetEntry)
      (k : Expr → Array LetEntry → MetaM (Option (Array Expr))) :
      MetaM (Option (Array Expr)) :=
    match pe with
    | .mdata _ pb =>
      liftInspectedLetsGo numVars pinIdxs transparency flags pb curE patDepth whnfFuel
        letFuel lets k
    | pe => do
      if isPatHoleOrBVar numVars pinIdxs pe patDepth then
        return ← k curE lets
      let isPatLet := match pe with | .letE .. => true | _ => false
      match letFuel, curE with
      | n + 1, .mdata _ inner =>
        return ← liftInspectedLetsGo numVars pinIdxs transparency flags pe inner patDepth whnfFuel n
          lets fun inner' lets' => k (curE.updateMData! inner') lets'
      | n + 1, .letE x t v b nondep =>
        if !isPatLet && !t.hasLooseBVars && !v.hasLooseBVars then
          -- Keep `nondep := false` in `LCtx` so fallback `zetaDelta` can still unfold `have`s if
          -- needed, while recording the original `nondep` on `LetEntry` for `rewrapLets`.
          return ← withLetDecl x t v (nondep := false) fun fv =>
            let entry : LetEntry := { fv := fv.fvarId!, userName := x, type := t, val := v, nondep }
            liftInspectedLetsGo numVars pinIdxs transparency flags pe (b.instantiate1 fv) patDepth
              whnfFuel n (lets.push entry) k
      | _, _ => pure ()
      unless isCompositePat pe do
        return ← k curE lets
      match whnfFuel with
      | fuel + 1 =>
        if needsWhnfForComposite pe curE then
          let eW ← whnfNoZeta transparency flags curE
          if eW != curE then
            return ← liftInspectedLetsGo numVars pinIdxs transparency flags pe eW patDepth fuel
              (countLeadingLetMData eW) lets k
      | 0 => pure ()
      liftInspectedLetsStep numVars pinIdxs transparency flags pe curE patDepth whnfFuel
        lets k
  termination_by (sizeOf pe, whnfFuel, 1, letFuel)
end

private def mayIntroduceLet (env : Environment) (fuel : Nat) (e : Expr) : Nat × Bool :=
  if e.hasFVar then
    (0, true)
  else
    match fuel with
    | 0 => (0, true)
    | fuel + 1 =>
      match e with
      | .letE .. | .fvar _ | .proj .. => (fuel, true)
      | .const c _ =>
        match env.find? c with
        | some (.defnInfo _) => (fuel, true)
        | _ => (fuel, false)
      | .mdata _ b => mayIntroduceLet env fuel b
      | .app f a =>
        let (fuel, hit) := mayIntroduceLet env fuel f
        if hit then (fuel, true) else mayIntroduceLet env fuel a
      | .lam _ t b _ | .forallE _ t b _ =>
        let (fuel, hit) := mayIntroduceLet env fuel t
        if hit then (fuel, true) else mayIntroduceLet env fuel b
      | .bvar _ | .sort _ | .lit _ | .mvar _ => (fuel, false)

private def withRelUnfoldRules (rel : ResolvedExprMatchRel) (k : MetaM α) : MetaM α :=
  withLocalDefItems rel.flags.zeta rel.posFVars rel.negFVars do
    if rel.itemRulesRev.isEmpty then
      k
    else
      let pred (cfg : Config) (info : ConstantInfo) : CoreM Bool := do
        for (pos, entry) in rel.itemRulesRev do
          match entry with
          | .inl c =>
            if c == info.name then
              return pos
          | .inr thms =>
            if simpTheoremsUnfolds thms info.name then
              return pos
        canUnfoldDefault cfg info
      withCanUnfoldPred pred k

private def replaceTracePatMVars (patMVs : Array (MVarId × Expr)) (e : Expr) : Expr :=
  if patMVs.isEmpty || !e.hasExprMVar then e else
    e.replace fun
      | .mvar mvId => (patMVs.find? (·.1 == mvId)).map (·.2)
      | _          => none

private def findFirstDefEqMismatch (p : ExprPattern) (pinIdxs : Array Nat) (pins : Array Expr)
    (fuel : Nat) (patMVs : Array (MVarId × Nat)) (pe e : Expr) : MetaM MessageData := do
  match fuel with
  | 0 =>
    let patInst ← instantiateMVars pe
    let patFmt ← withPatTraceEnv p pinIdxs pins #[] #[] fun _ subst => do
      let pairs := patMVs.filterMap fun (mvId, idx) =>
        (subst.getD idx none).map (mvId, ·)
      ppExpr (replaceTracePatMVars pairs patInst)
    addMessageContext m!"first mismatch:{indentD patFmt}\nagainst:{indentExpr e}\n(defeq mismatch)"
  | fuel + 1 =>
    let pHead := pe.consumeMData
    let eHead := e.consumeMData
    match pHead, eHead with
    | .app pf pa, .app ef ea =>
      if ← isDefEq pf ef then
        findFirstDefEqMismatch p pinIdxs pins fuel patMVs pa ea
      else
        findFirstDefEqMismatch p pinIdxs pins fuel patMVs pf ef
    | .forallE n pd pb _, .forallE _ ed eb _ =>
      if !(← isDefEq pd ed) then
        findFirstDefEqMismatch p pinIdxs pins fuel patMVs pd ed
      else
        withLocalDeclD n ed fun y =>
          findFirstDefEqMismatch p pinIdxs pins fuel patMVs
            (pb.instantiate1 y) (eb.instantiate1 y)
    | .lam n pd pb _, .lam _ ed eb _ =>
      if !(← isDefEq pd ed) then
        findFirstDefEqMismatch p pinIdxs pins fuel patMVs pd ed
      else
        withLocalDeclD n ed fun y =>
          findFirstDefEqMismatch p pinIdxs pins fuel patMVs
            (pb.instantiate1 y) (eb.instantiate1 y)
    | _, _ =>
      let patInst ← instantiateMVars pe
      let eSub ← instantiateMVars e
      let patFmt ← withPatTraceEnv p pinIdxs pins #[] #[] fun _ subst => do
        let pairs := patMVs.filterMap fun (mvId, idx) =>
          (subst.getD idx none).map (mvId, ·)
        ppExpr (replaceTracePatMVars pairs patInst)
      addMessageContext
        m!"first mismatch:{indentD patFmt}\nagainst:{indentExpr eSub}\n(defeq mismatch)"

private def traceDefEqResult (p : ExprPattern) (rel : ResolvedExprMatchRel)
    (pinIdxs : Array Nat) (pins : Array Expr) (e : Expr) (matched : Bool) : MetaM Unit := do
  let patFmt ← formatPatExpr p pinIdxs pins #[] p.body
  let eng := match rel.engine with
    | .reducible  => "reducible"
    | .instances  => "instances"
    | .defeq      => "defeq"
    | .structural => "structural"
    | .sym        => "sym"
  if matched then
    trace[Meta.Match.expr] "[{eng}] matched:{indentD patFmt}\nagainst:{indentExpr e}"
    return ()
  let mmMsg ←
    withRelDefEqConfig (engineTransparency rel.engine) rel.flags rel.flags.zeta rel.flags.zeta do
      withNewMCtxDepth do
        let us ← p.levelParams.mapM fun _ => mkFreshLevelMVar
        let lam := p.lam.instantiateLevelParams p.levelParams us
        let mut subst : Array Expr := Array.mkEmpty p.numVars
        let mut patMVs : Array (MVarId × Nat) := #[]
        let mut cur := lam
        for i in *...p.numVars do
          match cur with
          | .lam n d b _ =>
            if let some pinPos := pinIdxs.idxOf? i then
              subst := subst.push (pins.getD pinPos default)
            else
              let ty := d.instantiateRevRange 0 subst.size subst
              let uname := if p.namedIdx.contains i then n.eraseMacroScopes else `_
              let mv ← mkFreshExprMVar (some ty) (userName := uname)
              subst := subst.push mv
              patMVs := patMVs.push (mv.mvarId!, i)
            cur := b
          | _ => break
        let pe := cur.instantiateRevRange 0 subst.size subst
        findFirstDefEqMismatch p pinIdxs pins 64 patMVs pe e
  trace[Meta.Match.expr] "[{eng}] failed:{indentD patFmt}\nagainst:{indentExpr e}\n{mmMsg}"

private def matchDefEq? (p : ExprPattern) (rel : ResolvedExprMatchRel)
    (pinIdxs : Array Nat) (pins : Array Expr) (e : Expr) : MetaM (Option (Array Expr)) := do
  validateResolvedRel rel
  let transparency := engineTransparency rel.engine
  let env ← getEnv
  let e ← instantiateMVarsIfNeeded e
  let pins ← pins.mapM instantiateMVarsIfNeeded
  let runAt (target : Expr) (liftedLets : Array LetEntry) : MetaM (Option (Array Expr)) := do
    let res ←
      if !rel.flags.zeta then
        runDefEqOnce p pinIdxs pins transparency rel.flags false false target
      else
        match ← runDefEqOnce p pinIdxs pins transparency rel.flags false false target with
        | some σ => pure (some σ)
        | none   =>
          -- Skip the zeta fallback when no `let`s were lifted and bounded inspection finds no
          -- `fvar`s, `letE`s, projections, or unfoldable definitions that could expose a `let`.
          let needZeta := !liftedLets.isEmpty ||
            (mayIntroduceLet env 64 target).2 ||
            (mayIntroduceLet env 64 p.body).2 ||
            pins.any fun pin => (mayIntroduceLet env 64 pin).2
          if needZeta then
            runDefEqOnce p pinIdxs pins transparency rel.flags
              rel.flags.zeta rel.flags.zeta target
          else
            pure none
    return res.map fun σ =>
      if liftedLets.isEmpty then σ else σ.map (rewrapLets · liftedLets)
  let runCore :=
    if !rel.flags.zeta then
      runAt e #[]
    else
      liftInspectedLetsGo p.numVars pinIdxs transparency rel.flags p.body e 0 16
        (countLeadingLetMData e) #[] runAt
  let res ← withRelUnfoldRules rel runCore
  if ← isTracingEnabledFor `Meta.Match.expr then
    withRelUnfoldRules rel <| traceDefEqResult p rel pinIdxs pins e res.isSome
  return res

/--
Match `p` with pre-resolved relation `rel` and direct pin values `pins` at `pinIdxs`, returning
bound values in `p.namedIdx` order. Does not re-resolve simp items or rebuild `p.lam` per call.

Under `.structural`, captured subterms are not deeply mvar-instantiated below head position (for
`O(|pattern|)` performance); callers inspecting captured values structurally should run
`instantiateMVars` if nested assigned metavariables need resolving.
-/
def ExprPattern.matchResolvedPins? (p : ExprPattern) (rel : ResolvedExprMatchRel)
    (pinIdxs : Array Nat) (pins : Array Expr) (e : Expr) : MetaM (Option (Array Expr)) := do
  match rel.engine with
  | .sym =>
    throwError "expr quotation `/sym` requires `[MonadSym m]` (e.g. `SymM` or `GrindTacticM`)"
  | .structural =>
    matchStructural? p rel pinIdxs pins e
  | .reducible | .instances | .defeq =>
    matchDefEq? p rel pinIdxs pins e

/--
Match `p` against `e` under a pre-resolved relation `rel`. See `matchResolvedPins?` regarding
nested assigned metavariables in captured subterms.
-/
def ExprPattern.matchResolved? (p : ExprPattern) (rel : ResolvedExprMatchRel)
    (e : Expr) : MetaM (Option (Array Expr)) :=
  p.matchResolvedPins? rel #[] #[] e

/--
Match `p` against `e` under relation `rel` and optional runtime local-def unfold items.
Captured subterms under `.structural` are not deeply mvar-instantiated below head position; call
`instantiateMVars` if inspecting nested assigned metavariables structurally.
-/
def ExprPattern.match? (p : ExprPattern) (rel : ExprMatchRel) (e : Expr)
    (localItems : Array (Bool × Expr) := #[]) : MetaM (Option (Array Expr)) := do
  let r ← rel.resolve localItems
  p.matchResolvedPins? r #[] #[] e

/-- Project the `i`-th matched binder from `xs` with `Inhabited` fallback. -/
@[inline]
def ExprPattern.arg (xs : Array Expr) (i : Nat) : Expr :=
  xs.getD i default

/--
CPS matching combinator accepting a pre-resolved relation `rel`, avoiding per-call rule resolution
and pin lambda reconstruction. See `matchResolvedPins?` regarding nested assigned metavariables.
-/
@[inline]
def ExprPattern.matchResolvedOrElse {m : Type → Type v} [Monad m] [MonadLiftT MetaM m] {α : Type}
    (p : ExprPattern) (rel : ResolvedExprMatchRel) (pinIdxs : Array Nat) (pins : Array Expr)
    (e : Expr) (onMatch : Array Expr → m α) (onFail : Unit → m α) : m α := do
  match ← (p.matchResolvedPins? rel pinIdxs pins e : MetaM (Option (Array Expr))) with
  | some xs => onMatch xs
  | none    => onFail ()

/--
CPS matching combinator resolving `rel` via the runtime site cache keyed by `siteId`, pre-seeding
`pins` at `pinIdxs` directly without rebuilding `p.lam`, and invoking `onMatch` or `onFail`.
Captured subterms under `.structural` are not deeply mvar-instantiated below head position; call
`instantiateMVars` if inspecting nested assigned metavariables structurally.
-/
@[inline]
def ExprPattern.matchSiteOrElse {m : Type → Type v} [Monad m] [MonadLiftT MetaM m] {α : Type}
    (siteId : Name) (p : ExprPattern) (rel : ExprMatchRel) (pinIdxs : Array Nat)
    (pins : Array Expr) (localItems : Array (Bool × Expr)) (e : Expr)
    (onMatch : Array Expr → m α) (onFail : Unit → m α) : m α := do
  let r ← (rel.resolve localItems siteId : MetaM ResolvedExprMatchRel)
  match ← (p.matchResolvedPins? r pinIdxs pins e : MetaM (Option (Array Expr))) with
  | some xs => onMatch xs
  | none    => onFail ()

/--
CPS matching combinator used by native `match`/`let`/`if let` compilation on `Expr` patterns.
Pre-seeds `pins` at `pinIdxs` directly without rebuilding `p.lam`, resolves `rel`, matches against
`e`, and invokes `onMatch` with the bound `?`-variables or `onFail ()` if matching fails.
See `matchSiteOrElse` regarding nested assigned metavariables in captured subterms.
-/
@[inline]
def ExprPattern.matchOrElse {m : Type → Type v} [Monad m] [MonadLiftT MetaM m] {α : Type}
    (p : ExprPattern) (rel : ExprMatchRel) (pinIdxs : Array Nat) (pins : Array Expr)
    (localItems : Array (Bool × Expr)) (e : Expr)
    (onMatch : Array Expr → m α) (onFail : Unit → m α) : m α :=
  p.matchSiteOrElse .anonymous rel pinIdxs pins localItems e onMatch onFail

/--
Run `k xs` inside `lambdaBoundedTelescope p.lam p.numVars` with local variables renamed to
`?name` / `$label` / `_` and `pp.sanitizeNames` disabled, so `#check_pattern` and diagnostics
pretty-print pattern expressions as well-typed terms.
-/
def ExprPattern.withInspectVars [MonadControlT MetaM m] [Monad m]
    (p : ExprPattern) (pinIdxs : Array Nat := #[]) (pinLabels : Array String := #[])
    (k : Array Expr → m α) : m α :=
  withPatTraceEnv p pinIdxs #[] pinLabels #[] fun xs _ => k xs

/--
Pretty-print the compiled body of `p`, replacing binders/wildcards/`$pin`s with well-typed
placeholders (using `pinLabels` when supplied by diagnostics such as `#check_pattern`).
-/
def ExprPattern.formatBodyWithLabels (p : ExprPattern) (pinIdxs : Array Nat := #[])
    (pinLabels : Array String := #[]) : MetaM Format :=
  formatPatExpr p pinIdxs #[] #[] p.body (pinLabels := pinLabels)

/-- Pretty-print the compiled body of `p`, replacing binders/wildcards/`$pin`s for diagnostics. -/
def ExprPattern.formatBody (p : ExprPattern) (pinIdxs : Array Nat := #[])
    (pins : Array Expr := #[]) : MetaM Format :=
  formatPatExpr p pinIdxs pins #[] p.body

private partial def replaceCollapsedVars (p : ExprPattern)
    (nonPinMVs : Array (MVarId × Nat)) (pinFVs : Array (FVarId × Nat)) (depth : Nat) :
    Expr → Expr
  | .mvar id =>
    match nonPinMVs.find? (·.1 == id) with
    | some (_, varIdx) => .bvar (depth + (p.numVars - 1 - varIdx))
    | none             => .mvar id
  | .fvar fv =>
    match pinFVs.find? (·.1 == fv) with
    | some (_, varIdx) => .bvar (depth + (p.numVars - 1 - varIdx))
    | none             => .fvar fv
  | .app f a         =>
    .app (replaceCollapsedVars p nonPinMVs pinFVs depth f)
      (replaceCollapsedVars p nonPinMVs pinFVs depth a)
  | .lam n t b bi    =>
    .lam n (replaceCollapsedVars p nonPinMVs pinFVs depth t)
      (replaceCollapsedVars p nonPinMVs pinFVs (depth + 1) b) bi
  | .forallE n t b bi =>
    .forallE n (replaceCollapsedVars p nonPinMVs pinFVs depth t)
      (replaceCollapsedVars p nonPinMVs pinFVs (depth + 1) b) bi
  | .letE n t v b nd =>
    .letE n (replaceCollapsedVars p nonPinMVs pinFVs depth t)
      (replaceCollapsedVars p nonPinMVs pinFVs depth v)
      (replaceCollapsedVars p nonPinMVs pinFVs (depth + 1) b) nd
  | .mdata m b       => .mdata m (replaceCollapsedVars p nonPinMVs pinFVs depth b)
  | .proj s j b      => .proj s j (replaceCollapsedVars p nonPinMVs pinFVs depth b)
  | e                => e

private def collapsedStructStep? (p : ExprPattern) (resolved : ResolvedExprMatchRel)
    (pinIdxs : Array Nat) : MetaM (Option Expr) := do
  unless resolved.hasUnfolding do
    return none
  let ctx : StructCtx := {
    pat          := p
    flags        := resolved.flags
    itemRulesRev := resolved.itemRulesRev
    posFVars     := resolved.posFVars
    negFVars     := resolved.negFVars
    hasUnfolding := resolved.hasUnfolding
  }
  let rec loop (fuel : Nat) (cur : Expr) : MetaM (Option Expr) := do
    match fuel with
    | 0 => return none
    | fuel + 1 =>
      let cur := cur.consumeMData
      if isPatHoleOrBVar p.numVars pinIdxs cur 0 then
        return some cur
      if resolved.flags.beta && cur.isHeadBetaTarget then
        return ← loop fuel cur.headBeta
      if resolved.flags.zeta then
        if let .letE _ _ pv pb _ := cur then
          return ← loop fuel (pb.instantiate1 pv)
      if resolved.flags.proj then
        if let .proj _ i pc := cur then
          let pc' ← reduceProjTarget ctx pc #[]
          if let some projected ← projectCore? pc' i then
            return ← loop fuel projected
      if let some cur' ← unfoldConstStep? ctx cur then
        return ← loop fuel cur'
      return none
  loop 64 p.body

private def collapsedDefEqHead? (p : ExprPattern) (resolved : ResolvedExprMatchRel)
    (pinIdxs : Array Nat) : MetaM (Option Expr) := do
  let transparency := engineTransparency resolved.engine
  withRelDefEqConfig transparency resolved.flags resolved.flags.zeta resolved.flags.zeta <|
    withRelUnfoldRules resolved <| withNewMCtxDepth do
      let us ← p.levelParams.mapM fun _ => mkFreshLevelMVar
      let lam := p.lam.instantiateLevelParams p.levelParams us
      let rec go (i : Nat) (cur : Expr) (subst : Array Expr)
          (nonPinMVs : Array (MVarId × Nat)) (pinFVs : Array (FVarId × Nat)) :
          MetaM (Option Expr) := do
        if i >= p.numVars then
          let patBody := cur.instantiateRevRange 0 subst.size subst
          let w ← instantiateMVars (← Meta.whnf patBody)
          let fn := w.getAppFn.consumeMData
          if let .mvar mvId := fn then
            if nonPinMVs.any (·.1 == mvId) then
              return some (replaceCollapsedVars p nonPinMVs pinFVs 0 w)
          return none
        match cur with
        | .lam n d b bi =>
          let ty := d.instantiateRevRange 0 subst.size subst
          if pinIdxs.contains i then
            withLocalDecl n bi ty fun fv =>
              go (i + 1) b (subst.push fv) nonPinMVs (pinFVs.push (fv.fvarId!, i))
          else
            let mv ← mkFreshExprMVar (some ty)
            go (i + 1) b (subst.push mv) (nonPinMVs.push (mv.mvarId!, i)) pinFVs
        | _ => return none
      go 0 lam #[] #[] #[]

/--
If `p` is not syntactically a bare variable/wildcard/higher-order-application pattern, yet reduces
at the root under relation `rel` to a pattern variable (or application headed by one), return a
formatted normal form of that collapsed root expression.
-/
def ExprPattern.collapsedNormalForm? (p : ExprPattern) (rel : ExprMatchRel)
    (pinIdxs : Array Nat := #[]) (localItems : Array (Bool × Expr) := #[])
    (pinLabels : Array String := #[]) : MetaM (Option Format) := do
  if isPatHoleOrBVar p.numVars pinIdxs p.body 0 then
    return none
  let resolved ←
    try
      rel.resolve localItems
    catch _ =>
      return none
  let collapsed? ←
    match resolved.engine with
    | .structural => collapsedStructStep? p resolved pinIdxs
    | .reducible | .instances | .defeq | .sym => collapsedDefEqHead? p resolved pinIdxs
  collapsed?.mapM fun collapsed =>
    formatPatExpr p pinIdxs #[] #[] collapsed (pinLabels := pinLabels)

/-! ## `ExprTemplate` and Runtime Term Building -/

/-- Role of an abstracted parameter inside a compiled `ExprTemplate`. -/
inductive ExprTemplateVarKind where
  /-- Runtime `$e` splice parameter receiving `splices[splicePos]`. -/
  | splice (splicePos : Nat)
  /-- Explicit `?h` / `?_` hole materialized as a fresh `.syntheticOpaque` mvar at runtime. -/
  | hole (userName? : Option Name)
  /-- Dependent type-class instance synthesized at runtime once input types are resolved. -/
  | tc
  /-- Auxiliary type or `outParam` parameter inferred from splice types and TC resolution. -/
  | infer
  deriving Inhabited, BEq, Hashable, Repr

/--
Compiled closed template `lam = fun x₀ … xₙ₋₁ => body` (modulo `levelParams`) produced by a
term-position `` `(expr[rel]| t) `` quotation.
-/
structure ExprTemplate where
  /-- Universe parameter names abstracted in `lam`. -/
  levelParams : List Name
  /-- Template expression wrapped in `varKinds.size` outer lambdas. -/
  lam         : Expr
  /-- Classification of each outer lambda parameter during instantiation. -/
  varKinds    : Array ExprTemplateVarKind
  deriving Inhabited, BEq, Hashable

/-! ## Compact DAG serialization for compiled `ExprPattern` and `ExprTemplate` -/

private def patternBlobVersion : UInt8 := 1
private def templateBlobVersion : UInt8 := 2

private inductive EncodedName where
  | anonymous
  | str (parent : Nat) (val : String)
  | num (parent : Nat) (val : Nat)
  deriving BEq, Hashable

private inductive EncodedLevel where
  | zero
  | succ (u : Nat)
  | max (u v : Nat)
  | imax (u v : Nat)
  | param (name : Nat)
  deriving BEq, Hashable

private inductive EncodedExpr where
  | bvar (idx : Nat)
  | sort (lvl : Nat)
  | const (declName : Nat) (lvls : Array Nat)
  | app (fn arg : Nat)
  | lam (name : Nat) (type body : Nat) (bi : BinderInfo)
  | forallE (name : Nat) (type body : Nat) (bi : BinderInfo)
  | letE (name : Nat) (type val body : Nat) (nondep : Bool)
  | litNat (val : Nat)
  | litStr (val : String)
  | proj (typeName : Nat) (idx : Nat) (struct : Nat)
  deriving BEq, Hashable

private structure DagEncState where
  names      : Array EncodedName := #[]
  nameMap    : Std.HashMap EncodedName Nat := {}
  nameCache  : Std.HashMap Name Nat := {}
  levels     : Array EncodedLevel := #[]
  levelMap   : Std.HashMap EncodedLevel Nat := {}
  levelCache : Std.HashMap Level Nat := {}
  exprs      : Array EncodedExpr := #[]
  exprMap    : Std.HashMap EncodedExpr Nat := {}
  exprCache  : ExprStructMap Nat := {}

private def internEncodedName (node : EncodedName) (orig : Name) :
    StateT DagEncState (Except String) Nat := do
  let st ← get
  if let some idx := st.nameMap[node]? then
    set { st with nameCache := st.nameCache.insert orig idx }
    return idx
  let idx := st.names.size
  set { st with
    names     := st.names.push node
    nameMap   := st.nameMap.insert node idx
    nameCache := st.nameCache.insert orig idx
  }
  return idx

private def internName (n : Name) : StateT DagEncState (Except String) Nat := do
  if let some idx := (← get).nameCache[n]? then
    return idx
  let node : EncodedName ← match n with
    | .anonymous => pure .anonymous
    | .str p s   => pure (.str (← internName p) s)
    | .num p k   => pure (.num (← internName p) k)
  internEncodedName node n

private def internEncodedLevel (node : EncodedLevel) (orig : Level) :
    StateT DagEncState (Except String) Nat := do
  let st ← get
  if let some idx := st.levelMap[node]? then
    set { st with levelCache := st.levelCache.insert orig idx }
    return idx
  let idx := st.levels.size
  set { st with
    levels     := st.levels.push node
    levelMap   := st.levelMap.insert node idx
    levelCache := st.levelCache.insert orig idx
  }
  return idx

private def internLevel (u : Level) : StateT DagEncState (Except String) Nat := do
  if let some idx := (← get).levelCache[u]? then
    return idx
  let node : EncodedLevel ← match u with
    | .zero     => pure .zero
    | .succ a   => pure (.succ (← internLevel a))
    | .max a b  => pure (.max (← internLevel a) (← internLevel b))
    | .imax a b => pure (.imax (← internLevel a) (← internLevel b))
    | .param n  => pure (.param (← internName n))
    | .mvar _   => throw "cannot encode Level.mvar"
  internEncodedLevel node u

private def internEncodedExpr (node : EncodedExpr) (orig : Expr) :
    StateT DagEncState (Except String) Nat := do
  let st ← get
  if let some idx := st.exprMap[node]? then
    set { st with exprCache := st.exprCache.insert orig idx }
    return idx
  let idx := st.exprs.size
  set { st with
    exprs     := st.exprs.push node
    exprMap   := st.exprMap.insert node idx
    exprCache := st.exprCache.insert orig idx
  }
  return idx

private def internExpr (e : Expr) : StateT DagEncState (Except String) Nat := do
  if let some idx := (← get).exprCache[(e : ExprStructEq)]? then
    return idx
  match e with
  | .mdata _ b        => internExpr b
  | .fvar _           => throw "cannot encode Expr.fvar"
  | .mvar _           => throw "cannot encode Expr.mvar"
  | .bvar i           => internEncodedExpr (.bvar i) e
  | .sort u           => internEncodedExpr (.sort (← internLevel u)) e
  | .const n us       =>
    let nIdx ← internName n
    let usIdxs ← us.toArray.mapM internLevel
    internEncodedExpr (.const nIdx usIdxs) e
  | .app f a          => internEncodedExpr (.app (← internExpr f) (← internExpr a)) e
  | .lam n t b bi     =>
    internEncodedExpr (.lam (← internName n) (← internExpr t) (← internExpr b) bi) e
  | .forallE n t b bi =>
    internEncodedExpr (.forallE (← internName n) (← internExpr t) (← internExpr b) bi) e
  | .letE n t v b nd  =>
    internEncodedExpr
      (.letE (← internName n) (← internExpr t) (← internExpr v) (← internExpr b) nd) e
  | .lit (.natVal n)  => internEncodedExpr (.litNat n) e
  | .lit (.strVal s)  => internEncodedExpr (.litStr s) e
  | .proj s i b       => internEncodedExpr (.proj (← internName s) i (← internExpr b)) e

private def writeUInt8 (b : UInt8) (buf : ByteArray) : ByteArray :=
  buf.push b

private def writeBool (b : Bool) (buf : ByteArray) : ByteArray :=
  buf.push (if b then 1 else 0)

private def writeNat (n : Nat) (buf : ByteArray) : ByteArray :=
  if n < 128 then
    buf.push n.toUInt8
  else
    writeNat (n / 128) (buf.push ((n % 128).toUInt8 ||| 0x80))
termination_by n
decreasing_by simp_wf; omega

private def writeString (s : String) (buf : ByteArray) : ByteArray :=
  let utf8 := s.toUTF8
  (writeNat utf8.size buf) ++ utf8

private def binderInfoToByte : BinderInfo → UInt8
  | .default        => 0
  | .implicit       => 1
  | .strictImplicit => 2
  | .instImplicit   => 3

private def byteToBinderInfo : UInt8 → Except String BinderInfo
  | 0 => .ok .default
  | 1 => .ok .implicit
  | 2 => .ok .strictImplicit
  | 3 => .ok .instImplicit
  | b => .error s!"invalid BinderInfo tag {b}"

private def writeDagTables (st : DagEncState) (buf : ByteArray) : ByteArray := Id.run do
  let mut out := writeNat st.names.size buf
  for n in st.names do
    match n with
    | .anonymous => out := writeUInt8 0 out
    | .str p s   => out := writeString s (writeNat p (writeUInt8 1 out))
    | .num p k   => out := writeNat k (writeNat p (writeUInt8 2 out))
  out := writeNat st.levels.size out
  for u in st.levels do
    match u with
    | .zero      => out := writeUInt8 0 out
    | .succ a    => out := writeNat a (writeUInt8 1 out)
    | .max a b   => out := writeNat b (writeNat a (writeUInt8 2 out))
    | .imax a b  => out := writeNat b (writeNat a (writeUInt8 3 out))
    | .param nm  => out := writeNat nm (writeUInt8 4 out)
  out := writeNat st.exprs.size out
  for e in st.exprs do
    match e with
    | .bvar i              => out := writeNat i (writeUInt8 0 out)
    | .sort u              => out := writeNat u (writeUInt8 1 out)
    | .const n us          =>
      out := writeNat us.size (writeNat n (writeUInt8 2 out))
      for u in us do
        out := writeNat u out
    | .app f a             => out := writeNat a (writeNat f (writeUInt8 3 out))
    | .lam n t b bi        =>
      out := writeUInt8 (binderInfoToByte bi)
        (writeNat b (writeNat t (writeNat n (writeUInt8 4 out))))
    | .forallE n t b bi    =>
      out := writeUInt8 (binderInfoToByte bi)
        (writeNat b (writeNat t (writeNat n (writeUInt8 5 out))))
    | .letE n t v b nd     =>
      out := writeBool nd (writeNat b (writeNat v (writeNat t (writeNat n (writeUInt8 6 out)))))
    | .litNat v            => out := writeNat v (writeUInt8 7 out)
    | .litStr s            => out := writeString s (writeUInt8 8 out)
    | .proj s i b          => out := writeNat b (writeNat i (writeNat s (writeUInt8 9 out)))
  return out

private def writeAsciiVarNat (n : Nat) (out : String) : String :=
  if n < 32 then
    out.push (Char.ofNat (n + 48))
  else
    writeAsciiVarNat (n / 32) (out.push (Char.ofNat (((n % 32) ||| 32) + 48)))
termination_by n
decreasing_by simp_wf; omega

private def encodeBytesAscii (bytes : ByteArray) : String :=
  let out := writeAsciiVarNat bytes.size ""
  go 0 out
where
  push6 (v : Nat) (s : String) : String :=
    s.push (Char.ofNat ((v &&& 0x3f) + 48))
  go (i : Nat) (s : String) : String :=
    if h0 : i + 2 < bytes.size then
      let b0 := bytes[i].toNat
      let b1 := bytes[i + 1].toNat
      let b2 := bytes[i + 2].toNat
      let s := push6 (b0 >>> 2) s
      let s := push6 (((b0 &&& 3) <<< 4) ||| (b1 >>> 4)) s
      let s := push6 (((b1 &&& 0xf) <<< 2) ||| (b2 >>> 6)) s
      let s := push6 (b2 &&& 0x3f) s
      go (i + 3) s
    else if h1 : i + 1 < bytes.size then
      let b0 := bytes[i].toNat
      let b1 := bytes[i + 1].toNat
      let s := push6 (b0 >>> 2) s
      let s := push6 (((b0 &&& 3) <<< 4) ||| (b1 >>> 4)) s
      push6 ((b1 &&& 0xf) <<< 2) s
    else if h2 : i < bytes.size then
      let b0 := bytes[i].toNat
      let s := push6 (b0 >>> 2) s
      push6 ((b0 &&& 3) <<< 4) s
    else
      s
  termination_by bytes.size - i

private def readAsciiChunk6 (raw : ByteArray) (idx : Nat) : Except String Nat :=
  if h : idx < raw.size then
    let v := raw[idx].toNat
    if v >= 48 && v <= 111 then
      .ok (v - 48)
    else
      .error "invalid 6-bit ASCII character in serialized payload"
  else
    .error "unexpected EOF while reading 6-bit ASCII payload"

private def readAsciiVarNat (raw : ByteArray) (pos : Nat) : Except String (Nat × Nat) :=
  go pos 0 1 (raw.size - pos)
where
  go (pos acc mult : Nat) : Nat → Except String (Nat × Nat)
    | 0 => .error "unexpected EOF while reading ASCII length header"
    | fuel + 1 => do
      let v ← readAsciiChunk6 raw pos
      let acc' := acc + (v &&& 0x1f) * mult
      if (v &&& 0x20) == 0 then
        return (acc', pos + 1)
      else
        go (pos + 1) acc' (mult * 32) fuel

private def decodeBytesAscii (s : String) : Except String ByteArray := do
  let raw := s.toUTF8
  let (byteLen, payloadStart) ← readAsciiVarNat raw 0
  let fullGroups := byteLen / 3
  let rem := byteLen % 3
  let expectedPayloadChars := fullGroups * 4 + (if rem == 0 then 0 else rem + 1)
  unless raw.size == payloadStart + expectedPayloadChars do
    throw "corrupt byte-length header in serialized payload"
  let mut out := ByteArray.emptyWithCapacity byteLen
  let mut pos := payloadStart
  for _ in *...fullGroups do
    let c0 ← readAsciiChunk6 raw pos
    let c1 ← readAsciiChunk6 raw (pos + 1)
    let c2 ← readAsciiChunk6 raw (pos + 2)
    let c3 ← readAsciiChunk6 raw (pos + 3)
    out := out.push (((c0 <<< 2) ||| (c1 >>> 4)).toUInt8)
    out := out.push ((((c1 &&& 0xf) <<< 4) ||| (c2 >>> 2)).toUInt8)
    out := out.push ((((c2 &&& 0x3) <<< 6) ||| c3).toUInt8)
    pos := pos + 4
  if rem == 1 then
    let c0 ← readAsciiChunk6 raw pos
    let c1 ← readAsciiChunk6 raw (pos + 1)
    unless (c1 &&& 0xf) == 0 do
      throw "non-zero padding bits in serialized payload"
    out := out.push (((c0 <<< 2) ||| (c1 >>> 4)).toUInt8)
  else if rem == 2 then
    let c0 ← readAsciiChunk6 raw pos
    let c1 ← readAsciiChunk6 raw (pos + 1)
    let c2 ← readAsciiChunk6 raw (pos + 2)
    unless (c2 &&& 0x3) == 0 do
      throw "non-zero padding bits in serialized payload"
    out := out.push (((c0 <<< 2) ||| (c1 >>> 4)).toUInt8)
    out := out.push ((((c1 &&& 0xf) <<< 4) ||| (c2 >>> 2)).toUInt8)
  unless out.size == byteLen do
    throw "decoded ByteArray size mismatch"
  return out

private structure DagDecState where
  bytes  : ByteArray
  pos    : Nat := 0
  names  : Array Name := #[]
  levels : Array Level := #[]
  exprs  : Array Expr := #[]

private abbrev DagDecM := StateT DagDecState (Except String)

private def decReadByte : DagDecM UInt8 := do
  let st ← get
  if h : st.pos < st.bytes.size then
    let b := st.bytes[st.pos]
    set { st with pos := st.pos + 1 }
    return b
  else
    throw "unexpected EOF in binary payload"

private def decReadBool : DagDecM Bool := do
  match ← decReadByte with
  | 0 => return false
  | 1 => return true
  | b => throw s!"invalid Bool tag {b}"

private def decReadNat : DagDecM Nat := do
  let st ← get
  let (val, nextPos) ← liftM (go st.bytes st.pos 0 1 (st.bytes.size - st.pos))
  set { st with pos := nextPos }
  return val
where
  go (bytes : ByteArray) (pos acc mult : Nat) : Nat → Except String (Nat × Nat)
    | 0 => .error "unexpected EOF while reading Nat"
    | fuel + 1 =>
      if h : pos < bytes.size then
        let b := bytes[pos].toNat
        let acc' := acc + (b &&& 0x7f) * mult
        if (b &&& 0x80) == 0 then
          .ok (acc', pos + 1)
        else
          go bytes (pos + 1) acc' (mult * 128) fuel
      else
        .error "unexpected EOF while reading Nat"

private def decReadString : DagDecM String := do
  let len ← decReadNat
  let st ← get
  if len > st.bytes.size - st.pos then
    throw "string length exceeds remaining payload bytes"
  let slice := st.bytes.extract st.pos (st.pos + len)
  set { st with pos := st.pos + len }
  let some str := String.fromUTF8? slice
    | throw "invalid UTF-8 string in serialized payload"
  return str

private def decCheckCount (count : Nat) (minBytesPerElem : Nat := 1) : DagDecM Unit := do
  let st ← get
  if count * minBytesPerElem > st.bytes.size - st.pos then
    throw "decoded collection count exceeds remaining payload bytes"

private def decGetName (idx : Nat) : DagDecM Name := do
  let names := (← get).names
  if h : idx < names.size then
    return names[idx]
  else
    throw s!"invalid Name DAG index {idx}"

private def decGetLevel (idx : Nat) : DagDecM Level := do
  let levels := (← get).levels
  if h : idx < levels.size then
    return levels[idx]
  else
    throw s!"invalid Level DAG index {idx}"

private def decGetExpr (idx : Nat) : DagDecM Expr := do
  let exprs := (← get).exprs
  if h : idx < exprs.size then
    return exprs[idx]
  else
    throw s!"invalid Expr DAG index {idx}"

private def decodeDagTables : DagDecM Unit := do
  let numNames ← decReadNat
  decCheckCount numNames
  let mut names := Array.emptyWithCapacity numNames
  for _ in *...numNames do
    let tag ← decReadByte
    let n ← match tag with
      | 0 => pure .anonymous
      | 1 =>
        let pIdx ← decReadNat
        let s ← decReadString
        let some p := names[pIdx]? | throw s!"invalid parent Name DAG index {pIdx}"
        pure (.str p s)
      | 2 =>
        let pIdx ← decReadNat
        let k ← decReadNat
        let some p := names[pIdx]? | throw s!"invalid parent Name DAG index {pIdx}"
        pure (.num p k)
      | _ => throw s!"invalid Name DAG tag {tag}"
    names := names.push n
  modify fun st => { st with names }
  let numLevels ← decReadNat
  decCheckCount numLevels
  let mut levels := Array.emptyWithCapacity numLevels
  for _ in *...numLevels do
    let tag ← decReadByte
    let u ← match tag with
      | 0 => pure .zero
      | 1 =>
        let aIdx ← decReadNat
        let some a := levels[aIdx]? | throw s!"invalid Level DAG index {aIdx}"
        pure (.succ a)
      | 2 =>
        let aIdx ← decReadNat
        let bIdx ← decReadNat
        let some a := levels[aIdx]? | throw s!"invalid Level DAG index {aIdx}"
        let some b := levels[bIdx]? | throw s!"invalid Level DAG index {bIdx}"
        pure (.max a b)
      | 3 =>
        let aIdx ← decReadNat
        let bIdx ← decReadNat
        let some a := levels[aIdx]? | throw s!"invalid Level DAG index {aIdx}"
        let some b := levels[bIdx]? | throw s!"invalid Level DAG index {bIdx}"
        pure (.imax a b)
      | 4 =>
        let n ← decGetName (← decReadNat)
        pure (.param n)
      | _ => throw s!"invalid Level DAG tag {tag}"
    levels := levels.push u
  modify fun st => { st with levels }
  let numExprs ← decReadNat
  decCheckCount numExprs
  let mut exprs := Array.emptyWithCapacity numExprs
  for _ in *...numExprs do
    let tag ← decReadByte
    let e ← match tag with
      | 0 => pure (.bvar (← decReadNat))
      | 1 => pure (.sort (← decGetLevel (← decReadNat)))
      | 2 =>
        let n ← decGetName (← decReadNat)
        let usLen ← decReadNat
        decCheckCount usLen
        let mut us : Array Level := Array.emptyWithCapacity usLen
        for _ in *...usLen do
          us := us.push (← decGetLevel (← decReadNat))
        pure (.const n us.toList)
      | 3 =>
        let fIdx ← decReadNat
        let aIdx ← decReadNat
        let some f := exprs[fIdx]? | throw s!"invalid Expr DAG index {fIdx}"
        let some a := exprs[aIdx]? | throw s!"invalid Expr DAG index {aIdx}"
        pure (.app f a)
      | 4 =>
        let n ← decGetName (← decReadNat)
        let tIdx ← decReadNat
        let bIdx ← decReadNat
        let bi ← liftM (byteToBinderInfo (← decReadByte))
        let some t := exprs[tIdx]? | throw s!"invalid Expr DAG index {tIdx}"
        let some b := exprs[bIdx]? | throw s!"invalid Expr DAG index {bIdx}"
        pure (.lam n t b bi)
      | 5 =>
        let n ← decGetName (← decReadNat)
        let tIdx ← decReadNat
        let bIdx ← decReadNat
        let bi ← liftM (byteToBinderInfo (← decReadByte))
        let some t := exprs[tIdx]? | throw s!"invalid Expr DAG index {tIdx}"
        let some b := exprs[bIdx]? | throw s!"invalid Expr DAG index {bIdx}"
        pure (.forallE n t b bi)
      | 6 =>
        let n ← decGetName (← decReadNat)
        let tIdx ← decReadNat
        let vIdx ← decReadNat
        let bIdx ← decReadNat
        let nd ← decReadBool
        let some t := exprs[tIdx]? | throw s!"invalid Expr DAG index {tIdx}"
        let some v := exprs[vIdx]? | throw s!"invalid Expr DAG index {vIdx}"
        let some b := exprs[bIdx]? | throw s!"invalid Expr DAG index {bIdx}"
        pure (.letE n t v b nd)
      | 7 => pure (.lit (.natVal (← decReadNat)))
      | 8 => pure (.lit (.strVal (← decReadString)))
      | 9 =>
        let s ← decGetName (← decReadNat)
        let i ← decReadNat
        let bIdx ← decReadNat
        let some b := exprs[bIdx]? | throw s!"invalid Expr DAG index {bIdx}"
        pure (.proj s i b)
      | _ => throw s!"invalid Expr DAG tag {tag}"
    exprs := exprs.push e
  modify fun st => { st with exprs }

/--
Serialize a closed `ExprPattern` into a printable 6-bit ASCII DAG payload for compact storage in
elaborated auxiliary constants. Fails if `lam` or `closedProofs` contain open variables or level
metavariables.
-/
def ExprPattern.encode (p : ExprPattern) : Except String String := do
  let ((lpIdxs, lamIdx, proofIdxs, guardKind), st) ← (do
    let lpIdxs ← p.levelParams.toArray.mapM internName
    let lamIdx ← internExpr p.lam
    let proofIdxs ← p.closedProofs.toList.toArray.mapM fun (k, v) => do
      return (← internExpr k, ← internExpr v)
    let guardKind ← match p.headGuard with
      | .any          => pure (0, 0, 0, "")
      | .const c a    => pure (1, ← internName c, a, "")
      | .pinApp k a   => pure (2, k, a, "")
      | .lam          => pure (3, 0, 0, "")
      | .forallE      => pure (4, 0, 0, "")
      | .sort         => pure (5, 0, 0, "")
      | .lit (.natVal n) => pure (6, n, 0, "")
      | .lit (.strVal s) => pure (7, 0, 0, s)
      | .proj sn idx  => pure (8, ← internName sn, idx, "")
    return (lpIdxs, lamIdx, proofIdxs, guardKind)).run {}
  let mut buf := writeUInt8 patternBlobVersion ByteArray.empty
  buf := writeDagTables st buf
  buf := writeNat lpIdxs.size buf
  for idx in lpIdxs do
    buf := writeNat idx buf
  buf := writeNat lamIdx buf
  buf := writeNat p.numVars buf
  buf := writeNat p.namedIdx.size buf
  for idx in p.namedIdx do
    buf := writeNat idx buf
  buf := writeNat p.firstOrder.size buf
  for b in p.firstOrder do
    buf := writeBool b buf
  buf := writeNat p.captureVars.size buf
  for b in p.captureVars do
    buf := writeBool b buf
  buf := writeNat proofIdxs.size buf
  for (kIdx, vIdx) in proofIdxs do
    buf := writeNat vIdx (writeNat kIdx buf)
  buf := writeBool p.precomputed buf
  let (gTag, gA, gB, gStr) := guardKind
  buf := writeUInt8 gTag.toUInt8 buf
  match gTag with
  | 1 | 2 | 8 => buf := writeNat gB (writeNat gA buf)
  | 6         => buf := writeNat gA buf
  | 7         => buf := writeString gStr buf
  | _         => pure ()
  return encodeBytesAscii buf

/-- Decode an `ExprPattern` from a string produced by `ExprPattern.encode`, returning errors. -/
def ExprPattern.decodeExcept (encoded : String) : Except String ExprPattern := do
  let bytes ← decodeBytesAscii encoded
  let (pat, st) ← (do
    let ver ← decReadByte
    unless ver == patternBlobVersion do
      throw s!"unsupported ExprPattern blob version {ver}"
    decodeDagTables
    let lpCount ← decReadNat
    decCheckCount lpCount
    let mut levelParams : Array Name := Array.emptyWithCapacity lpCount
    for _ in *...lpCount do
      levelParams := levelParams.push (← decGetName (← decReadNat))
    let lam ← decGetExpr (← decReadNat)
    let numVars ← decReadNat
    let namedCount ← decReadNat
    decCheckCount namedCount
    let mut namedIdx := Array.emptyWithCapacity namedCount
    for _ in *...namedCount do
      namedIdx := namedIdx.push (← decReadNat)
    let foCount ← decReadNat
    decCheckCount foCount
    let mut firstOrder := Array.emptyWithCapacity foCount
    for _ in *...foCount do
      firstOrder := firstOrder.push (← decReadBool)
    let capCount ← decReadNat
    decCheckCount capCount
    let mut captureVars := Array.emptyWithCapacity capCount
    for _ in *...capCount do
      captureVars := captureVars.push (← decReadBool)
    let pfCount ← decReadNat
    decCheckCount pfCount 2
    let mut closedProofs : ExprMap Expr := {}
    for _ in *...pfCount do
      let k ← decGetExpr (← decReadNat)
      let v ← decGetExpr (← decReadNat)
      closedProofs := closedProofs.insert k v
    let precomputed ← decReadBool
    let gTag ← decReadByte
    let headGuard : PatHeadGuard ← match gTag with
      | 0 => pure .any
      | 1 => pure (.const (← decGetName (← decReadNat)) (← decReadNat))
      | 2 => pure (.pinApp (← decReadNat) (← decReadNat))
      | 3 => pure .lam
      | 4 => pure .forallE
      | 5 => pure .sort
      | 6 => pure (.lit (.natVal (← decReadNat)))
      | 7 => pure (.lit (.strVal (← decReadString)))
      | 8 => pure (.proj (← decGetName (← decReadNat)) (← decReadNat))
      | _ => throw s!"invalid PatHeadGuard tag {gTag}"
    let levelParamsList := levelParams.toList
    let patLevelNodes := computePatLevelNodes levelParamsList (stripOuterLambdas numVars lam)
    return ({
      levelParams := levelParamsList
      lam
      numVars
      namedIdx
      firstOrder
      captureVars
      closedProofs
      patLevelNodes
      precomputed
      headGuard
    } : ExprPattern)).run { bytes }
  unless st.pos == bytes.size do
    throw "trailing bytes in ExprPattern blob"
  return pat

/--
Decode an `ExprPattern` produced by `ExprPattern.encode` for runtime auxiliary constants.
Panics if the internal compiler-emitted payload is corrupt.
-/
def ExprPattern.decode (encoded : String) : ExprPattern :=
  match ExprPattern.decodeExcept encoded with
  | .ok p    => p
  | .error e => panic! s!"ExprPattern.decode: {e}"

/--
Serialize a closed `ExprTemplate` into a printable 6-bit ASCII DAG payload for compact storage in
elaborated auxiliary constants. Fails if `lam` contains open variables or level metavariables.
-/
def ExprTemplate.encode (tmpl : ExprTemplate) : Except String String := do
  let ((lpIdxs, lamIdx, kinds), st) ← (do
    let lpIdxs ← tmpl.levelParams.toArray.mapM internName
    let lamIdx ← internExpr tmpl.lam
    let kinds : Array (Nat × Nat) ← tmpl.varKinds.mapM fun (k : ExprTemplateVarKind) =>
      match k with
      | .splice pos    => pure (0, pos)
      | .hole none     => pure (1, 0)
      | .hole (some n) => do return (2, ← internName n)
      | .tc            => pure (3, 0)
      | .infer         => pure (4, 0)
    return (lpIdxs, lamIdx, kinds)).run {}
  let mut buf := writeUInt8 templateBlobVersion ByteArray.empty
  buf := writeDagTables st buf
  buf := writeNat lpIdxs.size buf
  for idx in lpIdxs do
    buf := writeNat idx buf
  buf := writeNat lamIdx buf
  buf := writeNat kinds.size buf
  for (tag, payload) in kinds do
    buf := writeUInt8 tag.toUInt8 buf
    if tag == 0 || tag == 2 then
      buf := writeNat payload buf
  return encodeBytesAscii buf

/-- Decode an `ExprTemplate` from a string produced by `ExprTemplate.encode`, returning errors. -/
def ExprTemplate.decodeExcept (encoded : String) : Except String ExprTemplate := do
  let bytes ← decodeBytesAscii encoded
  let (tmpl, st) ← (do
    let ver ← decReadByte
    unless ver == templateBlobVersion do
      throw s!"unsupported ExprTemplate blob version {ver}"
    decodeDagTables
    let lpCount ← decReadNat
    decCheckCount lpCount
    let mut levelParams : Array Name := Array.emptyWithCapacity lpCount
    for _ in *...lpCount do
      levelParams := levelParams.push (← decGetName (← decReadNat))
    let lam ← decGetExpr (← decReadNat)
    let kCount ← decReadNat
    decCheckCount kCount
    let mut varKinds := Array.emptyWithCapacity kCount
    for _ in *...kCount do
      let tag ← decReadByte
      let vk : ExprTemplateVarKind ← match tag with
        | 0 => pure (.splice (← decReadNat))
        | 1 => pure (.hole none)
        | 2 => pure (.hole (some (← decGetName (← decReadNat))))
        | 3 => pure .tc
        | 4 => pure .infer
        | _ => throw s!"invalid ExprTemplateVarKind tag {tag}"
      varKinds := varKinds.push vk
    return ({
      levelParams := levelParams.toList
      lam
      varKinds
    } : ExprTemplate)).run { bytes }
  unless st.pos == bytes.size do
    throw "trailing bytes in ExprTemplate blob"
  return tmpl

/--
Decode an `ExprTemplate` produced by `ExprTemplate.encode` for runtime auxiliary constants.
Panics if the internal compiler-emitted payload is corrupt.
-/
def ExprTemplate.decode (encoded : String) : ExprTemplate :=
  match ExprTemplate.decodeExcept encoded with
  | .ok t    => t
  | .error e => panic! s!"ExprTemplate.decode: {e}"

/--
Inspect a pending type-class goal `goalType`. Returns `some (inputExprs, inputLevels)` listing
the non-`outParam` argument expressions (plus outer binder domains) and non-output universe levels,
or `none` if the goal head is not a known constant.
-/
def inspectClassGoalInputs? (goalType : Expr) :
    MetaM (Option (Array Expr × Array Level)) := do
  forallTelescopeReducing goalType fun xs typeBody => do
    let typeBody ← whnf typeBody
    let mut inExprs : Array Expr := #[]
    for x in xs do
      inExprs := inExprs.push (← x.fvarId!.getType)
    let .const declName us := typeBody.getAppFn
      | return none
    let env ← getEnv
    let outArgs := (getOutParamPositions? env declName).getD #[]
    let outLvls := (getOutLevelParamPositions? env declName).getD #[]
    let mut inLvls : Array Level := #[]
    for (u, i) in us.zipIdx do
      unless outLvls.contains i do
        inLvls := inLvls.push u
    let args := typeBody.getAppArgs
    for h : i in *...args.size do
      unless outArgs.contains i do
        inExprs := inExprs.push args[i]
    return some (inExprs, inLvls)

namespace ExprPattern.Internal

def peelTemplateLambdas (n : Nat) (e : Expr)
    (doms : Array Expr := #[]) : Array Expr × Expr :=
  match n, e with
  | k + 1, .lam _ d b _ => peelTemplateLambdas k b (doms.push d)
  | _,     _            => (doms, e)

def levelHasTempMVar (mctx : MetavarContext) (baseDepth : Nat) : Level → Bool
  | .mvar id  => (mctx.findLevelDecl? id).any (·.depth > baseDepth)
  | .succ u   => levelHasTempMVar mctx baseDepth u
  | .max u v  => levelHasTempMVar mctx baseDepth u || levelHasTempMVar mctx baseDepth v
  | .imax u v => levelHasTempMVar mctx baseDepth u || levelHasTempMVar mctx baseDepth v
  | .zero | .param _ => false

def hasTempMVar (mctx : MetavarContext) (baseDepth : Nat) (e : Expr)
    (allowed : Std.HashSet MVarId := {}) : Bool :=
  if !e.hasMVar then
    false
  else
    (e.find? fun
      | .mvar id    => !allowed.contains id && (mctx.findDecl? id).any (·.depth > baseDepth)
      | .sort u     => levelHasTempMVar mctx baseDepth u
      | .const _ us => us.any (levelHasTempMVar mctx baseDepth)
      | _           => false).isSome

abbrev HolePlaceholder := Nat × MVarId × Option Name
abbrev HolePlan := Nat × MVarId × Option Name × Expr

def validateTempHolePlans (baseDepth : Nat)
    (holePlaceholders : Array HolePlaceholder) : MetaM (Array HolePlan) := do
  if holePlaceholders.isEmpty then
    return #[]
  let mctx ← getMCtx
  let mut priorTmpHoles : Std.HashSet MVarId := {}
  let mut holePlans : Array HolePlan := Array.emptyWithCapacity holePlaceholders.size
  for (idx, tmpId, userName?) in holePlaceholders do
    let holeTy ← instantiateMVars (← tmpId.getDecl).type
    if hasTempMVar mctx baseDepth holeTy priorTmpHoles then
      throwError "expr quotation failed to resolve hole type at runtime:{indentExpr holeTy}"
    priorTmpHoles := priorTmpHoles.insert tmpId
    holePlans := holePlans.push (idx, tmpId, userName?, holeTy)
  return holePlans

private def hasAnyMVarInSet (e : Expr) (ids : Std.HashSet MVarId) : Bool :=
  e.hasExprMVar && (e.find? fun
    | .mvar id => ids.contains id
    | _        => false).isSome

def materializeHolePlans [Monad m] [MonadLiftT MetaM m] [MonadError m]
    (holePlans : Array HolePlan) (subst : Array Expr)
    (prepTy : Expr → m Expr := pure) (prepMV : Expr → m Expr := pure) : m (Array Expr) := do
  if holePlans.isEmpty then
    return subst
  let tmpHoleIds : Std.HashSet MVarId :=
    holePlans.foldl (init := {}) fun s (_, tmpId, _, _) => s.insert tmpId
  let mut finalSubst := subst
  let mut tmpHoleMap : Std.HashMap MVarId Expr := {}
  for (idx, tmpId, userName?, rawHoleTy) in holePlans do
    let holeTy :=
      if rawHoleTy.hasExprMVar && !tmpHoleMap.isEmpty then
        rawHoleTy.replace fun
          | .mvar id => tmpHoleMap[id]?
          | _        => none
      else
        rawHoleTy
    if hasAnyMVarInSet holeTy tmpHoleIds then
      throwError "expr quotation failed to resolve hole type at runtime:{indentExpr holeTy}"
    let holeTy ← prepTy holeTy
    let holeMV ← liftM (m := MetaM) <|
      mkFreshExprMVar (some holeTy) .syntheticOpaque (userName?.getD .anonymous)
    tmpHoleMap := tmpHoleMap.insert tmpId holeMV
    finalSubst := finalSubst.setIfInBounds idx (← prepMV holeMV)
  return finalSubst

end ExprPattern.Internal

open ExprPattern.Internal

private def isTCGoalReady (baseDepth : Nat) (tcTy : Expr) : MetaM Bool := do
  let mctx ← getMCtx
  match ← inspectClassGoalInputs? tcTy with
  | none => return !hasTempMVar mctx baseDepth tcTy
  | some (inExprs, inLvls) =>
    return !(inExprs.any (hasTempMVar mctx baseDepth) ||
      inLvls.any (levelHasTempMVar mctx baseDepth))

private def synthTCWithError (tcMV : MVarId) (tcTy : Expr) : MetaM Unit := do
  let inst ←
    try
      synthInstance tcTy
    catch ex =>
      throwError "expr quotation failed to synthesize dependent instance{indentExpr tcTy}\n\
        {ex.toMessageData}"
  tcMV.assign inst

private def resolveReadyTCsGo {m : Type → Type} [Monad m] [MonadLiftT MetaM m]
    (synth : MVarId → Expr → m Unit) (baseDepth : Nat) (fuel : Nat)
    (pending : Array MVarId) : m (Array MVarId) := do
  if pending.isEmpty then
    return #[]
  match fuel with
  | 0 => return pending
  | fuel + 1 =>
    let mut stillPending : Array MVarId := #[]
    let mut progressed := false
    for tcMV in pending do
      if ← liftM (m := MetaM) tcMV.isAssignedOrDelayedAssigned then
        continue
      let tcTy ← liftM (m := MetaM) (instantiateMVars (← tcMV.getDecl).type)
      if ← liftM (m := MetaM) (isTCGoalReady baseDepth tcTy) then
        synth tcMV tcTy
        progressed := true
      else
        stillPending := stillPending.push tcMV
    if progressed && !stillPending.isEmpty then
      resolveReadyTCsGo synth baseDepth fuel stillPending
    else
      return stillPending

private structure TempVarCollector where
  mctx         : MetavarContext
  baseDepth    : Nat
  baseLCtxSize : Nat
  mvQueue      : Array MVarId := #[]
  mvSet?       : Option (Std.HashSet MVarId) := none
  visitedPtrs  : Array Sym.ExprPtr := #[]
  visitedSet?  : Option (Std.HashSet Sym.ExprPtr) := none
  reachableMVs : Array MVarId := #[]
  reachSet?    : Option (Std.HashSet MVarId) := none
  lmvs         : Array LMVarId := #[]
  lmvSet?      : Option (Std.HashSet LMVarId) := none

private def TempVarCollector.pushQueuedMV (s : TempVarCollector) (id : MVarId) :
    TempVarCollector :=
  match s.mvSet? with
  | some set =>
    if set.contains id then s
    else { s with mvQueue := s.mvQueue.push id, mvSet? := some (set.insert id) }
  | none =>
    if s.mvQueue.contains id then s
    else
      let mvQueue := s.mvQueue.push id
      if mvQueue.size >= 16 then
        let set := mvQueue.foldl (init := ({} : Std.HashSet MVarId)) fun acc x => acc.insert x
        { s with mvQueue, mvSet? := some set }
      else
        { s with mvQueue }

private def TempVarCollector.pushReachMV (s : TempVarCollector) (id : MVarId) :
    TempVarCollector :=
  match s.reachSet? with
  | some set =>
    if set.contains id then s
    else { s with reachableMVs := s.reachableMVs.push id, reachSet? := some (set.insert id) }
  | none =>
    if s.reachableMVs.contains id then s
    else
      let reachableMVs := s.reachableMVs.push id
      if reachableMVs.size >= 16 then
        let set := reachableMVs.foldl (init := ({} : Std.HashSet MVarId)) fun acc x =>
          acc.insert x
        { s with reachableMVs, reachSet? := some set }
      else
        { s with reachableMVs }

private def TempVarCollector.containsMV (s : TempVarCollector) (id : MVarId) : Bool :=
  match s.reachSet? with
  | some set => set.contains id
  | none     => s.reachableMVs.contains id

private def TempVarCollector.pushLMV (s : TempVarCollector) (id : LMVarId) :
    TempVarCollector :=
  match s.lmvSet? with
  | some set =>
    if set.contains id then s
    else { s with lmvs := s.lmvs.push id, lmvSet? := some (set.insert id) }
  | none =>
    if s.lmvs.contains id then s
    else
      let lmvs := s.lmvs.push id
      if lmvs.size >= 16 then
        let set := lmvs.foldl (init := ({} : Std.HashSet LMVarId)) fun acc x => acc.insert x
        { s with lmvs, lmvSet? := some set }
      else
        { s with lmvs }

private def TempVarCollector.containsLMV (s : TempVarCollector) (id : LMVarId) : Bool :=
  match s.lmvSet? with
  | some set => set.contains id
  | none     => s.lmvs.contains id

private partial def TempVarCollector.collectLevel (s : TempVarCollector) (l : Level) :
    TempVarCollector :=
  if !l.hasMVar then s
  else match l with
  | .succ l     => s.collectLevel l
  | .max l1 l2
  | .imax l1 l2 => (s.collectLevel l1).collectLevel l2
  | .mvar id    =>
    match s.mctx.lAssignment.find? id with
    | some l' => s.collectLevel l'
    | none    =>
      match s.mctx.findLevelDepth? id with
      | some d => if d > s.baseDepth then s.pushLMV id else s
      | none   => s
  | .zero | .param _ => s

private def TempVarCollector.markVisitedPtr (s : TempVarCollector) (e : Expr) :
    Bool × TempVarCollector :=
  let ptr : Sym.ExprPtr := { expr := e }
  match s.visitedSet? with
  | some set =>
    if set.contains ptr then (false, s)
    else (true, { s with visitedSet? := some (set.insert ptr) })
  | none =>
    if s.visitedPtrs.contains ptr then (false, s)
    else
      let visitedPtrs := s.visitedPtrs.push ptr
      if visitedPtrs.size >= 24 then
        let set := visitedPtrs.foldl (init := ({} : Std.HashSet Sym.ExprPtr))
          fun acc p => acc.insert p
        (true, { s with visitedPtrs, visitedSet? := some set })
      else
        (true, { s with visitedPtrs })

private partial def TempVarCollector.visitExpr (s : TempVarCollector) (e : Expr) :
    TempVarCollector :=
  if !e.hasExprMVar && !e.hasLevelMVar then
    s
  else match e with
  | .mvar id         => s.pushQueuedMV id
  | .sort l          => s.collectLevel l
  | .const _ ls      => ls.foldl (fun s l => s.collectLevel l) s
  | .bvar _ | .fvar _ | .lit _ => s
  | _ =>
    let (fresh, s) := s.markVisitedPtr e
    if !fresh then s
    else match e with
    | .app f a         => (s.visitExpr f).visitExpr a
    | .lam _ d b _
    | .forallE _ d b _ => (s.visitExpr d).visitExpr b
    | .letE _ t v b _  => ((s.visitExpr t).visitExpr v).visitExpr b
    | .mdata _ b
    | .proj _ _ b      => s.visitExpr b
    | _                => s

private def collectReachableTempVars (mctx : MetavarContext) (baseDepth baseLCtxSize : Nat)
    (e : Expr) : TempVarCollector := Id.run do
  let mut s : TempVarCollector := { mctx, baseDepth, baseLCtxSize }
  s := s.visitExpr e
  let mut idx := 0
  while h : idx < s.mvQueue.size do
    let id := s.mvQueue[idx]
    idx := idx + 1
    if let some decl := s.mctx.findDecl? id then
      if decl.depth > baseDepth then
        s := s.visitExpr decl.type
        if decl.lctx.decls.size > baseLCtxSize then
          for i in baseLCtxSize...decl.lctx.decls.size do
            if let some ldecl := decl.lctx.decls[i]! then
              s := s.visitExpr ldecl.type
              if let some lval := ldecl.value? then
                s := s.visitExpr lval
        if let some v := s.mctx.getExprAssignmentCore? id then
          s := s.visitExpr v
        else
          s := s.pushReachMV id
          if let some d := s.mctx.getDelayedMVarAssignmentCore? id then
            s := s.pushQueuedMV d.mvarIdPending
  return s

private def splitAffectingPreTCs (mctx : MetavarContext) (baseDepth baseLCtxSize : Nat)
    (expVars : TempVarCollector) (preTCs : Array MVarId) : Array MVarId × Array MVarId :=
  Id.run do
  if preTCs.isEmpty then
    return (#[], #[])
  let mut rel := expVars
  let mut remaining := preTCs.map fun tcMV =>
    let tcTy := match mctx.findDecl? tcMV with
      | some d => d.type
      | none   => default
    (tcMV, collectReachableTempVars mctx baseDepth baseLCtxSize tcTy)
  let mut affecting : Array MVarId := #[]
  let mut changed := true
  while changed && !remaining.isEmpty do
    changed := false
    let mut nextRemaining := Array.emptyWithCapacity remaining.size
    for (tcMV, tcVars) in remaining do
      let hitsM := !tcVars.reachableMVs.isEmpty && tcVars.reachableMVs.any rel.containsMV
      let hitsL := !tcVars.lmvs.isEmpty && tcVars.lmvs.any rel.containsLMV
      if hitsM || hitsL then
        affecting := affecting.push tcMV
        changed := true
        for m in tcVars.reachableMVs do
          rel := rel.pushReachMV m
        for lm in tcVars.lmvs do
          rel := rel.pushLMV lm
      else
        nextRemaining := nextRemaining.push (tcMV, tcVars)
    remaining := nextRemaining
  return (affecting, remaining.map (·.1))

private def filterActivePendingTCs (mctx : MetavarContext) (pendingTCs : Array MVarId) :
    Array MVarId := Id.run do
  let mut assignedCount := 0
  for tcMV in pendingTCs do
    if mctx.eAssignment.contains tcMV || mctx.dAssignment.contains tcMV then
      assignedCount := assignedCount + 1
  if assignedCount == 0 then
    return pendingTCs
  if assignedCount == pendingTCs.size then
    return #[]
  let mut out := Array.emptyWithCapacity (pendingTCs.size - assignedCount)
  for tcMV in pendingTCs do
    if !mctx.eAssignment.contains tcMV && !mctx.dAssignment.contains tcMV then
      out := out.push tcMV
  return out

private def anyTCGoalReady (mctx : MetavarContext) (baseDepth : Nat)
    (tcs : Array MVarId) : MetaM Bool := do
  for tcMV in tcs do
    let some decl := mctx.findDecl? tcMV | continue
    let tcTy ← instantiateMVars decl.type
    if ← isTCGoalReady baseDepth tcTy then
      return true
  return false

private def setMVarKinds (mvs : Array MVarId) (kind : MetavarKind) : MetaM Unit :=
  modifyMCtx fun mctx =>
    mvs.foldl (init := mctx) fun mctx mv => mctx.setMVarKind mv kind

private def setHolePlaceholderDepths (holes : Array HolePlaceholder) (depth : Nat) : MetaM Unit :=
  modifyMCtx fun mctx =>
    holes.foldl (init := mctx) fun mctx (_, mv, _) =>
      match mctx.findDecl? mv with
      | some decl => { mctx with decls := mctx.decls.insert mv { decl with depth } }
      | none      => mctx

private def trialDefEqWithDeferredTCs (curDepth baseDepth : Nat) (holes : Array HolePlaceholder)
    (deferredTCs : Array MVarId) (checkDefEq : Expr → Expr → MetaM Bool)
    (argTy expTy : Expr) : MetaM Bool := do
  let mctxSaved ← getMCtx
  try
    let ok ←
      try
        setMVarKinds deferredTCs .syntheticOpaque
        setHolePlaceholderDepths holes baseDepth
        withConfig (fun cfg => { cfg with assignSyntheticOpaque := true }) <|
          checkDefEq argTy expTy
      finally
        setMVarKinds deferredTCs .synthetic
        setHolePlaceholderDepths holes curDepth
    unless ok do
      setMCtx mctxSaved
    return ok
  catch ex =>
    setMCtx mctxSaved
    throw ex

namespace ExprPattern.Internal

def resolveReadyTCs {m : Type → Type} [Monad m] [MonadLiftT MetaM m]
    (synth : MVarId → Expr → m Unit) (baseDepth : Nat) (pending : Array MVarId) :
    m (Array MVarId) :=
  resolveReadyTCsGo synth baseDepth pending.size pending

def resolveRemainingTCs {m : Type → Type} [Monad m] [MonadLiftT MetaM m]
    (synth : MVarId → Expr → m Unit) (baseDepth : Nat) (pendingTCs : Array MVarId) :
    m Unit := do
  if pendingTCs.isEmpty then
    return ()
  let remaining ← resolveReadyTCs synth baseDepth pendingTCs
  for tcMV in remaining do
    if ← liftM (m := MetaM) tcMV.isAssignedOrDelayedAssigned then
      continue
    let tcTy ← liftM (m := MetaM) (instantiateMVars (← tcMV.getDecl).type)
    if hasTempMVar (← liftM (m := MetaM) getMCtx) baseDepth tcTy then
      liftM (m := MetaM) <| throwError
        "expr quotation failed to resolve dependent instance{indentExpr tcTy}"
    synth tcMV tcTy

def checkSpliceTypeWithPendingTCs {m : Type → Type} [Monad m] [MonadLiftT MetaM m]
    (synth : MVarId → Expr → m Unit) (baseDepth baseLCtxSize : Nat)
    (holes : Array HolePlaceholder) (pendingTCs : Array MVarId) (argTy expTy : Expr)
    (checkDefEq : Expr → Expr → MetaM Bool) : m (Bool × Array MVarId × Expr) := do
  if pendingTCs.isEmpty then
    let ok ← liftM (m := MetaM) (checkDefEq argTy expTy)
    return (ok, pendingTCs, expTy)
  let mctx ← liftM (m := MetaM) getMCtx
  let activeTCs := filterActivePendingTCs mctx pendingTCs
  if activeTCs.isEmpty then
    let ok ← liftM (m := MetaM) (checkDefEq argTy expTy)
    return (ok, #[], expTy)
  if !hasTempMVar mctx baseDepth expTy then
    let ok ← liftM (m := MetaM) (checkDefEq argTy expTy)
    return (ok, activeTCs, expTy)
  let expVars := collectReachableTempVars mctx baseDepth baseLCtxSize expTy
  let hasDeferred := activeTCs.any expVars.containsMV
  if !hasDeferred then
    unless ← liftM (m := MetaM) (anyTCGoalReady mctx baseDepth activeTCs) do
      let ok ← liftM (m := MetaM) (checkDefEq argTy expTy)
      return (ok, activeTCs, expTy)
  let (deferredTCs, otherTCs) := activeTCs.partition expVars.containsMV
  let (preSpliceTCs, untouchedTCs) :=
    splitAffectingPreTCs mctx baseDepth baseLCtxSize expVars otherTCs
  let mut remPreTCs := preSpliceTCs
  let mut expTy := expTy
  if !remPreTCs.isEmpty then
    remPreTCs ← resolveReadyTCs synth baseDepth remPreTCs
    expTy ← liftM (m := MetaM) (instantiateMVars expTy)
  if deferredTCs.isEmpty then
    let ok ← liftM (m := MetaM) (checkDefEq argTy expTy)
    return (ok, remPreTCs ++ untouchedTCs, expTy)
  let curDepth := (← liftM (m := MetaM) getMCtx).depth
  let ok ← liftM (m := MetaM) <|
    trialDefEqWithDeferredTCs curDepth baseDepth holes deferredTCs checkDefEq argTy expTy
  if ok then
    let mctxAfter ← liftM (m := MetaM) getMCtx
    let remPre := filterActivePendingTCs mctxAfter remPreTCs
    let remDef := filterActivePendingTCs mctxAfter deferredTCs
    let stillPending := remPre ++ remDef ++ untouchedTCs
    return (true, stillPending, expTy)
  let stillPending ← resolveReadyTCs synth baseDepth (remPreTCs ++ deferredTCs)
  expTy ← liftM (m := MetaM) (instantiateMVars expTy)
  let mctxMid ← liftM (m := MetaM) getMCtx
  let remDeferred := filterActivePendingTCs mctxMid deferredTCs
  let ok2 ← liftM (m := MetaM) <|
    if remDeferred.isEmpty then
      checkDefEq argTy expTy
    else
      trialDefEqWithDeferredTCs curDepth baseDepth holes remDeferred checkDefEq argTy expTy
  let mctxFinal ← liftM (m := MetaM) getMCtx
  let finalPending :=
    filterActivePendingTCs mctxFinal stillPending ++ untouchedTCs
  return (ok2, finalPending, expTy)

end ExprPattern.Internal

open ExprPattern.Internal

/--
Instantiate a compiled `ExprTemplate` under a pre-resolved relation `rel` and runtime splice
values `splices`. Preserves caller pointer sharing and caller metavariables inside `splices`,
allocates zero metavariables for splices, checks splice types with `isDefEq` under `rel` (running
under `withNewMCtxDepth` so caller metavariables with unknown types are left unassigned and fail
the check cleanly if a concrete or mismatched expected type is required), synthesizes
splice-dependent type-class instances, and materializes fresh `.syntheticOpaque` metavariables in
the caller's `MCtx` for `?h` / `?_` holes.
-/
def ExprTemplate.instantiateResolved (tmpl : ExprTemplate) (rel : ResolvedExprMatchRel)
    (splices : Array Expr) : MetaM Expr := do
  if rel.engine == .sym then
    throwError "expr quotation `/sym` requires `[MonadSym m]` (e.g. `SymM` or `GrindTacticM`)"
  validateResolvedRel rel
  let n := tmpl.varKinds.size
  if n == 0 && tmpl.levelParams.isEmpty then
    return tmpl.lam
  let baseDepth := (← getMCtx).depth
  let baseLCtxSize := (← getLCtx).decls.size
  let transparency := engineTransparency rel.engine
  let (body, substAfterSplices, holePlans) ← withNewMCtxDepth do
    let us ← tmpl.levelParams.mapM fun _ => mkFreshLevelMVar
    let lam :=
      if us.isEmpty then tmpl.lam
      else tmpl.lam.instantiateLevelParams tmpl.levelParams us
    let (doms, body) := peelTemplateLambdas n lam
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
        let val := splices.getD pos default
        if val.hasLooseBVars then
          throwError "expr quotation splice expression contains loose bound variable:\
            {indentExpr val}"
        let argTy ← instantiateMVars (← inferType val)
        let (ok, pendingTCs', expTy') ← checkSpliceTypeWithPendingTCs
          synthTCWithError baseDepth baseLCtxSize holePlaceholders pendingTCs argTy expTy
          fun aTy eTy =>
            withRelUnfoldRules rel <|
              withRelDefEqConfig transparency rel.flags rel.flags.zeta rel.flags.zeta <|
                isDefEq aTy eTy
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
    resolveRemainingTCs synthTCWithError baseDepth pendingTCs
    let mctx ← getMCtx
    for u in us do
      let u' ← instantiateLevelMVars u
      if levelHasTempMVar mctx baseDepth u' then
        throwError "expr quotation failed to resolve universe level at runtime"
    let body ← instantiateMVars body
    let mut finalSubst := subst
    for h : i in *...doms.size do
      match tmpl.varKinds.getD i .infer with
      | .infer | .tc =>
        let v ← instantiateMVars (finalSubst.getD i default)
        if hasTempMVar (← getMCtx) baseDepth v then
          throwError "expr quotation failed to resolve implicit argument at runtime:\
            {indentExpr v}"
        finalSubst := finalSubst.setIfInBounds i v
      | .splice _ | .hole _ => pure ()
    let holePlans ← validateTempHolePlans baseDepth holePlaceholders
    return (body, finalSubst, holePlans)
  let finalSubst ← materializeHolePlans holePlans substAfterSplices
  return body.instantiateRev finalSubst

/--
Instantiate a compiled `ExprTemplate`, resolving `rel` and optional runtime local `$x` items
through the runtime per-site cache keyed by `siteId`.
-/
def ExprTemplate.instantiateSite (siteId : Name) (tmpl : ExprTemplate) (rel : ExprMatchRel)
    (splices : Array Expr) (localItems : Array (Bool × Expr) := #[]) : MetaM Expr := do
  let r ← rel.resolve localItems siteId
  tmpl.instantiateResolved r splices

/-! ## Shared-relation `DiscrTree` match dispatch -/

namespace ExprPattern.Internal

def sortAndDedupCands (cands : Array Nat) : Array Nat := Id.run do
  if cands.size <= 1 then
    return cands
  let sorted := cands.qsort (· < ·)
  let mut out : Array Nat := Array.emptyWithCapacity sorted.size
  let mut prev? : Option Nat := none
  for c in sorted do
    if prev? != some c then
      out := out.push c
      prev? := some c
  return out

end ExprPattern.Internal

open ExprPattern.Internal

private def dispatchCandidatesGo {m : Type → Type v} [Monad m] {α : Type}
    (cands : Array Nat) (scrutinee : Expr)
    (tryAt : Array (Expr → (Unit → m α) → m α)) (onFail : Unit → m α) (i : Nat) : m α := do
  if h : i < cands.size then
    let idx := cands[i]
    if hIdx : idx < tryAt.size then
      tryAt[idx] scrutinee (fun _ => dispatchCandidatesGo cands scrutinee tryAt onFail (i + 1))
    else
      dispatchCandidatesGo cands scrutinee tryAt onFail (i + 1)
  else
    onFail ()
termination_by cands.size - i

namespace ExprPattern.Internal

def dispatchCandidates {m : Type → Type v} [Monad m] {α : Type}
    (cands : Array Nat) (scrutinee : Expr)
    (tryAt : Array (Expr → (Unit → m α) → m α)) (onFail : Unit → m α) : m α :=
  dispatchCandidatesGo cands scrutinee tryAt onFail 0

end ExprPattern.Internal

open ExprPattern.Internal

private def stripMDataAppRev (e : Expr) (revArgs : Array Expr := #[]) :
    Expr × Array Expr :=
  match e with
  | .mdata _ b => stripMDataAppRev b revArgs
  | .app f a   => stripMDataAppRev f (revArgs.push a)
  | _          => (e, revArgs)

private def collectMDataAppArgs (e : Expr) (args : List Expr := []) : Expr × List Expr :=
  match e with
  | .mdata _ b => collectMDataAppArgs b args
  | .app f a   => collectMDataAppArgs f (a :: args)
  | _          => (e, args)

private theorem collectMDataAppArgs_sizeOf (e : Expr) (acc : List Expr) :
    sizeOf (collectMDataAppArgs e acc).1 ≤ sizeOf e ∧
      (∀ a ∈ (collectMDataAppArgs e acc).2, a ∈ acc ∨ sizeOf a < sizeOf e) := by
  induction e generalizing acc with
  | mdata m b ih =>
    rcases ih acc with ⟨h1, h2⟩
    have hm : sizeOf b ≤ sizeOf (Expr.mdata m b) := by
      simp only [Expr.mdata.sizeOf_spec]; omega
    refine ⟨Nat.le_trans h1 hm, fun a ha => ?_⟩
    rcases h2 a ha with ha | ha
    · exact .inl ha
    · exact .inr (Nat.lt_of_lt_of_le ha hm)
  | app f a ihf _ =>
    rcases ihf (a :: acc) with ⟨h1, h2⟩
    have hf : sizeOf f ≤ sizeOf (Expr.app f a) := by
      simp only [Expr.app.sizeOf_spec]; omega
    have haLt : sizeOf a < sizeOf (Expr.app f a) := by
      simp only [Expr.app.sizeOf_spec]; omega
    refine ⟨Nat.le_trans h1 hf, fun x hx => ?_⟩
    rcases h2 x hx with hx | hx
    · simp only [List.mem_cons] at hx
      rcases hx with rfl | hx
      · exact .inr haLt
      · exact .inl hx
    · exact .inr (Nat.lt_of_lt_of_le hx hf)
  | _ => exact ⟨Nat.le_refl _, fun _ h => .inl h⟩

mutual
  private def structuralPatKeysGo (allowInst : Bool) (raw : Expr) (bvarDepth : Nat)
      (keys : Array DiscrTree.Key) : MetaM (Array DiscrTree.Key) := do
    if !raw.hasLooseBVars && !raw.hasExprMVar then
      if ← isProofSafe raw then
        return keys.push .star
    let res := collectMDataAppArgs raw
    let fn := res.1
    let args := res.2
    have hFnLe : sizeOf fn ≤ sizeOf raw := (collectMDataAppArgs_sizeOf raw []).1
    have hArgsLt : ∀ a ∈ args, sizeOf a < sizeOf raw := fun a ha => by
      rcases (collectMDataAppArgs_sizeOf raw []).2 a ha with h | h
      · contradiction
      · exact h
    match hFn : fn with
    | .bvar idx =>
      if idx >= bvarDepth then
        return keys.push .star
      else if args.isEmpty then
        return keys.push .other
      else
        return keys.push .star
    | .mvar _ =>
      return keys.push .star
    | .const declName _ =>
      let nargs := args.length
      let kAcc := keys.push (.const declName nargs)
      if allowInst && nargs > 0 then
        let finfo ← getFunInfo fn
        structuralPatKeysConstArgs allowInst raw bvarDepth finfo 0 args hArgsLt kAcc
      else
        structuralPatKeysArgs allowInst raw bvarDepth args hArgsLt kAcc
    | .fvar fv =>
      let kAcc := keys.push (.fvar fv args.length)
      structuralPatKeysArgs allowInst raw bvarDepth args hArgsLt kAcc
    | .proj s idx structExpr =>
      have hStructLt : sizeOf structExpr < sizeOf raw := by
        have h1 : sizeOf structExpr < sizeOf fn := by
          rw [hFn]; simp only [Expr.proj.sizeOf_spec]; omega
        exact Nat.lt_of_lt_of_le h1 hFnLe
      let kAcc := keys.push (.proj s idx args.length)
      let kAcc ← structuralPatKeysArgs allowInst raw bvarDepth args hArgsLt kAcc
      structuralPatKeysGo allowInst structExpr bvarDepth kAcc
    | .forallE _ d b _ =>
      if args.isEmpty then
        have hd : sizeOf d < sizeOf raw := by
          have h1 : sizeOf d < sizeOf fn := by
            rw [hFn]; simp only [Expr.forallE.sizeOf_spec]; omega
          exact Nat.lt_of_lt_of_le h1 hFnLe
        have hb : sizeOf b < sizeOf raw := by
          have h1 : sizeOf b < sizeOf fn := by
            rw [hFn]; simp only [Expr.forallE.sizeOf_spec]; omega
          exact Nat.lt_of_lt_of_le h1 hFnLe
        let kAcc := keys.push .arrow
        let kAcc ← structuralPatKeysGo allowInst d bvarDepth kAcc
        structuralPatKeysGo allowInst b (bvarDepth + 1) kAcc
      else
        return keys.push .star
    | .lit v =>
      if args.isEmpty then
        return keys.push (.lit v)
      else
        return keys.push .other
    | _ =>
      return keys.push .other
  termination_by (sizeOf raw, 1, 0)

  private def structuralPatKeysArgs (allowInst : Bool) (raw : Expr) (bvarDepth : Nat)
      (l : List Expr) (hl : ∀ a ∈ l, sizeOf a < sizeOf raw)
      (kAcc : Array DiscrTree.Key) : MetaM (Array DiscrTree.Key) := do
    match hL : l with
    | [] => return kAcc
    | a :: tl =>
      have ha : sizeOf a < sizeOf raw := hl a (hL ▸ List.mem_cons_self)
      have _ : sizeOf tl < sizeOf l := by subst hL; simp; omega
      let kAcc ← structuralPatKeysGo allowInst a bvarDepth kAcc
      structuralPatKeysArgs allowInst raw bvarDepth tl
        (fun x hx => hl x (hL ▸ List.mem_cons_of_mem a hx)) kAcc
  termination_by (sizeOf raw, 0, sizeOf l)

  private def structuralPatKeysConstArgs (allowInst : Bool) (raw : Expr) (bvarDepth : Nat)
      (finfo : FunInfo) (fwdIdx : Nat) (l : List Expr) (hl : ∀ a ∈ l, sizeOf a < sizeOf raw)
      (kAcc : Array DiscrTree.Key) : MetaM (Array DiscrTree.Key) := do
    match hL : l with
    | [] => return kAcc
    | a :: tl =>
      have ha : sizeOf a < sizeOf raw := hl a (hL ▸ List.mem_cons_self)
      have _ : sizeOf tl < sizeOf l := by subst hL; simp; omega
      let isInst := isInstDispatchArg finfo fwdIdx
      let kAcc ←
        if isInst then
          pure (kAcc.push .star)
        else
          structuralPatKeysGo allowInst a bvarDepth kAcc
      structuralPatKeysConstArgs allowInst raw bvarDepth finfo (fwdIdx + 1) tl
        (fun x hx => hl x (hL ▸ List.mem_cons_of_mem a hx)) kAcc
  termination_by (sizeOf raw, 0, sizeOf l)
end

private def structuralPatKeys (allowInst : Bool) (p : ExprPattern) :
    MetaM (Array DiscrTree.Key) :=
  withNewMCtxDepth do
    let us ← p.levelParams.mapM fun _ => mkFreshLevelMVar
    let lam := if us.isEmpty then p.lam else p.lam.instantiateLevelParams p.levelParams us
    let (_, body) := peelTemplateLambdas p.numVars lam
    structuralPatKeysGo allowInst body 0 (Array.mkEmpty 8)

private def resolveHeadMVarPure (mctx : MetavarContext) : Nat → Expr → Expr
  | 0, e => e
  | fuel + 1, e =>
    let cur := e.consumeMData
    if !cur.hasExprMVar then
      cur
    else
      let fn := cur.getAppFn.consumeMData
      match fn with
      | .mvar mv =>
        match mctx.getExprAssignmentCore? mv with
        | some fn' => resolveHeadMVarPure mctx fuel (mkAppN fn' cur.getAppArgs)
        | none     => cur
      | _ => cur

private def structuralScrutineeStep (mctx : MetavarContext) (fuel : Nat)
    (e : Expr) (todo : Array Expr) : Option (DiscrTree.Key × Array Expr) :=
  let e := resolveHeadMVarPure mctx fuel e
  let (fn, revArgs) := stripMDataAppRev e
  match fn with
  | .mvar _ => none
  | .const declName _ =>
    let todo := revArgs.foldl (init := todo) fun acc a => acc.push a
    some (.const declName revArgs.size, todo)
  | .fvar fv =>
    let todo := revArgs.foldl (init := todo) fun acc a => acc.push a
    some (.fvar fv revArgs.size, todo)
  | .proj s idx structExpr =>
    let todo := revArgs.foldl (init := todo.push structExpr) fun acc a => acc.push a
    some (.proj s idx revArgs.size, todo)
  | .forallE _ d b _ =>
    if revArgs.isEmpty then
      some (.arrow, todo.push b |>.push d)
    else
      none
  | .lit v =>
    if revArgs.isEmpty then some (.lit v, todo) else some (.other, todo)
  | .bvar _ =>
    if revArgs.isEmpty then some (.other, todo) else none
  | _ => some (.other, todo)

-- Terminates because every recursive call descends strictly into a sub-`Trie` of `t`.
private partial def structuralTrieGetMatch (mctx : MetavarContext) (fuel : Nat)
    (todo : Array Expr) (t : DiscrTree.Trie Nat) (acc : Array Nat) : Array Nat :=
  match t with
  | .chain key child =>
    if todo.isEmpty then
      acc
    else
      let e := todo.back!
      let todoPop := todo.pop
      if key == .star then
        structuralTrieGetMatch mctx fuel todoPop child acc
      else if let some (k, todoNext) := structuralScrutineeStep mctx fuel e todoPop then
        if key == k then structuralTrieGetMatch mctx fuel todoNext child acc else acc
      else
        acc
  | .node vs cs =>
    if todo.isEmpty then
      acc ++ vs
    else if h : cs.size = 0 then
      acc
    else
      let e := todo.back!
      let todoPop := todo.pop
      let acc :=
        if cs[0].1 == .star then
          structuralTrieGetMatch mctx fuel todoPop cs[0].2 acc
        else
          acc
      match structuralScrutineeStep mctx fuel e todoPop with
      | none => acc
      | some (.star, _) => acc
      | some (k, todoNext) =>
        match cs.binSearch (k, default) (fun a b => a.1 < b.1) with
        | none        => acc
        | some (_, c) => structuralTrieGetMatch mctx fuel todoNext c acc

private def structuralDiscrTreeGetMatch (mctx : MetavarContext) (fuel : Nat)
    (d : DiscrTree Nat) (e : Expr) : Array Nat :=
  let acc :=
    match d.root.find? .star with
    | some (.node vs _) => vs
    | _                 => #[]
  match structuralScrutineeStep mctx fuel e #[] with
  | none            => acc
  | some (.star, _) => acc
  | some (k, todo)  =>
    match d.root.find? k with
    | none   => acc
    | some c => structuralTrieGetMatch mctx fuel todo c acc

-- Terminates modulo `MetaM` recursion depth (`withReducible <| Meta.whnf`) on acyclic `Nat` terms.
private partial def reduceToNatLit? (e : Expr) : MetaM (Option Literal) :=
  withIncRecDepth do
    let e ← withReducible <| Meta.whnf e
    if !e.hasFVar && !e.hasExprMVar then
      if let some (.lit v@(.natVal _)) ← Meta.reduceNat? e then
        return some v
    match e.getAppFn with
    | .lit v@(.natVal _) => return if e.getAppNumArgs == 0 then some v else none
    | .const ``Nat.zero _ => return if e.getAppNumArgs == 0 then some (.natVal 0) else none
    | .const ``Nat.succ _ =>
      if e.getAppNumArgs == 1 then
        let some (.natVal n) ← reduceToNatLit? e.appArg! | return none
        return some (.natVal (n + 1))
      else
        return none
    | .const ``OfNat.ofNat _ =>
      if e.getAppNumArgs == 3 then reduceToNatLit? (e.getArg! 1) else return none
    | _ => return none

private def isNatOffsetExpr (e : Expr) : MetaM Bool := do
  if e.isAppOfArity ``Nat.succ 1 || e.isConstOf ``Nat.zero ||
      e.isAppOfArity ``OfNat.ofNat 3 then
    return true
  if e.isAppOfArity ``Nat.add 2 then
    return (← reduceToNatLit? e.appArg!).isSome
  if e.isAppOfArity ``Add.add 4 then
    if (← withReducible <| Meta.whnf (e.getArg! 0)).isConstOf ``Nat then
      return (← reduceToNatLit? e.appArg!).isSome
  if e.isAppOfArity ``HAdd.hAdd 6 then
    if (← withReducible <| Meta.whnf (e.getArg! 1)).isConstOf ``Nat then
      return (← reduceToNatLit? e.appArg!).isSome
  return false

private partial def isUnitLikeTypeSafe (fuel : Nat) (ty : Expr) : MetaM Bool := do
  match fuel with
  | 0 => return false
  | fuel + 1 =>
    try
      forallTelescopeReducing (whnfType := true) ty fun _ tType => do
        let hd := tType.getAppFn
        let .const structName us := hd | return false
        let some ctorVal := getNonRecStructureCtor? (← getEnv) structName | return false
        if tType.getAppNumArgs != ctorVal.numParams then
          return false
        let ctorType := ctorVal.type
          |>.instantiateLevelParams ctorVal.levelParams us
          |>.getForallBodyMaxDepth ctorVal.numParams
          |>.instantiateRev tType.getAppArgs
        forallTelescope ctorType fun xs _ =>
          xs.allM fun x => do
            let fTy ← instantiateMVarsIfNeeded (← x.fvarId!.getType)
            (try isProp fTy catch _ => pure false) <||> isUnitLikeTypeSafe fuel fTy
    catch _ =>
      return false

private def isUnitLikeExprSafe (e : Expr) : MetaM Bool := do
  let fn := e.getAppFn.consumeMData
  if fn.isMVar || fn.isLambda || fn.isForall || fn.isSort then
    return false
  let some ty ← inferTypeSafe e | return false
  isUnitLikeTypeSafe 16 ty

private def isStructureCtorApp (env : Environment) (e : Expr) : Bool :=
  match e.getAppFn with
  | .const c _ =>
    match env.find? c with
    | some (.ctorInfo cv) => isNonRecStructure env cv.induct
    | _ => false
  | _ => false

private def isTypeSafe (e : Expr) : MetaM Bool := do
  try Meta.isType e catch _ => return false

-- Terminates modulo `withIncRecDepth` on `withReducible <| Meta.whnf`.
private partial def annotateReduciblePatForIndex (flags : ResolvedExprMatchFlags) (isRoot : Bool)
    (e : Expr) : MetaM Expr :=
  withIncRecDepth do
    if DiscrTree.hasNoindexAnnotation e then
      return e
    let eW ← withReducible <| Meta.whnf e
    let env ← getEnv
    if !isRoot then
      if eW.isMVar then
        return e
      if ← isProofSafe eW then
        return DiscrTree.mkNoindexAnnotation e
      if eW.isAppOf ``String.ofList then
        return DiscrTree.mkNoindexAnnotation e
      if eW.isRawNatLit || (← reduceToNatLit? eW).isSome || (← isNatOffsetExpr eW) then
        return DiscrTree.mkNoindexAnnotation e
      if flags.eta then
        if eW.isLambda || isStructureCtorApp env eW || (← isUnitLikeExprSafe eW) then
          return DiscrTree.mkNoindexAnnotation e
    match eW with
    | .app _ _ =>
      let numArgs := eW.getAppNumArgs
      let fn := eW.getAppFn
      let finfo? ←
        if !fn.hasLooseBVars && !fn.hasExprMVar then
          try some <$> getFunInfoNArgs fn numArgs catch _ => pure none
        else
          pure none
      let rec goArgs (i : Nat) : Expr → MetaM Expr
        | .app pf pa => do
          let skip ← match finfo?.bind (·.paramInfo[i]?) with
            | some pi =>
              if pi.isInstance then
                pure true
              else if pi.isImplicit || pi.isStrictImplicit then
                not <$> isTypeSafe pa
              else
                pure false
            | none => pure false
          let pa' ← if skip then pure pa else annotateReduciblePatForIndex flags false pa
          return mkApp (← goArgs (i - 1) pf) pa'
        | fn =>
          if fn.isForall || fn.isProj || fn.isMData || fn.isLet then
            annotateReduciblePatForIndex flags false fn
          else
            pure fn
      if numArgs == 0 then
        return eW
      else
        goArgs (numArgs - 1) eW
    | .forallE n d b bi =>
      let d' ← annotateReduciblePatForIndex flags false d
      return .forallE n d' b bi
    | .proj s idx c =>
      let c' ← annotateReduciblePatForIndex flags false c
      return .proj s idx c'
    | .mdata m b =>
      let b' ← annotateReduciblePatForIndex flags isRoot b
      return .mdata m b'
    | _ => return eW

private def reduciblePatKeys (rel : ResolvedExprMatchRel) (p : ExprPattern) :
    MetaM (Array DiscrTree.Key) :=
  withRelDefEqConfig .reducible rel.flags true true <| withRelUnfoldRules rel <|
    withNewMCtxDepth do
      let us ← p.levelParams.mapM fun _ => mkFreshLevelMVar
      let lam := if us.isEmpty then p.lam else p.lam.instantiateLevelParams p.levelParams us
      let (doms, body) := peelTemplateLambdas p.numVars lam
      let mut subst : Array Expr := Array.emptyWithCapacity doms.size
      for h : i in *...doms.size do
        let dom := doms[i].instantiateRevRange 0 subst.size subst
        let mv ← mkFreshExprMVar (some dom) .natural
        subst := subst.push mv
      let patBody := body.instantiateRev subst
      let patWhnf ← withReducible <| Meta.whnf patBody
      let fnW := patWhnf.getAppFn
      if fnW.isLambda || fnW.isSort || fnW.isMVar || fnW.isLet || fnW.isBVar then
        return #[.star]
      if let some lit ← reduceToNatLit? patWhnf then
        return #[.lit lit]
      if ← isNatOffsetExpr patWhnf then
        return #[.star]
      if (← isProofSafe patWhnf) || patWhnf.isAppOf ``String.ofList then
        return #[.star]
      if rel.flags.eta then
        let env ← getEnv
        if isStructureCtorApp env patWhnf || (← isUnitLikeExprSafe patWhnf) then
          return #[.star]
      let patAnnotated ← annotateReduciblePatForIndex rel.flags true patBody
      if DiscrTree.hasNoindexAnnotation patAnnotated then
        return #[.star]
      let keys ← DiscrTree.mkPath patAnnotated
      if keys.getD 0 .star == .other then
        return #[.star]
      return keys

private partial def collectPatReducibilityDeps (env : Environment)
    (resolved : ResolvedExprMatchRel) (pats : Array ExprPattern) :
    Array (Name × ReducibilityStatus) := Id.run do
  let mut visited : NameSet := {}
  let mut out : Array (Name × ReducibilityStatus) := #[]
  let mut todo : List Name := []
  let rec pushExprConsts (e : Expr) (acc : List Name) : List Name :=
    match e with
    | .const c _      => c :: acc
    | .app f a        => pushExprConsts a (pushExprConsts f acc)
    | .lam _ d b _    => pushExprConsts b (pushExprConsts d acc)
    | .forallE _ d b _ => pushExprConsts b (pushExprConsts d acc)
    | .letE _ t v b _ => pushExprConsts b (pushExprConsts v (pushExprConsts t acc))
    | .mdata _ b      => pushExprConsts b acc
    | .proj s _ b     => s :: pushExprConsts b acc
    | _               => acc
  for pat in pats do
    todo := pushExprConsts pat.lam todo
  let mut fuel := 4096
  while !todo.isEmpty && fuel > 0 do
    fuel := fuel - 1
    match todo with
    | [] => break
    | c :: rest =>
      todo := rest
      if visited.contains c then
        continue
      visited := visited.insert c
      let status := getReducibilityStatusCore env c
      out := out.push (c, status)
      if shouldUnfoldConstByRules resolved.itemRulesRev c ||
          (status matches .reducible | .implicitReducible) then
        if let some (.defnInfo info) := env.find? c then
          todo := pushExprConsts info.value todo
  return out

private structure CachedMetaIndex where
  constGen      : Nat
  declLogSize   : Nat
  isExporting   : Bool
  mainModule    : Name
  relSpec       : ExprMatchRel
  resolved      : ResolvedExprMatchRel
  tree          : DiscrTree Nat
  hasNatLitKey  : Bool
  constStatuses : Array (Name × ReducibilityStatus) := #[]

private builtin_initialize metaIndexCacheRef : IO.Ref (Std.HashMap Name CachedMetaIndex) ←
  IO.mkRef {}

private def getOrMkMetaIndex (siteId : Name) (pats : Array ExprPattern) (rel : ExprMatchRel) :
    MetaM (ResolvedExprMatchRel × DiscrTree Nat × Bool) := do
  let env ← getEnv
  let constGen := env.constGen
  let declLogSize := env.declChangeLog.size
  let isExporting := env.isExporting
  let mainModule := env.mainModule
  let usesSimpSet := rel.items.any (·.isSimpSet)
  if !siteId.isAnonymous && !usesSimpSet then
    if let some entry := (← metaIndexCacheRef.get)[siteId]? then
      if entry.constGen == constGen && entry.declLogSize == declLogSize &&
          entry.isExporting == isExporting && entry.mainModule == mainModule &&
          entry.relSpec == rel &&
          (entry.resolved.engine != .reducible ||
            entry.constStatuses.all fun (c, st) => getReducibilityStatusCore env c == st) then
        return (entry.resolved, entry.tree, entry.hasNatLitKey)
  let resolved ← rel.resolveStaticCached (siteId ++ `_rel)
  let mut tree : DiscrTree Nat := {}
  let mut hasNatLitKey := false
  match resolved.engine with
  | .structural =>
    for h : i in *...pats.size do
      let keys ← structuralPatKeys resolved.flags.inst pats[i]
      tree := tree.insertKeyValue keys i
  | .reducible =>
    for h : i in *...pats.size do
      let keys ← reduciblePatKeys resolved pats[i]
      if keys.getD 0 .star matches .lit (.natVal _) then
        hasNatLitKey := true
      tree := tree.insertKeyValue keys i
  | _ =>
    throwError "internal error: unsupported engine `{repr resolved.engine}` for `DiscrTree` index"
  unless siteId.isAnonymous || usesSimpSet do
    let constStatuses :=
      if resolved.engine == .reducible then collectPatReducibilityDeps env resolved pats else #[]
    metaIndexCacheRef.modify fun m =>
      m.insert siteId {
        constGen, declLogSize, isExporting, mainModule,
        relSpec := rel, resolved, tree, hasNatLitKey, constStatuses
      }
  return (resolved, tree, hasNatLitKey)

private def matchIndexedCandidates (siteId : Name) (pats : Array ExprPattern)
    (rel : ExprMatchRel) (scrutinee : Expr) : MetaM (Array Nat) := do
  let (resolved, tree, hasNatLitKey) ← getOrMkMetaIndex siteId pats rel
  let cands ←
    match resolved.engine with
    | .structural =>
      let fuel := maxRecDepth.get (← getOptions)
      pure (sortAndDedupCands (structuralDiscrTreeGetMatch (← getMCtx) fuel tree scrutinee))
    | .reducible =>
      let res ← withRelUnfoldRules resolved do
        let mut res ← DiscrTree.getMatch tree scrutinee
        if hasNatLitKey then
          if let some lit ← reduceToNatLit? scrutinee then
            res := res ++ (← DiscrTree.getMatch tree (.lit lit))
        pure res
      pure (sortAndDedupCands res)
    | _ =>
      throwError
        "internal error: unsupported engine `{repr resolved.engine}` for `DiscrTree` index"
  if exprQuot.debug.checkIndex.get (← getOptions) then
    let scrut ← instantiateMVarsIfNeeded scrutinee
    withoutModifyingMCtx <| withOptions (fun o => o.setBool `trace.Meta.Match.expr false) do
      for h : i in *...pats.size do
        unless cands.contains i do
          if (← pats[i].matchResolved? resolved scrut).isSome then
            throwError "exprQuot.debug.checkIndex: indexed dispatch skipped matching arm #{i} \
              for:{indentExpr scrut}"
  if ← isTracingEnabledFor `Meta.Match.expr then
    let eng := if resolved.engine == .structural then "structural" else "reducible"
    let scrut ← instantiateMVarsIfNeeded scrutinee
    if cands.isEmpty then
      trace[Meta.Match.expr]
        "[indexed {eng}] 0 of {pats.size} candidate(s) matched index for:{indentExpr scrut}"
    else
      trace[Meta.Match.expr]
        "[indexed {eng}] trying candidates {cands.toList} of {pats.size} for:{indentExpr scrut}"
  return cands

/--
Indexed CPS match dispatcher for consecutive single-slot alternatives sharing a `.structural`
or `.reducible` relation `rel`. Builds and caches the `DiscrTree Nat` once per `siteId`, retrieves
candidate indices lazily (plus numeral fallback under `.reducible`), sorts & deduplicates them in
source order, and invokes `tryAt[idx]` only on candidate branches.
-/
@[inline]
def ExprPattern.matchIndexedOrElse {m : Type → Type v} [Monad m] [MonadLiftT MetaM m] {α : Type}
    (siteId : Name) (pats : Array ExprPattern) (rel : ExprMatchRel) (scrutinee : Expr)
    (tryAt : Array (Expr → (Unit → m α) → m α)) (onFail : Unit → m α) : m α := do
  let cands ← (matchIndexedCandidates siteId pats rel scrutinee : MetaM (Array Nat))
  dispatchCandidates cands scrutinee tryAt onFail

namespace ExprPattern.Internal

@[inline]
def levelEqNorm (patLvl actualLvl : Level) : Bool :=
  patLvl == actualLvl || patLvl == actualLvl.normalize

private def levelListEqNorm : List Level → List Level → Bool
  | [], [] => true
  | u :: us, v :: vs => levelEqNorm u v && levelListEqNorm us vs
  | _, _ => false

/--
Fallback structural equality for closed ground pattern subterms when fast pointer/hash equality
returns `false` (handles `Expr.mdata` anywhere in `e` and unnormalized `Level` expressions).
-/
def eqClosedGroundSlow : Expr → Expr → Bool
  | .mdata _ a, e => eqClosedGroundSlow a e
  | pe, .mdata _ b => eqClosedGroundSlow pe b
  | .bvar i₁, .bvar i₂ => i₁ == i₂
  | .app f₁ a₁, .app f₂ a₂ =>
    (f₁ == f₂ || eqClosedGroundSlow f₁ f₂) && (a₁ == a₂ || eqClosedGroundSlow a₁ a₂)
  | .const c₁ us₁, .const c₂ us₂ =>
    c₁ == c₂ && levelListEqNorm us₁ us₂
  | .sort u₁, .sort u₂ => levelEqNorm u₁ u₂
  | .lit l₁, .lit l₂ => l₁ == l₂
  | .proj s₁ i₁ b₁, .proj s₂ i₂ b₂ =>
    s₁ == s₂ && i₁ == i₂ && (b₁ == b₂ || eqClosedGroundSlow b₁ b₂)
  | .fvar f₁, .fvar f₂ => f₁ == f₂
  | _, _ => false
termination_by pe e => sizeOf pe + sizeOf e

/-- Fast syntactic equality for closed ground pattern nodes (modulo `mdata` and level norm). -/
@[inline]
def eqClosedGround (pe e : Expr) : Bool :=
  pe == e || eqClosedGroundSlow pe e

/-- Match `.const declName us` against a list of fixed levels (`some l`) or wildcards (`none`). -/
def matchConstLevelsMask (e : Expr) (declName : Name) (mask : List (Option Level)) : Bool :=
  match e with
  | .const c us => c == declName && go mask us
  | _ => false
where
  go : List (Option Level) → List Level → Bool
    | [], [] => true
    | none :: ms, _ :: us => go ms us
    | some l :: ms, u :: us => levelEqNorm l u && go ms us
    | _, _ => false

/-- Match `.proj structName idx _` directly on an `mdata`-stripped expression. -/
@[inline]
def isProjOf (e : Expr) (structName : Name) (idx : Nat) : Bool :=
  match e with
  | .proj s i _ => s == structName && i == idx
  | _ => false

/-- Return `true` when inline `/structural` matching must yield to the full `MetaM` engine. -/
@[inline]
def shouldUseSlowStructural (checkIdx : Bool) : MetaM Bool := do
  if ← isTracingEnabledFor `Meta.Match.expr then
    return true
  return checkIdx && exprQuot.debug.checkIndex.get (← getOptions)

end ExprPattern.Internal

/--
Guard deciding between inline zero-allocation `/structural` matching and the general runtime engine
(which handles `hasMVar`, `trace.Meta.Match.expr`, and `exprQuot.debug.checkIndex`).
-/
@[inline]
def ExprPattern.fastStructuralGuardOrElse {m : Type → Type v} [Monad m] [MonadLiftT MetaM m]
    {α : Type} (checkIdx : Bool) (scrutinee : Expr)
    (onFast : Unit → m α) (onSlow : Unit → m α) : m α := do
  if !scrutinee.hasMVar &&
      !(← (ExprPattern.Internal.shouldUseSlowStructural checkIdx : MetaM Bool)) then
    onFast ()
  else
    onSlow ()

/--
Compute the `DiscrTree` key path that `p` produces under non-`/sym` relation `rel`, or `none`
if `rel` is not index-sound or uses `/sym`. Intended for diagnostics such as `#check_pattern`.
-/
def ExprPattern.discTreeKeysMeta? (rel : ExprMatchRel) (p : ExprPattern) :
    MetaM (Option (Array DiscrTree.Key)) := do
  unless rel.isIndexSound do
    return none
  let resolved ← rel.resolveStatic
  match resolved.engine with
  | .structural => some <$> structuralPatKeys resolved.flags.inst p
  | .reducible  => some <$> reduciblePatKeys resolved p
  | _           => return none

/--
General entry point to instantiate a compiled `ExprTemplate` under relation `rel`, runtime
`splices`, and optional local `$x` definition overrides.
-/
def ExprTemplate.instantiate (tmpl : ExprTemplate) (rel : ExprMatchRel)
    (splices : Array Expr) (localItems : Array (Bool × Expr) := #[]) : MetaM Expr :=
  ExprTemplate.instantiateSite .anonymous tmpl rel splices localItems

/-! ## `ExprContext` and Goal/Expression Sources -/

private inductive ExprContextFrame where
  | appFn          (parent arg : Expr)
  | appArg         (parent fn : Expr)
  | lamType        (parent body : Expr)
  | lamBody        (parent dom : Expr)
  | lamBodyFVar    (parent dom fvar : Expr)
  | forallType     (parent body : Expr)
  | forallBody     (parent dom : Expr)
  | forallBodyFVar (parent dom fvar : Expr)
  | letType        (parent val body : Expr) (nondep : Bool)
  | letVal         (parent ty body : Expr) (nondep : Bool)
  | letBody        (parent ty val : Expr) (nondep : Bool)
  | letBodyFVar    (parent ty val fvar : Expr) (nondep : Bool)
  | mdata          (parent : Expr)
  | proj           (parent : Expr)
  deriving Inhabited

/--
Zipper-style context pointing from a subterm back to its enclosing root `Expr`.
Use `ExprContext.fill` to substitute a new expression into the hole while preserving unchanged
subtrees and pointer sharing (automatically re-abstracting binder free variables recorded by
`subtermsUnderBinders`), and `ExprContext.binders` to inspect enclosing opened binder fvars.
-/
structure ExprContext where
  private frames : List ExprContextFrame := []
  deriving Inhabited

/--
Return the enclosing binder free variables opened while descending to this subterm, ordered
outermost binder first (empty for closed `subterms` and `matchDiscriminants`).
-/
def ExprContext.binders (ctx : ExprContext) : Array Expr :=
  ctx.frames.foldr (init := #[]) fun frame acc =>
    match frame with
    | .lamBodyFVar _ _ fv | .forallBodyFVar _ _ fv | .letBodyFVar _ _ _ fv _ => acc.push fv
    | _ => acc

/--
Plug `replacement` into the hole represented by `ctx`, rebuilding to the root `Expr` and
re-abstracting any opened binder free variables in `.lam`/`.forallE`/`.letE` frames.
-/
def ExprContext.fill (ctx : ExprContext) (replacement : Expr) : Expr :=
  ctx.frames.foldl (init := replacement) fun cur frame =>
    match frame with
    | .appFn parent arg               => parent.updateApp! cur arg
    | .appArg parent fn               => parent.updateApp! fn cur
    | .lamType parent body            => parent.updateLambdaE! cur body
    | .lamBody parent dom             => parent.updateLambdaE! dom cur
    | .lamBodyFVar parent dom fv      => parent.updateLambdaE! dom (cur.abstract #[fv])
    | .forallType parent body         => parent.updateForallE! cur body
    | .forallBody parent dom          => parent.updateForallE! dom cur
    | .forallBodyFVar parent dom fv   => parent.updateForallE! dom (cur.abstract #[fv])
    | .letType parent val body nd     => parent.updateLet! cur val body nd
    | .letVal parent ty body nd       => parent.updateLet! ty cur body nd
    | .letBody parent ty val nd       => parent.updateLet! ty val cur nd
    | .letBodyFVar parent ty val fv nd =>
      parent.updateLet! ty val (cur.abstract #[fv]) nd
    | .mdata parent                   => parent.updateMData! cur
    | .proj parent                    => parent.updateProj! cur

private def isExcludedFVar (except : List Expr) (fv : FVarId) : Bool :=
  except.any fun ex =>
    match ex.consumeMData with
    | .fvar id => id == fv
    | _        => false

/--
Collect non-implementation-detail local hypotheses `(hyp, type)` from the local context.
Returns hypotheses oldest first by default (or newest first when `reverse := true`), excluding any
fvar listed in `except`, with metavariables instantiated in `type`.
-/
def localHypTypes (reverse : Bool := false) (except : List Expr := []) :
    MetaM (Array (Expr × Expr)) := do
  let lctx ← getLCtx
  let mut res : Array (Expr × Expr) := #[]
  for decl in lctx do
    unless decl.isImplementationDetail || isExcludedFVar except decl.fvarId do
      let ty ← instantiateMVarsIfNeeded decl.type
      res := res.push (mkFVar decl.fvarId, ty)
  return if reverse then res.reverse else res

/--
Collect non-implementation-detail local declarations `(hyp, type, val?)` from the local context.
Returns declarations oldest first by default (or newest first when `reverse := true`), excluding
any fvar listed in `except`. Only dependent `let`-declarations yield `some val` (`have`
declarations yield `none`), with metavariables instantiated in `type` and `val`.
-/
def localHypDecls (reverse : Bool := false) (except : List Expr := []) :
    MetaM (Array (Expr × Expr × Option Expr)) := do
  let lctx ← getLCtx
  let mut res : Array (Expr × Expr × Option Expr) := #[]
  for decl in lctx do
    unless decl.isImplementationDetail || isExcludedFVar except decl.fvarId do
      let ty ← instantiateMVarsIfNeeded decl.type
      let val? ← match decl.value? (allowNondep := false) with
        | some v => some <$> instantiateMVarsIfNeeded v
        | none   => pure none
      res := res.push (mkFVar decl.fvarId, ty, val?)
  return if reverse then res.reverse else res

/--
Run `f h ty` on each non-implementation-detail hypothesis `(h, ty)` in `mvarId`'s local context
and return the first succeeding result `some r`.

Hypotheses are tried newest first by default (`reverse := true`, matching Rocq `match goal`); pass
`reverse := false` for oldest first. Free variables listed in `except` are skipped, and assigned
metavariables in `ty` are instantiated before `f` is called. Each failing attempt backtracks state
via `observing?` before trying the next hypothesis, returning `none` if none succeed. In `TacticM`,
prefer `Lean.Elab.Tactic.firstHyp?`, which also disables error recovery and rolls back info trees.
-/
def _root_.Lean.MVarId.firstHyp? {ε : Type} [Monad m] [MonadControlT MetaM m]
    [MonadLiftT MetaM m] [MonadBacktrack s m] [MonadExcept ε m]
    (mvarId : MVarId) (f : Expr → Expr → m α)
    (reverse : Bool := true) (except : List Expr := []) : m (Option α) :=
  mvarId.withContext do
    let hyps ← (localHypTypes (reverse := reverse) (except := except) :
      MetaM (Array (Expr × Expr)))
    for (h, ty) in hyps do
      if let some r ← observing? (f h ty) then
        return some r
    return none

/--
Like `MVarId.firstHyp?`, but throws `"firstHyp: no hypothesis matched"` if no hypothesis succeeds.
-/
def _root_.Lean.MVarId.firstHyp {ε : Type} [Monad m] [MonadControlT MetaM m]
    [MonadLiftT MetaM m] [MonadBacktrack s m] [MonadExcept ε m] [MonadError m]
    (mvarId : MVarId) (f : Expr → Expr → m α)
    (reverse : Bool := true) (except : List Expr := []) : m α := do
  match ← mvarId.firstHyp? f (reverse := reverse) (except := except) with
  | some a => return a
  | none   => throwError "firstHyp: no hypothesis matched"

/--
Lazy stream of closed subterms of an `Expr`, each paired with its `ExprContext`.
Created by `subterms`. Supports `for (sub, ctx) in subterms e do ...` with early exit (`break`),
plus `.toArray` and `.toList`.
-/
structure Subterms where
  /-- Root expression to inspect. -/
  expr               : Expr
  /--
  Deduplicate structurally equal subterms via `ExprSet` (merging equal subtrees even when not
  pointer-shared, yielding only the first occurrence's `ExprContext`). Set `false` to emit every
  occurrence with its own `ExprContext`.
  -/
  dedup              : Bool := true
  /--
  Emit intermediate curried `.app` prefixes (`f a₁`, …) inside multi-argument applications;
  when `false` (default), emits full applications and visits head/arguments directly.
  -/
  includeAppPrefixes : Bool := false

/--
Construct a lazy outermost-first stream of closed subterms of `e`, paired with `ExprContext`.
With `dedup := true` (default), structurally equal subterms are deduplicated via `ExprSet` (yielding
only the first occurrence's `ExprContext`); with `dedup := false`, every occurrence is emitted with
its own `ExprContext`. With `includeAppPrefixes := false` (default), intermediate curried
application prefixes are omitted while head and argument `ExprContext` chains stay complete.

Note: `subterms` traverses `e` syntactically without `instantiateMVars` (`Tactic.getMainTarget`
and `localHypTypes` already instantiate mvars; raw `MVarId.getType` callers should do so first).
-/
def subterms (e : Expr) (dedup : Bool := true) (includeAppPrefixes : Bool := false) : Subterms :=
  { expr := e, dedup, includeAppPrefixes }

-- Structural traversal on `cur : Expr`; `partial` avoids `WellFounded.fix`/`brecOn`
-- LCNF and code-generation overhead on every polymorphic `[Monad m]` instantiation.
mutual
  @[nospecialize]
  private partial def subtermsVisitSpine [Monad m] (dedup : Bool)
      (f : Expr × ExprContext → β → m (ForInStep β))
      (p : Expr) (upper : List ExprContextFrame) (acc : β) :
      StateT ExprSet m (ForInStep β) :=
    match p with
    | .app pf pa => do
      match ← subtermsVisitSpine dedup f pf (.appFn p pa :: upper) acc with
      | .done b  => return .done b
      | .yield b => subtermsGo dedup false f pa (.appArg p pf :: upper) b
    | fn => subtermsGo dedup false f fn upper acc

  @[nospecialize]
  private partial def subtermsStepChildren [Monad m] (dedup includeAppPrefixes : Bool)
      (f : Expr × ExprContext → β → m (ForInStep β))
      (cur : Expr) (frames : List ExprContextFrame) (curAcc : β) :
      StateT ExprSet m (ForInStep β) :=
    match cur with
    | .app f0 a => do
      if !includeAppPrefixes then
        match ← subtermsVisitSpine dedup f f0 (.appFn cur a :: frames) curAcc with
        | .done b  => return .done b
        | .yield b => subtermsGo dedup includeAppPrefixes f a (.appArg cur f0 :: frames) b
      else
        match ← subtermsGo dedup includeAppPrefixes f f0 (.appFn cur a :: frames) curAcc with
        | .done b  => return .done b
        | .yield b => subtermsGo dedup includeAppPrefixes f a (.appArg cur f0 :: frames) b
    | .lam _ t b _ => do
      match ← subtermsGo dedup includeAppPrefixes f t (.lamType cur b :: frames) curAcc with
      | .done b'  => return .done b'
      | .yield b' => subtermsGo dedup includeAppPrefixes f b (.lamBody cur t :: frames) b'
    | .forallE _ t b _ => do
      match ← subtermsGo dedup includeAppPrefixes f t (.forallType cur b :: frames) curAcc with
      | .done b'  => return .done b'
      | .yield b' => subtermsGo dedup includeAppPrefixes f b (.forallBody cur t :: frames) b'
    | .letE _ t v b nd => do
      match ← subtermsGo dedup includeAppPrefixes f t (.letType cur v b nd :: frames) curAcc with
      | .done b'  => return .done b'
      | .yield b' =>
        match ← subtermsGo dedup includeAppPrefixes f v (.letVal cur t b nd :: frames) b' with
        | .done b''  => return .done b''
        | .yield b'' => subtermsGo dedup includeAppPrefixes f b (.letBody cur t v nd :: frames) b''
    | .proj _ _ b =>
      subtermsGo dedup includeAppPrefixes f b (.proj cur :: frames) curAcc
    | _ => pure (.yield curAcc)

  @[nospecialize]
  private partial def subtermsGo [Monad m] (dedup includeAppPrefixes : Bool)
      (f : Expr × ExprContext → β → m (ForInStep β))
      (cur : Expr) (frames : List ExprContextFrame) (acc : β) :
      StateT ExprSet m (ForInStep β) :=
    match cur with
    | .mdata _ b => subtermsGo dedup includeAppPrefixes f b (.mdata cur :: frames) acc
    | cur => do
      if dedup then
        if (← get).contains cur then
          return .yield acc
        modify (·.insert cur)
      let mut curAcc := acc
      if !cur.hasLooseBVars then
        match ← liftM (f (cur, { frames }) curAcc) with
        | .done b  => return .done b
        | .yield b => curAcc := b
      subtermsStepChildren dedup includeAppPrefixes f cur frames curAcc
end

/-- Iterate over closed `(subterm, ctx)` pairs in `s`. -/
@[nospecialize]
def Subterms.forIn [Monad m] (s : Subterms) (init : β)
    (f : Expr × ExprContext → β → m (ForInStep β)) : m β := do
  let (step, _) ← (subtermsGo s.dedup s.includeAppPrefixes f s.expr [] init).run ({} : ExprSet)
  return match step with
    | .done b | .yield b => b

@[nospecialize]
instance instForInSubtermsProdExprExprContext [Monad m] :
    ForIn m Subterms (Expr × ExprContext) where
  forIn := Subterms.forIn

/-- Collect all yielded `(subterm, ctx)` pairs from `s` into an `Array`. -/
def Subterms.toArray (s : Subterms) : Array (Expr × ExprContext) := Id.run do
  let mut acc : Array (Expr × ExprContext) := #[]
  for item in s do
    acc := acc.push item
  return acc

/-- Collect all yielded `(subterm, ctx)` pairs from `s` into a `List`. -/
def Subterms.toList (s : Subterms) : List (Expr × ExprContext) :=
  s.toArray.toList

/--
Lazy `MetaM`-lifted stream of subterms of an `Expr`, opening `.lam`, `.forallE`, and `.letE`
binders with `withLocalDecl` / `withLetDecl` as it descends and pairing each subterm with its
`ExprContext` (whose `ctx.binders` lists the opened binder free variables outer-to-inner and whose
`ctx.fill` automatically re-abstracts them). Created by `subtermsUnderBinders`.
-/
structure SubtermsUnderBinders where
  /-- Root expression to inspect. -/
  expr               : Expr
  /--
  Deduplicate structurally equal subterms via `ExprSet` (yielding only the first occurrence's
  `ExprContext`). Set `false` to emit every occurrence with its own `ExprContext`.
  -/
  dedup              : Bool := true
  /--
  Emit intermediate curried `.app` prefixes (`f a₁`, …) inside multi-argument applications;
  when `false` (default), emits full applications and visits head/arguments directly.
  -/
  includeAppPrefixes : Bool := false

/--
Construct a lazy outermost-first stream of subterms of `e` (including subterms under binders),
opening each enclosing `.lam`/`.forallE`/`.letE` binder into the active `LocalContext` while its
body is visited. Inside each `for (sub, ctx) in subtermsUnderBinders e do` iteration, `ctx.binders`
holds the live enclosing binder free variables (outer-to-inner) and `ctx.fill repl` re-abstracts
them automatically when rebuilding the enclosing expression.
-/
def subtermsUnderBinders (e : Expr) (dedup : Bool := true)
    (includeAppPrefixes : Bool := false) : SubtermsUnderBinders :=
  { expr := e, dedup, includeAppPrefixes }

-- Structural traversal on `cur : Expr`; `partial` avoids `WellFounded.fix`/`brecOn`
-- LCNF and code-generation overhead on every polymorphic `[Monad m]` instantiation.
mutual
  @[nospecialize]
  private partial def subtermsUnderBindersVisitSpine [Monad m] [MonadControlT MetaM m]
      [MonadLiftT MetaM m] (dedup : Bool) (visRef : IO.Ref ExprSet)
      (f : Expr × ExprContext → β → m (ForInStep β))
      (p : Expr) (upper : List ExprContextFrame) (acc : β) : m (ForInStep β) :=
    match p with
    | .app pf pa => do
      match ← subtermsUnderBindersVisitSpine dedup visRef f pf (.appFn p pa :: upper) acc with
      | .done b  => return .done b
      | .yield b => subtermsUnderBindersGo dedup false visRef f pa (.appArg p pf :: upper) b
    | fn => subtermsUnderBindersGo dedup false visRef f fn upper acc

  @[nospecialize]
  private partial def subtermsUnderBindersStepChildren [Monad m] [MonadControlT MetaM m]
      [MonadLiftT MetaM m] (dedup includeAppPrefixes : Bool) (visRef : IO.Ref ExprSet)
      (f : Expr × ExprContext → β → m (ForInStep β))
      (cur : Expr) (frames : List ExprContextFrame) (curAcc : β) : m (ForInStep β) :=
    match cur with
    | .app f0 a => do
      if !includeAppPrefixes then
        match ← subtermsUnderBindersVisitSpine dedup visRef f f0
            (.appFn cur a :: frames) curAcc with
        | .done b  => return .done b
        | .yield b => subtermsUnderBindersGo dedup false visRef f a (.appArg cur f0 :: frames) b
      else
        match ← subtermsUnderBindersGo dedup true visRef f f0 (.appFn cur a :: frames) curAcc with
        | .done b  => return .done b
        | .yield b => subtermsUnderBindersGo dedup true visRef f a (.appArg cur f0 :: frames) b
    | .lam n t b bi => do
      match ← subtermsUnderBindersGo dedup includeAppPrefixes visRef f t
          (.lamType cur b :: frames) curAcc with
      | .done b'  => return .done b'
      | .yield b' =>
        withLocalDecl n bi t fun fv =>
          subtermsUnderBindersGo dedup includeAppPrefixes visRef f (b.instantiate1 fv)
            (.lamBodyFVar cur t fv :: frames) b'
    | .forallE n t b bi => do
      match ← subtermsUnderBindersGo dedup includeAppPrefixes visRef f t
          (.forallType cur b :: frames) curAcc with
      | .done b'  => return .done b'
      | .yield b' =>
        withLocalDecl n bi t fun fv =>
          subtermsUnderBindersGo dedup includeAppPrefixes visRef f (b.instantiate1 fv)
            (.forallBodyFVar cur t fv :: frames) b'
    | .letE n t v b nd => do
      match ← subtermsUnderBindersGo dedup includeAppPrefixes visRef f t
          (.letType cur v b nd :: frames) curAcc with
      | .done b'  => return .done b'
      | .yield b' =>
        match ← subtermsUnderBindersGo dedup includeAppPrefixes visRef f v
            (.letVal cur t b nd :: frames) b' with
        | .done b''  => return .done b''
        | .yield b'' =>
          withLetDecl n t v (nondep := nd) fun fv =>
            subtermsUnderBindersGo dedup includeAppPrefixes visRef f (b.instantiate1 fv)
              (.letBodyFVar cur t v fv nd :: frames) b''
    | .proj _ _ b =>
      subtermsUnderBindersGo dedup includeAppPrefixes visRef f b (.proj cur :: frames) curAcc
    | _ => pure (.yield curAcc)

  @[nospecialize]
  private partial def subtermsUnderBindersGo [Monad m] [MonadControlT MetaM m]
      [MonadLiftT MetaM m] (dedup includeAppPrefixes : Bool) (visRef : IO.Ref ExprSet)
      (f : Expr × ExprContext → β → m (ForInStep β))
      (cur : Expr) (frames : List ExprContextFrame) (acc : β) : m (ForInStep β) :=
    match cur with
    | .mdata _ b =>
      subtermsUnderBindersGo dedup includeAppPrefixes visRef f b (.mdata cur :: frames) acc
    | cur => do
      if dedup then
        if (← liftM (visRef.get : MetaM ExprSet)).contains cur then
          return .yield acc
        liftM (visRef.modify (·.insert cur) : MetaM Unit)
      let mut curAcc := acc
      if !cur.hasLooseBVars then
        match ← f (cur, { frames }) curAcc with
        | .done b  => return .done b
        | .yield b => curAcc := b
      subtermsUnderBindersStepChildren dedup includeAppPrefixes visRef f cur frames curAcc
end

/-- Iterate over `(subterm, ctx)` pairs in `s` within opened binder `LocalContext`s. -/
@[nospecialize]
def SubtermsUnderBinders.forIn [Monad m] [MonadControlT MetaM m] [MonadLiftT MetaM m]
    (s : SubtermsUnderBinders) (init : β)
    (f : Expr × ExprContext → β → m (ForInStep β)) : m β := do
  let visRef ← liftM (IO.mkRef ({} : ExprSet) : MetaM (IO.Ref ExprSet))
  let step ← subtermsUnderBindersGo s.dedup s.includeAppPrefixes visRef f s.expr [] init
  return match step with
    | .done b | .yield b => b

@[nospecialize]
instance instForInSubtermsUnderBindersProdExprExprContext [Monad m] [MonadControlT MetaM m]
    [MonadLiftT MetaM m] : ForIn m SubtermsUnderBinders (Expr × ExprContext) where
  forIn := SubtermsUnderBinders.forIn

/--
Collect all yielded `(subterm, ctx)` pairs from `s` into an `Array`.
Note: prefer `for ... in subtermsUnderBinders e do` when inspecting `sub` with `MetaM` operations,
since `.toArray` exits the `withLocalDecl` scopes that bind `ctx.binders`.
-/
def SubtermsUnderBinders.toArray (s : SubtermsUnderBinders) :
    MetaM (Array (Expr × ExprContext)) := do
  let mut acc : Array (Expr × ExprContext) := #[]
  for item in s do
    acc := acc.push item
  return acc

/-- Collect all yielded `(subterm, ctx)` pairs from `s` into a `List`. -/
def SubtermsUnderBinders.toList (s : SubtermsUnderBinders) :
    MetaM (List (Expr × ExprContext)) :=
  (·.toList) <$> s.toArray

/--
Lazy stream of closed `match` (and optionally `casesOn`) discriminants occurring in an `Expr`,
each paired with its `ExprContext`. Created by `matchDiscriminants`. Supports `for` iteration with
early exit (`break`) in any monad lifting `MetaM`, plus `.toArray` and `.toList`.
-/
structure MatchDiscriminants where
  /-- Root expression to traverse. -/
  expr        : Expr
  /-- Also recognize `casesOn` recursor applications in addition to compiled `match` expressions. -/
  alsoCasesOn : Bool := false
  /--
  Deduplicate visited subtrees and structurally equal discriminants via `ExprSet` (merging
  structurally equal subtrees even when not pointer-shared, yielding only the first occurrence's
  `ExprContext`). Set `false` to visit and yield every occurrence with its own `ExprContext`.
  -/
  dedup       : Bool := true

/--
Construct a lazy outermost-first stream of closed `match` (and optionally `casesOn`) discriminants
occurring in `e`, paired with `ExprContext`.
With `dedup := true` (default), structurally equal subtrees and discriminants are deduplicated via
`ExprSet` (yielding only the first occurrence's `ExprContext`); with `dedup := false`, every
occurrence is emitted with its own `ExprContext`.
-/
def matchDiscriminants (e : Expr) (alsoCasesOn : Bool := false) (dedup : Bool := true) :
    MatchDiscriminants :=
  { expr := e, alsoCasesOn, dedup }

private def collectAppSpineArgs (n : Nat) (cur : Expr) (upper : List ExprContextFrame) :
    List (Expr × List ExprContextFrame) :=
  go n cur upper []
where
  go : Nat → Expr → List ExprContextFrame → List (Expr × List ExprContextFrame) →
      List (Expr × List ExprContextFrame)
    | k + 1, p@(.app pf pa), upper, acc =>
      go k pf (.appFn p pa :: upper) ((pa, .appArg p pf :: upper) :: acc)
    | _, _, _, acc => acc

-- Structural traversal on `cur : Expr`; `partial` avoids `WellFounded.fix`/`brecOn`
-- LCNF and code-generation overhead on every polymorphic `[Monad m]` instantiation.
mutual
  @[nospecialize]
  private partial def matchDiscriminantsGoArgs [Monad m] [MonadLiftT MetaM m] {β : Type}
      (alsoCasesOn dedup : Bool) (f : Expr × ExprContext → β → m (ForInStep β))
      (entries : List (Expr × List ExprContextFrame))
      (acc : β) : StateT (ExprSet × ExprSet) m (ForInStep β) := do
    match entries with
    | [] => return .yield acc
    | (arg, argFrames) :: rest =>
      match ← matchDiscriminantsGo alsoCasesOn dedup f arg argFrames acc with
      | .done b  => return .done b
      | .yield b => matchDiscriminantsGoArgs alsoCasesOn dedup f rest b

  @[nospecialize]
  private partial def matchDiscriminantsStepChildren [Monad m] [MonadLiftT MetaM m] {β : Type}
      (alsoCasesOn dedup : Bool) (f : Expr × ExprContext → β → m (ForInStep β))
      (cur : Expr) (frames : List ExprContextFrame) (acc : β) :
      StateT (ExprSet × ExprSet) m (ForInStep β) :=
    match cur with
    | .app f0 a => do
      match ← matchDiscriminantsGo alsoCasesOn dedup f f0 (.appFn cur a :: frames) acc with
      | .done b  => return .done b
      | .yield b => matchDiscriminantsGo alsoCasesOn dedup f a (.appArg cur f0 :: frames) b
    | .lam _ t b _ => do
      match ← matchDiscriminantsGo alsoCasesOn dedup f t (.lamType cur b :: frames) acc with
      | .done b'  => return .done b'
      | .yield b' => matchDiscriminantsGo alsoCasesOn dedup f b (.lamBody cur t :: frames) b'
    | .forallE _ t b _ => do
      match ← matchDiscriminantsGo alsoCasesOn dedup f t (.forallType cur b :: frames) acc with
      | .done b'  => return .done b'
      | .yield b' => matchDiscriminantsGo alsoCasesOn dedup f b (.forallBody cur t :: frames) b'
    | .letE _ t v b nd => do
      match ← matchDiscriminantsGo alsoCasesOn dedup f t (.letType cur v b nd :: frames) acc with
      | .done b'  => return .done b'
      | .yield b' =>
        match ← matchDiscriminantsGo alsoCasesOn dedup f v (.letVal cur t b nd :: frames) b' with
        | .done b''  => return .done b''
        | .yield b'' =>
          matchDiscriminantsGo alsoCasesOn dedup f b (.letBody cur t v nd :: frames) b''
    | .proj _ _ b =>
      matchDiscriminantsGo alsoCasesOn dedup f b (.proj cur :: frames) acc
    | _ => pure (.yield acc)

  @[nospecialize]
  private partial def matchDiscriminantsGo [Monad m] [MonadLiftT MetaM m] {β : Type}
      (alsoCasesOn dedup : Bool) (f : Expr × ExprContext → β → m (ForInStep β))
      (cur : Expr) (frames : List ExprContextFrame) (acc : β) :
      StateT (ExprSet × ExprSet) m (ForInStep β) :=
    match cur with
    | .mdata _ b =>
      matchDiscriminantsGo alsoCasesOn dedup f b (.mdata cur :: frames) acc
    | cur => do
      if dedup then
        if (← get).1.contains cur then
          return .yield acc
        modify fun (vis, em) => (vis.insert cur, em)
      if cur.isApp && cur.getAppFn.isConst then
        if let some app ← liftM (matchMatcherApp? cur alsoCasesOn : MetaM (Option MatcherApp)) then
          let argEntries := collectAppSpineArgs cur.getAppNumArgs cur frames
          let discrStart := app.params.size + 1
          let discrEnd := discrStart + app.discrs.size
          let mut curAcc := acc
          let mut idx := 0
          for (arg, argFrames) in argEntries do
            if idx >= discrStart && idx < discrEnd && !arg.hasLooseBVars then
              let shouldEmit ←
                if dedup then
                  let em := (← get).2
                  if em.contains arg then
                    pure false
                  else
                    modify fun (vis, em) => (vis, em.insert arg)
                    pure true
                else
                  pure true
              if shouldEmit then
                match ← liftM (f (arg, { frames := argFrames }) curAcc) with
                | .done b  => return .done b
                | .yield b => curAcc := b
            idx := idx + 1
          return ← matchDiscriminantsGoArgs alsoCasesOn dedup f argEntries curAcc
      matchDiscriminantsStepChildren alsoCasesOn dedup f cur frames acc
end

/-- Iterate over closed `(discr, ctx)` pairs in `d`. -/
@[nospecialize]
def MatchDiscriminants.forIn [Monad m] [MonadLiftT MetaM m] (d : MatchDiscriminants) (init : β)
    (f : Expr × ExprContext → β → m (ForInStep β)) : m β := do
  let e ← (instantiateMVarsIfNeeded d.expr : MetaM Expr)
  let (step, _) ← (matchDiscriminantsGo d.alsoCasesOn d.dedup f e [] init).run
    (({} : ExprSet), ({} : ExprSet))
  return match step with
    | .done b | .yield b => b

@[nospecialize]
instance instForInMatchDiscriminantsProdExprExprContext [Monad m] [MonadLiftT MetaM m] :
    ForIn m MatchDiscriminants (Expr × ExprContext) where
  forIn := MatchDiscriminants.forIn

/-- Collect all yielded `(discr, ctx)` pairs from `d` into an `Array`. -/
def MatchDiscriminants.toArray (d : MatchDiscriminants) : MetaM (Array (Expr × ExprContext)) := do
  let mut acc : Array (Expr × ExprContext) := #[]
  for item in d do
    acc := acc.push item
  return acc

/-- Collect all yielded `(discr, ctx)` pairs from `d` into a `List`. -/
def MatchDiscriminants.toList (d : MatchDiscriminants) : MetaM (List (Expr × ExprContext)) :=
  (·.toList) <$> d.toArray

end Lean.Meta
