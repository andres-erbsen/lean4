# Architectural Decision Records: `expr` Quotations

This document records the internal module map and architectural decisions behind Lean's
quasi-quoted `Expr` pattern and term-building subsystem (`` `(expr[rel]| ...) ``). For
user-facing syntax, semantics, and porting idioms, see [expr_quot.md](expr_quot.md).

## Internal Module and Extension Map

- **`Lean.Meta.ExprPatternCore`** (`src/Lean/Meta/ExprPatternCore.lean`):
  Core runtime representation, non-`/sym` matching engines, template instantiation, indexing,
  and goal/subterm sources (zero `Lean.Meta.Sym.*` dependencies):
  - Relations and site caching: `ExprMatchEngine`, `ExprMatchItem`, `ExprMatchFlags`,
    `ResolvedExprMatchFlags`, `ExprMatchRel`, `ResolvedExprMatchRel`,
    `ExprMatchRel.validateUnfoldableConst`, `resolvedRelCacheRef`
    (`ExprMatchRel.resolveStaticCached`), `ResolvedExprMatchRel.withLocalItems`.
  - Patterns and engines: `ExprPattern`, `PatHeadGuard`, `ExprPattern.compile`,
    `ExprPattern.collapsedNormalForm?`, `ExprPattern.discTreeKeysMeta?`, `matchStructural?`,
    `matchDefEq?`, non-`/sym` CPS dispatchers (`matchOrElse`, `matchSiteOrElse`,
    `matchResolvedOrElse`), and `DiscrTree` dispatcher (`matchIndexedOrElse`).
  - Serialization and templates: `ExprTemplate`, `ExprTemplateVarKind`, 6-bit ASCII DAG codec
    (`ExprPattern.encode`/`decode`, `ExprTemplate.encode`/`decode`), `inspectClassGoalInputs?`,
    `ExprTemplate.instantiateResolved`/`Site`, and `ExprPattern.Internal` helpers shared with
    `Lean.Meta.ExprPattern`.
  - Goal and expression sources: `ExprContext` (`ExprContext.binders`, `ExprContext.fill`),
    `localHypTypes`, `localHypDecls`, `MVarId.firstHyp?`/`firstHyp`, `subterms`,
    `subtermsUnderBinders`, `matchDiscriminants`.
- **`Lean.Meta.ExprPattern`** (`src/Lean/Meta/ExprPattern.lean`):
  `public import Lean.Meta.ExprPatternCore` plus the `/sym` backend: `MonadSym`, `matchSymCore?`,
  `/sym` CPS/indexed dispatchers (`matchSymSiteOrElse`, `matchSymResolvedOrElse`,
  `matchSymIndexedOrElse`), `SymExtension`-cached `/sym` runtime (`exprSymPatExt`,
  `exprSymTmplExt`, `exprSymIdxExt`), `ExprTemplate.instantiateSymResolved`/`Site`, and
  `ExprPattern.discTreeKeys?` (handling `/sym` alongside core engines).
- **`Lean.Elab.ExprQuot`** (`src/Lean/Elab/ExprQuot.lean`):
  `public import Lean.Meta.ExprPatternCore` (keeping `Elab.Match`, `Elab.Tactic.ElabTerm`, etc.
  free of `SymM` while referencing `/sym` runtime names symbolically and guarding them on
  `Lean.Meta.MonadSym`). Macro expansion (`expandMatchModulo`, `expandDoMatchModulo`), relation
  elaboration (`elabExprMatchRel`), pattern preprocessing and elaboration (`elabExprQuotHoleApp`,
  `elabExprQuotPatSlot`, `elabExprQuotPattern`), per-module deduplication extensions
  (`exprPatExt`, `exprPatArrExt`, `exprTmplExt`), join-point `match` compiler
  (`compileExprMatch`), term-position template elaborator (`elabExprQuotTerm`), and diagnostics
  (`checkSyntaxHoleInExprMatchPatterns`, `checkNumeralDefaultingMVars`, `inspectExprQuotPattern`).
- **`Lean.Elab.ExprQuotCommand`** (`src/Lean/Elab/ExprQuotCommand.lean`):
  `#check_pattern` command elaborator (`elabCheckPattern`), isolated above `Lean.Elab.Command`,
  `Lean.Elab.ExprQuot`, and `Lean.Meta.ExprPattern` so `Lean.Elab.BuiltinCommand` has no
  `ExprQuot` dependency while `#check_pattern` retains full `/sym` `DiscrTree` key inspection.
- **`Lean.Elab.Tactic.FirstHyp`** (`src/Lean/Elab/Tactic/FirstHyp.lean`):
  `import Lean.Meta.ExprPatternCore` (`SymM`-free); `TacticM` backtracking hypothesis search
  (`firstHyp?`, `firstHyp`) with atomic `SavedState` rollback and `sorry`/info-tree hygiene.
- **`Lean.Elab.Tactic.Grind.Sym`** (`src/Lean/Elab/Tactic/Grind/Sym.lean`):
  Generic low-priority `{m} [MonadLiftT GrindTacticM m] : Meta.MonadSym m` instance, kept out of
  `Grind.Basic` to avoid import cycles and preserve `MonadLiftT MetaM GrindTacticM`.
- **Parser, Elaborator, `Sym`, and Diagnostics Hooks**:
  - `src/Lean/Parser/Term.lean`, `Do.lean`, `Command.lean`: `exprQuot`, `exprQuotRel`,
    `matchModulo`, `doMatchModulo`, `doForCaseDecl`, `doForProofCaseDecl`, `checkPattern`,
    internal node kinds `exprQuotHoleApp` and `exprQuotPatSlot`.
  - `src/Lean/Elab/PatternVar.lean`, `Elab/Do/PatternVar.lean`, `Elab/Do/Legacy.lean`,
    `Elab/Do/InferControlInfo.lean`, `Elab/BuiltinDo/For.lean`: pattern-variable collection,
    `for case` macro expansion (`expandDoFor`, `wrapForCaseMatch`), and `ControlInfo.forLoop`.
  - `src/Lean/Elab/Match.lean`, `Elab/BuiltinDo/Match.lean`: parameterized alt-view elaboration
    (`elabMatchAltViewCore`, `elabMatchAltViewsCore`, `elabDoMatchAltCore`) forwarding to
    `compileExprMatch`.
  - `src/Lean/Meta/Sym/Pattern.lean`: `mkPatternCoreFromVars` and `mkPatternFromLambda`.
  - `src/Lean/Linter/Init.lean`, `Elab/Quotation/Util.lean`, `Elab/Quotation.lean`:
    `linter.exprQuot.syntaxHole`, `linter.exprQuot.numeralDefaulting`,
    `linter.exprQuot.collapsedPattern`, `linter.exprQuot.uncheckedType`, `elabStxQuot`, and
    error-only `checkSyntaxHoleInStxMatch` in `elabMatchSyntax`.

---

## ADR-001: Surface Syntax and Stage0-Safe Parsing

**Status:** Accepted

**Context:**
`expr` quotations must coexist with Lean's ordinary syntax quotations (`` `(term) ``), dynamic
quotations (`Parser.Term.dynamicQuot`: `` "`(" >> ident >> "| " ... ``), and existing `match` /
`do match` / `for` ASTs consumed by `stage0` bootstrap code and downstream macros. Registering a
fused token such as `` "`(expr" `` alters Lean's lexer table globally, and inserting optional
children directly into `Parser.Term.«match»` or `Parser.Term.doMatch` shifts fixed child indices
(`stx[i]`) across `stage0` and user macros.

**Decision:**
- Parse `` `(expr[rel]| p) `` in `Parser.Term.exprQuot` (`default+1` priority) using an `atomic`
  two-token header with an explicit whitespace guard (`` "`(" `` + `checkNoWsBefore` +
  `nonReservedSymbol "expr"` + `exprQuotRel` + `"| "`).
- Keep `Parser.Term.«match»` and `Parser.Term.doMatch` completely unchanged. Define dedicated
  `low`-priority `Parser.Term.matchModulo` and `Parser.Term.doMatchModulo` parsers accepting
  `moduloParam` alongside `(dependent := ...)`, `(generalizing := ...)`, and `(motive := ...)` in
  any order, and expand them via `expandMatchModulo` and `expandDoMatchModulo` (sharing
  `mergeOptMatchParam`, `validateAndLiftModuloPins`, and `rewriteMatchAltsModulo`) into standard
  `«match»` and `doMatch` nodes.
- Keep `Parser.Term.doFor`'s child layout unchanged by adding `doForCaseDecl` and
  `doForProofCaseDecl` only inside `doForDeclItem`, expanded by `expandDoFor` + `wrapForCaseMatch`.
- Register internal node kinds `exprQuotHoleApp` and `exprQuotPatSlot` via `registerBuiltinNodeKind`
  to transport preprocessed hole applications and extracted quotation slots without inventing new
  user-visible tokens.

**Alternatives Considered:**
1. *Single fused token `` "`(expr" ``*: risks splitting identifiers starting with `expr` immediately
   after `` `( `` (breaking dynamic quotations such as `` `(exprFoo| ...) ``) and pollutes the
   global token table.
