# Quasi-Quoted `Expr` Patterns (`expr` Quotations)

`expr` quotations provide native syntax `` `(expr[rel]| p) `` for matching, destructuring,
inspecting, and building Lean `Expr` values directly inside Lean expressions and tactics.

For internal module layout and architectural design rationale, see
[expr_quot_adr.md](expr_quot_adr.md).

## Surface Syntax and Defaults

An `expr` quotation has the form `` `(expr[/engine] [[±items]] [±flags]| body) ``:

- **No whitespace before `expr`**: write `` `(expr| ...) `` with no space between `` `( `` and
  `expr`. Because `expr` is a non-reserved keyword parsed after `` `( ``, identifiers such as
  `expr` remain usable in ordinary code, and dynamic quotations such as `` `(exprFoo| ...) ``
  continue to parse normally.
- **Pattern vs. term default relation**:
  - In **pattern positions** (`match`, `fun |`, `if let`, `let ... |`, `do match`, `for case`),
    the default engine is `/structural`.
  - In **term positions** (evaluating `` `(expr| t) `` to build an `Expr`), the default engine is
    `/defeq` (used to check `$e` splice types).

## Matching Relations, Flags, and `[items]`

Each `` `(expr[rel]| ...) `` quotation accepts an optional `/engine`, an optional `[±item, ...]`
unfold override list, and zero or more `±flag` overrides (`inst`, `beta`, `zeta`, `proj`, `eta`):

| Engine | Default `inst` | Default `beta`/`zeta`/`proj`/`eta` | Semantics |
|---|---|---|---|
| `structural` (default) | `false` | all `false` | Syntactic modulo `mdata`, head mvars, proofs |
| `reducible` | `true` | all `true` | `Meta.isDefEq` at `.reducible` |
| `instances` | `true` | all `true` | `Meta.isDefEq` at `.instances` |
| `defeq` (term default) | `true` | all `true` | `Meta.isDefEq` at `.default` |
| `sym` | `true` | all `true` | `Sym` modulo `beta`/`eta`/`let`/`zetaDelta`/projs/offsets |

### Flags and `[items]`

- **`+inst` in `/structural`**: keeps matching strictly structural on ordinary subterms while
  checking instance-implicit arguments by definitional equality at `.instances` transparency.
  `+inst` combines freely with `[items]` and other `+flags`. On `/reducible`, `/instances`,
  `/defeq`, and `/sym`, instance-implicit comparison is always enabled and `-inst` is rejected
  (use `/structural` for syntactic instance comparison).
- **`[±decl, ±simpSet, ±$x]`**: rules apply left-to-right (**last wins**). Static `[decl]`
  items must name an unfoldable definition (`ConstantInfo.hasValue`); theorems, constructors,
  inductive types, axioms, and opaque constants are rejected at compile time and runtime. Removing
  an unfold rule (`-c` or `-simp`) when neither the base engine nor an earlier `+` item unfolds it
  is a static error (or a runtime error for local `-$x`). Local `$x` (or `$(e)`) items must
  evaluate to a free variable referring to a dependent `let` declaration in the current
  `LocalContext` (non-dependent `have` declarations and ordinary hypotheses cannot be unfolded).
- **Reduction flags (`±beta`, `±zeta`, `±proj`, `±eta`)**:
  - `±zeta` controls **both** `let` expressions inside terms (`zeta`) and `let`-bound local
    definitions in `LocalContext` (`zetaDelta`, overridable per variable via `[±$x]`).
  - `+beta` steps inspected head beta-redexes via `headBeta`; `+proj` contracts inspected kernel
    projections applied to constructors (`projectCore?`).
  - `±eta` toggles `λ`-eta in `/structural`, whereas `-eta` on `isDefEq` engines disables
    structure eta (`etaStruct := .none`) while keeping `Meta.isDefEq`'s `λ`-eta and built-in
    `Nat`/unit reductions active.
- **Structure projection encodings (`+proj` vs. `[Struct.field]` vs. kernel `.proj`)**:
  surface `s.val` elaborates to the projection function `@Subtype.val _ _ s`, whereas `whnf`,
  `unfold`, or `cases` can produce kernel `.proj ``Subtype 0 s`. Keeping `+proj` and `[S.field]`
  orthogonal preserves syntactic distinctions:

  | Construct | Meaning in `/structural` | Behavior on `⟨v, h⟩.val` / `.proj` |
  |---|---|---|
  | Default `/structural` | Strictly syntactic | Matches `@S.field _ s` only against `@S.field` |
  | `+proj` | Contracts constructor `.proj` redexes | Reduces `.proj S i (S.mk ...)` |
  | `[S.field]` | Unfolds `S.field` to `.proj S i` | Matches `@S.field _ s` against both forms |
  | `[S.field] +proj` | Unfolds field & contracts redexes | Collapses `S.val (S.mk ?v _)` to `?v` |
  | `/reducible` | `isDefEq` at `.reducible` (`-hints`) | Unfolds `@[reducible]` projs & redexes |

  To match redex shapes reliably, use `/structural` rather than an `isDefEq` engine (`/reducible`
  normalizes redexes first). Under `/reducible`, unification hints are disabled (`¬ ?A` requires
  explicit `[Not]` or `[Not, Ne]` to match `P → False`).
- **`/sym` restrictions**: `/sym` requires a `[MonadSym m]` monad (such as `SymM`, `GrindM`,
  `GoalM`, `Sym.Simp.SimpM`, `Sym.DSimp.DSimpM`, or `GrindTacticM` inside `sym =>` tactics). It
  rejects `[items]`, local `$x` items, and disabling `-inst`/`-beta`/`-zeta`/`-proj`/`-eta`.

### User-Observable Semantics

- **`let` look-through and re-wrapping**:
  - `/structural +zeta` performs faithful non-substituting `let` look-through: any captured
    subterm mentioning looked-through `let` variables is re-wrapped with only the dependent `let`
    bindings it actually needs, unless a direct local free variable already exists.
  - In `isDefEq`-based engines (`/reducible`, `/instances`, `/defeq`), outer or inspected `let`
    bindings independent of pattern binders are lifted and re-wrapped when possible. When a `let`
    value depends on a pattern binder (or fallback `zeta` unfolding is required), `Meta.isDefEq`
    substitutes the `let` and captured subterms may be in `isDefEq`-normalized form.
- **Lazy metavariables under `/structural`**: `/structural` resolves assigned metavariables at
  inspected heads without eagerly traversing uninspected subtrees. If your match arm inspects
  captured subterms structurally and expects nested assigned metavariables to be resolved, call
  `instantiateMVars` on the capture.
- **`/sym` numeral and offset matching**: in `/sym`, a raw numeral pattern such as
  `` `(expr/sym| 5) `` matches numeral `5` (and reducible equivalents like `1 + 4`), whereas
  `` `(expr/sym| Nat.succ ?n) `` or `` `(expr/sym| (?n : Nat) + 1) `` uses `Sym`'s offset
  representation to decompose numeral literals such as `5` into `n := 4`. Matching under `/sym`
  rejects unresolved instance constraints and never leaks temporary metavariables into the
  caller's `MetavarContext`.
- **Automatic discrimination-tree indexing**: consecutive single-slot match arms on the same
  column sharing `/structural` (with or without `+inst`, and no `[items]` or reduction flags),
  `/reducible` (with default reduction flags), or `/sym` — without local `$x` overrides — are
  automatically indexed in exact source order.

## Pattern Bindings, Native Control Flow, and Term Building

### Pattern Binders, Pins, and Wildcards

- **Binders (`?x`)**: `?x` binds a local variable `x : Expr` on its first occurrence and never
  captures variables bound inside the pattern (matching `∀ x, ?Q` against `∀ n, n = n` fails).
  Repeating `?x` in the same pattern is a compile-time error; use `$x` on later occurrences.
- **Higher-order vs. first-order patterns and `$P a` pins**: `?P x y` is higher-order when `x y`
  are distinct pattern-bound variables, capturing a lambda abstraction (including constant
  functions and reordered arguments such as `∀ x y, ?R y x`). When `x y` are in trailing
  position on `f x y`, `mkLambdaFVars ... (etaReduce := true)` eta-peels `P := f`, so `$P 0` in
  `(expr| (∀ x, ?P x) ∧ ($P 0))` matches without `+beta`; when `x` is non-trailing (such as
  `∀ x, x + 1 = 2`, giving `P := fun x => x + 1 = 2`), `$P 0` builds a beta redex and requires
  `+beta` (or `/reducible`) to match `0 + 1 = 2`. Applying `P.beta #[x, y]` reconstructs the body
  on the Lean side while preserving inner lambdas under `/structural` (`-eta`). Applications whose
  arguments mention pattern-bound variables in non-Miller form (such as `?P (x + 1)`, `?P x x`,
  or `?P x 0`) are rejected at compile time. Applications with no pattern-bound variable arguments
  (such as `?f ?a` or `?f 0`) remain first-order.
- **Binder type ascriptions under `/structural` (`(?x : T)` vs. `(?x : ?T)`)**: `/structural`
  matches purely syntactically against the elaborated pattern body and never calls `inferType` on
  captures (`O(|pattern|)`). An explicit `(?x : T)` constrains `/structural` only when
  elaboration embeds `T` into the pattern body (for example, `(?x : Nat) + ?y` fixes `@HAdd Nat`).
  At unconstrained positions (`(?x : Nat)`, `(?P : Prop) → (?Q : Prop)`, `(?f : _) (?x : Nat)`,
  or after `[Not]` unfolds `¬ ?A`), `/structural` does not check the type at runtime:
  - Type-only binders such as `(?x : ?T)` or `(?f : ?A → ?B) ?x` are rejected at compile time
    under `/structural` (use `/reducible` or call `inferType`).
  - Unconstrained explicit ascriptions under `/structural` emit `linter.exprQuot.uncheckedType`
    (enable `/reducible` for checked binder types, or use bare `?x` plus an explicit `isProp` /
    `isDefEq` check).
- **Pins (`$e` and nonlinear `$x`) and rigid caller metavariables**: `$e` (or `$(e)`) pins an
  in-scope `Expr` value evaluated in the enclosing context. Writing `$x` after an earlier `?x` in
  the same pattern creates a nonlinear self-pin requiring both positions to match modulo the
  pattern's relation. Bare identifiers inside a quotation resolve statically where the quotation is
  written; goal locals must be pinned or spliced with `$h`. Even under `/reducible`/`/defeq`,
  matching runs inside `withNewMCtxDepth`, so pins and caller metavariables inside the scrutinee
  are rigid (`match` never mutates caller mvars; use `Meta.isDefEq` / `apply` / `assumptionCore`
  when unification is desired).
- **Scope idioms (variadic spines, constructors, carrier aliases)**:
  - `f ..` after a concrete constant works in patterns; `..` after a pattern variable or pin
    (`?g ..` / `$g ..`) is rejected at compile time (for runtime variable-arity heads, inspect
    `e.getAppFn` / `sub.getAppPrefix`).
  - Matching same-constructor equations of arbitrary arity (`?C _ = ?C _`): match `?l = ?r` and
    inspect `Lean.Meta.isConstructorApp'?` or call `Meta.injection`.
  - Carrier aliases (`(?x : _) ∈ (?s : FSet _)` on `s : NatSet` with `abbrev NatSet := FSet Nat`):
    `+inst` only relaxes `[instImplicit]` arguments, so use `/reducible` (still indexed) or
    `[NatSet]` under `/structural +inst`.
- **Wildcards (`_` / `?_`)**: match any subterm without binding a variable; multiple `_`
  wildcards in one pattern (and unresolved implicit arguments in patterns) are independent and
  never unify distinct subterms. Inside `match` / `if let` / `for case`, macros inside
  `` `(expr| ...) `` bodies (such as `if c then t else e`) are not pre-expanded, so user `?c`
  holes and `_` wildcards remain intact.

### Native Control Flow

`expr` quotations work directly inside Lean's native pattern-matching constructs:

- `match`, `fun |`, `if let`, `let ... |`, `do match`, and `module` files (`public meta`,
  `private meta`, `meta section`), including multi-column and nested matches mixing ordinary
  constructors (e.g. `Option`, `Prod`) with `` `(expr| ...) `` patterns. Lean matches ordinary
  patterns first and runs quotation slots left-to-right via join points without duplicating arms.
- **Compile-time exhaustiveness**: `match` expressions over `expr` quotations require a catch-all
  `_` or variable arm covering quotation columns (`if let`, `let ... |`, and `for case` have
  built-in fallbacks).
- `match (modulo := rel) ...` (both term-mode and `do`-mode): sets a default relation for every
  `` `(expr| ...) `` pattern in the match. A per-pattern `/engine` replaces `(modulo := rel)`
  completely, while per-pattern `[items]` and `±flags` extend it.
- `for case pat in src do ...` (and `for case h : pat in src` / `for h : case pat in src`):
  iterates over `src` and skips elements that do not match `pat` via `continue`. Writing
  `for case` with an irrefutable pattern is reported as a redundant alternative.
- **Why `match h : e` is rejected**: equality proof binders `h : discr` are rejected on any
  discriminant column matched with `expr` quotations because matched `Expr`s need only satisfy
  the chosen matching relation, not propositional equality.

### Term Construction (`` `(expr[rel]| t) ``)

In term position, `` `(expr[rel]| t) `` elaborates into `MetaM Expr` (or `m Expr` with
`[MonadSym m]` for `/sym`):

- Preserves `let` and `fun` structure without unwanted beta-reduction (e.g. `$f $x` stays an
  application even if `f` is a lambda).
- Preserves caller pointer sharing and leaves caller metavariables inside `$e` splices
  unassigned. Under `/sym`, results are maximally shared with kernel projections folded.
- Checks `$e` splice types against expected types under `rel` (default `/defeq`; `-inst` is
  disallowed here as well) and synthesizes splice-dependent type-class instances at runtime.
- **Explicit holes only (`refine` semantics)**: only explicit `?h` and `?_` become fresh
  `.syntheticOpaque` metavariables in the caller's context on each evaluation (repeated `?h`
  within one quotation shares one metavariable; each `?_` is distinct). Any other unresolved `_`,
  implicit argument, universe level, or non-splice-dependent type-class instance is a compile-time
  error at the quotation.
- **Type-annotation performance tip**: annotating splice types concretely (for example,
  `($a : Nat) + 1` instead of untyped `$a + 1`) resolves type-class instances statically at
  compile time instead of running runtime instance synthesis on every template evaluation.
- **Outer elaboration scope for splices**: `$e` splices are elaborated in the **enclosing**
  `TermElabM` context, outside the quotation's own elaborator, macro scopes, and numeral
  defaulting context.

## Sources and Goal/Context Primitives

- **`localHypTypes (reverse := false) (except := [])`**: yields non-implementation-detail
  `(hyp, type)` pairs from the current local context (oldest first by default) with assigned
  metavariables instantiated in `type`.
- **`localHypDecls (reverse := false) (except := [])`**: yields `(hyp, type, val?)` triples from
  the current local context; `val?` is `some v` only for dependent `let` declarations (`have`
  declarations yield `none`), with metavariables instantiated in `type` and `val`.
- **`firstHyp` / `firstHyp?` (`TacticM`) and `MVarId.firstHyp` / `MVarId.firstHyp?` (`MetaM` /
  `MonadBacktrack`)**: try `f h ty` across `localHypTypes` (`reverse := true` newest first by
  default), enter the goal's local context automatically, and roll back state atomically on
  failure without admitting `sorry` or leaking diagnostics (`Tactic.firstHyp` throws
  `"firstHyp: no hypothesis matched"`, appending `(last error: ...)` when any non-`failure` error
  occurred).
- **`subterms e (dedup := true) (includeAppPrefixes := false)` + `ExprContext.fill`**: lazy
  outermost-first stream of closed `(subterm, ctx)` pairs. With `dedup := true` (default),
  structurally equal subterms are visited once along their first context path; set
  `dedup := false` to visit every occurrence with its own `ExprContext`. `ctx.fill e'`
  substitutes `e'` into the hole while preserving unchanged subtrees. Note that `subterms`
  traverses `e` syntactically without calling `instantiateMVars`.
- **`subtermsUnderBinders e (dedup := true) (includeAppPrefixes := false)`**: lazy `MetaM`-lifted
  stream yielding `(subterm, ctx)` pairs inside opened `.lam`/`.forallE`/`.letE` binders. During
  each loop iteration, the enclosing binders are live in `LocalContext`, `ctx.binders : Array Expr`
  lists those free variables outermost-first (`#[]` for closed `subterms`), and `ctx.fill e'`
  automatically re-abstracts them when rebuilding the enclosing expression. Prefer `for ... in
  subtermsUnderBinders e do` over `.toArray` when running `MetaM` checks on yielded subterms.
- **`matchDiscriminants e (alsoCasesOn := false) (dedup := true)`**: lazy outermost-first
  stream of closed `match` (and optionally `casesOn`) discriminants paired with `ExprContext`.
  Unlike `subterms`, `matchDiscriminants` instantiates assigned metavariables first. Conditionals
  (`if c then t else e`) are ordinary definitions (`ite`/`dite`), so iterate `subterms` with
  `` `(expr| if ?c then _ else _) `` rather than `matchDiscriminants`.

## Idioms for Porting Rocq `match goal` Tactics

- **Backtracking hypothesis search**: use `firstHyp` (`TacticM`) or `goal.firstHyp` (`MetaM` /
  `MonadBacktrack`) when an arm may mutate the goal before failing (such as `specialize` or
  recursive search). Its `reverse := true` default matches Rocq's newest-first order; handle
  multi-hypothesis patterns by nesting `except` and pinning shared terms with `$P`:
  ```lean
  firstHyp fun h1 ty1 => do
    let `(expr/reducible| (?P : Prop) → _) := ty1 | failure
    firstHyp (except := [h1]) fun h2 ty2 => do
      let `(expr/reducible| $P) := ty2 | failure
      ...
  ```
- **Contextual `change` and `rewrite`**: match a target subterm and its `ExprContext` via
  ``for case (`(expr| pat), ctx) in subterms ...`` and apply contextual `change` with
  `goal.replaceTargetDefEq (ctx.fill e')`. For contextual `rewrite`, pass an equality `eq`
  directly to `goal.rewrite (← goal.getType) eq` (followed by `goal.replaceTargetEq`);
  `kabstract` handles dependent occurrences (such as `Decidable` instances in `ite`) cleanly
  without fragile path-to-occurrence mapping.
