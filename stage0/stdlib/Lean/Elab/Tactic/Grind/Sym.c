// Lean compiler output
// Module: Lean.Elab.Tactic.Grind.Sym
// Imports: public import Lean.Elab.Tactic.Grind.Basic public import Lean.Meta.ExprPattern import Lean.Elab.Tactic.Grind.SimprocDSL import Lean.Meta.Sym.Grind import Lean.Meta.Sym.Simp.Variant import Lean.Meta.Sym.Simp.Rewrite import Lean.Meta.Sym.Simp.EvalGround import Lean.Meta.Sym.Simp.Goal import Lean.Meta.Sym.Simp.Attr import Lean.Meta.Sym.Simp.ControlFlow import Lean.Meta.Sym.Simp.Forall import Lean.Meta.Tactic.Apply import Lean.Elab.Tactic.Location import Lean.Elab.SyntheticMVars import Lean.Elab.Tactic.FirstHyp
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_replaceMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_ensureSym___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Meta_tactic_hygienic;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_intros___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftSymM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Meta_Grind_Goal_internalizeAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_elabSymSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_elabSymDischarger(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_insert(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_mkSymSimpDischarger___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpArrowTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_getSymSimpTheorems___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Sym_Simp_EvalGround_0__Lean_Meta_Sym_Simp_evalGroundCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_toSimpGoalResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Elab_Tactic_Grind_instHashableSimpCacheKey_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_Elab_Tactic_Grind_instBEqSimpCacheKey_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkTheoremFromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_realizeGlobalConstNoOverload(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkTheoremsFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_Tactic_Grind_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* l_Lean_Elab_Tactic_Grind_getUnsolvedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_setGoals___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isHeadBetaTarget(lean_object*, uint8_t);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_localHypTypes(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_SavedState_restore___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_getMessageLog___redArg(lean_object*);
lean_object* l_Lean_MessageLog_toArray(lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_withoutRecover___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_dbg_trace(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_focus___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_introN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_internalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_toNat(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_apply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_mkFreshBinderNameForTactic___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftSymM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_byContra_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_exfalso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_assumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_instMonadSymOfMonadLiftTGrindTacticM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_instMonadSymOfMonadLiftTGrindTacticM___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_instMonadSymOfMonadLiftTGrindTacticM(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Grind_intro1_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Grind_intro1_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Grind_intro1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "`intro` failed, no binders to introduce"};
static const lean_object* l_Lean_Elab_Tactic_Grind_intro1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_intro1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Grind_intro1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Grind_intro1___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Grind_intro1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "`intro1` failed"};
static const lean_object* l_Lean_Elab_Tactic_Grind_intro1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_intro1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Grind_intro1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Grind_intro1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_intro1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_intro1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "`intro` failed"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "symIntro"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__4_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__3_value),LEAN_SCALAR_PTR_LITERAL(29, 177, 203, 220, 6, 189, 203, 250)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "token"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__5_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__6_value),LEAN_SCALAR_PTR_LITERAL(234, 149, 90, 50, 108, 230, 18, 172)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__5_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__8_value),LEAN_SCALAR_PTR_LITERAL(97, 134, 219, 90, 90, 45, 96, 32)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__1_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__4_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 58, 227, 168, 195, 28, 19, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__5_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(243, 88, 6, 248, 93, 59, 25, 68)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Sym"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__6_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(14, 249, 158, 186, 145, 195, 187, 23)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(55, 189, 172, 192, 50, 135, 68, 111)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__9_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(202, 134, 96, 207, 7, 76, 78, 141)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__10_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(8, 233, 248, 222, 11, 248, 200, 242)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__11_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(245, 106, 116, 218, 92, 67, 38, 89)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(99, 106, 132, 22, 50, 105, 182, 49)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__13_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "evalSymIntro"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__13_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(80, 149, 109, 100, 17, 3, 240, 42)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__15 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__15_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___boxed(lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "`intros` failed"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "symIntros"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__0_value),LEAN_SCALAR_PTR_LITERAL(51, 175, 114, 140, 112, 61, 143, 32)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "evalSymIntros"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__13_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(11, 50, 79, 89, 204, 3, 67, 70)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Grind_getMainTarget_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Grind_getMainTarget_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Grind_getMainTarget_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Grind_getMainTarget_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getMainTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getMainTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_headBetaMainGoal___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_headBetaMainGoal___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_headBetaMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_headBetaMainGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRule___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRule___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Grind_applyBackwardRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "`apply` failed, rule is not applicable"};
static const lean_object* l_Lean_Elab_Tactic_Grind_applyBackwardRule___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_applyBackwardRule___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Grind_applyBackwardRule___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Grind_applyBackwardRule___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_applyBackwardRule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_applyBackwardRule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_applyDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_applyDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Grind_refl_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Failed"};
static const lean_object* l_Lean_Elab_Tactic_Grind_refl_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_refl_x3f___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Grind_refl_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Grind_refl_x3f___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_refl_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_refl_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Grind_refl_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Elab_Tactic_Grind_refl_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_refl_x3f___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Grind_refl_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l_Lean_Elab_Tactic_Grind_refl_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_refl_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Grind_refl_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Grind_refl_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Grind_refl_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Grind_refl_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Grind_refl_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l_Lean_Elab_Tactic_Grind_refl_x3f___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_refl_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_refl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_refl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_assumption_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_assumption_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Grind.whileGoals"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_whileGoals(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_whileGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Grind_andThenSubgoals_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Grind_andThenSubgoals_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_andThenSubgoals___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_andThenSubgoals___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_andThenSubgoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_andThenSubgoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Grind_andThenSubgoals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Grind_andThenSubgoals_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "reuse"};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(46, 30, 230, 20, 64, 162, 204, 1)}};
static const lean_ctor_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(32, 17, 142, 189, 192, 166, 31, 124)}};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__2_value;
static const lean_string_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "reuse stopped: guard failed at "};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__0___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___lam__0(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_firstHyp_x3f___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_firstHyp_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_firstHyp_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_firstHyp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "firstHyp: no hypothesis matched"};
static const lean_object* l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "firstHyp: no hypothesis matched (last error: "};
static const lean_object* l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_firstHyp___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_firstHyp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_firstHyp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_firstHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "symApply"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__0_value),LEAN_SCALAR_PTR_LITERAL(79, 244, 96, 104, 113, 83, 151, 74)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "evalSymApply"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__13_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 76, 198, 160, 61, 155, 125, 159)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "symInternalize"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 99, 88, 106, 108, 255, 121, 14)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "evalSymInternalize"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__13_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(28, 80, 70, 92, 195, 181, 237, 108)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "symInternalizeAll"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 177, 44, 29, 183, 33, 46, 54)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "evalSymInternalizeAll"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__13_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 156, 163, 183, 131, 232, 47, 217)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "`by_contra` failed"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "`by_contra` failed, target is already `False`"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "symByContra"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 214, 28, 119, 209, 102, 217, 193)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "evalSymByContra"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__13_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(201, 178, 189, 218, 163, 141, 72, 213)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_trivialSimproc___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_trivialSimproc___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_trivialSimproc___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_trivialSimproc___redArg();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_trivialSimproc___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_trivialSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_trivialSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptSimproc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptDischarger___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_dischargeNone___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptDischarger___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptDischarger___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptDischarger(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptDischarger___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems___closed__0_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_simp___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__0___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___closed__0_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__1___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___closed__0_value)} };
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(255) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_defaultDischargerConfig(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkDefaultDischarger___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkDefaultDischarger___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkDefaultDischarger(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkDefaultDischarger___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unknown Sym.simp variant `"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__3;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100000) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_simpGoal___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_simpGoal___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_simpGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_simpGoal___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_simpGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_simpGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_simpMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_simpMainGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__2(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "`Sym.simp` made no progress"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "symSimp"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 109, 151, 25, 234, 136, 56, 252)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__3_value;
static const lean_array_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "evalSymSimp"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__13_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(171, 49, 43, 242, 120, 141, 167, 110)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_instMonadSymOfMonadLiftTGrindTacticM___redArg___lam__0(lean_object* v_inst_1_, lean_object* v_00_u03b1_2_, lean_object* v_x_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Grind_liftSymM___boxed), 11, 2);
lean_closure_set(v___x_4_, 0, lean_box(0));
lean_closure_set(v___x_4_, 1, v_x_3_);
v___x_5_ = lean_apply_2(v_inst_1_, lean_box(0), v___x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_instMonadSymOfMonadLiftTGrindTacticM___redArg(lean_object* v_inst_6_){
_start:
{
lean_object* v___f_7_; 
v___f_7_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Grind_instMonadSymOfMonadLiftTGrindTacticM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_7_, 0, v_inst_6_);
return v___f_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_instMonadSymOfMonadLiftTGrindTacticM(lean_object* v_m_8_, lean_object* v_inst_9_){
_start:
{
lean_object* v___f_10_; 
v___f_10_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Grind_instMonadSymOfMonadLiftTGrindTacticM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_10_, 0, v_inst_9_);
return v___f_10_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Grind_intro1_spec__0(lean_object* v_opts_11_, lean_object* v_opt_12_){
_start:
{
lean_object* v_name_13_; lean_object* v_defValue_14_; lean_object* v_map_15_; lean_object* v___x_16_; 
v_name_13_ = lean_ctor_get(v_opt_12_, 0);
v_defValue_14_ = lean_ctor_get(v_opt_12_, 1);
v_map_15_ = lean_ctor_get(v_opts_11_, 0);
v___x_16_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_15_, v_name_13_);
if (lean_obj_tag(v___x_16_) == 0)
{
uint8_t v___x_17_; 
v___x_17_ = lean_unbox(v_defValue_14_);
return v___x_17_;
}
else
{
lean_object* v_val_18_; 
v_val_18_ = lean_ctor_get(v___x_16_, 0);
lean_inc(v_val_18_);
lean_dec_ref_known(v___x_16_, 1);
if (lean_obj_tag(v_val_18_) == 1)
{
uint8_t v_v_19_; 
v_v_19_ = lean_ctor_get_uint8(v_val_18_, 0);
lean_dec_ref_known(v_val_18_, 0);
return v_v_19_;
}
else
{
uint8_t v___x_20_; 
lean_dec(v_val_18_);
v___x_20_ = lean_unbox(v_defValue_14_);
return v___x_20_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Grind_intro1_spec__0___boxed(lean_object* v_opts_21_, lean_object* v_opt_22_){
_start:
{
uint8_t v_res_23_; lean_object* v_r_24_; 
v_res_23_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Grind_intro1_spec__0(v_opts_21_, v_opt_22_);
lean_dec_ref(v_opt_22_);
lean_dec_ref(v_opts_21_);
v_r_24_ = lean_box(v_res_23_);
return v_r_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1_spec__1(lean_object* v_msgData_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v___x_31_; lean_object* v_env_32_; uint8_t v___x_33_; lean_object* v_env_34_; lean_object* v___x_35_; lean_object* v_toCold_36_; lean_object* v_mctx_37_; lean_object* v_lctx_38_; lean_object* v_options_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_31_ = lean_st_ref_get(v___y_29_);
v_env_32_ = lean_ctor_get(v___x_31_, 0);
lean_inc_ref(v_env_32_);
lean_dec(v___x_31_);
v___x_33_ = 0;
v_env_34_ = l_Lean_Environment_setRecordingDeps(v_env_32_, v___x_33_);
v___x_35_ = lean_st_ref_get(v___y_27_);
v_toCold_36_ = lean_ctor_get(v___y_28_, 0);
v_mctx_37_ = lean_ctor_get(v___x_35_, 0);
lean_inc_ref(v_mctx_37_);
lean_dec(v___x_35_);
v_lctx_38_ = lean_ctor_get(v___y_26_, 2);
v_options_39_ = lean_ctor_get(v_toCold_36_, 2);
lean_inc_ref(v_options_39_);
lean_inc_ref(v_lctx_38_);
v___x_40_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_40_, 0, v_env_34_);
lean_ctor_set(v___x_40_, 1, v_mctx_37_);
lean_ctor_set(v___x_40_, 2, v_lctx_38_);
lean_ctor_set(v___x_40_, 3, v_options_39_);
v___x_41_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
lean_ctor_set(v___x_41_, 1, v_msgData_25_);
v___x_42_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_42_, 0, v___x_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1_spec__1___boxed(lean_object* v_msgData_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1_spec__1(v_msgData_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg(lean_object* v_msg_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
lean_object* v_ref_56_; lean_object* v___x_57_; lean_object* v_a_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_66_; 
v_ref_56_ = lean_ctor_get(v___y_53_, 2);
v___x_57_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1_spec__1(v_msg_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_);
v_a_58_ = lean_ctor_get(v___x_57_, 0);
v_isSharedCheck_66_ = !lean_is_exclusive(v___x_57_);
if (v_isSharedCheck_66_ == 0)
{
v___x_60_ = v___x_57_;
v_isShared_61_ = v_isSharedCheck_66_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_a_58_);
lean_dec(v___x_57_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_66_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_62_; lean_object* v___x_64_; 
lean_inc(v_ref_56_);
v___x_62_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_62_, 0, v_ref_56_);
lean_ctor_set(v___x_62_, 1, v_a_58_);
if (v_isShared_61_ == 0)
{
lean_ctor_set_tag(v___x_60_, 1);
lean_ctor_set(v___x_60_, 0, v___x_62_);
v___x_64_ = v___x_60_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v___x_62_);
v___x_64_ = v_reuseFailAlloc_65_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
return v___x_64_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg___boxed(lean_object* v_msg_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg(v_msg_67_, v___y_68_, v___y_69_, v___y_70_, v___y_71_);
lean_dec(v___y_71_);
lean_dec_ref(v___y_70_);
lean_dec(v___y_69_);
lean_dec_ref(v___y_68_);
return v_res_73_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Grind_intro1___closed__1(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = ((lean_object*)(l_Lean_Elab_Tactic_Grind_intro1___closed__0));
v___x_76_ = l_Lean_stringToMessageData(v___x_75_);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Grind_intro1___closed__3(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_78_ = ((lean_object*)(l_Lean_Elab_Tactic_Grind_intro1___closed__2));
v___x_79_ = l_Lean_stringToMessageData(v___x_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_intro1(uint8_t v_internalize_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; uint8_t v___x_92_; lean_object* v___x_93_; 
v___x_90_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_87_);
v___x_91_ = l_Lean_Meta_tactic_hygienic;
v___x_92_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Grind_intro1_spec__0(v___x_90_, v___x_91_);
lean_dec_ref(v___x_90_);
v___x_93_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v_a_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
if (lean_obj_tag(v___x_93_) == 0)
{
lean_object* v_a_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v_a_94_ = lean_ctor_get(v___x_93_, 0);
lean_inc(v_a_94_);
lean_dec_ref_known(v___x_93_, 1);
v___x_95_ = lean_unsigned_to_nat(1u);
v___x_96_ = lean_box(v___x_92_);
v___x_97_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Goal_introN___boxed), 10, 3);
lean_closure_set(v___x_97_, 0, v_a_94_);
lean_closure_set(v___x_97_, 1, v___x_95_);
lean_closure_set(v___x_97_, 2, v___x_96_);
v___x_98_ = l_Lean_Elab_Tactic_Grind_liftSymM___redArg(v___x_97_, v_a_81_, v_a_82_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
if (lean_obj_tag(v___x_98_) == 0)
{
lean_object* v_a_99_; 
v_a_99_ = lean_ctor_get(v___x_98_, 0);
lean_inc(v_a_99_);
lean_dec_ref_known(v___x_98_, 1);
if (lean_obj_tag(v_a_99_) == 0)
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = lean_obj_once(&l_Lean_Elab_Tactic_Grind_intro1___closed__1, &l_Lean_Elab_Tactic_Grind_intro1___closed__1_once, _init_l_Lean_Elab_Tactic_Grind_intro1___closed__1);
v___x_101_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg(v___x_100_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
return v___x_101_;
}
else
{
lean_object* v_newDecls_102_; lean_object* v_goal_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_156_; 
v_newDecls_102_ = lean_ctor_get(v_a_99_, 0);
v_goal_103_ = lean_ctor_get(v_a_99_, 1);
v_isSharedCheck_156_ = !lean_is_exclusive(v_a_99_);
if (v_isSharedCheck_156_ == 0)
{
v___x_105_ = v_a_99_;
v_isShared_106_ = v_isSharedCheck_156_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_goal_103_);
lean_inc(v_newDecls_102_);
lean_dec(v_a_99_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_156_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_107_ = lean_unsigned_to_nat(0u);
v___x_108_ = lean_array_get_size(v_newDecls_102_);
v___x_109_ = lean_nat_dec_lt(v___x_107_, v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; lean_object* v___x_111_; 
lean_del_object(v___x_105_);
lean_dec_ref(v_goal_103_);
lean_dec_ref(v_newDecls_102_);
v___x_110_ = lean_obj_once(&l_Lean_Elab_Tactic_Grind_intro1___closed__3, &l_Lean_Elab_Tactic_Grind_intro1___closed__3_once, _init_l_Lean_Elab_Tactic_Grind_intro1___closed__3);
v___x_111_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg(v___x_110_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
return v___x_111_;
}
else
{
lean_object* v___x_112_; lean_object* v_goal_114_; lean_object* v___y_115_; lean_object* v___y_116_; lean_object* v___y_117_; lean_object* v___y_118_; lean_object* v___y_119_; lean_object* v___y_120_; lean_object* v___y_121_; lean_object* v___y_122_; 
v___x_112_ = lean_array_fget(v_newDecls_102_, v___x_107_);
lean_dec_ref(v_newDecls_102_);
if (v_internalize_80_ == 0)
{
v_goal_114_ = v_goal_103_;
v___y_115_ = v_a_81_;
v___y_116_ = v_a_82_;
v___y_117_ = v_a_83_;
v___y_118_ = v_a_84_;
v___y_119_ = v_a_85_;
v___y_120_ = v_a_86_;
v___y_121_ = v_a_87_;
v___y_122_ = v_a_88_;
goto v___jp_113_;
}
else
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Goal_internalizeAll___boxed), 11, 1);
lean_closure_set(v___x_145_, 0, v_goal_103_);
v___x_146_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___x_145_, v_a_81_, v_a_82_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
if (lean_obj_tag(v___x_146_) == 0)
{
lean_object* v_a_147_; 
v_a_147_ = lean_ctor_get(v___x_146_, 0);
lean_inc(v_a_147_);
lean_dec_ref_known(v___x_146_, 1);
v_goal_114_ = v_a_147_;
v___y_115_ = v_a_81_;
v___y_116_ = v_a_82_;
v___y_117_ = v_a_83_;
v___y_118_ = v_a_84_;
v___y_119_ = v_a_85_;
v___y_120_ = v_a_86_;
v___y_121_ = v_a_87_;
v___y_122_ = v_a_88_;
goto v___jp_113_;
}
else
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
lean_dec(v___x_112_);
lean_del_object(v___x_105_);
v_a_148_ = lean_ctor_get(v___x_146_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_146_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v___x_146_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_146_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_153_; 
if (v_isShared_151_ == 0)
{
v___x_153_ = v___x_150_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_a_148_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
v___jp_113_:
{
lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_123_ = lean_box(0);
lean_inc_ref(v_goal_114_);
if (v_isShared_106_ == 0)
{
lean_ctor_set(v___x_105_, 1, v___x_123_);
lean_ctor_set(v___x_105_, 0, v_goal_114_);
v___x_125_ = v___x_105_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_goal_114_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v___x_123_);
v___x_125_ = v_reuseFailAlloc_144_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
lean_object* v___x_126_; 
v___x_126_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal(v___x_125_, v___y_115_, v___y_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_, v___y_121_, v___y_122_);
if (lean_obj_tag(v___x_126_) == 0)
{
lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_134_; 
v_isSharedCheck_134_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_134_ == 0)
{
lean_object* v_unused_135_; 
v_unused_135_ = lean_ctor_get(v___x_126_, 0);
lean_dec(v_unused_135_);
v___x_128_ = v___x_126_;
v_isShared_129_ = v_isSharedCheck_134_;
goto v_resetjp_127_;
}
else
{
lean_dec(v___x_126_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_134_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v___x_130_; lean_object* v___x_132_; 
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_112_);
lean_ctor_set(v___x_130_, 1, v_goal_114_);
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 0, v___x_130_);
v___x_132_ = v___x_128_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_130_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
}
else
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_143_; 
lean_dec_ref(v_goal_114_);
lean_dec(v___x_112_);
v_a_136_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_143_ == 0)
{
v___x_138_ = v___x_126_;
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_126_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_a_136_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_164_; 
v_a_157_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_164_ == 0)
{
v___x_159_ = v___x_98_;
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_a_157_);
lean_dec(v___x_98_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_162_; 
if (v_isShared_160_ == 0)
{
v___x_162_ = v___x_159_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_a_157_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
else
{
lean_object* v_a_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_172_; 
v_a_165_ = lean_ctor_get(v___x_93_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_93_);
if (v_isSharedCheck_172_ == 0)
{
v___x_167_ = v___x_93_;
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_a_165_);
lean_dec(v___x_93_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_170_; 
if (v_isShared_168_ == 0)
{
v___x_170_ = v___x_167_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_a_165_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_intro1___boxed(lean_object* v_internalize_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_){
_start:
{
uint8_t v_internalize_boxed_183_; lean_object* v_res_184_; 
v_internalize_boxed_183_ = lean_unbox(v_internalize_173_);
v_res_184_ = l_Lean_Elab_Tactic_Grind_intro1(v_internalize_boxed_183_, v_a_174_, v_a_175_, v_a_176_, v_a_177_, v_a_178_, v_a_179_, v_a_180_, v_a_181_);
lean_dec(v_a_181_);
lean_dec_ref(v_a_180_);
lean_dec(v_a_179_);
lean_dec_ref(v_a_178_);
lean_dec(v_a_177_);
lean_dec_ref(v_a_176_);
lean_dec(v_a_175_);
lean_dec_ref(v_a_174_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1(lean_object* v_00_u03b1_185_, lean_object* v_msg_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg(v_msg_186_, v___y_191_, v___y_192_, v___y_193_, v___y_194_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___boxed(lean_object* v_00_u03b1_197_, lean_object* v_msg_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1(v_00_u03b1_197_, v_msg_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_, v___y_205_, v___y_206_);
lean_dec(v___y_206_);
lean_dec_ref(v___y_205_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
lean_dec(v___y_202_);
lean_dec_ref(v___y_201_);
lean_dec(v___y_200_);
lean_dec_ref(v___y_199_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg(size_t v_sz_220_, size_t v_i_221_, lean_object* v_bs_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_){
_start:
{
uint8_t v___x_227_; 
v___x_227_ = lean_usize_dec_lt(v_i_221_, v_sz_220_);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; 
v___x_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_228_, 0, v_bs_222_);
return v___x_228_;
}
else
{
lean_object* v_v_229_; lean_object* v___x_230_; lean_object* v_bs_x27_231_; lean_object* v_a_233_; lean_object* v___y_239_; lean_object* v___x_249_; uint8_t v___x_250_; 
v_v_229_ = lean_array_uget(v_bs_222_, v_i_221_);
v___x_230_ = lean_unsigned_to_nat(0u);
v_bs_x27_231_ = lean_array_uset(v_bs_222_, v_i_221_, v___x_230_);
v___x_249_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__2));
lean_inc(v_v_229_);
v___x_250_ = l_Lean_Syntax_isOfKind(v_v_229_, v___x_249_);
if (v___x_250_ == 0)
{
lean_object* v___x_251_; lean_object* v___x_252_; 
lean_dec(v_v_229_);
v___x_251_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__4));
v___x_252_ = l_Lean_Meta_mkFreshBinderNameForTactic___redArg(v___x_251_, v___y_223_, v___y_224_, v___y_225_);
v___y_239_ = v___x_252_;
goto v___jp_238_;
}
else
{
lean_object* v___x_253_; lean_object* v___x_254_; uint8_t v___x_255_; 
v___x_253_ = l_Lean_Syntax_getArg(v_v_229_, v___x_230_);
lean_dec(v_v_229_);
v___x_254_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__6));
lean_inc(v___x_253_);
v___x_255_ = l_Lean_Syntax_isOfKind(v___x_253_, v___x_254_);
if (v___x_255_ == 0)
{
lean_object* v___x_256_; lean_object* v___x_257_; 
lean_dec(v___x_253_);
v___x_256_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__4));
v___x_257_ = l_Lean_Meta_mkFreshBinderNameForTactic___redArg(v___x_256_, v___y_223_, v___y_224_, v___y_225_);
v___y_239_ = v___x_257_;
goto v___jp_238_;
}
else
{
lean_object* v___x_258_; 
v___x_258_ = l_Lean_TSyntax_getId(v___x_253_);
lean_dec(v___x_253_);
v_a_233_ = v___x_258_;
goto v___jp_232_;
}
}
v___jp_232_:
{
size_t v___x_234_; size_t v___x_235_; lean_object* v___x_236_; 
v___x_234_ = ((size_t)1ULL);
v___x_235_ = lean_usize_add(v_i_221_, v___x_234_);
v___x_236_ = lean_array_uset(v_bs_x27_231_, v_i_221_, v_a_233_);
v_i_221_ = v___x_235_;
v_bs_222_ = v___x_236_;
goto _start;
}
v___jp_238_:
{
if (lean_obj_tag(v___y_239_) == 0)
{
lean_object* v_a_240_; 
v_a_240_ = lean_ctor_get(v___y_239_, 0);
lean_inc(v_a_240_);
lean_dec_ref_known(v___y_239_, 1);
v_a_233_ = v_a_240_;
goto v___jp_232_;
}
else
{
lean_object* v_a_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_248_; 
lean_dec_ref(v_bs_x27_231_);
v_a_241_ = lean_ctor_get(v___y_239_, 0);
v_isSharedCheck_248_ = !lean_is_exclusive(v___y_239_);
if (v_isSharedCheck_248_ == 0)
{
v___x_243_ = v___y_239_;
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_a_241_);
lean_dec(v___y_239_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_246_; 
if (v_isShared_244_ == 0)
{
v___x_246_ = v___x_243_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v_a_241_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
return v___x_246_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___boxed(lean_object* v_sz_259_, lean_object* v_i_260_, lean_object* v_bs_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
size_t v_sz_boxed_266_; size_t v_i_boxed_267_; lean_object* v_res_268_; 
v_sz_boxed_266_ = lean_unbox_usize(v_sz_259_);
lean_dec(v_sz_259_);
v_i_boxed_267_ = lean_unbox_usize(v_i_260_);
lean_dec(v_i_260_);
v_res_268_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg(v_sz_boxed_266_, v_i_boxed_267_, v_bs_261_, v___y_262_, v___y_263_, v___y_264_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec_ref(v___y_262_);
return v_res_268_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore___closed__1(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore___closed__0));
v___x_271_ = l_Lean_stringToMessageData(v___x_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore(uint8_t v_internalize_272_, lean_object* v_ids_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_){
_start:
{
lean_object* v_goal_284_; lean_object* v___y_285_; lean_object* v___y_286_; lean_object* v___y_287_; lean_object* v___y_288_; lean_object* v___y_289_; lean_object* v___y_290_; lean_object* v___y_291_; lean_object* v___y_292_; lean_object* v_goal_297_; lean_object* v___y_298_; lean_object* v___y_299_; lean_object* v___y_300_; lean_object* v___y_301_; lean_object* v___y_302_; lean_object* v___y_303_; lean_object* v___y_304_; lean_object* v___y_305_; lean_object* v___x_317_; 
v___x_317_ = l_Lean_Elab_Tactic_Grind_ensureSym___redArg(v_a_274_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_317_) == 0)
{
lean_object* v___x_318_; lean_object* v___x_319_; uint8_t v___x_320_; 
lean_dec_ref_known(v___x_317_, 1);
v___x_318_ = lean_array_get_size(v_ids_273_);
v___x_319_ = lean_unsigned_to_nat(0u);
v___x_320_ = lean_nat_dec_eq(v___x_318_, v___x_319_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; lean_object* v___x_322_; uint8_t v___x_323_; lean_object* v___x_324_; 
v___x_321_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_280_);
v___x_322_ = l_Lean_Meta_tactic_hygienic;
v___x_323_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Grind_intro1_spec__0(v___x_321_, v___x_322_);
lean_dec_ref(v___x_321_);
v___x_324_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v_a_274_, v_a_275_, v_a_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_324_) == 0)
{
lean_object* v_a_325_; size_t v_sz_326_; size_t v___x_327_; lean_object* v___x_328_; 
v_a_325_ = lean_ctor_get(v___x_324_, 0);
lean_inc(v_a_325_);
lean_dec_ref_known(v___x_324_, 1);
v_sz_326_ = lean_array_size(v_ids_273_);
v___x_327_ = ((size_t)0ULL);
v___x_328_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg(v_sz_326_, v___x_327_, v_ids_273_, v_a_278_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_328_) == 0)
{
lean_object* v_a_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v_a_329_ = lean_ctor_get(v___x_328_, 0);
lean_inc(v_a_329_);
lean_dec_ref_known(v___x_328_, 1);
v___x_330_ = lean_box(v___x_323_);
v___x_331_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Goal_intros___boxed), 10, 3);
lean_closure_set(v___x_331_, 0, v_a_325_);
lean_closure_set(v___x_331_, 1, v_a_329_);
lean_closure_set(v___x_331_, 2, v___x_330_);
v___x_332_ = l_Lean_Elab_Tactic_Grind_liftSymM___redArg(v___x_331_, v_a_274_, v_a_275_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v_a_333_; 
v_a_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_a_333_);
lean_dec_ref_known(v___x_332_, 1);
if (lean_obj_tag(v_a_333_) == 0)
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
v___x_334_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore___closed__1, &l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore___closed__1);
v___x_335_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg(v___x_334_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
v_a_336_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_335_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_335_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_336_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
else
{
lean_object* v_goal_344_; 
v_goal_344_ = lean_ctor_get(v_a_333_, 1);
lean_inc_ref(v_goal_344_);
lean_dec_ref_known(v_a_333_, 2);
v_goal_297_ = v_goal_344_;
v___y_298_ = v_a_274_;
v___y_299_ = v_a_275_;
v___y_300_ = v_a_276_;
v___y_301_ = v_a_277_;
v___y_302_ = v_a_278_;
v___y_303_ = v_a_279_;
v___y_304_ = v_a_280_;
v___y_305_ = v_a_281_;
goto v___jp_296_;
}
}
else
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_352_; 
v_a_345_ = lean_ctor_get(v___x_332_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_352_ == 0)
{
v___x_347_ = v___x_332_;
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_332_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_a_345_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
}
else
{
lean_object* v_a_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_360_; 
lean_dec(v_a_325_);
v_a_353_ = lean_ctor_get(v___x_328_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_328_);
if (v_isSharedCheck_360_ == 0)
{
v___x_355_ = v___x_328_;
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_a_353_);
lean_dec(v___x_328_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_358_; 
if (v_isShared_356_ == 0)
{
v___x_358_ = v___x_355_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_a_353_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
}
else
{
lean_object* v_a_361_; lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_368_; 
lean_dec_ref(v_ids_273_);
v_a_361_ = lean_ctor_get(v___x_324_, 0);
v_isSharedCheck_368_ = !lean_is_exclusive(v___x_324_);
if (v_isSharedCheck_368_ == 0)
{
v___x_363_ = v___x_324_;
v_isShared_364_ = v_isSharedCheck_368_;
goto v_resetjp_362_;
}
else
{
lean_inc(v_a_361_);
lean_dec(v___x_324_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_368_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v___x_366_; 
if (v_isShared_364_ == 0)
{
v___x_366_ = v___x_363_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v_a_361_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
}
}
else
{
lean_object* v___x_369_; 
lean_dec_ref(v_ids_273_);
v___x_369_ = l_Lean_Elab_Tactic_Grind_intro1(v_internalize_272_, v_a_274_, v_a_275_, v_a_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_, v_a_281_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_377_; 
v_isSharedCheck_377_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_377_ == 0)
{
lean_object* v_unused_378_; 
v_unused_378_ = lean_ctor_get(v___x_369_, 0);
lean_dec(v_unused_378_);
v___x_371_ = v___x_369_;
v_isShared_372_ = v_isSharedCheck_377_;
goto v_resetjp_370_;
}
else
{
lean_dec(v___x_369_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_377_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_373_; lean_object* v___x_375_; 
v___x_373_ = lean_box(0);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 0, v___x_373_);
v___x_375_ = v___x_371_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v___x_373_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
}
else
{
lean_object* v_a_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_386_; 
v_a_379_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_386_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_386_ == 0)
{
v___x_381_ = v___x_369_;
v_isShared_382_ = v_isSharedCheck_386_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_a_379_);
lean_dec(v___x_369_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_386_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_384_; 
if (v_isShared_382_ == 0)
{
v___x_384_ = v___x_381_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v_a_379_);
v___x_384_ = v_reuseFailAlloc_385_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
return v___x_384_;
}
}
}
}
}
else
{
lean_dec_ref(v_ids_273_);
return v___x_317_;
}
v___jp_283_:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_293_ = lean_box(0);
v___x_294_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_294_, 0, v_goal_284_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v___x_295_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal(v___x_294_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_);
return v___x_295_;
}
v___jp_296_:
{
if (v_internalize_272_ == 0)
{
v_goal_284_ = v_goal_297_;
v___y_285_ = v___y_298_;
v___y_286_ = v___y_299_;
v___y_287_ = v___y_300_;
v___y_288_ = v___y_301_;
v___y_289_ = v___y_302_;
v___y_290_ = v___y_303_;
v___y_291_ = v___y_304_;
v___y_292_ = v___y_305_;
goto v___jp_283_;
}
else
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Goal_internalizeAll___boxed), 11, 1);
lean_closure_set(v___x_306_, 0, v_goal_297_);
v___x_307_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___x_306_, v___y_298_, v___y_299_, v___y_302_, v___y_303_, v___y_304_, v___y_305_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v_a_308_; 
v_a_308_ = lean_ctor_get(v___x_307_, 0);
lean_inc(v_a_308_);
lean_dec_ref_known(v___x_307_, 1);
v_goal_284_ = v_a_308_;
v___y_285_ = v___y_298_;
v___y_286_ = v___y_299_;
v___y_287_ = v___y_300_;
v___y_288_ = v___y_301_;
v___y_289_ = v___y_302_;
v___y_290_ = v___y_303_;
v___y_291_ = v___y_304_;
v___y_292_ = v___y_305_;
goto v___jp_283_;
}
else
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
v_a_309_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_307_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_307_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore___boxed(lean_object* v_internalize_387_, lean_object* v_ids_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_){
_start:
{
uint8_t v_internalize_boxed_398_; lean_object* v_res_399_; 
v_internalize_boxed_398_ = lean_unbox(v_internalize_387_);
v_res_399_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore(v_internalize_boxed_398_, v_ids_388_, v_a_389_, v_a_390_, v_a_391_, v_a_392_, v_a_393_, v_a_394_, v_a_395_, v_a_396_);
lean_dec(v_a_396_);
lean_dec_ref(v_a_395_);
lean_dec(v_a_394_);
lean_dec_ref(v_a_393_);
lean_dec(v_a_392_);
lean_dec_ref(v_a_391_);
lean_dec(v_a_390_);
lean_dec_ref(v_a_389_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0(size_t v_sz_400_, size_t v_i_401_, lean_object* v_bs_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg(v_sz_400_, v_i_401_, v_bs_402_, v___y_407_, v___y_409_, v___y_410_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___boxed(lean_object* v_sz_413_, lean_object* v_i_414_, lean_object* v_bs_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
size_t v_sz_boxed_425_; size_t v_i_boxed_426_; lean_object* v_res_427_; 
v_sz_boxed_425_ = lean_unbox_usize(v_sz_413_);
lean_dec(v_sz_413_);
v_i_boxed_426_ = lean_unbox_usize(v_i_414_);
lean_dec(v_i_414_);
v_res_427_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0(v_sz_boxed_425_, v_i_boxed_426_, v_bs_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
return v_res_427_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_428_ = lean_box(0);
v___x_429_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_430_, 0, v___x_429_);
lean_ctor_set(v___x_430_, 1, v___x_428_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg(){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_432_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg___closed__0);
v___x_433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg___boxed(lean_object* v___y_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg();
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0(lean_object* v_00_u03b1_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg();
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___boxed(lean_object* v_00_u03b1_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0(v_00_u03b1_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_);
lean_dec(v___y_455_);
lean_dec_ref(v___y_454_);
lean_dec(v___y_453_);
lean_dec_ref(v___y_452_);
lean_dec(v___y_451_);
lean_dec_ref(v___y_450_);
lean_dec(v___y_449_);
lean_dec_ref(v___y_448_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro(lean_object* v_stx_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_){
_start:
{
lean_object* v___x_487_; uint8_t v___x_488_; 
v___x_487_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__4));
lean_inc(v_stx_477_);
v___x_488_ = l_Lean_Syntax_isOfKind(v_stx_477_, v___x_487_);
if (v___x_488_ == 0)
{
lean_object* v___x_489_; 
lean_dec(v_stx_477_);
v___x_489_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg();
return v___x_489_;
}
else
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; uint8_t v___x_493_; 
v___x_490_ = lean_unsigned_to_nat(0u);
v___x_491_ = lean_unsigned_to_nat(1u);
v___x_492_ = l_Lean_Syntax_getArg(v_stx_477_, v___x_491_);
lean_inc(v___x_492_);
v___x_493_ = l_Lean_Syntax_matchesNull(v___x_492_, v___x_490_);
if (v___x_493_ == 0)
{
lean_object* v___x_494_; uint8_t v___x_495_; 
v___x_494_ = lean_unsigned_to_nat(5u);
lean_inc(v___x_492_);
v___x_495_ = l_Lean_Syntax_matchesNull(v___x_492_, v___x_494_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; 
lean_dec(v___x_492_);
lean_dec(v_stx_477_);
v___x_496_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg();
return v___x_496_;
}
else
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; uint8_t v___x_501_; 
v___x_497_ = lean_unsigned_to_nat(2u);
v___x_498_ = lean_unsigned_to_nat(3u);
v___x_499_ = l_Lean_Syntax_getArg(v___x_492_, v___x_498_);
lean_dec(v___x_492_);
v___x_500_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__7));
lean_inc(v___x_499_);
v___x_501_ = l_Lean_Syntax_isOfKind(v___x_499_, v___x_500_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; uint8_t v___x_503_; 
v___x_502_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__9));
v___x_503_ = l_Lean_Syntax_isOfKind(v___x_499_, v___x_502_);
if (v___x_503_ == 0)
{
lean_object* v___x_504_; 
lean_dec(v_stx_477_);
v___x_504_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg();
return v___x_504_;
}
else
{
lean_object* v___x_505_; lean_object* v_ids_506_; lean_object* v___x_507_; 
v___x_505_ = l_Lean_Syntax_getArg(v_stx_477_, v___x_497_);
lean_dec(v_stx_477_);
v_ids_506_ = l_Lean_Syntax_getArgs(v___x_505_);
lean_dec(v___x_505_);
v___x_507_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore(v___x_488_, v_ids_506_, v_a_478_, v_a_479_, v_a_480_, v_a_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_);
return v___x_507_;
}
}
else
{
lean_object* v___x_508_; lean_object* v_ids_509_; lean_object* v___x_510_; 
lean_dec(v___x_499_);
v___x_508_ = l_Lean_Syntax_getArg(v_stx_477_, v___x_497_);
lean_dec(v_stx_477_);
v_ids_509_ = l_Lean_Syntax_getArgs(v___x_508_);
lean_dec(v___x_508_);
v___x_510_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore(v___x_493_, v_ids_509_, v_a_478_, v_a_479_, v_a_480_, v_a_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_);
return v___x_510_;
}
}
}
else
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v_ids_513_; lean_object* v___x_514_; 
lean_dec(v___x_492_);
v___x_511_ = lean_unsigned_to_nat(2u);
v___x_512_ = l_Lean_Syntax_getArg(v_stx_477_, v___x_511_);
lean_dec(v_stx_477_);
v_ids_513_ = l_Lean_Syntax_getArgs(v___x_512_);
lean_dec(v___x_512_);
v___x_514_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore(v___x_488_, v_ids_513_, v_a_478_, v_a_479_, v_a_480_, v_a_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_);
return v___x_514_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___boxed(lean_object* v_stx_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro(v_stx_515_, v_a_516_, v_a_517_, v_a_518_, v_a_519_, v_a_520_, v_a_521_, v_a_522_, v_a_523_);
lean_dec(v_a_523_);
lean_dec_ref(v_a_522_);
lean_dec(v_a_521_);
lean_dec_ref(v_a_520_);
lean_dec(v_a_519_);
lean_dec_ref(v_a_518_);
lean_dec(v_a_517_);
lean_dec_ref(v_a_516_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1(){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_567_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_568_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__4));
v___x_569_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___closed__15));
v___x_570_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___boxed), 10, 0);
v___x_571_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_567_, v___x_568_, v___x_569_, v___x_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1___boxed(lean_object* v_a_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1();
return v_res_573_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore___closed__2(void){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore___closed__1));
v___x_578_ = l_Lean_stringToMessageData(v___x_577_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore(uint8_t v_internalize_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_){
_start:
{
lean_object* v_goal_590_; lean_object* v___y_591_; lean_object* v___y_592_; lean_object* v___y_593_; lean_object* v___y_594_; lean_object* v___y_595_; lean_object* v___y_596_; lean_object* v___y_597_; lean_object* v___y_598_; lean_object* v___x_602_; 
v___x_602_ = l_Lean_Elab_Tactic_Grind_ensureSym___redArg(v_a_580_, v_a_584_, v_a_585_, v_a_586_, v_a_587_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v___x_603_; lean_object* v___x_604_; uint8_t v___x_605_; lean_object* v___x_606_; 
lean_dec_ref_known(v___x_602_, 1);
v___x_603_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_586_);
v___x_604_ = l_Lean_Meta_tactic_hygienic;
v___x_605_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Grind_intro1_spec__0(v___x_603_, v___x_604_);
lean_dec_ref(v___x_603_);
v___x_606_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_, v_a_586_, v_a_587_);
if (lean_obj_tag(v___x_606_) == 0)
{
lean_object* v_a_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v_a_607_ = lean_ctor_get(v___x_606_, 0);
lean_inc(v_a_607_);
lean_dec_ref_known(v___x_606_, 1);
v___x_608_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore___closed__0));
v___x_609_ = lean_box(v___x_605_);
v___x_610_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Goal_intros___boxed), 10, 3);
lean_closure_set(v___x_610_, 0, v_a_607_);
lean_closure_set(v___x_610_, 1, v___x_608_);
lean_closure_set(v___x_610_, 2, v___x_609_);
v___x_611_ = l_Lean_Elab_Tactic_Grind_liftSymM___redArg(v___x_610_, v_a_580_, v_a_581_, v_a_584_, v_a_585_, v_a_586_, v_a_587_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; 
v_a_612_ = lean_ctor_get(v___x_611_, 0);
lean_inc(v_a_612_);
lean_dec_ref_known(v___x_611_, 1);
if (lean_obj_tag(v_a_612_) == 0)
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore___closed__2, &l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore___closed__2);
v___x_614_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg(v___x_613_, v_a_584_, v_a_585_, v_a_586_, v_a_587_);
return v___x_614_;
}
else
{
if (v_internalize_579_ == 0)
{
lean_object* v_goal_615_; 
v_goal_615_ = lean_ctor_get(v_a_612_, 1);
lean_inc_ref(v_goal_615_);
lean_dec_ref_known(v_a_612_, 2);
v_goal_590_ = v_goal_615_;
v___y_591_ = v_a_580_;
v___y_592_ = v_a_581_;
v___y_593_ = v_a_582_;
v___y_594_ = v_a_583_;
v___y_595_ = v_a_584_;
v___y_596_ = v_a_585_;
v___y_597_ = v_a_586_;
v___y_598_ = v_a_587_;
goto v___jp_589_;
}
else
{
lean_object* v_goal_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v_goal_616_ = lean_ctor_get(v_a_612_, 1);
lean_inc_ref(v_goal_616_);
lean_dec_ref_known(v_a_612_, 2);
v___x_617_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Goal_internalizeAll___boxed), 11, 1);
lean_closure_set(v___x_617_, 0, v_goal_616_);
v___x_618_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___x_617_, v_a_580_, v_a_581_, v_a_584_, v_a_585_, v_a_586_, v_a_587_);
if (lean_obj_tag(v___x_618_) == 0)
{
lean_object* v_a_619_; 
v_a_619_ = lean_ctor_get(v___x_618_, 0);
lean_inc(v_a_619_);
lean_dec_ref_known(v___x_618_, 1);
v_goal_590_ = v_a_619_;
v___y_591_ = v_a_580_;
v___y_592_ = v_a_581_;
v___y_593_ = v_a_582_;
v___y_594_ = v_a_583_;
v___y_595_ = v_a_584_;
v___y_596_ = v_a_585_;
v___y_597_ = v_a_586_;
v___y_598_ = v_a_587_;
goto v___jp_589_;
}
else
{
lean_object* v_a_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_627_; 
v_a_620_ = lean_ctor_get(v___x_618_, 0);
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_627_ == 0)
{
v___x_622_ = v___x_618_;
v_isShared_623_ = v_isSharedCheck_627_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_a_620_);
lean_dec(v___x_618_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_627_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_625_; 
if (v_isShared_623_ == 0)
{
v___x_625_ = v___x_622_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v_a_620_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
}
}
}
else
{
lean_object* v_a_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_635_; 
v_a_628_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_635_ == 0)
{
v___x_630_ = v___x_611_;
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_a_628_);
lean_dec(v___x_611_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_633_; 
if (v_isShared_631_ == 0)
{
v___x_633_ = v___x_630_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_a_628_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
}
else
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
v_a_636_ = lean_ctor_get(v___x_606_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_643_ == 0)
{
v___x_638_ = v___x_606_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_606_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_641_; 
if (v_isShared_639_ == 0)
{
v___x_641_ = v___x_638_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_a_636_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
}
else
{
return v___x_602_;
}
v___jp_589_:
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_599_ = lean_box(0);
v___x_600_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_600_, 0, v_goal_590_);
lean_ctor_set(v___x_600_, 1, v___x_599_);
v___x_601_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal(v___x_600_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
return v___x_601_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore___boxed(lean_object* v_internalize_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_, lean_object* v_a_653_){
_start:
{
uint8_t v_internalize_boxed_654_; lean_object* v_res_655_; 
v_internalize_boxed_654_ = lean_unbox(v_internalize_644_);
v_res_655_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore(v_internalize_boxed_654_, v_a_645_, v_a_646_, v_a_647_, v_a_648_, v_a_649_, v_a_650_, v_a_651_, v_a_652_);
lean_dec(v_a_652_);
lean_dec_ref(v_a_651_);
lean_dec(v_a_650_);
lean_dec_ref(v_a_649_);
lean_dec(v_a_648_);
lean_dec_ref(v_a_647_);
lean_dec(v_a_646_);
lean_dec_ref(v_a_645_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros(lean_object* v_stx_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_){
_start:
{
lean_object* v___x_673_; uint8_t v___x_674_; 
v___x_673_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__1));
lean_inc(v_stx_663_);
v___x_674_ = l_Lean_Syntax_isOfKind(v_stx_663_, v___x_673_);
if (v___x_674_ == 0)
{
lean_object* v___x_675_; 
lean_dec(v_stx_663_);
v___x_675_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg();
return v___x_675_;
}
else
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; uint8_t v___x_679_; 
v___x_676_ = lean_unsigned_to_nat(0u);
v___x_677_ = lean_unsigned_to_nat(1u);
v___x_678_ = l_Lean_Syntax_getArg(v_stx_663_, v___x_677_);
lean_dec(v_stx_663_);
lean_inc(v___x_678_);
v___x_679_ = l_Lean_Syntax_matchesNull(v___x_678_, v___x_676_);
if (v___x_679_ == 0)
{
lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_680_ = lean_unsigned_to_nat(5u);
lean_inc(v___x_678_);
v___x_681_ = l_Lean_Syntax_matchesNull(v___x_678_, v___x_680_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; 
lean_dec(v___x_678_);
v___x_682_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg();
return v___x_682_;
}
else
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; uint8_t v___x_686_; 
v___x_683_ = lean_unsigned_to_nat(3u);
v___x_684_ = l_Lean_Syntax_getArg(v___x_678_, v___x_683_);
lean_dec(v___x_678_);
v___x_685_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__7));
lean_inc(v___x_684_);
v___x_686_ = l_Lean_Syntax_isOfKind(v___x_684_, v___x_685_);
if (v___x_686_ == 0)
{
lean_object* v___x_687_; uint8_t v___x_688_; 
v___x_687_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___closed__9));
v___x_688_ = l_Lean_Syntax_isOfKind(v___x_684_, v___x_687_);
if (v___x_688_ == 0)
{
lean_object* v___x_689_; 
v___x_689_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg();
return v___x_689_;
}
else
{
lean_object* v___x_690_; 
v___x_690_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore(v___x_674_, v_a_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_, v_a_669_, v_a_670_, v_a_671_);
return v___x_690_;
}
}
else
{
lean_object* v___x_691_; 
lean_dec(v___x_684_);
v___x_691_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore(v___x_679_, v_a_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_, v_a_669_, v_a_670_, v_a_671_);
return v___x_691_;
}
}
}
else
{
lean_object* v___x_692_; 
lean_dec(v___x_678_);
v___x_692_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntrosCore(v___x_674_, v_a_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_, v_a_669_, v_a_670_, v_a_671_);
return v___x_692_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___boxed(lean_object* v_stx_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_){
_start:
{
lean_object* v_res_703_; 
v_res_703_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros(v_stx_693_, v_a_694_, v_a_695_, v_a_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_);
lean_dec(v_a_701_);
lean_dec_ref(v_a_700_);
lean_dec(v_a_699_);
lean_dec_ref(v_a_698_);
lean_dec(v_a_697_);
lean_dec_ref(v_a_696_);
lean_dec(v_a_695_);
lean_dec_ref(v_a_694_);
return v_res_703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros__1(){
_start:
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_709_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_710_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___closed__1));
v___x_711_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros__1___closed__1));
v___x_712_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___boxed), 10, 0);
v___x_713_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_709_, v___x_710_, v___x_711_, v___x_712_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros__1___boxed(lean_object* v_a_714_){
_start:
{
lean_object* v_res_715_; 
v_res_715_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros__1();
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Grind_getMainTarget_spec__0___redArg(lean_object* v_e_716_, lean_object* v___y_717_){
_start:
{
uint8_t v___x_719_; 
v___x_719_ = l_Lean_Expr_hasMVar(v_e_716_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; 
v___x_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_720_, 0, v_e_716_);
return v___x_720_;
}
else
{
lean_object* v___x_721_; lean_object* v_mctx_722_; lean_object* v___x_723_; lean_object* v_fst_724_; lean_object* v_snd_725_; lean_object* v___x_726_; lean_object* v_cache_727_; lean_object* v_zetaDeltaFVarIds_728_; lean_object* v_postponed_729_; lean_object* v_diag_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_739_; 
v___x_721_ = lean_st_ref_get(v___y_717_);
v_mctx_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc_ref(v_mctx_722_);
lean_dec(v___x_721_);
v___x_723_ = l_Lean_instantiateMVarsCore(v_mctx_722_, v_e_716_);
v_fst_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_fst_724_);
v_snd_725_ = lean_ctor_get(v___x_723_, 1);
lean_inc(v_snd_725_);
lean_dec_ref(v___x_723_);
v___x_726_ = lean_st_ref_take(v___y_717_);
v_cache_727_ = lean_ctor_get(v___x_726_, 1);
v_zetaDeltaFVarIds_728_ = lean_ctor_get(v___x_726_, 2);
v_postponed_729_ = lean_ctor_get(v___x_726_, 3);
v_diag_730_ = lean_ctor_get(v___x_726_, 4);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_726_);
if (v_isSharedCheck_739_ == 0)
{
lean_object* v_unused_740_; 
v_unused_740_ = lean_ctor_get(v___x_726_, 0);
lean_dec(v_unused_740_);
v___x_732_ = v___x_726_;
v_isShared_733_ = v_isSharedCheck_739_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_diag_730_);
lean_inc(v_postponed_729_);
lean_inc(v_zetaDeltaFVarIds_728_);
lean_inc(v_cache_727_);
lean_dec(v___x_726_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_739_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 0, v_snd_725_);
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_snd_725_);
lean_ctor_set(v_reuseFailAlloc_738_, 1, v_cache_727_);
lean_ctor_set(v_reuseFailAlloc_738_, 2, v_zetaDeltaFVarIds_728_);
lean_ctor_set(v_reuseFailAlloc_738_, 3, v_postponed_729_);
lean_ctor_set(v_reuseFailAlloc_738_, 4, v_diag_730_);
v___x_735_ = v_reuseFailAlloc_738_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_736_ = lean_st_ref_put(v___y_717_, v___x_735_);
v___x_737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_737_, 0, v_fst_724_);
return v___x_737_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Grind_getMainTarget_spec__0___redArg___boxed(lean_object* v_e_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Grind_getMainTarget_spec__0___redArg(v_e_741_, v___y_742_);
lean_dec(v___y_742_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Grind_getMainTarget_spec__0(lean_object* v_e_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Grind_getMainTarget_spec__0___redArg(v_e_745_, v___y_751_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Grind_getMainTarget_spec__0___boxed(lean_object* v_e_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Grind_getMainTarget_spec__0(v_e_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec(v___y_762_);
lean_dec_ref(v___y_761_);
lean_dec(v___y_760_);
lean_dec_ref(v___y_759_);
lean_dec(v___y_758_);
lean_dec_ref(v___y_757_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getMainTarget(lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v_a_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_, v_a_774_);
if (lean_obj_tag(v___x_776_) == 0)
{
lean_object* v_a_777_; lean_object* v_mvarId_778_; lean_object* v___x_779_; 
v_a_777_ = lean_ctor_get(v___x_776_, 0);
lean_inc(v_a_777_);
lean_dec_ref_known(v___x_776_, 1);
v_mvarId_778_ = lean_ctor_get(v_a_777_, 1);
lean_inc(v_mvarId_778_);
lean_dec(v_a_777_);
v___x_779_ = l_Lean_MVarId_getType(v_mvarId_778_, v_a_771_, v_a_772_, v_a_773_, v_a_774_);
if (lean_obj_tag(v___x_779_) == 0)
{
lean_object* v_a_780_; lean_object* v___x_781_; 
v_a_780_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_a_780_);
lean_dec_ref_known(v___x_779_, 1);
v___x_781_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Grind_getMainTarget_spec__0___redArg(v_a_780_, v_a_772_);
return v___x_781_;
}
else
{
return v___x_779_;
}
}
else
{
lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_789_; 
v_a_782_ = lean_ctor_get(v___x_776_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_776_);
if (v_isSharedCheck_789_ == 0)
{
v___x_784_ = v___x_776_;
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___x_776_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_787_; 
if (v_isShared_785_ == 0)
{
v___x_787_ = v___x_784_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_a_782_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getMainTarget___boxed(lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l_Lean_Elab_Tactic_Grind_getMainTarget(v_a_790_, v_a_791_, v_a_792_, v_a_793_, v_a_794_, v_a_795_, v_a_796_, v_a_797_);
lean_dec(v_a_797_);
lean_dec_ref(v_a_796_);
lean_dec(v_a_795_);
lean_dec_ref(v_a_794_);
lean_dec(v_a_793_);
lean_dec_ref(v_a_792_);
lean_dec(v_a_791_);
lean_dec_ref(v_a_790_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_headBetaMainGoal___lam__0(lean_object* v___x_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l_Lean_Meta_Sym_shareCommonInc(v___x_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_headBetaMainGoal___lam__0___boxed(lean_object* v___x_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Lean_Elab_Tactic_Grind_headBetaMainGoal___lam__0(v___x_809_, v___y_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
lean_dec(v___y_815_);
lean_dec_ref(v___y_814_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_headBetaMainGoal(lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_){
_start:
{
lean_object* v___x_827_; 
v___x_827_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v_a_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_object* v_a_828_; lean_object* v_toGoalState_829_; lean_object* v_mvarId_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_884_; 
v_a_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_a_828_);
lean_dec_ref_known(v___x_827_, 1);
v_toGoalState_829_ = lean_ctor_get(v_a_828_, 0);
v_mvarId_830_ = lean_ctor_get(v_a_828_, 1);
v_isSharedCheck_884_ = !lean_is_exclusive(v_a_828_);
if (v_isSharedCheck_884_ == 0)
{
v___x_832_ = v_a_828_;
v_isShared_833_ = v_isSharedCheck_884_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_mvarId_830_);
lean_inc(v_toGoalState_829_);
lean_dec(v_a_828_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_884_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_834_; 
lean_inc(v_mvarId_830_);
v___x_834_ = l_Lean_MVarId_getType(v_mvarId_830_, v_a_822_, v_a_823_, v_a_824_, v_a_825_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_a_835_; lean_object* v___x_836_; lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_875_; 
v_a_835_ = lean_ctor_get(v___x_834_, 0);
lean_inc(v_a_835_);
lean_dec_ref_known(v___x_834_, 1);
v___x_836_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Grind_getMainTarget_spec__0___redArg(v_a_835_, v_a_823_);
v_a_837_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_875_ == 0)
{
v___x_839_ = v___x_836_;
v_isShared_840_ = v_isSharedCheck_875_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_836_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_875_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
uint8_t v___x_841_; uint8_t v___x_842_; 
v___x_841_ = 0;
v___x_842_ = l_Lean_Expr_isHeadBetaTarget(v_a_837_, v___x_841_);
if (v___x_842_ == 0)
{
lean_object* v___x_843_; lean_object* v___x_845_; 
lean_dec(v_a_837_);
lean_del_object(v___x_832_);
lean_dec(v_mvarId_830_);
lean_dec_ref(v_toGoalState_829_);
v___x_843_ = lean_box(0);
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 0, v___x_843_);
v___x_845_ = v___x_839_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_843_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
else
{
lean_object* v___x_847_; lean_object* v___f_848_; lean_object* v___x_849_; 
lean_del_object(v___x_839_);
v___x_847_ = l_Lean_Expr_headBeta(v_a_837_);
v___f_848_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Grind_headBetaMainGoal___lam__0___boxed), 8, 1);
lean_closure_set(v___f_848_, 0, v___x_847_);
v___x_849_ = l_Lean_Elab_Tactic_Grind_liftSymM___redArg(v___f_848_, v_a_818_, v_a_819_, v_a_822_, v_a_823_, v_a_824_, v_a_825_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v_a_850_; lean_object* v___x_851_; 
v_a_850_ = lean_ctor_get(v___x_849_, 0);
lean_inc(v_a_850_);
lean_dec_ref_known(v___x_849_, 1);
v___x_851_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_830_, v_a_850_, v_a_822_, v_a_823_, v_a_824_, v_a_825_);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_object* v_a_852_; lean_object* v___x_854_; 
v_a_852_ = lean_ctor_get(v___x_851_, 0);
lean_inc(v_a_852_);
lean_dec_ref_known(v___x_851_, 1);
if (v_isShared_833_ == 0)
{
lean_ctor_set(v___x_832_, 1, v_a_852_);
v___x_854_ = v___x_832_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_toGoalState_829_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v_a_852_);
v___x_854_ = v_reuseFailAlloc_858_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_855_ = lean_box(0);
v___x_856_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_856_, 0, v___x_854_);
lean_ctor_set(v___x_856_, 1, v___x_855_);
v___x_857_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal(v___x_856_, v_a_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_);
return v___x_857_;
}
}
else
{
lean_object* v_a_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_866_; 
lean_del_object(v___x_832_);
lean_dec_ref(v_toGoalState_829_);
v_a_859_ = lean_ctor_get(v___x_851_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_866_ == 0)
{
v___x_861_ = v___x_851_;
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_a_859_);
lean_dec(v___x_851_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_864_; 
if (v_isShared_862_ == 0)
{
v___x_864_ = v___x_861_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_a_859_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
}
else
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
lean_del_object(v___x_832_);
lean_dec(v_mvarId_830_);
lean_dec_ref(v_toGoalState_829_);
v_a_867_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_849_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_849_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
}
}
}
else
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_883_; 
lean_del_object(v___x_832_);
lean_dec(v_mvarId_830_);
lean_dec_ref(v_toGoalState_829_);
v_a_876_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_883_ == 0)
{
v___x_878_ = v___x_834_;
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_834_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
if (v_isShared_879_ == 0)
{
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_a_876_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
}
else
{
lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_892_; 
v_a_885_ = lean_ctor_get(v___x_827_, 0);
v_isSharedCheck_892_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_892_ == 0)
{
v___x_887_ = v___x_827_;
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_827_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_890_; 
if (v_isShared_888_ == 0)
{
v___x_890_ = v___x_887_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v_a_885_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_headBetaMainGoal___boxed(lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_){
_start:
{
lean_object* v_res_902_; 
v_res_902_ = l_Lean_Elab_Tactic_Grind_headBetaMainGoal(v_a_893_, v_a_894_, v_a_895_, v_a_896_, v_a_897_, v_a_898_, v_a_899_, v_a_900_);
lean_dec(v_a_900_);
lean_dec_ref(v_a_899_);
lean_dec(v_a_898_);
lean_dec_ref(v_a_897_);
lean_dec(v_a_896_);
lean_dec_ref(v_a_895_);
lean_dec(v_a_894_);
lean_dec_ref(v_a_893_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_903_, lean_object* v_x_904_, lean_object* v_x_905_, lean_object* v_x_906_){
_start:
{
lean_object* v_ks_907_; lean_object* v_vs_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_932_; 
v_ks_907_ = lean_ctor_get(v_x_903_, 0);
v_vs_908_ = lean_ctor_get(v_x_903_, 1);
v_isSharedCheck_932_ = !lean_is_exclusive(v_x_903_);
if (v_isSharedCheck_932_ == 0)
{
v___x_910_ = v_x_903_;
v_isShared_911_ = v_isSharedCheck_932_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_vs_908_);
lean_inc(v_ks_907_);
lean_dec(v_x_903_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_932_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_912_; uint8_t v___x_913_; 
v___x_912_ = lean_array_get_size(v_ks_907_);
v___x_913_ = lean_nat_dec_lt(v_x_904_, v___x_912_);
if (v___x_913_ == 0)
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_917_; 
lean_dec(v_x_904_);
v___x_914_ = lean_array_push(v_ks_907_, v_x_905_);
v___x_915_ = lean_array_push(v_vs_908_, v_x_906_);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 1, v___x_915_);
lean_ctor_set(v___x_910_, 0, v___x_914_);
v___x_917_ = v___x_910_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v___x_914_);
lean_ctor_set(v_reuseFailAlloc_918_, 1, v___x_915_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
else
{
lean_object* v_k_x27_919_; uint8_t v___x_920_; 
v_k_x27_919_ = lean_array_fget_borrowed(v_ks_907_, v_x_904_);
v___x_920_ = lean_name_eq(v_x_905_, v_k_x27_919_);
if (v___x_920_ == 0)
{
lean_object* v___x_922_; 
if (v_isShared_911_ == 0)
{
v___x_922_ = v___x_910_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_ks_907_);
lean_ctor_set(v_reuseFailAlloc_926_, 1, v_vs_908_);
v___x_922_ = v_reuseFailAlloc_926_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_923_ = lean_unsigned_to_nat(1u);
v___x_924_ = lean_nat_add(v_x_904_, v___x_923_);
lean_dec(v_x_904_);
v_x_903_ = v___x_922_;
v_x_904_ = v___x_924_;
goto _start;
}
}
else
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_930_; 
v___x_927_ = lean_array_fset(v_ks_907_, v_x_904_, v_x_905_);
v___x_928_ = lean_array_fset(v_vs_908_, v_x_904_, v_x_906_);
lean_dec(v_x_904_);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 1, v___x_928_);
lean_ctor_set(v___x_910_, 0, v___x_927_);
v___x_930_ = v___x_910_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v___x_927_);
lean_ctor_set(v_reuseFailAlloc_931_, 1, v___x_928_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__4___redArg(lean_object* v_n_933_, lean_object* v_k_934_, lean_object* v_v_935_){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_936_ = lean_unsigned_to_nat(0u);
v___x_937_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__4_spec__5___redArg(v_n_933_, v___x_936_, v_k_934_, v_v_935_);
return v___x_937_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_938_; 
v___x_938_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg(lean_object* v_x_939_, size_t v_x_940_, size_t v_x_941_, lean_object* v_x_942_, lean_object* v_x_943_){
_start:
{
if (lean_obj_tag(v_x_939_) == 0)
{
lean_object* v_es_944_; size_t v___x_945_; size_t v___x_946_; lean_object* v_j_947_; lean_object* v___x_948_; uint8_t v___x_949_; 
v_es_944_ = lean_ctor_get(v_x_939_, 0);
v___x_945_ = ((size_t)31ULL);
v___x_946_ = lean_usize_land(v_x_940_, v___x_945_);
v_j_947_ = lean_usize_to_nat(v___x_946_);
v___x_948_ = lean_array_get_size(v_es_944_);
v___x_949_ = lean_nat_dec_lt(v_j_947_, v___x_948_);
if (v___x_949_ == 0)
{
lean_dec(v_j_947_);
lean_dec(v_x_943_);
lean_dec(v_x_942_);
return v_x_939_;
}
else
{
lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_988_; 
lean_inc_ref(v_es_944_);
v_isSharedCheck_988_ = !lean_is_exclusive(v_x_939_);
if (v_isSharedCheck_988_ == 0)
{
lean_object* v_unused_989_; 
v_unused_989_ = lean_ctor_get(v_x_939_, 0);
lean_dec(v_unused_989_);
v___x_951_ = v_x_939_;
v_isShared_952_ = v_isSharedCheck_988_;
goto v_resetjp_950_;
}
else
{
lean_dec(v_x_939_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_988_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v_v_953_; lean_object* v___x_954_; lean_object* v_xs_x27_955_; lean_object* v___y_957_; 
v_v_953_ = lean_array_fget(v_es_944_, v_j_947_);
v___x_954_ = lean_box(0);
v_xs_x27_955_ = lean_array_fset(v_es_944_, v_j_947_, v___x_954_);
switch(lean_obj_tag(v_v_953_))
{
case 0:
{
lean_object* v_key_962_; lean_object* v_val_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_973_; 
v_key_962_ = lean_ctor_get(v_v_953_, 0);
v_val_963_ = lean_ctor_get(v_v_953_, 1);
v_isSharedCheck_973_ = !lean_is_exclusive(v_v_953_);
if (v_isSharedCheck_973_ == 0)
{
v___x_965_ = v_v_953_;
v_isShared_966_ = v_isSharedCheck_973_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_val_963_);
lean_inc(v_key_962_);
lean_dec(v_v_953_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_973_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
uint8_t v___x_967_; 
v___x_967_ = lean_name_eq(v_x_942_, v_key_962_);
if (v___x_967_ == 0)
{
lean_object* v___x_968_; lean_object* v___x_969_; 
lean_del_object(v___x_965_);
v___x_968_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_962_, v_val_963_, v_x_942_, v_x_943_);
v___x_969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_969_, 0, v___x_968_);
v___y_957_ = v___x_969_;
goto v___jp_956_;
}
else
{
lean_object* v___x_971_; 
lean_dec(v_val_963_);
lean_dec(v_key_962_);
if (v_isShared_966_ == 0)
{
lean_ctor_set(v___x_965_, 1, v_x_943_);
lean_ctor_set(v___x_965_, 0, v_x_942_);
v___x_971_ = v___x_965_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_x_942_);
lean_ctor_set(v_reuseFailAlloc_972_, 1, v_x_943_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
v___y_957_ = v___x_971_;
goto v___jp_956_;
}
}
}
}
case 1:
{
lean_object* v_node_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_986_; 
v_node_974_ = lean_ctor_get(v_v_953_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v_v_953_);
if (v_isSharedCheck_986_ == 0)
{
v___x_976_ = v_v_953_;
v_isShared_977_ = v_isSharedCheck_986_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_node_974_);
lean_dec(v_v_953_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_986_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
size_t v___x_978_; size_t v___x_979_; size_t v___x_980_; size_t v___x_981_; lean_object* v___x_982_; lean_object* v___x_984_; 
v___x_978_ = ((size_t)5ULL);
v___x_979_ = lean_usize_shift_right(v_x_940_, v___x_978_);
v___x_980_ = ((size_t)1ULL);
v___x_981_ = lean_usize_add(v_x_941_, v___x_980_);
v___x_982_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg(v_node_974_, v___x_979_, v___x_981_, v_x_942_, v_x_943_);
if (v_isShared_977_ == 0)
{
lean_ctor_set(v___x_976_, 0, v___x_982_);
v___x_984_ = v___x_976_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v___x_982_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
v___y_957_ = v___x_984_;
goto v___jp_956_;
}
}
}
default: 
{
lean_object* v___x_987_; 
v___x_987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_987_, 0, v_x_942_);
lean_ctor_set(v___x_987_, 1, v_x_943_);
v___y_957_ = v___x_987_;
goto v___jp_956_;
}
}
v___jp_956_:
{
lean_object* v___x_958_; lean_object* v___x_960_; 
v___x_958_ = lean_array_fset(v_xs_x27_955_, v_j_947_, v___y_957_);
lean_dec(v_j_947_);
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 0, v___x_958_);
v___x_960_ = v___x_951_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_958_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
}
}
else
{
lean_object* v_ks_990_; lean_object* v_vs_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_1009_; 
v_ks_990_ = lean_ctor_get(v_x_939_, 0);
v_vs_991_ = lean_ctor_get(v_x_939_, 1);
v_isSharedCheck_1009_ = !lean_is_exclusive(v_x_939_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_993_ = v_x_939_;
v_isShared_994_ = v_isSharedCheck_1009_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_vs_991_);
lean_inc(v_ks_990_);
lean_dec(v_x_939_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_1009_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_ks_990_);
lean_ctor_set(v_reuseFailAlloc_1008_, 1, v_vs_991_);
v___x_996_ = v_reuseFailAlloc_1008_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
lean_object* v_newNode_997_; size_t v___x_998_; uint8_t v___x_999_; 
v_newNode_997_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__4___redArg(v___x_996_, v_x_942_, v_x_943_);
v___x_998_ = ((size_t)7ULL);
v___x_999_ = lean_usize_dec_le(v___x_998_, v_x_941_);
if (v___x_999_ == 0)
{
lean_object* v___x_1000_; lean_object* v___x_1001_; uint8_t v___x_1002_; 
v___x_1000_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_997_);
v___x_1001_ = lean_unsigned_to_nat(4u);
v___x_1002_ = lean_nat_dec_lt(v___x_1000_, v___x_1001_);
lean_dec(v___x_1000_);
if (v___x_1002_ == 0)
{
lean_object* v_ks_1003_; lean_object* v_vs_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v_ks_1003_ = lean_ctor_get(v_newNode_997_, 0);
lean_inc_ref(v_ks_1003_);
v_vs_1004_ = lean_ctor_get(v_newNode_997_, 1);
lean_inc_ref(v_vs_1004_);
lean_dec_ref(v_newNode_997_);
v___x_1005_ = lean_unsigned_to_nat(0u);
v___x_1006_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg___closed__0);
v___x_1007_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__5___redArg(v_x_941_, v_ks_1003_, v_vs_1004_, v___x_1005_, v___x_1006_);
lean_dec_ref(v_vs_1004_);
lean_dec_ref(v_ks_1003_);
return v___x_1007_;
}
else
{
return v_newNode_997_;
}
}
else
{
return v_newNode_997_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__5___redArg(size_t v_depth_1010_, lean_object* v_keys_1011_, lean_object* v_vals_1012_, lean_object* v_i_1013_, lean_object* v_entries_1014_){
_start:
{
lean_object* v___x_1015_; uint8_t v___x_1016_; 
v___x_1015_ = lean_array_get_size(v_keys_1011_);
v___x_1016_ = lean_nat_dec_lt(v_i_1013_, v___x_1015_);
if (v___x_1016_ == 0)
{
lean_dec(v_i_1013_);
return v_entries_1014_;
}
else
{
lean_object* v_k_1017_; lean_object* v_v_1018_; uint64_t v___y_1020_; 
v_k_1017_ = lean_array_fget_borrowed(v_keys_1011_, v_i_1013_);
v_v_1018_ = lean_array_fget_borrowed(v_vals_1012_, v_i_1013_);
if (lean_obj_tag(v_k_1017_) == 0)
{
uint64_t v___x_1031_; 
v___x_1031_ = 1723ULL;
v___y_1020_ = v___x_1031_;
goto v___jp_1019_;
}
else
{
uint64_t v_hash_1032_; 
v_hash_1032_ = lean_ctor_get_uint64(v_k_1017_, sizeof(void*)*2);
v___y_1020_ = v_hash_1032_;
goto v___jp_1019_;
}
v___jp_1019_:
{
size_t v_h_1021_; size_t v___x_1022_; lean_object* v___x_1023_; size_t v___x_1024_; size_t v___x_1025_; size_t v___x_1026_; size_t v_h_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v_h_1021_ = lean_uint64_to_usize(v___y_1020_);
v___x_1022_ = ((size_t)5ULL);
v___x_1023_ = lean_unsigned_to_nat(1u);
v___x_1024_ = ((size_t)1ULL);
v___x_1025_ = lean_usize_sub(v_depth_1010_, v___x_1024_);
v___x_1026_ = lean_usize_mul(v___x_1022_, v___x_1025_);
v_h_1027_ = lean_usize_shift_right(v_h_1021_, v___x_1026_);
v___x_1028_ = lean_nat_add(v_i_1013_, v___x_1023_);
lean_dec(v_i_1013_);
lean_inc(v_v_1018_);
lean_inc(v_k_1017_);
v___x_1029_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg(v_entries_1014_, v_h_1027_, v_depth_1010_, v_k_1017_, v_v_1018_);
v_i_1013_ = v___x_1028_;
v_entries_1014_ = v___x_1029_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_1033_, lean_object* v_keys_1034_, lean_object* v_vals_1035_, lean_object* v_i_1036_, lean_object* v_entries_1037_){
_start:
{
size_t v_depth_boxed_1038_; lean_object* v_res_1039_; 
v_depth_boxed_1038_ = lean_unbox_usize(v_depth_1033_);
lean_dec(v_depth_1033_);
v_res_1039_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__5___redArg(v_depth_boxed_1038_, v_keys_1034_, v_vals_1035_, v_i_1036_, v_entries_1037_);
lean_dec_ref(v_vals_1035_);
lean_dec_ref(v_keys_1034_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg___boxed(lean_object* v_x_1040_, lean_object* v_x_1041_, lean_object* v_x_1042_, lean_object* v_x_1043_, lean_object* v_x_1044_){
_start:
{
size_t v_x_2005__boxed_1045_; size_t v_x_2006__boxed_1046_; lean_object* v_res_1047_; 
v_x_2005__boxed_1045_ = lean_unbox_usize(v_x_1041_);
lean_dec(v_x_1041_);
v_x_2006__boxed_1046_ = lean_unbox_usize(v_x_1042_);
lean_dec(v_x_1042_);
v_res_1047_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg(v_x_1040_, v_x_2005__boxed_1045_, v_x_2006__boxed_1046_, v_x_1043_, v_x_1044_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1___redArg(lean_object* v_x_1048_, lean_object* v_x_1049_, lean_object* v_x_1050_){
_start:
{
uint64_t v___y_1052_; 
if (lean_obj_tag(v_x_1049_) == 0)
{
uint64_t v___x_1056_; 
v___x_1056_ = 1723ULL;
v___y_1052_ = v___x_1056_;
goto v___jp_1051_;
}
else
{
uint64_t v_hash_1057_; 
v_hash_1057_ = lean_ctor_get_uint64(v_x_1049_, sizeof(void*)*2);
v___y_1052_ = v_hash_1057_;
goto v___jp_1051_;
}
v___jp_1051_:
{
size_t v___x_1053_; size_t v___x_1054_; lean_object* v___x_1055_; 
v___x_1053_ = lean_uint64_to_usize(v___y_1052_);
v___x_1054_ = ((size_t)1ULL);
v___x_1055_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg(v_x_1048_, v___x_1053_, v___x_1054_, v_x_1049_, v_x_1050_);
return v___x_1055_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1058_, lean_object* v_vals_1059_, lean_object* v_i_1060_, lean_object* v_k_1061_){
_start:
{
lean_object* v___x_1062_; uint8_t v___x_1063_; 
v___x_1062_ = lean_array_get_size(v_keys_1058_);
v___x_1063_ = lean_nat_dec_lt(v_i_1060_, v___x_1062_);
if (v___x_1063_ == 0)
{
lean_object* v___x_1064_; 
lean_dec(v_i_1060_);
v___x_1064_ = lean_box(0);
return v___x_1064_;
}
else
{
lean_object* v_k_x27_1065_; uint8_t v___x_1066_; 
v_k_x27_1065_ = lean_array_fget_borrowed(v_keys_1058_, v_i_1060_);
v___x_1066_ = lean_name_eq(v_k_1061_, v_k_x27_1065_);
if (v___x_1066_ == 0)
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1067_ = lean_unsigned_to_nat(1u);
v___x_1068_ = lean_nat_add(v_i_1060_, v___x_1067_);
lean_dec(v_i_1060_);
v_i_1060_ = v___x_1068_;
goto _start;
}
else
{
lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___x_1070_ = lean_array_fget_borrowed(v_vals_1059_, v_i_1060_);
lean_dec(v_i_1060_);
lean_inc(v___x_1070_);
v___x_1071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1070_);
return v___x_1071_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1072_, lean_object* v_vals_1073_, lean_object* v_i_1074_, lean_object* v_k_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0_spec__1___redArg(v_keys_1072_, v_vals_1073_, v_i_1074_, v_k_1075_);
lean_dec(v_k_1075_);
lean_dec_ref(v_vals_1073_);
lean_dec_ref(v_keys_1072_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0___redArg(lean_object* v_x_1077_, size_t v_x_1078_, lean_object* v_x_1079_){
_start:
{
if (lean_obj_tag(v_x_1077_) == 0)
{
lean_object* v_es_1080_; lean_object* v___x_1081_; size_t v___x_1082_; size_t v___x_1083_; lean_object* v_j_1084_; lean_object* v___x_1085_; 
v_es_1080_ = lean_ctor_get(v_x_1077_, 0);
v___x_1081_ = lean_box(2);
v___x_1082_ = ((size_t)31ULL);
v___x_1083_ = lean_usize_land(v_x_1078_, v___x_1082_);
v_j_1084_ = lean_usize_to_nat(v___x_1083_);
v___x_1085_ = lean_array_get_borrowed(v___x_1081_, v_es_1080_, v_j_1084_);
lean_dec(v_j_1084_);
switch(lean_obj_tag(v___x_1085_))
{
case 0:
{
lean_object* v_key_1086_; lean_object* v_val_1087_; uint8_t v___x_1088_; 
v_key_1086_ = lean_ctor_get(v___x_1085_, 0);
v_val_1087_ = lean_ctor_get(v___x_1085_, 1);
v___x_1088_ = lean_name_eq(v_x_1079_, v_key_1086_);
if (v___x_1088_ == 0)
{
lean_object* v___x_1089_; 
v___x_1089_ = lean_box(0);
return v___x_1089_;
}
else
{
lean_object* v___x_1090_; 
lean_inc(v_val_1087_);
v___x_1090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1090_, 0, v_val_1087_);
return v___x_1090_;
}
}
case 1:
{
lean_object* v_node_1091_; size_t v___x_1092_; size_t v___x_1093_; 
v_node_1091_ = lean_ctor_get(v___x_1085_, 0);
v___x_1092_ = ((size_t)5ULL);
v___x_1093_ = lean_usize_shift_right(v_x_1078_, v___x_1092_);
v_x_1077_ = v_node_1091_;
v_x_1078_ = v___x_1093_;
goto _start;
}
default: 
{
lean_object* v___x_1095_; 
v___x_1095_ = lean_box(0);
return v___x_1095_;
}
}
}
else
{
lean_object* v_ks_1096_; lean_object* v_vs_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v_ks_1096_ = lean_ctor_get(v_x_1077_, 0);
v_vs_1097_ = lean_ctor_get(v_x_1077_, 1);
v___x_1098_ = lean_unsigned_to_nat(0u);
v___x_1099_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0_spec__1___redArg(v_ks_1096_, v_vs_1097_, v___x_1098_, v_x_1079_);
return v___x_1099_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0___redArg___boxed(lean_object* v_x_1100_, lean_object* v_x_1101_, lean_object* v_x_1102_){
_start:
{
size_t v_x_2195__boxed_1103_; lean_object* v_res_1104_; 
v_x_2195__boxed_1103_ = lean_unbox_usize(v_x_1101_);
lean_dec(v_x_1101_);
v_res_1104_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0___redArg(v_x_1100_, v_x_2195__boxed_1103_, v_x_1102_);
lean_dec(v_x_1102_);
lean_dec_ref(v_x_1100_);
return v_res_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0___redArg(lean_object* v_x_1105_, lean_object* v_x_1106_){
_start:
{
uint64_t v___y_1108_; 
if (lean_obj_tag(v_x_1106_) == 0)
{
uint64_t v___x_1111_; 
v___x_1111_ = 1723ULL;
v___y_1108_ = v___x_1111_;
goto v___jp_1107_;
}
else
{
uint64_t v_hash_1112_; 
v_hash_1112_ = lean_ctor_get_uint64(v_x_1106_, sizeof(void*)*2);
v___y_1108_ = v_hash_1112_;
goto v___jp_1107_;
}
v___jp_1107_:
{
size_t v___x_1109_; lean_object* v___x_1110_; 
v___x_1109_ = lean_uint64_to_usize(v___y_1108_);
v___x_1110_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0___redArg(v_x_1105_, v___x_1109_, v_x_1106_);
return v___x_1110_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0___redArg___boxed(lean_object* v_x_1113_, lean_object* v_x_1114_){
_start:
{
lean_object* v_res_1115_; 
v_res_1115_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0___redArg(v_x_1113_, v_x_1114_);
lean_dec(v_x_1114_);
lean_dec_ref(v_x_1113_);
return v_res_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRule___redArg(lean_object* v_declName_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_){
_start:
{
lean_object* v___x_1123_; lean_object* v_cache_1124_; lean_object* v_backwardRuleName_1125_; lean_object* v___x_1126_; 
v___x_1123_ = lean_st_ref_get(v_a_1117_);
v_cache_1124_ = lean_ctor_get(v___x_1123_, 3);
lean_inc_ref(v_cache_1124_);
lean_dec(v___x_1123_);
v_backwardRuleName_1125_ = lean_ctor_get(v_cache_1124_, 0);
lean_inc_ref(v_backwardRuleName_1125_);
lean_dec_ref(v_cache_1124_);
v___x_1126_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0___redArg(v_backwardRuleName_1125_, v_declName_1116_);
lean_dec_ref(v_backwardRuleName_1125_);
if (lean_obj_tag(v___x_1126_) == 1)
{
lean_object* v_val_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1134_; 
lean_dec(v_declName_1116_);
v_val_1127_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1129_ = v___x_1126_;
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_val_1127_);
lean_dec(v___x_1126_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1132_; 
if (v_isShared_1130_ == 0)
{
lean_ctor_set_tag(v___x_1129_, 0);
v___x_1132_ = v___x_1129_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_val_1127_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
else
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
lean_dec(v___x_1126_);
v___x_1135_ = lean_box(0);
lean_inc(v_declName_1116_);
v___x_1136_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v_declName_1116_, v___x_1135_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_);
if (lean_obj_tag(v___x_1136_) == 0)
{
lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1169_; 
v_a_1137_ = lean_ctor_get(v___x_1136_, 0);
v_isSharedCheck_1169_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1139_ = v___x_1136_;
v_isShared_1140_ = v_isSharedCheck_1169_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v___x_1136_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1169_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1141_; lean_object* v_cache_1142_; lean_object* v_symState_1143_; lean_object* v_grindState_1144_; lean_object* v_goals_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1168_; 
v___x_1141_ = lean_st_ref_take(v_a_1117_);
v_cache_1142_ = lean_ctor_get(v___x_1141_, 3);
v_symState_1143_ = lean_ctor_get(v___x_1141_, 0);
v_grindState_1144_ = lean_ctor_get(v___x_1141_, 1);
v_goals_1145_ = lean_ctor_get(v___x_1141_, 2);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1147_ = v___x_1141_;
v_isShared_1148_ = v_isSharedCheck_1168_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_cache_1142_);
lean_inc(v_goals_1145_);
lean_inc(v_grindState_1144_);
lean_inc(v_symState_1143_);
lean_dec(v___x_1141_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1168_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v_backwardRuleName_1149_; lean_object* v_backwardRuleSyntax_1150_; lean_object* v_simpState_1151_; lean_object* v_dsimpState_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1167_; 
v_backwardRuleName_1149_ = lean_ctor_get(v_cache_1142_, 0);
v_backwardRuleSyntax_1150_ = lean_ctor_get(v_cache_1142_, 1);
v_simpState_1151_ = lean_ctor_get(v_cache_1142_, 2);
v_dsimpState_1152_ = lean_ctor_get(v_cache_1142_, 3);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_cache_1142_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1154_ = v_cache_1142_;
v_isShared_1155_ = v_isSharedCheck_1167_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_dsimpState_1152_);
lean_inc(v_simpState_1151_);
lean_inc(v_backwardRuleSyntax_1150_);
lean_inc(v_backwardRuleName_1149_);
lean_dec(v_cache_1142_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1167_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1156_; lean_object* v___x_1158_; 
lean_inc(v_a_1137_);
v___x_1156_ = l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1___redArg(v_backwardRuleName_1149_, v_declName_1116_, v_a_1137_);
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 0, v___x_1156_);
v___x_1158_ = v___x_1154_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v___x_1156_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v_backwardRuleSyntax_1150_);
lean_ctor_set(v_reuseFailAlloc_1166_, 2, v_simpState_1151_);
lean_ctor_set(v_reuseFailAlloc_1166_, 3, v_dsimpState_1152_);
v___x_1158_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
lean_object* v___x_1160_; 
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 3, v___x_1158_);
v___x_1160_ = v___x_1147_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_symState_1143_);
lean_ctor_set(v_reuseFailAlloc_1165_, 1, v_grindState_1144_);
lean_ctor_set(v_reuseFailAlloc_1165_, 2, v_goals_1145_);
lean_ctor_set(v_reuseFailAlloc_1165_, 3, v___x_1158_);
v___x_1160_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
lean_object* v___x_1161_; lean_object* v___x_1163_; 
v___x_1161_ = lean_st_ref_put(v_a_1117_, v___x_1160_);
if (v_isShared_1140_ == 0)
{
v___x_1163_ = v___x_1139_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1137_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
}
}
}
else
{
lean_dec(v_declName_1116_);
return v___x_1136_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRule___redArg___boxed(lean_object* v_declName_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRule___redArg(v_declName_1170_, v_a_1171_, v_a_1172_, v_a_1173_, v_a_1174_, v_a_1175_);
lean_dec(v_a_1175_);
lean_dec_ref(v_a_1174_);
lean_dec(v_a_1173_);
lean_dec_ref(v_a_1172_);
lean_dec(v_a_1171_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRule(lean_object* v_declName_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v___x_1188_; 
v___x_1188_ = l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRule___redArg(v_declName_1178_, v_a_1180_, v_a_1183_, v_a_1184_, v_a_1185_, v_a_1186_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRule___boxed(lean_object* v_declName_1189_, lean_object* v_a_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRule(v_declName_1189_, v_a_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_, v_a_1196_, v_a_1197_);
lean_dec(v_a_1197_);
lean_dec_ref(v_a_1196_);
lean_dec(v_a_1195_);
lean_dec_ref(v_a_1194_);
lean_dec(v_a_1193_);
lean_dec_ref(v_a_1192_);
lean_dec(v_a_1191_);
lean_dec_ref(v_a_1190_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0(lean_object* v_00_u03b2_1200_, lean_object* v_x_1201_, lean_object* v_x_1202_){
_start:
{
lean_object* v___x_1203_; 
v___x_1203_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0___redArg(v_x_1201_, v_x_1202_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0___boxed(lean_object* v_00_u03b2_1204_, lean_object* v_x_1205_, lean_object* v_x_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0(v_00_u03b2_1204_, v_x_1205_, v_x_1206_);
lean_dec(v_x_1206_);
lean_dec_ref(v_x_1205_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1(lean_object* v_00_u03b2_1208_, lean_object* v_x_1209_, lean_object* v_x_1210_, lean_object* v_x_1211_){
_start:
{
lean_object* v___x_1212_; 
v___x_1212_ = l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1___redArg(v_x_1209_, v_x_1210_, v_x_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0(lean_object* v_00_u03b2_1213_, lean_object* v_x_1214_, size_t v_x_1215_, lean_object* v_x_1216_){
_start:
{
lean_object* v___x_1217_; 
v___x_1217_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0___redArg(v_x_1214_, v_x_1215_, v_x_1216_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1218_, lean_object* v_x_1219_, lean_object* v_x_1220_, lean_object* v_x_1221_){
_start:
{
size_t v_x_2357__boxed_1222_; lean_object* v_res_1223_; 
v_x_2357__boxed_1222_ = lean_unbox_usize(v_x_1220_);
lean_dec(v_x_1220_);
v_res_1223_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0(v_00_u03b2_1218_, v_x_1219_, v_x_2357__boxed_1222_, v_x_1221_);
lean_dec(v_x_1221_);
lean_dec_ref(v_x_1219_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2(lean_object* v_00_u03b2_1224_, lean_object* v_x_1225_, size_t v_x_1226_, size_t v_x_1227_, lean_object* v_x_1228_, lean_object* v_x_1229_){
_start:
{
lean_object* v___x_1230_; 
v___x_1230_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg(v_x_1225_, v_x_1226_, v_x_1227_, v_x_1228_, v_x_1229_);
return v___x_1230_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1231_, lean_object* v_x_1232_, lean_object* v_x_1233_, lean_object* v_x_1234_, lean_object* v_x_1235_, lean_object* v_x_1236_){
_start:
{
size_t v_x_2368__boxed_1237_; size_t v_x_2369__boxed_1238_; lean_object* v_res_1239_; 
v_x_2368__boxed_1237_ = lean_unbox_usize(v_x_1233_);
lean_dec(v_x_1233_);
v_x_2369__boxed_1238_ = lean_unbox_usize(v_x_1234_);
lean_dec(v_x_1234_);
v_res_1239_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2(v_00_u03b2_1231_, v_x_1232_, v_x_2368__boxed_1237_, v_x_2369__boxed_1238_, v_x_1235_, v_x_1236_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1240_, lean_object* v_keys_1241_, lean_object* v_vals_1242_, lean_object* v_heq_1243_, lean_object* v_i_1244_, lean_object* v_k_1245_){
_start:
{
lean_object* v___x_1246_; 
v___x_1246_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0_spec__1___redArg(v_keys_1241_, v_vals_1242_, v_i_1244_, v_k_1245_);
return v___x_1246_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1247_, lean_object* v_keys_1248_, lean_object* v_vals_1249_, lean_object* v_heq_1250_, lean_object* v_i_1251_, lean_object* v_k_1252_){
_start:
{
lean_object* v_res_1253_; 
v_res_1253_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__0_spec__0_spec__1(v_00_u03b2_1247_, v_keys_1248_, v_vals_1249_, v_heq_1250_, v_i_1251_, v_k_1252_);
lean_dec(v_k_1252_);
lean_dec_ref(v_vals_1249_);
lean_dec_ref(v_keys_1248_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1254_, lean_object* v_n_1255_, lean_object* v_k_1256_, lean_object* v_v_1257_){
_start:
{
lean_object* v___x_1258_; 
v___x_1258_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__4___redArg(v_n_1255_, v_k_1256_, v_v_1257_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_1259_, size_t v_depth_1260_, lean_object* v_keys_1261_, lean_object* v_vals_1262_, lean_object* v_heq_1263_, lean_object* v_i_1264_, lean_object* v_entries_1265_){
_start:
{
lean_object* v___x_1266_; 
v___x_1266_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__5___redArg(v_depth_1260_, v_keys_1261_, v_vals_1262_, v_i_1264_, v_entries_1265_);
return v___x_1266_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_1267_, lean_object* v_depth_1268_, lean_object* v_keys_1269_, lean_object* v_vals_1270_, lean_object* v_heq_1271_, lean_object* v_i_1272_, lean_object* v_entries_1273_){
_start:
{
size_t v_depth_boxed_1274_; lean_object* v_res_1275_; 
v_depth_boxed_1274_ = lean_unbox_usize(v_depth_1268_);
lean_dec(v_depth_1268_);
v_res_1275_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__5(v_00_u03b2_1267_, v_depth_boxed_1274_, v_keys_1269_, v_vals_1270_, v_heq_1271_, v_i_1272_, v_entries_1273_);
lean_dec_ref(v_vals_1270_);
lean_dec_ref(v_keys_1269_);
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_1276_, lean_object* v_x_1277_, lean_object* v_x_1278_, lean_object* v_x_1279_, lean_object* v_x_1280_){
_start:
{
lean_object* v___x_1281_; 
v___x_1281_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2_spec__4_spec__5___redArg(v_x_1277_, v_x_1278_, v_x_1279_, v_x_1280_);
return v___x_1281_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__2___redArg(lean_object* v_x_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = l_Lean_Elab_Tactic_Grind_saveState___redArg(v___y_1284_, v___y_1286_, v___y_1288_, v___y_1290_);
if (lean_obj_tag(v___x_1292_) == 0)
{
lean_object* v_a_1293_; lean_object* v___x_1294_; 
v_a_1293_ = lean_ctor_get(v___x_1292_, 0);
lean_inc(v_a_1293_);
lean_dec_ref_known(v___x_1292_, 1);
v___x_1294_ = l_Lean_Elab_Tactic_Grind_saveState___redArg(v___y_1284_, v___y_1286_, v___y_1288_, v___y_1290_);
if (lean_obj_tag(v___x_1294_) == 0)
{
lean_object* v_a_1295_; lean_object* v___x_1296_; 
v_a_1295_ = lean_ctor_get(v___x_1294_, 0);
lean_inc(v_a_1295_);
lean_dec_ref_known(v___x_1294_, 1);
lean_inc(v___y_1290_);
lean_inc_ref(v___y_1289_);
lean_inc(v___y_1288_);
lean_inc_ref(v___y_1287_);
lean_inc(v___y_1286_);
lean_inc_ref(v___y_1285_);
lean_inc(v___y_1284_);
lean_inc_ref(v___y_1283_);
v___x_1296_ = lean_apply_9(v_x_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, lean_box(0));
if (lean_obj_tag(v___x_1296_) == 0)
{
lean_object* v_a_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1305_; 
lean_dec(v_a_1295_);
lean_dec(v_a_1293_);
v_a_1297_ = lean_ctor_get(v___x_1296_, 0);
v_isSharedCheck_1305_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1299_ = v___x_1296_;
v_isShared_1300_ = v_isSharedCheck_1305_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_a_1297_);
lean_dec(v___x_1296_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1305_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1301_; lean_object* v___x_1303_; 
v___x_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1301_, 0, v_a_1297_);
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 0, v___x_1301_);
v___x_1303_ = v___x_1299_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v___x_1301_);
v___x_1303_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
return v___x_1303_;
}
}
}
else
{
lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1346_; 
v_a_1306_ = lean_ctor_get(v___x_1296_, 0);
v_isSharedCheck_1346_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1346_ == 0)
{
v___x_1308_ = v___x_1296_;
v_isShared_1309_ = v_isSharedCheck_1346_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v___x_1296_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1346_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
uint8_t v___x_1310_; 
v___x_1310_ = l_Lean_Exception_isInterrupt(v_a_1306_);
if (v___x_1310_ == 0)
{
uint8_t v___x_1311_; 
lean_inc(v_a_1306_);
v___x_1311_ = l_Lean_Exception_isRuntime(v_a_1306_);
if (v___x_1311_ == 0)
{
uint8_t v___x_1312_; lean_object* v___x_1313_; 
lean_del_object(v___x_1308_);
lean_dec(v_a_1306_);
v___x_1312_ = 1;
v___x_1313_ = l_Lean_Elab_Tactic_Grind_SavedState_restore___redArg(v_a_1295_, v___x_1312_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_);
if (lean_obj_tag(v___x_1313_) == 0)
{
lean_object* v___x_1314_; 
lean_dec_ref_known(v___x_1313_, 1);
v___x_1314_ = l_Lean_Elab_Tactic_Grind_SavedState_restore___redArg(v_a_1293_, v___x_1311_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_);
if (lean_obj_tag(v___x_1314_) == 0)
{
lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1322_; 
v_isSharedCheck_1322_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1322_ == 0)
{
lean_object* v_unused_1323_; 
v_unused_1323_ = lean_ctor_get(v___x_1314_, 0);
lean_dec(v_unused_1323_);
v___x_1316_ = v___x_1314_;
v_isShared_1317_ = v_isSharedCheck_1322_;
goto v_resetjp_1315_;
}
else
{
lean_dec(v___x_1314_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1322_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
lean_object* v___x_1318_; lean_object* v___x_1320_; 
v___x_1318_ = lean_box(0);
if (v_isShared_1317_ == 0)
{
lean_ctor_set(v___x_1316_, 0, v___x_1318_);
v___x_1320_ = v___x_1316_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v___x_1318_);
v___x_1320_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
return v___x_1320_;
}
}
}
else
{
lean_object* v_a_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1331_; 
v_a_1324_ = lean_ctor_get(v___x_1314_, 0);
v_isSharedCheck_1331_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1326_ = v___x_1314_;
v_isShared_1327_ = v_isSharedCheck_1331_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_a_1324_);
lean_dec(v___x_1314_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1331_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v___x_1329_; 
if (v_isShared_1327_ == 0)
{
v___x_1329_ = v___x_1326_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v_a_1324_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
}
}
}
}
else
{
lean_object* v_a_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1339_; 
lean_dec(v_a_1293_);
v_a_1332_ = lean_ctor_get(v___x_1313_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1313_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1334_ = v___x_1313_;
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_a_1332_);
lean_dec(v___x_1313_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v___x_1337_; 
if (v_isShared_1335_ == 0)
{
v___x_1337_ = v___x_1334_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_a_1332_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
}
else
{
lean_object* v___x_1341_; 
lean_dec(v_a_1295_);
lean_dec(v_a_1293_);
if (v_isShared_1309_ == 0)
{
v___x_1341_ = v___x_1308_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_a_1306_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
return v___x_1341_;
}
}
}
else
{
lean_object* v___x_1344_; 
lean_dec(v_a_1295_);
lean_dec(v_a_1293_);
if (v_isShared_1309_ == 0)
{
v___x_1344_ = v___x_1308_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v_a_1306_);
v___x_1344_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
return v___x_1344_;
}
}
}
}
}
else
{
lean_object* v_a_1347_; lean_object* v___x_1349_; uint8_t v_isShared_1350_; uint8_t v_isSharedCheck_1354_; 
lean_dec(v_a_1293_);
lean_dec_ref(v_x_1282_);
v_a_1347_ = lean_ctor_get(v___x_1294_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1294_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1349_ = v___x_1294_;
v_isShared_1350_ = v_isSharedCheck_1354_;
goto v_resetjp_1348_;
}
else
{
lean_inc(v_a_1347_);
lean_dec(v___x_1294_);
v___x_1349_ = lean_box(0);
v_isShared_1350_ = v_isSharedCheck_1354_;
goto v_resetjp_1348_;
}
v_resetjp_1348_:
{
lean_object* v___x_1352_; 
if (v_isShared_1350_ == 0)
{
v___x_1352_ = v___x_1349_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v_a_1347_);
v___x_1352_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
return v___x_1352_;
}
}
}
}
else
{
lean_object* v_a_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1362_; 
lean_dec_ref(v_x_1282_);
v_a_1355_ = lean_ctor_get(v___x_1292_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v___x_1292_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1357_ = v___x_1292_;
v_isShared_1358_ = v_isSharedCheck_1362_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_a_1355_);
lean_dec(v___x_1292_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1362_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1360_; 
if (v_isShared_1358_ == 0)
{
v___x_1360_ = v___x_1357_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v_a_1355_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__2___redArg___boxed(lean_object* v_x_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l_Lean_observing_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__2___redArg(v_x_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec(v___y_1365_);
lean_dec_ref(v___y_1364_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__2(lean_object* v_00_u03b1_1374_, lean_object* v_x_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_){
_start:
{
lean_object* v___x_1385_; 
v___x_1385_ = l_Lean_observing_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__2___redArg(v_x_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_);
return v___x_1385_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__2___boxed(lean_object* v_00_u03b1_1386_, lean_object* v_x_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_){
_start:
{
lean_object* v_res_1397_; 
v_res_1397_ = l_Lean_observing_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__2(v_00_u03b1_1386_, v_x_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec(v___y_1393_);
lean_dec_ref(v___y_1392_);
lean_dec(v___y_1391_);
lean_dec_ref(v___y_1390_);
lean_dec(v___y_1389_);
lean_dec_ref(v___y_1388_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0_spec__2___redArg(lean_object* v_keys_1398_, lean_object* v_vals_1399_, lean_object* v_i_1400_, lean_object* v_k_1401_){
_start:
{
lean_object* v___x_1406_; uint8_t v___x_1407_; 
v___x_1406_ = lean_array_get_size(v_keys_1398_);
v___x_1407_ = lean_nat_dec_lt(v_i_1400_, v___x_1406_);
if (v___x_1407_ == 0)
{
lean_object* v___x_1408_; 
lean_dec(v_i_1400_);
v___x_1408_ = lean_box(0);
return v___x_1408_;
}
else
{
lean_object* v_fst_1409_; lean_object* v_snd_1410_; lean_object* v_k_x27_1411_; lean_object* v_fst_1412_; lean_object* v_snd_1413_; uint8_t v___x_1414_; 
v_fst_1409_ = lean_ctor_get(v_k_1401_, 0);
v_snd_1410_ = lean_ctor_get(v_k_1401_, 1);
v_k_x27_1411_ = lean_array_fget_borrowed(v_keys_1398_, v_i_1400_);
v_fst_1412_ = lean_ctor_get(v_k_x27_1411_, 0);
v_snd_1413_ = lean_ctor_get(v_k_x27_1411_, 1);
v___x_1414_ = lean_nat_dec_eq(v_fst_1409_, v_fst_1412_);
if (v___x_1414_ == 0)
{
goto v___jp_1402_;
}
else
{
uint8_t v___x_1415_; 
v___x_1415_ = lean_nat_dec_eq(v_snd_1410_, v_snd_1413_);
if (v___x_1415_ == 0)
{
goto v___jp_1402_;
}
else
{
lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1416_ = lean_array_fget_borrowed(v_vals_1399_, v_i_1400_);
lean_dec(v_i_1400_);
lean_inc(v___x_1416_);
v___x_1417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1417_, 0, v___x_1416_);
return v___x_1417_;
}
}
}
v___jp_1402_:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1403_ = lean_unsigned_to_nat(1u);
v___x_1404_ = lean_nat_add(v_i_1400_, v___x_1403_);
lean_dec(v_i_1400_);
v_i_1400_ = v___x_1404_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_1418_, lean_object* v_vals_1419_, lean_object* v_i_1420_, lean_object* v_k_1421_){
_start:
{
lean_object* v_res_1422_; 
v_res_1422_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0_spec__2___redArg(v_keys_1418_, v_vals_1419_, v_i_1420_, v_k_1421_);
lean_dec_ref(v_k_1421_);
lean_dec_ref(v_vals_1419_);
lean_dec_ref(v_keys_1418_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0___redArg(lean_object* v_x_1423_, size_t v_x_1424_, lean_object* v_x_1425_){
_start:
{
if (lean_obj_tag(v_x_1423_) == 0)
{
lean_object* v_es_1426_; lean_object* v___x_1427_; size_t v___x_1428_; size_t v___x_1429_; lean_object* v_j_1430_; lean_object* v___x_1431_; 
v_es_1426_ = lean_ctor_get(v_x_1423_, 0);
v___x_1427_ = lean_box(2);
v___x_1428_ = ((size_t)31ULL);
v___x_1429_ = lean_usize_land(v_x_1424_, v___x_1428_);
v_j_1430_ = lean_usize_to_nat(v___x_1429_);
v___x_1431_ = lean_array_get_borrowed(v___x_1427_, v_es_1426_, v_j_1430_);
lean_dec(v_j_1430_);
switch(lean_obj_tag(v___x_1431_))
{
case 0:
{
lean_object* v_key_1432_; lean_object* v_val_1433_; lean_object* v_fst_1434_; lean_object* v_snd_1435_; lean_object* v_fst_1436_; lean_object* v_snd_1437_; uint8_t v___x_1438_; 
v_key_1432_ = lean_ctor_get(v___x_1431_, 0);
v_val_1433_ = lean_ctor_get(v___x_1431_, 1);
v_fst_1434_ = lean_ctor_get(v_x_1425_, 0);
v_snd_1435_ = lean_ctor_get(v_x_1425_, 1);
v_fst_1436_ = lean_ctor_get(v_key_1432_, 0);
v_snd_1437_ = lean_ctor_get(v_key_1432_, 1);
v___x_1438_ = lean_nat_dec_eq(v_fst_1434_, v_fst_1436_);
if (v___x_1438_ == 0)
{
lean_object* v___x_1439_; 
v___x_1439_ = lean_box(0);
return v___x_1439_;
}
else
{
uint8_t v___x_1440_; 
v___x_1440_ = lean_nat_dec_eq(v_snd_1435_, v_snd_1437_);
if (v___x_1440_ == 0)
{
lean_object* v___x_1441_; 
v___x_1441_ = lean_box(0);
return v___x_1441_;
}
else
{
lean_object* v___x_1442_; 
lean_inc(v_val_1433_);
v___x_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1442_, 0, v_val_1433_);
return v___x_1442_;
}
}
}
case 1:
{
lean_object* v_node_1443_; size_t v___x_1444_; size_t v___x_1445_; 
v_node_1443_ = lean_ctor_get(v___x_1431_, 0);
v___x_1444_ = ((size_t)5ULL);
v___x_1445_ = lean_usize_shift_right(v_x_1424_, v___x_1444_);
v_x_1423_ = v_node_1443_;
v_x_1424_ = v___x_1445_;
goto _start;
}
default: 
{
lean_object* v___x_1447_; 
v___x_1447_ = lean_box(0);
return v___x_1447_;
}
}
}
else
{
lean_object* v_ks_1448_; lean_object* v_vs_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v_ks_1448_ = lean_ctor_get(v_x_1423_, 0);
v_vs_1449_ = lean_ctor_get(v_x_1423_, 1);
v___x_1450_ = lean_unsigned_to_nat(0u);
v___x_1451_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0_spec__2___redArg(v_ks_1448_, v_vs_1449_, v___x_1450_, v_x_1425_);
return v___x_1451_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0___redArg___boxed(lean_object* v_x_1452_, lean_object* v_x_1453_, lean_object* v_x_1454_){
_start:
{
size_t v_x_4952__boxed_1455_; lean_object* v_res_1456_; 
v_x_4952__boxed_1455_ = lean_unbox_usize(v_x_1453_);
lean_dec(v_x_1453_);
v_res_1456_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0___redArg(v_x_1452_, v_x_4952__boxed_1455_, v_x_1454_);
lean_dec_ref(v_x_1454_);
lean_dec_ref(v_x_1452_);
return v_res_1456_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0___redArg(lean_object* v_x_1457_, lean_object* v_x_1458_){
_start:
{
lean_object* v_fst_1459_; lean_object* v_snd_1460_; uint64_t v___x_1461_; uint64_t v___x_1462_; uint64_t v___x_1463_; size_t v___x_1464_; lean_object* v___x_1465_; 
v_fst_1459_ = lean_ctor_get(v_x_1458_, 0);
v_snd_1460_ = lean_ctor_get(v_x_1458_, 1);
v___x_1461_ = lean_uint64_of_nat(v_fst_1459_);
v___x_1462_ = lean_uint64_of_nat(v_snd_1460_);
v___x_1463_ = lean_uint64_mix_hash(v___x_1461_, v___x_1462_);
v___x_1464_ = lean_uint64_to_usize(v___x_1463_);
v___x_1465_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0___redArg(v_x_1457_, v___x_1464_, v_x_1458_);
return v___x_1465_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0___redArg___boxed(lean_object* v_x_1466_, lean_object* v_x_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0___redArg(v_x_1466_, v_x_1467_);
lean_dec_ref(v_x_1467_);
lean_dec_ref(v_x_1466_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__5_spec__6___redArg(lean_object* v_x_1469_, lean_object* v_x_1470_, lean_object* v_x_1471_, lean_object* v_x_1472_){
_start:
{
lean_object* v_ks_1473_; lean_object* v_vs_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1506_; 
v_ks_1473_ = lean_ctor_get(v_x_1469_, 0);
v_vs_1474_ = lean_ctor_get(v_x_1469_, 1);
v_isSharedCheck_1506_ = !lean_is_exclusive(v_x_1469_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1476_ = v_x_1469_;
v_isShared_1477_ = v_isSharedCheck_1506_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_vs_1474_);
lean_inc(v_ks_1473_);
lean_dec(v_x_1469_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1506_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1485_; uint8_t v___x_1486_; 
v___x_1485_ = lean_array_get_size(v_ks_1473_);
v___x_1486_ = lean_nat_dec_lt(v_x_1470_, v___x_1485_);
if (v___x_1486_ == 0)
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; 
lean_del_object(v___x_1476_);
lean_dec(v_x_1470_);
v___x_1487_ = lean_array_push(v_ks_1473_, v_x_1471_);
v___x_1488_ = lean_array_push(v_vs_1474_, v_x_1472_);
v___x_1489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1489_, 0, v___x_1487_);
lean_ctor_set(v___x_1489_, 1, v___x_1488_);
return v___x_1489_;
}
else
{
lean_object* v_fst_1490_; lean_object* v_snd_1491_; lean_object* v_k_x27_1492_; lean_object* v_fst_1493_; lean_object* v_snd_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1505_; 
v_fst_1490_ = lean_ctor_get(v_x_1471_, 0);
v_snd_1491_ = lean_ctor_get(v_x_1471_, 1);
v_k_x27_1492_ = lean_array_fget(v_ks_1473_, v_x_1470_);
v_fst_1493_ = lean_ctor_get(v_k_x27_1492_, 0);
v_snd_1494_ = lean_ctor_get(v_k_x27_1492_, 1);
v_isSharedCheck_1505_ = !lean_is_exclusive(v_k_x27_1492_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1496_ = v_k_x27_1492_;
v_isShared_1497_ = v_isSharedCheck_1505_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_snd_1494_);
lean_inc(v_fst_1493_);
lean_dec(v_k_x27_1492_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1505_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
uint8_t v___x_1498_; 
v___x_1498_ = lean_nat_dec_eq(v_fst_1490_, v_fst_1493_);
lean_dec(v_fst_1493_);
if (v___x_1498_ == 0)
{
lean_del_object(v___x_1496_);
lean_dec(v_snd_1494_);
goto v___jp_1478_;
}
else
{
uint8_t v___x_1499_; 
v___x_1499_ = lean_nat_dec_eq(v_snd_1491_, v_snd_1494_);
lean_dec(v_snd_1494_);
if (v___x_1499_ == 0)
{
lean_del_object(v___x_1496_);
goto v___jp_1478_;
}
else
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1503_; 
lean_del_object(v___x_1476_);
v___x_1500_ = lean_array_fset(v_ks_1473_, v_x_1470_, v_x_1471_);
v___x_1501_ = lean_array_fset(v_vs_1474_, v_x_1470_, v_x_1472_);
lean_dec(v_x_1470_);
if (v_isShared_1497_ == 0)
{
lean_ctor_set_tag(v___x_1496_, 1);
lean_ctor_set(v___x_1496_, 1, v___x_1501_);
lean_ctor_set(v___x_1496_, 0, v___x_1500_);
v___x_1503_ = v___x_1496_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v___x_1500_);
lean_ctor_set(v_reuseFailAlloc_1504_, 1, v___x_1501_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
return v___x_1503_;
}
}
}
}
}
v___jp_1478_:
{
lean_object* v___x_1480_; 
if (v_isShared_1477_ == 0)
{
v___x_1480_ = v___x_1476_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_ks_1473_);
lean_ctor_set(v_reuseFailAlloc_1484_, 1, v_vs_1474_);
v___x_1480_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1481_ = lean_unsigned_to_nat(1u);
v___x_1482_ = lean_nat_add(v_x_1470_, v___x_1481_);
lean_dec(v_x_1470_);
v_x_1469_ = v___x_1480_;
v_x_1470_ = v___x_1482_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__5___redArg(lean_object* v_n_1507_, lean_object* v_k_1508_, lean_object* v_v_1509_){
_start:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1510_ = lean_unsigned_to_nat(0u);
v___x_1511_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__5_spec__6___redArg(v_n_1507_, v___x_1510_, v_k_1508_, v_v_1509_);
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2___redArg(lean_object* v_x_1512_, size_t v_x_1513_, size_t v_x_1514_, lean_object* v_x_1515_, lean_object* v_x_1516_){
_start:
{
if (lean_obj_tag(v_x_1512_) == 0)
{
lean_object* v_es_1517_; size_t v___x_1518_; size_t v___x_1519_; lean_object* v_j_1520_; lean_object* v___x_1521_; uint8_t v___x_1522_; 
v_es_1517_ = lean_ctor_get(v_x_1512_, 0);
v___x_1518_ = ((size_t)31ULL);
v___x_1519_ = lean_usize_land(v_x_1513_, v___x_1518_);
v_j_1520_ = lean_usize_to_nat(v___x_1519_);
v___x_1521_ = lean_array_get_size(v_es_1517_);
v___x_1522_ = lean_nat_dec_lt(v_j_1520_, v___x_1521_);
if (v___x_1522_ == 0)
{
lean_dec(v_j_1520_);
lean_dec(v_x_1516_);
lean_dec_ref(v_x_1515_);
return v_x_1512_;
}
else
{
lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1567_; 
lean_inc_ref(v_es_1517_);
v_isSharedCheck_1567_ = !lean_is_exclusive(v_x_1512_);
if (v_isSharedCheck_1567_ == 0)
{
lean_object* v_unused_1568_; 
v_unused_1568_ = lean_ctor_get(v_x_1512_, 0);
lean_dec(v_unused_1568_);
v___x_1524_ = v_x_1512_;
v_isShared_1525_ = v_isSharedCheck_1567_;
goto v_resetjp_1523_;
}
else
{
lean_dec(v_x_1512_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1567_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v_v_1526_; lean_object* v___x_1527_; lean_object* v_xs_x27_1528_; lean_object* v___y_1530_; 
v_v_1526_ = lean_array_fget(v_es_1517_, v_j_1520_);
v___x_1527_ = lean_box(0);
v_xs_x27_1528_ = lean_array_fset(v_es_1517_, v_j_1520_, v___x_1527_);
switch(lean_obj_tag(v_v_1526_))
{
case 0:
{
lean_object* v_key_1535_; lean_object* v_val_1536_; lean_object* v___x_1538_; uint8_t v_isShared_1539_; uint8_t v_isSharedCheck_1552_; 
v_key_1535_ = lean_ctor_get(v_v_1526_, 0);
v_val_1536_ = lean_ctor_get(v_v_1526_, 1);
v_isSharedCheck_1552_ = !lean_is_exclusive(v_v_1526_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1538_ = v_v_1526_;
v_isShared_1539_ = v_isSharedCheck_1552_;
goto v_resetjp_1537_;
}
else
{
lean_inc(v_val_1536_);
lean_inc(v_key_1535_);
lean_dec(v_v_1526_);
v___x_1538_ = lean_box(0);
v_isShared_1539_ = v_isSharedCheck_1552_;
goto v_resetjp_1537_;
}
v_resetjp_1537_:
{
lean_object* v_fst_1543_; lean_object* v_snd_1544_; lean_object* v_fst_1545_; lean_object* v_snd_1546_; uint8_t v___x_1547_; 
v_fst_1543_ = lean_ctor_get(v_x_1515_, 0);
v_snd_1544_ = lean_ctor_get(v_x_1515_, 1);
v_fst_1545_ = lean_ctor_get(v_key_1535_, 0);
v_snd_1546_ = lean_ctor_get(v_key_1535_, 1);
v___x_1547_ = lean_nat_dec_eq(v_fst_1543_, v_fst_1545_);
if (v___x_1547_ == 0)
{
lean_del_object(v___x_1538_);
goto v___jp_1540_;
}
else
{
uint8_t v___x_1548_; 
v___x_1548_ = lean_nat_dec_eq(v_snd_1544_, v_snd_1546_);
if (v___x_1548_ == 0)
{
lean_del_object(v___x_1538_);
goto v___jp_1540_;
}
else
{
lean_object* v___x_1550_; 
lean_dec(v_val_1536_);
lean_dec(v_key_1535_);
if (v_isShared_1539_ == 0)
{
lean_ctor_set(v___x_1538_, 1, v_x_1516_);
lean_ctor_set(v___x_1538_, 0, v_x_1515_);
v___x_1550_ = v___x_1538_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v_x_1515_);
lean_ctor_set(v_reuseFailAlloc_1551_, 1, v_x_1516_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
v___y_1530_ = v___x_1550_;
goto v___jp_1529_;
}
}
}
v___jp_1540_:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1541_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1535_, v_val_1536_, v_x_1515_, v_x_1516_);
v___x_1542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1542_, 0, v___x_1541_);
v___y_1530_ = v___x_1542_;
goto v___jp_1529_;
}
}
}
case 1:
{
lean_object* v_node_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1565_; 
v_node_1553_ = lean_ctor_get(v_v_1526_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v_v_1526_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1555_ = v_v_1526_;
v_isShared_1556_ = v_isSharedCheck_1565_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_node_1553_);
lean_dec(v_v_1526_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1565_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
size_t v___x_1557_; size_t v___x_1558_; size_t v___x_1559_; size_t v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1563_; 
v___x_1557_ = ((size_t)5ULL);
v___x_1558_ = lean_usize_shift_right(v_x_1513_, v___x_1557_);
v___x_1559_ = ((size_t)1ULL);
v___x_1560_ = lean_usize_add(v_x_1514_, v___x_1559_);
v___x_1561_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2___redArg(v_node_1553_, v___x_1558_, v___x_1560_, v_x_1515_, v_x_1516_);
if (v_isShared_1556_ == 0)
{
lean_ctor_set(v___x_1555_, 0, v___x_1561_);
v___x_1563_ = v___x_1555_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v___x_1561_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
v___y_1530_ = v___x_1563_;
goto v___jp_1529_;
}
}
}
default: 
{
lean_object* v___x_1566_; 
v___x_1566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1566_, 0, v_x_1515_);
lean_ctor_set(v___x_1566_, 1, v_x_1516_);
v___y_1530_ = v___x_1566_;
goto v___jp_1529_;
}
}
v___jp_1529_:
{
lean_object* v___x_1531_; lean_object* v___x_1533_; 
v___x_1531_ = lean_array_fset(v_xs_x27_1528_, v_j_1520_, v___y_1530_);
lean_dec(v_j_1520_);
if (v_isShared_1525_ == 0)
{
lean_ctor_set(v___x_1524_, 0, v___x_1531_);
v___x_1533_ = v___x_1524_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v___x_1531_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
}
}
}
else
{
lean_object* v_ks_1569_; lean_object* v_vs_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1588_; 
v_ks_1569_ = lean_ctor_get(v_x_1512_, 0);
v_vs_1570_ = lean_ctor_get(v_x_1512_, 1);
v_isSharedCheck_1588_ = !lean_is_exclusive(v_x_1512_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1572_ = v_x_1512_;
v_isShared_1573_ = v_isSharedCheck_1588_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_vs_1570_);
lean_inc(v_ks_1569_);
lean_dec(v_x_1512_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1588_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1575_; 
if (v_isShared_1573_ == 0)
{
v___x_1575_ = v___x_1572_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_ks_1569_);
lean_ctor_set(v_reuseFailAlloc_1587_, 1, v_vs_1570_);
v___x_1575_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
lean_object* v_newNode_1576_; size_t v___x_1577_; uint8_t v___x_1578_; 
v_newNode_1576_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__5___redArg(v___x_1575_, v_x_1515_, v_x_1516_);
v___x_1577_ = ((size_t)7ULL);
v___x_1578_ = lean_usize_dec_le(v___x_1577_, v_x_1514_);
if (v___x_1578_ == 0)
{
lean_object* v___x_1579_; lean_object* v___x_1580_; uint8_t v___x_1581_; 
v___x_1579_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1576_);
v___x_1580_ = lean_unsigned_to_nat(4u);
v___x_1581_ = lean_nat_dec_lt(v___x_1579_, v___x_1580_);
lean_dec(v___x_1579_);
if (v___x_1581_ == 0)
{
lean_object* v_ks_1582_; lean_object* v_vs_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; 
v_ks_1582_ = lean_ctor_get(v_newNode_1576_, 0);
lean_inc_ref(v_ks_1582_);
v_vs_1583_ = lean_ctor_get(v_newNode_1576_, 1);
lean_inc_ref(v_vs_1583_);
lean_dec_ref(v_newNode_1576_);
v___x_1584_ = lean_unsigned_to_nat(0u);
v___x_1585_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRule_spec__1_spec__2___redArg___closed__0);
v___x_1586_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__6___redArg(v_x_1514_, v_ks_1582_, v_vs_1583_, v___x_1584_, v___x_1585_);
lean_dec_ref(v_vs_1583_);
lean_dec_ref(v_ks_1582_);
return v___x_1586_;
}
else
{
return v_newNode_1576_;
}
}
else
{
return v_newNode_1576_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__6___redArg(size_t v_depth_1589_, lean_object* v_keys_1590_, lean_object* v_vals_1591_, lean_object* v_i_1592_, lean_object* v_entries_1593_){
_start:
{
lean_object* v___x_1594_; uint8_t v___x_1595_; 
v___x_1594_ = lean_array_get_size(v_keys_1590_);
v___x_1595_ = lean_nat_dec_lt(v_i_1592_, v___x_1594_);
if (v___x_1595_ == 0)
{
lean_dec(v_i_1592_);
return v_entries_1593_;
}
else
{
lean_object* v_k_1596_; lean_object* v_fst_1597_; lean_object* v_snd_1598_; lean_object* v_v_1599_; uint64_t v___x_1600_; uint64_t v___x_1601_; uint64_t v___x_1602_; size_t v_h_1603_; size_t v___x_1604_; lean_object* v___x_1605_; size_t v___x_1606_; size_t v___x_1607_; size_t v___x_1608_; size_t v_h_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
v_k_1596_ = lean_array_fget_borrowed(v_keys_1590_, v_i_1592_);
v_fst_1597_ = lean_ctor_get(v_k_1596_, 0);
v_snd_1598_ = lean_ctor_get(v_k_1596_, 1);
v_v_1599_ = lean_array_fget_borrowed(v_vals_1591_, v_i_1592_);
v___x_1600_ = lean_uint64_of_nat(v_fst_1597_);
v___x_1601_ = lean_uint64_of_nat(v_snd_1598_);
v___x_1602_ = lean_uint64_mix_hash(v___x_1600_, v___x_1601_);
v_h_1603_ = lean_uint64_to_usize(v___x_1602_);
v___x_1604_ = ((size_t)5ULL);
v___x_1605_ = lean_unsigned_to_nat(1u);
v___x_1606_ = ((size_t)1ULL);
v___x_1607_ = lean_usize_sub(v_depth_1589_, v___x_1606_);
v___x_1608_ = lean_usize_mul(v___x_1604_, v___x_1607_);
v_h_1609_ = lean_usize_shift_right(v_h_1603_, v___x_1608_);
v___x_1610_ = lean_nat_add(v_i_1592_, v___x_1605_);
lean_dec(v_i_1592_);
lean_inc(v_v_1599_);
lean_inc(v_k_1596_);
v___x_1611_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2___redArg(v_entries_1593_, v_h_1609_, v_depth_1589_, v_k_1596_, v_v_1599_);
v_i_1592_ = v___x_1610_;
v_entries_1593_ = v___x_1611_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__6___redArg___boxed(lean_object* v_depth_1613_, lean_object* v_keys_1614_, lean_object* v_vals_1615_, lean_object* v_i_1616_, lean_object* v_entries_1617_){
_start:
{
size_t v_depth_boxed_1618_; lean_object* v_res_1619_; 
v_depth_boxed_1618_ = lean_unbox_usize(v_depth_1613_);
lean_dec(v_depth_1613_);
v_res_1619_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__6___redArg(v_depth_boxed_1618_, v_keys_1614_, v_vals_1615_, v_i_1616_, v_entries_1617_);
lean_dec_ref(v_vals_1615_);
lean_dec_ref(v_keys_1614_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2___redArg___boxed(lean_object* v_x_1620_, lean_object* v_x_1621_, lean_object* v_x_1622_, lean_object* v_x_1623_, lean_object* v_x_1624_){
_start:
{
size_t v_x_5126__boxed_1625_; size_t v_x_5127__boxed_1626_; lean_object* v_res_1627_; 
v_x_5126__boxed_1625_ = lean_unbox_usize(v_x_1621_);
lean_dec(v_x_1621_);
v_x_5127__boxed_1626_ = lean_unbox_usize(v_x_1622_);
lean_dec(v_x_1622_);
v_res_1627_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2___redArg(v_x_1620_, v_x_5126__boxed_1625_, v_x_5127__boxed_1626_, v_x_1623_, v_x_1624_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1___redArg(lean_object* v_x_1628_, lean_object* v_x_1629_, lean_object* v_x_1630_){
_start:
{
lean_object* v_fst_1631_; lean_object* v_snd_1632_; uint64_t v___x_1633_; uint64_t v___x_1634_; uint64_t v___x_1635_; size_t v___x_1636_; size_t v___x_1637_; lean_object* v___x_1638_; 
v_fst_1631_ = lean_ctor_get(v_x_1629_, 0);
v_snd_1632_ = lean_ctor_get(v_x_1629_, 1);
v___x_1633_ = lean_uint64_of_nat(v_fst_1631_);
v___x_1634_ = lean_uint64_of_nat(v_snd_1632_);
v___x_1635_ = lean_uint64_mix_hash(v___x_1633_, v___x_1634_);
v___x_1636_ = lean_uint64_to_usize(v___x_1635_);
v___x_1637_ = ((size_t)1ULL);
v___x_1638_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2___redArg(v_x_1628_, v___x_1636_, v___x_1637_, v_x_1629_, v_x_1630_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__0(lean_object* v_term_1639_, lean_object* v_____r_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_){
_start:
{
uint8_t v___x_1650_; lean_object* v___y_1652_; lean_object* v___y_1653_; lean_object* v___y_1727_; lean_object* v___x_1731_; 
v___x_1650_ = 0;
v___x_1731_ = l_Lean_Syntax_getPos_x3f(v_term_1639_, v___x_1650_);
if (lean_obj_tag(v___x_1731_) == 0)
{
lean_object* v___x_1732_; 
v___x_1732_ = lean_unsigned_to_nat(0u);
v___y_1727_ = v___x_1732_;
goto v___jp_1726_;
}
else
{
lean_object* v_val_1733_; 
v_val_1733_ = lean_ctor_get(v___x_1731_, 0);
lean_inc(v_val_1733_);
lean_dec_ref_known(v___x_1731_, 1);
v___y_1727_ = v_val_1733_;
goto v___jp_1726_;
}
v___jp_1651_:
{
lean_object* v_pos_1654_; lean_object* v___x_1655_; lean_object* v_cache_1656_; lean_object* v_backwardRuleSyntax_1657_; lean_object* v___x_1658_; 
v_pos_1654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_pos_1654_, 0, v___y_1652_);
lean_ctor_set(v_pos_1654_, 1, v___y_1653_);
v___x_1655_ = lean_st_ref_get(v___y_1642_);
v_cache_1656_ = lean_ctor_get(v___x_1655_, 3);
lean_inc_ref(v_cache_1656_);
lean_dec(v___x_1655_);
v_backwardRuleSyntax_1657_ = lean_ctor_get(v_cache_1656_, 1);
lean_inc_ref(v_backwardRuleSyntax_1657_);
lean_dec_ref(v_cache_1656_);
v___x_1658_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0___redArg(v_backwardRuleSyntax_1657_, v_pos_1654_);
lean_dec_ref(v_backwardRuleSyntax_1657_);
if (lean_obj_tag(v___x_1658_) == 1)
{
lean_object* v_val_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1666_; 
lean_dec_ref_known(v_pos_1654_, 2);
lean_dec(v_term_1639_);
v_val_1659_ = lean_ctor_get(v___x_1658_, 0);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1658_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1661_ = v___x_1658_;
v_isShared_1662_ = v_isSharedCheck_1666_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_val_1659_);
lean_dec(v___x_1658_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1666_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v___x_1664_; 
if (v_isShared_1662_ == 0)
{
lean_ctor_set_tag(v___x_1661_, 0);
v___x_1664_ = v___x_1661_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_val_1659_);
v___x_1664_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
return v___x_1664_;
}
}
}
else
{
lean_object* v___x_1667_; uint8_t v___x_1668_; lean_object* v___x_1669_; 
lean_dec(v___x_1658_);
v___x_1667_ = lean_box(0);
v___x_1668_ = 1;
v___x_1669_ = l_Lean_Elab_Term_elabTerm(v_term_1639_, v___x_1667_, v___x_1668_, v___x_1668_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v_a_1670_; uint8_t v___x_1671_; lean_object* v___x_1672_; 
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
lean_inc(v_a_1670_);
lean_dec_ref_known(v___x_1669_, 1);
v___x_1671_ = 1;
v___x_1672_ = l_Lean_Elab_Term_synthesizeSyntheticMVars(v___x_1671_, v___x_1650_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_);
if (lean_obj_tag(v___x_1672_) == 0)
{
lean_object* v___x_1673_; lean_object* v_a_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; 
lean_dec_ref_known(v___x_1672_, 1);
v___x_1673_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Grind_getMainTarget_spec__0___redArg(v_a_1670_, v___y_1646_);
v_a_1674_ = lean_ctor_get(v___x_1673_, 0);
lean_inc(v_a_1674_);
lean_dec_ref(v___x_1673_);
v___x_1675_ = lean_box(0);
v___x_1676_ = l_Lean_Meta_Sym_mkBackwardRuleFromExpr(v_a_1674_, v___x_1675_, v___x_1667_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_);
if (lean_obj_tag(v___x_1676_) == 0)
{
lean_object* v_a_1677_; lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1709_; 
v_a_1677_ = lean_ctor_get(v___x_1676_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1676_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1679_ = v___x_1676_;
v_isShared_1680_ = v_isSharedCheck_1709_;
goto v_resetjp_1678_;
}
else
{
lean_inc(v_a_1677_);
lean_dec(v___x_1676_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1709_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v___x_1681_; lean_object* v_cache_1682_; lean_object* v_symState_1683_; lean_object* v_grindState_1684_; lean_object* v_goals_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1708_; 
v___x_1681_ = lean_st_ref_take(v___y_1642_);
v_cache_1682_ = lean_ctor_get(v___x_1681_, 3);
v_symState_1683_ = lean_ctor_get(v___x_1681_, 0);
v_grindState_1684_ = lean_ctor_get(v___x_1681_, 1);
v_goals_1685_ = lean_ctor_get(v___x_1681_, 2);
v_isSharedCheck_1708_ = !lean_is_exclusive(v___x_1681_);
if (v_isSharedCheck_1708_ == 0)
{
v___x_1687_ = v___x_1681_;
v_isShared_1688_ = v_isSharedCheck_1708_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_cache_1682_);
lean_inc(v_goals_1685_);
lean_inc(v_grindState_1684_);
lean_inc(v_symState_1683_);
lean_dec(v___x_1681_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1708_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v_backwardRuleName_1689_; lean_object* v_backwardRuleSyntax_1690_; lean_object* v_simpState_1691_; lean_object* v_dsimpState_1692_; lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1707_; 
v_backwardRuleName_1689_ = lean_ctor_get(v_cache_1682_, 0);
v_backwardRuleSyntax_1690_ = lean_ctor_get(v_cache_1682_, 1);
v_simpState_1691_ = lean_ctor_get(v_cache_1682_, 2);
v_dsimpState_1692_ = lean_ctor_get(v_cache_1682_, 3);
v_isSharedCheck_1707_ = !lean_is_exclusive(v_cache_1682_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1694_ = v_cache_1682_;
v_isShared_1695_ = v_isSharedCheck_1707_;
goto v_resetjp_1693_;
}
else
{
lean_inc(v_dsimpState_1692_);
lean_inc(v_simpState_1691_);
lean_inc(v_backwardRuleSyntax_1690_);
lean_inc(v_backwardRuleName_1689_);
lean_dec(v_cache_1682_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1707_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
lean_object* v___x_1696_; lean_object* v___x_1698_; 
lean_inc(v_a_1677_);
v___x_1696_ = l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1___redArg(v_backwardRuleSyntax_1690_, v_pos_1654_, v_a_1677_);
if (v_isShared_1695_ == 0)
{
lean_ctor_set(v___x_1694_, 1, v___x_1696_);
v___x_1698_ = v___x_1694_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_backwardRuleName_1689_);
lean_ctor_set(v_reuseFailAlloc_1706_, 1, v___x_1696_);
lean_ctor_set(v_reuseFailAlloc_1706_, 2, v_simpState_1691_);
lean_ctor_set(v_reuseFailAlloc_1706_, 3, v_dsimpState_1692_);
v___x_1698_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
lean_object* v___x_1700_; 
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 3, v___x_1698_);
v___x_1700_ = v___x_1687_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_symState_1683_);
lean_ctor_set(v_reuseFailAlloc_1705_, 1, v_grindState_1684_);
lean_ctor_set(v_reuseFailAlloc_1705_, 2, v_goals_1685_);
lean_ctor_set(v_reuseFailAlloc_1705_, 3, v___x_1698_);
v___x_1700_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
lean_object* v___x_1701_; lean_object* v___x_1703_; 
v___x_1701_ = lean_st_ref_put(v___y_1642_, v___x_1700_);
if (v_isShared_1680_ == 0)
{
v___x_1703_ = v___x_1679_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v_a_1677_);
v___x_1703_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
return v___x_1703_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pos_1654_, 2);
return v___x_1676_;
}
}
else
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1717_; 
lean_dec(v_a_1670_);
lean_dec_ref_known(v_pos_1654_, 2);
v_a_1710_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1712_ = v___x_1672_;
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v___x_1672_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1715_; 
if (v_isShared_1713_ == 0)
{
v___x_1715_ = v___x_1712_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_a_1710_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
}
}
else
{
lean_object* v_a_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1725_; 
lean_dec_ref_known(v_pos_1654_, 2);
v_a_1718_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1720_ = v___x_1669_;
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_a_1718_);
lean_dec(v___x_1669_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1723_; 
if (v_isShared_1721_ == 0)
{
v___x_1723_ = v___x_1720_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v_a_1718_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
}
}
}
}
}
v___jp_1726_:
{
lean_object* v___x_1728_; 
v___x_1728_ = l_Lean_Syntax_getTailPos_x3f(v_term_1639_, v___x_1650_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v___x_1729_; 
v___x_1729_ = lean_unsigned_to_nat(0u);
v___y_1652_ = v___y_1727_;
v___y_1653_ = v___x_1729_;
goto v___jp_1651_;
}
else
{
lean_object* v_val_1730_; 
v_val_1730_ = lean_ctor_get(v___x_1728_, 0);
lean_inc(v_val_1730_);
lean_dec_ref_known(v___x_1728_, 1);
v___y_1652_ = v___y_1727_;
v___y_1653_ = v_val_1730_;
goto v___jp_1651_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__0___boxed(lean_object* v_term_1734_, lean_object* v_____r_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
lean_object* v_res_1745_; 
v_res_1745_ = l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__0(v_term_1734_, v_____r_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
lean_dec(v___y_1741_);
lean_dec_ref(v___y_1740_);
lean_dec(v___y_1739_);
lean_dec_ref(v___y_1738_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
return v_res_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__1(lean_object* v_term_1746_, lean_object* v___x_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_){
_start:
{
lean_object* v___x_1757_; 
v___x_1757_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v_term_1746_, v___x_1747_, v___y_1754_, v___y_1755_);
return v___x_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__1___boxed(lean_object* v_term_1758_, lean_object* v___x_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__1(v_term_1758_, v___x_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_);
lean_dec(v___y_1767_);
lean_dec_ref(v___y_1766_);
lean_dec(v___y_1765_);
lean_dec_ref(v___y_1764_);
lean_dec(v___y_1763_);
lean_dec_ref(v___y_1762_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__2(uint8_t v___x_1770_, lean_object* v___f_1771_, lean_object* v_term_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_){
_start:
{
if (v___x_1770_ == 0)
{
lean_object* v___x_1782_; lean_object* v___x_1783_; 
lean_dec(v_term_1772_);
v___x_1782_ = lean_box(0);
lean_inc(v___y_1780_);
lean_inc_ref(v___y_1779_);
lean_inc(v___y_1778_);
lean_inc_ref(v___y_1777_);
lean_inc(v___y_1776_);
lean_inc_ref(v___y_1775_);
lean_inc(v___y_1774_);
lean_inc_ref(v___y_1773_);
v___x_1783_ = lean_apply_10(v___f_1771_, v___x_1782_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_, lean_box(0));
return v___x_1783_;
}
else
{
lean_object* v_lctx_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; 
v_lctx_1784_ = lean_ctor_get(v___y_1777_, 2);
v___x_1785_ = l_Lean_TSyntax_getId(v_term_1772_);
v___x_1786_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_1784_, v___x_1785_);
lean_dec(v___x_1785_);
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v___x_1787_; lean_object* v___f_1788_; lean_object* v___x_1789_; 
v___x_1787_ = lean_box(0);
v___f_1788_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__1___boxed), 11, 2);
lean_closure_set(v___f_1788_, 0, v_term_1772_);
lean_closure_set(v___f_1788_, 1, v___x_1787_);
v___x_1789_ = l_Lean_observing_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__2___redArg(v___f_1788_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_);
if (lean_obj_tag(v___x_1789_) == 0)
{
lean_object* v_a_1790_; 
v_a_1790_ = lean_ctor_get(v___x_1789_, 0);
lean_inc(v_a_1790_);
lean_dec_ref_known(v___x_1789_, 1);
if (lean_obj_tag(v_a_1790_) == 1)
{
lean_object* v_val_1791_; lean_object* v___x_1792_; 
lean_dec_ref(v___f_1771_);
v_val_1791_ = lean_ctor_get(v_a_1790_, 0);
lean_inc(v_val_1791_);
lean_dec_ref_known(v_a_1790_, 1);
v___x_1792_ = l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRule___redArg(v_val_1791_, v___y_1774_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_);
return v___x_1792_;
}
else
{
lean_object* v___x_1793_; lean_object* v___x_1794_; 
lean_dec(v_a_1790_);
v___x_1793_ = lean_box(0);
lean_inc(v___y_1780_);
lean_inc_ref(v___y_1779_);
lean_inc(v___y_1778_);
lean_inc_ref(v___y_1777_);
lean_inc(v___y_1776_);
lean_inc_ref(v___y_1775_);
lean_inc(v___y_1774_);
lean_inc_ref(v___y_1773_);
v___x_1794_ = lean_apply_10(v___f_1771_, v___x_1793_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_, lean_box(0));
return v___x_1794_;
}
}
else
{
lean_object* v_a_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1802_; 
lean_dec_ref(v___f_1771_);
v_a_1795_ = lean_ctor_get(v___x_1789_, 0);
v_isSharedCheck_1802_ = !lean_is_exclusive(v___x_1789_);
if (v_isSharedCheck_1802_ == 0)
{
v___x_1797_ = v___x_1789_;
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_a_1795_);
lean_dec(v___x_1789_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1802_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1798_ == 0)
{
v___x_1800_ = v___x_1797_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_a_1795_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
}
else
{
lean_object* v___x_1803_; lean_object* v___x_1804_; 
lean_dec_ref_known(v___x_1786_, 1);
lean_dec(v_term_1772_);
v___x_1803_ = lean_box(0);
lean_inc(v___y_1780_);
lean_inc_ref(v___y_1779_);
lean_inc(v___y_1778_);
lean_inc_ref(v___y_1777_);
lean_inc(v___y_1776_);
lean_inc_ref(v___y_1775_);
lean_inc(v___y_1774_);
lean_inc_ref(v___y_1773_);
v___x_1804_ = lean_apply_10(v___f_1771_, v___x_1803_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_, lean_box(0));
return v___x_1804_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__2___boxed(lean_object* v___x_1805_, lean_object* v___f_1806_, lean_object* v_term_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_){
_start:
{
uint8_t v___x_5525__boxed_1817_; lean_object* v_res_1818_; 
v___x_5525__boxed_1817_ = lean_unbox(v___x_1805_);
v_res_1818_ = l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__2(v___x_5525__boxed_1817_, v___f_1806_, v_term_1807_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_);
lean_dec(v___y_1815_);
lean_dec_ref(v___y_1814_);
lean_dec(v___y_1813_);
lean_dec_ref(v___y_1812_);
lean_dec(v___y_1811_);
lean_dec_ref(v___y_1810_);
lean_dec(v___y_1809_);
lean_dec_ref(v___y_1808_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm(lean_object* v_term_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_){
_start:
{
lean_object* v___f_1829_; lean_object* v___x_1830_; uint8_t v___x_1831_; lean_object* v___x_1832_; lean_object* v___y_1833_; lean_object* v___x_1834_; 
lean_inc_n(v_term_1819_, 2);
v___f_1829_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__0___boxed), 11, 1);
lean_closure_set(v___f_1829_, 0, v_term_1819_);
v___x_1830_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalIntroCore_spec__0___redArg___closed__6));
v___x_1831_ = l_Lean_Syntax_isOfKind(v_term_1819_, v___x_1830_);
v___x_1832_ = lean_box(v___x_1831_);
v___y_1833_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___lam__2___boxed), 12, 3);
lean_closure_set(v___y_1833_, 0, v___x_1832_);
lean_closure_set(v___y_1833_, 1, v___f_1829_);
lean_closure_set(v___y_1833_, 2, v_term_1819_);
v___x_1834_ = l_Lean_Elab_Tactic_Grind_withMainContext___redArg(v___y_1833_, v_a_1820_, v_a_1821_, v_a_1822_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_);
return v___x_1834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm___boxed(lean_object* v_term_1835_, lean_object* v_a_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_){
_start:
{
lean_object* v_res_1845_; 
v_res_1845_ = l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm(v_term_1835_, v_a_1836_, v_a_1837_, v_a_1838_, v_a_1839_, v_a_1840_, v_a_1841_, v_a_1842_, v_a_1843_);
lean_dec(v_a_1843_);
lean_dec_ref(v_a_1842_);
lean_dec(v_a_1841_);
lean_dec_ref(v_a_1840_);
lean_dec(v_a_1839_);
lean_dec_ref(v_a_1838_);
lean_dec(v_a_1837_);
lean_dec_ref(v_a_1836_);
return v_res_1845_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0(lean_object* v_00_u03b2_1846_, lean_object* v_x_1847_, lean_object* v_x_1848_){
_start:
{
lean_object* v___x_1849_; 
v___x_1849_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0___redArg(v_x_1847_, v_x_1848_);
return v___x_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0___boxed(lean_object* v_00_u03b2_1850_, lean_object* v_x_1851_, lean_object* v_x_1852_){
_start:
{
lean_object* v_res_1853_; 
v_res_1853_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0(v_00_u03b2_1850_, v_x_1851_, v_x_1852_);
lean_dec_ref(v_x_1852_);
lean_dec_ref(v_x_1851_);
return v_res_1853_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1(lean_object* v_00_u03b2_1854_, lean_object* v_x_1855_, lean_object* v_x_1856_, lean_object* v_x_1857_){
_start:
{
lean_object* v___x_1858_; 
v___x_1858_ = l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1___redArg(v_x_1855_, v_x_1856_, v_x_1857_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0(lean_object* v_00_u03b2_1859_, lean_object* v_x_1860_, size_t v_x_1861_, lean_object* v_x_1862_){
_start:
{
lean_object* v___x_1863_; 
v___x_1863_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0___redArg(v_x_1860_, v_x_1861_, v_x_1862_);
return v___x_1863_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1864_, lean_object* v_x_1865_, lean_object* v_x_1866_, lean_object* v_x_1867_){
_start:
{
size_t v_x_5639__boxed_1868_; lean_object* v_res_1869_; 
v_x_5639__boxed_1868_ = lean_unbox_usize(v_x_1866_);
lean_dec(v_x_1866_);
v_res_1869_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0(v_00_u03b2_1864_, v_x_1865_, v_x_5639__boxed_1868_, v_x_1867_);
lean_dec_ref(v_x_1867_);
lean_dec_ref(v_x_1865_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2(lean_object* v_00_u03b2_1870_, lean_object* v_x_1871_, size_t v_x_1872_, size_t v_x_1873_, lean_object* v_x_1874_, lean_object* v_x_1875_){
_start:
{
lean_object* v___x_1876_; 
v___x_1876_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2___redArg(v_x_1871_, v_x_1872_, v_x_1873_, v_x_1874_, v_x_1875_);
return v___x_1876_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1877_, lean_object* v_x_1878_, lean_object* v_x_1879_, lean_object* v_x_1880_, lean_object* v_x_1881_, lean_object* v_x_1882_){
_start:
{
size_t v_x_5650__boxed_1883_; size_t v_x_5651__boxed_1884_; lean_object* v_res_1885_; 
v_x_5650__boxed_1883_ = lean_unbox_usize(v_x_1879_);
lean_dec(v_x_1879_);
v_x_5651__boxed_1884_ = lean_unbox_usize(v_x_1880_);
lean_dec(v_x_1880_);
v_res_1885_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2(v_00_u03b2_1877_, v_x_1878_, v_x_5650__boxed_1883_, v_x_5651__boxed_1884_, v_x_1881_, v_x_1882_);
return v_res_1885_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1886_, lean_object* v_keys_1887_, lean_object* v_vals_1888_, lean_object* v_heq_1889_, lean_object* v_i_1890_, lean_object* v_k_1891_){
_start:
{
lean_object* v___x_1892_; 
v___x_1892_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0_spec__2___redArg(v_keys_1887_, v_vals_1888_, v_i_1890_, v_k_1891_);
return v___x_1892_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1893_, lean_object* v_keys_1894_, lean_object* v_vals_1895_, lean_object* v_heq_1896_, lean_object* v_i_1897_, lean_object* v_k_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__0_spec__0_spec__2(v_00_u03b2_1893_, v_keys_1894_, v_vals_1895_, v_heq_1896_, v_i_1897_, v_k_1898_);
lean_dec_ref(v_k_1898_);
lean_dec_ref(v_vals_1895_);
lean_dec_ref(v_keys_1894_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_1900_, lean_object* v_n_1901_, lean_object* v_k_1902_, lean_object* v_v_1903_){
_start:
{
lean_object* v___x_1904_; 
v___x_1904_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__5___redArg(v_n_1901_, v_k_1902_, v_v_1903_);
return v___x_1904_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__6(lean_object* v_00_u03b2_1905_, size_t v_depth_1906_, lean_object* v_keys_1907_, lean_object* v_vals_1908_, lean_object* v_heq_1909_, lean_object* v_i_1910_, lean_object* v_entries_1911_){
_start:
{
lean_object* v___x_1912_; 
v___x_1912_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__6___redArg(v_depth_1906_, v_keys_1907_, v_vals_1908_, v_i_1910_, v_entries_1911_);
return v___x_1912_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__6___boxed(lean_object* v_00_u03b2_1913_, lean_object* v_depth_1914_, lean_object* v_keys_1915_, lean_object* v_vals_1916_, lean_object* v_heq_1917_, lean_object* v_i_1918_, lean_object* v_entries_1919_){
_start:
{
size_t v_depth_boxed_1920_; lean_object* v_res_1921_; 
v_depth_boxed_1920_ = lean_unbox_usize(v_depth_1914_);
lean_dec(v_depth_1914_);
v_res_1921_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__6(v_00_u03b2_1913_, v_depth_boxed_1920_, v_keys_1915_, v_vals_1916_, v_heq_1917_, v_i_1918_, v_entries_1919_);
lean_dec_ref(v_vals_1916_);
lean_dec_ref(v_keys_1915_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__5_spec__6(lean_object* v_00_u03b2_1922_, lean_object* v_x_1923_, lean_object* v_x_1924_, lean_object* v_x_1925_, lean_object* v_x_1926_){
_start:
{
lean_object* v___x_1927_; 
v___x_1927_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__1_spec__2_spec__5_spec__6___redArg(v_x_1923_, v_x_1924_, v_x_1925_, v_x_1926_);
return v___x_1927_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Grind_applyBackwardRule___closed__1(void){
_start:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1929_ = ((lean_object*)(l_Lean_Elab_Tactic_Grind_applyBackwardRule___closed__0));
v___x_1930_ = l_Lean_stringToMessageData(v___x_1929_);
return v___x_1930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_applyBackwardRule(lean_object* v_rule_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_, lean_object* v_a_1938_, lean_object* v_a_1939_){
_start:
{
lean_object* v___x_1941_; 
v___x_1941_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_, v_a_1939_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_a_1942_);
lean_dec_ref_known(v___x_1941_, 1);
v___x_1943_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Goal_apply___boxed), 9, 2);
lean_closure_set(v___x_1943_, 0, v_a_1942_);
lean_closure_set(v___x_1943_, 1, v_rule_1931_);
v___x_1944_ = l_Lean_Elab_Tactic_Grind_liftSymM___redArg(v___x_1943_, v_a_1932_, v_a_1933_, v_a_1936_, v_a_1937_, v_a_1938_, v_a_1939_);
if (lean_obj_tag(v___x_1944_) == 0)
{
lean_object* v_a_1945_; 
v_a_1945_ = lean_ctor_get(v___x_1944_, 0);
lean_inc(v_a_1945_);
lean_dec_ref_known(v___x_1944_, 1);
if (lean_obj_tag(v_a_1945_) == 0)
{
lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1946_ = lean_obj_once(&l_Lean_Elab_Tactic_Grind_applyBackwardRule___closed__1, &l_Lean_Elab_Tactic_Grind_applyBackwardRule___closed__1_once, _init_l_Lean_Elab_Tactic_Grind_applyBackwardRule___closed__1);
v___x_1947_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg(v___x_1946_, v_a_1936_, v_a_1937_, v_a_1938_, v_a_1939_);
return v___x_1947_;
}
else
{
lean_object* v_subgoals_1948_; lean_object* v___x_1949_; 
v_subgoals_1948_ = lean_ctor_get(v_a_1945_, 0);
lean_inc(v_subgoals_1948_);
lean_dec_ref_known(v_a_1945_, 1);
v___x_1949_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal(v_subgoals_1948_, v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_, v_a_1939_);
return v___x_1949_;
}
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
v_a_1950_ = lean_ctor_get(v___x_1944_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1944_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1944_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1944_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
else
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
lean_dec_ref(v_rule_1931_);
v_a_1958_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1960_ = v___x_1941_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1941_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1961_ == 0)
{
v___x_1963_ = v___x_1960_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1958_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_applyBackwardRule___boxed(lean_object* v_rule_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_, lean_object* v_a_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_){
_start:
{
lean_object* v_res_1976_; 
v_res_1976_ = l_Lean_Elab_Tactic_Grind_applyBackwardRule(v_rule_1966_, v_a_1967_, v_a_1968_, v_a_1969_, v_a_1970_, v_a_1971_, v_a_1972_, v_a_1973_, v_a_1974_);
lean_dec(v_a_1974_);
lean_dec_ref(v_a_1973_);
lean_dec(v_a_1972_);
lean_dec_ref(v_a_1971_);
lean_dec(v_a_1970_);
lean_dec_ref(v_a_1969_);
lean_dec(v_a_1968_);
lean_dec_ref(v_a_1967_);
return v_res_1976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_applyDecl(lean_object* v_declName_1977_, lean_object* v_a_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_, lean_object* v_a_1981_, lean_object* v_a_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_, lean_object* v_a_1985_){
_start:
{
lean_object* v___x_1987_; 
v___x_1987_ = l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRule___redArg(v_declName_1977_, v_a_1979_, v_a_1982_, v_a_1983_, v_a_1984_, v_a_1985_);
if (lean_obj_tag(v___x_1987_) == 0)
{
lean_object* v_a_1988_; lean_object* v___x_1989_; 
v_a_1988_ = lean_ctor_get(v___x_1987_, 0);
lean_inc(v_a_1988_);
lean_dec_ref_known(v___x_1987_, 1);
v___x_1989_ = l_Lean_Elab_Tactic_Grind_applyBackwardRule(v_a_1988_, v_a_1978_, v_a_1979_, v_a_1980_, v_a_1981_, v_a_1982_, v_a_1983_, v_a_1984_, v_a_1985_);
return v___x_1989_;
}
else
{
lean_object* v_a_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_1997_; 
v_a_1990_ = lean_ctor_get(v___x_1987_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1987_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1992_ = v___x_1987_;
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_a_1990_);
lean_dec(v___x_1987_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1995_; 
if (v_isShared_1993_ == 0)
{
v___x_1995_ = v___x_1992_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_a_1990_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_applyDecl___boxed(lean_object* v_declName_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_){
_start:
{
lean_object* v_res_2008_; 
v_res_2008_ = l_Lean_Elab_Tactic_Grind_applyDecl(v_declName_1998_, v_a_1999_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_);
lean_dec(v_a_2006_);
lean_dec_ref(v_a_2005_);
lean_dec(v_a_2004_);
lean_dec_ref(v_a_2003_);
lean_dec(v_a_2002_);
lean_dec_ref(v_a_2001_);
lean_dec(v_a_2000_);
lean_dec_ref(v_a_1999_);
return v_res_2008_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Grind_refl_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2010_; lean_object* v___x_2011_; 
v___x_2010_ = ((lean_object*)(l_Lean_Elab_Tactic_Grind_refl_x3f___lam__0___closed__0));
v___x_2011_ = l_Lean_stringToMessageData(v___x_2010_);
return v___x_2011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_refl_x3f___lam__0(lean_object* v___x_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_){
_start:
{
lean_object* v___x_2025_; 
v___x_2025_ = l_Lean_Elab_Tactic_Grind_liftSymM___redArg(v___x_2012_, v___y_2013_, v___y_2014_, v___y_2017_, v___y_2018_, v___y_2019_, v___y_2020_);
if (lean_obj_tag(v___x_2025_) == 0)
{
lean_object* v_a_2026_; 
v_a_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_a_2026_);
lean_dec_ref_known(v___x_2025_, 1);
if (lean_obj_tag(v_a_2026_) == 1)
{
lean_object* v_subgoals_2027_; 
v_subgoals_2027_ = lean_ctor_get(v_a_2026_, 0);
lean_inc(v_subgoals_2027_);
lean_dec_ref_known(v_a_2026_, 1);
if (lean_obj_tag(v_subgoals_2027_) == 0)
{
lean_object* v___x_2028_; 
v___x_2028_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal(v_subgoals_2027_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_, v___y_2018_, v___y_2019_, v___y_2020_);
return v___x_2028_;
}
else
{
lean_dec(v_subgoals_2027_);
goto v___jp_2022_;
}
}
else
{
lean_dec(v_a_2026_);
goto v___jp_2022_;
}
}
else
{
lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2036_; 
v_a_2029_ = lean_ctor_get(v___x_2025_, 0);
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_2031_ = v___x_2025_;
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v___x_2025_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2034_; 
if (v_isShared_2032_ == 0)
{
v___x_2034_ = v___x_2031_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v_a_2029_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
return v___x_2034_;
}
}
}
v___jp_2022_:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; 
v___x_2023_ = lean_obj_once(&l_Lean_Elab_Tactic_Grind_refl_x3f___lam__0___closed__1, &l_Lean_Elab_Tactic_Grind_refl_x3f___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Grind_refl_x3f___lam__0___closed__1);
v___x_2024_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg(v___x_2023_, v___y_2017_, v___y_2018_, v___y_2019_, v___y_2020_);
return v___x_2024_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_refl_x3f___lam__0___boxed(lean_object* v___x_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_){
_start:
{
lean_object* v_res_2047_; 
v_res_2047_ = l_Lean_Elab_Tactic_Grind_refl_x3f___lam__0(v___x_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_);
lean_dec(v___y_2045_);
lean_dec_ref(v___y_2044_);
lean_dec(v___y_2043_);
lean_dec_ref(v___y_2042_);
lean_dec(v___y_2041_);
lean_dec_ref(v___y_2040_);
lean_dec(v___y_2039_);
lean_dec_ref(v___y_2038_);
return v_res_2047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_refl_x3f(lean_object* v_a_2053_, lean_object* v_a_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_, lean_object* v_a_2060_){
_start:
{
lean_object* v___x_2062_; 
v___x_2062_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v_a_2053_, v_a_2054_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_, v_a_2059_, v_a_2060_);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v_a_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; 
v_a_2063_ = lean_ctor_get(v___x_2062_, 0);
lean_inc(v_a_2063_);
lean_dec_ref_known(v___x_2062_, 1);
v___x_2064_ = ((lean_object*)(l_Lean_Elab_Tactic_Grind_refl_x3f___closed__2));
v___x_2065_ = l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRule___redArg(v___x_2064_, v_a_2054_, v_a_2057_, v_a_2058_, v_a_2059_, v_a_2060_);
if (lean_obj_tag(v___x_2065_) == 0)
{
lean_object* v_a_2066_; lean_object* v___x_2067_; lean_object* v___f_2068_; lean_object* v___x_2069_; 
v_a_2066_ = lean_ctor_get(v___x_2065_, 0);
lean_inc(v_a_2066_);
lean_dec_ref_known(v___x_2065_, 1);
v___x_2067_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Goal_apply___boxed), 9, 2);
lean_closure_set(v___x_2067_, 0, v_a_2063_);
lean_closure_set(v___x_2067_, 1, v_a_2066_);
v___f_2068_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Grind_refl_x3f___lam__0___boxed), 10, 1);
lean_closure_set(v___f_2068_, 0, v___x_2067_);
v___x_2069_ = l_Lean_observing_x3f___at___00Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm_spec__2___redArg(v___f_2068_, v_a_2053_, v_a_2054_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_, v_a_2059_, v_a_2060_);
if (lean_obj_tag(v___x_2069_) == 0)
{
lean_object* v_a_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2084_; 
v_a_2070_ = lean_ctor_get(v___x_2069_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2069_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2072_ = v___x_2069_;
v_isShared_2073_ = v_isSharedCheck_2084_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_a_2070_);
lean_dec(v___x_2069_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2084_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
if (lean_obj_tag(v_a_2070_) == 0)
{
uint8_t v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2077_; 
v___x_2074_ = 0;
v___x_2075_ = lean_box(v___x_2074_);
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 0, v___x_2075_);
v___x_2077_ = v___x_2072_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v___x_2075_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
return v___x_2077_;
}
}
else
{
uint8_t v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2082_; 
lean_dec_ref_known(v_a_2070_, 1);
v___x_2079_ = 1;
v___x_2080_ = lean_box(v___x_2079_);
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 0, v___x_2080_);
v___x_2082_ = v___x_2072_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v___x_2080_);
v___x_2082_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
return v___x_2082_;
}
}
}
}
else
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2092_; 
v_a_2085_ = lean_ctor_get(v___x_2069_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___x_2069_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2087_ = v___x_2069_;
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_2069_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v___x_2090_; 
if (v_isShared_2088_ == 0)
{
v___x_2090_ = v___x_2087_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v_a_2085_);
v___x_2090_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
return v___x_2090_;
}
}
}
}
else
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
lean_dec(v_a_2063_);
v_a_2093_ = lean_ctor_get(v___x_2065_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2065_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2095_ = v___x_2065_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___x_2065_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_a_2093_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
}
else
{
lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2108_; 
v_a_2101_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2103_ = v___x_2062_;
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v___x_2062_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2106_; 
if (v_isShared_2104_ == 0)
{
v___x_2106_ = v___x_2103_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_a_2101_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_refl_x3f___boxed(lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_, lean_object* v_a_2116_, lean_object* v_a_2117_){
_start:
{
lean_object* v_res_2118_; 
v_res_2118_ = l_Lean_Elab_Tactic_Grind_refl_x3f(v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_, v_a_2116_);
lean_dec(v_a_2116_);
lean_dec_ref(v_a_2115_);
lean_dec(v_a_2114_);
lean_dec_ref(v_a_2113_);
lean_dec(v_a_2112_);
lean_dec_ref(v_a_2111_);
lean_dec(v_a_2110_);
lean_dec_ref(v_a_2109_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_assumption_x3f(lean_object* v_a_2119_, lean_object* v_a_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_){
_start:
{
lean_object* v___x_2128_; 
v___x_2128_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v_a_2119_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_);
if (lean_obj_tag(v___x_2128_) == 0)
{
lean_object* v_a_2129_; lean_object* v___x_2130_; 
v_a_2129_ = lean_ctor_get(v___x_2128_, 0);
lean_inc(v_a_2129_);
lean_dec_ref_known(v___x_2128_, 1);
v___x_2130_ = l_Lean_Meta_Grind_Goal_assumption(v_a_2129_, v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_);
if (lean_obj_tag(v___x_2130_) == 0)
{
lean_object* v_a_2131_; uint8_t v___x_2132_; 
v_a_2131_ = lean_ctor_get(v___x_2130_, 0);
v___x_2132_ = lean_unbox(v_a_2131_);
if (v___x_2132_ == 0)
{
return v___x_2130_;
}
else
{
lean_object* v___x_2133_; lean_object* v___x_2134_; 
lean_inc(v_a_2131_);
lean_dec_ref_known(v___x_2130_, 1);
v___x_2133_ = lean_box(0);
v___x_2134_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal(v___x_2133_, v_a_2119_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2141_; 
v_isSharedCheck_2141_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2141_ == 0)
{
lean_object* v_unused_2142_; 
v_unused_2142_ = lean_ctor_get(v___x_2134_, 0);
lean_dec(v_unused_2142_);
v___x_2136_ = v___x_2134_;
v_isShared_2137_ = v_isSharedCheck_2141_;
goto v_resetjp_2135_;
}
else
{
lean_dec(v___x_2134_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2141_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2139_; 
if (v_isShared_2137_ == 0)
{
lean_ctor_set(v___x_2136_, 0, v_a_2131_);
v___x_2139_ = v___x_2136_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v_a_2131_);
v___x_2139_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
return v___x_2139_;
}
}
}
else
{
lean_object* v_a_2143_; lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2150_; 
lean_dec(v_a_2131_);
v_a_2143_ = lean_ctor_get(v___x_2134_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2145_ = v___x_2134_;
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
else
{
lean_inc(v_a_2143_);
lean_dec(v___x_2134_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
lean_object* v___x_2148_; 
if (v_isShared_2146_ == 0)
{
v___x_2148_ = v___x_2145_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v_a_2143_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
}
}
}
else
{
return v___x_2130_;
}
}
else
{
lean_object* v_a_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2158_; 
v_a_2151_ = lean_ctor_get(v___x_2128_, 0);
v_isSharedCheck_2158_ = !lean_is_exclusive(v___x_2128_);
if (v_isSharedCheck_2158_ == 0)
{
v___x_2153_ = v___x_2128_;
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_a_2151_);
lean_dec(v___x_2128_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
if (v_isShared_2154_ == 0)
{
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v_a_2151_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
return v___x_2156_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_assumption_x3f___boxed(lean_object* v_a_2159_, lean_object* v_a_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_, lean_object* v_a_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_){
_start:
{
lean_object* v_res_2168_; 
v_res_2168_ = l_Lean_Elab_Tactic_Grind_assumption_x3f(v_a_2159_, v_a_2160_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_, v_a_2165_, v_a_2166_);
lean_dec(v_a_2166_);
lean_dec_ref(v_a_2165_);
lean_dec(v_a_2164_);
lean_dec_ref(v_a_2163_);
lean_dec(v_a_2162_);
lean_dec_ref(v_a_2161_);
lean_dec(v_a_2160_);
lean_dec_ref(v_a_2159_);
return v_res_2168_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg___lam__0(lean_object* v_step_2169_, lean_object* v_tail_2170_, lean_object* v___x_2171_, lean_object* v_____r_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_){
_start:
{
lean_object* v___x_2182_; 
lean_inc(v___y_2180_);
lean_inc_ref(v___y_2179_);
lean_inc(v___y_2178_);
lean_inc_ref(v___y_2177_);
lean_inc(v___y_2176_);
lean_inc_ref(v___y_2175_);
lean_inc(v___y_2174_);
lean_inc_ref(v___y_2173_);
v___x_2182_ = lean_apply_9(v_step_2169_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_, v___y_2180_, lean_box(0));
if (lean_obj_tag(v___x_2182_) == 0)
{
lean_object* v___x_2183_; 
lean_dec_ref_known(v___x_2182_, 1);
v___x_2183_ = l_Lean_Elab_Tactic_Grind_getUnsolvedGoals(v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_, v___y_2180_);
if (lean_obj_tag(v___x_2183_) == 0)
{
lean_object* v_a_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; 
v_a_2184_ = lean_ctor_get(v___x_2183_, 0);
lean_inc(v_a_2184_);
lean_dec_ref_known(v___x_2183_, 1);
v___x_2185_ = l_List_appendTR___redArg(v_a_2184_, v_tail_2170_);
v___x_2186_ = l_Lean_Elab_Tactic_Grind_setGoals___redArg(v___x_2185_, v___y_2174_);
if (lean_obj_tag(v___x_2186_) == 0)
{
lean_object* v___x_2188_; uint8_t v_isShared_2189_; uint8_t v_isSharedCheck_2194_; 
v_isSharedCheck_2194_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2194_ == 0)
{
lean_object* v_unused_2195_; 
v_unused_2195_ = lean_ctor_get(v___x_2186_, 0);
lean_dec(v_unused_2195_);
v___x_2188_ = v___x_2186_;
v_isShared_2189_ = v_isSharedCheck_2194_;
goto v_resetjp_2187_;
}
else
{
lean_dec(v___x_2186_);
v___x_2188_ = lean_box(0);
v_isShared_2189_ = v_isSharedCheck_2194_;
goto v_resetjp_2187_;
}
v_resetjp_2187_:
{
lean_object* v___x_2190_; lean_object* v___x_2192_; 
v___x_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2190_, 0, v___x_2171_);
if (v_isShared_2189_ == 0)
{
lean_ctor_set(v___x_2188_, 0, v___x_2190_);
v___x_2192_ = v___x_2188_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v___x_2190_);
v___x_2192_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
return v___x_2192_;
}
}
}
else
{
lean_object* v_a_2196_; lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2203_; 
v_a_2196_ = lean_ctor_get(v___x_2186_, 0);
v_isSharedCheck_2203_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2203_ == 0)
{
v___x_2198_ = v___x_2186_;
v_isShared_2199_ = v_isSharedCheck_2203_;
goto v_resetjp_2197_;
}
else
{
lean_inc(v_a_2196_);
lean_dec(v___x_2186_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2203_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
lean_object* v___x_2201_; 
if (v_isShared_2199_ == 0)
{
v___x_2201_ = v___x_2198_;
goto v_reusejp_2200_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v_a_2196_);
v___x_2201_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2200_;
}
v_reusejp_2200_:
{
return v___x_2201_;
}
}
}
}
else
{
lean_object* v_a_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2211_; 
lean_dec(v_tail_2170_);
v_a_2204_ = lean_ctor_get(v___x_2183_, 0);
v_isSharedCheck_2211_ = !lean_is_exclusive(v___x_2183_);
if (v_isSharedCheck_2211_ == 0)
{
v___x_2206_ = v___x_2183_;
v_isShared_2207_ = v_isSharedCheck_2211_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_a_2204_);
lean_dec(v___x_2183_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2211_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
lean_object* v___x_2209_; 
if (v_isShared_2207_ == 0)
{
v___x_2209_ = v___x_2206_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v_a_2204_);
v___x_2209_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
return v___x_2209_;
}
}
}
}
else
{
lean_object* v_a_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2219_; 
lean_dec(v_tail_2170_);
v_a_2212_ = lean_ctor_get(v___x_2182_, 0);
v_isSharedCheck_2219_ = !lean_is_exclusive(v___x_2182_);
if (v_isSharedCheck_2219_ == 0)
{
v___x_2214_ = v___x_2182_;
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_a_2212_);
lean_dec(v___x_2182_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2217_; 
if (v_isShared_2215_ == 0)
{
v___x_2217_ = v___x_2214_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_a_2212_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg___lam__0___boxed(lean_object* v_step_2220_, lean_object* v_tail_2221_, lean_object* v___x_2222_, lean_object* v_____r_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_){
_start:
{
lean_object* v_res_2233_; 
v_res_2233_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg___lam__0(v_step_2220_, v_tail_2221_, v___x_2222_, v_____r_2223_, v___y_2224_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_);
lean_dec(v___y_2231_);
lean_dec_ref(v___y_2230_);
lean_dec(v___y_2229_);
lean_dec_ref(v___y_2228_);
lean_dec(v___y_2227_);
lean_dec_ref(v___y_2226_);
lean_dec(v___y_2225_);
lean_dec_ref(v___y_2224_);
return v_res_2233_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg(lean_object* v_step_2235_, uint8_t v_headBeta_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v___y_2247_; lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2266_ = lean_box(0);
v___x_2267_ = l_Lean_Elab_Tactic_Grind_getUnsolvedGoals(v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
if (lean_obj_tag(v___x_2267_) == 0)
{
lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2292_; 
v_a_2268_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2270_ = v___x_2267_;
v_isShared_2271_ = v_isSharedCheck_2292_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2267_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2292_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
if (lean_obj_tag(v_a_2268_) == 1)
{
lean_object* v_head_2272_; lean_object* v_tail_2273_; lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2288_; 
lean_del_object(v___x_2270_);
v_head_2272_ = lean_ctor_get(v_a_2268_, 0);
v_tail_2273_ = lean_ctor_get(v_a_2268_, 1);
v_isSharedCheck_2288_ = !lean_is_exclusive(v_a_2268_);
if (v_isSharedCheck_2288_ == 0)
{
v___x_2275_ = v_a_2268_;
v_isShared_2276_ = v_isSharedCheck_2288_;
goto v_resetjp_2274_;
}
else
{
lean_inc(v_tail_2273_);
lean_inc(v_head_2272_);
lean_dec(v_a_2268_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2288_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2277_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg___closed__0));
v___x_2278_ = l_Lean_Core_checkSystem(v___x_2277_, v___y_2243_, v___y_2244_);
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v___x_2279_; lean_object* v___x_2281_; 
lean_dec_ref_known(v___x_2278_, 1);
v___x_2279_ = lean_box(0);
if (v_isShared_2276_ == 0)
{
lean_ctor_set(v___x_2275_, 1, v___x_2279_);
v___x_2281_ = v___x_2275_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v_head_2272_);
lean_ctor_set(v_reuseFailAlloc_2287_, 1, v___x_2279_);
v___x_2281_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
lean_object* v___x_2282_; 
v___x_2282_ = l_Lean_Elab_Tactic_Grind_setGoals___redArg(v___x_2281_, v___y_2238_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_dec_ref_known(v___x_2282_, 1);
if (v_headBeta_2236_ == 0)
{
lean_object* v___x_2283_; 
lean_inc_ref(v_step_2235_);
v___x_2283_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg___lam__0(v_step_2235_, v_tail_2273_, v___x_2266_, v___x_2266_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
v___y_2247_ = v___x_2283_;
goto v___jp_2246_;
}
else
{
lean_object* v___x_2284_; 
v___x_2284_ = l_Lean_Elab_Tactic_Grind_headBetaMainGoal(v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2285_; lean_object* v___x_2286_; 
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
lean_inc(v_a_2285_);
lean_dec_ref_known(v___x_2284_, 1);
lean_inc_ref(v_step_2235_);
v___x_2286_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg___lam__0(v_step_2235_, v_tail_2273_, v___x_2266_, v_a_2285_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
v___y_2247_ = v___x_2286_;
goto v___jp_2246_;
}
else
{
lean_dec(v_tail_2273_);
lean_dec_ref(v_step_2235_);
return v___x_2284_;
}
}
}
else
{
lean_dec(v_tail_2273_);
lean_dec_ref(v_step_2235_);
return v___x_2282_;
}
}
}
else
{
lean_del_object(v___x_2275_);
lean_dec(v_tail_2273_);
lean_dec(v_head_2272_);
lean_dec_ref(v_step_2235_);
return v___x_2278_;
}
}
}
else
{
lean_object* v___x_2290_; 
lean_dec(v_a_2268_);
lean_dec_ref(v_step_2235_);
if (v_isShared_2271_ == 0)
{
lean_ctor_set(v___x_2270_, 0, v___x_2266_);
v___x_2290_ = v___x_2270_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v___x_2266_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
}
else
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2300_; 
lean_dec_ref(v_step_2235_);
v_a_2293_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2295_ = v___x_2267_;
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___x_2267_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2298_; 
if (v_isShared_2296_ == 0)
{
v___x_2298_ = v___x_2295_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v_a_2293_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
}
v___jp_2246_:
{
if (lean_obj_tag(v___y_2247_) == 0)
{
lean_object* v_a_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2257_; 
v_a_2248_ = lean_ctor_get(v___y_2247_, 0);
v_isSharedCheck_2257_ = !lean_is_exclusive(v___y_2247_);
if (v_isSharedCheck_2257_ == 0)
{
v___x_2250_ = v___y_2247_;
v_isShared_2251_ = v_isSharedCheck_2257_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_a_2248_);
lean_dec(v___y_2247_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2257_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
if (lean_obj_tag(v_a_2248_) == 0)
{
lean_object* v_a_2252_; lean_object* v___x_2254_; 
lean_dec_ref(v_step_2235_);
v_a_2252_ = lean_ctor_get(v_a_2248_, 0);
lean_inc(v_a_2252_);
lean_dec_ref_known(v_a_2248_, 1);
if (v_isShared_2251_ == 0)
{
lean_ctor_set(v___x_2250_, 0, v_a_2252_);
v___x_2254_ = v___x_2250_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v_a_2252_);
v___x_2254_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
return v___x_2254_;
}
}
else
{
lean_dec_ref_known(v_a_2248_, 1);
lean_del_object(v___x_2250_);
goto _start;
}
}
}
else
{
lean_object* v_a_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2265_; 
lean_dec_ref(v_step_2235_);
v_a_2258_ = lean_ctor_get(v___y_2247_, 0);
v_isSharedCheck_2265_ = !lean_is_exclusive(v___y_2247_);
if (v_isSharedCheck_2265_ == 0)
{
v___x_2260_ = v___y_2247_;
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_a_2258_);
lean_dec(v___y_2247_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2263_; 
if (v_isShared_2261_ == 0)
{
v___x_2263_ = v___x_2260_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v_a_2258_);
v___x_2263_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
return v___x_2263_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg___boxed(lean_object* v_step_2301_, lean_object* v_headBeta_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_){
_start:
{
uint8_t v_headBeta_boxed_2312_; lean_object* v_res_2313_; 
v_headBeta_boxed_2312_ = lean_unbox(v_headBeta_2302_);
v_res_2313_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg(v_step_2301_, v_headBeta_boxed_2312_, v___y_2303_, v___y_2304_, v___y_2305_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_);
lean_dec(v___y_2310_);
lean_dec_ref(v___y_2309_);
lean_dec(v___y_2308_);
lean_dec_ref(v___y_2307_);
lean_dec(v___y_2306_);
lean_dec_ref(v___y_2305_);
lean_dec(v___y_2304_);
lean_dec_ref(v___y_2303_);
return v_res_2313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_whileGoals(lean_object* v_step_2314_, uint8_t v_headBeta_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_, lean_object* v_a_2323_){
_start:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2325_ = lean_box(0);
v___x_2326_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg(v_step_2314_, v_headBeta_2315_, v_a_2316_, v_a_2317_, v_a_2318_, v_a_2319_, v_a_2320_, v_a_2321_, v_a_2322_, v_a_2323_);
if (lean_obj_tag(v___x_2326_) == 0)
{
lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2333_; 
v_isSharedCheck_2333_ = !lean_is_exclusive(v___x_2326_);
if (v_isSharedCheck_2333_ == 0)
{
lean_object* v_unused_2334_; 
v_unused_2334_ = lean_ctor_get(v___x_2326_, 0);
lean_dec(v_unused_2334_);
v___x_2328_ = v___x_2326_;
v_isShared_2329_ = v_isSharedCheck_2333_;
goto v_resetjp_2327_;
}
else
{
lean_dec(v___x_2326_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2333_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v___x_2331_; 
if (v_isShared_2329_ == 0)
{
lean_ctor_set(v___x_2328_, 0, v___x_2325_);
v___x_2331_ = v___x_2328_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v___x_2325_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
return v___x_2331_;
}
}
}
else
{
return v___x_2326_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_whileGoals___boxed(lean_object* v_step_2335_, lean_object* v_headBeta_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_){
_start:
{
uint8_t v_headBeta_boxed_2346_; lean_object* v_res_2347_; 
v_headBeta_boxed_2346_ = lean_unbox(v_headBeta_2336_);
v_res_2347_ = l_Lean_Elab_Tactic_Grind_whileGoals(v_step_2335_, v_headBeta_boxed_2346_, v_a_2337_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_, v_a_2344_);
lean_dec(v_a_2344_);
lean_dec_ref(v_a_2343_);
lean_dec(v_a_2342_);
lean_dec_ref(v_a_2341_);
lean_dec(v_a_2340_);
lean_dec_ref(v_a_2339_);
lean_dec(v_a_2338_);
lean_dec_ref(v_a_2337_);
return v_res_2347_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0(lean_object* v_step_2348_, uint8_t v_headBeta_2349_, lean_object* v_inst_2350_, lean_object* v_a_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_){
_start:
{
lean_object* v___x_2361_; 
v___x_2361_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___redArg(v_step_2348_, v_headBeta_2349_, v___y_2352_, v___y_2353_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_);
return v___x_2361_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0___boxed(lean_object* v_step_2362_, lean_object* v_headBeta_2363_, lean_object* v_inst_2364_, lean_object* v_a_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_){
_start:
{
uint8_t v_headBeta_boxed_2375_; lean_object* v_res_2376_; 
v_headBeta_boxed_2375_ = lean_unbox(v_headBeta_2363_);
v_res_2376_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Elab_Tactic_Grind_whileGoals_spec__0(v_step_2362_, v_headBeta_boxed_2375_, v_inst_2364_, v_a_2365_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_);
lean_dec(v___y_2373_);
lean_dec_ref(v___y_2372_);
lean_dec(v___y_2371_);
lean_dec_ref(v___y_2370_);
lean_dec(v___y_2369_);
lean_dec_ref(v___y_2368_);
lean_dec(v___y_2367_);
lean_dec_ref(v___y_2366_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Grind_andThenSubgoals_spec__0___redArg(lean_object* v_rest_2377_, lean_object* v_as_x27_2378_, lean_object* v_b_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_){
_start:
{
if (lean_obj_tag(v_as_x27_2378_) == 0)
{
lean_object* v___x_2389_; 
lean_dec_ref(v_rest_2377_);
v___x_2389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2389_, 0, v_b_2379_);
return v___x_2389_;
}
else
{
lean_object* v_head_2390_; lean_object* v_tail_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; 
v_head_2390_ = lean_ctor_get(v_as_x27_2378_, 0);
v_tail_2391_ = lean_ctor_get(v_as_x27_2378_, 1);
v___x_2392_ = lean_box(0);
lean_inc(v_head_2390_);
v___x_2393_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2393_, 0, v_head_2390_);
lean_ctor_set(v___x_2393_, 1, v___x_2392_);
v___x_2394_ = l_Lean_Elab_Tactic_Grind_setGoals___redArg(v___x_2393_, v___y_2381_);
if (lean_obj_tag(v___x_2394_) == 0)
{
lean_object* v___x_2395_; 
lean_dec_ref_known(v___x_2394_, 1);
v___x_2395_ = l_Lean_Elab_Tactic_Grind_getUnsolvedGoals(v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_);
if (lean_obj_tag(v___x_2395_) == 0)
{
lean_object* v_a_2396_; uint8_t v___x_2397_; 
v_a_2396_ = lean_ctor_get(v___x_2395_, 0);
lean_inc(v_a_2396_);
lean_dec_ref_known(v___x_2395_, 1);
v___x_2397_ = l_List_isEmpty___redArg(v_a_2396_);
lean_dec(v_a_2396_);
if (v___x_2397_ == 0)
{
lean_object* v___x_2398_; 
lean_inc_ref(v_rest_2377_);
lean_inc(v___y_2387_);
lean_inc_ref(v___y_2386_);
lean_inc(v___y_2385_);
lean_inc_ref(v___y_2384_);
lean_inc(v___y_2383_);
lean_inc_ref(v___y_2382_);
lean_inc(v___y_2381_);
lean_inc_ref(v___y_2380_);
v___x_2398_ = lean_apply_9(v_rest_2377_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_, lean_box(0));
if (lean_obj_tag(v___x_2398_) == 0)
{
lean_object* v___x_2399_; 
lean_dec_ref_known(v___x_2398_, 1);
v___x_2399_ = l_Lean_Elab_Tactic_Grind_getUnsolvedGoals(v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_);
if (lean_obj_tag(v___x_2399_) == 0)
{
lean_object* v_a_2400_; lean_object* v___x_2401_; 
v_a_2400_ = lean_ctor_get(v___x_2399_, 0);
lean_inc(v_a_2400_);
lean_dec_ref_known(v___x_2399_, 1);
v___x_2401_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_b_2379_, v_a_2400_);
v_as_x27_2378_ = v_tail_2391_;
v_b_2379_ = v___x_2401_;
goto _start;
}
else
{
lean_object* v_a_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2410_; 
lean_dec_ref(v_b_2379_);
lean_dec_ref(v_rest_2377_);
v_a_2403_ = lean_ctor_get(v___x_2399_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v___x_2399_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2405_ = v___x_2399_;
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_a_2403_);
lean_dec(v___x_2399_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2408_; 
if (v_isShared_2406_ == 0)
{
v___x_2408_ = v___x_2405_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v_a_2403_);
v___x_2408_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
return v___x_2408_;
}
}
}
}
else
{
lean_object* v_a_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2418_; 
lean_dec_ref(v_b_2379_);
lean_dec_ref(v_rest_2377_);
v_a_2411_ = lean_ctor_get(v___x_2398_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2398_);
if (v_isSharedCheck_2418_ == 0)
{
v___x_2413_ = v___x_2398_;
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_a_2411_);
lean_dec(v___x_2398_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___x_2416_; 
if (v_isShared_2414_ == 0)
{
v___x_2416_ = v___x_2413_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v_a_2411_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
}
}
else
{
v_as_x27_2378_ = v_tail_2391_;
goto _start;
}
}
else
{
lean_object* v_a_2420_; lean_object* v___x_2422_; uint8_t v_isShared_2423_; uint8_t v_isSharedCheck_2427_; 
lean_dec_ref(v_b_2379_);
lean_dec_ref(v_rest_2377_);
v_a_2420_ = lean_ctor_get(v___x_2395_, 0);
v_isSharedCheck_2427_ = !lean_is_exclusive(v___x_2395_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2422_ = v___x_2395_;
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
else
{
lean_inc(v_a_2420_);
lean_dec(v___x_2395_);
v___x_2422_ = lean_box(0);
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
v_resetjp_2421_:
{
lean_object* v___x_2425_; 
if (v_isShared_2423_ == 0)
{
v___x_2425_ = v___x_2422_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v_a_2420_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
return v___x_2425_;
}
}
}
}
else
{
lean_object* v_a_2428_; lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2435_; 
lean_dec_ref(v_b_2379_);
lean_dec_ref(v_rest_2377_);
v_a_2428_ = lean_ctor_get(v___x_2394_, 0);
v_isSharedCheck_2435_ = !lean_is_exclusive(v___x_2394_);
if (v_isSharedCheck_2435_ == 0)
{
v___x_2430_ = v___x_2394_;
v_isShared_2431_ = v_isSharedCheck_2435_;
goto v_resetjp_2429_;
}
else
{
lean_inc(v_a_2428_);
lean_dec(v___x_2394_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2435_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
lean_object* v___x_2433_; 
if (v_isShared_2431_ == 0)
{
v___x_2433_ = v___x_2430_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v_a_2428_);
v___x_2433_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
return v___x_2433_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Grind_andThenSubgoals_spec__0___redArg___boxed(lean_object* v_rest_2436_, lean_object* v_as_x27_2437_, lean_object* v_b_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_){
_start:
{
lean_object* v_res_2448_; 
v_res_2448_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Grind_andThenSubgoals_spec__0___redArg(v_rest_2436_, v_as_x27_2437_, v_b_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_);
lean_dec(v___y_2446_);
lean_dec_ref(v___y_2445_);
lean_dec(v___y_2444_);
lean_dec_ref(v___y_2443_);
lean_dec(v___y_2442_);
lean_dec_ref(v___y_2441_);
lean_dec(v___y_2440_);
lean_dec_ref(v___y_2439_);
lean_dec(v_as_x27_2437_);
return v_res_2448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_andThenSubgoals___lam__0(lean_object* v_tac_2449_, lean_object* v_first_2450_, lean_object* v_rest_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_){
_start:
{
lean_object* v___x_2461_; 
lean_inc(v___y_2459_);
lean_inc_ref(v___y_2458_);
lean_inc(v___y_2457_);
lean_inc_ref(v___y_2456_);
lean_inc(v___y_2455_);
lean_inc_ref(v___y_2454_);
lean_inc(v___y_2453_);
lean_inc_ref(v___y_2452_);
v___x_2461_ = lean_apply_9(v_tac_2449_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_, lean_box(0));
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_object* v___x_2462_; 
lean_dec_ref_known(v___x_2461_, 1);
v___x_2462_ = l_Lean_Elab_Tactic_Grind_getUnsolvedGoals(v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_);
if (lean_obj_tag(v___x_2462_) == 0)
{
lean_object* v_a_2463_; lean_object* v___x_2465_; uint8_t v_isShared_2466_; uint8_t v_isSharedCheck_2506_; 
v_a_2463_ = lean_ctor_get(v___x_2462_, 0);
v_isSharedCheck_2506_ = !lean_is_exclusive(v___x_2462_);
if (v_isSharedCheck_2506_ == 0)
{
v___x_2465_ = v___x_2462_;
v_isShared_2466_ = v_isSharedCheck_2506_;
goto v_resetjp_2464_;
}
else
{
lean_inc(v_a_2463_);
lean_dec(v___x_2462_);
v___x_2465_ = lean_box(0);
v_isShared_2466_ = v_isSharedCheck_2506_;
goto v_resetjp_2464_;
}
v_resetjp_2464_:
{
if (lean_obj_tag(v_a_2463_) == 1)
{
lean_object* v_head_2467_; lean_object* v_tail_2468_; lean_object* v___x_2470_; uint8_t v_isShared_2471_; uint8_t v_isSharedCheck_2501_; 
lean_del_object(v___x_2465_);
v_head_2467_ = lean_ctor_get(v_a_2463_, 0);
v_tail_2468_ = lean_ctor_get(v_a_2463_, 1);
v_isSharedCheck_2501_ = !lean_is_exclusive(v_a_2463_);
if (v_isSharedCheck_2501_ == 0)
{
v___x_2470_ = v_a_2463_;
v_isShared_2471_ = v_isSharedCheck_2501_;
goto v_resetjp_2469_;
}
else
{
lean_inc(v_tail_2468_);
lean_inc(v_head_2467_);
lean_dec(v_a_2463_);
v___x_2470_ = lean_box(0);
v_isShared_2471_ = v_isSharedCheck_2501_;
goto v_resetjp_2469_;
}
v_resetjp_2469_:
{
lean_object* v___x_2472_; lean_object* v___x_2474_; 
v___x_2472_ = lean_box(0);
if (v_isShared_2471_ == 0)
{
lean_ctor_set(v___x_2470_, 1, v___x_2472_);
v___x_2474_ = v___x_2470_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v_head_2467_);
lean_ctor_set(v_reuseFailAlloc_2500_, 1, v___x_2472_);
v___x_2474_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
lean_object* v___x_2475_; 
v___x_2475_ = l_Lean_Elab_Tactic_Grind_setGoals___redArg(v___x_2474_, v___y_2453_);
if (lean_obj_tag(v___x_2475_) == 0)
{
lean_object* v___x_2476_; 
lean_dec_ref_known(v___x_2475_, 1);
lean_inc(v___y_2459_);
lean_inc_ref(v___y_2458_);
lean_inc(v___y_2457_);
lean_inc_ref(v___y_2456_);
lean_inc(v___y_2455_);
lean_inc_ref(v___y_2454_);
lean_inc(v___y_2453_);
lean_inc_ref(v___y_2452_);
v___x_2476_ = lean_apply_9(v_first_2450_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_, lean_box(0));
if (lean_obj_tag(v___x_2476_) == 0)
{
lean_object* v___x_2477_; 
lean_dec_ref_known(v___x_2476_, 1);
v___x_2477_ = l_Lean_Elab_Tactic_Grind_getUnsolvedGoals(v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_);
if (lean_obj_tag(v___x_2477_) == 0)
{
lean_object* v_a_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; 
v_a_2478_ = lean_ctor_get(v___x_2477_, 0);
lean_inc(v_a_2478_);
lean_dec_ref_known(v___x_2477_, 1);
v___x_2479_ = lean_array_mk(v_a_2478_);
v___x_2480_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Grind_andThenSubgoals_spec__0___redArg(v_rest_2451_, v_tail_2468_, v___x_2479_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec_ref(v___y_2452_);
lean_dec(v_tail_2468_);
if (lean_obj_tag(v___x_2480_) == 0)
{
lean_object* v_a_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; 
v_a_2481_ = lean_ctor_get(v___x_2480_, 0);
lean_inc(v_a_2481_);
lean_dec_ref_known(v___x_2480_, 1);
v___x_2482_ = lean_array_to_list(v_a_2481_);
v___x_2483_ = l_Lean_Elab_Tactic_Grind_setGoals___redArg(v___x_2482_, v___y_2453_);
lean_dec(v___y_2453_);
return v___x_2483_;
}
else
{
lean_object* v_a_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2491_; 
lean_dec(v___y_2453_);
v_a_2484_ = lean_ctor_get(v___x_2480_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v___x_2480_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2486_ = v___x_2480_;
v_isShared_2487_ = v_isSharedCheck_2491_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_a_2484_);
lean_dec(v___x_2480_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2491_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2489_; 
if (v_isShared_2487_ == 0)
{
v___x_2489_ = v___x_2486_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v_a_2484_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
return v___x_2489_;
}
}
}
}
else
{
lean_object* v_a_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2499_; 
lean_dec(v_tail_2468_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec_ref(v_rest_2451_);
v_a_2492_ = lean_ctor_get(v___x_2477_, 0);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___x_2477_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2494_ = v___x_2477_;
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_a_2492_);
lean_dec(v___x_2477_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v___x_2497_; 
if (v_isShared_2495_ == 0)
{
v___x_2497_ = v___x_2494_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v_a_2492_);
v___x_2497_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
return v___x_2497_;
}
}
}
}
else
{
lean_dec(v_tail_2468_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec_ref(v_rest_2451_);
return v___x_2476_;
}
}
else
{
lean_dec(v_tail_2468_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec_ref(v_rest_2451_);
lean_dec_ref(v_first_2450_);
return v___x_2475_;
}
}
}
}
else
{
lean_object* v___x_2502_; lean_object* v___x_2504_; 
lean_dec(v_a_2463_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec_ref(v_rest_2451_);
lean_dec_ref(v_first_2450_);
v___x_2502_ = lean_box(0);
if (v_isShared_2466_ == 0)
{
lean_ctor_set(v___x_2465_, 0, v___x_2502_);
v___x_2504_ = v___x_2465_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2505_; 
v_reuseFailAlloc_2505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2505_, 0, v___x_2502_);
v___x_2504_ = v_reuseFailAlloc_2505_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
return v___x_2504_;
}
}
}
}
else
{
lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2514_; 
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec_ref(v_rest_2451_);
lean_dec_ref(v_first_2450_);
v_a_2507_ = lean_ctor_get(v___x_2462_, 0);
v_isSharedCheck_2514_ = !lean_is_exclusive(v___x_2462_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2509_ = v___x_2462_;
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_dec(v___x_2462_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2512_; 
if (v_isShared_2510_ == 0)
{
v___x_2512_ = v___x_2509_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v_a_2507_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
return v___x_2512_;
}
}
}
}
else
{
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec_ref(v_rest_2451_);
lean_dec_ref(v_first_2450_);
return v___x_2461_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_andThenSubgoals___lam__0___boxed(lean_object* v_tac_2515_, lean_object* v_first_2516_, lean_object* v_rest_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l_Lean_Elab_Tactic_Grind_andThenSubgoals___lam__0(v_tac_2515_, v_first_2516_, v_rest_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_andThenSubgoals(lean_object* v_tac_2528_, lean_object* v_first_2529_, lean_object* v_rest_2530_, lean_object* v_a_2531_, lean_object* v_a_2532_, lean_object* v_a_2533_, lean_object* v_a_2534_, lean_object* v_a_2535_, lean_object* v_a_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_){
_start:
{
lean_object* v___f_2540_; lean_object* v___x_2541_; 
v___f_2540_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Grind_andThenSubgoals___lam__0___boxed), 12, 3);
lean_closure_set(v___f_2540_, 0, v_tac_2528_);
lean_closure_set(v___f_2540_, 1, v_first_2529_);
lean_closure_set(v___f_2540_, 2, v_rest_2530_);
v___x_2541_ = l_Lean_Elab_Tactic_Grind_focus___redArg(v___f_2540_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_, v_a_2537_, v_a_2538_);
return v___x_2541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_andThenSubgoals___boxed(lean_object* v_tac_2542_, lean_object* v_first_2543_, lean_object* v_rest_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_, lean_object* v_a_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_){
_start:
{
lean_object* v_res_2554_; 
v_res_2554_ = l_Lean_Elab_Tactic_Grind_andThenSubgoals(v_tac_2542_, v_first_2543_, v_rest_2544_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_, v_a_2551_, v_a_2552_);
lean_dec(v_a_2552_);
lean_dec_ref(v_a_2551_);
lean_dec(v_a_2550_);
lean_dec_ref(v_a_2549_);
lean_dec(v_a_2548_);
lean_dec_ref(v_a_2547_);
lean_dec(v_a_2546_);
lean_dec_ref(v_a_2545_);
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Grind_andThenSubgoals_spec__0(lean_object* v_rest_2555_, lean_object* v_as_2556_, lean_object* v_as_x27_2557_, lean_object* v_b_2558_, lean_object* v_a_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_){
_start:
{
lean_object* v___x_2569_; 
v___x_2569_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Grind_andThenSubgoals_spec__0___redArg(v_rest_2555_, v_as_x27_2557_, v_b_2558_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_);
return v___x_2569_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Grind_andThenSubgoals_spec__0___boxed(lean_object* v_rest_2570_, lean_object* v_as_2571_, lean_object* v_as_x27_2572_, lean_object* v_b_2573_, lean_object* v_a_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_){
_start:
{
lean_object* v_res_2584_; 
v_res_2584_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Grind_andThenSubgoals_spec__0(v_rest_2570_, v_as_2571_, v_as_x27_2572_, v_b_2573_, v_a_2574_, v___y_2575_, v___y_2576_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_);
lean_dec(v___y_2582_);
lean_dec_ref(v___y_2581_);
lean_dec(v___y_2580_);
lean_dec_ref(v___y_2579_);
lean_dec(v___y_2578_);
lean_dec_ref(v___y_2577_);
lean_dec(v___y_2576_);
lean_dec_ref(v___y_2575_);
lean_dec(v_as_x27_2572_);
lean_dec(v_as_2571_);
return v_res_2584_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1___redArg___lam__0(lean_object* v_x_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_){
_start:
{
lean_object* v___x_2595_; 
lean_inc(v___y_2589_);
lean_inc_ref(v___y_2588_);
lean_inc(v___y_2587_);
lean_inc_ref(v___y_2586_);
v___x_2595_ = lean_apply_9(v_x_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_, v___y_2593_, lean_box(0));
return v___x_2595_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1___redArg___lam__0___boxed(lean_object* v_x_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_){
_start:
{
lean_object* v_res_2606_; 
v_res_2606_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1___redArg___lam__0(v_x_2596_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_, v___y_2604_);
lean_dec(v___y_2600_);
lean_dec_ref(v___y_2599_);
lean_dec(v___y_2598_);
lean_dec_ref(v___y_2597_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1___redArg(lean_object* v_mvarId_2607_, lean_object* v_x_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_){
_start:
{
lean_object* v___f_2618_; lean_object* v___x_2619_; 
lean_inc(v___y_2612_);
lean_inc_ref(v___y_2611_);
lean_inc(v___y_2610_);
lean_inc_ref(v___y_2609_);
v___f_2618_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2618_, 0, v_x_2608_);
lean_closure_set(v___f_2618_, 1, v___y_2609_);
lean_closure_set(v___f_2618_, 2, v___y_2610_);
lean_closure_set(v___f_2618_, 3, v___y_2611_);
lean_closure_set(v___f_2618_, 4, v___y_2612_);
v___x_2619_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2607_, v___f_2618_, v___y_2613_, v___y_2614_, v___y_2615_, v___y_2616_);
if (lean_obj_tag(v___x_2619_) == 0)
{
return v___x_2619_;
}
else
{
lean_object* v_a_2620_; lean_object* v___x_2622_; uint8_t v_isShared_2623_; uint8_t v_isSharedCheck_2627_; 
v_a_2620_ = lean_ctor_get(v___x_2619_, 0);
v_isSharedCheck_2627_ = !lean_is_exclusive(v___x_2619_);
if (v_isSharedCheck_2627_ == 0)
{
v___x_2622_ = v___x_2619_;
v_isShared_2623_ = v_isSharedCheck_2627_;
goto v_resetjp_2621_;
}
else
{
lean_inc(v_a_2620_);
lean_dec(v___x_2619_);
v___x_2622_ = lean_box(0);
v_isShared_2623_ = v_isSharedCheck_2627_;
goto v_resetjp_2621_;
}
v_resetjp_2621_:
{
lean_object* v___x_2625_; 
if (v_isShared_2623_ == 0)
{
v___x_2625_ = v___x_2622_;
goto v_reusejp_2624_;
}
else
{
lean_object* v_reuseFailAlloc_2626_; 
v_reuseFailAlloc_2626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2626_, 0, v_a_2620_);
v___x_2625_ = v_reuseFailAlloc_2626_;
goto v_reusejp_2624_;
}
v_reusejp_2624_:
{
return v___x_2625_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1___redArg___boxed(lean_object* v_mvarId_2628_, lean_object* v_x_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_){
_start:
{
lean_object* v_res_2639_; 
v_res_2639_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1___redArg(v_mvarId_2628_, v_x_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_);
lean_dec(v___y_2637_);
lean_dec_ref(v___y_2636_);
lean_dec(v___y_2635_);
lean_dec_ref(v___y_2634_);
lean_dec(v___y_2633_);
lean_dec_ref(v___y_2632_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
return v_res_2639_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1(lean_object* v_00_u03b1_2640_, lean_object* v_mvarId_2641_, lean_object* v_x_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_){
_start:
{
lean_object* v___x_2652_; 
v___x_2652_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1___redArg(v_mvarId_2641_, v_x_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_);
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1___boxed(lean_object* v_00_u03b1_2653_, lean_object* v_mvarId_2654_, lean_object* v_x_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1(v_00_u03b1_2653_, v_mvarId_2654_, v_x_2655_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_, v___y_2663_);
lean_dec(v___y_2663_);
lean_dec_ref(v___y_2662_);
lean_dec(v___y_2661_);
lean_dec_ref(v___y_2660_);
lean_dec(v___y_2659_);
lean_dec_ref(v___y_2658_);
lean_dec(v___y_2657_);
lean_dec_ref(v___y_2656_);
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__2___redArg(lean_object* v_a_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_){
_start:
{
lean_object* v___x_2676_; lean_object* v___x_2677_; 
lean_inc(v___y_2668_);
lean_inc_ref(v___y_2667_);
v___x_2676_ = lean_apply_2(v_a_2666_, v___y_2667_, v___y_2668_);
v___x_2677_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___x_2676_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_);
return v___x_2677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__2___redArg___boxed(lean_object* v_a_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_){
_start:
{
lean_object* v_res_2688_; 
v_res_2688_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__2___redArg(v_a_2678_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_, v___y_2686_);
lean_dec(v___y_2686_);
lean_dec_ref(v___y_2685_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec(v___y_2682_);
lean_dec_ref(v___y_2681_);
lean_dec(v___y_2680_);
lean_dec_ref(v___y_2679_);
return v_res_2688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__2(lean_object* v_00_u03b1_2689_, lean_object* v_a_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_){
_start:
{
lean_object* v___x_2700_; 
v___x_2700_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__2___redArg(v_a_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
return v___x_2700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__2___boxed(lean_object* v_00_u03b1_2701_, lean_object* v_a_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_){
_start:
{
lean_object* v_res_2712_; 
v_res_2712_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__2(v_00_u03b1_2701_, v_a_2702_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_);
lean_dec(v___y_2710_);
lean_dec_ref(v___y_2709_);
lean_dec(v___y_2708_);
lean_dec_ref(v___y_2707_);
lean_dec(v___y_2706_);
lean_dec_ref(v___y_2705_);
lean_dec(v___y_2704_);
lean_dec_ref(v___y_2703_);
return v_res_2712_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___lam__0(uint8_t v_cond_2713_, lean_object* v_____r_2714_){
_start:
{
if (v_cond_2713_ == 0)
{
uint8_t v___x_2715_; 
v___x_2715_ = 1;
return v___x_2715_;
}
else
{
uint8_t v___x_2716_; 
v___x_2716_ = 0;
return v___x_2716_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___lam__0___boxed(lean_object* v_cond_2717_, lean_object* v_____r_2718_){
_start:
{
uint8_t v_cond_boxed_2719_; uint8_t v_res_2720_; lean_object* v_r_2721_; 
v_cond_boxed_2719_ = lean_unbox(v_cond_2717_);
v_res_2720_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___lam__0(v_cond_boxed_2719_, v_____r_2718_);
v_r_2721_ = lean_box(v_res_2720_);
return v_r_2721_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___lam__1(lean_object* v___f_2722_, lean_object* v_x_2723_){
_start:
{
lean_object* v___x_2724_; lean_object* v___x_2725_; uint8_t v___x_2726_; 
v___x_2724_ = lean_box(0);
v___x_2725_ = lean_apply_1(v___f_2722_, v___x_2724_);
v___x_2726_ = lean_unbox(v___x_2725_);
return v___x_2726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___lam__1___boxed(lean_object* v___f_2727_, lean_object* v_x_2728_){
_start:
{
uint8_t v_res_2729_; lean_object* v_r_2730_; 
v_res_2729_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___lam__1(v___f_2727_, v_x_2728_);
v_r_2730_ = lean_box(v_res_2729_);
return v_r_2730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg(uint8_t v_cond_2738_, lean_object* v_act_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_){
_start:
{
lean_object* v_declName_x3f_2749_; lean_object* v_macroStack_2750_; uint8_t v_mayPostpone_2751_; uint8_t v_errToSorry_2752_; lean_object* v_autoBoundImplicitContext_2753_; lean_object* v_autoBoundImplicitForbidden_2754_; lean_object* v_sectionVars_2755_; lean_object* v_sectionFVars_2756_; uint8_t v_implicitLambda_2757_; uint8_t v_heedElabAsElim_2758_; uint8_t v_isNoncomputableSection_2759_; uint8_t v_isMetaSection_2760_; uint8_t v_ignoreTCFailures_2761_; uint8_t v_inPattern_2762_; lean_object* v_tacSnap_x3f_2763_; uint8_t v_saveRecAppSyntax_2764_; uint8_t v_holesAsSyntheticOpaque_2765_; lean_object* v_fixedTermElabs_2766_; lean_object* v___y_2768_; uint8_t v___y_2772_; 
v_declName_x3f_2749_ = lean_ctor_get(v___y_2742_, 0);
v_macroStack_2750_ = lean_ctor_get(v___y_2742_, 1);
v_mayPostpone_2751_ = lean_ctor_get_uint8(v___y_2742_, sizeof(void*)*8);
v_errToSorry_2752_ = lean_ctor_get_uint8(v___y_2742_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_2753_ = lean_ctor_get(v___y_2742_, 2);
v_autoBoundImplicitForbidden_2754_ = lean_ctor_get(v___y_2742_, 3);
v_sectionVars_2755_ = lean_ctor_get(v___y_2742_, 4);
v_sectionFVars_2756_ = lean_ctor_get(v___y_2742_, 5);
v_implicitLambda_2757_ = lean_ctor_get_uint8(v___y_2742_, sizeof(void*)*8 + 2);
v_heedElabAsElim_2758_ = lean_ctor_get_uint8(v___y_2742_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_2759_ = lean_ctor_get_uint8(v___y_2742_, sizeof(void*)*8 + 4);
v_isMetaSection_2760_ = lean_ctor_get_uint8(v___y_2742_, sizeof(void*)*8 + 5);
v_ignoreTCFailures_2761_ = lean_ctor_get_uint8(v___y_2742_, sizeof(void*)*8 + 6);
v_inPattern_2762_ = lean_ctor_get_uint8(v___y_2742_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_2763_ = lean_ctor_get(v___y_2742_, 6);
v_saveRecAppSyntax_2764_ = lean_ctor_get_uint8(v___y_2742_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_2765_ = lean_ctor_get_uint8(v___y_2742_, sizeof(void*)*8 + 9);
v_fixedTermElabs_2766_ = lean_ctor_get(v___y_2742_, 7);
if (lean_obj_tag(v_tacSnap_x3f_2763_) == 0)
{
v___y_2768_ = v_tacSnap_x3f_2763_;
goto v___jp_2767_;
}
else
{
lean_object* v_val_2774_; lean_object* v_old_x3f_2775_; lean_object* v___x_2776_; lean_object* v___f_2777_; 
v_val_2774_ = lean_ctor_get(v_tacSnap_x3f_2763_, 0);
v_old_x3f_2775_ = lean_ctor_get(v_val_2774_, 0);
v___x_2776_ = lean_box(v_cond_2738_);
v___f_2777_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2777_, 0, v___x_2776_);
if (lean_obj_tag(v_old_x3f_2775_) == 1)
{
if (v_cond_2738_ == 0)
{
lean_dec_ref(v___f_2777_);
goto v___jp_2778_;
}
else
{
lean_object* v_val_2781_; lean_object* v___x_2782_; lean_object* v_map_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; 
v_val_2781_ = lean_ctor_get(v_old_x3f_2775_, 0);
v___x_2782_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2746_);
v_map_2783_ = lean_ctor_get(v___x_2782_, 0);
lean_inc(v_map_2783_);
lean_dec_ref(v___x_2782_);
v___x_2784_ = ((lean_object*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__2));
v___x_2785_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2783_, v___x_2784_);
lean_dec(v_map_2783_);
if (lean_obj_tag(v___x_2785_) == 0)
{
lean_dec_ref(v___f_2777_);
goto v___jp_2778_;
}
else
{
lean_object* v_val_2786_; 
v_val_2786_ = lean_ctor_get(v___x_2785_, 0);
lean_inc(v_val_2786_);
lean_dec_ref_known(v___x_2785_, 1);
if (lean_obj_tag(v_val_2786_) == 1)
{
uint8_t v_v_2787_; 
v_v_2787_ = lean_ctor_get_uint8(v_val_2786_, 0);
lean_dec_ref_known(v_val_2786_, 0);
if (v_v_2787_ == 0)
{
lean_dec_ref(v___f_2777_);
goto v___jp_2778_;
}
else
{
lean_object* v_stx_2788_; lean_object* v___f_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; uint8_t v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; uint8_t v___x_2799_; 
v_stx_2788_ = lean_ctor_get(v_val_2781_, 0);
v___f_2789_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2789_, 0, v___f_2777_);
v___x_2790_ = ((lean_object*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___closed__3));
v___x_2791_ = lean_box(0);
v___x_2792_ = 0;
lean_inc(v_stx_2788_);
v___x_2793_ = l_Lean_Syntax_formatStx(v_stx_2788_, v___x_2791_, v___x_2792_);
v___x_2794_ = l_Std_Format_defWidth;
v___x_2795_ = lean_unsigned_to_nat(0u);
v___x_2796_ = l_Std_Format_pretty(v___x_2793_, v___x_2794_, v___x_2795_, v___x_2795_);
v___x_2797_ = lean_string_append(v___x_2790_, v___x_2796_);
lean_dec_ref(v___x_2796_);
v___x_2798_ = lean_dbg_trace(v___x_2797_, v___f_2789_);
v___x_2799_ = lean_unbox(v___x_2798_);
lean_dec(v___x_2798_);
v___y_2772_ = v___x_2799_;
goto v___jp_2771_;
}
}
else
{
lean_dec(v_val_2786_);
lean_dec_ref(v___f_2777_);
goto v___jp_2778_;
}
}
}
}
else
{
lean_object* v___x_2800_; uint8_t v___x_2801_; 
lean_dec_ref(v___f_2777_);
v___x_2800_ = lean_box(0);
v___x_2801_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___lam__0(v_cond_2738_, v___x_2800_);
v___y_2772_ = v___x_2801_;
goto v___jp_2771_;
}
v___jp_2778_:
{
lean_object* v___x_2779_; uint8_t v___x_2780_; 
v___x_2779_ = lean_box(0);
v___x_2780_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___lam__0(v_cond_2738_, v___x_2779_);
v___y_2772_ = v___x_2780_;
goto v___jp_2771_;
}
}
v___jp_2767_:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; 
lean_inc_ref(v_fixedTermElabs_2766_);
lean_inc(v_sectionFVars_2756_);
lean_inc(v_sectionVars_2755_);
lean_inc_ref(v_autoBoundImplicitForbidden_2754_);
lean_inc(v_autoBoundImplicitContext_2753_);
lean_inc(v_macroStack_2750_);
lean_inc(v_declName_x3f_2749_);
v___x_2769_ = lean_alloc_ctor(0, 8, 10);
lean_ctor_set(v___x_2769_, 0, v_declName_x3f_2749_);
lean_ctor_set(v___x_2769_, 1, v_macroStack_2750_);
lean_ctor_set(v___x_2769_, 2, v_autoBoundImplicitContext_2753_);
lean_ctor_set(v___x_2769_, 3, v_autoBoundImplicitForbidden_2754_);
lean_ctor_set(v___x_2769_, 4, v_sectionVars_2755_);
lean_ctor_set(v___x_2769_, 5, v_sectionFVars_2756_);
lean_ctor_set(v___x_2769_, 6, v___y_2768_);
lean_ctor_set(v___x_2769_, 7, v_fixedTermElabs_2766_);
lean_ctor_set_uint8(v___x_2769_, sizeof(void*)*8, v_mayPostpone_2751_);
lean_ctor_set_uint8(v___x_2769_, sizeof(void*)*8 + 1, v_errToSorry_2752_);
lean_ctor_set_uint8(v___x_2769_, sizeof(void*)*8 + 2, v_implicitLambda_2757_);
lean_ctor_set_uint8(v___x_2769_, sizeof(void*)*8 + 3, v_heedElabAsElim_2758_);
lean_ctor_set_uint8(v___x_2769_, sizeof(void*)*8 + 4, v_isNoncomputableSection_2759_);
lean_ctor_set_uint8(v___x_2769_, sizeof(void*)*8 + 5, v_isMetaSection_2760_);
lean_ctor_set_uint8(v___x_2769_, sizeof(void*)*8 + 6, v_ignoreTCFailures_2761_);
lean_ctor_set_uint8(v___x_2769_, sizeof(void*)*8 + 7, v_inPattern_2762_);
lean_ctor_set_uint8(v___x_2769_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_2764_);
lean_ctor_set_uint8(v___x_2769_, sizeof(void*)*8 + 9, v_holesAsSyntheticOpaque_2765_);
lean_inc(v___y_2747_);
lean_inc_ref(v___y_2746_);
lean_inc(v___y_2745_);
lean_inc_ref(v___y_2744_);
lean_inc(v___y_2743_);
lean_inc(v___y_2741_);
lean_inc_ref(v___y_2740_);
v___x_2770_ = lean_apply_9(v_act_2739_, v___y_2740_, v___y_2741_, v___x_2769_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_, lean_box(0));
return v___x_2770_;
}
v___jp_2771_:
{
if (v___y_2772_ == 0)
{
lean_object* v___x_2773_; 
v___x_2773_ = lean_box(0);
v___y_2768_ = v___x_2773_;
goto v___jp_2767_;
}
else
{
lean_inc(v_tacSnap_x3f_2763_);
v___y_2768_ = v_tacSnap_x3f_2763_;
goto v___jp_2767_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg___boxed(lean_object* v_cond_2802_, lean_object* v_act_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_){
_start:
{
uint8_t v_cond_boxed_2813_; lean_object* v_res_2814_; 
v_cond_boxed_2813_ = lean_unbox(v_cond_2802_);
v_res_2814_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg(v_cond_boxed_2813_, v_act_2803_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_);
lean_dec(v___y_2811_);
lean_dec_ref(v___y_2810_);
lean_dec(v___y_2809_);
lean_dec_ref(v___y_2808_);
lean_dec(v___y_2807_);
lean_dec_ref(v___y_2806_);
lean_dec(v___y_2805_);
lean_dec_ref(v___y_2804_);
return v_res_2814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3(lean_object* v_00_u03b1_2815_, uint8_t v_cond_2816_, lean_object* v_act_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_){
_start:
{
lean_object* v___x_2827_; 
v___x_2827_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg(v_cond_2816_, v_act_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_, v___y_2825_);
return v___x_2827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___boxed(lean_object* v_00_u03b1_2828_, lean_object* v_cond_2829_, lean_object* v_act_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_){
_start:
{
uint8_t v_cond_boxed_2840_; lean_object* v_res_2841_; 
v_cond_boxed_2840_ = lean_unbox(v_cond_2829_);
v_res_2841_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3(v_00_u03b1_2828_, v_cond_boxed_2840_, v_act_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_);
lean_dec(v___y_2838_);
lean_dec_ref(v___y_2837_);
lean_dec(v___y_2836_);
lean_dec_ref(v___y_2835_);
lean_dec(v___y_2834_);
lean_dec_ref(v___y_2833_);
lean_dec(v___y_2832_);
lean_dec_ref(v___y_2831_);
return v_res_2841_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__0___redArg(lean_object* v_f_2842_, uint8_t v_collectErr_2843_, lean_object* v_as_2844_, size_t v_sz_2845_, size_t v_i_2846_, lean_object* v_b_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_){
_start:
{
uint8_t v___x_2857_; 
v___x_2857_ = lean_usize_dec_lt(v_i_2846_, v_sz_2845_);
if (v___x_2857_ == 0)
{
lean_object* v___x_2858_; 
lean_dec_ref(v_f_2842_);
v___x_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2858_, 0, v_b_2847_);
return v___x_2858_;
}
else
{
lean_object* v_a_2859_; lean_object* v_fst_2860_; lean_object* v_snd_2861_; lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2967_; 
v_a_2859_ = lean_array_uget(v_as_2844_, v_i_2846_);
v_fst_2860_ = lean_ctor_get(v_a_2859_, 0);
v_snd_2861_ = lean_ctor_get(v_a_2859_, 1);
v_isSharedCheck_2967_ = !lean_is_exclusive(v_a_2859_);
if (v_isSharedCheck_2967_ == 0)
{
v___x_2863_ = v_a_2859_;
v_isShared_2864_ = v_isSharedCheck_2967_;
goto v_resetjp_2862_;
}
else
{
lean_inc(v_snd_2861_);
lean_inc(v_fst_2860_);
lean_dec(v_a_2859_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2967_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
lean_object* v_snd_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2965_; 
v_snd_2865_ = lean_ctor_get(v_b_2847_, 1);
v_isSharedCheck_2965_ = !lean_is_exclusive(v_b_2847_);
if (v_isSharedCheck_2965_ == 0)
{
lean_object* v_unused_2966_; 
v_unused_2966_ = lean_ctor_get(v_b_2847_, 0);
lean_dec(v_unused_2966_);
v___x_2867_ = v_b_2847_;
v_isShared_2868_ = v_isSharedCheck_2965_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_snd_2865_);
lean_dec(v_b_2847_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2965_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___x_2869_; lean_object* v___x_2870_; 
v___x_2869_ = lean_box(0);
v___x_2870_ = l_Lean_Elab_Tactic_Grind_saveState___redArg(v___y_2849_, v___y_2851_, v___y_2853_, v___y_2855_);
if (lean_obj_tag(v___x_2870_) == 0)
{
lean_object* v_a_2871_; lean_object* v_lastErr_x3f_2873_; lean_object* v___y_2874_; lean_object* v___y_2875_; lean_object* v___y_2876_; lean_object* v___y_2877_; lean_object* v___y_2878_; lean_object* v___y_2879_; lean_object* v___y_2880_; lean_object* v_msgsBefore_2897_; lean_object* v___y_2898_; lean_object* v___y_2899_; lean_object* v___y_2900_; lean_object* v___y_2901_; lean_object* v___y_2902_; lean_object* v___y_2903_; lean_object* v___y_2904_; lean_object* v___y_2905_; 
v_a_2871_ = lean_ctor_get(v___x_2870_, 0);
lean_inc(v_a_2871_);
lean_dec_ref_known(v___x_2870_, 1);
if (v_collectErr_2843_ == 0)
{
lean_object* v___x_2944_; 
v___x_2944_ = lean_unsigned_to_nat(0u);
v_msgsBefore_2897_ = v___x_2944_;
v___y_2898_ = v___y_2848_;
v___y_2899_ = v___y_2849_;
v___y_2900_ = v___y_2850_;
v___y_2901_ = v___y_2851_;
v___y_2902_ = v___y_2852_;
v___y_2903_ = v___y_2853_;
v___y_2904_ = v___y_2854_;
v___y_2905_ = v___y_2855_;
goto v___jp_2896_;
}
else
{
lean_object* v___x_2945_; 
v___x_2945_ = l_Lean_Core_getMessageLog___redArg(v___y_2855_);
if (lean_obj_tag(v___x_2945_) == 0)
{
lean_object* v_a_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; 
v_a_2946_ = lean_ctor_get(v___x_2945_, 0);
lean_inc(v_a_2946_);
lean_dec_ref_known(v___x_2945_, 1);
v___x_2947_ = l_Lean_MessageLog_toArray(v_a_2946_);
lean_dec(v_a_2946_);
v___x_2948_ = lean_array_get_size(v___x_2947_);
lean_dec_ref(v___x_2947_);
v_msgsBefore_2897_ = v___x_2948_;
v___y_2898_ = v___y_2848_;
v___y_2899_ = v___y_2849_;
v___y_2900_ = v___y_2850_;
v___y_2901_ = v___y_2851_;
v___y_2902_ = v___y_2852_;
v___y_2903_ = v___y_2853_;
v___y_2904_ = v___y_2854_;
v___y_2905_ = v___y_2855_;
goto v___jp_2896_;
}
else
{
lean_object* v_a_2949_; lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_2956_; 
lean_dec(v_a_2871_);
lean_del_object(v___x_2867_);
lean_dec(v_snd_2865_);
lean_del_object(v___x_2863_);
lean_dec(v_snd_2861_);
lean_dec(v_fst_2860_);
lean_dec_ref(v_f_2842_);
v_a_2949_ = lean_ctor_get(v___x_2945_, 0);
v_isSharedCheck_2956_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_2956_ == 0)
{
v___x_2951_ = v___x_2945_;
v_isShared_2952_ = v_isSharedCheck_2956_;
goto v_resetjp_2950_;
}
else
{
lean_inc(v_a_2949_);
lean_dec(v___x_2945_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_2956_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v___x_2954_; 
if (v_isShared_2952_ == 0)
{
v___x_2954_ = v___x_2951_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2955_; 
v_reuseFailAlloc_2955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2955_, 0, v_a_2949_);
v___x_2954_ = v_reuseFailAlloc_2955_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
return v___x_2954_;
}
}
}
}
v___jp_2872_:
{
lean_object* v___x_2881_; 
v___x_2881_ = l_Lean_Elab_Tactic_Grind_SavedState_restore___redArg(v_a_2871_, v___x_2857_, v___y_2874_, v___y_2875_, v___y_2876_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_);
if (lean_obj_tag(v___x_2881_) == 0)
{
lean_object* v___x_2883_; 
lean_dec_ref_known(v___x_2881_, 1);
if (v_isShared_2868_ == 0)
{
lean_ctor_set(v___x_2867_, 1, v_lastErr_x3f_2873_);
lean_ctor_set(v___x_2867_, 0, v___x_2869_);
v___x_2883_ = v___x_2867_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2887_; 
v_reuseFailAlloc_2887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2887_, 0, v___x_2869_);
lean_ctor_set(v_reuseFailAlloc_2887_, 1, v_lastErr_x3f_2873_);
v___x_2883_ = v_reuseFailAlloc_2887_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
size_t v___x_2884_; size_t v___x_2885_; 
v___x_2884_ = ((size_t)1ULL);
v___x_2885_ = lean_usize_add(v_i_2846_, v___x_2884_);
v_i_2846_ = v___x_2885_;
v_b_2847_ = v___x_2883_;
goto _start;
}
}
else
{
lean_object* v_a_2888_; lean_object* v___x_2890_; uint8_t v_isShared_2891_; uint8_t v_isSharedCheck_2895_; 
lean_dec(v_lastErr_x3f_2873_);
lean_del_object(v___x_2867_);
lean_dec_ref(v_f_2842_);
v_a_2888_ = lean_ctor_get(v___x_2881_, 0);
v_isSharedCheck_2895_ = !lean_is_exclusive(v___x_2881_);
if (v_isSharedCheck_2895_ == 0)
{
v___x_2890_ = v___x_2881_;
v_isShared_2891_ = v_isSharedCheck_2895_;
goto v_resetjp_2889_;
}
else
{
lean_inc(v_a_2888_);
lean_dec(v___x_2881_);
v___x_2890_ = lean_box(0);
v_isShared_2891_ = v_isSharedCheck_2895_;
goto v_resetjp_2889_;
}
v_resetjp_2889_:
{
lean_object* v___x_2893_; 
if (v_isShared_2891_ == 0)
{
v___x_2893_ = v___x_2890_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v_a_2888_);
v___x_2893_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
return v___x_2893_;
}
}
}
}
v___jp_2896_:
{
lean_object* v___x_2906_; 
lean_inc_ref(v_f_2842_);
lean_inc(v___y_2905_);
lean_inc_ref(v___y_2904_);
lean_inc(v___y_2903_);
lean_inc_ref(v___y_2902_);
lean_inc(v___y_2901_);
lean_inc_ref(v___y_2900_);
lean_inc(v___y_2899_);
lean_inc_ref(v___y_2898_);
v___x_2906_ = lean_apply_11(v_f_2842_, v_fst_2860_, v_snd_2861_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, lean_box(0));
if (lean_obj_tag(v___x_2906_) == 0)
{
lean_object* v_a_2907_; lean_object* v___x_2909_; uint8_t v_isShared_2910_; uint8_t v_isSharedCheck_2920_; 
lean_dec(v_msgsBefore_2897_);
lean_dec(v_a_2871_);
lean_del_object(v___x_2867_);
lean_dec_ref(v_f_2842_);
v_a_2907_ = lean_ctor_get(v___x_2906_, 0);
v_isSharedCheck_2920_ = !lean_is_exclusive(v___x_2906_);
if (v_isSharedCheck_2920_ == 0)
{
v___x_2909_ = v___x_2906_;
v_isShared_2910_ = v_isSharedCheck_2920_;
goto v_resetjp_2908_;
}
else
{
lean_inc(v_a_2907_);
lean_dec(v___x_2906_);
v___x_2909_ = lean_box(0);
v_isShared_2910_ = v_isSharedCheck_2920_;
goto v_resetjp_2908_;
}
v_resetjp_2908_:
{
lean_object* v___x_2911_; lean_object* v___x_2913_; 
v___x_2911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2911_, 0, v_a_2907_);
if (v_isShared_2864_ == 0)
{
lean_ctor_set(v___x_2863_, 1, v___x_2869_);
lean_ctor_set(v___x_2863_, 0, v___x_2911_);
v___x_2913_ = v___x_2863_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v___x_2911_);
lean_ctor_set(v_reuseFailAlloc_2919_, 1, v___x_2869_);
v___x_2913_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2917_; 
v___x_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2913_);
v___x_2915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2915_, 0, v___x_2914_);
lean_ctor_set(v___x_2915_, 1, v_snd_2865_);
if (v_isShared_2910_ == 0)
{
lean_ctor_set(v___x_2909_, 0, v___x_2915_);
v___x_2917_ = v___x_2909_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v___x_2915_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
}
else
{
lean_object* v_a_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2943_; 
lean_del_object(v___x_2863_);
v_a_2921_ = lean_ctor_get(v___x_2906_, 0);
v_isSharedCheck_2943_ = !lean_is_exclusive(v___x_2906_);
if (v_isSharedCheck_2943_ == 0)
{
v___x_2923_ = v___x_2906_;
v_isShared_2924_ = v_isSharedCheck_2943_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_a_2921_);
lean_dec(v___x_2906_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2943_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
uint8_t v___x_2925_; 
v___x_2925_ = l_Lean_Exception_isInterrupt(v_a_2921_);
if (v___x_2925_ == 0)
{
uint8_t v___x_2926_; 
lean_inc(v_a_2921_);
v___x_2926_ = l_Lean_Exception_isRuntime(v_a_2921_);
if (v___x_2926_ == 0)
{
lean_del_object(v___x_2923_);
if (v_collectErr_2843_ == 0)
{
lean_dec(v_a_2921_);
lean_dec(v_msgsBefore_2897_);
v_lastErr_x3f_2873_ = v_snd_2865_;
v___y_2874_ = v___y_2899_;
v___y_2875_ = v___y_2900_;
v___y_2876_ = v___y_2901_;
v___y_2877_ = v___y_2902_;
v___y_2878_ = v___y_2903_;
v___y_2879_ = v___y_2904_;
v___y_2880_ = v___y_2905_;
goto v___jp_2872_;
}
else
{
lean_object* v___x_2927_; 
v___x_2927_ = l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg(v_a_2921_, v_msgsBefore_2897_, v___y_2905_);
if (lean_obj_tag(v___x_2927_) == 0)
{
lean_object* v_a_2928_; 
v_a_2928_ = lean_ctor_get(v___x_2927_, 0);
lean_inc(v_a_2928_);
lean_dec_ref_known(v___x_2927_, 1);
if (lean_obj_tag(v_a_2928_) == 1)
{
lean_dec(v_snd_2865_);
v_lastErr_x3f_2873_ = v_a_2928_;
v___y_2874_ = v___y_2899_;
v___y_2875_ = v___y_2900_;
v___y_2876_ = v___y_2901_;
v___y_2877_ = v___y_2902_;
v___y_2878_ = v___y_2903_;
v___y_2879_ = v___y_2904_;
v___y_2880_ = v___y_2905_;
goto v___jp_2872_;
}
else
{
lean_dec(v_a_2928_);
v_lastErr_x3f_2873_ = v_snd_2865_;
v___y_2874_ = v___y_2899_;
v___y_2875_ = v___y_2900_;
v___y_2876_ = v___y_2901_;
v___y_2877_ = v___y_2902_;
v___y_2878_ = v___y_2903_;
v___y_2879_ = v___y_2904_;
v___y_2880_ = v___y_2905_;
goto v___jp_2872_;
}
}
else
{
lean_object* v_a_2929_; lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2936_; 
lean_dec(v_a_2871_);
lean_del_object(v___x_2867_);
lean_dec(v_snd_2865_);
lean_dec_ref(v_f_2842_);
v_a_2929_ = lean_ctor_get(v___x_2927_, 0);
v_isSharedCheck_2936_ = !lean_is_exclusive(v___x_2927_);
if (v_isSharedCheck_2936_ == 0)
{
v___x_2931_ = v___x_2927_;
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
else
{
lean_inc(v_a_2929_);
lean_dec(v___x_2927_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v___x_2934_; 
if (v_isShared_2932_ == 0)
{
v___x_2934_ = v___x_2931_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v_a_2929_);
v___x_2934_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
return v___x_2934_;
}
}
}
}
}
else
{
lean_object* v___x_2938_; 
lean_dec(v_msgsBefore_2897_);
lean_dec(v_a_2871_);
lean_del_object(v___x_2867_);
lean_dec(v_snd_2865_);
lean_dec_ref(v_f_2842_);
if (v_isShared_2924_ == 0)
{
v___x_2938_ = v___x_2923_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_a_2921_);
v___x_2938_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2937_;
}
v_reusejp_2937_:
{
return v___x_2938_;
}
}
}
else
{
lean_object* v___x_2941_; 
lean_dec(v_msgsBefore_2897_);
lean_dec(v_a_2871_);
lean_del_object(v___x_2867_);
lean_dec(v_snd_2865_);
lean_dec_ref(v_f_2842_);
if (v_isShared_2924_ == 0)
{
v___x_2941_ = v___x_2923_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2942_; 
v_reuseFailAlloc_2942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2942_, 0, v_a_2921_);
v___x_2941_ = v_reuseFailAlloc_2942_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
return v___x_2941_;
}
}
}
}
}
}
else
{
lean_object* v_a_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2964_; 
lean_del_object(v___x_2867_);
lean_dec(v_snd_2865_);
lean_del_object(v___x_2863_);
lean_dec(v_snd_2861_);
lean_dec(v_fst_2860_);
lean_dec_ref(v_f_2842_);
v_a_2957_ = lean_ctor_get(v___x_2870_, 0);
v_isSharedCheck_2964_ = !lean_is_exclusive(v___x_2870_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2959_ = v___x_2870_;
v_isShared_2960_ = v_isSharedCheck_2964_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_a_2957_);
lean_dec(v___x_2870_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_2964_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2962_; 
if (v_isShared_2960_ == 0)
{
v___x_2962_ = v___x_2959_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v_a_2957_);
v___x_2962_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
return v___x_2962_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__0___redArg___boxed(lean_object* v_f_2968_, lean_object* v_collectErr_2969_, lean_object* v_as_2970_, lean_object* v_sz_2971_, lean_object* v_i_2972_, lean_object* v_b_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_){
_start:
{
uint8_t v_collectErr_boxed_2983_; size_t v_sz_boxed_2984_; size_t v_i_boxed_2985_; lean_object* v_res_2986_; 
v_collectErr_boxed_2983_ = lean_unbox(v_collectErr_2969_);
v_sz_boxed_2984_ = lean_unbox_usize(v_sz_2971_);
lean_dec(v_sz_2971_);
v_i_boxed_2985_ = lean_unbox_usize(v_i_2972_);
lean_dec(v_i_2972_);
v_res_2986_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__0___redArg(v_f_2968_, v_collectErr_boxed_2983_, v_as_2970_, v_sz_boxed_2984_, v_i_boxed_2985_, v_b_2973_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_);
lean_dec(v___y_2981_);
lean_dec_ref(v___y_2980_);
lean_dec(v___y_2979_);
lean_dec_ref(v___y_2978_);
lean_dec(v___y_2977_);
lean_dec_ref(v___y_2976_);
lean_dec(v___y_2975_);
lean_dec_ref(v___y_2974_);
lean_dec_ref(v_as_2970_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___lam__0(uint8_t v_reverse_2989_, lean_object* v_except_2990_, lean_object* v_f_2991_, uint8_t v_collectErr_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_){
_start:
{
lean_object* v___x_3002_; 
v___x_3002_ = l_Lean_Meta_localHypTypes(v_reverse_2989_, v_except_2990_, v___y_2997_, v___y_2998_, v___y_2999_, v___y_3000_);
if (lean_obj_tag(v___x_3002_) == 0)
{
lean_object* v_a_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; size_t v_sz_3006_; size_t v___x_3007_; lean_object* v___x_3008_; 
v_a_3003_ = lean_ctor_get(v___x_3002_, 0);
lean_inc(v_a_3003_);
lean_dec_ref_known(v___x_3002_, 1);
v___x_3004_ = lean_box(0);
v___x_3005_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___lam__0___closed__0));
v_sz_3006_ = lean_array_size(v_a_3003_);
v___x_3007_ = ((size_t)0ULL);
v___x_3008_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__0___redArg(v_f_2991_, v_collectErr_2992_, v_a_3003_, v_sz_3006_, v___x_3007_, v___x_3005_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_, v___y_2998_, v___y_2999_, v___y_3000_);
lean_dec(v_a_3003_);
if (lean_obj_tag(v___x_3008_) == 0)
{
lean_object* v_a_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3030_; 
v_a_3009_ = lean_ctor_get(v___x_3008_, 0);
v_isSharedCheck_3030_ = !lean_is_exclusive(v___x_3008_);
if (v_isSharedCheck_3030_ == 0)
{
v___x_3011_ = v___x_3008_;
v_isShared_3012_ = v_isSharedCheck_3030_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_a_3009_);
lean_dec(v___x_3008_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3030_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v_fst_3013_; 
v_fst_3013_ = lean_ctor_get(v_a_3009_, 0);
if (lean_obj_tag(v_fst_3013_) == 0)
{
lean_object* v_snd_3014_; lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3024_; 
v_snd_3014_ = lean_ctor_get(v_a_3009_, 1);
v_isSharedCheck_3024_ = !lean_is_exclusive(v_a_3009_);
if (v_isSharedCheck_3024_ == 0)
{
lean_object* v_unused_3025_; 
v_unused_3025_ = lean_ctor_get(v_a_3009_, 0);
lean_dec(v_unused_3025_);
v___x_3016_ = v_a_3009_;
v_isShared_3017_ = v_isSharedCheck_3024_;
goto v_resetjp_3015_;
}
else
{
lean_inc(v_snd_3014_);
lean_dec(v_a_3009_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3024_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
lean_object* v___x_3019_; 
if (v_isShared_3017_ == 0)
{
lean_ctor_set(v___x_3016_, 0, v___x_3004_);
v___x_3019_ = v___x_3016_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v___x_3004_);
lean_ctor_set(v_reuseFailAlloc_3023_, 1, v_snd_3014_);
v___x_3019_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
lean_object* v___x_3021_; 
if (v_isShared_3012_ == 0)
{
lean_ctor_set(v___x_3011_, 0, v___x_3019_);
v___x_3021_ = v___x_3011_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v___x_3019_);
v___x_3021_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
return v___x_3021_;
}
}
}
}
else
{
lean_object* v_val_3026_; lean_object* v___x_3028_; 
lean_inc_ref(v_fst_3013_);
lean_dec(v_a_3009_);
v_val_3026_ = lean_ctor_get(v_fst_3013_, 0);
lean_inc(v_val_3026_);
lean_dec_ref_known(v_fst_3013_, 1);
if (v_isShared_3012_ == 0)
{
lean_ctor_set(v___x_3011_, 0, v_val_3026_);
v___x_3028_ = v___x_3011_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v_val_3026_);
v___x_3028_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
return v___x_3028_;
}
}
}
}
else
{
lean_object* v_a_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3038_; 
v_a_3031_ = lean_ctor_get(v___x_3008_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_3008_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3033_ = v___x_3008_;
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_a_3031_);
lean_dec(v___x_3008_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v___x_3036_; 
if (v_isShared_3034_ == 0)
{
v___x_3036_ = v___x_3033_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v_a_3031_);
v___x_3036_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
return v___x_3036_;
}
}
}
}
else
{
lean_object* v_a_3039_; lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3046_; 
lean_dec_ref(v_f_2991_);
v_a_3039_ = lean_ctor_get(v___x_3002_, 0);
v_isSharedCheck_3046_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3046_ == 0)
{
v___x_3041_ = v___x_3002_;
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
else
{
lean_inc(v_a_3039_);
lean_dec(v___x_3002_);
v___x_3041_ = lean_box(0);
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
v_resetjp_3040_:
{
lean_object* v___x_3044_; 
if (v_isShared_3042_ == 0)
{
v___x_3044_ = v___x_3041_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_a_3039_);
v___x_3044_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
return v___x_3044_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___lam__0___boxed(lean_object* v_reverse_3047_, lean_object* v_except_3048_, lean_object* v_f_3049_, lean_object* v_collectErr_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_){
_start:
{
uint8_t v_reverse_boxed_3060_; uint8_t v_collectErr_boxed_3061_; lean_object* v_res_3062_; 
v_reverse_boxed_3060_ = lean_unbox(v_reverse_3047_);
v_collectErr_boxed_3061_ = lean_unbox(v_collectErr_3050_);
v_res_3062_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___lam__0(v_reverse_boxed_3060_, v_except_3048_, v_f_3049_, v_collectErr_boxed_3061_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_);
lean_dec(v___y_3058_);
lean_dec_ref(v___y_3057_);
lean_dec(v___y_3056_);
lean_dec_ref(v___y_3055_);
lean_dec(v___y_3054_);
lean_dec_ref(v___y_3053_);
lean_dec(v___y_3052_);
lean_dec_ref(v___y_3051_);
lean_dec(v_except_3048_);
return v_res_3062_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___lam__1(lean_object* v___f_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_){
_start:
{
lean_object* v___x_3073_; 
v___x_3073_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
if (lean_obj_tag(v___x_3073_) == 0)
{
lean_object* v_a_3074_; lean_object* v_mvarId_3075_; lean_object* v___x_3076_; 
v_a_3074_ = lean_ctor_get(v___x_3073_, 0);
lean_inc(v_a_3074_);
lean_dec_ref_known(v___x_3073_, 1);
v_mvarId_3075_ = lean_ctor_get(v_a_3074_, 1);
lean_inc(v_mvarId_3075_);
lean_dec(v_a_3074_);
v___x_3076_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__1___redArg(v_mvarId_3075_, v___f_3063_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
return v___x_3076_;
}
else
{
lean_object* v_a_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3084_; 
lean_dec_ref(v___f_3063_);
v_a_3077_ = lean_ctor_get(v___x_3073_, 0);
v_isSharedCheck_3084_ = !lean_is_exclusive(v___x_3073_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3079_ = v___x_3073_;
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
else
{
lean_inc(v_a_3077_);
lean_dec(v___x_3073_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v___x_3082_; 
if (v_isShared_3080_ == 0)
{
v___x_3082_ = v___x_3079_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_a_3077_);
v___x_3082_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
return v___x_3082_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___lam__1___boxed(lean_object* v___f_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_){
_start:
{
lean_object* v_res_3095_; 
v_res_3095_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___lam__1(v___f_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_);
lean_dec(v___y_3093_);
lean_dec_ref(v___y_3092_);
lean_dec(v___y_3091_);
lean_dec_ref(v___y_3090_);
lean_dec(v___y_3089_);
lean_dec_ref(v___y_3088_);
lean_dec(v___y_3087_);
lean_dec_ref(v___y_3086_);
return v_res_3095_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg(lean_object* v_f_3096_, uint8_t v_reverse_3097_, lean_object* v_except_3098_, uint8_t v_collectErr_3099_, lean_object* v_a_3100_, lean_object* v_a_3101_, lean_object* v_a_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_, lean_object* v_a_3107_){
_start:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___f_3111_; lean_object* v___f_3112_; uint8_t v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3109_ = lean_box(v_reverse_3097_);
v___x_3110_ = lean_box(v_collectErr_3099_);
v___f_3111_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___lam__0___boxed), 13, 4);
lean_closure_set(v___f_3111_, 0, v___x_3109_);
lean_closure_set(v___f_3111_, 1, v_except_3098_);
lean_closure_set(v___f_3111_, 2, v_f_3096_);
lean_closure_set(v___f_3111_, 3, v___x_3110_);
v___f_3112_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___lam__1___boxed), 10, 1);
lean_closure_set(v___f_3112_, 0, v___f_3111_);
v___x_3113_ = 1;
v___x_3114_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Grind_withoutRecover___boxed), 11, 2);
lean_closure_set(v___x_3114_, 0, lean_box(0));
lean_closure_set(v___x_3114_, 1, v___f_3112_);
v___x_3115_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__2___boxed), 11, 2);
lean_closure_set(v___x_3115_, 0, lean_box(0));
lean_closure_set(v___x_3115_, 1, v___x_3114_);
v___x_3116_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__3___redArg(v___x_3113_, v___x_3115_, v_a_3100_, v_a_3101_, v_a_3102_, v_a_3103_, v_a_3104_, v_a_3105_, v_a_3106_, v_a_3107_);
return v___x_3116_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg___boxed(lean_object* v_f_3117_, lean_object* v_reverse_3118_, lean_object* v_except_3119_, lean_object* v_collectErr_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_, lean_object* v_a_3127_, lean_object* v_a_3128_, lean_object* v_a_3129_){
_start:
{
uint8_t v_reverse_boxed_3130_; uint8_t v_collectErr_boxed_3131_; lean_object* v_res_3132_; 
v_reverse_boxed_3130_ = lean_unbox(v_reverse_3118_);
v_collectErr_boxed_3131_ = lean_unbox(v_collectErr_3120_);
v_res_3132_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg(v_f_3117_, v_reverse_boxed_3130_, v_except_3119_, v_collectErr_boxed_3131_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_, v_a_3127_, v_a_3128_);
lean_dec(v_a_3128_);
lean_dec_ref(v_a_3127_);
lean_dec(v_a_3126_);
lean_dec_ref(v_a_3125_);
lean_dec(v_a_3124_);
lean_dec_ref(v_a_3123_);
lean_dec(v_a_3122_);
lean_dec_ref(v_a_3121_);
return v_res_3132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore(lean_object* v_00_u03b1_3133_, lean_object* v_f_3134_, uint8_t v_reverse_3135_, lean_object* v_except_3136_, uint8_t v_collectErr_3137_, lean_object* v_a_3138_, lean_object* v_a_3139_, lean_object* v_a_3140_, lean_object* v_a_3141_, lean_object* v_a_3142_, lean_object* v_a_3143_, lean_object* v_a_3144_, lean_object* v_a_3145_){
_start:
{
lean_object* v___x_3147_; 
v___x_3147_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg(v_f_3134_, v_reverse_3135_, v_except_3136_, v_collectErr_3137_, v_a_3138_, v_a_3139_, v_a_3140_, v_a_3141_, v_a_3142_, v_a_3143_, v_a_3144_, v_a_3145_);
return v___x_3147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___boxed(lean_object* v_00_u03b1_3148_, lean_object* v_f_3149_, lean_object* v_reverse_3150_, lean_object* v_except_3151_, lean_object* v_collectErr_3152_, lean_object* v_a_3153_, lean_object* v_a_3154_, lean_object* v_a_3155_, lean_object* v_a_3156_, lean_object* v_a_3157_, lean_object* v_a_3158_, lean_object* v_a_3159_, lean_object* v_a_3160_, lean_object* v_a_3161_){
_start:
{
uint8_t v_reverse_boxed_3162_; uint8_t v_collectErr_boxed_3163_; lean_object* v_res_3164_; 
v_reverse_boxed_3162_ = lean_unbox(v_reverse_3150_);
v_collectErr_boxed_3163_ = lean_unbox(v_collectErr_3152_);
v_res_3164_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore(v_00_u03b1_3148_, v_f_3149_, v_reverse_boxed_3162_, v_except_3151_, v_collectErr_boxed_3163_, v_a_3153_, v_a_3154_, v_a_3155_, v_a_3156_, v_a_3157_, v_a_3158_, v_a_3159_, v_a_3160_);
lean_dec(v_a_3160_);
lean_dec_ref(v_a_3159_);
lean_dec(v_a_3158_);
lean_dec_ref(v_a_3157_);
lean_dec(v_a_3156_);
lean_dec_ref(v_a_3155_);
lean_dec(v_a_3154_);
lean_dec_ref(v_a_3153_);
return v_res_3164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__0(lean_object* v_00_u03b1_3165_, lean_object* v_f_3166_, uint8_t v_collectErr_3167_, lean_object* v_as_3168_, size_t v_sz_3169_, size_t v_i_3170_, lean_object* v_b_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_){
_start:
{
lean_object* v___x_3181_; 
v___x_3181_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__0___redArg(v_f_3166_, v_collectErr_3167_, v_as_3168_, v_sz_3169_, v_i_3170_, v_b_3171_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_, v___y_3176_, v___y_3177_, v___y_3178_, v___y_3179_);
return v___x_3181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__0___boxed(lean_object* v_00_u03b1_3182_, lean_object* v_f_3183_, lean_object* v_collectErr_3184_, lean_object* v_as_3185_, lean_object* v_sz_3186_, lean_object* v_i_3187_, lean_object* v_b_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_){
_start:
{
uint8_t v_collectErr_boxed_3198_; size_t v_sz_boxed_3199_; size_t v_i_boxed_3200_; lean_object* v_res_3201_; 
v_collectErr_boxed_3198_ = lean_unbox(v_collectErr_3184_);
v_sz_boxed_3199_ = lean_unbox_usize(v_sz_3186_);
lean_dec(v_sz_3186_);
v_i_boxed_3200_ = lean_unbox_usize(v_i_3187_);
lean_dec(v_i_3187_);
v_res_3201_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore_spec__0(v_00_u03b1_3182_, v_f_3183_, v_collectErr_boxed_3198_, v_as_3185_, v_sz_boxed_3199_, v_i_boxed_3200_, v_b_3188_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_, v___y_3196_);
lean_dec(v___y_3196_);
lean_dec_ref(v___y_3195_);
lean_dec(v___y_3194_);
lean_dec_ref(v___y_3193_);
lean_dec(v___y_3192_);
lean_dec_ref(v___y_3191_);
lean_dec(v___y_3190_);
lean_dec_ref(v___y_3189_);
lean_dec_ref(v_as_3185_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_firstHyp_x3f___redArg(lean_object* v_f_3202_, uint8_t v_reverse_3203_, lean_object* v_except_3204_, lean_object* v_a_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_, lean_object* v_a_3208_, lean_object* v_a_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_, lean_object* v_a_3212_){
_start:
{
uint8_t v___x_3214_; lean_object* v___x_3215_; 
v___x_3214_ = 0;
v___x_3215_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg(v_f_3202_, v_reverse_3203_, v_except_3204_, v___x_3214_, v_a_3205_, v_a_3206_, v_a_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_, v_a_3212_);
if (lean_obj_tag(v___x_3215_) == 0)
{
lean_object* v_a_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3224_; 
v_a_3216_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3224_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3224_ == 0)
{
v___x_3218_ = v___x_3215_;
v_isShared_3219_ = v_isSharedCheck_3224_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_a_3216_);
lean_dec(v___x_3215_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3224_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v_fst_3220_; lean_object* v___x_3222_; 
v_fst_3220_ = lean_ctor_get(v_a_3216_, 0);
lean_inc(v_fst_3220_);
lean_dec(v_a_3216_);
if (v_isShared_3219_ == 0)
{
lean_ctor_set(v___x_3218_, 0, v_fst_3220_);
v___x_3222_ = v___x_3218_;
goto v_reusejp_3221_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v_fst_3220_);
v___x_3222_ = v_reuseFailAlloc_3223_;
goto v_reusejp_3221_;
}
v_reusejp_3221_:
{
return v___x_3222_;
}
}
}
else
{
lean_object* v_a_3225_; lean_object* v___x_3227_; uint8_t v_isShared_3228_; uint8_t v_isSharedCheck_3232_; 
v_a_3225_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3232_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3232_ == 0)
{
v___x_3227_ = v___x_3215_;
v_isShared_3228_ = v_isSharedCheck_3232_;
goto v_resetjp_3226_;
}
else
{
lean_inc(v_a_3225_);
lean_dec(v___x_3215_);
v___x_3227_ = lean_box(0);
v_isShared_3228_ = v_isSharedCheck_3232_;
goto v_resetjp_3226_;
}
v_resetjp_3226_:
{
lean_object* v___x_3230_; 
if (v_isShared_3228_ == 0)
{
v___x_3230_ = v___x_3227_;
goto v_reusejp_3229_;
}
else
{
lean_object* v_reuseFailAlloc_3231_; 
v_reuseFailAlloc_3231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3231_, 0, v_a_3225_);
v___x_3230_ = v_reuseFailAlloc_3231_;
goto v_reusejp_3229_;
}
v_reusejp_3229_:
{
return v___x_3230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_firstHyp_x3f___redArg___boxed(lean_object* v_f_3233_, lean_object* v_reverse_3234_, lean_object* v_except_3235_, lean_object* v_a_3236_, lean_object* v_a_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_, lean_object* v_a_3244_){
_start:
{
uint8_t v_reverse_boxed_3245_; lean_object* v_res_3246_; 
v_reverse_boxed_3245_ = lean_unbox(v_reverse_3234_);
v_res_3246_ = l_Lean_Elab_Tactic_Grind_firstHyp_x3f___redArg(v_f_3233_, v_reverse_boxed_3245_, v_except_3235_, v_a_3236_, v_a_3237_, v_a_3238_, v_a_3239_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_);
lean_dec(v_a_3243_);
lean_dec_ref(v_a_3242_);
lean_dec(v_a_3241_);
lean_dec_ref(v_a_3240_);
lean_dec(v_a_3239_);
lean_dec_ref(v_a_3238_);
lean_dec(v_a_3237_);
lean_dec_ref(v_a_3236_);
return v_res_3246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_firstHyp_x3f(lean_object* v_00_u03b1_3247_, lean_object* v_f_3248_, uint8_t v_reverse_3249_, lean_object* v_except_3250_, lean_object* v_a_3251_, lean_object* v_a_3252_, lean_object* v_a_3253_, lean_object* v_a_3254_, lean_object* v_a_3255_, lean_object* v_a_3256_, lean_object* v_a_3257_, lean_object* v_a_3258_){
_start:
{
lean_object* v___x_3260_; 
v___x_3260_ = l_Lean_Elab_Tactic_Grind_firstHyp_x3f___redArg(v_f_3248_, v_reverse_3249_, v_except_3250_, v_a_3251_, v_a_3252_, v_a_3253_, v_a_3254_, v_a_3255_, v_a_3256_, v_a_3257_, v_a_3258_);
return v___x_3260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_firstHyp_x3f___boxed(lean_object* v_00_u03b1_3261_, lean_object* v_f_3262_, lean_object* v_reverse_3263_, lean_object* v_except_3264_, lean_object* v_a_3265_, lean_object* v_a_3266_, lean_object* v_a_3267_, lean_object* v_a_3268_, lean_object* v_a_3269_, lean_object* v_a_3270_, lean_object* v_a_3271_, lean_object* v_a_3272_, lean_object* v_a_3273_){
_start:
{
uint8_t v_reverse_boxed_3274_; lean_object* v_res_3275_; 
v_reverse_boxed_3274_ = lean_unbox(v_reverse_3263_);
v_res_3275_ = l_Lean_Elab_Tactic_Grind_firstHyp_x3f(v_00_u03b1_3261_, v_f_3262_, v_reverse_boxed_3274_, v_except_3264_, v_a_3265_, v_a_3266_, v_a_3267_, v_a_3268_, v_a_3269_, v_a_3270_, v_a_3271_, v_a_3272_);
lean_dec(v_a_3272_);
lean_dec_ref(v_a_3271_);
lean_dec(v_a_3270_);
lean_dec_ref(v_a_3269_);
lean_dec(v_a_3268_);
lean_dec_ref(v_a_3267_);
lean_dec(v_a_3266_);
lean_dec_ref(v_a_3265_);
return v_res_3275_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__1(void){
_start:
{
lean_object* v___x_3277_; lean_object* v___x_3278_; 
v___x_3277_ = ((lean_object*)(l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__0));
v___x_3278_ = l_Lean_stringToMessageData(v___x_3277_);
return v___x_3278_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__3(void){
_start:
{
lean_object* v___x_3280_; lean_object* v___x_3281_; 
v___x_3280_ = ((lean_object*)(l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__2));
v___x_3281_ = l_Lean_stringToMessageData(v___x_3280_);
return v___x_3281_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__5(void){
_start:
{
lean_object* v___x_3283_; lean_object* v___x_3284_; 
v___x_3283_ = ((lean_object*)(l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__4));
v___x_3284_ = l_Lean_stringToMessageData(v___x_3283_);
return v___x_3284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_firstHyp___redArg(lean_object* v_f_3285_, uint8_t v_reverse_3286_, lean_object* v_except_3287_, lean_object* v_a_3288_, lean_object* v_a_3289_, lean_object* v_a_3290_, lean_object* v_a_3291_, lean_object* v_a_3292_, lean_object* v_a_3293_, lean_object* v_a_3294_, lean_object* v_a_3295_){
_start:
{
uint8_t v___x_3297_; lean_object* v___x_3298_; 
v___x_3297_ = 1;
v___x_3298_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_firstHypCore___redArg(v_f_3285_, v_reverse_3286_, v_except_3287_, v___x_3297_, v_a_3288_, v_a_3289_, v_a_3290_, v_a_3291_, v_a_3292_, v_a_3293_, v_a_3294_, v_a_3295_);
if (lean_obj_tag(v___x_3298_) == 0)
{
lean_object* v_a_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3324_; 
v_a_3299_ = lean_ctor_get(v___x_3298_, 0);
v_isSharedCheck_3324_ = !lean_is_exclusive(v___x_3298_);
if (v_isSharedCheck_3324_ == 0)
{
v___x_3301_ = v___x_3298_;
v_isShared_3302_ = v_isSharedCheck_3324_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_a_3299_);
lean_dec(v___x_3298_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3324_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v_fst_3303_; 
v_fst_3303_ = lean_ctor_get(v_a_3299_, 0);
if (lean_obj_tag(v_fst_3303_) == 0)
{
lean_object* v_snd_3304_; lean_object* v___x_3306_; uint8_t v_isShared_3307_; uint8_t v_isSharedCheck_3318_; 
lean_del_object(v___x_3301_);
v_snd_3304_ = lean_ctor_get(v_a_3299_, 1);
v_isSharedCheck_3318_ = !lean_is_exclusive(v_a_3299_);
if (v_isSharedCheck_3318_ == 0)
{
lean_object* v_unused_3319_; 
v_unused_3319_ = lean_ctor_get(v_a_3299_, 0);
lean_dec(v_unused_3319_);
v___x_3306_ = v_a_3299_;
v_isShared_3307_ = v_isSharedCheck_3318_;
goto v_resetjp_3305_;
}
else
{
lean_inc(v_snd_3304_);
lean_dec(v_a_3299_);
v___x_3306_ = lean_box(0);
v_isShared_3307_ = v_isSharedCheck_3318_;
goto v_resetjp_3305_;
}
v_resetjp_3305_:
{
if (lean_obj_tag(v_snd_3304_) == 0)
{
lean_object* v___x_3308_; lean_object* v___x_3309_; 
lean_del_object(v___x_3306_);
v___x_3308_ = lean_obj_once(&l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__1, &l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__1);
v___x_3309_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg(v___x_3308_, v_a_3292_, v_a_3293_, v_a_3294_, v_a_3295_);
return v___x_3309_;
}
else
{
lean_object* v_val_3310_; lean_object* v___x_3311_; lean_object* v___x_3313_; 
v_val_3310_ = lean_ctor_get(v_snd_3304_, 0);
lean_inc(v_val_3310_);
lean_dec_ref_known(v_snd_3304_, 1);
v___x_3311_ = lean_obj_once(&l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__3, &l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__3_once, _init_l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__3);
if (v_isShared_3307_ == 0)
{
lean_ctor_set_tag(v___x_3306_, 7);
lean_ctor_set(v___x_3306_, 1, v_val_3310_);
lean_ctor_set(v___x_3306_, 0, v___x_3311_);
v___x_3313_ = v___x_3306_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v___x_3311_);
lean_ctor_set(v_reuseFailAlloc_3317_, 1, v_val_3310_);
v___x_3313_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; 
v___x_3314_ = lean_obj_once(&l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__5, &l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__5_once, _init_l_Lean_Elab_Tactic_Grind_firstHyp___redArg___closed__5);
v___x_3315_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3315_, 0, v___x_3313_);
lean_ctor_set(v___x_3315_, 1, v___x_3314_);
v___x_3316_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg(v___x_3315_, v_a_3292_, v_a_3293_, v_a_3294_, v_a_3295_);
return v___x_3316_;
}
}
}
}
else
{
lean_object* v_val_3320_; lean_object* v___x_3322_; 
lean_inc_ref(v_fst_3303_);
lean_dec(v_a_3299_);
v_val_3320_ = lean_ctor_get(v_fst_3303_, 0);
lean_inc(v_val_3320_);
lean_dec_ref_known(v_fst_3303_, 1);
if (v_isShared_3302_ == 0)
{
lean_ctor_set(v___x_3301_, 0, v_val_3320_);
v___x_3322_ = v___x_3301_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3323_; 
v_reuseFailAlloc_3323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3323_, 0, v_val_3320_);
v___x_3322_ = v_reuseFailAlloc_3323_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
return v___x_3322_;
}
}
}
}
else
{
lean_object* v_a_3325_; lean_object* v___x_3327_; uint8_t v_isShared_3328_; uint8_t v_isSharedCheck_3332_; 
v_a_3325_ = lean_ctor_get(v___x_3298_, 0);
v_isSharedCheck_3332_ = !lean_is_exclusive(v___x_3298_);
if (v_isSharedCheck_3332_ == 0)
{
v___x_3327_ = v___x_3298_;
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
else
{
lean_inc(v_a_3325_);
lean_dec(v___x_3298_);
v___x_3327_ = lean_box(0);
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
v_resetjp_3326_:
{
lean_object* v___x_3330_; 
if (v_isShared_3328_ == 0)
{
v___x_3330_ = v___x_3327_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v_a_3325_);
v___x_3330_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
return v___x_3330_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_firstHyp___redArg___boxed(lean_object* v_f_3333_, lean_object* v_reverse_3334_, lean_object* v_except_3335_, lean_object* v_a_3336_, lean_object* v_a_3337_, lean_object* v_a_3338_, lean_object* v_a_3339_, lean_object* v_a_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_, lean_object* v_a_3343_, lean_object* v_a_3344_){
_start:
{
uint8_t v_reverse_boxed_3345_; lean_object* v_res_3346_; 
v_reverse_boxed_3345_ = lean_unbox(v_reverse_3334_);
v_res_3346_ = l_Lean_Elab_Tactic_Grind_firstHyp___redArg(v_f_3333_, v_reverse_boxed_3345_, v_except_3335_, v_a_3336_, v_a_3337_, v_a_3338_, v_a_3339_, v_a_3340_, v_a_3341_, v_a_3342_, v_a_3343_);
lean_dec(v_a_3343_);
lean_dec_ref(v_a_3342_);
lean_dec(v_a_3341_);
lean_dec_ref(v_a_3340_);
lean_dec(v_a_3339_);
lean_dec_ref(v_a_3338_);
lean_dec(v_a_3337_);
lean_dec_ref(v_a_3336_);
return v_res_3346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_firstHyp(lean_object* v_00_u03b1_3347_, lean_object* v_f_3348_, uint8_t v_reverse_3349_, lean_object* v_except_3350_, lean_object* v_a_3351_, lean_object* v_a_3352_, lean_object* v_a_3353_, lean_object* v_a_3354_, lean_object* v_a_3355_, lean_object* v_a_3356_, lean_object* v_a_3357_, lean_object* v_a_3358_){
_start:
{
lean_object* v___x_3360_; 
v___x_3360_ = l_Lean_Elab_Tactic_Grind_firstHyp___redArg(v_f_3348_, v_reverse_3349_, v_except_3350_, v_a_3351_, v_a_3352_, v_a_3353_, v_a_3354_, v_a_3355_, v_a_3356_, v_a_3357_, v_a_3358_);
return v___x_3360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_firstHyp___boxed(lean_object* v_00_u03b1_3361_, lean_object* v_f_3362_, lean_object* v_reverse_3363_, lean_object* v_except_3364_, lean_object* v_a_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_, lean_object* v_a_3368_, lean_object* v_a_3369_, lean_object* v_a_3370_, lean_object* v_a_3371_, lean_object* v_a_3372_, lean_object* v_a_3373_){
_start:
{
uint8_t v_reverse_boxed_3374_; lean_object* v_res_3375_; 
v_reverse_boxed_3374_ = lean_unbox(v_reverse_3363_);
v_res_3375_ = l_Lean_Elab_Tactic_Grind_firstHyp(v_00_u03b1_3361_, v_f_3362_, v_reverse_boxed_3374_, v_except_3364_, v_a_3365_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_, v_a_3372_);
lean_dec(v_a_3372_);
lean_dec_ref(v_a_3371_);
lean_dec(v_a_3370_);
lean_dec_ref(v_a_3369_);
lean_dec(v_a_3368_);
lean_dec_ref(v_a_3367_);
lean_dec(v_a_3366_);
lean_dec_ref(v_a_3365_);
return v_res_3375_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply(lean_object* v_stx_3383_, lean_object* v_a_3384_, lean_object* v_a_3385_, lean_object* v_a_3386_, lean_object* v_a_3387_, lean_object* v_a_3388_, lean_object* v_a_3389_, lean_object* v_a_3390_, lean_object* v_a_3391_){
_start:
{
lean_object* v___x_3393_; 
v___x_3393_ = l_Lean_Elab_Tactic_Grind_ensureSym___redArg(v_a_3384_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_);
if (lean_obj_tag(v___x_3393_) == 0)
{
lean_object* v___x_3394_; uint8_t v___x_3395_; 
lean_dec_ref_known(v___x_3393_, 1);
v___x_3394_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__1));
lean_inc(v_stx_3383_);
v___x_3395_ = l_Lean_Syntax_isOfKind(v_stx_3383_, v___x_3394_);
if (v___x_3395_ == 0)
{
lean_object* v___x_3396_; 
lean_dec(v_stx_3383_);
v___x_3396_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg();
return v___x_3396_;
}
else
{
lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3397_ = lean_unsigned_to_nat(1u);
v___x_3398_ = l_Lean_Syntax_getArg(v_stx_3383_, v___x_3397_);
lean_dec(v_stx_3383_);
v___x_3399_ = l_Lean_Elab_Tactic_Grind_getOrCreateBackwardRuleFromTerm(v___x_3398_, v_a_3384_, v_a_3385_, v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_);
if (lean_obj_tag(v___x_3399_) == 0)
{
lean_object* v_a_3400_; lean_object* v___x_3401_; 
v_a_3400_ = lean_ctor_get(v___x_3399_, 0);
lean_inc(v_a_3400_);
lean_dec_ref_known(v___x_3399_, 1);
v___x_3401_ = l_Lean_Elab_Tactic_Grind_applyBackwardRule(v_a_3400_, v_a_3384_, v_a_3385_, v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_);
return v___x_3401_;
}
else
{
lean_object* v_a_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3409_; 
v_a_3402_ = lean_ctor_get(v___x_3399_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v___x_3399_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3404_ = v___x_3399_;
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_a_3402_);
lean_dec(v___x_3399_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v___x_3407_; 
if (v_isShared_3405_ == 0)
{
v___x_3407_ = v___x_3404_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v_a_3402_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
return v___x_3407_;
}
}
}
}
}
else
{
lean_dec(v_stx_3383_);
return v___x_3393_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___boxed(lean_object* v_stx_3410_, lean_object* v_a_3411_, lean_object* v_a_3412_, lean_object* v_a_3413_, lean_object* v_a_3414_, lean_object* v_a_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_, lean_object* v_a_3418_, lean_object* v_a_3419_){
_start:
{
lean_object* v_res_3420_; 
v_res_3420_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply(v_stx_3410_, v_a_3411_, v_a_3412_, v_a_3413_, v_a_3414_, v_a_3415_, v_a_3416_, v_a_3417_, v_a_3418_);
lean_dec(v_a_3418_);
lean_dec_ref(v_a_3417_);
lean_dec(v_a_3416_);
lean_dec_ref(v_a_3415_);
lean_dec(v_a_3414_);
lean_dec_ref(v_a_3413_);
lean_dec(v_a_3412_);
lean_dec_ref(v_a_3411_);
return v_res_3420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply__1(){
_start:
{
lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; 
v___x_3426_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_3427_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___closed__1));
v___x_3428_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply__1___closed__1));
v___x_3429_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___boxed), 10, 0);
v___x_3430_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3426_, v___x_3427_, v___x_3428_, v___x_3429_);
return v___x_3430_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply__1___boxed(lean_object* v_a_3431_){
_start:
{
lean_object* v_res_3432_; 
v_res_3432_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply__1();
return v_res_3432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize(lean_object* v_stx_3433_, lean_object* v_a_3434_, lean_object* v_a_3435_, lean_object* v_a_3436_, lean_object* v_a_3437_, lean_object* v_a_3438_, lean_object* v_a_3439_, lean_object* v_a_3440_, lean_object* v_a_3441_){
_start:
{
lean_object* v___x_3443_; 
v___x_3443_ = l_Lean_Elab_Tactic_Grind_ensureSym___redArg(v_a_3434_, v_a_3438_, v_a_3439_, v_a_3440_, v_a_3441_);
if (lean_obj_tag(v___x_3443_) == 0)
{
lean_object* v___x_3444_; 
lean_dec_ref_known(v___x_3443_, 1);
v___x_3444_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v_a_3434_, v_a_3435_, v_a_3436_, v_a_3437_, v_a_3438_, v_a_3439_, v_a_3440_, v_a_3441_);
if (lean_obj_tag(v___x_3444_) == 0)
{
lean_object* v_a_3445_; lean_object* v___y_3447_; lean_object* v___x_3462_; lean_object* v___x_3463_; uint8_t v___x_3464_; 
v_a_3445_ = lean_ctor_get(v___x_3444_, 0);
lean_inc(v_a_3445_);
lean_dec_ref_known(v___x_3444_, 1);
v___x_3462_ = lean_unsigned_to_nat(1u);
v___x_3463_ = l_Lean_Syntax_getArg(v_stx_3433_, v___x_3462_);
v___x_3464_ = l_Lean_Syntax_isNone(v___x_3463_);
if (v___x_3464_ == 0)
{
lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; 
v___x_3465_ = lean_unsigned_to_nat(0u);
v___x_3466_ = l_Lean_Syntax_getArg(v___x_3463_, v___x_3465_);
lean_dec(v___x_3463_);
v___x_3467_ = l_Lean_Syntax_toNat(v___x_3466_);
lean_dec(v___x_3466_);
v___y_3447_ = v___x_3467_;
goto v___jp_3446_;
}
else
{
lean_dec(v___x_3463_);
v___y_3447_ = v___x_3462_;
goto v___jp_3446_;
}
v___jp_3446_:
{
lean_object* v___x_3448_; lean_object* v___x_3449_; 
v___x_3448_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Goal_internalize___boxed), 12, 2);
lean_closure_set(v___x_3448_, 0, v_a_3445_);
lean_closure_set(v___x_3448_, 1, v___y_3447_);
v___x_3449_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___x_3448_, v_a_3434_, v_a_3435_, v_a_3438_, v_a_3439_, v_a_3440_, v_a_3441_);
if (lean_obj_tag(v___x_3449_) == 0)
{
lean_object* v_a_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; 
v_a_3450_ = lean_ctor_get(v___x_3449_, 0);
lean_inc(v_a_3450_);
lean_dec_ref_known(v___x_3449_, 1);
v___x_3451_ = lean_box(0);
v___x_3452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3452_, 0, v_a_3450_);
lean_ctor_set(v___x_3452_, 1, v___x_3451_);
v___x_3453_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal(v___x_3452_, v_a_3434_, v_a_3435_, v_a_3436_, v_a_3437_, v_a_3438_, v_a_3439_, v_a_3440_, v_a_3441_);
return v___x_3453_;
}
else
{
lean_object* v_a_3454_; lean_object* v___x_3456_; uint8_t v_isShared_3457_; uint8_t v_isSharedCheck_3461_; 
v_a_3454_ = lean_ctor_get(v___x_3449_, 0);
v_isSharedCheck_3461_ = !lean_is_exclusive(v___x_3449_);
if (v_isSharedCheck_3461_ == 0)
{
v___x_3456_ = v___x_3449_;
v_isShared_3457_ = v_isSharedCheck_3461_;
goto v_resetjp_3455_;
}
else
{
lean_inc(v_a_3454_);
lean_dec(v___x_3449_);
v___x_3456_ = lean_box(0);
v_isShared_3457_ = v_isSharedCheck_3461_;
goto v_resetjp_3455_;
}
v_resetjp_3455_:
{
lean_object* v___x_3459_; 
if (v_isShared_3457_ == 0)
{
v___x_3459_ = v___x_3456_;
goto v_reusejp_3458_;
}
else
{
lean_object* v_reuseFailAlloc_3460_; 
v_reuseFailAlloc_3460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3460_, 0, v_a_3454_);
v___x_3459_ = v_reuseFailAlloc_3460_;
goto v_reusejp_3458_;
}
v_reusejp_3458_:
{
return v___x_3459_;
}
}
}
}
}
else
{
lean_object* v_a_3468_; lean_object* v___x_3470_; uint8_t v_isShared_3471_; uint8_t v_isSharedCheck_3475_; 
v_a_3468_ = lean_ctor_get(v___x_3444_, 0);
v_isSharedCheck_3475_ = !lean_is_exclusive(v___x_3444_);
if (v_isSharedCheck_3475_ == 0)
{
v___x_3470_ = v___x_3444_;
v_isShared_3471_ = v_isSharedCheck_3475_;
goto v_resetjp_3469_;
}
else
{
lean_inc(v_a_3468_);
lean_dec(v___x_3444_);
v___x_3470_ = lean_box(0);
v_isShared_3471_ = v_isSharedCheck_3475_;
goto v_resetjp_3469_;
}
v_resetjp_3469_:
{
lean_object* v___x_3473_; 
if (v_isShared_3471_ == 0)
{
v___x_3473_ = v___x_3470_;
goto v_reusejp_3472_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v_a_3468_);
v___x_3473_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3472_;
}
v_reusejp_3472_:
{
return v___x_3473_;
}
}
}
}
else
{
return v___x_3443_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___boxed(lean_object* v_stx_3476_, lean_object* v_a_3477_, lean_object* v_a_3478_, lean_object* v_a_3479_, lean_object* v_a_3480_, lean_object* v_a_3481_, lean_object* v_a_3482_, lean_object* v_a_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_){
_start:
{
lean_object* v_res_3486_; 
v_res_3486_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize(v_stx_3476_, v_a_3477_, v_a_3478_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_, v_a_3483_, v_a_3484_);
lean_dec(v_a_3484_);
lean_dec_ref(v_a_3483_);
lean_dec(v_a_3482_);
lean_dec_ref(v_a_3481_);
lean_dec(v_a_3480_);
lean_dec_ref(v_a_3479_);
lean_dec(v_a_3478_);
lean_dec_ref(v_a_3477_);
lean_dec(v_stx_3476_);
return v_res_3486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1(){
_start:
{
lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3499_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_3500_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__1));
v___x_3501_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___closed__3));
v___x_3502_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___boxed), 10, 0);
v___x_3503_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3499_, v___x_3500_, v___x_3501_, v___x_3502_);
return v___x_3503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1___boxed(lean_object* v_a_3504_){
_start:
{
lean_object* v_res_3505_; 
v_res_3505_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1();
return v_res_3505_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___redArg(lean_object* v_a_3506_, lean_object* v_a_3507_, lean_object* v_a_3508_, lean_object* v_a_3509_, lean_object* v_a_3510_, lean_object* v_a_3511_, lean_object* v_a_3512_, lean_object* v_a_3513_){
_start:
{
lean_object* v___x_3515_; 
v___x_3515_ = l_Lean_Elab_Tactic_Grind_ensureSym___redArg(v_a_3506_, v_a_3510_, v_a_3511_, v_a_3512_, v_a_3513_);
if (lean_obj_tag(v___x_3515_) == 0)
{
lean_object* v___x_3516_; 
lean_dec_ref_known(v___x_3515_, 1);
v___x_3516_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v_a_3506_, v_a_3507_, v_a_3508_, v_a_3509_, v_a_3510_, v_a_3511_, v_a_3512_, v_a_3513_);
if (lean_obj_tag(v___x_3516_) == 0)
{
lean_object* v_a_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; 
v_a_3517_ = lean_ctor_get(v___x_3516_, 0);
lean_inc(v_a_3517_);
lean_dec_ref_known(v___x_3516_, 1);
v___x_3518_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Goal_internalizeAll___boxed), 11, 1);
lean_closure_set(v___x_3518_, 0, v_a_3517_);
v___x_3519_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___x_3518_, v_a_3506_, v_a_3507_, v_a_3510_, v_a_3511_, v_a_3512_, v_a_3513_);
if (lean_obj_tag(v___x_3519_) == 0)
{
lean_object* v_a_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; 
v_a_3520_ = lean_ctor_get(v___x_3519_, 0);
lean_inc(v_a_3520_);
lean_dec_ref_known(v___x_3519_, 1);
v___x_3521_ = lean_box(0);
v___x_3522_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3522_, 0, v_a_3520_);
lean_ctor_set(v___x_3522_, 1, v___x_3521_);
v___x_3523_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal(v___x_3522_, v_a_3506_, v_a_3507_, v_a_3508_, v_a_3509_, v_a_3510_, v_a_3511_, v_a_3512_, v_a_3513_);
return v___x_3523_;
}
else
{
lean_object* v_a_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3531_; 
v_a_3524_ = lean_ctor_get(v___x_3519_, 0);
v_isSharedCheck_3531_ = !lean_is_exclusive(v___x_3519_);
if (v_isSharedCheck_3531_ == 0)
{
v___x_3526_ = v___x_3519_;
v_isShared_3527_ = v_isSharedCheck_3531_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_a_3524_);
lean_dec(v___x_3519_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3531_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
lean_object* v___x_3529_; 
if (v_isShared_3527_ == 0)
{
v___x_3529_ = v___x_3526_;
goto v_reusejp_3528_;
}
else
{
lean_object* v_reuseFailAlloc_3530_; 
v_reuseFailAlloc_3530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3530_, 0, v_a_3524_);
v___x_3529_ = v_reuseFailAlloc_3530_;
goto v_reusejp_3528_;
}
v_reusejp_3528_:
{
return v___x_3529_;
}
}
}
}
else
{
lean_object* v_a_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3539_; 
v_a_3532_ = lean_ctor_get(v___x_3516_, 0);
v_isSharedCheck_3539_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3534_ = v___x_3516_;
v_isShared_3535_ = v_isSharedCheck_3539_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_a_3532_);
lean_dec(v___x_3516_);
v___x_3534_ = lean_box(0);
v_isShared_3535_ = v_isSharedCheck_3539_;
goto v_resetjp_3533_;
}
v_resetjp_3533_:
{
lean_object* v___x_3537_; 
if (v_isShared_3535_ == 0)
{
v___x_3537_ = v___x_3534_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v_a_3532_);
v___x_3537_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
return v___x_3537_;
}
}
}
}
else
{
return v___x_3515_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___redArg___boxed(lean_object* v_a_3540_, lean_object* v_a_3541_, lean_object* v_a_3542_, lean_object* v_a_3543_, lean_object* v_a_3544_, lean_object* v_a_3545_, lean_object* v_a_3546_, lean_object* v_a_3547_, lean_object* v_a_3548_){
_start:
{
lean_object* v_res_3549_; 
v_res_3549_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___redArg(v_a_3540_, v_a_3541_, v_a_3542_, v_a_3543_, v_a_3544_, v_a_3545_, v_a_3546_, v_a_3547_);
lean_dec(v_a_3547_);
lean_dec_ref(v_a_3546_);
lean_dec(v_a_3545_);
lean_dec_ref(v_a_3544_);
lean_dec(v_a_3543_);
lean_dec_ref(v_a_3542_);
lean_dec(v_a_3541_);
lean_dec_ref(v_a_3540_);
return v_res_3549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll(lean_object* v_x_3550_, lean_object* v_a_3551_, lean_object* v_a_3552_, lean_object* v_a_3553_, lean_object* v_a_3554_, lean_object* v_a_3555_, lean_object* v_a_3556_, lean_object* v_a_3557_, lean_object* v_a_3558_){
_start:
{
lean_object* v___x_3560_; 
v___x_3560_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___redArg(v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_, v_a_3555_, v_a_3556_, v_a_3557_, v_a_3558_);
return v___x_3560_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___boxed(lean_object* v_x_3561_, lean_object* v_a_3562_, lean_object* v_a_3563_, lean_object* v_a_3564_, lean_object* v_a_3565_, lean_object* v_a_3566_, lean_object* v_a_3567_, lean_object* v_a_3568_, lean_object* v_a_3569_, lean_object* v_a_3570_){
_start:
{
lean_object* v_res_3571_; 
v_res_3571_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll(v_x_3561_, v_a_3562_, v_a_3563_, v_a_3564_, v_a_3565_, v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_);
lean_dec(v_a_3569_);
lean_dec_ref(v_a_3568_);
lean_dec(v_a_3567_);
lean_dec_ref(v_a_3566_);
lean_dec(v_a_3565_);
lean_dec_ref(v_a_3564_);
lean_dec(v_a_3563_);
lean_dec_ref(v_a_3562_);
lean_dec(v_x_3561_);
return v_res_3571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1(){
_start:
{
lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
v___x_3584_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_3585_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__1));
v___x_3586_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___closed__3));
v___x_3587_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___boxed), 10, 0);
v___x_3588_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3584_, v___x_3585_, v___x_3586_, v___x_3587_);
return v___x_3588_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1___boxed(lean_object* v_a_3589_){
_start:
{
lean_object* v_res_3590_; 
v_res_3590_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1();
return v_res_3590_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__1(void){
_start:
{
lean_object* v___x_3592_; lean_object* v___x_3593_; 
v___x_3592_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__0));
v___x_3593_ = l_Lean_stringToMessageData(v___x_3592_);
return v___x_3593_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__3(void){
_start:
{
lean_object* v___x_3595_; lean_object* v___x_3596_; 
v___x_3595_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__2));
v___x_3596_ = l_Lean_stringToMessageData(v___x_3595_);
return v___x_3596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg(lean_object* v_a_3597_, lean_object* v_a_3598_, lean_object* v_a_3599_, lean_object* v_a_3600_, lean_object* v_a_3601_, lean_object* v_a_3602_, lean_object* v_a_3603_, lean_object* v_a_3604_){
_start:
{
lean_object* v___x_3606_; 
v___x_3606_ = l_Lean_Elab_Tactic_Grind_ensureSym___redArg(v_a_3597_, v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v___x_3607_; 
lean_dec_ref_known(v___x_3606_, 1);
v___x_3607_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_);
if (lean_obj_tag(v___x_3607_) == 0)
{
lean_object* v_a_3608_; lean_object* v_toGoalState_3609_; lean_object* v_mvarId_3610_; lean_object* v___x_3612_; uint8_t v_isShared_3613_; uint8_t v_isSharedCheck_3716_; 
v_a_3608_ = lean_ctor_get(v___x_3607_, 0);
lean_inc(v_a_3608_);
lean_dec_ref_known(v___x_3607_, 1);
v_toGoalState_3609_ = lean_ctor_get(v_a_3608_, 0);
v_mvarId_3610_ = lean_ctor_get(v_a_3608_, 1);
v_isSharedCheck_3716_ = !lean_is_exclusive(v_a_3608_);
if (v_isSharedCheck_3716_ == 0)
{
v___x_3612_ = v_a_3608_;
v_isShared_3613_ = v_isSharedCheck_3716_;
goto v_resetjp_3611_;
}
else
{
lean_inc(v_mvarId_3610_);
lean_inc(v_toGoalState_3609_);
lean_dec(v_a_3608_);
v___x_3612_ = lean_box(0);
v_isShared_3613_ = v_isSharedCheck_3716_;
goto v_resetjp_3611_;
}
v_resetjp_3611_:
{
lean_object* v_mvarId_3615_; lean_object* v___y_3616_; lean_object* v___y_3617_; lean_object* v___y_3618_; lean_object* v___y_3619_; lean_object* v___y_3620_; lean_object* v___y_3621_; lean_object* v___y_3622_; lean_object* v___y_3623_; lean_object* v___x_3673_; 
lean_inc(v_mvarId_3610_);
v___x_3673_ = l_Lean_MVarId_getType(v_mvarId_3610_, v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_object* v_a_3674_; lean_object* v___y_3676_; lean_object* v___y_3677_; lean_object* v___y_3678_; lean_object* v___y_3679_; lean_object* v___y_3680_; lean_object* v___y_3681_; lean_object* v___y_3682_; lean_object* v___y_3683_; uint8_t v___x_3705_; 
v_a_3674_ = lean_ctor_get(v___x_3673_, 0);
lean_inc(v_a_3674_);
lean_dec_ref_known(v___x_3673_, 1);
v___x_3705_ = l_Lean_Expr_isFalse(v_a_3674_);
if (v___x_3705_ == 0)
{
v___y_3676_ = v_a_3597_;
v___y_3677_ = v_a_3598_;
v___y_3678_ = v_a_3599_;
v___y_3679_ = v_a_3600_;
v___y_3680_ = v_a_3601_;
v___y_3681_ = v_a_3602_;
v___y_3682_ = v_a_3603_;
v___y_3683_ = v_a_3604_;
goto v___jp_3675_;
}
else
{
lean_object* v___x_3706_; lean_object* v___x_3707_; 
lean_dec(v_a_3674_);
lean_del_object(v___x_3612_);
lean_dec(v_mvarId_3610_);
lean_dec_ref(v_toGoalState_3609_);
v___x_3706_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__3, &l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__3);
v___x_3707_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg(v___x_3706_, v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_);
return v___x_3707_;
}
v___jp_3675_:
{
lean_object* v___x_3684_; 
v___x_3684_ = l_Lean_Meta_isProp(v_a_3674_, v___y_3680_, v___y_3681_, v___y_3682_, v___y_3683_);
if (lean_obj_tag(v___x_3684_) == 0)
{
lean_object* v_a_3685_; uint8_t v___x_3686_; 
v_a_3685_ = lean_ctor_get(v___x_3684_, 0);
lean_inc(v_a_3685_);
lean_dec_ref_known(v___x_3684_, 1);
v___x_3686_ = lean_unbox(v_a_3685_);
lean_dec(v_a_3685_);
if (v___x_3686_ == 0)
{
lean_object* v___x_3687_; 
v___x_3687_ = l_Lean_MVarId_exfalso(v_mvarId_3610_, v___y_3680_, v___y_3681_, v___y_3682_, v___y_3683_);
if (lean_obj_tag(v___x_3687_) == 0)
{
lean_object* v_a_3688_; 
v_a_3688_ = lean_ctor_get(v___x_3687_, 0);
lean_inc(v_a_3688_);
lean_dec_ref_known(v___x_3687_, 1);
v_mvarId_3615_ = v_a_3688_;
v___y_3616_ = v___y_3676_;
v___y_3617_ = v___y_3677_;
v___y_3618_ = v___y_3678_;
v___y_3619_ = v___y_3679_;
v___y_3620_ = v___y_3680_;
v___y_3621_ = v___y_3681_;
v___y_3622_ = v___y_3682_;
v___y_3623_ = v___y_3683_;
goto v___jp_3614_;
}
else
{
lean_object* v_a_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3696_; 
lean_del_object(v___x_3612_);
lean_dec_ref(v_toGoalState_3609_);
v_a_3689_ = lean_ctor_get(v___x_3687_, 0);
v_isSharedCheck_3696_ = !lean_is_exclusive(v___x_3687_);
if (v_isSharedCheck_3696_ == 0)
{
v___x_3691_ = v___x_3687_;
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
else
{
lean_inc(v_a_3689_);
lean_dec(v___x_3687_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3696_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v___x_3694_; 
if (v_isShared_3692_ == 0)
{
v___x_3694_ = v___x_3691_;
goto v_reusejp_3693_;
}
else
{
lean_object* v_reuseFailAlloc_3695_; 
v_reuseFailAlloc_3695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3695_, 0, v_a_3689_);
v___x_3694_ = v_reuseFailAlloc_3695_;
goto v_reusejp_3693_;
}
v_reusejp_3693_:
{
return v___x_3694_;
}
}
}
}
else
{
v_mvarId_3615_ = v_mvarId_3610_;
v___y_3616_ = v___y_3676_;
v___y_3617_ = v___y_3677_;
v___y_3618_ = v___y_3678_;
v___y_3619_ = v___y_3679_;
v___y_3620_ = v___y_3680_;
v___y_3621_ = v___y_3681_;
v___y_3622_ = v___y_3682_;
v___y_3623_ = v___y_3683_;
goto v___jp_3614_;
}
}
else
{
lean_object* v_a_3697_; lean_object* v___x_3699_; uint8_t v_isShared_3700_; uint8_t v_isSharedCheck_3704_; 
lean_del_object(v___x_3612_);
lean_dec(v_mvarId_3610_);
lean_dec_ref(v_toGoalState_3609_);
v_a_3697_ = lean_ctor_get(v___x_3684_, 0);
v_isSharedCheck_3704_ = !lean_is_exclusive(v___x_3684_);
if (v_isSharedCheck_3704_ == 0)
{
v___x_3699_ = v___x_3684_;
v_isShared_3700_ = v_isSharedCheck_3704_;
goto v_resetjp_3698_;
}
else
{
lean_inc(v_a_3697_);
lean_dec(v___x_3684_);
v___x_3699_ = lean_box(0);
v_isShared_3700_ = v_isSharedCheck_3704_;
goto v_resetjp_3698_;
}
v_resetjp_3698_:
{
lean_object* v___x_3702_; 
if (v_isShared_3700_ == 0)
{
v___x_3702_ = v___x_3699_;
goto v_reusejp_3701_;
}
else
{
lean_object* v_reuseFailAlloc_3703_; 
v_reuseFailAlloc_3703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3703_, 0, v_a_3697_);
v___x_3702_ = v_reuseFailAlloc_3703_;
goto v_reusejp_3701_;
}
v_reusejp_3701_:
{
return v___x_3702_;
}
}
}
}
}
else
{
lean_object* v_a_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3715_; 
lean_del_object(v___x_3612_);
lean_dec(v_mvarId_3610_);
lean_dec_ref(v_toGoalState_3609_);
v_a_3708_ = lean_ctor_get(v___x_3673_, 0);
v_isSharedCheck_3715_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3715_ == 0)
{
v___x_3710_ = v___x_3673_;
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_a_3708_);
lean_dec(v___x_3673_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v___x_3713_; 
if (v_isShared_3711_ == 0)
{
v___x_3713_ = v___x_3710_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3714_; 
v_reuseFailAlloc_3714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3714_, 0, v_a_3708_);
v___x_3713_ = v_reuseFailAlloc_3714_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
return v___x_3713_;
}
}
}
v___jp_3614_:
{
lean_object* v___x_3624_; 
v___x_3624_ = l_Lean_MVarId_byContra_x3f(v_mvarId_3615_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_);
if (lean_obj_tag(v___x_3624_) == 0)
{
lean_object* v_a_3625_; 
v_a_3625_ = lean_ctor_get(v___x_3624_, 0);
lean_inc(v_a_3625_);
lean_dec_ref_known(v___x_3624_, 1);
if (lean_obj_tag(v_a_3625_) == 1)
{
lean_object* v_val_3626_; uint8_t v___x_3627_; lean_object* v___x_3628_; 
v_val_3626_ = lean_ctor_get(v_a_3625_, 0);
lean_inc(v_val_3626_);
lean_dec_ref_known(v_a_3625_, 1);
v___x_3627_ = 0;
v___x_3628_ = l_Lean_Meta_intro1Core(v_val_3626_, v___x_3627_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_);
if (lean_obj_tag(v___x_3628_) == 0)
{
lean_object* v_a_3629_; lean_object* v_snd_3630_; lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3653_; 
v_a_3629_ = lean_ctor_get(v___x_3628_, 0);
lean_inc(v_a_3629_);
lean_dec_ref_known(v___x_3628_, 1);
v_snd_3630_ = lean_ctor_get(v_a_3629_, 1);
v_isSharedCheck_3653_ = !lean_is_exclusive(v_a_3629_);
if (v_isSharedCheck_3653_ == 0)
{
lean_object* v_unused_3654_; 
v_unused_3654_ = lean_ctor_get(v_a_3629_, 0);
lean_dec(v_unused_3654_);
v___x_3632_ = v_a_3629_;
v_isShared_3633_ = v_isSharedCheck_3653_;
goto v_resetjp_3631_;
}
else
{
lean_inc(v_snd_3630_);
lean_dec(v_a_3629_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3653_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___x_3635_; 
if (v_isShared_3613_ == 0)
{
lean_ctor_set(v___x_3612_, 1, v_snd_3630_);
v___x_3635_ = v___x_3612_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v_toGoalState_3609_);
lean_ctor_set(v_reuseFailAlloc_3652_, 1, v_snd_3630_);
v___x_3635_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3634_;
}
v_reusejp_3634_:
{
lean_object* v___x_3636_; lean_object* v___x_3637_; 
v___x_3636_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Goal_internalizeAll___boxed), 11, 1);
lean_closure_set(v___x_3636_, 0, v___x_3635_);
v___x_3637_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___x_3636_, v___y_3616_, v___y_3617_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_);
if (lean_obj_tag(v___x_3637_) == 0)
{
lean_object* v_a_3638_; lean_object* v___x_3639_; lean_object* v___x_3641_; 
v_a_3638_ = lean_ctor_get(v___x_3637_, 0);
lean_inc(v_a_3638_);
lean_dec_ref_known(v___x_3637_, 1);
v___x_3639_ = lean_box(0);
if (v_isShared_3633_ == 0)
{
lean_ctor_set_tag(v___x_3632_, 1);
lean_ctor_set(v___x_3632_, 1, v___x_3639_);
lean_ctor_set(v___x_3632_, 0, v_a_3638_);
v___x_3641_ = v___x_3632_;
goto v_reusejp_3640_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_a_3638_);
lean_ctor_set(v_reuseFailAlloc_3643_, 1, v___x_3639_);
v___x_3641_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3640_;
}
v_reusejp_3640_:
{
lean_object* v___x_3642_; 
v___x_3642_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal(v___x_3641_, v___y_3616_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_);
return v___x_3642_;
}
}
else
{
lean_object* v_a_3644_; lean_object* v___x_3646_; uint8_t v_isShared_3647_; uint8_t v_isSharedCheck_3651_; 
lean_del_object(v___x_3632_);
v_a_3644_ = lean_ctor_get(v___x_3637_, 0);
v_isSharedCheck_3651_ = !lean_is_exclusive(v___x_3637_);
if (v_isSharedCheck_3651_ == 0)
{
v___x_3646_ = v___x_3637_;
v_isShared_3647_ = v_isSharedCheck_3651_;
goto v_resetjp_3645_;
}
else
{
lean_inc(v_a_3644_);
lean_dec(v___x_3637_);
v___x_3646_ = lean_box(0);
v_isShared_3647_ = v_isSharedCheck_3651_;
goto v_resetjp_3645_;
}
v_resetjp_3645_:
{
lean_object* v___x_3649_; 
if (v_isShared_3647_ == 0)
{
v___x_3649_ = v___x_3646_;
goto v_reusejp_3648_;
}
else
{
lean_object* v_reuseFailAlloc_3650_; 
v_reuseFailAlloc_3650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3650_, 0, v_a_3644_);
v___x_3649_ = v_reuseFailAlloc_3650_;
goto v_reusejp_3648_;
}
v_reusejp_3648_:
{
return v___x_3649_;
}
}
}
}
}
}
else
{
lean_object* v_a_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3662_; 
lean_del_object(v___x_3612_);
lean_dec_ref(v_toGoalState_3609_);
v_a_3655_ = lean_ctor_get(v___x_3628_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v___x_3628_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3657_ = v___x_3628_;
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_a_3655_);
lean_dec(v___x_3628_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3660_; 
if (v_isShared_3658_ == 0)
{
v___x_3660_ = v___x_3657_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v_a_3655_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
}
}
else
{
lean_object* v___x_3663_; lean_object* v___x_3664_; 
lean_dec(v_a_3625_);
lean_del_object(v___x_3612_);
lean_dec_ref(v_toGoalState_3609_);
v___x_3663_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__1, &l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___closed__1);
v___x_3664_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg(v___x_3663_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_);
return v___x_3664_;
}
}
else
{
lean_object* v_a_3665_; lean_object* v___x_3667_; uint8_t v_isShared_3668_; uint8_t v_isSharedCheck_3672_; 
lean_del_object(v___x_3612_);
lean_dec_ref(v_toGoalState_3609_);
v_a_3665_ = lean_ctor_get(v___x_3624_, 0);
v_isSharedCheck_3672_ = !lean_is_exclusive(v___x_3624_);
if (v_isSharedCheck_3672_ == 0)
{
v___x_3667_ = v___x_3624_;
v_isShared_3668_ = v_isSharedCheck_3672_;
goto v_resetjp_3666_;
}
else
{
lean_inc(v_a_3665_);
lean_dec(v___x_3624_);
v___x_3667_ = lean_box(0);
v_isShared_3668_ = v_isSharedCheck_3672_;
goto v_resetjp_3666_;
}
v_resetjp_3666_:
{
lean_object* v___x_3670_; 
if (v_isShared_3668_ == 0)
{
v___x_3670_ = v___x_3667_;
goto v_reusejp_3669_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v_a_3665_);
v___x_3670_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3669_;
}
v_reusejp_3669_:
{
return v___x_3670_;
}
}
}
}
}
}
else
{
lean_object* v_a_3717_; lean_object* v___x_3719_; uint8_t v_isShared_3720_; uint8_t v_isSharedCheck_3724_; 
v_a_3717_ = lean_ctor_get(v___x_3607_, 0);
v_isSharedCheck_3724_ = !lean_is_exclusive(v___x_3607_);
if (v_isSharedCheck_3724_ == 0)
{
v___x_3719_ = v___x_3607_;
v_isShared_3720_ = v_isSharedCheck_3724_;
goto v_resetjp_3718_;
}
else
{
lean_inc(v_a_3717_);
lean_dec(v___x_3607_);
v___x_3719_ = lean_box(0);
v_isShared_3720_ = v_isSharedCheck_3724_;
goto v_resetjp_3718_;
}
v_resetjp_3718_:
{
lean_object* v___x_3722_; 
if (v_isShared_3720_ == 0)
{
v___x_3722_ = v___x_3719_;
goto v_reusejp_3721_;
}
else
{
lean_object* v_reuseFailAlloc_3723_; 
v_reuseFailAlloc_3723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3723_, 0, v_a_3717_);
v___x_3722_ = v_reuseFailAlloc_3723_;
goto v_reusejp_3721_;
}
v_reusejp_3721_:
{
return v___x_3722_;
}
}
}
}
else
{
return v___x_3606_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg___boxed(lean_object* v_a_3725_, lean_object* v_a_3726_, lean_object* v_a_3727_, lean_object* v_a_3728_, lean_object* v_a_3729_, lean_object* v_a_3730_, lean_object* v_a_3731_, lean_object* v_a_3732_, lean_object* v_a_3733_){
_start:
{
lean_object* v_res_3734_; 
v_res_3734_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg(v_a_3725_, v_a_3726_, v_a_3727_, v_a_3728_, v_a_3729_, v_a_3730_, v_a_3731_, v_a_3732_);
lean_dec(v_a_3732_);
lean_dec_ref(v_a_3731_);
lean_dec(v_a_3730_);
lean_dec_ref(v_a_3729_);
lean_dec(v_a_3728_);
lean_dec_ref(v_a_3727_);
lean_dec(v_a_3726_);
lean_dec_ref(v_a_3725_);
return v_res_3734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra(lean_object* v_x_3735_, lean_object* v_a_3736_, lean_object* v_a_3737_, lean_object* v_a_3738_, lean_object* v_a_3739_, lean_object* v_a_3740_, lean_object* v_a_3741_, lean_object* v_a_3742_, lean_object* v_a_3743_){
_start:
{
lean_object* v___x_3745_; 
v___x_3745_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___redArg(v_a_3736_, v_a_3737_, v_a_3738_, v_a_3739_, v_a_3740_, v_a_3741_, v_a_3742_, v_a_3743_);
return v___x_3745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___boxed(lean_object* v_x_3746_, lean_object* v_a_3747_, lean_object* v_a_3748_, lean_object* v_a_3749_, lean_object* v_a_3750_, lean_object* v_a_3751_, lean_object* v_a_3752_, lean_object* v_a_3753_, lean_object* v_a_3754_, lean_object* v_a_3755_){
_start:
{
lean_object* v_res_3756_; 
v_res_3756_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra(v_x_3746_, v_a_3747_, v_a_3748_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_, v_a_3753_, v_a_3754_);
lean_dec(v_a_3754_);
lean_dec_ref(v_a_3753_);
lean_dec(v_a_3752_);
lean_dec_ref(v_a_3751_);
lean_dec(v_a_3750_);
lean_dec_ref(v_a_3749_);
lean_dec(v_a_3748_);
lean_dec_ref(v_a_3747_);
lean_dec(v_x_3746_);
return v_res_3756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1(){
_start:
{
lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; 
v___x_3769_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_3770_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__1));
v___x_3771_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___closed__3));
v___x_3772_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___boxed), 10, 0);
v___x_3773_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3769_, v___x_3770_, v___x_3771_, v___x_3772_);
return v___x_3773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1___boxed(lean_object* v_a_3774_){
_start:
{
lean_object* v_res_3775_; 
v_res_3775_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1();
return v_res_3775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_trivialSimproc___redArg(){
_start:
{
lean_object* v___x_3779_; lean_object* v___x_3780_; 
v___x_3779_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_trivialSimproc___redArg___closed__0));
v___x_3780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3780_, 0, v___x_3779_);
return v___x_3780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_trivialSimproc___redArg___boxed(lean_object* v_a_3781_){
_start:
{
lean_object* v_res_3782_; 
v_res_3782_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_trivialSimproc___redArg();
return v_res_3782_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_trivialSimproc(lean_object* v_x_3783_, lean_object* v_a_3784_, lean_object* v_a_3785_, lean_object* v_a_3786_, lean_object* v_a_3787_, lean_object* v_a_3788_, lean_object* v_a_3789_, lean_object* v_a_3790_, lean_object* v_a_3791_, lean_object* v_a_3792_){
_start:
{
lean_object* v___x_3794_; 
v___x_3794_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_trivialSimproc___redArg();
return v___x_3794_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_trivialSimproc___boxed(lean_object* v_x_3795_, lean_object* v_a_3796_, lean_object* v_a_3797_, lean_object* v_a_3798_, lean_object* v_a_3799_, lean_object* v_a_3800_, lean_object* v_a_3801_, lean_object* v_a_3802_, lean_object* v_a_3803_, lean_object* v_a_3804_, lean_object* v_a_3805_){
_start:
{
lean_object* v_res_3806_; 
v_res_3806_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_trivialSimproc(v_x_3795_, v_a_3796_, v_a_3797_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_, v_a_3802_, v_a_3803_, v_a_3804_);
lean_dec(v_a_3804_);
lean_dec_ref(v_a_3803_);
lean_dec(v_a_3802_);
lean_dec_ref(v_a_3801_);
lean_dec(v_a_3800_);
lean_dec_ref(v_a_3799_);
lean_dec(v_a_3798_);
lean_dec_ref(v_a_3797_);
lean_dec(v_a_3796_);
lean_dec_ref(v_x_3795_);
return v_res_3806_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptSimproc(lean_object* v_stx_x3f_3807_, lean_object* v_a_3808_, lean_object* v_a_3809_, lean_object* v_a_3810_, lean_object* v_a_3811_, lean_object* v_a_3812_, lean_object* v_a_3813_, lean_object* v_a_3814_, lean_object* v_a_3815_){
_start:
{
if (lean_obj_tag(v_stx_x3f_3807_) == 1)
{
lean_object* v_val_3817_; lean_object* v___x_3818_; 
v_val_3817_ = lean_ctor_get(v_stx_x3f_3807_, 0);
lean_inc(v_val_3817_);
lean_dec_ref_known(v_stx_x3f_3807_, 1);
v___x_3818_ = l_Lean_Elab_Tactic_Grind_elabSymSimproc(v_val_3817_, v_a_3808_, v_a_3809_, v_a_3810_, v_a_3811_, v_a_3812_, v_a_3813_, v_a_3814_, v_a_3815_);
return v___x_3818_;
}
else
{
lean_object* v___x_3819_; lean_object* v___x_3820_; 
lean_dec(v_stx_x3f_3807_);
v___x_3819_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_trivialSimproc___boxed), 11, 0);
v___x_3820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3820_, 0, v___x_3819_);
return v___x_3820_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptSimproc___boxed(lean_object* v_stx_x3f_3821_, lean_object* v_a_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_, lean_object* v_a_3825_, lean_object* v_a_3826_, lean_object* v_a_3827_, lean_object* v_a_3828_, lean_object* v_a_3829_, lean_object* v_a_3830_){
_start:
{
lean_object* v_res_3831_; 
v_res_3831_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptSimproc(v_stx_x3f_3821_, v_a_3822_, v_a_3823_, v_a_3824_, v_a_3825_, v_a_3826_, v_a_3827_, v_a_3828_, v_a_3829_);
lean_dec(v_a_3829_);
lean_dec_ref(v_a_3828_);
lean_dec(v_a_3827_);
lean_dec_ref(v_a_3826_);
lean_dec(v_a_3825_);
lean_dec_ref(v_a_3824_);
lean_dec(v_a_3823_);
lean_dec_ref(v_a_3822_);
return v_res_3831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptDischarger(lean_object* v_stx_x3f_3833_, lean_object* v_a_3834_, lean_object* v_a_3835_, lean_object* v_a_3836_, lean_object* v_a_3837_, lean_object* v_a_3838_, lean_object* v_a_3839_, lean_object* v_a_3840_, lean_object* v_a_3841_){
_start:
{
if (lean_obj_tag(v_stx_x3f_3833_) == 1)
{
lean_object* v_val_3843_; lean_object* v___x_3844_; 
v_val_3843_ = lean_ctor_get(v_stx_x3f_3833_, 0);
lean_inc(v_val_3843_);
lean_dec_ref_known(v_stx_x3f_3833_, 1);
v___x_3844_ = l_Lean_Elab_Tactic_Grind_elabSymDischarger(v_val_3843_, v_a_3834_, v_a_3835_, v_a_3836_, v_a_3837_, v_a_3838_, v_a_3839_, v_a_3840_, v_a_3841_);
return v___x_3844_;
}
else
{
lean_object* v___x_3845_; lean_object* v___x_3846_; 
lean_dec(v_stx_x3f_3833_);
v___x_3845_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptDischarger___closed__0));
v___x_3846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3846_, 0, v___x_3845_);
return v___x_3846_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptDischarger___boxed(lean_object* v_stx_x3f_3847_, lean_object* v_a_3848_, lean_object* v_a_3849_, lean_object* v_a_3850_, lean_object* v_a_3851_, lean_object* v_a_3852_, lean_object* v_a_3853_, lean_object* v_a_3854_, lean_object* v_a_3855_, lean_object* v_a_3856_){
_start:
{
lean_object* v_res_3857_; 
v_res_3857_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptDischarger(v_stx_x3f_3847_, v_a_3848_, v_a_3849_, v_a_3850_, v_a_3851_, v_a_3852_, v_a_3853_, v_a_3854_, v_a_3855_);
lean_dec(v_a_3855_);
lean_dec_ref(v_a_3854_);
lean_dec(v_a_3853_);
lean_dec_ref(v_a_3852_);
lean_dec(v_a_3851_);
lean_dec_ref(v_a_3850_);
lean_dec(v_a_3849_);
lean_dec_ref(v_a_3848_);
return v_res_3857_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems_spec__0___redArg(lean_object* v___x_3858_, lean_object* v_as_3859_, size_t v_sz_3860_, size_t v_i_3861_, lean_object* v_b_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_){
_start:
{
lean_object* v_a_3869_; uint8_t v___x_3873_; 
v___x_3873_ = lean_usize_dec_lt(v_i_3861_, v_sz_3860_);
if (v___x_3873_ == 0)
{
lean_object* v___x_3874_; 
v___x_3874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3874_, 0, v_b_3862_);
return v___x_3874_;
}
else
{
lean_object* v_fst_3875_; lean_object* v_snd_3876_; lean_object* v___x_3878_; uint8_t v_isShared_3879_; uint8_t v_isSharedCheck_3934_; 
v_fst_3875_ = lean_ctor_get(v_b_3862_, 0);
v_snd_3876_ = lean_ctor_get(v_b_3862_, 1);
v_isSharedCheck_3934_ = !lean_is_exclusive(v_b_3862_);
if (v_isSharedCheck_3934_ == 0)
{
v___x_3878_ = v_b_3862_;
v_isShared_3879_ = v_isSharedCheck_3934_;
goto v_resetjp_3877_;
}
else
{
lean_inc(v_snd_3876_);
lean_inc(v_fst_3875_);
lean_dec(v_b_3862_);
v___x_3878_ = lean_box(0);
v_isShared_3879_ = v_isSharedCheck_3934_;
goto v_resetjp_3877_;
}
v_resetjp_3877_:
{
lean_object* v_a_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; 
v_a_3880_ = lean_array_uget_borrowed(v_as_3859_, v_i_3861_);
v___x_3881_ = l_Lean_TSyntax_getId(v_a_3880_);
v___x_3882_ = l_Lean_LocalContext_findFromUserName_x3f(v___x_3858_, v___x_3881_);
lean_dec(v___x_3881_);
if (lean_obj_tag(v___x_3882_) == 1)
{
lean_object* v_val_3883_; lean_object* v___x_3885_; uint8_t v_isShared_3886_; uint8_t v_isSharedCheck_3907_; 
v_val_3883_ = lean_ctor_get(v___x_3882_, 0);
v_isSharedCheck_3907_ = !lean_is_exclusive(v___x_3882_);
if (v_isSharedCheck_3907_ == 0)
{
v___x_3885_ = v___x_3882_;
v_isShared_3886_ = v_isSharedCheck_3907_;
goto v_resetjp_3884_;
}
else
{
lean_inc(v_val_3883_);
lean_dec(v___x_3882_);
v___x_3885_ = lean_box(0);
v_isShared_3886_ = v_isSharedCheck_3907_;
goto v_resetjp_3884_;
}
v_resetjp_3884_:
{
lean_object* v___x_3887_; lean_object* v___x_3889_; 
v___x_3887_ = l_Lean_LocalDecl_fvarId(v_val_3883_);
if (v_isShared_3886_ == 0)
{
lean_ctor_set(v___x_3885_, 0, v___x_3887_);
v___x_3889_ = v___x_3885_;
goto v_reusejp_3888_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v___x_3887_);
v___x_3889_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3888_;
}
v_reusejp_3888_:
{
lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; 
v___x_3890_ = lean_array_push(v_fst_3875_, v___x_3889_);
v___x_3891_ = l_Lean_LocalDecl_toExpr(v_val_3883_);
v___x_3892_ = l_Lean_Meta_Sym_Simp_mkTheoremFromExpr(v___x_3891_, v___y_3863_, v___y_3864_, v___y_3865_, v___y_3866_);
if (lean_obj_tag(v___x_3892_) == 0)
{
lean_object* v_a_3893_; lean_object* v___x_3894_; lean_object* v___x_3896_; 
v_a_3893_ = lean_ctor_get(v___x_3892_, 0);
lean_inc(v_a_3893_);
lean_dec_ref_known(v___x_3892_, 1);
v___x_3894_ = lean_array_push(v_snd_3876_, v_a_3893_);
if (v_isShared_3879_ == 0)
{
lean_ctor_set(v___x_3878_, 1, v___x_3894_);
lean_ctor_set(v___x_3878_, 0, v___x_3890_);
v___x_3896_ = v___x_3878_;
goto v_reusejp_3895_;
}
else
{
lean_object* v_reuseFailAlloc_3897_; 
v_reuseFailAlloc_3897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3897_, 0, v___x_3890_);
lean_ctor_set(v_reuseFailAlloc_3897_, 1, v___x_3894_);
v___x_3896_ = v_reuseFailAlloc_3897_;
goto v_reusejp_3895_;
}
v_reusejp_3895_:
{
v_a_3869_ = v___x_3896_;
goto v___jp_3868_;
}
}
else
{
lean_object* v_a_3898_; lean_object* v___x_3900_; uint8_t v_isShared_3901_; uint8_t v_isSharedCheck_3905_; 
lean_dec_ref(v___x_3890_);
lean_del_object(v___x_3878_);
lean_dec(v_snd_3876_);
v_a_3898_ = lean_ctor_get(v___x_3892_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v___x_3892_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3900_ = v___x_3892_;
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
else
{
lean_inc(v_a_3898_);
lean_dec(v___x_3892_);
v___x_3900_ = lean_box(0);
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
v_resetjp_3899_:
{
lean_object* v___x_3903_; 
if (v_isShared_3901_ == 0)
{
v___x_3903_ = v___x_3900_;
goto v_reusejp_3902_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v_a_3898_);
v___x_3903_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3902_;
}
v_reusejp_3902_:
{
return v___x_3903_;
}
}
}
}
}
}
else
{
lean_object* v___x_3908_; 
lean_dec(v___x_3882_);
lean_inc(v_a_3880_);
v___x_3908_ = l_Lean_realizeGlobalConstNoOverload(v_a_3880_, v___y_3865_, v___y_3866_);
if (lean_obj_tag(v___x_3908_) == 0)
{
lean_object* v_a_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; 
v_a_3909_ = lean_ctor_get(v___x_3908_, 0);
lean_inc_n(v_a_3909_, 2);
lean_dec_ref_known(v___x_3908_, 1);
v___x_3910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3910_, 0, v_a_3909_);
v___x_3911_ = lean_array_push(v_fst_3875_, v___x_3910_);
v___x_3912_ = l_Lean_Meta_Sym_Simp_mkTheoremsFromDecl(v_a_3909_, v___y_3863_, v___y_3864_, v___y_3865_, v___y_3866_);
if (lean_obj_tag(v___x_3912_) == 0)
{
lean_object* v_a_3913_; lean_object* v___x_3914_; lean_object* v___x_3916_; 
v_a_3913_ = lean_ctor_get(v___x_3912_, 0);
lean_inc(v_a_3913_);
lean_dec_ref_known(v___x_3912_, 1);
v___x_3914_ = l_Array_append___redArg(v_snd_3876_, v_a_3913_);
lean_dec(v_a_3913_);
if (v_isShared_3879_ == 0)
{
lean_ctor_set(v___x_3878_, 1, v___x_3914_);
lean_ctor_set(v___x_3878_, 0, v___x_3911_);
v___x_3916_ = v___x_3878_;
goto v_reusejp_3915_;
}
else
{
lean_object* v_reuseFailAlloc_3917_; 
v_reuseFailAlloc_3917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3917_, 0, v___x_3911_);
lean_ctor_set(v_reuseFailAlloc_3917_, 1, v___x_3914_);
v___x_3916_ = v_reuseFailAlloc_3917_;
goto v_reusejp_3915_;
}
v_reusejp_3915_:
{
v_a_3869_ = v___x_3916_;
goto v___jp_3868_;
}
}
else
{
lean_object* v_a_3918_; lean_object* v___x_3920_; uint8_t v_isShared_3921_; uint8_t v_isSharedCheck_3925_; 
lean_dec_ref(v___x_3911_);
lean_del_object(v___x_3878_);
lean_dec(v_snd_3876_);
v_a_3918_ = lean_ctor_get(v___x_3912_, 0);
v_isSharedCheck_3925_ = !lean_is_exclusive(v___x_3912_);
if (v_isSharedCheck_3925_ == 0)
{
v___x_3920_ = v___x_3912_;
v_isShared_3921_ = v_isSharedCheck_3925_;
goto v_resetjp_3919_;
}
else
{
lean_inc(v_a_3918_);
lean_dec(v___x_3912_);
v___x_3920_ = lean_box(0);
v_isShared_3921_ = v_isSharedCheck_3925_;
goto v_resetjp_3919_;
}
v_resetjp_3919_:
{
lean_object* v___x_3923_; 
if (v_isShared_3921_ == 0)
{
v___x_3923_ = v___x_3920_;
goto v_reusejp_3922_;
}
else
{
lean_object* v_reuseFailAlloc_3924_; 
v_reuseFailAlloc_3924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3924_, 0, v_a_3918_);
v___x_3923_ = v_reuseFailAlloc_3924_;
goto v_reusejp_3922_;
}
v_reusejp_3922_:
{
return v___x_3923_;
}
}
}
}
else
{
lean_object* v_a_3926_; lean_object* v___x_3928_; uint8_t v_isShared_3929_; uint8_t v_isSharedCheck_3933_; 
lean_del_object(v___x_3878_);
lean_dec(v_snd_3876_);
lean_dec(v_fst_3875_);
v_a_3926_ = lean_ctor_get(v___x_3908_, 0);
v_isSharedCheck_3933_ = !lean_is_exclusive(v___x_3908_);
if (v_isSharedCheck_3933_ == 0)
{
v___x_3928_ = v___x_3908_;
v_isShared_3929_ = v_isSharedCheck_3933_;
goto v_resetjp_3927_;
}
else
{
lean_inc(v_a_3926_);
lean_dec(v___x_3908_);
v___x_3928_ = lean_box(0);
v_isShared_3929_ = v_isSharedCheck_3933_;
goto v_resetjp_3927_;
}
v_resetjp_3927_:
{
lean_object* v___x_3931_; 
if (v_isShared_3929_ == 0)
{
v___x_3931_ = v___x_3928_;
goto v_reusejp_3930_;
}
else
{
lean_object* v_reuseFailAlloc_3932_; 
v_reuseFailAlloc_3932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3932_, 0, v_a_3926_);
v___x_3931_ = v_reuseFailAlloc_3932_;
goto v_reusejp_3930_;
}
v_reusejp_3930_:
{
return v___x_3931_;
}
}
}
}
}
}
v___jp_3868_:
{
size_t v___x_3870_; size_t v___x_3871_; 
v___x_3870_ = ((size_t)1ULL);
v___x_3871_ = lean_usize_add(v_i_3861_, v___x_3870_);
v_i_3861_ = v___x_3871_;
v_b_3862_ = v_a_3869_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems_spec__0___redArg___boxed(lean_object* v___x_3935_, lean_object* v_as_3936_, lean_object* v_sz_3937_, lean_object* v_i_3938_, lean_object* v_b_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_){
_start:
{
size_t v_sz_boxed_3945_; size_t v_i_boxed_3946_; lean_object* v_res_3947_; 
v_sz_boxed_3945_ = lean_unbox_usize(v_sz_3937_);
lean_dec(v_sz_3937_);
v_i_boxed_3946_ = lean_unbox_usize(v_i_3938_);
lean_dec(v_i_3938_);
v_res_3947_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems_spec__0___redArg(v___x_3935_, v_as_3936_, v_sz_boxed_3945_, v_i_boxed_3946_, v_b_3939_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_);
lean_dec(v___y_3943_);
lean_dec_ref(v___y_3942_);
lean_dec(v___y_3941_);
lean_dec_ref(v___y_3940_);
lean_dec_ref(v_as_3936_);
lean_dec_ref(v___x_3935_);
return v_res_3947_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems(lean_object* v_ids_x3f_3952_, lean_object* v_a_3953_, lean_object* v_a_3954_, lean_object* v_a_3955_, lean_object* v_a_3956_, lean_object* v_a_3957_, lean_object* v_a_3958_, lean_object* v_a_3959_, lean_object* v_a_3960_){
_start:
{
if (lean_obj_tag(v_ids_x3f_3952_) == 1)
{
lean_object* v_val_3962_; lean_object* v_lctx_3963_; lean_object* v___x_3964_; size_t v_sz_3965_; size_t v___x_3966_; lean_object* v___x_3967_; 
v_val_3962_ = lean_ctor_get(v_ids_x3f_3952_, 0);
v_lctx_3963_ = lean_ctor_get(v_a_3957_, 2);
v___x_3964_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems___closed__1));
v_sz_3965_ = lean_array_size(v_val_3962_);
v___x_3966_ = ((size_t)0ULL);
v___x_3967_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems_spec__0___redArg(v_lctx_3963_, v_val_3962_, v_sz_3965_, v___x_3966_, v___x_3964_, v_a_3957_, v_a_3958_, v_a_3959_, v_a_3960_);
if (lean_obj_tag(v___x_3967_) == 0)
{
lean_object* v_a_3968_; lean_object* v___x_3970_; uint8_t v_isShared_3971_; uint8_t v_isSharedCheck_3984_; 
v_a_3968_ = lean_ctor_get(v___x_3967_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3967_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3970_ = v___x_3967_;
v_isShared_3971_ = v_isSharedCheck_3984_;
goto v_resetjp_3969_;
}
else
{
lean_inc(v_a_3968_);
lean_dec(v___x_3967_);
v___x_3970_ = lean_box(0);
v_isShared_3971_ = v_isSharedCheck_3984_;
goto v_resetjp_3969_;
}
v_resetjp_3969_:
{
lean_object* v_fst_3972_; lean_object* v_snd_3973_; lean_object* v___x_3975_; uint8_t v_isShared_3976_; uint8_t v_isSharedCheck_3983_; 
v_fst_3972_ = lean_ctor_get(v_a_3968_, 0);
v_snd_3973_ = lean_ctor_get(v_a_3968_, 1);
v_isSharedCheck_3983_ = !lean_is_exclusive(v_a_3968_);
if (v_isSharedCheck_3983_ == 0)
{
v___x_3975_ = v_a_3968_;
v_isShared_3976_ = v_isSharedCheck_3983_;
goto v_resetjp_3974_;
}
else
{
lean_inc(v_snd_3973_);
lean_inc(v_fst_3972_);
lean_dec(v_a_3968_);
v___x_3975_ = lean_box(0);
v_isShared_3976_ = v_isSharedCheck_3983_;
goto v_resetjp_3974_;
}
v_resetjp_3974_:
{
lean_object* v___x_3978_; 
if (v_isShared_3976_ == 0)
{
v___x_3978_ = v___x_3975_;
goto v_reusejp_3977_;
}
else
{
lean_object* v_reuseFailAlloc_3982_; 
v_reuseFailAlloc_3982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3982_, 0, v_fst_3972_);
lean_ctor_set(v_reuseFailAlloc_3982_, 1, v_snd_3973_);
v___x_3978_ = v_reuseFailAlloc_3982_;
goto v_reusejp_3977_;
}
v_reusejp_3977_:
{
lean_object* v___x_3980_; 
if (v_isShared_3971_ == 0)
{
lean_ctor_set(v___x_3970_, 0, v___x_3978_);
v___x_3980_ = v___x_3970_;
goto v_reusejp_3979_;
}
else
{
lean_object* v_reuseFailAlloc_3981_; 
v_reuseFailAlloc_3981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3981_, 0, v___x_3978_);
v___x_3980_ = v_reuseFailAlloc_3981_;
goto v_reusejp_3979_;
}
v_reusejp_3979_:
{
return v___x_3980_;
}
}
}
}
}
else
{
return v___x_3967_;
}
}
else
{
lean_object* v___x_3985_; lean_object* v___x_3986_; 
v___x_3985_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems___closed__1));
v___x_3986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3986_, 0, v___x_3985_);
return v___x_3986_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems___boxed(lean_object* v_ids_x3f_3987_, lean_object* v_a_3988_, lean_object* v_a_3989_, lean_object* v_a_3990_, lean_object* v_a_3991_, lean_object* v_a_3992_, lean_object* v_a_3993_, lean_object* v_a_3994_, lean_object* v_a_3995_, lean_object* v_a_3996_){
_start:
{
lean_object* v_res_3997_; 
v_res_3997_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems(v_ids_x3f_3987_, v_a_3988_, v_a_3989_, v_a_3990_, v_a_3991_, v_a_3992_, v_a_3993_, v_a_3994_, v_a_3995_);
lean_dec(v_a_3995_);
lean_dec_ref(v_a_3994_);
lean_dec(v_a_3993_);
lean_dec_ref(v_a_3992_);
lean_dec(v_a_3991_);
lean_dec_ref(v_a_3990_);
lean_dec(v_a_3989_);
lean_dec_ref(v_a_3988_);
lean_dec(v_ids_x3f_3987_);
return v_res_3997_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems_spec__0(lean_object* v___x_3998_, lean_object* v_as_3999_, size_t v_sz_4000_, size_t v_i_4001_, lean_object* v_b_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_){
_start:
{
lean_object* v___x_4012_; 
v___x_4012_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems_spec__0___redArg(v___x_3998_, v_as_3999_, v_sz_4000_, v_i_4001_, v_b_4002_, v___y_4007_, v___y_4008_, v___y_4009_, v___y_4010_);
return v___x_4012_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems_spec__0___boxed(lean_object* v___x_4013_, lean_object* v_as_4014_, lean_object* v_sz_4015_, lean_object* v_i_4016_, lean_object* v_b_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_, lean_object* v___y_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_){
_start:
{
size_t v_sz_boxed_4027_; size_t v_i_boxed_4028_; lean_object* v_res_4029_; 
v_sz_boxed_4027_ = lean_unbox_usize(v_sz_4015_);
lean_dec(v_sz_4015_);
v_i_boxed_4028_ = lean_unbox_usize(v_i_4016_);
lean_dec(v_i_4016_);
v_res_4029_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems_spec__0(v___x_4013_, v_as_4014_, v_sz_boxed_4027_, v_i_boxed_4028_, v_b_4017_, v___y_4018_, v___y_4019_, v___y_4020_, v___y_4021_, v___y_4022_, v___y_4023_, v___y_4024_, v___y_4025_);
lean_dec(v___y_4025_);
lean_dec_ref(v___y_4024_);
lean_dec(v___y_4023_);
lean_dec_ref(v___y_4022_);
lean_dec(v___y_4021_);
lean_dec_ref(v___y_4020_);
lean_dec(v___y_4019_);
lean_dec_ref(v___y_4018_);
lean_dec_ref(v_as_4014_);
lean_dec_ref(v___x_4013_);
return v_res_4029_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___lam__0(lean_object* v_post_4030_, lean_object* v_a_4031_, lean_object* v_d_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_){
_start:
{
lean_object* v___x_4044_; 
lean_inc(v___y_4042_);
lean_inc_ref(v___y_4041_);
lean_inc(v___y_4040_);
lean_inc_ref(v___y_4039_);
lean_inc(v___y_4038_);
lean_inc_ref(v___y_4037_);
lean_inc(v___y_4036_);
lean_inc_ref(v___y_4035_);
lean_inc(v___y_4034_);
lean_inc_ref(v___y_4033_);
v___x_4044_ = lean_apply_11(v_post_4030_, v___y_4033_, v___y_4034_, v___y_4035_, v___y_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_, lean_box(0));
if (lean_obj_tag(v___x_4044_) == 0)
{
lean_object* v_a_4045_; 
v_a_4045_ = lean_ctor_get(v___x_4044_, 0);
lean_inc(v_a_4045_);
if (lean_obj_tag(v_a_4045_) == 0)
{
uint8_t v_done_4046_; 
v_done_4046_ = lean_ctor_get_uint8(v_a_4045_, 0);
if (v_done_4046_ == 0)
{
uint8_t v_contextDependent_4047_; lean_object* v___x_4048_; 
lean_dec_ref_known(v___x_4044_, 1);
v_contextDependent_4047_ = lean_ctor_get_uint8(v_a_4045_, 1);
lean_dec_ref_known(v_a_4045_, 0);
v___x_4048_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_4031_, v_d_4032_, v___y_4033_, v___y_4034_, v___y_4035_, v___y_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_);
lean_dec(v___y_4042_);
lean_dec_ref(v___y_4041_);
lean_dec(v___y_4040_);
lean_dec_ref(v___y_4039_);
lean_dec(v___y_4038_);
lean_dec_ref(v___y_4037_);
lean_dec(v___y_4036_);
lean_dec_ref(v___y_4035_);
lean_dec(v___y_4034_);
if (lean_obj_tag(v___x_4048_) == 0)
{
lean_object* v_a_4049_; uint8_t v___y_4051_; 
v_a_4049_ = lean_ctor_get(v___x_4048_, 0);
if (v_contextDependent_4047_ == 0)
{
return v___x_4048_;
}
else
{
if (lean_obj_tag(v_a_4049_) == 0)
{
uint8_t v_contextDependent_4061_; 
v_contextDependent_4061_ = lean_ctor_get_uint8(v_a_4049_, 1);
v___y_4051_ = v_contextDependent_4061_;
goto v___jp_4050_;
}
else
{
uint8_t v_contextDependent_4062_; 
v_contextDependent_4062_ = lean_ctor_get_uint8(v_a_4049_, sizeof(void*)*2 + 1);
v___y_4051_ = v_contextDependent_4062_;
goto v___jp_4050_;
}
}
v___jp_4050_:
{
if (v___y_4051_ == 0)
{
lean_object* v___x_4053_; uint8_t v_isShared_4054_; uint8_t v_isSharedCheck_4059_; 
lean_inc(v_a_4049_);
v_isSharedCheck_4059_ = !lean_is_exclusive(v___x_4048_);
if (v_isSharedCheck_4059_ == 0)
{
lean_object* v_unused_4060_; 
v_unused_4060_ = lean_ctor_get(v___x_4048_, 0);
lean_dec(v_unused_4060_);
v___x_4053_ = v___x_4048_;
v_isShared_4054_ = v_isSharedCheck_4059_;
goto v_resetjp_4052_;
}
else
{
lean_dec(v___x_4048_);
v___x_4053_ = lean_box(0);
v_isShared_4054_ = v_isSharedCheck_4059_;
goto v_resetjp_4052_;
}
v_resetjp_4052_:
{
lean_object* v___x_4055_; lean_object* v___x_4057_; 
v___x_4055_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_4049_);
if (v_isShared_4054_ == 0)
{
lean_ctor_set(v___x_4053_, 0, v___x_4055_);
v___x_4057_ = v___x_4053_;
goto v_reusejp_4056_;
}
else
{
lean_object* v_reuseFailAlloc_4058_; 
v_reuseFailAlloc_4058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4058_, 0, v___x_4055_);
v___x_4057_ = v_reuseFailAlloc_4058_;
goto v_reusejp_4056_;
}
v_reusejp_4056_:
{
return v___x_4057_;
}
}
}
else
{
return v___x_4048_;
}
}
}
else
{
return v___x_4048_;
}
}
else
{
lean_dec_ref_known(v_a_4045_, 0);
lean_dec(v___y_4042_);
lean_dec_ref(v___y_4041_);
lean_dec(v___y_4040_);
lean_dec_ref(v___y_4039_);
lean_dec(v___y_4038_);
lean_dec_ref(v___y_4037_);
lean_dec(v___y_4036_);
lean_dec_ref(v___y_4035_);
lean_dec(v___y_4034_);
lean_dec_ref(v___y_4033_);
lean_dec_ref(v_d_4032_);
return v___x_4044_;
}
}
else
{
uint8_t v_done_4063_; 
v_done_4063_ = lean_ctor_get_uint8(v_a_4045_, sizeof(void*)*2);
if (v_done_4063_ == 0)
{
lean_object* v_e_x27_4064_; lean_object* v_proof_4065_; uint8_t v_contextDependent_4066_; lean_object* v___x_4068_; uint8_t v_isShared_4069_; uint8_t v_isSharedCheck_4116_; 
lean_dec_ref_known(v___x_4044_, 1);
v_e_x27_4064_ = lean_ctor_get(v_a_4045_, 0);
v_proof_4065_ = lean_ctor_get(v_a_4045_, 1);
v_contextDependent_4066_ = lean_ctor_get_uint8(v_a_4045_, sizeof(void*)*2 + 1);
v_isSharedCheck_4116_ = !lean_is_exclusive(v_a_4045_);
if (v_isSharedCheck_4116_ == 0)
{
v___x_4068_ = v_a_4045_;
v_isShared_4069_ = v_isSharedCheck_4116_;
goto v_resetjp_4067_;
}
else
{
lean_inc(v_proof_4065_);
lean_inc(v_e_x27_4064_);
lean_dec(v_a_4045_);
v___x_4068_ = lean_box(0);
v_isShared_4069_ = v_isSharedCheck_4116_;
goto v_resetjp_4067_;
}
v_resetjp_4067_:
{
lean_object* v___x_4070_; 
lean_inc_ref(v_e_x27_4064_);
v___x_4070_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_4031_, v_d_4032_, v_e_x27_4064_, v___y_4034_, v___y_4035_, v___y_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_);
lean_dec(v___y_4036_);
lean_dec_ref(v___y_4035_);
lean_dec(v___y_4034_);
if (lean_obj_tag(v___x_4070_) == 0)
{
lean_object* v_a_4071_; lean_object* v___x_4073_; uint8_t v_isShared_4074_; uint8_t v_isSharedCheck_4115_; 
v_a_4071_ = lean_ctor_get(v___x_4070_, 0);
v_isSharedCheck_4115_ = !lean_is_exclusive(v___x_4070_);
if (v_isSharedCheck_4115_ == 0)
{
v___x_4073_ = v___x_4070_;
v_isShared_4074_ = v_isSharedCheck_4115_;
goto v_resetjp_4072_;
}
else
{
lean_inc(v_a_4071_);
lean_dec(v___x_4070_);
v___x_4073_ = lean_box(0);
v_isShared_4074_ = v_isSharedCheck_4115_;
goto v_resetjp_4072_;
}
v_resetjp_4072_:
{
if (lean_obj_tag(v_a_4071_) == 0)
{
uint8_t v_done_4075_; uint8_t v_contextDependent_4076_; uint8_t v___y_4078_; 
lean_dec(v___y_4042_);
lean_dec_ref(v___y_4041_);
lean_dec(v___y_4040_);
lean_dec_ref(v___y_4039_);
lean_dec(v___y_4038_);
lean_dec_ref(v___y_4037_);
lean_dec_ref(v___y_4033_);
v_done_4075_ = lean_ctor_get_uint8(v_a_4071_, 0);
v_contextDependent_4076_ = lean_ctor_get_uint8(v_a_4071_, 1);
lean_dec_ref_known(v_a_4071_, 0);
if (v_contextDependent_4066_ == 0)
{
v___y_4078_ = v_contextDependent_4076_;
goto v___jp_4077_;
}
else
{
v___y_4078_ = v_contextDependent_4066_;
goto v___jp_4077_;
}
v___jp_4077_:
{
lean_object* v___x_4080_; 
if (v_isShared_4069_ == 0)
{
v___x_4080_ = v___x_4068_;
goto v_reusejp_4079_;
}
else
{
lean_object* v_reuseFailAlloc_4084_; 
v_reuseFailAlloc_4084_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_4084_, 0, v_e_x27_4064_);
lean_ctor_set(v_reuseFailAlloc_4084_, 1, v_proof_4065_);
v___x_4080_ = v_reuseFailAlloc_4084_;
goto v_reusejp_4079_;
}
v_reusejp_4079_:
{
lean_object* v___x_4082_; 
lean_ctor_set_uint8(v___x_4080_, sizeof(void*)*2, v_done_4075_);
lean_ctor_set_uint8(v___x_4080_, sizeof(void*)*2 + 1, v___y_4078_);
if (v_isShared_4074_ == 0)
{
lean_ctor_set(v___x_4073_, 0, v___x_4080_);
v___x_4082_ = v___x_4073_;
goto v_reusejp_4081_;
}
else
{
lean_object* v_reuseFailAlloc_4083_; 
v_reuseFailAlloc_4083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4083_, 0, v___x_4080_);
v___x_4082_ = v_reuseFailAlloc_4083_;
goto v_reusejp_4081_;
}
v_reusejp_4081_:
{
return v___x_4082_;
}
}
}
}
else
{
lean_object* v_e_x27_4085_; lean_object* v_proof_4086_; uint8_t v_done_4087_; uint8_t v_contextDependent_4088_; lean_object* v___x_4090_; uint8_t v_isShared_4091_; uint8_t v_isSharedCheck_4114_; 
lean_del_object(v___x_4073_);
lean_del_object(v___x_4068_);
v_e_x27_4085_ = lean_ctor_get(v_a_4071_, 0);
v_proof_4086_ = lean_ctor_get(v_a_4071_, 1);
v_done_4087_ = lean_ctor_get_uint8(v_a_4071_, sizeof(void*)*2);
v_contextDependent_4088_ = lean_ctor_get_uint8(v_a_4071_, sizeof(void*)*2 + 1);
v_isSharedCheck_4114_ = !lean_is_exclusive(v_a_4071_);
if (v_isSharedCheck_4114_ == 0)
{
v___x_4090_ = v_a_4071_;
v_isShared_4091_ = v_isSharedCheck_4114_;
goto v_resetjp_4089_;
}
else
{
lean_inc(v_proof_4086_);
lean_inc(v_e_x27_4085_);
lean_dec(v_a_4071_);
v___x_4090_ = lean_box(0);
v_isShared_4091_ = v_isSharedCheck_4114_;
goto v_resetjp_4089_;
}
v_resetjp_4089_:
{
lean_object* v___x_4092_; 
lean_inc_ref(v_e_x27_4085_);
v___x_4092_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_4033_, v_e_x27_4064_, v_proof_4065_, v_e_x27_4085_, v_proof_4086_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_);
lean_dec(v___y_4042_);
lean_dec_ref(v___y_4041_);
lean_dec(v___y_4040_);
lean_dec_ref(v___y_4039_);
lean_dec(v___y_4038_);
lean_dec_ref(v___y_4037_);
if (lean_obj_tag(v___x_4092_) == 0)
{
lean_object* v_a_4093_; lean_object* v___x_4095_; uint8_t v_isShared_4096_; uint8_t v_isSharedCheck_4105_; 
v_a_4093_ = lean_ctor_get(v___x_4092_, 0);
v_isSharedCheck_4105_ = !lean_is_exclusive(v___x_4092_);
if (v_isSharedCheck_4105_ == 0)
{
v___x_4095_ = v___x_4092_;
v_isShared_4096_ = v_isSharedCheck_4105_;
goto v_resetjp_4094_;
}
else
{
lean_inc(v_a_4093_);
lean_dec(v___x_4092_);
v___x_4095_ = lean_box(0);
v_isShared_4096_ = v_isSharedCheck_4105_;
goto v_resetjp_4094_;
}
v_resetjp_4094_:
{
uint8_t v___y_4098_; 
if (v_contextDependent_4066_ == 0)
{
v___y_4098_ = v_contextDependent_4088_;
goto v___jp_4097_;
}
else
{
v___y_4098_ = v_contextDependent_4066_;
goto v___jp_4097_;
}
v___jp_4097_:
{
lean_object* v___x_4100_; 
if (v_isShared_4091_ == 0)
{
lean_ctor_set(v___x_4090_, 1, v_a_4093_);
v___x_4100_ = v___x_4090_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4104_; 
v_reuseFailAlloc_4104_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_4104_, 0, v_e_x27_4085_);
lean_ctor_set(v_reuseFailAlloc_4104_, 1, v_a_4093_);
lean_ctor_set_uint8(v_reuseFailAlloc_4104_, sizeof(void*)*2, v_done_4087_);
v___x_4100_ = v_reuseFailAlloc_4104_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
lean_object* v___x_4102_; 
lean_ctor_set_uint8(v___x_4100_, sizeof(void*)*2 + 1, v___y_4098_);
if (v_isShared_4096_ == 0)
{
lean_ctor_set(v___x_4095_, 0, v___x_4100_);
v___x_4102_ = v___x_4095_;
goto v_reusejp_4101_;
}
else
{
lean_object* v_reuseFailAlloc_4103_; 
v_reuseFailAlloc_4103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4103_, 0, v___x_4100_);
v___x_4102_ = v_reuseFailAlloc_4103_;
goto v_reusejp_4101_;
}
v_reusejp_4101_:
{
return v___x_4102_;
}
}
}
}
}
else
{
lean_object* v_a_4106_; lean_object* v___x_4108_; uint8_t v_isShared_4109_; uint8_t v_isSharedCheck_4113_; 
lean_del_object(v___x_4090_);
lean_dec_ref(v_e_x27_4085_);
v_a_4106_ = lean_ctor_get(v___x_4092_, 0);
v_isSharedCheck_4113_ = !lean_is_exclusive(v___x_4092_);
if (v_isSharedCheck_4113_ == 0)
{
v___x_4108_ = v___x_4092_;
v_isShared_4109_ = v_isSharedCheck_4113_;
goto v_resetjp_4107_;
}
else
{
lean_inc(v_a_4106_);
lean_dec(v___x_4092_);
v___x_4108_ = lean_box(0);
v_isShared_4109_ = v_isSharedCheck_4113_;
goto v_resetjp_4107_;
}
v_resetjp_4107_:
{
lean_object* v___x_4111_; 
if (v_isShared_4109_ == 0)
{
v___x_4111_ = v___x_4108_;
goto v_reusejp_4110_;
}
else
{
lean_object* v_reuseFailAlloc_4112_; 
v_reuseFailAlloc_4112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4112_, 0, v_a_4106_);
v___x_4111_ = v_reuseFailAlloc_4112_;
goto v_reusejp_4110_;
}
v_reusejp_4110_:
{
return v___x_4111_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_4068_);
lean_dec_ref(v_proof_4065_);
lean_dec_ref(v_e_x27_4064_);
lean_dec(v___y_4042_);
lean_dec_ref(v___y_4041_);
lean_dec(v___y_4040_);
lean_dec_ref(v___y_4039_);
lean_dec(v___y_4038_);
lean_dec_ref(v___y_4037_);
lean_dec_ref(v___y_4033_);
return v___x_4070_;
}
}
}
else
{
lean_dec_ref_known(v_a_4045_, 2);
lean_dec(v___y_4042_);
lean_dec_ref(v___y_4041_);
lean_dec(v___y_4040_);
lean_dec_ref(v___y_4039_);
lean_dec(v___y_4038_);
lean_dec_ref(v___y_4037_);
lean_dec(v___y_4036_);
lean_dec_ref(v___y_4035_);
lean_dec(v___y_4034_);
lean_dec_ref(v___y_4033_);
lean_dec_ref(v_d_4032_);
return v___x_4044_;
}
}
}
else
{
lean_dec(v___y_4042_);
lean_dec_ref(v___y_4041_);
lean_dec(v___y_4040_);
lean_dec_ref(v___y_4039_);
lean_dec(v___y_4038_);
lean_dec_ref(v___y_4037_);
lean_dec(v___y_4036_);
lean_dec_ref(v___y_4035_);
lean_dec(v___y_4034_);
lean_dec_ref(v___y_4033_);
lean_dec_ref(v_d_4032_);
return v___x_4044_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___lam__0___boxed(lean_object* v_post_4117_, lean_object* v_a_4118_, lean_object* v_d_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_){
_start:
{
lean_object* v_res_4131_; 
v_res_4131_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___lam__0(v_post_4117_, v_a_4118_, v_d_4119_, v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_, v___y_4127_, v___y_4128_, v___y_4129_);
lean_dec_ref(v_a_4118_);
return v_res_4131_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems_spec__0___redArg(lean_object* v_as_4132_, size_t v_sz_4133_, size_t v_i_4134_, lean_object* v_b_4135_){
_start:
{
uint8_t v___x_4137_; 
v___x_4137_ = lean_usize_dec_lt(v_i_4134_, v_sz_4133_);
if (v___x_4137_ == 0)
{
lean_object* v___x_4138_; 
v___x_4138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4138_, 0, v_b_4135_);
return v___x_4138_;
}
else
{
lean_object* v_a_4139_; lean_object* v___x_4140_; size_t v___x_4141_; size_t v___x_4142_; 
v_a_4139_ = lean_array_uget_borrowed(v_as_4132_, v_i_4134_);
lean_inc(v_a_4139_);
v___x_4140_ = l_Lean_Meta_Sym_Simp_Theorems_insert(v_b_4135_, v_a_4139_);
v___x_4141_ = ((size_t)1ULL);
v___x_4142_ = lean_usize_add(v_i_4134_, v___x_4141_);
v_i_4134_ = v___x_4142_;
v_b_4135_ = v___x_4140_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems_spec__0___redArg___boxed(lean_object* v_as_4144_, lean_object* v_sz_4145_, lean_object* v_i_4146_, lean_object* v_b_4147_, lean_object* v___y_4148_){
_start:
{
size_t v_sz_boxed_4149_; size_t v_i_boxed_4150_; lean_object* v_res_4151_; 
v_sz_boxed_4149_ = lean_unbox_usize(v_sz_4145_);
lean_dec(v_sz_4145_);
v_i_boxed_4150_ = lean_unbox_usize(v_i_4146_);
lean_dec(v_i_4146_);
v_res_4151_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems_spec__0___redArg(v_as_4144_, v_sz_boxed_4149_, v_i_boxed_4150_, v_b_4147_);
lean_dec_ref(v_as_4144_);
return v_res_4151_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__0(void){
_start:
{
lean_object* v___x_4152_; 
v___x_4152_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_4152_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__1(void){
_start:
{
lean_object* v___x_4153_; lean_object* v___x_4154_; 
v___x_4153_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__0, &l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__0);
v___x_4154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4154_, 0, v___x_4153_);
return v___x_4154_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__2(void){
_start:
{
lean_object* v___x_4155_; lean_object* v_thms_4156_; 
v___x_4155_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__1, &l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__1);
v_thms_4156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_thms_4156_, 0, v___x_4155_);
lean_ctor_set(v_thms_4156_, 1, v___x_4155_);
return v_thms_4156_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems(lean_object* v_post_4157_, lean_object* v_extraThms_4158_, lean_object* v_d_4159_, lean_object* v_a_4160_, lean_object* v_a_4161_, lean_object* v_a_4162_, lean_object* v_a_4163_, lean_object* v_a_4164_, lean_object* v_a_4165_, lean_object* v_a_4166_, lean_object* v_a_4167_){
_start:
{
lean_object* v___x_4169_; lean_object* v___x_4170_; uint8_t v___x_4171_; 
v___x_4169_ = lean_array_get_size(v_extraThms_4158_);
v___x_4170_ = lean_unsigned_to_nat(0u);
v___x_4171_ = lean_nat_dec_eq(v___x_4169_, v___x_4170_);
if (v___x_4171_ == 0)
{
lean_object* v_thms_4172_; size_t v_sz_4173_; size_t v___x_4174_; lean_object* v___x_4175_; 
v_thms_4172_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__2, &l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__2);
v_sz_4173_ = lean_array_size(v_extraThms_4158_);
v___x_4174_ = ((size_t)0ULL);
v___x_4175_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems_spec__0___redArg(v_extraThms_4158_, v_sz_4173_, v___x_4174_, v_thms_4172_);
if (lean_obj_tag(v___x_4175_) == 0)
{
lean_object* v_a_4176_; lean_object* v___x_4178_; uint8_t v_isShared_4179_; uint8_t v_isSharedCheck_4184_; 
v_a_4176_ = lean_ctor_get(v___x_4175_, 0);
v_isSharedCheck_4184_ = !lean_is_exclusive(v___x_4175_);
if (v_isSharedCheck_4184_ == 0)
{
v___x_4178_ = v___x_4175_;
v_isShared_4179_ = v_isSharedCheck_4184_;
goto v_resetjp_4177_;
}
else
{
lean_inc(v_a_4176_);
lean_dec(v___x_4175_);
v___x_4178_ = lean_box(0);
v_isShared_4179_ = v_isSharedCheck_4184_;
goto v_resetjp_4177_;
}
v_resetjp_4177_:
{
lean_object* v___f_4180_; lean_object* v___x_4182_; 
v___f_4180_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___lam__0___boxed), 14, 3);
lean_closure_set(v___f_4180_, 0, v_post_4157_);
lean_closure_set(v___f_4180_, 1, v_a_4176_);
lean_closure_set(v___f_4180_, 2, v_d_4159_);
if (v_isShared_4179_ == 0)
{
lean_ctor_set(v___x_4178_, 0, v___f_4180_);
v___x_4182_ = v___x_4178_;
goto v_reusejp_4181_;
}
else
{
lean_object* v_reuseFailAlloc_4183_; 
v_reuseFailAlloc_4183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4183_, 0, v___f_4180_);
v___x_4182_ = v_reuseFailAlloc_4183_;
goto v_reusejp_4181_;
}
v_reusejp_4181_:
{
return v___x_4182_;
}
}
}
else
{
lean_object* v_a_4185_; lean_object* v___x_4187_; uint8_t v_isShared_4188_; uint8_t v_isSharedCheck_4192_; 
lean_dec_ref(v_d_4159_);
lean_dec_ref(v_post_4157_);
v_a_4185_ = lean_ctor_get(v___x_4175_, 0);
v_isSharedCheck_4192_ = !lean_is_exclusive(v___x_4175_);
if (v_isSharedCheck_4192_ == 0)
{
v___x_4187_ = v___x_4175_;
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
else
{
lean_inc(v_a_4185_);
lean_dec(v___x_4175_);
v___x_4187_ = lean_box(0);
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
v_resetjp_4186_:
{
lean_object* v___x_4190_; 
if (v_isShared_4188_ == 0)
{
v___x_4190_ = v___x_4187_;
goto v_reusejp_4189_;
}
else
{
lean_object* v_reuseFailAlloc_4191_; 
v_reuseFailAlloc_4191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4191_, 0, v_a_4185_);
v___x_4190_ = v_reuseFailAlloc_4191_;
goto v_reusejp_4189_;
}
v_reusejp_4189_:
{
return v___x_4190_;
}
}
}
}
else
{
lean_object* v___x_4193_; 
lean_dec_ref(v_d_4159_);
v___x_4193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4193_, 0, v_post_4157_);
return v___x_4193_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___boxed(lean_object* v_post_4194_, lean_object* v_extraThms_4195_, lean_object* v_d_4196_, lean_object* v_a_4197_, lean_object* v_a_4198_, lean_object* v_a_4199_, lean_object* v_a_4200_, lean_object* v_a_4201_, lean_object* v_a_4202_, lean_object* v_a_4203_, lean_object* v_a_4204_, lean_object* v_a_4205_){
_start:
{
lean_object* v_res_4206_; 
v_res_4206_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems(v_post_4194_, v_extraThms_4195_, v_d_4196_, v_a_4197_, v_a_4198_, v_a_4199_, v_a_4200_, v_a_4201_, v_a_4202_, v_a_4203_, v_a_4204_);
lean_dec(v_a_4204_);
lean_dec_ref(v_a_4203_);
lean_dec(v_a_4202_);
lean_dec_ref(v_a_4201_);
lean_dec(v_a_4200_);
lean_dec_ref(v_a_4199_);
lean_dec(v_a_4198_);
lean_dec_ref(v_a_4197_);
lean_dec_ref(v_extraThms_4195_);
return v_res_4206_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems_spec__0(lean_object* v_as_4207_, size_t v_sz_4208_, size_t v_i_4209_, lean_object* v_b_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_, lean_object* v___y_4218_){
_start:
{
lean_object* v___x_4220_; 
v___x_4220_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems_spec__0___redArg(v_as_4207_, v_sz_4208_, v_i_4209_, v_b_4210_);
return v___x_4220_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems_spec__0___boxed(lean_object* v_as_4221_, lean_object* v_sz_4222_, lean_object* v_i_4223_, lean_object* v_b_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_){
_start:
{
size_t v_sz_boxed_4234_; size_t v_i_boxed_4235_; lean_object* v_res_4236_; 
v_sz_boxed_4234_ = lean_unbox_usize(v_sz_4222_);
lean_dec(v_sz_4222_);
v_i_boxed_4235_ = lean_unbox_usize(v_i_4223_);
lean_dec(v_i_4223_);
v_res_4236_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems_spec__0(v_as_4221_, v_sz_boxed_4234_, v_i_boxed_4235_, v_b_4224_, v___y_4225_, v___y_4226_, v___y_4227_, v___y_4228_, v___y_4229_, v___y_4230_, v___y_4231_, v___y_4232_);
lean_dec(v___y_4232_);
lean_dec_ref(v___y_4231_);
lean_dec(v___y_4230_);
lean_dec_ref(v___y_4229_);
lean_dec(v___y_4228_);
lean_dec_ref(v___y_4227_);
lean_dec(v___y_4226_);
lean_dec_ref(v___y_4225_);
lean_dec_ref(v_as_4221_);
return v_res_4236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__0(lean_object* v_x_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_){
_start:
{
lean_object* v___x_4250_; lean_object* v___x_4251_; 
v___x_4250_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__0___closed__0));
v___x_4251_ = l_Lean_Meta_Sym_Simp_simpArrowTelescope(v___x_4250_, v___y_4239_, v___y_4240_, v___y_4241_, v___y_4242_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_, v___y_4247_, v___y_4248_);
return v___x_4251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__0___boxed(lean_object* v_x_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_){
_start:
{
lean_object* v_res_4264_; 
v_res_4264_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__0(v_x_4252_, v___y_4253_, v___y_4254_, v___y_4255_, v___y_4256_, v___y_4257_, v___y_4258_, v___y_4259_, v___y_4260_, v___y_4261_, v___y_4262_);
lean_dec(v___y_4262_);
lean_dec_ref(v___y_4261_);
lean_dec(v___y_4260_);
lean_dec_ref(v___y_4259_);
lean_dec(v___y_4258_);
lean_dec_ref(v___y_4257_);
lean_dec(v___y_4256_);
lean_dec_ref(v___y_4255_);
lean_dec(v___y_4254_);
return v_res_4264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__1(lean_object* v___f_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_){
_start:
{
lean_object* v___x_4277_; lean_object* v___x_4278_; 
v___x_4277_ = lean_box(0);
lean_inc_ref(v___y_4266_);
v___x_4278_ = l_Lean_Meta_Sym_Simp_simpControl(v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_);
if (lean_obj_tag(v___x_4278_) == 0)
{
lean_object* v_a_4279_; 
v_a_4279_ = lean_ctor_get(v___x_4278_, 0);
lean_inc(v_a_4279_);
if (lean_obj_tag(v_a_4279_) == 0)
{
uint8_t v_done_4280_; 
v_done_4280_ = lean_ctor_get_uint8(v_a_4279_, 0);
if (v_done_4280_ == 0)
{
uint8_t v_contextDependent_4281_; lean_object* v___x_4282_; 
lean_dec_ref_known(v___x_4278_, 1);
v_contextDependent_4281_ = lean_ctor_get_uint8(v_a_4279_, 1);
lean_dec_ref_known(v_a_4279_, 0);
v___x_4282_ = lean_apply_12(v___f_4265_, v___x_4277_, v___y_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_, lean_box(0));
if (lean_obj_tag(v___x_4282_) == 0)
{
lean_object* v_a_4283_; uint8_t v___y_4285_; 
v_a_4283_ = lean_ctor_get(v___x_4282_, 0);
lean_inc(v_a_4283_);
if (v_contextDependent_4281_ == 0)
{
lean_dec(v_a_4283_);
return v___x_4282_;
}
else
{
if (lean_obj_tag(v_a_4283_) == 0)
{
uint8_t v_contextDependent_4295_; 
v_contextDependent_4295_ = lean_ctor_get_uint8(v_a_4283_, 1);
v___y_4285_ = v_contextDependent_4295_;
goto v___jp_4284_;
}
else
{
uint8_t v_contextDependent_4296_; 
v_contextDependent_4296_ = lean_ctor_get_uint8(v_a_4283_, sizeof(void*)*2 + 1);
v___y_4285_ = v_contextDependent_4296_;
goto v___jp_4284_;
}
}
v___jp_4284_:
{
if (v___y_4285_ == 0)
{
lean_object* v___x_4287_; uint8_t v_isShared_4288_; uint8_t v_isSharedCheck_4293_; 
v_isSharedCheck_4293_ = !lean_is_exclusive(v___x_4282_);
if (v_isSharedCheck_4293_ == 0)
{
lean_object* v_unused_4294_; 
v_unused_4294_ = lean_ctor_get(v___x_4282_, 0);
lean_dec(v_unused_4294_);
v___x_4287_ = v___x_4282_;
v_isShared_4288_ = v_isSharedCheck_4293_;
goto v_resetjp_4286_;
}
else
{
lean_dec(v___x_4282_);
v___x_4287_ = lean_box(0);
v_isShared_4288_ = v_isSharedCheck_4293_;
goto v_resetjp_4286_;
}
v_resetjp_4286_:
{
lean_object* v___x_4289_; lean_object* v___x_4291_; 
v___x_4289_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_4283_);
if (v_isShared_4288_ == 0)
{
lean_ctor_set(v___x_4287_, 0, v___x_4289_);
v___x_4291_ = v___x_4287_;
goto v_reusejp_4290_;
}
else
{
lean_object* v_reuseFailAlloc_4292_; 
v_reuseFailAlloc_4292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4292_, 0, v___x_4289_);
v___x_4291_ = v_reuseFailAlloc_4292_;
goto v_reusejp_4290_;
}
v_reusejp_4290_:
{
return v___x_4291_;
}
}
}
else
{
lean_dec(v_a_4283_);
return v___x_4282_;
}
}
}
else
{
return v___x_4282_;
}
}
else
{
lean_dec_ref_known(v_a_4279_, 0);
lean_dec(v___y_4275_);
lean_dec_ref(v___y_4274_);
lean_dec(v___y_4273_);
lean_dec_ref(v___y_4272_);
lean_dec(v___y_4271_);
lean_dec_ref(v___y_4270_);
lean_dec(v___y_4269_);
lean_dec_ref(v___y_4268_);
lean_dec(v___y_4267_);
lean_dec_ref(v___y_4266_);
lean_dec_ref(v___f_4265_);
return v___x_4278_;
}
}
else
{
uint8_t v_done_4297_; 
v_done_4297_ = lean_ctor_get_uint8(v_a_4279_, sizeof(void*)*2);
if (v_done_4297_ == 0)
{
lean_object* v_e_x27_4298_; lean_object* v_proof_4299_; uint8_t v_contextDependent_4300_; lean_object* v___x_4302_; uint8_t v_isShared_4303_; uint8_t v_isSharedCheck_4350_; 
lean_dec_ref_known(v___x_4278_, 1);
v_e_x27_4298_ = lean_ctor_get(v_a_4279_, 0);
v_proof_4299_ = lean_ctor_get(v_a_4279_, 1);
v_contextDependent_4300_ = lean_ctor_get_uint8(v_a_4279_, sizeof(void*)*2 + 1);
v_isSharedCheck_4350_ = !lean_is_exclusive(v_a_4279_);
if (v_isSharedCheck_4350_ == 0)
{
v___x_4302_ = v_a_4279_;
v_isShared_4303_ = v_isSharedCheck_4350_;
goto v_resetjp_4301_;
}
else
{
lean_inc(v_proof_4299_);
lean_inc(v_e_x27_4298_);
lean_dec(v_a_4279_);
v___x_4302_ = lean_box(0);
v_isShared_4303_ = v_isSharedCheck_4350_;
goto v_resetjp_4301_;
}
v_resetjp_4301_:
{
lean_object* v___x_4304_; 
lean_inc(v___y_4275_);
lean_inc_ref(v___y_4274_);
lean_inc(v___y_4273_);
lean_inc_ref(v___y_4272_);
lean_inc(v___y_4271_);
lean_inc_ref(v___y_4270_);
lean_inc_ref(v_e_x27_4298_);
v___x_4304_ = lean_apply_12(v___f_4265_, v___x_4277_, v_e_x27_4298_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_, lean_box(0));
if (lean_obj_tag(v___x_4304_) == 0)
{
lean_object* v_a_4305_; lean_object* v___x_4307_; uint8_t v_isShared_4308_; uint8_t v_isSharedCheck_4349_; 
v_a_4305_ = lean_ctor_get(v___x_4304_, 0);
v_isSharedCheck_4349_ = !lean_is_exclusive(v___x_4304_);
if (v_isSharedCheck_4349_ == 0)
{
v___x_4307_ = v___x_4304_;
v_isShared_4308_ = v_isSharedCheck_4349_;
goto v_resetjp_4306_;
}
else
{
lean_inc(v_a_4305_);
lean_dec(v___x_4304_);
v___x_4307_ = lean_box(0);
v_isShared_4308_ = v_isSharedCheck_4349_;
goto v_resetjp_4306_;
}
v_resetjp_4306_:
{
if (lean_obj_tag(v_a_4305_) == 0)
{
uint8_t v_done_4309_; uint8_t v_contextDependent_4310_; uint8_t v___y_4312_; 
lean_dec(v___y_4275_);
lean_dec_ref(v___y_4274_);
lean_dec(v___y_4273_);
lean_dec_ref(v___y_4272_);
lean_dec(v___y_4271_);
lean_dec_ref(v___y_4270_);
lean_dec_ref(v___y_4266_);
v_done_4309_ = lean_ctor_get_uint8(v_a_4305_, 0);
v_contextDependent_4310_ = lean_ctor_get_uint8(v_a_4305_, 1);
lean_dec_ref_known(v_a_4305_, 0);
if (v_contextDependent_4300_ == 0)
{
v___y_4312_ = v_contextDependent_4310_;
goto v___jp_4311_;
}
else
{
v___y_4312_ = v_contextDependent_4300_;
goto v___jp_4311_;
}
v___jp_4311_:
{
lean_object* v___x_4314_; 
if (v_isShared_4303_ == 0)
{
v___x_4314_ = v___x_4302_;
goto v_reusejp_4313_;
}
else
{
lean_object* v_reuseFailAlloc_4318_; 
v_reuseFailAlloc_4318_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_4318_, 0, v_e_x27_4298_);
lean_ctor_set(v_reuseFailAlloc_4318_, 1, v_proof_4299_);
v___x_4314_ = v_reuseFailAlloc_4318_;
goto v_reusejp_4313_;
}
v_reusejp_4313_:
{
lean_object* v___x_4316_; 
lean_ctor_set_uint8(v___x_4314_, sizeof(void*)*2, v_done_4309_);
lean_ctor_set_uint8(v___x_4314_, sizeof(void*)*2 + 1, v___y_4312_);
if (v_isShared_4308_ == 0)
{
lean_ctor_set(v___x_4307_, 0, v___x_4314_);
v___x_4316_ = v___x_4307_;
goto v_reusejp_4315_;
}
else
{
lean_object* v_reuseFailAlloc_4317_; 
v_reuseFailAlloc_4317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4317_, 0, v___x_4314_);
v___x_4316_ = v_reuseFailAlloc_4317_;
goto v_reusejp_4315_;
}
v_reusejp_4315_:
{
return v___x_4316_;
}
}
}
}
else
{
lean_object* v_e_x27_4319_; lean_object* v_proof_4320_; uint8_t v_done_4321_; uint8_t v_contextDependent_4322_; lean_object* v___x_4324_; uint8_t v_isShared_4325_; uint8_t v_isSharedCheck_4348_; 
lean_del_object(v___x_4307_);
lean_del_object(v___x_4302_);
v_e_x27_4319_ = lean_ctor_get(v_a_4305_, 0);
v_proof_4320_ = lean_ctor_get(v_a_4305_, 1);
v_done_4321_ = lean_ctor_get_uint8(v_a_4305_, sizeof(void*)*2);
v_contextDependent_4322_ = lean_ctor_get_uint8(v_a_4305_, sizeof(void*)*2 + 1);
v_isSharedCheck_4348_ = !lean_is_exclusive(v_a_4305_);
if (v_isSharedCheck_4348_ == 0)
{
v___x_4324_ = v_a_4305_;
v_isShared_4325_ = v_isSharedCheck_4348_;
goto v_resetjp_4323_;
}
else
{
lean_inc(v_proof_4320_);
lean_inc(v_e_x27_4319_);
lean_dec(v_a_4305_);
v___x_4324_ = lean_box(0);
v_isShared_4325_ = v_isSharedCheck_4348_;
goto v_resetjp_4323_;
}
v_resetjp_4323_:
{
lean_object* v___x_4326_; 
lean_inc_ref(v_e_x27_4319_);
v___x_4326_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_4266_, v_e_x27_4298_, v_proof_4299_, v_e_x27_4319_, v_proof_4320_, v___y_4270_, v___y_4271_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_);
lean_dec(v___y_4275_);
lean_dec_ref(v___y_4274_);
lean_dec(v___y_4273_);
lean_dec_ref(v___y_4272_);
lean_dec(v___y_4271_);
lean_dec_ref(v___y_4270_);
if (lean_obj_tag(v___x_4326_) == 0)
{
lean_object* v_a_4327_; lean_object* v___x_4329_; uint8_t v_isShared_4330_; uint8_t v_isSharedCheck_4339_; 
v_a_4327_ = lean_ctor_get(v___x_4326_, 0);
v_isSharedCheck_4339_ = !lean_is_exclusive(v___x_4326_);
if (v_isSharedCheck_4339_ == 0)
{
v___x_4329_ = v___x_4326_;
v_isShared_4330_ = v_isSharedCheck_4339_;
goto v_resetjp_4328_;
}
else
{
lean_inc(v_a_4327_);
lean_dec(v___x_4326_);
v___x_4329_ = lean_box(0);
v_isShared_4330_ = v_isSharedCheck_4339_;
goto v_resetjp_4328_;
}
v_resetjp_4328_:
{
uint8_t v___y_4332_; 
if (v_contextDependent_4300_ == 0)
{
v___y_4332_ = v_contextDependent_4322_;
goto v___jp_4331_;
}
else
{
v___y_4332_ = v_contextDependent_4300_;
goto v___jp_4331_;
}
v___jp_4331_:
{
lean_object* v___x_4334_; 
if (v_isShared_4325_ == 0)
{
lean_ctor_set(v___x_4324_, 1, v_a_4327_);
v___x_4334_ = v___x_4324_;
goto v_reusejp_4333_;
}
else
{
lean_object* v_reuseFailAlloc_4338_; 
v_reuseFailAlloc_4338_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_4338_, 0, v_e_x27_4319_);
lean_ctor_set(v_reuseFailAlloc_4338_, 1, v_a_4327_);
lean_ctor_set_uint8(v_reuseFailAlloc_4338_, sizeof(void*)*2, v_done_4321_);
v___x_4334_ = v_reuseFailAlloc_4338_;
goto v_reusejp_4333_;
}
v_reusejp_4333_:
{
lean_object* v___x_4336_; 
lean_ctor_set_uint8(v___x_4334_, sizeof(void*)*2 + 1, v___y_4332_);
if (v_isShared_4330_ == 0)
{
lean_ctor_set(v___x_4329_, 0, v___x_4334_);
v___x_4336_ = v___x_4329_;
goto v_reusejp_4335_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v___x_4334_);
v___x_4336_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4335_;
}
v_reusejp_4335_:
{
return v___x_4336_;
}
}
}
}
}
else
{
lean_object* v_a_4340_; lean_object* v___x_4342_; uint8_t v_isShared_4343_; uint8_t v_isSharedCheck_4347_; 
lean_del_object(v___x_4324_);
lean_dec_ref(v_e_x27_4319_);
v_a_4340_ = lean_ctor_get(v___x_4326_, 0);
v_isSharedCheck_4347_ = !lean_is_exclusive(v___x_4326_);
if (v_isSharedCheck_4347_ == 0)
{
v___x_4342_ = v___x_4326_;
v_isShared_4343_ = v_isSharedCheck_4347_;
goto v_resetjp_4341_;
}
else
{
lean_inc(v_a_4340_);
lean_dec(v___x_4326_);
v___x_4342_ = lean_box(0);
v_isShared_4343_ = v_isSharedCheck_4347_;
goto v_resetjp_4341_;
}
v_resetjp_4341_:
{
lean_object* v___x_4345_; 
if (v_isShared_4343_ == 0)
{
v___x_4345_ = v___x_4342_;
goto v_reusejp_4344_;
}
else
{
lean_object* v_reuseFailAlloc_4346_; 
v_reuseFailAlloc_4346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4346_, 0, v_a_4340_);
v___x_4345_ = v_reuseFailAlloc_4346_;
goto v_reusejp_4344_;
}
v_reusejp_4344_:
{
return v___x_4345_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_4302_);
lean_dec_ref(v_proof_4299_);
lean_dec_ref(v_e_x27_4298_);
lean_dec(v___y_4275_);
lean_dec_ref(v___y_4274_);
lean_dec(v___y_4273_);
lean_dec_ref(v___y_4272_);
lean_dec(v___y_4271_);
lean_dec_ref(v___y_4270_);
lean_dec_ref(v___y_4266_);
return v___x_4304_;
}
}
}
else
{
lean_dec_ref_known(v_a_4279_, 2);
lean_dec(v___y_4275_);
lean_dec_ref(v___y_4274_);
lean_dec(v___y_4273_);
lean_dec_ref(v___y_4272_);
lean_dec(v___y_4271_);
lean_dec_ref(v___y_4270_);
lean_dec(v___y_4269_);
lean_dec_ref(v___y_4268_);
lean_dec(v___y_4267_);
lean_dec_ref(v___y_4266_);
lean_dec_ref(v___f_4265_);
return v___x_4278_;
}
}
}
else
{
lean_dec(v___y_4275_);
lean_dec_ref(v___y_4274_);
lean_dec(v___y_4273_);
lean_dec_ref(v___y_4272_);
lean_dec(v___y_4271_);
lean_dec_ref(v___y_4270_);
lean_dec(v___y_4269_);
lean_dec_ref(v___y_4268_);
lean_dec(v___y_4267_);
lean_dec_ref(v___y_4266_);
lean_dec_ref(v___f_4265_);
return v___x_4278_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__1___boxed(lean_object* v___f_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_, lean_object* v___y_4354_, lean_object* v___y_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_){
_start:
{
lean_object* v_res_4363_; 
v_res_4363_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__1(v___f_4351_, v___y_4352_, v___y_4353_, v___y_4354_, v___y_4355_, v___y_4356_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_, v___y_4361_);
return v_res_4363_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__2(lean_object* v___x_4364_, lean_object* v_a_4365_, lean_object* v_d_4366_, lean_object* v___y_4367_, lean_object* v___y_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_){
_start:
{
lean_object* v___x_4378_; 
v___x_4378_ = l___private_Lean_Meta_Sym_Simp_EvalGround_0__Lean_Meta_Sym_Simp_evalGroundCore___redArg(v___y_4367_, v___x_4364_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
if (lean_obj_tag(v___x_4378_) == 0)
{
lean_object* v_a_4379_; 
v_a_4379_ = lean_ctor_get(v___x_4378_, 0);
lean_inc(v_a_4379_);
if (lean_obj_tag(v_a_4379_) == 0)
{
uint8_t v_done_4380_; 
v_done_4380_ = lean_ctor_get_uint8(v_a_4379_, 0);
if (v_done_4380_ == 0)
{
uint8_t v_contextDependent_4381_; lean_object* v___x_4382_; 
lean_dec_ref_known(v___x_4378_, 1);
v_contextDependent_4381_ = lean_ctor_get_uint8(v_a_4379_, 1);
lean_dec_ref_known(v_a_4379_, 0);
v___x_4382_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_4365_, v_d_4366_, v___y_4367_, v___y_4368_, v___y_4369_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
if (lean_obj_tag(v___x_4382_) == 0)
{
lean_object* v_a_4383_; uint8_t v___y_4385_; 
v_a_4383_ = lean_ctor_get(v___x_4382_, 0);
if (v_contextDependent_4381_ == 0)
{
return v___x_4382_;
}
else
{
if (lean_obj_tag(v_a_4383_) == 0)
{
uint8_t v_contextDependent_4395_; 
v_contextDependent_4395_ = lean_ctor_get_uint8(v_a_4383_, 1);
v___y_4385_ = v_contextDependent_4395_;
goto v___jp_4384_;
}
else
{
uint8_t v_contextDependent_4396_; 
v_contextDependent_4396_ = lean_ctor_get_uint8(v_a_4383_, sizeof(void*)*2 + 1);
v___y_4385_ = v_contextDependent_4396_;
goto v___jp_4384_;
}
}
v___jp_4384_:
{
if (v___y_4385_ == 0)
{
lean_object* v___x_4387_; uint8_t v_isShared_4388_; uint8_t v_isSharedCheck_4393_; 
lean_inc(v_a_4383_);
v_isSharedCheck_4393_ = !lean_is_exclusive(v___x_4382_);
if (v_isSharedCheck_4393_ == 0)
{
lean_object* v_unused_4394_; 
v_unused_4394_ = lean_ctor_get(v___x_4382_, 0);
lean_dec(v_unused_4394_);
v___x_4387_ = v___x_4382_;
v_isShared_4388_ = v_isSharedCheck_4393_;
goto v_resetjp_4386_;
}
else
{
lean_dec(v___x_4382_);
v___x_4387_ = lean_box(0);
v_isShared_4388_ = v_isSharedCheck_4393_;
goto v_resetjp_4386_;
}
v_resetjp_4386_:
{
lean_object* v___x_4389_; lean_object* v___x_4391_; 
v___x_4389_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_4383_);
if (v_isShared_4388_ == 0)
{
lean_ctor_set(v___x_4387_, 0, v___x_4389_);
v___x_4391_ = v___x_4387_;
goto v_reusejp_4390_;
}
else
{
lean_object* v_reuseFailAlloc_4392_; 
v_reuseFailAlloc_4392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4392_, 0, v___x_4389_);
v___x_4391_ = v_reuseFailAlloc_4392_;
goto v_reusejp_4390_;
}
v_reusejp_4390_:
{
return v___x_4391_;
}
}
}
else
{
return v___x_4382_;
}
}
}
else
{
return v___x_4382_;
}
}
else
{
lean_dec_ref_known(v_a_4379_, 0);
lean_dec_ref(v___y_4367_);
lean_dec_ref(v_d_4366_);
return v___x_4378_;
}
}
else
{
uint8_t v_done_4397_; 
v_done_4397_ = lean_ctor_get_uint8(v_a_4379_, sizeof(void*)*2);
if (v_done_4397_ == 0)
{
lean_object* v_e_x27_4398_; lean_object* v_proof_4399_; uint8_t v_contextDependent_4400_; lean_object* v___x_4402_; uint8_t v_isShared_4403_; uint8_t v_isSharedCheck_4450_; 
lean_dec_ref_known(v___x_4378_, 1);
v_e_x27_4398_ = lean_ctor_get(v_a_4379_, 0);
v_proof_4399_ = lean_ctor_get(v_a_4379_, 1);
v_contextDependent_4400_ = lean_ctor_get_uint8(v_a_4379_, sizeof(void*)*2 + 1);
v_isSharedCheck_4450_ = !lean_is_exclusive(v_a_4379_);
if (v_isSharedCheck_4450_ == 0)
{
v___x_4402_ = v_a_4379_;
v_isShared_4403_ = v_isSharedCheck_4450_;
goto v_resetjp_4401_;
}
else
{
lean_inc(v_proof_4399_);
lean_inc(v_e_x27_4398_);
lean_dec(v_a_4379_);
v___x_4402_ = lean_box(0);
v_isShared_4403_ = v_isSharedCheck_4450_;
goto v_resetjp_4401_;
}
v_resetjp_4401_:
{
lean_object* v___x_4404_; 
lean_inc_ref(v_e_x27_4398_);
v___x_4404_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_4365_, v_d_4366_, v_e_x27_4398_, v___y_4368_, v___y_4369_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
if (lean_obj_tag(v___x_4404_) == 0)
{
lean_object* v_a_4405_; lean_object* v___x_4407_; uint8_t v_isShared_4408_; uint8_t v_isSharedCheck_4449_; 
v_a_4405_ = lean_ctor_get(v___x_4404_, 0);
v_isSharedCheck_4449_ = !lean_is_exclusive(v___x_4404_);
if (v_isSharedCheck_4449_ == 0)
{
v___x_4407_ = v___x_4404_;
v_isShared_4408_ = v_isSharedCheck_4449_;
goto v_resetjp_4406_;
}
else
{
lean_inc(v_a_4405_);
lean_dec(v___x_4404_);
v___x_4407_ = lean_box(0);
v_isShared_4408_ = v_isSharedCheck_4449_;
goto v_resetjp_4406_;
}
v_resetjp_4406_:
{
if (lean_obj_tag(v_a_4405_) == 0)
{
uint8_t v_done_4409_; uint8_t v_contextDependent_4410_; uint8_t v___y_4412_; 
lean_dec_ref(v___y_4367_);
v_done_4409_ = lean_ctor_get_uint8(v_a_4405_, 0);
v_contextDependent_4410_ = lean_ctor_get_uint8(v_a_4405_, 1);
lean_dec_ref_known(v_a_4405_, 0);
if (v_contextDependent_4400_ == 0)
{
v___y_4412_ = v_contextDependent_4410_;
goto v___jp_4411_;
}
else
{
v___y_4412_ = v_contextDependent_4400_;
goto v___jp_4411_;
}
v___jp_4411_:
{
lean_object* v___x_4414_; 
if (v_isShared_4403_ == 0)
{
v___x_4414_ = v___x_4402_;
goto v_reusejp_4413_;
}
else
{
lean_object* v_reuseFailAlloc_4418_; 
v_reuseFailAlloc_4418_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_4418_, 0, v_e_x27_4398_);
lean_ctor_set(v_reuseFailAlloc_4418_, 1, v_proof_4399_);
v___x_4414_ = v_reuseFailAlloc_4418_;
goto v_reusejp_4413_;
}
v_reusejp_4413_:
{
lean_object* v___x_4416_; 
lean_ctor_set_uint8(v___x_4414_, sizeof(void*)*2, v_done_4409_);
lean_ctor_set_uint8(v___x_4414_, sizeof(void*)*2 + 1, v___y_4412_);
if (v_isShared_4408_ == 0)
{
lean_ctor_set(v___x_4407_, 0, v___x_4414_);
v___x_4416_ = v___x_4407_;
goto v_reusejp_4415_;
}
else
{
lean_object* v_reuseFailAlloc_4417_; 
v_reuseFailAlloc_4417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4417_, 0, v___x_4414_);
v___x_4416_ = v_reuseFailAlloc_4417_;
goto v_reusejp_4415_;
}
v_reusejp_4415_:
{
return v___x_4416_;
}
}
}
}
else
{
lean_object* v_e_x27_4419_; lean_object* v_proof_4420_; uint8_t v_done_4421_; uint8_t v_contextDependent_4422_; lean_object* v___x_4424_; uint8_t v_isShared_4425_; uint8_t v_isSharedCheck_4448_; 
lean_del_object(v___x_4407_);
lean_del_object(v___x_4402_);
v_e_x27_4419_ = lean_ctor_get(v_a_4405_, 0);
v_proof_4420_ = lean_ctor_get(v_a_4405_, 1);
v_done_4421_ = lean_ctor_get_uint8(v_a_4405_, sizeof(void*)*2);
v_contextDependent_4422_ = lean_ctor_get_uint8(v_a_4405_, sizeof(void*)*2 + 1);
v_isSharedCheck_4448_ = !lean_is_exclusive(v_a_4405_);
if (v_isSharedCheck_4448_ == 0)
{
v___x_4424_ = v_a_4405_;
v_isShared_4425_ = v_isSharedCheck_4448_;
goto v_resetjp_4423_;
}
else
{
lean_inc(v_proof_4420_);
lean_inc(v_e_x27_4419_);
lean_dec(v_a_4405_);
v___x_4424_ = lean_box(0);
v_isShared_4425_ = v_isSharedCheck_4448_;
goto v_resetjp_4423_;
}
v_resetjp_4423_:
{
lean_object* v___x_4426_; 
lean_inc_ref(v_e_x27_4419_);
v___x_4426_ = l_Lean_Meta_Sym_Simp_mkEqTrans(v___y_4367_, v_e_x27_4398_, v_proof_4399_, v_e_x27_4419_, v_proof_4420_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
if (lean_obj_tag(v___x_4426_) == 0)
{
lean_object* v_a_4427_; lean_object* v___x_4429_; uint8_t v_isShared_4430_; uint8_t v_isSharedCheck_4439_; 
v_a_4427_ = lean_ctor_get(v___x_4426_, 0);
v_isSharedCheck_4439_ = !lean_is_exclusive(v___x_4426_);
if (v_isSharedCheck_4439_ == 0)
{
v___x_4429_ = v___x_4426_;
v_isShared_4430_ = v_isSharedCheck_4439_;
goto v_resetjp_4428_;
}
else
{
lean_inc(v_a_4427_);
lean_dec(v___x_4426_);
v___x_4429_ = lean_box(0);
v_isShared_4430_ = v_isSharedCheck_4439_;
goto v_resetjp_4428_;
}
v_resetjp_4428_:
{
uint8_t v___y_4432_; 
if (v_contextDependent_4400_ == 0)
{
v___y_4432_ = v_contextDependent_4422_;
goto v___jp_4431_;
}
else
{
v___y_4432_ = v_contextDependent_4400_;
goto v___jp_4431_;
}
v___jp_4431_:
{
lean_object* v___x_4434_; 
if (v_isShared_4425_ == 0)
{
lean_ctor_set(v___x_4424_, 1, v_a_4427_);
v___x_4434_ = v___x_4424_;
goto v_reusejp_4433_;
}
else
{
lean_object* v_reuseFailAlloc_4438_; 
v_reuseFailAlloc_4438_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_4438_, 0, v_e_x27_4419_);
lean_ctor_set(v_reuseFailAlloc_4438_, 1, v_a_4427_);
lean_ctor_set_uint8(v_reuseFailAlloc_4438_, sizeof(void*)*2, v_done_4421_);
v___x_4434_ = v_reuseFailAlloc_4438_;
goto v_reusejp_4433_;
}
v_reusejp_4433_:
{
lean_object* v___x_4436_; 
lean_ctor_set_uint8(v___x_4434_, sizeof(void*)*2 + 1, v___y_4432_);
if (v_isShared_4430_ == 0)
{
lean_ctor_set(v___x_4429_, 0, v___x_4434_);
v___x_4436_ = v___x_4429_;
goto v_reusejp_4435_;
}
else
{
lean_object* v_reuseFailAlloc_4437_; 
v_reuseFailAlloc_4437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4437_, 0, v___x_4434_);
v___x_4436_ = v_reuseFailAlloc_4437_;
goto v_reusejp_4435_;
}
v_reusejp_4435_:
{
return v___x_4436_;
}
}
}
}
}
else
{
lean_object* v_a_4440_; lean_object* v___x_4442_; uint8_t v_isShared_4443_; uint8_t v_isSharedCheck_4447_; 
lean_del_object(v___x_4424_);
lean_dec_ref(v_e_x27_4419_);
v_a_4440_ = lean_ctor_get(v___x_4426_, 0);
v_isSharedCheck_4447_ = !lean_is_exclusive(v___x_4426_);
if (v_isSharedCheck_4447_ == 0)
{
v___x_4442_ = v___x_4426_;
v_isShared_4443_ = v_isSharedCheck_4447_;
goto v_resetjp_4441_;
}
else
{
lean_inc(v_a_4440_);
lean_dec(v___x_4426_);
v___x_4442_ = lean_box(0);
v_isShared_4443_ = v_isSharedCheck_4447_;
goto v_resetjp_4441_;
}
v_resetjp_4441_:
{
lean_object* v___x_4445_; 
if (v_isShared_4443_ == 0)
{
v___x_4445_ = v___x_4442_;
goto v_reusejp_4444_;
}
else
{
lean_object* v_reuseFailAlloc_4446_; 
v_reuseFailAlloc_4446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4446_, 0, v_a_4440_);
v___x_4445_ = v_reuseFailAlloc_4446_;
goto v_reusejp_4444_;
}
v_reusejp_4444_:
{
return v___x_4445_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_4402_);
lean_dec_ref(v_proof_4399_);
lean_dec_ref(v_e_x27_4398_);
lean_dec_ref(v___y_4367_);
return v___x_4404_;
}
}
}
else
{
lean_dec_ref_known(v_a_4379_, 2);
lean_dec_ref(v___y_4367_);
lean_dec_ref(v_d_4366_);
return v___x_4378_;
}
}
}
else
{
lean_dec_ref(v___y_4367_);
lean_dec_ref(v_d_4366_);
return v___x_4378_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__2___boxed(lean_object* v___x_4451_, lean_object* v_a_4452_, lean_object* v_d_4453_, lean_object* v___y_4454_, lean_object* v___y_4455_, lean_object* v___y_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_){
_start:
{
lean_object* v_res_4465_; 
v_res_4465_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__2(v___x_4451_, v_a_4452_, v_d_4453_, v___y_4454_, v___y_4455_, v___y_4456_, v___y_4457_, v___y_4458_, v___y_4459_, v___y_4460_, v___y_4461_, v___y_4462_, v___y_4463_);
lean_dec(v___y_4463_);
lean_dec_ref(v___y_4462_);
lean_dec(v___y_4461_);
lean_dec_ref(v___y_4460_);
lean_dec(v___y_4459_);
lean_dec_ref(v___y_4458_);
lean_dec(v___y_4457_);
lean_dec_ref(v___y_4456_);
lean_dec(v___y_4455_);
lean_dec_ref(v_a_4452_);
lean_dec_ref(v___x_4451_);
return v_res_4465_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods(lean_object* v_extraThms_4472_, lean_object* v_d_4473_, lean_object* v_a_4474_, lean_object* v_a_4475_, lean_object* v_a_4476_, lean_object* v_a_4477_, lean_object* v_a_4478_, lean_object* v_a_4479_, lean_object* v_a_4480_, lean_object* v_a_4481_){
_start:
{
lean_object* v___f_4483_; lean_object* v___x_4484_; 
v___f_4483_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___closed__1));
v___x_4484_ = l_Lean_Meta_Sym_Simp_getSymSimpTheorems___redArg(v_a_4481_);
if (lean_obj_tag(v___x_4484_) == 0)
{
lean_object* v_a_4485_; lean_object* v___x_4486_; lean_object* v___f_4487_; lean_object* v___x_4488_; 
v_a_4485_ = lean_ctor_get(v___x_4484_, 0);
lean_inc(v_a_4485_);
lean_dec_ref_known(v___x_4484_, 1);
v___x_4486_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___closed__2));
lean_inc_ref(v_d_4473_);
v___f_4487_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___lam__2___boxed), 14, 3);
lean_closure_set(v___f_4487_, 0, v___x_4486_);
lean_closure_set(v___f_4487_, 1, v_a_4485_);
lean_closure_set(v___f_4487_, 2, v_d_4473_);
v___x_4488_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems(v___f_4487_, v_extraThms_4472_, v_d_4473_, v_a_4474_, v_a_4475_, v_a_4476_, v_a_4477_, v_a_4478_, v_a_4479_, v_a_4480_, v_a_4481_);
if (lean_obj_tag(v___x_4488_) == 0)
{
lean_object* v_a_4489_; lean_object* v___x_4491_; uint8_t v_isShared_4492_; uint8_t v_isSharedCheck_4497_; 
v_a_4489_ = lean_ctor_get(v___x_4488_, 0);
v_isSharedCheck_4497_ = !lean_is_exclusive(v___x_4488_);
if (v_isSharedCheck_4497_ == 0)
{
v___x_4491_ = v___x_4488_;
v_isShared_4492_ = v_isSharedCheck_4497_;
goto v_resetjp_4490_;
}
else
{
lean_inc(v_a_4489_);
lean_dec(v___x_4488_);
v___x_4491_ = lean_box(0);
v_isShared_4492_ = v_isSharedCheck_4497_;
goto v_resetjp_4490_;
}
v_resetjp_4490_:
{
lean_object* v___x_4493_; lean_object* v___x_4495_; 
v___x_4493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4493_, 0, v___f_4483_);
lean_ctor_set(v___x_4493_, 1, v_a_4489_);
if (v_isShared_4492_ == 0)
{
lean_ctor_set(v___x_4491_, 0, v___x_4493_);
v___x_4495_ = v___x_4491_;
goto v_reusejp_4494_;
}
else
{
lean_object* v_reuseFailAlloc_4496_; 
v_reuseFailAlloc_4496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4496_, 0, v___x_4493_);
v___x_4495_ = v_reuseFailAlloc_4496_;
goto v_reusejp_4494_;
}
v_reusejp_4494_:
{
return v___x_4495_;
}
}
}
else
{
lean_object* v_a_4498_; lean_object* v___x_4500_; uint8_t v_isShared_4501_; uint8_t v_isSharedCheck_4505_; 
v_a_4498_ = lean_ctor_get(v___x_4488_, 0);
v_isSharedCheck_4505_ = !lean_is_exclusive(v___x_4488_);
if (v_isSharedCheck_4505_ == 0)
{
v___x_4500_ = v___x_4488_;
v_isShared_4501_ = v_isSharedCheck_4505_;
goto v_resetjp_4499_;
}
else
{
lean_inc(v_a_4498_);
lean_dec(v___x_4488_);
v___x_4500_ = lean_box(0);
v_isShared_4501_ = v_isSharedCheck_4505_;
goto v_resetjp_4499_;
}
v_resetjp_4499_:
{
lean_object* v___x_4503_; 
if (v_isShared_4501_ == 0)
{
v___x_4503_ = v___x_4500_;
goto v_reusejp_4502_;
}
else
{
lean_object* v_reuseFailAlloc_4504_; 
v_reuseFailAlloc_4504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4504_, 0, v_a_4498_);
v___x_4503_ = v_reuseFailAlloc_4504_;
goto v_reusejp_4502_;
}
v_reusejp_4502_:
{
return v___x_4503_;
}
}
}
}
else
{
lean_object* v_a_4506_; lean_object* v___x_4508_; uint8_t v_isShared_4509_; uint8_t v_isSharedCheck_4513_; 
lean_dec_ref(v_d_4473_);
v_a_4506_ = lean_ctor_get(v___x_4484_, 0);
v_isSharedCheck_4513_ = !lean_is_exclusive(v___x_4484_);
if (v_isSharedCheck_4513_ == 0)
{
v___x_4508_ = v___x_4484_;
v_isShared_4509_ = v_isSharedCheck_4513_;
goto v_resetjp_4507_;
}
else
{
lean_inc(v_a_4506_);
lean_dec(v___x_4484_);
v___x_4508_ = lean_box(0);
v_isShared_4509_ = v_isSharedCheck_4513_;
goto v_resetjp_4507_;
}
v_resetjp_4507_:
{
lean_object* v___x_4511_; 
if (v_isShared_4509_ == 0)
{
v___x_4511_ = v___x_4508_;
goto v_reusejp_4510_;
}
else
{
lean_object* v_reuseFailAlloc_4512_; 
v_reuseFailAlloc_4512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4512_, 0, v_a_4506_);
v___x_4511_ = v_reuseFailAlloc_4512_;
goto v_reusejp_4510_;
}
v_reusejp_4510_:
{
return v___x_4511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods___boxed(lean_object* v_extraThms_4514_, lean_object* v_d_4515_, lean_object* v_a_4516_, lean_object* v_a_4517_, lean_object* v_a_4518_, lean_object* v_a_4519_, lean_object* v_a_4520_, lean_object* v_a_4521_, lean_object* v_a_4522_, lean_object* v_a_4523_, lean_object* v_a_4524_){
_start:
{
lean_object* v_res_4525_; 
v_res_4525_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods(v_extraThms_4514_, v_d_4515_, v_a_4516_, v_a_4517_, v_a_4518_, v_a_4519_, v_a_4520_, v_a_4521_, v_a_4522_, v_a_4523_);
lean_dec(v_a_4523_);
lean_dec_ref(v_a_4522_);
lean_dec(v_a_4521_);
lean_dec_ref(v_a_4520_);
lean_dec(v_a_4519_);
lean_dec_ref(v_a_4518_);
lean_dec(v_a_4517_);
lean_dec_ref(v_a_4516_);
lean_dec_ref(v_extraThms_4514_);
return v_res_4525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_defaultDischargerConfig(lean_object* v_cfg_4526_){
_start:
{
uint8_t v_trace_4527_; uint8_t v_markInstances_4528_; uint8_t v_lax_4529_; uint8_t v_suggestions_4530_; uint8_t v_locals_4531_; lean_object* v_branches_4532_; lean_object* v_splits_4533_; uint8_t v_matchEqs_4534_; uint8_t v_splitMatch_4535_; uint8_t v_splitIte_4536_; uint8_t v_splitIndPred_4537_; uint8_t v_splitImp_4538_; lean_object* v_canonHeartbeats_4539_; uint8_t v_ext_4540_; uint8_t v_extAll_4541_; uint8_t v_etaStruct_4542_; uint8_t v_funext_4543_; uint8_t v_lookahead_4544_; uint8_t v_verbose_4545_; uint8_t v_clean_4546_; uint8_t v_qlia_4547_; uint8_t v_mbtc_4548_; uint8_t v_zetaDelta_4549_; uint8_t v_zeta_4550_; uint8_t v_distrib_4551_; lean_object* v_maxChar_4552_; uint8_t v_ring_4553_; lean_object* v_ringSteps_4554_; lean_object* v_ringMaxDegree_4555_; uint8_t v_linarith_4556_; uint8_t v_lia_4557_; lean_object* v_liaSteps_4558_; lean_object* v_liaReorders_4559_; lean_object* v_liaReorderCases_4560_; uint8_t v_hom_4561_; uint8_t v_ac_4562_; lean_object* v_acSteps_4563_; lean_object* v_exp_4564_; uint8_t v_abstractProof_4565_; uint8_t v_inj_4566_; uint8_t v_order_4567_; lean_object* v_min_4568_; lean_object* v_detailed_4569_; uint8_t v_useSorry_4570_; uint8_t v_revert_4571_; uint8_t v_funCC_4572_; uint8_t v_reducible_4573_; lean_object* v_maxSuggestions_4574_; lean_object* v___x_4576_; uint8_t v_isShared_4577_; uint8_t v_isSharedCheck_4583_; 
v_trace_4527_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18);
v_markInstances_4528_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 1);
v_lax_4529_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 2);
v_suggestions_4530_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 3);
v_locals_4531_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 4);
v_branches_4532_ = lean_ctor_get(v_cfg_4526_, 0);
v_splits_4533_ = lean_ctor_get(v_cfg_4526_, 1);
v_matchEqs_4534_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 5);
v_splitMatch_4535_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 6);
v_splitIte_4536_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 7);
v_splitIndPred_4537_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 8);
v_splitImp_4538_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 9);
v_canonHeartbeats_4539_ = lean_ctor_get(v_cfg_4526_, 6);
v_ext_4540_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 10);
v_extAll_4541_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 11);
v_etaStruct_4542_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 12);
v_funext_4543_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 13);
v_lookahead_4544_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 14);
v_verbose_4545_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 15);
v_clean_4546_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 16);
v_qlia_4547_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 17);
v_mbtc_4548_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 18);
v_zetaDelta_4549_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 19);
v_zeta_4550_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 20);
v_distrib_4551_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 21);
v_maxChar_4552_ = lean_ctor_get(v_cfg_4526_, 7);
v_ring_4553_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 22);
v_ringSteps_4554_ = lean_ctor_get(v_cfg_4526_, 8);
v_ringMaxDegree_4555_ = lean_ctor_get(v_cfg_4526_, 9);
v_linarith_4556_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 23);
v_lia_4557_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 24);
v_liaSteps_4558_ = lean_ctor_get(v_cfg_4526_, 10);
v_liaReorders_4559_ = lean_ctor_get(v_cfg_4526_, 11);
v_liaReorderCases_4560_ = lean_ctor_get(v_cfg_4526_, 12);
v_hom_4561_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 25);
v_ac_4562_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 26);
v_acSteps_4563_ = lean_ctor_get(v_cfg_4526_, 13);
v_exp_4564_ = lean_ctor_get(v_cfg_4526_, 14);
v_abstractProof_4565_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 27);
v_inj_4566_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 28);
v_order_4567_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 29);
v_min_4568_ = lean_ctor_get(v_cfg_4526_, 15);
v_detailed_4569_ = lean_ctor_get(v_cfg_4526_, 16);
v_useSorry_4570_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 30);
v_revert_4571_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 31);
v_funCC_4572_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 32);
v_reducible_4573_ = lean_ctor_get_uint8(v_cfg_4526_, sizeof(void*)*18 + 33);
v_maxSuggestions_4574_ = lean_ctor_get(v_cfg_4526_, 17);
v_isSharedCheck_4583_ = !lean_is_exclusive(v_cfg_4526_);
if (v_isSharedCheck_4583_ == 0)
{
lean_object* v_unused_4584_; lean_object* v_unused_4585_; lean_object* v_unused_4586_; lean_object* v_unused_4587_; 
v_unused_4584_ = lean_ctor_get(v_cfg_4526_, 5);
lean_dec(v_unused_4584_);
v_unused_4585_ = lean_ctor_get(v_cfg_4526_, 4);
lean_dec(v_unused_4585_);
v_unused_4586_ = lean_ctor_get(v_cfg_4526_, 3);
lean_dec(v_unused_4586_);
v_unused_4587_ = lean_ctor_get(v_cfg_4526_, 2);
lean_dec(v_unused_4587_);
v___x_4576_ = v_cfg_4526_;
v_isShared_4577_ = v_isSharedCheck_4583_;
goto v_resetjp_4575_;
}
else
{
lean_inc(v_maxSuggestions_4574_);
lean_inc(v_detailed_4569_);
lean_inc(v_min_4568_);
lean_inc(v_exp_4564_);
lean_inc(v_acSteps_4563_);
lean_inc(v_liaReorderCases_4560_);
lean_inc(v_liaReorders_4559_);
lean_inc(v_liaSteps_4558_);
lean_inc(v_ringMaxDegree_4555_);
lean_inc(v_ringSteps_4554_);
lean_inc(v_maxChar_4552_);
lean_inc(v_canonHeartbeats_4539_);
lean_inc(v_splits_4533_);
lean_inc(v_branches_4532_);
lean_dec(v_cfg_4526_);
v___x_4576_ = lean_box(0);
v_isShared_4577_ = v_isSharedCheck_4583_;
goto v_resetjp_4575_;
}
v_resetjp_4575_:
{
lean_object* v___x_4578_; lean_object* v___x_4579_; lean_object* v___x_4581_; 
v___x_4578_ = lean_unsigned_to_nat(1u);
v___x_4579_ = lean_unsigned_to_nat(20u);
if (v_isShared_4577_ == 0)
{
lean_ctor_set(v___x_4576_, 5, v___x_4579_);
lean_ctor_set(v___x_4576_, 4, v___x_4578_);
lean_ctor_set(v___x_4576_, 3, v___x_4578_);
lean_ctor_set(v___x_4576_, 2, v___x_4578_);
v___x_4581_ = v___x_4576_;
goto v_reusejp_4580_;
}
else
{
lean_object* v_reuseFailAlloc_4582_; 
v_reuseFailAlloc_4582_ = lean_alloc_ctor(0, 18, 34);
lean_ctor_set(v_reuseFailAlloc_4582_, 0, v_branches_4532_);
lean_ctor_set(v_reuseFailAlloc_4582_, 1, v_splits_4533_);
lean_ctor_set(v_reuseFailAlloc_4582_, 2, v___x_4578_);
lean_ctor_set(v_reuseFailAlloc_4582_, 3, v___x_4578_);
lean_ctor_set(v_reuseFailAlloc_4582_, 4, v___x_4578_);
lean_ctor_set(v_reuseFailAlloc_4582_, 5, v___x_4579_);
lean_ctor_set(v_reuseFailAlloc_4582_, 6, v_canonHeartbeats_4539_);
lean_ctor_set(v_reuseFailAlloc_4582_, 7, v_maxChar_4552_);
lean_ctor_set(v_reuseFailAlloc_4582_, 8, v_ringSteps_4554_);
lean_ctor_set(v_reuseFailAlloc_4582_, 9, v_ringMaxDegree_4555_);
lean_ctor_set(v_reuseFailAlloc_4582_, 10, v_liaSteps_4558_);
lean_ctor_set(v_reuseFailAlloc_4582_, 11, v_liaReorders_4559_);
lean_ctor_set(v_reuseFailAlloc_4582_, 12, v_liaReorderCases_4560_);
lean_ctor_set(v_reuseFailAlloc_4582_, 13, v_acSteps_4563_);
lean_ctor_set(v_reuseFailAlloc_4582_, 14, v_exp_4564_);
lean_ctor_set(v_reuseFailAlloc_4582_, 15, v_min_4568_);
lean_ctor_set(v_reuseFailAlloc_4582_, 16, v_detailed_4569_);
lean_ctor_set(v_reuseFailAlloc_4582_, 17, v_maxSuggestions_4574_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18, v_trace_4527_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 1, v_markInstances_4528_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 2, v_lax_4529_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 3, v_suggestions_4530_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 4, v_locals_4531_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 5, v_matchEqs_4534_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 6, v_splitMatch_4535_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 7, v_splitIte_4536_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 8, v_splitIndPred_4537_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 9, v_splitImp_4538_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 10, v_ext_4540_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 11, v_extAll_4541_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 12, v_etaStruct_4542_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 13, v_funext_4543_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 14, v_lookahead_4544_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 15, v_verbose_4545_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 16, v_clean_4546_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 17, v_qlia_4547_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 18, v_mbtc_4548_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 19, v_zetaDelta_4549_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 20, v_zeta_4550_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 21, v_distrib_4551_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 22, v_ring_4553_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 23, v_linarith_4556_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 24, v_lia_4557_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 25, v_hom_4561_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 26, v_ac_4562_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 27, v_abstractProof_4565_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 28, v_inj_4566_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 29, v_order_4567_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 30, v_useSorry_4570_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 31, v_revert_4571_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 32, v_funCC_4572_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*18 + 33, v_reducible_4573_);
v___x_4581_ = v_reuseFailAlloc_4582_;
goto v_reusejp_4580_;
}
v_reusejp_4580_:
{
return v___x_4581_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkDefaultDischarger___redArg(lean_object* v_goal_4588_, lean_object* v_a_4589_, lean_object* v_a_4590_, lean_object* v_a_4591_){
_start:
{
lean_object* v_simp_4593_; lean_object* v_simpMethods_4594_; lean_object* v_symSimpMethods_4595_; lean_object* v_symDSimpMethods_4596_; lean_object* v_config_4597_; lean_object* v_identity_4598_; lean_object* v_activeSolvers_4599_; lean_object* v_anchorRefs_x3f_4600_; uint8_t v_anchors_4601_; uint8_t v_cheapCases_4602_; uint8_t v_reportMVarIssue_4603_; lean_object* v_splitSource_4604_; lean_object* v_ematchDiagSource_4605_; lean_object* v_symPrios_4606_; lean_object* v_extensions_4607_; uint8_t v_debug_4608_; uint8_t v_ematchDiag_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; 
v_simp_4593_ = lean_ctor_get(v_a_4590_, 0);
v_simpMethods_4594_ = lean_ctor_get(v_a_4590_, 1);
v_symSimpMethods_4595_ = lean_ctor_get(v_a_4590_, 2);
v_symDSimpMethods_4596_ = lean_ctor_get(v_a_4590_, 3);
v_config_4597_ = lean_ctor_get(v_a_4590_, 4);
v_identity_4598_ = lean_ctor_get(v_a_4590_, 5);
v_activeSolvers_4599_ = lean_ctor_get(v_a_4590_, 6);
v_anchorRefs_x3f_4600_ = lean_ctor_get(v_a_4590_, 7);
v_anchors_4601_ = lean_ctor_get_uint8(v_a_4590_, sizeof(void*)*12);
v_cheapCases_4602_ = lean_ctor_get_uint8(v_a_4590_, sizeof(void*)*12 + 1);
v_reportMVarIssue_4603_ = lean_ctor_get_uint8(v_a_4590_, sizeof(void*)*12 + 2);
v_splitSource_4604_ = lean_ctor_get(v_a_4590_, 8);
v_ematchDiagSource_4605_ = lean_ctor_get(v_a_4590_, 9);
v_symPrios_4606_ = lean_ctor_get(v_a_4590_, 10);
v_extensions_4607_ = lean_ctor_get(v_a_4590_, 11);
v_debug_4608_ = lean_ctor_get_uint8(v_a_4590_, sizeof(void*)*12 + 3);
v_ematchDiag_4609_ = lean_ctor_get_uint8(v_a_4590_, sizeof(void*)*12 + 4);
lean_inc_ref(v_config_4597_);
v___x_4610_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_defaultDischargerConfig(v_config_4597_);
lean_inc_ref(v_extensions_4607_);
lean_inc_ref(v_symPrios_4606_);
lean_inc(v_ematchDiagSource_4605_);
lean_inc(v_splitSource_4604_);
lean_inc(v_anchorRefs_x3f_4600_);
lean_inc_ref(v_activeSolvers_4599_);
lean_inc(v_identity_4598_);
lean_inc_ref(v_symDSimpMethods_4596_);
lean_inc_ref(v_symSimpMethods_4595_);
lean_inc_ref(v_simpMethods_4594_);
lean_inc_ref(v_simp_4593_);
v___x_4611_ = lean_alloc_ctor(0, 12, 5);
lean_ctor_set(v___x_4611_, 0, v_simp_4593_);
lean_ctor_set(v___x_4611_, 1, v_simpMethods_4594_);
lean_ctor_set(v___x_4611_, 2, v_symSimpMethods_4595_);
lean_ctor_set(v___x_4611_, 3, v_symDSimpMethods_4596_);
lean_ctor_set(v___x_4611_, 4, v___x_4610_);
lean_ctor_set(v___x_4611_, 5, v_identity_4598_);
lean_ctor_set(v___x_4611_, 6, v_activeSolvers_4599_);
lean_ctor_set(v___x_4611_, 7, v_anchorRefs_x3f_4600_);
lean_ctor_set(v___x_4611_, 8, v_splitSource_4604_);
lean_ctor_set(v___x_4611_, 9, v_ematchDiagSource_4605_);
lean_ctor_set(v___x_4611_, 10, v_symPrios_4606_);
lean_ctor_set(v___x_4611_, 11, v_extensions_4607_);
lean_ctor_set_uint8(v___x_4611_, sizeof(void*)*12, v_anchors_4601_);
lean_ctor_set_uint8(v___x_4611_, sizeof(void*)*12 + 1, v_cheapCases_4602_);
lean_ctor_set_uint8(v___x_4611_, sizeof(void*)*12 + 2, v_reportMVarIssue_4603_);
lean_ctor_set_uint8(v___x_4611_, sizeof(void*)*12 + 3, v_debug_4608_);
lean_ctor_set_uint8(v___x_4611_, sizeof(void*)*12 + 4, v_ematchDiag_4609_);
v___x_4612_ = l_Lean_Meta_Grind_Goal_mkSymSimpDischarger___redArg(v_goal_4588_, v_a_4589_, v___x_4611_, v_a_4591_);
lean_dec_ref_known(v___x_4611_, 12);
return v___x_4612_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkDefaultDischarger___redArg___boxed(lean_object* v_goal_4613_, lean_object* v_a_4614_, lean_object* v_a_4615_, lean_object* v_a_4616_, lean_object* v_a_4617_){
_start:
{
lean_object* v_res_4618_; 
v_res_4618_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkDefaultDischarger___redArg(v_goal_4613_, v_a_4614_, v_a_4615_, v_a_4616_);
lean_dec(v_a_4616_);
lean_dec_ref(v_a_4615_);
lean_dec(v_a_4614_);
return v_res_4618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkDefaultDischarger(lean_object* v_goal_4619_, lean_object* v_a_4620_, lean_object* v_a_4621_, lean_object* v_a_4622_, lean_object* v_a_4623_, lean_object* v_a_4624_, lean_object* v_a_4625_, lean_object* v_a_4626_, lean_object* v_a_4627_, lean_object* v_a_4628_){
_start:
{
lean_object* v___x_4630_; 
v___x_4630_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkDefaultDischarger___redArg(v_goal_4619_, v_a_4620_, v_a_4621_, v_a_4622_);
return v___x_4630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkDefaultDischarger___boxed(lean_object* v_goal_4631_, lean_object* v_a_4632_, lean_object* v_a_4633_, lean_object* v_a_4634_, lean_object* v_a_4635_, lean_object* v_a_4636_, lean_object* v_a_4637_, lean_object* v_a_4638_, lean_object* v_a_4639_, lean_object* v_a_4640_, lean_object* v_a_4641_){
_start:
{
lean_object* v_res_4642_; 
v_res_4642_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkDefaultDischarger(v_goal_4631_, v_a_4632_, v_a_4633_, v_a_4634_, v_a_4635_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_, v_a_4640_);
lean_dec(v_a_4640_);
lean_dec_ref(v_a_4639_);
lean_dec(v_a_4638_);
lean_dec_ref(v_a_4637_);
lean_dec(v_a_4636_);
lean_dec_ref(v_a_4635_);
lean_dec(v_a_4634_);
lean_dec_ref(v_a_4633_);
lean_dec(v_a_4632_);
return v_res_4642_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__1(void){
_start:
{
lean_object* v___x_4644_; lean_object* v___x_4645_; 
v___x_4644_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__0));
v___x_4645_ = l_Lean_stringToMessageData(v___x_4644_);
return v___x_4645_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__3(void){
_start:
{
lean_object* v___x_4647_; lean_object* v___x_4648_; 
v___x_4647_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__2));
v___x_4648_ = l_Lean_stringToMessageData(v___x_4647_);
return v___x_4648_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant(lean_object* v_variantName_4652_, lean_object* v_extraThms_4653_, lean_object* v_a_4654_, lean_object* v_a_4655_, lean_object* v_a_4656_, lean_object* v_a_4657_, lean_object* v_a_4658_, lean_object* v_a_4659_, lean_object* v_a_4660_, lean_object* v_a_4661_){
_start:
{
uint8_t v___x_4663_; 
v___x_4663_ = l_Lean_Name_isAnonymous(v_variantName_4652_);
if (v___x_4663_ == 0)
{
lean_object* v___x_4664_; lean_object* v_env_4665_; lean_object* v___x_4666_; 
v___x_4664_ = lean_st_ref_get(v_a_4661_);
v_env_4665_ = lean_ctor_get(v___x_4664_, 0);
lean_inc_ref(v_env_4665_);
lean_dec(v___x_4664_);
v___x_4666_ = l_Lean_Meta_Sym_Simp_getSymSimpVariant_x3f(v_env_4665_, v_variantName_4652_);
if (lean_obj_tag(v___x_4666_) == 1)
{
lean_object* v_val_4667_; lean_object* v_pre_x3f_4668_; lean_object* v_post_x3f_4669_; lean_object* v_discharger_x3f_4670_; lean_object* v_config_4671_; lean_object* v___x_4672_; 
lean_dec(v_variantName_4652_);
v_val_4667_ = lean_ctor_get(v___x_4666_, 0);
lean_inc(v_val_4667_);
lean_dec_ref_known(v___x_4666_, 1);
v_pre_x3f_4668_ = lean_ctor_get(v_val_4667_, 0);
lean_inc(v_pre_x3f_4668_);
v_post_x3f_4669_ = lean_ctor_get(v_val_4667_, 1);
lean_inc(v_post_x3f_4669_);
v_discharger_x3f_4670_ = lean_ctor_get(v_val_4667_, 2);
lean_inc(v_discharger_x3f_4670_);
v_config_4671_ = lean_ctor_get(v_val_4667_, 3);
lean_inc_ref(v_config_4671_);
lean_dec(v_val_4667_);
v___x_4672_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptSimproc(v_pre_x3f_4668_, v_a_4654_, v_a_4655_, v_a_4656_, v_a_4657_, v_a_4658_, v_a_4659_, v_a_4660_, v_a_4661_);
if (lean_obj_tag(v___x_4672_) == 0)
{
lean_object* v_a_4673_; lean_object* v___x_4674_; 
v_a_4673_ = lean_ctor_get(v___x_4672_, 0);
lean_inc(v_a_4673_);
lean_dec_ref_known(v___x_4672_, 1);
v___x_4674_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptSimproc(v_post_x3f_4669_, v_a_4654_, v_a_4655_, v_a_4656_, v_a_4657_, v_a_4658_, v_a_4659_, v_a_4660_, v_a_4661_);
if (lean_obj_tag(v___x_4674_) == 0)
{
lean_object* v_a_4675_; lean_object* v___x_4676_; 
v_a_4675_ = lean_ctor_get(v___x_4674_, 0);
lean_inc(v_a_4675_);
lean_dec_ref_known(v___x_4674_, 1);
v___x_4676_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabOptDischarger(v_discharger_x3f_4670_, v_a_4654_, v_a_4655_, v_a_4656_, v_a_4657_, v_a_4658_, v_a_4659_, v_a_4660_, v_a_4661_);
if (lean_obj_tag(v___x_4676_) == 0)
{
lean_object* v_a_4677_; lean_object* v___x_4678_; 
v_a_4677_ = lean_ctor_get(v___x_4676_, 0);
lean_inc(v_a_4677_);
lean_dec_ref_known(v___x_4676_, 1);
v___x_4678_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems(v_a_4675_, v_extraThms_4653_, v_a_4677_, v_a_4654_, v_a_4655_, v_a_4656_, v_a_4657_, v_a_4658_, v_a_4659_, v_a_4660_, v_a_4661_);
if (lean_obj_tag(v___x_4678_) == 0)
{
lean_object* v_a_4679_; lean_object* v___x_4681_; uint8_t v_isShared_4682_; uint8_t v_isSharedCheck_4688_; 
v_a_4679_ = lean_ctor_get(v___x_4678_, 0);
v_isSharedCheck_4688_ = !lean_is_exclusive(v___x_4678_);
if (v_isSharedCheck_4688_ == 0)
{
v___x_4681_ = v___x_4678_;
v_isShared_4682_ = v_isSharedCheck_4688_;
goto v_resetjp_4680_;
}
else
{
lean_inc(v_a_4679_);
lean_dec(v___x_4678_);
v___x_4681_ = lean_box(0);
v_isShared_4682_ = v_isSharedCheck_4688_;
goto v_resetjp_4680_;
}
v_resetjp_4680_:
{
lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4686_; 
v___x_4683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4683_, 0, v_a_4673_);
lean_ctor_set(v___x_4683_, 1, v_a_4679_);
v___x_4684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4684_, 0, v___x_4683_);
lean_ctor_set(v___x_4684_, 1, v_config_4671_);
if (v_isShared_4682_ == 0)
{
lean_ctor_set(v___x_4681_, 0, v___x_4684_);
v___x_4686_ = v___x_4681_;
goto v_reusejp_4685_;
}
else
{
lean_object* v_reuseFailAlloc_4687_; 
v_reuseFailAlloc_4687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4687_, 0, v___x_4684_);
v___x_4686_ = v_reuseFailAlloc_4687_;
goto v_reusejp_4685_;
}
v_reusejp_4685_:
{
return v___x_4686_;
}
}
}
else
{
lean_object* v_a_4689_; lean_object* v___x_4691_; uint8_t v_isShared_4692_; uint8_t v_isSharedCheck_4696_; 
lean_dec(v_a_4673_);
lean_dec_ref(v_config_4671_);
v_a_4689_ = lean_ctor_get(v___x_4678_, 0);
v_isSharedCheck_4696_ = !lean_is_exclusive(v___x_4678_);
if (v_isSharedCheck_4696_ == 0)
{
v___x_4691_ = v___x_4678_;
v_isShared_4692_ = v_isSharedCheck_4696_;
goto v_resetjp_4690_;
}
else
{
lean_inc(v_a_4689_);
lean_dec(v___x_4678_);
v___x_4691_ = lean_box(0);
v_isShared_4692_ = v_isSharedCheck_4696_;
goto v_resetjp_4690_;
}
v_resetjp_4690_:
{
lean_object* v___x_4694_; 
if (v_isShared_4692_ == 0)
{
v___x_4694_ = v___x_4691_;
goto v_reusejp_4693_;
}
else
{
lean_object* v_reuseFailAlloc_4695_; 
v_reuseFailAlloc_4695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4695_, 0, v_a_4689_);
v___x_4694_ = v_reuseFailAlloc_4695_;
goto v_reusejp_4693_;
}
v_reusejp_4693_:
{
return v___x_4694_;
}
}
}
}
else
{
lean_object* v_a_4697_; lean_object* v___x_4699_; uint8_t v_isShared_4700_; uint8_t v_isSharedCheck_4704_; 
lean_dec(v_a_4675_);
lean_dec(v_a_4673_);
lean_dec_ref(v_config_4671_);
v_a_4697_ = lean_ctor_get(v___x_4676_, 0);
v_isSharedCheck_4704_ = !lean_is_exclusive(v___x_4676_);
if (v_isSharedCheck_4704_ == 0)
{
v___x_4699_ = v___x_4676_;
v_isShared_4700_ = v_isSharedCheck_4704_;
goto v_resetjp_4698_;
}
else
{
lean_inc(v_a_4697_);
lean_dec(v___x_4676_);
v___x_4699_ = lean_box(0);
v_isShared_4700_ = v_isSharedCheck_4704_;
goto v_resetjp_4698_;
}
v_resetjp_4698_:
{
lean_object* v___x_4702_; 
if (v_isShared_4700_ == 0)
{
v___x_4702_ = v___x_4699_;
goto v_reusejp_4701_;
}
else
{
lean_object* v_reuseFailAlloc_4703_; 
v_reuseFailAlloc_4703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4703_, 0, v_a_4697_);
v___x_4702_ = v_reuseFailAlloc_4703_;
goto v_reusejp_4701_;
}
v_reusejp_4701_:
{
return v___x_4702_;
}
}
}
}
else
{
lean_object* v_a_4705_; lean_object* v___x_4707_; uint8_t v_isShared_4708_; uint8_t v_isSharedCheck_4712_; 
lean_dec(v_a_4673_);
lean_dec_ref(v_config_4671_);
lean_dec(v_discharger_x3f_4670_);
v_a_4705_ = lean_ctor_get(v___x_4674_, 0);
v_isSharedCheck_4712_ = !lean_is_exclusive(v___x_4674_);
if (v_isSharedCheck_4712_ == 0)
{
v___x_4707_ = v___x_4674_;
v_isShared_4708_ = v_isSharedCheck_4712_;
goto v_resetjp_4706_;
}
else
{
lean_inc(v_a_4705_);
lean_dec(v___x_4674_);
v___x_4707_ = lean_box(0);
v_isShared_4708_ = v_isSharedCheck_4712_;
goto v_resetjp_4706_;
}
v_resetjp_4706_:
{
lean_object* v___x_4710_; 
if (v_isShared_4708_ == 0)
{
v___x_4710_ = v___x_4707_;
goto v_reusejp_4709_;
}
else
{
lean_object* v_reuseFailAlloc_4711_; 
v_reuseFailAlloc_4711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4711_, 0, v_a_4705_);
v___x_4710_ = v_reuseFailAlloc_4711_;
goto v_reusejp_4709_;
}
v_reusejp_4709_:
{
return v___x_4710_;
}
}
}
}
else
{
lean_object* v_a_4713_; lean_object* v___x_4715_; uint8_t v_isShared_4716_; uint8_t v_isSharedCheck_4720_; 
lean_dec_ref(v_config_4671_);
lean_dec(v_discharger_x3f_4670_);
lean_dec(v_post_x3f_4669_);
v_a_4713_ = lean_ctor_get(v___x_4672_, 0);
v_isSharedCheck_4720_ = !lean_is_exclusive(v___x_4672_);
if (v_isSharedCheck_4720_ == 0)
{
v___x_4715_ = v___x_4672_;
v_isShared_4716_ = v_isSharedCheck_4720_;
goto v_resetjp_4714_;
}
else
{
lean_inc(v_a_4713_);
lean_dec(v___x_4672_);
v___x_4715_ = lean_box(0);
v_isShared_4716_ = v_isSharedCheck_4720_;
goto v_resetjp_4714_;
}
v_resetjp_4714_:
{
lean_object* v___x_4718_; 
if (v_isShared_4716_ == 0)
{
v___x_4718_ = v___x_4715_;
goto v_reusejp_4717_;
}
else
{
lean_object* v_reuseFailAlloc_4719_; 
v_reuseFailAlloc_4719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4719_, 0, v_a_4713_);
v___x_4718_ = v_reuseFailAlloc_4719_;
goto v_reusejp_4717_;
}
v_reusejp_4717_:
{
return v___x_4718_;
}
}
}
}
else
{
lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; 
lean_dec(v___x_4666_);
v___x_4721_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__1, &l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__1);
v___x_4722_ = l_Lean_MessageData_ofName(v_variantName_4652_);
v___x_4723_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4723_, 0, v___x_4721_);
lean_ctor_set(v___x_4723_, 1, v___x_4722_);
v___x_4724_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__3, &l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__3_once, _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__3);
v___x_4725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4725_, 0, v___x_4723_);
lean_ctor_set(v___x_4725_, 1, v___x_4724_);
v___x_4726_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg(v___x_4725_, v_a_4658_, v_a_4659_, v_a_4660_, v_a_4661_);
return v___x_4726_;
}
}
else
{
lean_object* v___x_4727_; 
lean_dec(v_variantName_4652_);
v___x_4727_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v_a_4654_, v_a_4655_, v_a_4656_, v_a_4657_, v_a_4658_, v_a_4659_, v_a_4660_, v_a_4661_);
if (lean_obj_tag(v___x_4727_) == 0)
{
lean_object* v_a_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; 
v_a_4728_ = lean_ctor_get(v___x_4727_, 0);
lean_inc(v_a_4728_);
lean_dec_ref_known(v___x_4727_, 1);
v___x_4729_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkDefaultDischarger___boxed), 11, 1);
lean_closure_set(v___x_4729_, 0, v_a_4728_);
v___x_4730_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___x_4729_, v_a_4654_, v_a_4655_, v_a_4658_, v_a_4659_, v_a_4660_, v_a_4661_);
if (lean_obj_tag(v___x_4730_) == 0)
{
lean_object* v_a_4731_; lean_object* v___x_4732_; 
v_a_4731_ = lean_ctor_get(v___x_4730_, 0);
lean_inc(v_a_4731_);
lean_dec_ref_known(v___x_4730_, 1);
v___x_4732_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_mkSimpDefaultMethods(v_extraThms_4653_, v_a_4731_, v_a_4654_, v_a_4655_, v_a_4656_, v_a_4657_, v_a_4658_, v_a_4659_, v_a_4660_, v_a_4661_);
if (lean_obj_tag(v___x_4732_) == 0)
{
lean_object* v_a_4733_; lean_object* v___x_4735_; uint8_t v_isShared_4736_; uint8_t v_isSharedCheck_4742_; 
v_a_4733_ = lean_ctor_get(v___x_4732_, 0);
v_isSharedCheck_4742_ = !lean_is_exclusive(v___x_4732_);
if (v_isSharedCheck_4742_ == 0)
{
v___x_4735_ = v___x_4732_;
v_isShared_4736_ = v_isSharedCheck_4742_;
goto v_resetjp_4734_;
}
else
{
lean_inc(v_a_4733_);
lean_dec(v___x_4732_);
v___x_4735_ = lean_box(0);
v_isShared_4736_ = v_isSharedCheck_4742_;
goto v_resetjp_4734_;
}
v_resetjp_4734_:
{
lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4740_; 
v___x_4737_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___closed__4));
v___x_4738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4738_, 0, v_a_4733_);
lean_ctor_set(v___x_4738_, 1, v___x_4737_);
if (v_isShared_4736_ == 0)
{
lean_ctor_set(v___x_4735_, 0, v___x_4738_);
v___x_4740_ = v___x_4735_;
goto v_reusejp_4739_;
}
else
{
lean_object* v_reuseFailAlloc_4741_; 
v_reuseFailAlloc_4741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4741_, 0, v___x_4738_);
v___x_4740_ = v_reuseFailAlloc_4741_;
goto v_reusejp_4739_;
}
v_reusejp_4739_:
{
return v___x_4740_;
}
}
}
else
{
lean_object* v_a_4743_; lean_object* v___x_4745_; uint8_t v_isShared_4746_; uint8_t v_isSharedCheck_4750_; 
v_a_4743_ = lean_ctor_get(v___x_4732_, 0);
v_isSharedCheck_4750_ = !lean_is_exclusive(v___x_4732_);
if (v_isSharedCheck_4750_ == 0)
{
v___x_4745_ = v___x_4732_;
v_isShared_4746_ = v_isSharedCheck_4750_;
goto v_resetjp_4744_;
}
else
{
lean_inc(v_a_4743_);
lean_dec(v___x_4732_);
v___x_4745_ = lean_box(0);
v_isShared_4746_ = v_isSharedCheck_4750_;
goto v_resetjp_4744_;
}
v_resetjp_4744_:
{
lean_object* v___x_4748_; 
if (v_isShared_4746_ == 0)
{
v___x_4748_ = v___x_4745_;
goto v_reusejp_4747_;
}
else
{
lean_object* v_reuseFailAlloc_4749_; 
v_reuseFailAlloc_4749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4749_, 0, v_a_4743_);
v___x_4748_ = v_reuseFailAlloc_4749_;
goto v_reusejp_4747_;
}
v_reusejp_4747_:
{
return v___x_4748_;
}
}
}
}
else
{
lean_object* v_a_4751_; lean_object* v___x_4753_; uint8_t v_isShared_4754_; uint8_t v_isSharedCheck_4758_; 
v_a_4751_ = lean_ctor_get(v___x_4730_, 0);
v_isSharedCheck_4758_ = !lean_is_exclusive(v___x_4730_);
if (v_isSharedCheck_4758_ == 0)
{
v___x_4753_ = v___x_4730_;
v_isShared_4754_ = v_isSharedCheck_4758_;
goto v_resetjp_4752_;
}
else
{
lean_inc(v_a_4751_);
lean_dec(v___x_4730_);
v___x_4753_ = lean_box(0);
v_isShared_4754_ = v_isSharedCheck_4758_;
goto v_resetjp_4752_;
}
v_resetjp_4752_:
{
lean_object* v___x_4756_; 
if (v_isShared_4754_ == 0)
{
v___x_4756_ = v___x_4753_;
goto v_reusejp_4755_;
}
else
{
lean_object* v_reuseFailAlloc_4757_; 
v_reuseFailAlloc_4757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4757_, 0, v_a_4751_);
v___x_4756_ = v_reuseFailAlloc_4757_;
goto v_reusejp_4755_;
}
v_reusejp_4755_:
{
return v___x_4756_;
}
}
}
}
else
{
lean_object* v_a_4759_; lean_object* v___x_4761_; uint8_t v_isShared_4762_; uint8_t v_isSharedCheck_4766_; 
v_a_4759_ = lean_ctor_get(v___x_4727_, 0);
v_isSharedCheck_4766_ = !lean_is_exclusive(v___x_4727_);
if (v_isSharedCheck_4766_ == 0)
{
v___x_4761_ = v___x_4727_;
v_isShared_4762_ = v_isSharedCheck_4766_;
goto v_resetjp_4760_;
}
else
{
lean_inc(v_a_4759_);
lean_dec(v___x_4727_);
v___x_4761_ = lean_box(0);
v_isShared_4762_ = v_isSharedCheck_4766_;
goto v_resetjp_4760_;
}
v_resetjp_4760_:
{
lean_object* v___x_4764_; 
if (v_isShared_4762_ == 0)
{
v___x_4764_ = v___x_4761_;
goto v_reusejp_4763_;
}
else
{
lean_object* v_reuseFailAlloc_4765_; 
v_reuseFailAlloc_4765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4765_, 0, v_a_4759_);
v___x_4764_ = v_reuseFailAlloc_4765_;
goto v_reusejp_4763_;
}
v_reusejp_4763_:
{
return v___x_4764_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant___boxed(lean_object* v_variantName_4767_, lean_object* v_extraThms_4768_, lean_object* v_a_4769_, lean_object* v_a_4770_, lean_object* v_a_4771_, lean_object* v_a_4772_, lean_object* v_a_4773_, lean_object* v_a_4774_, lean_object* v_a_4775_, lean_object* v_a_4776_, lean_object* v_a_4777_){
_start:
{
lean_object* v_res_4778_; 
v_res_4778_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant(v_variantName_4767_, v_extraThms_4768_, v_a_4769_, v_a_4770_, v_a_4771_, v_a_4772_, v_a_4773_, v_a_4774_, v_a_4775_, v_a_4776_);
lean_dec(v_a_4776_);
lean_dec_ref(v_a_4775_);
lean_dec(v_a_4774_);
lean_dec_ref(v_a_4773_);
lean_dec(v_a_4772_);
lean_dec_ref(v_a_4771_);
lean_dec(v_a_4770_);
lean_dec_ref(v_a_4769_);
lean_dec_ref(v_extraThms_4768_);
return v_res_4778_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0___redArg___lam__0(lean_object* v_x_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_, lean_object* v___y_4783_, lean_object* v___y_4784_, lean_object* v___y_4785_){
_start:
{
lean_object* v___x_4787_; 
lean_inc(v___y_4781_);
lean_inc_ref(v___y_4780_);
v___x_4787_ = lean_apply_7(v_x_4779_, v___y_4780_, v___y_4781_, v___y_4782_, v___y_4783_, v___y_4784_, v___y_4785_, lean_box(0));
return v___x_4787_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0___redArg___lam__0___boxed(lean_object* v_x_4788_, lean_object* v___y_4789_, lean_object* v___y_4790_, lean_object* v___y_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_, lean_object* v___y_4795_){
_start:
{
lean_object* v_res_4796_; 
v_res_4796_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0___redArg___lam__0(v_x_4788_, v___y_4789_, v___y_4790_, v___y_4791_, v___y_4792_, v___y_4793_, v___y_4794_);
lean_dec(v___y_4790_);
lean_dec_ref(v___y_4789_);
return v_res_4796_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0___redArg(lean_object* v_mvarId_4797_, lean_object* v_x_4798_, lean_object* v___y_4799_, lean_object* v___y_4800_, lean_object* v___y_4801_, lean_object* v___y_4802_, lean_object* v___y_4803_, lean_object* v___y_4804_){
_start:
{
lean_object* v___f_4806_; lean_object* v___x_4807_; 
lean_inc(v___y_4800_);
lean_inc_ref(v___y_4799_);
v___f_4806_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4806_, 0, v_x_4798_);
lean_closure_set(v___f_4806_, 1, v___y_4799_);
lean_closure_set(v___f_4806_, 2, v___y_4800_);
v___x_4807_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_4797_, v___f_4806_, v___y_4801_, v___y_4802_, v___y_4803_, v___y_4804_);
if (lean_obj_tag(v___x_4807_) == 0)
{
return v___x_4807_;
}
else
{
lean_object* v_a_4808_; lean_object* v___x_4810_; uint8_t v_isShared_4811_; uint8_t v_isSharedCheck_4815_; 
v_a_4808_ = lean_ctor_get(v___x_4807_, 0);
v_isSharedCheck_4815_ = !lean_is_exclusive(v___x_4807_);
if (v_isSharedCheck_4815_ == 0)
{
v___x_4810_ = v___x_4807_;
v_isShared_4811_ = v_isSharedCheck_4815_;
goto v_resetjp_4809_;
}
else
{
lean_inc(v_a_4808_);
lean_dec(v___x_4807_);
v___x_4810_ = lean_box(0);
v_isShared_4811_ = v_isSharedCheck_4815_;
goto v_resetjp_4809_;
}
v_resetjp_4809_:
{
lean_object* v___x_4813_; 
if (v_isShared_4811_ == 0)
{
v___x_4813_ = v___x_4810_;
goto v_reusejp_4812_;
}
else
{
lean_object* v_reuseFailAlloc_4814_; 
v_reuseFailAlloc_4814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4814_, 0, v_a_4808_);
v___x_4813_ = v_reuseFailAlloc_4814_;
goto v_reusejp_4812_;
}
v_reusejp_4812_:
{
return v___x_4813_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0___redArg___boxed(lean_object* v_mvarId_4816_, lean_object* v_x_4817_, lean_object* v___y_4818_, lean_object* v___y_4819_, lean_object* v___y_4820_, lean_object* v___y_4821_, lean_object* v___y_4822_, lean_object* v___y_4823_, lean_object* v___y_4824_){
_start:
{
lean_object* v_res_4825_; 
v_res_4825_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0___redArg(v_mvarId_4816_, v_x_4817_, v___y_4818_, v___y_4819_, v___y_4820_, v___y_4821_, v___y_4822_, v___y_4823_);
lean_dec(v___y_4823_);
lean_dec_ref(v___y_4822_);
lean_dec(v___y_4821_);
lean_dec_ref(v___y_4820_);
lean_dec(v___y_4819_);
lean_dec_ref(v___y_4818_);
return v_res_4825_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0(lean_object* v_00_u03b1_4826_, lean_object* v_mvarId_4827_, lean_object* v_x_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_, lean_object* v___y_4831_, lean_object* v___y_4832_, lean_object* v___y_4833_, lean_object* v___y_4834_){
_start:
{
lean_object* v___x_4836_; 
v___x_4836_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0___redArg(v_mvarId_4827_, v_x_4828_, v___y_4829_, v___y_4830_, v___y_4831_, v___y_4832_, v___y_4833_, v___y_4834_);
return v___x_4836_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0___boxed(lean_object* v_00_u03b1_4837_, lean_object* v_mvarId_4838_, lean_object* v_x_4839_, lean_object* v___y_4840_, lean_object* v___y_4841_, lean_object* v___y_4842_, lean_object* v___y_4843_, lean_object* v___y_4844_, lean_object* v___y_4845_, lean_object* v___y_4846_){
_start:
{
lean_object* v_res_4847_; 
v_res_4847_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0(v_00_u03b1_4837_, v_mvarId_4838_, v_x_4839_, v___y_4840_, v___y_4841_, v___y_4842_, v___y_4843_, v___y_4844_, v___y_4845_);
lean_dec(v___y_4845_);
lean_dec_ref(v___y_4844_);
lean_dec(v___y_4843_);
lean_dec_ref(v___y_4842_);
lean_dec(v___y_4841_);
lean_dec_ref(v___y_4840_);
return v_res_4847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_simpGoal___redArg___lam__0(lean_object* v_mvarId_4848_, lean_object* v___y_4849_, lean_object* v___y_4850_, lean_object* v___y_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_, lean_object* v___y_4854_, lean_object* v___y_4855_, lean_object* v___y_4856_, lean_object* v___y_4857_){
_start:
{
lean_object* v___x_4859_; 
lean_inc(v_mvarId_4848_);
v___x_4859_ = l_Lean_MVarId_getType(v_mvarId_4848_, v___y_4854_, v___y_4855_, v___y_4856_, v___y_4857_);
if (lean_obj_tag(v___x_4859_) == 0)
{
lean_object* v_a_4860_; lean_object* v___x_4861_; 
v_a_4860_ = lean_ctor_get(v___x_4859_, 0);
lean_inc(v_a_4860_);
lean_dec_ref_known(v___x_4859_, 1);
lean_inc(v___y_4857_);
lean_inc_ref(v___y_4856_);
lean_inc(v___y_4855_);
lean_inc_ref(v___y_4854_);
lean_inc(v___y_4853_);
lean_inc_ref(v___y_4852_);
lean_inc(v___y_4851_);
lean_inc_ref(v___y_4850_);
lean_inc(v___y_4849_);
v___x_4861_ = lean_sym_simp(v_a_4860_, v___y_4849_, v___y_4850_, v___y_4851_, v___y_4852_, v___y_4853_, v___y_4854_, v___y_4855_, v___y_4856_, v___y_4857_);
if (lean_obj_tag(v___x_4861_) == 0)
{
lean_object* v_a_4862_; lean_object* v___x_4863_; 
v_a_4862_ = lean_ctor_get(v___x_4861_, 0);
lean_inc(v_a_4862_);
lean_dec_ref_known(v___x_4861_, 1);
v___x_4863_ = l_Lean_Meta_Sym_Simp_Result_toSimpGoalResult(v_a_4862_, v_mvarId_4848_, v___y_4852_, v___y_4853_, v___y_4854_, v___y_4855_, v___y_4856_, v___y_4857_);
return v___x_4863_;
}
else
{
lean_object* v_a_4864_; lean_object* v___x_4866_; uint8_t v_isShared_4867_; uint8_t v_isSharedCheck_4871_; 
lean_dec(v_mvarId_4848_);
v_a_4864_ = lean_ctor_get(v___x_4861_, 0);
v_isSharedCheck_4871_ = !lean_is_exclusive(v___x_4861_);
if (v_isSharedCheck_4871_ == 0)
{
v___x_4866_ = v___x_4861_;
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
else
{
lean_inc(v_a_4864_);
lean_dec(v___x_4861_);
v___x_4866_ = lean_box(0);
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
v_resetjp_4865_:
{
lean_object* v___x_4869_; 
if (v_isShared_4867_ == 0)
{
v___x_4869_ = v___x_4866_;
goto v_reusejp_4868_;
}
else
{
lean_object* v_reuseFailAlloc_4870_; 
v_reuseFailAlloc_4870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4870_, 0, v_a_4864_);
v___x_4869_ = v_reuseFailAlloc_4870_;
goto v_reusejp_4868_;
}
v_reusejp_4868_:
{
return v___x_4869_;
}
}
}
}
else
{
lean_object* v_a_4872_; lean_object* v___x_4874_; uint8_t v_isShared_4875_; uint8_t v_isSharedCheck_4879_; 
lean_dec(v_mvarId_4848_);
v_a_4872_ = lean_ctor_get(v___x_4859_, 0);
v_isSharedCheck_4879_ = !lean_is_exclusive(v___x_4859_);
if (v_isSharedCheck_4879_ == 0)
{
v___x_4874_ = v___x_4859_;
v_isShared_4875_ = v_isSharedCheck_4879_;
goto v_resetjp_4873_;
}
else
{
lean_inc(v_a_4872_);
lean_dec(v___x_4859_);
v___x_4874_ = lean_box(0);
v_isShared_4875_ = v_isSharedCheck_4879_;
goto v_resetjp_4873_;
}
v_resetjp_4873_:
{
lean_object* v___x_4877_; 
if (v_isShared_4875_ == 0)
{
v___x_4877_ = v___x_4874_;
goto v_reusejp_4876_;
}
else
{
lean_object* v_reuseFailAlloc_4878_; 
v_reuseFailAlloc_4878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4878_, 0, v_a_4872_);
v___x_4877_ = v_reuseFailAlloc_4878_;
goto v_reusejp_4876_;
}
v_reusejp_4876_:
{
return v___x_4877_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_simpGoal___redArg___lam__0___boxed(lean_object* v_mvarId_4880_, lean_object* v___y_4881_, lean_object* v___y_4882_, lean_object* v___y_4883_, lean_object* v___y_4884_, lean_object* v___y_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_, lean_object* v___y_4888_, lean_object* v___y_4889_, lean_object* v___y_4890_){
_start:
{
lean_object* v_res_4891_; 
v_res_4891_ = l_Lean_Elab_Tactic_Grind_simpGoal___redArg___lam__0(v_mvarId_4880_, v___y_4881_, v___y_4882_, v___y_4883_, v___y_4884_, v___y_4885_, v___y_4886_, v___y_4887_, v___y_4888_, v___y_4889_);
lean_dec(v___y_4889_);
lean_dec_ref(v___y_4888_);
lean_dec(v___y_4887_);
lean_dec_ref(v___y_4886_);
lean_dec(v___y_4885_);
lean_dec_ref(v___y_4884_);
lean_dec(v___y_4883_);
lean_dec_ref(v___y_4882_);
lean_dec(v___y_4881_);
return v_res_4891_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2_spec__5___redArg(lean_object* v_a_4892_, lean_object* v_x_4893_){
_start:
{
if (lean_obj_tag(v_x_4893_) == 0)
{
lean_object* v___x_4894_; 
v___x_4894_ = lean_box(0);
return v___x_4894_;
}
else
{
lean_object* v_key_4895_; lean_object* v_value_4896_; lean_object* v_tail_4897_; uint8_t v___x_4898_; 
v_key_4895_ = lean_ctor_get(v_x_4893_, 0);
v_value_4896_ = lean_ctor_get(v_x_4893_, 1);
v_tail_4897_ = lean_ctor_get(v_x_4893_, 2);
v___x_4898_ = l_Lean_Elab_Tactic_Grind_instBEqSimpCacheKey_beq(v_key_4895_, v_a_4892_);
if (v___x_4898_ == 0)
{
v_x_4893_ = v_tail_4897_;
goto _start;
}
else
{
lean_object* v___x_4900_; 
lean_inc(v_value_4896_);
v___x_4900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4900_, 0, v_value_4896_);
return v___x_4900_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2_spec__5___redArg___boxed(lean_object* v_a_4901_, lean_object* v_x_4902_){
_start:
{
lean_object* v_res_4903_; 
v_res_4903_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2_spec__5___redArg(v_a_4901_, v_x_4902_);
lean_dec(v_x_4902_);
lean_dec_ref(v_a_4901_);
return v_res_4903_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2___redArg(lean_object* v_m_4904_, lean_object* v_a_4905_){
_start:
{
lean_object* v_buckets_4906_; lean_object* v___x_4907_; uint64_t v___x_4908_; uint64_t v___x_4909_; uint64_t v___x_4910_; uint64_t v_fold_4911_; uint64_t v___x_4912_; uint64_t v___x_4913_; uint64_t v___x_4914_; size_t v___x_4915_; size_t v___x_4916_; size_t v___x_4917_; size_t v___x_4918_; size_t v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; 
v_buckets_4906_ = lean_ctor_get(v_m_4904_, 1);
v___x_4907_ = lean_array_get_size(v_buckets_4906_);
v___x_4908_ = l_Lean_Elab_Tactic_Grind_instHashableSimpCacheKey_hash(v_a_4905_);
v___x_4909_ = 32ULL;
v___x_4910_ = lean_uint64_shift_right(v___x_4908_, v___x_4909_);
v_fold_4911_ = lean_uint64_xor(v___x_4908_, v___x_4910_);
v___x_4912_ = 16ULL;
v___x_4913_ = lean_uint64_shift_right(v_fold_4911_, v___x_4912_);
v___x_4914_ = lean_uint64_xor(v_fold_4911_, v___x_4913_);
v___x_4915_ = lean_uint64_to_usize(v___x_4914_);
v___x_4916_ = lean_usize_of_nat(v___x_4907_);
v___x_4917_ = ((size_t)1ULL);
v___x_4918_ = lean_usize_sub(v___x_4916_, v___x_4917_);
v___x_4919_ = lean_usize_land(v___x_4915_, v___x_4918_);
v___x_4920_ = lean_array_uget_borrowed(v_buckets_4906_, v___x_4919_);
v___x_4921_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2_spec__5___redArg(v_a_4905_, v___x_4920_);
return v___x_4921_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2___redArg___boxed(lean_object* v_m_4922_, lean_object* v_a_4923_){
_start:
{
lean_object* v_res_4924_; 
v_res_4924_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2___redArg(v_m_4922_, v_a_4923_);
lean_dec_ref(v_a_4923_);
lean_dec_ref(v_m_4922_);
return v_res_4924_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__1___redArg(lean_object* v_a_4925_, lean_object* v_x_4926_){
_start:
{
if (lean_obj_tag(v_x_4926_) == 0)
{
uint8_t v___x_4927_; 
v___x_4927_ = 0;
return v___x_4927_;
}
else
{
lean_object* v_key_4928_; lean_object* v_tail_4929_; uint8_t v___x_4930_; 
v_key_4928_ = lean_ctor_get(v_x_4926_, 0);
v_tail_4929_ = lean_ctor_get(v_x_4926_, 2);
v___x_4930_ = l_Lean_Elab_Tactic_Grind_instBEqSimpCacheKey_beq(v_key_4928_, v_a_4925_);
if (v___x_4930_ == 0)
{
v_x_4926_ = v_tail_4929_;
goto _start;
}
else
{
return v___x_4930_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__1___redArg___boxed(lean_object* v_a_4932_, lean_object* v_x_4933_){
_start:
{
uint8_t v_res_4934_; lean_object* v_r_4935_; 
v_res_4934_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__1___redArg(v_a_4932_, v_x_4933_);
lean_dec(v_x_4933_);
lean_dec_ref(v_a_4932_);
v_r_4935_ = lean_box(v_res_4934_);
return v_r_4935_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_x_4936_, lean_object* v_x_4937_){
_start:
{
if (lean_obj_tag(v_x_4937_) == 0)
{
return v_x_4936_;
}
else
{
lean_object* v_key_4938_; lean_object* v_value_4939_; lean_object* v_tail_4940_; lean_object* v___x_4942_; uint8_t v_isShared_4943_; uint8_t v_isSharedCheck_4963_; 
v_key_4938_ = lean_ctor_get(v_x_4937_, 0);
v_value_4939_ = lean_ctor_get(v_x_4937_, 1);
v_tail_4940_ = lean_ctor_get(v_x_4937_, 2);
v_isSharedCheck_4963_ = !lean_is_exclusive(v_x_4937_);
if (v_isSharedCheck_4963_ == 0)
{
v___x_4942_ = v_x_4937_;
v_isShared_4943_ = v_isSharedCheck_4963_;
goto v_resetjp_4941_;
}
else
{
lean_inc(v_tail_4940_);
lean_inc(v_value_4939_);
lean_inc(v_key_4938_);
lean_dec(v_x_4937_);
v___x_4942_ = lean_box(0);
v_isShared_4943_ = v_isSharedCheck_4963_;
goto v_resetjp_4941_;
}
v_resetjp_4941_:
{
lean_object* v___x_4944_; uint64_t v___x_4945_; uint64_t v___x_4946_; uint64_t v___x_4947_; uint64_t v_fold_4948_; uint64_t v___x_4949_; uint64_t v___x_4950_; uint64_t v___x_4951_; size_t v___x_4952_; size_t v___x_4953_; size_t v___x_4954_; size_t v___x_4955_; size_t v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4959_; 
v___x_4944_ = lean_array_get_size(v_x_4936_);
v___x_4945_ = l_Lean_Elab_Tactic_Grind_instHashableSimpCacheKey_hash(v_key_4938_);
v___x_4946_ = 32ULL;
v___x_4947_ = lean_uint64_shift_right(v___x_4945_, v___x_4946_);
v_fold_4948_ = lean_uint64_xor(v___x_4945_, v___x_4947_);
v___x_4949_ = 16ULL;
v___x_4950_ = lean_uint64_shift_right(v_fold_4948_, v___x_4949_);
v___x_4951_ = lean_uint64_xor(v_fold_4948_, v___x_4950_);
v___x_4952_ = lean_uint64_to_usize(v___x_4951_);
v___x_4953_ = lean_usize_of_nat(v___x_4944_);
v___x_4954_ = ((size_t)1ULL);
v___x_4955_ = lean_usize_sub(v___x_4953_, v___x_4954_);
v___x_4956_ = lean_usize_land(v___x_4952_, v___x_4955_);
v___x_4957_ = lean_array_uget_borrowed(v_x_4936_, v___x_4956_);
lean_inc(v___x_4957_);
if (v_isShared_4943_ == 0)
{
lean_ctor_set(v___x_4942_, 2, v___x_4957_);
v___x_4959_ = v___x_4942_;
goto v_reusejp_4958_;
}
else
{
lean_object* v_reuseFailAlloc_4962_; 
v_reuseFailAlloc_4962_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4962_, 0, v_key_4938_);
lean_ctor_set(v_reuseFailAlloc_4962_, 1, v_value_4939_);
lean_ctor_set(v_reuseFailAlloc_4962_, 2, v___x_4957_);
v___x_4959_ = v_reuseFailAlloc_4962_;
goto v_reusejp_4958_;
}
v_reusejp_4958_:
{
lean_object* v___x_4960_; 
v___x_4960_ = lean_array_uset(v_x_4936_, v___x_4956_, v___x_4959_);
v_x_4936_ = v___x_4960_;
v_x_4937_ = v_tail_4940_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2_spec__3___redArg(lean_object* v_i_4964_, lean_object* v_source_4965_, lean_object* v_target_4966_){
_start:
{
lean_object* v___x_4967_; uint8_t v___x_4968_; 
v___x_4967_ = lean_array_get_size(v_source_4965_);
v___x_4968_ = lean_nat_dec_lt(v_i_4964_, v___x_4967_);
if (v___x_4968_ == 0)
{
lean_dec_ref(v_source_4965_);
lean_dec(v_i_4964_);
return v_target_4966_;
}
else
{
lean_object* v_es_4969_; lean_object* v___x_4970_; lean_object* v_source_4971_; lean_object* v_target_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; 
v_es_4969_ = lean_array_fget(v_source_4965_, v_i_4964_);
v___x_4970_ = lean_box(0);
v_source_4971_ = lean_array_fset(v_source_4965_, v_i_4964_, v___x_4970_);
v_target_4972_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2_spec__3_spec__5___redArg(v_target_4966_, v_es_4969_);
v___x_4973_ = lean_unsigned_to_nat(1u);
v___x_4974_ = lean_nat_add(v_i_4964_, v___x_4973_);
lean_dec(v_i_4964_);
v_i_4964_ = v___x_4974_;
v_source_4965_ = v_source_4971_;
v_target_4966_ = v_target_4972_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2___redArg(lean_object* v_data_4976_){
_start:
{
lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v_nbuckets_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; 
v___x_4977_ = lean_array_get_size(v_data_4976_);
v___x_4978_ = lean_unsigned_to_nat(2u);
v_nbuckets_4979_ = lean_nat_mul(v___x_4977_, v___x_4978_);
v___x_4980_ = lean_unsigned_to_nat(0u);
v___x_4981_ = lean_box(0);
v___x_4982_ = lean_mk_array(v_nbuckets_4979_, v___x_4981_);
v___x_4983_ = lean_array_propagate_mark(v_data_4976_, v___x_4982_);
v___x_4984_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2_spec__3___redArg(v___x_4980_, v_data_4976_, v___x_4983_);
return v___x_4984_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__3___redArg(lean_object* v_a_4985_, lean_object* v_b_4986_, lean_object* v_x_4987_){
_start:
{
if (lean_obj_tag(v_x_4987_) == 0)
{
lean_dec(v_b_4986_);
lean_dec_ref(v_a_4985_);
return v_x_4987_;
}
else
{
lean_object* v_key_4988_; lean_object* v_value_4989_; lean_object* v_tail_4990_; lean_object* v___x_4992_; uint8_t v_isShared_4993_; uint8_t v_isSharedCheck_5002_; 
v_key_4988_ = lean_ctor_get(v_x_4987_, 0);
v_value_4989_ = lean_ctor_get(v_x_4987_, 1);
v_tail_4990_ = lean_ctor_get(v_x_4987_, 2);
v_isSharedCheck_5002_ = !lean_is_exclusive(v_x_4987_);
if (v_isSharedCheck_5002_ == 0)
{
v___x_4992_ = v_x_4987_;
v_isShared_4993_ = v_isSharedCheck_5002_;
goto v_resetjp_4991_;
}
else
{
lean_inc(v_tail_4990_);
lean_inc(v_value_4989_);
lean_inc(v_key_4988_);
lean_dec(v_x_4987_);
v___x_4992_ = lean_box(0);
v_isShared_4993_ = v_isSharedCheck_5002_;
goto v_resetjp_4991_;
}
v_resetjp_4991_:
{
uint8_t v___x_4994_; 
v___x_4994_ = l_Lean_Elab_Tactic_Grind_instBEqSimpCacheKey_beq(v_key_4988_, v_a_4985_);
if (v___x_4994_ == 0)
{
lean_object* v___x_4995_; lean_object* v___x_4997_; 
v___x_4995_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__3___redArg(v_a_4985_, v_b_4986_, v_tail_4990_);
if (v_isShared_4993_ == 0)
{
lean_ctor_set(v___x_4992_, 2, v___x_4995_);
v___x_4997_ = v___x_4992_;
goto v_reusejp_4996_;
}
else
{
lean_object* v_reuseFailAlloc_4998_; 
v_reuseFailAlloc_4998_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4998_, 0, v_key_4988_);
lean_ctor_set(v_reuseFailAlloc_4998_, 1, v_value_4989_);
lean_ctor_set(v_reuseFailAlloc_4998_, 2, v___x_4995_);
v___x_4997_ = v_reuseFailAlloc_4998_;
goto v_reusejp_4996_;
}
v_reusejp_4996_:
{
return v___x_4997_;
}
}
else
{
lean_object* v___x_5000_; 
lean_dec(v_value_4989_);
lean_dec(v_key_4988_);
if (v_isShared_4993_ == 0)
{
lean_ctor_set(v___x_4992_, 1, v_b_4986_);
lean_ctor_set(v___x_4992_, 0, v_a_4985_);
v___x_5000_ = v___x_4992_;
goto v_reusejp_4999_;
}
else
{
lean_object* v_reuseFailAlloc_5001_; 
v_reuseFailAlloc_5001_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5001_, 0, v_a_4985_);
lean_ctor_set(v_reuseFailAlloc_5001_, 1, v_b_4986_);
lean_ctor_set(v_reuseFailAlloc_5001_, 2, v_tail_4990_);
v___x_5000_ = v_reuseFailAlloc_5001_;
goto v_reusejp_4999_;
}
v_reusejp_4999_:
{
return v___x_5000_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1___redArg(lean_object* v_m_5003_, lean_object* v_a_5004_, lean_object* v_b_5005_){
_start:
{
lean_object* v_size_5006_; lean_object* v_buckets_5007_; lean_object* v___x_5009_; uint8_t v_isShared_5010_; uint8_t v_isSharedCheck_5050_; 
v_size_5006_ = lean_ctor_get(v_m_5003_, 0);
v_buckets_5007_ = lean_ctor_get(v_m_5003_, 1);
v_isSharedCheck_5050_ = !lean_is_exclusive(v_m_5003_);
if (v_isSharedCheck_5050_ == 0)
{
v___x_5009_ = v_m_5003_;
v_isShared_5010_ = v_isSharedCheck_5050_;
goto v_resetjp_5008_;
}
else
{
lean_inc(v_buckets_5007_);
lean_inc(v_size_5006_);
lean_dec(v_m_5003_);
v___x_5009_ = lean_box(0);
v_isShared_5010_ = v_isSharedCheck_5050_;
goto v_resetjp_5008_;
}
v_resetjp_5008_:
{
lean_object* v___x_5011_; uint64_t v___x_5012_; uint64_t v___x_5013_; uint64_t v___x_5014_; uint64_t v_fold_5015_; uint64_t v___x_5016_; uint64_t v___x_5017_; uint64_t v___x_5018_; size_t v___x_5019_; size_t v___x_5020_; size_t v___x_5021_; size_t v___x_5022_; size_t v___x_5023_; lean_object* v_bkt_5024_; uint8_t v___x_5025_; 
v___x_5011_ = lean_array_get_size(v_buckets_5007_);
v___x_5012_ = l_Lean_Elab_Tactic_Grind_instHashableSimpCacheKey_hash(v_a_5004_);
v___x_5013_ = 32ULL;
v___x_5014_ = lean_uint64_shift_right(v___x_5012_, v___x_5013_);
v_fold_5015_ = lean_uint64_xor(v___x_5012_, v___x_5014_);
v___x_5016_ = 16ULL;
v___x_5017_ = lean_uint64_shift_right(v_fold_5015_, v___x_5016_);
v___x_5018_ = lean_uint64_xor(v_fold_5015_, v___x_5017_);
v___x_5019_ = lean_uint64_to_usize(v___x_5018_);
v___x_5020_ = lean_usize_of_nat(v___x_5011_);
v___x_5021_ = ((size_t)1ULL);
v___x_5022_ = lean_usize_sub(v___x_5020_, v___x_5021_);
v___x_5023_ = lean_usize_land(v___x_5019_, v___x_5022_);
v_bkt_5024_ = lean_array_uget_borrowed(v_buckets_5007_, v___x_5023_);
v___x_5025_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__1___redArg(v_a_5004_, v_bkt_5024_);
if (v___x_5025_ == 0)
{
lean_object* v___x_5026_; lean_object* v_size_x27_5027_; lean_object* v___x_5028_; lean_object* v_buckets_x27_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; uint8_t v___x_5035_; 
v___x_5026_ = lean_unsigned_to_nat(1u);
v_size_x27_5027_ = lean_nat_add(v_size_5006_, v___x_5026_);
lean_dec(v_size_5006_);
lean_inc(v_bkt_5024_);
v___x_5028_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5028_, 0, v_a_5004_);
lean_ctor_set(v___x_5028_, 1, v_b_5005_);
lean_ctor_set(v___x_5028_, 2, v_bkt_5024_);
v_buckets_x27_5029_ = lean_array_uset(v_buckets_5007_, v___x_5023_, v___x_5028_);
v___x_5030_ = lean_unsigned_to_nat(4u);
v___x_5031_ = lean_nat_mul(v_size_x27_5027_, v___x_5030_);
v___x_5032_ = lean_unsigned_to_nat(3u);
v___x_5033_ = lean_nat_div(v___x_5031_, v___x_5032_);
lean_dec(v___x_5031_);
v___x_5034_ = lean_array_get_size(v_buckets_x27_5029_);
v___x_5035_ = lean_nat_dec_le(v___x_5033_, v___x_5034_);
lean_dec(v___x_5033_);
if (v___x_5035_ == 0)
{
lean_object* v_val_5036_; lean_object* v___x_5038_; 
v_val_5036_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2___redArg(v_buckets_x27_5029_);
if (v_isShared_5010_ == 0)
{
lean_ctor_set(v___x_5009_, 1, v_val_5036_);
lean_ctor_set(v___x_5009_, 0, v_size_x27_5027_);
v___x_5038_ = v___x_5009_;
goto v_reusejp_5037_;
}
else
{
lean_object* v_reuseFailAlloc_5039_; 
v_reuseFailAlloc_5039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5039_, 0, v_size_x27_5027_);
lean_ctor_set(v_reuseFailAlloc_5039_, 1, v_val_5036_);
v___x_5038_ = v_reuseFailAlloc_5039_;
goto v_reusejp_5037_;
}
v_reusejp_5037_:
{
return v___x_5038_;
}
}
else
{
lean_object* v___x_5041_; 
if (v_isShared_5010_ == 0)
{
lean_ctor_set(v___x_5009_, 1, v_buckets_x27_5029_);
lean_ctor_set(v___x_5009_, 0, v_size_x27_5027_);
v___x_5041_ = v___x_5009_;
goto v_reusejp_5040_;
}
else
{
lean_object* v_reuseFailAlloc_5042_; 
v_reuseFailAlloc_5042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5042_, 0, v_size_x27_5027_);
lean_ctor_set(v_reuseFailAlloc_5042_, 1, v_buckets_x27_5029_);
v___x_5041_ = v_reuseFailAlloc_5042_;
goto v_reusejp_5040_;
}
v_reusejp_5040_:
{
return v___x_5041_;
}
}
}
else
{
lean_object* v___x_5043_; lean_object* v_buckets_x27_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5048_; 
lean_inc(v_bkt_5024_);
v___x_5043_ = lean_box(0);
v_buckets_x27_5044_ = lean_array_uset(v_buckets_5007_, v___x_5023_, v___x_5043_);
v___x_5045_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__3___redArg(v_a_5004_, v_b_5005_, v_bkt_5024_);
v___x_5046_ = lean_array_uset(v_buckets_x27_5044_, v___x_5023_, v___x_5045_);
if (v_isShared_5010_ == 0)
{
lean_ctor_set(v___x_5009_, 1, v___x_5046_);
v___x_5048_ = v___x_5009_;
goto v_reusejp_5047_;
}
else
{
lean_object* v_reuseFailAlloc_5049_; 
v_reuseFailAlloc_5049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5049_, 0, v_size_5006_);
lean_ctor_set(v_reuseFailAlloc_5049_, 1, v___x_5046_);
v___x_5048_ = v_reuseFailAlloc_5049_;
goto v_reusejp_5047_;
}
v_reusejp_5047_:
{
return v___x_5048_;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__0(void){
_start:
{
lean_object* v___x_5051_; lean_object* v___x_5052_; 
v___x_5051_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__0, &l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__0_once, _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_addExtraTheorems___closed__0);
v___x_5052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5052_, 0, v___x_5051_);
return v___x_5052_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__1(void){
_start:
{
lean_object* v___x_5053_; lean_object* v___x_5054_; lean_object* v___x_5055_; 
v___x_5053_ = lean_obj_once(&l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__0, &l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__0);
v___x_5054_ = lean_unsigned_to_nat(0u);
v___x_5055_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5055_, 0, v___x_5054_);
lean_ctor_set(v___x_5055_, 1, v___x_5053_);
lean_ctor_set(v___x_5055_, 2, v___x_5053_);
lean_ctor_set(v___x_5055_, 3, v___x_5053_);
return v___x_5055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_simpGoal___redArg(lean_object* v_goal_5056_, lean_object* v_methods_5057_, lean_object* v_config_5058_, lean_object* v_cacheKey_x3f_5059_, lean_object* v_a_5060_, lean_object* v_a_5061_, lean_object* v_a_5062_, lean_object* v_a_5063_, lean_object* v_a_5064_, lean_object* v_a_5065_){
_start:
{
lean_object* v___y_5068_; lean_object* v___y_5069_; lean_object* v_simpState_5085_; lean_object* v___y_5086_; lean_object* v___y_5087_; lean_object* v___y_5088_; lean_object* v___y_5089_; lean_object* v___y_5090_; lean_object* v___y_5091_; 
if (lean_obj_tag(v_cacheKey_x3f_5059_) == 0)
{
lean_object* v___x_5144_; 
v___x_5144_ = lean_obj_once(&l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__1, &l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__1);
v_simpState_5085_ = v___x_5144_;
v___y_5086_ = v_a_5060_;
v___y_5087_ = v_a_5061_;
v___y_5088_ = v_a_5062_;
v___y_5089_ = v_a_5063_;
v___y_5090_ = v_a_5064_;
v___y_5091_ = v_a_5065_;
goto v___jp_5084_;
}
else
{
lean_object* v_val_5145_; lean_object* v___x_5146_; lean_object* v_key_5147_; lean_object* v___x_5148_; lean_object* v_cache_5149_; lean_object* v_simpState_5150_; lean_object* v___x_5151_; 
v_val_5145_ = lean_ctor_get(v_cacheKey_x3f_5059_, 0);
v___x_5146_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems___closed__0));
lean_inc(v_val_5145_);
v_key_5147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_5147_, 0, v_val_5145_);
lean_ctor_set(v_key_5147_, 1, v___x_5146_);
v___x_5148_ = lean_st_ref_get(v_a_5061_);
v_cache_5149_ = lean_ctor_get(v___x_5148_, 3);
lean_inc_ref(v_cache_5149_);
lean_dec(v___x_5148_);
v_simpState_5150_ = lean_ctor_get(v_cache_5149_, 2);
lean_inc_ref(v_simpState_5150_);
lean_dec_ref(v_cache_5149_);
v___x_5151_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2___redArg(v_simpState_5150_, v_key_5147_);
lean_dec_ref_known(v_key_5147_, 2);
lean_dec_ref(v_simpState_5150_);
if (lean_obj_tag(v___x_5151_) == 0)
{
lean_object* v___x_5152_; 
v___x_5152_ = lean_obj_once(&l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__1, &l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__1);
v_simpState_5085_ = v___x_5152_;
v___y_5086_ = v_a_5060_;
v___y_5087_ = v_a_5061_;
v___y_5088_ = v_a_5062_;
v___y_5089_ = v_a_5063_;
v___y_5090_ = v_a_5064_;
v___y_5091_ = v_a_5065_;
goto v___jp_5084_;
}
else
{
lean_object* v_val_5153_; 
v_val_5153_ = lean_ctor_get(v___x_5151_, 0);
lean_inc(v_val_5153_);
lean_dec_ref_known(v___x_5151_, 1);
v_simpState_5085_ = v_val_5153_;
v___y_5086_ = v_a_5060_;
v___y_5087_ = v_a_5061_;
v___y_5088_ = v_a_5062_;
v___y_5089_ = v_a_5063_;
v___y_5090_ = v_a_5064_;
v___y_5091_ = v_a_5065_;
goto v___jp_5084_;
}
}
v___jp_5067_:
{
switch(lean_obj_tag(v___y_5068_))
{
case 0:
{
lean_object* v___x_5070_; lean_object* v___x_5071_; 
lean_dec_ref(v___y_5069_);
v___x_5070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5070_, 0, v_goal_5056_);
v___x_5071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5071_, 0, v___x_5070_);
return v___x_5071_;
}
case 1:
{
lean_object* v___x_5072_; lean_object* v___x_5073_; 
lean_dec_ref(v___y_5069_);
lean_dec_ref(v_goal_5056_);
v___x_5072_ = lean_box(0);
v___x_5073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5073_, 0, v___x_5072_);
return v___x_5073_;
}
default: 
{
lean_object* v_mvarId_5074_; lean_object* v___x_5076_; uint8_t v_isShared_5077_; uint8_t v_isSharedCheck_5083_; 
lean_dec_ref(v_goal_5056_);
v_mvarId_5074_ = lean_ctor_get(v___y_5068_, 0);
v_isSharedCheck_5083_ = !lean_is_exclusive(v___y_5068_);
if (v_isSharedCheck_5083_ == 0)
{
v___x_5076_ = v___y_5068_;
v_isShared_5077_ = v_isSharedCheck_5083_;
goto v_resetjp_5075_;
}
else
{
lean_inc(v_mvarId_5074_);
lean_dec(v___y_5068_);
v___x_5076_ = lean_box(0);
v_isShared_5077_ = v_isSharedCheck_5083_;
goto v_resetjp_5075_;
}
v_resetjp_5075_:
{
lean_object* v___x_5078_; lean_object* v___x_5080_; 
v___x_5078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5078_, 0, v___y_5069_);
lean_ctor_set(v___x_5078_, 1, v_mvarId_5074_);
if (v_isShared_5077_ == 0)
{
lean_ctor_set_tag(v___x_5076_, 1);
lean_ctor_set(v___x_5076_, 0, v___x_5078_);
v___x_5080_ = v___x_5076_;
goto v_reusejp_5079_;
}
else
{
lean_object* v_reuseFailAlloc_5082_; 
v_reuseFailAlloc_5082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5082_, 0, v___x_5078_);
v___x_5080_ = v_reuseFailAlloc_5082_;
goto v_reusejp_5079_;
}
v_reusejp_5079_:
{
lean_object* v___x_5081_; 
v___x_5081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5081_, 0, v___x_5080_);
return v___x_5081_;
}
}
}
}
}
v___jp_5084_:
{
lean_object* v_toGoalState_5092_; lean_object* v_mvarId_5093_; lean_object* v___f_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; 
v_toGoalState_5092_ = lean_ctor_get(v_goal_5056_, 0);
v_mvarId_5093_ = lean_ctor_get(v_goal_5056_, 1);
lean_inc_n(v_mvarId_5093_, 2);
v___f_5094_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Grind_simpGoal___redArg___lam__0___boxed), 11, 1);
lean_closure_set(v___f_5094_, 0, v_mvarId_5093_);
v___x_5095_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_SimpM_run___boxed), 12, 5);
lean_closure_set(v___x_5095_, 0, lean_box(0));
lean_closure_set(v___x_5095_, 1, v___f_5094_);
lean_closure_set(v___x_5095_, 2, v_methods_5057_);
lean_closure_set(v___x_5095_, 3, v_config_5058_);
lean_closure_set(v___x_5095_, 4, v_simpState_5085_);
v___x_5096_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__0___boxed), 10, 3);
lean_closure_set(v___x_5096_, 0, lean_box(0));
lean_closure_set(v___x_5096_, 1, v_mvarId_5093_);
lean_closure_set(v___x_5096_, 2, v___x_5095_);
v___x_5097_ = l_Lean_Elab_Tactic_Grind_liftSymM___redArg(v___x_5096_, v___y_5086_, v___y_5087_, v___y_5088_, v___y_5089_, v___y_5090_, v___y_5091_);
if (lean_obj_tag(v___x_5097_) == 0)
{
lean_object* v_a_5098_; 
v_a_5098_ = lean_ctor_get(v___x_5097_, 0);
lean_inc(v_a_5098_);
lean_dec_ref_known(v___x_5097_, 1);
if (lean_obj_tag(v_cacheKey_x3f_5059_) == 1)
{
lean_object* v_fst_5099_; lean_object* v_snd_5100_; lean_object* v___x_5102_; uint8_t v_isShared_5103_; uint8_t v_isSharedCheck_5134_; 
v_fst_5099_ = lean_ctor_get(v_a_5098_, 0);
v_snd_5100_ = lean_ctor_get(v_a_5098_, 1);
v_isSharedCheck_5134_ = !lean_is_exclusive(v_a_5098_);
if (v_isSharedCheck_5134_ == 0)
{
v___x_5102_ = v_a_5098_;
v_isShared_5103_ = v_isSharedCheck_5134_;
goto v_resetjp_5101_;
}
else
{
lean_inc(v_snd_5100_);
lean_inc(v_fst_5099_);
lean_dec(v_a_5098_);
v___x_5102_ = lean_box(0);
v_isShared_5103_ = v_isSharedCheck_5134_;
goto v_resetjp_5101_;
}
v_resetjp_5101_:
{
lean_object* v_val_5104_; lean_object* v___x_5105_; lean_object* v___x_5107_; 
v_val_5104_ = lean_ctor_get(v_cacheKey_x3f_5059_, 0);
v___x_5105_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems___closed__0));
lean_inc(v_val_5104_);
if (v_isShared_5103_ == 0)
{
lean_ctor_set(v___x_5102_, 1, v___x_5105_);
lean_ctor_set(v___x_5102_, 0, v_val_5104_);
v___x_5107_ = v___x_5102_;
goto v_reusejp_5106_;
}
else
{
lean_object* v_reuseFailAlloc_5133_; 
v_reuseFailAlloc_5133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5133_, 0, v_val_5104_);
lean_ctor_set(v_reuseFailAlloc_5133_, 1, v___x_5105_);
v___x_5107_ = v_reuseFailAlloc_5133_;
goto v_reusejp_5106_;
}
v_reusejp_5106_:
{
lean_object* v___x_5108_; lean_object* v_cache_5109_; lean_object* v_symState_5110_; lean_object* v_grindState_5111_; lean_object* v_goals_5112_; lean_object* v___x_5114_; uint8_t v_isShared_5115_; uint8_t v_isSharedCheck_5132_; 
v___x_5108_ = lean_st_ref_take(v___y_5087_);
v_cache_5109_ = lean_ctor_get(v___x_5108_, 3);
v_symState_5110_ = lean_ctor_get(v___x_5108_, 0);
v_grindState_5111_ = lean_ctor_get(v___x_5108_, 1);
v_goals_5112_ = lean_ctor_get(v___x_5108_, 2);
v_isSharedCheck_5132_ = !lean_is_exclusive(v___x_5108_);
if (v_isSharedCheck_5132_ == 0)
{
v___x_5114_ = v___x_5108_;
v_isShared_5115_ = v_isSharedCheck_5132_;
goto v_resetjp_5113_;
}
else
{
lean_inc(v_cache_5109_);
lean_inc(v_goals_5112_);
lean_inc(v_grindState_5111_);
lean_inc(v_symState_5110_);
lean_dec(v___x_5108_);
v___x_5114_ = lean_box(0);
v_isShared_5115_ = v_isSharedCheck_5132_;
goto v_resetjp_5113_;
}
v_resetjp_5113_:
{
lean_object* v_backwardRuleName_5116_; lean_object* v_backwardRuleSyntax_5117_; lean_object* v_simpState_5118_; lean_object* v_dsimpState_5119_; lean_object* v___x_5121_; uint8_t v_isShared_5122_; uint8_t v_isSharedCheck_5131_; 
v_backwardRuleName_5116_ = lean_ctor_get(v_cache_5109_, 0);
v_backwardRuleSyntax_5117_ = lean_ctor_get(v_cache_5109_, 1);
v_simpState_5118_ = lean_ctor_get(v_cache_5109_, 2);
v_dsimpState_5119_ = lean_ctor_get(v_cache_5109_, 3);
v_isSharedCheck_5131_ = !lean_is_exclusive(v_cache_5109_);
if (v_isSharedCheck_5131_ == 0)
{
v___x_5121_ = v_cache_5109_;
v_isShared_5122_ = v_isSharedCheck_5131_;
goto v_resetjp_5120_;
}
else
{
lean_inc(v_dsimpState_5119_);
lean_inc(v_simpState_5118_);
lean_inc(v_backwardRuleSyntax_5117_);
lean_inc(v_backwardRuleName_5116_);
lean_dec(v_cache_5109_);
v___x_5121_ = lean_box(0);
v_isShared_5122_ = v_isSharedCheck_5131_;
goto v_resetjp_5120_;
}
v_resetjp_5120_:
{
lean_object* v___x_5123_; lean_object* v___x_5125_; 
v___x_5123_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1___redArg(v_simpState_5118_, v___x_5107_, v_snd_5100_);
if (v_isShared_5122_ == 0)
{
lean_ctor_set(v___x_5121_, 2, v___x_5123_);
v___x_5125_ = v___x_5121_;
goto v_reusejp_5124_;
}
else
{
lean_object* v_reuseFailAlloc_5130_; 
v_reuseFailAlloc_5130_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_5130_, 0, v_backwardRuleName_5116_);
lean_ctor_set(v_reuseFailAlloc_5130_, 1, v_backwardRuleSyntax_5117_);
lean_ctor_set(v_reuseFailAlloc_5130_, 2, v___x_5123_);
lean_ctor_set(v_reuseFailAlloc_5130_, 3, v_dsimpState_5119_);
v___x_5125_ = v_reuseFailAlloc_5130_;
goto v_reusejp_5124_;
}
v_reusejp_5124_:
{
lean_object* v___x_5127_; 
if (v_isShared_5115_ == 0)
{
lean_ctor_set(v___x_5114_, 3, v___x_5125_);
v___x_5127_ = v___x_5114_;
goto v_reusejp_5126_;
}
else
{
lean_object* v_reuseFailAlloc_5129_; 
v_reuseFailAlloc_5129_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_5129_, 0, v_symState_5110_);
lean_ctor_set(v_reuseFailAlloc_5129_, 1, v_grindState_5111_);
lean_ctor_set(v_reuseFailAlloc_5129_, 2, v_goals_5112_);
lean_ctor_set(v_reuseFailAlloc_5129_, 3, v___x_5125_);
v___x_5127_ = v_reuseFailAlloc_5129_;
goto v_reusejp_5126_;
}
v_reusejp_5126_:
{
lean_object* v___x_5128_; 
v___x_5128_ = lean_st_ref_put(v___y_5087_, v___x_5127_);
lean_inc_ref(v_toGoalState_5092_);
v___y_5068_ = v_fst_5099_;
v___y_5069_ = v_toGoalState_5092_;
goto v___jp_5067_;
}
}
}
}
}
}
}
else
{
lean_object* v_fst_5135_; 
v_fst_5135_ = lean_ctor_get(v_a_5098_, 0);
lean_inc(v_fst_5135_);
lean_dec(v_a_5098_);
lean_inc_ref(v_toGoalState_5092_);
v___y_5068_ = v_fst_5135_;
v___y_5069_ = v_toGoalState_5092_;
goto v___jp_5067_;
}
}
else
{
lean_object* v_a_5136_; lean_object* v___x_5138_; uint8_t v_isShared_5139_; uint8_t v_isSharedCheck_5143_; 
lean_dec_ref(v_goal_5056_);
v_a_5136_ = lean_ctor_get(v___x_5097_, 0);
v_isSharedCheck_5143_ = !lean_is_exclusive(v___x_5097_);
if (v_isSharedCheck_5143_ == 0)
{
v___x_5138_ = v___x_5097_;
v_isShared_5139_ = v_isSharedCheck_5143_;
goto v_resetjp_5137_;
}
else
{
lean_inc(v_a_5136_);
lean_dec(v___x_5097_);
v___x_5138_ = lean_box(0);
v_isShared_5139_ = v_isSharedCheck_5143_;
goto v_resetjp_5137_;
}
v_resetjp_5137_:
{
lean_object* v___x_5141_; 
if (v_isShared_5139_ == 0)
{
v___x_5141_ = v___x_5138_;
goto v_reusejp_5140_;
}
else
{
lean_object* v_reuseFailAlloc_5142_; 
v_reuseFailAlloc_5142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5142_, 0, v_a_5136_);
v___x_5141_ = v_reuseFailAlloc_5142_;
goto v_reusejp_5140_;
}
v_reusejp_5140_:
{
return v___x_5141_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_simpGoal___redArg___boxed(lean_object* v_goal_5154_, lean_object* v_methods_5155_, lean_object* v_config_5156_, lean_object* v_cacheKey_x3f_5157_, lean_object* v_a_5158_, lean_object* v_a_5159_, lean_object* v_a_5160_, lean_object* v_a_5161_, lean_object* v_a_5162_, lean_object* v_a_5163_, lean_object* v_a_5164_){
_start:
{
lean_object* v_res_5165_; 
v_res_5165_ = l_Lean_Elab_Tactic_Grind_simpGoal___redArg(v_goal_5154_, v_methods_5155_, v_config_5156_, v_cacheKey_x3f_5157_, v_a_5158_, v_a_5159_, v_a_5160_, v_a_5161_, v_a_5162_, v_a_5163_);
lean_dec(v_a_5163_);
lean_dec_ref(v_a_5162_);
lean_dec(v_a_5161_);
lean_dec_ref(v_a_5160_);
lean_dec(v_a_5159_);
lean_dec_ref(v_a_5158_);
lean_dec(v_cacheKey_x3f_5157_);
return v_res_5165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_simpGoal(lean_object* v_goal_5166_, lean_object* v_methods_5167_, lean_object* v_config_5168_, lean_object* v_cacheKey_x3f_5169_, lean_object* v_a_5170_, lean_object* v_a_5171_, lean_object* v_a_5172_, lean_object* v_a_5173_, lean_object* v_a_5174_, lean_object* v_a_5175_, lean_object* v_a_5176_, lean_object* v_a_5177_){
_start:
{
lean_object* v___x_5179_; 
v___x_5179_ = l_Lean_Elab_Tactic_Grind_simpGoal___redArg(v_goal_5166_, v_methods_5167_, v_config_5168_, v_cacheKey_x3f_5169_, v_a_5170_, v_a_5171_, v_a_5174_, v_a_5175_, v_a_5176_, v_a_5177_);
return v___x_5179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_simpGoal___boxed(lean_object* v_goal_5180_, lean_object* v_methods_5181_, lean_object* v_config_5182_, lean_object* v_cacheKey_x3f_5183_, lean_object* v_a_5184_, lean_object* v_a_5185_, lean_object* v_a_5186_, lean_object* v_a_5187_, lean_object* v_a_5188_, lean_object* v_a_5189_, lean_object* v_a_5190_, lean_object* v_a_5191_, lean_object* v_a_5192_){
_start:
{
lean_object* v_res_5193_; 
v_res_5193_ = l_Lean_Elab_Tactic_Grind_simpGoal(v_goal_5180_, v_methods_5181_, v_config_5182_, v_cacheKey_x3f_5183_, v_a_5184_, v_a_5185_, v_a_5186_, v_a_5187_, v_a_5188_, v_a_5189_, v_a_5190_, v_a_5191_);
lean_dec(v_a_5191_);
lean_dec_ref(v_a_5190_);
lean_dec(v_a_5189_);
lean_dec_ref(v_a_5188_);
lean_dec(v_a_5187_);
lean_dec_ref(v_a_5186_);
lean_dec(v_a_5185_);
lean_dec_ref(v_a_5184_);
lean_dec(v_cacheKey_x3f_5183_);
return v_res_5193_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1(lean_object* v_00_u03b2_5194_, lean_object* v_m_5195_, lean_object* v_a_5196_, lean_object* v_b_5197_){
_start:
{
lean_object* v___x_5198_; 
v___x_5198_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1___redArg(v_m_5195_, v_a_5196_, v_b_5197_);
return v___x_5198_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2(lean_object* v_00_u03b2_5199_, lean_object* v_m_5200_, lean_object* v_a_5201_){
_start:
{
lean_object* v___x_5202_; 
v___x_5202_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2___redArg(v_m_5200_, v_a_5201_);
return v___x_5202_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2___boxed(lean_object* v_00_u03b2_5203_, lean_object* v_m_5204_, lean_object* v_a_5205_){
_start:
{
lean_object* v_res_5206_; 
v_res_5206_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2(v_00_u03b2_5203_, v_m_5204_, v_a_5205_);
lean_dec_ref(v_a_5205_);
lean_dec_ref(v_m_5204_);
return v_res_5206_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__1(lean_object* v_00_u03b2_5207_, lean_object* v_a_5208_, lean_object* v_x_5209_){
_start:
{
uint8_t v___x_5210_; 
v___x_5210_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__1___redArg(v_a_5208_, v_x_5209_);
return v___x_5210_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__1___boxed(lean_object* v_00_u03b2_5211_, lean_object* v_a_5212_, lean_object* v_x_5213_){
_start:
{
uint8_t v_res_5214_; lean_object* v_r_5215_; 
v_res_5214_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__1(v_00_u03b2_5211_, v_a_5212_, v_x_5213_);
lean_dec(v_x_5213_);
lean_dec_ref(v_a_5212_);
v_r_5215_ = lean_box(v_res_5214_);
return v_r_5215_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2(lean_object* v_00_u03b2_5216_, lean_object* v_data_5217_){
_start:
{
lean_object* v___x_5218_; 
v___x_5218_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2___redArg(v_data_5217_);
return v___x_5218_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__3(lean_object* v_00_u03b2_5219_, lean_object* v_a_5220_, lean_object* v_b_5221_, lean_object* v_x_5222_){
_start:
{
lean_object* v___x_5223_; 
v___x_5223_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__3___redArg(v_a_5220_, v_b_5221_, v_x_5222_);
return v___x_5223_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2_spec__5(lean_object* v_00_u03b2_5224_, lean_object* v_a_5225_, lean_object* v_x_5226_){
_start:
{
lean_object* v___x_5227_; 
v___x_5227_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2_spec__5___redArg(v_a_5225_, v_x_5226_);
return v___x_5227_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2_spec__5___boxed(lean_object* v_00_u03b2_5228_, lean_object* v_a_5229_, lean_object* v_x_5230_){
_start:
{
lean_object* v_res_5231_; 
v_res_5231_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2_spec__5(v_00_u03b2_5228_, v_a_5229_, v_x_5230_);
lean_dec(v_x_5230_);
lean_dec_ref(v_a_5229_);
return v_res_5231_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_5232_, lean_object* v_i_5233_, lean_object* v_source_5234_, lean_object* v_target_5235_){
_start:
{
lean_object* v___x_5236_; 
v___x_5236_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2_spec__3___redArg(v_i_5233_, v_source_5234_, v_target_5235_);
return v___x_5236_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_5237_, lean_object* v_x_5238_, lean_object* v_x_5239_){
_start:
{
lean_object* v___x_5240_; 
v___x_5240_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1_spec__2_spec__3_spec__5___redArg(v_x_5238_, v_x_5239_);
return v___x_5240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_simpMainGoal(lean_object* v_methods_5241_, lean_object* v_config_5242_, lean_object* v_cacheKey_x3f_5243_, lean_object* v_a_5244_, lean_object* v_a_5245_, lean_object* v_a_5246_, lean_object* v_a_5247_, lean_object* v_a_5248_, lean_object* v_a_5249_, lean_object* v_a_5250_, lean_object* v_a_5251_){
_start:
{
lean_object* v___x_5257_; 
v___x_5257_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v_a_5244_, v_a_5245_, v_a_5246_, v_a_5247_, v_a_5248_, v_a_5249_, v_a_5250_, v_a_5251_);
if (lean_obj_tag(v___x_5257_) == 0)
{
lean_object* v_a_5258_; lean_object* v___x_5259_; 
v_a_5258_ = lean_ctor_get(v___x_5257_, 0);
lean_inc_n(v_a_5258_, 2);
lean_dec_ref_known(v___x_5257_, 1);
v___x_5259_ = l_Lean_Elab_Tactic_Grind_simpGoal___redArg(v_a_5258_, v_methods_5241_, v_config_5242_, v_cacheKey_x3f_5243_, v_a_5244_, v_a_5245_, v_a_5248_, v_a_5249_, v_a_5250_, v_a_5251_);
if (lean_obj_tag(v___x_5259_) == 0)
{
lean_object* v_a_5260_; 
v_a_5260_ = lean_ctor_get(v___x_5259_, 0);
lean_inc(v_a_5260_);
lean_dec_ref_known(v___x_5259_, 1);
if (lean_obj_tag(v_a_5260_) == 0)
{
lean_object* v___x_5261_; lean_object* v___x_5262_; 
lean_dec(v_a_5258_);
v___x_5261_ = lean_box(0);
v___x_5262_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal(v___x_5261_, v_a_5244_, v_a_5245_, v_a_5246_, v_a_5247_, v_a_5248_, v_a_5249_, v_a_5250_, v_a_5251_);
if (lean_obj_tag(v___x_5262_) == 0)
{
lean_object* v___x_5264_; uint8_t v_isShared_5265_; uint8_t v_isSharedCheck_5271_; 
v_isSharedCheck_5271_ = !lean_is_exclusive(v___x_5262_);
if (v_isSharedCheck_5271_ == 0)
{
lean_object* v_unused_5272_; 
v_unused_5272_ = lean_ctor_get(v___x_5262_, 0);
lean_dec(v_unused_5272_);
v___x_5264_ = v___x_5262_;
v_isShared_5265_ = v_isSharedCheck_5271_;
goto v_resetjp_5263_;
}
else
{
lean_dec(v___x_5262_);
v___x_5264_ = lean_box(0);
v_isShared_5265_ = v_isSharedCheck_5271_;
goto v_resetjp_5263_;
}
v_resetjp_5263_:
{
uint8_t v___x_5266_; lean_object* v___x_5267_; lean_object* v___x_5269_; 
v___x_5266_ = 1;
v___x_5267_ = lean_box(v___x_5266_);
if (v_isShared_5265_ == 0)
{
lean_ctor_set(v___x_5264_, 0, v___x_5267_);
v___x_5269_ = v___x_5264_;
goto v_reusejp_5268_;
}
else
{
lean_object* v_reuseFailAlloc_5270_; 
v_reuseFailAlloc_5270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5270_, 0, v___x_5267_);
v___x_5269_ = v_reuseFailAlloc_5270_;
goto v_reusejp_5268_;
}
v_reusejp_5268_:
{
return v___x_5269_;
}
}
}
else
{
lean_object* v_a_5273_; lean_object* v___x_5275_; uint8_t v_isShared_5276_; uint8_t v_isSharedCheck_5280_; 
v_a_5273_ = lean_ctor_get(v___x_5262_, 0);
v_isSharedCheck_5280_ = !lean_is_exclusive(v___x_5262_);
if (v_isSharedCheck_5280_ == 0)
{
v___x_5275_ = v___x_5262_;
v_isShared_5276_ = v_isSharedCheck_5280_;
goto v_resetjp_5274_;
}
else
{
lean_inc(v_a_5273_);
lean_dec(v___x_5262_);
v___x_5275_ = lean_box(0);
v_isShared_5276_ = v_isSharedCheck_5280_;
goto v_resetjp_5274_;
}
v_resetjp_5274_:
{
lean_object* v___x_5278_; 
if (v_isShared_5276_ == 0)
{
v___x_5278_ = v___x_5275_;
goto v_reusejp_5277_;
}
else
{
lean_object* v_reuseFailAlloc_5279_; 
v_reuseFailAlloc_5279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5279_, 0, v_a_5273_);
v___x_5278_ = v_reuseFailAlloc_5279_;
goto v_reusejp_5277_;
}
v_reusejp_5277_:
{
return v___x_5278_;
}
}
}
}
else
{
lean_object* v_val_5281_; lean_object* v_mvarId_5282_; lean_object* v_mvarId_5283_; lean_object* v___x_5285_; uint8_t v_isShared_5286_; uint8_t v_isSharedCheck_5301_; 
v_val_5281_ = lean_ctor_get(v_a_5260_, 0);
lean_inc(v_val_5281_);
lean_dec_ref_known(v_a_5260_, 1);
v_mvarId_5282_ = lean_ctor_get(v_val_5281_, 1);
v_mvarId_5283_ = lean_ctor_get(v_a_5258_, 1);
v_isSharedCheck_5301_ = !lean_is_exclusive(v_a_5258_);
if (v_isSharedCheck_5301_ == 0)
{
lean_object* v_unused_5302_; 
v_unused_5302_ = lean_ctor_get(v_a_5258_, 0);
lean_dec(v_unused_5302_);
v___x_5285_ = v_a_5258_;
v_isShared_5286_ = v_isSharedCheck_5301_;
goto v_resetjp_5284_;
}
else
{
lean_inc(v_mvarId_5283_);
lean_dec(v_a_5258_);
v___x_5285_ = lean_box(0);
v_isShared_5286_ = v_isSharedCheck_5301_;
goto v_resetjp_5284_;
}
v_resetjp_5284_:
{
uint8_t v___x_5287_; 
v___x_5287_ = l_Lean_instBEqMVarId_beq(v_mvarId_5282_, v_mvarId_5283_);
lean_dec(v_mvarId_5283_);
if (v___x_5287_ == 0)
{
lean_object* v___x_5288_; lean_object* v___x_5290_; 
v___x_5288_ = lean_box(0);
if (v_isShared_5286_ == 0)
{
lean_ctor_set_tag(v___x_5285_, 1);
lean_ctor_set(v___x_5285_, 1, v___x_5288_);
lean_ctor_set(v___x_5285_, 0, v_val_5281_);
v___x_5290_ = v___x_5285_;
goto v_reusejp_5289_;
}
else
{
lean_object* v_reuseFailAlloc_5300_; 
v_reuseFailAlloc_5300_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5300_, 0, v_val_5281_);
lean_ctor_set(v_reuseFailAlloc_5300_, 1, v___x_5288_);
v___x_5290_ = v_reuseFailAlloc_5300_;
goto v_reusejp_5289_;
}
v_reusejp_5289_:
{
lean_object* v___x_5291_; 
v___x_5291_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal(v___x_5290_, v_a_5244_, v_a_5245_, v_a_5246_, v_a_5247_, v_a_5248_, v_a_5249_, v_a_5250_, v_a_5251_);
if (lean_obj_tag(v___x_5291_) == 0)
{
lean_dec_ref_known(v___x_5291_, 1);
goto v___jp_5253_;
}
else
{
lean_object* v_a_5292_; lean_object* v___x_5294_; uint8_t v_isShared_5295_; uint8_t v_isSharedCheck_5299_; 
v_a_5292_ = lean_ctor_get(v___x_5291_, 0);
v_isSharedCheck_5299_ = !lean_is_exclusive(v___x_5291_);
if (v_isSharedCheck_5299_ == 0)
{
v___x_5294_ = v___x_5291_;
v_isShared_5295_ = v_isSharedCheck_5299_;
goto v_resetjp_5293_;
}
else
{
lean_inc(v_a_5292_);
lean_dec(v___x_5291_);
v___x_5294_ = lean_box(0);
v_isShared_5295_ = v_isSharedCheck_5299_;
goto v_resetjp_5293_;
}
v_resetjp_5293_:
{
lean_object* v___x_5297_; 
if (v_isShared_5295_ == 0)
{
v___x_5297_ = v___x_5294_;
goto v_reusejp_5296_;
}
else
{
lean_object* v_reuseFailAlloc_5298_; 
v_reuseFailAlloc_5298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5298_, 0, v_a_5292_);
v___x_5297_ = v_reuseFailAlloc_5298_;
goto v_reusejp_5296_;
}
v_reusejp_5296_:
{
return v___x_5297_;
}
}
}
}
}
else
{
lean_del_object(v___x_5285_);
lean_dec(v_val_5281_);
goto v___jp_5253_;
}
}
}
}
else
{
lean_object* v_a_5303_; lean_object* v___x_5305_; uint8_t v_isShared_5306_; uint8_t v_isSharedCheck_5310_; 
lean_dec(v_a_5258_);
v_a_5303_ = lean_ctor_get(v___x_5259_, 0);
v_isSharedCheck_5310_ = !lean_is_exclusive(v___x_5259_);
if (v_isSharedCheck_5310_ == 0)
{
v___x_5305_ = v___x_5259_;
v_isShared_5306_ = v_isSharedCheck_5310_;
goto v_resetjp_5304_;
}
else
{
lean_inc(v_a_5303_);
lean_dec(v___x_5259_);
v___x_5305_ = lean_box(0);
v_isShared_5306_ = v_isSharedCheck_5310_;
goto v_resetjp_5304_;
}
v_resetjp_5304_:
{
lean_object* v___x_5308_; 
if (v_isShared_5306_ == 0)
{
v___x_5308_ = v___x_5305_;
goto v_reusejp_5307_;
}
else
{
lean_object* v_reuseFailAlloc_5309_; 
v_reuseFailAlloc_5309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5309_, 0, v_a_5303_);
v___x_5308_ = v_reuseFailAlloc_5309_;
goto v_reusejp_5307_;
}
v_reusejp_5307_:
{
return v___x_5308_;
}
}
}
}
else
{
lean_object* v_a_5311_; lean_object* v___x_5313_; uint8_t v_isShared_5314_; uint8_t v_isSharedCheck_5318_; 
lean_dec_ref(v_config_5242_);
lean_dec_ref(v_methods_5241_);
v_a_5311_ = lean_ctor_get(v___x_5257_, 0);
v_isSharedCheck_5318_ = !lean_is_exclusive(v___x_5257_);
if (v_isSharedCheck_5318_ == 0)
{
v___x_5313_ = v___x_5257_;
v_isShared_5314_ = v_isSharedCheck_5318_;
goto v_resetjp_5312_;
}
else
{
lean_inc(v_a_5311_);
lean_dec(v___x_5257_);
v___x_5313_ = lean_box(0);
v_isShared_5314_ = v_isSharedCheck_5318_;
goto v_resetjp_5312_;
}
v_resetjp_5312_:
{
lean_object* v___x_5316_; 
if (v_isShared_5314_ == 0)
{
v___x_5316_ = v___x_5313_;
goto v_reusejp_5315_;
}
else
{
lean_object* v_reuseFailAlloc_5317_; 
v_reuseFailAlloc_5317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5317_, 0, v_a_5311_);
v___x_5316_ = v_reuseFailAlloc_5317_;
goto v_reusejp_5315_;
}
v_reusejp_5315_:
{
return v___x_5316_;
}
}
}
v___jp_5253_:
{
uint8_t v___x_5254_; lean_object* v___x_5255_; lean_object* v___x_5256_; 
v___x_5254_ = 0;
v___x_5255_ = lean_box(v___x_5254_);
v___x_5256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5256_, 0, v___x_5255_);
return v___x_5256_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_simpMainGoal___boxed(lean_object* v_methods_5319_, lean_object* v_config_5320_, lean_object* v_cacheKey_x3f_5321_, lean_object* v_a_5322_, lean_object* v_a_5323_, lean_object* v_a_5324_, lean_object* v_a_5325_, lean_object* v_a_5326_, lean_object* v_a_5327_, lean_object* v_a_5328_, lean_object* v_a_5329_, lean_object* v_a_5330_){
_start:
{
lean_object* v_res_5331_; 
v_res_5331_ = l_Lean_Elab_Tactic_Grind_simpMainGoal(v_methods_5319_, v_config_5320_, v_cacheKey_x3f_5321_, v_a_5322_, v_a_5323_, v_a_5324_, v_a_5325_, v_a_5326_, v_a_5327_, v_a_5328_, v_a_5329_);
lean_dec(v_a_5329_);
lean_dec_ref(v_a_5328_);
lean_dec(v_a_5327_);
lean_dec_ref(v_a_5326_);
lean_dec(v_a_5325_);
lean_dec_ref(v_a_5324_);
lean_dec(v_a_5323_);
lean_dec_ref(v_a_5322_);
lean_dec(v_cacheKey_x3f_5321_);
return v_res_5331_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0___redArg___lam__0(lean_object* v_x_5332_, lean_object* v___y_5333_, lean_object* v___y_5334_, lean_object* v___y_5335_, lean_object* v___y_5336_, lean_object* v___y_5337_, lean_object* v___y_5338_, lean_object* v___y_5339_, lean_object* v___y_5340_, lean_object* v___y_5341_){
_start:
{
lean_object* v___x_5343_; 
lean_inc(v___y_5337_);
lean_inc_ref(v___y_5336_);
lean_inc(v___y_5335_);
lean_inc_ref(v___y_5334_);
lean_inc(v___y_5333_);
v___x_5343_ = lean_apply_10(v_x_5332_, v___y_5333_, v___y_5334_, v___y_5335_, v___y_5336_, v___y_5337_, v___y_5338_, v___y_5339_, v___y_5340_, v___y_5341_, lean_box(0));
return v___x_5343_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0___redArg___lam__0___boxed(lean_object* v_x_5344_, lean_object* v___y_5345_, lean_object* v___y_5346_, lean_object* v___y_5347_, lean_object* v___y_5348_, lean_object* v___y_5349_, lean_object* v___y_5350_, lean_object* v___y_5351_, lean_object* v___y_5352_, lean_object* v___y_5353_, lean_object* v___y_5354_){
_start:
{
lean_object* v_res_5355_; 
v_res_5355_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0___redArg___lam__0(v_x_5344_, v___y_5345_, v___y_5346_, v___y_5347_, v___y_5348_, v___y_5349_, v___y_5350_, v___y_5351_, v___y_5352_, v___y_5353_);
lean_dec(v___y_5349_);
lean_dec_ref(v___y_5348_);
lean_dec(v___y_5347_);
lean_dec_ref(v___y_5346_);
lean_dec(v___y_5345_);
return v_res_5355_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0___redArg(lean_object* v_mvarId_5356_, lean_object* v_x_5357_, lean_object* v___y_5358_, lean_object* v___y_5359_, lean_object* v___y_5360_, lean_object* v___y_5361_, lean_object* v___y_5362_, lean_object* v___y_5363_, lean_object* v___y_5364_, lean_object* v___y_5365_, lean_object* v___y_5366_){
_start:
{
lean_object* v___f_5368_; lean_object* v___x_5369_; 
lean_inc(v___y_5362_);
lean_inc_ref(v___y_5361_);
lean_inc(v___y_5360_);
lean_inc_ref(v___y_5359_);
lean_inc(v___y_5358_);
v___f_5368_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_5368_, 0, v_x_5357_);
lean_closure_set(v___f_5368_, 1, v___y_5358_);
lean_closure_set(v___f_5368_, 2, v___y_5359_);
lean_closure_set(v___f_5368_, 3, v___y_5360_);
lean_closure_set(v___f_5368_, 4, v___y_5361_);
lean_closure_set(v___f_5368_, 5, v___y_5362_);
v___x_5369_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_5356_, v___f_5368_, v___y_5363_, v___y_5364_, v___y_5365_, v___y_5366_);
if (lean_obj_tag(v___x_5369_) == 0)
{
return v___x_5369_;
}
else
{
lean_object* v_a_5370_; lean_object* v___x_5372_; uint8_t v_isShared_5373_; uint8_t v_isSharedCheck_5377_; 
v_a_5370_ = lean_ctor_get(v___x_5369_, 0);
v_isSharedCheck_5377_ = !lean_is_exclusive(v___x_5369_);
if (v_isSharedCheck_5377_ == 0)
{
v___x_5372_ = v___x_5369_;
v_isShared_5373_ = v_isSharedCheck_5377_;
goto v_resetjp_5371_;
}
else
{
lean_inc(v_a_5370_);
lean_dec(v___x_5369_);
v___x_5372_ = lean_box(0);
v_isShared_5373_ = v_isSharedCheck_5377_;
goto v_resetjp_5371_;
}
v_resetjp_5371_:
{
lean_object* v___x_5375_; 
if (v_isShared_5373_ == 0)
{
v___x_5375_ = v___x_5372_;
goto v_reusejp_5374_;
}
else
{
lean_object* v_reuseFailAlloc_5376_; 
v_reuseFailAlloc_5376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5376_, 0, v_a_5370_);
v___x_5375_ = v_reuseFailAlloc_5376_;
goto v_reusejp_5374_;
}
v_reusejp_5374_:
{
return v___x_5375_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0___redArg___boxed(lean_object* v_mvarId_5378_, lean_object* v_x_5379_, lean_object* v___y_5380_, lean_object* v___y_5381_, lean_object* v___y_5382_, lean_object* v___y_5383_, lean_object* v___y_5384_, lean_object* v___y_5385_, lean_object* v___y_5386_, lean_object* v___y_5387_, lean_object* v___y_5388_, lean_object* v___y_5389_){
_start:
{
lean_object* v_res_5390_; 
v_res_5390_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0___redArg(v_mvarId_5378_, v_x_5379_, v___y_5380_, v___y_5381_, v___y_5382_, v___y_5383_, v___y_5384_, v___y_5385_, v___y_5386_, v___y_5387_, v___y_5388_);
lean_dec(v___y_5388_);
lean_dec_ref(v___y_5387_);
lean_dec(v___y_5386_);
lean_dec_ref(v___y_5385_);
lean_dec(v___y_5384_);
lean_dec_ref(v___y_5383_);
lean_dec(v___y_5382_);
lean_dec_ref(v___y_5381_);
lean_dec(v___y_5380_);
return v_res_5390_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0(lean_object* v_00_u03b1_5391_, lean_object* v_mvarId_5392_, lean_object* v_x_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_, lean_object* v___y_5397_, lean_object* v___y_5398_, lean_object* v___y_5399_, lean_object* v___y_5400_, lean_object* v___y_5401_, lean_object* v___y_5402_){
_start:
{
lean_object* v___x_5404_; 
v___x_5404_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0___redArg(v_mvarId_5392_, v_x_5393_, v___y_5394_, v___y_5395_, v___y_5396_, v___y_5397_, v___y_5398_, v___y_5399_, v___y_5400_, v___y_5401_, v___y_5402_);
return v___x_5404_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0___boxed(lean_object* v_00_u03b1_5405_, lean_object* v_mvarId_5406_, lean_object* v_x_5407_, lean_object* v___y_5408_, lean_object* v___y_5409_, lean_object* v___y_5410_, lean_object* v___y_5411_, lean_object* v___y_5412_, lean_object* v___y_5413_, lean_object* v___y_5414_, lean_object* v___y_5415_, lean_object* v___y_5416_, lean_object* v___y_5417_){
_start:
{
lean_object* v_res_5418_; 
v_res_5418_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0(v_00_u03b1_5405_, v_mvarId_5406_, v_x_5407_, v___y_5408_, v___y_5409_, v___y_5410_, v___y_5411_, v___y_5412_, v___y_5413_, v___y_5414_, v___y_5415_, v___y_5416_);
lean_dec(v___y_5416_);
lean_dec_ref(v___y_5415_);
lean_dec(v___y_5414_);
lean_dec_ref(v___y_5413_);
lean_dec(v___y_5412_);
lean_dec_ref(v___y_5411_);
lean_dec(v___y_5410_);
lean_dec_ref(v___y_5409_);
lean_dec(v___y_5408_);
return v_res_5418_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__0(lean_object* v_mvarId_5419_, lean_object* v_fst_5420_, lean_object* v_snd_5421_, lean_object* v___y_5422_, lean_object* v___y_5423_, lean_object* v___y_5424_, lean_object* v___y_5425_, lean_object* v___y_5426_, lean_object* v___y_5427_, lean_object* v___y_5428_, lean_object* v___y_5429_, lean_object* v___y_5430_, lean_object* v___y_5431_){
_start:
{
lean_object* v___x_5433_; 
v___x_5433_ = l_Lean_MVarId_getType(v_mvarId_5419_, v___y_5428_, v___y_5429_, v___y_5430_, v___y_5431_);
if (lean_obj_tag(v___x_5433_) == 0)
{
lean_object* v_a_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; 
v_a_5434_ = lean_ctor_get(v___x_5433_, 0);
lean_inc(v_a_5434_);
lean_dec_ref_known(v___x_5433_, 1);
v___x_5435_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_5435_, 0, v_a_5434_);
v___x_5436_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v___x_5435_, v_fst_5420_, v_snd_5421_, v___y_5422_, v___y_5426_, v___y_5427_, v___y_5428_, v___y_5429_, v___y_5430_, v___y_5431_);
return v___x_5436_;
}
else
{
lean_object* v_a_5437_; lean_object* v___x_5439_; uint8_t v_isShared_5440_; uint8_t v_isSharedCheck_5444_; 
lean_dec_ref(v___y_5422_);
lean_dec_ref(v_snd_5421_);
lean_dec_ref(v_fst_5420_);
v_a_5437_ = lean_ctor_get(v___x_5433_, 0);
v_isSharedCheck_5444_ = !lean_is_exclusive(v___x_5433_);
if (v_isSharedCheck_5444_ == 0)
{
v___x_5439_ = v___x_5433_;
v_isShared_5440_ = v_isSharedCheck_5444_;
goto v_resetjp_5438_;
}
else
{
lean_inc(v_a_5437_);
lean_dec(v___x_5433_);
v___x_5439_ = lean_box(0);
v_isShared_5440_ = v_isSharedCheck_5444_;
goto v_resetjp_5438_;
}
v_resetjp_5438_:
{
lean_object* v___x_5442_; 
if (v_isShared_5440_ == 0)
{
v___x_5442_ = v___x_5439_;
goto v_reusejp_5441_;
}
else
{
lean_object* v_reuseFailAlloc_5443_; 
v_reuseFailAlloc_5443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5443_, 0, v_a_5437_);
v___x_5442_ = v_reuseFailAlloc_5443_;
goto v_reusejp_5441_;
}
v_reusejp_5441_:
{
return v___x_5442_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__0___boxed(lean_object* v_mvarId_5445_, lean_object* v_fst_5446_, lean_object* v_snd_5447_, lean_object* v___y_5448_, lean_object* v___y_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_, lean_object* v___y_5452_, lean_object* v___y_5453_, lean_object* v___y_5454_, lean_object* v___y_5455_, lean_object* v___y_5456_, lean_object* v___y_5457_, lean_object* v___y_5458_){
_start:
{
lean_object* v_res_5459_; 
v_res_5459_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__0(v_mvarId_5445_, v_fst_5446_, v_snd_5447_, v___y_5448_, v___y_5449_, v___y_5450_, v___y_5451_, v___y_5452_, v___y_5453_, v___y_5454_, v___y_5455_, v___y_5456_, v___y_5457_);
lean_dec(v___y_5457_);
lean_dec_ref(v___y_5456_);
lean_dec(v___y_5455_);
lean_dec_ref(v___y_5454_);
lean_dec(v___y_5453_);
lean_dec_ref(v___y_5452_);
lean_dec(v___y_5451_);
lean_dec_ref(v___y_5450_);
lean_dec(v___y_5449_);
return v_res_5459_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__1(lean_object* v_fst_5460_, lean_object* v_mvarId_5461_, lean_object* v___y_5462_, lean_object* v___y_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_, lean_object* v___y_5467_, lean_object* v___y_5468_, lean_object* v___y_5469_, lean_object* v___y_5470_){
_start:
{
lean_object* v___x_5472_; 
v___x_5472_ = l_Lean_Meta_Sym_Simp_Result_toSimpGoalResult(v_fst_5460_, v_mvarId_5461_, v___y_5465_, v___y_5466_, v___y_5467_, v___y_5468_, v___y_5469_, v___y_5470_);
return v___x_5472_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__1___boxed(lean_object* v_fst_5473_, lean_object* v_mvarId_5474_, lean_object* v___y_5475_, lean_object* v___y_5476_, lean_object* v___y_5477_, lean_object* v___y_5478_, lean_object* v___y_5479_, lean_object* v___y_5480_, lean_object* v___y_5481_, lean_object* v___y_5482_, lean_object* v___y_5483_, lean_object* v___y_5484_){
_start:
{
lean_object* v_res_5485_; 
v_res_5485_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__1(v_fst_5473_, v_mvarId_5474_, v___y_5475_, v___y_5476_, v___y_5477_, v___y_5478_, v___y_5479_, v___y_5480_, v___y_5481_, v___y_5482_, v___y_5483_);
lean_dec(v___y_5483_);
lean_dec_ref(v___y_5482_);
lean_dec(v___y_5481_);
lean_dec_ref(v___y_5480_);
lean_dec(v___y_5479_);
lean_dec_ref(v___y_5478_);
lean_dec(v___y_5477_);
lean_dec_ref(v___y_5476_);
lean_dec(v___y_5475_);
return v_res_5485_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__1(size_t v_sz_5486_, size_t v_i_5487_, lean_object* v_bs_5488_){
_start:
{
uint8_t v___x_5489_; 
v___x_5489_ = lean_usize_dec_lt(v_i_5487_, v_sz_5486_);
if (v___x_5489_ == 0)
{
lean_object* v___x_5490_; 
v___x_5490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5490_, 0, v_bs_5488_);
return v___x_5490_;
}
else
{
lean_object* v_v_5491_; lean_object* v___x_5492_; lean_object* v_bs_x27_5493_; size_t v___x_5494_; size_t v___x_5495_; lean_object* v___x_5496_; 
v_v_5491_ = lean_array_uget(v_bs_5488_, v_i_5487_);
v___x_5492_ = lean_unsigned_to_nat(0u);
v_bs_x27_5493_ = lean_array_uset(v_bs_5488_, v_i_5487_, v___x_5492_);
v___x_5494_ = ((size_t)1ULL);
v___x_5495_ = lean_usize_add(v_i_5487_, v___x_5494_);
v___x_5496_ = lean_array_uset(v_bs_x27_5493_, v_i_5487_, v_v_5491_);
v_i_5487_ = v___x_5495_;
v_bs_5488_ = v___x_5496_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__1___boxed(lean_object* v_sz_5498_, lean_object* v_i_5499_, lean_object* v_bs_5500_){
_start:
{
size_t v_sz_boxed_5501_; size_t v_i_boxed_5502_; lean_object* v_res_5503_; 
v_sz_boxed_5501_ = lean_unbox_usize(v_sz_5498_);
lean_dec(v_sz_5498_);
v_i_boxed_5502_ = lean_unbox_usize(v_i_5499_);
lean_dec(v_i_5499_);
v_res_5503_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__1(v_sz_boxed_5501_, v_i_boxed_5502_, v_bs_5500_);
return v_res_5503_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__2(uint8_t v___x_5504_, uint8_t v___x_5505_, lean_object* v_as_5506_, size_t v_i_5507_, size_t v_stop_5508_, lean_object* v_b_5509_){
_start:
{
lean_object* v___y_5511_; uint8_t v___x_5515_; 
v___x_5515_ = lean_usize_dec_eq(v_i_5507_, v_stop_5508_);
if (v___x_5515_ == 0)
{
lean_object* v_fst_5516_; uint8_t v___x_5517_; 
v_fst_5516_ = lean_ctor_get(v_b_5509_, 0);
v___x_5517_ = lean_unbox(v_fst_5516_);
if (v___x_5517_ == 0)
{
lean_object* v_snd_5518_; lean_object* v___x_5520_; uint8_t v_isShared_5521_; uint8_t v_isSharedCheck_5526_; 
v_snd_5518_ = lean_ctor_get(v_b_5509_, 1);
v_isSharedCheck_5526_ = !lean_is_exclusive(v_b_5509_);
if (v_isSharedCheck_5526_ == 0)
{
lean_object* v_unused_5527_; 
v_unused_5527_ = lean_ctor_get(v_b_5509_, 0);
lean_dec(v_unused_5527_);
v___x_5520_ = v_b_5509_;
v_isShared_5521_ = v_isSharedCheck_5526_;
goto v_resetjp_5519_;
}
else
{
lean_inc(v_snd_5518_);
lean_dec(v_b_5509_);
v___x_5520_ = lean_box(0);
v_isShared_5521_ = v_isSharedCheck_5526_;
goto v_resetjp_5519_;
}
v_resetjp_5519_:
{
lean_object* v___x_5522_; lean_object* v___x_5524_; 
v___x_5522_ = lean_box(v___x_5504_);
if (v_isShared_5521_ == 0)
{
lean_ctor_set(v___x_5520_, 0, v___x_5522_);
v___x_5524_ = v___x_5520_;
goto v_reusejp_5523_;
}
else
{
lean_object* v_reuseFailAlloc_5525_; 
v_reuseFailAlloc_5525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5525_, 0, v___x_5522_);
lean_ctor_set(v_reuseFailAlloc_5525_, 1, v_snd_5518_);
v___x_5524_ = v_reuseFailAlloc_5525_;
goto v_reusejp_5523_;
}
v_reusejp_5523_:
{
v___y_5511_ = v___x_5524_;
goto v___jp_5510_;
}
}
}
else
{
lean_object* v_snd_5528_; lean_object* v___x_5530_; uint8_t v_isShared_5531_; uint8_t v_isSharedCheck_5538_; 
v_snd_5528_ = lean_ctor_get(v_b_5509_, 1);
v_isSharedCheck_5538_ = !lean_is_exclusive(v_b_5509_);
if (v_isSharedCheck_5538_ == 0)
{
lean_object* v_unused_5539_; 
v_unused_5539_ = lean_ctor_get(v_b_5509_, 0);
lean_dec(v_unused_5539_);
v___x_5530_ = v_b_5509_;
v_isShared_5531_ = v_isSharedCheck_5538_;
goto v_resetjp_5529_;
}
else
{
lean_inc(v_snd_5528_);
lean_dec(v_b_5509_);
v___x_5530_ = lean_box(0);
v_isShared_5531_ = v_isSharedCheck_5538_;
goto v_resetjp_5529_;
}
v_resetjp_5529_:
{
lean_object* v___x_5532_; lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v___x_5536_; 
v___x_5532_ = lean_array_uget_borrowed(v_as_5506_, v_i_5507_);
lean_inc(v___x_5532_);
v___x_5533_ = lean_array_push(v_snd_5528_, v___x_5532_);
v___x_5534_ = lean_box(v___x_5505_);
if (v_isShared_5531_ == 0)
{
lean_ctor_set(v___x_5530_, 1, v___x_5533_);
lean_ctor_set(v___x_5530_, 0, v___x_5534_);
v___x_5536_ = v___x_5530_;
goto v_reusejp_5535_;
}
else
{
lean_object* v_reuseFailAlloc_5537_; 
v_reuseFailAlloc_5537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5537_, 0, v___x_5534_);
lean_ctor_set(v_reuseFailAlloc_5537_, 1, v___x_5533_);
v___x_5536_ = v_reuseFailAlloc_5537_;
goto v_reusejp_5535_;
}
v_reusejp_5535_:
{
v___y_5511_ = v___x_5536_;
goto v___jp_5510_;
}
}
}
}
else
{
return v_b_5509_;
}
v___jp_5510_:
{
size_t v___x_5512_; size_t v___x_5513_; 
v___x_5512_ = ((size_t)1ULL);
v___x_5513_ = lean_usize_add(v_i_5507_, v___x_5512_);
v_i_5507_ = v___x_5513_;
v_b_5509_ = v___y_5511_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__2___boxed(lean_object* v___x_5540_, lean_object* v___x_5541_, lean_object* v_as_5542_, lean_object* v_i_5543_, lean_object* v_stop_5544_, lean_object* v_b_5545_){
_start:
{
uint8_t v___x_7056__boxed_5546_; uint8_t v___x_7057__boxed_5547_; size_t v_i_boxed_5548_; size_t v_stop_boxed_5549_; lean_object* v_res_5550_; 
v___x_7056__boxed_5546_ = lean_unbox(v___x_5540_);
v___x_7057__boxed_5547_ = lean_unbox(v___x_5541_);
v_i_boxed_5548_ = lean_unbox_usize(v_i_5543_);
lean_dec(v_i_5543_);
v_stop_boxed_5549_ = lean_unbox_usize(v_stop_5544_);
lean_dec(v_stop_5544_);
v_res_5550_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__2(v___x_7056__boxed_5546_, v___x_7057__boxed_5547_, v_as_5542_, v_i_boxed_5548_, v_stop_boxed_5549_, v_b_5545_);
lean_dec_ref(v_as_5542_);
return v_res_5550_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__1(void){
_start:
{
lean_object* v___x_5552_; lean_object* v___x_5553_; 
v___x_5552_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__0));
v___x_5553_ = l_Lean_stringToMessageData(v___x_5552_);
return v___x_5553_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2(lean_object* v_stx_5563_, lean_object* v___y_5564_, lean_object* v___y_5565_, lean_object* v___y_5566_, lean_object* v___y_5567_, lean_object* v___y_5568_, lean_object* v___y_5569_, lean_object* v___y_5570_, lean_object* v___y_5571_){
_start:
{
lean_object* v___y_5574_; lean_object* v___y_5575_; lean_object* v___y_5576_; lean_object* v___y_5577_; lean_object* v___y_5578_; lean_object* v___y_5579_; lean_object* v___y_5580_; lean_object* v___y_5581_; lean_object* v___y_5582_; lean_object* v___y_5583_; lean_object* v___y_5584_; lean_object* v___y_5585_; lean_object* v___x_5681_; 
v___x_5681_ = l_Lean_Elab_Tactic_Grind_ensureSym___redArg(v___y_5564_, v___y_5568_, v___y_5569_, v___y_5570_, v___y_5571_);
if (lean_obj_tag(v___x_5681_) == 0)
{
lean_object* v___x_5683_; uint8_t v_isShared_5684_; uint8_t v_isSharedCheck_5792_; 
v_isSharedCheck_5792_ = !lean_is_exclusive(v___x_5681_);
if (v_isSharedCheck_5792_ == 0)
{
lean_object* v_unused_5793_; 
v_unused_5793_ = lean_ctor_get(v___x_5681_, 0);
lean_dec(v_unused_5793_);
v___x_5683_ = v___x_5681_;
v_isShared_5684_ = v_isSharedCheck_5792_;
goto v_resetjp_5682_;
}
else
{
lean_dec(v___x_5681_);
v___x_5683_ = lean_box(0);
v_isShared_5684_ = v_isSharedCheck_5792_;
goto v_resetjp_5682_;
}
v_resetjp_5682_:
{
lean_object* v___x_5685_; uint8_t v___x_5686_; 
v___x_5685_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__3));
lean_inc(v_stx_5563_);
v___x_5686_ = l_Lean_Syntax_isOfKind(v_stx_5563_, v___x_5685_);
if (v___x_5686_ == 0)
{
lean_object* v___x_5687_; 
lean_del_object(v___x_5683_);
lean_dec(v_stx_5563_);
v___x_5687_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg();
return v___x_5687_;
}
else
{
lean_object* v___x_5688_; lean_object* v___y_5690_; lean_object* v___y_5691_; lean_object* v___y_5692_; lean_object* v___y_5693_; lean_object* v___y_5694_; lean_object* v___y_5695_; lean_object* v___y_5696_; lean_object* v___y_5697_; lean_object* v___y_5698_; lean_object* v___y_5699_; lean_object* v___y_5726_; lean_object* v_extraIds_5727_; lean_object* v___y_5728_; lean_object* v___y_5729_; lean_object* v___y_5730_; lean_object* v___y_5731_; lean_object* v___y_5732_; lean_object* v___y_5733_; lean_object* v___y_5734_; lean_object* v___y_5735_; lean_object* v___y_5740_; lean_object* v___y_5741_; lean_object* v___y_5742_; lean_object* v___y_5743_; lean_object* v___y_5744_; lean_object* v___y_5745_; lean_object* v___y_5746_; lean_object* v___y_5747_; lean_object* v___y_5748_; lean_object* v___y_5749_; lean_object* v___x_5754_; lean_object* v_variantId_x3f_5756_; lean_object* v___y_5757_; lean_object* v___y_5758_; lean_object* v___y_5759_; lean_object* v___y_5760_; lean_object* v___y_5761_; lean_object* v___y_5762_; lean_object* v___y_5763_; lean_object* v___y_5764_; lean_object* v___x_5783_; uint8_t v___x_5784_; 
v___x_5688_ = lean_unsigned_to_nat(0u);
v___x_5754_ = lean_unsigned_to_nat(1u);
v___x_5783_ = l_Lean_Syntax_getArg(v_stx_5563_, v___x_5754_);
v___x_5784_ = l_Lean_Syntax_isNone(v___x_5783_);
if (v___x_5784_ == 0)
{
uint8_t v___x_5785_; 
lean_inc(v___x_5783_);
v___x_5785_ = l_Lean_Syntax_matchesNull(v___x_5783_, v___x_5754_);
if (v___x_5785_ == 0)
{
lean_object* v___x_5786_; 
lean_dec(v___x_5783_);
lean_del_object(v___x_5683_);
lean_dec(v_stx_5563_);
v___x_5786_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg();
return v___x_5786_;
}
else
{
lean_object* v___x_5787_; lean_object* v___x_5789_; 
v___x_5787_ = l_Lean_Syntax_getArg(v___x_5783_, v___x_5688_);
lean_dec(v___x_5783_);
if (v_isShared_5684_ == 0)
{
lean_ctor_set_tag(v___x_5683_, 1);
lean_ctor_set(v___x_5683_, 0, v___x_5787_);
v___x_5789_ = v___x_5683_;
goto v_reusejp_5788_;
}
else
{
lean_object* v_reuseFailAlloc_5790_; 
v_reuseFailAlloc_5790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5790_, 0, v___x_5787_);
v___x_5789_ = v_reuseFailAlloc_5790_;
goto v_reusejp_5788_;
}
v_reusejp_5788_:
{
v_variantId_x3f_5756_ = v___x_5789_;
v___y_5757_ = v___y_5564_;
v___y_5758_ = v___y_5565_;
v___y_5759_ = v___y_5566_;
v___y_5760_ = v___y_5567_;
v___y_5761_ = v___y_5568_;
v___y_5762_ = v___y_5569_;
v___y_5763_ = v___y_5570_;
v___y_5764_ = v___y_5571_;
goto v___jp_5755_;
}
}
}
else
{
lean_object* v___x_5791_; 
lean_dec(v___x_5783_);
lean_del_object(v___x_5683_);
v___x_5791_ = lean_box(0);
v_variantId_x3f_5756_ = v___x_5791_;
v___y_5757_ = v___y_5564_;
v___y_5758_ = v___y_5565_;
v___y_5759_ = v___y_5566_;
v___y_5760_ = v___y_5567_;
v___y_5761_ = v___y_5568_;
v___y_5762_ = v___y_5569_;
v___y_5763_ = v___y_5570_;
v___y_5764_ = v___y_5571_;
goto v___jp_5755_;
}
v___jp_5689_:
{
lean_object* v___x_5700_; 
v___x_5700_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_resolveExtraTheorems(v___y_5693_, v___y_5690_, v___y_5694_, v___y_5698_, v___y_5691_, v___y_5696_, v___y_5692_, v___y_5695_, v___y_5697_);
lean_dec(v___y_5693_);
if (lean_obj_tag(v___x_5700_) == 0)
{
lean_object* v_a_5701_; lean_object* v_fst_5702_; lean_object* v_snd_5703_; lean_object* v___x_5705_; uint8_t v_isShared_5706_; uint8_t v_isSharedCheck_5716_; 
v_a_5701_ = lean_ctor_get(v___x_5700_, 0);
lean_inc(v_a_5701_);
lean_dec_ref_known(v___x_5700_, 1);
v_fst_5702_ = lean_ctor_get(v_a_5701_, 0);
v_snd_5703_ = lean_ctor_get(v_a_5701_, 1);
v_isSharedCheck_5716_ = !lean_is_exclusive(v_a_5701_);
if (v_isSharedCheck_5716_ == 0)
{
v___x_5705_ = v_a_5701_;
v_isShared_5706_ = v_isSharedCheck_5716_;
goto v_resetjp_5704_;
}
else
{
lean_inc(v_snd_5703_);
lean_inc(v_fst_5702_);
lean_dec(v_a_5701_);
v___x_5705_ = lean_box(0);
v_isShared_5706_ = v_isSharedCheck_5716_;
goto v_resetjp_5704_;
}
v_resetjp_5704_:
{
lean_object* v___x_5708_; 
lean_inc(v___y_5699_);
if (v_isShared_5706_ == 0)
{
lean_ctor_set(v___x_5705_, 1, v_fst_5702_);
lean_ctor_set(v___x_5705_, 0, v___y_5699_);
v___x_5708_ = v___x_5705_;
goto v_reusejp_5707_;
}
else
{
lean_object* v_reuseFailAlloc_5715_; 
v_reuseFailAlloc_5715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5715_, 0, v___y_5699_);
lean_ctor_set(v_reuseFailAlloc_5715_, 1, v_fst_5702_);
v___x_5708_ = v_reuseFailAlloc_5715_;
goto v_reusejp_5707_;
}
v_reusejp_5707_:
{
lean_object* v___x_5709_; lean_object* v_cache_5710_; lean_object* v_simpState_5711_; lean_object* v___x_5712_; 
v___x_5709_ = lean_st_ref_get(v___y_5694_);
v_cache_5710_ = lean_ctor_get(v___x_5709_, 3);
lean_inc_ref(v_cache_5710_);
lean_dec(v___x_5709_);
v_simpState_5711_ = lean_ctor_get(v_cache_5710_, 2);
lean_inc_ref(v_simpState_5711_);
lean_dec_ref(v_cache_5710_);
v___x_5712_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__2___redArg(v_simpState_5711_, v___x_5708_);
lean_dec_ref(v_simpState_5711_);
if (lean_obj_tag(v___x_5712_) == 0)
{
lean_object* v___x_5713_; 
v___x_5713_ = lean_obj_once(&l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__1, &l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Grind_simpGoal___redArg___closed__1);
v___y_5574_ = v___y_5690_;
v___y_5575_ = v___y_5691_;
v___y_5576_ = v___x_5708_;
v___y_5577_ = v___y_5692_;
v___y_5578_ = v___y_5694_;
v___y_5579_ = v___y_5695_;
v___y_5580_ = v___y_5696_;
v___y_5581_ = v___y_5697_;
v___y_5582_ = v_snd_5703_;
v___y_5583_ = v___y_5698_;
v___y_5584_ = v___y_5699_;
v___y_5585_ = v___x_5713_;
goto v___jp_5573_;
}
else
{
lean_object* v_val_5714_; 
v_val_5714_ = lean_ctor_get(v___x_5712_, 0);
lean_inc(v_val_5714_);
lean_dec_ref_known(v___x_5712_, 1);
v___y_5574_ = v___y_5690_;
v___y_5575_ = v___y_5691_;
v___y_5576_ = v___x_5708_;
v___y_5577_ = v___y_5692_;
v___y_5578_ = v___y_5694_;
v___y_5579_ = v___y_5695_;
v___y_5580_ = v___y_5696_;
v___y_5581_ = v___y_5697_;
v___y_5582_ = v_snd_5703_;
v___y_5583_ = v___y_5698_;
v___y_5584_ = v___y_5699_;
v___y_5585_ = v_val_5714_;
goto v___jp_5573_;
}
}
}
}
else
{
lean_object* v_a_5717_; lean_object* v___x_5719_; uint8_t v_isShared_5720_; uint8_t v_isSharedCheck_5724_; 
lean_dec(v___y_5699_);
v_a_5717_ = lean_ctor_get(v___x_5700_, 0);
v_isSharedCheck_5724_ = !lean_is_exclusive(v___x_5700_);
if (v_isSharedCheck_5724_ == 0)
{
v___x_5719_ = v___x_5700_;
v_isShared_5720_ = v_isSharedCheck_5724_;
goto v_resetjp_5718_;
}
else
{
lean_inc(v_a_5717_);
lean_dec(v___x_5700_);
v___x_5719_ = lean_box(0);
v_isShared_5720_ = v_isSharedCheck_5724_;
goto v_resetjp_5718_;
}
v_resetjp_5718_:
{
lean_object* v___x_5722_; 
if (v_isShared_5720_ == 0)
{
v___x_5722_ = v___x_5719_;
goto v_reusejp_5721_;
}
else
{
lean_object* v_reuseFailAlloc_5723_; 
v_reuseFailAlloc_5723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5723_, 0, v_a_5717_);
v___x_5722_ = v_reuseFailAlloc_5723_;
goto v_reusejp_5721_;
}
v_reusejp_5721_:
{
return v___x_5722_;
}
}
}
}
v___jp_5725_:
{
if (lean_obj_tag(v___y_5726_) == 0)
{
lean_object* v___x_5736_; 
v___x_5736_ = lean_box(0);
v___y_5690_ = v___y_5728_;
v___y_5691_ = v___y_5731_;
v___y_5692_ = v___y_5733_;
v___y_5693_ = v_extraIds_5727_;
v___y_5694_ = v___y_5729_;
v___y_5695_ = v___y_5734_;
v___y_5696_ = v___y_5732_;
v___y_5697_ = v___y_5735_;
v___y_5698_ = v___y_5730_;
v___y_5699_ = v___x_5736_;
goto v___jp_5689_;
}
else
{
lean_object* v_val_5737_; lean_object* v___x_5738_; 
v_val_5737_ = lean_ctor_get(v___y_5726_, 0);
lean_inc(v_val_5737_);
lean_dec_ref_known(v___y_5726_, 1);
v___x_5738_ = l_Lean_TSyntax_getId(v_val_5737_);
lean_dec(v_val_5737_);
v___y_5690_ = v___y_5728_;
v___y_5691_ = v___y_5731_;
v___y_5692_ = v___y_5733_;
v___y_5693_ = v_extraIds_5727_;
v___y_5694_ = v___y_5729_;
v___y_5695_ = v___y_5734_;
v___y_5696_ = v___y_5732_;
v___y_5697_ = v___y_5735_;
v___y_5698_ = v___y_5730_;
v___y_5699_ = v___x_5738_;
goto v___jp_5689_;
}
}
v___jp_5739_:
{
size_t v_sz_5750_; size_t v___x_5751_; lean_object* v___x_5752_; 
v_sz_5750_ = lean_array_size(v___y_5749_);
v___x_5751_ = ((size_t)0ULL);
v___x_5752_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__1(v_sz_5750_, v___x_5751_, v___y_5749_);
if (lean_obj_tag(v___x_5752_) == 0)
{
lean_object* v___x_5753_; 
lean_dec(v___y_5747_);
v___x_5753_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg();
return v___x_5753_;
}
else
{
v___y_5726_ = v___y_5747_;
v_extraIds_5727_ = v___x_5752_;
v___y_5728_ = v___y_5745_;
v___y_5729_ = v___y_5740_;
v___y_5730_ = v___y_5744_;
v___y_5731_ = v___y_5746_;
v___y_5732_ = v___y_5743_;
v___y_5733_ = v___y_5748_;
v___y_5734_ = v___y_5742_;
v___y_5735_ = v___y_5741_;
goto v___jp_5725_;
}
}
v___jp_5755_:
{
lean_object* v___x_5765_; lean_object* v___x_5766_; uint8_t v___x_5767_; 
v___x_5765_ = lean_unsigned_to_nat(2u);
v___x_5766_ = l_Lean_Syntax_getArg(v_stx_5563_, v___x_5765_);
lean_dec(v_stx_5563_);
v___x_5767_ = l_Lean_Syntax_isNone(v___x_5766_);
if (v___x_5767_ == 0)
{
lean_object* v___x_5768_; uint8_t v___x_5769_; 
v___x_5768_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_5766_);
v___x_5769_ = l_Lean_Syntax_matchesNull(v___x_5766_, v___x_5768_);
if (v___x_5769_ == 0)
{
lean_object* v___x_5770_; 
lean_dec(v___x_5766_);
lean_dec(v_variantId_x3f_5756_);
v___x_5770_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro_spec__0___redArg();
return v___x_5770_;
}
else
{
lean_object* v___x_5771_; lean_object* v___x_5772_; lean_object* v___x_5773_; lean_object* v___x_5774_; uint8_t v___x_5775_; 
v___x_5771_ = l_Lean_Syntax_getArg(v___x_5766_, v___x_5754_);
lean_dec(v___x_5766_);
v___x_5772_ = l_Lean_Syntax_getArgs(v___x_5771_);
lean_dec(v___x_5771_);
v___x_5773_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__4));
v___x_5774_ = lean_array_get_size(v___x_5772_);
v___x_5775_ = lean_nat_dec_lt(v___x_5688_, v___x_5774_);
if (v___x_5775_ == 0)
{
lean_dec_ref(v___x_5772_);
v___y_5740_ = v___y_5758_;
v___y_5741_ = v___y_5764_;
v___y_5742_ = v___y_5763_;
v___y_5743_ = v___y_5761_;
v___y_5744_ = v___y_5759_;
v___y_5745_ = v___y_5757_;
v___y_5746_ = v___y_5760_;
v___y_5747_ = v_variantId_x3f_5756_;
v___y_5748_ = v___y_5762_;
v___y_5749_ = v___x_5773_;
goto v___jp_5739_;
}
else
{
lean_object* v___x_5776_; lean_object* v___x_5777_; size_t v___x_5778_; size_t v___x_5779_; lean_object* v___x_5780_; lean_object* v_snd_5781_; 
v___x_5776_ = lean_box(v___x_5775_);
v___x_5777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5777_, 0, v___x_5776_);
lean_ctor_set(v___x_5777_, 1, v___x_5773_);
v___x_5778_ = ((size_t)0ULL);
v___x_5779_ = lean_usize_of_nat(v___x_5774_);
v___x_5780_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__2(v___x_5769_, v___x_5767_, v___x_5772_, v___x_5778_, v___x_5779_, v___x_5777_);
lean_dec_ref(v___x_5772_);
v_snd_5781_ = lean_ctor_get(v___x_5780_, 1);
lean_inc(v_snd_5781_);
lean_dec_ref(v___x_5780_);
v___y_5740_ = v___y_5758_;
v___y_5741_ = v___y_5764_;
v___y_5742_ = v___y_5763_;
v___y_5743_ = v___y_5761_;
v___y_5744_ = v___y_5759_;
v___y_5745_ = v___y_5757_;
v___y_5746_ = v___y_5760_;
v___y_5747_ = v_variantId_x3f_5756_;
v___y_5748_ = v___y_5762_;
v___y_5749_ = v_snd_5781_;
goto v___jp_5739_;
}
}
}
else
{
lean_object* v___x_5782_; 
lean_dec(v___x_5766_);
v___x_5782_ = lean_box(0);
v___y_5726_ = v_variantId_x3f_5756_;
v_extraIds_5727_ = v___x_5782_;
v___y_5728_ = v___y_5757_;
v___y_5729_ = v___y_5758_;
v___y_5730_ = v___y_5759_;
v___y_5731_ = v___y_5760_;
v___y_5732_ = v___y_5761_;
v___y_5733_ = v___y_5762_;
v___y_5734_ = v___y_5763_;
v___y_5735_ = v___y_5764_;
goto v___jp_5725_;
}
}
}
}
}
else
{
lean_dec(v_stx_5563_);
return v___x_5681_;
}
v___jp_5573_:
{
lean_object* v___x_5586_; 
v___x_5586_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_elabSimpVariant(v___y_5584_, v___y_5582_, v___y_5574_, v___y_5578_, v___y_5583_, v___y_5575_, v___y_5580_, v___y_5577_, v___y_5579_, v___y_5581_);
lean_dec_ref(v___y_5582_);
if (lean_obj_tag(v___x_5586_) == 0)
{
lean_object* v_a_5587_; lean_object* v_fst_5588_; lean_object* v_snd_5589_; lean_object* v___x_5590_; 
v_a_5587_ = lean_ctor_get(v___x_5586_, 0);
lean_inc(v_a_5587_);
lean_dec_ref_known(v___x_5586_, 1);
v_fst_5588_ = lean_ctor_get(v_a_5587_, 0);
lean_inc(v_fst_5588_);
v_snd_5589_ = lean_ctor_get(v_a_5587_, 1);
lean_inc(v_snd_5589_);
lean_dec(v_a_5587_);
v___x_5590_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v___y_5574_, v___y_5578_, v___y_5583_, v___y_5575_, v___y_5580_, v___y_5577_, v___y_5579_, v___y_5581_);
if (lean_obj_tag(v___x_5590_) == 0)
{
lean_object* v_a_5591_; lean_object* v_toGoalState_5592_; lean_object* v_mvarId_5593_; lean_object* v___x_5595_; uint8_t v_isShared_5596_; uint8_t v_isSharedCheck_5664_; 
v_a_5591_ = lean_ctor_get(v___x_5590_, 0);
lean_inc(v_a_5591_);
lean_dec_ref_known(v___x_5590_, 1);
v_toGoalState_5592_ = lean_ctor_get(v_a_5591_, 0);
v_mvarId_5593_ = lean_ctor_get(v_a_5591_, 1);
v_isSharedCheck_5664_ = !lean_is_exclusive(v_a_5591_);
if (v_isSharedCheck_5664_ == 0)
{
v___x_5595_ = v_a_5591_;
v_isShared_5596_ = v_isSharedCheck_5664_;
goto v_resetjp_5594_;
}
else
{
lean_inc(v_mvarId_5593_);
lean_inc(v_toGoalState_5592_);
lean_dec(v_a_5591_);
v___x_5595_ = lean_box(0);
v_isShared_5596_ = v_isSharedCheck_5664_;
goto v_resetjp_5594_;
}
v_resetjp_5594_:
{
lean_object* v___f_5597_; lean_object* v___x_5598_; lean_object* v___x_5599_; 
lean_inc_n(v_mvarId_5593_, 2);
v___f_5597_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__0___boxed), 14, 4);
lean_closure_set(v___f_5597_, 0, v_mvarId_5593_);
lean_closure_set(v___f_5597_, 1, v_fst_5588_);
lean_closure_set(v___f_5597_, 2, v_snd_5589_);
lean_closure_set(v___f_5597_, 3, v___y_5585_);
v___x_5598_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp_spec__0___boxed), 13, 3);
lean_closure_set(v___x_5598_, 0, lean_box(0));
lean_closure_set(v___x_5598_, 1, v_mvarId_5593_);
lean_closure_set(v___x_5598_, 2, v___f_5597_);
v___x_5599_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___x_5598_, v___y_5574_, v___y_5578_, v___y_5580_, v___y_5577_, v___y_5579_, v___y_5581_);
if (lean_obj_tag(v___x_5599_) == 0)
{
lean_object* v_a_5600_; lean_object* v_fst_5601_; lean_object* v_snd_5602_; lean_object* v___x_5604_; uint8_t v_isShared_5605_; uint8_t v_isSharedCheck_5655_; 
v_a_5600_ = lean_ctor_get(v___x_5599_, 0);
lean_inc(v_a_5600_);
lean_dec_ref_known(v___x_5599_, 1);
v_fst_5601_ = lean_ctor_get(v_a_5600_, 0);
v_snd_5602_ = lean_ctor_get(v_a_5600_, 1);
v_isSharedCheck_5655_ = !lean_is_exclusive(v_a_5600_);
if (v_isSharedCheck_5655_ == 0)
{
v___x_5604_ = v_a_5600_;
v_isShared_5605_ = v_isSharedCheck_5655_;
goto v_resetjp_5603_;
}
else
{
lean_inc(v_snd_5602_);
lean_inc(v_fst_5601_);
lean_dec(v_a_5600_);
v___x_5604_ = lean_box(0);
v_isShared_5605_ = v_isSharedCheck_5655_;
goto v_resetjp_5603_;
}
v_resetjp_5603_:
{
lean_object* v___f_5606_; lean_object* v___x_5607_; lean_object* v_cache_5608_; lean_object* v_symState_5609_; lean_object* v_grindState_5610_; lean_object* v_goals_5611_; lean_object* v___x_5613_; uint8_t v_isShared_5614_; uint8_t v_isSharedCheck_5654_; 
v___f_5606_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__1___boxed), 12, 2);
lean_closure_set(v___f_5606_, 0, v_fst_5601_);
lean_closure_set(v___f_5606_, 1, v_mvarId_5593_);
v___x_5607_ = lean_st_ref_take(v___y_5578_);
v_cache_5608_ = lean_ctor_get(v___x_5607_, 3);
v_symState_5609_ = lean_ctor_get(v___x_5607_, 0);
v_grindState_5610_ = lean_ctor_get(v___x_5607_, 1);
v_goals_5611_ = lean_ctor_get(v___x_5607_, 2);
v_isSharedCheck_5654_ = !lean_is_exclusive(v___x_5607_);
if (v_isSharedCheck_5654_ == 0)
{
v___x_5613_ = v___x_5607_;
v_isShared_5614_ = v_isSharedCheck_5654_;
goto v_resetjp_5612_;
}
else
{
lean_inc(v_cache_5608_);
lean_inc(v_goals_5611_);
lean_inc(v_grindState_5610_);
lean_inc(v_symState_5609_);
lean_dec(v___x_5607_);
v___x_5613_ = lean_box(0);
v_isShared_5614_ = v_isSharedCheck_5654_;
goto v_resetjp_5612_;
}
v_resetjp_5612_:
{
lean_object* v_backwardRuleName_5615_; lean_object* v_backwardRuleSyntax_5616_; lean_object* v_simpState_5617_; lean_object* v_dsimpState_5618_; lean_object* v___x_5620_; uint8_t v_isShared_5621_; uint8_t v_isSharedCheck_5653_; 
v_backwardRuleName_5615_ = lean_ctor_get(v_cache_5608_, 0);
v_backwardRuleSyntax_5616_ = lean_ctor_get(v_cache_5608_, 1);
v_simpState_5617_ = lean_ctor_get(v_cache_5608_, 2);
v_dsimpState_5618_ = lean_ctor_get(v_cache_5608_, 3);
v_isSharedCheck_5653_ = !lean_is_exclusive(v_cache_5608_);
if (v_isSharedCheck_5653_ == 0)
{
v___x_5620_ = v_cache_5608_;
v_isShared_5621_ = v_isSharedCheck_5653_;
goto v_resetjp_5619_;
}
else
{
lean_inc(v_dsimpState_5618_);
lean_inc(v_simpState_5617_);
lean_inc(v_backwardRuleSyntax_5616_);
lean_inc(v_backwardRuleName_5615_);
lean_dec(v_cache_5608_);
v___x_5620_ = lean_box(0);
v_isShared_5621_ = v_isSharedCheck_5653_;
goto v_resetjp_5619_;
}
v_resetjp_5619_:
{
lean_object* v___x_5622_; lean_object* v___x_5624_; 
v___x_5622_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Grind_simpGoal_spec__1___redArg(v_simpState_5617_, v___y_5576_, v_snd_5602_);
if (v_isShared_5621_ == 0)
{
lean_ctor_set(v___x_5620_, 2, v___x_5622_);
v___x_5624_ = v___x_5620_;
goto v_reusejp_5623_;
}
else
{
lean_object* v_reuseFailAlloc_5652_; 
v_reuseFailAlloc_5652_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_5652_, 0, v_backwardRuleName_5615_);
lean_ctor_set(v_reuseFailAlloc_5652_, 1, v_backwardRuleSyntax_5616_);
lean_ctor_set(v_reuseFailAlloc_5652_, 2, v___x_5622_);
lean_ctor_set(v_reuseFailAlloc_5652_, 3, v_dsimpState_5618_);
v___x_5624_ = v_reuseFailAlloc_5652_;
goto v_reusejp_5623_;
}
v_reusejp_5623_:
{
lean_object* v___x_5626_; 
if (v_isShared_5614_ == 0)
{
lean_ctor_set(v___x_5613_, 3, v___x_5624_);
v___x_5626_ = v___x_5613_;
goto v_reusejp_5625_;
}
else
{
lean_object* v_reuseFailAlloc_5651_; 
v_reuseFailAlloc_5651_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_5651_, 0, v_symState_5609_);
lean_ctor_set(v_reuseFailAlloc_5651_, 1, v_grindState_5610_);
lean_ctor_set(v_reuseFailAlloc_5651_, 2, v_goals_5611_);
lean_ctor_set(v_reuseFailAlloc_5651_, 3, v___x_5624_);
v___x_5626_ = v_reuseFailAlloc_5651_;
goto v_reusejp_5625_;
}
v_reusejp_5625_:
{
lean_object* v___x_5627_; lean_object* v___x_5628_; 
v___x_5627_ = lean_st_ref_put(v___y_5578_, v___x_5626_);
v___x_5628_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___f_5606_, v___y_5574_, v___y_5578_, v___y_5580_, v___y_5577_, v___y_5579_, v___y_5581_);
if (lean_obj_tag(v___x_5628_) == 0)
{
lean_object* v_a_5629_; 
v_a_5629_ = lean_ctor_get(v___x_5628_, 0);
lean_inc(v_a_5629_);
lean_dec_ref_known(v___x_5628_, 1);
switch(lean_obj_tag(v_a_5629_))
{
case 0:
{
lean_object* v___x_5630_; lean_object* v___x_5631_; 
lean_del_object(v___x_5604_);
lean_del_object(v___x_5595_);
lean_dec_ref(v_toGoalState_5592_);
v___x_5630_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__1, &l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__1);
v___x_5631_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Grind_intro1_spec__1___redArg(v___x_5630_, v___y_5580_, v___y_5577_, v___y_5579_, v___y_5581_);
return v___x_5631_;
}
case 1:
{
lean_object* v___x_5632_; lean_object* v___x_5633_; 
lean_del_object(v___x_5604_);
lean_del_object(v___x_5595_);
lean_dec_ref(v_toGoalState_5592_);
v___x_5632_ = lean_box(0);
v___x_5633_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal(v___x_5632_, v___y_5574_, v___y_5578_, v___y_5583_, v___y_5575_, v___y_5580_, v___y_5577_, v___y_5579_, v___y_5581_);
return v___x_5633_;
}
default: 
{
lean_object* v_mvarId_5634_; lean_object* v___x_5636_; 
v_mvarId_5634_ = lean_ctor_get(v_a_5629_, 0);
lean_inc(v_mvarId_5634_);
lean_dec_ref_known(v_a_5629_, 1);
if (v_isShared_5596_ == 0)
{
lean_ctor_set(v___x_5595_, 1, v_mvarId_5634_);
v___x_5636_ = v___x_5595_;
goto v_reusejp_5635_;
}
else
{
lean_object* v_reuseFailAlloc_5642_; 
v_reuseFailAlloc_5642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5642_, 0, v_toGoalState_5592_);
lean_ctor_set(v_reuseFailAlloc_5642_, 1, v_mvarId_5634_);
v___x_5636_ = v_reuseFailAlloc_5642_;
goto v_reusejp_5635_;
}
v_reusejp_5635_:
{
lean_object* v___x_5637_; lean_object* v___x_5639_; 
v___x_5637_ = lean_box(0);
if (v_isShared_5605_ == 0)
{
lean_ctor_set_tag(v___x_5604_, 1);
lean_ctor_set(v___x_5604_, 1, v___x_5637_);
lean_ctor_set(v___x_5604_, 0, v___x_5636_);
v___x_5639_ = v___x_5604_;
goto v_reusejp_5638_;
}
else
{
lean_object* v_reuseFailAlloc_5641_; 
v_reuseFailAlloc_5641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5641_, 0, v___x_5636_);
lean_ctor_set(v_reuseFailAlloc_5641_, 1, v___x_5637_);
v___x_5639_ = v_reuseFailAlloc_5641_;
goto v_reusejp_5638_;
}
v_reusejp_5638_:
{
lean_object* v___x_5640_; 
v___x_5640_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal(v___x_5639_, v___y_5574_, v___y_5578_, v___y_5583_, v___y_5575_, v___y_5580_, v___y_5577_, v___y_5579_, v___y_5581_);
return v___x_5640_;
}
}
}
}
}
else
{
lean_object* v_a_5643_; lean_object* v___x_5645_; uint8_t v_isShared_5646_; uint8_t v_isSharedCheck_5650_; 
lean_del_object(v___x_5604_);
lean_del_object(v___x_5595_);
lean_dec_ref(v_toGoalState_5592_);
v_a_5643_ = lean_ctor_get(v___x_5628_, 0);
v_isSharedCheck_5650_ = !lean_is_exclusive(v___x_5628_);
if (v_isSharedCheck_5650_ == 0)
{
v___x_5645_ = v___x_5628_;
v_isShared_5646_ = v_isSharedCheck_5650_;
goto v_resetjp_5644_;
}
else
{
lean_inc(v_a_5643_);
lean_dec(v___x_5628_);
v___x_5645_ = lean_box(0);
v_isShared_5646_ = v_isSharedCheck_5650_;
goto v_resetjp_5644_;
}
v_resetjp_5644_:
{
lean_object* v___x_5648_; 
if (v_isShared_5646_ == 0)
{
v___x_5648_ = v___x_5645_;
goto v_reusejp_5647_;
}
else
{
lean_object* v_reuseFailAlloc_5649_; 
v_reuseFailAlloc_5649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5649_, 0, v_a_5643_);
v___x_5648_ = v_reuseFailAlloc_5649_;
goto v_reusejp_5647_;
}
v_reusejp_5647_:
{
return v___x_5648_;
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_5656_; lean_object* v___x_5658_; uint8_t v_isShared_5659_; uint8_t v_isSharedCheck_5663_; 
lean_del_object(v___x_5595_);
lean_dec(v_mvarId_5593_);
lean_dec_ref(v_toGoalState_5592_);
lean_dec_ref(v___y_5576_);
v_a_5656_ = lean_ctor_get(v___x_5599_, 0);
v_isSharedCheck_5663_ = !lean_is_exclusive(v___x_5599_);
if (v_isSharedCheck_5663_ == 0)
{
v___x_5658_ = v___x_5599_;
v_isShared_5659_ = v_isSharedCheck_5663_;
goto v_resetjp_5657_;
}
else
{
lean_inc(v_a_5656_);
lean_dec(v___x_5599_);
v___x_5658_ = lean_box(0);
v_isShared_5659_ = v_isSharedCheck_5663_;
goto v_resetjp_5657_;
}
v_resetjp_5657_:
{
lean_object* v___x_5661_; 
if (v_isShared_5659_ == 0)
{
v___x_5661_ = v___x_5658_;
goto v_reusejp_5660_;
}
else
{
lean_object* v_reuseFailAlloc_5662_; 
v_reuseFailAlloc_5662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5662_, 0, v_a_5656_);
v___x_5661_ = v_reuseFailAlloc_5662_;
goto v_reusejp_5660_;
}
v_reusejp_5660_:
{
return v___x_5661_;
}
}
}
}
}
else
{
lean_object* v_a_5665_; lean_object* v___x_5667_; uint8_t v_isShared_5668_; uint8_t v_isSharedCheck_5672_; 
lean_dec(v_snd_5589_);
lean_dec(v_fst_5588_);
lean_dec_ref(v___y_5585_);
lean_dec_ref(v___y_5576_);
v_a_5665_ = lean_ctor_get(v___x_5590_, 0);
v_isSharedCheck_5672_ = !lean_is_exclusive(v___x_5590_);
if (v_isSharedCheck_5672_ == 0)
{
v___x_5667_ = v___x_5590_;
v_isShared_5668_ = v_isSharedCheck_5672_;
goto v_resetjp_5666_;
}
else
{
lean_inc(v_a_5665_);
lean_dec(v___x_5590_);
v___x_5667_ = lean_box(0);
v_isShared_5668_ = v_isSharedCheck_5672_;
goto v_resetjp_5666_;
}
v_resetjp_5666_:
{
lean_object* v___x_5670_; 
if (v_isShared_5668_ == 0)
{
v___x_5670_ = v___x_5667_;
goto v_reusejp_5669_;
}
else
{
lean_object* v_reuseFailAlloc_5671_; 
v_reuseFailAlloc_5671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5671_, 0, v_a_5665_);
v___x_5670_ = v_reuseFailAlloc_5671_;
goto v_reusejp_5669_;
}
v_reusejp_5669_:
{
return v___x_5670_;
}
}
}
}
else
{
lean_object* v_a_5673_; lean_object* v___x_5675_; uint8_t v_isShared_5676_; uint8_t v_isSharedCheck_5680_; 
lean_dec_ref(v___y_5585_);
lean_dec_ref(v___y_5576_);
v_a_5673_ = lean_ctor_get(v___x_5586_, 0);
v_isSharedCheck_5680_ = !lean_is_exclusive(v___x_5586_);
if (v_isSharedCheck_5680_ == 0)
{
v___x_5675_ = v___x_5586_;
v_isShared_5676_ = v_isSharedCheck_5680_;
goto v_resetjp_5674_;
}
else
{
lean_inc(v_a_5673_);
lean_dec(v___x_5586_);
v___x_5675_ = lean_box(0);
v_isShared_5676_ = v_isSharedCheck_5680_;
goto v_resetjp_5674_;
}
v_resetjp_5674_:
{
lean_object* v___x_5678_; 
if (v_isShared_5676_ == 0)
{
v___x_5678_ = v___x_5675_;
goto v_reusejp_5677_;
}
else
{
lean_object* v_reuseFailAlloc_5679_; 
v_reuseFailAlloc_5679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5679_, 0, v_a_5673_);
v___x_5678_ = v_reuseFailAlloc_5679_;
goto v_reusejp_5677_;
}
v_reusejp_5677_:
{
return v___x_5678_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___boxed(lean_object* v_stx_5794_, lean_object* v___y_5795_, lean_object* v___y_5796_, lean_object* v___y_5797_, lean_object* v___y_5798_, lean_object* v___y_5799_, lean_object* v___y_5800_, lean_object* v___y_5801_, lean_object* v___y_5802_, lean_object* v___y_5803_){
_start:
{
lean_object* v_res_5804_; 
v_res_5804_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2(v_stx_5794_, v___y_5795_, v___y_5796_, v___y_5797_, v___y_5798_, v___y_5799_, v___y_5800_, v___y_5801_, v___y_5802_);
lean_dec(v___y_5802_);
lean_dec_ref(v___y_5801_);
lean_dec(v___y_5800_);
lean_dec_ref(v___y_5799_);
lean_dec(v___y_5798_);
lean_dec_ref(v___y_5797_);
lean_dec(v___y_5796_);
lean_dec_ref(v___y_5795_);
return v_res_5804_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp(lean_object* v_stx_5805_, lean_object* v_a_5806_, lean_object* v_a_5807_, lean_object* v_a_5808_, lean_object* v_a_5809_, lean_object* v_a_5810_, lean_object* v_a_5811_, lean_object* v_a_5812_, lean_object* v_a_5813_){
_start:
{
lean_object* v___f_5815_; lean_object* v___x_5816_; 
v___f_5815_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___boxed), 10, 1);
lean_closure_set(v___f_5815_, 0, v_stx_5805_);
v___x_5816_ = l_Lean_Elab_Tactic_Grind_withMainContext___redArg(v___f_5815_, v_a_5806_, v_a_5807_, v_a_5808_, v_a_5809_, v_a_5810_, v_a_5811_, v_a_5812_, v_a_5813_);
return v___x_5816_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___boxed(lean_object* v_stx_5817_, lean_object* v_a_5818_, lean_object* v_a_5819_, lean_object* v_a_5820_, lean_object* v_a_5821_, lean_object* v_a_5822_, lean_object* v_a_5823_, lean_object* v_a_5824_, lean_object* v_a_5825_, lean_object* v_a_5826_){
_start:
{
lean_object* v_res_5827_; 
v_res_5827_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp(v_stx_5817_, v_a_5818_, v_a_5819_, v_a_5820_, v_a_5821_, v_a_5822_, v_a_5823_, v_a_5824_, v_a_5825_);
lean_dec(v_a_5825_);
lean_dec_ref(v_a_5824_);
lean_dec(v_a_5823_);
lean_dec_ref(v_a_5822_);
lean_dec(v_a_5821_);
lean_dec_ref(v_a_5820_);
lean_dec(v_a_5819_);
lean_dec_ref(v_a_5818_);
return v_res_5827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp__1(){
_start:
{
lean_object* v___x_5833_; lean_object* v___x_5834_; lean_object* v___x_5835_; lean_object* v___x_5836_; lean_object* v___x_5837_; 
v___x_5833_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_5834_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___lam__2___closed__3));
v___x_5835_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp__1___closed__1));
v___x_5836_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___boxed), 10, 0);
v___x_5837_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5833_, v___x_5834_, v___x_5835_, v___x_5836_);
return v___x_5837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp__1___boxed(lean_object* v_a_5838_){
_start:
{
lean_object* v_res_5839_; 
v_res_5839_ = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp__1();
return v_res_5839_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_ExprPattern(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_SimprocDSL(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Grind(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Variant(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Goal(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Location(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_FirstHyp(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Sym(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ExprPattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_SimprocDSL(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Variant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Goal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Location(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_FirstHyp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntro__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymIntros__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymApply__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalize__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymInternalizeAll__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymByContra__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp___regBuiltin___private_Lean_Elab_Tactic_Grind_Sym_0__Lean_Elab_Tactic_Grind_evalSymSimp__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Grind_Sym(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_ExprPattern(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Grind_SimprocDSL(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Grind(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Variant(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Goal(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Attr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Location(uint8_t builtin);
lean_object* initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_FirstHyp(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Grind_Sym(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ExprPattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Grind_SimprocDSL(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Variant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Goal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Location(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_FirstHyp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Sym(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Grind_Sym(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Grind_Sym(builtin);
}
#ifdef __cplusplus
}
#endif