2. *Adding `optional moduloParam` inside `«match»` / `doMatch`*: changes AST child offsets for
   every `match` node, requiring coordinated `stage0` updates and breaking external macros that
   index `stx[k]` directly.

**Consequences & Trade-offs:**
- Zero `stage0` bootstrap churn and zero breakage for existing `match`, `do match`, `for`, and
  dynamic quotation syntax; `expr` remains a non-reserved identifier.
- `matchModulo` / `doMatchModulo` duplicate the surrounding optional-clause grammar at `low`
  priority, and `expandMatchModulo` / `expandDoMatchModulo` must lift dynamic `$x` pins from
  `(modulo := [...])` into enclosing `have` bindings (`validateAndLiftModuloPins`) so pins evaluate
  once rather than once per rewritten pattern arm.

---

## ADR-002: Native `match` / `do match` Compilation into LCNF Join Points

**Status:** Accepted

**Context:**
Users match `Expr` values alongside ordinary inductive constructors (`Option`, `Prod`, `List`),
guards, `if let`, `let ... |`, `fun |`, and `do` control flow. A standalone macro DSL (such as a
bespoke `match_goal` command) duplicates pattern-matching ergonomics, fails to compose with
ordinary constructor patterns, and typically expands into nested `if`-trees that duplicate RHS code
or emit bogus exhaustiveness/redundancy messages.

**Decision:**
- Parameterize Lean's existing match elaborators rather than forking them: factor shared prefix
  elaboration into `elabMatchAltViewCore` and `elabMatchAltViewsCore` (`src/Lean/Elab/Match.lean`)
  and `elabDoMatchAltCore` (`src/Lean/Elab/BuiltinDo/Match.lean`), adding `elabExprMatchAltView`
  and `elabExprMatchAlt`.
