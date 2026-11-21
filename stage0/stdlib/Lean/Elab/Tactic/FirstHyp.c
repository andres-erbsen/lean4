// Lean compiler output
// Module: Lean.Elab.Tactic.FirstHyp
// Imports: public import Lean.Elab.Tactic.Basic public import Lean.Meta.ExprPatternCore
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_SavedState_restore___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_Elab_isAbortTacticException(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Core_getMessageLog___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_toArray(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_localHypTypes(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withoutRecover___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_dbg_trace(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_firstHypInnerError_x3f_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_firstHypInnerError_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Failed"};
static const lean_object* l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg___closed__1_value;
static const lean_array_object l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHypInnerError_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHypInnerError_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "reuse"};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(46, 30, 230, 20, 64, 162, 204, 1)}};
static const lean_ctor_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(32, 17, 142, 189, 192, 166, 31, 124)}};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "reuse stopped: guard failed at "};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__0___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___lam__0(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHyp_x3f___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHyp_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHyp_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHyp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_firstHyp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "firstHyp: no hypothesis matched"};
static const lean_object* l_Lean_Elab_Tactic_firstHyp___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_firstHyp___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_firstHyp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_firstHyp___redArg___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_firstHyp___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "firstHyp: no hypothesis matched (last error: "};
static const lean_object* l_Lean_Elab_Tactic_firstHyp___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_firstHyp___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_firstHyp___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_firstHyp___redArg___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_firstHyp___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Tactic_firstHyp___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_firstHyp___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_firstHyp___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_firstHyp___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHyp___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHyp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHyp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHyp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_firstHypInnerError_x3f_spec__0(lean_object* v_as_1_, size_t v_i_2_, size_t v_stop_3_, lean_object* v_b_4_){
_start:
{
lean_object* v___y_6_; uint8_t v___x_10_; 
v___x_10_ = lean_usize_dec_eq(v_i_2_, v_stop_3_);
if (v___x_10_ == 0)
{
lean_object* v___x_11_; uint8_t v_severity_12_; uint8_t v___x_13_; uint8_t v___x_14_; 
v___x_11_ = lean_array_uget_borrowed(v_as_1_, v_i_2_);
v_severity_12_ = lean_ctor_get_uint8(v___x_11_, sizeof(void*)*5 + 1);
v___x_13_ = 2;
v___x_14_ = l_Lean_instBEqMessageSeverity_beq(v_severity_12_, v___x_13_);
if (v___x_14_ == 0)
{
v___y_6_ = v_b_4_;
goto v___jp_5_;
}
else
{
lean_object* v___x_15_; 
lean_inc(v___x_11_);
v___x_15_ = lean_array_push(v_b_4_, v___x_11_);
v___y_6_ = v___x_15_;
goto v___jp_5_;
}
}
else
{
return v_b_4_;
}
v___jp_5_:
{
size_t v___x_7_; size_t v___x_8_; 
v___x_7_ = ((size_t)1ULL);
v___x_8_ = lean_usize_add(v_i_2_, v___x_7_);
v_i_2_ = v___x_8_;
v_b_4_ = v___y_6_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_firstHypInnerError_x3f_spec__0___boxed(lean_object* v_as_16_, lean_object* v_i_17_, lean_object* v_stop_18_, lean_object* v_b_19_){
_start:
{
size_t v_i_boxed_20_; size_t v_stop_boxed_21_; lean_object* v_res_22_; 
v_i_boxed_20_ = lean_unbox_usize(v_i_17_);
lean_dec(v_i_17_);
v_stop_boxed_21_ = lean_unbox_usize(v_stop_18_);
lean_dec(v_stop_18_);
v_res_22_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_firstHypInnerError_x3f_spec__0(v_as_16_, v_i_boxed_20_, v_stop_boxed_21_, v_b_19_);
lean_dec_ref(v_as_16_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg(lean_object* v_ex_27_, lean_object* v_msgsBefore_28_, lean_object* v_a_29_){
_start:
{
uint8_t v___x_31_; 
v___x_31_ = l_Lean_Elab_isAbortTacticException(v_ex_27_);
if (v___x_31_ == 0)
{
lean_dec(v_msgsBefore_28_);
if (lean_obj_tag(v_ex_27_) == 1)
{
lean_object* v___x_32_; lean_object* v___x_33_; 
lean_dec_ref_known(v_ex_27_, 2);
v___x_32_ = lean_box(0);
v___x_33_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
return v___x_33_;
}
else
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_34_ = l_Lean_Exception_toMessageData(v_ex_27_);
lean_inc_ref(v___x_34_);
v___x_35_ = l_Lean_MessageData_toString(v___x_34_);
v___x_39_ = ((lean_object*)(l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg___closed__0));
v___x_40_ = lean_string_dec_eq(v___x_35_, v___x_39_);
if (v___x_40_ == 0)
{
lean_object* v___x_41_; uint8_t v___x_42_; 
v___x_41_ = ((lean_object*)(l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg___closed__1));
v___x_42_ = lean_string_dec_eq(v___x_35_, v___x_41_);
lean_dec_ref(v___x_35_);
if (v___x_42_ == 0)
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_43_, 0, v___x_34_);
v___x_44_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
return v___x_44_;
}
else
{
lean_dec_ref(v___x_34_);
goto v___jp_36_;
}
}
else
{
lean_dec_ref(v___x_35_);
lean_dec_ref(v___x_34_);
goto v___jp_36_;
}
v___jp_36_:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_box(0);
v___x_38_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
return v___x_38_;
}
}
}
else
{
lean_object* v___x_45_; 
lean_dec_ref(v_ex_27_);
v___x_45_ = l_Lean_Core_getMessageLog___redArg(v_a_29_);
if (lean_obj_tag(v___x_45_) == 0)
{
lean_object* v_a_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_76_; 
v_a_46_ = lean_ctor_get(v___x_45_, 0);
v_isSharedCheck_76_ = !lean_is_exclusive(v___x_45_);
if (v_isSharedCheck_76_ == 0)
{
v___x_48_ = v___x_45_;
v_isShared_49_ = v_isSharedCheck_76_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_a_46_);
lean_dec(v___x_45_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_76_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___y_51_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; uint8_t v___x_72_; 
v___x_66_ = l_Lean_MessageLog_toArray(v_a_46_);
lean_dec(v_a_46_);
v___x_67_ = lean_array_get_size(v___x_66_);
v___x_68_ = l_Array_extract___redArg(v___x_66_, v_msgsBefore_28_, v___x_67_);
lean_dec_ref(v___x_66_);
v___x_69_ = lean_unsigned_to_nat(0u);
v___x_70_ = lean_array_get_size(v___x_68_);
v___x_71_ = ((lean_object*)(l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg___closed__2));
v___x_72_ = lean_nat_dec_lt(v___x_69_, v___x_70_);
if (v___x_72_ == 0)
{
lean_dec_ref(v___x_68_);
v___y_51_ = v___x_71_;
goto v___jp_50_;
}
else
{
size_t v___x_73_; size_t v___x_74_; lean_object* v___x_75_; 
v___x_73_ = ((size_t)0ULL);
v___x_74_ = lean_usize_of_nat(v___x_70_);
v___x_75_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_firstHypInnerError_x3f_spec__0(v___x_68_, v___x_73_, v___x_74_, v___x_71_);
lean_dec_ref(v___x_68_);
v___y_51_ = v___x_75_;
goto v___jp_50_;
}
v___jp_50_:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; uint8_t v___x_55_; 
v___x_52_ = lean_array_get_size(v___y_51_);
v___x_53_ = lean_unsigned_to_nat(1u);
v___x_54_ = lean_nat_sub(v___x_52_, v___x_53_);
v___x_55_ = lean_nat_dec_lt(v___x_54_, v___x_52_);
if (v___x_55_ == 0)
{
lean_object* v___x_56_; lean_object* v___x_58_; 
lean_dec(v___x_54_);
lean_dec_ref(v___y_51_);
v___x_56_ = lean_box(0);
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 0, v___x_56_);
v___x_58_ = v___x_48_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_59_; 
v_reuseFailAlloc_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_59_, 0, v___x_56_);
v___x_58_ = v_reuseFailAlloc_59_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
return v___x_58_;
}
}
else
{
lean_object* v___x_60_; lean_object* v_data_61_; lean_object* v___x_62_; lean_object* v___x_64_; 
v___x_60_ = lean_array_fget(v___y_51_, v___x_54_);
lean_dec(v___x_54_);
lean_dec_ref(v___y_51_);
v_data_61_ = lean_ctor_get(v___x_60_, 4);
lean_inc(v_data_61_);
lean_dec(v___x_60_);
v___x_62_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_62_, 0, v_data_61_);
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 0, v___x_62_);
v___x_64_ = v___x_48_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(0, 1, 0);
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
}
else
{
lean_object* v_a_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_84_; 
lean_dec(v_msgsBefore_28_);
v_a_77_ = lean_ctor_get(v___x_45_, 0);
v_isSharedCheck_84_ = !lean_is_exclusive(v___x_45_);
if (v_isSharedCheck_84_ == 0)
{
v___x_79_ = v___x_45_;
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_a_77_);
lean_dec(v___x_45_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_82_; 
if (v_isShared_80_ == 0)
{
v___x_82_ = v___x_79_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_a_77_);
v___x_82_ = v_reuseFailAlloc_83_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
return v___x_82_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg___boxed(lean_object* v_ex_85_, lean_object* v_msgsBefore_86_, lean_object* v_a_87_, lean_object* v_a_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg(v_ex_85_, v_msgsBefore_86_, v_a_87_);
lean_dec(v_a_87_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHypInnerError_x3f(lean_object* v_ex_90_, lean_object* v_msgsBefore_91_, lean_object* v_a_92_, lean_object* v_a_93_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg(v_ex_90_, v_msgsBefore_91_, v_a_93_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHypInnerError_x3f___boxed(lean_object* v_ex_96_, lean_object* v_msgsBefore_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lean_Elab_Tactic_firstHypInnerError_x3f(v_ex_96_, v_msgsBefore_97_, v_a_98_, v_a_99_);
lean_dec(v_a_99_);
lean_dec_ref(v_a_98_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1___redArg___lam__0(lean_object* v_x_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_){
_start:
{
lean_object* v___x_112_; 
lean_inc(v___y_106_);
lean_inc_ref(v___y_105_);
lean_inc(v___y_104_);
lean_inc_ref(v___y_103_);
v___x_112_ = lean_apply_9(v_x_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, lean_box(0));
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1___redArg___lam__0___boxed(lean_object* v_x_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1___redArg___lam__0(v_x_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_, v___y_119_, v___y_120_, v___y_121_);
lean_dec(v___y_117_);
lean_dec_ref(v___y_116_);
lean_dec(v___y_115_);
lean_dec_ref(v___y_114_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1___redArg(lean_object* v_mvarId_124_, lean_object* v_x_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_){
_start:
{
lean_object* v___f_135_; lean_object* v___x_136_; 
lean_inc(v___y_129_);
lean_inc_ref(v___y_128_);
lean_inc(v___y_127_);
lean_inc_ref(v___y_126_);
v___f_135_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_135_, 0, v_x_125_);
lean_closure_set(v___f_135_, 1, v___y_126_);
lean_closure_set(v___f_135_, 2, v___y_127_);
lean_closure_set(v___f_135_, 3, v___y_128_);
lean_closure_set(v___f_135_, 4, v___y_129_);
v___x_136_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_124_, v___f_135_, v___y_130_, v___y_131_, v___y_132_, v___y_133_);
if (lean_obj_tag(v___x_136_) == 0)
{
return v___x_136_;
}
else
{
lean_object* v_a_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_144_; 
v_a_137_ = lean_ctor_get(v___x_136_, 0);
v_isSharedCheck_144_ = !lean_is_exclusive(v___x_136_);
if (v_isSharedCheck_144_ == 0)
{
v___x_139_ = v___x_136_;
v_isShared_140_ = v_isSharedCheck_144_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_a_137_);
lean_dec(v___x_136_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_144_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_142_; 
if (v_isShared_140_ == 0)
{
v___x_142_ = v___x_139_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v_a_137_);
v___x_142_ = v_reuseFailAlloc_143_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
return v___x_142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1___redArg___boxed(lean_object* v_mvarId_145_, lean_object* v_x_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1___redArg(v_mvarId_145_, v_x_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_);
lean_dec(v___y_154_);
lean_dec_ref(v___y_153_);
lean_dec(v___y_152_);
lean_dec_ref(v___y_151_);
lean_dec(v___y_150_);
lean_dec_ref(v___y_149_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1(lean_object* v_00_u03b1_157_, lean_object* v_mvarId_158_, lean_object* v_x_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1___redArg(v_mvarId_158_, v_x_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1___boxed(lean_object* v_00_u03b1_170_, lean_object* v_mvarId_171_, lean_object* v_x_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1(v_00_u03b1_170_, v_mvarId_171_, v_x_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_, v___y_180_);
lean_dec(v___y_180_);
lean_dec_ref(v___y_179_);
lean_dec(v___y_178_);
lean_dec_ref(v___y_177_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__2___redArg(lean_object* v_a_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
lean_inc(v___y_185_);
lean_inc_ref(v___y_184_);
v___x_193_ = lean_apply_2(v_a_183_, v___y_184_, v___y_185_);
v___x_194_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___x_193_, v___y_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__2___redArg___boxed(lean_object* v_a_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__2___redArg(v_a_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_);
lean_dec(v___y_203_);
lean_dec_ref(v___y_202_);
lean_dec(v___y_201_);
lean_dec_ref(v___y_200_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__2(lean_object* v_00_u03b1_206_, lean_object* v_a_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__2___redArg(v_a_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_, v___y_212_, v___y_213_, v___y_214_, v___y_215_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__2___boxed(lean_object* v_00_u03b1_218_, lean_object* v_a_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__2(v_00_u03b1_218_, v_a_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_, v___y_227_);
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
lean_dec(v___y_225_);
lean_dec_ref(v___y_224_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
return v_res_229_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___lam__0(uint8_t v_cond_230_, lean_object* v_____r_231_){
_start:
{
if (v_cond_230_ == 0)
{
uint8_t v___x_232_; 
v___x_232_ = 1;
return v___x_232_;
}
else
{
uint8_t v___x_233_; 
v___x_233_ = 0;
return v___x_233_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___lam__0___boxed(lean_object* v_cond_234_, lean_object* v_____r_235_){
_start:
{
uint8_t v_cond_boxed_236_; uint8_t v_res_237_; lean_object* v_r_238_; 
v_cond_boxed_236_ = lean_unbox(v_cond_234_);
v_res_237_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___lam__0(v_cond_boxed_236_, v_____r_235_);
v_r_238_ = lean_box(v_res_237_);
return v_r_238_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___lam__1(lean_object* v___f_239_, lean_object* v_x_240_){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; uint8_t v___x_243_; 
v___x_241_ = lean_box(0);
v___x_242_ = lean_apply_1(v___f_239_, v___x_241_);
v___x_243_ = lean_unbox(v___x_242_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___lam__1___boxed(lean_object* v___f_244_, lean_object* v_x_245_){
_start:
{
uint8_t v_res_246_; lean_object* v_r_247_; 
v_res_246_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___lam__1(v___f_244_, v_x_245_);
v_r_247_ = lean_box(v_res_246_);
return v_r_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg(uint8_t v_cond_256_, lean_object* v_act_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v_declName_x3f_267_; lean_object* v_macroStack_268_; uint8_t v_mayPostpone_269_; uint8_t v_errToSorry_270_; lean_object* v_autoBoundImplicitContext_271_; lean_object* v_autoBoundImplicitForbidden_272_; lean_object* v_sectionVars_273_; lean_object* v_sectionFVars_274_; uint8_t v_implicitLambda_275_; uint8_t v_heedElabAsElim_276_; uint8_t v_isNoncomputableSection_277_; uint8_t v_isMetaSection_278_; uint8_t v_ignoreTCFailures_279_; uint8_t v_inPattern_280_; lean_object* v_tacSnap_x3f_281_; uint8_t v_saveRecAppSyntax_282_; uint8_t v_holesAsSyntheticOpaque_283_; lean_object* v_fixedTermElabs_284_; lean_object* v___y_286_; uint8_t v___y_290_; 
v_declName_x3f_267_ = lean_ctor_get(v___y_260_, 0);
v_macroStack_268_ = lean_ctor_get(v___y_260_, 1);
v_mayPostpone_269_ = lean_ctor_get_uint8(v___y_260_, sizeof(void*)*8);
v_errToSorry_270_ = lean_ctor_get_uint8(v___y_260_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_271_ = lean_ctor_get(v___y_260_, 2);
v_autoBoundImplicitForbidden_272_ = lean_ctor_get(v___y_260_, 3);
v_sectionVars_273_ = lean_ctor_get(v___y_260_, 4);
v_sectionFVars_274_ = lean_ctor_get(v___y_260_, 5);
v_implicitLambda_275_ = lean_ctor_get_uint8(v___y_260_, sizeof(void*)*8 + 2);
v_heedElabAsElim_276_ = lean_ctor_get_uint8(v___y_260_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_277_ = lean_ctor_get_uint8(v___y_260_, sizeof(void*)*8 + 4);
v_isMetaSection_278_ = lean_ctor_get_uint8(v___y_260_, sizeof(void*)*8 + 5);
v_ignoreTCFailures_279_ = lean_ctor_get_uint8(v___y_260_, sizeof(void*)*8 + 6);
v_inPattern_280_ = lean_ctor_get_uint8(v___y_260_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_281_ = lean_ctor_get(v___y_260_, 6);
v_saveRecAppSyntax_282_ = lean_ctor_get_uint8(v___y_260_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_283_ = lean_ctor_get_uint8(v___y_260_, sizeof(void*)*8 + 9);
v_fixedTermElabs_284_ = lean_ctor_get(v___y_260_, 7);
if (lean_obj_tag(v_tacSnap_x3f_281_) == 0)
{
v___y_286_ = v_tacSnap_x3f_281_;
goto v___jp_285_;
}
else
{
lean_object* v_val_292_; lean_object* v_old_x3f_293_; lean_object* v___x_294_; lean_object* v___f_295_; 
v_val_292_ = lean_ctor_get(v_tacSnap_x3f_281_, 0);
v_old_x3f_293_ = lean_ctor_get(v_val_292_, 0);
v___x_294_ = lean_box(v_cond_256_);
v___f_295_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_295_, 0, v___x_294_);
if (lean_obj_tag(v_old_x3f_293_) == 1)
{
if (v_cond_256_ == 0)
{
lean_dec_ref(v___f_295_);
goto v___jp_296_;
}
else
{
lean_object* v_val_299_; lean_object* v___x_300_; lean_object* v_map_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v_val_299_ = lean_ctor_get(v_old_x3f_293_, 0);
v___x_300_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_264_);
v_map_301_ = lean_ctor_get(v___x_300_, 0);
lean_inc(v_map_301_);
lean_dec_ref(v___x_300_);
v___x_302_ = ((lean_object*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__3));
v___x_303_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_301_, v___x_302_);
lean_dec(v_map_301_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_dec_ref(v___f_295_);
goto v___jp_296_;
}
else
{
lean_object* v_val_304_; 
v_val_304_ = lean_ctor_get(v___x_303_, 0);
lean_inc(v_val_304_);
lean_dec_ref_known(v___x_303_, 1);
if (lean_obj_tag(v_val_304_) == 1)
{
uint8_t v_v_305_; 
v_v_305_ = lean_ctor_get_uint8(v_val_304_, 0);
lean_dec_ref_known(v_val_304_, 0);
if (v_v_305_ == 0)
{
lean_dec_ref(v___f_295_);
goto v___jp_296_;
}
else
{
lean_object* v_stx_306_; lean_object* v___f_307_; lean_object* v___x_308_; lean_object* v___x_309_; uint8_t v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; uint8_t v___x_317_; 
v_stx_306_ = lean_ctor_get(v_val_299_, 0);
v___f_307_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_307_, 0, v___f_295_);
v___x_308_ = ((lean_object*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___closed__4));
v___x_309_ = lean_box(0);
v___x_310_ = 0;
lean_inc(v_stx_306_);
v___x_311_ = l_Lean_Syntax_formatStx(v_stx_306_, v___x_309_, v___x_310_);
v___x_312_ = l_Std_Format_defWidth;
v___x_313_ = lean_unsigned_to_nat(0u);
v___x_314_ = l_Std_Format_pretty(v___x_311_, v___x_312_, v___x_313_, v___x_313_);
v___x_315_ = lean_string_append(v___x_308_, v___x_314_);
lean_dec_ref(v___x_314_);
v___x_316_ = lean_dbg_trace(v___x_315_, v___f_307_);
v___x_317_ = lean_unbox(v___x_316_);
lean_dec(v___x_316_);
v___y_290_ = v___x_317_;
goto v___jp_289_;
}
}
else
{
lean_dec(v_val_304_);
lean_dec_ref(v___f_295_);
goto v___jp_296_;
}
}
}
}
else
{
lean_object* v___x_318_; uint8_t v___x_319_; 
lean_dec_ref(v___f_295_);
v___x_318_ = lean_box(0);
v___x_319_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___lam__0(v_cond_256_, v___x_318_);
v___y_290_ = v___x_319_;
goto v___jp_289_;
}
v___jp_296_:
{
lean_object* v___x_297_; uint8_t v___x_298_; 
v___x_297_ = lean_box(0);
v___x_298_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___lam__0(v_cond_256_, v___x_297_);
v___y_290_ = v___x_298_;
goto v___jp_289_;
}
}
v___jp_285_:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
lean_inc_ref(v_fixedTermElabs_284_);
lean_inc(v_sectionFVars_274_);
lean_inc(v_sectionVars_273_);
lean_inc_ref(v_autoBoundImplicitForbidden_272_);
lean_inc(v_autoBoundImplicitContext_271_);
lean_inc(v_macroStack_268_);
lean_inc(v_declName_x3f_267_);
v___x_287_ = lean_alloc_ctor(0, 8, 10);
lean_ctor_set(v___x_287_, 0, v_declName_x3f_267_);
lean_ctor_set(v___x_287_, 1, v_macroStack_268_);
lean_ctor_set(v___x_287_, 2, v_autoBoundImplicitContext_271_);
lean_ctor_set(v___x_287_, 3, v_autoBoundImplicitForbidden_272_);
lean_ctor_set(v___x_287_, 4, v_sectionVars_273_);
lean_ctor_set(v___x_287_, 5, v_sectionFVars_274_);
lean_ctor_set(v___x_287_, 6, v___y_286_);
lean_ctor_set(v___x_287_, 7, v_fixedTermElabs_284_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*8, v_mayPostpone_269_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*8 + 1, v_errToSorry_270_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*8 + 2, v_implicitLambda_275_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*8 + 3, v_heedElabAsElim_276_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*8 + 4, v_isNoncomputableSection_277_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*8 + 5, v_isMetaSection_278_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*8 + 6, v_ignoreTCFailures_279_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*8 + 7, v_inPattern_280_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_282_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*8 + 9, v_holesAsSyntheticOpaque_283_);
lean_inc(v___y_265_);
lean_inc_ref(v___y_264_);
lean_inc(v___y_263_);
lean_inc_ref(v___y_262_);
lean_inc(v___y_261_);
lean_inc(v___y_259_);
lean_inc_ref(v___y_258_);
v___x_288_ = lean_apply_9(v_act_257_, v___y_258_, v___y_259_, v___x_287_, v___y_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_, lean_box(0));
return v___x_288_;
}
v___jp_289_:
{
if (v___y_290_ == 0)
{
lean_object* v___x_291_; 
v___x_291_ = lean_box(0);
v___y_286_ = v___x_291_;
goto v___jp_285_;
}
else
{
lean_inc(v_tacSnap_x3f_281_);
v___y_286_ = v_tacSnap_x3f_281_;
goto v___jp_285_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg___boxed(lean_object* v_cond_320_, lean_object* v_act_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_){
_start:
{
uint8_t v_cond_boxed_331_; lean_object* v_res_332_; 
v_cond_boxed_331_ = lean_unbox(v_cond_320_);
v_res_332_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg(v_cond_boxed_331_, v_act_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_, v___y_329_);
lean_dec(v___y_329_);
lean_dec_ref(v___y_328_);
lean_dec(v___y_327_);
lean_dec_ref(v___y_326_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3(lean_object* v_00_u03b1_333_, uint8_t v_cond_334_, lean_object* v_act_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg(v_cond_334_, v_act_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___boxed(lean_object* v_00_u03b1_346_, lean_object* v_cond_347_, lean_object* v_act_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_){
_start:
{
uint8_t v_cond_boxed_358_; lean_object* v_res_359_; 
v_cond_boxed_358_ = lean_unbox(v_cond_347_);
v_res_359_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3(v_00_u03b1_346_, v_cond_boxed_358_, v_act_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
lean_dec(v___y_350_);
lean_dec_ref(v___y_349_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__0___redArg(lean_object* v_f_360_, uint8_t v_collectErr_361_, lean_object* v_as_362_, size_t v_sz_363_, size_t v_i_364_, lean_object* v_b_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_){
_start:
{
uint8_t v___x_375_; 
v___x_375_ = lean_usize_dec_lt(v_i_364_, v_sz_363_);
if (v___x_375_ == 0)
{
lean_object* v___x_376_; 
lean_dec_ref(v_f_360_);
v___x_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_376_, 0, v_b_365_);
return v___x_376_;
}
else
{
lean_object* v_a_377_; lean_object* v_fst_378_; lean_object* v_snd_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_485_; 
v_a_377_ = lean_array_uget(v_as_362_, v_i_364_);
v_fst_378_ = lean_ctor_get(v_a_377_, 0);
v_snd_379_ = lean_ctor_get(v_a_377_, 1);
v_isSharedCheck_485_ = !lean_is_exclusive(v_a_377_);
if (v_isSharedCheck_485_ == 0)
{
v___x_381_ = v_a_377_;
v_isShared_382_ = v_isSharedCheck_485_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_snd_379_);
lean_inc(v_fst_378_);
lean_dec(v_a_377_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_485_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v_snd_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_483_; 
v_snd_383_ = lean_ctor_get(v_b_365_, 1);
v_isSharedCheck_483_ = !lean_is_exclusive(v_b_365_);
if (v_isSharedCheck_483_ == 0)
{
lean_object* v_unused_484_; 
v_unused_484_ = lean_ctor_get(v_b_365_, 0);
lean_dec(v_unused_484_);
v___x_385_ = v_b_365_;
v_isShared_386_ = v_isSharedCheck_483_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_snd_383_);
lean_dec(v_b_365_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_483_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = lean_box(0);
v___x_388_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_367_, v___y_369_, v___y_371_, v___y_373_);
if (lean_obj_tag(v___x_388_) == 0)
{
lean_object* v_a_389_; lean_object* v_lastErr_x3f_391_; lean_object* v___y_392_; lean_object* v___y_393_; lean_object* v___y_394_; lean_object* v___y_395_; lean_object* v___y_396_; lean_object* v___y_397_; lean_object* v___y_398_; lean_object* v_msgsBefore_415_; lean_object* v___y_416_; lean_object* v___y_417_; lean_object* v___y_418_; lean_object* v___y_419_; lean_object* v___y_420_; lean_object* v___y_421_; lean_object* v___y_422_; lean_object* v___y_423_; 
v_a_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_a_389_);
lean_dec_ref_known(v___x_388_, 1);
if (v_collectErr_361_ == 0)
{
lean_object* v___x_462_; 
v___x_462_ = lean_unsigned_to_nat(0u);
v_msgsBefore_415_ = v___x_462_;
v___y_416_ = v___y_366_;
v___y_417_ = v___y_367_;
v___y_418_ = v___y_368_;
v___y_419_ = v___y_369_;
v___y_420_ = v___y_370_;
v___y_421_ = v___y_371_;
v___y_422_ = v___y_372_;
v___y_423_ = v___y_373_;
goto v___jp_414_;
}
else
{
lean_object* v___x_463_; 
v___x_463_ = l_Lean_Core_getMessageLog___redArg(v___y_373_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v_a_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v_a_464_ = lean_ctor_get(v___x_463_, 0);
lean_inc(v_a_464_);
lean_dec_ref_known(v___x_463_, 1);
v___x_465_ = l_Lean_MessageLog_toArray(v_a_464_);
lean_dec(v_a_464_);
v___x_466_ = lean_array_get_size(v___x_465_);
lean_dec_ref(v___x_465_);
v_msgsBefore_415_ = v___x_466_;
v___y_416_ = v___y_366_;
v___y_417_ = v___y_367_;
v___y_418_ = v___y_368_;
v___y_419_ = v___y_369_;
v___y_420_ = v___y_370_;
v___y_421_ = v___y_371_;
v___y_422_ = v___y_372_;
v___y_423_ = v___y_373_;
goto v___jp_414_;
}
else
{
lean_object* v_a_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_474_; 
lean_dec(v_a_389_);
lean_del_object(v___x_385_);
lean_dec(v_snd_383_);
lean_del_object(v___x_381_);
lean_dec(v_snd_379_);
lean_dec(v_fst_378_);
lean_dec_ref(v_f_360_);
v_a_467_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_474_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_474_ == 0)
{
v___x_469_ = v___x_463_;
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_a_467_);
lean_dec(v___x_463_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_472_; 
if (v_isShared_470_ == 0)
{
v___x_472_ = v___x_469_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_a_467_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
}
v___jp_390_:
{
lean_object* v___x_399_; 
v___x_399_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_389_, v___x_375_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v___x_401_; 
lean_dec_ref_known(v___x_399_, 1);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 1, v_lastErr_x3f_391_);
lean_ctor_set(v___x_385_, 0, v___x_387_);
v___x_401_ = v___x_385_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v___x_387_);
lean_ctor_set(v_reuseFailAlloc_405_, 1, v_lastErr_x3f_391_);
v___x_401_ = v_reuseFailAlloc_405_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
size_t v___x_402_; size_t v___x_403_; 
v___x_402_ = ((size_t)1ULL);
v___x_403_ = lean_usize_add(v_i_364_, v___x_402_);
v_i_364_ = v___x_403_;
v_b_365_ = v___x_401_;
goto _start;
}
}
else
{
lean_object* v_a_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_413_; 
lean_dec(v_lastErr_x3f_391_);
lean_del_object(v___x_385_);
lean_dec_ref(v_f_360_);
v_a_406_ = lean_ctor_get(v___x_399_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_413_ == 0)
{
v___x_408_ = v___x_399_;
v_isShared_409_ = v_isSharedCheck_413_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_a_406_);
lean_dec(v___x_399_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_413_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v___x_411_; 
if (v_isShared_409_ == 0)
{
v___x_411_ = v___x_408_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v_a_406_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
return v___x_411_;
}
}
}
}
v___jp_414_:
{
lean_object* v___x_424_; 
lean_inc_ref(v_f_360_);
lean_inc(v___y_423_);
lean_inc_ref(v___y_422_);
lean_inc(v___y_421_);
lean_inc_ref(v___y_420_);
lean_inc(v___y_419_);
lean_inc_ref(v___y_418_);
lean_inc(v___y_417_);
lean_inc_ref(v___y_416_);
v___x_424_ = lean_apply_11(v_f_360_, v_fst_378_, v_snd_379_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_, lean_box(0));
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_438_; 
lean_dec(v_msgsBefore_415_);
lean_dec(v_a_389_);
lean_del_object(v___x_385_);
lean_dec_ref(v_f_360_);
v_a_425_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_438_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_438_ == 0)
{
v___x_427_ = v___x_424_;
v_isShared_428_ = v_isSharedCheck_438_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___x_424_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_438_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v___x_429_; lean_object* v___x_431_; 
v___x_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_429_, 0, v_a_425_);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 1, v___x_387_);
lean_ctor_set(v___x_381_, 0, v___x_429_);
v___x_431_ = v___x_381_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v___x_429_);
lean_ctor_set(v_reuseFailAlloc_437_, 1, v___x_387_);
v___x_431_ = v_reuseFailAlloc_437_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_435_; 
v___x_432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
v___x_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
lean_ctor_set(v___x_433_, 1, v_snd_383_);
if (v_isShared_428_ == 0)
{
lean_ctor_set(v___x_427_, 0, v___x_433_);
v___x_435_ = v___x_427_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v___x_433_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
}
else
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_461_; 
lean_del_object(v___x_381_);
v_a_439_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_461_ == 0)
{
v___x_441_ = v___x_424_;
v_isShared_442_ = v_isSharedCheck_461_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_424_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_461_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
uint8_t v___x_443_; 
v___x_443_ = l_Lean_Exception_isInterrupt(v_a_439_);
if (v___x_443_ == 0)
{
uint8_t v___x_444_; 
lean_inc(v_a_439_);
v___x_444_ = l_Lean_Exception_isRuntime(v_a_439_);
if (v___x_444_ == 0)
{
lean_del_object(v___x_441_);
if (v_collectErr_361_ == 0)
{
lean_dec(v_a_439_);
lean_dec(v_msgsBefore_415_);
v_lastErr_x3f_391_ = v_snd_383_;
v___y_392_ = v___y_417_;
v___y_393_ = v___y_418_;
v___y_394_ = v___y_419_;
v___y_395_ = v___y_420_;
v___y_396_ = v___y_421_;
v___y_397_ = v___y_422_;
v___y_398_ = v___y_423_;
goto v___jp_390_;
}
else
{
lean_object* v___x_445_; 
v___x_445_ = l_Lean_Elab_Tactic_firstHypInnerError_x3f___redArg(v_a_439_, v_msgsBefore_415_, v___y_423_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v_a_446_; 
v_a_446_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_a_446_);
lean_dec_ref_known(v___x_445_, 1);
if (lean_obj_tag(v_a_446_) == 1)
{
lean_dec(v_snd_383_);
v_lastErr_x3f_391_ = v_a_446_;
v___y_392_ = v___y_417_;
v___y_393_ = v___y_418_;
v___y_394_ = v___y_419_;
v___y_395_ = v___y_420_;
v___y_396_ = v___y_421_;
v___y_397_ = v___y_422_;
v___y_398_ = v___y_423_;
goto v___jp_390_;
}
else
{
lean_dec(v_a_446_);
v_lastErr_x3f_391_ = v_snd_383_;
v___y_392_ = v___y_417_;
v___y_393_ = v___y_418_;
v___y_394_ = v___y_419_;
v___y_395_ = v___y_420_;
v___y_396_ = v___y_421_;
v___y_397_ = v___y_422_;
v___y_398_ = v___y_423_;
goto v___jp_390_;
}
}
else
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
lean_dec(v_a_389_);
lean_del_object(v___x_385_);
lean_dec(v_snd_383_);
lean_dec_ref(v_f_360_);
v_a_447_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_445_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_445_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_447_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
}
else
{
lean_object* v___x_456_; 
lean_dec(v_msgsBefore_415_);
lean_dec(v_a_389_);
lean_del_object(v___x_385_);
lean_dec(v_snd_383_);
lean_dec_ref(v_f_360_);
if (v_isShared_442_ == 0)
{
v___x_456_ = v___x_441_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_439_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
else
{
lean_object* v___x_459_; 
lean_dec(v_msgsBefore_415_);
lean_dec(v_a_389_);
lean_del_object(v___x_385_);
lean_dec(v_snd_383_);
lean_dec_ref(v_f_360_);
if (v_isShared_442_ == 0)
{
v___x_459_ = v___x_441_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_a_439_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
}
}
else
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_482_; 
lean_del_object(v___x_385_);
lean_dec(v_snd_383_);
lean_del_object(v___x_381_);
lean_dec(v_snd_379_);
lean_dec(v_fst_378_);
lean_dec_ref(v_f_360_);
v_a_475_ = lean_ctor_get(v___x_388_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_482_ == 0)
{
v___x_477_ = v___x_388_;
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_388_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_482_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_480_; 
if (v_isShared_478_ == 0)
{
v___x_480_ = v___x_477_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_a_475_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__0___redArg___boxed(lean_object* v_f_486_, lean_object* v_collectErr_487_, lean_object* v_as_488_, lean_object* v_sz_489_, lean_object* v_i_490_, lean_object* v_b_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_){
_start:
{
uint8_t v_collectErr_boxed_501_; size_t v_sz_boxed_502_; size_t v_i_boxed_503_; lean_object* v_res_504_; 
v_collectErr_boxed_501_ = lean_unbox(v_collectErr_487_);
v_sz_boxed_502_ = lean_unbox_usize(v_sz_489_);
lean_dec(v_sz_489_);
v_i_boxed_503_ = lean_unbox_usize(v_i_490_);
lean_dec(v_i_490_);
v_res_504_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__0___redArg(v_f_486_, v_collectErr_boxed_501_, v_as_488_, v_sz_boxed_502_, v_i_boxed_503_, v_b_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
lean_dec(v___y_495_);
lean_dec_ref(v___y_494_);
lean_dec(v___y_493_);
lean_dec_ref(v___y_492_);
lean_dec_ref(v_as_488_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___lam__0(uint8_t v_reverse_507_, lean_object* v_except_508_, lean_object* v_f_509_, uint8_t v_collectErr_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_){
_start:
{
lean_object* v___x_520_; 
v___x_520_ = l_Lean_Meta_localHypTypes(v_reverse_507_, v_except_508_, v___y_515_, v___y_516_, v___y_517_, v___y_518_);
if (lean_obj_tag(v___x_520_) == 0)
{
lean_object* v_a_521_; lean_object* v___x_522_; lean_object* v___x_523_; size_t v_sz_524_; size_t v___x_525_; lean_object* v___x_526_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
lean_inc(v_a_521_);
lean_dec_ref_known(v___x_520_, 1);
v___x_522_ = lean_box(0);
v___x_523_ = ((lean_object*)(l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___lam__0___closed__0));
v_sz_524_ = lean_array_size(v_a_521_);
v___x_525_ = ((size_t)0ULL);
v___x_526_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__0___redArg(v_f_509_, v_collectErr_510_, v_a_521_, v_sz_524_, v___x_525_, v___x_523_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_);
lean_dec(v_a_521_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_548_; 
v_a_527_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_548_ == 0)
{
v___x_529_ = v___x_526_;
v_isShared_530_ = v_isSharedCheck_548_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_526_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_548_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v_fst_531_; 
v_fst_531_ = lean_ctor_get(v_a_527_, 0);
if (lean_obj_tag(v_fst_531_) == 0)
{
lean_object* v_snd_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_542_; 
v_snd_532_ = lean_ctor_get(v_a_527_, 1);
v_isSharedCheck_542_ = !lean_is_exclusive(v_a_527_);
if (v_isSharedCheck_542_ == 0)
{
lean_object* v_unused_543_; 
v_unused_543_ = lean_ctor_get(v_a_527_, 0);
lean_dec(v_unused_543_);
v___x_534_ = v_a_527_;
v_isShared_535_ = v_isSharedCheck_542_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_snd_532_);
lean_dec(v_a_527_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_542_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 0, v___x_522_);
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v___x_522_);
lean_ctor_set(v_reuseFailAlloc_541_, 1, v_snd_532_);
v___x_537_ = v_reuseFailAlloc_541_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
lean_object* v___x_539_; 
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 0, v___x_537_);
v___x_539_ = v___x_529_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v___x_537_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
}
else
{
lean_object* v_val_544_; lean_object* v___x_546_; 
lean_inc_ref(v_fst_531_);
lean_dec(v_a_527_);
v_val_544_ = lean_ctor_get(v_fst_531_, 0);
lean_inc(v_val_544_);
lean_dec_ref_known(v_fst_531_, 1);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 0, v_val_544_);
v___x_546_ = v___x_529_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_val_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
else
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
v_a_549_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_526_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_526_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_549_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec_ref(v_f_509_);
v_a_557_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_520_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_520_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___lam__0___boxed(lean_object* v_reverse_565_, lean_object* v_except_566_, lean_object* v_f_567_, lean_object* v_collectErr_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_){
_start:
{
uint8_t v_reverse_boxed_578_; uint8_t v_collectErr_boxed_579_; lean_object* v_res_580_; 
v_reverse_boxed_578_ = lean_unbox(v_reverse_565_);
v_collectErr_boxed_579_ = lean_unbox(v_collectErr_568_);
v_res_580_ = l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___lam__0(v_reverse_boxed_578_, v_except_566_, v_f_567_, v_collectErr_boxed_579_, v___y_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
lean_dec(v___y_576_);
lean_dec_ref(v___y_575_);
lean_dec(v___y_574_);
lean_dec_ref(v___y_573_);
lean_dec(v___y_572_);
lean_dec_ref(v___y_571_);
lean_dec(v___y_570_);
lean_dec_ref(v___y_569_);
lean_dec(v_except_566_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___lam__1(lean_object* v___f_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_583_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v_a_592_; lean_object* v___x_593_; 
v_a_592_ = lean_ctor_get(v___x_591_, 0);
lean_inc(v_a_592_);
lean_dec_ref_known(v___x_591_, 1);
v___x_593_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__1___redArg(v_a_592_, v___f_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
return v___x_593_;
}
else
{
lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_601_; 
lean_dec_ref(v___f_581_);
v_a_594_ = lean_ctor_get(v___x_591_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_601_ == 0)
{
v___x_596_ = v___x_591_;
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___x_591_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_597_ == 0)
{
v___x_599_ = v___x_596_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_a_594_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___lam__1___boxed(lean_object* v___f_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___lam__1(v___f_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
lean_dec(v___y_604_);
lean_dec_ref(v___y_603_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg(lean_object* v_f_613_, uint8_t v_reverse_614_, lean_object* v_except_615_, uint8_t v_collectErr_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___f_628_; lean_object* v___f_629_; uint8_t v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_626_ = lean_box(v_reverse_614_);
v___x_627_ = lean_box(v_collectErr_616_);
v___f_628_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___lam__0___boxed), 13, 4);
lean_closure_set(v___f_628_, 0, v___x_626_);
lean_closure_set(v___f_628_, 1, v_except_615_);
lean_closure_set(v___f_628_, 2, v_f_613_);
lean_closure_set(v___f_628_, 3, v___x_627_);
v___f_629_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___lam__1___boxed), 10, 1);
lean_closure_set(v___f_629_, 0, v___f_628_);
v___x_630_ = 1;
v___x_631_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withoutRecover___boxed), 11, 2);
lean_closure_set(v___x_631_, 0, lean_box(0));
lean_closure_set(v___x_631_, 1, v___f_629_);
v___x_632_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__2___boxed), 11, 2);
lean_closure_set(v___x_632_, 0, lean_box(0));
lean_closure_set(v___x_632_, 1, v___x_631_);
v___x_633_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__3___redArg(v___x_630_, v___x_632_, v_a_617_, v_a_618_, v_a_619_, v_a_620_, v_a_621_, v_a_622_, v_a_623_, v_a_624_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg___boxed(lean_object* v_f_634_, lean_object* v_reverse_635_, lean_object* v_except_636_, lean_object* v_collectErr_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_){
_start:
{
uint8_t v_reverse_boxed_647_; uint8_t v_collectErr_boxed_648_; lean_object* v_res_649_; 
v_reverse_boxed_647_ = lean_unbox(v_reverse_635_);
v_collectErr_boxed_648_ = lean_unbox(v_collectErr_637_);
v_res_649_ = l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg(v_f_634_, v_reverse_boxed_647_, v_except_636_, v_collectErr_boxed_648_, v_a_638_, v_a_639_, v_a_640_, v_a_641_, v_a_642_, v_a_643_, v_a_644_, v_a_645_);
lean_dec(v_a_645_);
lean_dec_ref(v_a_644_);
lean_dec(v_a_643_);
lean_dec_ref(v_a_642_);
lean_dec(v_a_641_);
lean_dec_ref(v_a_640_);
lean_dec(v_a_639_);
lean_dec_ref(v_a_638_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore(lean_object* v_00_u03b1_650_, lean_object* v_f_651_, uint8_t v_reverse_652_, lean_object* v_except_653_, uint8_t v_collectErr_654_, lean_object* v_a_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg(v_f_651_, v_reverse_652_, v_except_653_, v_collectErr_654_, v_a_655_, v_a_656_, v_a_657_, v_a_658_, v_a_659_, v_a_660_, v_a_661_, v_a_662_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___boxed(lean_object* v_00_u03b1_665_, lean_object* v_f_666_, lean_object* v_reverse_667_, lean_object* v_except_668_, lean_object* v_collectErr_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_){
_start:
{
uint8_t v_reverse_boxed_679_; uint8_t v_collectErr_boxed_680_; lean_object* v_res_681_; 
v_reverse_boxed_679_ = lean_unbox(v_reverse_667_);
v_collectErr_boxed_680_ = lean_unbox(v_collectErr_669_);
v_res_681_ = l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore(v_00_u03b1_665_, v_f_666_, v_reverse_boxed_679_, v_except_668_, v_collectErr_boxed_680_, v_a_670_, v_a_671_, v_a_672_, v_a_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_);
lean_dec(v_a_677_);
lean_dec_ref(v_a_676_);
lean_dec(v_a_675_);
lean_dec_ref(v_a_674_);
lean_dec(v_a_673_);
lean_dec_ref(v_a_672_);
lean_dec(v_a_671_);
lean_dec_ref(v_a_670_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__0(lean_object* v_00_u03b1_682_, lean_object* v_f_683_, uint8_t v_collectErr_684_, lean_object* v_as_685_, size_t v_sz_686_, size_t v_i_687_, lean_object* v_b_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_){
_start:
{
lean_object* v___x_698_; 
v___x_698_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__0___redArg(v_f_683_, v_collectErr_684_, v_as_685_, v_sz_686_, v_i_687_, v_b_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_, v___y_696_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__0___boxed(lean_object* v_00_u03b1_699_, lean_object* v_f_700_, lean_object* v_collectErr_701_, lean_object* v_as_702_, lean_object* v_sz_703_, lean_object* v_i_704_, lean_object* v_b_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_){
_start:
{
uint8_t v_collectErr_boxed_715_; size_t v_sz_boxed_716_; size_t v_i_boxed_717_; lean_object* v_res_718_; 
v_collectErr_boxed_715_ = lean_unbox(v_collectErr_701_);
v_sz_boxed_716_ = lean_unbox_usize(v_sz_703_);
lean_dec(v_sz_703_);
v_i_boxed_717_ = lean_unbox_usize(v_i_704_);
lean_dec(v_i_704_);
v_res_718_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore_spec__0(v_00_u03b1_699_, v_f_700_, v_collectErr_boxed_715_, v_as_702_, v_sz_boxed_716_, v_i_boxed_717_, v_b_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_, v___y_713_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
lean_dec(v___y_707_);
lean_dec_ref(v___y_706_);
lean_dec_ref(v_as_702_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHyp_x3f___redArg(lean_object* v_f_719_, uint8_t v_reverse_720_, lean_object* v_except_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_){
_start:
{
uint8_t v___x_731_; lean_object* v___x_732_; 
v___x_731_ = 0;
v___x_732_ = l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg(v_f_719_, v_reverse_720_, v_except_721_, v___x_731_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_741_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_741_ == 0)
{
v___x_735_ = v___x_732_;
v_isShared_736_ = v_isSharedCheck_741_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_732_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_741_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v_fst_737_; lean_object* v___x_739_; 
v_fst_737_ = lean_ctor_get(v_a_733_, 0);
lean_inc(v_fst_737_);
lean_dec(v_a_733_);
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 0, v_fst_737_);
v___x_739_ = v___x_735_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v_fst_737_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
return v___x_739_;
}
}
}
else
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
v_a_742_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_749_ == 0)
{
v___x_744_ = v___x_732_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_732_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_742_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHyp_x3f___redArg___boxed(lean_object* v_f_750_, lean_object* v_reverse_751_, lean_object* v_except_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_){
_start:
{
uint8_t v_reverse_boxed_762_; lean_object* v_res_763_; 
v_reverse_boxed_762_ = lean_unbox(v_reverse_751_);
v_res_763_ = l_Lean_Elab_Tactic_firstHyp_x3f___redArg(v_f_750_, v_reverse_boxed_762_, v_except_752_, v_a_753_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_, v_a_760_);
lean_dec(v_a_760_);
lean_dec_ref(v_a_759_);
lean_dec(v_a_758_);
lean_dec_ref(v_a_757_);
lean_dec(v_a_756_);
lean_dec_ref(v_a_755_);
lean_dec(v_a_754_);
lean_dec_ref(v_a_753_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHyp_x3f(lean_object* v_00_u03b1_764_, lean_object* v_f_765_, uint8_t v_reverse_766_, lean_object* v_except_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_){
_start:
{
lean_object* v___x_777_; 
v___x_777_ = l_Lean_Elab_Tactic_firstHyp_x3f___redArg(v_f_765_, v_reverse_766_, v_except_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_, v_a_774_, v_a_775_);
return v___x_777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHyp_x3f___boxed(lean_object* v_00_u03b1_778_, lean_object* v_f_779_, lean_object* v_reverse_780_, lean_object* v_except_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_){
_start:
{
uint8_t v_reverse_boxed_791_; lean_object* v_res_792_; 
v_reverse_boxed_791_ = lean_unbox(v_reverse_780_);
v_res_792_ = l_Lean_Elab_Tactic_firstHyp_x3f(v_00_u03b1_778_, v_f_779_, v_reverse_boxed_791_, v_except_781_, v_a_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, v_a_787_, v_a_788_, v_a_789_);
lean_dec(v_a_789_);
lean_dec_ref(v_a_788_);
lean_dec(v_a_787_);
lean_dec_ref(v_a_786_);
lean_dec(v_a_785_);
lean_dec_ref(v_a_784_);
lean_dec(v_a_783_);
lean_dec_ref(v_a_782_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0_spec__0(lean_object* v_msgData_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_){
_start:
{
lean_object* v___x_799_; lean_object* v_env_800_; uint8_t v___x_801_; lean_object* v_env_802_; lean_object* v___x_803_; lean_object* v_toCold_804_; lean_object* v_mctx_805_; lean_object* v_lctx_806_; lean_object* v_options_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_799_ = lean_st_ref_get(v___y_797_);
v_env_800_ = lean_ctor_get(v___x_799_, 0);
lean_inc_ref(v_env_800_);
lean_dec(v___x_799_);
v___x_801_ = 0;
v_env_802_ = l_Lean_Environment_setRecordingDeps(v_env_800_, v___x_801_);
v___x_803_ = lean_st_ref_get(v___y_795_);
v_toCold_804_ = lean_ctor_get(v___y_796_, 0);
v_mctx_805_ = lean_ctor_get(v___x_803_, 0);
lean_inc_ref(v_mctx_805_);
lean_dec(v___x_803_);
v_lctx_806_ = lean_ctor_get(v___y_794_, 2);
v_options_807_ = lean_ctor_get(v_toCold_804_, 2);
lean_inc_ref(v_options_807_);
lean_inc_ref(v_lctx_806_);
v___x_808_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_808_, 0, v_env_802_);
lean_ctor_set(v___x_808_, 1, v_mctx_805_);
lean_ctor_set(v___x_808_, 2, v_lctx_806_);
lean_ctor_set(v___x_808_, 3, v_options_807_);
v___x_809_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_808_);
lean_ctor_set(v___x_809_, 1, v_msgData_793_);
v___x_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_810_, 0, v___x_809_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0_spec__0___boxed(lean_object* v_msgData_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0_spec__0(v_msgData_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
lean_dec(v___y_815_);
lean_dec_ref(v___y_814_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0___redArg(lean_object* v_msg_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
lean_object* v_ref_824_; lean_object* v___x_825_; lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_834_; 
v_ref_824_ = lean_ctor_get(v___y_821_, 2);
v___x_825_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0_spec__0(v_msg_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_);
v_a_826_ = lean_ctor_get(v___x_825_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_834_ == 0)
{
v___x_828_ = v___x_825_;
v_isShared_829_ = v_isSharedCheck_834_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v___x_825_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_834_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_830_; lean_object* v___x_832_; 
lean_inc(v_ref_824_);
v___x_830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_830_, 0, v_ref_824_);
lean_ctor_set(v___x_830_, 1, v_a_826_);
if (v_isShared_829_ == 0)
{
lean_ctor_set_tag(v___x_828_, 1);
lean_ctor_set(v___x_828_, 0, v___x_830_);
v___x_832_ = v___x_828_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v___x_830_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0___redArg___boxed(lean_object* v_msg_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0___redArg(v_msg_835_, v___y_836_, v___y_837_, v___y_838_, v___y_839_);
lean_dec(v___y_839_);
lean_dec_ref(v___y_838_);
lean_dec(v___y_837_);
lean_dec_ref(v___y_836_);
return v_res_841_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_firstHyp___redArg___closed__1(void){
_start:
{
lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_843_ = ((lean_object*)(l_Lean_Elab_Tactic_firstHyp___redArg___closed__0));
v___x_844_ = l_Lean_stringToMessageData(v___x_843_);
return v___x_844_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_firstHyp___redArg___closed__3(void){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_846_ = ((lean_object*)(l_Lean_Elab_Tactic_firstHyp___redArg___closed__2));
v___x_847_ = l_Lean_stringToMessageData(v___x_846_);
return v___x_847_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_firstHyp___redArg___closed__5(void){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_849_ = ((lean_object*)(l_Lean_Elab_Tactic_firstHyp___redArg___closed__4));
v___x_850_ = l_Lean_stringToMessageData(v___x_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHyp___redArg(lean_object* v_f_851_, uint8_t v_reverse_852_, lean_object* v_except_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_){
_start:
{
uint8_t v___x_863_; lean_object* v___x_864_; 
v___x_863_ = 1;
v___x_864_ = l___private_Lean_Elab_Tactic_FirstHyp_0__Lean_Elab_Tactic_firstHypCore___redArg(v_f_851_, v_reverse_852_, v_except_853_, v___x_863_, v_a_854_, v_a_855_, v_a_856_, v_a_857_, v_a_858_, v_a_859_, v_a_860_, v_a_861_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_890_; 
v_a_865_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_890_ == 0)
{
v___x_867_ = v___x_864_;
v_isShared_868_ = v_isSharedCheck_890_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_864_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_890_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v_fst_869_; 
v_fst_869_ = lean_ctor_get(v_a_865_, 0);
if (lean_obj_tag(v_fst_869_) == 0)
{
lean_object* v_snd_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_884_; 
lean_del_object(v___x_867_);
v_snd_870_ = lean_ctor_get(v_a_865_, 1);
v_isSharedCheck_884_ = !lean_is_exclusive(v_a_865_);
if (v_isSharedCheck_884_ == 0)
{
lean_object* v_unused_885_; 
v_unused_885_ = lean_ctor_get(v_a_865_, 0);
lean_dec(v_unused_885_);
v___x_872_ = v_a_865_;
v_isShared_873_ = v_isSharedCheck_884_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_snd_870_);
lean_dec(v_a_865_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_884_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
if (lean_obj_tag(v_snd_870_) == 0)
{
lean_object* v___x_874_; lean_object* v___x_875_; 
lean_del_object(v___x_872_);
v___x_874_ = lean_obj_once(&l_Lean_Elab_Tactic_firstHyp___redArg___closed__1, &l_Lean_Elab_Tactic_firstHyp___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_firstHyp___redArg___closed__1);
v___x_875_ = l_Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0___redArg(v___x_874_, v_a_858_, v_a_859_, v_a_860_, v_a_861_);
return v___x_875_;
}
else
{
lean_object* v_val_876_; lean_object* v___x_877_; lean_object* v___x_879_; 
v_val_876_ = lean_ctor_get(v_snd_870_, 0);
lean_inc(v_val_876_);
lean_dec_ref_known(v_snd_870_, 1);
v___x_877_ = lean_obj_once(&l_Lean_Elab_Tactic_firstHyp___redArg___closed__3, &l_Lean_Elab_Tactic_firstHyp___redArg___closed__3_once, _init_l_Lean_Elab_Tactic_firstHyp___redArg___closed__3);
if (v_isShared_873_ == 0)
{
lean_ctor_set_tag(v___x_872_, 7);
lean_ctor_set(v___x_872_, 1, v_val_876_);
lean_ctor_set(v___x_872_, 0, v___x_877_);
v___x_879_ = v___x_872_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v___x_877_);
lean_ctor_set(v_reuseFailAlloc_883_, 1, v_val_876_);
v___x_879_ = v_reuseFailAlloc_883_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_880_ = lean_obj_once(&l_Lean_Elab_Tactic_firstHyp___redArg___closed__5, &l_Lean_Elab_Tactic_firstHyp___redArg___closed__5_once, _init_l_Lean_Elab_Tactic_firstHyp___redArg___closed__5);
v___x_881_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_879_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
v___x_882_ = l_Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0___redArg(v___x_881_, v_a_858_, v_a_859_, v_a_860_, v_a_861_);
return v___x_882_;
}
}
}
}
else
{
lean_object* v_val_886_; lean_object* v___x_888_; 
lean_inc_ref(v_fst_869_);
lean_dec(v_a_865_);
v_val_886_ = lean_ctor_get(v_fst_869_, 0);
lean_inc(v_val_886_);
lean_dec_ref_known(v_fst_869_, 1);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 0, v_val_886_);
v___x_888_ = v___x_867_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_val_886_);
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
v_a_891_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_898_ == 0)
{
v___x_893_ = v___x_864_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_864_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHyp___redArg___boxed(lean_object* v_f_899_, lean_object* v_reverse_900_, lean_object* v_except_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_){
_start:
{
uint8_t v_reverse_boxed_911_; lean_object* v_res_912_; 
v_reverse_boxed_911_ = lean_unbox(v_reverse_900_);
v_res_912_ = l_Lean_Elab_Tactic_firstHyp___redArg(v_f_899_, v_reverse_boxed_911_, v_except_901_, v_a_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_, v_a_907_, v_a_908_, v_a_909_);
lean_dec(v_a_909_);
lean_dec_ref(v_a_908_);
lean_dec(v_a_907_);
lean_dec_ref(v_a_906_);
lean_dec(v_a_905_);
lean_dec_ref(v_a_904_);
lean_dec(v_a_903_);
lean_dec_ref(v_a_902_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHyp(lean_object* v_00_u03b1_913_, lean_object* v_f_914_, uint8_t v_reverse_915_, lean_object* v_except_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_){
_start:
{
lean_object* v___x_926_; 
v___x_926_ = l_Lean_Elab_Tactic_firstHyp___redArg(v_f_914_, v_reverse_915_, v_except_916_, v_a_917_, v_a_918_, v_a_919_, v_a_920_, v_a_921_, v_a_922_, v_a_923_, v_a_924_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_firstHyp___boxed(lean_object* v_00_u03b1_927_, lean_object* v_f_928_, lean_object* v_reverse_929_, lean_object* v_except_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_){
_start:
{
uint8_t v_reverse_boxed_940_; lean_object* v_res_941_; 
v_reverse_boxed_940_ = lean_unbox(v_reverse_929_);
v_res_941_ = l_Lean_Elab_Tactic_firstHyp(v_00_u03b1_927_, v_f_928_, v_reverse_boxed_940_, v_except_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_, v_a_938_);
lean_dec(v_a_938_);
lean_dec_ref(v_a_937_);
lean_dec(v_a_936_);
lean_dec_ref(v_a_935_);
lean_dec(v_a_934_);
lean_dec_ref(v_a_933_);
lean_dec(v_a_932_);
lean_dec_ref(v_a_931_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0(lean_object* v_00_u03b1_942_, lean_object* v_msg_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_){
_start:
{
lean_object* v___x_953_; 
v___x_953_ = l_Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0___redArg(v_msg_943_, v___y_948_, v___y_949_, v___y_950_, v___y_951_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0___boxed(lean_object* v_00_u03b1_954_, lean_object* v_msg_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l_Lean_throwError___at___00Lean_Elab_Tactic_firstHyp_spec__0(v_00_u03b1_954_, v_msg_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
lean_dec(v___y_963_);
lean_dec_ref(v___y_962_);
lean_dec(v___y_961_);
lean_dec_ref(v___y_960_);
lean_dec(v___y_959_);
lean_dec_ref(v___y_958_);
lean_dec(v___y_957_);
lean_dec_ref(v___y_956_);
return v_res_965_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_ExprPatternCore(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_FirstHyp(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ExprPatternCore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_FirstHyp(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_ExprPatternCore(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_FirstHyp(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ExprPatternCore(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_FirstHyp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_FirstHyp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_FirstHyp(builtin);
}
#ifdef __cplusplus
}
#endif