- **Direct `MVarId` steps over `Syntax` round-tripping**: drive tactics from `FVarId`/`Expr`
  using `goal.assign`, `goal.cases`, `goal.clear`, `goal.note`, and `replaceMainGoal` rather
  than quoting tactic syntax with `Term.exprToSyntax`, which breaks on inaccessible `h✝` names
  or stale contexts. When tactic syntax is unavoidable (such as `generalize ... at *`), call
  `Term.exprToSyntax` inside `withMainContext`.
- **Context and metavariable hygiene**: `firstHyp` and `MVarId.firstHyp` enter the goal's
  context automatically; when calling `localHypTypes` or `localHypDecls` directly in `TacticM`,
  wrap the block in `withMainContext`. `getMainTarget` and `localHypTypes` instantiate
  metavariables, whereas `subterms` traverses syntactically (call `instantiateMVars` first on
  `MVarId.getType` or `inferType` results).
- **Filtering `match` discriminants**: Lean's compiled `match` expressions often carry
  generalized index discriminants alongside the value being split; filter `matchDiscriminants`
  with a typed pattern such as `` `(expr/reducible| (?x : MyType)) ``.

## Diagnostics

- **``#check_pattern `(expr[rel]| p)``**: elaborates only the pattern path (never evaluating a
  term template) and prints the resolved relation/flags/items, binders and higher-order arities,
  pins, wildcards and unresolved implicits, fixed vs. polymorphic instances, universe
  parameters, closed proof entries, and discrimination-tree indexing eligibility and keys.