- When `hasExprQuotInAltViews` holds, replace each `` `(expr| ...) `` with an `exprQuotPatSlot`
  (`extractAltExprQuots`), pass `?x` binder names via `extraPatternVarNames` into `generalize` so
  match generalization never shadows quotation binders, run ordinary LHS elaboration and
  discriminant refinement, elaborate each slot sequentially (`withElaboratedExprSlots`), and hand
  off to `compileExprMatch`.
- `compileExprMatch` checks exhaustiveness and irrefutable-shadow redundancy using non-emitted
  `Meta.Match.mkMatcher` calls (`_irref_check` and `_shadow_check`, reporting rendered quotation
  syntax via `renderExprMatchAltPatterns` and `reportUnusedAltMsg`). It binds non-fvar
  discriminants once (`bindDiscrsAndDispatch`), binds each arm's RHS as a non-dependent
  `implDetail` join point (`__do_jp` in `bindAltJPsAndDispatch`), groups consecutive arms sharing
  an ordinary pattern skeleton (`canGroupSameSkeleton`, `buildGroupChain`), and threads fall-through
  continuations through `__do_jp` join points (`withFailJP`) without duplicating RHS code or
  emitting `sorryAx` on exhaustive matches (synthesizing `sorry` only for error recovery when
  `!isExhaustive`).
- Reject `match h : e` (`checkNoEqProofOnQuotDiscrs`) on any column containing an `expr` quotation
  because matched `Expr`s satisfy the chosen relation `rel` rather than propositional equality `Eq`.

**Alternatives Considered:**
1. *Bespoke `match_expr_quot` / `match_goal` macro*: could not seamlessly mix ordinary inductive
   patterns with `Expr` patterns, would lose `if let`/`let ... |`/`fun |`/`do` integration, and
   would diverge from Lean's exhaustiveness and redundancy reporting.
2. *Desugaring into nested `Option.rec` / `if-then-else` chains without join points*: duplicates
   fallback arms exponentially when multi-slot or mixed-constructor patterns fail mid-arm.

**Consequences & Trade-offs:**
- Works uniformly across `match`, `fun |`, `if let`, `let ... |`, `do match`, and `for case`,
  producing real LCNF join points and accurate redundancy diagnostics (`match.ignoreUnusedAlts`
  compatible).
- `match h : e` is disallowed on quotation-matched columns (though still permitted on non-quotation
  columns of the same multi-column `match`). Dependent matches skip discriminant `let`-hoisting and
  index grouping so dependent motives and `combineOrigEqs` remain type-correct.

---

## ADR-003: Orthogonal Goal/Subterm Primitives over Monolithic Rocq `match goal`

**Status:** Accepted

**Context:**
Rocq's `match goal with | [ H1 : P, H2 : Q |- context C[t] ] => ...` bundles hypothesis search,
backtracking, multi-hypothesis Cartesian matching, subterm traversal, and contextual rewriting into
one monolithic language construct. In Lean, implicit multi-hypothesis search hides `O(H^k)`
blowups, obscures rollback semantics across `TacticM`/`MetaM`/`InfoTree` state, and makes
dependent contextual rewrites brittle.

**Decision:**
Provide small, orthogonal, composable primitives that pair with native `match` and `for case`:
- **Context snapshots**: `localHypTypes` and `localHypDecls` (`reverse := false`, `except := []`,
  instantiating metavariables and excluding `isImplementationDetail`; `localHypDecls` exposes
  `val?` only for dependent `let`s).
- **Backtracking hypothesis search**: `MVarId.firstHyp?` / `MVarId.firstHyp` (`MetaM` /
  `MonadBacktrack` via `observing?`) and `Elab.Tactic.firstHyp?` / `firstHyp` (`TacticM`), both
  defaulting to `reverse := true` (newest first, matching Rocq) and supporting `except`. The
  `TacticM` version wraps execution in `Term.withoutTacticIncrementality true`,
  `Term.withoutErrToSorry`, and `withoutRecover`, using a single `saveState` per hypothesis and
  `s.restore (restoreInfo := true)` on failure — guaranteeing atomic rollback of goals, `MCtx`,
  messages, and `InfoTree`s with zero `sorry` leakage.
- **Lazy subterm/discriminant streams + zipper context**: `subterms` (`dedup := true` via
  `ExprSet` DAG deduplication, `includeAppPrefixes := false`, syntactic without `instantiateMVars`)
  and `matchDiscriminants` (`alsoCasesOn := false`, `dedup := true`, calling
  `instantiateMVarsIfNeeded` and `matchMatcherApp?`), each yielding `(subterm, ctx : ExprContext)`.
  `ExprContext.fill` rebuilds the enclosing expression via `updateApp!`/`updateLambdaE!`/etc. to
  preserve unchanged subtrees.
- **Refutable loop clauses**: `for case pat in src` expands to
  `match x with | pat => body | _ => continue` (`wrapForCaseMatch`), integrating cleanly with
  `localHypTypes`, `subterms`, and `matchDiscriminants` while diagnosing irrefutable patterns as
  redundant alternatives.
- **Dependent contextual rewrites**: use `ExprContext.fill` with `MVarId.replaceTargetDefEq` for
  contextual `change`, and delegate dependent contextual rewrites (such as `ite` with `Decidable`
  dependencies) to `MVarId.rewrite` (`kabstract`) rather than path-based occurrence rewriting.

**Alternatives Considered:**
1. *Monolithic `match_goal` macro with implicit backtracking and `context C[...]` syntax*: hides
   `O(H^k)` search complexity, requires ad-hoc syntax for `except`/ordering/guards, and breaks when
   syntactic hole replacement invalidates dependent proof/instance arguments.
2. *Pure `for` loops with manual `saveState`*: boilerplate-heavy and error-prone in `TacticM`,
   where forgetting `withoutErrToSorry` or `restoreInfo := true` leaks `sorry` or stale info trees.

**Consequences & Trade-offs:**
- Multi-hypothesis matching is explicit (`firstHyp` nested with `except := [h1]` and `$P` pins),
  making search order and asymptotic cost visible at the call site.
- `subterms` intentionally avoids calling `instantiateMVars` so callers inspecting already
  instantiated targets (`getMainTarget`, `localHypTypes`) pay no extra pass; raw `MVarId.getType`
  callers must instantiate metavariables first.

---

## ADR-004: Five-Engine Relation Hierarchy, `+inst` Hybrid Mode, and `let` Re-Wrapping

**Status:** Accepted

**Context:**
Metaprogramming workloads span a wide spectrum: tight structural AST inspection (`structural`),
matching modulo type-class instances or reducible abbreviations (`+inst`, `reducible`, `instances`),
full definitional equality (`defeq`), and maximally shared symbolic execution (`sym`). Naively
using `Meta.isDefEq` everywhere is slow and over-normalizes `let` bindings, while pure syntactic
matching breaks on non-canonical instances or `let`-bound terms.

**Decision:**
- Define five engines in `ExprMatchEngine` (`structural`, `reducible`, `instances`, `defeq`, `sym`)
  with orthogonal `±flag` overrides (`inst`, `beta`, `zeta`, `proj`, `eta`) and ordered `[±items]`
  (constants, simp sets, and dynamic local dependent-`let` `$x` fvars; last wins).
- Use an intentional **pattern/term default asymmetry**: pattern elaboration (`elabExprMatchRel`)
  defaults to `.structural` (predictable, zero unintended unfolding), whereas term construction
  (`elabExprQuotTerm`) passes `defaultEngine := .defeq` so splice type-checking accepts
  definitionally equal types seamlessly.
- Cache static `[items]` resolution per call site (`ExprMatchRel.resolveStaticCached` via
  `resolvedRelCacheRef`, keyed by `siteId` and validated against `env.constGen`,
  `env.declChangeLog.size`, `env.isExporting`, and `env.header.mainModule`, refreshing `simpSlots`
  in `O(1)`), and validate dynamic local `$x` items at runtime via
  `ResolvedExprMatchRel.withLocalItems`.
- **Implement `+inst` hybrid mode and reject `-inst` on non-`/structural` engines**: in
  `/structural`, `structDirectMatch` tries structural argument matching first and falls back to
  `matchInstArgDefEq` (guarded by `isInstArgAt`), running
  `withNewMCtxDepth <| withTransparency .instances <| isDefEq` only on `[instImplicit]` arguments.
  Conversely, `Meta.isDefEq` (`ExprDefEq.isDefEqArgs`) unconditionally bumps `[instImplicit]`
  parameters to `.implicit`, and `/sym` operates on canonical `Sym` terms, so `-inst` cannot be
  honored on `/reducible`, `/instances`, `/defeq`, or `/sym` and is rejected statically and at
  runtime (directing callers to `/structural` for syntactic instance comparison).
- **Unify `zeta` + `zetaDelta` and map `isDefEq` `-eta` cleanly**: `±zeta` controls both term `let`
  expressions and local context `let` definitions (`withLocalDefItems` + `zetaDeltaSet`), with
  per-variable control via `[±$x]`. On `isDefEq` engines, `-eta` maps to
  `Meta.Config.etaStruct := .none` while retaining `Meta.isDefEq`'s built-in `λ`-eta and `Nat`/unit
  theories; `/structural` toggles `λ`-eta directly via `ctx.flags.eta`.
- Precompute structural fast paths in `ExprPattern.compile`:
  - `PatHeadGuard` + `fastRejectStructural`: `O(1)` root head+arity rejection before allocating
    `StructState` when `!rel.hasUnfolding`, no unfold items, and tracing is off.
  - `computeCaptureVars` (`captureVars` / `shouldCapture`): skips materializing single-occurrence
    unnamed wildcards unless bound-variable escape checking is needed.
  - Syntactic-before-`isProof` + `collectClosedProofs` (`closedProofs`): `structGo` checks
    `!pe.hasLooseBVars && pe == e` (leveraging pointer equality) before `matchProofIrrel`, which
    resolves closed pattern proofs in `O(1)` via `closedProofs[pe]?`.
  - `computePatLevelNodes` (`patLevelNodes` / `hasPatLevelFast` / `matchLevel`): avoids traversing
    closed subterms for pattern universe parameters while unifying repeated `levelParams`
    consistently.
- Preserve `let` structure without unnecessary substitution:
  - `/structural +zeta` records looked-through bindings as `LetEntry` values and calls `rewrapLets`,
    wrapping captured subterms only in the dependent `let`s they reference.
  - `matchDefEq?` runs `liftInspectedLetsGo` / `liftInspectedLetsStep` to lift outer/inspected
    `let`s whose type and value are independent of pattern binders, tries `runDefEqOnce` with
    `zeta := false` first, falls back to `zeta := true` only when `mayIntroduceLet` indicates
    unfolding may expose a `let` (or when `let`s depend on binders), and re-wraps lifted `let`s
    with `rewrapLets`.

**Alternatives Considered:**
1. *Single `isDefEq`-based engine with `TransparencyMode` only*: cannot express pure syntactic
   matching, `+inst` hybrid matching, or faithful non-substituting `let` re-wrapping, and pays
   `isDefEq` overhead on every arm.
2. *Uniform default engine for patterns and templates*: defaulting patterns to `/defeq` causes
   accidental unfolding in AST matchers; defaulting templates to `/structural` rejects valid
   splices whose inferred type is only definitionally equal to the expected type.

**Consequences & Trade-offs:**
- Fine-grained control over cost and unfolding with `O(1)` fast-reject on structural hot paths.
- `isDefEq` engines still fall back to `let`-substitution when a `let` depends on a pattern binder
  or is exposed only inside `isDefEq`, so captures under `/reducible`/`/instances`/`/defeq` may be
  in `isDefEq`-normalized form; users needing strict `let` preservation should use
  `/structural +zeta`.

---

## ADR-005: `SymM` / `GrindTacticM` Integration, `MonadSym`, and `SymExtension` Caching

**Status:** Accepted

**Context:**
`GrindTacticM` (`ReaderT Context (StateRefT State TermElabM)`) lifts `MetaM` through `TermElabM`.
Its `liftSymM` helper delegates to `liftGrindM`, which executes inside `Grind.withGTransparency`
(`src/Lean/Elab/Tactic/Grind/Basic.lean`). Meanwhile, `Sym.SymM` itself lifts `MetaM`. If we added
a direct `MonadLift Sym.SymM GrindTacticM` instance, Lean's typeclass search could resolve
`MonadLiftT MetaM GrindTacticM` via `MetaM → Sym.SymM → GrindTacticM`, silently hijacking every
lifted `MetaM` operation inside `GrindTacticM` to run under `withGTransparency`. In addition,
`/sym` matching and template building must cache compiled `Sym.Pattern` values, maximally shared
templates, and `DiscrTree`s per `Sym.State` without relying on fragile pointer addresses.

**Decision:**
- Introduce a dedicated `Meta.MonadSym` class (`src/Lean/Meta/ExprPattern.lean`) with a standard
  instance `[MonadLiftT Sym.SymM m] : MonadSym m` covering `SymM`, `GrindM`, `GoalM`, `SimpM`,
  `DSimpM`, and monad transformers over them.
- Declare `public instance (priority := low) {m} [MonadLiftT GrindTacticM m] : Meta.MonadSym m`
  using `liftM (liftSymM x)` in `src/Lean/Elab/Tactic/Grind/Sym.lean` (which already imports
  `Grind.Basic` and `ExprPattern`), leaving `Grind.Basic` untouched to avoid import cycles and
  keeping `MonadLiftT MetaM GrindTacticM` routed through `TermElabM`.
- Add `Sym.mkPatternFromLambda` (factoring `mkPatternCoreFromVars`) in
  `src/Lean/Meta/Sym/Pattern.lean` so compiled `ExprPattern` lambdas undergo standard `Sym`
  preprocessing (`foldProjs`, `unfoldReducible`, `betaReduce`, `zetaReduce`, `etaReduceAll`,
  `normalizeLevels`).
- Register three `SymExtension`s (`exprSymPatExt`, `exprSymTmplExt`, `exprSymIdxExt`) backed by
  `SymSiteKeyCache` (`getOrMkSymSiteKey`) and `SymIdxCacheState`, keyed by compile-time
  `siteId : Name` and invalidated by `env.constGen` (falling back to structural keys when
  `siteId.isAnonymous`), rather than transient `ObjectPtr` keys. Cache maximally shared closed
  templates once (`Sym.shareCommon (← Sym.foldProjs tmpl.lam)`) and instantiate with
  `Sym.instantiateRevS`. Reject unresolved instances (`res.unresolvedInsts`) and leaked temporary
  metavariables (`symHasFreshTemp`) cleanly inside `withNewMCtxDepth`.

**Alternatives Considered:**
1. *`instance : MonadLift Sym.SymM GrindTacticM`*: hijacks `MonadLiftT MetaM GrindTacticM` through
   `withGTransparency`, breaking `GrindTacticM` elaboration and meta calls.
2. *Placing the `GrindTacticM` `MonadSym` instance in `Grind.Basic`*: forces `Grind.Basic` to
   import `ExprPattern`, creating unnecessary coupling and import-graph pressure.
3. *Keying `Sym` caches by `ObjectPtr`*: unsafe across GC/relocation/module reloads and breaks
   sharing across identically deduplicated call sites.

**Consequences & Trade-offs:**
- `` `(expr/sym| ...) `` works uniformly in `SymM`, `GrindM`, `GoalM`, `SimpM`, `DSimpM`,
  `GrindTacticM` (`sym =>` tactics), and transformer stacks (`StateT`/`ReaderT`) with zero
  per-iteration `Sym.Pattern` recompilation or extra `Sym.State.share` nodes.
