// Lean compiler output
// Module: Lean.Elab.Tactic.Grind.ShowState
// Imports: public import Lean.Elab.Tactic.Grind.Filter import Lean.Meta.Tactic.Grind.PP import Lean.Meta.Tactic.Grind.EMatchTheoremParam import Lean.Meta.Tactic.Grind.Split
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_elabFilter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l___private_Lean_Meta_Tactic_Grind_Filter_0__Lean_Meta_Grind_Filter_eval_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftGoalM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_Grind_ppExprArray(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_Grind_Goal_getEqc(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_mk(lean_object*);
uint8_t l_Lean_Expr_isTrue(lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_getTrueExpr___redArg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getEqcs(lean_object*, uint8_t);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isSupportApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_ppEqc(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getLocalTheoremAnchors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_anchorToString(lean_object*, uint64_t);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_evalGrindTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Filter_eval___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getSplitCandidateAnchors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "facts"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(5, 104, 51, 228, 98, 188, 251, 80)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Asserted facts"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(168, 60, 211, 188, 58, 220, 100, 184)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "no facts"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "grindFilter"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "showAsserted"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__3_value),LEAN_SCALAR_PTR_LITERAL(19, 9, 52, 210, 246, 83, 42, 129)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__1_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__2_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__3_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(133, 58, 227, 168, 195, 28, 19, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__4_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(243, 88, 6, 248, 93, 59, 25, 68)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ShowState"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__5_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(5, 25, 164, 64, 171, 22, 6, 69)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(208, 19, 40, 233, 34, 161, 117, 130)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__8_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 78, 84, 89, 236, 187, 159, 237)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__9_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(231, 245, 207, 60, 37, 134, 98, 64)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__10_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(38, 49, 162, 201, 131, 208, 27, 108)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__11_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(20, 71, 128, 234, 115, 187, 122, 105)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "evalShowAsserted"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(200, 208, 203, 159, 70, 103, 81, 118)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__14_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "props"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 109, 51, 84, 90, 92, 70, 19)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " propositions"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "no "};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "showTrue"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__0_value),LEAN_SCALAR_PTR_LITERAL(138, 221, 230, 107, 62, 158, 128, 182)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(55, 133, 155, 61, 50, 240, 42, 169)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "evalShowTrue"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 147, 90, 193, 92, 229, 28, 140)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "showFalse"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 23, 10, 157, 249, 80, 147, 23)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "evalShowFalse"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(197, 252, 51, 157, 108, 134, 132, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__0___boxed(lean_object*);
static const lean_array_object l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "eqc"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 40, 20, 175, 160, 100, 35, 190)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Equivalence classes"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__4;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "others"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no equivalence classes"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "showEqcs"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__0_value),LEAN_SCALAR_PTR_LITERAL(118, 148, 3, 250, 60, 240, 18, 216)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "evalShowEqcs"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 119, 28, 131, 183, 128, 4, 252)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_pushIfSome(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Grind_showState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Elab_Tactic_Grind_showState___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_showState___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Grind_showState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Grind_showState___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_object* l_Lean_Elab_Tactic_Grind_showState___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_showState___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Grind_showState___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Elab_Tactic_Grind_showState___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Grind_showState___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Grind_showState___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Grind_showState___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Grind state"};
static const lean_object* l_Lean_Elab_Tactic_Grind_showState___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_showState___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Grind_showState___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Grind_showState___closed__4_value)}};
static const lean_object* l_Lean_Elab_Tactic_Grind_showState___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Grind_showState___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Grind_showState___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Grind_showState___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_showState(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_showState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "showState"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__0_value),LEAN_SCALAR_PTR_LITERAL(200, 80, 82, 248, 223, 67, 174, 140)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "evalShowState"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(217, 96, 229, 223, 171, 103, 139, 248)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___boxed(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "split"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 90, 54, 167, 41, 130, 106, 252)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "splits"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 201, 206, 84, 124, 223, 95, 96)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__2;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Case split candidates"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__3_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__5;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "no case splits"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "showCases"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__0_value),LEAN_SCALAR_PTR_LITERAL(116, 129, 48, 5, 176, 175, 163, 129)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "evalShowCases"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(146, 115, 106, 2, 47, 9, 123, 219)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___redArg(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___redArg(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___redArg(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___redArg(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___redArg(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0___boxed(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "thm"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 106, 229, 125, 19, 158, 75, 156)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "thms"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 43, 249, 113, 45, 82, 7, 129)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__2;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Local theorems"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__3_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7_spec__9(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "showLocalThms"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(65, 164, 136, 213, 0, 240, 18, 240)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "evalShowLocalThms"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(25, 150, 229, 48, 187, 110, 180, 220)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "showTerm"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 150, 74, 14, 71, 142, 109, 156)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindSeq"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value_aux_1),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(158, 229, 98, 59, 247, 194, 34, 174)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "evalShowTerm"};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 168, 61, 18, 39, 162, 48, 77)}};
static const lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___redArg(lean_object* v_filter_1_, lean_object* v_as_2_, size_t v_i_3_, size_t v_stop_4_, lean_object* v_b_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v_a_10_; uint8_t v___x_14_; 
v___x_14_ = lean_usize_dec_eq(v_i_3_, v_stop_4_);
if (v___x_14_ == 0)
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_array_uget_borrowed(v_as_2_, v_i_3_);
lean_inc(v_filter_1_);
lean_inc(v___x_15_);
v___x_16_ = l___private_Lean_Meta_Tactic_Grind_Filter_0__Lean_Meta_Grind_Filter_eval_go___redArg(v___x_15_, v_filter_1_, v___y_6_, v___y_7_);
if (lean_obj_tag(v___x_16_) == 0)
{
lean_object* v_a_17_; uint8_t v___x_18_; 
v_a_17_ = lean_ctor_get(v___x_16_, 0);
lean_inc(v_a_17_);
lean_dec_ref_known(v___x_16_, 1);
v___x_18_ = lean_unbox(v_a_17_);
lean_dec(v_a_17_);
if (v___x_18_ == 0)
{
v_a_10_ = v_b_5_;
goto v___jp_9_;
}
else
{
lean_object* v___x_19_; 
lean_inc(v___x_15_);
v___x_19_ = lean_array_push(v_b_5_, v___x_15_);
v_a_10_ = v___x_19_;
goto v___jp_9_;
}
}
else
{
lean_object* v_a_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_27_; 
lean_dec_ref(v_b_5_);
lean_dec(v_filter_1_);
v_a_20_ = lean_ctor_get(v___x_16_, 0);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_16_);
if (v_isSharedCheck_27_ == 0)
{
v___x_22_ = v___x_16_;
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_a_20_);
lean_dec(v___x_16_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_27_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_25_; 
if (v_isShared_23_ == 0)
{
v___x_25_ = v___x_22_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_20_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
}
else
{
lean_object* v___x_28_; 
lean_dec(v_filter_1_);
v___x_28_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_28_, 0, v_b_5_);
return v___x_28_;
}
v___jp_9_:
{
size_t v___x_11_; size_t v___x_12_; 
v___x_11_ = ((size_t)1ULL);
v___x_12_ = lean_usize_add(v_i_3_, v___x_11_);
v_i_3_ = v___x_12_;
v_b_5_ = v_a_10_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___redArg___boxed(lean_object* v_filter_29_, lean_object* v_as_30_, lean_object* v_i_31_, lean_object* v_stop_32_, lean_object* v_b_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
size_t v_i_boxed_37_; size_t v_stop_boxed_38_; lean_object* v_res_39_; 
v_i_boxed_37_ = lean_unbox_usize(v_i_31_);
lean_dec(v_i_31_);
v_stop_boxed_38_ = lean_unbox_usize(v_stop_32_);
lean_dec(v_stop_32_);
v_res_39_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___redArg(v_filter_29_, v_as_30_, v_i_boxed_37_, v_stop_boxed_38_, v_b_33_, v___y_34_, v___y_35_);
lean_dec(v___y_35_);
lean_dec(v___y_34_);
lean_dec_ref(v_as_30_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___lam__0(lean_object* v_filter_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_){
_start:
{
lean_object* v___x_54_; lean_object* v_toGoalState_55_; lean_object* v_facts_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; uint8_t v___x_61_; 
v___x_54_ = lean_st_ref_get(v___y_43_);
v_toGoalState_55_ = lean_ctor_get(v___x_54_, 0);
lean_inc_ref(v_toGoalState_55_);
lean_dec(v___x_54_);
v_facts_56_ = lean_ctor_get(v_toGoalState_55_, 11);
lean_inc_ref(v_facts_56_);
lean_dec_ref(v_toGoalState_55_);
v___x_57_ = l_Lean_PersistentArray_toArray___redArg(v_facts_56_);
lean_dec_ref(v_facts_56_);
v___x_58_ = lean_unsigned_to_nat(0u);
v___x_59_ = lean_array_get_size(v___x_57_);
v___x_60_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___lam__0___closed__0));
v___x_61_ = lean_nat_dec_lt(v___x_58_, v___x_59_);
if (v___x_61_ == 0)
{
lean_object* v___x_62_; 
lean_dec_ref(v___x_57_);
lean_dec(v_filter_42_);
v___x_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_62_, 0, v___x_60_);
return v___x_62_;
}
else
{
size_t v___x_63_; size_t v___x_64_; lean_object* v___x_65_; 
v___x_63_ = ((size_t)0ULL);
v___x_64_ = lean_usize_of_nat(v___x_59_);
v___x_65_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___redArg(v_filter_42_, v___x_57_, v___x_63_, v___x_64_, v___x_60_, v___y_43_, v___y_50_);
lean_dec_ref(v___x_57_);
return v___x_65_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___lam__0___boxed(lean_object* v_filter_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___lam__0(v_filter_66_, v___y_67_, v___y_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_);
lean_dec(v___y_76_);
lean_dec_ref(v___y_75_);
lean_dec(v___y_74_);
lean_dec_ref(v___y_73_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
lean_dec(v___y_70_);
lean_dec_ref(v___y_69_);
lean_dec(v___y_68_);
lean_dec(v___y_67_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f(lean_object* v_filter_87_, uint8_t v_collapsed_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_){
_start:
{
lean_object* v___f_98_; lean_object* v___x_99_; 
v___f_98_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___lam__0___boxed), 12, 1);
lean_closure_set(v___f_98_, 0, v_filter_87_);
v___x_99_ = l_Lean_Elab_Tactic_Grind_liftGoalM___redArg(v___f_98_, v_a_89_, v_a_90_, v_a_91_, v_a_92_, v_a_93_, v_a_94_, v_a_95_, v_a_96_);
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_119_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_119_ == 0)
{
v___x_102_ = v___x_99_;
v_isShared_103_ = v_isSharedCheck_119_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_a_100_);
lean_dec(v___x_99_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_119_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_104_ = lean_array_get_size(v_a_100_);
v___x_105_ = lean_unsigned_to_nat(0u);
v___x_106_ = lean_nat_dec_eq(v___x_104_, v___x_105_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_113_; 
v___x_107_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__1));
v___x_108_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__2));
v___x_109_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__4));
v___x_110_ = l_Lean_Meta_Grind_ppExprArray(v___x_107_, v___x_108_, v_a_100_, v___x_109_, v_collapsed_88_);
v___x_111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 0, v___x_111_);
v___x_113_ = v___x_102_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v___x_111_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
else
{
lean_object* v___x_115_; lean_object* v___x_117_; 
lean_dec(v_a_100_);
v___x_115_ = lean_box(0);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 0, v___x_115_);
v___x_117_ = v___x_102_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v___x_115_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
}
else
{
lean_object* v_a_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_127_; 
v_a_120_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_127_ == 0)
{
v___x_122_ = v___x_99_;
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_a_120_);
lean_dec(v___x_99_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_125_; 
if (v_isShared_123_ == 0)
{
v___x_125_ = v___x_122_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_a_120_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___boxed(lean_object* v_filter_128_, lean_object* v_collapsed_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
uint8_t v_collapsed_boxed_139_; lean_object* v_res_140_; 
v_collapsed_boxed_139_ = lean_unbox(v_collapsed_129_);
v_res_140_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f(v_filter_128_, v_collapsed_boxed_139_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_);
lean_dec(v_a_137_);
lean_dec_ref(v_a_136_);
lean_dec(v_a_135_);
lean_dec_ref(v_a_134_);
lean_dec(v_a_133_);
lean_dec_ref(v_a_132_);
lean_dec(v_a_131_);
lean_dec_ref(v_a_130_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0(lean_object* v_filter_141_, lean_object* v_as_142_, size_t v_i_143_, size_t v_stop_144_, lean_object* v_b_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___redArg(v_filter_141_, v_as_142_, v_i_143_, v_stop_144_, v_b_145_, v___y_146_, v___y_153_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0___boxed(lean_object* v_filter_158_, lean_object* v_as_159_, lean_object* v_i_160_, lean_object* v_stop_161_, lean_object* v_b_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
size_t v_i_boxed_174_; size_t v_stop_boxed_175_; lean_object* v_res_176_; 
v_i_boxed_174_ = lean_unbox_usize(v_i_160_);
lean_dec(v_i_160_);
v_stop_boxed_175_ = lean_unbox_usize(v_stop_161_);
lean_dec(v_stop_161_);
v_res_176_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f_spec__0(v_filter_158_, v_as_159_, v_i_boxed_174_, v_stop_boxed_175_, v_b_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_);
lean_dec(v___y_172_);
lean_dec_ref(v___y_171_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
lean_dec(v___y_168_);
lean_dec_ref(v___y_167_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v___y_164_);
lean_dec(v___y_163_);
lean_dec_ref(v_as_159_);
return v_res_176_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_177_ = lean_box(0);
v___x_178_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_178_);
lean_ctor_set(v___x_179_, 1, v___x_177_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg(){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg___closed__0);
v___x_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg___boxed(lean_object* v___y_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2(lean_object* v_00_u03b1_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___boxed(lean_object* v_00_u03b1_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2(v_00_u03b1_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
lean_dec(v___y_202_);
lean_dec_ref(v___y_201_);
lean_dec(v___y_200_);
lean_dec_ref(v___y_199_);
lean_dec(v___y_198_);
lean_dec_ref(v___y_197_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1_spec__2(lean_object* v_msgData_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_){
_start:
{
lean_object* v___x_213_; lean_object* v_env_214_; uint8_t v___x_215_; lean_object* v_env_216_; lean_object* v___x_217_; lean_object* v_toCold_218_; lean_object* v_mctx_219_; lean_object* v_lctx_220_; lean_object* v_options_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_213_ = lean_st_ref_get(v___y_211_);
v_env_214_ = lean_ctor_get(v___x_213_, 0);
lean_inc_ref(v_env_214_);
lean_dec(v___x_213_);
v___x_215_ = 0;
v_env_216_ = l_Lean_Environment_setRecordingDeps(v_env_214_, v___x_215_);
v___x_217_ = lean_st_ref_get(v___y_209_);
v_toCold_218_ = lean_ctor_get(v___y_210_, 0);
v_mctx_219_ = lean_ctor_get(v___x_217_, 0);
lean_inc_ref(v_mctx_219_);
lean_dec(v___x_217_);
v_lctx_220_ = lean_ctor_get(v___y_208_, 2);
v_options_221_ = lean_ctor_get(v_toCold_218_, 2);
lean_inc_ref(v_options_221_);
lean_inc_ref(v_lctx_220_);
v___x_222_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_222_, 0, v_env_216_);
lean_ctor_set(v___x_222_, 1, v_mctx_219_);
lean_ctor_set(v___x_222_, 2, v_lctx_220_);
lean_ctor_set(v___x_222_, 3, v_options_221_);
v___x_223_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set(v___x_223_, 1, v_msgData_207_);
v___x_224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1_spec__2___boxed(lean_object* v_msgData_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1_spec__2(v_msgData_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg(lean_object* v_msg_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
lean_object* v_ref_238_; lean_object* v___x_239_; lean_object* v_a_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_248_; 
v_ref_238_ = lean_ctor_get(v___y_235_, 2);
v___x_239_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1_spec__2(v_msg_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_);
v_a_240_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_248_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_248_ == 0)
{
v___x_242_ = v___x_239_;
v_isShared_243_ = v_isSharedCheck_248_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_a_240_);
lean_dec(v___x_239_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_248_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___x_244_; lean_object* v___x_246_; 
lean_inc(v_ref_238_);
v___x_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_244_, 0, v_ref_238_);
lean_ctor_set(v___x_244_, 1, v_a_240_);
if (v_isShared_243_ == 0)
{
lean_ctor_set_tag(v___x_242_, 1);
lean_ctor_set(v___x_242_, 0, v___x_244_);
v___x_246_ = v___x_242_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v___x_244_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg___boxed(lean_object* v_msg_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg(v_msg_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_);
lean_dec(v___y_253_);
lean_dec_ref(v___y_252_);
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
return v_res_255_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2_spec__5(lean_object* v_opts_256_, lean_object* v_opt_257_){
_start:
{
lean_object* v_name_258_; lean_object* v_defValue_259_; lean_object* v_map_260_; lean_object* v___x_261_; 
v_name_258_ = lean_ctor_get(v_opt_257_, 0);
v_defValue_259_ = lean_ctor_get(v_opt_257_, 1);
v_map_260_ = lean_ctor_get(v_opts_256_, 0);
v___x_261_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_260_, v_name_258_);
if (lean_obj_tag(v___x_261_) == 0)
{
uint8_t v___x_262_; 
v___x_262_ = lean_unbox(v_defValue_259_);
return v___x_262_;
}
else
{
lean_object* v_val_263_; 
v_val_263_ = lean_ctor_get(v___x_261_, 0);
lean_inc(v_val_263_);
lean_dec_ref_known(v___x_261_, 1);
if (lean_obj_tag(v_val_263_) == 1)
{
uint8_t v_v_264_; 
v_v_264_ = lean_ctor_get_uint8(v_val_263_, 0);
lean_dec_ref_known(v_val_263_, 0);
return v_v_264_;
}
else
{
uint8_t v___x_265_; 
lean_dec(v_val_263_);
v___x_265_ = lean_unbox(v_defValue_259_);
return v___x_265_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_opts_266_, lean_object* v_opt_267_){
_start:
{
uint8_t v_res_268_; lean_object* v_r_269_; 
v_res_268_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2_spec__5(v_opts_266_, v_opt_267_);
lean_dec_ref(v_opt_267_);
lean_dec_ref(v_opts_266_);
v_r_269_ = lean_box(v_res_268_);
return v_r_269_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0(uint8_t v_suppressElabErrors_278_, lean_object* v_x_279_){
_start:
{
if (lean_obj_tag(v_x_279_) == 1)
{
lean_object* v_pre_280_; 
v_pre_280_ = lean_ctor_get(v_x_279_, 0);
switch(lean_obj_tag(v_pre_280_))
{
case 1:
{
lean_object* v_pre_281_; 
v_pre_281_ = lean_ctor_get(v_pre_280_, 0);
switch(lean_obj_tag(v_pre_281_))
{
case 0:
{
lean_object* v_str_282_; lean_object* v_str_283_; lean_object* v___x_284_; uint8_t v___x_285_; 
v_str_282_ = lean_ctor_get(v_x_279_, 1);
v_str_283_ = lean_ctor_get(v_pre_280_, 1);
v___x_284_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__0));
v___x_285_ = lean_string_dec_eq(v_str_283_, v___x_284_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; uint8_t v___x_287_; 
v___x_286_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1));
v___x_287_ = lean_string_dec_eq(v_str_283_, v___x_286_);
if (v___x_287_ == 0)
{
return v___x_287_;
}
else
{
lean_object* v___x_288_; uint8_t v___x_289_; 
v___x_288_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__2));
v___x_289_ = lean_string_dec_eq(v_str_282_, v___x_288_);
if (v___x_289_ == 0)
{
return v___x_289_;
}
else
{
return v_suppressElabErrors_278_;
}
}
}
else
{
lean_object* v___x_290_; uint8_t v___x_291_; 
v___x_290_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__3));
v___x_291_ = lean_string_dec_eq(v_str_282_, v___x_290_);
if (v___x_291_ == 0)
{
return v___x_291_;
}
else
{
return v_suppressElabErrors_278_;
}
}
}
case 1:
{
lean_object* v_pre_292_; 
v_pre_292_ = lean_ctor_get(v_pre_281_, 0);
if (lean_obj_tag(v_pre_292_) == 0)
{
lean_object* v_str_293_; lean_object* v_str_294_; lean_object* v_str_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v_str_293_ = lean_ctor_get(v_x_279_, 1);
v_str_294_ = lean_ctor_get(v_pre_280_, 1);
v_str_295_ = lean_ctor_get(v_pre_281_, 1);
v___x_296_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__4));
v___x_297_ = lean_string_dec_eq(v_str_295_, v___x_296_);
if (v___x_297_ == 0)
{
return v___x_297_;
}
else
{
lean_object* v___x_298_; uint8_t v___x_299_; 
v___x_298_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__5));
v___x_299_ = lean_string_dec_eq(v_str_294_, v___x_298_);
if (v___x_299_ == 0)
{
return v___x_299_;
}
else
{
lean_object* v___x_300_; uint8_t v___x_301_; 
v___x_300_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__6));
v___x_301_ = lean_string_dec_eq(v_str_293_, v___x_300_);
if (v___x_301_ == 0)
{
return v___x_301_;
}
else
{
return v_suppressElabErrors_278_;
}
}
}
}
else
{
uint8_t v___x_302_; 
v___x_302_ = 0;
return v___x_302_;
}
}
default: 
{
uint8_t v___x_303_; 
v___x_303_ = 0;
return v___x_303_;
}
}
}
case 0:
{
lean_object* v_str_304_; lean_object* v___x_305_; uint8_t v___x_306_; 
v_str_304_ = lean_ctor_get(v_x_279_, 1);
v___x_305_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__7));
v___x_306_ = lean_string_dec_eq(v_str_304_, v___x_305_);
if (v___x_306_ == 0)
{
return v___x_306_;
}
else
{
return v_suppressElabErrors_278_;
}
}
default: 
{
uint8_t v___x_307_; 
v___x_307_ = 0;
return v___x_307_;
}
}
}
else
{
uint8_t v___x_308_; 
v___x_308_ = 0;
return v___x_308_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_309_, lean_object* v_x_310_){
_start:
{
uint8_t v_suppressElabErrors_boxed_311_; uint8_t v_res_312_; lean_object* v_r_313_; 
v_suppressElabErrors_boxed_311_ = lean_unbox(v_suppressElabErrors_309_);
v_res_312_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0(v_suppressElabErrors_boxed_311_, v_x_310_);
lean_dec(v_x_310_);
v_r_313_ = lean_box(v_res_312_);
return v_r_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg(lean_object* v_ref_315_, lean_object* v_msgData_316_, uint8_t v_severity_317_, uint8_t v_isSilent_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_){
_start:
{
lean_object* v___y_325_; lean_object* v___y_326_; uint8_t v___y_327_; uint8_t v___y_328_; lean_object* v___y_329_; lean_object* v___y_330_; lean_object* v___y_331_; lean_object* v_toCold_332_; lean_object* v___y_333_; lean_object* v___y_362_; lean_object* v___y_363_; lean_object* v___y_364_; uint8_t v___y_365_; lean_object* v___y_366_; uint8_t v___y_367_; uint8_t v___y_368_; lean_object* v___y_369_; lean_object* v___y_389_; uint8_t v___y_390_; lean_object* v___y_391_; lean_object* v___y_392_; uint8_t v___y_393_; uint8_t v___y_394_; lean_object* v___y_395_; uint8_t v___y_399_; uint8_t v___y_400_; uint8_t v___x_410_; uint8_t v___y_412_; uint8_t v___x_418_; 
v___x_410_ = 2;
v___x_418_ = l_Lean_instBEqMessageSeverity_beq(v_severity_317_, v___x_410_);
if (v___x_418_ == 0)
{
v___y_412_ = v___x_418_;
goto v___jp_411_;
}
else
{
uint8_t v___x_419_; 
lean_inc_ref(v_msgData_316_);
v___x_419_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_316_);
if (v___x_419_ == 0)
{
v___y_412_ = v___x_419_;
goto v___jp_411_;
}
else
{
lean_object* v___x_420_; lean_object* v___x_421_; 
lean_dec_ref(v_msgData_316_);
v___x_420_ = lean_box(0);
v___x_421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
return v___x_421_;
}
}
v___jp_324_:
{
lean_object* v_currNamespace_334_; lean_object* v_openDecls_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v_env_340_; lean_object* v_nextMacroScope_341_; lean_object* v_ngen_342_; lean_object* v_auxDeclNGen_343_; lean_object* v_traceState_344_; lean_object* v_cache_345_; lean_object* v_recordedDeps_346_; lean_object* v_messages_347_; lean_object* v_infoState_348_; lean_object* v_snapshotTasks_349_; lean_object* v___x_351_; uint8_t v_isShared_352_; uint8_t v_isSharedCheck_360_; 
v_currNamespace_334_ = lean_ctor_get(v_toCold_332_, 4);
v_openDecls_335_ = lean_ctor_get(v_toCold_332_, 5);
lean_inc(v_openDecls_335_);
lean_inc(v_currNamespace_334_);
v___x_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_336_, 0, v_currNamespace_334_);
lean_ctor_set(v___x_336_, 1, v_openDecls_335_);
v___x_337_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
lean_ctor_set(v___x_337_, 1, v___y_330_);
lean_inc_ref(v___y_325_);
lean_inc_ref(v___y_326_);
v___x_338_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_338_, 0, v___y_326_);
lean_ctor_set(v___x_338_, 1, v___y_331_);
lean_ctor_set(v___x_338_, 2, v___y_329_);
lean_ctor_set(v___x_338_, 3, v___y_325_);
lean_ctor_set(v___x_338_, 4, v___x_337_);
lean_ctor_set_uint8(v___x_338_, sizeof(void*)*5, v___y_328_);
lean_ctor_set_uint8(v___x_338_, sizeof(void*)*5 + 1, v___y_327_);
lean_ctor_set_uint8(v___x_338_, sizeof(void*)*5 + 2, v_isSilent_318_);
v___x_339_ = lean_st_ref_take(v___y_333_);
v_env_340_ = lean_ctor_get(v___x_339_, 0);
v_nextMacroScope_341_ = lean_ctor_get(v___x_339_, 1);
v_ngen_342_ = lean_ctor_get(v___x_339_, 2);
v_auxDeclNGen_343_ = lean_ctor_get(v___x_339_, 3);
v_traceState_344_ = lean_ctor_get(v___x_339_, 4);
v_cache_345_ = lean_ctor_get(v___x_339_, 5);
v_recordedDeps_346_ = lean_ctor_get(v___x_339_, 6);
v_messages_347_ = lean_ctor_get(v___x_339_, 7);
v_infoState_348_ = lean_ctor_get(v___x_339_, 8);
v_snapshotTasks_349_ = lean_ctor_get(v___x_339_, 9);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_360_ == 0)
{
v___x_351_ = v___x_339_;
v_isShared_352_ = v_isSharedCheck_360_;
goto v_resetjp_350_;
}
else
{
lean_inc(v_snapshotTasks_349_);
lean_inc(v_infoState_348_);
lean_inc(v_messages_347_);
lean_inc(v_recordedDeps_346_);
lean_inc(v_cache_345_);
lean_inc(v_traceState_344_);
lean_inc(v_auxDeclNGen_343_);
lean_inc(v_ngen_342_);
lean_inc(v_nextMacroScope_341_);
lean_inc(v_env_340_);
lean_dec(v___x_339_);
v___x_351_ = lean_box(0);
v_isShared_352_ = v_isSharedCheck_360_;
goto v_resetjp_350_;
}
v_resetjp_350_:
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_356_; 
v___x_353_ = lean_box(0);
v___x_354_ = l_Lean_MessageLog_add(v___x_338_, v_messages_347_);
if (v_isShared_352_ == 0)
{
lean_ctor_set(v___x_351_, 7, v___x_354_);
v___x_356_ = v___x_351_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_env_340_);
lean_ctor_set(v_reuseFailAlloc_359_, 1, v_nextMacroScope_341_);
lean_ctor_set(v_reuseFailAlloc_359_, 2, v_ngen_342_);
lean_ctor_set(v_reuseFailAlloc_359_, 3, v_auxDeclNGen_343_);
lean_ctor_set(v_reuseFailAlloc_359_, 4, v_traceState_344_);
lean_ctor_set(v_reuseFailAlloc_359_, 5, v_cache_345_);
lean_ctor_set(v_reuseFailAlloc_359_, 6, v_recordedDeps_346_);
lean_ctor_set(v_reuseFailAlloc_359_, 7, v___x_354_);
lean_ctor_set(v_reuseFailAlloc_359_, 8, v_infoState_348_);
lean_ctor_set(v_reuseFailAlloc_359_, 9, v_snapshotTasks_349_);
v___x_356_ = v_reuseFailAlloc_359_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = lean_st_ref_put(v___y_333_, v___x_356_);
v___x_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_358_, 0, v___x_353_);
return v___x_358_;
}
}
}
v___jp_361_:
{
lean_object* v_fileName_370_; lean_object* v_fileMap_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v_a_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_387_; 
v_fileName_370_ = lean_ctor_get(v___y_366_, 0);
v_fileMap_371_ = lean_ctor_get(v___y_366_, 1);
v___x_372_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_316_);
v___x_373_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1_spec__2(v___x_372_, v___y_319_, v___y_320_, v___y_321_, v___y_322_);
v_a_374_ = lean_ctor_get(v___x_373_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_387_ == 0)
{
v___x_376_ = v___x_373_;
v_isShared_377_ = v_isSharedCheck_387_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_a_374_);
lean_dec(v___x_373_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_387_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
lean_inc_ref_n(v_fileMap_371_, 2);
v___x_378_ = l_Lean_FileMap_toPosition(v_fileMap_371_, v___y_364_);
lean_dec(v___y_364_);
v___x_379_ = l_Lean_FileMap_toPosition(v_fileMap_371_, v___y_369_);
lean_dec(v___y_369_);
v___x_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
v___x_381_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0));
if (v___y_365_ == 0)
{
lean_del_object(v___x_376_);
lean_dec_ref(v___y_362_);
v___y_325_ = v___x_381_;
v___y_326_ = v_fileName_370_;
v___y_327_ = v___y_367_;
v___y_328_ = v___y_368_;
v___y_329_ = v___x_380_;
v___y_330_ = v_a_374_;
v___y_331_ = v___x_378_;
v_toCold_332_ = v___y_363_;
v___y_333_ = v___y_322_;
goto v___jp_324_;
}
else
{
uint8_t v___x_382_; 
lean_inc(v_a_374_);
v___x_382_ = l_Lean_MessageData_hasTag(v___y_362_, v_a_374_);
if (v___x_382_ == 0)
{
lean_object* v___x_383_; lean_object* v___x_385_; 
lean_dec_ref_known(v___x_380_, 1);
lean_dec_ref(v___x_378_);
lean_dec(v_a_374_);
v___x_383_ = lean_box(0);
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 0, v___x_383_);
v___x_385_ = v___x_376_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v___x_383_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
else
{
lean_del_object(v___x_376_);
v___y_325_ = v___x_381_;
v___y_326_ = v_fileName_370_;
v___y_327_ = v___y_367_;
v___y_328_ = v___y_368_;
v___y_329_ = v___x_380_;
v___y_330_ = v_a_374_;
v___y_331_ = v___x_378_;
v_toCold_332_ = v___y_363_;
v___y_333_ = v___y_322_;
goto v___jp_324_;
}
}
}
}
v___jp_388_:
{
lean_object* v___x_396_; 
v___x_396_ = l_Lean_Syntax_getTailPos_x3f(v___y_392_, v___y_394_);
lean_dec(v___y_392_);
if (lean_obj_tag(v___x_396_) == 0)
{
lean_inc(v___y_395_);
v___y_362_ = v___y_389_;
v___y_363_ = v___y_391_;
v___y_364_ = v___y_395_;
v___y_365_ = v___y_390_;
v___y_366_ = v___y_391_;
v___y_367_ = v___y_393_;
v___y_368_ = v___y_394_;
v___y_369_ = v___y_395_;
goto v___jp_361_;
}
else
{
lean_object* v_val_397_; 
v_val_397_ = lean_ctor_get(v___x_396_, 0);
lean_inc(v_val_397_);
lean_dec_ref_known(v___x_396_, 1);
v___y_362_ = v___y_389_;
v___y_363_ = v___y_391_;
v___y_364_ = v___y_395_;
v___y_365_ = v___y_390_;
v___y_366_ = v___y_391_;
v___y_367_ = v___y_393_;
v___y_368_ = v___y_394_;
v___y_369_ = v_val_397_;
goto v___jp_361_;
}
}
v___jp_398_:
{
lean_object* v_toCold_401_; lean_object* v_ref_402_; uint8_t v_suppressElabErrors_403_; lean_object* v___x_404_; lean_object* v___f_405_; lean_object* v_ref_406_; lean_object* v___x_407_; 
v_toCold_401_ = lean_ctor_get(v___y_321_, 0);
v_ref_402_ = lean_ctor_get(v___y_321_, 2);
v_suppressElabErrors_403_ = lean_ctor_get_uint8(v___y_321_, sizeof(void*)*3 + 2);
v___x_404_ = lean_box(v_suppressElabErrors_403_);
v___f_405_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_405_, 0, v___x_404_);
v_ref_406_ = l_Lean_replaceRef(v_ref_315_, v_ref_402_);
v___x_407_ = l_Lean_Syntax_getPos_x3f(v_ref_406_, v___y_399_);
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v___x_408_; 
v___x_408_ = lean_unsigned_to_nat(0u);
v___y_389_ = v___f_405_;
v___y_390_ = v_suppressElabErrors_403_;
v___y_391_ = v_toCold_401_;
v___y_392_ = v_ref_406_;
v___y_393_ = v___y_400_;
v___y_394_ = v___y_399_;
v___y_395_ = v___x_408_;
goto v___jp_388_;
}
else
{
lean_object* v_val_409_; 
v_val_409_ = lean_ctor_get(v___x_407_, 0);
lean_inc(v_val_409_);
lean_dec_ref_known(v___x_407_, 1);
v___y_389_ = v___f_405_;
v___y_390_ = v_suppressElabErrors_403_;
v___y_391_ = v_toCold_401_;
v___y_392_ = v_ref_406_;
v___y_393_ = v___y_400_;
v___y_394_ = v___y_399_;
v___y_395_ = v_val_409_;
goto v___jp_388_;
}
}
v___jp_411_:
{
uint8_t v___x_413_; uint8_t v___x_414_; 
v___x_413_ = 1;
v___x_414_ = l_Lean_instBEqMessageSeverity_beq(v_severity_317_, v___x_413_);
if (v___x_414_ == 0)
{
v___y_399_ = v___y_412_;
v___y_400_ = v_severity_317_;
goto v___jp_398_;
}
else
{
lean_object* v___x_415_; lean_object* v___x_416_; uint8_t v___x_417_; 
v___x_415_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_321_);
v___x_416_ = l_Lean_warningAsError;
v___x_417_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2_spec__5(v___x_415_, v___x_416_);
lean_dec_ref(v___x_415_);
if (v___x_417_ == 0)
{
v___y_399_ = v___y_412_;
v___y_400_ = v_severity_317_;
goto v___jp_398_;
}
else
{
v___y_399_ = v___y_412_;
v___y_400_ = v___x_410_;
goto v___jp_398_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_ref_422_, lean_object* v_msgData_423_, lean_object* v_severity_424_, lean_object* v_isSilent_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
uint8_t v_severity_boxed_431_; uint8_t v_isSilent_boxed_432_; lean_object* v_res_433_; 
v_severity_boxed_431_ = lean_unbox(v_severity_424_);
v_isSilent_boxed_432_ = lean_unbox(v_isSilent_425_);
v_res_433_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg(v_ref_422_, v_msgData_423_, v_severity_boxed_431_, v_isSilent_boxed_432_, v___y_426_, v___y_427_, v___y_428_, v___y_429_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
lean_dec(v___y_427_);
lean_dec_ref(v___y_426_);
lean_dec(v_ref_422_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0(lean_object* v_msgData_434_, uint8_t v_severity_435_, uint8_t v_isSilent_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_){
_start:
{
lean_object* v_ref_446_; lean_object* v___x_447_; 
v_ref_446_ = lean_ctor_get(v___y_443_, 2);
v___x_447_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg(v_ref_446_, v_msgData_434_, v_severity_435_, v_isSilent_436_, v___y_441_, v___y_442_, v___y_443_, v___y_444_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0___boxed(lean_object* v_msgData_448_, lean_object* v_severity_449_, lean_object* v_isSilent_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_){
_start:
{
uint8_t v_severity_boxed_460_; uint8_t v_isSilent_boxed_461_; lean_object* v_res_462_; 
v_severity_boxed_460_ = lean_unbox(v_severity_449_);
v_isSilent_boxed_461_ = lean_unbox(v_isSilent_450_);
v_res_462_ = l_Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0(v_msgData_448_, v_severity_boxed_460_, v_isSilent_boxed_461_, v___y_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
lean_dec(v___y_452_);
lean_dec_ref(v___y_451_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(lean_object* v_msgData_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
uint8_t v___x_473_; uint8_t v___x_474_; lean_object* v___x_475_; 
v___x_473_ = 0;
v___x_474_ = 0;
v___x_475_ = l_Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0(v_msgData_463_, v___x_473_, v___x_474_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0___boxed(lean_object* v_msgData_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(v_msgData_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec(v___y_478_);
lean_dec_ref(v___y_477_);
return v_res_486_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__1(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__0));
v___x_489_ = l_Lean_stringToMessageData(v___x_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0(uint8_t v___x_491_, lean_object* v_stx_492_, lean_object* v___x_493_, lean_object* v___x_494_, lean_object* v___x_495_, lean_object* v___x_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_filter_x3f_507_; lean_object* v___y_508_; lean_object* v___y_509_; lean_object* v___y_510_; lean_object* v___y_511_; lean_object* v___y_512_; lean_object* v___y_513_; lean_object* v___y_514_; lean_object* v___y_515_; 
if (v___x_491_ == 0)
{
lean_object* v___x_541_; 
lean_dec_ref(v___x_496_);
lean_dec_ref(v___x_495_);
lean_dec_ref(v___x_494_);
lean_dec_ref(v___x_493_);
v___x_541_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_541_;
}
else
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_542_ = lean_unsigned_to_nat(1u);
v___x_543_ = l_Lean_Syntax_getArg(v_stx_492_, v___x_542_);
v___x_544_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__2));
v___x_545_ = l_Lean_Name_mkStr5(v___x_493_, v___x_494_, v___x_495_, v___x_496_, v___x_544_);
lean_inc(v___x_543_);
v___x_546_ = l_Lean_Syntax_isOfKind(v___x_543_, v___x_545_);
lean_dec(v___x_545_);
if (v___x_546_ == 0)
{
lean_object* v___x_547_; 
lean_dec(v___x_543_);
v___x_547_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_547_;
}
else
{
lean_object* v___x_548_; lean_object* v___x_549_; uint8_t v___x_550_; 
v___x_548_ = lean_unsigned_to_nat(0u);
v___x_549_ = l_Lean_Syntax_getArg(v___x_543_, v___x_548_);
lean_dec(v___x_543_);
v___x_550_ = l_Lean_Syntax_isNone(v___x_549_);
if (v___x_550_ == 0)
{
uint8_t v___x_551_; 
lean_inc(v___x_549_);
v___x_551_ = l_Lean_Syntax_matchesNull(v___x_549_, v___x_542_);
if (v___x_551_ == 0)
{
lean_object* v___x_552_; 
lean_dec(v___x_549_);
v___x_552_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_552_;
}
else
{
lean_object* v_filter_x3f_553_; lean_object* v___x_554_; 
v_filter_x3f_553_ = l_Lean_Syntax_getArg(v___x_549_, v___x_548_);
lean_dec(v___x_549_);
v___x_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_554_, 0, v_filter_x3f_553_);
v_filter_x3f_507_ = v___x_554_;
v___y_508_ = v___y_497_;
v___y_509_ = v___y_498_;
v___y_510_ = v___y_499_;
v___y_511_ = v___y_500_;
v___y_512_ = v___y_501_;
v___y_513_ = v___y_502_;
v___y_514_ = v___y_503_;
v___y_515_ = v___y_504_;
goto v___jp_506_;
}
}
else
{
lean_object* v___x_555_; 
lean_dec(v___x_549_);
v___x_555_ = lean_box(0);
v_filter_x3f_507_ = v___x_555_;
v___y_508_ = v___y_497_;
v___y_509_ = v___y_498_;
v___y_510_ = v___y_499_;
v___y_511_ = v___y_500_;
v___y_512_ = v___y_501_;
v___y_513_ = v___y_502_;
v___y_514_ = v___y_503_;
v___y_515_ = v___y_504_;
goto v___jp_506_;
}
}
}
v___jp_506_:
{
lean_object* v___x_516_; 
v___x_516_ = l_Lean_Elab_Tactic_Grind_elabFilter(v_filter_x3f_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; uint8_t v___x_518_; lean_object* v___x_519_; 
v_a_517_ = lean_ctor_get(v___x_516_, 0);
lean_inc(v_a_517_);
lean_dec_ref_known(v___x_516_, 1);
v___x_518_ = 0;
v___x_519_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f(v_a_517_, v___x_518_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v_a_520_; 
v_a_520_ = lean_ctor_get(v___x_519_, 0);
lean_inc(v_a_520_);
lean_dec_ref_known(v___x_519_, 1);
if (lean_obj_tag(v_a_520_) == 1)
{
lean_object* v_val_521_; lean_object* v___x_522_; 
v_val_521_ = lean_ctor_get(v_a_520_, 0);
lean_inc(v_val_521_);
lean_dec_ref_known(v_a_520_, 1);
v___x_522_ = l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(v_val_521_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
return v___x_522_;
}
else
{
lean_object* v___x_523_; lean_object* v___x_524_; 
lean_dec(v_a_520_);
v___x_523_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__1, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__1);
v___x_524_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg(v___x_523_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
return v___x_524_;
}
}
else
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_532_; 
v_a_525_ = lean_ctor_get(v___x_519_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_532_ == 0)
{
v___x_527_ = v___x_519_;
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_519_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_532_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_530_; 
if (v_isShared_528_ == 0)
{
v___x_530_ = v___x_527_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_a_525_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
else
{
lean_object* v_a_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_540_; 
v_a_533_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_540_ == 0)
{
v___x_535_ = v___x_516_;
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_a_533_);
lean_dec(v___x_516_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_538_; 
if (v_isShared_536_ == 0)
{
v___x_538_ = v___x_535_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_a_533_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___boxed(lean_object* v___x_556_, lean_object* v_stx_557_, lean_object* v___x_558_, lean_object* v___x_559_, lean_object* v___x_560_, lean_object* v___x_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_){
_start:
{
uint8_t v___x_6928__boxed_571_; lean_object* v_res_572_; 
v___x_6928__boxed_571_ = lean_unbox(v___x_556_);
v_res_572_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0(v___x_6928__boxed_571_, v_stx_557_, v___x_558_, v___x_559_, v___x_560_, v___x_561_, v___y_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec(v___y_563_);
lean_dec_ref(v___y_562_);
lean_dec(v_stx_557_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted(lean_object* v_stx_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; uint8_t v___x_598_; lean_object* v___x_599_; lean_object* v___y_600_; lean_object* v___x_601_; 
v___x_593_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0));
v___x_594_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1));
v___x_595_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1));
v___x_596_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2));
v___x_597_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4));
lean_inc(v_stx_583_);
v___x_598_ = l_Lean_Syntax_isOfKind(v_stx_583_, v___x_597_);
v___x_599_ = lean_box(v___x_598_);
v___y_600_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___boxed), 15, 6);
lean_closure_set(v___y_600_, 0, v___x_599_);
lean_closure_set(v___y_600_, 1, v_stx_583_);
lean_closure_set(v___y_600_, 2, v___x_593_);
lean_closure_set(v___y_600_, 3, v___x_594_);
lean_closure_set(v___y_600_, 4, v___x_595_);
lean_closure_set(v___y_600_, 5, v___x_596_);
v___x_601_ = l_Lean_Elab_Tactic_Grind_withMainContext___redArg(v___y_600_, v_a_584_, v_a_585_, v_a_586_, v_a_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___boxed(lean_object* v_stx_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted(v_stx_602_, v_a_603_, v_a_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_);
lean_dec(v_a_610_);
lean_dec_ref(v_a_609_);
lean_dec(v_a_608_);
lean_dec_ref(v_a_607_);
lean_dec(v_a_606_);
lean_dec_ref(v_a_605_);
lean_dec(v_a_604_);
lean_dec_ref(v_a_603_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1(lean_object* v_00_u03b1_613_, lean_object* v_msg_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
lean_object* v___x_624_; 
v___x_624_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg(v_msg_614_, v___y_619_, v___y_620_, v___y_621_, v___y_622_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___boxed(lean_object* v_00_u03b1_625_, lean_object* v_msg_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1(v_00_u03b1_625_, v_msg_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_, v___y_634_);
lean_dec(v___y_634_);
lean_dec_ref(v___y_633_);
lean_dec(v___y_632_);
lean_dec_ref(v___y_631_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
lean_dec(v___y_628_);
lean_dec_ref(v___y_627_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2(lean_object* v_ref_637_, lean_object* v_msgData_638_, uint8_t v_severity_639_, uint8_t v_isSilent_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_){
_start:
{
lean_object* v___x_650_; 
v___x_650_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg(v_ref_637_, v_msgData_638_, v_severity_639_, v_isSilent_640_, v___y_645_, v___y_646_, v___y_647_, v___y_648_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___boxed(lean_object* v_ref_651_, lean_object* v_msgData_652_, lean_object* v_severity_653_, lean_object* v_isSilent_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_){
_start:
{
uint8_t v_severity_boxed_664_; uint8_t v_isSilent_boxed_665_; lean_object* v_res_666_; 
v_severity_boxed_664_ = lean_unbox(v_severity_653_);
v_isSilent_boxed_665_ = lean_unbox(v_isSilent_654_);
v_res_666_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2(v_ref_651_, v_msgData_652_, v_severity_boxed_664_, v_isSilent_boxed_665_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_);
lean_dec(v___y_662_);
lean_dec_ref(v___y_661_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
lean_dec(v_ref_651_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1(){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_707_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_708_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__4));
v___x_709_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___closed__14));
v___x_710_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___boxed), 10, 0);
v___x_711_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_707_, v___x_708_, v___x_709_, v___x_710_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1___boxed(lean_object* v_a_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1();
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___redArg(lean_object* v_filter_714_, lean_object* v_as_715_, size_t v_i_716_, size_t v_stop_717_, lean_object* v_b_718_, lean_object* v___y_719_, lean_object* v___y_720_){
_start:
{
lean_object* v_a_723_; uint8_t v___x_727_; 
v___x_727_ = lean_usize_dec_eq(v_i_716_, v_stop_717_);
if (v___x_727_ == 0)
{
lean_object* v___x_728_; lean_object* v___x_729_; 
v___x_728_ = lean_array_uget_borrowed(v_as_715_, v_i_716_);
lean_inc(v_filter_714_);
lean_inc(v___x_728_);
v___x_729_ = l___private_Lean_Meta_Tactic_Grind_Filter_0__Lean_Meta_Grind_Filter_eval_go___redArg(v___x_728_, v_filter_714_, v___y_719_, v___y_720_);
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v_a_730_; uint8_t v___x_731_; 
v_a_730_ = lean_ctor_get(v___x_729_, 0);
lean_inc(v_a_730_);
lean_dec_ref_known(v___x_729_, 1);
v___x_731_ = lean_unbox(v_a_730_);
lean_dec(v_a_730_);
if (v___x_731_ == 0)
{
v_a_723_ = v_b_718_;
goto v___jp_722_;
}
else
{
uint8_t v___x_732_; 
v___x_732_ = l_Lean_Expr_isTrue(v___x_728_);
if (v___x_732_ == 0)
{
uint8_t v___x_733_; 
v___x_733_ = l_Lean_Expr_isFalse(v___x_728_);
if (v___x_733_ == 0)
{
lean_object* v___x_734_; 
lean_inc(v___x_728_);
v___x_734_ = lean_array_push(v_b_718_, v___x_728_);
v_a_723_ = v___x_734_;
goto v___jp_722_;
}
else
{
v_a_723_ = v_b_718_;
goto v___jp_722_;
}
}
else
{
v_a_723_ = v_b_718_;
goto v___jp_722_;
}
}
}
else
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
lean_dec_ref(v_b_718_);
lean_dec(v_filter_714_);
v_a_735_ = lean_ctor_get(v___x_729_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_742_ == 0)
{
v___x_737_ = v___x_729_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_729_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
else
{
lean_object* v___x_743_; 
lean_dec(v_filter_714_);
v___x_743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_743_, 0, v_b_718_);
return v___x_743_;
}
v___jp_722_:
{
size_t v___x_724_; size_t v___x_725_; 
v___x_724_ = ((size_t)1ULL);
v___x_725_ = lean_usize_add(v_i_716_, v___x_724_);
v_i_716_ = v___x_725_;
v_b_718_ = v_a_723_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___redArg___boxed(lean_object* v_filter_744_, lean_object* v_as_745_, lean_object* v_i_746_, lean_object* v_stop_747_, lean_object* v_b_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_){
_start:
{
size_t v_i_boxed_752_; size_t v_stop_boxed_753_; lean_object* v_res_754_; 
v_i_boxed_752_ = lean_unbox_usize(v_i_746_);
lean_dec(v_i_746_);
v_stop_boxed_753_ = lean_unbox_usize(v_stop_747_);
lean_dec(v_stop_747_);
v_res_754_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___redArg(v_filter_744_, v_as_745_, v_i_boxed_752_, v_stop_boxed_753_, v_b_748_, v___y_749_, v___y_750_);
lean_dec(v___y_750_);
lean_dec(v___y_749_);
lean_dec_ref(v_as_745_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___lam__0(lean_object* v_filter_755_, lean_object* v_____do__lift_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_){
_start:
{
uint8_t v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; uint8_t v___x_775_; 
v___x_768_ = 0;
v___x_769_ = lean_st_ref_get(v___y_757_);
v___x_770_ = l_Lean_Meta_Grind_Goal_getEqc(v___x_769_, v_____do__lift_756_, v___x_768_);
lean_dec(v___x_769_);
v___x_771_ = lean_array_mk(v___x_770_);
v___x_772_ = lean_unsigned_to_nat(0u);
v___x_773_ = lean_array_get_size(v___x_771_);
v___x_774_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___lam__0___closed__0));
v___x_775_ = lean_nat_dec_lt(v___x_772_, v___x_773_);
if (v___x_775_ == 0)
{
lean_object* v___x_776_; 
lean_dec_ref(v___x_771_);
lean_dec(v_filter_755_);
v___x_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_776_, 0, v___x_774_);
return v___x_776_;
}
else
{
size_t v___x_777_; size_t v___x_778_; lean_object* v___x_779_; 
v___x_777_ = ((size_t)0ULL);
v___x_778_ = lean_usize_of_nat(v___x_773_);
v___x_779_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___redArg(v_filter_755_, v___x_771_, v___x_777_, v___x_778_, v___x_774_, v___y_757_, v___y_764_);
lean_dec_ref(v___x_771_);
return v___x_779_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___lam__0___boxed(lean_object* v_filter_780_, lean_object* v_____do__lift_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___lam__0(v_filter_780_, v_____do__lift_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_);
lean_dec(v___y_791_);
lean_dec_ref(v___y_790_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
lean_dec(v___y_783_);
lean_dec(v___y_782_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___lam__1(uint8_t v_isTrue_794_, lean_object* v___f_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_){
_start:
{
if (v_isTrue_794_ == 0)
{
lean_object* v___x_807_; 
v___x_807_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v___y_800_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v_a_808_; lean_object* v___x_809_; 
v_a_808_ = lean_ctor_get(v___x_807_, 0);
lean_inc(v_a_808_);
lean_dec_ref_known(v___x_807_, 1);
lean_inc(v___y_805_);
lean_inc_ref(v___y_804_);
lean_inc(v___y_803_);
lean_inc_ref(v___y_802_);
lean_inc(v___y_801_);
lean_inc_ref(v___y_800_);
lean_inc(v___y_799_);
lean_inc_ref(v___y_798_);
lean_inc(v___y_797_);
lean_inc(v___y_796_);
v___x_809_ = lean_apply_12(v___f_795_, v_a_808_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, lean_box(0));
return v___x_809_;
}
else
{
lean_object* v_a_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_817_; 
lean_dec_ref(v___f_795_);
v_a_810_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_817_ == 0)
{
v___x_812_ = v___x_807_;
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_a_810_);
lean_dec(v___x_807_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_815_; 
if (v_isShared_813_ == 0)
{
v___x_815_ = v___x_812_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_a_810_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
else
{
lean_object* v___x_818_; 
v___x_818_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v___y_800_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v_a_819_; lean_object* v___x_820_; 
v_a_819_ = lean_ctor_get(v___x_818_, 0);
lean_inc(v_a_819_);
lean_dec_ref_known(v___x_818_, 1);
lean_inc(v___y_805_);
lean_inc_ref(v___y_804_);
lean_inc(v___y_803_);
lean_inc_ref(v___y_802_);
lean_inc(v___y_801_);
lean_inc_ref(v___y_800_);
lean_inc(v___y_799_);
lean_inc_ref(v___y_798_);
lean_inc(v___y_797_);
lean_inc(v___y_796_);
v___x_820_ = lean_apply_12(v___f_795_, v_a_819_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, lean_box(0));
return v___x_820_;
}
else
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_828_; 
lean_dec_ref(v___f_795_);
v_a_821_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_828_ == 0)
{
v___x_823_ = v___x_818_;
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_818_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_826_; 
if (v_isShared_824_ == 0)
{
v___x_826_ = v___x_823_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_a_821_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___lam__1___boxed(lean_object* v_isTrue_829_, lean_object* v___f_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_){
_start:
{
uint8_t v_isTrue_boxed_842_; lean_object* v_res_843_; 
v_isTrue_boxed_842_ = lean_unbox(v_isTrue_829_);
v_res_843_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___lam__1(v_isTrue_boxed_842_, v___f_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_833_);
lean_dec(v___y_832_);
lean_dec(v___y_831_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f(lean_object* v_filter_850_, uint8_t v_isTrue_851_, uint8_t v_collapsed_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_){
_start:
{
lean_object* v___f_862_; lean_object* v___x_863_; lean_object* v___y_864_; lean_object* v___x_865_; 
v___f_862_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___lam__0___boxed), 13, 1);
lean_closure_set(v___f_862_, 0, v_filter_850_);
v___x_863_ = lean_box(v_isTrue_851_);
v___y_864_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___lam__1___boxed), 13, 2);
lean_closure_set(v___y_864_, 0, v___x_863_);
lean_closure_set(v___y_864_, 1, v___f_862_);
v___x_865_ = l_Lean_Elab_Tactic_Grind_liftGoalM___redArg(v___y_864_, v_a_853_, v_a_854_, v_a_855_, v_a_856_, v_a_857_, v_a_858_, v_a_859_, v_a_860_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_890_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_890_ == 0)
{
v___x_868_ = v___x_865_;
v_isShared_869_ = v_isSharedCheck_890_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_dec(v___x_865_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_890_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_870_; lean_object* v___x_871_; uint8_t v___x_872_; 
v___x_870_ = lean_array_get_size(v_a_866_);
v___x_871_ = lean_unsigned_to_nat(0u);
v___x_872_ = lean_nat_dec_eq(v___x_870_, v___x_871_);
if (v___x_872_ == 0)
{
lean_object* v___x_873_; lean_object* v___y_875_; 
v___x_873_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__1));
if (v_isTrue_851_ == 0)
{
lean_object* v___x_884_; 
v___x_884_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__3));
v___y_875_ = v___x_884_;
goto v___jp_874_;
}
else
{
lean_object* v___x_885_; 
v___x_885_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__4));
v___y_875_ = v___x_885_;
goto v___jp_874_;
}
v___jp_874_:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_882_; 
v___x_876_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__2));
lean_inc_ref(v___y_875_);
v___x_877_ = lean_string_append(v___y_875_, v___x_876_);
v___x_878_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f___closed__4));
v___x_879_ = l_Lean_Meta_Grind_ppExprArray(v___x_873_, v___x_877_, v_a_866_, v___x_878_, v_collapsed_852_);
v___x_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_880_, 0, v___x_879_);
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v___x_880_);
v___x_882_ = v___x_868_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v___x_880_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
else
{
lean_object* v___x_886_; lean_object* v___x_888_; 
lean_dec(v_a_866_);
v___x_886_ = lean_box(0);
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v___x_886_);
v___x_888_ = v___x_868_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_886_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
}
else
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
v_a_891_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_898_ == 0)
{
v___x_893_ = v___x_865_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_865_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_a_891_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___boxed(lean_object* v_filter_899_, lean_object* v_isTrue_900_, lean_object* v_collapsed_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_){
_start:
{
uint8_t v_isTrue_boxed_911_; uint8_t v_collapsed_boxed_912_; lean_object* v_res_913_; 
v_isTrue_boxed_911_ = lean_unbox(v_isTrue_900_);
v_collapsed_boxed_912_ = lean_unbox(v_collapsed_901_);
v_res_913_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f(v_filter_899_, v_isTrue_boxed_911_, v_collapsed_boxed_912_, v_a_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_, v_a_907_, v_a_908_, v_a_909_);
lean_dec(v_a_909_);
lean_dec_ref(v_a_908_);
lean_dec(v_a_907_);
lean_dec_ref(v_a_906_);
lean_dec(v_a_905_);
lean_dec_ref(v_a_904_);
lean_dec(v_a_903_);
lean_dec_ref(v_a_902_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0(lean_object* v_filter_914_, lean_object* v_as_915_, size_t v_i_916_, size_t v_stop_917_, lean_object* v_b_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_){
_start:
{
lean_object* v___x_930_; 
v___x_930_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___redArg(v_filter_914_, v_as_915_, v_i_916_, v_stop_917_, v_b_918_, v___y_919_, v___y_926_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0___boxed(lean_object* v_filter_931_, lean_object* v_as_932_, lean_object* v_i_933_, lean_object* v_stop_934_, lean_object* v_b_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
size_t v_i_boxed_947_; size_t v_stop_boxed_948_; lean_object* v_res_949_; 
v_i_boxed_947_ = lean_unbox_usize(v_i_933_);
lean_dec(v_i_933_);
v_stop_boxed_948_ = lean_unbox_usize(v_stop_934_);
lean_dec(v_stop_934_);
v_res_949_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f_spec__0(v_filter_931_, v_as_932_, v_i_boxed_947_, v_stop_boxed_948_, v_b_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec(v___y_943_);
lean_dec_ref(v___y_942_);
lean_dec(v___y_941_);
lean_dec_ref(v___y_940_);
lean_dec(v___y_939_);
lean_dec_ref(v___y_938_);
lean_dec(v___y_937_);
lean_dec(v___y_936_);
lean_dec_ref(v_as_932_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0(lean_object* v_filter_x3f_953_, uint8_t v_isTrue_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v___x_964_; 
v___x_964_ = l_Lean_Elab_Tactic_Grind_elabFilter(v_filter_x3f_953_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v_a_965_; uint8_t v___x_966_; lean_object* v___x_967_; 
v_a_965_ = lean_ctor_get(v___x_964_, 0);
lean_inc(v_a_965_);
lean_dec_ref_known(v___x_964_, 1);
v___x_966_ = 0;
v___x_967_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f(v_a_965_, v_isTrue_954_, v___x_966_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
if (lean_obj_tag(v___x_967_) == 0)
{
lean_object* v_a_968_; 
v_a_968_ = lean_ctor_get(v___x_967_, 0);
lean_inc(v_a_968_);
lean_dec_ref_known(v___x_967_, 1);
if (lean_obj_tag(v_a_968_) == 1)
{
lean_object* v_val_969_; lean_object* v___x_970_; 
v_val_969_ = lean_ctor_get(v_a_968_, 0);
lean_inc(v_val_969_);
lean_dec_ref_known(v_a_968_, 1);
v___x_970_ = l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(v_val_969_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
return v___x_970_;
}
else
{
lean_object* v___x_971_; lean_object* v___y_973_; 
lean_dec(v_a_968_);
v___x_971_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__0));
if (v_isTrue_954_ == 0)
{
lean_object* v___x_980_; 
v___x_980_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__1));
v___y_973_ = v___x_980_;
goto v___jp_972_;
}
else
{
lean_object* v___x_981_; 
v___x_981_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___closed__2));
v___y_973_ = v___x_981_;
goto v___jp_972_;
}
v___jp_972_:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_974_ = lean_string_append(v___x_971_, v___y_973_);
v___x_975_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f___closed__2));
v___x_976_ = lean_string_append(v___x_974_, v___x_975_);
v___x_977_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_977_, 0, v___x_976_);
v___x_978_ = l_Lean_MessageData_ofFormat(v___x_977_);
v___x_979_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg(v___x_978_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
return v___x_979_;
}
}
}
else
{
lean_object* v_a_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_989_; 
v_a_982_ = lean_ctor_get(v___x_967_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_967_);
if (v_isSharedCheck_989_ == 0)
{
v___x_984_ = v___x_967_;
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_a_982_);
lean_dec(v___x_967_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_987_; 
if (v_isShared_985_ == 0)
{
v___x_987_ = v___x_984_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_a_982_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
else
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_997_; 
v_a_990_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_997_ == 0)
{
v___x_992_ = v___x_964_;
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_964_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_995_; 
if (v_isShared_993_ == 0)
{
v___x_995_ = v___x_992_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_a_990_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___boxed(lean_object* v_filter_x3f_998_, lean_object* v_isTrue_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
uint8_t v_isTrue_boxed_1009_; lean_object* v_res_1010_; 
v_isTrue_boxed_1009_ = lean_unbox(v_isTrue_999_);
v_res_1010_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0(v_filter_x3f_998_, v_isTrue_boxed_1009_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_);
lean_dec(v___y_1007_);
lean_dec_ref(v___y_1006_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v___y_1000_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps(lean_object* v_filter_x3f_1011_, uint8_t v_isTrue_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_){
_start:
{
lean_object* v___x_1022_; lean_object* v___f_1023_; lean_object* v___x_1024_; 
v___x_1022_ = lean_box(v_isTrue_1012_);
v___f_1023_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1023_, 0, v_filter_x3f_1011_);
lean_closure_set(v___f_1023_, 1, v___x_1022_);
v___x_1024_ = l_Lean_Elab_Tactic_Grind_withMainContext___redArg(v___f_1023_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps___boxed(lean_object* v_filter_x3f_1025_, lean_object* v_isTrue_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_){
_start:
{
uint8_t v_isTrue_boxed_1036_; lean_object* v_res_1037_; 
v_isTrue_boxed_1036_ = lean_unbox(v_isTrue_1026_);
v_res_1037_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps(v_filter_x3f_1025_, v_isTrue_boxed_1036_, v_a_1027_, v_a_1028_, v_a_1029_, v_a_1030_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_);
lean_dec(v_a_1034_);
lean_dec_ref(v_a_1033_);
lean_dec(v_a_1032_);
lean_dec_ref(v_a_1031_);
lean_dec(v_a_1030_);
lean_dec_ref(v_a_1029_);
lean_dec(v_a_1028_);
lean_dec_ref(v_a_1027_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue(lean_object* v_stx_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_){
_start:
{
lean_object* v___x_1061_; uint8_t v___x_1062_; 
v___x_1061_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1));
lean_inc(v_stx_1051_);
v___x_1062_ = l_Lean_Syntax_isOfKind(v_stx_1051_, v___x_1061_);
if (v___x_1062_ == 0)
{
lean_object* v___x_1063_; 
lean_dec(v_stx_1051_);
v___x_1063_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1063_;
}
else
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; uint8_t v___x_1067_; 
v___x_1064_ = lean_unsigned_to_nat(1u);
v___x_1065_ = l_Lean_Syntax_getArg(v_stx_1051_, v___x_1064_);
lean_dec(v_stx_1051_);
v___x_1066_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2));
lean_inc(v___x_1065_);
v___x_1067_ = l_Lean_Syntax_isOfKind(v___x_1065_, v___x_1066_);
if (v___x_1067_ == 0)
{
lean_object* v___x_1068_; 
lean_dec(v___x_1065_);
v___x_1068_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1068_;
}
else
{
lean_object* v___x_1069_; lean_object* v___x_1070_; uint8_t v___x_1071_; 
v___x_1069_ = lean_unsigned_to_nat(0u);
v___x_1070_ = l_Lean_Syntax_getArg(v___x_1065_, v___x_1069_);
lean_dec(v___x_1065_);
v___x_1071_ = l_Lean_Syntax_isNone(v___x_1070_);
if (v___x_1071_ == 0)
{
uint8_t v___x_1072_; 
lean_inc(v___x_1070_);
v___x_1072_ = l_Lean_Syntax_matchesNull(v___x_1070_, v___x_1064_);
if (v___x_1072_ == 0)
{
lean_object* v___x_1073_; 
lean_dec(v___x_1070_);
v___x_1073_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1073_;
}
else
{
lean_object* v_filter_x3f_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v_filter_x3f_1074_ = l_Lean_Syntax_getArg(v___x_1070_, v___x_1069_);
lean_dec(v___x_1070_);
v___x_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1075_, 0, v_filter_x3f_1074_);
v___x_1076_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps(v___x_1075_, v___x_1067_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_);
return v___x_1076_;
}
}
else
{
lean_object* v___x_1077_; lean_object* v___x_1078_; 
lean_dec(v___x_1070_);
v___x_1077_ = lean_box(0);
v___x_1078_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps(v___x_1077_, v___x_1067_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_);
return v___x_1078_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___boxed(lean_object* v_stx_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue(v_stx_1079_, v_a_1080_, v_a_1081_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_, v_a_1086_, v_a_1087_);
lean_dec(v_a_1087_);
lean_dec_ref(v_a_1086_);
lean_dec(v_a_1085_);
lean_dec_ref(v_a_1084_);
lean_dec(v_a_1083_);
lean_dec_ref(v_a_1082_);
lean_dec(v_a_1081_);
lean_dec_ref(v_a_1080_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1(){
_start:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1095_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_1096_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__1));
v___x_1097_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___closed__1));
v___x_1098_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___boxed), 10, 0);
v___x_1099_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1095_, v___x_1096_, v___x_1097_, v___x_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1___boxed(lean_object* v_a_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1();
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse(lean_object* v_stx_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_){
_start:
{
lean_object* v_filter_x3f_1120_; lean_object* v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1123_; lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___y_1126_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___x_1131_; uint8_t v___x_1132_; 
v___x_1131_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1));
lean_inc(v_stx_1109_);
v___x_1132_ = l_Lean_Syntax_isOfKind(v_stx_1109_, v___x_1131_);
if (v___x_1132_ == 0)
{
lean_object* v___x_1133_; 
lean_dec(v_stx_1109_);
v___x_1133_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1133_;
}
else
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; uint8_t v___x_1137_; 
v___x_1134_ = lean_unsigned_to_nat(1u);
v___x_1135_ = l_Lean_Syntax_getArg(v_stx_1109_, v___x_1134_);
lean_dec(v_stx_1109_);
v___x_1136_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___closed__2));
lean_inc(v___x_1135_);
v___x_1137_ = l_Lean_Syntax_isOfKind(v___x_1135_, v___x_1136_);
if (v___x_1137_ == 0)
{
lean_object* v___x_1138_; 
lean_dec(v___x_1135_);
v___x_1138_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1138_;
}
else
{
lean_object* v___x_1139_; lean_object* v___x_1140_; uint8_t v___x_1141_; 
v___x_1139_ = lean_unsigned_to_nat(0u);
v___x_1140_ = l_Lean_Syntax_getArg(v___x_1135_, v___x_1139_);
lean_dec(v___x_1135_);
v___x_1141_ = l_Lean_Syntax_isNone(v___x_1140_);
if (v___x_1141_ == 0)
{
uint8_t v___x_1142_; 
lean_inc(v___x_1140_);
v___x_1142_ = l_Lean_Syntax_matchesNull(v___x_1140_, v___x_1134_);
if (v___x_1142_ == 0)
{
lean_object* v___x_1143_; 
lean_dec(v___x_1140_);
v___x_1143_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1143_;
}
else
{
lean_object* v_filter_x3f_1144_; lean_object* v___x_1145_; 
v_filter_x3f_1144_ = l_Lean_Syntax_getArg(v___x_1140_, v___x_1139_);
lean_dec(v___x_1140_);
v___x_1145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1145_, 0, v_filter_x3f_1144_);
v_filter_x3f_1120_ = v___x_1145_;
v___y_1121_ = v_a_1110_;
v___y_1122_ = v_a_1111_;
v___y_1123_ = v_a_1112_;
v___y_1124_ = v_a_1113_;
v___y_1125_ = v_a_1114_;
v___y_1126_ = v_a_1115_;
v___y_1127_ = v_a_1116_;
v___y_1128_ = v_a_1117_;
goto v___jp_1119_;
}
}
else
{
lean_object* v___x_1146_; 
lean_dec(v___x_1140_);
v___x_1146_ = lean_box(0);
v_filter_x3f_1120_ = v___x_1146_;
v___y_1121_ = v_a_1110_;
v___y_1122_ = v_a_1111_;
v___y_1123_ = v_a_1112_;
v___y_1124_ = v_a_1113_;
v___y_1125_ = v_a_1114_;
v___y_1126_ = v_a_1115_;
v___y_1127_ = v_a_1116_;
v___y_1128_ = v_a_1117_;
goto v___jp_1119_;
}
}
}
v___jp_1119_:
{
uint8_t v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = 0;
v___x_1130_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_showProps(v_filter_x3f_1120_, v___x_1129_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_);
return v___x_1130_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___boxed(lean_object* v_stx_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse(v_stx_1147_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_);
lean_dec(v_a_1155_);
lean_dec_ref(v_a_1154_);
lean_dec(v_a_1153_);
lean_dec_ref(v_a_1152_);
lean_dec(v_a_1151_);
lean_dec_ref(v_a_1150_);
lean_dec(v_a_1149_);
lean_dec_ref(v_a_1148_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1(){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1163_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_1164_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___closed__1));
v___x_1165_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___closed__1));
v___x_1166_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___boxed), 10, 0);
v___x_1167_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1163_, v___x_1164_, v___x_1165_, v___x_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1___boxed(lean_object* v_a_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1();
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___redArg(uint8_t v_a_1170_, uint8_t v_a_1171_, lean_object* v_x_1172_, lean_object* v_x_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
if (lean_obj_tag(v_x_1172_) == 0)
{
lean_object* v___x_1179_; 
v___x_1179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1179_, 0, v_x_1173_);
return v___x_1179_;
}
else
{
lean_object* v_head_1180_; lean_object* v_tail_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1203_; 
v_head_1180_ = lean_ctor_get(v_x_1172_, 0);
v_tail_1181_ = lean_ctor_get(v_x_1172_, 1);
v_isSharedCheck_1203_ = !lean_is_exclusive(v_x_1172_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1183_ = v_x_1172_;
v_isShared_1184_ = v_isSharedCheck_1203_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_tail_1181_);
lean_inc(v_head_1180_);
lean_dec(v_x_1172_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1203_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
uint8_t v_a_1186_; lean_object* v___x_1192_; 
lean_inc(v_head_1180_);
v___x_1192_ = l_Lean_Meta_Grind_isSupportApp(v_head_1180_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
if (lean_obj_tag(v___x_1192_) == 0)
{
lean_object* v_a_1193_; uint8_t v___x_1194_; 
v_a_1193_ = lean_ctor_get(v___x_1192_, 0);
lean_inc(v_a_1193_);
lean_dec_ref_known(v___x_1192_, 1);
v___x_1194_ = lean_unbox(v_a_1193_);
lean_dec(v_a_1193_);
if (v___x_1194_ == 0)
{
v_a_1186_ = v_a_1170_;
goto v___jp_1185_;
}
else
{
v_a_1186_ = v_a_1171_;
goto v___jp_1185_;
}
}
else
{
lean_object* v_a_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1202_; 
lean_del_object(v___x_1183_);
lean_dec(v_tail_1181_);
lean_dec(v_head_1180_);
lean_dec(v_x_1173_);
v_a_1195_ = lean_ctor_get(v___x_1192_, 0);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1192_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1197_ = v___x_1192_;
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_a_1195_);
lean_dec(v___x_1192_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1200_; 
if (v_isShared_1198_ == 0)
{
v___x_1200_ = v___x_1197_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_a_1195_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
v___jp_1185_:
{
if (v_a_1186_ == 0)
{
lean_del_object(v___x_1183_);
lean_dec(v_head_1180_);
v_x_1172_ = v_tail_1181_;
goto _start;
}
else
{
lean_object* v___x_1189_; 
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 1, v_x_1173_);
v___x_1189_ = v___x_1183_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_head_1180_);
lean_ctor_set(v_reuseFailAlloc_1191_, 1, v_x_1173_);
v___x_1189_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
v_x_1172_ = v_tail_1181_;
v_x_1173_ = v___x_1189_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___redArg___boxed(lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_x_1206_, lean_object* v_x_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_){
_start:
{
uint8_t v_a_22792__boxed_1213_; uint8_t v_a_22793__boxed_1214_; lean_object* v_res_1215_; 
v_a_22792__boxed_1213_ = lean_unbox(v_a_1204_);
v_a_22793__boxed_1214_ = lean_unbox(v_a_1205_);
v_res_1215_ = l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___redArg(v_a_22792__boxed_1213_, v_a_22793__boxed_1214_, v_x_1206_, v_x_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
lean_dec(v___y_1211_);
lean_dec_ref(v___y_1210_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__1(lean_object* v_x_1216_){
_start:
{
if (lean_obj_tag(v_x_1216_) == 0)
{
lean_object* v___x_1217_; 
v___x_1217_ = lean_box(0);
return v___x_1217_;
}
else
{
lean_object* v_head_1218_; lean_object* v_tail_1219_; uint8_t v___x_1220_; 
v_head_1218_ = lean_ctor_get(v_x_1216_, 0);
v_tail_1219_ = lean_ctor_get(v_x_1216_, 1);
v___x_1220_ = l_Lean_Expr_isFalse(v_head_1218_);
if (v___x_1220_ == 0)
{
v_x_1216_ = v_tail_1219_;
goto _start;
}
else
{
lean_object* v___x_1222_; 
lean_inc(v_head_1218_);
v___x_1222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1222_, 0, v_head_1218_);
return v___x_1222_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__1___boxed(lean_object* v_x_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__1(v_x_1223_);
lean_dec(v_x_1223_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___redArg(lean_object* v_filter_1225_, lean_object* v_x_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_){
_start:
{
if (lean_obj_tag(v_x_1226_) == 0)
{
uint8_t v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
lean_dec(v_filter_1225_);
v___x_1230_ = 0;
v___x_1231_ = lean_box(v___x_1230_);
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
return v___x_1232_;
}
else
{
lean_object* v_head_1233_; lean_object* v_tail_1234_; lean_object* v___x_1235_; 
v_head_1233_ = lean_ctor_get(v_x_1226_, 0);
lean_inc(v_head_1233_);
v_tail_1234_ = lean_ctor_get(v_x_1226_, 1);
lean_inc(v_tail_1234_);
lean_dec_ref_known(v_x_1226_, 2);
lean_inc(v_filter_1225_);
v___x_1235_ = l___private_Lean_Meta_Tactic_Grind_Filter_0__Lean_Meta_Grind_Filter_eval_go___redArg(v_head_1233_, v_filter_1225_, v___y_1227_, v___y_1228_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v_a_1236_; uint8_t v___x_1237_; 
v_a_1236_ = lean_ctor_get(v___x_1235_, 0);
v___x_1237_ = lean_unbox(v_a_1236_);
if (v___x_1237_ == 0)
{
lean_dec_ref_known(v___x_1235_, 1);
v_x_1226_ = v_tail_1234_;
goto _start;
}
else
{
lean_dec(v_tail_1234_);
lean_dec(v_filter_1225_);
return v___x_1235_;
}
}
else
{
lean_dec(v_tail_1234_);
lean_dec(v_filter_1225_);
return v___x_1235_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___redArg___boxed(lean_object* v_filter_1239_, lean_object* v_x_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___redArg(v_filter_1239_, v_x_1240_, v___y_1241_, v___y_1242_);
lean_dec(v___y_1242_);
lean_dec(v___y_1241_);
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___redArg(lean_object* v_x_1245_, lean_object* v_x_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_){
_start:
{
if (lean_obj_tag(v_x_1245_) == 0)
{
lean_object* v___x_1252_; 
v___x_1252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1252_, 0, v_x_1246_);
return v___x_1252_;
}
else
{
lean_object* v_head_1253_; lean_object* v_tail_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1274_; 
v_head_1253_ = lean_ctor_get(v_x_1245_, 0);
v_tail_1254_ = lean_ctor_get(v_x_1245_, 1);
v_isSharedCheck_1274_ = !lean_is_exclusive(v_x_1245_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1256_ = v_x_1245_;
v_isShared_1257_ = v_isSharedCheck_1274_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_tail_1254_);
lean_inc(v_head_1253_);
lean_dec(v_x_1245_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1274_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___x_1258_; 
lean_inc(v_head_1253_);
v___x_1258_ = l_Lean_Meta_Grind_isSupportApp(v_head_1253_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_);
if (lean_obj_tag(v___x_1258_) == 0)
{
lean_object* v_a_1259_; uint8_t v___x_1260_; 
v_a_1259_ = lean_ctor_get(v___x_1258_, 0);
lean_inc(v_a_1259_);
lean_dec_ref_known(v___x_1258_, 1);
v___x_1260_ = lean_unbox(v_a_1259_);
lean_dec(v_a_1259_);
if (v___x_1260_ == 0)
{
lean_del_object(v___x_1256_);
lean_dec(v_head_1253_);
v_x_1245_ = v_tail_1254_;
goto _start;
}
else
{
lean_object* v___x_1263_; 
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 1, v_x_1246_);
v___x_1263_ = v___x_1256_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_head_1253_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v_x_1246_);
v___x_1263_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
v_x_1245_ = v_tail_1254_;
v_x_1246_ = v___x_1263_;
goto _start;
}
}
}
else
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1273_; 
lean_del_object(v___x_1256_);
lean_dec(v_tail_1254_);
lean_dec(v_head_1253_);
lean_dec(v_x_1246_);
v_a_1266_ = lean_ctor_get(v___x_1258_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1258_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1268_ = v___x_1258_;
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1258_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
v___x_1271_ = v___x_1268_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_a_1266_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___redArg___boxed(lean_object* v_x_1275_, lean_object* v_x_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_){
_start:
{
lean_object* v_res_1282_; 
v_res_1282_ = l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___redArg(v_x_1275_, v_x_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_);
lean_dec(v___y_1280_);
lean_dec_ref(v___y_1279_);
lean_dec(v___y_1278_);
lean_dec_ref(v___y_1277_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__0(lean_object* v_x_1283_){
_start:
{
if (lean_obj_tag(v_x_1283_) == 0)
{
lean_object* v___x_1284_; 
v___x_1284_ = lean_box(0);
return v___x_1284_;
}
else
{
lean_object* v_head_1285_; lean_object* v_tail_1286_; uint8_t v___x_1287_; 
v_head_1285_ = lean_ctor_get(v_x_1283_, 0);
v_tail_1286_ = lean_ctor_get(v_x_1283_, 1);
v___x_1287_ = l_Lean_Expr_isTrue(v_head_1285_);
if (v___x_1287_ == 0)
{
v_x_1283_ = v_tail_1286_;
goto _start;
}
else
{
lean_object* v___x_1289_; 
lean_inc(v_head_1285_);
v___x_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1289_, 0, v_head_1285_);
return v___x_1289_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__0___boxed(lean_object* v_x_1290_){
_start:
{
lean_object* v_res_1291_; 
v_res_1291_ = l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__0(v_x_1290_);
lean_dec(v_x_1290_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg(lean_object* v_filter_1294_, lean_object* v_as_x27_1295_, lean_object* v_b_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_){
_start:
{
if (lean_obj_tag(v_as_x27_1295_) == 0)
{
lean_object* v___x_1308_; 
lean_dec(v_filter_1294_);
v___x_1308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1308_, 0, v_b_1296_);
return v___x_1308_;
}
else
{
lean_object* v_head_1309_; lean_object* v_tail_1310_; lean_object* v_fst_1311_; lean_object* v_snd_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1400_; 
v_head_1309_ = lean_ctor_get(v_as_x27_1295_, 0);
v_tail_1310_ = lean_ctor_get(v_as_x27_1295_, 1);
v_fst_1311_ = lean_ctor_get(v_b_1296_, 0);
v_snd_1312_ = lean_ctor_get(v_b_1296_, 1);
v_isSharedCheck_1400_ = !lean_is_exclusive(v_b_1296_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1314_ = v_b_1296_;
v_isShared_1315_ = v_isSharedCheck_1400_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_snd_1312_);
lean_inc(v_fst_1311_);
lean_dec(v_b_1296_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1400_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1321_; 
v___x_1321_ = l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__0(v_head_1309_);
if (lean_obj_tag(v___x_1321_) == 0)
{
lean_object* v___x_1322_; 
v___x_1322_ = l_List_find_x3f___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__1(v_head_1309_);
if (lean_obj_tag(v___x_1322_) == 0)
{
if (lean_obj_tag(v_head_1309_) == 1)
{
lean_object* v_tail_1323_; 
v_tail_1323_ = lean_ctor_get(v_head_1309_, 1);
if (lean_obj_tag(v_tail_1323_) == 1)
{
lean_object* v_head_1324_; lean_object* v_regularEqcs_1325_; lean_object* v___x_1326_; 
lean_del_object(v___x_1314_);
v_head_1324_ = lean_ctor_get(v_head_1309_, 0);
v_regularEqcs_1325_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___closed__0));
lean_inc(v_head_1324_);
v___x_1326_ = l_Lean_Meta_isProof(v_head_1324_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; uint8_t v___x_1328_; 
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
lean_inc(v_a_1327_);
lean_dec_ref_known(v___x_1326_, 1);
v___x_1328_ = lean_unbox(v_a_1327_);
if (v___x_1328_ == 0)
{
lean_object* v___x_1329_; 
lean_inc_ref(v_head_1309_);
lean_inc(v_filter_1294_);
v___x_1329_ = l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___redArg(v_filter_1294_, v_head_1309_, v___y_1297_, v___y_1304_);
if (lean_obj_tag(v___x_1329_) == 0)
{
lean_object* v_a_1330_; uint8_t v___x_1331_; 
v_a_1330_ = lean_ctor_get(v___x_1329_, 0);
lean_inc(v_a_1330_);
lean_dec_ref_known(v___x_1329_, 1);
v___x_1331_ = lean_unbox(v_a_1330_);
if (v___x_1331_ == 0)
{
lean_object* v___x_1332_; 
lean_dec(v_a_1330_);
lean_dec(v_a_1327_);
v___x_1332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1332_, 0, v_fst_1311_);
lean_ctor_set(v___x_1332_, 1, v_snd_1312_);
v_as_x27_1295_ = v_tail_1310_;
v_b_1296_ = v___x_1332_;
goto _start;
}
else
{
lean_object* v___x_1334_; uint8_t v___x_1335_; uint8_t v___x_1336_; lean_object* v___x_1337_; 
v___x_1334_ = lean_box(0);
v___x_1335_ = lean_unbox(v_a_1330_);
lean_dec(v_a_1330_);
v___x_1336_ = lean_unbox(v_a_1327_);
lean_dec(v_a_1327_);
lean_inc_ref(v_head_1309_);
v___x_1337_ = l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___redArg(v___x_1335_, v___x_1336_, v_head_1309_, v___x_1334_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; 
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
lean_inc(v_a_1338_);
lean_dec_ref_known(v___x_1337_, 1);
v___x_1339_ = l_List_reverse___redArg(v_a_1338_);
v___x_1340_ = l_List_lengthTR___redArg(v___x_1339_);
v___x_1341_ = lean_unsigned_to_nat(1u);
v___x_1342_ = lean_nat_dec_le(v___x_1340_, v___x_1341_);
lean_dec(v___x_1340_);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; 
lean_inc_ref(v_head_1309_);
v___x_1343_ = l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___redArg(v_head_1309_, v___x_1334_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
if (lean_obj_tag(v___x_1343_) == 0)
{
lean_object* v_a_1344_; lean_object* v___x_1345_; uint8_t v___x_1346_; 
v_a_1344_ = lean_ctor_get(v___x_1343_, 0);
lean_inc(v_a_1344_);
lean_dec_ref_known(v___x_1343_, 1);
v___x_1345_ = l_List_reverse___redArg(v_a_1344_);
v___x_1346_ = l_List_isEmpty___redArg(v___x_1345_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1347_ = l_Lean_Meta_Grind_ppEqc(v___x_1345_, v_regularEqcs_1325_);
v___x_1348_ = lean_mk_empty_array_with_capacity(v___x_1341_);
v___x_1349_ = lean_array_push(v___x_1348_, v___x_1347_);
v___x_1350_ = l_Lean_Meta_Grind_ppEqc(v___x_1339_, v___x_1349_);
v___x_1351_ = lean_array_push(v_fst_1311_, v___x_1350_);
v___x_1352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1351_);
lean_ctor_set(v___x_1352_, 1, v_snd_1312_);
v_as_x27_1295_ = v_tail_1310_;
v_b_1296_ = v___x_1352_;
goto _start;
}
else
{
lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; 
lean_dec(v___x_1345_);
v___x_1354_ = l_Lean_Meta_Grind_ppEqc(v___x_1339_, v_regularEqcs_1325_);
v___x_1355_ = lean_array_push(v_fst_1311_, v___x_1354_);
v___x_1356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1355_);
lean_ctor_set(v___x_1356_, 1, v_snd_1312_);
v_as_x27_1295_ = v_tail_1310_;
v_b_1296_ = v___x_1356_;
goto _start;
}
}
else
{
lean_object* v_a_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1365_; 
lean_dec(v___x_1339_);
lean_dec(v_snd_1312_);
lean_dec(v_fst_1311_);
lean_dec(v_filter_1294_);
v_a_1358_ = lean_ctor_get(v___x_1343_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1343_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1360_ = v___x_1343_;
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_a_1358_);
lean_dec(v___x_1343_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1363_; 
if (v_isShared_1361_ == 0)
{
v___x_1363_ = v___x_1360_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_a_1358_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
}
else
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
lean_dec(v___x_1339_);
lean_inc_ref(v_head_1309_);
v___x_1366_ = l_Lean_Meta_Grind_ppEqc(v_head_1309_, v_regularEqcs_1325_);
v___x_1367_ = lean_array_push(v_snd_1312_, v___x_1366_);
v___x_1368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1368_, 0, v_fst_1311_);
lean_ctor_set(v___x_1368_, 1, v___x_1367_);
v_as_x27_1295_ = v_tail_1310_;
v_b_1296_ = v___x_1368_;
goto _start;
}
}
else
{
lean_object* v_a_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1377_; 
lean_dec(v_snd_1312_);
lean_dec(v_fst_1311_);
lean_dec(v_filter_1294_);
v_a_1370_ = lean_ctor_get(v___x_1337_, 0);
v_isSharedCheck_1377_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1377_ == 0)
{
v___x_1372_ = v___x_1337_;
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_a_1370_);
lean_dec(v___x_1337_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1375_; 
if (v_isShared_1373_ == 0)
{
v___x_1375_ = v___x_1372_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v_a_1370_);
v___x_1375_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
return v___x_1375_;
}
}
}
}
}
else
{
lean_object* v_a_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1385_; 
lean_dec(v_a_1327_);
lean_dec(v_snd_1312_);
lean_dec(v_fst_1311_);
lean_dec(v_filter_1294_);
v_a_1378_ = lean_ctor_get(v___x_1329_, 0);
v_isSharedCheck_1385_ = !lean_is_exclusive(v___x_1329_);
if (v_isSharedCheck_1385_ == 0)
{
v___x_1380_ = v___x_1329_;
v_isShared_1381_ = v_isSharedCheck_1385_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_a_1378_);
lean_dec(v___x_1329_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1385_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
lean_object* v___x_1383_; 
if (v_isShared_1381_ == 0)
{
v___x_1383_ = v___x_1380_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v_a_1378_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
}
}
else
{
lean_object* v___x_1386_; 
lean_dec(v_a_1327_);
v___x_1386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1386_, 0, v_fst_1311_);
lean_ctor_set(v___x_1386_, 1, v_snd_1312_);
v_as_x27_1295_ = v_tail_1310_;
v_b_1296_ = v___x_1386_;
goto _start;
}
}
else
{
lean_object* v_a_1388_; lean_object* v___x_1390_; uint8_t v_isShared_1391_; uint8_t v_isSharedCheck_1395_; 
lean_dec(v_snd_1312_);
lean_dec(v_fst_1311_);
lean_dec(v_filter_1294_);
v_a_1388_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1395_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1390_ = v___x_1326_;
v_isShared_1391_ = v_isSharedCheck_1395_;
goto v_resetjp_1389_;
}
else
{
lean_inc(v_a_1388_);
lean_dec(v___x_1326_);
v___x_1390_ = lean_box(0);
v_isShared_1391_ = v_isSharedCheck_1395_;
goto v_resetjp_1389_;
}
v_resetjp_1389_:
{
lean_object* v___x_1393_; 
if (v_isShared_1391_ == 0)
{
v___x_1393_ = v___x_1390_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v_a_1388_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
}
}
else
{
goto v___jp_1316_;
}
}
else
{
goto v___jp_1316_;
}
}
else
{
lean_object* v___x_1396_; 
lean_dec_ref_known(v___x_1322_, 1);
lean_del_object(v___x_1314_);
v___x_1396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1396_, 0, v_fst_1311_);
lean_ctor_set(v___x_1396_, 1, v_snd_1312_);
v_as_x27_1295_ = v_tail_1310_;
v_b_1296_ = v___x_1396_;
goto _start;
}
}
else
{
lean_object* v___x_1398_; 
lean_dec_ref_known(v___x_1321_, 1);
lean_del_object(v___x_1314_);
v___x_1398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1398_, 0, v_fst_1311_);
lean_ctor_set(v___x_1398_, 1, v_snd_1312_);
v_as_x27_1295_ = v_tail_1310_;
v_b_1296_ = v___x_1398_;
goto _start;
}
v___jp_1316_:
{
lean_object* v___x_1318_; 
if (v_isShared_1315_ == 0)
{
v___x_1318_ = v___x_1314_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_fst_1311_);
lean_ctor_set(v_reuseFailAlloc_1320_, 1, v_snd_1312_);
v___x_1318_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
v_as_x27_1295_ = v_tail_1310_;
v_b_1296_ = v___x_1318_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___boxed(lean_object* v_filter_1401_, lean_object* v_as_x27_1402_, lean_object* v_b_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v_res_1415_; 
v_res_1415_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg(v_filter_1401_, v_as_x27_1402_, v_b_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
lean_dec(v___y_1413_);
lean_dec_ref(v___y_1412_);
lean_dec(v___y_1411_);
lean_dec_ref(v___y_1410_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec(v___y_1405_);
lean_dec(v___y_1404_);
lean_dec(v_as_x27_1402_);
return v_res_1415_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__4(void){
_start:
{
lean_object* v___x_1422_; lean_object* v___x_1423_; 
v___x_1422_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__3));
v___x_1423_ = l_Lean_MessageData_ofFormat(v___x_1422_);
return v___x_1423_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__7(void){
_start:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1427_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__6));
v___x_1428_ = l_Lean_MessageData_ofFormat(v___x_1427_);
return v___x_1428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0(lean_object* v___x_1429_, uint8_t v_collapsed_1430_, lean_object* v_regularEqcs_1431_, lean_object* v_filter_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
lean_object* v_regularEqcs_1445_; lean_object* v___x_1459_; uint8_t v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1459_ = lean_st_ref_get(v___y_1433_);
v___x_1460_ = 1;
v___x_1461_ = l_Lean_Meta_Grind_Goal_getEqcs(v___x_1459_, v___x_1460_);
lean_dec(v___x_1459_);
lean_inc_ref(v_regularEqcs_1431_);
v___x_1462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1462_, 0, v_regularEqcs_1431_);
lean_ctor_set(v___x_1462_, 1, v_regularEqcs_1431_);
v___x_1463_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg(v_filter_1432_, v___x_1461_, v___x_1462_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_);
lean_dec(v___x_1461_);
if (lean_obj_tag(v___x_1463_) == 0)
{
lean_object* v_a_1464_; lean_object* v_fst_1465_; lean_object* v_snd_1466_; lean_object* v___x_1467_; uint8_t v___x_1468_; 
v_a_1464_ = lean_ctor_get(v___x_1463_, 0);
lean_inc(v_a_1464_);
lean_dec_ref_known(v___x_1463_, 1);
v_fst_1465_ = lean_ctor_get(v_a_1464_, 0);
lean_inc(v_fst_1465_);
v_snd_1466_ = lean_ctor_get(v_a_1464_, 1);
lean_inc(v_snd_1466_);
lean_dec(v_a_1464_);
v___x_1467_ = lean_array_get_size(v_snd_1466_);
v___x_1468_ = lean_nat_dec_eq(v___x_1467_, v___x_1429_);
if (v___x_1468_ == 0)
{
lean_object* v___x_1469_; lean_object* v___x_1470_; double v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1469_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__1));
v___x_1470_ = lean_box(0);
lean_inc(v___x_1429_);
v___x_1471_ = lean_float_of_nat(v___x_1429_);
v___x_1472_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_1473_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1473_, 0, v___x_1469_);
lean_ctor_set(v___x_1473_, 1, v___x_1470_);
lean_ctor_set(v___x_1473_, 2, v___x_1472_);
lean_ctor_set_float(v___x_1473_, sizeof(void*)*3, v___x_1471_);
lean_ctor_set_float(v___x_1473_, sizeof(void*)*3 + 8, v___x_1471_);
lean_ctor_set_uint8(v___x_1473_, sizeof(void*)*3 + 16, v___x_1460_);
v___x_1474_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__7, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__7);
v___x_1475_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1475_, 0, v___x_1473_);
lean_ctor_set(v___x_1475_, 1, v___x_1474_);
lean_ctor_set(v___x_1475_, 2, v_snd_1466_);
v___x_1476_ = lean_array_push(v_fst_1465_, v___x_1475_);
v_regularEqcs_1445_ = v___x_1476_;
goto v___jp_1444_;
}
else
{
lean_dec(v_snd_1466_);
v_regularEqcs_1445_ = v_fst_1465_;
goto v___jp_1444_;
}
}
else
{
lean_object* v_a_1477_; lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1484_; 
lean_dec(v___x_1429_);
v_a_1477_ = lean_ctor_get(v___x_1463_, 0);
v_isSharedCheck_1484_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1484_ == 0)
{
v___x_1479_ = v___x_1463_;
v_isShared_1480_ = v_isSharedCheck_1484_;
goto v_resetjp_1478_;
}
else
{
lean_inc(v_a_1477_);
lean_dec(v___x_1463_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1484_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v___x_1482_; 
if (v_isShared_1480_ == 0)
{
v___x_1482_ = v___x_1479_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v_a_1477_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
return v___x_1482_;
}
}
}
v___jp_1444_:
{
lean_object* v___x_1446_; uint8_t v___x_1447_; 
v___x_1446_ = lean_array_get_size(v_regularEqcs_1445_);
v___x_1447_ = lean_nat_dec_eq(v___x_1446_, v___x_1429_);
if (v___x_1447_ == 0)
{
lean_object* v___x_1448_; lean_object* v___x_1449_; double v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1448_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__1));
v___x_1449_ = lean_box(0);
v___x_1450_ = lean_float_of_nat(v___x_1429_);
v___x_1451_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_1452_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1452_, 0, v___x_1448_);
lean_ctor_set(v___x_1452_, 1, v___x_1449_);
lean_ctor_set(v___x_1452_, 2, v___x_1451_);
lean_ctor_set_float(v___x_1452_, sizeof(void*)*3, v___x_1450_);
lean_ctor_set_float(v___x_1452_, sizeof(void*)*3 + 8, v___x_1450_);
lean_ctor_set_uint8(v___x_1452_, sizeof(void*)*3 + 16, v_collapsed_1430_);
v___x_1453_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__4, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__4_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___closed__4);
v___x_1454_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1452_);
lean_ctor_set(v___x_1454_, 1, v___x_1453_);
lean_ctor_set(v___x_1454_, 2, v_regularEqcs_1445_);
v___x_1455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1454_);
v___x_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1455_);
return v___x_1456_;
}
else
{
lean_object* v___x_1457_; lean_object* v___x_1458_; 
lean_dec_ref(v_regularEqcs_1445_);
lean_dec(v___x_1429_);
v___x_1457_ = lean_box(0);
v___x_1458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1457_);
return v___x_1458_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___boxed(lean_object* v___x_1485_, lean_object* v_collapsed_1486_, lean_object* v_regularEqcs_1487_, lean_object* v_filter_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_){
_start:
{
uint8_t v_collapsed_boxed_1500_; lean_object* v_res_1501_; 
v_collapsed_boxed_1500_ = lean_unbox(v_collapsed_1486_);
v_res_1501_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0(v___x_1485_, v_collapsed_boxed_1500_, v_regularEqcs_1487_, v_filter_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1497_);
lean_dec(v___y_1496_);
lean_dec_ref(v___y_1495_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
lean_dec(v___y_1490_);
lean_dec(v___y_1489_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f(lean_object* v_filter_1502_, uint8_t v_collapsed_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_){
_start:
{
lean_object* v___x_1513_; lean_object* v_regularEqcs_1514_; lean_object* v___x_1515_; lean_object* v___f_1516_; lean_object* v___x_1517_; 
v___x_1513_ = lean_unsigned_to_nat(0u);
v_regularEqcs_1514_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___closed__0));
v___x_1515_ = lean_box(v_collapsed_1503_);
v___f_1516_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___lam__0___boxed), 15, 4);
lean_closure_set(v___f_1516_, 0, v___x_1513_);
lean_closure_set(v___f_1516_, 1, v___x_1515_);
lean_closure_set(v___f_1516_, 2, v_regularEqcs_1514_);
lean_closure_set(v___f_1516_, 3, v_filter_1502_);
v___x_1517_ = l_Lean_Elab_Tactic_Grind_liftGoalM___redArg(v___f_1516_, v_a_1504_, v_a_1505_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_, v_a_1510_, v_a_1511_);
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f___boxed(lean_object* v_filter_1518_, lean_object* v_collapsed_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_){
_start:
{
uint8_t v_collapsed_boxed_1529_; lean_object* v_res_1530_; 
v_collapsed_boxed_1529_ = lean_unbox(v_collapsed_1519_);
v_res_1530_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f(v_filter_1518_, v_collapsed_boxed_1529_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_, v_a_1526_, v_a_1527_);
lean_dec(v_a_1527_);
lean_dec_ref(v_a_1526_);
lean_dec(v_a_1525_);
lean_dec_ref(v_a_1524_);
lean_dec(v_a_1523_);
lean_dec_ref(v_a_1522_);
lean_dec(v_a_1521_);
lean_dec_ref(v_a_1520_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2(lean_object* v_filter_1531_, lean_object* v_x_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_){
_start:
{
lean_object* v___x_1544_; 
v___x_1544_ = l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___redArg(v_filter_1531_, v_x_1532_, v___y_1533_, v___y_1540_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2___boxed(lean_object* v_filter_1545_, lean_object* v_x_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_){
_start:
{
lean_object* v_res_1558_; 
v_res_1558_ = l_List_anyM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__2(v_filter_1545_, v_x_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
lean_dec(v___y_1556_);
lean_dec_ref(v___y_1555_);
lean_dec(v___y_1554_);
lean_dec_ref(v___y_1553_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
lean_dec(v___y_1550_);
lean_dec_ref(v___y_1549_);
lean_dec(v___y_1548_);
lean_dec(v___y_1547_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3(uint8_t v_a_1559_, uint8_t v_a_1560_, lean_object* v_x_1561_, lean_object* v_x_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_){
_start:
{
lean_object* v___x_1574_; 
v___x_1574_ = l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___redArg(v_a_1559_, v_a_1560_, v_x_1561_, v_x_1562_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3___boxed(lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_x_1577_, lean_object* v_x_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_){
_start:
{
uint8_t v_a_23423__boxed_1590_; uint8_t v_a_23424__boxed_1591_; lean_object* v_res_1592_; 
v_a_23423__boxed_1590_ = lean_unbox(v_a_1575_);
v_a_23424__boxed_1591_ = lean_unbox(v_a_1576_);
v_res_1592_ = l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__3(v_a_23423__boxed_1590_, v_a_23424__boxed_1591_, v_x_1577_, v_x_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_);
lean_dec(v___y_1588_);
lean_dec_ref(v___y_1587_);
lean_dec(v___y_1586_);
lean_dec_ref(v___y_1585_);
lean_dec(v___y_1584_);
lean_dec_ref(v___y_1583_);
lean_dec(v___y_1582_);
lean_dec_ref(v___y_1581_);
lean_dec(v___y_1580_);
lean_dec(v___y_1579_);
return v_res_1592_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4(lean_object* v_x_1593_, lean_object* v_x_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_){
_start:
{
lean_object* v___x_1606_; 
v___x_1606_ = l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___redArg(v_x_1593_, v_x_1594_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4___boxed(lean_object* v_x_1607_, lean_object* v_x_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
lean_object* v_res_1620_; 
v_res_1620_ = l_List_filterAuxM___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__4(v_x_1607_, v_x_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
lean_dec(v___y_1616_);
lean_dec_ref(v___y_1615_);
lean_dec(v___y_1614_);
lean_dec_ref(v___y_1613_);
lean_dec(v___y_1612_);
lean_dec_ref(v___y_1611_);
lean_dec(v___y_1610_);
lean_dec(v___y_1609_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5(lean_object* v_filter_1621_, lean_object* v_as_1622_, lean_object* v_as_x27_1623_, lean_object* v_b_1624_, lean_object* v_a_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
lean_object* v___x_1637_; 
v___x_1637_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg(v_filter_1621_, v_as_x27_1623_, v_b_1624_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___boxed(lean_object* v_filter_1638_, lean_object* v_as_1639_, lean_object* v_as_x27_1640_, lean_object* v_b_1641_, lean_object* v_a_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_){
_start:
{
lean_object* v_res_1654_; 
v_res_1654_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5(v_filter_1638_, v_as_1639_, v_as_x27_1640_, v_b_1641_, v_a_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_);
lean_dec(v___y_1652_);
lean_dec_ref(v___y_1651_);
lean_dec(v___y_1650_);
lean_dec_ref(v___y_1649_);
lean_dec(v___y_1648_);
lean_dec_ref(v___y_1647_);
lean_dec(v___y_1646_);
lean_dec_ref(v___y_1645_);
lean_dec(v___y_1644_);
lean_dec(v___y_1643_);
lean_dec(v_as_x27_1640_);
lean_dec(v_as_1639_);
return v_res_1654_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1656_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__0));
v___x_1657_ = l_Lean_stringToMessageData(v___x_1656_);
return v___x_1657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0(uint8_t v___x_1658_, lean_object* v_stx_1659_, lean_object* v___x_1660_, lean_object* v___x_1661_, lean_object* v___x_1662_, lean_object* v___x_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_){
_start:
{
lean_object* v_filter_x3f_1674_; lean_object* v___y_1675_; lean_object* v___y_1676_; lean_object* v___y_1677_; lean_object* v___y_1678_; lean_object* v___y_1679_; lean_object* v___y_1680_; lean_object* v___y_1681_; lean_object* v___y_1682_; 
if (v___x_1658_ == 0)
{
lean_object* v___x_1708_; 
lean_dec_ref(v___x_1663_);
lean_dec_ref(v___x_1662_);
lean_dec_ref(v___x_1661_);
lean_dec_ref(v___x_1660_);
v___x_1708_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1708_;
}
else
{
lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; uint8_t v___x_1713_; 
v___x_1709_ = lean_unsigned_to_nat(1u);
v___x_1710_ = l_Lean_Syntax_getArg(v_stx_1659_, v___x_1709_);
v___x_1711_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__2));
v___x_1712_ = l_Lean_Name_mkStr5(v___x_1660_, v___x_1661_, v___x_1662_, v___x_1663_, v___x_1711_);
lean_inc(v___x_1710_);
v___x_1713_ = l_Lean_Syntax_isOfKind(v___x_1710_, v___x_1712_);
lean_dec(v___x_1712_);
if (v___x_1713_ == 0)
{
lean_object* v___x_1714_; 
lean_dec(v___x_1710_);
v___x_1714_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1714_;
}
else
{
lean_object* v___x_1715_; lean_object* v___x_1716_; uint8_t v___x_1717_; 
v___x_1715_ = lean_unsigned_to_nat(0u);
v___x_1716_ = l_Lean_Syntax_getArg(v___x_1710_, v___x_1715_);
lean_dec(v___x_1710_);
v___x_1717_ = l_Lean_Syntax_isNone(v___x_1716_);
if (v___x_1717_ == 0)
{
uint8_t v___x_1718_; 
lean_inc(v___x_1716_);
v___x_1718_ = l_Lean_Syntax_matchesNull(v___x_1716_, v___x_1709_);
if (v___x_1718_ == 0)
{
lean_object* v___x_1719_; 
lean_dec(v___x_1716_);
v___x_1719_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1719_;
}
else
{
lean_object* v_filter_x3f_1720_; lean_object* v___x_1721_; 
v_filter_x3f_1720_ = l_Lean_Syntax_getArg(v___x_1716_, v___x_1715_);
lean_dec(v___x_1716_);
v___x_1721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1721_, 0, v_filter_x3f_1720_);
v_filter_x3f_1674_ = v___x_1721_;
v___y_1675_ = v___y_1664_;
v___y_1676_ = v___y_1665_;
v___y_1677_ = v___y_1666_;
v___y_1678_ = v___y_1667_;
v___y_1679_ = v___y_1668_;
v___y_1680_ = v___y_1669_;
v___y_1681_ = v___y_1670_;
v___y_1682_ = v___y_1671_;
goto v___jp_1673_;
}
}
else
{
lean_object* v___x_1722_; 
lean_dec(v___x_1716_);
v___x_1722_ = lean_box(0);
v_filter_x3f_1674_ = v___x_1722_;
v___y_1675_ = v___y_1664_;
v___y_1676_ = v___y_1665_;
v___y_1677_ = v___y_1666_;
v___y_1678_ = v___y_1667_;
v___y_1679_ = v___y_1668_;
v___y_1680_ = v___y_1669_;
v___y_1681_ = v___y_1670_;
v___y_1682_ = v___y_1671_;
goto v___jp_1673_;
}
}
}
v___jp_1673_:
{
lean_object* v___x_1683_; 
v___x_1683_ = l_Lean_Elab_Tactic_Grind_elabFilter(v_filter_x3f_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v_a_1684_; uint8_t v___x_1685_; lean_object* v___x_1686_; 
v_a_1684_ = lean_ctor_get(v___x_1683_, 0);
lean_inc(v_a_1684_);
lean_dec_ref_known(v___x_1683_, 1);
v___x_1685_ = 0;
v___x_1686_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f(v_a_1684_, v___x_1685_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
if (lean_obj_tag(v___x_1686_) == 0)
{
lean_object* v_a_1687_; 
v_a_1687_ = lean_ctor_get(v___x_1686_, 0);
lean_inc(v_a_1687_);
lean_dec_ref_known(v___x_1686_, 1);
if (lean_obj_tag(v_a_1687_) == 1)
{
lean_object* v_val_1688_; lean_object* v___x_1689_; 
v_val_1688_ = lean_ctor_get(v_a_1687_, 0);
lean_inc(v_val_1688_);
lean_dec_ref_known(v_a_1687_, 1);
v___x_1689_ = l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(v_val_1688_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
return v___x_1689_;
}
else
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
lean_dec(v_a_1687_);
v___x_1690_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__1, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___closed__1);
v___x_1691_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg(v___x_1690_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
return v___x_1691_;
}
}
else
{
lean_object* v_a_1692_; lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1699_; 
v_a_1692_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1694_ = v___x_1686_;
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
else
{
lean_inc(v_a_1692_);
lean_dec(v___x_1686_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
lean_object* v___x_1697_; 
if (v_isShared_1695_ == 0)
{
v___x_1697_ = v___x_1694_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v_a_1692_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
}
}
else
{
lean_object* v_a_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1707_; 
v_a_1700_ = lean_ctor_get(v___x_1683_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___x_1683_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1702_ = v___x_1683_;
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_a_1700_);
lean_dec(v___x_1683_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1705_; 
if (v_isShared_1703_ == 0)
{
v___x_1705_ = v___x_1702_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_a_1700_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
return v___x_1705_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___boxed(lean_object* v___x_1723_, lean_object* v_stx_1724_, lean_object* v___x_1725_, lean_object* v___x_1726_, lean_object* v___x_1727_, lean_object* v___x_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_){
_start:
{
uint8_t v___x_482__boxed_1738_; lean_object* v_res_1739_; 
v___x_482__boxed_1738_ = lean_unbox(v___x_1723_);
v_res_1739_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0(v___x_482__boxed_1738_, v_stx_1724_, v___x_1725_, v___x_1726_, v___x_1727_, v___x_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1736_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec(v___y_1734_);
lean_dec_ref(v___y_1733_);
lean_dec(v___y_1732_);
lean_dec_ref(v___y_1731_);
lean_dec(v___y_1730_);
lean_dec_ref(v___y_1729_);
lean_dec(v_stx_1724_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs(lean_object* v_stx_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_){
_start:
{
lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; uint8_t v___x_1762_; lean_object* v___x_1763_; lean_object* v___y_1764_; lean_object* v___x_1765_; 
v___x_1757_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0));
v___x_1758_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1));
v___x_1759_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1));
v___x_1760_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2));
v___x_1761_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1));
lean_inc(v_stx_1747_);
v___x_1762_ = l_Lean_Syntax_isOfKind(v_stx_1747_, v___x_1761_);
v___x_1763_ = lean_box(v___x_1762_);
v___y_1764_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___lam__0___boxed), 15, 6);
lean_closure_set(v___y_1764_, 0, v___x_1763_);
lean_closure_set(v___y_1764_, 1, v_stx_1747_);
lean_closure_set(v___y_1764_, 2, v___x_1757_);
lean_closure_set(v___y_1764_, 3, v___x_1758_);
lean_closure_set(v___y_1764_, 4, v___x_1759_);
lean_closure_set(v___y_1764_, 5, v___x_1760_);
v___x_1765_ = l_Lean_Elab_Tactic_Grind_withMainContext___redArg(v___y_1764_, v_a_1748_, v_a_1749_, v_a_1750_, v_a_1751_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_);
return v___x_1765_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___boxed(lean_object* v_stx_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_){
_start:
{
lean_object* v_res_1776_; 
v_res_1776_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs(v_stx_1766_, v_a_1767_, v_a_1768_, v_a_1769_, v_a_1770_, v_a_1771_, v_a_1772_, v_a_1773_, v_a_1774_);
lean_dec(v_a_1774_);
lean_dec_ref(v_a_1773_);
lean_dec(v_a_1772_);
lean_dec_ref(v_a_1771_);
lean_dec(v_a_1770_);
lean_dec_ref(v_a_1769_);
lean_dec(v_a_1768_);
lean_dec_ref(v_a_1767_);
return v_res_1776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1(){
_start:
{
lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; 
v___x_1782_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_1783_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___closed__1));
v___x_1784_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___closed__1));
v___x_1785_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___boxed), 10, 0);
v___x_1786_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1782_, v___x_1783_, v___x_1784_, v___x_1785_);
return v___x_1786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1___boxed(lean_object* v_a_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1();
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_pushIfSome(lean_object* v_msgs_1789_, lean_object* v_msg_x3f_1790_){
_start:
{
if (lean_obj_tag(v_msg_x3f_1790_) == 1)
{
lean_object* v_val_1791_; lean_object* v___x_1792_; 
v_val_1791_ = lean_ctor_get(v_msg_x3f_1790_, 0);
lean_inc(v_val_1791_);
lean_dec_ref_known(v_msg_x3f_1790_, 1);
v___x_1792_ = lean_array_push(v_msgs_1789_, v_val_1791_);
return v___x_1792_;
}
else
{
lean_dec(v_msg_x3f_1790_);
return v_msgs_1789_;
}
}
}
static double _init_l_Lean_Elab_Tactic_Grind_showState___closed__2(void){
_start:
{
lean_object* v___x_1796_; double v___x_1797_; 
v___x_1796_ = lean_unsigned_to_nat(0u);
v___x_1797_ = lean_float_of_nat(v___x_1796_);
return v___x_1797_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Grind_showState___closed__3(void){
_start:
{
lean_object* v___x_1798_; uint8_t v___x_1799_; double v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1798_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_1799_ = 0;
v___x_1800_ = lean_float_once(&l_Lean_Elab_Tactic_Grind_showState___closed__2, &l_Lean_Elab_Tactic_Grind_showState___closed__2_once, _init_l_Lean_Elab_Tactic_Grind_showState___closed__2);
v___x_1801_ = lean_box(0);
v___x_1802_ = ((lean_object*)(l_Lean_Elab_Tactic_Grind_showState___closed__1));
v___x_1803_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1803_, 0, v___x_1802_);
lean_ctor_set(v___x_1803_, 1, v___x_1801_);
lean_ctor_set(v___x_1803_, 2, v___x_1798_);
lean_ctor_set_float(v___x_1803_, sizeof(void*)*3, v___x_1800_);
lean_ctor_set_float(v___x_1803_, sizeof(void*)*3 + 8, v___x_1800_);
lean_ctor_set_uint8(v___x_1803_, sizeof(void*)*3 + 16, v___x_1799_);
return v___x_1803_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Grind_showState___closed__6(void){
_start:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1807_ = ((lean_object*)(l_Lean_Elab_Tactic_Grind_showState___closed__5));
v___x_1808_ = l_Lean_MessageData_ofFormat(v___x_1807_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_showState(lean_object* v_filter_1809_, uint8_t v_isSilent_1810_, lean_object* v_a_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_){
_start:
{
lean_object* v_msgs_1820_; uint8_t v___x_1821_; lean_object* v___x_1822_; 
v_msgs_1820_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___closed__0));
v___x_1821_ = 1;
lean_inc(v_filter_1809_);
v___x_1822_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppAsserted_x3f(v_filter_1809_, v___x_1821_, v_a_1811_, v_a_1812_, v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_);
if (lean_obj_tag(v___x_1822_) == 0)
{
lean_object* v_a_1823_; lean_object* v___x_1824_; uint8_t v___x_1825_; lean_object* v___x_1826_; 
v_a_1823_ = lean_ctor_get(v___x_1822_, 0);
lean_inc(v_a_1823_);
lean_dec_ref_known(v___x_1822_, 1);
v___x_1824_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_pushIfSome(v_msgs_1820_, v_a_1823_);
v___x_1825_ = 0;
lean_inc(v_filter_1809_);
v___x_1826_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f(v_filter_1809_, v___x_1821_, v___x_1825_, v_a_1811_, v_a_1812_, v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_);
if (lean_obj_tag(v___x_1826_) == 0)
{
lean_object* v_a_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v_a_1827_ = lean_ctor_get(v___x_1826_, 0);
lean_inc(v_a_1827_);
lean_dec_ref_known(v___x_1826_, 1);
v___x_1828_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_pushIfSome(v___x_1824_, v_a_1827_);
lean_inc(v_filter_1809_);
v___x_1829_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppProps_x3f(v_filter_1809_, v___x_1825_, v___x_1825_, v_a_1811_, v_a_1812_, v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_);
if (lean_obj_tag(v___x_1829_) == 0)
{
lean_object* v_a_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; 
v_a_1830_ = lean_ctor_get(v___x_1829_, 0);
lean_inc(v_a_1830_);
lean_dec_ref_known(v___x_1829_, 1);
v___x_1831_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_pushIfSome(v___x_1828_, v_a_1830_);
v___x_1832_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f(v_filter_1809_, v___x_1825_, v_a_1811_, v_a_1812_, v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_);
if (lean_obj_tag(v___x_1832_) == 0)
{
lean_object* v_a_1833_; lean_object* v_ref_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; uint8_t v___x_1839_; lean_object* v___x_1840_; 
v_a_1833_ = lean_ctor_get(v___x_1832_, 0);
lean_inc(v_a_1833_);
lean_dec_ref_known(v___x_1832_, 1);
v_ref_1834_ = lean_ctor_get(v_a_1817_, 2);
v___x_1835_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_pushIfSome(v___x_1831_, v_a_1833_);
v___x_1836_ = lean_obj_once(&l_Lean_Elab_Tactic_Grind_showState___closed__3, &l_Lean_Elab_Tactic_Grind_showState___closed__3_once, _init_l_Lean_Elab_Tactic_Grind_showState___closed__3);
v___x_1837_ = lean_obj_once(&l_Lean_Elab_Tactic_Grind_showState___closed__6, &l_Lean_Elab_Tactic_Grind_showState___closed__6_once, _init_l_Lean_Elab_Tactic_Grind_showState___closed__6);
v___x_1838_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1836_);
lean_ctor_set(v___x_1838_, 1, v___x_1837_);
lean_ctor_set(v___x_1838_, 2, v___x_1835_);
v___x_1839_ = 0;
v___x_1840_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg(v_ref_1834_, v___x_1838_, v___x_1839_, v_isSilent_1810_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_);
return v___x_1840_;
}
else
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1848_; 
lean_dec_ref(v___x_1831_);
v_a_1841_ = lean_ctor_get(v___x_1832_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1832_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1843_ = v___x_1832_;
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1832_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_a_1841_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
}
else
{
lean_object* v_a_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1856_; 
lean_dec_ref(v___x_1828_);
lean_dec(v_filter_1809_);
v_a_1849_ = lean_ctor_get(v___x_1829_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1829_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1851_ = v___x_1829_;
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_a_1849_);
lean_dec(v___x_1829_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1854_; 
if (v_isShared_1852_ == 0)
{
v___x_1854_ = v___x_1851_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_a_1849_);
v___x_1854_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
return v___x_1854_;
}
}
}
}
else
{
lean_object* v_a_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1864_; 
lean_dec_ref(v___x_1824_);
lean_dec(v_filter_1809_);
v_a_1857_ = lean_ctor_get(v___x_1826_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1859_ = v___x_1826_;
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_a_1857_);
lean_dec(v___x_1826_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1862_; 
if (v_isShared_1860_ == 0)
{
v___x_1862_ = v___x_1859_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_a_1857_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
}
}
else
{
lean_object* v_a_1865_; lean_object* v___x_1867_; uint8_t v_isShared_1868_; uint8_t v_isSharedCheck_1872_; 
lean_dec(v_filter_1809_);
v_a_1865_ = lean_ctor_get(v___x_1822_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v___x_1822_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1867_ = v___x_1822_;
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
else
{
lean_inc(v_a_1865_);
lean_dec(v___x_1822_);
v___x_1867_ = lean_box(0);
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
v_resetjp_1866_:
{
lean_object* v___x_1870_; 
if (v_isShared_1868_ == 0)
{
v___x_1870_ = v___x_1867_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_a_1865_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
return v___x_1870_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Grind_showState___boxed(lean_object* v_filter_1873_, lean_object* v_isSilent_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_){
_start:
{
uint8_t v_isSilent_boxed_1884_; lean_object* v_res_1885_; 
v_isSilent_boxed_1884_ = lean_unbox(v_isSilent_1874_);
v_res_1885_ = l_Lean_Elab_Tactic_Grind_showState(v_filter_1873_, v_isSilent_boxed_1884_, v_a_1875_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_);
lean_dec(v_a_1882_);
lean_dec_ref(v_a_1881_);
lean_dec(v_a_1880_);
lean_dec_ref(v_a_1879_);
lean_dec(v_a_1878_);
lean_dec_ref(v_a_1877_);
lean_dec(v_a_1876_);
lean_dec_ref(v_a_1875_);
return v_res_1885_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___lam__0(uint8_t v___x_1886_, lean_object* v_stx_1887_, lean_object* v___x_1888_, lean_object* v___x_1889_, lean_object* v___x_1890_, lean_object* v___x_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_){
_start:
{
lean_object* v_filter_x3f_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; lean_object* v___y_1905_; lean_object* v___y_1906_; lean_object* v___y_1907_; lean_object* v___y_1908_; lean_object* v___y_1909_; lean_object* v___y_1910_; 
if (v___x_1886_ == 0)
{
lean_object* v___x_1923_; 
lean_dec_ref(v___x_1891_);
lean_dec_ref(v___x_1890_);
lean_dec_ref(v___x_1889_);
lean_dec_ref(v___x_1888_);
v___x_1923_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1923_;
}
else
{
lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; uint8_t v___x_1928_; 
v___x_1924_ = lean_unsigned_to_nat(1u);
v___x_1925_ = l_Lean_Syntax_getArg(v_stx_1887_, v___x_1924_);
v___x_1926_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__2));
v___x_1927_ = l_Lean_Name_mkStr5(v___x_1888_, v___x_1889_, v___x_1890_, v___x_1891_, v___x_1926_);
lean_inc(v___x_1925_);
v___x_1928_ = l_Lean_Syntax_isOfKind(v___x_1925_, v___x_1927_);
lean_dec(v___x_1927_);
if (v___x_1928_ == 0)
{
lean_object* v___x_1929_; 
lean_dec(v___x_1925_);
v___x_1929_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1929_;
}
else
{
lean_object* v___x_1930_; lean_object* v___x_1931_; uint8_t v___x_1932_; 
v___x_1930_ = lean_unsigned_to_nat(0u);
v___x_1931_ = l_Lean_Syntax_getArg(v___x_1925_, v___x_1930_);
lean_dec(v___x_1925_);
v___x_1932_ = l_Lean_Syntax_isNone(v___x_1931_);
if (v___x_1932_ == 0)
{
uint8_t v___x_1933_; 
lean_inc(v___x_1931_);
v___x_1933_ = l_Lean_Syntax_matchesNull(v___x_1931_, v___x_1924_);
if (v___x_1933_ == 0)
{
lean_object* v___x_1934_; 
lean_dec(v___x_1931_);
v___x_1934_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_1934_;
}
else
{
lean_object* v_filter_x3f_1935_; lean_object* v___x_1936_; 
v_filter_x3f_1935_ = l_Lean_Syntax_getArg(v___x_1931_, v___x_1930_);
lean_dec(v___x_1931_);
v___x_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1936_, 0, v_filter_x3f_1935_);
v_filter_x3f_1902_ = v___x_1936_;
v___y_1903_ = v___y_1892_;
v___y_1904_ = v___y_1893_;
v___y_1905_ = v___y_1894_;
v___y_1906_ = v___y_1895_;
v___y_1907_ = v___y_1896_;
v___y_1908_ = v___y_1897_;
v___y_1909_ = v___y_1898_;
v___y_1910_ = v___y_1899_;
goto v___jp_1901_;
}
}
else
{
lean_object* v___x_1937_; 
lean_dec(v___x_1931_);
v___x_1937_ = lean_box(0);
v_filter_x3f_1902_ = v___x_1937_;
v___y_1903_ = v___y_1892_;
v___y_1904_ = v___y_1893_;
v___y_1905_ = v___y_1894_;
v___y_1906_ = v___y_1895_;
v___y_1907_ = v___y_1896_;
v___y_1908_ = v___y_1897_;
v___y_1909_ = v___y_1898_;
v___y_1910_ = v___y_1899_;
goto v___jp_1901_;
}
}
}
v___jp_1901_:
{
lean_object* v___x_1911_; 
v___x_1911_ = l_Lean_Elab_Tactic_Grind_elabFilter(v_filter_x3f_1902_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; uint8_t v___x_1913_; lean_object* v___x_1914_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
lean_inc(v_a_1912_);
lean_dec_ref_known(v___x_1911_, 1);
v___x_1913_ = 0;
v___x_1914_ = l_Lean_Elab_Tactic_Grind_showState(v_a_1912_, v___x_1913_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_);
return v___x_1914_;
}
else
{
lean_object* v_a_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1922_; 
v_a_1915_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1917_ = v___x_1911_;
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_a_1915_);
lean_dec(v___x_1911_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1920_; 
if (v_isShared_1918_ == 0)
{
v___x_1920_ = v___x_1917_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v_a_1915_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___lam__0___boxed(lean_object* v___x_1938_, lean_object* v_stx_1939_, lean_object* v___x_1940_, lean_object* v___x_1941_, lean_object* v___x_1942_, lean_object* v___x_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_){
_start:
{
uint8_t v___x_273__boxed_1953_; lean_object* v_res_1954_; 
v___x_273__boxed_1953_ = lean_unbox(v___x_1938_);
v_res_1954_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___lam__0(v___x_273__boxed_1953_, v_stx_1939_, v___x_1940_, v___x_1941_, v___x_1942_, v___x_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_, v___y_1951_);
lean_dec(v___y_1951_);
lean_dec_ref(v___y_1950_);
lean_dec(v___y_1949_);
lean_dec_ref(v___y_1948_);
lean_dec(v___y_1947_);
lean_dec_ref(v___y_1946_);
lean_dec(v___y_1945_);
lean_dec_ref(v___y_1944_);
lean_dec(v_stx_1939_);
return v_res_1954_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState(lean_object* v_stx_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_, lean_object* v_a_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_, lean_object* v_a_1969_, lean_object* v_a_1970_){
_start:
{
lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; uint8_t v___x_1977_; lean_object* v___x_1978_; lean_object* v___y_1979_; lean_object* v___x_1980_; 
v___x_1972_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0));
v___x_1973_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1));
v___x_1974_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1));
v___x_1975_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2));
v___x_1976_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1));
lean_inc(v_stx_1962_);
v___x_1977_ = l_Lean_Syntax_isOfKind(v_stx_1962_, v___x_1976_);
v___x_1978_ = lean_box(v___x_1977_);
v___y_1979_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___lam__0___boxed), 15, 6);
lean_closure_set(v___y_1979_, 0, v___x_1978_);
lean_closure_set(v___y_1979_, 1, v_stx_1962_);
lean_closure_set(v___y_1979_, 2, v___x_1972_);
lean_closure_set(v___y_1979_, 3, v___x_1973_);
lean_closure_set(v___y_1979_, 4, v___x_1974_);
lean_closure_set(v___y_1979_, 5, v___x_1975_);
v___x_1980_ = l_Lean_Elab_Tactic_Grind_withMainContext___redArg(v___y_1979_, v_a_1963_, v_a_1964_, v_a_1965_, v_a_1966_, v_a_1967_, v_a_1968_, v_a_1969_, v_a_1970_);
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___boxed(lean_object* v_stx_1981_, lean_object* v_a_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_, lean_object* v_a_1985_, lean_object* v_a_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_){
_start:
{
lean_object* v_res_1991_; 
v_res_1991_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState(v_stx_1981_, v_a_1982_, v_a_1983_, v_a_1984_, v_a_1985_, v_a_1986_, v_a_1987_, v_a_1988_, v_a_1989_);
lean_dec(v_a_1989_);
lean_dec_ref(v_a_1988_);
lean_dec(v_a_1987_);
lean_dec_ref(v_a_1986_);
lean_dec(v_a_1985_);
lean_dec_ref(v_a_1984_);
lean_dec(v_a_1983_);
lean_dec_ref(v_a_1982_);
return v_res_1991_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1(){
_start:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_1997_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_1998_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___closed__1));
v___x_1999_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___closed__1));
v___x_2000_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___boxed), 10, 0);
v___x_2001_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1997_, v___x_1998_, v___x_1999_, v___x_2000_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1___boxed(lean_object* v_a_2002_){
_start:
{
lean_object* v_res_2003_; 
v_res_2003_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1();
return v_res_2003_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2008_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__2));
v___x_2009_ = l_Lean_stringToMessageData(v___x_2008_);
return v___x_2009_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5(void){
_start:
{
lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___x_2011_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__4));
v___x_2012_ = l_Lean_stringToMessageData(v___x_2011_);
return v___x_2012_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0(lean_object* v_numDigits_2013_, size_t v_sz_2014_, size_t v_i_2015_, lean_object* v_bs_2016_){
_start:
{
uint8_t v___x_2017_; 
v___x_2017_ = lean_usize_dec_lt(v_i_2015_, v_sz_2014_);
if (v___x_2017_ == 0)
{
return v_bs_2016_;
}
else
{
lean_object* v_v_2018_; lean_object* v_e_2019_; uint64_t v_anchor_2020_; lean_object* v___x_2021_; lean_object* v_bs_x27_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; double v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; size_t v___x_2038_; size_t v___x_2039_; lean_object* v___x_2040_; 
v_v_2018_ = lean_array_uget_borrowed(v_bs_2016_, v_i_2015_);
v_e_2019_ = lean_ctor_get(v_v_2018_, 2);
lean_inc_ref(v_e_2019_);
v_anchor_2020_ = lean_ctor_get_uint64(v_v_2018_, sizeof(void*)*3);
v___x_2021_ = lean_unsigned_to_nat(0u);
v_bs_x27_2022_ = lean_array_uset(v_bs_2016_, v_i_2015_, v___x_2021_);
v___x_2023_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__1));
v___x_2024_ = lean_box(0);
v___x_2025_ = lean_float_once(&l_Lean_Elab_Tactic_Grind_showState___closed__2, &l_Lean_Elab_Tactic_Grind_showState___closed__2_once, _init_l_Lean_Elab_Tactic_Grind_showState___closed__2);
v___x_2026_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_2027_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2027_, 0, v___x_2023_);
lean_ctor_set(v___x_2027_, 1, v___x_2024_);
lean_ctor_set(v___x_2027_, 2, v___x_2026_);
lean_ctor_set_float(v___x_2027_, sizeof(void*)*3, v___x_2025_);
lean_ctor_set_float(v___x_2027_, sizeof(void*)*3 + 8, v___x_2025_);
lean_ctor_set_uint8(v___x_2027_, sizeof(void*)*3 + 16, v___x_2017_);
v___x_2028_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3);
v___x_2029_ = l_Lean_Meta_Grind_anchorToString(v_numDigits_2013_, v_anchor_2020_);
v___x_2030_ = l_Lean_stringToMessageData(v___x_2029_);
v___x_2031_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2031_, 0, v___x_2028_);
lean_ctor_set(v___x_2031_, 1, v___x_2030_);
v___x_2032_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5);
v___x_2033_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2033_, 0, v___x_2031_);
lean_ctor_set(v___x_2033_, 1, v___x_2032_);
v___x_2034_ = l_Lean_MessageData_ofExpr(v_e_2019_);
v___x_2035_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2035_, 0, v___x_2033_);
lean_ctor_set(v___x_2035_, 1, v___x_2034_);
v___x_2036_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___closed__0));
v___x_2037_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2037_, 0, v___x_2027_);
lean_ctor_set(v___x_2037_, 1, v___x_2035_);
lean_ctor_set(v___x_2037_, 2, v___x_2036_);
v___x_2038_ = ((size_t)1ULL);
v___x_2039_ = lean_usize_add(v_i_2015_, v___x_2038_);
v___x_2040_ = lean_array_uset(v_bs_x27_2022_, v_i_2015_, v___x_2037_);
v_i_2015_ = v___x_2039_;
v_bs_2016_ = v___x_2040_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___boxed(lean_object* v_numDigits_2042_, lean_object* v_sz_2043_, lean_object* v_i_2044_, lean_object* v_bs_2045_){
_start:
{
size_t v_sz_boxed_2046_; size_t v_i_boxed_2047_; lean_object* v_res_2048_; 
v_sz_boxed_2046_ = lean_unbox_usize(v_sz_2043_);
lean_dec(v_sz_2043_);
v_i_boxed_2047_ = lean_unbox_usize(v_i_2044_);
lean_dec(v_i_2044_);
v_res_2048_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0(v_numDigits_2042_, v_sz_boxed_2046_, v_i_boxed_2047_, v_bs_2045_);
lean_dec(v_numDigits_2042_);
return v_res_2048_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2052_; uint8_t v___x_2053_; double v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2052_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_2053_ = 0;
v___x_2054_ = lean_float_once(&l_Lean_Elab_Tactic_Grind_showState___closed__2, &l_Lean_Elab_Tactic_Grind_showState___closed__2_once, _init_l_Lean_Elab_Tactic_Grind_showState___closed__2);
v___x_2055_ = lean_box(0);
v___x_2056_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__1));
v___x_2057_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2057_, 0, v___x_2056_);
lean_ctor_set(v___x_2057_, 1, v___x_2055_);
lean_ctor_set(v___x_2057_, 2, v___x_2052_);
lean_ctor_set_float(v___x_2057_, sizeof(void*)*3, v___x_2054_);
lean_ctor_set_float(v___x_2057_, sizeof(void*)*3 + 8, v___x_2054_);
lean_ctor_set_uint8(v___x_2057_, sizeof(void*)*3 + 16, v___x_2053_);
return v___x_2057_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2061_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__4));
v___x_2062_ = l_Lean_MessageData_ofFormat(v___x_2061_);
return v___x_2062_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__7(void){
_start:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; 
v___x_2064_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__6));
v___x_2065_ = l_Lean_stringToMessageData(v___x_2064_);
return v___x_2065_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0(uint8_t v___x_2066_, lean_object* v_stx_2067_, lean_object* v___x_2068_, lean_object* v___x_2069_, lean_object* v___x_2070_, lean_object* v___x_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
if (v___x_2066_ == 0)
{
lean_object* v___x_2081_; 
lean_dec_ref(v___x_2071_);
lean_dec_ref(v___x_2070_);
lean_dec_ref(v___x_2069_);
lean_dec_ref(v___x_2068_);
v___x_2081_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_2081_;
}
else
{
lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; uint8_t v___x_2086_; 
v___x_2082_ = lean_unsigned_to_nat(1u);
v___x_2083_ = l_Lean_Syntax_getArg(v_stx_2067_, v___x_2082_);
v___x_2084_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___lam__0___closed__2));
v___x_2085_ = l_Lean_Name_mkStr5(v___x_2068_, v___x_2069_, v___x_2070_, v___x_2071_, v___x_2084_);
lean_inc(v___x_2083_);
v___x_2086_ = l_Lean_Syntax_isOfKind(v___x_2083_, v___x_2085_);
lean_dec(v___x_2085_);
if (v___x_2086_ == 0)
{
lean_object* v___x_2087_; 
lean_dec(v___x_2083_);
v___x_2087_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_2087_;
}
else
{
lean_object* v___x_2088_; lean_object* v___y_2090_; lean_object* v___y_2091_; lean_object* v___y_2092_; lean_object* v___y_2093_; lean_object* v___y_2094_; lean_object* v___y_2095_; lean_object* v___y_2096_; lean_object* v___y_2097_; lean_object* v___y_2098_; lean_object* v___y_2099_; lean_object* v_filter_x3f_2108_; lean_object* v___y_2109_; lean_object* v___y_2110_; lean_object* v___y_2111_; lean_object* v___y_2112_; lean_object* v___y_2113_; lean_object* v___y_2114_; lean_object* v___y_2115_; lean_object* v___y_2116_; lean_object* v___x_2146_; uint8_t v___x_2147_; 
v___x_2088_ = lean_unsigned_to_nat(0u);
v___x_2146_ = l_Lean_Syntax_getArg(v___x_2083_, v___x_2088_);
lean_dec(v___x_2083_);
v___x_2147_ = l_Lean_Syntax_isNone(v___x_2146_);
if (v___x_2147_ == 0)
{
uint8_t v___x_2148_; 
lean_inc(v___x_2146_);
v___x_2148_ = l_Lean_Syntax_matchesNull(v___x_2146_, v___x_2082_);
if (v___x_2148_ == 0)
{
lean_object* v___x_2149_; 
lean_dec(v___x_2146_);
v___x_2149_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_2149_;
}
else
{
lean_object* v_filter_x3f_2150_; lean_object* v___x_2151_; 
v_filter_x3f_2150_ = l_Lean_Syntax_getArg(v___x_2146_, v___x_2088_);
lean_dec(v___x_2146_);
v___x_2151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2151_, 0, v_filter_x3f_2150_);
v_filter_x3f_2108_ = v___x_2151_;
v___y_2109_ = v___y_2072_;
v___y_2110_ = v___y_2073_;
v___y_2111_ = v___y_2074_;
v___y_2112_ = v___y_2075_;
v___y_2113_ = v___y_2076_;
v___y_2114_ = v___y_2077_;
v___y_2115_ = v___y_2078_;
v___y_2116_ = v___y_2079_;
goto v___jp_2107_;
}
}
else
{
lean_object* v___x_2152_; 
lean_dec(v___x_2146_);
v___x_2152_ = lean_box(0);
v_filter_x3f_2108_ = v___x_2152_;
v___y_2109_ = v___y_2072_;
v___y_2110_ = v___y_2073_;
v___y_2111_ = v___y_2074_;
v___y_2112_ = v___y_2075_;
v___y_2113_ = v___y_2076_;
v___y_2114_ = v___y_2077_;
v___y_2115_ = v___y_2078_;
v___y_2116_ = v___y_2079_;
goto v___jp_2107_;
}
v___jp_2089_:
{
size_t v_sz_2100_; size_t v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; 
v_sz_2100_ = lean_array_size(v___y_2090_);
v___x_2101_ = ((size_t)0ULL);
v___x_2102_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0(v___y_2091_, v_sz_2100_, v___x_2101_, v___y_2090_);
lean_dec(v___y_2091_);
v___x_2103_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__2, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__2);
v___x_2104_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__5, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__5);
v___x_2105_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2105_, 0, v___x_2103_);
lean_ctor_set(v___x_2105_, 1, v___x_2104_);
lean_ctor_set(v___x_2105_, 2, v___x_2102_);
v___x_2106_ = l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(v___x_2105_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_);
return v___x_2106_;
}
v___jp_2107_:
{
lean_object* v___x_2117_; 
v___x_2117_ = l_Lean_Elab_Tactic_Grind_elabFilter(v_filter_x3f_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_);
if (lean_obj_tag(v___x_2117_) == 0)
{
lean_object* v_a_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
v_a_2118_ = lean_ctor_get(v___x_2117_, 0);
lean_inc(v_a_2118_);
lean_dec_ref_known(v___x_2117_, 1);
v___x_2119_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Filter_eval___boxed), 13, 1);
lean_closure_set(v___x_2119_, 0, v_a_2118_);
v___x_2120_ = lean_box(0);
v___x_2121_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_getSplitCandidateAnchors___boxed), 13, 2);
lean_closure_set(v___x_2121_, 0, v___x_2119_);
lean_closure_set(v___x_2121_, 1, v___x_2120_);
v___x_2122_ = l_Lean_Elab_Tactic_Grind_liftGoalM___redArg(v___x_2121_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_);
if (lean_obj_tag(v___x_2122_) == 0)
{
lean_object* v_a_2123_; lean_object* v_candidates_2124_; lean_object* v_numDigits_2125_; lean_object* v___x_2126_; uint8_t v___x_2127_; 
v_a_2123_ = lean_ctor_get(v___x_2122_, 0);
lean_inc(v_a_2123_);
lean_dec_ref_known(v___x_2122_, 1);
v_candidates_2124_ = lean_ctor_get(v_a_2123_, 0);
lean_inc_ref(v_candidates_2124_);
v_numDigits_2125_ = lean_ctor_get(v_a_2123_, 1);
lean_inc(v_numDigits_2125_);
lean_dec(v_a_2123_);
v___x_2126_ = lean_array_get_size(v_candidates_2124_);
v___x_2127_ = lean_nat_dec_eq(v___x_2126_, v___x_2088_);
if (v___x_2127_ == 0)
{
v___y_2090_ = v_candidates_2124_;
v___y_2091_ = v_numDigits_2125_;
v___y_2092_ = v___y_2109_;
v___y_2093_ = v___y_2110_;
v___y_2094_ = v___y_2111_;
v___y_2095_ = v___y_2112_;
v___y_2096_ = v___y_2113_;
v___y_2097_ = v___y_2114_;
v___y_2098_ = v___y_2115_;
v___y_2099_ = v___y_2116_;
goto v___jp_2089_;
}
else
{
lean_object* v___x_2128_; lean_object* v___x_2129_; 
lean_dec(v_numDigits_2125_);
lean_dec_ref(v_candidates_2124_);
v___x_2128_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__7, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__7_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___closed__7);
v___x_2129_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__1___redArg(v___x_2128_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_);
return v___x_2129_;
}
}
else
{
lean_object* v_a_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2137_; 
v_a_2130_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2132_ = v___x_2122_;
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_a_2130_);
lean_dec(v___x_2122_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2137_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v___x_2135_; 
if (v_isShared_2133_ == 0)
{
v___x_2135_ = v___x_2132_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_a_2130_);
v___x_2135_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
return v___x_2135_;
}
}
}
}
else
{
lean_object* v_a_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2145_; 
v_a_2138_ = lean_ctor_get(v___x_2117_, 0);
v_isSharedCheck_2145_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2145_ == 0)
{
v___x_2140_ = v___x_2117_;
v_isShared_2141_ = v_isSharedCheck_2145_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_a_2138_);
lean_dec(v___x_2117_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2145_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2143_; 
if (v_isShared_2141_ == 0)
{
v___x_2143_ = v___x_2140_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v_a_2138_);
v___x_2143_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
return v___x_2143_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___boxed(lean_object* v___x_2153_, lean_object* v_stx_2154_, lean_object* v___x_2155_, lean_object* v___x_2156_, lean_object* v___x_2157_, lean_object* v___x_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_){
_start:
{
uint8_t v___x_1375__boxed_2168_; lean_object* v_res_2169_; 
v___x_1375__boxed_2168_ = lean_unbox(v___x_2153_);
v_res_2169_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0(v___x_1375__boxed_2168_, v_stx_2154_, v___x_2155_, v___x_2156_, v___x_2157_, v___x_2158_, v___y_2159_, v___y_2160_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
lean_dec(v___y_2164_);
lean_dec_ref(v___y_2163_);
lean_dec(v___y_2162_);
lean_dec_ref(v___y_2161_);
lean_dec(v___y_2160_);
lean_dec_ref(v___y_2159_);
lean_dec(v_stx_2154_);
return v_res_2169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases(lean_object* v_stx_2177_, lean_object* v_a_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_){
_start:
{
lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; uint8_t v___x_2192_; lean_object* v___x_2193_; lean_object* v___y_2194_; lean_object* v___x_2195_; 
v___x_2187_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__0));
v___x_2188_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__1));
v___x_2189_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___lam__0___closed__1));
v___x_2190_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___closed__2));
v___x_2191_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1));
lean_inc(v_stx_2177_);
v___x_2192_ = l_Lean_Syntax_isOfKind(v_stx_2177_, v___x_2191_);
v___x_2193_ = lean_box(v___x_2192_);
v___y_2194_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___lam__0___boxed), 15, 6);
lean_closure_set(v___y_2194_, 0, v___x_2193_);
lean_closure_set(v___y_2194_, 1, v_stx_2177_);
lean_closure_set(v___y_2194_, 2, v___x_2187_);
lean_closure_set(v___y_2194_, 3, v___x_2188_);
lean_closure_set(v___y_2194_, 4, v___x_2189_);
lean_closure_set(v___y_2194_, 5, v___x_2190_);
v___x_2195_ = l_Lean_Elab_Tactic_Grind_withMainContext___redArg(v___y_2194_, v_a_2178_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_, v_a_2183_, v_a_2184_, v_a_2185_);
return v___x_2195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___boxed(lean_object* v_stx_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_){
_start:
{
lean_object* v_res_2206_; 
v_res_2206_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases(v_stx_2196_, v_a_2197_, v_a_2198_, v_a_2199_, v_a_2200_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
lean_dec(v_a_2204_);
lean_dec_ref(v_a_2203_);
lean_dec(v_a_2202_);
lean_dec_ref(v_a_2201_);
lean_dec(v_a_2200_);
lean_dec_ref(v_a_2199_);
lean_dec(v_a_2198_);
lean_dec_ref(v_a_2197_);
return v_res_2206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1(){
_start:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2212_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_2213_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___closed__1));
v___x_2214_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___closed__1));
v___x_2215_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___boxed), 10, 0);
v___x_2216_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2212_, v___x_2213_, v___x_2214_, v___x_2215_);
return v___x_2216_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1___boxed(lean_object* v_a_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1();
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___redArg(uint64_t v_a_2219_, lean_object* v_b_2220_, lean_object* v_x_2221_){
_start:
{
if (lean_obj_tag(v_x_2221_) == 0)
{
lean_dec(v_b_2220_);
return v_x_2221_;
}
else
{
lean_object* v_key_2222_; lean_object* v_value_2223_; lean_object* v_tail_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2238_; 
v_key_2222_ = lean_ctor_get(v_x_2221_, 0);
v_value_2223_ = lean_ctor_get(v_x_2221_, 1);
v_tail_2224_ = lean_ctor_get(v_x_2221_, 2);
v_isSharedCheck_2238_ = !lean_is_exclusive(v_x_2221_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2226_ = v_x_2221_;
v_isShared_2227_ = v_isSharedCheck_2238_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_tail_2224_);
lean_inc(v_value_2223_);
lean_inc(v_key_2222_);
lean_dec(v_x_2221_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2238_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
uint64_t v___x_2228_; uint8_t v___x_2229_; 
v___x_2228_ = lean_unbox_uint64(v_key_2222_);
v___x_2229_ = lean_uint64_dec_eq(v___x_2228_, v_a_2219_);
if (v___x_2229_ == 0)
{
lean_object* v___x_2230_; lean_object* v___x_2232_; 
v___x_2230_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___redArg(v_a_2219_, v_b_2220_, v_tail_2224_);
if (v_isShared_2227_ == 0)
{
lean_ctor_set(v___x_2226_, 2, v___x_2230_);
v___x_2232_ = v___x_2226_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_key_2222_);
lean_ctor_set(v_reuseFailAlloc_2233_, 1, v_value_2223_);
lean_ctor_set(v_reuseFailAlloc_2233_, 2, v___x_2230_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
else
{
lean_object* v___x_2234_; lean_object* v___x_2236_; 
lean_dec(v_value_2223_);
lean_dec(v_key_2222_);
v___x_2234_ = lean_box_uint64(v_a_2219_);
if (v_isShared_2227_ == 0)
{
lean_ctor_set(v___x_2226_, 1, v_b_2220_);
lean_ctor_set(v___x_2226_, 0, v___x_2234_);
v___x_2236_ = v___x_2226_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v___x_2234_);
lean_ctor_set(v_reuseFailAlloc_2237_, 1, v_b_2220_);
lean_ctor_set(v_reuseFailAlloc_2237_, 2, v_tail_2224_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___redArg___boxed(lean_object* v_a_2239_, lean_object* v_b_2240_, lean_object* v_x_2241_){
_start:
{
uint64_t v_a_boxed_2242_; lean_object* v_res_2243_; 
v_a_boxed_2242_ = lean_unbox_uint64(v_a_2239_);
lean_dec_ref(v_a_2239_);
v_res_2243_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___redArg(v_a_boxed_2242_, v_b_2240_, v_x_2241_);
return v_res_2243_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7_spec__9___redArg(lean_object* v_x_2244_, lean_object* v_x_2245_){
_start:
{
if (lean_obj_tag(v_x_2245_) == 0)
{
return v_x_2244_;
}
else
{
lean_object* v_key_2246_; lean_object* v_value_2247_; lean_object* v_tail_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2272_; 
v_key_2246_ = lean_ctor_get(v_x_2245_, 0);
v_value_2247_ = lean_ctor_get(v_x_2245_, 1);
v_tail_2248_ = lean_ctor_get(v_x_2245_, 2);
v_isSharedCheck_2272_ = !lean_is_exclusive(v_x_2245_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2250_ = v_x_2245_;
v_isShared_2251_ = v_isSharedCheck_2272_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_tail_2248_);
lean_inc(v_value_2247_);
lean_inc(v_key_2246_);
lean_dec(v_x_2245_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2272_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2252_; uint64_t v___x_2253_; uint64_t v___x_2254_; uint64_t v___x_2255_; uint64_t v___x_2256_; uint64_t v_fold_2257_; uint64_t v___x_2258_; uint64_t v___x_2259_; uint64_t v___x_2260_; size_t v___x_2261_; size_t v___x_2262_; size_t v___x_2263_; size_t v___x_2264_; size_t v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2268_; 
v___x_2252_ = lean_array_get_size(v_x_2244_);
v___x_2253_ = 32ULL;
v___x_2254_ = lean_unbox_uint64(v_key_2246_);
v___x_2255_ = lean_uint64_shift_right(v___x_2254_, v___x_2253_);
v___x_2256_ = lean_unbox_uint64(v_key_2246_);
v_fold_2257_ = lean_uint64_xor(v___x_2256_, v___x_2255_);
v___x_2258_ = 16ULL;
v___x_2259_ = lean_uint64_shift_right(v_fold_2257_, v___x_2258_);
v___x_2260_ = lean_uint64_xor(v_fold_2257_, v___x_2259_);
v___x_2261_ = lean_uint64_to_usize(v___x_2260_);
v___x_2262_ = lean_usize_of_nat(v___x_2252_);
v___x_2263_ = ((size_t)1ULL);
v___x_2264_ = lean_usize_sub(v___x_2262_, v___x_2263_);
v___x_2265_ = lean_usize_land(v___x_2261_, v___x_2264_);
v___x_2266_ = lean_array_uget_borrowed(v_x_2244_, v___x_2265_);
lean_inc(v___x_2266_);
if (v_isShared_2251_ == 0)
{
lean_ctor_set(v___x_2250_, 2, v___x_2266_);
v___x_2268_ = v___x_2250_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v_key_2246_);
lean_ctor_set(v_reuseFailAlloc_2271_, 1, v_value_2247_);
lean_ctor_set(v_reuseFailAlloc_2271_, 2, v___x_2266_);
v___x_2268_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
lean_object* v___x_2269_; 
v___x_2269_ = lean_array_uset(v_x_2244_, v___x_2265_, v___x_2268_);
v_x_2244_ = v___x_2269_;
v_x_2245_ = v_tail_2248_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7___redArg(lean_object* v_i_2273_, lean_object* v_source_2274_, lean_object* v_target_2275_){
_start:
{
lean_object* v___x_2276_; uint8_t v___x_2277_; 
v___x_2276_ = lean_array_get_size(v_source_2274_);
v___x_2277_ = lean_nat_dec_lt(v_i_2273_, v___x_2276_);
if (v___x_2277_ == 0)
{
lean_dec_ref(v_source_2274_);
lean_dec(v_i_2273_);
return v_target_2275_;
}
else
{
lean_object* v_es_2278_; lean_object* v___x_2279_; lean_object* v_source_2280_; lean_object* v_target_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; 
v_es_2278_ = lean_array_fget(v_source_2274_, v_i_2273_);
v___x_2279_ = lean_box(0);
v_source_2280_ = lean_array_fset(v_source_2274_, v_i_2273_, v___x_2279_);
v_target_2281_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7_spec__9___redArg(v_target_2275_, v_es_2278_);
v___x_2282_ = lean_unsigned_to_nat(1u);
v___x_2283_ = lean_nat_add(v_i_2273_, v___x_2282_);
lean_dec(v_i_2273_);
v_i_2273_ = v___x_2283_;
v_source_2274_ = v_source_2280_;
v_target_2275_ = v_target_2281_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6___redArg(lean_object* v_data_2285_){
_start:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v_nbuckets_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___x_2286_ = lean_array_get_size(v_data_2285_);
v___x_2287_ = lean_unsigned_to_nat(2u);
v_nbuckets_2288_ = lean_nat_mul(v___x_2286_, v___x_2287_);
v___x_2289_ = lean_unsigned_to_nat(0u);
v___x_2290_ = lean_box(0);
v___x_2291_ = lean_mk_array(v_nbuckets_2288_, v___x_2290_);
v___x_2292_ = lean_array_propagate_mark(v_data_2285_, v___x_2291_);
v___x_2293_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7___redArg(v___x_2289_, v_data_2285_, v___x_2292_);
return v___x_2293_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___redArg(uint64_t v_a_2294_, lean_object* v_x_2295_){
_start:
{
if (lean_obj_tag(v_x_2295_) == 0)
{
uint8_t v___x_2296_; 
v___x_2296_ = 0;
return v___x_2296_;
}
else
{
lean_object* v_key_2297_; lean_object* v_tail_2298_; uint64_t v___x_2299_; uint8_t v___x_2300_; 
v_key_2297_ = lean_ctor_get(v_x_2295_, 0);
v_tail_2298_ = lean_ctor_get(v_x_2295_, 2);
v___x_2299_ = lean_unbox_uint64(v_key_2297_);
v___x_2300_ = lean_uint64_dec_eq(v___x_2299_, v_a_2294_);
if (v___x_2300_ == 0)
{
v_x_2295_ = v_tail_2298_;
goto _start;
}
else
{
return v___x_2300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_a_2302_, lean_object* v_x_2303_){
_start:
{
uint64_t v_a_boxed_2304_; uint8_t v_res_2305_; lean_object* v_r_2306_; 
v_a_boxed_2304_ = lean_unbox_uint64(v_a_2302_);
lean_dec_ref(v_a_2302_);
v_res_2305_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___redArg(v_a_boxed_2304_, v_x_2303_);
lean_dec(v_x_2303_);
v_r_2306_ = lean_box(v_res_2305_);
return v_r_2306_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___redArg(lean_object* v_m_2307_, uint64_t v_a_2308_, lean_object* v_b_2309_){
_start:
{
lean_object* v_size_2310_; lean_object* v_buckets_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2354_; 
v_size_2310_ = lean_ctor_get(v_m_2307_, 0);
v_buckets_2311_ = lean_ctor_get(v_m_2307_, 1);
v_isSharedCheck_2354_ = !lean_is_exclusive(v_m_2307_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2313_ = v_m_2307_;
v_isShared_2314_ = v_isSharedCheck_2354_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_buckets_2311_);
lean_inc(v_size_2310_);
lean_dec(v_m_2307_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2354_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
lean_object* v___x_2315_; uint64_t v___x_2316_; uint64_t v___x_2317_; uint64_t v_fold_2318_; uint64_t v___x_2319_; uint64_t v___x_2320_; uint64_t v___x_2321_; size_t v___x_2322_; size_t v___x_2323_; size_t v___x_2324_; size_t v___x_2325_; size_t v___x_2326_; lean_object* v_bkt_2327_; uint8_t v___x_2328_; 
v___x_2315_ = lean_array_get_size(v_buckets_2311_);
v___x_2316_ = 32ULL;
v___x_2317_ = lean_uint64_shift_right(v_a_2308_, v___x_2316_);
v_fold_2318_ = lean_uint64_xor(v_a_2308_, v___x_2317_);
v___x_2319_ = 16ULL;
v___x_2320_ = lean_uint64_shift_right(v_fold_2318_, v___x_2319_);
v___x_2321_ = lean_uint64_xor(v_fold_2318_, v___x_2320_);
v___x_2322_ = lean_uint64_to_usize(v___x_2321_);
v___x_2323_ = lean_usize_of_nat(v___x_2315_);
v___x_2324_ = ((size_t)1ULL);
v___x_2325_ = lean_usize_sub(v___x_2323_, v___x_2324_);
v___x_2326_ = lean_usize_land(v___x_2322_, v___x_2325_);
v_bkt_2327_ = lean_array_uget_borrowed(v_buckets_2311_, v___x_2326_);
v___x_2328_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___redArg(v_a_2308_, v_bkt_2327_);
if (v___x_2328_ == 0)
{
lean_object* v___x_2329_; lean_object* v_size_x27_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v_buckets_x27_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; uint8_t v___x_2339_; 
v___x_2329_ = lean_unsigned_to_nat(1u);
v_size_x27_2330_ = lean_nat_add(v_size_2310_, v___x_2329_);
lean_dec(v_size_2310_);
v___x_2331_ = lean_box_uint64(v_a_2308_);
lean_inc(v_bkt_2327_);
v___x_2332_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2332_, 0, v___x_2331_);
lean_ctor_set(v___x_2332_, 1, v_b_2309_);
lean_ctor_set(v___x_2332_, 2, v_bkt_2327_);
v_buckets_x27_2333_ = lean_array_uset(v_buckets_2311_, v___x_2326_, v___x_2332_);
v___x_2334_ = lean_unsigned_to_nat(4u);
v___x_2335_ = lean_nat_mul(v_size_x27_2330_, v___x_2334_);
v___x_2336_ = lean_unsigned_to_nat(3u);
v___x_2337_ = lean_nat_div(v___x_2335_, v___x_2336_);
lean_dec(v___x_2335_);
v___x_2338_ = lean_array_get_size(v_buckets_x27_2333_);
v___x_2339_ = lean_nat_dec_le(v___x_2337_, v___x_2338_);
lean_dec(v___x_2337_);
if (v___x_2339_ == 0)
{
lean_object* v_val_2340_; lean_object* v___x_2342_; 
v_val_2340_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6___redArg(v_buckets_x27_2333_);
if (v_isShared_2314_ == 0)
{
lean_ctor_set(v___x_2313_, 1, v_val_2340_);
lean_ctor_set(v___x_2313_, 0, v_size_x27_2330_);
v___x_2342_ = v___x_2313_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_size_x27_2330_);
lean_ctor_set(v_reuseFailAlloc_2343_, 1, v_val_2340_);
v___x_2342_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
return v___x_2342_;
}
}
else
{
lean_object* v___x_2345_; 
if (v_isShared_2314_ == 0)
{
lean_ctor_set(v___x_2313_, 1, v_buckets_x27_2333_);
lean_ctor_set(v___x_2313_, 0, v_size_x27_2330_);
v___x_2345_ = v___x_2313_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_size_x27_2330_);
lean_ctor_set(v_reuseFailAlloc_2346_, 1, v_buckets_x27_2333_);
v___x_2345_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
return v___x_2345_;
}
}
}
else
{
lean_object* v___x_2347_; lean_object* v_buckets_x27_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2352_; 
lean_inc(v_bkt_2327_);
v___x_2347_ = lean_box(0);
v_buckets_x27_2348_ = lean_array_uset(v_buckets_2311_, v___x_2326_, v___x_2347_);
v___x_2349_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___redArg(v_a_2308_, v_b_2309_, v_bkt_2327_);
v___x_2350_ = lean_array_uset(v_buckets_x27_2348_, v___x_2326_, v___x_2349_);
if (v_isShared_2314_ == 0)
{
lean_ctor_set(v___x_2313_, 1, v___x_2350_);
v___x_2352_ = v___x_2313_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_size_2310_);
lean_ctor_set(v_reuseFailAlloc_2353_, 1, v___x_2350_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_m_2355_, lean_object* v_a_2356_, lean_object* v_b_2357_){
_start:
{
uint64_t v_a_boxed_2358_; lean_object* v_res_2359_; 
v_a_boxed_2358_ = lean_unbox_uint64(v_a_2356_);
lean_dec_ref(v_a_2356_);
v_res_2359_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___redArg(v_m_2355_, v_a_boxed_2358_, v_b_2357_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___redArg(uint64_t v_a_2360_, lean_object* v_x_2361_){
_start:
{
if (lean_obj_tag(v_x_2361_) == 0)
{
lean_object* v___x_2362_; 
v___x_2362_ = lean_box(0);
return v___x_2362_;
}
else
{
lean_object* v_key_2363_; lean_object* v_value_2364_; lean_object* v_tail_2365_; uint64_t v___x_2366_; uint8_t v___x_2367_; 
v_key_2363_ = lean_ctor_get(v_x_2361_, 0);
v_value_2364_ = lean_ctor_get(v_x_2361_, 1);
v_tail_2365_ = lean_ctor_get(v_x_2361_, 2);
v___x_2366_ = lean_unbox_uint64(v_key_2363_);
v___x_2367_ = lean_uint64_dec_eq(v___x_2366_, v_a_2360_);
if (v___x_2367_ == 0)
{
v_x_2361_ = v_tail_2365_;
goto _start;
}
else
{
lean_object* v___x_2369_; 
lean_inc(v_value_2364_);
v___x_2369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2369_, 0, v_value_2364_);
return v___x_2369_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_a_2370_, lean_object* v_x_2371_){
_start:
{
uint64_t v_a_boxed_2372_; lean_object* v_res_2373_; 
v_a_boxed_2372_ = lean_unbox_uint64(v_a_2370_);
lean_dec_ref(v_a_2370_);
v_res_2373_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___redArg(v_a_boxed_2372_, v_x_2371_);
lean_dec(v_x_2371_);
return v_res_2373_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___redArg(lean_object* v_m_2374_, uint64_t v_a_2375_){
_start:
{
lean_object* v_buckets_2376_; lean_object* v___x_2377_; uint64_t v___x_2378_; uint64_t v___x_2379_; uint64_t v_fold_2380_; uint64_t v___x_2381_; uint64_t v___x_2382_; uint64_t v___x_2383_; size_t v___x_2384_; size_t v___x_2385_; size_t v___x_2386_; size_t v___x_2387_; size_t v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; 
v_buckets_2376_ = lean_ctor_get(v_m_2374_, 1);
v___x_2377_ = lean_array_get_size(v_buckets_2376_);
v___x_2378_ = 32ULL;
v___x_2379_ = lean_uint64_shift_right(v_a_2375_, v___x_2378_);
v_fold_2380_ = lean_uint64_xor(v_a_2375_, v___x_2379_);
v___x_2381_ = 16ULL;
v___x_2382_ = lean_uint64_shift_right(v_fold_2380_, v___x_2381_);
v___x_2383_ = lean_uint64_xor(v_fold_2380_, v___x_2382_);
v___x_2384_ = lean_uint64_to_usize(v___x_2383_);
v___x_2385_ = lean_usize_of_nat(v___x_2377_);
v___x_2386_ = ((size_t)1ULL);
v___x_2387_ = lean_usize_sub(v___x_2385_, v___x_2386_);
v___x_2388_ = lean_usize_land(v___x_2384_, v___x_2387_);
v___x_2389_ = lean_array_uget_borrowed(v_buckets_2376_, v___x_2388_);
v___x_2390_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___redArg(v_a_2375_, v___x_2389_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_m_2391_, lean_object* v_a_2392_){
_start:
{
uint64_t v_a_boxed_2393_; lean_object* v_res_2394_; 
v_a_boxed_2393_ = lean_unbox_uint64(v_a_2392_);
lean_dec_ref(v_a_2392_);
v_res_2394_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___redArg(v_m_2391_, v_a_boxed_2393_);
lean_dec_ref(v_m_2391_);
return v_res_2394_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v___x_2395_ = lean_box(0);
v___x_2396_ = lean_unsigned_to_nat(16u);
v___x_2397_ = lean_mk_array(v___x_2396_, v___x_2395_);
return v___x_2397_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v_found_2400_; 
v___x_2398_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__0, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__0);
v___x_2399_ = lean_unsigned_to_nat(0u);
v_found_2400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_found_2400_, 0, v___x_2399_);
lean_ctor_set(v_found_2400_, 1, v___x_2398_);
return v_found_2400_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v_found_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
v_found_2401_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__1, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__1);
v___x_2402_ = lean_box(0);
v___x_2403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2403_, 0, v___x_2402_);
lean_ctor_set(v___x_2403_, 1, v_found_2401_);
return v___x_2403_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__3(lean_object* v_shift_2404_, lean_object* v_numDigits_2405_, lean_object* v_es_2406_, lean_object* v_as_2407_, size_t v_sz_2408_, size_t v_i_2409_, lean_object* v_b_2410_){
_start:
{
lean_object* v_a_2412_; uint8_t v___x_2416_; 
v___x_2416_ = lean_usize_dec_lt(v_i_2409_, v_sz_2408_);
if (v___x_2416_ == 0)
{
return v_b_2410_;
}
else
{
lean_object* v_snd_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2451_; 
v_snd_2417_ = lean_ctor_get(v_b_2410_, 1);
v_isSharedCheck_2451_ = !lean_is_exclusive(v_b_2410_);
if (v_isSharedCheck_2451_ == 0)
{
lean_object* v_unused_2452_; 
v_unused_2452_ = lean_ctor_get(v_b_2410_, 0);
lean_dec(v_unused_2452_);
v___x_2419_ = v_b_2410_;
v_isShared_2420_ = v_isSharedCheck_2451_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_snd_2417_);
lean_dec(v_b_2410_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2451_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v_a_2421_; uint64_t v_anchor_2422_; lean_object* v___x_2423_; uint64_t v___x_2424_; uint64_t v___x_2425_; lean_object* v___x_2426_; 
v_a_2421_ = lean_array_uget_borrowed(v_as_2407_, v_i_2409_);
v_anchor_2422_ = lean_ctor_get_uint64(v_a_2421_, sizeof(void*)*1);
v___x_2423_ = lean_box(0);
v___x_2424_ = lean_uint64_of_nat(v_shift_2404_);
v___x_2425_ = lean_uint64_shift_right(v_anchor_2422_, v___x_2424_);
v___x_2426_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___redArg(v_snd_2417_, v___x_2425_);
if (lean_obj_tag(v___x_2426_) == 1)
{
lean_object* v_val_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2445_; 
v_val_2427_ = lean_ctor_get(v___x_2426_, 0);
v_isSharedCheck_2445_ = !lean_is_exclusive(v___x_2426_);
if (v_isSharedCheck_2445_ == 0)
{
v___x_2429_ = v___x_2426_;
v_isShared_2430_ = v_isSharedCheck_2445_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_val_2427_);
lean_dec(v___x_2426_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2445_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
uint64_t v___x_2431_; uint8_t v___x_2432_; 
v___x_2431_ = lean_unbox_uint64(v_val_2427_);
lean_dec(v_val_2427_);
v___x_2432_ = lean_uint64_dec_eq(v___x_2431_, v_anchor_2422_);
if (v___x_2432_ == 0)
{
lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2437_; 
v___x_2433_ = lean_unsigned_to_nat(1u);
v___x_2434_ = lean_nat_add(v_numDigits_2405_, v___x_2433_);
v___x_2435_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0(v_es_2406_, v___x_2434_);
lean_dec(v___x_2434_);
if (v_isShared_2430_ == 0)
{
lean_ctor_set(v___x_2429_, 0, v___x_2435_);
v___x_2437_ = v___x_2429_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v___x_2435_);
v___x_2437_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
lean_object* v___x_2439_; 
if (v_isShared_2420_ == 0)
{
lean_ctor_set(v___x_2419_, 0, v___x_2437_);
v___x_2439_ = v___x_2419_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v___x_2437_);
lean_ctor_set(v_reuseFailAlloc_2440_, 1, v_snd_2417_);
v___x_2439_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
return v___x_2439_;
}
}
}
else
{
lean_object* v___x_2443_; 
lean_del_object(v___x_2429_);
if (v_isShared_2420_ == 0)
{
lean_ctor_set(v___x_2419_, 0, v___x_2423_);
v___x_2443_ = v___x_2419_;
goto v_reusejp_2442_;
}
else
{
lean_object* v_reuseFailAlloc_2444_; 
v_reuseFailAlloc_2444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2444_, 0, v___x_2423_);
lean_ctor_set(v_reuseFailAlloc_2444_, 1, v_snd_2417_);
v___x_2443_ = v_reuseFailAlloc_2444_;
goto v_reusejp_2442_;
}
v_reusejp_2442_:
{
v_a_2412_ = v___x_2443_;
goto v___jp_2411_;
}
}
}
}
else
{
lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2449_; 
lean_dec(v___x_2426_);
v___x_2446_ = lean_box_uint64(v_anchor_2422_);
v___x_2447_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___redArg(v_snd_2417_, v___x_2425_, v___x_2446_);
if (v_isShared_2420_ == 0)
{
lean_ctor_set(v___x_2419_, 1, v___x_2447_);
lean_ctor_set(v___x_2419_, 0, v___x_2423_);
v___x_2449_ = v___x_2419_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v___x_2423_);
lean_ctor_set(v_reuseFailAlloc_2450_, 1, v___x_2447_);
v___x_2449_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
v_a_2412_ = v___x_2449_;
goto v___jp_2411_;
}
}
}
}
v___jp_2411_:
{
size_t v___x_2413_; size_t v___x_2414_; 
v___x_2413_ = ((size_t)1ULL);
v___x_2414_ = lean_usize_add(v_i_2409_, v___x_2413_);
v_i_2409_ = v___x_2414_;
v_b_2410_ = v_a_2412_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0(lean_object* v_es_2453_, lean_object* v_numDigits_2454_){
_start:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; uint8_t v___x_2458_; 
v___x_2455_ = lean_unsigned_to_nat(4u);
v___x_2456_ = lean_nat_mul(v___x_2455_, v_numDigits_2454_);
v___x_2457_ = lean_unsigned_to_nat(64u);
v___x_2458_ = lean_nat_dec_lt(v___x_2456_, v___x_2457_);
if (v___x_2458_ == 0)
{
lean_dec(v___x_2456_);
lean_inc(v_numDigits_2454_);
return v_numDigits_2454_;
}
else
{
lean_object* v_shift_2459_; lean_object* v___x_2460_; size_t v_sz_2461_; size_t v___x_2462_; lean_object* v___x_2463_; lean_object* v_fst_2464_; 
v_shift_2459_ = lean_nat_sub(v___x_2457_, v___x_2456_);
lean_dec(v___x_2456_);
v___x_2460_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__2, &l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___closed__2);
v_sz_2461_ = lean_array_size(v_es_2453_);
v___x_2462_ = ((size_t)0ULL);
v___x_2463_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__3(v_shift_2459_, v_numDigits_2454_, v_es_2453_, v_es_2453_, v_sz_2461_, v___x_2462_, v___x_2460_);
lean_dec(v_shift_2459_);
v_fst_2464_ = lean_ctor_get(v___x_2463_, 0);
lean_inc(v_fst_2464_);
lean_dec_ref(v___x_2463_);
if (lean_obj_tag(v_fst_2464_) == 0)
{
lean_inc(v_numDigits_2454_);
return v_numDigits_2454_;
}
else
{
lean_object* v_val_2465_; 
v_val_2465_ = lean_ctor_get(v_fst_2464_, 0);
lean_inc(v_val_2465_);
lean_dec_ref_known(v_fst_2464_, 1);
return v_val_2465_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0___boxed(lean_object* v_es_2466_, lean_object* v_numDigits_2467_){
_start:
{
lean_object* v_res_2468_; 
v_res_2468_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0(v_es_2466_, v_numDigits_2467_);
lean_dec(v_numDigits_2467_);
lean_dec_ref(v_es_2466_);
return v_res_2468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__3___boxed(lean_object* v_shift_2469_, lean_object* v_numDigits_2470_, lean_object* v_es_2471_, lean_object* v_as_2472_, lean_object* v_sz_2473_, lean_object* v_i_2474_, lean_object* v_b_2475_){
_start:
{
size_t v_sz_boxed_2476_; size_t v_i_boxed_2477_; lean_object* v_res_2478_; 
v_sz_boxed_2476_ = lean_unbox_usize(v_sz_2473_);
lean_dec(v_sz_2473_);
v_i_boxed_2477_ = lean_unbox_usize(v_i_2474_);
lean_dec(v_i_2474_);
v_res_2478_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__3(v_shift_2469_, v_numDigits_2470_, v_es_2471_, v_as_2472_, v_sz_boxed_2476_, v_i_boxed_2477_, v_b_2475_);
lean_dec_ref(v_as_2472_);
lean_dec_ref(v_es_2471_);
lean_dec(v_numDigits_2470_);
lean_dec(v_shift_2469_);
return v_res_2478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0(lean_object* v_es_2479_){
_start:
{
lean_object* v___x_2480_; lean_object* v___x_2481_; 
v___x_2480_ = lean_unsigned_to_nat(4u);
v___x_2481_ = l___private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0(v_es_2479_, v___x_2480_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0___boxed(lean_object* v_es_2482_){
_start:
{
lean_object* v_res_2483_; 
v_res_2483_ = l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0(v_es_2482_);
lean_dec_ref(v_es_2482_);
return v_res_2483_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1(lean_object* v___x_2487_, size_t v_sz_2488_, size_t v_i_2489_, lean_object* v_bs_2490_){
_start:
{
uint8_t v___x_2491_; 
v___x_2491_ = lean_usize_dec_lt(v_i_2489_, v_sz_2488_);
if (v___x_2491_ == 0)
{
return v_bs_2490_;
}
else
{
lean_object* v_v_2492_; lean_object* v_e_2493_; uint64_t v_anchor_2494_; lean_object* v___x_2495_; lean_object* v_bs_x27_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; double v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; size_t v___x_2512_; size_t v___x_2513_; lean_object* v___x_2514_; 
v_v_2492_ = lean_array_uget_borrowed(v_bs_2490_, v_i_2489_);
v_e_2493_ = lean_ctor_get(v_v_2492_, 0);
lean_inc_ref(v_e_2493_);
v_anchor_2494_ = lean_ctor_get_uint64(v_v_2492_, sizeof(void*)*1);
v___x_2495_ = lean_unsigned_to_nat(0u);
v_bs_x27_2496_ = lean_array_uset(v_bs_2490_, v_i_2489_, v___x_2495_);
v___x_2497_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___closed__1));
v___x_2498_ = lean_box(0);
v___x_2499_ = lean_float_once(&l_Lean_Elab_Tactic_Grind_showState___closed__2, &l_Lean_Elab_Tactic_Grind_showState___closed__2_once, _init_l_Lean_Elab_Tactic_Grind_showState___closed__2);
v___x_2500_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_2501_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2501_, 0, v___x_2497_);
lean_ctor_set(v___x_2501_, 1, v___x_2498_);
lean_ctor_set(v___x_2501_, 2, v___x_2500_);
lean_ctor_set_float(v___x_2501_, sizeof(void*)*3, v___x_2499_);
lean_ctor_set_float(v___x_2501_, sizeof(void*)*3 + 8, v___x_2499_);
lean_ctor_set_uint8(v___x_2501_, sizeof(void*)*3 + 16, v___x_2491_);
v___x_2502_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__3);
v___x_2503_ = l_Lean_Meta_Grind_anchorToString(v___x_2487_, v_anchor_2494_);
v___x_2504_ = l_Lean_stringToMessageData(v___x_2503_);
v___x_2505_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2505_, 0, v___x_2502_);
lean_ctor_set(v___x_2505_, 1, v___x_2504_);
v___x_2506_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases_spec__0___closed__5);
v___x_2507_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2507_, 0, v___x_2505_);
lean_ctor_set(v___x_2507_, 1, v___x_2506_);
v___x_2508_ = l_Lean_MessageData_ofExpr(v_e_2493_);
v___x_2509_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2509_, 0, v___x_2507_);
lean_ctor_set(v___x_2509_, 1, v___x_2508_);
v___x_2510_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_ppEqcs_x3f_spec__5___redArg___closed__0));
v___x_2511_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2511_, 0, v___x_2501_);
lean_ctor_set(v___x_2511_, 1, v___x_2509_);
lean_ctor_set(v___x_2511_, 2, v___x_2510_);
v___x_2512_ = ((size_t)1ULL);
v___x_2513_ = lean_usize_add(v_i_2489_, v___x_2512_);
v___x_2514_ = lean_array_uset(v_bs_x27_2496_, v_i_2489_, v___x_2511_);
v_i_2489_ = v___x_2513_;
v_bs_2490_ = v___x_2514_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1___boxed(lean_object* v___x_2516_, lean_object* v_sz_2517_, lean_object* v_i_2518_, lean_object* v_bs_2519_){
_start:
{
size_t v_sz_boxed_2520_; size_t v_i_boxed_2521_; lean_object* v_res_2522_; 
v_sz_boxed_2520_ = lean_unbox_usize(v_sz_2517_);
lean_dec(v_sz_2517_);
v_i_boxed_2521_ = lean_unbox_usize(v_i_2518_);
lean_dec(v_i_2518_);
v_res_2522_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1(v___x_2516_, v_sz_boxed_2520_, v_i_boxed_2521_, v_bs_2519_);
lean_dec(v___x_2516_);
return v_res_2522_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2526_; uint8_t v___x_2527_; double v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2526_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_2527_ = 0;
v___x_2528_ = lean_float_once(&l_Lean_Elab_Tactic_Grind_showState___closed__2, &l_Lean_Elab_Tactic_Grind_showState___closed__2_once, _init_l_Lean_Elab_Tactic_Grind_showState___closed__2);
v___x_2529_ = lean_box(0);
v___x_2530_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__1));
v___x_2531_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2531_, 0, v___x_2530_);
lean_ctor_set(v___x_2531_, 1, v___x_2529_);
lean_ctor_set(v___x_2531_, 2, v___x_2526_);
lean_ctor_set_float(v___x_2531_, sizeof(void*)*3, v___x_2528_);
lean_ctor_set_float(v___x_2531_, sizeof(void*)*3 + 8, v___x_2528_);
lean_ctor_set_uint8(v___x_2531_, sizeof(void*)*3 + 16, v___x_2527_);
return v___x_2531_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___x_2535_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__4));
v___x_2536_ = l_Lean_MessageData_ofFormat(v___x_2535_);
return v___x_2536_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0(lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_){
_start:
{
lean_object* v___x_2546_; 
v___x_2546_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_, v___y_2544_);
if (lean_obj_tag(v___x_2546_) == 0)
{
lean_object* v_a_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; 
v_a_2547_ = lean_ctor_get(v___x_2546_, 0);
lean_inc(v_a_2547_);
lean_dec_ref_known(v___x_2546_, 1);
v___x_2548_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_getLocalTheoremAnchors___boxed), 11, 1);
lean_closure_set(v___x_2548_, 0, v_a_2547_);
v___x_2549_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___x_2548_, v___y_2537_, v___y_2538_, v___y_2541_, v___y_2542_, v___y_2543_, v___y_2544_);
if (lean_obj_tag(v___x_2549_) == 0)
{
lean_object* v_a_2550_; lean_object* v___x_2551_; size_t v_sz_2552_; size_t v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; 
v_a_2550_ = lean_ctor_get(v___x_2549_, 0);
lean_inc(v_a_2550_);
lean_dec_ref_known(v___x_2549_, 1);
v___x_2551_ = l_Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0(v_a_2550_);
v_sz_2552_ = lean_array_size(v_a_2550_);
v___x_2553_ = ((size_t)0ULL);
v___x_2554_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__1(v___x_2551_, v_sz_2552_, v___x_2553_, v_a_2550_);
lean_dec(v___x_2551_);
v___x_2555_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__2, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__2_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__2);
v___x_2556_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__5, &l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__5_once, _init_l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___closed__5);
v___x_2557_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2557_, 0, v___x_2555_);
lean_ctor_set(v___x_2557_, 1, v___x_2556_);
lean_ctor_set(v___x_2557_, 2, v___x_2554_);
v___x_2558_ = l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(v___x_2557_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_, v___y_2544_);
return v___x_2558_;
}
else
{
lean_object* v_a_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2566_; 
v_a_2559_ = lean_ctor_get(v___x_2549_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2549_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2561_ = v___x_2549_;
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_a_2559_);
lean_dec(v___x_2549_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
lean_object* v___x_2564_; 
if (v_isShared_2562_ == 0)
{
v___x_2564_ = v___x_2561_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_a_2559_);
v___x_2564_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
return v___x_2564_;
}
}
}
}
else
{
lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2574_; 
v_a_2567_ = lean_ctor_get(v___x_2546_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2546_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2569_ = v___x_2546_;
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v___x_2546_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2572_; 
if (v_isShared_2570_ == 0)
{
v___x_2572_ = v___x_2569_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2567_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0___boxed(lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_){
_start:
{
lean_object* v_res_2584_; 
v_res_2584_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___lam__0(v___y_2575_, v___y_2576_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_);
lean_dec(v___y_2582_);
lean_dec_ref(v___y_2581_);
lean_dec(v___y_2580_);
lean_dec_ref(v___y_2579_);
lean_dec(v___y_2578_);
lean_dec_ref(v___y_2577_);
lean_dec(v___y_2576_);
lean_dec_ref(v___y_2575_);
return v_res_2584_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg(lean_object* v_a_2586_, lean_object* v_a_2587_, lean_object* v_a_2588_, lean_object* v_a_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_){
_start:
{
lean_object* v___f_2595_; lean_object* v___x_2596_; 
v___f_2595_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___closed__0));
v___x_2596_ = l_Lean_Elab_Tactic_Grind_withMainContext___redArg(v___f_2595_, v_a_2586_, v_a_2587_, v_a_2588_, v_a_2589_, v_a_2590_, v_a_2591_, v_a_2592_, v_a_2593_);
return v___x_2596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg___boxed(lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_){
_start:
{
lean_object* v_res_2606_; 
v_res_2606_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg(v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_);
lean_dec(v_a_2604_);
lean_dec_ref(v_a_2603_);
lean_dec(v_a_2602_);
lean_dec_ref(v_a_2601_);
lean_dec(v_a_2600_);
lean_dec_ref(v_a_2599_);
lean_dec(v_a_2598_);
lean_dec_ref(v_a_2597_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms(lean_object* v_x_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_, lean_object* v_a_2610_, lean_object* v_a_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_){
_start:
{
lean_object* v___x_2617_; 
v___x_2617_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___redArg(v_a_2608_, v_a_2609_, v_a_2610_, v_a_2611_, v_a_2612_, v_a_2613_, v_a_2614_, v_a_2615_);
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___boxed(lean_object* v_x_2618_, lean_object* v_a_2619_, lean_object* v_a_2620_, lean_object* v_a_2621_, lean_object* v_a_2622_, lean_object* v_a_2623_, lean_object* v_a_2624_, lean_object* v_a_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_){
_start:
{
lean_object* v_res_2628_; 
v_res_2628_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms(v_x_2618_, v_a_2619_, v_a_2620_, v_a_2621_, v_a_2622_, v_a_2623_, v_a_2624_, v_a_2625_, v_a_2626_);
lean_dec(v_a_2626_);
lean_dec_ref(v_a_2625_);
lean_dec(v_a_2624_);
lean_dec_ref(v_a_2623_);
lean_dec(v_a_2622_);
lean_dec_ref(v_a_2621_);
lean_dec(v_a_2620_);
lean_dec_ref(v_a_2619_);
lean_dec(v_x_2618_);
return v_res_2628_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2629_, lean_object* v_m_2630_, uint64_t v_a_2631_){
_start:
{
lean_object* v___x_2632_; 
v___x_2632_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___redArg(v_m_2630_, v_a_2631_);
return v___x_2632_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2633_, lean_object* v_m_2634_, lean_object* v_a_2635_){
_start:
{
uint64_t v_a_boxed_2636_; lean_object* v_res_2637_; 
v_a_boxed_2636_ = lean_unbox_uint64(v_a_2635_);
lean_dec_ref(v_a_2635_);
v_res_2637_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1(v_00_u03b2_2633_, v_m_2634_, v_a_boxed_2636_);
lean_dec_ref(v_m_2634_);
return v_res_2637_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2638_, lean_object* v_m_2639_, uint64_t v_a_2640_, lean_object* v_b_2641_){
_start:
{
lean_object* v___x_2642_; 
v___x_2642_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___redArg(v_m_2639_, v_a_2640_, v_b_2641_);
return v___x_2642_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2643_, lean_object* v_m_2644_, lean_object* v_a_2645_, lean_object* v_b_2646_){
_start:
{
uint64_t v_a_boxed_2647_; lean_object* v_res_2648_; 
v_a_boxed_2647_ = lean_unbox_uint64(v_a_2645_);
lean_dec_ref(v_a_2645_);
v_res_2648_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2(v_00_u03b2_2643_, v_m_2644_, v_a_boxed_2647_, v_b_2646_);
return v_res_2648_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2649_, uint64_t v_a_2650_, lean_object* v_x_2651_){
_start:
{
lean_object* v___x_2652_; 
v___x_2652_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___redArg(v_a_2650_, v_x_2651_);
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2653_, lean_object* v_a_2654_, lean_object* v_x_2655_){
_start:
{
uint64_t v_a_boxed_2656_; lean_object* v_res_2657_; 
v_a_boxed_2656_ = lean_unbox_uint64(v_a_2654_);
lean_dec_ref(v_a_2654_);
v_res_2657_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_2653_, v_a_boxed_2656_, v_x_2655_);
lean_dec(v_x_2655_);
return v_res_2657_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_2658_, uint64_t v_a_2659_, lean_object* v_x_2660_){
_start:
{
uint8_t v___x_2661_; 
v___x_2661_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___redArg(v_a_2659_, v_x_2660_);
return v___x_2661_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_2662_, lean_object* v_a_2663_, lean_object* v_x_2664_){
_start:
{
uint64_t v_a_boxed_2665_; uint8_t v_res_2666_; lean_object* v_r_2667_; 
v_a_boxed_2665_ = lean_unbox_uint64(v_a_2663_);
lean_dec_ref(v_a_2663_);
v_res_2666_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__5(v_00_u03b2_2662_, v_a_boxed_2665_, v_x_2664_);
lean_dec(v_x_2664_);
v_r_2667_ = lean_box(v_res_2666_);
return v_r_2667_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6(lean_object* v_00_u03b2_2668_, lean_object* v_data_2669_){
_start:
{
lean_object* v___x_2670_; 
v___x_2670_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6___redArg(v_data_2669_);
return v___x_2670_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7(lean_object* v_00_u03b2_2671_, uint64_t v_a_2672_, lean_object* v_b_2673_, lean_object* v_x_2674_){
_start:
{
lean_object* v___x_2675_; 
v___x_2675_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___redArg(v_a_2672_, v_b_2673_, v_x_2674_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7___boxed(lean_object* v_00_u03b2_2676_, lean_object* v_a_2677_, lean_object* v_b_2678_, lean_object* v_x_2679_){
_start:
{
uint64_t v_a_boxed_2680_; lean_object* v_res_2681_; 
v_a_boxed_2680_ = lean_unbox_uint64(v_a_2677_);
lean_dec_ref(v_a_2677_);
v_res_2681_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__7(v_00_u03b2_2676_, v_a_boxed_2680_, v_b_2678_, v_x_2679_);
return v_res_2681_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7(lean_object* v_00_u03b2_2682_, lean_object* v_i_2683_, lean_object* v_source_2684_, lean_object* v_target_2685_){
_start:
{
lean_object* v___x_2686_; 
v___x_2686_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7___redArg(v_i_2683_, v_source_2684_, v_target_2685_);
return v___x_2686_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7_spec__9(lean_object* v_00_u03b2_2687_, lean_object* v_x_2688_, lean_object* v_x_2689_){
_start:
{
lean_object* v___x_2690_; 
v___x_2690_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Anchor_0__Lean_Meta_Grind_getNumDigitsForAnchors_go___at___00Lean_Meta_Grind_getNumDigitsForAnchors___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms_spec__0_spec__0_spec__2_spec__6_spec__7_spec__9___redArg(v_x_2688_, v_x_2689_);
return v___x_2690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1(){
_start:
{
lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2703_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_2704_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__1));
v___x_2705_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___closed__3));
v___x_2706_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___boxed), 10, 0);
v___x_2707_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2703_, v___x_2704_, v___x_2705_, v___x_2706_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1___boxed(lean_object* v_a_2708_){
_start:
{
lean_object* v_res_2709_; 
v_res_2709_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1();
return v_res_2709_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___redArg(lean_object* v_e_2710_, lean_object* v___y_2711_){
_start:
{
uint8_t v___x_2713_; 
v___x_2713_ = l_Lean_Expr_hasMVar(v_e_2710_);
if (v___x_2713_ == 0)
{
lean_object* v___x_2714_; 
v___x_2714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2714_, 0, v_e_2710_);
return v___x_2714_;
}
else
{
lean_object* v___x_2715_; lean_object* v_mctx_2716_; lean_object* v___x_2717_; lean_object* v_fst_2718_; lean_object* v_snd_2719_; lean_object* v___x_2720_; lean_object* v_cache_2721_; lean_object* v_zetaDeltaFVarIds_2722_; lean_object* v_postponed_2723_; lean_object* v_diag_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2733_; 
v___x_2715_ = lean_st_ref_get(v___y_2711_);
v_mctx_2716_ = lean_ctor_get(v___x_2715_, 0);
lean_inc_ref(v_mctx_2716_);
lean_dec(v___x_2715_);
v___x_2717_ = l_Lean_instantiateMVarsCore(v_mctx_2716_, v_e_2710_);
v_fst_2718_ = lean_ctor_get(v___x_2717_, 0);
lean_inc(v_fst_2718_);
v_snd_2719_ = lean_ctor_get(v___x_2717_, 1);
lean_inc(v_snd_2719_);
lean_dec_ref(v___x_2717_);
v___x_2720_ = lean_st_ref_take(v___y_2711_);
v_cache_2721_ = lean_ctor_get(v___x_2720_, 1);
v_zetaDeltaFVarIds_2722_ = lean_ctor_get(v___x_2720_, 2);
v_postponed_2723_ = lean_ctor_get(v___x_2720_, 3);
v_diag_2724_ = lean_ctor_get(v___x_2720_, 4);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2720_);
if (v_isSharedCheck_2733_ == 0)
{
lean_object* v_unused_2734_; 
v_unused_2734_ = lean_ctor_get(v___x_2720_, 0);
lean_dec(v_unused_2734_);
v___x_2726_ = v___x_2720_;
v_isShared_2727_ = v_isSharedCheck_2733_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_diag_2724_);
lean_inc(v_postponed_2723_);
lean_inc(v_zetaDeltaFVarIds_2722_);
lean_inc(v_cache_2721_);
lean_dec(v___x_2720_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2733_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2729_; 
if (v_isShared_2727_ == 0)
{
lean_ctor_set(v___x_2726_, 0, v_snd_2719_);
v___x_2729_ = v___x_2726_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_snd_2719_);
lean_ctor_set(v_reuseFailAlloc_2732_, 1, v_cache_2721_);
lean_ctor_set(v_reuseFailAlloc_2732_, 2, v_zetaDeltaFVarIds_2722_);
lean_ctor_set(v_reuseFailAlloc_2732_, 3, v_postponed_2723_);
lean_ctor_set(v_reuseFailAlloc_2732_, 4, v_diag_2724_);
v___x_2729_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; 
v___x_2730_ = lean_st_ref_put(v___y_2711_, v___x_2729_);
v___x_2731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2731_, 0, v_fst_2718_);
return v___x_2731_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___redArg___boxed(lean_object* v_e_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_){
_start:
{
lean_object* v_res_2738_; 
v_res_2738_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___redArg(v_e_2735_, v___y_2736_);
lean_dec(v___y_2736_);
return v_res_2738_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0(lean_object* v_e_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_){
_start:
{
lean_object* v___x_2749_; 
v___x_2749_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___redArg(v_e_2739_, v___y_2745_);
return v___x_2749_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___boxed(lean_object* v_e_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_){
_start:
{
lean_object* v_res_2760_; 
v_res_2760_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0(v_e_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_);
lean_dec(v___y_2758_);
lean_dec_ref(v___y_2757_);
lean_dec(v___y_2756_);
lean_dec_ref(v___y_2755_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
lean_dec(v___y_2752_);
lean_dec_ref(v___y_2751_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg___lam__0(lean_object* v_x_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_){
_start:
{
lean_object* v___x_2771_; 
lean_inc(v___y_2765_);
lean_inc_ref(v___y_2764_);
lean_inc(v___y_2763_);
lean_inc_ref(v___y_2762_);
v___x_2771_ = lean_apply_9(v_x_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_, lean_box(0));
return v___x_2771_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg___lam__0___boxed(lean_object* v_x_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_){
_start:
{
lean_object* v_res_2782_; 
v_res_2782_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg___lam__0(v_x_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_);
lean_dec(v___y_2776_);
lean_dec_ref(v___y_2775_);
lean_dec(v___y_2774_);
lean_dec_ref(v___y_2773_);
return v_res_2782_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg(lean_object* v_mvarId_2783_, lean_object* v_x_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_){
_start:
{
lean_object* v___f_2794_; lean_object* v___x_2795_; 
lean_inc(v___y_2788_);
lean_inc_ref(v___y_2787_);
lean_inc(v___y_2786_);
lean_inc_ref(v___y_2785_);
v___f_2794_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2794_, 0, v_x_2784_);
lean_closure_set(v___f_2794_, 1, v___y_2785_);
lean_closure_set(v___f_2794_, 2, v___y_2786_);
lean_closure_set(v___f_2794_, 3, v___y_2787_);
lean_closure_set(v___f_2794_, 4, v___y_2788_);
v___x_2795_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2783_, v___f_2794_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_);
if (lean_obj_tag(v___x_2795_) == 0)
{
return v___x_2795_;
}
else
{
lean_object* v_a_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2803_; 
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2798_ = v___x_2795_;
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_a_2796_);
lean_dec(v___x_2795_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2801_; 
if (v_isShared_2799_ == 0)
{
v___x_2801_ = v___x_2798_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v_a_2796_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg___boxed(lean_object* v_mvarId_2804_, lean_object* v_x_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_){
_start:
{
lean_object* v_res_2815_; 
v_res_2815_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg(v_mvarId_2804_, v_x_2805_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_);
lean_dec(v___y_2813_);
lean_dec_ref(v___y_2812_);
lean_dec(v___y_2811_);
lean_dec_ref(v___y_2810_);
lean_dec(v___y_2809_);
lean_dec_ref(v___y_2808_);
lean_dec(v___y_2807_);
lean_dec_ref(v___y_2806_);
return v_res_2815_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1(lean_object* v_00_u03b1_2816_, lean_object* v_mvarId_2817_, lean_object* v_x_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_){
_start:
{
lean_object* v___x_2828_; 
v___x_2828_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg(v_mvarId_2817_, v_x_2818_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_, v___y_2825_, v___y_2826_);
return v___x_2828_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___boxed(lean_object* v_00_u03b1_2829_, lean_object* v_mvarId_2830_, lean_object* v_x_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_){
_start:
{
lean_object* v_res_2841_; 
v_res_2841_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1(v_00_u03b1_2829_, v_mvarId_2830_, v_x_2831_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_);
lean_dec(v___y_2839_);
lean_dec_ref(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec_ref(v___y_2836_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec_ref(v___y_2832_);
return v_res_2841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___lam__0(lean_object* v___x_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_){
_start:
{
lean_object* v___x_2852_; lean_object* v_a_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; 
v___x_2852_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__0___redArg(v___x_2842_, v___y_2848_);
v_a_2853_ = lean_ctor_get(v___x_2852_, 0);
lean_inc(v_a_2853_);
lean_dec_ref(v___x_2852_);
v___x_2854_ = l_Lean_MessageData_ofExpr(v_a_2853_);
v___x_2855_ = l_Lean_logInfo___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__0(v___x_2854_, v___y_2843_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_);
return v___x_2855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___lam__0___boxed(lean_object* v___x_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_){
_start:
{
lean_object* v_res_2866_; 
v_res_2866_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___lam__0(v___x_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
lean_dec(v___y_2864_);
lean_dec_ref(v___y_2863_);
lean_dec(v___y_2862_);
lean_dec_ref(v___y_2861_);
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
return v_res_2866_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm(lean_object* v_stx_2881_, lean_object* v_a_2882_, lean_object* v_a_2883_, lean_object* v_a_2884_, lean_object* v_a_2885_, lean_object* v_a_2886_, lean_object* v_a_2887_, lean_object* v_a_2888_, lean_object* v_a_2889_){
_start:
{
lean_object* v___x_2891_; uint8_t v___x_2892_; 
v___x_2891_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1));
lean_inc(v_stx_2881_);
v___x_2892_ = l_Lean_Syntax_isOfKind(v_stx_2881_, v___x_2891_);
if (v___x_2892_ == 0)
{
lean_object* v___x_2893_; 
lean_dec(v_stx_2881_);
v___x_2893_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_2893_;
}
else
{
lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; uint8_t v___x_2897_; 
v___x_2894_ = lean_unsigned_to_nat(1u);
v___x_2895_ = l_Lean_Syntax_getArg(v_stx_2881_, v___x_2894_);
lean_dec(v_stx_2881_);
v___x_2896_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__3));
lean_inc(v___x_2895_);
v___x_2897_ = l_Lean_Syntax_isOfKind(v___x_2895_, v___x_2896_);
if (v___x_2897_ == 0)
{
lean_object* v___x_2898_; 
lean_dec(v___x_2895_);
v___x_2898_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted_spec__2___redArg();
return v___x_2898_;
}
else
{
lean_object* v___x_2899_; 
v___x_2899_ = l_Lean_Elab_Tactic_Grind_getMainGoal(v_a_2882_, v_a_2883_, v_a_2884_, v_a_2885_, v_a_2886_, v_a_2887_, v_a_2888_, v_a_2889_);
if (lean_obj_tag(v___x_2899_) == 0)
{
lean_object* v_a_2900_; lean_object* v_mvarId_2901_; lean_object* v___x_2902_; 
v_a_2900_ = lean_ctor_get(v___x_2899_, 0);
lean_inc(v_a_2900_);
lean_dec_ref_known(v___x_2899_, 1);
v_mvarId_2901_ = lean_ctor_get(v_a_2900_, 1);
lean_inc(v_mvarId_2901_);
lean_dec(v_a_2900_);
v___x_2902_ = l_Lean_Elab_Tactic_Grind_evalGrindTactic(v___x_2895_, v_a_2882_, v_a_2883_, v_a_2884_, v_a_2885_, v_a_2886_, v_a_2887_, v_a_2888_, v_a_2889_);
if (lean_obj_tag(v___x_2902_) == 0)
{
lean_object* v___x_2903_; lean_object* v___f_2904_; lean_object* v___x_2905_; 
lean_dec_ref_known(v___x_2902_, 1);
lean_inc(v_mvarId_2901_);
v___x_2903_ = l_Lean_mkMVar(v_mvarId_2901_);
v___f_2904_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___lam__0___boxed), 10, 1);
lean_closure_set(v___f_2904_, 0, v___x_2903_);
v___x_2905_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm_spec__1___redArg(v_mvarId_2901_, v___f_2904_, v_a_2882_, v_a_2883_, v_a_2884_, v_a_2885_, v_a_2886_, v_a_2887_, v_a_2888_, v_a_2889_);
return v___x_2905_;
}
else
{
lean_dec(v_mvarId_2901_);
return v___x_2902_;
}
}
else
{
lean_object* v_a_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2913_; 
lean_dec(v___x_2895_);
v_a_2906_ = lean_ctor_get(v___x_2899_, 0);
v_isSharedCheck_2913_ = !lean_is_exclusive(v___x_2899_);
if (v_isSharedCheck_2913_ == 0)
{
v___x_2908_ = v___x_2899_;
v_isShared_2909_ = v_isSharedCheck_2913_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_a_2906_);
lean_dec(v___x_2899_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2913_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v___x_2911_; 
if (v_isShared_2909_ == 0)
{
v___x_2911_ = v___x_2908_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v_a_2906_);
v___x_2911_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
return v___x_2911_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___boxed(lean_object* v_stx_2914_, lean_object* v_a_2915_, lean_object* v_a_2916_, lean_object* v_a_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_, lean_object* v_a_2920_, lean_object* v_a_2921_, lean_object* v_a_2922_, lean_object* v_a_2923_){
_start:
{
lean_object* v_res_2924_; 
v_res_2924_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm(v_stx_2914_, v_a_2915_, v_a_2916_, v_a_2917_, v_a_2918_, v_a_2919_, v_a_2920_, v_a_2921_, v_a_2922_);
lean_dec(v_a_2922_);
lean_dec_ref(v_a_2921_);
lean_dec(v_a_2920_);
lean_dec_ref(v_a_2919_);
lean_dec(v_a_2918_);
lean_dec_ref(v_a_2917_);
lean_dec(v_a_2916_);
lean_dec_ref(v_a_2915_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1(){
_start:
{
lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; 
v___x_2930_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_2931_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___closed__1));
v___x_2932_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___closed__1));
v___x_2933_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___boxed), 10, 0);
v___x_2934_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2930_, v___x_2931_, v___x_2932_, v___x_2933_);
return v___x_2934_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1___boxed(lean_object* v_a_2935_){
_start:
{
lean_object* v_res_2936_; 
v_res_2936_ = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1();
return v_res_2936_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Filter(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_PP(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_EMatchTheoremParam(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Split(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_ShowState(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Grind_Filter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_PP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_EMatchTheoremParam(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowAsserted__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTrue__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowFalse__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowEqcs__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowState__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowCases__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowLocalThms__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm___regBuiltin___private_Lean_Elab_Tactic_Grind_ShowState_0__Lean_Elab_Tactic_Grind_evalShowTerm__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Grind_ShowState(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Grind_Filter(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_PP(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_EMatchTheoremParam(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Split(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Grind_ShowState(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Grind_Filter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_PP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_EMatchTheoremParam(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_ShowState(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Grind_ShowState(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Grind_ShowState(builtin);
}
#ifdef __cplusplus
}
#endif
