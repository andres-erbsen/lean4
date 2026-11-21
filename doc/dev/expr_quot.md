# Quasi-Quoted `Expr` Patterns (`expr` Quotations)

`expr` quotations provide native syntax `` `(expr[rel]| p) ``—and bare `` `(p) `` in
`Expr`-typed pattern matches and `match (modulo := ...)`—for matching, destructuring,
inspecting, and building Lean `Expr` values directly inside Lean expressions and tactics.

For internal module layout and architectural design rationale, see
[expr_quot_adr.md](expr_quot_adr.md). For a runnable, chapter-by-chapter walkthrough, see
[exprQuotTutorial.lean](../../tests/elab/exprQuotTutorial.lean).

## Surface Syntax and Native Control Flow

An `expr` quotation has the form `` `(expr[/engine] [[±items]] [±flags]| body) ``:

- **No whitespace before `expr`**: write `` `(expr| ...) `` with no space between `` `( `` and
  `expr`. Because `expr` is a non-reserved keyword parsed after `` `( ``, identifiers named
  `expr` (e.g. `` `(expr + 1) ``) and dynamic syntax quotations such as `` `(exprFoo| ...) ``
  remain unambiguous.
- **Bare `` `(p) `` in `Expr` pattern positions**:
  - In `Expr`-typed pattern positions (`match`, `fun |`, `if let`, `let ... |`, `do match`,
    `for case`, including nested constructors such as `some `(?a + ?b)` and
    `match (modulo := ...)`), bare `` `(p) `` promotes automatically to `` `(expr| p) ``
    with default engine `/structural` (explicit `` `(term| ...) `` and `` `(tactic| ...) ``
    stay strictly syntax-only).
- **Pattern vs. term default relation**:
  - In **pattern positions**, the default engine is `/structural`.
  - In **term positions** (evaluating `` `(expr| t) `` in `MetaM Expr` or `[MonadSym m]` to
    build an `Expr`), the default engine is `/defeq` (used to check `$e` splice types).

### Native Control Flow (`match`, `for case`, `match (modulo := rel)`)

`expr` quotations integrate directly into Lean's native pattern-matching constructs—including
`match`, `fun |`, `if let`, `let ... |`, `do match`, `for case`, multi-column matches, nested
inductive patterns (`Option`, `Prod`, `Expr.lam`), and `module` files (`public meta`,
`private meta`, `meta section`):

```lean
open Lean Meta

def classifyTarget (e? : Option Expr) : MetaM String := do
  match e? with
  | some `((?a : Nat) + $a) => return s!"self-sum: {← ppExpr a}"
  | some (.lam n ty body _) => return s!"lambda binder: {n} : {← ppExpr ty}, body={body.dbgToString}"
  | some _ => return "other expr"
  | none => return "missing"

def sumNatConsts (es : List Expr) : MetaM Nat := do
  let mut acc := 0
  for case `(expr/reducible| (?x : Nat) + 0) in es do
    if let some k ← getNatValue? x then
      acc := acc + k
  return acc

def myId (n : Nat) : Nat := n

def matchWithModulo (e : Expr) : MetaM String :=
  match (modulo := defeq) e with
  | `(expr/structural| myId Nat.zero) => return "exact myId Nat.zero"
  | `(myId 0)                   => return "defeq zero"
  | _                                 => return "other"
```

- **Compile-time exhaustiveness and redundancy**: `match` arms over `expr` quotations require a
  catch-all `_` or variable arm covering quotation columns (`if let`, `let ... |`, and `for case`
  have built-in fallbacks). An irrefutable `for case x in xs` emits a redundant-alternative error.
- **`for case` variants**: `for case pat in src`, `for case h : pat in src`, and
  `for h : case pat in src` all iterate `src` and skip non-matching elements via `continue`.
- **`match (modulo := rel)`** (term-mode and `do`-mode): sets a default relation for all
  quotation patterns in the `match`. A per-pattern `/engine` replaces `(modulo := rel)` completely,
  while per-pattern `[items]` and `±flags` extend it.
- **Equality proofs (`match h : d`) vs. object-level `mkEqRefl`**:
  - Top-level `match h : e with | `(p) => ...` (and `let (eq := h) `(p) := e`) is rejected—just
    like `match_syntax` and `match_expr`—because `e` and `p` satisfy the matching relation `rel`
    rather than literal `Lean.Expr` AST equality. Because every supported relation is a
    subrelation of kernel `isDefEq`, `mkEqRefl e` directly produces an object-level proof term
    `Expr` of `$e = $(p)`.
  - When quotation slots appear inside outer constructors (`match h : xs with | `(p) :: rest => ...`
    or `match h : opt with | some `(p) => ...`), `h :` **is** supported and binds the outer
    constructor equality in `Prop` (for invariants and `decreasing_by simp [h]` termination):
    ```lean
    def countAdds : List Expr → MetaM Nat
      | xs => match h : xs with
        | `((?a : Nat) + _) :: rest =>
          have : rest.length < xs.length := by simp [h]
          return 1 + (← countAdds rest)
        | _ :: rest =>
          have : rest.length < xs.length := by simp [h]
          countAdds rest
        | [] => return 0
    ```
- **No macro pre-expansion**: macros inside `` `(expr| ...) `` patterns (such as
  `if c then t else e`) are not expanded before quotation elaboration, keeping user `?c` holes and
  `_` wildcards intact.

## Pattern Binders, Pins, Wildcards, and Higher-Order Patterns

### Linear Binders (`?x`), Pins (`$x`, `$e`), and Rigid Metavariables

- **`?x` (first-occurrence linear binder)**: binds `x : Expr` on its first occurrence and never
  captures variables bound inside the pattern (`∀ x, ?Q` fails on `∀ n, n = n`). Repeating `?x`
  in the same pattern is a compile-time error; write `$x` on later occurrences.
- **`$x` (nonlinear self-pin) and `$e` / `$(e)` (external pin)**: `$e` pins an in-scope `Expr`
  value evaluated in the enclosing Lean context (bare names resolve statically where the quotation
  is written, so goal hypotheses must be pinned with `$h`). When `$x` refers to an earlier `?x` in
  the same pattern, both subterms must match modulo the pattern's relation.
- **Rigid caller metavariables**: across all engines (including `/reducible` and `/defeq`),
  matching runs inside `withNewMCtxDepth`. Caller metavariables inside scrutinees and pins stay
  rigid and are never mutated by `match` (use `Meta.isDefEq`, `MVarId.apply`, or
  `MVarId.assumptionCore` when unification is intended).

```lean
def matchEqualityAndPin (lhsPin e : Expr) : MetaM (Option (Expr × Expr)) := do
  match e with
  | `(expr/reducible| @Eq _ $lhsPin ?rhs) => return some (lhsPin, rhs)
  | `(expr/reducible| @Eq _ ?x $x)        => return some (x, x) -- nonlinear self-pin
  | _                                     => return none
```

### Higher-Order Miller Patterns (`?P x y`)

When `x₁ … xₙ` are distinct pattern-bound variables, `?P x₁ … xₙ` captures a lambda abstraction
(including constant functions and reordered arguments like `∀ x y, ?R y x`).

```lean
def inspectBinderBody (e : Expr) : MetaM (Option Expr) := do
  match e with
  | `(∀ x : Nat, ?P x) =>
    -- Reconstruct `body[42/x]` uniformly whether or not `P` was eta-peeled:
    return some (P.beta #[mkNatLit 42])
  | _ => return none

def matchEtaPeeledPin (e : Expr) : MetaM (Option Expr) :=
  -- Trailing `x` on `f x` eta-peels `P := f`, so `$P 0` matches without `+beta`:
  match e with
  | `((∀ x : Nat, ?P x) ∧ ($P 0)) => return some P
  | _ => return none
```

- **Trailing vs. non-trailing arguments**: when `x y` sit in trailing position on `f x y`,
  `mkLambdaFVars ... (etaReduce := true)` eta-peels `P := f` so `$P 0` matches without `+beta`
  under `/structural`. When `x` is non-trailing (e.g. `∀ x, x + 1 = 2`, giving
  `P := fun x => x + 1 = 2`), `$P 0` constructs a beta redex and requires `+beta` or `/reducible`
  to match `0 + 1 = 2`.
- **`P.beta #[x, y]`**: reconstructs the body on the Lean side uniformly while preserving inner
  lambdas under `/structural` (`-eta`).
- **Miller restrictions**: applications mentioning pattern-bound variables in non-Miller form
  (such as `?P (x + 1)`, `?P x x`, or `?P x 0`) are compile-time errors. Applications with no
  pattern-bound variable arguments (such as `?f ?a` or `?f 0`) remain first-order.

### Wildcards, Binder Type Discipline, and Scope Idioms

- **Wildcards (`_` / `?_`)**: match any subterm without binding a variable; multiple `_` wildcards
  and unresolved implicit arguments are independent and never unify distinct subterms. Non-captured
  `_` under a binder discards pattern-bound `fvar`s (`∀ x, ?P x → _` matches `∀ x, Even x → x = 0`,
  whereas `∀ x, ?P x → ?Q` rejects it).
- **Binder type ascriptions under `/structural` (`(?x : T)` vs. `(?x : ?T)`)**: `/structural`
  matches purely syntactically against the elaborated pattern body without calling `inferType` on
  captures (`O(|pattern|)`). An explicit `(?x : T)` constrains `/structural` only when elaboration
  embeds `T` into the pattern body (for example, `(?x : Nat) + ?y` fixes `@HAdd Nat`). At
  type-unconstrained positions (`(?x : Nat)`, `(?P : Prop) → (?Q : Prop)`, `(?f : _) (?x : Nat)`,
  or after `[Not]` unfolds `¬ ?A`):
  - Type-only binders such as `(?x : ?T)` or `(?f : ?A → ?B) ?x` are rejected at compile time
    under `/structural` (use `/reducible` or inspect types explicitly with `inferType`).
  - Unconstrained explicit ascriptions under `/structural` emit `linter.exprQuot.uncheckedType`
    (switch to `/reducible` for runtime type checks, or match bare `?x` and check `isProp` /
    `isDefEq`).
- **Scope idioms (variadic heads, constructors, carrier aliases)**:
  - `f ..` after a concrete constant is supported in patterns; `..` after a pattern variable or
    pin (`?g ..` or `$g ..`) is rejected at compile time (inspect `e.getAppFn` / `e.getAppArgs`
    at runtime).
  - Matching same-constructor equations (`?C _ = ?C _`): match `?l = ?r` and call
    `Meta.isConstructorApp'?` or `Meta.injection`.
  - Carrier aliases (`abbrev NatSet := FSet Nat`, `@[instance_reducible] def OddNat := Nat`):
    under `/structural +inst`, `[instImplicit]`/`isInstance` arguments and the implicit class
    parameters they depend on (`FunInfo.paramInfo[k].backDeps`) are checked via `.instances`
    `Meta.isDefEq` — so typeclass heads (`∈`, `+`, `-`, `<`) match aliases automatically. Non-
    typeclass heads without a dependent instance parameter (e.g. `List` or `(?s : FSet _)`) still
    keep implicit arguments structural under `+inst` and require `/reducible` or `[NatSet]`.

## Matching Relations, Flags, `[items]`, and `/sym`

Each `` `(expr[rel]| ...) `` quotation accepts an optional `/engine`, an optional `[±item, ...]`
unfold override list, and zero or more `±flag` overrides (`inst`, `beta`, `zeta`, `proj`, `eta`):

| Engine | Default `inst` | Default `beta`/`zeta`/`proj`/`eta` | Semantics |
|---|---|---|---|
| `structural` (pattern default) | `false` | all `false` | Syntactic modulo `mdata`, head mvars, proof irrel. |
| `reducible` | `true` | all `true` | `Meta.isDefEq` at `.reducible` (`unificationHints := false`) |
| `instances` | `true` | all `true` | `Meta.isDefEq` at `.instances` |
| `defeq` (term default) | `true` | all `true` | `Meta.isDefEq` at `.default` |
| `sym` | `true` | all `true` | `Sym` modulo `beta`/`eta`/`let`/`zetaDelta`/projs/offsets |

### `+inst`, `[±items]`, and `±flags`

```lean
abbrev dbl (n : Nat) : Nat := n + n
def tpl (n : Nat) : Nat := n + n + n
@[reducible] def addNat' : Add Nat := ⟨Nat.add⟩

def relationHits (x e : Expr) : MetaM (List String) := do
  let mut hits := []
  if let `(expr| (?a : Nat) + $a) := e then hits := hits ++ ["structural"]
  if let `(expr +inst| (?a : Nat) + $a) := e then hits := hits ++ ["+inst"]
  if let `(expr/reducible| (?a : Nat) + $a) := e then hits := hits ++ ["reducible"]
  if let `(expr/structural [+tpl]| (?a : Nat) + $a + ?_) := e then
    hits := hits ++ ["[+tpl]"]
  if let `(expr/structural [+$x]| (10 : Nat) + 20) := e then
    hits := hits ++ ["[+localLet]"]
  if let `(expr/reducible [Not, Ne]| ¬ _) := e then
    hits := hits ++ ["notOrNe"]
  return hits
```

- **`+inst` in `/structural`**: matches ordinary subterms structurally while checking
  `isInstance` / `[instImplicit]` arguments and their implicit backward-dependency class
  parameters via `.instances` `Meta.isDefEq` (ideal for polymorphic typeclasses such as
  `Membership`, `HAdd`, `HSub`, `LT` even with reducible carrier or outParam aliases). On
  `/reducible`, `/instances`, `/defeq`, and `/sym`, instance comparison is always enabled and
  `-inst` is rejected at compile time and runtime.
- **`[±decl, ±simpSet, ±$x]`**: rules apply left-to-right (**last wins**). Static `[decl]`
  items must name an unfoldable definition (`ConstantInfo.hasValue`); theorems (such as
  `Subtype.property`), constructors (`Nat.succ`), inductive types, recursors (`Nat.rec`), axioms,
  and opaque constants are rejected at compile time and runtime. Removing an item (`-c` or
  `-simp`) when neither the base engine nor an earlier `+` item unfolds it is an error. Local
  `$x` / `$(e)` items must evaluate to a free variable for a dependent `let` declaration in the
  current `LocalContext` (non-dependent `have` declarations and ordinary hypotheses are rejected).
- **Reduction flags (`±beta`, `±zeta`, `±proj`, `±eta`)**:
  - `±zeta` controls **both** `let` expressions inside terms (`zeta`) and `let`-bound local
    definitions in `LocalContext` (`zetaDelta`, overridable per local via `[±$x]`).
  - `+beta` steps inspected head beta-redexes (`headBeta`); `+proj` contracts kernel `.proj`
    applied to constructors (`projectCore?`).
  - `±eta` toggles `λ`-eta in `/structural`; `-eta` on `isDefEq` engines disables structure eta
    (`etaStruct := .none`) while retaining `Meta.isDefEq`'s `λ`-eta and `Nat`/unit reductions.
- **Unification hints disabled under `/reducible`**: under `/reducible`, unification hints are off
  so single-arm and indexed multi-arm dispatch agree cleanly. Matching `P → False` with `¬ ?A`
  (or `a ≠ b`) requires explicit `[Not]` (or `[Not, Ne]`).

### Structure Projections (`+proj` vs. `[S.field]` vs. `/reducible -proj`)

Surface `s.val` elaborates to `@Subtype.val _ _ s`, whereas `whnf`, `unfold`, or `cases` can
expose kernel `.proj ``Subtype 0 s`. Because constructor-redex contraction (`+proj`) and projection
definition unfolding (`[S.field]`) are orthogonal:

| Construct | Meaning | Behavior on `s.val` / `.proj` / `⟨v, h⟩.val` |
|---|---|---|
| `/structural` | Strictly syntactic | Matches `@S.field _ s` only against `@S.field` |
| `/structural +proj` | Contracts `.proj` constructor redexes | Reduces `.proj S i (S.mk ...)`; misses `.proj S i s` vs `@S.field` |
| `/structural [S.field]` | Unfolds `S.field` to `.proj S i` | Matches `@S.field _ s` against both `@S.field` and `.proj` |
| `/structural [S.field] +proj` | Unfolds field & contracts redexes | Collapses `S.val (S.mk ?v _)` in patterns to `?v` |
| `/reducible` | `isDefEq` at `.reducible` (`-hints`) | Unfolds `@[reducible]` projs & reduces `⟨v, h⟩.val` to `v` |
| `/reducible -proj` | `isDefEq` without `.proj` redexes | Matches `S.val ?mk` against unreduced `.proj S i ⟨x, hx⟩` |

```lean
def matchSubtypeProj (e : Expr) : MetaM (Option Expr) := do
  match e with
  -- Matches both `@Subtype.val _ _ s` and `.proj ``Subtype 0 s`:
  | `(expr/structural [Subtype.val]| Subtype.val ?s) => return some s
  -- Matches unreduced `.proj ``Subtype 0 ⟨x, hx⟩` without collapsing `⟨x, hx⟩`:
  | `(expr/reducible -proj| Subtype.val (Subtype.mk ?v _)) => return some v
  | _ => return none
```

### Non-Substituting `let` Re-Wrapping and Lazy Metavariables

- **`/structural +zeta` non-substituting `let` look-through**: captured subterms mentioning
  looked-through `let` variables are re-wrapped with **only** the dependent `let` bindings they
  actually reference (leaving direct local `let`-bound free variables bare):

  ```lean
  def matchUnderLet (e : Expr) : MetaM (Option Expr) :=
    match e with
    | `(expr/structural +zeta| Nat.add ?y 0) => return some y
    | _ => return none

  -- Given `let x := 10 + 20; let u := 99; Nat.add (Nat.add x x) 0`:
  -- `matchUnderLet` returns `let x := 10 + 20; Nat.add x x` (omitting unused `u`).
  -- Given local `let cx := 10 + 20` and `Nat.add cx 0`, it returns bare `cx`.
  ```

- **`isDefEq` engines (`/reducible`, `/instances`, `/defeq`)**: outer or inspected `let` bindings
  independent of pattern binders are lifted and re-wrapped when possible; when a `let` value
  depends on a pattern binder (or fallback `zeta` unfolding is triggered), `Meta.isDefEq`
  substitutes the `let` and captures may be normalized.
- **Lazy metavariables under `/structural`**: `/structural` resolves assigned metavariables at
  inspected heads without traversing uninspected subtrees; call `instantiateMVars` on captures
  when downstream code inspects nested subterms structurally.

### `/sym` Engine and Numeral / Offset Decomposition

`` `(expr/sym| ...) `` requires a `[MonadSym m]` monad (`SymM`, `GrindM`, `GoalM`, `Sym.Simp.SimpM`,
`Sym.DSimp.DSimpM`, or `GrindTacticM` inside `sym =>` tactics). It rejects `[items]`, local `$x`
items, and disabling `-inst`/`-beta`/`-zeta`/`-proj`/`-eta`.

- **Numerals vs. offsets**: `` `(expr/sym| 5) `` matches literal `5` (and reducible equivalents),
  whereas `` `(expr/sym| Nat.succ ?n) `` or `` `(expr/sym| (?n : Nat) + 1) `` /
  `` `(expr/sym| Even (?n + 2)) `` uses `Sym`'s offset representation to decompose numeral `5`
  into `n := 4` (or `Even 6` into `n := 4`). Matching under `/sym` rejects unresolved instance
  constraints and never leaks temporary metavariables into the caller's `MetavarContext`.

```lean
open Lean.Meta.Sym (SymM)

def predSym? (e : Expr) : SymM (Option Expr) := do
  match e with
  | `(expr/sym| Nat.succ ?n) => return some n -- matches `5` with `n := 4`, and `x + 1` with `n := x`
  | _ => return none
```

### Automatic Discrimination-Tree Indexing

Consecutive single-slot match arms on the same discriminant column sharing `/structural` (with or
without `+inst`, no `[items]` or look-through flags), `/reducible` (default reduction flags), or
`/sym` — without local `$x` items — are automatically compiled into `DiscrTree` dispatch tables in
exact source order.

## Term Construction (`` `(expr[rel]| t) ``)

In term position, `` `(expr[rel]| t) `` elaborates to `MetaM Expr` (or `m Expr` with `[MonadSym m]`
for `/sym`):

```lean
def buildExamples (a b p q P : Expr) : MetaM (Expr × Expr × Expr × Expr × Expr) := do
  -- Static TC synthesis (typed splices allocate zero runtime mvars):
  let sumStatic ← `(expr| ($a : Nat) + ($b : Nat))
  -- Runtime TC synthesis (synthesizes splice-dependent instances per call):
  let sumRuntime ← `(expr| $a + $b)
  -- Preserves structure without beta-reducing `$P $b`:
  let app ← `(expr| $P $b)
  -- Explicit `?h`/`?_` holes become fresh `.syntheticOpaque` mvars in caller MCtx:
  let skel ← `(expr| (And.intro ?left ?right : $p ∧ $q))
  let anon ← `(expr| (?_ : Nat) + (?_ : Nat)) -- two distinct anonymous holes
  return (sumStatic, sumRuntime, app, skel, anon)
```

- **Splice evaluation and type checking**: `$e` splices elaborate in the **enclosing** `TermElabM`
  scope (outside the quotation's macro scopes and numeral defaulting) and check `$e`'s runtime
  type against the expected type under `rel` (default `/defeq`; `-inst` is rejected).
- **Static vs. runtime type-class synthesis**: untyped `` `(expr| $a + $b) `` synthesizes
  splice-dependent type-class instances at runtime, whereas concrete annotations such as
  `` `(expr| ($a : Nat) + ($b : Nat)) `` resolve instances statically at compile time. Whether
  unified from an earlier or later splice, any reachable `[inst]` parameter is matched against the
  splice's type before falling back to `synthInstance`, and any already-unified instance is kept
  without re-running `synthInstance` (`synthAssignedInstances := false` semantics), so local or
  non-global instances are preserved in any argument order and a conflicting splice raises an
  `"expr quotation splice type mismatch"` error.
- **Structure and sharing**: `let`/`fun` structure and repeated `$x` pointer sharing stay intact,
  `$f $x` never beta-reduces, and caller metavariables inside `$e` stay unassigned. Under `/sym`,
  terms are maximally shared with kernel `.proj` nodes folded.
- **Explicit holes only (`refine` semantics)**: only explicit `?h` (one shared `.syntheticOpaque`
  mvar per name per evaluation) and `?_` (distinct per occurrence per evaluation) become fresh
  holes in the caller's `MetavarContext`. Any other unresolved `_`, implicit argument, universe
  level (such as `` `(expr| []) `` or `` `(expr| PUnit) ``), or non-splice-dependent type-class
  instance is a compile-time error at the quotation.

## Goal Inspection, Context Streams, and Rocq `Ltac` Comparison

### Exact Public Signatures (`Lean.Meta` and `Lean.Elab.Tactic`)

```lean
-- Local context inspection (`src/Lean/Meta/ExprPatternCore.lean`;
-- `import Lean.Meta.ExprPatternCore` avoids `SymM` when `/sym` is not needed):
def localHypTypes (reverse : Bool := false) (except : List Expr := []) :
    MetaM (Array (Expr × Expr))

def localHypDecls (reverse : Bool := false) (except : List Expr := []) :
    MetaM (Array (Expr × Expr × Option Expr))
-- Note: `val?` is `some v` only for dependent `let` declarations (`have` yields `none`).

-- Backtracking hypothesis search (`ExprPatternCore.lean` and `FirstHyp.lean`):
def _root_.Lean.MVarId.firstHyp? {ε : Type} [Monad m] [MonadControlT MetaM m]
    [MonadLiftT MetaM m] [MonadBacktrack s m] [MonadExcept ε m]
    (mvarId : MVarId) (f : Expr → Expr → m α)
    (reverse : Bool := true) (except : List Expr := []) : m (Option α)

def _root_.Lean.MVarId.firstHyp {ε : Type} [Monad m] [MonadControlT MetaM m]
    [MonadLiftT MetaM m] [MonadBacktrack s m] [MonadExcept ε m] [MonadError m]
    (mvarId : MVarId) (f : Expr → Expr → m α)
    (reverse : Bool := true) (except : List Expr := []) : m α

def Elab.Tactic.firstHyp? (f : Expr → Expr → TacticM α)
    (reverse : Bool := true) (except : List Expr := []) : TacticM (Option α)

def Elab.Tactic.firstHyp (f : Expr → Expr → TacticM α)
    (reverse : Bool := true) (except : List Expr := []) : TacticM α

-- Zipper contexts & subterm/discriminant streams (`ExprPatternCore.lean`):
structure ExprContext
def ExprContext.binders (ctx : ExprContext) : Array Expr
def ExprContext.fill (ctx : ExprContext) (replacement : Expr) : Expr

def subterms (e : Expr) (dedup : Bool := true) (includeAppPrefixes : Bool := false) : Subterms
def subtermsUnderBinders (e : Expr) (dedup : Bool := true)
    (includeAppPrefixes : Bool := false) : SubtermsUnderBinders
def matchDiscriminants (e : Expr) (alsoCasesOn : Bool := false)
    (dedup : Bool := true) : MatchDiscriminants
```

Key behavior notes:
- **`firstHyp` / `firstHyp?`**: default to `reverse := true` (newest first), enter the goal's
  local context automatically, instantiate metavariables in `ty`, and roll back failing arms
  atomically (`Tactic.firstHyp` disables incrementality, `errToSorry`, and recovery, restores
  `InfoTree`s via `restoreInfo := true`, and appends `(last error: ...)` if a non-`failure` error
  occurred).
- **`subterms` vs. `subtermsUnderBinders`**: `subterms` is pure (`Id`-compatible) and yields only
  closed `(sub, ctx)` pairs (`ctx.binders == #[]`) without calling `instantiateMVars` (instantiate
  raw `MVarId.getType` / `inferType` results first). `subtermsUnderBinders` runs in `MetaM`,
  opening `.lam`/`.forallE`/`.letE` binders with `withLocalDecl`/`withLetDecl`; inside each `for`
  step, `ctx.binders` holds the live outer-to-inner binder free variables and `ctx.fill repl`
  re-abstracts them automatically. Always iterate `subtermsUnderBinders` with `for ... in` when
  running `MetaM` checks (`.toArray` exits binder scopes).
- **`matchDiscriminants`**: instantiates metavariables and emits closed `match` (and optionally
  `casesOn`) discriminants. Compiled `match` expressions often include generalized index
  discriminants, so filter with a typed pattern such as `` `(expr/reducible| (?d : Bool)) ``.
  Because `if c then t else e` (`ite`/`dite`) and `bif` (`cond`) are ordinary definitions rather
  than `MatcherApp` nodes, match them via `subterms` with `` `(if ?c then _ else _) ``.

### Conceptual Map & Side-by-Side Idioms (Rocq `Ltac` -> Lean 4)

Where Rocq `Ltac` bundles hypothesis matching, backtracking, contextual search, and term
building inside `match goal` and `constr:(...)`, Lean separates each role cleanly:

| Rocq `Ltac` Idiom | Lean 4 Counterpart | Key Difference |
|---|---|---|
| `lazymatch t with \| ...` | `match e with \| `(p) => ...` / `` `(expr[rel]\| p) `` | Native control flow; mixes with `Option`/`Prod` |
| `?x` (first) ... `?x` (later) | `?x` (linear binder) ... `$x` (self-pin) | Repeating `?x` is a compile error; pins use `$x`/`$e` |
| `match goal with \| H : P \|- G` | `firstHyp` / `firstHyp?` + `localHypDecls` | Explicit `except` & `reverse := true` backtracking |
| `context C[pat]` | `subterms` / `subtermsUnderBinders` / `matchDiscriminants` | Lazy `(sub, ctx)` streams + `ExprContext.fill` |
| `constr:(t)` / `uconstr:(t)` | `` `(expr[rel]\| t) `` in term position | Runtime `$e` checks; only explicit `?h`/`?_` open holes |

**1. Multi-hypothesis `match goal` (`chain_mp`)**:

```coq
(* Rocq Ltac *)
Ltac chain_mp :=
  match goal with
  | H1 : ?P, H2 : ?P -> ?Q |- ?Q => exact (H2 H1)
  end.
```
```lean
elab "chain_mp" : tactic => do
  let goal ← getMainGoal
  firstHyp fun h₁ P =>
    firstHyp (except := [h₁]) fun h₂ ty₂ => do
      let `(expr/reducible| $P → ?Q) := ty₂ | failure
      unless ← isDefEq Q (← goal.getType) do failure
      goal.assign (mkApp h₂ h₁)
      replaceMainGoal []
```

**2. Contextual `change`, `rewrite`, and binder-descending `forall_and`**:

```lean
open Lean Meta Elab Tactic

-- Contextual `change` via `subterms` + `ExprContext.fill`:
elab "succ_to_add" : tactic => withMainContext do
  let goal ← getMainGoal
  for case (`(Nat.succ ?n), ctx) in subterms (← getMainTarget) do
    replaceMainGoal [← goal.replaceTargetDefEq (ctx.fill (← `(expr| ($n : Nat) + 1)))]
    return
  throwError "succ_to_add: no `Nat.succ` found"

-- Binder-descending scan via `subtermsUnderBinders`:
def findQuantifiedAddZero (hyps : Array (Expr × Expr)) : MetaM (Option (Expr × Expr)) := do
  for (h, ty) in hyps do
    for case (`((?x : Nat) + 0), ctx) in subtermsUnderBinders ty do
      if !ctx.binders.isEmpty then
        return some (h, ctx.fill x)
  return none
```

- **Contextual `rewrite`**: pass an equality proof `eq` to `goal.rewrite (← goal.getType) eq`
  followed by `goal.replaceTargetEq` so `kabstract` updates dependent occurrences (such as
  `Decidable` instances in `ite`) cleanly.
- **Direct `MVarId` operations over `Syntax` round-tripping**: drive goals via `goal.assign`,
  `goal.cases`, `goal.clear`, `goal.note`, and `replaceMainGoal` rather than `Term.exprToSyntax`,
  which breaks on inaccessible `h✝` names (if syntax is required, call `Term.exprToSyntax` inside
  `withMainContext`).

## Diagnostics and Linters

### `#check_pattern` Output

``#check_pattern `(expr[rel]| p)`` runs only pattern elaboration and displays relation flags/items,
binders and higher-order arities, pins, wildcards, fixed vs. polymorphic instances, universe
parameters, closed proofs, and `DiscrTree` indexing eligibility (plus `collapsed normal form` when
a non-variable pattern collapses under its own relation):

```lean
#check_pattern `(expr| (?x : Nat) + _)
-- pattern: ?x + _
-- relation: structural [-inst, -beta, -zeta, -proj, -eta] (items: none)
-- binders: ?x : Nat (first-order)
-- pins: none
-- wildcards:
--   var #1 : Nat [explicit `_`/`?_` @ `HAdd.hAdd` arg #5 (explicit); not captured]
-- fixed instances: `instHAdd` : HAdd Nat Nat Nat (at `HAdd.hAdd` arg #3),
--   `instAddNat` : Add Nat (at `instHAdd` arg #1)
-- polymorphic instances: none
-- universe params: none
-- closed proofs: none
-- indexing: eligible (DiscrTree keys: [HAdd.hAdd, Nat, Nat, Nat, instHAdd, Nat, instAddNat, *, *])

#check_pattern `(expr/reducible| Subtype.val (Subtype.mk (?v : Nat) _))
-- pattern: ⟨?v, _⟩.val
-- collapsed normal form: ?v
-- relation: reducible [+inst, +beta, +zeta, +proj, +eta] (items: none)
-- binders: ?v : Nat (first-order)
-- ...
-- indexing: eligible (DiscrTree keys: [*])
```

### `trace.Meta.Match.expr` Output

`trace.Meta.Match.expr` has zero overhead when disabled; when enabled, it logs indexed
candidates tried, match hits, and the first mismatching subterm across every engine (including
projection encoding hints):

```lean
-- With `set_option trace.Meta.Match.expr true` on `(?a : Nat) * $a` against `2 * 3`:
-- [Meta.Match.expr] [indexed structural] trying candidates [0] of 2 for:
--       2 * 3
-- [Meta.Match.expr] [structural] failed:
--       ?a * ?a
--     against:
--       2 * 3
--     first mismatch:
--       2
--     against:
--       3
--     (literal mismatch)

-- On `Subtype.val ?x` against kernel `.proj ``Subtype 0 s` under `/structural`:
--     (projection function `Subtype.val` vs kernel projection;
--       add `[Subtype.val]` to match both encodings)
```

### Linters and Debug Options

| Option | Default | Behavior |
|---|---|---|
| `linter.exprQuot.syntaxHole` | `true` | Warns on named `?x` inside explicit syntax quotations (e.g. `` `(term\| ?x) ``) in `Expr`-typed match patterns (also an error) or bare `` `(?x) `` in `Expr` / `m Expr` term positions; ignores `?_` and `Syntax`/`TSyntax`. |
| `linter.exprQuot.uncheckedType` | `true` | Warns when an explicit `(?x : T)` type ascription in a `/structural` pattern sits solely in type-unconstrained positions. |
| `linter.exprQuot.collapsedPattern` | `true` | Warns when a non-variable pattern reduces under its own relation to a bare pattern variable (such as `Subtype.mk ?v _ \|>.val` under `/reducible`). |
| `linter.exprQuot.numeralDefaulting` | `true` | Warns when a pattern numeral relies on `OfNat` defaulting to `Nat`, suggesting `(n : Nat)`. |
| `linter.unusedVariables` | `true` | Built-in hook ignores object-level binders inside `` `(expr\| ∀ x, _) `` while still warning on unused `?x` pattern captures and `$...` splice variables. |
| `exprQuot.debug.checkIndex` | `false` | Cross-checks `DiscrTree`-indexed dispatch against skipped arms linearly and errors on mismatch. |

- **Error hints**: repeated `?x` in a pattern suggests `$x`; an unbound `$x` pin suggests `?x`;
  templates leaving unresolved implicits or universes (such as `` `(expr| []) ``) append a note
  reminding authors to annotate types, splice values, or write `?_`.

## Tutorials and Use-Case Showcases

- [exprQuotTutorial.lean](../../tests/elab/exprQuotTutorial.lean): end-to-end literate tutorial
  covering patterns, templates, context streams, diagnostics, and Rocq `Ltac` comparisons.
- [exprQuotUseCaseMatchGoal.lean](../../tests/elab/exprQuotUseCaseMatchGoal.lean): ports of Rocq
  `match goal` tactics (`chain_mp`, `split_ands`, `clear_refl`, `inst_forall`, `close_by_let`,
  `try_hyps`).
- [exprQuotUseCaseRewrite.lean](../../tests/elab/exprQuotUseCaseRewrite.lean): `nat_norm`,
  contextual `change`, `matchDiscriminants`, proof holes, relation comparison, and
  `subtermsUnderBinders`.
- [exprQuotUseCaseSymDiag.lean](../../tests/elab/exprQuotUseCaseSymDiag.lean): `/sym` offsets,
  `sym =>` tactic dispatch, `#check_pattern`, traces, error hints, and linters.
- Additional test suites: [exprQuotMatch.lean](../../tests/elab/exprQuotMatch.lean),
  [exprQuotBuild.lean](../../tests/elab/exprQuotBuild.lean),
  [exprQuotSym.lean](../../tests/elab/exprQuotSym.lean),
  [exprQuotDiag.lean](../../tests/elab/exprQuotDiag.lean),
  [firstHyp.lean](../../tests/elab/firstHyp.lean), and
  [forCase.lean](../../tests/elab/forCase.lean).