- `/sym` intentionally rejects `[items]`, local `$x` overrides, and disabling any default flag
  (`validateSymRelCore` / `validateSymFlags`) so `Sym`'s canonical normal form stays sound.

---

## ADR-006: Shared-Relation `DiscrTree` Indexing and Lazy Head-Only MVar Resolution

**Status:** Accepted

**Context:**
Goal-directed tactics and symbolic executors frequently dispatch over 6–50 `` `(expr| ...) `` arms.
Linear CPS dispatch scales as `O(N)` per scrutinee, while naively calling `instantiateMVars` on the
entire scrutinee before `DiscrTree` lookup makes deep terms containing unassigned metavariables
`O(|scrutinee|)` even when a pattern mismatches at depth 1. Furthermore, `DiscrTree` candidate sets
can arrive out of source order or with duplicates (e.g. wildcard + concrete keys), and `/reducible`
/ `/sym` numeral and offset patterns (`5` vs `Nat.succ ?n` vs `?n + 1`) have subtle soundness
interactions with `DiscrTree` keys.

**Decision:**
- Detect maximal consecutive runs (`>= 2`) of simple all-var single-slot arms on the same
  discriminant column with no local `$x` items, identical static behavior
  (`ExprMatchRel.sameStaticBehavior`), and index-sound relation (`ExprMatchRel.isIndexSound`:
  `.structural` with no items/reduction flags, `.reducible` with `beta`/`zeta`/`proj`/`eta` all
  `true`, or `.sym`) in `indexedRunEnd?` and `buildIndexedSlotRun`.
- Emit `ExprPattern.matchIndexedOrElse` (`.structural`/`.reducible`, cached per `siteId` in
  `metaIndexCacheRef`) or `ExprPattern.matchSymIndexedOrElse` (`.sym`, cached in `exprSymIdxExt`).
- Preserve exact source-order semantics and at-most-once evaluation via `sortAndDedupCands` before
  `dispatchCandidates` invokes `tryAt[idx]`.
- In `/structural` indexing (`structuralPatKeys`), emit `.star` for closed proofs and for
  `[instImplicit]` arguments when `+inst` is active. During lookup (`structuralDiscrTreeGetMatch`,
  `structuralTrieGetMatch`, `structuralScrutineeStep`), resolve assigned metavariables lazily at
  inspected heads only via pure `resolveHeadMVarPure` — never calling full-scrutinee
  `instantiateMVars`.
- In `withRelDefEqConfig`, set `unificationHints := false` (so single-arm and multi-arm
  `/reducible` agree without unindexed hints such as `Not p =?= p → False`; matching `P → False`
  with `¬ ?A` explicitly uses `[Not]`), and disable `backward.isDefEq.implicitBump` at
  `.reducible` transparency so non-instance implicit type arguments match `DiscrTree.mkPath`.
- In `/reducible` indexing (`reduciblePatKeys`), record `hasNatLitKey` on `CachedMetaIndex` when
  any pattern lowers via `reduceToNatLit?` (extending to closed `Meta.reduceNat?` terms) to a
  `.lit (.natVal _)`; return `#[.star]` on root `Nat` offsets (`isNatOffsetExpr`), root proofs,
  `String.ofList`, and `flags.eta` structure constructors / unit-like expressions; and run
  `annotateReduciblePatForIndex` so nested `Nat` literals/offsets, proofs, `String.ofList`, and
  `flags.eta` lambdas/structure constructors/unit-like terms receive `DiscrTree.mkNoindexAnnotation`
  before `DiscrTree.mkPath`.