- **`trace.Meta.Match.expr`**: zero-overhead when disabled; when enabled, reports indexed
  candidates tried, match hits, and the first mismatch subterm `(pattern vs scrutinee)` across
  all engines.
- **Error hints and linters**:
  - Repeated `?x` in a pattern suggests `$x`; an unbound `$x` identifier pin suggests `?x`.
  - Templates leaving unresolved metavariables or implicits (such as `` `(expr| []) ``) append
    an actionable type-ascription / splice / `?_` note.
  - `linter.exprQuot.numeralDefaulting` (default `true`): warns when a pattern numeral relies
    on `OfNat` defaulting to `Nat` and suggests adding a type annotation such as `(0 : Nat)`.
  - `linter.exprQuot.syntaxHole` (default `true`): warns on named `?x` inside ordinary syntax
    quotations in `Expr`-typed match patterns or `Expr`/`m Expr`-typed term positions (never
    `?_` or `Syntax`/`TSyntax` quotations).
  - `linter.exprQuot.collapsedPattern` (default `true`): warns when a non-variable pattern
    reduces under its own relation to a bare pattern variable (such as `Subtype.mk ?v _ |>.val`
    under `/reducible`), and `#check_pattern` displays the `collapsed normal form`.
  - `linter.exprQuot.uncheckedType` (default `true`): warns when an explicit `(?x : T)` type
    ascription under `/structural` sits solely in type-unconstrained positions.
  - `linter.unusedVariables` ignores object-level binders inside `` `(expr| ∀ x, _) `` while
    still warning on unused `?x` pattern captures and `$...` splices.
  - `exprQuot.debug.checkIndex` (default `false`): debug option that cross-checks indexed
    dispatch against all skipped arms linearly and fails on any disagreement.