- Track transitive constant reducibility statuses (`collectPatReducibilityDeps`) on
  `CachedMetaIndex` and skip `metaIndexCacheRef` caching for `[simpSet]` relations so
  `local reducible` and `local simp` scopes never read stale cached indices; provide
  `exprQuot.debug.checkIndex` to verify skipped arms linearly in index equivalence tests.
- In `/sym` indexing (`annotateSymNatAndOffsets`, `mkSymPatDiscrTreeKeys`), mark offsets
  (`Sym.isOffset?`, `Sym.isQuasiOffset`), `Nat` values/literals, `Nat.zero`, lambdas, and sorts
  with `DiscrTree.mkNoindexAnnotation` (yielding root key `#[.star]`) so offset patterns like
  `Nat.succ ?n` or `(?n : Nat) + 1` still retrieve raw numeral literals such as `5`. Lookup
  (`symDiscrTreeGetMatch`, `symRootMatch`, `symTrieGetMatch`) lazily unfolds `letE`,
  `Sym.getLetValueS?`, head-beta, and `Sym.etaReduce` via `symResolveMVars` under `withIncRecDepth`.

**Alternatives Considered:**
1. *Reordering arms across non-consecutive or heterogeneous-relation blocks*: violates Lean's
   top-to-bottom match priority semantics.
2. *Using `Meta.DiscrTree.getMatch` for `/structural`*: eagerly normalizes/instantiates scrutinees
   and breaks `O(|pattern|)` scaling on deep terms with unassigned metavariables.
3. *Unconditionally calling `reduceToNatLit?` on every `/reducible` indexed lookup*: adds wasted
   `whnf` work on every dispatch even when no arm matches a `Nat` literal.

**Consequences & Trade-offs:**
- Exact semantic equivalence with linear sequential matching (verified differentially across
  structural, reducible, and `/sym` corpuses), `O(|pattern|)` deep-spine scaling under
  `/structural`, and zero `reduceToNatLit?` overhead on non-numeral `/reducible` tables.
- `.instances`, `.defeq`, local `$x` items, and `/structural` with `+beta`/`+zeta`/`+proj`/`+eta`
  or `[items]` fall back to linear CPS dispatch (`ExprMatchRel.isIndexSound = false`).

---

## ADR-007: Compact 6-Bit ASCII DAG Serialization and LCNF `ExtractClosed` Hoisting

**Status:** Accepted

**Context:**
Elaborating an `ExprPattern` or `ExprTemplate` directly into nested Lean term constructors
(`Expr.app (Expr.const ...) ...`) causes severe compile-time slowdowns in elaboration, kernel
type-checking, and LCNF compilation for large patterns. Conversely, emitting an `addAndCompile`
auxiliary declaration for every pattern or template bloats the environment, persists garbage across
elaboration retries, and interacts poorly with `withoutModifyingEnv` and parallel/async elaboration.

**Decision:**
- Serialize closed compiled `ExprPattern` and `ExprTemplate` values into compact, lossless,
  DAG-interned binary tables (`DagEncState`, `internName`, `internLevel`, `internExpr`, LEB128
  varints, versioned with `patternBlobVersion := 1` and `templateBlobVersion := 2`) packed into
  printable 6-bit ASCII string literals (`encodeBytesAscii`/`decodeBytesAscii`,
  `ExprPattern.encode`/`decode`/`decodeExcept`, `ExprTemplate.encode`/`decode`/`decodeExcept`).
- Deduplicate compiled patterns, pattern arrays, and templates per module using `.local`
  `EnvExtension`s (`exprPatExt`, `exprPatArrExt`, `exprTmplExt`) in `mkAuxPatExpr`,
  `mkAuxPatArrExpr`, and `mkAuxTmplExpr`, emitting a single closed expression
  `ExprPattern.decode "..."` or `ExprTemplate.decode "..."` paired with a unique `siteId`
  (`mkUniqueSiteId`).
- Rely on LCNF's `extractClosed` pass (`src/Lean/Compiler/LCNF/ExtractClosed.lean`) and
  `ClosedTermCache` (`src/Lean/Compiler/ClosedTermCache.lean`) to automatically hoist and
  deduplicate these closed `decode` calls into once-initialized closed constants inside the
  enclosing declaration — emitting **zero** `addAndCompile` auxiliary declarations.

**Alternatives Considered:**
1. *Direct recursive `Expr`/`ExprPattern` constructor ASTs*: simple, but triggers quadratic/large
   kernel type-checking and LCNF compile-time regressions on realistic patterns.
2. *`addAndCompile` auxiliary declarations per quotation*: bloats the `Environment` with extra
   constants, leaks across retry/backtracking boundaries, and adds per-quotation compilation
   overhead.
3. *Native `.olean` `EnvExtension` payload table*: eliminates the codec entirely, but requires
   `.olean` persistence hooks and cross-stage/module serialization plumbing.

**Consequences & Trade-offs:**
- Zero extra environment constants, clean retry/async/module-system isolation (verified under
  `module` with `public meta`, `private meta`, and `meta section` in `exprQuotMatchModule.lean`,
  `exprQuotMatchPrivateModule.lean`, and `exprQuotBuildModule.lean`), fast kernel checking (one
  string literal per pattern/template), and automatic once-per-process hoisting by `extractClosed`.
- **Candid upstream trade-off**: the self-contained codec (`src/Lean/Meta/ExprPattern.lean`, ~690
  lines) adds maintenance surface and a small one-time decode cost at module initialization
  compared to storing native `Expr` blobs in a dedicated `.olean` `EnvExtension`. However, the
  representation is completely encapsulated behind `mkAuxPatExpr` / `mkAuxTmplExpr` and can be
  swapped to an `.olean` table upstream later without changing surface syntax or runtime APIs.

---

## ADR-008: Template Hole Hygiene and Zero-Overhead Scoped Diagnostics

**Status:** Accepted

**Context:**
Term-position templates `` `(expr[rel]| t) `` mix splice type-checking, runtime type-class
synthesis, and fresh `?h`/`?_` hole creation; temporary metavariables created inside
`withNewMCtxDepth` become dangling if they escape into a materialized hole's type. Separately,
writing an ordinary syntax quotation `` `(?x + ?y) `` on an `Expr` value is a common mistake, yet
diagnostics for it must not slow down ordinary `match` elaboration, misdiagnose `Syntax`/`TSyntax`
quotations, or duplicate `InfoTree` entries.

**Decision:**
- **Compile-time determination & runtime hole hygiene**:
  - At elaboration time (`elabExprQuotTerm`), `computeTemplateDetermined` computes a fixed point
    over splice types and `inspectClassGoalInputs?` (tracking non-`outParam` arguments and
    non-output universe levels) to classify abstracted metavariables into `.splice`, `.hole`,
    `.tc`, and `.infer`, rejecting under-determined holes/instances/universes statically via
    `reportTermBuildErrors`.
  - At runtime (`ExprTemplate.instantiateResolved` and `instantiateSymCore`), splice checks,
    implicit unification, and `resolveReadyTCs` (using `isTCGoalReady` -> `inspectClassGoalInputs?`)
    run inside `withNewMCtxDepth` so caller metavariables stay untouched. Before exiting
    `withNewMCtxDepth`, `validateTempHolePlans` checks each `HolePlaceholder`'s instantiated type
    with `hasTempMVar` / `levelHasTempMVar`, passing `allowed := priorTmpHoles` (permitting
    telescoping holes while rejecting any unresolved inner-depth metavariable or level mvar). Only
    after `withNewMCtxDepth` returns does `materializeHolePlans` allocate `.syntheticOpaque`
    metavariables in the caller's `MCtx`, rewriting earlier hole references via `tmpHoleMap` and
    guarding against forward cycles with `hasAnyMVarInSet`.
- **Zero-overhead scoped diagnostics**:
  - `checkSyntaxHoleInExprMatchPatterns` (`src/Lean/Elab/ExprQuot.lean`, called from `Match.lean`
    and `BuiltinDo/Match.lean`) pre-scans patterns purely syntactically via `extractNonExprQuot?`
    (`unwrapPatSyntaxParens`), returning immediately with **0** `inferType`/`whnf` calls on
    ordinary `match` expressions.
  - `Quotation.elabStxQuot` (`src/Lean/Elab/Quotation.lean`) guards on
    `linter.exprQuot.syntaxHole` and `isExprOrMonadExpr expectedType?` before running
    `collectNamedSyntaxHoles` (`Quotation/Util.lean`, ignoring `?_`, antiquotations, nested
    quotations, and `exprQuot`).
  - `Quotation.elabMatchSyntax` records `Term.saveState` and
    `savedNumMsgs := log.reported.size + log.unreported.size` (`O(1)`), runs `match_syntax.expand`
    and `elabTerm` once on the happy path (zero duplicate `InfoTree`s), and invokes
    `checkSyntaxHoleInStxMatch` only if `hasNewErrorSince` detects a new error or an `.error`
    exception is thrown.
  - `checkNumeralDefaultingMVars` activates only when `linter.exprQuot.numeralDefaulting` is true
    and inspects pending `OfNat ?α _` synthetic metavariables before default synthesis.
  - `linter.exprQuot.collapsedPattern` warns via `ExprPattern.collapsedNormalForm?` when a
    non-variable pattern reduces under its own relation to a bare variable/metavariable application
    (preserving exact runtime matching semantics while diagnosing vacuous redex patterns), and
    `#check_pattern` displays the collapsed normal form.
  - `linter.exprQuot.uncheckedType` warns when an explicit `(?x : T)` ascription in a
    `/structural` pattern appears solely at type-unconstrained positions (while `(?x : ?T)`
    type-only binders are rejected at compile time under `/structural`).
  - `ExprPattern.formatBody`, `inspectExprQuotPattern`, and `trace.Meta.Match.expr` open pattern
    binders inside `lambdaBoundedTelescope` (`withPatTraceEnv`) with renamed fvars and
    `pp.sanitizeNames := false` so field/projection delaboration works cleanly on `?s.val` and `_`.
  - A built-in `@[unused_variables_ignore_fn]` suppresses `linter.unusedVariables` on object-level
    binders inside `Parser.Term.exprQuot` body (`pos == 4`) while preserving warnings on `?x`
    captures and `$...` splices; `reportTermBuildErrors` appends template remediation hints.
  - `#check_pattern` (`src/Lean/Elab/ExprQuotCommand.lean`) lives in its own module above
    `Lean.Elab.Command` and `Lean.Elab.ExprQuot` and calls `inspectExprQuotPattern` inside
    `withoutModifyingEnv`, keeping `Lean.Elab.BuiltinCommand` free of `ExprQuot` imports.

**Alternatives Considered:**
1. *Materializing `?h`/`?_` holes directly inside `withNewMCtxDepth`*: leaks inner-depth mvars or
   allows temporary unification variables to linger in materialized hole types.
2. *Eagerly elaborating discriminants in `elabMatchSyntax` before `match_syntax.expand`*: slows
   every syntax-matching function and duplicates `InfoTree` hover/type entries on the happy path.
3. *Checking `inferType` on every `match` discriminant in `Match.lean`*: imposes unnecessary `whnf`
   and type-inference work on ordinary matches that contain no quotations at all.

**Consequences & Trade-offs:**
- Zero dangling inner-depth metavariables in materialized template holes, zero `inferType`/`whnf`
  overhead on ordinary `match` expressions, and zero duplicate `InfoTree`s in `elabMatchSyntax`.
- On failing syntax matches whose discriminant is an `Expr`, `elabMatchSyntax` briefly restores
  `savedState` to emit the targeted `` `(expr| ...) `` diagnostic and linter warning, then
  restores `postState` if no `Expr` column was found so original errors remain intact.

---

## ADR-009: Bounded Outer Eta-Reduction in Structural Higher-Order Capture

**Status:** Accepted

**Context:**
When a higher-order pattern hole `?P x₁ … xₙ` matches a body `wrapped` under binders `x₁, …, xₙ`,
structural matching (`structAssign` in `src/Lean/Meta/ExprPattern.lean`) must abstract `args :=
#[x₁, …, xₙ]` over `wrapped` to bind `P`. Calling unconditional `lamVal.eta` on the resulting
lambda collapses not only the freshly abstracted `args` but also any inner user lambdas present
inside `wrapped` (for example, matching `` `(expr| fun (x : Nat) => ?P x) `` on
`fun (x y : Nat) => x + y` collapsed `P` all the way to `@HAdd.hAdd Nat Nat Nat inst`, discarding
the inner `fun y` binder even under `/structural` where `eta := false`). Conversely, disabling
eta-reduction completely during abstraction (`mkLambdaFVars args wrapped (etaReduce := false)`)
fabricates a synthetic `fun x => Even x` wrapper when matching `∀ x, ?P x` against `∀ x, Even x`,
diverging from `Meta.isDefEq` and breaking nonlinear structural patterns such as
`(∀ x, ?P x) ∧ ($P 0)`.

**Decision:**
- In `elabExprQuotHoleApp` ([ExprQuot.lean](../../src/Lean/Elab/ExprQuot.lean)), enforce
  compile-time Miller-pattern checking on binder applications whose arguments mention
  pattern-bound variables (rejecting non-Miller forms such as `?P (x + 1)`, `?P x x`, or
  `?P x 0` while allowing `$fn` pins and first-order `?f ?a` applications with no bound-variable
  arguments, and classifying `firstOrder` accurately in `#check_pattern`). This prevents silent
  cross-engine divergence between `/structural`, `/defeq`, and `/sym` on non-Miller patterns.
- In `structAssign`, abstract the captured pattern arguments with
  `mkLambdaFVars args wrapped (etaReduce := true)`, and apply full `lamVal.eta` only when
  `ctx.flags.eta` is `true` (`pure (if ctx.flags.eta then lamVal.eta else lamVal)`).
- Keep scrutinee-side eta matching governed strictly by `ctx.flags.eta`: under `/structural`
  (`eta := false`), `fun x => ?f x` still does not match bare `g`, and inner lambdas inside
  `wrapped` are left untouched.
- Recommend two complementary binder-inspection idioms depending on use case:
  - **Semantic higher-order abstraction**: match with `` `(expr| fun (x : ?α) => ?P x) `` or
    `` `(expr| let y : ?α := ?v; ?P y) `` and instantiate bodies via `P.beta #[x']` (which
    reconstructs `body[x'/x]` uniformly whether or not the single abstracted argument was
    eta-peeled, as in `tests/elab/exprQuotReifyPhoas.lean`).
  - **Syntactic binder inspection**: mix `.lam` / `.letE` constructor arms directly in the same
    `match` (ADR-002) when binder `Name`s or `BinderInfo` must be preserved directly in
    `O(depth)` without `O(depth²)` re-abstraction (as in `tests/elab/exprQuotReifyNamed.lean`).

**Alternatives Considered:**
1. *Unconditional `lamVal.eta`*: silently peels inner lambdas belonging to the scrutinee even
   under `/structural` (`-eta`), breaking higher-order binder traversal on curried lambdas such
   as `fun x y => x + y`.
2. *No eta-reduction during `mkLambdaFVars` (`etaReduce := false`)*: fabricates synthetic
   `fun x => f x` wrappers on `∀ x, f x`, diverging from `Meta.isDefEq` and breaking `O(1)`
   nonlinear `$P` pins like `(∀ x, ?P x) ∧ ($P 0)` under `/structural` (`-beta`).

**Consequences & Trade-offs:**
- Matches Lean's `Meta.isDefEq` Miller pattern unifier (`ExprDefEq.lean` ->
  `MetavarContext.mkLambda'` with `etaReduce := true`), keeping `/structural`, `/reducible`,
  `/instances`, and `/defeq` consistent on `∀ x, ?P x` against `∀ x, Even x` (`P := Even`).
- Preserves `O(1)` nonlinear `$P` matching (e.g. `(∀ x, ?P x) ∧ ($P 0)`) under `/structural`
  without violating its `-beta` invariant.
- Respects `eta := false` on the scrutinee: inner user lambdas stay intact, and
  `P.beta #[x₁', …, xₙ']` reliably reconstructs `body[x'/x]`.
- Because `mkLambdaFVars` still peels the abstracted `args` when `wrapped` is `f x₁ … xₙ`,
  callers that inspect binder `Name`s on `fun x => f x` should read the binder name from the
  scrutinee `e` or match `.lam`/`.letE` directly (ADR-002), avoiding `O(depth²)` re-abstraction.
- Conversely, when `x` is in non-trailing position (e.g. `∀ x, x + 1 = 2`), `P` stays
  `fun x => x + 1 = 2`, so nonlinear pins `$P 0` remain unreduced under default `/structural`
  (`-beta`) and require `+beta` or `/reducible` to instantiate `0 + 1 = 2`.

---

## ADR-010: Binder-Descending Subterm Iteration (`subtermsUnderBinders`)

**Status:** Accepted

**Context:**
`subterms` and `matchDiscriminants` emit only closed subterms (`!cur.hasLooseBVars`, ADR-003),
so callers rewriting closed targets or extracting closed `match` discriminants never observe
dangling de Bruijn indices. However, several proof-automation passes (collecting element witnesses
inside `∀`-quantified hypotheses, checking proposition shape under `∀ x : α, ...`, or rewriting
`∀ x, P y x ∧ Q y x` under an outer binder) need to inspect subterms inside binders while
keeping `MetaM` type inference and `ExprQuot` pattern matching well-scoped. Exchanging `subterms`
to run in `MetaM` everywhere would break pure `Id`-mode `.toArray`/`.toList`, and returning raw
open expressions with loose `.bvar`s would break `Expr.eqv`, `inferType`, and `ExprContext.fill`.

**Decision:**
- Keep `Subterms` (`subterms`) and `MatchDiscriminants` (`matchDiscriminants`) pure/closed-only as
  originally specified (ADR-003).
- Add a companion `SubtermsUnderBinders` stream (`subtermsUnderBinders e (dedup := true)
  (includeAppPrefixes := false)`) in `src/Lean/Meta/ExprPattern.lean` whose `ForIn` instance runs
  under `[Monad m] [MonadControlT MetaM m] [MonadLiftT MetaM m]`.
- When descending into `.lam`, `.forallE`, or `.letE` bodies, open the binder via
  `Meta.withLocalDecl` / `Meta.withLetDecl`, instantiate `.bvar 0` with the fresh `fvar`, and push
  `.lamBodyFVar` / `.forallBodyFVar` / `.letBodyFVar` frames onto `ExprContext`.
- Yield the same `(sub, ctx) : Expr × ExprContext` 2-tuple as `subterms` so call sites write
  `for case (\`(expr| ...), ctx) in subtermsUnderBinders e do` uniformly; expose enclosing opened
  binder fvars (outermost-first) via `ctx.binders : Array Expr` and keep `ctx.fill : Expr → Expr`
  pure by calling `cur.abstract #[fv]` automatically on `*BodyFVar` frames.

**Alternatives Considered:**
1. *Making `subterms` monadic (`underBinders : Bool := false`)*: forces `MetaM` onto closed pure
   callers and breaks `Subterms.toArray` / `Subterms.toList` in pure contexts.
2. *Returning a 3-tuple `(sub, ctx, binders)`*: forces different `for` loop destructuring from
   `subterms` and invites forgetting to pass `binders` when rebuilding contexts.

**Consequences & Trade-offs:**
- Closed `subterms` callers keep zero `withLocalDecl` overhead and pure `.toArray` support.
- `subtermsUnderBinders` loop bodies see fully well-typed closed subterms in an extended
  `LocalContext` with automatic outer-to-inner re-abstraction in `ctx.fill`, while callers know via
  `SubtermsUnderBinders.toArray`'s docstring that eager collection exits the binder scopes.

---

## ADR-011: Orthogonal Projection Encodings, Non-Unfoldable Constant Rejection, and Collapsed-Pattern Linting

**Status:** Accepted

**Context:**
Structure projections in Lean `Expr`s take two distinct representations: surface syntax `s.val`
elaborates to the projection function `@Subtype.val _ _ s`, whereas `whnf`, `unfold`, or `cases`
produce kernel `.proj ``Subtype 0 s`. Under `/structural`, users sometimes conflate `+proj`
(contracting `.proj S i (S.mk ...)`) with `[S.field]` (unfolding `S.field` to `.proj S i`), or
attempt to place non-unfoldable constants (such as theorems like `Subtype.property`, constructors,
or recursors) inside `[items]` lists where they would silently behave as no-ops. Conversely,
combining `[S.field]` and `+proj` (or using `/reducible` / `/defeq`) on patterns such as
`Subtype.val (Subtype.mk ?v _)` or `id ?x` reduces the pattern itself to a bare variable `?v` that
matches arbitrary expressions.

**Decision:**
- **Keep `+proj` and `[S.field]` strictly orthogonal**:
  - `+proj` in `ExprMatchFlags` governs only constructor-projection redex contraction (`projectCore?`),
    whereas `[S.field]` governs unfolding the projection definition `S.field` to `.proj S i`.
  - Keep `/reducible -proj` available when `Meta.isDefEq` should unfold projection definitions
    while preserving constructor-projection redexes intact in the scrutinee.
  - When `@S.field` fails against kernel `.proj S i` under `/structural`, emit an actionable
    `trace.Meta.Match.expr` hint (`projection function S.field vs kernel projection; add [S.field]`).
- **Reject non-unfoldable `[items]` constants at compile time and runtime**:
  - `ExprMatchRel.validateUnfoldableConst` (`src/Lean/Meta/ExprPattern.lean`), invoked from both
    `elabExprMatchRel` (`src/Lean/Elab/ExprQuot.lean`) and `resolveStaticCore`, requires
    `ConstantInfo.defnInfo` (`hasValue`). Theorems, constructors, inductive types, recursors,
    axioms, opaque constants, and quotient primitives raise a clear error instead of becoming
    silent no-ops.
- **Warn on collapsing patterns without altering runtime semantics**:
  - Implement `ExprPattern.collapsedNormalForm?` (`collapsedStructStep?` and `collapsedDefEqHead?`
    in `ExprPattern.lean`) to detect when a non-variable pattern reduces under its own relation to a
    bare pattern variable or variable-headed application.
  - Emit a `linter.exprQuot.collapsedPattern` warning (default `true`) from
    `elabExprQuotPatternCore` and print `collapsed normal form: ...` in `#check_pattern`, while
    leaving the underlying matching relation completely faithful.

**Alternatives Considered:**
1. *Having `+proj` automatically unfold structure projection functions*: breaks syntactic
   distinctions between `@S.field` and `.proj`, preventing patterns from matching only one form or
   contracting `.proj` redexes without unfolding surface wrappers.
2. *Silently ignoring theorems/constructors in `[items]`*: misleads users into thinking
   `[Subtype.property]` or `[Nat.succ]` has an unfolding effect when matching `.proj`.
3. *Rejecting collapsing patterns as hard errors or rewriting them silently*: breaks legitimate
   parameterized macros or experiments where the author knows the reduction behavior and only wants
   a diagnostic signal.

**Consequences & Trade-offs:**
- Clear separation between definition unfolding (`[S.field]`), constructor-projection contraction
  (`+proj`), and unreduced redex matching (`/reducible -proj`).
- Non-definitions in `[items]` fail fast at elaboration time, and vacuous patterns such as
  `` `(expr/reducible| Subtype.val (Subtype.mk ?v _)) `` or `` `(expr/defeq| id ?x) `` surface an
  immediate lint warning and `#check_pattern` explanation without distorting matching semantics.

---

## ADR-012: Syntactic `/structural` Binder Type Discipline, Rigid Caller Metavariables, and Explicit v1 Scope Boundaries

**Status:** Accepted

**Context:**
Users writing `` `(expr| (?x : T)) `` or `` `(expr| (?x : ?T)) `` under `/structural` often expect
type ascriptions to restrict matched expressions by type; similarly, users encountering unassigned
caller metavariables in a scrutinee or trying to match arbitrary-arity heads (`?g ..`),
same-constructor equations (`?C _ = ?C _`), or unifying holes (`+assign`) expect predictable,
documented semantics. Performing `inferType` on every structural capture would destroy `/structural`'s
`O(|pattern|)` guarantee, while silently dropping type-only binders or mutating caller metavariables
would cause subtle soundness and backtracking bugs.

**Decision:**
- **Keep `/structural` strictly `O(|pattern|)` without `inferType` on captures**:
  - Under `/structural`, `elabExprQuotPatternCore` enforces `patBodyMentionsVar` at compile time,
    rejecting type-only binders such as `(?x : ?T)` or `(?f : ?A → ?B) ?x` (directing users to
    `/reducible` or explicit `inferType` calls).
  - Run `isBVarConstrained` over explicit `(?x : T)` ascriptions in `/structural` patterns and emit
    `linter.exprQuot.uncheckedType` (default `true`) whenever `T` is not embedded into a constrained
    position in the elaborated pattern body (such as `(?x : Nat)` alone, `(?P : Prop) → (?Q : Prop)`,
    or after `[Not]` unfolds `¬ ?A`).
- **Keep caller metavariables rigid across all engines**:
  - Execute matching inside `withNewMCtxDepth` across `/structural`, `isDefEq` engines, and `/sym`
    so `match` is purely observational and never mutates caller metavariables inside scrutinees or
    `$e` pins. Tactic writers wanting unification invoke `Meta.isDefEq`, `MVarId.apply`, or
    `MVarId.assumptionCore` explicitly.
- **Maintain explicit v1 syntax and scope boundaries**:
  - Allow concrete constant-head `f ..` patterns, but reject `..` after pattern variables or pins
    (`?g ..` / `$g ..`) at compile time via `ensureNoEllipsisInHoleArgs` (directing callers to
    `Expr.getAppFn` / `Expr.getAppArgs`).
  - Omit special `?C _ = ?C _` same-constructor syntax and `+assign` mutating pattern binders in v1
    in favor of explicit `match` + `Meta.isConstructorApp'?` / `Meta.injection` and explicit
    `Meta.isDefEq`.

**Alternatives Considered:**
1. *Calling `inferType` + `isDefEq` on every `(?x : T)` capture in `/structural`*: turns `O(|pattern|)`
   syntactic AST matching into type inference + unification on every match arm.
2. *Allowing mutating `+assign` pattern binders*: couples pure pattern matching to `MCtx` side
   effects, making arm ordering and backtracking fragile.
3. *Supporting `?g ..` by synthesizing variable-length argument arrays*: complicates binder arity
   and `DiscrTree` indexing for little benefit over `e.getAppFn` / `e.getAppArgs`.

**Consequences & Trade-offs:**
- `/structural` stays reliably `O(|pattern|)` and side-effect-free on the caller's `MetavarContext`.
- Users receive immediate compile-time errors on type-only `/structural` binders and `?g ..`
  heads, plus `linter.exprQuot.uncheckedType` warnings whenever an explicit `: T` annotation in a
  `/structural` pattern would otherwise go unchecked at runtime.
