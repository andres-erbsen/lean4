// Lean compiler output
// Module: Lean.Elab.Do.InferControlInfo
// Imports: public import Lean.Elab.Term public import Lean.Elab.Do.ForwardSyntax meta import Lean.Parser.Do import Lean.Elab.Do.PatternVar
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_append(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Parser_Term_getDoElems(lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_sub(size_t, size_t);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Elab_mkElabAttribute___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_getEntries___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getPatternVarsEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Elab_Do_getLetPatDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getLetIdDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_Forward_matchApp_x3f(lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instInhabitedControlInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instInhabitedControlInfo;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_pure;
static lean_once_cell_t l_Lean_Elab_Do_ControlInfo_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_ControlInfo_empty___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_empty;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_sequence(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_alternative(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_forLoop(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ", reassigns: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__2_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__3_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__4_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__5_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__6_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__7_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__2_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__3_value)}};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__9 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__9_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__4_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__5_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__6_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__7_value)}};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__10_value),((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__8_value)}};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__11 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__11_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofName, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__12 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = ", numRegularExits: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__13 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ",\n    noFallthrough: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__15 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17_value;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18_value;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = ",\n    returnsEarly: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__19 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__19_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "breaks: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__21 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22;
static const lean_string_object l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ", continues: "};
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__23 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__23_value;
static lean_once_cell_t l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value;
static const lean_closure_object l_Lean_Elab_Do_instToMessageDataControlInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__0_value)} };
static const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___closed__1 = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo = (const lean_object*)&l_Lean_Elab_Do_instToMessageDataControlInfo___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "builtin_doElem_control_info"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 75, 74, 17, 172, 74, 138, 206)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "doElem_control_info"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 182, 102, 169, 76, 87, 55, 254)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doElem"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__7_value),LEAN_SCALAR_PTR_LITERAL(208, 65, 144, 138, 55, 55, 217, 220)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "ControlInfoHandler"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__11_value),LEAN_SCALAR_PTR_LITERAL(18, 126, 127, 228, 104, 205, 61, 148)}};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "control info inference"};
static const lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13 = (const lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "controlInfoElemAttribute"};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__10_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__0_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 110, 218, 82, 47, 2, 10, 58)}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoElemAttribute;
static const lean_string_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 238, .m_capacity = 238, .m_length = 235, .m_data = "Registers a `ControlInfo` inference handler for the given `doElem` syntax node kind.\n\nA handler should have type `ControlInfoHandler` (i.e. `DoElem → TermElabM ControlInfo`).\nFor pure handlers, use `fun stx => return ControlInfo.pure`."};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(131) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(139) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__1_value),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(138) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(138) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__3_value),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__4_value),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__0 = (const lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__0_value;
static const lean_ctor_object l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1 = (const lean_object*)&l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__7_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__7_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__17_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__20_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__21 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__21_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__22 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__22_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__0_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "matchExprAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(156, 165, 255, 22, 123, 199, 70, 61)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "matchExprPat"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(34, 152, 68, 102, 242, 224, 57, 35)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doForDecl"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 147, 251, 147, 43, 72, 7, 132)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doFor"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__2_value),LEAN_SCALAR_PTR_LITERAL(164, 12, 178, 2, 144, 97, 71, 235)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "No `ControlInfo` inference handler found for `"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "` in syntax "};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "\nRegister a handler with `@[doElem_control_info "};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "]`."};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__12_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doBreak"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__14_value),LEAN_SCALAR_PTR_LITERAL(100, 48, 134, 252, 224, 171, 60, 39)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doContinue"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__16_value),LEAN_SCALAR_PTR_LITERAL(99, 212, 187, 103, 216, 35, 231, 189)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doReturn"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__18_value),LEAN_SCALAR_PTR_LITERAL(210, 201, 30, 244, 146, 7, 54, 39)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__20_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doNested"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__22_value),LEAN_SCALAR_PTR_LITERAL(220, 154, 41, 109, 103, 76, 110, 63)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doLet"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__24_value),LEAN_SCALAR_PTR_LITERAL(60, 171, 222, 145, 87, 124, 9, 205)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doHave"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__26_value),LEAN_SCALAR_PTR_LITERAL(103, 74, 100, 51, 242, 214, 142, 115)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doLetRec"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__28_value),LEAN_SCALAR_PTR_LITERAL(82, 47, 84, 182, 64, 225, 123, 219)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doLetElse"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__30_value),LEAN_SCALAR_PTR_LITERAL(175, 153, 29, 134, 242, 228, 141, 99)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIdDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(41, 95, 84, 160, 28, 70, 78, 179)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doPatDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__2_value),LEAN_SCALAR_PTR_LITERAL(205, 158, 71, 138, 110, 159, 158, 208)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Not a let or reassignment declaration: "};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__7_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doLetArrow"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__32_value),LEAN_SCALAR_PTR_LITERAL(155, 105, 77, 168, 26, 188, 17, 34)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__34_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doReassign"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__36_value),LEAN_SCALAR_PTR_LITERAL(31, 163, 103, 78, 29, 183, 93, 39)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "doReassignArrow"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__38_value),LEAN_SCALAR_PTR_LITERAL(24, 63, 28, 32, 90, 193, 231, 114)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doMatch"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__40_value),LEAN_SCALAR_PTR_LITERAL(29, 50, 175, 23, 122, 111, 148, 60)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "doIf"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__42_value),LEAN_SCALAR_PTR_LITERAL(133, 56, 102, 181, 14, 156, 21, 0)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doUnless"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__44_value),LEAN_SCALAR_PTR_LITERAL(231, 120, 137, 73, 40, 67, 249, 239)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doRepeat"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__46_value),LEAN_SCALAR_PTR_LITERAL(27, 14, 140, 183, 155, 194, 124, 178)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doTry"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__48_value),LEAN_SCALAR_PTR_LITERAL(183, 105, 89, 167, 131, 32, 5, 203)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doSkip"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "InternalSyntax"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__50_value),LEAN_SCALAR_PTR_LITERAL(117, 4, 119, 3, 13, 160, 149, 47)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value_aux_3),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__51_value),LEAN_SCALAR_PTR_LITERAL(125, 157, 182, 149, 109, 63, 124, 178)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "doDbgTrace"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__53_value),LEAN_SCALAR_PTR_LITERAL(34, 125, 157, 23, 122, 81, 121, 195)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doAssert"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__55_value),LEAN_SCALAR_PTR_LITERAL(171, 15, 212, 125, 46, 208, 251, 33)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doDebugAssert"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__57_value),LEAN_SCALAR_PTR_LITERAL(219, 254, 62, 12, 192, 208, 196, 20)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doAssertion"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__59_value),LEAN_SCALAR_PTR_LITERAL(144, 179, 243, 245, 156, 230, 227, 142)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doMatchExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__61_value),LEAN_SCALAR_PTR_LITERAL(72, 0, 49, 218, 206, 236, 229, 165)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doLetExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__63_value),LEAN_SCALAR_PTR_LITERAL(68, 239, 85, 151, 235, 111, 29, 229)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doLetMetaExpr"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__65_value),LEAN_SCALAR_PTR_LITERAL(231, 210, 172, 145, 91, 221, 30, 22)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "matchExprAlts"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__67_value),LEAN_SCALAR_PTR_LITERAL(88, 158, 245, 158, 91, 207, 89, 187)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "matchExprElseAlt"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__69_value),LEAN_SCALAR_PTR_LITERAL(249, 132, 98, 23, 98, 205, 167, 22)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__71_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doCatch"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 196, 191, 146, 79, 230, 20, 8)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "doCatchMatch"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 106, 10, 98, 177, 11, 181, 30)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Not a catch or catch match: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__6_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__0_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doFinally"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__73_value),LEAN_SCALAR_PTR_LITERAL(94, 201, 209, 4, 148, 58, 33, 223)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "doLoopDecreasing"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__75_value),LEAN_SCALAR_PTR_LITERAL(0, 112, 64, 8, 91, 183, 41, 148)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "doLoopInvariant"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__77_value),LEAN_SCALAR_PTR_LITERAL(207, 155, 107, 150, 202, 64, 185, 181)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "generalizingParam"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__79_value),LEAN_SCALAR_PTR_LITERAL(147, 206, 52, 232, 193, 222, 34, 109)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "dependentParam"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__81_value),LEAN_SCALAR_PTR_LITERAL(78, 215, 202, 78, 135, 250, 138, 86)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "letIdDeclNoBinders"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__83_value),LEAN_SCALAR_PTR_LITERAL(205, 0, 127, 82, 201, 96, 42, 5)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letPatDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__85_value),LEAN_SCALAR_PTR_LITERAL(9, 25, 156, 50, 29, 105, 147, 239)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "doErasedArrow"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__87 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__87_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__87_value),LEAN_SCALAR_PTR_LITERAL(176, 216, 203, 158, 108, 103, 134, 112)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doErased"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__89 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__89_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__89_value),LEAN_SCALAR_PTR_LITERAL(69, 69, 120, 16, 133, 86, 56, 26)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "letRecDecls"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__91_value),LEAN_SCALAR_PTR_LITERAL(103, 117, 148, 85, 88, 242, 214, 126)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92_value;
static const lean_string_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letRecDecl"};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__93 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__93_value;
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_0),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_1),((lean_object*)&l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value_aux_2),((lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__93_value),LEAN_SCALAR_PTR_LITERAL(202, 48, 93, 231, 206, 172, 150, 190)}};
static const lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94 = (const lean_object*)&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94_value;
static lean_once_cell_t l_Lean_Elab_Do_InferControlInfo_ofElem___closed__95_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___closed__95;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; uint8_t v___x_3_; lean_object* v___x_4_; 
v___x_1_ = l_Lean_NameSet_empty;
v___x_2_ = lean_unsigned_to_nat(1u);
v___x_3_ = 0;
v___x_4_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_4_, 0, v___x_2_);
lean_ctor_set(v___x_4_, 1, v___x_1_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2, v___x_3_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2 + 1, v___x_3_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2 + 2, v___x_3_);
lean_ctor_set_uint8(v___x_4_, sizeof(void*)*2 + 3, v___x_3_);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instInhabitedControlInfo_default(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instInhabitedControlInfo(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = l_Lean_Elab_Do_instInhabitedControlInfo_default;
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlInfo_pure(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlInfo_empty___closed__0(void){
_start:
{
lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; uint8_t v___x_11_; lean_object* v___x_12_; 
v___x_8_ = l_Lean_NameSet_empty;
v___x_9_ = 1;
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = 0;
v___x_12_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_12_, 0, v___x_10_);
lean_ctor_set(v___x_12_, 1, v___x_8_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2, v___x_11_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2 + 1, v___x_11_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2 + 2, v___x_11_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2 + 3, v___x_9_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Elab_Do_ControlInfo_empty(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_obj_once(&l_Lean_Elab_Do_ControlInfo_empty___closed__0, &l_Lean_Elab_Do_ControlInfo_empty___closed__0_once, _init_l_Lean_Elab_Do_ControlInfo_empty___closed__0);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_sequence(lean_object* v_a_14_, lean_object* v_b_15_){
_start:
{
uint8_t v_breaks_16_; uint8_t v_continues_17_; uint8_t v_returnsEarly_18_; uint8_t v_noFallthrough_19_; lean_object* v_reassigns_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_52_; 
v_breaks_16_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*2);
v_continues_17_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*2 + 1);
v_returnsEarly_18_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*2 + 2);
v_noFallthrough_19_ = lean_ctor_get_uint8(v_a_14_, sizeof(void*)*2 + 3);
v_reassigns_20_ = lean_ctor_get(v_a_14_, 1);
v_isSharedCheck_52_ = !lean_is_exclusive(v_a_14_);
if (v_isSharedCheck_52_ == 0)
{
lean_object* v_unused_53_; 
v_unused_53_ = lean_ctor_get(v_a_14_, 0);
lean_dec(v_unused_53_);
v___x_22_ = v_a_14_;
v_isShared_23_ = v_isSharedCheck_52_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_reassigns_20_);
lean_dec(v_a_14_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_52_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
uint8_t v___y_25_; uint8_t v___y_26_; uint8_t v___y_27_; lean_object* v___y_28_; lean_object* v___y_29_; uint8_t v___y_30_; uint8_t v___y_36_; uint8_t v___y_37_; uint8_t v___y_38_; uint8_t v___y_45_; uint8_t v___y_46_; uint8_t v___y_49_; 
if (v_breaks_16_ == 0)
{
uint8_t v_breaks_51_; 
v_breaks_51_ = lean_ctor_get_uint8(v_b_15_, sizeof(void*)*2);
v___y_49_ = v_breaks_51_;
goto v___jp_48_;
}
else
{
v___y_49_ = v_breaks_16_;
goto v___jp_48_;
}
v___jp_24_:
{
lean_object* v___x_31_; lean_object* v___x_33_; 
v___x_31_ = l_Lean_NameSet_append(v_reassigns_20_, v___y_29_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 1, v___x_31_);
lean_ctor_set(v___x_22_, 0, v___y_28_);
v___x_33_ = v___x_22_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_34_, 0, v___y_28_);
lean_ctor_set(v_reuseFailAlloc_34_, 1, v___x_31_);
v___x_33_ = v_reuseFailAlloc_34_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*2, v___y_26_);
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*2 + 1, v___y_27_);
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*2 + 2, v___y_25_);
lean_ctor_set_uint8(v___x_33_, sizeof(void*)*2 + 3, v___y_30_);
return v___x_33_;
}
}
v___jp_35_:
{
if (v_noFallthrough_19_ == 0)
{
lean_object* v_numRegularExits_39_; uint8_t v_noFallthrough_40_; lean_object* v_reassigns_41_; 
v_numRegularExits_39_ = lean_ctor_get(v_b_15_, 0);
lean_inc(v_numRegularExits_39_);
v_noFallthrough_40_ = lean_ctor_get_uint8(v_b_15_, sizeof(void*)*2 + 3);
v_reassigns_41_ = lean_ctor_get(v_b_15_, 1);
lean_inc(v_reassigns_41_);
lean_dec_ref(v_b_15_);
v___y_25_ = v___y_38_;
v___y_26_ = v___y_36_;
v___y_27_ = v___y_37_;
v___y_28_ = v_numRegularExits_39_;
v___y_29_ = v_reassigns_41_;
v___y_30_ = v_noFallthrough_40_;
goto v___jp_24_;
}
else
{
lean_object* v_numRegularExits_42_; lean_object* v_reassigns_43_; 
v_numRegularExits_42_ = lean_ctor_get(v_b_15_, 0);
lean_inc(v_numRegularExits_42_);
v_reassigns_43_ = lean_ctor_get(v_b_15_, 1);
lean_inc(v_reassigns_43_);
lean_dec_ref(v_b_15_);
v___y_25_ = v___y_38_;
v___y_26_ = v___y_36_;
v___y_27_ = v___y_37_;
v___y_28_ = v_numRegularExits_42_;
v___y_29_ = v_reassigns_43_;
v___y_30_ = v_noFallthrough_19_;
goto v___jp_24_;
}
}
v___jp_44_:
{
if (v_returnsEarly_18_ == 0)
{
uint8_t v_returnsEarly_47_; 
v_returnsEarly_47_ = lean_ctor_get_uint8(v_b_15_, sizeof(void*)*2 + 2);
v___y_36_ = v___y_45_;
v___y_37_ = v___y_46_;
v___y_38_ = v_returnsEarly_47_;
goto v___jp_35_;
}
else
{
v___y_36_ = v___y_45_;
v___y_37_ = v___y_46_;
v___y_38_ = v_returnsEarly_18_;
goto v___jp_35_;
}
}
v___jp_48_:
{
if (v_continues_17_ == 0)
{
uint8_t v_continues_50_; 
v_continues_50_ = lean_ctor_get_uint8(v_b_15_, sizeof(void*)*2 + 1);
v___y_45_ = v___y_49_;
v___y_46_ = v_continues_50_;
goto v___jp_44_;
}
else
{
v___y_45_ = v___y_49_;
v___y_46_ = v_continues_17_;
goto v___jp_44_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_alternative(lean_object* v_a_54_, lean_object* v_b_55_){
_start:
{
lean_object* v___y_57_; lean_object* v___y_58_; uint8_t v___y_59_; lean_object* v___y_60_; uint8_t v___y_61_; uint8_t v___y_62_; uint8_t v___y_63_; uint8_t v_breaks_66_; uint8_t v_continues_67_; uint8_t v_returnsEarly_68_; lean_object* v_numRegularExits_69_; uint8_t v_noFallthrough_70_; lean_object* v_reassigns_71_; uint8_t v___y_73_; uint8_t v___y_74_; uint8_t v___y_75_; uint8_t v___y_81_; uint8_t v___y_82_; uint8_t v___y_85_; 
v_breaks_66_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*2);
v_continues_67_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*2 + 1);
v_returnsEarly_68_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*2 + 2);
v_numRegularExits_69_ = lean_ctor_get(v_a_54_, 0);
lean_inc(v_numRegularExits_69_);
v_noFallthrough_70_ = lean_ctor_get_uint8(v_a_54_, sizeof(void*)*2 + 3);
v_reassigns_71_ = lean_ctor_get(v_a_54_, 1);
lean_inc(v_reassigns_71_);
lean_dec_ref(v_a_54_);
if (v_breaks_66_ == 0)
{
uint8_t v_breaks_87_; 
v_breaks_87_ = lean_ctor_get_uint8(v_b_55_, sizeof(void*)*2);
v___y_85_ = v_breaks_87_;
goto v___jp_84_;
}
else
{
v___y_85_ = v_breaks_66_;
goto v___jp_84_;
}
v___jp_56_:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = l_Lean_NameSet_append(v___y_57_, v___y_60_);
v___x_65_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_65_, 0, v___y_58_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*2, v___y_59_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*2 + 1, v___y_62_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*2 + 2, v___y_61_);
lean_ctor_set_uint8(v___x_65_, sizeof(void*)*2 + 3, v___y_63_);
return v___x_65_;
}
v___jp_72_:
{
lean_object* v_numRegularExits_76_; uint8_t v_noFallthrough_77_; lean_object* v_reassigns_78_; lean_object* v___x_79_; 
v_numRegularExits_76_ = lean_ctor_get(v_b_55_, 0);
lean_inc(v_numRegularExits_76_);
v_noFallthrough_77_ = lean_ctor_get_uint8(v_b_55_, sizeof(void*)*2 + 3);
v_reassigns_78_ = lean_ctor_get(v_b_55_, 1);
lean_inc(v_reassigns_78_);
lean_dec_ref(v_b_55_);
v___x_79_ = lean_nat_add(v_numRegularExits_69_, v_numRegularExits_76_);
lean_dec(v_numRegularExits_76_);
lean_dec(v_numRegularExits_69_);
if (v_noFallthrough_70_ == 0)
{
v___y_57_ = v_reassigns_71_;
v___y_58_ = v___x_79_;
v___y_59_ = v___y_73_;
v___y_60_ = v_reassigns_78_;
v___y_61_ = v___y_75_;
v___y_62_ = v___y_74_;
v___y_63_ = v_noFallthrough_70_;
goto v___jp_56_;
}
else
{
v___y_57_ = v_reassigns_71_;
v___y_58_ = v___x_79_;
v___y_59_ = v___y_73_;
v___y_60_ = v_reassigns_78_;
v___y_61_ = v___y_75_;
v___y_62_ = v___y_74_;
v___y_63_ = v_noFallthrough_77_;
goto v___jp_56_;
}
}
v___jp_80_:
{
if (v_returnsEarly_68_ == 0)
{
uint8_t v_returnsEarly_83_; 
v_returnsEarly_83_ = lean_ctor_get_uint8(v_b_55_, sizeof(void*)*2 + 2);
v___y_73_ = v___y_81_;
v___y_74_ = v___y_82_;
v___y_75_ = v_returnsEarly_83_;
goto v___jp_72_;
}
else
{
v___y_73_ = v___y_81_;
v___y_74_ = v___y_82_;
v___y_75_ = v_returnsEarly_68_;
goto v___jp_72_;
}
}
v___jp_84_:
{
if (v_continues_67_ == 0)
{
uint8_t v_continues_86_; 
v_continues_86_ = lean_ctor_get_uint8(v_b_55_, sizeof(void*)*2 + 1);
v___y_81_ = v___y_85_;
v___y_82_ = v_continues_86_;
goto v___jp_80_;
}
else
{
v___y_81_ = v___y_85_;
v___y_82_ = v_continues_67_;
goto v___jp_80_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_ControlInfo_forLoop(lean_object* v_bodyInfo_88_){
_start:
{
uint8_t v_returnsEarly_89_; lean_object* v_reassigns_90_; lean_object* v___x_92_; uint8_t v_isShared_93_; uint8_t v_isSharedCheck_99_; 
v_returnsEarly_89_ = lean_ctor_get_uint8(v_bodyInfo_88_, sizeof(void*)*2 + 2);
v_reassigns_90_ = lean_ctor_get(v_bodyInfo_88_, 1);
v_isSharedCheck_99_ = !lean_is_exclusive(v_bodyInfo_88_);
if (v_isSharedCheck_99_ == 0)
{
lean_object* v_unused_100_; 
v_unused_100_ = lean_ctor_get(v_bodyInfo_88_, 0);
lean_dec(v_unused_100_);
v___x_92_ = v_bodyInfo_88_;
v_isShared_93_ = v_isSharedCheck_99_;
goto v_resetjp_91_;
}
else
{
lean_inc(v_reassigns_90_);
lean_dec(v_bodyInfo_88_);
v___x_92_ = lean_box(0);
v_isShared_93_ = v_isSharedCheck_99_;
goto v_resetjp_91_;
}
v_resetjp_91_:
{
uint8_t v___x_94_; lean_object* v___x_95_; lean_object* v___x_97_; 
v___x_94_ = 0;
v___x_95_ = lean_unsigned_to_nat(1u);
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 0, v___x_95_);
v___x_97_ = v___x_92_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v___x_95_);
lean_ctor_set(v_reuseFailAlloc_98_, 1, v_reassigns_90_);
lean_ctor_set_uint8(v_reuseFailAlloc_98_, sizeof(void*)*2 + 2, v_returnsEarly_89_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
lean_ctor_set_uint8(v___x_97_, sizeof(void*)*2, v___x_94_);
lean_ctor_set_uint8(v___x_97_, sizeof(void*)*2 + 1, v___x_94_);
lean_ctor_set_uint8(v___x_97_, sizeof(void*)*2 + 3, v___x_94_);
return v___x_97_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__0(lean_object* v_x1_101_, lean_object* v_x2_102_, lean_object* v_x3_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_104_, 0, v_x1_101_);
lean_ctor_set(v___x_104_, 1, v_x3_103_);
return v___x_104_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1(void){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__0));
v___x_107_ = l_Lean_stringToMessageData(v___x_106_);
return v___x_107_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__13));
v___x_130_ = l_Lean_stringToMessageData(v___x_129_);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__15));
v___x_133_ = l_Lean_stringToMessageData(v___x_132_);
return v___x_133_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__19));
v___x_138_ = l_Lean_stringToMessageData(v___x_137_);
return v___x_138_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_140_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__21));
v___x_141_ = l_Lean_stringToMessageData(v___x_140_);
return v___x_141_;
}
}
static lean_object* _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__23));
v___x_144_ = l_Lean_stringToMessageData(v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1(lean_object* v___f_145_, lean_object* v_info_146_){
_start:
{
lean_object* v___y_148_; lean_object* v___y_149_; lean_object* v___y_150_; uint8_t v_breaks_163_; uint8_t v_continues_164_; uint8_t v_returnsEarly_165_; lean_object* v_numRegularExits_166_; uint8_t v_noFallthrough_167_; lean_object* v_reassigns_168_; lean_object* v___y_170_; lean_object* v___y_171_; lean_object* v___y_186_; lean_object* v___y_187_; lean_object* v___x_195_; lean_object* v___y_197_; 
v_breaks_163_ = lean_ctor_get_uint8(v_info_146_, sizeof(void*)*2);
v_continues_164_ = lean_ctor_get_uint8(v_info_146_, sizeof(void*)*2 + 1);
v_returnsEarly_165_ = lean_ctor_get_uint8(v_info_146_, sizeof(void*)*2 + 2);
v_numRegularExits_166_ = lean_ctor_get(v_info_146_, 0);
lean_inc(v_numRegularExits_166_);
v_noFallthrough_167_ = lean_ctor_get_uint8(v_info_146_, sizeof(void*)*2 + 3);
v_reassigns_168_ = lean_ctor_get(v_info_146_, 1);
lean_inc(v_reassigns_168_);
lean_dec_ref(v_info_146_);
v___x_195_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__22);
if (v_breaks_163_ == 0)
{
lean_object* v___x_205_; 
v___x_205_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17));
v___y_197_ = v___x_205_;
goto v___jp_196_;
}
else
{
lean_object* v___x_206_; 
v___x_206_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18));
v___y_197_ = v___x_206_;
goto v___jp_196_;
}
v___jp_147_:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
lean_inc_ref(v___y_150_);
v___x_151_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_151_, 0, v___y_150_);
v___x_152_ = l_Lean_MessageData_ofFormat(v___x_151_);
v___x_153_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_153_, 0, v___y_148_);
lean_ctor_set(v___x_153_, 1, v___x_152_);
v___x_154_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__1);
v___x_155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_155_, 0, v___x_153_);
lean_ctor_set(v___x_155_, 1, v___x_154_);
v___x_156_ = lean_box(0);
v___x_157_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__11));
v___x_158_ = l_Std_DTreeMap_Internal_Impl_foldrM___redArg(v___x_157_, v___f_145_, v___x_156_, v___y_149_);
v___x_159_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__12));
v___x_160_ = l_List_mapTR_loop___redArg(v___x_159_, v___x_158_, v___x_156_);
v___x_161_ = l_Lean_MessageData_ofList(v___x_160_);
v___x_162_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_155_);
lean_ctor_set(v___x_162_, 1, v___x_161_);
return v___x_162_;
}
v___jp_169_:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
lean_inc_ref(v___y_171_);
v___x_172_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_172_, 0, v___y_171_);
v___x_173_ = l_Lean_MessageData_ofFormat(v___x_172_);
v___x_174_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_174_, 0, v___y_170_);
lean_ctor_set(v___x_174_, 1, v___x_173_);
v___x_175_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__14);
v___x_176_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_176_, 0, v___x_174_);
lean_ctor_set(v___x_176_, 1, v___x_175_);
v___x_177_ = l_Nat_reprFast(v_numRegularExits_166_);
v___x_178_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
v___x_179_ = l_Lean_MessageData_ofFormat(v___x_178_);
v___x_180_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_180_, 0, v___x_176_);
lean_ctor_set(v___x_180_, 1, v___x_179_);
v___x_181_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__16);
v___x_182_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_180_);
lean_ctor_set(v___x_182_, 1, v___x_181_);
if (v_noFallthrough_167_ == 0)
{
lean_object* v___x_183_; 
v___x_183_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17));
v___y_148_ = v___x_182_;
v___y_149_ = v_reassigns_168_;
v___y_150_ = v___x_183_;
goto v___jp_147_;
}
else
{
lean_object* v___x_184_; 
v___x_184_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18));
v___y_148_ = v___x_182_;
v___y_149_ = v_reassigns_168_;
v___y_150_ = v___x_184_;
goto v___jp_147_;
}
}
v___jp_185_:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
lean_inc_ref(v___y_187_);
v___x_188_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_188_, 0, v___y_187_);
v___x_189_ = l_Lean_MessageData_ofFormat(v___x_188_);
v___x_190_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_190_, 0, v___y_186_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
v___x_191_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__20);
v___x_192_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_190_);
lean_ctor_set(v___x_192_, 1, v___x_191_);
if (v_returnsEarly_165_ == 0)
{
lean_object* v___x_193_; 
v___x_193_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17));
v___y_170_ = v___x_192_;
v___y_171_ = v___x_193_;
goto v___jp_169_;
}
else
{
lean_object* v___x_194_; 
v___x_194_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18));
v___y_170_ = v___x_192_;
v___y_171_ = v___x_194_;
goto v___jp_169_;
}
}
v___jp_196_:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
lean_inc_ref(v___y_197_);
v___x_198_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_198_, 0, v___y_197_);
v___x_199_ = l_Lean_MessageData_ofFormat(v___x_198_);
v___x_200_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_200_, 0, v___x_195_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
v___x_201_ = lean_obj_once(&l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24, &l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24_once, _init_l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__24);
v___x_202_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_200_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
if (v_continues_164_ == 0)
{
lean_object* v___x_203_; 
v___x_203_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__17));
v___y_186_ = v___x_202_;
v___y_187_ = v___x_203_;
goto v___jp_185_;
}
else
{
lean_object* v___x_204_; 
v___x_204_ = ((lean_object*)(l_Lean_Elab_Do_instToMessageDataControlInfo___lam__1___closed__18));
v___y_186_ = v___x_202_;
v___y_187_ = v___x_204_;
goto v___jp_185_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(lean_object* v_ref_235_){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_237_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__1));
v___x_238_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__3));
v___x_239_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__8));
v___x_240_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__12));
v___x_241_ = ((lean_object*)(l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___closed__13));
v___x_242_ = l_Lean_Elab_mkElabAttribute___redArg(v___x_237_, v___x_238_, v___x_239_, v___x_240_, v___x_241_, v_ref_235_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe___boxed(lean_object* v_ref_243_, lean_object* v_a_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(v_ref_243_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_253_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_));
v___x_254_ = l_Lean_Elab_Do_mkControlInfoElemAttributeUnsafe(v___x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2____boxed(lean_object* v_a_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_();
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1(){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_259_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_));
v___x_260_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___closed__0));
v___x_261_ = l_Lean_addBuiltinDocString(v___x_259_, v___x_260_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1___boxed(lean_object* v_a_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1();
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3(){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_290_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn___closed__1_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_));
v___x_291_ = ((lean_object*)(l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___closed__6));
v___x_292_ = l_Lean_addBuiltinDeclarationRanges(v___x_290_, v___x_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3___boxed(lean_object* v_a_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3();
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(lean_object* v_msgData_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
lean_object* v___x_301_; lean_object* v_env_302_; uint8_t v___x_303_; lean_object* v_env_304_; lean_object* v___x_305_; lean_object* v_toCold_306_; lean_object* v_mctx_307_; lean_object* v_lctx_308_; lean_object* v_options_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_301_ = lean_st_ref_get(v___y_299_);
v_env_302_ = lean_ctor_get(v___x_301_, 0);
lean_inc_ref(v_env_302_);
lean_dec(v___x_301_);
v___x_303_ = 0;
v_env_304_ = l_Lean_Environment_setRecordingDeps(v_env_302_, v___x_303_);
v___x_305_ = lean_st_ref_get(v___y_297_);
v_toCold_306_ = lean_ctor_get(v___y_298_, 0);
v_mctx_307_ = lean_ctor_get(v___x_305_, 0);
lean_inc_ref(v_mctx_307_);
lean_dec(v___x_305_);
v_lctx_308_ = lean_ctor_get(v___y_296_, 2);
v_options_309_ = lean_ctor_get(v_toCold_306_, 2);
lean_inc_ref(v_options_309_);
lean_inc_ref(v_lctx_308_);
v___x_310_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_310_, 0, v_env_304_);
lean_ctor_set(v___x_310_, 1, v_mctx_307_);
lean_ctor_set(v___x_310_, 2, v_lctx_308_);
lean_ctor_set(v___x_310_, 3, v_options_309_);
v___x_311_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
lean_ctor_set(v___x_311_, 1, v_msgData_295_);
v___x_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10___boxed(lean_object* v_msgData_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(v_msgData_313_, v___y_314_, v___y_315_, v___y_316_, v___y_317_);
lean_dec(v___y_317_);
lean_dec_ref(v___y_316_);
lean_dec(v___y_315_);
lean_dec_ref(v___y_314_);
return v_res_319_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = lean_box(1);
v___x_321_ = l_Lean_MessageData_ofFormat(v___x_320_);
return v___x_321_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3(void){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__2));
v___x_326_ = l_Lean_MessageData_ofFormat(v___x_325_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20(lean_object* v_x_327_, lean_object* v_x_328_){
_start:
{
if (lean_obj_tag(v_x_328_) == 0)
{
return v_x_327_;
}
else
{
lean_object* v_head_329_; lean_object* v_tail_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_352_; 
v_head_329_ = lean_ctor_get(v_x_328_, 0);
v_tail_330_ = lean_ctor_get(v_x_328_, 1);
v_isSharedCheck_352_ = !lean_is_exclusive(v_x_328_);
if (v_isSharedCheck_352_ == 0)
{
v___x_332_ = v_x_328_;
v_isShared_333_ = v_isSharedCheck_352_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_tail_330_);
lean_inc(v_head_329_);
lean_dec(v_x_328_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_352_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v_before_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_350_; 
v_before_334_ = lean_ctor_get(v_head_329_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v_head_329_);
if (v_isSharedCheck_350_ == 0)
{
lean_object* v_unused_351_; 
v_unused_351_ = lean_ctor_get(v_head_329_, 1);
lean_dec(v_unused_351_);
v___x_336_ = v_head_329_;
v_isShared_337_ = v_isSharedCheck_350_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_before_334_);
lean_dec(v_head_329_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_350_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_338_; lean_object* v___x_340_; 
v___x_338_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0);
if (v_isShared_337_ == 0)
{
lean_ctor_set_tag(v___x_336_, 7);
lean_ctor_set(v___x_336_, 1, v___x_338_);
lean_ctor_set(v___x_336_, 0, v_x_327_);
v___x_340_ = v___x_336_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v_x_327_);
lean_ctor_set(v_reuseFailAlloc_349_, 1, v___x_338_);
v___x_340_ = v_reuseFailAlloc_349_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v___x_341_; lean_object* v___x_343_; 
v___x_341_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__3);
if (v_isShared_333_ == 0)
{
lean_ctor_set_tag(v___x_332_, 7);
lean_ctor_set(v___x_332_, 1, v___x_341_);
lean_ctor_set(v___x_332_, 0, v___x_340_);
v___x_343_ = v___x_332_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v___x_340_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v___x_341_);
v___x_343_ = v_reuseFailAlloc_348_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_344_ = l_Lean_MessageData_ofSyntax(v_before_334_);
v___x_345_ = l_Lean_indentD(v___x_344_);
v___x_346_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_346_, 0, v___x_343_);
lean_ctor_set(v___x_346_, 1, v___x_345_);
v_x_327_ = v___x_346_;
v_x_328_ = v_tail_330_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19(lean_object* v_opts_353_, lean_object* v_opt_354_){
_start:
{
lean_object* v_name_355_; lean_object* v_defValue_356_; lean_object* v_map_357_; lean_object* v___x_358_; 
v_name_355_ = lean_ctor_get(v_opt_354_, 0);
v_defValue_356_ = lean_ctor_get(v_opt_354_, 1);
v_map_357_ = lean_ctor_get(v_opts_353_, 0);
v___x_358_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_357_, v_name_355_);
if (lean_obj_tag(v___x_358_) == 0)
{
uint8_t v___x_359_; 
v___x_359_ = lean_unbox(v_defValue_356_);
return v___x_359_;
}
else
{
lean_object* v_val_360_; 
v_val_360_ = lean_ctor_get(v___x_358_, 0);
lean_inc(v_val_360_);
lean_dec_ref_known(v___x_358_, 1);
if (lean_obj_tag(v_val_360_) == 1)
{
uint8_t v_v_361_; 
v_v_361_ = lean_ctor_get_uint8(v_val_360_, 0);
lean_dec_ref_known(v_val_360_, 0);
return v_v_361_;
}
else
{
uint8_t v___x_362_; 
lean_dec(v_val_360_);
v___x_362_ = lean_unbox(v_defValue_356_);
return v___x_362_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19___boxed(lean_object* v_opts_363_, lean_object* v_opt_364_){
_start:
{
uint8_t v_res_365_; lean_object* v_r_366_; 
v_res_365_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19(v_opts_363_, v_opt_364_);
lean_dec_ref(v_opt_364_);
lean_dec_ref(v_opts_363_);
v_r_366_ = lean_box(v_res_365_);
return v_r_366_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__1));
v___x_371_ = l_Lean_MessageData_ofFormat(v___x_370_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(lean_object* v_msgData_372_, lean_object* v_macroStack_373_, lean_object* v___y_374_){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; uint8_t v___x_378_; 
v___x_376_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_374_);
v___x_377_ = l_Lean_Elab_pp_macroStack;
v___x_378_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__19(v___x_376_, v___x_377_);
lean_dec_ref(v___x_376_);
if (v___x_378_ == 0)
{
lean_object* v___x_379_; 
lean_dec(v_macroStack_373_);
v___x_379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_379_, 0, v_msgData_372_);
return v___x_379_;
}
else
{
if (lean_obj_tag(v_macroStack_373_) == 0)
{
lean_object* v___x_380_; 
v___x_380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_380_, 0, v_msgData_372_);
return v___x_380_;
}
else
{
lean_object* v_head_381_; lean_object* v_after_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_397_; 
v_head_381_ = lean_ctor_get(v_macroStack_373_, 0);
lean_inc(v_head_381_);
v_after_382_ = lean_ctor_get(v_head_381_, 1);
v_isSharedCheck_397_ = !lean_is_exclusive(v_head_381_);
if (v_isSharedCheck_397_ == 0)
{
lean_object* v_unused_398_; 
v_unused_398_ = lean_ctor_get(v_head_381_, 0);
lean_dec(v_unused_398_);
v___x_384_ = v_head_381_;
v_isShared_385_ = v_isSharedCheck_397_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_after_382_);
lean_dec(v_head_381_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_397_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_386_; lean_object* v___x_388_; 
v___x_386_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20___closed__0);
if (v_isShared_385_ == 0)
{
lean_ctor_set_tag(v___x_384_, 7);
lean_ctor_set(v___x_384_, 1, v___x_386_);
lean_ctor_set(v___x_384_, 0, v_msgData_372_);
v___x_388_ = v___x_384_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_msgData_372_);
lean_ctor_set(v_reuseFailAlloc_396_, 1, v___x_386_);
v___x_388_ = v_reuseFailAlloc_396_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v_msgData_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_389_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___closed__2);
v___x_390_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_390_, 0, v___x_388_);
lean_ctor_set(v___x_390_, 1, v___x_389_);
v___x_391_ = l_Lean_MessageData_ofSyntax(v_after_382_);
v___x_392_ = l_Lean_indentD(v___x_391_);
v_msgData_393_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_393_, 0, v___x_390_);
lean_ctor_set(v_msgData_393_, 1, v___x_392_);
v___x_394_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11_spec__20(v_msgData_393_, v_macroStack_373_);
v___x_395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
return v___x_395_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg___boxed(lean_object* v_msgData_399_, lean_object* v_macroStack_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(v_msgData_399_, v_macroStack_400_, v___y_401_);
lean_dec_ref(v___y_401_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(lean_object* v_msg_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
lean_object* v_ref_412_; lean_object* v_macroStack_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v_a_416_; lean_object* v___x_417_; lean_object* v_a_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_426_; 
v_ref_412_ = lean_ctor_get(v___y_409_, 2);
v_macroStack_413_ = lean_ctor_get(v___y_405_, 1);
v___x_414_ = l_Lean_Elab_getBetterRef(v_ref_412_, v_macroStack_413_);
v___x_415_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(v_msg_404_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
v_a_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc(v_a_416_);
lean_dec_ref(v___x_415_);
lean_inc(v_macroStack_413_);
v___x_417_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(v_a_416_, v_macroStack_413_, v___y_409_);
v_a_418_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_426_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_426_ == 0)
{
v___x_420_ = v___x_417_;
v_isShared_421_ = v_isSharedCheck_426_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_a_418_);
lean_dec(v___x_417_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_426_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_422_; lean_object* v___x_424_; 
v___x_422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_422_, 0, v___x_414_);
lean_ctor_set(v___x_422_, 1, v_a_418_);
if (v_isShared_421_ == 0)
{
lean_ctor_set_tag(v___x_420_, 1);
lean_ctor_set(v___x_420_, 0, v___x_422_);
v___x_424_ = v___x_420_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v___x_422_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg___boxed(lean_object* v_msg_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_msg_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
lean_dec(v___y_433_);
lean_dec_ref(v___y_432_);
lean_dec(v___y_431_);
lean_dec_ref(v___y_430_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(lean_object* v_as_436_, size_t v_i_437_, size_t v_stop_438_, lean_object* v_b_439_){
_start:
{
uint8_t v___x_440_; 
v___x_440_ = lean_usize_dec_eq(v_i_437_, v_stop_438_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; lean_object* v___x_442_; size_t v___x_443_; size_t v___x_444_; 
v___x_441_ = lean_array_uget_borrowed(v_as_436_, v_i_437_);
lean_inc(v___x_441_);
v___x_442_ = l_Lean_NameSet_insert(v_b_439_, v___x_441_);
v___x_443_ = ((size_t)1ULL);
v___x_444_ = lean_usize_add(v_i_437_, v___x_443_);
v_i_437_ = v___x_444_;
v_b_439_ = v___x_442_;
goto _start;
}
else
{
return v_b_439_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21___boxed(lean_object* v_as_446_, lean_object* v_i_447_, lean_object* v_stop_448_, lean_object* v_b_449_){
_start:
{
size_t v_i_boxed_450_; size_t v_stop_boxed_451_; lean_object* v_res_452_; 
v_i_boxed_450_ = lean_unbox_usize(v_i_447_);
lean_dec(v_i_447_);
v_stop_boxed_451_ = lean_unbox_usize(v_stop_448_);
lean_dec(v_stop_448_);
v_res_452_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(v_as_446_, v_i_boxed_450_, v_stop_boxed_451_, v_b_449_);
lean_dec_ref(v_as_446_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20(size_t v_sz_453_, size_t v_i_454_, lean_object* v_bs_455_){
_start:
{
uint8_t v___x_456_; 
v___x_456_ = lean_usize_dec_lt(v_i_454_, v_sz_453_);
if (v___x_456_ == 0)
{
return v_bs_455_;
}
else
{
lean_object* v_v_457_; lean_object* v___x_458_; lean_object* v_bs_x27_459_; lean_object* v___x_460_; size_t v___x_461_; size_t v___x_462_; lean_object* v___x_463_; 
v_v_457_ = lean_array_uget(v_bs_455_, v_i_454_);
v___x_458_ = lean_unsigned_to_nat(0u);
v_bs_x27_459_ = lean_array_uset(v_bs_455_, v_i_454_, v___x_458_);
v___x_460_ = l_Lean_TSyntax_getId(v_v_457_);
lean_dec(v_v_457_);
v___x_461_ = ((size_t)1ULL);
v___x_462_ = lean_usize_add(v_i_454_, v___x_461_);
v___x_463_ = lean_array_uset(v_bs_x27_459_, v_i_454_, v___x_460_);
v_i_454_ = v___x_462_;
v_bs_455_ = v___x_463_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20___boxed(lean_object* v_sz_465_, lean_object* v_i_466_, lean_object* v_bs_467_){
_start:
{
size_t v_sz_boxed_468_; size_t v_i_boxed_469_; lean_object* v_res_470_; 
v_sz_boxed_468_ = lean_unbox_usize(v_sz_465_);
lean_dec(v_sz_465_);
v_i_boxed_469_ = lean_unbox_usize(v_i_466_);
lean_dec(v_i_466_);
v_res_470_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20(v_sz_boxed_468_, v_i_boxed_469_, v_bs_467_);
return v_res_470_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_471_ = lean_box(0);
v___x_472_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
lean_ctor_set(v___x_473_, 1, v___x_471_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg(){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___closed__0);
v___x_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg___boxed(lean_object* v___y_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(size_t v_sz_479_, size_t v_i_480_, lean_object* v_bs_481_){
_start:
{
uint8_t v___x_482_; 
v___x_482_ = lean_usize_dec_lt(v_i_480_, v_sz_479_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; 
v___x_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_483_, 0, v_bs_481_);
return v___x_483_;
}
else
{
lean_object* v___x_484_; lean_object* v_bs_x27_485_; lean_object* v___x_486_; size_t v___x_487_; size_t v___x_488_; lean_object* v___x_489_; 
v___x_484_ = lean_unsigned_to_nat(0u);
v_bs_x27_485_ = lean_array_uset(v_bs_481_, v_i_480_, v___x_484_);
v___x_486_ = lean_box(0);
v___x_487_ = ((size_t)1ULL);
v___x_488_ = lean_usize_add(v_i_480_, v___x_487_);
v___x_489_ = lean_array_uset(v_bs_x27_485_, v_i_480_, v___x_486_);
v_i_480_ = v___x_488_;
v_bs_481_ = v___x_489_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7___boxed(lean_object* v_sz_491_, lean_object* v_i_492_, lean_object* v_bs_493_){
_start:
{
size_t v_sz_boxed_494_; size_t v_i_boxed_495_; lean_object* v_res_496_; 
v_sz_boxed_494_ = lean_unbox_usize(v_sz_491_);
lean_dec(v_sz_491_);
v_i_boxed_495_ = lean_unbox_usize(v_i_492_);
lean_dec(v_i_492_);
v_res_496_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(v_sz_boxed_494_, v_i_boxed_495_, v_bs_493_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(uint8_t v___x_497_, uint8_t v___x_498_, lean_object* v_as_499_, size_t v_i_500_, size_t v_stop_501_, lean_object* v_b_502_){
_start:
{
lean_object* v___y_504_; uint8_t v___x_508_; 
v___x_508_ = lean_usize_dec_eq(v_i_500_, v_stop_501_);
if (v___x_508_ == 0)
{
lean_object* v_fst_509_; uint8_t v___x_510_; 
v_fst_509_ = lean_ctor_get(v_b_502_, 0);
v___x_510_ = lean_unbox(v_fst_509_);
if (v___x_510_ == 0)
{
lean_object* v_snd_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_519_; 
v_snd_511_ = lean_ctor_get(v_b_502_, 1);
v_isSharedCheck_519_ = !lean_is_exclusive(v_b_502_);
if (v_isSharedCheck_519_ == 0)
{
lean_object* v_unused_520_; 
v_unused_520_ = lean_ctor_get(v_b_502_, 0);
lean_dec(v_unused_520_);
v___x_513_ = v_b_502_;
v_isShared_514_ = v_isSharedCheck_519_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_snd_511_);
lean_dec(v_b_502_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_519_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_515_; lean_object* v___x_517_; 
v___x_515_ = lean_box(v___x_497_);
if (v_isShared_514_ == 0)
{
lean_ctor_set(v___x_513_, 0, v___x_515_);
v___x_517_ = v___x_513_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v___x_515_);
lean_ctor_set(v_reuseFailAlloc_518_, 1, v_snd_511_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
v___y_504_ = v___x_517_;
goto v___jp_503_;
}
}
}
else
{
lean_object* v_snd_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_531_; 
v_snd_521_ = lean_ctor_get(v_b_502_, 1);
v_isSharedCheck_531_ = !lean_is_exclusive(v_b_502_);
if (v_isSharedCheck_531_ == 0)
{
lean_object* v_unused_532_; 
v_unused_532_ = lean_ctor_get(v_b_502_, 0);
lean_dec(v_unused_532_);
v___x_523_ = v_b_502_;
v_isShared_524_ = v_isSharedCheck_531_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_snd_521_);
lean_dec(v_b_502_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_531_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_529_; 
v___x_525_ = lean_array_uget_borrowed(v_as_499_, v_i_500_);
lean_inc(v___x_525_);
v___x_526_ = lean_array_push(v_snd_521_, v___x_525_);
v___x_527_ = lean_box(v___x_498_);
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 1, v___x_526_);
lean_ctor_set(v___x_523_, 0, v___x_527_);
v___x_529_ = v___x_523_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_527_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v___x_526_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
v___y_504_ = v___x_529_;
goto v___jp_503_;
}
}
}
}
else
{
return v_b_502_;
}
v___jp_503_:
{
size_t v___x_505_; size_t v___x_506_; 
v___x_505_ = ((size_t)1ULL);
v___x_506_ = lean_usize_add(v_i_500_, v___x_505_);
v_i_500_ = v___x_506_;
v_b_502_ = v___y_504_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9___boxed(lean_object* v___x_533_, lean_object* v___x_534_, lean_object* v_as_535_, lean_object* v_i_536_, lean_object* v_stop_537_, lean_object* v_b_538_){
_start:
{
uint8_t v___x_187186__boxed_539_; uint8_t v___x_187187__boxed_540_; size_t v_i_boxed_541_; size_t v_stop_boxed_542_; lean_object* v_res_543_; 
v___x_187186__boxed_539_ = lean_unbox(v___x_533_);
v___x_187187__boxed_540_ = lean_unbox(v___x_534_);
v_i_boxed_541_ = lean_unbox_usize(v_i_536_);
lean_dec(v_i_536_);
v_stop_boxed_542_ = lean_unbox_usize(v_stop_537_);
lean_dec(v_stop_537_);
v_res_543_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v___x_187186__boxed_539_, v___x_187187__boxed_540_, v_as_535_, v_i_boxed_541_, v_stop_boxed_542_, v_b_538_);
lean_dec_ref(v_as_535_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(lean_object* v_x_544_, lean_object* v___y_545_){
_start:
{
if (lean_obj_tag(v_x_544_) == 0)
{
lean_object* v_a_546_; lean_object* v___x_547_; 
v_a_546_ = lean_ctor_get(v_x_544_, 0);
lean_inc(v_a_546_);
v___x_547_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_547_, 0, v_a_546_);
lean_ctor_set(v___x_547_, 1, v___y_545_);
return v___x_547_;
}
else
{
lean_object* v_a_548_; lean_object* v___x_549_; 
v_a_548_ = lean_ctor_get(v_x_544_, 0);
lean_inc(v_a_548_);
v___x_549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_549_, 0, v_a_548_);
lean_ctor_set(v___x_549_, 1, v___y_545_);
return v___x_549_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg___boxed(lean_object* v_x_550_, lean_object* v___y_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v_x_550_, v___y_551_);
lean_dec_ref(v_x_550_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1(lean_object* v_env_553_, lean_object* v_stx_554_, lean_object* v___y_555_, lean_object* v___y_556_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_553_, v_stx_554_, v___y_555_, v___y_556_);
if (lean_obj_tag(v___x_557_) == 0)
{
lean_object* v_a_558_; 
v_a_558_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_a_558_);
if (lean_obj_tag(v_a_558_) == 0)
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_567_; 
v_a_559_ = lean_ctor_get(v___x_557_, 1);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_567_ == 0)
{
lean_object* v_unused_568_; 
v_unused_568_ = lean_ctor_get(v___x_557_, 0);
lean_dec(v_unused_568_);
v___x_561_ = v___x_557_;
v_isShared_562_ = v_isSharedCheck_567_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_557_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_567_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_563_; lean_object* v___x_565_; 
v___x_563_ = lean_box(0);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v___x_563_);
v___x_565_ = v___x_561_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v___x_563_);
lean_ctor_set(v_reuseFailAlloc_566_, 1, v_a_559_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
else
{
lean_object* v_val_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_597_; 
v_val_569_ = lean_ctor_get(v_a_558_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v_a_558_);
if (v_isSharedCheck_597_ == 0)
{
v___x_571_ = v_a_558_;
v_isShared_572_ = v_isSharedCheck_597_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_val_569_);
lean_dec(v_a_558_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_597_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v_snd_573_; 
v_snd_573_ = lean_ctor_get(v_val_569_, 1);
lean_inc(v_snd_573_);
lean_dec(v_val_569_);
if (lean_obj_tag(v_snd_573_) == 0)
{
lean_object* v_a_574_; lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_583_; 
lean_del_object(v___x_571_);
v_a_574_ = lean_ctor_get(v___x_557_, 1);
lean_inc(v_a_574_);
lean_dec_ref_known(v___x_557_, 2);
v_a_575_ = lean_ctor_get(v_snd_573_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v_snd_573_);
if (v_isSharedCheck_583_ == 0)
{
v___x_577_ = v_snd_573_;
v_isShared_578_ = v_isSharedCheck_583_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v_snd_573_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_583_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_578_ == 0)
{
v___x_580_ = v___x_577_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_a_575_);
v___x_580_ = v_reuseFailAlloc_582_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
lean_object* v___x_581_; 
v___x_581_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v___x_580_, v_a_574_);
lean_dec_ref(v___x_580_);
return v___x_581_;
}
}
}
else
{
lean_object* v_a_584_; lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_596_; 
v_a_584_ = lean_ctor_get(v___x_557_, 1);
lean_inc(v_a_584_);
lean_dec_ref_known(v___x_557_, 2);
v_a_585_ = lean_ctor_get(v_snd_573_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v_snd_573_);
if (v_isSharedCheck_596_ == 0)
{
v___x_587_ = v_snd_573_;
v_isShared_588_ = v_isSharedCheck_596_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v_snd_573_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_596_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 0, v_a_585_);
v___x_590_ = v___x_571_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_a_585_);
v___x_590_ = v_reuseFailAlloc_595_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
lean_object* v___x_592_; 
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 0, v___x_590_);
v___x_592_ = v___x_587_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v___x_590_);
v___x_592_ = v_reuseFailAlloc_594_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
lean_object* v___x_593_; 
v___x_593_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v___x_592_, v_a_584_);
lean_dec_ref(v___x_592_);
return v___x_593_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_598_; lean_object* v_a_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_606_; 
v_a_598_ = lean_ctor_get(v___x_557_, 0);
v_a_599_ = lean_ctor_get(v___x_557_, 1);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_606_ == 0)
{
v___x_601_ = v___x_557_;
v_isShared_602_ = v_isSharedCheck_606_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_a_599_);
lean_inc(v_a_598_);
lean_dec(v___x_557_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_606_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_604_; 
if (v_isShared_602_ == 0)
{
v___x_604_ = v___x_601_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_a_598_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v_a_599_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1___boxed(lean_object* v_env_607_, lean_object* v_stx_608_, lean_object* v___y_609_, lean_object* v___y_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1(v_env_607_, v_stx_608_, v___y_609_, v___y_610_);
lean_dec_ref(v___y_609_);
return v_res_611_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = l_Lean_maxRecDepthErrorMessage;
v___x_618_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
return v___x_618_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4(void){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_619_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__3);
v___x_620_ = l_Lean_MessageData_ofFormat(v___x_619_);
return v___x_620_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_621_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__4);
v___x_622_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__2));
v___x_623_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_623_, 0, v___x_622_);
lean_ctor_set(v___x_623_, 1, v___x_621_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(lean_object* v_ref_624_){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_626_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___closed__5);
v___x_627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_627_, 0, v_ref_624_);
lean_ctor_set(v___x_627_, 1, v___x_626_);
v___x_628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg___boxed(lean_object* v_ref_629_, lean_object* v___y_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(v_ref_629_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0(lean_object* v_env_632_, lean_object* v_declName_633_, lean_object* v___y_634_, lean_object* v___y_635_){
_start:
{
uint8_t v___x_636_; lean_object* v_env_637_; lean_object* v___x_638_; uint8_t v___x_639_; uint8_t v___x_640_; 
v___x_636_ = 0;
v_env_637_ = l_Lean_Environment_setExporting(v_env_632_, v___x_636_);
lean_inc(v_declName_633_);
v___x_638_ = l_Lean_mkPrivateName(v_env_637_, v_declName_633_);
v___x_639_ = 1;
lean_inc_ref(v_env_637_);
v___x_640_ = l_Lean_Environment_contains(v_env_637_, v___x_638_, v___x_639_);
if (v___x_640_ == 0)
{
lean_object* v___x_641_; uint8_t v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_641_ = l_Lean_privateToUserName(v_declName_633_);
v___x_642_ = l_Lean_Environment_contains(v_env_637_, v___x_641_, v___x_639_);
v___x_643_ = lean_box(v___x_642_);
v___x_644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
lean_ctor_set(v___x_644_, 1, v___y_635_);
return v___x_644_;
}
else
{
lean_object* v___x_645_; lean_object* v___x_646_; 
lean_dec_ref(v_env_637_);
lean_dec(v_declName_633_);
v___x_645_ = lean_box(v___x_640_);
v___x_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
lean_ctor_set(v___x_646_, 1, v___y_635_);
return v___x_646_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0___boxed(lean_object* v_env_647_, lean_object* v_declName_648_, lean_object* v___y_649_, lean_object* v___y_650_){
_start:
{
lean_object* v_res_651_; 
v_res_651_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0(v_env_647_, v_declName_648_, v___y_649_, v___y_650_);
lean_dec_ref(v___y_649_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(lean_object* v_ref_652_, lean_object* v_msg_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_){
_start:
{
lean_object* v_toCold_661_; lean_object* v_currRecDepth_662_; lean_object* v_ref_663_; uint16_t v_optionFlags_664_; uint8_t v_suppressElabErrors_665_; uint8_t v_checkDeprecated_666_; uint8_t v_isRecordingDeps_667_; lean_object* v_ref_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v_toCold_661_ = lean_ctor_get(v___y_658_, 0);
v_currRecDepth_662_ = lean_ctor_get(v___y_658_, 1);
v_ref_663_ = lean_ctor_get(v___y_658_, 2);
v_optionFlags_664_ = lean_ctor_get_uint16(v___y_658_, sizeof(void*)*3);
v_suppressElabErrors_665_ = lean_ctor_get_uint8(v___y_658_, sizeof(void*)*3 + 2);
v_checkDeprecated_666_ = lean_ctor_get_uint8(v___y_658_, sizeof(void*)*3 + 3);
v_isRecordingDeps_667_ = lean_ctor_get_uint8(v___y_658_, sizeof(void*)*3 + 4);
v_ref_668_ = l_Lean_replaceRef(v_ref_652_, v_ref_663_);
lean_inc(v_currRecDepth_662_);
lean_inc_ref(v_toCold_661_);
v___x_669_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_669_, 0, v_toCold_661_);
lean_ctor_set(v___x_669_, 1, v_currRecDepth_662_);
lean_ctor_set(v___x_669_, 2, v_ref_668_);
lean_ctor_set_uint16(v___x_669_, sizeof(void*)*3, v_optionFlags_664_);
lean_ctor_set_uint8(v___x_669_, sizeof(void*)*3 + 2, v_suppressElabErrors_665_);
lean_ctor_set_uint8(v___x_669_, sizeof(void*)*3 + 3, v_checkDeprecated_666_);
lean_ctor_set_uint8(v___x_669_, sizeof(void*)*3 + 4, v_isRecordingDeps_667_);
v___x_670_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_msg_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___x_669_, v___y_659_);
lean_dec_ref_known(v___x_669_, 3);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg___boxed(lean_object* v_ref_671_, lean_object* v_msg_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(v_ref_671_, v_msg_672_, v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_);
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec(v___y_676_);
lean_dec_ref(v___y_675_);
lean_dec(v___y_674_);
lean_dec_ref(v___y_673_);
lean_dec(v_ref_671_);
return v_res_680_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_681_; double v___x_682_; 
v___x_681_ = lean_unsigned_to_nat(0u);
v___x_682_ = lean_float_of_nat(v___x_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(lean_object* v_cls_686_, lean_object* v_msg_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
lean_object* v_ref_693_; lean_object* v___x_694_; lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_740_; 
v_ref_693_ = lean_ctor_get(v___y_690_, 2);
v___x_694_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__10(v_msg_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
v_a_695_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_740_ == 0)
{
v___x_697_ = v___x_694_;
v_isShared_698_ = v_isSharedCheck_740_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_694_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_740_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_699_; lean_object* v_traceState_700_; lean_object* v_env_701_; lean_object* v_nextMacroScope_702_; lean_object* v_ngen_703_; lean_object* v_auxDeclNGen_704_; lean_object* v_cache_705_; lean_object* v_recordedDeps_706_; lean_object* v_messages_707_; lean_object* v_infoState_708_; lean_object* v_snapshotTasks_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_739_; 
v___x_699_ = lean_st_ref_take(v___y_691_);
v_traceState_700_ = lean_ctor_get(v___x_699_, 4);
v_env_701_ = lean_ctor_get(v___x_699_, 0);
v_nextMacroScope_702_ = lean_ctor_get(v___x_699_, 1);
v_ngen_703_ = lean_ctor_get(v___x_699_, 2);
v_auxDeclNGen_704_ = lean_ctor_get(v___x_699_, 3);
v_cache_705_ = lean_ctor_get(v___x_699_, 5);
v_recordedDeps_706_ = lean_ctor_get(v___x_699_, 6);
v_messages_707_ = lean_ctor_get(v___x_699_, 7);
v_infoState_708_ = lean_ctor_get(v___x_699_, 8);
v_snapshotTasks_709_ = lean_ctor_get(v___x_699_, 9);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_739_ == 0)
{
v___x_711_ = v___x_699_;
v_isShared_712_ = v_isSharedCheck_739_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_snapshotTasks_709_);
lean_inc(v_infoState_708_);
lean_inc(v_messages_707_);
lean_inc(v_recordedDeps_706_);
lean_inc(v_cache_705_);
lean_inc(v_traceState_700_);
lean_inc(v_auxDeclNGen_704_);
lean_inc(v_ngen_703_);
lean_inc(v_nextMacroScope_702_);
lean_inc(v_env_701_);
lean_dec(v___x_699_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_739_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
uint64_t v_tid_713_; lean_object* v_traces_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_738_; 
v_tid_713_ = lean_ctor_get_uint64(v_traceState_700_, sizeof(void*)*1);
v_traces_714_ = lean_ctor_get(v_traceState_700_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v_traceState_700_);
if (v_isSharedCheck_738_ == 0)
{
v___x_716_ = v_traceState_700_;
v_isShared_717_ = v_isSharedCheck_738_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_traces_714_);
lean_dec(v_traceState_700_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_738_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_718_; lean_object* v___x_719_; double v___x_720_; uint8_t v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_729_; 
v___x_718_ = lean_box(0);
v___x_719_ = lean_box(0);
v___x_720_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__0);
v___x_721_ = 0;
v___x_722_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1));
v___x_723_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_723_, 0, v_cls_686_);
lean_ctor_set(v___x_723_, 1, v___x_719_);
lean_ctor_set(v___x_723_, 2, v___x_722_);
lean_ctor_set_float(v___x_723_, sizeof(void*)*3, v___x_720_);
lean_ctor_set_float(v___x_723_, sizeof(void*)*3 + 8, v___x_720_);
lean_ctor_set_uint8(v___x_723_, sizeof(void*)*3 + 16, v___x_721_);
v___x_724_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__2));
v___x_725_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_725_, 0, v___x_723_);
lean_ctor_set(v___x_725_, 1, v_a_695_);
lean_ctor_set(v___x_725_, 2, v___x_724_);
lean_inc(v_ref_693_);
v___x_726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_726_, 0, v_ref_693_);
lean_ctor_set(v___x_726_, 1, v___x_725_);
v___x_727_ = l_Lean_PersistentArray_push___redArg(v_traces_714_, v___x_726_);
if (v_isShared_717_ == 0)
{
lean_ctor_set(v___x_716_, 0, v___x_727_);
v___x_729_ = v___x_716_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_727_);
lean_ctor_set_uint64(v_reuseFailAlloc_737_, sizeof(void*)*1, v_tid_713_);
v___x_729_ = v_reuseFailAlloc_737_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
lean_object* v___x_731_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 4, v___x_729_);
v___x_731_ = v___x_711_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_env_701_);
lean_ctor_set(v_reuseFailAlloc_736_, 1, v_nextMacroScope_702_);
lean_ctor_set(v_reuseFailAlloc_736_, 2, v_ngen_703_);
lean_ctor_set(v_reuseFailAlloc_736_, 3, v_auxDeclNGen_704_);
lean_ctor_set(v_reuseFailAlloc_736_, 4, v___x_729_);
lean_ctor_set(v_reuseFailAlloc_736_, 5, v_cache_705_);
lean_ctor_set(v_reuseFailAlloc_736_, 6, v_recordedDeps_706_);
lean_ctor_set(v_reuseFailAlloc_736_, 7, v_messages_707_);
lean_ctor_set(v_reuseFailAlloc_736_, 8, v_infoState_708_);
lean_ctor_set(v_reuseFailAlloc_736_, 9, v_snapshotTasks_709_);
v___x_731_ = v_reuseFailAlloc_736_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
lean_object* v___x_732_; lean_object* v___x_734_; 
v___x_732_ = lean_st_ref_put(v___y_691_, v___x_731_);
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 0, v___x_718_);
v___x_734_ = v___x_697_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v___x_718_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___boxed(lean_object* v_cls_741_, lean_object* v_msg_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(v_cls_741_, v_msg_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_);
lean_dec(v___y_746_);
lean_dec_ref(v___y_745_);
lean_dec(v___y_744_);
lean_dec_ref(v___y_743_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4(lean_object* v_as_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_){
_start:
{
if (lean_obj_tag(v_as_752_) == 0)
{
lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_760_ = lean_box(0);
v___x_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
return v___x_761_;
}
else
{
lean_object* v_toCold_762_; lean_object* v_options_763_; uint8_t v_hasTrace_764_; 
v_toCold_762_ = lean_ctor_get(v___y_757_, 0);
v_options_763_ = lean_ctor_get(v_toCold_762_, 2);
v_hasTrace_764_ = lean_ctor_get_uint8(v_options_763_, sizeof(void*)*1);
if (v_hasTrace_764_ == 0)
{
lean_object* v_tail_765_; 
v_tail_765_ = lean_ctor_get(v_as_752_, 1);
lean_inc(v_tail_765_);
lean_dec_ref_known(v_as_752_, 2);
v_as_752_ = v_tail_765_;
goto _start;
}
else
{
lean_object* v_head_767_; lean_object* v_tail_768_; lean_object* v_fst_769_; lean_object* v_snd_770_; lean_object* v_inheritedTraceOptions_771_; lean_object* v___x_772_; lean_object* v___x_773_; uint8_t v___x_774_; 
v_head_767_ = lean_ctor_get(v_as_752_, 0);
lean_inc(v_head_767_);
v_tail_768_ = lean_ctor_get(v_as_752_, 1);
lean_inc(v_tail_768_);
lean_dec_ref_known(v_as_752_, 2);
v_fst_769_ = lean_ctor_get(v_head_767_, 0);
lean_inc_n(v_fst_769_, 2);
v_snd_770_ = lean_ctor_get(v_head_767_, 1);
lean_inc(v_snd_770_);
lean_dec(v_head_767_);
v_inheritedTraceOptions_771_ = lean_ctor_get(v_toCold_762_, 11);
v___x_772_ = ((lean_object*)(l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1));
v___x_773_ = l_Lean_Name_append(v___x_772_, v_fst_769_);
v___x_774_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_771_, v_options_763_, v___x_773_);
lean_dec(v___x_773_);
if (v___x_774_ == 0)
{
lean_dec(v_snd_770_);
lean_dec(v_fst_769_);
v_as_752_ = v_tail_768_;
goto _start;
}
else
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_776_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_776_, 0, v_snd_770_);
v___x_777_ = l_Lean_MessageData_ofFormat(v___x_776_);
v___x_778_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(v_fst_769_, v___x_777_, v___y_755_, v___y_756_, v___y_757_, v___y_758_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_dec_ref_known(v___x_778_, 1);
v_as_752_ = v_tail_768_;
goto _start;
}
else
{
lean_dec(v_tail_768_);
return v___x_778_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___boxed(lean_object* v_as_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4(v_as_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_);
lean_dec(v___y_786_);
lean_dec_ref(v___y_785_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
lean_dec(v___y_782_);
lean_dec_ref(v___y_781_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg(lean_object* v_a_789_, lean_object* v_x_790_){
_start:
{
if (lean_obj_tag(v_x_790_) == 0)
{
lean_object* v___x_791_; 
v___x_791_ = lean_box(0);
return v___x_791_;
}
else
{
lean_object* v_key_792_; lean_object* v_value_793_; lean_object* v_tail_794_; uint8_t v___x_795_; 
v_key_792_ = lean_ctor_get(v_x_790_, 0);
v_value_793_ = lean_ctor_get(v_x_790_, 1);
v_tail_794_ = lean_ctor_get(v_x_790_, 2);
v___x_795_ = lean_name_eq(v_key_792_, v_a_789_);
if (v___x_795_ == 0)
{
v_x_790_ = v_tail_794_;
goto _start;
}
else
{
lean_object* v___x_797_; 
lean_inc(v_value_793_);
v___x_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_797_, 0, v_value_793_);
return v___x_797_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg___boxed(lean_object* v_a_798_, lean_object* v_x_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg(v_a_798_, v_x_799_);
lean_dec(v_x_799_);
lean_dec(v_a_798_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(lean_object* v_m_801_, lean_object* v_a_802_){
_start:
{
lean_object* v_buckets_803_; lean_object* v___x_804_; uint64_t v___y_806_; 
v_buckets_803_ = lean_ctor_get(v_m_801_, 1);
v___x_804_ = lean_array_get_size(v_buckets_803_);
if (lean_obj_tag(v_a_802_) == 0)
{
uint64_t v___x_820_; 
v___x_820_ = 1723ULL;
v___y_806_ = v___x_820_;
goto v___jp_805_;
}
else
{
uint64_t v_hash_821_; 
v_hash_821_ = lean_ctor_get_uint64(v_a_802_, sizeof(void*)*2);
v___y_806_ = v_hash_821_;
goto v___jp_805_;
}
v___jp_805_:
{
uint64_t v___x_807_; uint64_t v___x_808_; uint64_t v_fold_809_; uint64_t v___x_810_; uint64_t v___x_811_; uint64_t v___x_812_; size_t v___x_813_; size_t v___x_814_; size_t v___x_815_; size_t v___x_816_; size_t v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_807_ = 32ULL;
v___x_808_ = lean_uint64_shift_right(v___y_806_, v___x_807_);
v_fold_809_ = lean_uint64_xor(v___y_806_, v___x_808_);
v___x_810_ = 16ULL;
v___x_811_ = lean_uint64_shift_right(v_fold_809_, v___x_810_);
v___x_812_ = lean_uint64_xor(v_fold_809_, v___x_811_);
v___x_813_ = lean_uint64_to_usize(v___x_812_);
v___x_814_ = lean_usize_of_nat(v___x_804_);
v___x_815_ = ((size_t)1ULL);
v___x_816_ = lean_usize_sub(v___x_814_, v___x_815_);
v___x_817_ = lean_usize_land(v___x_813_, v___x_816_);
v___x_818_ = lean_array_uget_borrowed(v_buckets_803_, v___x_817_);
v___x_819_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg(v_a_802_, v___x_818_);
return v___x_819_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg___boxed(lean_object* v_m_822_, lean_object* v_a_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(v_m_822_, v_a_823_);
lean_dec(v_a_823_);
lean_dec_ref(v_m_822_);
return v_res_824_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___closed__0(void){
_start:
{
lean_object* v___x_825_; 
v___x_825_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_825_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___closed__1(void){
_start:
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___closed__0);
v___x_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_827_, 0, v___x_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg(){
_start:
{
lean_object* v___x_829_; 
v___x_829_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___closed__1);
return v___x_829_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___boxed(lean_object* v___dummy_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg();
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___lam__0(lean_object* v___x_832_, lean_object* v_entry_833_, lean_object* v_s_834_){
_start:
{
lean_object* v_addEntryFn_835_; lean_object* v_importedEntries_836_; lean_object* v_state_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_845_; 
v_addEntryFn_835_ = lean_ctor_get(v___x_832_, 3);
lean_inc(v_addEntryFn_835_);
lean_dec_ref(v___x_832_);
v_importedEntries_836_ = lean_ctor_get(v_s_834_, 0);
v_state_837_ = lean_ctor_get(v_s_834_, 1);
v_isSharedCheck_845_ = !lean_is_exclusive(v_s_834_);
if (v_isSharedCheck_845_ == 0)
{
v___x_839_ = v_s_834_;
v_isShared_840_ = v_isSharedCheck_845_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_state_837_);
lean_inc(v_importedEntries_836_);
lean_dec(v_s_834_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_845_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v_state_841_; lean_object* v___x_843_; 
v_state_841_ = lean_apply_2(v_addEntryFn_835_, v_state_837_, v_entry_833_);
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 1, v_state_841_);
v___x_843_ = v___x_839_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_importedEntries_836_);
lean_ctor_set(v_reuseFailAlloc_844_, 1, v_state_841_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg(lean_object* v_keys_846_, lean_object* v_i_847_, lean_object* v_k_848_){
_start:
{
lean_object* v___x_849_; uint8_t v___x_850_; 
v___x_849_ = lean_array_get_size(v_keys_846_);
v___x_850_ = lean_nat_dec_lt(v_i_847_, v___x_849_);
if (v___x_850_ == 0)
{
lean_dec(v_i_847_);
return v___x_850_;
}
else
{
lean_object* v_k_x27_851_; uint8_t v___x_852_; 
v_k_x27_851_ = lean_array_fget_borrowed(v_keys_846_, v_i_847_);
v___x_852_ = l_Lean_instBEqExtraModUse_beq(v_k_848_, v_k_x27_851_);
if (v___x_852_ == 0)
{
lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_853_ = lean_unsigned_to_nat(1u);
v___x_854_ = lean_nat_add(v_i_847_, v___x_853_);
lean_dec(v_i_847_);
v_i_847_ = v___x_854_;
goto _start;
}
else
{
lean_dec(v_i_847_);
return v___x_850_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg___boxed(lean_object* v_keys_856_, lean_object* v_i_857_, lean_object* v_k_858_){
_start:
{
uint8_t v_res_859_; lean_object* v_r_860_; 
v_res_859_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg(v_keys_856_, v_i_857_, v_k_858_);
lean_dec_ref(v_k_858_);
lean_dec_ref(v_keys_856_);
v_r_860_ = lean_box(v_res_859_);
return v_r_860_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg(lean_object* v_x_861_, size_t v_x_862_, lean_object* v_x_863_){
_start:
{
if (lean_obj_tag(v_x_861_) == 0)
{
lean_object* v_es_864_; lean_object* v___x_865_; size_t v___x_866_; size_t v___x_867_; lean_object* v_j_868_; lean_object* v___x_869_; 
v_es_864_ = lean_ctor_get(v_x_861_, 0);
v___x_865_ = lean_box(2);
v___x_866_ = ((size_t)31ULL);
v___x_867_ = lean_usize_land(v_x_862_, v___x_866_);
v_j_868_ = lean_usize_to_nat(v___x_867_);
v___x_869_ = lean_array_get_borrowed(v___x_865_, v_es_864_, v_j_868_);
lean_dec(v_j_868_);
switch(lean_obj_tag(v___x_869_))
{
case 0:
{
lean_object* v_key_870_; uint8_t v___x_871_; 
v_key_870_ = lean_ctor_get(v___x_869_, 0);
v___x_871_ = l_Lean_instBEqExtraModUse_beq(v_x_863_, v_key_870_);
return v___x_871_;
}
case 1:
{
lean_object* v_node_872_; size_t v___x_873_; size_t v___x_874_; 
v_node_872_ = lean_ctor_get(v___x_869_, 0);
v___x_873_ = ((size_t)5ULL);
v___x_874_ = lean_usize_shift_right(v_x_862_, v___x_873_);
v_x_861_ = v_node_872_;
v_x_862_ = v___x_874_;
goto _start;
}
default: 
{
uint8_t v___x_876_; 
v___x_876_ = 0;
return v___x_876_;
}
}
}
else
{
lean_object* v_ks_877_; lean_object* v___x_878_; uint8_t v___x_879_; 
v_ks_877_ = lean_ctor_get(v_x_861_, 0);
v___x_878_ = lean_unsigned_to_nat(0u);
v___x_879_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg(v_ks_877_, v___x_878_, v_x_863_);
return v___x_879_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg___boxed(lean_object* v_x_880_, lean_object* v_x_881_, lean_object* v_x_882_){
_start:
{
size_t v_x_187725__boxed_883_; uint8_t v_res_884_; lean_object* v_r_885_; 
v_x_187725__boxed_883_ = lean_unbox_usize(v_x_881_);
lean_dec(v_x_881_);
v_res_884_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg(v_x_880_, v_x_187725__boxed_883_, v_x_882_);
lean_dec_ref(v_x_882_);
lean_dec_ref(v_x_880_);
v_r_885_ = lean_box(v_res_884_);
return v_r_885_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg(lean_object* v_x_886_, lean_object* v_x_887_){
_start:
{
uint64_t v___x_888_; size_t v___x_889_; uint8_t v___x_890_; 
v___x_888_ = l_Lean_instHashableExtraModUse_hash(v_x_887_);
v___x_889_ = lean_uint64_to_usize(v___x_888_);
v___x_890_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg(v_x_886_, v___x_889_, v_x_887_);
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg___boxed(lean_object* v_x_891_, lean_object* v_x_892_){
_start:
{
uint8_t v_res_893_; lean_object* v_r_894_; 
v_res_893_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg(v_x_891_, v_x_892_);
lean_dec_ref(v_x_892_);
lean_dec_ref(v_x_891_);
v_r_894_ = lean_box(v_res_893_);
return v_r_894_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0(void){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_895_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg___closed__0);
v___x_896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_896_, 0, v___x_895_);
return v___x_896_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1(void){
_start:
{
lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_897_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0);
v___x_898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
lean_ctor_set(v___x_898_, 1, v___x_897_);
return v___x_898_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2(void){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34___redArg();
return v___x_899_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3(void){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; 
v___x_900_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0);
v___x_901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_900_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
return v___x_901_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_902_ = lean_unsigned_to_nat(0u);
v___x_903_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0);
v___x_904_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_904_, 0, v___x_903_);
lean_ctor_set(v___x_904_, 1, v___x_903_);
lean_ctor_set(v___x_904_, 2, v___x_902_);
return v___x_904_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_905_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__4);
v___x_906_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__3);
v___x_907_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__0);
v___x_908_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2);
v___x_909_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
lean_ctor_set(v___x_909_, 1, v___x_907_);
lean_ctor_set(v___x_909_, 2, v___x_906_);
lean_ctor_set(v___x_909_, 3, v___x_907_);
lean_ctor_set(v___x_909_, 4, v___x_907_);
lean_ctor_set(v___x_909_, 5, v___x_907_);
lean_ctor_set(v___x_909_, 6, v___x_907_);
lean_ctor_set(v___x_909_, 7, v___x_905_);
return v___x_909_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6(void){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_910_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10(void){
_start:
{
lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_915_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__9));
v___x_916_ = l_Lean_stringToMessageData(v___x_915_);
return v___x_916_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12(void){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_918_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__11));
v___x_919_ = l_Lean_stringToMessageData(v___x_918_);
return v___x_919_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13(void){
_start:
{
lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_920_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg___closed__1));
v___x_921_ = l_Lean_stringToMessageData(v___x_920_);
return v___x_921_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14(void){
_start:
{
lean_object* v_cls_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v_cls_922_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8));
v___x_923_ = ((lean_object*)(l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4___closed__1));
v___x_924_ = l_Lean_Name_append(v___x_923_, v_cls_922_);
return v___x_924_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16(void){
_start:
{
lean_object* v___x_926_; lean_object* v___x_927_; 
v___x_926_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__15));
v___x_927_ = l_Lean_stringToMessageData(v___x_926_);
return v___x_927_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18(void){
_start:
{
lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_929_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__17));
v___x_930_ = l_Lean_stringToMessageData(v___x_929_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(lean_object* v_mod_935_, uint8_t v_isMeta_936_, lean_object* v_hint_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_){
_start:
{
lean_object* v___y_946_; lean_object* v___y_947_; lean_object* v___y_948_; lean_object* v___y_949_; lean_object* v___y_950_; lean_object* v___y_951_; lean_object* v___y_952_; lean_object* v___y_953_; lean_object* v___y_954_; lean_object* v___y_955_; lean_object* v___y_956_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v_env_979_; uint8_t v_isExporting_980_; lean_object* v_entry_981_; lean_object* v___x_982_; lean_object* v_env_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; uint8_t v___x_988_; 
v___x_977_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__6);
v___x_978_ = lean_st_ref_get(v___y_943_);
v_env_979_ = lean_ctor_get(v___x_978_, 0);
lean_inc_ref(v_env_979_);
lean_dec(v___x_978_);
v_isExporting_980_ = lean_ctor_get_uint8(v_env_979_, sizeof(void*)*13);
lean_dec_ref(v_env_979_);
lean_inc(v_mod_935_);
v_entry_981_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_981_, 0, v_mod_935_);
lean_ctor_set_uint8(v_entry_981_, sizeof(void*)*1, v_isExporting_980_);
lean_ctor_set_uint8(v_entry_981_, sizeof(void*)*1 + 1, v_isMeta_936_);
v___x_982_ = lean_st_ref_get(v___y_943_);
v_env_983_ = lean_ctor_get(v___x_982_, 0);
lean_inc_ref(v_env_983_);
lean_dec(v___x_982_);
v___x_984_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_985_ = lean_box(1);
v___x_986_ = lean_box(0);
v___x_987_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_977_, v___x_984_, v_env_983_, v___x_985_, v___x_986_);
v___x_988_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg(v___x_987_, v_entry_981_);
lean_dec(v___x_987_);
if (v___x_988_ == 0)
{
lean_object* v_toCold_989_; lean_object* v_options_990_; lean_object* v_inheritedTraceOptions_991_; uint8_t v_hasTrace_992_; lean_object* v___f_993_; uint8_t v___x_994_; lean_object* v___y_996_; lean_object* v___y_997_; 
v_toCold_989_ = lean_ctor_get(v___y_942_, 0);
v_options_990_ = lean_ctor_get(v_toCold_989_, 2);
v_inheritedTraceOptions_991_ = lean_ctor_get(v_toCold_989_, 11);
v_hasTrace_992_ = lean_ctor_get_uint8(v_options_990_, sizeof(void*)*1);
v___f_993_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___lam__0), 3, 2);
lean_closure_set(v___f_993_, 0, v___x_984_);
lean_closure_set(v___f_993_, 1, v_entry_981_);
v___x_994_ = 1;
if (v_hasTrace_992_ == 0)
{
lean_dec(v_hint_937_);
lean_dec(v_mod_935_);
v___y_996_ = v___y_941_;
v___y_997_ = v___y_943_;
goto v___jp_995_;
}
else
{
lean_object* v_cls_1024_; lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___x_1044_; uint8_t v___x_1045_; 
v_cls_1024_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__8));
v___x_1044_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__14);
v___x_1045_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_991_, v_options_990_, v___x_1044_);
if (v___x_1045_ == 0)
{
lean_dec(v_hint_937_);
lean_dec(v_mod_935_);
v___y_996_ = v___y_941_;
v___y_997_ = v___y_943_;
goto v___jp_995_;
}
else
{
lean_object* v___x_1046_; lean_object* v___y_1048_; 
v___x_1046_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__16);
if (v_isExporting_980_ == 0)
{
lean_object* v___x_1055_; 
v___x_1055_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__21));
v___y_1048_ = v___x_1055_;
goto v___jp_1047_;
}
else
{
lean_object* v___x_1056_; 
v___x_1056_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__22));
v___y_1048_ = v___x_1056_;
goto v___jp_1047_;
}
v___jp_1047_:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
lean_inc_ref(v___y_1048_);
v___x_1049_ = l_Lean_stringToMessageData(v___y_1048_);
v___x_1050_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1046_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__18);
v___x_1052_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1050_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
if (v_isMeta_936_ == 0)
{
lean_object* v___x_1053_; 
v___x_1053_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__19));
v___y_1031_ = v___x_1052_;
v___y_1032_ = v___x_1053_;
goto v___jp_1030_;
}
else
{
lean_object* v___x_1054_; 
v___x_1054_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__20));
v___y_1031_ = v___x_1052_;
v___y_1032_ = v___x_1054_;
goto v___jp_1030_;
}
}
}
v___jp_1025_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1028_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___y_1026_);
lean_ctor_set(v___x_1028_, 1, v___y_1027_);
v___x_1029_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(v_cls_1024_, v___x_1028_, v___y_940_, v___y_941_, v___y_942_, v___y_943_);
if (lean_obj_tag(v___x_1029_) == 0)
{
lean_dec_ref_known(v___x_1029_, 1);
v___y_996_ = v___y_941_;
v___y_997_ = v___y_943_;
goto v___jp_995_;
}
else
{
lean_dec_ref(v___f_993_);
return v___x_1029_;
}
}
v___jp_1030_:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; uint8_t v___x_1039_; 
lean_inc_ref(v___y_1032_);
v___x_1033_ = l_Lean_stringToMessageData(v___y_1032_);
v___x_1034_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1034_, 0, v___y_1031_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
v___x_1035_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__10);
v___x_1036_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1034_);
lean_ctor_set(v___x_1036_, 1, v___x_1035_);
v___x_1037_ = l_Lean_MessageData_ofName(v_mod_935_);
v___x_1038_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1036_);
lean_ctor_set(v___x_1038_, 1, v___x_1037_);
v___x_1039_ = l_Lean_Name_isAnonymous(v_hint_937_);
if (v___x_1039_ == 0)
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1040_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__12);
v___x_1041_ = l_Lean_MessageData_ofName(v_hint_937_);
v___x_1042_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1040_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___y_1026_ = v___x_1038_;
v___y_1027_ = v___x_1042_;
goto v___jp_1025_;
}
else
{
lean_object* v___x_1043_; 
lean_dec(v_hint_937_);
v___x_1043_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__13);
v___y_1026_ = v___x_1038_;
v___y_1027_ = v___x_1043_;
goto v___jp_1025_;
}
}
}
v___jp_995_:
{
lean_object* v___x_998_; lean_object* v_toEnvExtension_999_; uint8_t v_logWrites_1000_; 
v___x_998_ = lean_st_ref_take(v___y_997_);
v_toEnvExtension_999_ = lean_ctor_get(v___x_984_, 0);
v_logWrites_1000_ = lean_ctor_get_uint8(v_toEnvExtension_999_, sizeof(void*)*6);
if (v_logWrites_1000_ == 0)
{
lean_object* v_env_1001_; lean_object* v_nextMacroScope_1002_; lean_object* v_ngen_1003_; lean_object* v_auxDeclNGen_1004_; lean_object* v_traceState_1005_; lean_object* v_recordedDeps_1006_; lean_object* v_messages_1007_; lean_object* v_infoState_1008_; lean_object* v_snapshotTasks_1009_; lean_object* v_asyncMode_1010_; lean_object* v___x_1011_; 
v_env_1001_ = lean_ctor_get(v___x_998_, 0);
lean_inc_ref(v_env_1001_);
v_nextMacroScope_1002_ = lean_ctor_get(v___x_998_, 1);
lean_inc(v_nextMacroScope_1002_);
v_ngen_1003_ = lean_ctor_get(v___x_998_, 2);
lean_inc_ref(v_ngen_1003_);
v_auxDeclNGen_1004_ = lean_ctor_get(v___x_998_, 3);
lean_inc_ref(v_auxDeclNGen_1004_);
v_traceState_1005_ = lean_ctor_get(v___x_998_, 4);
lean_inc_ref(v_traceState_1005_);
v_recordedDeps_1006_ = lean_ctor_get(v___x_998_, 6);
lean_inc_ref(v_recordedDeps_1006_);
v_messages_1007_ = lean_ctor_get(v___x_998_, 7);
lean_inc_ref(v_messages_1007_);
v_infoState_1008_ = lean_ctor_get(v___x_998_, 8);
lean_inc_ref(v_infoState_1008_);
v_snapshotTasks_1009_ = lean_ctor_get(v___x_998_, 9);
lean_inc_ref(v_snapshotTasks_1009_);
lean_dec(v___x_998_);
v_asyncMode_1010_ = lean_ctor_get(v_toEnvExtension_999_, 2);
lean_inc_ref(v_toEnvExtension_999_);
v___x_1011_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_999_, v_env_1001_, v___f_993_, v_asyncMode_1010_, v___x_986_, v___x_994_);
v___y_946_ = v_infoState_1008_;
v___y_947_ = v_messages_1007_;
v___y_948_ = v_ngen_1003_;
v___y_949_ = v___y_996_;
v___y_950_ = v_snapshotTasks_1009_;
v___y_951_ = v_recordedDeps_1006_;
v___y_952_ = v_traceState_1005_;
v___y_953_ = v___y_997_;
v___y_954_ = v_auxDeclNGen_1004_;
v___y_955_ = v_nextMacroScope_1002_;
v___y_956_ = v___x_1011_;
goto v___jp_945_;
}
else
{
lean_object* v_env_1012_; lean_object* v_nextMacroScope_1013_; lean_object* v_ngen_1014_; lean_object* v_auxDeclNGen_1015_; lean_object* v_traceState_1016_; lean_object* v_recordedDeps_1017_; lean_object* v_messages_1018_; lean_object* v_infoState_1019_; lean_object* v_snapshotTasks_1020_; lean_object* v_asyncMode_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v_env_1012_ = lean_ctor_get(v___x_998_, 0);
lean_inc_ref(v_env_1012_);
v_nextMacroScope_1013_ = lean_ctor_get(v___x_998_, 1);
lean_inc(v_nextMacroScope_1013_);
v_ngen_1014_ = lean_ctor_get(v___x_998_, 2);
lean_inc_ref(v_ngen_1014_);
v_auxDeclNGen_1015_ = lean_ctor_get(v___x_998_, 3);
lean_inc_ref(v_auxDeclNGen_1015_);
v_traceState_1016_ = lean_ctor_get(v___x_998_, 4);
lean_inc_ref(v_traceState_1016_);
v_recordedDeps_1017_ = lean_ctor_get(v___x_998_, 6);
lean_inc_ref(v_recordedDeps_1017_);
v_messages_1018_ = lean_ctor_get(v___x_998_, 7);
lean_inc_ref(v_messages_1018_);
v_infoState_1019_ = lean_ctor_get(v___x_998_, 8);
lean_inc_ref(v_infoState_1019_);
v_snapshotTasks_1020_ = lean_ctor_get(v___x_998_, 9);
lean_inc_ref(v_snapshotTasks_1020_);
lean_dec(v___x_998_);
v_asyncMode_1021_ = lean_ctor_get(v_toEnvExtension_999_, 2);
lean_inc_ref_n(v_toEnvExtension_999_, 2);
v___x_1022_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_999_, v_env_1012_);
lean_dec_ref(v_env_1012_);
v___x_1023_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_999_, v___x_1022_, v___f_993_, v_asyncMode_1021_, v___x_986_, v___x_994_);
v___y_946_ = v_infoState_1019_;
v___y_947_ = v_messages_1018_;
v___y_948_ = v_ngen_1014_;
v___y_949_ = v___y_996_;
v___y_950_ = v_snapshotTasks_1020_;
v___y_951_ = v_recordedDeps_1017_;
v___y_952_ = v_traceState_1016_;
v___y_953_ = v___y_997_;
v___y_954_ = v_auxDeclNGen_1015_;
v___y_955_ = v_nextMacroScope_1013_;
v___y_956_ = v___x_1023_;
goto v___jp_945_;
}
}
}
else
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
lean_dec_ref_known(v_entry_981_, 1);
lean_dec(v_hint_937_);
lean_dec(v_mod_935_);
v___x_1057_ = lean_box(0);
v___x_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
return v___x_1058_;
}
v___jp_945_:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v_mctx_961_; lean_object* v_zetaDeltaFVarIds_962_; lean_object* v_postponed_963_; lean_object* v_diag_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_975_; 
v___x_957_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__1);
v___x_958_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_958_, 0, v___y_956_);
lean_ctor_set(v___x_958_, 1, v___y_955_);
lean_ctor_set(v___x_958_, 2, v___y_948_);
lean_ctor_set(v___x_958_, 3, v___y_954_);
lean_ctor_set(v___x_958_, 4, v___y_952_);
lean_ctor_set(v___x_958_, 5, v___x_957_);
lean_ctor_set(v___x_958_, 6, v___y_951_);
lean_ctor_set(v___x_958_, 7, v___y_947_);
lean_ctor_set(v___x_958_, 8, v___y_946_);
lean_ctor_set(v___x_958_, 9, v___y_950_);
v___x_959_ = lean_st_ref_put(v___y_953_, v___x_958_);
v___x_960_ = lean_st_ref_take(v___y_949_);
v_mctx_961_ = lean_ctor_get(v___x_960_, 0);
v_zetaDeltaFVarIds_962_ = lean_ctor_get(v___x_960_, 2);
v_postponed_963_ = lean_ctor_get(v___x_960_, 3);
v_diag_964_ = lean_ctor_get(v___x_960_, 4);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_960_);
if (v_isSharedCheck_975_ == 0)
{
lean_object* v_unused_976_; 
v_unused_976_ = lean_ctor_get(v___x_960_, 1);
lean_dec(v_unused_976_);
v___x_966_ = v___x_960_;
v_isShared_967_ = v_isSharedCheck_975_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_diag_964_);
lean_inc(v_postponed_963_);
lean_inc(v_zetaDeltaFVarIds_962_);
lean_inc(v_mctx_961_);
lean_dec(v___x_960_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_975_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_971_; 
v___x_968_ = lean_box(0);
v___x_969_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__5);
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 1, v___x_969_);
v___x_971_ = v___x_966_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_mctx_961_);
lean_ctor_set(v_reuseFailAlloc_974_, 1, v___x_969_);
lean_ctor_set(v_reuseFailAlloc_974_, 2, v_zetaDeltaFVarIds_962_);
lean_ctor_set(v_reuseFailAlloc_974_, 3, v_postponed_963_);
lean_ctor_set(v_reuseFailAlloc_974_, 4, v_diag_964_);
v___x_971_ = v_reuseFailAlloc_974_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = lean_st_ref_put(v___y_949_, v___x_971_);
v___x_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_973_, 0, v___x_968_);
return v___x_973_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___boxed(lean_object* v_mod_1059_, lean_object* v_isMeta_1060_, lean_object* v_hint_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
uint8_t v_isMeta_boxed_1069_; lean_object* v_res_1070_; 
v_isMeta_boxed_1069_ = lean_unbox(v_isMeta_1060_);
v_res_1070_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(v_mod_1059_, v_isMeta_boxed_1069_, v_hint_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_);
lean_dec(v___y_1067_);
lean_dec_ref(v___y_1066_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9(lean_object* v___x_1071_, lean_object* v_declName_1072_, lean_object* v_as_1073_, size_t v_sz_1074_, size_t v_i_1075_, lean_object* v_b_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
uint8_t v___x_1084_; 
v___x_1084_ = lean_usize_dec_lt(v_i_1075_, v_sz_1074_);
if (v___x_1084_ == 0)
{
lean_object* v___x_1085_; 
lean_dec(v_declName_1072_);
v___x_1085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1085_, 0, v_b_1076_);
return v___x_1085_;
}
else
{
lean_object* v___x_1086_; lean_object* v_modules_1087_; lean_object* v___x_1088_; lean_object* v_a_1089_; lean_object* v___x_1090_; lean_object* v_toImport_1091_; lean_object* v_module_1092_; lean_object* v___x_1093_; uint8_t v___x_1094_; lean_object* v___x_1095_; 
v___x_1086_ = l_Lean_Environment_header(v___x_1071_);
v_modules_1087_ = lean_ctor_get(v___x_1086_, 3);
lean_inc_ref(v_modules_1087_);
lean_dec_ref(v___x_1086_);
v___x_1088_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1089_ = lean_array_uget_borrowed(v_as_1073_, v_i_1075_);
v___x_1090_ = lean_array_get(v___x_1088_, v_modules_1087_, v_a_1089_);
lean_dec_ref(v_modules_1087_);
v_toImport_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc_ref(v_toImport_1091_);
lean_dec(v___x_1090_);
v_module_1092_ = lean_ctor_get(v_toImport_1091_, 0);
lean_inc(v_module_1092_);
lean_dec_ref(v_toImport_1091_);
v___x_1093_ = lean_box(0);
v___x_1094_ = 0;
lean_inc(v_declName_1072_);
v___x_1095_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(v_module_1092_, v___x_1094_, v_declName_1072_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
if (lean_obj_tag(v___x_1095_) == 0)
{
size_t v___x_1096_; size_t v___x_1097_; 
lean_dec_ref_known(v___x_1095_, 1);
v___x_1096_ = ((size_t)1ULL);
v___x_1097_ = lean_usize_add(v_i_1075_, v___x_1096_);
v_i_1075_ = v___x_1097_;
v_b_1076_ = v___x_1093_;
goto _start;
}
else
{
lean_dec(v_declName_1072_);
return v___x_1095_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9___boxed(lean_object* v___x_1099_, lean_object* v_declName_1100_, lean_object* v_as_1101_, lean_object* v_sz_1102_, lean_object* v_i_1103_, lean_object* v_b_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
size_t v_sz_boxed_1112_; size_t v_i_boxed_1113_; lean_object* v_res_1114_; 
v_sz_boxed_1112_ = lean_unbox_usize(v_sz_1102_);
lean_dec(v_sz_1102_);
v_i_boxed_1113_ = lean_unbox_usize(v_i_1103_);
lean_dec(v_i_1103_);
v_res_1114_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9(v___x_1099_, v_declName_1100_, v_as_1101_, v_sz_boxed_1112_, v_i_boxed_1113_, v_b_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_);
lean_dec(v___y_1110_);
lean_dec_ref(v___y_1109_);
lean_dec(v___y_1108_);
lean_dec_ref(v___y_1107_);
lean_dec(v___y_1106_);
lean_dec_ref(v___y_1105_);
lean_dec_ref(v_as_1101_);
lean_dec_ref(v___x_1099_);
return v_res_1114_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1115_; 
v___x_1115_ = l_Std_HashMap_instInhabited___redArg();
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2(lean_object* v_declName_1118_, uint8_t v_isMeta_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_){
_start:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v_env_1132_; lean_object* v___y_1134_; lean_object* v___x_1147_; 
v___x_1127_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__0);
v___x_1128_ = lean_st_ref_get(v___y_1125_);
v_env_1132_ = lean_ctor_get(v___x_1128_, 0);
lean_inc_ref(v_env_1132_);
lean_dec(v___x_1128_);
v___x_1147_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1132_, v_declName_1118_);
if (lean_obj_tag(v___x_1147_) == 0)
{
lean_dec_ref(v_env_1132_);
lean_dec(v_declName_1118_);
goto v___jp_1129_;
}
else
{
lean_object* v_val_1148_; lean_object* v___x_1149_; lean_object* v_modules_1150_; lean_object* v___x_1151_; uint8_t v___x_1152_; 
v_val_1148_ = lean_ctor_get(v___x_1147_, 0);
lean_inc(v_val_1148_);
lean_dec_ref_known(v___x_1147_, 1);
v___x_1149_ = l_Lean_Environment_header(v_env_1132_);
v_modules_1150_ = lean_ctor_get(v___x_1149_, 3);
lean_inc_ref(v_modules_1150_);
lean_dec_ref(v___x_1149_);
v___x_1151_ = lean_array_get_size(v_modules_1150_);
v___x_1152_ = lean_nat_dec_lt(v_val_1148_, v___x_1151_);
if (v___x_1152_ == 0)
{
lean_dec_ref(v_modules_1150_);
lean_dec(v_val_1148_);
lean_dec_ref(v_env_1132_);
lean_dec(v_declName_1118_);
goto v___jp_1129_;
}
else
{
lean_object* v___x_1153_; lean_object* v___x_1154_; uint8_t v___y_1156_; 
v___x_1153_ = lean_array_fget(v_modules_1150_, v_val_1148_);
lean_dec(v_val_1148_);
lean_dec_ref(v_modules_1150_);
v___x_1154_ = lean_st_ref_get(v___y_1125_);
if (v_isMeta_1119_ == 0)
{
lean_dec(v___x_1154_);
v___y_1156_ = v_isMeta_1119_;
goto v___jp_1155_;
}
else
{
lean_object* v_env_1167_; uint8_t v___x_1168_; 
v_env_1167_ = lean_ctor_get(v___x_1154_, 0);
lean_inc_ref(v_env_1167_);
lean_dec(v___x_1154_);
lean_inc(v_declName_1118_);
v___x_1168_ = l_Lean_isMarkedMeta(v_env_1167_, v_declName_1118_);
if (v___x_1168_ == 0)
{
v___y_1156_ = v_isMeta_1119_;
goto v___jp_1155_;
}
else
{
uint8_t v___x_1169_; 
v___x_1169_ = 0;
v___y_1156_ = v___x_1169_;
goto v___jp_1155_;
}
}
v___jp_1155_:
{
lean_object* v_toImport_1157_; lean_object* v_module_1158_; lean_object* v___x_1159_; 
v_toImport_1157_ = lean_ctor_get(v___x_1153_, 0);
lean_inc_ref(v_toImport_1157_);
lean_dec(v___x_1153_);
v_module_1158_ = lean_ctor_get(v_toImport_1157_, 0);
lean_inc(v_module_1158_);
lean_dec_ref(v_toImport_1157_);
lean_inc(v_declName_1118_);
v___x_1159_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8(v_module_1158_, v___y_1156_, v_declName_1118_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_);
if (lean_obj_tag(v___x_1159_) == 0)
{
lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; 
lean_dec_ref_known(v___x_1159_, 1);
v___x_1160_ = l_Lean_indirectModUseExt;
v___x_1161_ = lean_box(1);
v___x_1162_ = lean_box(0);
lean_inc_ref(v_env_1132_);
v___x_1163_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1127_, v___x_1160_, v_env_1132_, v___x_1161_, v___x_1162_);
v___x_1164_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(v___x_1163_, v_declName_1118_);
lean_dec(v___x_1163_);
if (lean_obj_tag(v___x_1164_) == 0)
{
lean_object* v___x_1165_; 
v___x_1165_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___closed__1));
v___y_1134_ = v___x_1165_;
goto v___jp_1133_;
}
else
{
lean_object* v_val_1166_; 
v_val_1166_ = lean_ctor_get(v___x_1164_, 0);
lean_inc(v_val_1166_);
lean_dec_ref_known(v___x_1164_, 1);
v___y_1134_ = v_val_1166_;
goto v___jp_1133_;
}
}
else
{
lean_dec_ref(v_env_1132_);
lean_dec(v_declName_1118_);
return v___x_1159_;
}
}
}
}
v___jp_1129_:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1130_ = lean_box(0);
v___x_1131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1130_);
return v___x_1131_;
}
v___jp_1133_:
{
lean_object* v___x_1135_; size_t v_sz_1136_; size_t v___x_1137_; lean_object* v___x_1138_; 
v___x_1135_ = lean_box(0);
v_sz_1136_ = lean_array_size(v___y_1134_);
v___x_1137_ = ((size_t)0ULL);
v___x_1138_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__9(v_env_1132_, v_declName_1118_, v___y_1134_, v_sz_1136_, v___x_1137_, v___x_1135_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_);
lean_dec_ref(v___y_1134_);
lean_dec_ref(v_env_1132_);
if (lean_obj_tag(v___x_1138_) == 0)
{
lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1145_; 
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1145_ == 0)
{
lean_object* v_unused_1146_; 
v_unused_1146_ = lean_ctor_get(v___x_1138_, 0);
lean_dec(v_unused_1146_);
v___x_1140_ = v___x_1138_;
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
else
{
lean_dec(v___x_1138_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1143_; 
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 0, v___x_1135_);
v___x_1143_ = v___x_1140_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v___x_1135_);
v___x_1143_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
return v___x_1143_;
}
}
}
else
{
return v___x_1138_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2___boxed(lean_object* v_declName_1170_, lean_object* v_isMeta_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_){
_start:
{
uint8_t v_isMeta_boxed_1179_; lean_object* v_res_1180_; 
v_isMeta_boxed_1179_ = lean_unbox(v_isMeta_1171_);
v_res_1180_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2(v_declName_1170_, v_isMeta_boxed_1179_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
lean_dec(v___y_1177_);
lean_dec_ref(v___y_1176_);
lean_dec(v___y_1175_);
lean_dec_ref(v___y_1174_);
lean_dec(v___y_1173_);
lean_dec_ref(v___y_1172_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(lean_object* v_as_x27_1181_, lean_object* v_b_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_){
_start:
{
if (lean_obj_tag(v_as_x27_1181_) == 0)
{
lean_object* v___x_1190_; 
v___x_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1190_, 0, v_b_1182_);
return v___x_1190_;
}
else
{
lean_object* v_head_1191_; lean_object* v_tail_1192_; lean_object* v___x_1193_; uint8_t v___x_1194_; lean_object* v___x_1195_; 
v_head_1191_ = lean_ctor_get(v_as_x27_1181_, 0);
v_tail_1192_ = lean_ctor_get(v_as_x27_1181_, 1);
v___x_1193_ = lean_box(0);
v___x_1194_ = 1;
lean_inc(v_head_1191_);
v___x_1195_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2(v_head_1191_, v___x_1194_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_);
if (lean_obj_tag(v___x_1195_) == 0)
{
lean_dec_ref_known(v___x_1195_, 1);
v_as_x27_1181_ = v_tail_1192_;
v_b_1182_ = v___x_1193_;
goto _start;
}
else
{
return v___x_1195_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg___boxed(lean_object* v_as_x27_1197_, lean_object* v_b_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(v_as_x27_1197_, v_b_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
lean_dec(v_as_x27_1197_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2(lean_object* v_currNamespace_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_){
_start:
{
lean_object* v___x_1210_; 
v___x_1210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1210_, 0, v_currNamespace_1207_);
lean_ctor_set(v___x_1210_, 1, v___y_1209_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2___boxed(lean_object* v_currNamespace_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2(v_currNamespace_1211_, v___y_1212_, v___y_1213_);
lean_dec_ref(v___y_1212_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3(lean_object* v_env_1215_, lean_object* v___x_1216_, lean_object* v_currNamespace_1217_, lean_object* v_openDecls_1218_, lean_object* v_n_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_){
_start:
{
lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1222_ = l_Lean_ResolveName_resolveGlobalName(v_env_1215_, v___x_1216_, v_currNamespace_1217_, v_openDecls_1218_, v_n_1219_);
v___x_1223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1222_);
lean_ctor_set(v___x_1223_, 1, v___y_1221_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3___boxed(lean_object* v_env_1224_, lean_object* v___x_1225_, lean_object* v_currNamespace_1226_, lean_object* v_openDecls_1227_, lean_object* v_n_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3(v_env_1224_, v___x_1225_, v_currNamespace_1226_, v_openDecls_1227_, v_n_1228_, v___y_1229_, v___y_1230_);
lean_dec_ref(v___y_1229_);
lean_dec_ref(v___x_1225_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4(lean_object* v_env_1232_, lean_object* v_currNamespace_1233_, lean_object* v_openDecls_1234_, lean_object* v_n_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_){
_start:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1238_ = l_Lean_ResolveName_resolveNamespace(v_env_1232_, v_currNamespace_1233_, v_openDecls_1234_, v_n_1235_);
v___x_1239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1238_);
lean_ctor_set(v___x_1239_, 1, v___y_1237_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4___boxed(lean_object* v_env_1240_, lean_object* v_currNamespace_1241_, lean_object* v_openDecls_1242_, lean_object* v_n_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4(v_env_1240_, v_currNamespace_1241_, v_openDecls_1242_, v_n_1243_, v___y_1244_, v___y_1245_);
lean_dec_ref(v___y_1244_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(lean_object* v_x_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_){
_start:
{
lean_object* v___x_1256_; lean_object* v_toCold_1257_; lean_object* v_env_1258_; lean_object* v_currRecDepth_1259_; lean_object* v_ref_1260_; lean_object* v_maxRecDepth_1261_; lean_object* v_currNamespace_1262_; lean_object* v_openDecls_1263_; lean_object* v_quotContext_1264_; lean_object* v_currMacroScope_1265_; lean_object* v___f_1266_; lean_object* v___f_1267_; lean_object* v___x_1268_; lean_object* v___f_1269_; lean_object* v___f_1270_; lean_object* v___f_1271_; lean_object* v_methods_1272_; lean_object* v___x_1273_; lean_object* v_nextMacroScope_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1256_ = lean_st_ref_get(v___y_1254_);
v_toCold_1257_ = lean_ctor_get(v___y_1253_, 0);
v_env_1258_ = lean_ctor_get(v___x_1256_, 0);
lean_inc_ref_n(v_env_1258_, 4);
lean_dec(v___x_1256_);
v_currRecDepth_1259_ = lean_ctor_get(v___y_1253_, 1);
v_ref_1260_ = lean_ctor_get(v___y_1253_, 2);
v_maxRecDepth_1261_ = lean_ctor_get(v_toCold_1257_, 3);
v_currNamespace_1262_ = lean_ctor_get(v_toCold_1257_, 4);
v_openDecls_1263_ = lean_ctor_get(v_toCold_1257_, 5);
v_quotContext_1264_ = lean_ctor_get(v_toCold_1257_, 8);
v_currMacroScope_1265_ = lean_ctor_get(v_toCold_1257_, 9);
v___f_1266_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1266_, 0, v_env_1258_);
v___f_1267_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1267_, 0, v_env_1258_);
v___x_1268_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1253_);
lean_inc_n(v_currNamespace_1262_, 3);
v___f_1269_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1269_, 0, v_currNamespace_1262_);
lean_inc_n(v_openDecls_1263_, 2);
v___f_1270_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__3___boxed), 7, 4);
lean_closure_set(v___f_1270_, 0, v_env_1258_);
lean_closure_set(v___f_1270_, 1, v___x_1268_);
lean_closure_set(v___f_1270_, 2, v_currNamespace_1262_);
lean_closure_set(v___f_1270_, 3, v_openDecls_1263_);
v___f_1271_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___lam__4___boxed), 6, 3);
lean_closure_set(v___f_1271_, 0, v_env_1258_);
lean_closure_set(v___f_1271_, 1, v_currNamespace_1262_);
lean_closure_set(v___f_1271_, 2, v_openDecls_1263_);
v_methods_1272_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_1272_, 0, v___f_1267_);
lean_ctor_set(v_methods_1272_, 1, v___f_1269_);
lean_ctor_set(v_methods_1272_, 2, v___f_1266_);
lean_ctor_set(v_methods_1272_, 3, v___f_1271_);
lean_ctor_set(v_methods_1272_, 4, v___f_1270_);
v___x_1273_ = lean_st_ref_get(v___y_1254_);
v_nextMacroScope_1274_ = lean_ctor_get(v___x_1273_, 1);
lean_inc(v_nextMacroScope_1274_);
lean_dec(v___x_1273_);
lean_inc(v_ref_1260_);
lean_inc(v_maxRecDepth_1261_);
lean_inc(v_currRecDepth_1259_);
lean_inc(v_currMacroScope_1265_);
lean_inc(v_quotContext_1264_);
v___x_1275_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1275_, 0, v_methods_1272_);
lean_ctor_set(v___x_1275_, 1, v_quotContext_1264_);
lean_ctor_set(v___x_1275_, 2, v_currMacroScope_1265_);
lean_ctor_set(v___x_1275_, 3, v_currRecDepth_1259_);
lean_ctor_set(v___x_1275_, 4, v_maxRecDepth_1261_);
lean_ctor_set(v___x_1275_, 5, v_ref_1260_);
v___x_1276_ = lean_box(0);
v___x_1277_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1277_, 0, v_nextMacroScope_1274_);
lean_ctor_set(v___x_1277_, 1, v___x_1276_);
lean_ctor_set(v___x_1277_, 2, v___x_1276_);
v___x_1278_ = lean_apply_2(v_x_1248_, v___x_1275_, v___x_1277_);
if (lean_obj_tag(v___x_1278_) == 0)
{
lean_object* v_a_1279_; lean_object* v_a_1280_; lean_object* v_macroScope_1281_; lean_object* v_traceMsgs_1282_; lean_object* v_expandedMacroDecls_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v_a_1279_ = lean_ctor_get(v___x_1278_, 1);
lean_inc(v_a_1279_);
v_a_1280_ = lean_ctor_get(v___x_1278_, 0);
lean_inc(v_a_1280_);
lean_dec_ref_known(v___x_1278_, 2);
v_macroScope_1281_ = lean_ctor_get(v_a_1279_, 0);
lean_inc(v_macroScope_1281_);
v_traceMsgs_1282_ = lean_ctor_get(v_a_1279_, 1);
lean_inc(v_traceMsgs_1282_);
v_expandedMacroDecls_1283_ = lean_ctor_get(v_a_1279_, 2);
lean_inc(v_expandedMacroDecls_1283_);
lean_dec(v_a_1279_);
v___x_1284_ = lean_box(0);
v___x_1285_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(v_expandedMacroDecls_1283_, v___x_1284_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_);
lean_dec(v_expandedMacroDecls_1283_);
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_object* v___x_1286_; lean_object* v_env_1287_; lean_object* v_ngen_1288_; lean_object* v_auxDeclNGen_1289_; lean_object* v_traceState_1290_; lean_object* v_cache_1291_; lean_object* v_recordedDeps_1292_; lean_object* v_messages_1293_; lean_object* v_infoState_1294_; lean_object* v_snapshotTasks_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1321_; 
lean_dec_ref_known(v___x_1285_, 1);
v___x_1286_ = lean_st_ref_take(v___y_1254_);
v_env_1287_ = lean_ctor_get(v___x_1286_, 0);
v_ngen_1288_ = lean_ctor_get(v___x_1286_, 2);
v_auxDeclNGen_1289_ = lean_ctor_get(v___x_1286_, 3);
v_traceState_1290_ = lean_ctor_get(v___x_1286_, 4);
v_cache_1291_ = lean_ctor_get(v___x_1286_, 5);
v_recordedDeps_1292_ = lean_ctor_get(v___x_1286_, 6);
v_messages_1293_ = lean_ctor_get(v___x_1286_, 7);
v_infoState_1294_ = lean_ctor_get(v___x_1286_, 8);
v_snapshotTasks_1295_ = lean_ctor_get(v___x_1286_, 9);
v_isSharedCheck_1321_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1321_ == 0)
{
lean_object* v_unused_1322_; 
v_unused_1322_ = lean_ctor_get(v___x_1286_, 1);
lean_dec(v_unused_1322_);
v___x_1297_ = v___x_1286_;
v_isShared_1298_ = v_isSharedCheck_1321_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_snapshotTasks_1295_);
lean_inc(v_infoState_1294_);
lean_inc(v_messages_1293_);
lean_inc(v_recordedDeps_1292_);
lean_inc(v_cache_1291_);
lean_inc(v_traceState_1290_);
lean_inc(v_auxDeclNGen_1289_);
lean_inc(v_ngen_1288_);
lean_inc(v_env_1287_);
lean_dec(v___x_1286_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1321_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
lean_ctor_set(v___x_1297_, 1, v_macroScope_1281_);
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_env_1287_);
lean_ctor_set(v_reuseFailAlloc_1320_, 1, v_macroScope_1281_);
lean_ctor_set(v_reuseFailAlloc_1320_, 2, v_ngen_1288_);
lean_ctor_set(v_reuseFailAlloc_1320_, 3, v_auxDeclNGen_1289_);
lean_ctor_set(v_reuseFailAlloc_1320_, 4, v_traceState_1290_);
lean_ctor_set(v_reuseFailAlloc_1320_, 5, v_cache_1291_);
lean_ctor_set(v_reuseFailAlloc_1320_, 6, v_recordedDeps_1292_);
lean_ctor_set(v_reuseFailAlloc_1320_, 7, v_messages_1293_);
lean_ctor_set(v_reuseFailAlloc_1320_, 8, v_infoState_1294_);
lean_ctor_set(v_reuseFailAlloc_1320_, 9, v_snapshotTasks_1295_);
v___x_1300_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1301_ = lean_st_ref_put(v___y_1254_, v___x_1300_);
v___x_1302_ = l_List_reverse___redArg(v_traceMsgs_1282_);
v___x_1303_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__4(v___x_1302_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_);
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1310_; 
v_isSharedCheck_1310_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1310_ == 0)
{
lean_object* v_unused_1311_; 
v_unused_1311_ = lean_ctor_get(v___x_1303_, 0);
lean_dec(v_unused_1311_);
v___x_1305_ = v___x_1303_;
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
else
{
lean_dec(v___x_1303_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; 
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 0, v_a_1280_);
v___x_1308_ = v___x_1305_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_a_1280_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
else
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1319_; 
lean_dec(v_a_1280_);
v_a_1312_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1314_ = v___x_1303_;
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v___x_1303_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1317_; 
if (v_isShared_1315_ == 0)
{
v___x_1317_ = v___x_1314_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_a_1312_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
}
}
}
else
{
lean_object* v_a_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1330_; 
lean_dec(v_traceMsgs_1282_);
lean_dec(v_macroScope_1281_);
lean_dec(v_a_1280_);
v_a_1323_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1325_ = v___x_1285_;
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_a_1323_);
lean_dec(v___x_1285_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1328_; 
if (v_isShared_1326_ == 0)
{
v___x_1328_ = v___x_1325_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_a_1323_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
}
else
{
lean_object* v_a_1331_; 
v_a_1331_ = lean_ctor_get(v___x_1278_, 0);
lean_inc(v_a_1331_);
lean_dec_ref_known(v___x_1278_, 2);
if (lean_obj_tag(v_a_1331_) == 0)
{
lean_object* v_a_1332_; lean_object* v_a_1333_; lean_object* v___x_1334_; uint8_t v___x_1335_; 
v_a_1332_ = lean_ctor_get(v_a_1331_, 0);
lean_inc(v_a_1332_);
v_a_1333_ = lean_ctor_get(v_a_1331_, 1);
lean_inc_ref(v_a_1333_);
lean_dec_ref_known(v_a_1331_, 2);
v___x_1334_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___closed__0));
v___x_1335_ = lean_string_dec_eq(v_a_1333_, v___x_1334_);
if (v___x_1335_ == 0)
{
lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
v___x_1336_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1336_, 0, v_a_1333_);
v___x_1337_ = l_Lean_MessageData_ofFormat(v___x_1336_);
v___x_1338_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(v_a_1332_, v___x_1337_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_);
lean_dec(v_a_1332_);
return v___x_1338_;
}
else
{
lean_object* v___x_1339_; 
lean_dec_ref(v_a_1333_);
v___x_1339_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(v_a_1332_);
return v___x_1339_;
}
}
else
{
lean_object* v___x_1340_; 
v___x_1340_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
return v___x_1340_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg___boxed(lean_object* v_x_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_){
_start:
{
lean_object* v_res_1349_; 
v_res_1349_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v_x_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_);
lean_dec(v___y_1347_);
lean_dec_ref(v___y_1346_);
lean_dec(v___y_1345_);
lean_dec_ref(v___y_1344_);
lean_dec(v___y_1343_);
lean_dec_ref(v___y_1342_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(size_t v_sz_1353_, size_t v_i_1354_, lean_object* v_bs_1355_){
_start:
{
uint8_t v___x_1356_; 
v___x_1356_ = lean_usize_dec_lt(v_i_1354_, v_sz_1353_);
if (v___x_1356_ == 0)
{
lean_object* v___x_1357_; 
v___x_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1357_, 0, v_bs_1355_);
return v___x_1357_;
}
else
{
lean_object* v_v_1358_; lean_object* v___x_1359_; uint8_t v___x_1360_; 
v_v_1358_ = lean_array_uget(v_bs_1355_, v_i_1354_);
v___x_1359_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1));
lean_inc(v_v_1358_);
v___x_1360_ = l_Lean_Syntax_isOfKind(v_v_1358_, v___x_1359_);
if (v___x_1360_ == 0)
{
lean_object* v___x_1361_; 
lean_dec(v_v_1358_);
lean_dec_ref(v_bs_1355_);
v___x_1361_ = lean_box(0);
return v___x_1361_;
}
else
{
lean_object* v___x_1362_; lean_object* v___x_1363_; uint8_t v___x_1364_; 
v___x_1362_ = lean_unsigned_to_nat(0u);
v___x_1363_ = l_Lean_Syntax_getArg(v_v_1358_, v___x_1362_);
v___x_1364_ = l_Lean_Syntax_isOfKind(v___x_1363_, v___x_1359_);
if (v___x_1364_ == 0)
{
lean_object* v___x_1365_; 
lean_dec(v_v_1358_);
lean_dec_ref(v_bs_1355_);
v___x_1365_ = lean_box(0);
return v___x_1365_;
}
else
{
lean_object* v___x_1366_; lean_object* v_bs_x27_1367_; lean_object* v___x_1368_; size_t v___x_1369_; size_t v___x_1370_; lean_object* v___x_1371_; 
v___x_1366_ = lean_unsigned_to_nat(3u);
v_bs_x27_1367_ = lean_array_uset(v_bs_1355_, v_i_1354_, v___x_1362_);
v___x_1368_ = l_Lean_Syntax_getArg(v_v_1358_, v___x_1366_);
lean_dec(v_v_1358_);
v___x_1369_ = ((size_t)1ULL);
v___x_1370_ = lean_usize_add(v_i_1354_, v___x_1369_);
v___x_1371_ = lean_array_uset(v_bs_x27_1367_, v_i_1354_, v___x_1368_);
v_i_1354_ = v___x_1370_;
v_bs_1355_ = v___x_1371_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___boxed(lean_object* v_sz_1373_, lean_object* v_i_1374_, lean_object* v_bs_1375_){
_start:
{
size_t v_sz_boxed_1376_; size_t v_i_boxed_1377_; lean_object* v_res_1378_; 
v_sz_boxed_1376_ = lean_unbox_usize(v_sz_1373_);
lean_dec(v_sz_1373_);
v_i_boxed_1377_ = lean_unbox_usize(v_i_1374_);
lean_dec(v_i_1374_);
v_res_1378_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(v_sz_boxed_1376_, v_i_boxed_1377_, v_bs_1375_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(size_t v_sz_1391_, size_t v_i_1392_, lean_object* v_bs_1393_){
_start:
{
uint8_t v___x_1394_; 
v___x_1394_ = lean_usize_dec_lt(v_i_1392_, v_sz_1391_);
if (v___x_1394_ == 0)
{
lean_object* v___x_1395_; 
v___x_1395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1395_, 0, v_bs_1393_);
return v___x_1395_;
}
else
{
lean_object* v_v_1396_; lean_object* v___x_1397_; uint8_t v___x_1398_; 
v_v_1396_ = lean_array_uget(v_bs_1393_, v_i_1392_);
v___x_1397_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__1));
lean_inc(v_v_1396_);
v___x_1398_ = l_Lean_Syntax_isOfKind(v_v_1396_, v___x_1397_);
if (v___x_1398_ == 0)
{
lean_object* v___x_1399_; 
lean_dec(v_v_1396_);
lean_dec_ref(v_bs_1393_);
v___x_1399_ = lean_box(0);
return v___x_1399_;
}
else
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; uint8_t v___x_1403_; 
v___x_1400_ = lean_unsigned_to_nat(1u);
v___x_1401_ = l_Lean_Syntax_getArg(v_v_1396_, v___x_1400_);
v___x_1402_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___closed__3));
v___x_1403_ = l_Lean_Syntax_isOfKind(v___x_1401_, v___x_1402_);
if (v___x_1403_ == 0)
{
lean_object* v___x_1404_; 
lean_dec(v_v_1396_);
lean_dec_ref(v_bs_1393_);
v___x_1404_ = lean_box(0);
return v___x_1404_;
}
else
{
lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v_bs_x27_1407_; lean_object* v___x_1408_; size_t v___x_1409_; size_t v___x_1410_; lean_object* v___x_1411_; 
v___x_1405_ = lean_unsigned_to_nat(3u);
v___x_1406_ = lean_unsigned_to_nat(0u);
v_bs_x27_1407_ = lean_array_uset(v_bs_1393_, v_i_1392_, v___x_1406_);
v___x_1408_ = l_Lean_Syntax_getArg(v_v_1396_, v___x_1405_);
lean_dec(v_v_1396_);
v___x_1409_ = ((size_t)1ULL);
v___x_1410_ = lean_usize_add(v_i_1392_, v___x_1409_);
v___x_1411_ = lean_array_uset(v_bs_x27_1407_, v_i_1392_, v___x_1408_);
v_i_1392_ = v___x_1410_;
v_bs_1393_ = v___x_1411_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4___boxed(lean_object* v_sz_1413_, lean_object* v_i_1414_, lean_object* v_bs_1415_){
_start:
{
size_t v_sz_boxed_1416_; size_t v_i_boxed_1417_; lean_object* v_res_1418_; 
v_sz_boxed_1416_ = lean_unbox_usize(v_sz_1413_);
lean_dec(v_sz_1413_);
v_i_boxed_1417_ = lean_unbox_usize(v_i_1414_);
lean_dec(v_i_1414_);
v_res_1418_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(v_sz_boxed_1416_, v_i_boxed_1417_, v_bs_1415_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(size_t v_sz_1425_, size_t v_i_1426_, lean_object* v_bs_1427_){
_start:
{
uint8_t v___x_1428_; 
v___x_1428_ = lean_usize_dec_lt(v_i_1426_, v_sz_1425_);
if (v___x_1428_ == 0)
{
lean_object* v___x_1429_; 
v___x_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1429_, 0, v_bs_1427_);
return v___x_1429_;
}
else
{
lean_object* v_v_1430_; lean_object* v___x_1431_; uint8_t v___x_1432_; 
v_v_1430_ = lean_array_uget(v_bs_1427_, v_i_1426_);
v___x_1431_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___closed__1));
lean_inc(v_v_1430_);
v___x_1432_ = l_Lean_Syntax_isOfKind(v_v_1430_, v___x_1431_);
if (v___x_1432_ == 0)
{
lean_object* v___x_1433_; 
lean_dec(v_v_1430_);
lean_dec_ref(v_bs_1427_);
v___x_1433_ = lean_box(0);
return v___x_1433_;
}
else
{
lean_object* v___x_1434_; lean_object* v_bs_x27_1435_; lean_object* v___x_1442_; uint8_t v___x_1443_; 
v___x_1434_ = lean_unsigned_to_nat(0u);
v_bs_x27_1435_ = lean_array_uset(v_bs_1427_, v_i_1426_, v___x_1434_);
v___x_1442_ = l_Lean_Syntax_getArg(v_v_1430_, v___x_1434_);
lean_dec(v_v_1430_);
v___x_1443_ = l_Lean_Syntax_isNone(v___x_1442_);
if (v___x_1443_ == 0)
{
lean_object* v___x_1444_; uint8_t v___x_1445_; 
v___x_1444_ = lean_unsigned_to_nat(2u);
v___x_1445_ = l_Lean_Syntax_matchesNull(v___x_1442_, v___x_1444_);
if (v___x_1445_ == 0)
{
lean_object* v___x_1446_; 
lean_dec_ref(v_bs_x27_1435_);
v___x_1446_ = lean_box(0);
return v___x_1446_;
}
else
{
goto v___jp_1436_;
}
}
else
{
lean_dec(v___x_1442_);
goto v___jp_1436_;
}
v___jp_1436_:
{
lean_object* v___x_1437_; size_t v___x_1438_; size_t v___x_1439_; lean_object* v___x_1440_; 
v___x_1437_ = lean_box(0);
v___x_1438_ = ((size_t)1ULL);
v___x_1439_ = lean_usize_add(v_i_1426_, v___x_1438_);
v___x_1440_ = lean_array_uset(v_bs_x27_1435_, v_i_1426_, v___x_1437_);
v_i_1426_ = v___x_1439_;
v_bs_1427_ = v___x_1440_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12___boxed(lean_object* v_sz_1447_, lean_object* v_i_1448_, lean_object* v_bs_1449_){
_start:
{
size_t v_sz_boxed_1450_; size_t v_i_boxed_1451_; lean_object* v_res_1452_; 
v_sz_boxed_1450_ = lean_unbox_usize(v_sz_1447_);
lean_dec(v_sz_1447_);
v_i_boxed_1451_ = lean_unbox_usize(v_i_1448_);
lean_dec(v_i_1448_);
v_res_1452_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(v_sz_boxed_1450_, v_i_boxed_1451_, v_bs_1449_);
return v_res_1452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(size_t v_sz_1453_, size_t v_i_1454_, lean_object* v_bs_1455_){
_start:
{
uint8_t v___x_1456_; 
v___x_1456_ = lean_usize_dec_lt(v_i_1454_, v_sz_1453_);
if (v___x_1456_ == 0)
{
lean_object* v___x_1457_; 
v___x_1457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1457_, 0, v_bs_1455_);
return v___x_1457_;
}
else
{
lean_object* v_v_1458_; lean_object* v___x_1459_; lean_object* v_bs_x27_1460_; size_t v___x_1461_; size_t v___x_1462_; lean_object* v___x_1463_; 
v_v_1458_ = lean_array_uget(v_bs_1455_, v_i_1454_);
v___x_1459_ = lean_unsigned_to_nat(0u);
v_bs_x27_1460_ = lean_array_uset(v_bs_1455_, v_i_1454_, v___x_1459_);
v___x_1461_ = ((size_t)1ULL);
v___x_1462_ = lean_usize_add(v_i_1454_, v___x_1461_);
v___x_1463_ = lean_array_uset(v_bs_x27_1460_, v_i_1454_, v_v_1458_);
v_i_1454_ = v___x_1462_;
v_bs_1455_ = v___x_1463_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6___boxed(lean_object* v_sz_1465_, lean_object* v_i_1466_, lean_object* v_bs_1467_){
_start:
{
size_t v_sz_boxed_1468_; size_t v_i_boxed_1469_; lean_object* v_res_1470_; 
v_sz_boxed_1468_ = lean_unbox_usize(v_sz_1465_);
lean_dec(v_sz_1465_);
v_i_boxed_1469_ = lean_unbox_usize(v_i_1466_);
lean_dec(v_i_1466_);
v_res_1470_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(v_sz_boxed_1468_, v_i_boxed_1469_, v_bs_1467_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1(lean_object* v_00_u03b1_1471_, lean_object* v_x_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v___x_1475_; 
v___x_1475_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___redArg(v_x_1472_, v___y_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___boxed(lean_object* v_00_u03b1_1476_, lean_object* v_x_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_){
_start:
{
lean_object* v_res_1480_; 
v_res_1480_ = l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1(v_00_u03b1_1476_, v_x_1477_, v___y_1478_, v___y_1479_);
lean_dec_ref(v___y_1478_);
lean_dec_ref(v_x_1477_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(lean_object* v_stx_1484_, lean_object* v_as_x27_1485_, lean_object* v_b_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
if (lean_obj_tag(v_as_x27_1485_) == 0)
{
lean_object* v___x_1494_; 
lean_dec(v_stx_1484_);
v___x_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1494_, 0, v_b_1486_);
return v___x_1494_;
}
else
{
lean_object* v_head_1495_; lean_object* v_tail_1496_; lean_object* v_value_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
lean_dec_ref(v_b_1486_);
v_head_1495_ = lean_ctor_get(v_as_x27_1485_, 0);
v_tail_1496_ = lean_ctor_get(v_as_x27_1485_, 1);
v_value_1497_ = lean_ctor_get(v_head_1495_, 1);
v___x_1498_ = lean_box(0);
v___x_1499_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_1500_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_inc(v_value_1497_);
lean_inc(v___y_1492_);
lean_inc_ref(v___y_1491_);
lean_inc(v___y_1490_);
lean_inc_ref(v___y_1489_);
lean_inc(v___y_1488_);
lean_inc_ref(v___y_1487_);
lean_inc(v_stx_1484_);
v___x_1501_ = lean_apply_8(v_value_1497_, v_stx_1484_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, lean_box(0));
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1511_; 
lean_dec(v_stx_1484_);
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1504_ = v___x_1501_;
v_isShared_1505_ = v_isSharedCheck_1511_;
goto v_resetjp_1503_;
}
else
{
lean_inc(v_a_1502_);
lean_dec(v___x_1501_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1511_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1509_; 
v___x_1506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1506_, 0, v_a_1502_);
v___x_1507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1507_, 0, v___x_1506_);
lean_ctor_set(v___x_1507_, 1, v___x_1498_);
if (v_isShared_1505_ == 0)
{
lean_ctor_set(v___x_1504_, 0, v___x_1507_);
v___x_1509_ = v___x_1504_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v___x_1507_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
}
else
{
lean_object* v_a_1512_; lean_object* v___x_1514_; uint8_t v_isShared_1515_; uint8_t v_isSharedCheck_1533_; 
v_a_1512_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1533_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1514_ = v___x_1501_;
v_isShared_1515_ = v_isSharedCheck_1533_;
goto v_resetjp_1513_;
}
else
{
lean_inc(v_a_1512_);
lean_dec(v___x_1501_);
v___x_1514_ = lean_box(0);
v_isShared_1515_ = v_isSharedCheck_1533_;
goto v_resetjp_1513_;
}
v_resetjp_1513_:
{
uint8_t v___x_1516_; 
v___x_1516_ = l_Lean_Exception_isInterrupt(v_a_1512_);
if (v___x_1516_ == 0)
{
uint8_t v___x_1517_; 
lean_inc(v_a_1512_);
v___x_1517_ = l_Lean_Exception_isRuntime(v_a_1512_);
if (v___x_1517_ == 0)
{
if (lean_obj_tag(v_a_1512_) == 0)
{
lean_object* v___x_1519_; 
lean_dec(v_stx_1484_);
if (v_isShared_1515_ == 0)
{
v___x_1519_ = v___x_1514_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_a_1512_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
}
}
else
{
lean_object* v_id_1521_; uint8_t v___x_1522_; 
v_id_1521_ = lean_ctor_get(v_a_1512_, 0);
v___x_1522_ = l_Lean_instBEqInternalExceptionId_beq(v___x_1500_, v_id_1521_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1524_; 
lean_dec(v_stx_1484_);
if (v_isShared_1515_ == 0)
{
v___x_1524_ = v___x_1514_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v_a_1512_);
v___x_1524_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
return v___x_1524_;
}
}
else
{
lean_dec_ref_known(v_a_1512_, 2);
lean_del_object(v___x_1514_);
v_as_x27_1485_ = v_tail_1496_;
v_b_1486_ = v___x_1499_;
goto _start;
}
}
}
else
{
lean_object* v___x_1528_; 
lean_dec(v_stx_1484_);
if (v_isShared_1515_ == 0)
{
v___x_1528_ = v___x_1514_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_a_1512_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
else
{
lean_object* v___x_1531_; 
lean_dec(v_stx_1484_);
if (v_isShared_1515_ == 0)
{
v___x_1531_ = v___x_1514_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v_a_1512_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
return v___x_1531_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___boxed(lean_object* v_stx_1534_, lean_object* v_as_x27_1535_, lean_object* v_b_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_){
_start:
{
lean_object* v_res_1544_; 
v_res_1544_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_1534_, v_as_x27_1535_, v_b_1536_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_);
lean_dec(v___y_1542_);
lean_dec_ref(v___y_1541_);
lean_dec(v___y_1540_);
lean_dec_ref(v___y_1539_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
lean_dec(v_as_x27_1535_);
return v_res_1544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(lean_object* v_reassigned_1547_, lean_object* v_rhs_x3f_1548_, lean_object* v_otherwise_x3f_1549_, lean_object* v_body_x3f_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_){
_start:
{
uint8_t v___y_1559_; uint8_t v___y_1560_; uint8_t v___y_1561_; uint8_t v___y_1562_; lean_object* v___y_1563_; lean_object* v___y_1564_; lean_object* v___y_1568_; lean_object* v___y_1569_; lean_object* v_body_1570_; lean_object* v___y_1588_; lean_object* v_otherwise_1589_; lean_object* v___y_1590_; lean_object* v___y_1591_; lean_object* v___y_1592_; lean_object* v___y_1593_; lean_object* v___y_1594_; lean_object* v___y_1595_; lean_object* v_rhs_1601_; lean_object* v___y_1602_; lean_object* v___y_1603_; lean_object* v___y_1604_; lean_object* v___y_1605_; lean_object* v___y_1606_; lean_object* v___y_1607_; 
if (lean_obj_tag(v_rhs_x3f_1548_) == 0)
{
lean_object* v___x_1612_; 
v___x_1612_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v_rhs_1601_ = v___x_1612_;
v___y_1602_ = v_a_1551_;
v___y_1603_ = v_a_1552_;
v___y_1604_ = v_a_1553_;
v___y_1605_ = v_a_1554_;
v___y_1606_ = v_a_1555_;
v___y_1607_ = v_a_1556_;
goto v___jp_1600_;
}
else
{
lean_object* v_val_1613_; lean_object* v___x_1614_; 
v_val_1613_ = lean_ctor_get(v_rhs_x3f_1548_, 0);
lean_inc(v_val_1613_);
lean_dec_ref_known(v_rhs_x3f_1548_, 1);
v___x_1614_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_val_1613_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_, v_a_1556_);
if (lean_obj_tag(v___x_1614_) == 0)
{
lean_object* v_a_1615_; 
v_a_1615_ = lean_ctor_get(v___x_1614_, 0);
lean_inc(v_a_1615_);
lean_dec_ref_known(v___x_1614_, 1);
v_rhs_1601_ = v_a_1615_;
v___y_1602_ = v_a_1551_;
v___y_1603_ = v_a_1552_;
v___y_1604_ = v_a_1553_;
v___y_1605_ = v_a_1554_;
v___y_1606_ = v_a_1555_;
v___y_1607_ = v_a_1556_;
goto v___jp_1600_;
}
else
{
lean_dec(v_body_x3f_1550_);
lean_dec(v_otherwise_x3f_1549_);
lean_dec_ref(v_reassigned_1547_);
return v___x_1614_;
}
}
v___jp_1558_:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1565_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_1565_, 0, v___y_1563_);
lean_ctor_set(v___x_1565_, 1, v___y_1564_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*2, v___y_1561_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*2 + 1, v___y_1559_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*2 + 2, v___y_1562_);
lean_ctor_set_uint8(v___x_1565_, sizeof(void*)*2 + 3, v___y_1560_);
v___x_1566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1565_);
return v___x_1566_;
}
v___jp_1567_:
{
lean_object* v___x_1571_; lean_object* v_info_1572_; uint8_t v_breaks_1573_; uint8_t v_continues_1574_; uint8_t v_returnsEarly_1575_; lean_object* v_numRegularExits_1576_; uint8_t v_noFallthrough_1577_; lean_object* v_reassigns_1578_; size_t v_sz_1579_; size_t v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; uint8_t v___x_1584_; 
v___x_1571_ = l_Lean_Elab_Do_ControlInfo_alternative(v_body_1570_, v___y_1569_);
v_info_1572_ = l_Lean_Elab_Do_ControlInfo_sequence(v___y_1568_, v___x_1571_);
v_breaks_1573_ = lean_ctor_get_uint8(v_info_1572_, sizeof(void*)*2);
v_continues_1574_ = lean_ctor_get_uint8(v_info_1572_, sizeof(void*)*2 + 1);
v_returnsEarly_1575_ = lean_ctor_get_uint8(v_info_1572_, sizeof(void*)*2 + 2);
v_numRegularExits_1576_ = lean_ctor_get(v_info_1572_, 0);
lean_inc(v_numRegularExits_1576_);
v_noFallthrough_1577_ = lean_ctor_get_uint8(v_info_1572_, sizeof(void*)*2 + 3);
v_reassigns_1578_ = lean_ctor_get(v_info_1572_, 1);
lean_inc(v_reassigns_1578_);
lean_dec_ref(v_info_1572_);
v_sz_1579_ = lean_array_size(v_reassigned_1547_);
v___x_1580_ = ((size_t)0ULL);
v___x_1581_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__20(v_sz_1579_, v___x_1580_, v_reassigned_1547_);
v___x_1582_ = lean_unsigned_to_nat(0u);
v___x_1583_ = lean_array_get_size(v___x_1581_);
v___x_1584_ = lean_nat_dec_lt(v___x_1582_, v___x_1583_);
if (v___x_1584_ == 0)
{
lean_dec_ref(v___x_1581_);
v___y_1559_ = v_continues_1574_;
v___y_1560_ = v_noFallthrough_1577_;
v___y_1561_ = v_breaks_1573_;
v___y_1562_ = v_returnsEarly_1575_;
v___y_1563_ = v_numRegularExits_1576_;
v___y_1564_ = v_reassigns_1578_;
goto v___jp_1558_;
}
else
{
size_t v___x_1585_; lean_object* v___x_1586_; 
v___x_1585_ = lean_usize_of_nat(v___x_1583_);
v___x_1586_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofLetOrReassign_spec__21(v___x_1581_, v___x_1580_, v___x_1585_, v_reassigns_1578_);
lean_dec_ref(v___x_1581_);
v___y_1559_ = v_continues_1574_;
v___y_1560_ = v_noFallthrough_1577_;
v___y_1561_ = v_breaks_1573_;
v___y_1562_ = v_returnsEarly_1575_;
v___y_1563_ = v_numRegularExits_1576_;
v___y_1564_ = v___x_1586_;
goto v___jp_1558_;
}
}
v___jp_1587_:
{
if (lean_obj_tag(v_body_x3f_1550_) == 0)
{
lean_object* v___x_1596_; 
v___x_1596_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___y_1568_ = v___y_1588_;
v___y_1569_ = v_otherwise_1589_;
v_body_1570_ = v___x_1596_;
goto v___jp_1567_;
}
else
{
lean_object* v_val_1597_; lean_object* v___x_1598_; 
v_val_1597_ = lean_ctor_get(v_body_x3f_1550_, 0);
lean_inc(v_val_1597_);
lean_dec_ref_known(v_body_x3f_1550_, 1);
v___x_1598_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_1597_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_);
if (lean_obj_tag(v___x_1598_) == 0)
{
lean_object* v_a_1599_; 
v_a_1599_ = lean_ctor_get(v___x_1598_, 0);
lean_inc(v_a_1599_);
lean_dec_ref_known(v___x_1598_, 1);
v___y_1568_ = v___y_1588_;
v___y_1569_ = v_otherwise_1589_;
v_body_1570_ = v_a_1599_;
goto v___jp_1567_;
}
else
{
lean_dec_ref(v_otherwise_1589_);
lean_dec_ref(v___y_1588_);
lean_dec_ref(v_reassigned_1547_);
return v___x_1598_;
}
}
}
v___jp_1600_:
{
if (lean_obj_tag(v_otherwise_x3f_1549_) == 0)
{
lean_object* v___x_1608_; 
v___x_1608_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___y_1588_ = v_rhs_1601_;
v_otherwise_1589_ = v___x_1608_;
v___y_1590_ = v___y_1602_;
v___y_1591_ = v___y_1603_;
v___y_1592_ = v___y_1604_;
v___y_1593_ = v___y_1605_;
v___y_1594_ = v___y_1606_;
v___y_1595_ = v___y_1607_;
goto v___jp_1587_;
}
else
{
lean_object* v_val_1609_; lean_object* v___x_1610_; 
v_val_1609_ = lean_ctor_get(v_otherwise_x3f_1549_, 0);
lean_inc(v_val_1609_);
lean_dec_ref_known(v_otherwise_x3f_1549_, 1);
v___x_1610_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_1609_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
if (lean_obj_tag(v___x_1610_) == 0)
{
lean_object* v_a_1611_; 
v_a_1611_ = lean_ctor_get(v___x_1610_, 0);
lean_inc(v_a_1611_);
lean_dec_ref_known(v___x_1610_, 1);
v___y_1588_ = v_rhs_1601_;
v_otherwise_1589_ = v_a_1611_;
v___y_1590_ = v___y_1602_;
v___y_1591_ = v___y_1603_;
v___y_1592_ = v___y_1604_;
v___y_1593_ = v___y_1605_;
v___y_1594_ = v___y_1606_;
v___y_1595_ = v___y_1607_;
goto v___jp_1587_;
}
else
{
lean_dec_ref(v_rhs_1601_);
lean_dec(v_body_x3f_1550_);
lean_dec_ref(v_reassigned_1547_);
return v___x_1610_;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5(void){
_start:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; 
v___x_1629_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__4));
v___x_1630_ = l_Lean_stringToMessageData(v___x_1629_);
return v___x_1630_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7(void){
_start:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; 
v___x_1632_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__6));
v___x_1633_ = l_Lean_stringToMessageData(v___x_1632_);
return v___x_1633_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9(void){
_start:
{
lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1635_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__8));
v___x_1636_ = l_Lean_stringToMessageData(v___x_1635_);
return v___x_1636_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11(void){
_start:
{
lean_object* v___x_1638_; lean_object* v___x_1639_; 
v___x_1638_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__10));
v___x_1639_ = l_Lean_stringToMessageData(v___x_1638_);
return v___x_1639_;
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5(void){
_start:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1713_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__4));
v___x_1714_ = l_Lean_stringToMessageData(v___x_1713_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(uint8_t v_reassignment_1724_, lean_object* v_decl_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_){
_start:
{
lean_object* v___y_1734_; lean_object* v___y_1735_; lean_object* v___y_1736_; lean_object* v___y_1737_; lean_object* v___y_1738_; lean_object* v___y_1739_; lean_object* v___y_1740_; lean_object* v___y_1741_; lean_object* v___y_1746_; lean_object* v___y_1747_; lean_object* v___y_1748_; lean_object* v_reassigns_1749_; lean_object* v___y_1750_; lean_object* v___y_1751_; lean_object* v___y_1752_; lean_object* v___y_1753_; lean_object* v___y_1754_; lean_object* v___y_1755_; lean_object* v___x_1761_; uint8_t v___x_1762_; 
v___x_1761_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1));
lean_inc(v_decl_1725_);
v___x_1762_ = l_Lean_Syntax_isOfKind(v_decl_1725_, v___x_1761_);
if (v___x_1762_ == 0)
{
lean_object* v___x_1763_; uint8_t v___x_1764_; 
v___x_1763_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3));
lean_inc(v_decl_1725_);
v___x_1764_ = l_Lean_Syntax_isOfKind(v_decl_1725_, v___x_1763_);
if (v___x_1764_ == 0)
{
lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1765_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1766_ = lean_box(0);
v___x_1767_ = l_Lean_Syntax_formatStx(v_decl_1725_, v___x_1766_, v___x_1764_);
v___x_1768_ = l_Std_Format_defWidth;
v___x_1769_ = lean_unsigned_to_nat(0u);
v___x_1770_ = l_Std_Format_pretty(v___x_1767_, v___x_1768_, v___x_1769_, v___x_1769_);
v___x_1771_ = l_Lean_stringToMessageData(v___x_1770_);
v___x_1772_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1765_);
lean_ctor_set(v___x_1772_, 1, v___x_1771_);
v___x_1773_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1772_, v_a_1726_, v_a_1727_, v_a_1728_, v_a_1729_, v_a_1730_, v_a_1731_);
return v___x_1773_;
}
else
{
lean_object* v___x_1774_; lean_object* v_pattern_1775_; lean_object* v___y_1777_; lean_object* v_otherwise_x3f_1778_; lean_object* v_body_x3f_x3f_1779_; lean_object* v___y_1780_; lean_object* v___y_1781_; lean_object* v___y_1782_; lean_object* v___y_1783_; lean_object* v___y_1784_; lean_object* v___y_1785_; lean_object* v___y_1798_; lean_object* v___y_1799_; lean_object* v_body_x3f_x3f_1800_; lean_object* v___y_1801_; lean_object* v___y_1802_; lean_object* v___y_1803_; lean_object* v___y_1804_; lean_object* v___y_1805_; lean_object* v___y_1806_; lean_object* v___x_1809_; lean_object* v___y_1811_; lean_object* v___y_1812_; lean_object* v___y_1813_; lean_object* v___y_1814_; lean_object* v___y_1815_; lean_object* v___y_1816_; lean_object* v___x_1848_; uint8_t v___x_1849_; 
v___x_1774_ = lean_unsigned_to_nat(0u);
v_pattern_1775_ = l_Lean_Syntax_getArg(v_decl_1725_, v___x_1774_);
v___x_1809_ = lean_unsigned_to_nat(1u);
v___x_1848_ = l_Lean_Syntax_getArg(v_decl_1725_, v___x_1809_);
v___x_1849_ = l_Lean_Syntax_isNone(v___x_1848_);
if (v___x_1849_ == 0)
{
uint8_t v___x_1850_; 
lean_inc(v___x_1848_);
v___x_1850_ = l_Lean_Syntax_matchesNull(v___x_1848_, v___x_1809_);
if (v___x_1850_ == 0)
{
lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; 
lean_dec(v___x_1848_);
lean_dec(v_pattern_1775_);
v___x_1851_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1852_ = lean_box(0);
v___x_1853_ = l_Lean_Syntax_formatStx(v_decl_1725_, v___x_1852_, v___x_1850_);
v___x_1854_ = l_Std_Format_defWidth;
v___x_1855_ = l_Std_Format_pretty(v___x_1853_, v___x_1854_, v___x_1774_, v___x_1774_);
v___x_1856_ = l_Lean_stringToMessageData(v___x_1855_);
v___x_1857_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1857_, 0, v___x_1851_);
lean_ctor_set(v___x_1857_, 1, v___x_1856_);
v___x_1858_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1857_, v_a_1726_, v_a_1727_, v_a_1728_, v_a_1729_, v_a_1730_, v_a_1731_);
return v___x_1858_;
}
else
{
lean_object* v___x_1859_; lean_object* v___x_1860_; uint8_t v___x_1861_; 
v___x_1859_ = l_Lean_Syntax_getArg(v___x_1848_, v___x_1774_);
lean_dec(v___x_1848_);
v___x_1860_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8));
v___x_1861_ = l_Lean_Syntax_isOfKind(v___x_1859_, v___x_1860_);
if (v___x_1861_ == 0)
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
lean_dec(v_pattern_1775_);
v___x_1862_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1863_ = lean_box(0);
v___x_1864_ = l_Lean_Syntax_formatStx(v_decl_1725_, v___x_1863_, v___x_1861_);
v___x_1865_ = l_Std_Format_defWidth;
v___x_1866_ = l_Std_Format_pretty(v___x_1864_, v___x_1865_, v___x_1774_, v___x_1774_);
v___x_1867_ = l_Lean_stringToMessageData(v___x_1866_);
v___x_1868_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1862_);
lean_ctor_set(v___x_1868_, 1, v___x_1867_);
v___x_1869_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1868_, v_a_1726_, v_a_1727_, v_a_1728_, v_a_1729_, v_a_1730_, v_a_1731_);
return v___x_1869_;
}
else
{
v___y_1811_ = v_a_1726_;
v___y_1812_ = v_a_1727_;
v___y_1813_ = v_a_1728_;
v___y_1814_ = v_a_1729_;
v___y_1815_ = v_a_1730_;
v___y_1816_ = v_a_1731_;
goto v___jp_1810_;
}
}
}
else
{
lean_dec(v___x_1848_);
v___y_1811_ = v_a_1726_;
v___y_1812_ = v_a_1727_;
v___y_1813_ = v_a_1728_;
v___y_1814_ = v_a_1729_;
v___y_1815_ = v_a_1730_;
v___y_1816_ = v_a_1731_;
goto v___jp_1810_;
}
v___jp_1776_:
{
if (v_reassignment_1724_ == 0)
{
lean_object* v___x_1786_; 
lean_dec(v_pattern_1775_);
v___x_1786_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6));
v___y_1746_ = v___y_1777_;
v___y_1747_ = v_otherwise_x3f_1778_;
v___y_1748_ = v_body_x3f_x3f_1779_;
v_reassigns_1749_ = v___x_1786_;
v___y_1750_ = v___y_1780_;
v___y_1751_ = v___y_1781_;
v___y_1752_ = v___y_1782_;
v___y_1753_ = v___y_1783_;
v___y_1754_ = v___y_1784_;
v___y_1755_ = v___y_1785_;
goto v___jp_1745_;
}
else
{
lean_object* v___x_1787_; 
v___x_1787_ = l_Lean_Elab_Do_getPatternVarsEx(v_pattern_1775_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_);
if (lean_obj_tag(v___x_1787_) == 0)
{
lean_object* v_a_1788_; 
v_a_1788_ = lean_ctor_get(v___x_1787_, 0);
lean_inc(v_a_1788_);
lean_dec_ref_known(v___x_1787_, 1);
v___y_1746_ = v___y_1777_;
v___y_1747_ = v_otherwise_x3f_1778_;
v___y_1748_ = v_body_x3f_x3f_1779_;
v_reassigns_1749_ = v_a_1788_;
v___y_1750_ = v___y_1780_;
v___y_1751_ = v___y_1781_;
v___y_1752_ = v___y_1782_;
v___y_1753_ = v___y_1783_;
v___y_1754_ = v___y_1784_;
v___y_1755_ = v___y_1785_;
goto v___jp_1745_;
}
else
{
lean_object* v_a_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1796_; 
lean_dec(v_body_x3f_x3f_1779_);
lean_dec(v_otherwise_x3f_1778_);
lean_dec(v___y_1777_);
v_a_1789_ = lean_ctor_get(v___x_1787_, 0);
v_isSharedCheck_1796_ = !lean_is_exclusive(v___x_1787_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1791_ = v___x_1787_;
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_a_1789_);
lean_dec(v___x_1787_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1794_; 
if (v_isShared_1792_ == 0)
{
v___x_1794_ = v___x_1791_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v_a_1789_);
v___x_1794_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
return v___x_1794_;
}
}
}
}
}
v___jp_1797_:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1807_, 0, v___y_1798_);
v___x_1808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1808_, 0, v_body_x3f_x3f_1800_);
v___y_1777_ = v___y_1799_;
v_otherwise_x3f_1778_ = v___x_1807_;
v_body_x3f_x3f_1779_ = v___x_1808_;
v___y_1780_ = v___y_1801_;
v___y_1781_ = v___y_1802_;
v___y_1782_ = v___y_1803_;
v___y_1783_ = v___y_1804_;
v___y_1784_ = v___y_1805_;
v___y_1785_ = v___y_1806_;
goto v___jp_1776_;
}
v___jp_1810_:
{
lean_object* v___x_1817_; lean_object* v_rhs_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; uint8_t v___x_1821_; 
v___x_1817_ = lean_unsigned_to_nat(3u);
v_rhs_1818_ = l_Lean_Syntax_getArg(v_decl_1725_, v___x_1817_);
v___x_1819_ = lean_unsigned_to_nat(4u);
v___x_1820_ = l_Lean_Syntax_getArg(v_decl_1725_, v___x_1819_);
v___x_1821_ = l_Lean_Syntax_isNone(v___x_1820_);
if (v___x_1821_ == 0)
{
uint8_t v___x_1822_; 
lean_inc(v___x_1820_);
v___x_1822_ = l_Lean_Syntax_matchesNull(v___x_1820_, v___x_1817_);
if (v___x_1822_ == 0)
{
lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
lean_dec(v___x_1820_);
lean_dec(v_rhs_1818_);
lean_dec(v_pattern_1775_);
v___x_1823_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1824_ = lean_box(0);
v___x_1825_ = l_Lean_Syntax_formatStx(v_decl_1725_, v___x_1824_, v___x_1822_);
v___x_1826_ = l_Std_Format_defWidth;
v___x_1827_ = l_Std_Format_pretty(v___x_1825_, v___x_1826_, v___x_1774_, v___x_1774_);
v___x_1828_ = l_Lean_stringToMessageData(v___x_1827_);
v___x_1829_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1823_);
lean_ctor_set(v___x_1829_, 1, v___x_1828_);
v___x_1830_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1829_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
return v___x_1830_;
}
else
{
lean_object* v___x_1831_; lean_object* v_otherwise_x3f_1832_; lean_object* v___x_1833_; uint8_t v___x_1834_; 
v___x_1831_ = lean_unsigned_to_nat(2u);
v_otherwise_x3f_1832_ = l_Lean_Syntax_getArg(v___x_1820_, v___x_1809_);
v___x_1833_ = l_Lean_Syntax_getArg(v___x_1820_, v___x_1831_);
lean_dec(v___x_1820_);
v___x_1834_ = l_Lean_Syntax_isNone(v___x_1833_);
if (v___x_1834_ == 0)
{
uint8_t v___x_1835_; 
lean_inc(v___x_1833_);
v___x_1835_ = l_Lean_Syntax_matchesNull(v___x_1833_, v___x_1809_);
if (v___x_1835_ == 0)
{
lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
lean_dec(v___x_1833_);
lean_dec(v_otherwise_x3f_1832_);
lean_dec(v_rhs_1818_);
lean_dec(v_pattern_1775_);
v___x_1836_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1837_ = lean_box(0);
v___x_1838_ = l_Lean_Syntax_formatStx(v_decl_1725_, v___x_1837_, v___x_1835_);
v___x_1839_ = l_Std_Format_defWidth;
v___x_1840_ = l_Std_Format_pretty(v___x_1838_, v___x_1839_, v___x_1774_, v___x_1774_);
v___x_1841_ = l_Lean_stringToMessageData(v___x_1840_);
v___x_1842_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1842_, 0, v___x_1836_);
lean_ctor_set(v___x_1842_, 1, v___x_1841_);
v___x_1843_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1842_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
return v___x_1843_;
}
else
{
lean_object* v_body_x3f_x3f_1844_; lean_object* v___x_1845_; 
lean_dec(v_decl_1725_);
v_body_x3f_x3f_1844_ = l_Lean_Syntax_getArg(v___x_1833_, v___x_1774_);
lean_dec(v___x_1833_);
v___x_1845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1845_, 0, v_body_x3f_x3f_1844_);
v___y_1798_ = v_otherwise_x3f_1832_;
v___y_1799_ = v_rhs_1818_;
v_body_x3f_x3f_1800_ = v___x_1845_;
v___y_1801_ = v___y_1811_;
v___y_1802_ = v___y_1812_;
v___y_1803_ = v___y_1813_;
v___y_1804_ = v___y_1814_;
v___y_1805_ = v___y_1815_;
v___y_1806_ = v___y_1816_;
goto v___jp_1797_;
}
}
else
{
lean_object* v___x_1846_; 
lean_dec(v___x_1833_);
lean_dec(v_decl_1725_);
v___x_1846_ = lean_box(0);
v___y_1798_ = v_otherwise_x3f_1832_;
v___y_1799_ = v_rhs_1818_;
v_body_x3f_x3f_1800_ = v___x_1846_;
v___y_1801_ = v___y_1811_;
v___y_1802_ = v___y_1812_;
v___y_1803_ = v___y_1813_;
v___y_1804_ = v___y_1814_;
v___y_1805_ = v___y_1815_;
v___y_1806_ = v___y_1816_;
goto v___jp_1797_;
}
}
}
else
{
lean_object* v___x_1847_; 
lean_dec(v___x_1820_);
lean_dec(v_decl_1725_);
v___x_1847_ = lean_box(0);
v___y_1777_ = v_rhs_1818_;
v_otherwise_x3f_1778_ = v___x_1847_;
v_body_x3f_x3f_1779_ = v___x_1847_;
v___y_1780_ = v___y_1811_;
v___y_1781_ = v___y_1812_;
v___y_1782_ = v___y_1813_;
v___y_1783_ = v___y_1814_;
v___y_1784_ = v___y_1815_;
v___y_1785_ = v___y_1816_;
goto v___jp_1776_;
}
}
}
}
else
{
lean_object* v___x_1870_; lean_object* v_x_1871_; lean_object* v___y_1873_; lean_object* v___y_1874_; lean_object* v___y_1875_; lean_object* v___y_1876_; lean_object* v___y_1877_; lean_object* v___y_1878_; lean_object* v___x_1885_; uint8_t v___x_1886_; 
v___x_1870_ = lean_unsigned_to_nat(0u);
v_x_1871_ = l_Lean_Syntax_getArg(v_decl_1725_, v___x_1870_);
v___x_1885_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__10));
lean_inc(v_x_1871_);
v___x_1886_ = l_Lean_Syntax_isOfKind(v_x_1871_, v___x_1885_);
if (v___x_1886_ == 0)
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
lean_dec(v_x_1871_);
v___x_1887_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1888_ = lean_box(0);
v___x_1889_ = l_Lean_Syntax_formatStx(v_decl_1725_, v___x_1888_, v___x_1886_);
v___x_1890_ = l_Std_Format_defWidth;
v___x_1891_ = l_Std_Format_pretty(v___x_1889_, v___x_1890_, v___x_1870_, v___x_1870_);
v___x_1892_ = l_Lean_stringToMessageData(v___x_1891_);
v___x_1893_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1887_);
lean_ctor_set(v___x_1893_, 1, v___x_1892_);
v___x_1894_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1893_, v_a_1726_, v_a_1727_, v_a_1728_, v_a_1729_, v_a_1730_, v_a_1731_);
return v___x_1894_;
}
else
{
lean_object* v___x_1895_; lean_object* v___x_1896_; uint8_t v___x_1897_; 
v___x_1895_ = lean_unsigned_to_nat(1u);
v___x_1896_ = l_Lean_Syntax_getArg(v_decl_1725_, v___x_1895_);
v___x_1897_ = l_Lean_Syntax_isNone(v___x_1896_);
if (v___x_1897_ == 0)
{
uint8_t v___x_1898_; 
lean_inc(v___x_1896_);
v___x_1898_ = l_Lean_Syntax_matchesNull(v___x_1896_, v___x_1895_);
if (v___x_1898_ == 0)
{
lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; 
lean_dec(v___x_1896_);
lean_dec(v_x_1871_);
v___x_1899_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1900_ = lean_box(0);
v___x_1901_ = l_Lean_Syntax_formatStx(v_decl_1725_, v___x_1900_, v___x_1898_);
v___x_1902_ = l_Std_Format_defWidth;
v___x_1903_ = l_Std_Format_pretty(v___x_1901_, v___x_1902_, v___x_1870_, v___x_1870_);
v___x_1904_ = l_Lean_stringToMessageData(v___x_1903_);
v___x_1905_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1905_, 0, v___x_1899_);
lean_ctor_set(v___x_1905_, 1, v___x_1904_);
v___x_1906_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1905_, v_a_1726_, v_a_1727_, v_a_1728_, v_a_1729_, v_a_1730_, v_a_1731_);
return v___x_1906_;
}
else
{
lean_object* v___x_1907_; lean_object* v___x_1908_; uint8_t v___x_1909_; 
v___x_1907_ = l_Lean_Syntax_getArg(v___x_1896_, v___x_1870_);
lean_dec(v___x_1896_);
v___x_1908_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__8));
v___x_1909_ = l_Lean_Syntax_isOfKind(v___x_1907_, v___x_1908_);
if (v___x_1909_ == 0)
{
lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; 
lean_dec(v_x_1871_);
v___x_1910_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__5);
v___x_1911_ = lean_box(0);
v___x_1912_ = l_Lean_Syntax_formatStx(v_decl_1725_, v___x_1911_, v___x_1909_);
v___x_1913_ = l_Std_Format_defWidth;
v___x_1914_ = l_Std_Format_pretty(v___x_1912_, v___x_1913_, v___x_1870_, v___x_1870_);
v___x_1915_ = l_Lean_stringToMessageData(v___x_1914_);
v___x_1916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1916_, 0, v___x_1910_);
lean_ctor_set(v___x_1916_, 1, v___x_1915_);
v___x_1917_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_1916_, v_a_1726_, v_a_1727_, v_a_1728_, v_a_1729_, v_a_1730_, v_a_1731_);
return v___x_1917_;
}
else
{
v___y_1873_ = v_a_1726_;
v___y_1874_ = v_a_1727_;
v___y_1875_ = v_a_1728_;
v___y_1876_ = v_a_1729_;
v___y_1877_ = v_a_1730_;
v___y_1878_ = v_a_1731_;
goto v___jp_1872_;
}
}
}
else
{
lean_dec(v___x_1896_);
v___y_1873_ = v_a_1726_;
v___y_1874_ = v_a_1727_;
v___y_1875_ = v_a_1728_;
v___y_1876_ = v_a_1729_;
v___y_1877_ = v_a_1730_;
v___y_1878_ = v_a_1731_;
goto v___jp_1872_;
}
}
v___jp_1872_:
{
lean_object* v___x_1879_; lean_object* v_rhs_1880_; 
v___x_1879_ = lean_unsigned_to_nat(3u);
v_rhs_1880_ = l_Lean_Syntax_getArg(v_decl_1725_, v___x_1879_);
lean_dec(v_decl_1725_);
if (v_reassignment_1724_ == 0)
{
lean_object* v___x_1881_; 
lean_dec(v_x_1871_);
v___x_1881_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6));
v___y_1734_ = v___y_1878_;
v___y_1735_ = v___y_1875_;
v___y_1736_ = v___y_1873_;
v___y_1737_ = v___y_1874_;
v___y_1738_ = v___y_1876_;
v___y_1739_ = v_rhs_1880_;
v___y_1740_ = v___y_1877_;
v___y_1741_ = v___x_1881_;
goto v___jp_1733_;
}
else
{
lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1882_ = lean_unsigned_to_nat(1u);
v___x_1883_ = lean_mk_empty_array_with_capacity(v___x_1882_);
v___x_1884_ = lean_array_push(v___x_1883_, v_x_1871_);
v___y_1734_ = v___y_1878_;
v___y_1735_ = v___y_1875_;
v___y_1736_ = v___y_1873_;
v___y_1737_ = v___y_1874_;
v___y_1738_ = v___y_1876_;
v___y_1739_ = v_rhs_1880_;
v___y_1740_ = v___y_1877_;
v___y_1741_ = v___x_1884_;
goto v___jp_1733_;
}
}
}
v___jp_1733_:
{
lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1742_, 0, v___y_1739_);
v___x_1743_ = lean_box(0);
v___x_1744_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v___y_1741_, v___x_1742_, v___x_1743_, v___x_1743_, v___y_1736_, v___y_1737_, v___y_1735_, v___y_1738_, v___y_1740_, v___y_1734_);
return v___x_1744_;
}
v___jp_1745_:
{
lean_object* v___x_1756_; 
v___x_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1756_, 0, v___y_1746_);
if (lean_obj_tag(v___y_1748_) == 0)
{
lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1757_ = lean_box(0);
v___x_1758_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_reassigns_1749_, v___x_1756_, v___y_1747_, v___x_1757_, v___y_1750_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_);
return v___x_1758_;
}
else
{
lean_object* v_val_1759_; lean_object* v___x_1760_; 
v_val_1759_ = lean_ctor_get(v___y_1748_, 0);
lean_inc(v_val_1759_);
lean_dec_ref_known(v___y_1748_, 1);
v___x_1760_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_reassigns_1749_, v___x_1756_, v___y_1747_, v_val_1759_, v___y_1750_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_);
return v___x_1760_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(lean_object* v_as_2037_, size_t v_sz_2038_, size_t v_i_2039_, lean_object* v_b_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_){
_start:
{
uint8_t v___x_2048_; 
v___x_2048_ = lean_usize_dec_lt(v_i_2039_, v_sz_2038_);
if (v___x_2048_ == 0)
{
lean_object* v___x_2049_; 
v___x_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2049_, 0, v_b_2040_);
return v___x_2049_;
}
else
{
lean_object* v_a_2050_; lean_object* v___x_2051_; 
v_a_2050_ = lean_array_uget_borrowed(v_as_2037_, v_i_2039_);
lean_inc(v_a_2050_);
v___x_2051_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_a_2050_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_);
if (lean_obj_tag(v___x_2051_) == 0)
{
lean_object* v_a_2052_; lean_object* v___x_2053_; size_t v___x_2054_; size_t v___x_2055_; 
v_a_2052_ = lean_ctor_get(v___x_2051_, 0);
lean_inc(v_a_2052_);
lean_dec_ref_known(v___x_2051_, 1);
v___x_2053_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_2052_, v_b_2040_);
v___x_2054_ = ((size_t)1ULL);
v___x_2055_ = lean_usize_add(v_i_2039_, v___x_2054_);
v_i_2039_ = v___x_2055_;
v_b_2040_ = v___x_2053_;
goto _start;
}
else
{
lean_dec_ref(v_b_2040_);
return v___x_2051_;
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5(void){
_start:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; 
v___x_2070_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__4));
v___x_2071_ = l_Lean_stringToMessageData(v___x_2070_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(uint8_t v___x_2086_, lean_object* v_as_2087_, size_t v_sz_2088_, size_t v_i_2089_, lean_object* v_b_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_){
_start:
{
lean_object* v_a_2099_; uint8_t v___x_2103_; 
v___x_2103_ = lean_usize_dec_lt(v_i_2089_, v_sz_2088_);
if (v___x_2103_ == 0)
{
lean_object* v___x_2104_; 
v___x_2104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2104_, 0, v_b_2090_);
return v___x_2104_;
}
else
{
lean_object* v___x_2105_; lean_object* v_a_2106_; uint8_t v___x_2107_; 
v___x_2105_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1));
v_a_2106_ = lean_array_uget_borrowed(v_as_2087_, v_i_2089_);
lean_inc(v_a_2106_);
v___x_2107_ = l_Lean_Syntax_isOfKind(v_a_2106_, v___x_2105_);
if (v___x_2107_ == 0)
{
lean_object* v___x_2108_; 
v___x_2108_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_dec_ref_known(v___x_2108_, 1);
v_a_2099_ = v_b_2090_;
goto v___jp_2098_;
}
else
{
lean_object* v_a_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2116_; 
lean_dec_ref(v_b_2090_);
v_a_2109_ = lean_ctor_get(v___x_2108_, 0);
v_isSharedCheck_2116_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2111_ = v___x_2108_;
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_a_2109_);
lean_dec(v___x_2108_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2114_; 
if (v_isShared_2112_ == 0)
{
v___x_2114_ = v___x_2111_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_a_2109_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
}
}
else
{
lean_object* v___x_2117_; lean_object* v___y_2119_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; uint8_t v___x_2142_; 
v___x_2117_ = lean_unsigned_to_nat(3u);
v___x_2136_ = lean_unsigned_to_nat(1u);
v___x_2137_ = l_Lean_Syntax_getArg(v_a_2106_, v___x_2136_);
v___x_2138_ = l_Lean_Syntax_getArgs(v___x_2137_);
lean_dec(v___x_2137_);
v___x_2139_ = lean_unsigned_to_nat(0u);
v___x_2140_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2));
v___x_2141_ = lean_array_get_size(v___x_2138_);
v___x_2142_ = lean_nat_dec_lt(v___x_2139_, v___x_2141_);
if (v___x_2142_ == 0)
{
lean_dec_ref(v___x_2138_);
v___y_2119_ = v___x_2140_;
goto v___jp_2118_;
}
else
{
lean_object* v___x_2143_; lean_object* v___x_2144_; size_t v___x_2145_; size_t v___x_2146_; lean_object* v___x_2147_; lean_object* v_snd_2148_; 
v___x_2143_ = lean_box(v___x_2142_);
v___x_2144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2143_);
lean_ctor_set(v___x_2144_, 1, v___x_2140_);
v___x_2145_ = ((size_t)0ULL);
v___x_2146_ = lean_usize_of_nat(v___x_2141_);
v___x_2147_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v___x_2107_, v___x_2086_, v___x_2138_, v___x_2145_, v___x_2146_, v___x_2144_);
lean_dec_ref(v___x_2138_);
v_snd_2148_ = lean_ctor_get(v___x_2147_, 1);
lean_inc(v_snd_2148_);
lean_dec_ref(v___x_2147_);
v___y_2119_ = v_snd_2148_;
goto v___jp_2118_;
}
v___jp_2118_:
{
size_t v_sz_2120_; size_t v___x_2121_; lean_object* v___x_2122_; 
v_sz_2120_ = lean_array_size(v___y_2119_);
v___x_2121_ = ((size_t)0ULL);
v___x_2122_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(v_sz_2120_, v___x_2121_, v___y_2119_);
if (lean_obj_tag(v___x_2122_) == 0)
{
lean_object* v___x_2123_; 
v___x_2123_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
if (lean_obj_tag(v___x_2123_) == 0)
{
lean_dec_ref_known(v___x_2123_, 1);
v_a_2099_ = v_b_2090_;
goto v___jp_2098_;
}
else
{
lean_object* v_a_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2131_; 
lean_dec_ref(v_b_2090_);
v_a_2124_ = lean_ctor_get(v___x_2123_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v___x_2123_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2126_ = v___x_2123_;
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_a_2124_);
lean_dec(v___x_2123_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2129_; 
if (v_isShared_2127_ == 0)
{
v___x_2129_ = v___x_2126_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_a_2124_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
}
}
else
{
lean_object* v___x_2132_; lean_object* v___x_2133_; 
lean_dec_ref_known(v___x_2122_, 1);
v___x_2132_ = l_Lean_Syntax_getArg(v_a_2106_, v___x_2117_);
v___x_2133_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2132_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_);
if (lean_obj_tag(v___x_2133_) == 0)
{
lean_object* v_a_2134_; lean_object* v___x_2135_; 
v_a_2134_ = lean_ctor_get(v___x_2133_, 0);
lean_inc(v_a_2134_);
lean_dec_ref_known(v___x_2133_, 1);
v___x_2135_ = l_Lean_Elab_Do_ControlInfo_alternative(v_b_2090_, v_a_2134_);
v_a_2099_ = v___x_2135_;
goto v___jp_2098_;
}
else
{
lean_dec_ref(v_b_2090_);
return v___x_2133_;
}
}
}
}
}
v___jp_2098_:
{
size_t v___x_2100_; size_t v___x_2101_; 
v___x_2100_ = ((size_t)1ULL);
v___x_2101_ = lean_usize_add(v_i_2089_, v___x_2100_);
v_i_2089_ = v___x_2101_;
v_b_2090_ = v_a_2099_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(lean_object* v_as_2149_, size_t v_sz_2150_, size_t v_i_2151_, lean_object* v_b_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_){
_start:
{
lean_object* v_a_2161_; uint8_t v___x_2165_; 
v___x_2165_ = lean_usize_dec_lt(v_i_2151_, v_sz_2150_);
if (v___x_2165_ == 0)
{
lean_object* v___x_2166_; 
v___x_2166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2166_, 0, v_b_2152_);
return v___x_2166_;
}
else
{
lean_object* v___x_2167_; lean_object* v_a_2168_; lean_object* v___y_2170_; lean_object* v___y_2171_; lean_object* v___y_2172_; lean_object* v___y_2173_; lean_object* v___y_2174_; lean_object* v___y_2175_; lean_object* v___x_2181_; uint8_t v___x_2182_; 
v___x_2167_ = lean_unsigned_to_nat(0u);
v_a_2168_ = lean_array_uget_borrowed(v_as_2149_, v_i_2151_);
v___x_2181_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__1));
lean_inc(v_a_2168_);
v___x_2182_ = l_Lean_Syntax_isOfKind(v_a_2168_, v___x_2181_);
if (v___x_2182_ == 0)
{
lean_object* v___x_2183_; uint8_t v___x_2184_; 
v___x_2183_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__3));
lean_inc(v_a_2168_);
v___x_2184_ = l_Lean_Syntax_isOfKind(v_a_2168_, v___x_2183_);
if (v___x_2184_ == 0)
{
lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2185_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5);
v___x_2186_ = lean_box(0);
lean_inc(v_a_2168_);
v___x_2187_ = l_Lean_Syntax_formatStx(v_a_2168_, v___x_2186_, v___x_2184_);
v___x_2188_ = l_Std_Format_defWidth;
v___x_2189_ = l_Std_Format_pretty(v___x_2187_, v___x_2188_, v___x_2167_, v___x_2167_);
v___x_2190_ = l_Lean_stringToMessageData(v___x_2189_);
v___x_2191_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2191_, 0, v___x_2185_);
lean_ctor_set(v___x_2191_, 1, v___x_2190_);
v___x_2192_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2191_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_);
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_dec_ref_known(v___x_2192_, 1);
v_a_2161_ = v_b_2152_;
goto v___jp_2160_;
}
else
{
lean_object* v_a_2193_; lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2200_; 
lean_dec_ref(v_b_2152_);
v_a_2193_ = lean_ctor_get(v___x_2192_, 0);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2192_);
if (v_isSharedCheck_2200_ == 0)
{
v___x_2195_ = v___x_2192_;
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
else
{
lean_inc(v_a_2193_);
lean_dec(v___x_2192_);
v___x_2195_ = lean_box(0);
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
v_resetjp_2194_:
{
lean_object* v___x_2198_; 
if (v_isShared_2196_ == 0)
{
v___x_2198_ = v___x_2195_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v_a_2193_);
v___x_2198_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
return v___x_2198_;
}
}
}
}
else
{
lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; uint8_t v___x_2204_; 
v___x_2201_ = lean_unsigned_to_nat(1u);
v___x_2202_ = l_Lean_Syntax_getArg(v_a_2168_, v___x_2201_);
v___x_2203_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7));
lean_inc(v___x_2202_);
v___x_2204_ = l_Lean_Syntax_isOfKind(v___x_2202_, v___x_2203_);
if (v___x_2204_ == 0)
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
lean_dec(v___x_2202_);
v___x_2205_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5);
v___x_2206_ = lean_box(0);
lean_inc(v_a_2168_);
v___x_2207_ = l_Lean_Syntax_formatStx(v_a_2168_, v___x_2206_, v___x_2204_);
v___x_2208_ = l_Std_Format_defWidth;
v___x_2209_ = l_Std_Format_pretty(v___x_2207_, v___x_2208_, v___x_2167_, v___x_2167_);
v___x_2210_ = l_Lean_stringToMessageData(v___x_2209_);
v___x_2211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2211_, 0, v___x_2205_);
lean_ctor_set(v___x_2211_, 1, v___x_2210_);
v___x_2212_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2211_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_);
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_dec_ref_known(v___x_2212_, 1);
v_a_2161_ = v_b_2152_;
goto v___jp_2160_;
}
else
{
lean_object* v_a_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2220_; 
lean_dec_ref(v_b_2152_);
v_a_2213_ = lean_ctor_get(v___x_2212_, 0);
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2215_ = v___x_2212_;
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_a_2213_);
lean_dec(v___x_2212_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v___x_2218_; 
if (v_isShared_2216_ == 0)
{
v___x_2218_ = v___x_2215_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v_a_2213_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
}
else
{
lean_object* v___x_2221_; lean_object* v___x_2222_; size_t v_sz_2223_; size_t v___x_2224_; lean_object* v___x_2225_; 
v___x_2221_ = l_Lean_Syntax_getArg(v___x_2202_, v___x_2167_);
lean_dec(v___x_2202_);
v___x_2222_ = l_Lean_Syntax_getArgs(v___x_2221_);
lean_dec(v___x_2221_);
v_sz_2223_ = lean_array_size(v___x_2222_);
v___x_2224_ = ((size_t)0ULL);
v___x_2225_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(v___x_2182_, v___x_2222_, v_sz_2223_, v___x_2224_, v_b_2152_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_);
lean_dec_ref(v___x_2222_);
if (lean_obj_tag(v___x_2225_) == 0)
{
lean_object* v_a_2226_; 
v_a_2226_ = lean_ctor_get(v___x_2225_, 0);
lean_inc(v_a_2226_);
lean_dec_ref_known(v___x_2225_, 1);
v_a_2161_ = v_a_2226_;
goto v___jp_2160_;
}
else
{
return v___x_2225_;
}
}
}
}
else
{
lean_object* v___x_2227_; lean_object* v___x_2228_; uint8_t v___x_2229_; 
v___x_2227_ = lean_unsigned_to_nat(2u);
v___x_2228_ = l_Lean_Syntax_getArg(v_a_2168_, v___x_2227_);
v___x_2229_ = l_Lean_Syntax_isNone(v___x_2228_);
if (v___x_2229_ == 0)
{
uint8_t v___x_2230_; 
v___x_2230_ = l_Lean_Syntax_matchesNull(v___x_2228_, v___x_2227_);
if (v___x_2230_ == 0)
{
lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
v___x_2231_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__5);
v___x_2232_ = lean_box(0);
lean_inc(v_a_2168_);
v___x_2233_ = l_Lean_Syntax_formatStx(v_a_2168_, v___x_2232_, v___x_2230_);
v___x_2234_ = l_Std_Format_defWidth;
v___x_2235_ = l_Std_Format_pretty(v___x_2233_, v___x_2234_, v___x_2167_, v___x_2167_);
v___x_2236_ = l_Lean_stringToMessageData(v___x_2235_);
v___x_2237_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2237_, 0, v___x_2231_);
lean_ctor_set(v___x_2237_, 1, v___x_2236_);
v___x_2238_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2237_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_);
if (lean_obj_tag(v___x_2238_) == 0)
{
lean_dec_ref_known(v___x_2238_, 1);
v_a_2161_ = v_b_2152_;
goto v___jp_2160_;
}
else
{
lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2246_; 
lean_dec_ref(v_b_2152_);
v_a_2239_ = lean_ctor_get(v___x_2238_, 0);
v_isSharedCheck_2246_ = !lean_is_exclusive(v___x_2238_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2241_ = v___x_2238_;
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v___x_2238_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v___x_2244_; 
if (v_isShared_2242_ == 0)
{
v___x_2244_ = v___x_2241_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v_a_2239_);
v___x_2244_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
return v___x_2244_;
}
}
}
}
else
{
v___y_2170_ = v___y_2153_;
v___y_2171_ = v___y_2154_;
v___y_2172_ = v___y_2155_;
v___y_2173_ = v___y_2156_;
v___y_2174_ = v___y_2157_;
v___y_2175_ = v___y_2158_;
goto v___jp_2169_;
}
}
else
{
lean_dec(v___x_2228_);
v___y_2170_ = v___y_2153_;
v___y_2171_ = v___y_2154_;
v___y_2172_ = v___y_2155_;
v___y_2173_ = v___y_2156_;
v___y_2174_ = v___y_2157_;
v___y_2175_ = v___y_2158_;
goto v___jp_2169_;
}
}
v___jp_2169_:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
v___x_2176_ = lean_unsigned_to_nat(4u);
v___x_2177_ = l_Lean_Syntax_getArg(v_a_2168_, v___x_2176_);
v___x_2178_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2177_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_);
if (lean_obj_tag(v___x_2178_) == 0)
{
lean_object* v_a_2179_; lean_object* v___x_2180_; 
v_a_2179_ = lean_ctor_get(v___x_2178_, 0);
lean_inc(v_a_2179_);
lean_dec_ref_known(v___x_2178_, 1);
v___x_2180_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_2179_, v_b_2152_);
v_a_2161_ = v___x_2180_;
goto v___jp_2160_;
}
else
{
lean_dec_ref(v_b_2152_);
return v___x_2178_;
}
}
}
v___jp_2160_:
{
size_t v___x_2162_; size_t v___x_2163_; 
v___x_2162_ = ((size_t)1ULL);
v___x_2163_ = lean_usize_add(v_i_2151_, v___x_2162_);
v_i_2151_ = v___x_2163_;
v_b_2152_ = v_a_2161_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(lean_object* v_stx_x3f_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_){
_start:
{
if (lean_obj_tag(v_stx_x3f_2247_) == 0)
{
lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2255_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___x_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2255_);
return v___x_2256_;
}
else
{
lean_object* v_val_2257_; lean_object* v___x_2258_; 
v_val_2257_ = lean_ctor_get(v_stx_x3f_2247_, 0);
lean_inc(v_val_2257_);
lean_dec_ref_known(v_stx_x3f_2247_, 1);
v___x_2258_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_2257_, v_a_2248_, v_a_2249_, v_a_2250_, v_a_2251_, v_a_2252_, v_a_2253_);
return v___x_2258_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(uint8_t v___x_2277_, lean_object* v_as_2278_, size_t v_sz_2279_, size_t v_i_2280_, lean_object* v_b_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_){
_start:
{
lean_object* v_a_2290_; uint8_t v___x_2294_; 
v___x_2294_ = lean_usize_dec_lt(v_i_2280_, v_sz_2279_);
if (v___x_2294_ == 0)
{
lean_object* v___x_2295_; 
v___x_2295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2295_, 0, v_b_2281_);
return v___x_2295_;
}
else
{
lean_object* v___x_2296_; lean_object* v_a_2297_; uint8_t v___x_2298_; 
v___x_2296_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__1));
v_a_2297_ = lean_array_uget_borrowed(v_as_2278_, v_i_2280_);
lean_inc(v_a_2297_);
v___x_2298_ = l_Lean_Syntax_isOfKind(v_a_2297_, v___x_2296_);
if (v___x_2298_ == 0)
{
lean_object* v___x_2299_; 
v___x_2299_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
if (lean_obj_tag(v___x_2299_) == 0)
{
lean_dec_ref_known(v___x_2299_, 1);
v_a_2290_ = v_b_2281_;
goto v___jp_2289_;
}
else
{
lean_object* v_a_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2307_; 
lean_dec_ref(v_b_2281_);
v_a_2300_ = lean_ctor_get(v___x_2299_, 0);
v_isSharedCheck_2307_ = !lean_is_exclusive(v___x_2299_);
if (v_isSharedCheck_2307_ == 0)
{
v___x_2302_ = v___x_2299_;
v_isShared_2303_ = v_isSharedCheck_2307_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_a_2300_);
lean_dec(v___x_2299_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2307_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v___x_2305_; 
if (v_isShared_2303_ == 0)
{
v___x_2305_ = v___x_2302_;
goto v_reusejp_2304_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v_a_2300_);
v___x_2305_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2304_;
}
v_reusejp_2304_:
{
return v___x_2305_;
}
}
}
}
else
{
lean_object* v___x_2308_; lean_object* v___y_2310_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; uint8_t v___x_2333_; 
v___x_2308_ = lean_unsigned_to_nat(3u);
v___x_2327_ = lean_unsigned_to_nat(1u);
v___x_2328_ = l_Lean_Syntax_getArg(v_a_2297_, v___x_2327_);
v___x_2329_ = l_Lean_Syntax_getArgs(v___x_2328_);
lean_dec(v___x_2328_);
v___x_2330_ = lean_unsigned_to_nat(0u);
v___x_2331_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2));
v___x_2332_ = lean_array_get_size(v___x_2329_);
v___x_2333_ = lean_nat_dec_lt(v___x_2330_, v___x_2332_);
if (v___x_2333_ == 0)
{
lean_dec_ref(v___x_2329_);
v___y_2310_ = v___x_2331_;
goto v___jp_2309_;
}
else
{
lean_object* v___x_2334_; lean_object* v___x_2335_; size_t v___x_2336_; size_t v___x_2337_; lean_object* v___x_2338_; lean_object* v_snd_2339_; 
v___x_2334_ = lean_box(v___x_2333_);
v___x_2335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2334_);
lean_ctor_set(v___x_2335_, 1, v___x_2331_);
v___x_2336_ = ((size_t)0ULL);
v___x_2337_ = lean_usize_of_nat(v___x_2332_);
v___x_2338_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v___x_2298_, v___x_2277_, v___x_2329_, v___x_2336_, v___x_2337_, v___x_2335_);
lean_dec_ref(v___x_2329_);
v_snd_2339_ = lean_ctor_get(v___x_2338_, 1);
lean_inc(v_snd_2339_);
lean_dec_ref(v___x_2338_);
v___y_2310_ = v_snd_2339_;
goto v___jp_2309_;
}
v___jp_2309_:
{
size_t v_sz_2311_; size_t v___x_2312_; lean_object* v___x_2313_; 
v_sz_2311_ = lean_array_size(v___y_2310_);
v___x_2312_ = ((size_t)0ULL);
v___x_2313_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__7(v_sz_2311_, v___x_2312_, v___y_2310_);
if (lean_obj_tag(v___x_2313_) == 0)
{
lean_object* v___x_2314_; 
v___x_2314_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
if (lean_obj_tag(v___x_2314_) == 0)
{
lean_dec_ref_known(v___x_2314_, 1);
v_a_2290_ = v_b_2281_;
goto v___jp_2289_;
}
else
{
lean_object* v_a_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2322_; 
lean_dec_ref(v_b_2281_);
v_a_2315_ = lean_ctor_get(v___x_2314_, 0);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___x_2314_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2317_ = v___x_2314_;
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_a_2315_);
lean_dec(v___x_2314_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v___x_2320_; 
if (v_isShared_2318_ == 0)
{
v___x_2320_ = v___x_2317_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v_a_2315_);
v___x_2320_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
return v___x_2320_;
}
}
}
}
else
{
lean_object* v___x_2323_; lean_object* v___x_2324_; 
lean_dec_ref_known(v___x_2313_, 1);
v___x_2323_ = l_Lean_Syntax_getArg(v_a_2297_, v___x_2308_);
v___x_2324_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2323_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_);
if (lean_obj_tag(v___x_2324_) == 0)
{
lean_object* v_a_2325_; lean_object* v___x_2326_; 
v_a_2325_ = lean_ctor_get(v___x_2324_, 0);
lean_inc(v_a_2325_);
lean_dec_ref_known(v___x_2324_, 1);
v___x_2326_ = l_Lean_Elab_Do_ControlInfo_alternative(v_b_2281_, v_a_2325_);
v_a_2290_ = v___x_2326_;
goto v___jp_2289_;
}
else
{
lean_dec_ref(v_b_2281_);
return v___x_2324_;
}
}
}
}
}
v___jp_2289_:
{
size_t v___x_2291_; size_t v___x_2292_; 
v___x_2291_ = ((size_t)1ULL);
v___x_2292_ = lean_usize_add(v_i_2280_, v___x_2291_);
v_i_2280_ = v___x_2292_;
v_b_2281_ = v_a_2290_;
goto _start;
}
}
}
static lean_object* _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__95(void){
_start:
{
lean_object* v___x_2388_; lean_object* v___x_2389_; uint8_t v___x_2390_; uint8_t v___x_2391_; lean_object* v___x_2392_; 
v___x_2388_ = l_Lean_NameSet_empty;
v___x_2389_ = lean_unsigned_to_nat(0u);
v___x_2390_ = 0;
v___x_2391_ = 1;
v___x_2392_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2392_, 0, v___x_2389_);
lean_ctor_set(v___x_2392_, 1, v___x_2388_);
lean_ctor_set_uint8(v___x_2392_, sizeof(void*)*2, v___x_2391_);
lean_ctor_set_uint8(v___x_2392_, sizeof(void*)*2 + 1, v___x_2390_);
lean_ctor_set_uint8(v___x_2392_, sizeof(void*)*2 + 2, v___x_2390_);
lean_ctor_set_uint8(v___x_2392_, sizeof(void*)*2 + 3, v___x_2391_);
return v___x_2392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem(lean_object* v_stx_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_){
_start:
{
lean_object* v___y_2402_; lean_object* v_bodyInfo_2403_; lean_object* v___y_2407_; lean_object* v___y_2408_; lean_object* v___y_2409_; lean_object* v___y_2410_; lean_object* v___y_2411_; lean_object* v___y_2412_; lean_object* v___y_2413_; lean_object* v___y_2414_; lean_object* v___y_2420_; lean_object* v___y_2421_; lean_object* v___y_2422_; lean_object* v___y_2423_; lean_object* v___y_2424_; lean_object* v___y_2425_; lean_object* v___y_2442_; lean_object* v_bodyInfo_2443_; lean_object* v___x_2446_; lean_object* v_env_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2446_ = lean_st_ref_get(v_a_2399_);
v_env_2447_ = lean_ctor_get(v___x_2446_, 0);
lean_inc_ref(v_env_2447_);
lean_dec(v___x_2446_);
lean_inc(v_stx_2393_);
v___x_2448_ = lean_alloc_closure((void*)(l_Lean_Elab_expandMacroImpl_x3f___boxed), 4, 2);
lean_closure_set(v___x_2448_, 0, v_env_2447_);
lean_closure_set(v___x_2448_, 1, v_stx_2393_);
v___x_2449_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v___x_2448_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_2449_) == 0)
{
lean_object* v_a_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_5333_; 
v_a_2450_ = lean_ctor_get(v___x_2449_, 0);
v_isSharedCheck_5333_ = !lean_is_exclusive(v___x_2449_);
if (v_isSharedCheck_5333_ == 0)
{
v___x_2452_ = v___x_2449_;
v_isShared_2453_ = v_isSharedCheck_5333_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_a_2450_);
lean_dec(v___x_2449_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_5333_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
if (lean_obj_tag(v_a_2450_) == 1)
{
lean_object* v_val_2454_; lean_object* v_snd_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; 
lean_del_object(v___x_2452_);
lean_dec(v_stx_2393_);
v_val_2454_ = lean_ctor_get(v_a_2450_, 0);
lean_inc(v_val_2454_);
lean_dec_ref_known(v_a_2450_, 1);
v_snd_2455_ = lean_ctor_get(v_val_2454_, 1);
lean_inc(v_snd_2455_);
lean_dec(v_val_2454_);
v___x_2456_ = lean_alloc_closure((void*)(l_liftExcept___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__1___boxed), 4, 2);
lean_closure_set(v___x_2456_, 0, lean_box(0));
lean_closure_set(v___x_2456_, 1, v_snd_2455_);
v___x_2457_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v___x_2456_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_2457_) == 0)
{
lean_object* v_a_2458_; 
v_a_2458_ = lean_ctor_get(v___x_2457_, 0);
lean_inc(v_a_2458_);
lean_dec_ref_known(v___x_2457_, 1);
v_stx_2393_ = v_a_2458_;
goto _start;
}
else
{
lean_object* v_a_2460_; lean_object* v___x_2462_; uint8_t v_isShared_2463_; uint8_t v_isSharedCheck_2467_; 
v_a_2460_ = lean_ctor_get(v___x_2457_, 0);
v_isSharedCheck_2467_ = !lean_is_exclusive(v___x_2457_);
if (v_isSharedCheck_2467_ == 0)
{
v___x_2462_ = v___x_2457_;
v_isShared_2463_ = v_isSharedCheck_2467_;
goto v_resetjp_2461_;
}
else
{
lean_inc(v_a_2460_);
lean_dec(v___x_2457_);
v___x_2462_ = lean_box(0);
v_isShared_2463_ = v_isSharedCheck_2467_;
goto v_resetjp_2461_;
}
v_resetjp_2461_:
{
lean_object* v___x_2465_; 
if (v_isShared_2463_ == 0)
{
v___x_2465_ = v___x_2462_;
goto v_reusejp_2464_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v_a_2460_);
v___x_2465_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2464_;
}
v_reusejp_2464_:
{
return v___x_2465_;
}
}
}
}
else
{
lean_object* v___y_2469_; lean_object* v___y_2470_; lean_object* v___y_2471_; lean_object* v___y_2472_; lean_object* v___y_2473_; lean_object* v___y_2474_; lean_object* v___y_2554_; lean_object* v___y_2555_; lean_object* v___y_2556_; lean_object* v___y_2557_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___x_2692_; uint8_t v___x_2693_; uint8_t v___x_2694_; 
lean_dec(v_a_2450_);
v___x_2692_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__15));
lean_inc(v_stx_2393_);
v___x_2693_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2692_);
v___x_2694_ = 1;
if (v___x_2693_ == 0)
{
lean_object* v___x_2695_; uint8_t v___x_2696_; 
v___x_2695_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__17));
lean_inc(v_stx_2393_);
v___x_2696_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2695_);
if (v___x_2696_ == 0)
{
lean_object* v___x_2697_; uint8_t v___x_2698_; 
v___x_2697_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__19));
lean_inc(v_stx_2393_);
v___x_2698_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2697_);
if (v___x_2698_ == 0)
{
lean_object* v___x_2699_; uint8_t v___x_2700_; 
v___x_2699_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__21));
lean_inc(v_stx_2393_);
v___x_2700_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2699_);
if (v___x_2700_ == 0)
{
lean_object* v___x_2701_; uint8_t v___x_2702_; 
v___x_2701_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__23));
lean_inc(v_stx_2393_);
v___x_2702_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2701_);
if (v___x_2702_ == 0)
{
lean_object* v___x_2703_; uint8_t v___x_2704_; 
v___x_2703_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__25));
lean_inc(v_stx_2393_);
v___x_2704_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2703_);
if (v___x_2704_ == 0)
{
lean_object* v___x_2705_; uint8_t v___x_2706_; 
lean_del_object(v___x_2452_);
v___x_2705_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__27));
lean_inc(v_stx_2393_);
v___x_2706_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2705_);
if (v___x_2706_ == 0)
{
lean_object* v___x_2707_; uint8_t v___x_2708_; 
v___x_2707_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__29));
lean_inc(v_stx_2393_);
v___x_2708_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2707_);
if (v___x_2708_ == 0)
{
lean_object* v___x_2709_; uint8_t v___x_2710_; lean_object* v___y_2712_; lean_object* v___y_2713_; lean_object* v___y_2714_; lean_object* v___y_2715_; lean_object* v___y_2716_; lean_object* v___y_2717_; 
v___x_2709_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__31));
lean_inc(v_stx_2393_);
v___x_2710_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2709_);
if (v___x_2710_ == 0)
{
lean_object* v___x_2785_; uint8_t v___x_2786_; 
v___x_2785_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__33));
lean_inc(v_stx_2393_);
v___x_2786_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2785_);
if (v___x_2786_ == 0)
{
lean_object* v___x_2787_; uint8_t v___x_2788_; 
v___x_2787_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__35));
lean_inc(v_stx_2393_);
v___x_2788_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2787_);
if (v___x_2788_ == 0)
{
lean_object* v___x_2789_; uint8_t v___x_2790_; 
v___x_2789_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__37));
lean_inc(v_stx_2393_);
v___x_2790_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2789_);
if (v___x_2790_ == 0)
{
lean_object* v___x_2791_; uint8_t v___x_2792_; 
v___x_2791_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__39));
lean_inc(v_stx_2393_);
v___x_2792_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2791_);
if (v___x_2792_ == 0)
{
lean_object* v___x_2793_; uint8_t v___x_2794_; 
v___x_2793_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__41));
lean_inc(v_stx_2393_);
v___x_2794_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2793_);
if (v___x_2794_ == 0)
{
lean_object* v___x_2795_; uint8_t v___x_2796_; 
v___x_2795_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__43));
lean_inc(v_stx_2393_);
v___x_2796_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2795_);
if (v___x_2796_ == 0)
{
lean_object* v___x_2797_; uint8_t v___x_2798_; 
v___x_2797_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__45));
lean_inc(v_stx_2393_);
v___x_2798_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2797_);
if (v___x_2798_ == 0)
{
lean_object* v___x_2799_; uint8_t v___x_2800_; lean_object* v___y_2802_; lean_object* v___y_2803_; uint8_t v___y_2804_; uint8_t v___y_2805_; 
v___x_2799_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_2800_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2799_);
if (v___x_2800_ == 0)
{
lean_object* v___x_2808_; uint8_t v___x_2809_; 
v___x_2808_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__47));
lean_inc(v_stx_2393_);
v___x_2809_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2808_);
if (v___x_2809_ == 0)
{
lean_object* v___x_2810_; uint8_t v___x_2811_; 
v___x_2810_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__49));
lean_inc(v_stx_2393_);
v___x_2811_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2810_);
if (v___x_2811_ == 0)
{
lean_object* v___x_2812_; uint8_t v___x_2813_; 
v___x_2812_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__52));
lean_inc(v_stx_2393_);
v___x_2813_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2812_);
if (v___x_2813_ == 0)
{
lean_object* v___x_2814_; uint8_t v___x_2815_; 
v___x_2814_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__54));
lean_inc(v_stx_2393_);
v___x_2815_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2814_);
if (v___x_2815_ == 0)
{
lean_object* v___x_2816_; uint8_t v___x_2817_; 
v___x_2816_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__56));
lean_inc(v_stx_2393_);
v___x_2817_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2816_);
if (v___x_2817_ == 0)
{
lean_object* v___x_2818_; uint8_t v___x_2819_; 
v___x_2818_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__58));
lean_inc(v_stx_2393_);
v___x_2819_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2818_);
if (v___x_2819_ == 0)
{
lean_object* v___x_2820_; uint8_t v___x_2821_; 
v___x_2820_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__60));
lean_inc(v_stx_2393_);
v___x_2821_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2820_);
if (v___x_2821_ == 0)
{
lean_object* v___x_2822_; uint8_t v___x_2823_; 
v___x_2822_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__62));
lean_inc(v_stx_2393_);
v___x_2823_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2822_);
if (v___x_2823_ == 0)
{
lean_object* v___x_2824_; uint8_t v___x_2825_; 
v___x_2824_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__64));
lean_inc(v_stx_2393_);
v___x_2825_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2824_);
if (v___x_2825_ == 0)
{
lean_object* v___x_2826_; uint8_t v___x_2827_; 
v___x_2826_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__66));
lean_inc(v_stx_2393_);
v___x_2827_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2826_);
if (v___x_2827_ == 0)
{
lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v_env_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; 
lean_inc_n(v_stx_2393_, 2);
v___x_2828_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_2829_ = lean_st_ref_get(v_a_2399_);
v_env_2830_ = lean_ctor_get(v___x_2829_, 0);
lean_inc_ref(v_env_2830_);
lean_dec(v___x_2829_);
v___x_2831_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2832_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2831_, v_env_2830_, v___x_2828_);
v___x_2833_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2834_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_2832_, v___x_2833_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_2832_);
if (lean_obj_tag(v___x_2834_) == 0)
{
lean_object* v_a_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2865_; 
v_a_2835_ = lean_ctor_get(v___x_2834_, 0);
v_isSharedCheck_2865_ = !lean_is_exclusive(v___x_2834_);
if (v_isSharedCheck_2865_ == 0)
{
v___x_2837_ = v___x_2834_;
v_isShared_2838_ = v_isSharedCheck_2865_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_a_2835_);
lean_dec(v___x_2834_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2865_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v_fst_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2863_; 
v_fst_2839_ = lean_ctor_get(v_a_2835_, 0);
v_isSharedCheck_2863_ = !lean_is_exclusive(v_a_2835_);
if (v_isSharedCheck_2863_ == 0)
{
lean_object* v_unused_2864_; 
v_unused_2864_ = lean_ctor_get(v_a_2835_, 1);
lean_dec(v_unused_2864_);
v___x_2841_ = v_a_2835_;
v_isShared_2842_ = v_isSharedCheck_2863_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_fst_2839_);
lean_dec(v_a_2835_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2863_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
if (lean_obj_tag(v_fst_2839_) == 0)
{
lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2846_; 
lean_del_object(v___x_2837_);
v___x_2843_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2844_ = l_Lean_MessageData_ofName(v___x_2828_);
lean_inc_ref(v___x_2844_);
if (v_isShared_2842_ == 0)
{
lean_ctor_set_tag(v___x_2841_, 7);
lean_ctor_set(v___x_2841_, 1, v___x_2844_);
lean_ctor_set(v___x_2841_, 0, v___x_2843_);
v___x_2846_ = v___x_2841_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v___x_2843_);
lean_ctor_set(v_reuseFailAlloc_2858_, 1, v___x_2844_);
v___x_2846_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; 
v___x_2847_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2848_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2846_);
lean_ctor_set(v___x_2848_, 1, v___x_2847_);
v___x_2849_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_2850_ = l_Lean_indentD(v___x_2849_);
v___x_2851_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2848_);
lean_ctor_set(v___x_2851_, 1, v___x_2850_);
v___x_2852_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2853_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2853_, 0, v___x_2851_);
lean_ctor_set(v___x_2853_, 1, v___x_2852_);
v___x_2854_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2854_, 0, v___x_2853_);
lean_ctor_set(v___x_2854_, 1, v___x_2844_);
v___x_2855_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_2856_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2854_);
lean_ctor_set(v___x_2856_, 1, v___x_2855_);
v___x_2857_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2856_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_2857_;
}
}
else
{
lean_object* v_val_2859_; lean_object* v___x_2861_; 
lean_del_object(v___x_2841_);
lean_dec(v___x_2828_);
lean_dec(v_stx_2393_);
v_val_2859_ = lean_ctor_get(v_fst_2839_, 0);
lean_inc(v_val_2859_);
lean_dec_ref_known(v_fst_2839_, 1);
if (v_isShared_2838_ == 0)
{
lean_ctor_set(v___x_2837_, 0, v_val_2859_);
v___x_2861_ = v___x_2837_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v_val_2859_);
v___x_2861_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
return v___x_2861_;
}
}
}
}
}
else
{
lean_object* v_a_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2873_; 
lean_dec(v___x_2828_);
lean_dec(v_stx_2393_);
v_a_2866_ = lean_ctor_get(v___x_2834_, 0);
v_isSharedCheck_2873_ = !lean_is_exclusive(v___x_2834_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2868_ = v___x_2834_;
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_a_2866_);
lean_dec(v___x_2834_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2871_; 
if (v_isShared_2869_ == 0)
{
v___x_2871_ = v___x_2868_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v_a_2866_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
return v___x_2871_;
}
}
}
}
else
{
lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___y_2878_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; 
v___x_2874_ = lean_unsigned_to_nat(1u);
v___x_2875_ = lean_unsigned_to_nat(5u);
v___x_2876_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2875_);
v___x_2887_ = lean_unsigned_to_nat(6u);
v___x_2888_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2887_);
lean_dec(v_stx_2393_);
v___x_2889_ = l_Lean_Syntax_getOptional_x3f(v___x_2888_);
lean_dec(v___x_2888_);
if (lean_obj_tag(v___x_2889_) == 0)
{
lean_object* v___x_2890_; 
v___x_2890_ = lean_box(0);
v___y_2878_ = v___x_2890_;
goto v___jp_2877_;
}
else
{
lean_object* v_val_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2898_; 
v_val_2891_ = lean_ctor_get(v___x_2889_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v___x_2889_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2893_ = v___x_2889_;
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_val_2891_);
lean_dec(v___x_2889_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2896_; 
if (v_isShared_2894_ == 0)
{
v___x_2896_ = v___x_2893_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_val_2891_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
v___y_2878_ = v___x_2896_;
goto v___jp_2877_;
}
}
}
v___jp_2877_:
{
lean_object* v___x_2879_; 
v___x_2879_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2876_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_2879_) == 0)
{
if (lean_obj_tag(v___y_2878_) == 0)
{
lean_object* v_a_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; 
v_a_2880_ = lean_ctor_get(v___x_2879_, 0);
lean_inc(v_a_2880_);
lean_dec_ref_known(v___x_2879_, 1);
v___x_2881_ = l_Lean_NameSet_empty;
v___x_2882_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2882_, 0, v___x_2874_);
lean_ctor_set(v___x_2882_, 1, v___x_2881_);
lean_ctor_set_uint8(v___x_2882_, sizeof(void*)*2, v___x_2825_);
lean_ctor_set_uint8(v___x_2882_, sizeof(void*)*2 + 1, v___x_2825_);
lean_ctor_set_uint8(v___x_2882_, sizeof(void*)*2 + 2, v___x_2825_);
lean_ctor_set_uint8(v___x_2882_, sizeof(void*)*2 + 3, v___x_2825_);
v___y_2402_ = v_a_2880_;
v_bodyInfo_2403_ = v___x_2882_;
goto v___jp_2401_;
}
else
{
lean_object* v_a_2883_; lean_object* v_val_2884_; lean_object* v___x_2885_; 
v_a_2883_ = lean_ctor_get(v___x_2879_, 0);
lean_inc(v_a_2883_);
lean_dec_ref_known(v___x_2879_, 1);
v_val_2884_ = lean_ctor_get(v___y_2878_, 0);
lean_inc(v_val_2884_);
lean_dec_ref_known(v___y_2878_, 1);
v___x_2885_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_2884_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_2885_) == 0)
{
lean_object* v_a_2886_; 
v_a_2886_ = lean_ctor_get(v___x_2885_, 0);
lean_inc(v_a_2886_);
lean_dec_ref_known(v___x_2885_, 1);
v___y_2402_ = v_a_2883_;
v_bodyInfo_2403_ = v_a_2886_;
goto v___jp_2401_;
}
else
{
lean_dec(v_a_2883_);
return v___x_2885_;
}
}
}
else
{
lean_dec(v___y_2878_);
return v___x_2879_;
}
}
}
}
else
{
lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___y_2903_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; 
v___x_2899_ = lean_unsigned_to_nat(1u);
v___x_2900_ = lean_unsigned_to_nat(5u);
v___x_2901_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2900_);
v___x_2912_ = lean_unsigned_to_nat(6u);
v___x_2913_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2912_);
lean_dec(v_stx_2393_);
v___x_2914_ = l_Lean_Syntax_getOptional_x3f(v___x_2913_);
lean_dec(v___x_2913_);
if (lean_obj_tag(v___x_2914_) == 0)
{
lean_object* v___x_2915_; 
v___x_2915_ = lean_box(0);
v___y_2903_ = v___x_2915_;
goto v___jp_2902_;
}
else
{
lean_object* v_val_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2923_; 
v_val_2916_ = lean_ctor_get(v___x_2914_, 0);
v_isSharedCheck_2923_ = !lean_is_exclusive(v___x_2914_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2918_ = v___x_2914_;
v_isShared_2919_ = v_isSharedCheck_2923_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_val_2916_);
lean_dec(v___x_2914_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2923_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
lean_object* v___x_2921_; 
if (v_isShared_2919_ == 0)
{
v___x_2921_ = v___x_2918_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2922_; 
v_reuseFailAlloc_2922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2922_, 0, v_val_2916_);
v___x_2921_ = v_reuseFailAlloc_2922_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
v___y_2903_ = v___x_2921_;
goto v___jp_2902_;
}
}
}
v___jp_2902_:
{
lean_object* v___x_2904_; 
v___x_2904_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2901_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_2904_) == 0)
{
if (lean_obj_tag(v___y_2903_) == 0)
{
lean_object* v_a_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
v_a_2905_ = lean_ctor_get(v___x_2904_, 0);
lean_inc(v_a_2905_);
lean_dec_ref_known(v___x_2904_, 1);
v___x_2906_ = l_Lean_NameSet_empty;
v___x_2907_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2907_, 0, v___x_2899_);
lean_ctor_set(v___x_2907_, 1, v___x_2906_);
lean_ctor_set_uint8(v___x_2907_, sizeof(void*)*2, v___x_2823_);
lean_ctor_set_uint8(v___x_2907_, sizeof(void*)*2 + 1, v___x_2823_);
lean_ctor_set_uint8(v___x_2907_, sizeof(void*)*2 + 2, v___x_2823_);
lean_ctor_set_uint8(v___x_2907_, sizeof(void*)*2 + 3, v___x_2823_);
v___y_2442_ = v_a_2905_;
v_bodyInfo_2443_ = v___x_2907_;
goto v___jp_2441_;
}
else
{
lean_object* v_a_2908_; lean_object* v_val_2909_; lean_object* v___x_2910_; 
v_a_2908_ = lean_ctor_get(v___x_2904_, 0);
lean_inc(v_a_2908_);
lean_dec_ref_known(v___x_2904_, 1);
v_val_2909_ = lean_ctor_get(v___y_2903_, 0);
lean_inc(v_val_2909_);
lean_dec_ref_known(v___y_2903_, 1);
v___x_2910_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_val_2909_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_2910_) == 0)
{
lean_object* v_a_2911_; 
v_a_2911_ = lean_ctor_get(v___x_2910_, 0);
lean_inc(v_a_2911_);
lean_dec_ref_known(v___x_2910_, 1);
v___y_2442_ = v_a_2908_;
v_bodyInfo_2443_ = v_a_2911_;
goto v___jp_2441_;
}
else
{
lean_dec(v_a_2908_);
return v___x_2910_;
}
}
}
else
{
lean_dec(v___y_2903_);
return v___x_2904_;
}
}
}
}
else
{
lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___y_2927_; lean_object* v___y_2928_; lean_object* v___y_2929_; lean_object* v___y_2930_; lean_object* v___y_2931_; lean_object* v___y_2932_; lean_object* v___x_3139_; uint8_t v___x_3140_; 
v___x_2924_ = lean_unsigned_to_nat(0u);
v___x_2925_ = lean_unsigned_to_nat(1u);
v___x_3139_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2925_);
v___x_3140_ = l_Lean_Syntax_isNone(v___x_3139_);
if (v___x_3140_ == 0)
{
lean_object* v___x_3141_; uint8_t v___x_3142_; 
v___x_3141_ = lean_unsigned_to_nat(5u);
v___x_3142_ = l_Lean_Syntax_matchesNull(v___x_3139_, v___x_3141_);
if (v___x_3142_ == 0)
{
lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v_env_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
lean_inc_n(v_stx_2393_, 2);
v___x_3143_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_3144_ = lean_st_ref_get(v_a_2399_);
v_env_3145_ = lean_ctor_get(v___x_3144_, 0);
lean_inc_ref(v_env_3145_);
lean_dec(v___x_3144_);
v___x_3146_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3147_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3146_, v_env_3145_, v___x_3143_);
v___x_3148_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3149_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_3147_, v___x_3148_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_3147_);
if (lean_obj_tag(v___x_3149_) == 0)
{
lean_object* v_a_3150_; lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3180_; 
v_a_3150_ = lean_ctor_get(v___x_3149_, 0);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3149_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3152_ = v___x_3149_;
v_isShared_3153_ = v_isSharedCheck_3180_;
goto v_resetjp_3151_;
}
else
{
lean_inc(v_a_3150_);
lean_dec(v___x_3149_);
v___x_3152_ = lean_box(0);
v_isShared_3153_ = v_isSharedCheck_3180_;
goto v_resetjp_3151_;
}
v_resetjp_3151_:
{
lean_object* v_fst_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3178_; 
v_fst_3154_ = lean_ctor_get(v_a_3150_, 0);
v_isSharedCheck_3178_ = !lean_is_exclusive(v_a_3150_);
if (v_isSharedCheck_3178_ == 0)
{
lean_object* v_unused_3179_; 
v_unused_3179_ = lean_ctor_get(v_a_3150_, 1);
lean_dec(v_unused_3179_);
v___x_3156_ = v_a_3150_;
v_isShared_3157_ = v_isSharedCheck_3178_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_fst_3154_);
lean_dec(v_a_3150_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3178_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
if (lean_obj_tag(v_fst_3154_) == 0)
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3161_; 
lean_del_object(v___x_3152_);
v___x_3158_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3159_ = l_Lean_MessageData_ofName(v___x_3143_);
lean_inc_ref(v___x_3159_);
if (v_isShared_3157_ == 0)
{
lean_ctor_set_tag(v___x_3156_, 7);
lean_ctor_set(v___x_3156_, 1, v___x_3159_);
lean_ctor_set(v___x_3156_, 0, v___x_3158_);
v___x_3161_ = v___x_3156_;
goto v_reusejp_3160_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v___x_3158_);
lean_ctor_set(v_reuseFailAlloc_3173_, 1, v___x_3159_);
v___x_3161_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3160_;
}
v_reusejp_3160_:
{
lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3162_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3163_, 0, v___x_3161_);
lean_ctor_set(v___x_3163_, 1, v___x_3162_);
v___x_3164_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_3165_ = l_Lean_indentD(v___x_3164_);
v___x_3166_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3166_, 0, v___x_3163_);
lean_ctor_set(v___x_3166_, 1, v___x_3165_);
v___x_3167_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3168_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3168_, 0, v___x_3166_);
lean_ctor_set(v___x_3168_, 1, v___x_3167_);
v___x_3169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3169_, 0, v___x_3168_);
lean_ctor_set(v___x_3169_, 1, v___x_3159_);
v___x_3170_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_3171_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3169_);
lean_ctor_set(v___x_3171_, 1, v___x_3170_);
v___x_3172_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3171_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_3172_;
}
}
else
{
lean_object* v_val_3174_; lean_object* v___x_3176_; 
lean_del_object(v___x_3156_);
lean_dec(v___x_3143_);
lean_dec(v_stx_2393_);
v_val_3174_ = lean_ctor_get(v_fst_3154_, 0);
lean_inc(v_val_3174_);
lean_dec_ref_known(v_fst_3154_, 1);
if (v_isShared_3153_ == 0)
{
lean_ctor_set(v___x_3152_, 0, v_val_3174_);
v___x_3176_ = v___x_3152_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v_val_3174_);
v___x_3176_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
return v___x_3176_;
}
}
}
}
}
else
{
lean_object* v_a_3181_; lean_object* v___x_3183_; uint8_t v_isShared_3184_; uint8_t v_isSharedCheck_3188_; 
lean_dec(v___x_3143_);
lean_dec(v_stx_2393_);
v_a_3181_ = lean_ctor_get(v___x_3149_, 0);
v_isSharedCheck_3188_ = !lean_is_exclusive(v___x_3149_);
if (v_isSharedCheck_3188_ == 0)
{
v___x_3183_ = v___x_3149_;
v_isShared_3184_ = v_isSharedCheck_3188_;
goto v_resetjp_3182_;
}
else
{
lean_inc(v_a_3181_);
lean_dec(v___x_3149_);
v___x_3183_ = lean_box(0);
v_isShared_3184_ = v_isSharedCheck_3188_;
goto v_resetjp_3182_;
}
v_resetjp_3182_:
{
lean_object* v___x_3186_; 
if (v_isShared_3184_ == 0)
{
v___x_3186_ = v___x_3183_;
goto v_reusejp_3185_;
}
else
{
lean_object* v_reuseFailAlloc_3187_; 
v_reuseFailAlloc_3187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3187_, 0, v_a_3181_);
v___x_3186_ = v_reuseFailAlloc_3187_;
goto v_reusejp_3185_;
}
v_reusejp_3185_:
{
return v___x_3186_;
}
}
}
}
else
{
v___y_2927_ = v_a_2394_;
v___y_2928_ = v_a_2395_;
v___y_2929_ = v_a_2396_;
v___y_2930_ = v_a_2397_;
v___y_2931_ = v_a_2398_;
v___y_2932_ = v_a_2399_;
goto v___jp_2926_;
}
}
else
{
lean_dec(v___x_3139_);
v___y_2927_ = v_a_2394_;
v___y_2928_ = v_a_2395_;
v___y_2929_ = v_a_2396_;
v___y_2930_ = v_a_2397_;
v___y_2931_ = v_a_2398_;
v___y_2932_ = v_a_2399_;
goto v___jp_2926_;
}
v___jp_2926_:
{
lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; uint8_t v___x_2936_; 
v___x_2933_ = lean_unsigned_to_nat(4u);
v___x_2934_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2933_);
v___x_2935_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__68));
lean_inc(v___x_2934_);
v___x_2936_ = l_Lean_Syntax_isOfKind(v___x_2934_, v___x_2935_);
if (v___x_2936_ == 0)
{
lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v_env_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; 
lean_dec(v___x_2934_);
lean_inc_n(v_stx_2393_, 2);
v___x_2937_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_2938_ = lean_st_ref_get(v___y_2932_);
v_env_2939_ = lean_ctor_get(v___x_2938_, 0);
lean_inc_ref(v_env_2939_);
lean_dec(v___x_2938_);
v___x_2940_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2941_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2940_, v_env_2939_, v___x_2937_);
v___x_2942_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2943_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_2941_, v___x_2942_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
lean_dec(v___x_2941_);
if (lean_obj_tag(v___x_2943_) == 0)
{
lean_object* v_a_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_2974_; 
v_a_2944_ = lean_ctor_get(v___x_2943_, 0);
v_isSharedCheck_2974_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_2974_ == 0)
{
v___x_2946_ = v___x_2943_;
v_isShared_2947_ = v_isSharedCheck_2974_;
goto v_resetjp_2945_;
}
else
{
lean_inc(v_a_2944_);
lean_dec(v___x_2943_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_2974_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v_fst_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2972_; 
v_fst_2948_ = lean_ctor_get(v_a_2944_, 0);
v_isSharedCheck_2972_ = !lean_is_exclusive(v_a_2944_);
if (v_isSharedCheck_2972_ == 0)
{
lean_object* v_unused_2973_; 
v_unused_2973_ = lean_ctor_get(v_a_2944_, 1);
lean_dec(v_unused_2973_);
v___x_2950_ = v_a_2944_;
v_isShared_2951_ = v_isSharedCheck_2972_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_fst_2948_);
lean_dec(v_a_2944_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_2972_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
if (lean_obj_tag(v_fst_2948_) == 0)
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2955_; 
lean_del_object(v___x_2946_);
v___x_2952_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2953_ = l_Lean_MessageData_ofName(v___x_2937_);
lean_inc_ref(v___x_2953_);
if (v_isShared_2951_ == 0)
{
lean_ctor_set_tag(v___x_2950_, 7);
lean_ctor_set(v___x_2950_, 1, v___x_2953_);
lean_ctor_set(v___x_2950_, 0, v___x_2952_);
v___x_2955_ = v___x_2950_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v___x_2952_);
lean_ctor_set(v_reuseFailAlloc_2967_, 1, v___x_2953_);
v___x_2955_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; 
v___x_2956_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2955_);
lean_ctor_set(v___x_2957_, 1, v___x_2956_);
v___x_2958_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_2959_ = l_Lean_indentD(v___x_2958_);
v___x_2960_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2960_, 0, v___x_2957_);
lean_ctor_set(v___x_2960_, 1, v___x_2959_);
v___x_2961_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2962_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2960_);
lean_ctor_set(v___x_2962_, 1, v___x_2961_);
v___x_2963_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2963_, 0, v___x_2962_);
lean_ctor_set(v___x_2963_, 1, v___x_2953_);
v___x_2964_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_2965_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2963_);
lean_ctor_set(v___x_2965_, 1, v___x_2964_);
v___x_2966_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2965_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
return v___x_2966_;
}
}
else
{
lean_object* v_val_2968_; lean_object* v___x_2970_; 
lean_del_object(v___x_2950_);
lean_dec(v___x_2937_);
lean_dec(v_stx_2393_);
v_val_2968_ = lean_ctor_get(v_fst_2948_, 0);
lean_inc(v_val_2968_);
lean_dec_ref_known(v_fst_2948_, 1);
if (v_isShared_2947_ == 0)
{
lean_ctor_set(v___x_2946_, 0, v_val_2968_);
v___x_2970_ = v___x_2946_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v_val_2968_);
v___x_2970_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
return v___x_2970_;
}
}
}
}
}
else
{
lean_object* v_a_2975_; lean_object* v___x_2977_; uint8_t v_isShared_2978_; uint8_t v_isSharedCheck_2982_; 
lean_dec(v___x_2937_);
lean_dec(v_stx_2393_);
v_a_2975_ = lean_ctor_get(v___x_2943_, 0);
v_isSharedCheck_2982_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_2982_ == 0)
{
v___x_2977_ = v___x_2943_;
v_isShared_2978_ = v_isSharedCheck_2982_;
goto v_resetjp_2976_;
}
else
{
lean_inc(v_a_2975_);
lean_dec(v___x_2943_);
v___x_2977_ = lean_box(0);
v_isShared_2978_ = v_isSharedCheck_2982_;
goto v_resetjp_2976_;
}
v_resetjp_2976_:
{
lean_object* v___x_2980_; 
if (v_isShared_2978_ == 0)
{
v___x_2980_ = v___x_2977_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2981_; 
v_reuseFailAlloc_2981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2981_, 0, v_a_2975_);
v___x_2980_ = v_reuseFailAlloc_2981_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
return v___x_2980_;
}
}
}
}
else
{
lean_object* v___x_2983_; lean_object* v___x_2984_; size_t v_sz_2985_; size_t v___x_2986_; lean_object* v___x_2987_; 
v___x_2983_ = l_Lean_Syntax_getArg(v___x_2934_, v___x_2924_);
v___x_2984_ = l_Lean_Syntax_getArgs(v___x_2983_);
lean_dec(v___x_2983_);
v_sz_2985_ = lean_array_size(v___x_2984_);
v___x_2986_ = ((size_t)0ULL);
v___x_2987_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__4(v_sz_2985_, v___x_2986_, v___x_2984_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v_env_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; 
lean_dec(v___x_2934_);
lean_inc_n(v_stx_2393_, 2);
v___x_2988_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_2989_ = lean_st_ref_get(v___y_2932_);
v_env_2990_ = lean_ctor_get(v___x_2989_, 0);
lean_inc_ref(v_env_2990_);
lean_dec(v___x_2989_);
v___x_2991_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2992_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2991_, v_env_2990_, v___x_2988_);
v___x_2993_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2994_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_2992_, v___x_2993_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
lean_dec(v___x_2992_);
if (lean_obj_tag(v___x_2994_) == 0)
{
lean_object* v_a_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3025_; 
v_a_2995_ = lean_ctor_get(v___x_2994_, 0);
v_isSharedCheck_3025_ = !lean_is_exclusive(v___x_2994_);
if (v_isSharedCheck_3025_ == 0)
{
v___x_2997_ = v___x_2994_;
v_isShared_2998_ = v_isSharedCheck_3025_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_a_2995_);
lean_dec(v___x_2994_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3025_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
lean_object* v_fst_2999_; lean_object* v___x_3001_; uint8_t v_isShared_3002_; uint8_t v_isSharedCheck_3023_; 
v_fst_2999_ = lean_ctor_get(v_a_2995_, 0);
v_isSharedCheck_3023_ = !lean_is_exclusive(v_a_2995_);
if (v_isSharedCheck_3023_ == 0)
{
lean_object* v_unused_3024_; 
v_unused_3024_ = lean_ctor_get(v_a_2995_, 1);
lean_dec(v_unused_3024_);
v___x_3001_ = v_a_2995_;
v_isShared_3002_ = v_isSharedCheck_3023_;
goto v_resetjp_3000_;
}
else
{
lean_inc(v_fst_2999_);
lean_dec(v_a_2995_);
v___x_3001_ = lean_box(0);
v_isShared_3002_ = v_isSharedCheck_3023_;
goto v_resetjp_3000_;
}
v_resetjp_3000_:
{
if (lean_obj_tag(v_fst_2999_) == 0)
{
lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3006_; 
lean_del_object(v___x_2997_);
v___x_3003_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3004_ = l_Lean_MessageData_ofName(v___x_2988_);
lean_inc_ref(v___x_3004_);
if (v_isShared_3002_ == 0)
{
lean_ctor_set_tag(v___x_3001_, 7);
lean_ctor_set(v___x_3001_, 1, v___x_3004_);
lean_ctor_set(v___x_3001_, 0, v___x_3003_);
v___x_3006_ = v___x_3001_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v___x_3003_);
lean_ctor_set(v_reuseFailAlloc_3018_, 1, v___x_3004_);
v___x_3006_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; 
v___x_3007_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3008_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3008_, 0, v___x_3006_);
lean_ctor_set(v___x_3008_, 1, v___x_3007_);
v___x_3009_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_3010_ = l_Lean_indentD(v___x_3009_);
v___x_3011_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3011_, 0, v___x_3008_);
lean_ctor_set(v___x_3011_, 1, v___x_3010_);
v___x_3012_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3013_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3013_, 0, v___x_3011_);
lean_ctor_set(v___x_3013_, 1, v___x_3012_);
v___x_3014_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3014_, 0, v___x_3013_);
lean_ctor_set(v___x_3014_, 1, v___x_3004_);
v___x_3015_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_3016_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3016_, 0, v___x_3014_);
lean_ctor_set(v___x_3016_, 1, v___x_3015_);
v___x_3017_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3016_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
return v___x_3017_;
}
}
else
{
lean_object* v_val_3019_; lean_object* v___x_3021_; 
lean_del_object(v___x_3001_);
lean_dec(v___x_2988_);
lean_dec(v_stx_2393_);
v_val_3019_ = lean_ctor_get(v_fst_2999_, 0);
lean_inc(v_val_3019_);
lean_dec_ref_known(v_fst_2999_, 1);
if (v_isShared_2998_ == 0)
{
lean_ctor_set(v___x_2997_, 0, v_val_3019_);
v___x_3021_ = v___x_2997_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v_val_3019_);
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
}
else
{
lean_object* v_a_3026_; lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3033_; 
lean_dec(v___x_2988_);
lean_dec(v_stx_2393_);
v_a_3026_ = lean_ctor_get(v___x_2994_, 0);
v_isSharedCheck_3033_ = !lean_is_exclusive(v___x_2994_);
if (v_isSharedCheck_3033_ == 0)
{
v___x_3028_ = v___x_2994_;
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
else
{
lean_inc(v_a_3026_);
lean_dec(v___x_2994_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
lean_object* v___x_3031_; 
if (v_isShared_3029_ == 0)
{
v___x_3031_ = v___x_3028_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v_a_3026_);
v___x_3031_ = v_reuseFailAlloc_3032_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
return v___x_3031_;
}
}
}
}
else
{
lean_object* v_val_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; uint8_t v___x_3037_; 
v_val_3034_ = lean_ctor_get(v___x_2987_, 0);
lean_inc(v_val_3034_);
lean_dec_ref_known(v___x_2987_, 1);
v___x_3035_ = l_Lean_Syntax_getArg(v___x_2934_, v___x_2925_);
lean_dec(v___x_2934_);
v___x_3036_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__70));
lean_inc(v___x_3035_);
v___x_3037_ = l_Lean_Syntax_isOfKind(v___x_3035_, v___x_3036_);
if (v___x_3037_ == 0)
{
lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v_env_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; 
lean_dec(v___x_3035_);
lean_dec(v_val_3034_);
lean_inc_n(v_stx_2393_, 2);
v___x_3038_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_3039_ = lean_st_ref_get(v___y_2932_);
v_env_3040_ = lean_ctor_get(v___x_3039_, 0);
lean_inc_ref(v_env_3040_);
lean_dec(v___x_3039_);
v___x_3041_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3042_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3041_, v_env_3040_, v___x_3038_);
v___x_3043_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3044_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_3042_, v___x_3043_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
lean_dec(v___x_3042_);
if (lean_obj_tag(v___x_3044_) == 0)
{
lean_object* v_a_3045_; lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3075_; 
v_a_3045_ = lean_ctor_get(v___x_3044_, 0);
v_isSharedCheck_3075_ = !lean_is_exclusive(v___x_3044_);
if (v_isSharedCheck_3075_ == 0)
{
v___x_3047_ = v___x_3044_;
v_isShared_3048_ = v_isSharedCheck_3075_;
goto v_resetjp_3046_;
}
else
{
lean_inc(v_a_3045_);
lean_dec(v___x_3044_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3075_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
lean_object* v_fst_3049_; lean_object* v___x_3051_; uint8_t v_isShared_3052_; uint8_t v_isSharedCheck_3073_; 
v_fst_3049_ = lean_ctor_get(v_a_3045_, 0);
v_isSharedCheck_3073_ = !lean_is_exclusive(v_a_3045_);
if (v_isSharedCheck_3073_ == 0)
{
lean_object* v_unused_3074_; 
v_unused_3074_ = lean_ctor_get(v_a_3045_, 1);
lean_dec(v_unused_3074_);
v___x_3051_ = v_a_3045_;
v_isShared_3052_ = v_isSharedCheck_3073_;
goto v_resetjp_3050_;
}
else
{
lean_inc(v_fst_3049_);
lean_dec(v_a_3045_);
v___x_3051_ = lean_box(0);
v_isShared_3052_ = v_isSharedCheck_3073_;
goto v_resetjp_3050_;
}
v_resetjp_3050_:
{
if (lean_obj_tag(v_fst_3049_) == 0)
{
lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3056_; 
lean_del_object(v___x_3047_);
v___x_3053_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3054_ = l_Lean_MessageData_ofName(v___x_3038_);
lean_inc_ref(v___x_3054_);
if (v_isShared_3052_ == 0)
{
lean_ctor_set_tag(v___x_3051_, 7);
lean_ctor_set(v___x_3051_, 1, v___x_3054_);
lean_ctor_set(v___x_3051_, 0, v___x_3053_);
v___x_3056_ = v___x_3051_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v___x_3053_);
lean_ctor_set(v_reuseFailAlloc_3068_, 1, v___x_3054_);
v___x_3056_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; 
v___x_3057_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3058_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3058_, 0, v___x_3056_);
lean_ctor_set(v___x_3058_, 1, v___x_3057_);
v___x_3059_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_3060_ = l_Lean_indentD(v___x_3059_);
v___x_3061_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3061_, 0, v___x_3058_);
lean_ctor_set(v___x_3061_, 1, v___x_3060_);
v___x_3062_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3063_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3061_);
lean_ctor_set(v___x_3063_, 1, v___x_3062_);
v___x_3064_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3064_, 0, v___x_3063_);
lean_ctor_set(v___x_3064_, 1, v___x_3054_);
v___x_3065_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_3066_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3066_, 0, v___x_3064_);
lean_ctor_set(v___x_3066_, 1, v___x_3065_);
v___x_3067_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3066_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
return v___x_3067_;
}
}
else
{
lean_object* v_val_3069_; lean_object* v___x_3071_; 
lean_del_object(v___x_3051_);
lean_dec(v___x_3038_);
lean_dec(v_stx_2393_);
v_val_3069_ = lean_ctor_get(v_fst_3049_, 0);
lean_inc(v_val_3069_);
lean_dec_ref_known(v_fst_3049_, 1);
if (v_isShared_3048_ == 0)
{
lean_ctor_set(v___x_3047_, 0, v_val_3069_);
v___x_3071_ = v___x_3047_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v_val_3069_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
return v___x_3071_;
}
}
}
}
}
else
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3083_; 
lean_dec(v___x_3038_);
lean_dec(v_stx_2393_);
v_a_3076_ = lean_ctor_get(v___x_3044_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3044_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3078_ = v___x_3044_;
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_3044_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_a_3076_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
}
}
else
{
lean_object* v___x_3084_; lean_object* v___x_3085_; uint8_t v___x_3086_; 
v___x_3084_ = l_Lean_Syntax_getArg(v___x_3035_, v___x_2925_);
v___x_3085_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__72));
v___x_3086_ = l_Lean_Syntax_isOfKind(v___x_3084_, v___x_3085_);
if (v___x_3086_ == 0)
{
lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v_env_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
lean_dec(v___x_3035_);
lean_dec(v_val_3034_);
lean_inc_n(v_stx_2393_, 2);
v___x_3087_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_3088_ = lean_st_ref_get(v___y_2932_);
v_env_3089_ = lean_ctor_get(v___x_3088_, 0);
lean_inc_ref(v_env_3089_);
lean_dec(v___x_3088_);
v___x_3090_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3091_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3090_, v_env_3089_, v___x_3087_);
v___x_3092_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3093_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_3091_, v___x_3092_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
lean_dec(v___x_3091_);
if (lean_obj_tag(v___x_3093_) == 0)
{
lean_object* v_a_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3124_; 
v_a_3094_ = lean_ctor_get(v___x_3093_, 0);
v_isSharedCheck_3124_ = !lean_is_exclusive(v___x_3093_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3096_ = v___x_3093_;
v_isShared_3097_ = v_isSharedCheck_3124_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_a_3094_);
lean_dec(v___x_3093_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3124_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v_fst_3098_; lean_object* v___x_3100_; uint8_t v_isShared_3101_; uint8_t v_isSharedCheck_3122_; 
v_fst_3098_ = lean_ctor_get(v_a_3094_, 0);
v_isSharedCheck_3122_ = !lean_is_exclusive(v_a_3094_);
if (v_isSharedCheck_3122_ == 0)
{
lean_object* v_unused_3123_; 
v_unused_3123_ = lean_ctor_get(v_a_3094_, 1);
lean_dec(v_unused_3123_);
v___x_3100_ = v_a_3094_;
v_isShared_3101_ = v_isSharedCheck_3122_;
goto v_resetjp_3099_;
}
else
{
lean_inc(v_fst_3098_);
lean_dec(v_a_3094_);
v___x_3100_ = lean_box(0);
v_isShared_3101_ = v_isSharedCheck_3122_;
goto v_resetjp_3099_;
}
v_resetjp_3099_:
{
if (lean_obj_tag(v_fst_3098_) == 0)
{
lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3105_; 
lean_del_object(v___x_3096_);
v___x_3102_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3103_ = l_Lean_MessageData_ofName(v___x_3087_);
lean_inc_ref(v___x_3103_);
if (v_isShared_3101_ == 0)
{
lean_ctor_set_tag(v___x_3100_, 7);
lean_ctor_set(v___x_3100_, 1, v___x_3103_);
lean_ctor_set(v___x_3100_, 0, v___x_3102_);
v___x_3105_ = v___x_3100_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3117_; 
v_reuseFailAlloc_3117_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3117_, 0, v___x_3102_);
lean_ctor_set(v_reuseFailAlloc_3117_, 1, v___x_3103_);
v___x_3105_ = v_reuseFailAlloc_3117_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3106_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3105_);
lean_ctor_set(v___x_3107_, 1, v___x_3106_);
v___x_3108_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_3109_ = l_Lean_indentD(v___x_3108_);
v___x_3110_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3107_);
lean_ctor_set(v___x_3110_, 1, v___x_3109_);
v___x_3111_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3112_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3112_, 0, v___x_3110_);
lean_ctor_set(v___x_3112_, 1, v___x_3111_);
v___x_3113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3112_);
lean_ctor_set(v___x_3113_, 1, v___x_3103_);
v___x_3114_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_3115_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3113_);
lean_ctor_set(v___x_3115_, 1, v___x_3114_);
v___x_3116_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3115_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
return v___x_3116_;
}
}
else
{
lean_object* v_val_3118_; lean_object* v___x_3120_; 
lean_del_object(v___x_3100_);
lean_dec(v___x_3087_);
lean_dec(v_stx_2393_);
v_val_3118_ = lean_ctor_get(v_fst_3098_, 0);
lean_inc(v_val_3118_);
lean_dec_ref_known(v_fst_3098_, 1);
if (v_isShared_3097_ == 0)
{
lean_ctor_set(v___x_3096_, 0, v_val_3118_);
v___x_3120_ = v___x_3096_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_val_3118_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
}
}
}
else
{
lean_object* v_a_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3132_; 
lean_dec(v___x_3087_);
lean_dec(v_stx_2393_);
v_a_3125_ = lean_ctor_get(v___x_3093_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v___x_3093_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3127_ = v___x_3093_;
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_a_3125_);
lean_dec(v___x_3093_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3130_; 
if (v_isShared_3128_ == 0)
{
v___x_3130_ = v___x_3127_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_a_3125_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
return v___x_3130_;
}
}
}
}
else
{
lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
lean_dec(v_stx_2393_);
v___x_3133_ = lean_unsigned_to_nat(3u);
v___x_3134_ = l_Lean_Syntax_getArg(v___x_3035_, v___x_3133_);
lean_dec(v___x_3035_);
v___x_3135_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3134_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
if (lean_obj_tag(v___x_3135_) == 0)
{
lean_object* v_a_3136_; size_t v_sz_3137_; lean_object* v___x_3138_; 
v_a_3136_ = lean_ctor_get(v___x_3135_, 0);
lean_inc(v_a_3136_);
lean_dec_ref_known(v___x_3135_, 1);
v_sz_3137_ = lean_array_size(v_val_3034_);
v___x_3138_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(v_val_3034_, v_sz_3137_, v___x_2986_, v_a_3136_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
lean_dec(v_val_3034_);
return v___x_3138_;
}
else
{
lean_dec(v_val_3034_);
return v___x_3135_;
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
lean_object* v___x_3189_; lean_object* v___x_3190_; 
lean_dec(v_stx_2393_);
v___x_3189_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3190_, 0, v___x_3189_);
return v___x_3190_;
}
}
else
{
lean_object* v___x_3191_; lean_object* v___x_3192_; 
lean_dec(v_stx_2393_);
v___x_3191_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3192_, 0, v___x_3191_);
return v___x_3192_;
}
}
else
{
lean_object* v___x_3193_; lean_object* v___x_3194_; 
lean_dec(v_stx_2393_);
v___x_3193_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3193_);
return v___x_3194_;
}
}
else
{
lean_object* v___x_3195_; lean_object* v___x_3196_; 
lean_dec(v_stx_2393_);
v___x_3195_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3196_, 0, v___x_3195_);
return v___x_3196_;
}
}
else
{
lean_object* v___x_3197_; lean_object* v___x_3198_; 
lean_dec(v_stx_2393_);
v___x_3197_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_3198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3198_, 0, v___x_3197_);
return v___x_3198_;
}
}
else
{
lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; size_t v_sz_3202_; size_t v___x_3203_; lean_object* v___x_3204_; 
v___x_3199_ = lean_unsigned_to_nat(2u);
v___x_3200_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3199_);
v___x_3201_ = l_Lean_Syntax_getArgs(v___x_3200_);
lean_dec(v___x_3200_);
v_sz_3202_ = lean_array_size(v___x_3201_);
v___x_3203_ = ((size_t)0ULL);
v___x_3204_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__6(v_sz_3202_, v___x_3203_, v___x_3201_);
if (lean_obj_tag(v___x_3204_) == 0)
{
lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v_env_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
lean_inc_n(v_stx_2393_, 2);
v___x_3205_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_3206_ = lean_st_ref_get(v_a_2399_);
v_env_3207_ = lean_ctor_get(v___x_3206_, 0);
lean_inc_ref(v_env_3207_);
lean_dec(v___x_3206_);
v___x_3208_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3209_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3208_, v_env_3207_, v___x_3205_);
v___x_3210_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3211_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_3209_, v___x_3210_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_3209_);
if (lean_obj_tag(v___x_3211_) == 0)
{
lean_object* v_a_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3242_; 
v_a_3212_ = lean_ctor_get(v___x_3211_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3211_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3214_ = v___x_3211_;
v_isShared_3215_ = v_isSharedCheck_3242_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_a_3212_);
lean_dec(v___x_3211_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3242_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v_fst_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3240_; 
v_fst_3216_ = lean_ctor_get(v_a_3212_, 0);
v_isSharedCheck_3240_ = !lean_is_exclusive(v_a_3212_);
if (v_isSharedCheck_3240_ == 0)
{
lean_object* v_unused_3241_; 
v_unused_3241_ = lean_ctor_get(v_a_3212_, 1);
lean_dec(v_unused_3241_);
v___x_3218_ = v_a_3212_;
v_isShared_3219_ = v_isSharedCheck_3240_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_fst_3216_);
lean_dec(v_a_3212_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3240_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
if (lean_obj_tag(v_fst_3216_) == 0)
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3223_; 
lean_del_object(v___x_3214_);
v___x_3220_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3221_ = l_Lean_MessageData_ofName(v___x_3205_);
lean_inc_ref(v___x_3221_);
if (v_isShared_3219_ == 0)
{
lean_ctor_set_tag(v___x_3218_, 7);
lean_ctor_set(v___x_3218_, 1, v___x_3221_);
lean_ctor_set(v___x_3218_, 0, v___x_3220_);
v___x_3223_ = v___x_3218_;
goto v_reusejp_3222_;
}
else
{
lean_object* v_reuseFailAlloc_3235_; 
v_reuseFailAlloc_3235_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3235_, 0, v___x_3220_);
lean_ctor_set(v_reuseFailAlloc_3235_, 1, v___x_3221_);
v___x_3223_ = v_reuseFailAlloc_3235_;
goto v_reusejp_3222_;
}
v_reusejp_3222_:
{
lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; 
v___x_3224_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3225_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3225_, 0, v___x_3223_);
lean_ctor_set(v___x_3225_, 1, v___x_3224_);
v___x_3226_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_3227_ = l_Lean_indentD(v___x_3226_);
v___x_3228_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3228_, 0, v___x_3225_);
lean_ctor_set(v___x_3228_, 1, v___x_3227_);
v___x_3229_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3230_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3230_, 0, v___x_3228_);
lean_ctor_set(v___x_3230_, 1, v___x_3229_);
v___x_3231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3231_, 0, v___x_3230_);
lean_ctor_set(v___x_3231_, 1, v___x_3221_);
v___x_3232_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_3233_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3231_);
lean_ctor_set(v___x_3233_, 1, v___x_3232_);
v___x_3234_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3233_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_3234_;
}
}
else
{
lean_object* v_val_3236_; lean_object* v___x_3238_; 
lean_del_object(v___x_3218_);
lean_dec(v___x_3205_);
lean_dec(v_stx_2393_);
v_val_3236_ = lean_ctor_get(v_fst_3216_, 0);
lean_inc(v_val_3236_);
lean_dec_ref_known(v_fst_3216_, 1);
if (v_isShared_3215_ == 0)
{
lean_ctor_set(v___x_3214_, 0, v_val_3236_);
v___x_3238_ = v___x_3214_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v_val_3236_);
v___x_3238_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
return v___x_3238_;
}
}
}
}
}
else
{
lean_object* v_a_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3250_; 
lean_dec(v___x_3205_);
lean_dec(v_stx_2393_);
v_a_3243_ = lean_ctor_get(v___x_3211_, 0);
v_isSharedCheck_3250_ = !lean_is_exclusive(v___x_3211_);
if (v_isSharedCheck_3250_ == 0)
{
v___x_3245_ = v___x_3211_;
v_isShared_3246_ = v_isSharedCheck_3250_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_a_3243_);
lean_dec(v___x_3211_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3250_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
lean_object* v___x_3248_; 
if (v_isShared_3246_ == 0)
{
v___x_3248_ = v___x_3245_;
goto v_reusejp_3247_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v_a_3243_);
v___x_3248_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3247_;
}
v_reusejp_3247_:
{
return v___x_3248_;
}
}
}
}
else
{
lean_object* v_val_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3385_; 
v_val_3251_ = lean_ctor_get(v___x_3204_, 0);
v_isSharedCheck_3385_ = !lean_is_exclusive(v___x_3204_);
if (v_isSharedCheck_3385_ == 0)
{
v___x_3253_ = v___x_3204_;
v_isShared_3254_ = v_isSharedCheck_3385_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_val_3251_);
lean_dec(v___x_3204_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3385_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v_finSeq_x3f_3258_; lean_object* v___y_3259_; lean_object* v___y_3260_; lean_object* v___y_3261_; lean_object* v___y_3262_; lean_object* v___y_3263_; lean_object* v___y_3264_; lean_object* v___x_3280_; lean_object* v___x_3281_; uint8_t v___x_3282_; 
v___x_3255_ = lean_unsigned_to_nat(1u);
v___x_3256_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3255_);
v___x_3280_ = lean_unsigned_to_nat(3u);
v___x_3281_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3280_);
v___x_3282_ = l_Lean_Syntax_isNone(v___x_3281_);
if (v___x_3282_ == 0)
{
uint8_t v___x_3283_; 
lean_inc(v___x_3281_);
v___x_3283_ = l_Lean_Syntax_matchesNull(v___x_3281_, v___x_3255_);
if (v___x_3283_ == 0)
{
lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v_env_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; 
lean_dec(v___x_3281_);
lean_dec(v___x_3256_);
lean_del_object(v___x_3253_);
lean_dec(v_val_3251_);
lean_inc_n(v_stx_2393_, 2);
v___x_3284_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_3285_ = lean_st_ref_get(v_a_2399_);
v_env_3286_ = lean_ctor_get(v___x_3285_, 0);
lean_inc_ref(v_env_3286_);
lean_dec(v___x_3285_);
v___x_3287_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3288_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3287_, v_env_3286_, v___x_3284_);
v___x_3289_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3290_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_3288_, v___x_3289_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_3288_);
if (lean_obj_tag(v___x_3290_) == 0)
{
lean_object* v_a_3291_; lean_object* v___x_3293_; uint8_t v_isShared_3294_; uint8_t v_isSharedCheck_3321_; 
v_a_3291_ = lean_ctor_get(v___x_3290_, 0);
v_isSharedCheck_3321_ = !lean_is_exclusive(v___x_3290_);
if (v_isSharedCheck_3321_ == 0)
{
v___x_3293_ = v___x_3290_;
v_isShared_3294_ = v_isSharedCheck_3321_;
goto v_resetjp_3292_;
}
else
{
lean_inc(v_a_3291_);
lean_dec(v___x_3290_);
v___x_3293_ = lean_box(0);
v_isShared_3294_ = v_isSharedCheck_3321_;
goto v_resetjp_3292_;
}
v_resetjp_3292_:
{
lean_object* v_fst_3295_; lean_object* v___x_3297_; uint8_t v_isShared_3298_; uint8_t v_isSharedCheck_3319_; 
v_fst_3295_ = lean_ctor_get(v_a_3291_, 0);
v_isSharedCheck_3319_ = !lean_is_exclusive(v_a_3291_);
if (v_isSharedCheck_3319_ == 0)
{
lean_object* v_unused_3320_; 
v_unused_3320_ = lean_ctor_get(v_a_3291_, 1);
lean_dec(v_unused_3320_);
v___x_3297_ = v_a_3291_;
v_isShared_3298_ = v_isSharedCheck_3319_;
goto v_resetjp_3296_;
}
else
{
lean_inc(v_fst_3295_);
lean_dec(v_a_3291_);
v___x_3297_ = lean_box(0);
v_isShared_3298_ = v_isSharedCheck_3319_;
goto v_resetjp_3296_;
}
v_resetjp_3296_:
{
if (lean_obj_tag(v_fst_3295_) == 0)
{
lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3302_; 
lean_del_object(v___x_3293_);
v___x_3299_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3300_ = l_Lean_MessageData_ofName(v___x_3284_);
lean_inc_ref(v___x_3300_);
if (v_isShared_3298_ == 0)
{
lean_ctor_set_tag(v___x_3297_, 7);
lean_ctor_set(v___x_3297_, 1, v___x_3300_);
lean_ctor_set(v___x_3297_, 0, v___x_3299_);
v___x_3302_ = v___x_3297_;
goto v_reusejp_3301_;
}
else
{
lean_object* v_reuseFailAlloc_3314_; 
v_reuseFailAlloc_3314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3314_, 0, v___x_3299_);
lean_ctor_set(v_reuseFailAlloc_3314_, 1, v___x_3300_);
v___x_3302_ = v_reuseFailAlloc_3314_;
goto v_reusejp_3301_;
}
v_reusejp_3301_:
{
lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; 
v___x_3303_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3304_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3302_);
lean_ctor_set(v___x_3304_, 1, v___x_3303_);
v___x_3305_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_3306_ = l_Lean_indentD(v___x_3305_);
v___x_3307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3307_, 0, v___x_3304_);
lean_ctor_set(v___x_3307_, 1, v___x_3306_);
v___x_3308_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3309_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3309_, 0, v___x_3307_);
lean_ctor_set(v___x_3309_, 1, v___x_3308_);
v___x_3310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3310_, 0, v___x_3309_);
lean_ctor_set(v___x_3310_, 1, v___x_3300_);
v___x_3311_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_3312_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3312_, 0, v___x_3310_);
lean_ctor_set(v___x_3312_, 1, v___x_3311_);
v___x_3313_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3312_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_3313_;
}
}
else
{
lean_object* v_val_3315_; lean_object* v___x_3317_; 
lean_del_object(v___x_3297_);
lean_dec(v___x_3284_);
lean_dec(v_stx_2393_);
v_val_3315_ = lean_ctor_get(v_fst_3295_, 0);
lean_inc(v_val_3315_);
lean_dec_ref_known(v_fst_3295_, 1);
if (v_isShared_3294_ == 0)
{
lean_ctor_set(v___x_3293_, 0, v_val_3315_);
v___x_3317_ = v___x_3293_;
goto v_reusejp_3316_;
}
else
{
lean_object* v_reuseFailAlloc_3318_; 
v_reuseFailAlloc_3318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3318_, 0, v_val_3315_);
v___x_3317_ = v_reuseFailAlloc_3318_;
goto v_reusejp_3316_;
}
v_reusejp_3316_:
{
return v___x_3317_;
}
}
}
}
}
else
{
lean_object* v_a_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3329_; 
lean_dec(v___x_3284_);
lean_dec(v_stx_2393_);
v_a_3322_ = lean_ctor_get(v___x_3290_, 0);
v_isSharedCheck_3329_ = !lean_is_exclusive(v___x_3290_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3324_ = v___x_3290_;
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_a_3322_);
lean_dec(v___x_3290_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v___x_3327_; 
if (v_isShared_3325_ == 0)
{
v___x_3327_ = v___x_3324_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v_a_3322_);
v___x_3327_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
return v___x_3327_;
}
}
}
}
else
{
lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; uint8_t v___x_3333_; 
v___x_3330_ = lean_unsigned_to_nat(0u);
v___x_3331_ = l_Lean_Syntax_getArg(v___x_3281_, v___x_3330_);
lean_dec(v___x_3281_);
v___x_3332_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__74));
lean_inc(v___x_3331_);
v___x_3333_ = l_Lean_Syntax_isOfKind(v___x_3331_, v___x_3332_);
if (v___x_3333_ == 0)
{
lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v_env_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; 
lean_dec(v___x_3331_);
lean_dec(v___x_3256_);
lean_del_object(v___x_3253_);
lean_dec(v_val_3251_);
lean_inc_n(v_stx_2393_, 2);
v___x_3334_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_3335_ = lean_st_ref_get(v_a_2399_);
v_env_3336_ = lean_ctor_get(v___x_3335_, 0);
lean_inc_ref(v_env_3336_);
lean_dec(v___x_3335_);
v___x_3337_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3338_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3337_, v_env_3336_, v___x_3334_);
v___x_3339_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3340_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_3338_, v___x_3339_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_3338_);
if (lean_obj_tag(v___x_3340_) == 0)
{
lean_object* v_a_3341_; lean_object* v___x_3343_; uint8_t v_isShared_3344_; uint8_t v_isSharedCheck_3371_; 
v_a_3341_ = lean_ctor_get(v___x_3340_, 0);
v_isSharedCheck_3371_ = !lean_is_exclusive(v___x_3340_);
if (v_isSharedCheck_3371_ == 0)
{
v___x_3343_ = v___x_3340_;
v_isShared_3344_ = v_isSharedCheck_3371_;
goto v_resetjp_3342_;
}
else
{
lean_inc(v_a_3341_);
lean_dec(v___x_3340_);
v___x_3343_ = lean_box(0);
v_isShared_3344_ = v_isSharedCheck_3371_;
goto v_resetjp_3342_;
}
v_resetjp_3342_:
{
lean_object* v_fst_3345_; lean_object* v___x_3347_; uint8_t v_isShared_3348_; uint8_t v_isSharedCheck_3369_; 
v_fst_3345_ = lean_ctor_get(v_a_3341_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v_a_3341_);
if (v_isSharedCheck_3369_ == 0)
{
lean_object* v_unused_3370_; 
v_unused_3370_ = lean_ctor_get(v_a_3341_, 1);
lean_dec(v_unused_3370_);
v___x_3347_ = v_a_3341_;
v_isShared_3348_ = v_isSharedCheck_3369_;
goto v_resetjp_3346_;
}
else
{
lean_inc(v_fst_3345_);
lean_dec(v_a_3341_);
v___x_3347_ = lean_box(0);
v_isShared_3348_ = v_isSharedCheck_3369_;
goto v_resetjp_3346_;
}
v_resetjp_3346_:
{
if (lean_obj_tag(v_fst_3345_) == 0)
{
lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3352_; 
lean_del_object(v___x_3343_);
v___x_3349_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3350_ = l_Lean_MessageData_ofName(v___x_3334_);
lean_inc_ref(v___x_3350_);
if (v_isShared_3348_ == 0)
{
lean_ctor_set_tag(v___x_3347_, 7);
lean_ctor_set(v___x_3347_, 1, v___x_3350_);
lean_ctor_set(v___x_3347_, 0, v___x_3349_);
v___x_3352_ = v___x_3347_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3364_; 
v_reuseFailAlloc_3364_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3364_, 0, v___x_3349_);
lean_ctor_set(v_reuseFailAlloc_3364_, 1, v___x_3350_);
v___x_3352_ = v_reuseFailAlloc_3364_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; 
v___x_3353_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3354_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3354_, 0, v___x_3352_);
lean_ctor_set(v___x_3354_, 1, v___x_3353_);
v___x_3355_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_3356_ = l_Lean_indentD(v___x_3355_);
v___x_3357_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3357_, 0, v___x_3354_);
lean_ctor_set(v___x_3357_, 1, v___x_3356_);
v___x_3358_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3359_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3357_);
lean_ctor_set(v___x_3359_, 1, v___x_3358_);
v___x_3360_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3360_, 0, v___x_3359_);
lean_ctor_set(v___x_3360_, 1, v___x_3350_);
v___x_3361_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_3362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3362_, 0, v___x_3360_);
lean_ctor_set(v___x_3362_, 1, v___x_3361_);
v___x_3363_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3362_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_3363_;
}
}
else
{
lean_object* v_val_3365_; lean_object* v___x_3367_; 
lean_del_object(v___x_3347_);
lean_dec(v___x_3334_);
lean_dec(v_stx_2393_);
v_val_3365_ = lean_ctor_get(v_fst_3345_, 0);
lean_inc(v_val_3365_);
lean_dec_ref_known(v_fst_3345_, 1);
if (v_isShared_3344_ == 0)
{
lean_ctor_set(v___x_3343_, 0, v_val_3365_);
v___x_3367_ = v___x_3343_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_val_3365_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
return v___x_3367_;
}
}
}
}
}
else
{
lean_object* v_a_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3379_; 
lean_dec(v___x_3334_);
lean_dec(v_stx_2393_);
v_a_3372_ = lean_ctor_get(v___x_3340_, 0);
v_isSharedCheck_3379_ = !lean_is_exclusive(v___x_3340_);
if (v_isSharedCheck_3379_ == 0)
{
v___x_3374_ = v___x_3340_;
v_isShared_3375_ = v_isSharedCheck_3379_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_a_3372_);
lean_dec(v___x_3340_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3379_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3377_; 
if (v_isShared_3375_ == 0)
{
v___x_3377_ = v___x_3374_;
goto v_reusejp_3376_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v_a_3372_);
v___x_3377_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3376_;
}
v_reusejp_3376_:
{
return v___x_3377_;
}
}
}
}
else
{
lean_object* v___x_3380_; lean_object* v___x_3382_; 
lean_dec(v_stx_2393_);
v___x_3380_ = l_Lean_Syntax_getArg(v___x_3331_, v___x_3255_);
lean_dec(v___x_3331_);
if (v_isShared_3254_ == 0)
{
lean_ctor_set(v___x_3253_, 0, v___x_3380_);
v___x_3382_ = v___x_3253_;
goto v_reusejp_3381_;
}
else
{
lean_object* v_reuseFailAlloc_3383_; 
v_reuseFailAlloc_3383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3383_, 0, v___x_3380_);
v___x_3382_ = v_reuseFailAlloc_3383_;
goto v_reusejp_3381_;
}
v_reusejp_3381_:
{
v_finSeq_x3f_3258_ = v___x_3382_;
v___y_3259_ = v_a_2394_;
v___y_3260_ = v_a_2395_;
v___y_3261_ = v_a_2396_;
v___y_3262_ = v_a_2397_;
v___y_3263_ = v_a_2398_;
v___y_3264_ = v_a_2399_;
goto v___jp_3257_;
}
}
}
}
else
{
lean_object* v___x_3384_; 
lean_dec(v___x_3281_);
lean_del_object(v___x_3253_);
lean_dec(v_stx_2393_);
v___x_3384_ = lean_box(0);
v_finSeq_x3f_3258_ = v___x_3384_;
v___y_3259_ = v_a_2394_;
v___y_3260_ = v_a_2395_;
v___y_3261_ = v_a_2396_;
v___y_3262_ = v_a_2397_;
v___y_3263_ = v_a_2398_;
v___y_3264_ = v_a_2399_;
goto v___jp_3257_;
}
v___jp_3257_:
{
lean_object* v___x_3265_; 
v___x_3265_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3256_, v___y_3259_, v___y_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_);
if (lean_obj_tag(v___x_3265_) == 0)
{
lean_object* v_a_3266_; size_t v_sz_3267_; lean_object* v___x_3268_; 
v_a_3266_ = lean_ctor_get(v___x_3265_, 0);
lean_inc(v_a_3266_);
lean_dec_ref_known(v___x_3265_, 1);
v_sz_3267_ = lean_array_size(v_val_3251_);
v___x_3268_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(v_val_3251_, v_sz_3267_, v___x_3203_, v_a_3266_, v___y_3259_, v___y_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_);
lean_dec(v_val_3251_);
if (lean_obj_tag(v___x_3268_) == 0)
{
lean_object* v_a_3269_; lean_object* v___x_3270_; 
v_a_3269_ = lean_ctor_get(v___x_3268_, 0);
lean_inc(v_a_3269_);
lean_dec_ref_known(v___x_3268_, 1);
v___x_3270_ = l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(v_finSeq_x3f_3258_, v___y_3259_, v___y_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v_a_3271_; lean_object* v___x_3273_; uint8_t v_isShared_3274_; uint8_t v_isSharedCheck_3279_; 
v_a_3271_ = lean_ctor_get(v___x_3270_, 0);
v_isSharedCheck_3279_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3279_ == 0)
{
v___x_3273_ = v___x_3270_;
v_isShared_3274_ = v_isSharedCheck_3279_;
goto v_resetjp_3272_;
}
else
{
lean_inc(v_a_3271_);
lean_dec(v___x_3270_);
v___x_3273_ = lean_box(0);
v_isShared_3274_ = v_isSharedCheck_3279_;
goto v_resetjp_3272_;
}
v_resetjp_3272_:
{
lean_object* v___x_3275_; lean_object* v___x_3277_; 
v___x_3275_ = l_Lean_Elab_Do_ControlInfo_sequence(v_a_3269_, v_a_3271_);
if (v_isShared_3274_ == 0)
{
lean_ctor_set(v___x_3273_, 0, v___x_3275_);
v___x_3277_ = v___x_3273_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v___x_3275_);
v___x_3277_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
return v___x_3277_;
}
}
}
else
{
lean_dec(v_a_3269_);
return v___x_3270_;
}
}
else
{
lean_dec(v_finSeq_x3f_3258_);
return v___x_3268_;
}
}
else
{
lean_dec(v_finSeq_x3f_3258_);
lean_dec(v_val_3251_);
return v___x_3265_;
}
}
}
}
}
}
else
{
lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___y_3389_; lean_object* v___y_3390_; lean_object* v___y_3391_; lean_object* v___y_3392_; lean_object* v___y_3393_; lean_object* v___y_3394_; lean_object* v___y_3405_; lean_object* v___y_3406_; lean_object* v___y_3407_; lean_object* v___y_3408_; lean_object* v___y_3409_; lean_object* v___y_3410_; lean_object* v___x_3510_; uint8_t v___x_3511_; 
v___x_3386_ = lean_unsigned_to_nat(0u);
v___x_3387_ = lean_unsigned_to_nat(1u);
v___x_3510_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3387_);
v___x_3511_ = l_Lean_Syntax_isNone(v___x_3510_);
if (v___x_3511_ == 0)
{
uint8_t v___x_3512_; 
lean_inc(v___x_3510_);
v___x_3512_ = l_Lean_Syntax_matchesNull(v___x_3510_, v___x_3387_);
if (v___x_3512_ == 0)
{
lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v_env_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; 
lean_dec(v___x_3510_);
lean_inc_n(v_stx_2393_, 2);
v___x_3513_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_3514_ = lean_st_ref_get(v_a_2399_);
v_env_3515_ = lean_ctor_get(v___x_3514_, 0);
lean_inc_ref(v_env_3515_);
lean_dec(v___x_3514_);
v___x_3516_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3517_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3516_, v_env_3515_, v___x_3513_);
v___x_3518_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3519_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_3517_, v___x_3518_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_3517_);
if (lean_obj_tag(v___x_3519_) == 0)
{
lean_object* v_a_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3550_; 
v_a_3520_ = lean_ctor_get(v___x_3519_, 0);
v_isSharedCheck_3550_ = !lean_is_exclusive(v___x_3519_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3522_ = v___x_3519_;
v_isShared_3523_ = v_isSharedCheck_3550_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_a_3520_);
lean_dec(v___x_3519_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3550_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v_fst_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3548_; 
v_fst_3524_ = lean_ctor_get(v_a_3520_, 0);
v_isSharedCheck_3548_ = !lean_is_exclusive(v_a_3520_);
if (v_isSharedCheck_3548_ == 0)
{
lean_object* v_unused_3549_; 
v_unused_3549_ = lean_ctor_get(v_a_3520_, 1);
lean_dec(v_unused_3549_);
v___x_3526_ = v_a_3520_;
v_isShared_3527_ = v_isSharedCheck_3548_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_fst_3524_);
lean_dec(v_a_3520_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3548_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
if (lean_obj_tag(v_fst_3524_) == 0)
{
lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3531_; 
lean_del_object(v___x_3522_);
v___x_3528_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3529_ = l_Lean_MessageData_ofName(v___x_3513_);
lean_inc_ref(v___x_3529_);
if (v_isShared_3527_ == 0)
{
lean_ctor_set_tag(v___x_3526_, 7);
lean_ctor_set(v___x_3526_, 1, v___x_3529_);
lean_ctor_set(v___x_3526_, 0, v___x_3528_);
v___x_3531_ = v___x_3526_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v___x_3528_);
lean_ctor_set(v_reuseFailAlloc_3543_, 1, v___x_3529_);
v___x_3531_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; 
v___x_3532_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3533_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3531_);
lean_ctor_set(v___x_3533_, 1, v___x_3532_);
v___x_3534_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_3535_ = l_Lean_indentD(v___x_3534_);
v___x_3536_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3533_);
lean_ctor_set(v___x_3536_, 1, v___x_3535_);
v___x_3537_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3538_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3538_, 0, v___x_3536_);
lean_ctor_set(v___x_3538_, 1, v___x_3537_);
v___x_3539_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3539_, 0, v___x_3538_);
lean_ctor_set(v___x_3539_, 1, v___x_3529_);
v___x_3540_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_3541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3541_, 0, v___x_3539_);
lean_ctor_set(v___x_3541_, 1, v___x_3540_);
v___x_3542_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3541_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_3542_;
}
}
else
{
lean_object* v_val_3544_; lean_object* v___x_3546_; 
lean_del_object(v___x_3526_);
lean_dec(v___x_3513_);
lean_dec(v_stx_2393_);
v_val_3544_ = lean_ctor_get(v_fst_3524_, 0);
lean_inc(v_val_3544_);
lean_dec_ref_known(v_fst_3524_, 1);
if (v_isShared_3523_ == 0)
{
lean_ctor_set(v___x_3522_, 0, v_val_3544_);
v___x_3546_ = v___x_3522_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v_val_3544_);
v___x_3546_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
return v___x_3546_;
}
}
}
}
}
else
{
lean_object* v_a_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3558_; 
lean_dec(v___x_3513_);
lean_dec(v_stx_2393_);
v_a_3551_ = lean_ctor_get(v___x_3519_, 0);
v_isSharedCheck_3558_ = !lean_is_exclusive(v___x_3519_);
if (v_isSharedCheck_3558_ == 0)
{
v___x_3553_ = v___x_3519_;
v_isShared_3554_ = v_isSharedCheck_3558_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_a_3551_);
lean_dec(v___x_3519_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3558_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v___x_3556_; 
if (v_isShared_3554_ == 0)
{
v___x_3556_ = v___x_3553_;
goto v_reusejp_3555_;
}
else
{
lean_object* v_reuseFailAlloc_3557_; 
v_reuseFailAlloc_3557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3557_, 0, v_a_3551_);
v___x_3556_ = v_reuseFailAlloc_3557_;
goto v_reusejp_3555_;
}
v_reusejp_3555_:
{
return v___x_3556_;
}
}
}
}
else
{
lean_object* v___x_3559_; lean_object* v___x_3560_; uint8_t v___x_3561_; 
v___x_3559_ = l_Lean_Syntax_getArg(v___x_3510_, v___x_3386_);
lean_dec(v___x_3510_);
v___x_3560_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78));
v___x_3561_ = l_Lean_Syntax_isOfKind(v___x_3559_, v___x_3560_);
if (v___x_3561_ == 0)
{
lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v_env_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; 
lean_inc_n(v_stx_2393_, 2);
v___x_3562_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_3563_ = lean_st_ref_get(v_a_2399_);
v_env_3564_ = lean_ctor_get(v___x_3563_, 0);
lean_inc_ref(v_env_3564_);
lean_dec(v___x_3563_);
v___x_3565_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3566_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3565_, v_env_3564_, v___x_3562_);
v___x_3567_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3568_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_3566_, v___x_3567_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_3566_);
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v_a_3569_; lean_object* v___x_3571_; uint8_t v_isShared_3572_; uint8_t v_isSharedCheck_3599_; 
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3599_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3599_ == 0)
{
v___x_3571_ = v___x_3568_;
v_isShared_3572_ = v_isSharedCheck_3599_;
goto v_resetjp_3570_;
}
else
{
lean_inc(v_a_3569_);
lean_dec(v___x_3568_);
v___x_3571_ = lean_box(0);
v_isShared_3572_ = v_isSharedCheck_3599_;
goto v_resetjp_3570_;
}
v_resetjp_3570_:
{
lean_object* v_fst_3573_; lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3597_; 
v_fst_3573_ = lean_ctor_get(v_a_3569_, 0);
v_isSharedCheck_3597_ = !lean_is_exclusive(v_a_3569_);
if (v_isSharedCheck_3597_ == 0)
{
lean_object* v_unused_3598_; 
v_unused_3598_ = lean_ctor_get(v_a_3569_, 1);
lean_dec(v_unused_3598_);
v___x_3575_ = v_a_3569_;
v_isShared_3576_ = v_isSharedCheck_3597_;
goto v_resetjp_3574_;
}
else
{
lean_inc(v_fst_3573_);
lean_dec(v_a_3569_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3597_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
if (lean_obj_tag(v_fst_3573_) == 0)
{
lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3580_; 
lean_del_object(v___x_3571_);
v___x_3577_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3578_ = l_Lean_MessageData_ofName(v___x_3562_);
lean_inc_ref(v___x_3578_);
if (v_isShared_3576_ == 0)
{
lean_ctor_set_tag(v___x_3575_, 7);
lean_ctor_set(v___x_3575_, 1, v___x_3578_);
lean_ctor_set(v___x_3575_, 0, v___x_3577_);
v___x_3580_ = v___x_3575_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v___x_3577_);
lean_ctor_set(v_reuseFailAlloc_3592_, 1, v___x_3578_);
v___x_3580_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; 
v___x_3581_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3582_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3582_, 0, v___x_3580_);
lean_ctor_set(v___x_3582_, 1, v___x_3581_);
v___x_3583_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_3584_ = l_Lean_indentD(v___x_3583_);
v___x_3585_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3585_, 0, v___x_3582_);
lean_ctor_set(v___x_3585_, 1, v___x_3584_);
v___x_3586_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3587_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3587_, 0, v___x_3585_);
lean_ctor_set(v___x_3587_, 1, v___x_3586_);
v___x_3588_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3588_, 0, v___x_3587_);
lean_ctor_set(v___x_3588_, 1, v___x_3578_);
v___x_3589_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_3590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3590_, 0, v___x_3588_);
lean_ctor_set(v___x_3590_, 1, v___x_3589_);
v___x_3591_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3590_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_3591_;
}
}
else
{
lean_object* v_val_3593_; lean_object* v___x_3595_; 
lean_del_object(v___x_3575_);
lean_dec(v___x_3562_);
lean_dec(v_stx_2393_);
v_val_3593_ = lean_ctor_get(v_fst_3573_, 0);
lean_inc(v_val_3593_);
lean_dec_ref_known(v_fst_3573_, 1);
if (v_isShared_3572_ == 0)
{
lean_ctor_set(v___x_3571_, 0, v_val_3593_);
v___x_3595_ = v___x_3571_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3596_; 
v_reuseFailAlloc_3596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3596_, 0, v_val_3593_);
v___x_3595_ = v_reuseFailAlloc_3596_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
return v___x_3595_;
}
}
}
}
}
else
{
lean_object* v_a_3600_; lean_object* v___x_3602_; uint8_t v_isShared_3603_; uint8_t v_isSharedCheck_3607_; 
lean_dec(v___x_3562_);
lean_dec(v_stx_2393_);
v_a_3600_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3607_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3607_ == 0)
{
v___x_3602_ = v___x_3568_;
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
else
{
lean_inc(v_a_3600_);
lean_dec(v___x_3568_);
v___x_3602_ = lean_box(0);
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
v_resetjp_3601_:
{
lean_object* v___x_3605_; 
if (v_isShared_3603_ == 0)
{
v___x_3605_ = v___x_3602_;
goto v_reusejp_3604_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v_a_3600_);
v___x_3605_ = v_reuseFailAlloc_3606_;
goto v_reusejp_3604_;
}
v_reusejp_3604_:
{
return v___x_3605_;
}
}
}
}
else
{
v___y_3405_ = v_a_2394_;
v___y_3406_ = v_a_2395_;
v___y_3407_ = v_a_2396_;
v___y_3408_ = v_a_2397_;
v___y_3409_ = v_a_2398_;
v___y_3410_ = v_a_2399_;
goto v___jp_3404_;
}
}
}
else
{
lean_dec(v___x_3510_);
v___y_3405_ = v_a_2394_;
v___y_3406_ = v_a_2395_;
v___y_3407_ = v_a_2396_;
v___y_3408_ = v_a_2397_;
v___y_3409_ = v_a_2398_;
v___y_3410_ = v_a_2399_;
goto v___jp_3404_;
}
v___jp_3388_:
{
lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; 
v___x_3395_ = lean_unsigned_to_nat(3u);
v___x_3396_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3395_);
lean_dec(v_stx_2393_);
v___x_3397_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3396_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_);
if (lean_obj_tag(v___x_3397_) == 0)
{
lean_object* v_a_3398_; uint8_t v_breaks_3399_; 
v_a_3398_ = lean_ctor_get(v___x_3397_, 0);
lean_inc(v_a_3398_);
lean_dec_ref_known(v___x_3397_, 1);
v_breaks_3399_ = lean_ctor_get_uint8(v_a_3398_, sizeof(void*)*2);
if (v_breaks_3399_ == 0)
{
uint8_t v_returnsEarly_3400_; lean_object* v_reassigns_3401_; 
v_returnsEarly_3400_ = lean_ctor_get_uint8(v_a_3398_, sizeof(void*)*2 + 2);
v_reassigns_3401_ = lean_ctor_get(v_a_3398_, 1);
lean_inc(v_reassigns_3401_);
lean_dec(v_a_3398_);
v___y_2802_ = v_reassigns_3401_;
v___y_2803_ = v___x_3386_;
v___y_2804_ = v_returnsEarly_3400_;
v___y_2805_ = v___x_2809_;
goto v___jp_2801_;
}
else
{
uint8_t v_returnsEarly_3402_; lean_object* v_reassigns_3403_; 
v_returnsEarly_3402_ = lean_ctor_get_uint8(v_a_3398_, sizeof(void*)*2 + 2);
v_reassigns_3403_ = lean_ctor_get(v_a_3398_, 1);
lean_inc(v_reassigns_3403_);
lean_dec(v_a_3398_);
v___y_2802_ = v_reassigns_3403_;
v___y_2803_ = v___x_3387_;
v___y_2804_ = v_returnsEarly_3402_;
v___y_2805_ = v___x_2800_;
goto v___jp_2801_;
}
}
else
{
return v___x_3397_;
}
}
v___jp_3404_:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; uint8_t v___x_3413_; 
v___x_3411_ = lean_unsigned_to_nat(2u);
v___x_3412_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3411_);
v___x_3413_ = l_Lean_Syntax_isNone(v___x_3412_);
if (v___x_3413_ == 0)
{
uint8_t v___x_3414_; 
lean_inc(v___x_3412_);
v___x_3414_ = l_Lean_Syntax_matchesNull(v___x_3412_, v___x_3387_);
if (v___x_3414_ == 0)
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v_env_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; 
lean_dec(v___x_3412_);
lean_inc_n(v_stx_2393_, 2);
v___x_3415_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_3416_ = lean_st_ref_get(v___y_3410_);
v_env_3417_ = lean_ctor_get(v___x_3416_, 0);
lean_inc_ref(v_env_3417_);
lean_dec(v___x_3416_);
v___x_3418_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3419_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3418_, v_env_3417_, v___x_3415_);
v___x_3420_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3421_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_3419_, v___x_3420_, v___y_3405_, v___y_3406_, v___y_3407_, v___y_3408_, v___y_3409_, v___y_3410_);
lean_dec(v___x_3419_);
if (lean_obj_tag(v___x_3421_) == 0)
{
lean_object* v_a_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3452_; 
v_a_3422_ = lean_ctor_get(v___x_3421_, 0);
v_isSharedCheck_3452_ = !lean_is_exclusive(v___x_3421_);
if (v_isSharedCheck_3452_ == 0)
{
v___x_3424_ = v___x_3421_;
v_isShared_3425_ = v_isSharedCheck_3452_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_a_3422_);
lean_dec(v___x_3421_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3452_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v_fst_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3450_; 
v_fst_3426_ = lean_ctor_get(v_a_3422_, 0);
v_isSharedCheck_3450_ = !lean_is_exclusive(v_a_3422_);
if (v_isSharedCheck_3450_ == 0)
{
lean_object* v_unused_3451_; 
v_unused_3451_ = lean_ctor_get(v_a_3422_, 1);
lean_dec(v_unused_3451_);
v___x_3428_ = v_a_3422_;
v_isShared_3429_ = v_isSharedCheck_3450_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_fst_3426_);
lean_dec(v_a_3422_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3450_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
if (lean_obj_tag(v_fst_3426_) == 0)
{
lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3433_; 
lean_del_object(v___x_3424_);
v___x_3430_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3431_ = l_Lean_MessageData_ofName(v___x_3415_);
lean_inc_ref(v___x_3431_);
if (v_isShared_3429_ == 0)
{
lean_ctor_set_tag(v___x_3428_, 7);
lean_ctor_set(v___x_3428_, 1, v___x_3431_);
lean_ctor_set(v___x_3428_, 0, v___x_3430_);
v___x_3433_ = v___x_3428_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v___x_3430_);
lean_ctor_set(v_reuseFailAlloc_3445_, 1, v___x_3431_);
v___x_3433_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; 
v___x_3434_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3435_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3435_, 0, v___x_3433_);
lean_ctor_set(v___x_3435_, 1, v___x_3434_);
v___x_3436_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_3437_ = l_Lean_indentD(v___x_3436_);
v___x_3438_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3438_, 0, v___x_3435_);
lean_ctor_set(v___x_3438_, 1, v___x_3437_);
v___x_3439_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3440_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3440_, 0, v___x_3438_);
lean_ctor_set(v___x_3440_, 1, v___x_3439_);
v___x_3441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3441_, 0, v___x_3440_);
lean_ctor_set(v___x_3441_, 1, v___x_3431_);
v___x_3442_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_3443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3443_, 0, v___x_3441_);
lean_ctor_set(v___x_3443_, 1, v___x_3442_);
v___x_3444_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3443_, v___y_3405_, v___y_3406_, v___y_3407_, v___y_3408_, v___y_3409_, v___y_3410_);
return v___x_3444_;
}
}
else
{
lean_object* v_val_3446_; lean_object* v___x_3448_; 
lean_del_object(v___x_3428_);
lean_dec(v___x_3415_);
lean_dec(v_stx_2393_);
v_val_3446_ = lean_ctor_get(v_fst_3426_, 0);
lean_inc(v_val_3446_);
lean_dec_ref_known(v_fst_3426_, 1);
if (v_isShared_3425_ == 0)
{
lean_ctor_set(v___x_3424_, 0, v_val_3446_);
v___x_3448_ = v___x_3424_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v_val_3446_);
v___x_3448_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
return v___x_3448_;
}
}
}
}
}
else
{
lean_object* v_a_3453_; lean_object* v___x_3455_; uint8_t v_isShared_3456_; uint8_t v_isSharedCheck_3460_; 
lean_dec(v___x_3415_);
lean_dec(v_stx_2393_);
v_a_3453_ = lean_ctor_get(v___x_3421_, 0);
v_isSharedCheck_3460_ = !lean_is_exclusive(v___x_3421_);
if (v_isSharedCheck_3460_ == 0)
{
v___x_3455_ = v___x_3421_;
v_isShared_3456_ = v_isSharedCheck_3460_;
goto v_resetjp_3454_;
}
else
{
lean_inc(v_a_3453_);
lean_dec(v___x_3421_);
v___x_3455_ = lean_box(0);
v_isShared_3456_ = v_isSharedCheck_3460_;
goto v_resetjp_3454_;
}
v_resetjp_3454_:
{
lean_object* v___x_3458_; 
if (v_isShared_3456_ == 0)
{
v___x_3458_ = v___x_3455_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v_a_3453_);
v___x_3458_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
return v___x_3458_;
}
}
}
}
else
{
lean_object* v___x_3461_; lean_object* v___x_3462_; uint8_t v___x_3463_; 
v___x_3461_ = l_Lean_Syntax_getArg(v___x_3412_, v___x_3386_);
lean_dec(v___x_3412_);
v___x_3462_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76));
v___x_3463_ = l_Lean_Syntax_isOfKind(v___x_3461_, v___x_3462_);
if (v___x_3463_ == 0)
{
lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v_env_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; 
lean_inc_n(v_stx_2393_, 2);
v___x_3464_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_3465_ = lean_st_ref_get(v___y_3410_);
v_env_3466_ = lean_ctor_get(v___x_3465_, 0);
lean_inc_ref(v_env_3466_);
lean_dec(v___x_3465_);
v___x_3467_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3468_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3467_, v_env_3466_, v___x_3464_);
v___x_3469_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3470_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_3468_, v___x_3469_, v___y_3405_, v___y_3406_, v___y_3407_, v___y_3408_, v___y_3409_, v___y_3410_);
lean_dec(v___x_3468_);
if (lean_obj_tag(v___x_3470_) == 0)
{
lean_object* v_a_3471_; lean_object* v___x_3473_; uint8_t v_isShared_3474_; uint8_t v_isSharedCheck_3501_; 
v_a_3471_ = lean_ctor_get(v___x_3470_, 0);
v_isSharedCheck_3501_ = !lean_is_exclusive(v___x_3470_);
if (v_isSharedCheck_3501_ == 0)
{
v___x_3473_ = v___x_3470_;
v_isShared_3474_ = v_isSharedCheck_3501_;
goto v_resetjp_3472_;
}
else
{
lean_inc(v_a_3471_);
lean_dec(v___x_3470_);
v___x_3473_ = lean_box(0);
v_isShared_3474_ = v_isSharedCheck_3501_;
goto v_resetjp_3472_;
}
v_resetjp_3472_:
{
lean_object* v_fst_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3499_; 
v_fst_3475_ = lean_ctor_get(v_a_3471_, 0);
v_isSharedCheck_3499_ = !lean_is_exclusive(v_a_3471_);
if (v_isSharedCheck_3499_ == 0)
{
lean_object* v_unused_3500_; 
v_unused_3500_ = lean_ctor_get(v_a_3471_, 1);
lean_dec(v_unused_3500_);
v___x_3477_ = v_a_3471_;
v_isShared_3478_ = v_isSharedCheck_3499_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_fst_3475_);
lean_dec(v_a_3471_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3499_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
if (lean_obj_tag(v_fst_3475_) == 0)
{
lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3482_; 
lean_del_object(v___x_3473_);
v___x_3479_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3480_ = l_Lean_MessageData_ofName(v___x_3464_);
lean_inc_ref(v___x_3480_);
if (v_isShared_3478_ == 0)
{
lean_ctor_set_tag(v___x_3477_, 7);
lean_ctor_set(v___x_3477_, 1, v___x_3480_);
lean_ctor_set(v___x_3477_, 0, v___x_3479_);
v___x_3482_ = v___x_3477_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v___x_3479_);
lean_ctor_set(v_reuseFailAlloc_3494_, 1, v___x_3480_);
v___x_3482_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; 
v___x_3483_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3484_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3484_, 0, v___x_3482_);
lean_ctor_set(v___x_3484_, 1, v___x_3483_);
v___x_3485_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_3486_ = l_Lean_indentD(v___x_3485_);
v___x_3487_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3487_, 0, v___x_3484_);
lean_ctor_set(v___x_3487_, 1, v___x_3486_);
v___x_3488_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3489_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3489_, 0, v___x_3487_);
lean_ctor_set(v___x_3489_, 1, v___x_3488_);
v___x_3490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3490_, 0, v___x_3489_);
lean_ctor_set(v___x_3490_, 1, v___x_3480_);
v___x_3491_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_3492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3492_, 0, v___x_3490_);
lean_ctor_set(v___x_3492_, 1, v___x_3491_);
v___x_3493_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3492_, v___y_3405_, v___y_3406_, v___y_3407_, v___y_3408_, v___y_3409_, v___y_3410_);
return v___x_3493_;
}
}
else
{
lean_object* v_val_3495_; lean_object* v___x_3497_; 
lean_del_object(v___x_3477_);
lean_dec(v___x_3464_);
lean_dec(v_stx_2393_);
v_val_3495_ = lean_ctor_get(v_fst_3475_, 0);
lean_inc(v_val_3495_);
lean_dec_ref_known(v_fst_3475_, 1);
if (v_isShared_3474_ == 0)
{
lean_ctor_set(v___x_3473_, 0, v_val_3495_);
v___x_3497_ = v___x_3473_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v_val_3495_);
v___x_3497_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
return v___x_3497_;
}
}
}
}
}
else
{
lean_object* v_a_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3509_; 
lean_dec(v___x_3464_);
lean_dec(v_stx_2393_);
v_a_3502_ = lean_ctor_get(v___x_3470_, 0);
v_isSharedCheck_3509_ = !lean_is_exclusive(v___x_3470_);
if (v_isSharedCheck_3509_ == 0)
{
v___x_3504_ = v___x_3470_;
v_isShared_3505_ = v_isSharedCheck_3509_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_a_3502_);
lean_dec(v___x_3470_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3509_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3507_; 
if (v_isShared_3505_ == 0)
{
v___x_3507_ = v___x_3504_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v_a_3502_);
v___x_3507_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
return v___x_3507_;
}
}
}
}
else
{
v___y_3389_ = v___y_3405_;
v___y_3390_ = v___y_3406_;
v___y_3391_ = v___y_3407_;
v___y_3392_ = v___y_3408_;
v___y_3393_ = v___y_3409_;
v___y_3394_ = v___y_3410_;
goto v___jp_3388_;
}
}
}
else
{
lean_dec(v___x_3412_);
v___y_3389_ = v___y_3405_;
v___y_3390_ = v___y_3406_;
v___y_3391_ = v___y_3407_;
v___y_3392_ = v___y_3408_;
v___y_3393_ = v___y_3409_;
v___y_3394_ = v___y_3410_;
goto v___jp_3388_;
}
}
}
}
else
{
lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___y_3611_; lean_object* v___y_3612_; lean_object* v___y_3613_; lean_object* v___y_3614_; lean_object* v___y_3615_; lean_object* v___y_3616_; lean_object* v___y_3649_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; uint8_t v___x_3700_; 
v___x_3608_ = lean_unsigned_to_nat(0u);
v___x_3609_ = lean_unsigned_to_nat(1u);
v___x_3696_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3609_);
v___x_3697_ = l_Lean_Syntax_getArgs(v___x_3696_);
lean_dec(v___x_3696_);
v___x_3698_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___closed__2));
v___x_3699_ = lean_array_get_size(v___x_3697_);
v___x_3700_ = lean_nat_dec_lt(v___x_3608_, v___x_3699_);
if (v___x_3700_ == 0)
{
lean_dec_ref(v___x_3697_);
v___y_3649_ = v___x_3698_;
goto v___jp_3648_;
}
else
{
lean_object* v___x_3701_; lean_object* v___x_3702_; size_t v___x_3703_; size_t v___x_3704_; lean_object* v___x_3705_; lean_object* v_snd_3706_; 
v___x_3701_ = lean_box(v___x_3700_);
v___x_3702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3702_, 0, v___x_3701_);
lean_ctor_set(v___x_3702_, 1, v___x_3698_);
v___x_3703_ = ((size_t)0ULL);
v___x_3704_ = lean_usize_of_nat(v___x_3699_);
v___x_3705_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__9(v___x_2800_, v___x_2798_, v___x_3697_, v___x_3703_, v___x_3704_, v___x_3702_);
lean_dec_ref(v___x_3697_);
v_snd_3706_ = lean_ctor_get(v___x_3705_, 1);
lean_inc(v_snd_3706_);
lean_dec_ref(v___x_3705_);
v___y_3649_ = v_snd_3706_;
goto v___jp_3648_;
}
v___jp_3610_:
{
lean_object* v___x_3617_; lean_object* v___x_3618_; uint8_t v___x_3619_; 
v___x_3617_ = lean_unsigned_to_nat(3u);
v___x_3618_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3617_);
v___x_3619_ = l_Lean_Syntax_isNone(v___x_3618_);
if (v___x_3619_ == 0)
{
uint8_t v___x_3620_; 
lean_inc(v___x_3618_);
v___x_3620_ = l_Lean_Syntax_matchesNull(v___x_3618_, v___x_3609_);
if (v___x_3620_ == 0)
{
lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; 
lean_dec(v___x_3618_);
v___x_3621_ = lean_unsigned_to_nat(5u);
v___x_3622_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3621_);
lean_dec(v_stx_2393_);
v___x_3623_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3622_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_);
if (lean_obj_tag(v___x_3623_) == 0)
{
lean_object* v_a_3624_; lean_object* v___x_3626_; uint8_t v_isShared_3627_; uint8_t v_isSharedCheck_3632_; 
v_a_3624_ = lean_ctor_get(v___x_3623_, 0);
v_isSharedCheck_3632_ = !lean_is_exclusive(v___x_3623_);
if (v_isSharedCheck_3632_ == 0)
{
v___x_3626_ = v___x_3623_;
v_isShared_3627_ = v_isSharedCheck_3632_;
goto v_resetjp_3625_;
}
else
{
lean_inc(v_a_3624_);
lean_dec(v___x_3623_);
v___x_3626_ = lean_box(0);
v_isShared_3627_ = v_isSharedCheck_3632_;
goto v_resetjp_3625_;
}
v_resetjp_3625_:
{
lean_object* v___x_3628_; lean_object* v___x_3630_; 
v___x_3628_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_3624_);
if (v_isShared_3627_ == 0)
{
lean_ctor_set(v___x_3626_, 0, v___x_3628_);
v___x_3630_ = v___x_3626_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v___x_3628_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
return v___x_3630_;
}
}
}
else
{
return v___x_3623_;
}
}
else
{
lean_object* v___x_3633_; lean_object* v___x_3634_; uint8_t v___x_3635_; 
v___x_3633_ = l_Lean_Syntax_getArg(v___x_3618_, v___x_3608_);
lean_dec(v___x_3618_);
v___x_3634_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__76));
v___x_3635_ = l_Lean_Syntax_isOfKind(v___x_3633_, v___x_3634_);
if (v___x_3635_ == 0)
{
lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; 
v___x_3636_ = lean_unsigned_to_nat(5u);
v___x_3637_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3636_);
lean_dec(v_stx_2393_);
v___x_3638_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3637_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_);
if (lean_obj_tag(v___x_3638_) == 0)
{
lean_object* v_a_3639_; lean_object* v___x_3641_; uint8_t v_isShared_3642_; uint8_t v_isSharedCheck_3647_; 
v_a_3639_ = lean_ctor_get(v___x_3638_, 0);
v_isSharedCheck_3647_ = !lean_is_exclusive(v___x_3638_);
if (v_isSharedCheck_3647_ == 0)
{
v___x_3641_ = v___x_3638_;
v_isShared_3642_ = v_isSharedCheck_3647_;
goto v_resetjp_3640_;
}
else
{
lean_inc(v_a_3639_);
lean_dec(v___x_3638_);
v___x_3641_ = lean_box(0);
v_isShared_3642_ = v_isSharedCheck_3647_;
goto v_resetjp_3640_;
}
v_resetjp_3640_:
{
lean_object* v___x_3643_; lean_object* v___x_3645_; 
v___x_3643_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_3639_);
if (v_isShared_3642_ == 0)
{
lean_ctor_set(v___x_3641_, 0, v___x_3643_);
v___x_3645_ = v___x_3641_;
goto v_reusejp_3644_;
}
else
{
lean_object* v_reuseFailAlloc_3646_; 
v_reuseFailAlloc_3646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3646_, 0, v___x_3643_);
v___x_3645_ = v_reuseFailAlloc_3646_;
goto v_reusejp_3644_;
}
v_reusejp_3644_:
{
return v___x_3645_;
}
}
}
else
{
return v___x_3638_;
}
}
else
{
v___y_2420_ = v___y_3611_;
v___y_2421_ = v___y_3612_;
v___y_2422_ = v___y_3613_;
v___y_2423_ = v___y_3614_;
v___y_2424_ = v___y_3615_;
v___y_2425_ = v___y_3616_;
goto v___jp_2419_;
}
}
}
else
{
lean_dec(v___x_3618_);
v___y_2420_ = v___y_3611_;
v___y_2421_ = v___y_3612_;
v___y_2422_ = v___y_3613_;
v___y_2423_ = v___y_3614_;
v___y_2424_ = v___y_3615_;
v___y_2425_ = v___y_3616_;
goto v___jp_2419_;
}
}
v___jp_3648_:
{
size_t v_sz_3650_; size_t v___x_3651_; lean_object* v___x_3652_; 
v_sz_3650_ = lean_array_size(v___y_3649_);
v___x_3651_ = ((size_t)0ULL);
v___x_3652_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__12(v_sz_3650_, v___x_3651_, v___y_3649_);
if (lean_obj_tag(v___x_3652_) == 0)
{
lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; 
v___x_3653_ = lean_unsigned_to_nat(5u);
v___x_3654_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3653_);
lean_dec(v_stx_2393_);
v___x_3655_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3654_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_3655_) == 0)
{
lean_object* v_a_3656_; lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3664_; 
v_a_3656_ = lean_ctor_get(v___x_3655_, 0);
v_isSharedCheck_3664_ = !lean_is_exclusive(v___x_3655_);
if (v_isSharedCheck_3664_ == 0)
{
v___x_3658_ = v___x_3655_;
v_isShared_3659_ = v_isSharedCheck_3664_;
goto v_resetjp_3657_;
}
else
{
lean_inc(v_a_3656_);
lean_dec(v___x_3655_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3664_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
lean_object* v___x_3660_; lean_object* v___x_3662_; 
v___x_3660_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_3656_);
if (v_isShared_3659_ == 0)
{
lean_ctor_set(v___x_3658_, 0, v___x_3660_);
v___x_3662_ = v___x_3658_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3663_; 
v_reuseFailAlloc_3663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3663_, 0, v___x_3660_);
v___x_3662_ = v_reuseFailAlloc_3663_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
return v___x_3662_;
}
}
}
else
{
return v___x_3655_;
}
}
else
{
lean_object* v___x_3665_; lean_object* v___x_3666_; uint8_t v___x_3667_; 
lean_dec_ref_known(v___x_3652_, 1);
v___x_3665_ = lean_unsigned_to_nat(2u);
v___x_3666_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3665_);
v___x_3667_ = l_Lean_Syntax_isNone(v___x_3666_);
if (v___x_3667_ == 0)
{
uint8_t v___x_3668_; 
lean_inc(v___x_3666_);
v___x_3668_ = l_Lean_Syntax_matchesNull(v___x_3666_, v___x_3609_);
if (v___x_3668_ == 0)
{
lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; 
lean_dec(v___x_3666_);
v___x_3669_ = lean_unsigned_to_nat(5u);
v___x_3670_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3669_);
lean_dec(v_stx_2393_);
v___x_3671_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3670_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_3671_) == 0)
{
lean_object* v_a_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3680_; 
v_a_3672_ = lean_ctor_get(v___x_3671_, 0);
v_isSharedCheck_3680_ = !lean_is_exclusive(v___x_3671_);
if (v_isSharedCheck_3680_ == 0)
{
v___x_3674_ = v___x_3671_;
v_isShared_3675_ = v_isSharedCheck_3680_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_a_3672_);
lean_dec(v___x_3671_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3680_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___x_3676_; lean_object* v___x_3678_; 
v___x_3676_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_3672_);
if (v_isShared_3675_ == 0)
{
lean_ctor_set(v___x_3674_, 0, v___x_3676_);
v___x_3678_ = v___x_3674_;
goto v_reusejp_3677_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v___x_3676_);
v___x_3678_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3677_;
}
v_reusejp_3677_:
{
return v___x_3678_;
}
}
}
else
{
return v___x_3671_;
}
}
else
{
lean_object* v___x_3681_; lean_object* v___x_3682_; uint8_t v___x_3683_; 
v___x_3681_ = l_Lean_Syntax_getArg(v___x_3666_, v___x_3608_);
lean_dec(v___x_3666_);
v___x_3682_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__78));
v___x_3683_ = l_Lean_Syntax_isOfKind(v___x_3681_, v___x_3682_);
if (v___x_3683_ == 0)
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; 
v___x_3684_ = lean_unsigned_to_nat(5u);
v___x_3685_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3684_);
lean_dec(v_stx_2393_);
v___x_3686_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3685_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_3686_) == 0)
{
lean_object* v_a_3687_; lean_object* v___x_3689_; uint8_t v_isShared_3690_; uint8_t v_isSharedCheck_3695_; 
v_a_3687_ = lean_ctor_get(v___x_3686_, 0);
v_isSharedCheck_3695_ = !lean_is_exclusive(v___x_3686_);
if (v_isSharedCheck_3695_ == 0)
{
v___x_3689_ = v___x_3686_;
v_isShared_3690_ = v_isSharedCheck_3695_;
goto v_resetjp_3688_;
}
else
{
lean_inc(v_a_3687_);
lean_dec(v___x_3686_);
v___x_3689_ = lean_box(0);
v_isShared_3690_ = v_isSharedCheck_3695_;
goto v_resetjp_3688_;
}
v_resetjp_3688_:
{
lean_object* v___x_3691_; lean_object* v___x_3693_; 
v___x_3691_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_3687_);
if (v_isShared_3690_ == 0)
{
lean_ctor_set(v___x_3689_, 0, v___x_3691_);
v___x_3693_ = v___x_3689_;
goto v_reusejp_3692_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v___x_3691_);
v___x_3693_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3692_;
}
v_reusejp_3692_:
{
return v___x_3693_;
}
}
}
else
{
return v___x_3686_;
}
}
else
{
v___y_3611_ = v_a_2394_;
v___y_3612_ = v_a_2395_;
v___y_3613_ = v_a_2396_;
v___y_3614_ = v_a_2397_;
v___y_3615_ = v_a_2398_;
v___y_3616_ = v_a_2399_;
goto v___jp_3610_;
}
}
}
else
{
lean_dec(v___x_3666_);
v___y_3611_ = v_a_2394_;
v___y_3612_ = v_a_2395_;
v___y_3613_ = v_a_2396_;
v___y_3614_ = v_a_2397_;
v___y_3615_ = v_a_2398_;
v___y_3616_ = v_a_2399_;
goto v___jp_3610_;
}
}
}
}
v___jp_2801_:
{
lean_object* v___x_2806_; lean_object* v___x_2807_; 
v___x_2806_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2806_, 0, v___y_2803_);
lean_ctor_set(v___x_2806_, 1, v___y_2802_);
lean_ctor_set_uint8(v___x_2806_, sizeof(void*)*2, v___x_2800_);
lean_ctor_set_uint8(v___x_2806_, sizeof(void*)*2 + 1, v___x_2800_);
lean_ctor_set_uint8(v___x_2806_, sizeof(void*)*2 + 2, v___y_2804_);
lean_ctor_set_uint8(v___x_2806_, sizeof(void*)*2 + 3, v___y_2805_);
v___x_2807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2806_);
return v___x_2807_;
}
}
else
{
lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; 
v___x_3707_ = lean_unsigned_to_nat(1u);
v___x_3708_ = lean_unsigned_to_nat(3u);
v___x_3709_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3708_);
lean_dec(v_stx_2393_);
v___x_3710_ = l_Lean_NameSet_empty;
v___x_3711_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_3711_, 0, v___x_3707_);
lean_ctor_set(v___x_3711_, 1, v___x_3710_);
lean_ctor_set_uint8(v___x_3711_, sizeof(void*)*2, v___x_2796_);
lean_ctor_set_uint8(v___x_3711_, sizeof(void*)*2 + 1, v___x_2796_);
lean_ctor_set_uint8(v___x_3711_, sizeof(void*)*2 + 2, v___x_2796_);
lean_ctor_set_uint8(v___x_3711_, sizeof(void*)*2 + 3, v___x_2796_);
v___x_3712_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3709_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_3712_) == 0)
{
lean_object* v_a_3713_; lean_object* v___x_3715_; uint8_t v_isShared_3716_; uint8_t v_isSharedCheck_3721_; 
v_a_3713_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3721_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3721_ == 0)
{
v___x_3715_ = v___x_3712_;
v_isShared_3716_ = v_isSharedCheck_3721_;
goto v_resetjp_3714_;
}
else
{
lean_inc(v_a_3713_);
lean_dec(v___x_3712_);
v___x_3715_ = lean_box(0);
v_isShared_3716_ = v_isSharedCheck_3721_;
goto v_resetjp_3714_;
}
v_resetjp_3714_:
{
lean_object* v___x_3717_; lean_object* v___x_3719_; 
v___x_3717_ = l_Lean_Elab_Do_ControlInfo_alternative(v___x_3711_, v_a_3713_);
if (v_isShared_3716_ == 0)
{
lean_ctor_set(v___x_3715_, 0, v___x_3717_);
v___x_3719_ = v___x_3715_;
goto v_reusejp_3718_;
}
else
{
lean_object* v_reuseFailAlloc_3720_; 
v_reuseFailAlloc_3720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3720_, 0, v___x_3717_);
v___x_3719_ = v_reuseFailAlloc_3720_;
goto v_reusejp_3718_;
}
v_reusejp_3718_:
{
return v___x_3719_;
}
}
}
else
{
lean_dec_ref_known(v___x_3711_, 2);
return v___x_3712_;
}
}
}
else
{
lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; size_t v_sz_3725_; size_t v___x_3726_; lean_object* v___x_3727_; 
v___x_3722_ = lean_unsigned_to_nat(4u);
v___x_3723_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3722_);
v___x_3724_ = l_Lean_Syntax_getArgs(v___x_3723_);
lean_dec(v___x_3723_);
v_sz_3725_ = lean_array_size(v___x_3724_);
v___x_3726_ = ((size_t)0ULL);
v___x_3727_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13(v_sz_3725_, v___x_3726_, v___x_3724_);
if (lean_obj_tag(v___x_3727_) == 0)
{
lean_object* v___x_3728_; uint8_t v___x_3729_; 
v___x_3728_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_3729_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_3728_);
if (v___x_3729_ == 0)
{
lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v_env_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; 
lean_inc_n(v_stx_2393_, 2);
v___x_3730_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_3731_ = lean_st_ref_get(v_a_2399_);
v_env_3732_ = lean_ctor_get(v___x_3731_, 0);
lean_inc_ref(v_env_3732_);
lean_dec(v___x_3731_);
v___x_3733_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3734_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3733_, v_env_3732_, v___x_3730_);
v___x_3735_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3736_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_3734_, v___x_3735_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_3734_);
if (lean_obj_tag(v___x_3736_) == 0)
{
lean_object* v_a_3737_; lean_object* v___x_3739_; uint8_t v_isShared_3740_; uint8_t v_isSharedCheck_3767_; 
v_a_3737_ = lean_ctor_get(v___x_3736_, 0);
v_isSharedCheck_3767_ = !lean_is_exclusive(v___x_3736_);
if (v_isSharedCheck_3767_ == 0)
{
v___x_3739_ = v___x_3736_;
v_isShared_3740_ = v_isSharedCheck_3767_;
goto v_resetjp_3738_;
}
else
{
lean_inc(v_a_3737_);
lean_dec(v___x_3736_);
v___x_3739_ = lean_box(0);
v_isShared_3740_ = v_isSharedCheck_3767_;
goto v_resetjp_3738_;
}
v_resetjp_3738_:
{
lean_object* v_fst_3741_; lean_object* v___x_3743_; uint8_t v_isShared_3744_; uint8_t v_isSharedCheck_3765_; 
v_fst_3741_ = lean_ctor_get(v_a_3737_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v_a_3737_);
if (v_isSharedCheck_3765_ == 0)
{
lean_object* v_unused_3766_; 
v_unused_3766_ = lean_ctor_get(v_a_3737_, 1);
lean_dec(v_unused_3766_);
v___x_3743_ = v_a_3737_;
v_isShared_3744_ = v_isSharedCheck_3765_;
goto v_resetjp_3742_;
}
else
{
lean_inc(v_fst_3741_);
lean_dec(v_a_3737_);
v___x_3743_ = lean_box(0);
v_isShared_3744_ = v_isSharedCheck_3765_;
goto v_resetjp_3742_;
}
v_resetjp_3742_:
{
if (lean_obj_tag(v_fst_3741_) == 0)
{
lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3748_; 
lean_del_object(v___x_3739_);
v___x_3745_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3746_ = l_Lean_MessageData_ofName(v___x_3730_);
lean_inc_ref(v___x_3746_);
if (v_isShared_3744_ == 0)
{
lean_ctor_set_tag(v___x_3743_, 7);
lean_ctor_set(v___x_3743_, 1, v___x_3746_);
lean_ctor_set(v___x_3743_, 0, v___x_3745_);
v___x_3748_ = v___x_3743_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v___x_3745_);
lean_ctor_set(v_reuseFailAlloc_3760_, 1, v___x_3746_);
v___x_3748_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; 
v___x_3749_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3750_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3750_, 0, v___x_3748_);
lean_ctor_set(v___x_3750_, 1, v___x_3749_);
v___x_3751_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_3752_ = l_Lean_indentD(v___x_3751_);
v___x_3753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3753_, 0, v___x_3750_);
lean_ctor_set(v___x_3753_, 1, v___x_3752_);
v___x_3754_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3755_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3755_, 0, v___x_3753_);
lean_ctor_set(v___x_3755_, 1, v___x_3754_);
v___x_3756_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3756_, 0, v___x_3755_);
lean_ctor_set(v___x_3756_, 1, v___x_3746_);
v___x_3757_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_3758_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3756_);
lean_ctor_set(v___x_3758_, 1, v___x_3757_);
v___x_3759_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3758_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_3759_;
}
}
else
{
lean_object* v_val_3761_; lean_object* v___x_3763_; 
lean_del_object(v___x_3743_);
lean_dec(v___x_3730_);
lean_dec(v_stx_2393_);
v_val_3761_ = lean_ctor_get(v_fst_3741_, 0);
lean_inc(v_val_3761_);
lean_dec_ref_known(v_fst_3741_, 1);
if (v_isShared_3740_ == 0)
{
lean_ctor_set(v___x_3739_, 0, v_val_3761_);
v___x_3763_ = v___x_3739_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v_val_3761_);
v___x_3763_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
return v___x_3763_;
}
}
}
}
}
else
{
lean_object* v_a_3768_; lean_object* v___x_3770_; uint8_t v_isShared_3771_; uint8_t v_isSharedCheck_3775_; 
lean_dec(v___x_3730_);
lean_dec(v_stx_2393_);
v_a_3768_ = lean_ctor_get(v___x_3736_, 0);
v_isSharedCheck_3775_ = !lean_is_exclusive(v___x_3736_);
if (v_isSharedCheck_3775_ == 0)
{
v___x_3770_ = v___x_3736_;
v_isShared_3771_ = v_isSharedCheck_3775_;
goto v_resetjp_3769_;
}
else
{
lean_inc(v_a_3768_);
lean_dec(v___x_3736_);
v___x_3770_ = lean_box(0);
v_isShared_3771_ = v_isSharedCheck_3775_;
goto v_resetjp_3769_;
}
v_resetjp_3769_:
{
lean_object* v___x_3773_; 
if (v_isShared_3771_ == 0)
{
v___x_3773_ = v___x_3770_;
goto v_reusejp_3772_;
}
else
{
lean_object* v_reuseFailAlloc_3774_; 
v_reuseFailAlloc_3774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3774_, 0, v_a_3768_);
v___x_3773_ = v_reuseFailAlloc_3774_;
goto v_reusejp_3772_;
}
v_reusejp_3772_:
{
return v___x_3773_;
}
}
}
}
else
{
lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; 
v___x_3776_ = lean_unsigned_to_nat(5u);
v___x_3777_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3776_);
lean_dec(v_stx_2393_);
v___x_3778_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3777_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_3778_) == 0)
{
lean_object* v_a_3779_; lean_object* v___x_3781_; uint8_t v_isShared_3782_; uint8_t v_isSharedCheck_3787_; 
v_a_3779_ = lean_ctor_get(v___x_3778_, 0);
v_isSharedCheck_3787_ = !lean_is_exclusive(v___x_3778_);
if (v_isSharedCheck_3787_ == 0)
{
v___x_3781_ = v___x_3778_;
v_isShared_3782_ = v_isSharedCheck_3787_;
goto v_resetjp_3780_;
}
else
{
lean_inc(v_a_3779_);
lean_dec(v___x_3778_);
v___x_3781_ = lean_box(0);
v_isShared_3782_ = v_isSharedCheck_3787_;
goto v_resetjp_3780_;
}
v_resetjp_3780_:
{
lean_object* v___x_3783_; lean_object* v___x_3785_; 
v___x_3783_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_3779_);
if (v_isShared_3782_ == 0)
{
lean_ctor_set(v___x_3781_, 0, v___x_3783_);
v___x_3785_ = v___x_3781_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v___x_3783_);
v___x_3785_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
return v___x_3785_;
}
}
}
else
{
return v___x_3778_;
}
}
}
else
{
lean_object* v_val_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3887_; 
v_val_3788_ = lean_ctor_get(v___x_3727_, 0);
v_isSharedCheck_3887_ = !lean_is_exclusive(v___x_3727_);
if (v_isSharedCheck_3887_ == 0)
{
v___x_3790_ = v___x_3727_;
v_isShared_3791_ = v_isSharedCheck_3887_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_val_3788_);
lean_dec(v___x_3727_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3887_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v_elseSeq_x3f_3795_; lean_object* v___y_3796_; lean_object* v___y_3797_; lean_object* v___y_3798_; lean_object* v___y_3799_; lean_object* v___y_3800_; lean_object* v___y_3801_; lean_object* v___x_3818_; lean_object* v___x_3819_; uint8_t v___x_3820_; 
v___x_3792_ = lean_unsigned_to_nat(3u);
v___x_3793_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3792_);
v___x_3818_ = lean_unsigned_to_nat(5u);
v___x_3819_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3818_);
v___x_3820_ = l_Lean_Syntax_isNone(v___x_3819_);
if (v___x_3820_ == 0)
{
lean_object* v___x_3821_; uint8_t v___x_3822_; 
v___x_3821_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_3819_);
v___x_3822_ = l_Lean_Syntax_matchesNull(v___x_3819_, v___x_3821_);
if (v___x_3822_ == 0)
{
lean_object* v___x_3823_; uint8_t v___x_3824_; 
lean_dec(v___x_3793_);
lean_del_object(v___x_3790_);
lean_dec(v_val_3788_);
v___x_3823_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_3824_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_3823_);
if (v___x_3824_ == 0)
{
lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v_env_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; 
lean_dec(v___x_3819_);
lean_inc_n(v_stx_2393_, 2);
v___x_3825_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_3826_ = lean_st_ref_get(v_a_2399_);
v_env_3827_ = lean_ctor_get(v___x_3826_, 0);
lean_inc_ref(v_env_3827_);
lean_dec(v___x_3826_);
v___x_3828_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3829_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3828_, v_env_3827_, v___x_3825_);
v___x_3830_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3831_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_3829_, v___x_3830_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_3829_);
if (lean_obj_tag(v___x_3831_) == 0)
{
lean_object* v_a_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3862_; 
v_a_3832_ = lean_ctor_get(v___x_3831_, 0);
v_isSharedCheck_3862_ = !lean_is_exclusive(v___x_3831_);
if (v_isSharedCheck_3862_ == 0)
{
v___x_3834_ = v___x_3831_;
v_isShared_3835_ = v_isSharedCheck_3862_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_a_3832_);
lean_dec(v___x_3831_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3862_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
lean_object* v_fst_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3860_; 
v_fst_3836_ = lean_ctor_get(v_a_3832_, 0);
v_isSharedCheck_3860_ = !lean_is_exclusive(v_a_3832_);
if (v_isSharedCheck_3860_ == 0)
{
lean_object* v_unused_3861_; 
v_unused_3861_ = lean_ctor_get(v_a_3832_, 1);
lean_dec(v_unused_3861_);
v___x_3838_ = v_a_3832_;
v_isShared_3839_ = v_isSharedCheck_3860_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_fst_3836_);
lean_dec(v_a_3832_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3860_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
if (lean_obj_tag(v_fst_3836_) == 0)
{
lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3843_; 
lean_del_object(v___x_3834_);
v___x_3840_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3841_ = l_Lean_MessageData_ofName(v___x_3825_);
lean_inc_ref(v___x_3841_);
if (v_isShared_3839_ == 0)
{
lean_ctor_set_tag(v___x_3838_, 7);
lean_ctor_set(v___x_3838_, 1, v___x_3841_);
lean_ctor_set(v___x_3838_, 0, v___x_3840_);
v___x_3843_ = v___x_3838_;
goto v_reusejp_3842_;
}
else
{
lean_object* v_reuseFailAlloc_3855_; 
v_reuseFailAlloc_3855_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3855_, 0, v___x_3840_);
lean_ctor_set(v_reuseFailAlloc_3855_, 1, v___x_3841_);
v___x_3843_ = v_reuseFailAlloc_3855_;
goto v_reusejp_3842_;
}
v_reusejp_3842_:
{
lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; 
v___x_3844_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3845_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3845_, 0, v___x_3843_);
lean_ctor_set(v___x_3845_, 1, v___x_3844_);
v___x_3846_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_3847_ = l_Lean_indentD(v___x_3846_);
v___x_3848_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3848_, 0, v___x_3845_);
lean_ctor_set(v___x_3848_, 1, v___x_3847_);
v___x_3849_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3850_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3850_, 0, v___x_3848_);
lean_ctor_set(v___x_3850_, 1, v___x_3849_);
v___x_3851_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3851_, 0, v___x_3850_);
lean_ctor_set(v___x_3851_, 1, v___x_3841_);
v___x_3852_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_3853_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3853_, 0, v___x_3851_);
lean_ctor_set(v___x_3853_, 1, v___x_3852_);
v___x_3854_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3853_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_3854_;
}
}
else
{
lean_object* v_val_3856_; lean_object* v___x_3858_; 
lean_del_object(v___x_3838_);
lean_dec(v___x_3825_);
lean_dec(v_stx_2393_);
v_val_3856_ = lean_ctor_get(v_fst_3836_, 0);
lean_inc(v_val_3856_);
lean_dec_ref_known(v_fst_3836_, 1);
if (v_isShared_3835_ == 0)
{
lean_ctor_set(v___x_3834_, 0, v_val_3856_);
v___x_3858_ = v___x_3834_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3859_; 
v_reuseFailAlloc_3859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3859_, 0, v_val_3856_);
v___x_3858_ = v_reuseFailAlloc_3859_;
goto v_reusejp_3857_;
}
v_reusejp_3857_:
{
return v___x_3858_;
}
}
}
}
}
else
{
lean_object* v_a_3863_; lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3870_; 
lean_dec(v___x_3825_);
lean_dec(v_stx_2393_);
v_a_3863_ = lean_ctor_get(v___x_3831_, 0);
v_isSharedCheck_3870_ = !lean_is_exclusive(v___x_3831_);
if (v_isSharedCheck_3870_ == 0)
{
v___x_3865_ = v___x_3831_;
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
else
{
lean_inc(v_a_3863_);
lean_dec(v___x_3831_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v___x_3868_; 
if (v_isShared_3866_ == 0)
{
v___x_3868_ = v___x_3865_;
goto v_reusejp_3867_;
}
else
{
lean_object* v_reuseFailAlloc_3869_; 
v_reuseFailAlloc_3869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3869_, 0, v_a_3863_);
v___x_3868_ = v_reuseFailAlloc_3869_;
goto v_reusejp_3867_;
}
v_reusejp_3867_:
{
return v___x_3868_;
}
}
}
}
else
{
lean_object* v___x_3871_; 
lean_dec(v_stx_2393_);
v___x_3871_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3819_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_3871_) == 0)
{
lean_object* v_a_3872_; lean_object* v___x_3874_; uint8_t v_isShared_3875_; uint8_t v_isSharedCheck_3880_; 
v_a_3872_ = lean_ctor_get(v___x_3871_, 0);
v_isSharedCheck_3880_ = !lean_is_exclusive(v___x_3871_);
if (v_isSharedCheck_3880_ == 0)
{
v___x_3874_ = v___x_3871_;
v_isShared_3875_ = v_isSharedCheck_3880_;
goto v_resetjp_3873_;
}
else
{
lean_inc(v_a_3872_);
lean_dec(v___x_3871_);
v___x_3874_ = lean_box(0);
v_isShared_3875_ = v_isSharedCheck_3880_;
goto v_resetjp_3873_;
}
v_resetjp_3873_:
{
lean_object* v___x_3876_; lean_object* v___x_3878_; 
v___x_3876_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_3872_);
if (v_isShared_3875_ == 0)
{
lean_ctor_set(v___x_3874_, 0, v___x_3876_);
v___x_3878_ = v___x_3874_;
goto v_reusejp_3877_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v___x_3876_);
v___x_3878_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3877_;
}
v_reusejp_3877_:
{
return v___x_3878_;
}
}
}
else
{
return v___x_3871_;
}
}
}
else
{
lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3884_; 
lean_dec(v_stx_2393_);
v___x_3881_ = lean_unsigned_to_nat(1u);
v___x_3882_ = l_Lean_Syntax_getArg(v___x_3819_, v___x_3881_);
lean_dec(v___x_3819_);
if (v_isShared_3791_ == 0)
{
lean_ctor_set(v___x_3790_, 0, v___x_3882_);
v___x_3884_ = v___x_3790_;
goto v_reusejp_3883_;
}
else
{
lean_object* v_reuseFailAlloc_3885_; 
v_reuseFailAlloc_3885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3885_, 0, v___x_3882_);
v___x_3884_ = v_reuseFailAlloc_3885_;
goto v_reusejp_3883_;
}
v_reusejp_3883_:
{
v_elseSeq_x3f_3795_ = v___x_3884_;
v___y_3796_ = v_a_2394_;
v___y_3797_ = v_a_2395_;
v___y_3798_ = v_a_2396_;
v___y_3799_ = v_a_2397_;
v___y_3800_ = v_a_2398_;
v___y_3801_ = v_a_2399_;
goto v___jp_3794_;
}
}
}
else
{
lean_object* v___x_3886_; 
lean_dec(v___x_3819_);
lean_del_object(v___x_3790_);
lean_dec(v_stx_2393_);
v___x_3886_ = lean_box(0);
v_elseSeq_x3f_3795_ = v___x_3886_;
v___y_3796_ = v_a_2394_;
v___y_3797_ = v_a_2395_;
v___y_3798_ = v_a_2396_;
v___y_3799_ = v_a_2397_;
v___y_3800_ = v_a_2398_;
v___y_3801_ = v_a_2399_;
goto v___jp_3794_;
}
v___jp_3794_:
{
lean_object* v___x_3802_; 
v___x_3802_ = l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(v_elseSeq_x3f_3795_, v___y_3796_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_, v___y_3801_);
if (lean_obj_tag(v___x_3802_) == 0)
{
lean_object* v_a_3803_; lean_object* v___x_3804_; size_t v_sz_3805_; lean_object* v___x_3806_; 
v_a_3803_ = lean_ctor_get(v___x_3802_, 0);
lean_inc(v_a_3803_);
lean_dec_ref_known(v___x_3802_, 1);
v___x_3804_ = l_Array_reverse___redArg(v_val_3788_);
v_sz_3805_ = lean_array_size(v___x_3804_);
v___x_3806_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(v___x_3804_, v_sz_3805_, v___x_3726_, v_a_3803_, v___y_3796_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_, v___y_3801_);
lean_dec_ref(v___x_3804_);
if (lean_obj_tag(v___x_3806_) == 0)
{
lean_object* v_a_3807_; lean_object* v___x_3808_; 
v_a_3807_ = lean_ctor_get(v___x_3806_, 0);
lean_inc(v_a_3807_);
lean_dec_ref_known(v___x_3806_, 1);
v___x_3808_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3793_, v___y_3796_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_, v___y_3801_);
if (lean_obj_tag(v___x_3808_) == 0)
{
lean_object* v_a_3809_; lean_object* v___x_3811_; uint8_t v_isShared_3812_; uint8_t v_isSharedCheck_3817_; 
v_a_3809_ = lean_ctor_get(v___x_3808_, 0);
v_isSharedCheck_3817_ = !lean_is_exclusive(v___x_3808_);
if (v_isSharedCheck_3817_ == 0)
{
v___x_3811_ = v___x_3808_;
v_isShared_3812_ = v_isSharedCheck_3817_;
goto v_resetjp_3810_;
}
else
{
lean_inc(v_a_3809_);
lean_dec(v___x_3808_);
v___x_3811_ = lean_box(0);
v_isShared_3812_ = v_isSharedCheck_3817_;
goto v_resetjp_3810_;
}
v_resetjp_3810_:
{
lean_object* v___x_3813_; lean_object* v___x_3815_; 
v___x_3813_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_3809_, v_a_3807_);
if (v_isShared_3812_ == 0)
{
lean_ctor_set(v___x_3811_, 0, v___x_3813_);
v___x_3815_ = v___x_3811_;
goto v_reusejp_3814_;
}
else
{
lean_object* v_reuseFailAlloc_3816_; 
v_reuseFailAlloc_3816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3816_, 0, v___x_3813_);
v___x_3815_ = v_reuseFailAlloc_3816_;
goto v_reusejp_3814_;
}
v_reusejp_3814_:
{
return v___x_3815_;
}
}
}
else
{
lean_dec(v_a_3807_);
return v___x_3808_;
}
}
else
{
lean_dec(v___x_3793_);
return v___x_3806_;
}
}
else
{
lean_dec(v___x_3793_);
lean_dec(v_val_3788_);
return v___x_3802_;
}
}
}
}
}
}
else
{
lean_object* v___x_3888_; lean_object* v___y_3890_; lean_object* v___y_3891_; lean_object* v___y_3892_; lean_object* v___y_3893_; lean_object* v___y_3894_; lean_object* v___y_3895_; lean_object* v___x_3966_; lean_object* v___y_3968_; lean_object* v___y_3969_; lean_object* v___y_3970_; lean_object* v___y_3971_; lean_object* v___y_3972_; lean_object* v___y_3973_; lean_object* v___x_4101_; uint8_t v___x_4102_; 
v___x_3888_ = lean_unsigned_to_nat(0u);
v___x_3966_ = lean_unsigned_to_nat(1u);
v___x_4101_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3966_);
v___x_4102_ = l_Lean_Syntax_isNone(v___x_4101_);
if (v___x_4102_ == 0)
{
uint8_t v___x_4103_; 
lean_inc(v___x_4101_);
v___x_4103_ = l_Lean_Syntax_matchesNull(v___x_4101_, v___x_3966_);
if (v___x_4103_ == 0)
{
lean_object* v___x_4104_; uint8_t v___x_4105_; 
lean_dec(v___x_4101_);
v___x_4104_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_4105_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_4104_);
if (v___x_4105_ == 0)
{
lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v_env_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; 
lean_inc_n(v_stx_2393_, 2);
v___x_4106_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_4107_ = lean_st_ref_get(v_a_2399_);
v_env_4108_ = lean_ctor_get(v___x_4107_, 0);
lean_inc_ref(v_env_4108_);
lean_dec(v___x_4107_);
v___x_4109_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4110_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4109_, v_env_4108_, v___x_4106_);
v___x_4111_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4112_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_4110_, v___x_4111_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_4110_);
if (lean_obj_tag(v___x_4112_) == 0)
{
lean_object* v_a_4113_; lean_object* v___x_4115_; uint8_t v_isShared_4116_; uint8_t v_isSharedCheck_4143_; 
v_a_4113_ = lean_ctor_get(v___x_4112_, 0);
v_isSharedCheck_4143_ = !lean_is_exclusive(v___x_4112_);
if (v_isSharedCheck_4143_ == 0)
{
v___x_4115_ = v___x_4112_;
v_isShared_4116_ = v_isSharedCheck_4143_;
goto v_resetjp_4114_;
}
else
{
lean_inc(v_a_4113_);
lean_dec(v___x_4112_);
v___x_4115_ = lean_box(0);
v_isShared_4116_ = v_isSharedCheck_4143_;
goto v_resetjp_4114_;
}
v_resetjp_4114_:
{
lean_object* v_fst_4117_; lean_object* v___x_4119_; uint8_t v_isShared_4120_; uint8_t v_isSharedCheck_4141_; 
v_fst_4117_ = lean_ctor_get(v_a_4113_, 0);
v_isSharedCheck_4141_ = !lean_is_exclusive(v_a_4113_);
if (v_isSharedCheck_4141_ == 0)
{
lean_object* v_unused_4142_; 
v_unused_4142_ = lean_ctor_get(v_a_4113_, 1);
lean_dec(v_unused_4142_);
v___x_4119_ = v_a_4113_;
v_isShared_4120_ = v_isSharedCheck_4141_;
goto v_resetjp_4118_;
}
else
{
lean_inc(v_fst_4117_);
lean_dec(v_a_4113_);
v___x_4119_ = lean_box(0);
v_isShared_4120_ = v_isSharedCheck_4141_;
goto v_resetjp_4118_;
}
v_resetjp_4118_:
{
if (lean_obj_tag(v_fst_4117_) == 0)
{
lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4124_; 
lean_del_object(v___x_4115_);
v___x_4121_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4122_ = l_Lean_MessageData_ofName(v___x_4106_);
lean_inc_ref(v___x_4122_);
if (v_isShared_4120_ == 0)
{
lean_ctor_set_tag(v___x_4119_, 7);
lean_ctor_set(v___x_4119_, 1, v___x_4122_);
lean_ctor_set(v___x_4119_, 0, v___x_4121_);
v___x_4124_ = v___x_4119_;
goto v_reusejp_4123_;
}
else
{
lean_object* v_reuseFailAlloc_4136_; 
v_reuseFailAlloc_4136_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4136_, 0, v___x_4121_);
lean_ctor_set(v_reuseFailAlloc_4136_, 1, v___x_4122_);
v___x_4124_ = v_reuseFailAlloc_4136_;
goto v_reusejp_4123_;
}
v_reusejp_4123_:
{
lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; 
v___x_4125_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4126_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4126_, 0, v___x_4124_);
lean_ctor_set(v___x_4126_, 1, v___x_4125_);
v___x_4127_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_4128_ = l_Lean_indentD(v___x_4127_);
v___x_4129_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4129_, 0, v___x_4126_);
lean_ctor_set(v___x_4129_, 1, v___x_4128_);
v___x_4130_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4131_, 0, v___x_4129_);
lean_ctor_set(v___x_4131_, 1, v___x_4130_);
v___x_4132_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4132_, 0, v___x_4131_);
lean_ctor_set(v___x_4132_, 1, v___x_4122_);
v___x_4133_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_4134_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4134_, 0, v___x_4132_);
lean_ctor_set(v___x_4134_, 1, v___x_4133_);
v___x_4135_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4134_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_4135_;
}
}
else
{
lean_object* v_val_4137_; lean_object* v___x_4139_; 
lean_del_object(v___x_4119_);
lean_dec(v___x_4106_);
lean_dec(v_stx_2393_);
v_val_4137_ = lean_ctor_get(v_fst_4117_, 0);
lean_inc(v_val_4137_);
lean_dec_ref_known(v_fst_4117_, 1);
if (v_isShared_4116_ == 0)
{
lean_ctor_set(v___x_4115_, 0, v_val_4137_);
v___x_4139_ = v___x_4115_;
goto v_reusejp_4138_;
}
else
{
lean_object* v_reuseFailAlloc_4140_; 
v_reuseFailAlloc_4140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4140_, 0, v_val_4137_);
v___x_4139_ = v_reuseFailAlloc_4140_;
goto v_reusejp_4138_;
}
v_reusejp_4138_:
{
return v___x_4139_;
}
}
}
}
}
else
{
lean_object* v_a_4144_; lean_object* v___x_4146_; uint8_t v_isShared_4147_; uint8_t v_isSharedCheck_4151_; 
lean_dec(v___x_4106_);
lean_dec(v_stx_2393_);
v_a_4144_ = lean_ctor_get(v___x_4112_, 0);
v_isSharedCheck_4151_ = !lean_is_exclusive(v___x_4112_);
if (v_isSharedCheck_4151_ == 0)
{
v___x_4146_ = v___x_4112_;
v_isShared_4147_ = v_isSharedCheck_4151_;
goto v_resetjp_4145_;
}
else
{
lean_inc(v_a_4144_);
lean_dec(v___x_4112_);
v___x_4146_ = lean_box(0);
v_isShared_4147_ = v_isSharedCheck_4151_;
goto v_resetjp_4145_;
}
v_resetjp_4145_:
{
lean_object* v___x_4149_; 
if (v_isShared_4147_ == 0)
{
v___x_4149_ = v___x_4146_;
goto v_reusejp_4148_;
}
else
{
lean_object* v_reuseFailAlloc_4150_; 
v_reuseFailAlloc_4150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4150_, 0, v_a_4144_);
v___x_4149_ = v_reuseFailAlloc_4150_;
goto v_reusejp_4148_;
}
v_reusejp_4148_:
{
return v___x_4149_;
}
}
}
}
else
{
lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; 
v___x_4152_ = lean_unsigned_to_nat(5u);
v___x_4153_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4152_);
lean_dec(v_stx_2393_);
v___x_4154_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4153_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_4154_) == 0)
{
lean_object* v_a_4155_; lean_object* v___x_4157_; uint8_t v_isShared_4158_; uint8_t v_isSharedCheck_4163_; 
v_a_4155_ = lean_ctor_get(v___x_4154_, 0);
v_isSharedCheck_4163_ = !lean_is_exclusive(v___x_4154_);
if (v_isSharedCheck_4163_ == 0)
{
v___x_4157_ = v___x_4154_;
v_isShared_4158_ = v_isSharedCheck_4163_;
goto v_resetjp_4156_;
}
else
{
lean_inc(v_a_4155_);
lean_dec(v___x_4154_);
v___x_4157_ = lean_box(0);
v_isShared_4158_ = v_isSharedCheck_4163_;
goto v_resetjp_4156_;
}
v_resetjp_4156_:
{
lean_object* v___x_4159_; lean_object* v___x_4161_; 
v___x_4159_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_4155_);
if (v_isShared_4158_ == 0)
{
lean_ctor_set(v___x_4157_, 0, v___x_4159_);
v___x_4161_ = v___x_4157_;
goto v_reusejp_4160_;
}
else
{
lean_object* v_reuseFailAlloc_4162_; 
v_reuseFailAlloc_4162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4162_, 0, v___x_4159_);
v___x_4161_ = v_reuseFailAlloc_4162_;
goto v_reusejp_4160_;
}
v_reusejp_4160_:
{
return v___x_4161_;
}
}
}
else
{
return v___x_4154_;
}
}
}
else
{
lean_object* v___x_4164_; lean_object* v___x_4165_; uint8_t v___x_4166_; 
v___x_4164_ = l_Lean_Syntax_getArg(v___x_4101_, v___x_3888_);
lean_dec(v___x_4101_);
v___x_4165_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__82));
v___x_4166_ = l_Lean_Syntax_isOfKind(v___x_4164_, v___x_4165_);
if (v___x_4166_ == 0)
{
lean_object* v___x_4167_; uint8_t v___x_4168_; 
v___x_4167_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_4168_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_4167_);
if (v___x_4168_ == 0)
{
lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v_env_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; 
lean_inc_n(v_stx_2393_, 2);
v___x_4169_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_4170_ = lean_st_ref_get(v_a_2399_);
v_env_4171_ = lean_ctor_get(v___x_4170_, 0);
lean_inc_ref(v_env_4171_);
lean_dec(v___x_4170_);
v___x_4172_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4173_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4172_, v_env_4171_, v___x_4169_);
v___x_4174_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4175_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_4173_, v___x_4174_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_4173_);
if (lean_obj_tag(v___x_4175_) == 0)
{
lean_object* v_a_4176_; lean_object* v___x_4178_; uint8_t v_isShared_4179_; uint8_t v_isSharedCheck_4206_; 
v_a_4176_ = lean_ctor_get(v___x_4175_, 0);
v_isSharedCheck_4206_ = !lean_is_exclusive(v___x_4175_);
if (v_isSharedCheck_4206_ == 0)
{
v___x_4178_ = v___x_4175_;
v_isShared_4179_ = v_isSharedCheck_4206_;
goto v_resetjp_4177_;
}
else
{
lean_inc(v_a_4176_);
lean_dec(v___x_4175_);
v___x_4178_ = lean_box(0);
v_isShared_4179_ = v_isSharedCheck_4206_;
goto v_resetjp_4177_;
}
v_resetjp_4177_:
{
lean_object* v_fst_4180_; lean_object* v___x_4182_; uint8_t v_isShared_4183_; uint8_t v_isSharedCheck_4204_; 
v_fst_4180_ = lean_ctor_get(v_a_4176_, 0);
v_isSharedCheck_4204_ = !lean_is_exclusive(v_a_4176_);
if (v_isSharedCheck_4204_ == 0)
{
lean_object* v_unused_4205_; 
v_unused_4205_ = lean_ctor_get(v_a_4176_, 1);
lean_dec(v_unused_4205_);
v___x_4182_ = v_a_4176_;
v_isShared_4183_ = v_isSharedCheck_4204_;
goto v_resetjp_4181_;
}
else
{
lean_inc(v_fst_4180_);
lean_dec(v_a_4176_);
v___x_4182_ = lean_box(0);
v_isShared_4183_ = v_isSharedCheck_4204_;
goto v_resetjp_4181_;
}
v_resetjp_4181_:
{
if (lean_obj_tag(v_fst_4180_) == 0)
{
lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4187_; 
lean_del_object(v___x_4178_);
v___x_4184_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4185_ = l_Lean_MessageData_ofName(v___x_4169_);
lean_inc_ref(v___x_4185_);
if (v_isShared_4183_ == 0)
{
lean_ctor_set_tag(v___x_4182_, 7);
lean_ctor_set(v___x_4182_, 1, v___x_4185_);
lean_ctor_set(v___x_4182_, 0, v___x_4184_);
v___x_4187_ = v___x_4182_;
goto v_reusejp_4186_;
}
else
{
lean_object* v_reuseFailAlloc_4199_; 
v_reuseFailAlloc_4199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4199_, 0, v___x_4184_);
lean_ctor_set(v_reuseFailAlloc_4199_, 1, v___x_4185_);
v___x_4187_ = v_reuseFailAlloc_4199_;
goto v_reusejp_4186_;
}
v_reusejp_4186_:
{
lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; 
v___x_4188_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4189_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4187_);
lean_ctor_set(v___x_4189_, 1, v___x_4188_);
v___x_4190_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_4191_ = l_Lean_indentD(v___x_4190_);
v___x_4192_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4192_, 0, v___x_4189_);
lean_ctor_set(v___x_4192_, 1, v___x_4191_);
v___x_4193_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4194_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4194_, 0, v___x_4192_);
lean_ctor_set(v___x_4194_, 1, v___x_4193_);
v___x_4195_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4195_, 0, v___x_4194_);
lean_ctor_set(v___x_4195_, 1, v___x_4185_);
v___x_4196_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_4197_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4197_, 0, v___x_4195_);
lean_ctor_set(v___x_4197_, 1, v___x_4196_);
v___x_4198_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4197_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_4198_;
}
}
else
{
lean_object* v_val_4200_; lean_object* v___x_4202_; 
lean_del_object(v___x_4182_);
lean_dec(v___x_4169_);
lean_dec(v_stx_2393_);
v_val_4200_ = lean_ctor_get(v_fst_4180_, 0);
lean_inc(v_val_4200_);
lean_dec_ref_known(v_fst_4180_, 1);
if (v_isShared_4179_ == 0)
{
lean_ctor_set(v___x_4178_, 0, v_val_4200_);
v___x_4202_ = v___x_4178_;
goto v_reusejp_4201_;
}
else
{
lean_object* v_reuseFailAlloc_4203_; 
v_reuseFailAlloc_4203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4203_, 0, v_val_4200_);
v___x_4202_ = v_reuseFailAlloc_4203_;
goto v_reusejp_4201_;
}
v_reusejp_4201_:
{
return v___x_4202_;
}
}
}
}
}
else
{
lean_object* v_a_4207_; lean_object* v___x_4209_; uint8_t v_isShared_4210_; uint8_t v_isSharedCheck_4214_; 
lean_dec(v___x_4169_);
lean_dec(v_stx_2393_);
v_a_4207_ = lean_ctor_get(v___x_4175_, 0);
v_isSharedCheck_4214_ = !lean_is_exclusive(v___x_4175_);
if (v_isSharedCheck_4214_ == 0)
{
v___x_4209_ = v___x_4175_;
v_isShared_4210_ = v_isSharedCheck_4214_;
goto v_resetjp_4208_;
}
else
{
lean_inc(v_a_4207_);
lean_dec(v___x_4175_);
v___x_4209_ = lean_box(0);
v_isShared_4210_ = v_isSharedCheck_4214_;
goto v_resetjp_4208_;
}
v_resetjp_4208_:
{
lean_object* v___x_4212_; 
if (v_isShared_4210_ == 0)
{
v___x_4212_ = v___x_4209_;
goto v_reusejp_4211_;
}
else
{
lean_object* v_reuseFailAlloc_4213_; 
v_reuseFailAlloc_4213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4213_, 0, v_a_4207_);
v___x_4212_ = v_reuseFailAlloc_4213_;
goto v_reusejp_4211_;
}
v_reusejp_4211_:
{
return v___x_4212_;
}
}
}
}
else
{
lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; 
v___x_4215_ = lean_unsigned_to_nat(5u);
v___x_4216_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4215_);
lean_dec(v_stx_2393_);
v___x_4217_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4216_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_4217_) == 0)
{
lean_object* v_a_4218_; lean_object* v___x_4220_; uint8_t v_isShared_4221_; uint8_t v_isSharedCheck_4226_; 
v_a_4218_ = lean_ctor_get(v___x_4217_, 0);
v_isSharedCheck_4226_ = !lean_is_exclusive(v___x_4217_);
if (v_isSharedCheck_4226_ == 0)
{
v___x_4220_ = v___x_4217_;
v_isShared_4221_ = v_isSharedCheck_4226_;
goto v_resetjp_4219_;
}
else
{
lean_inc(v_a_4218_);
lean_dec(v___x_4217_);
v___x_4220_ = lean_box(0);
v_isShared_4221_ = v_isSharedCheck_4226_;
goto v_resetjp_4219_;
}
v_resetjp_4219_:
{
lean_object* v___x_4222_; lean_object* v___x_4224_; 
v___x_4222_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_4218_);
if (v_isShared_4221_ == 0)
{
lean_ctor_set(v___x_4220_, 0, v___x_4222_);
v___x_4224_ = v___x_4220_;
goto v_reusejp_4223_;
}
else
{
lean_object* v_reuseFailAlloc_4225_; 
v_reuseFailAlloc_4225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4225_, 0, v___x_4222_);
v___x_4224_ = v_reuseFailAlloc_4225_;
goto v_reusejp_4223_;
}
v_reusejp_4223_:
{
return v___x_4224_;
}
}
}
else
{
return v___x_4217_;
}
}
}
else
{
v___y_3968_ = v_a_2394_;
v___y_3969_ = v_a_2395_;
v___y_3970_ = v_a_2396_;
v___y_3971_ = v_a_2397_;
v___y_3972_ = v_a_2398_;
v___y_3973_ = v_a_2399_;
goto v___jp_3967_;
}
}
}
else
{
lean_dec(v___x_4101_);
v___y_3968_ = v_a_2394_;
v___y_3969_ = v_a_2395_;
v___y_3970_ = v_a_2396_;
v___y_3971_ = v_a_2397_;
v___y_3972_ = v_a_2398_;
v___y_3973_ = v_a_2399_;
goto v___jp_3967_;
}
v___jp_3889_:
{
lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; uint8_t v___x_3899_; 
v___x_3896_ = lean_unsigned_to_nat(6u);
v___x_3897_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3896_);
v___x_3898_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___closed__7));
lean_inc(v___x_3897_);
v___x_3899_ = l_Lean_Syntax_isOfKind(v___x_3897_, v___x_3898_);
if (v___x_3899_ == 0)
{
lean_object* v___x_3900_; uint8_t v___x_3901_; 
lean_dec(v___x_3897_);
v___x_3900_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_3901_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_3900_);
if (v___x_3901_ == 0)
{
lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v_env_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; 
lean_inc_n(v_stx_2393_, 2);
v___x_3902_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_3903_ = lean_st_ref_get(v___y_3895_);
v_env_3904_ = lean_ctor_get(v___x_3903_, 0);
lean_inc_ref(v_env_3904_);
lean_dec(v___x_3903_);
v___x_3905_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3906_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3905_, v_env_3904_, v___x_3902_);
v___x_3907_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3908_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_3906_, v___x_3907_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
lean_dec(v___x_3906_);
if (lean_obj_tag(v___x_3908_) == 0)
{
lean_object* v_a_3909_; lean_object* v___x_3911_; uint8_t v_isShared_3912_; uint8_t v_isSharedCheck_3939_; 
v_a_3909_ = lean_ctor_get(v___x_3908_, 0);
v_isSharedCheck_3939_ = !lean_is_exclusive(v___x_3908_);
if (v_isSharedCheck_3939_ == 0)
{
v___x_3911_ = v___x_3908_;
v_isShared_3912_ = v_isSharedCheck_3939_;
goto v_resetjp_3910_;
}
else
{
lean_inc(v_a_3909_);
lean_dec(v___x_3908_);
v___x_3911_ = lean_box(0);
v_isShared_3912_ = v_isSharedCheck_3939_;
goto v_resetjp_3910_;
}
v_resetjp_3910_:
{
lean_object* v_fst_3913_; lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3937_; 
v_fst_3913_ = lean_ctor_get(v_a_3909_, 0);
v_isSharedCheck_3937_ = !lean_is_exclusive(v_a_3909_);
if (v_isSharedCheck_3937_ == 0)
{
lean_object* v_unused_3938_; 
v_unused_3938_ = lean_ctor_get(v_a_3909_, 1);
lean_dec(v_unused_3938_);
v___x_3915_ = v_a_3909_;
v_isShared_3916_ = v_isSharedCheck_3937_;
goto v_resetjp_3914_;
}
else
{
lean_inc(v_fst_3913_);
lean_dec(v_a_3909_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3937_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
if (lean_obj_tag(v_fst_3913_) == 0)
{
lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3920_; 
lean_del_object(v___x_3911_);
v___x_3917_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3918_ = l_Lean_MessageData_ofName(v___x_3902_);
lean_inc_ref(v___x_3918_);
if (v_isShared_3916_ == 0)
{
lean_ctor_set_tag(v___x_3915_, 7);
lean_ctor_set(v___x_3915_, 1, v___x_3918_);
lean_ctor_set(v___x_3915_, 0, v___x_3917_);
v___x_3920_ = v___x_3915_;
goto v_reusejp_3919_;
}
else
{
lean_object* v_reuseFailAlloc_3932_; 
v_reuseFailAlloc_3932_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3932_, 0, v___x_3917_);
lean_ctor_set(v_reuseFailAlloc_3932_, 1, v___x_3918_);
v___x_3920_ = v_reuseFailAlloc_3932_;
goto v_reusejp_3919_;
}
v_reusejp_3919_:
{
lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; 
v___x_3921_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_3922_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3922_, 0, v___x_3920_);
lean_ctor_set(v___x_3922_, 1, v___x_3921_);
v___x_3923_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_3924_ = l_Lean_indentD(v___x_3923_);
v___x_3925_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3925_, 0, v___x_3922_);
lean_ctor_set(v___x_3925_, 1, v___x_3924_);
v___x_3926_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_3927_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3927_, 0, v___x_3925_);
lean_ctor_set(v___x_3927_, 1, v___x_3926_);
v___x_3928_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3928_, 0, v___x_3927_);
lean_ctor_set(v___x_3928_, 1, v___x_3918_);
v___x_3929_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_3930_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3930_, 0, v___x_3928_);
lean_ctor_set(v___x_3930_, 1, v___x_3929_);
v___x_3931_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_3930_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
return v___x_3931_;
}
}
else
{
lean_object* v_val_3933_; lean_object* v___x_3935_; 
lean_del_object(v___x_3915_);
lean_dec(v___x_3902_);
lean_dec(v_stx_2393_);
v_val_3933_ = lean_ctor_get(v_fst_3913_, 0);
lean_inc(v_val_3933_);
lean_dec_ref_known(v_fst_3913_, 1);
if (v_isShared_3912_ == 0)
{
lean_ctor_set(v___x_3911_, 0, v_val_3933_);
v___x_3935_ = v___x_3911_;
goto v_reusejp_3934_;
}
else
{
lean_object* v_reuseFailAlloc_3936_; 
v_reuseFailAlloc_3936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3936_, 0, v_val_3933_);
v___x_3935_ = v_reuseFailAlloc_3936_;
goto v_reusejp_3934_;
}
v_reusejp_3934_:
{
return v___x_3935_;
}
}
}
}
}
else
{
lean_object* v_a_3940_; lean_object* v___x_3942_; uint8_t v_isShared_3943_; uint8_t v_isSharedCheck_3947_; 
lean_dec(v___x_3902_);
lean_dec(v_stx_2393_);
v_a_3940_ = lean_ctor_get(v___x_3908_, 0);
v_isSharedCheck_3947_ = !lean_is_exclusive(v___x_3908_);
if (v_isSharedCheck_3947_ == 0)
{
v___x_3942_ = v___x_3908_;
v_isShared_3943_ = v_isSharedCheck_3947_;
goto v_resetjp_3941_;
}
else
{
lean_inc(v_a_3940_);
lean_dec(v___x_3908_);
v___x_3942_ = lean_box(0);
v_isShared_3943_ = v_isSharedCheck_3947_;
goto v_resetjp_3941_;
}
v_resetjp_3941_:
{
lean_object* v___x_3945_; 
if (v_isShared_3943_ == 0)
{
v___x_3945_ = v___x_3942_;
goto v_reusejp_3944_;
}
else
{
lean_object* v_reuseFailAlloc_3946_; 
v_reuseFailAlloc_3946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3946_, 0, v_a_3940_);
v___x_3945_ = v_reuseFailAlloc_3946_;
goto v_reusejp_3944_;
}
v_reusejp_3944_:
{
return v___x_3945_;
}
}
}
}
else
{
lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; 
v___x_3948_ = lean_unsigned_to_nat(5u);
v___x_3949_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3948_);
lean_dec(v_stx_2393_);
v___x_3950_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_3949_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
if (lean_obj_tag(v___x_3950_) == 0)
{
lean_object* v_a_3951_; lean_object* v___x_3953_; uint8_t v_isShared_3954_; uint8_t v_isSharedCheck_3959_; 
v_a_3951_ = lean_ctor_get(v___x_3950_, 0);
v_isSharedCheck_3959_ = !lean_is_exclusive(v___x_3950_);
if (v_isSharedCheck_3959_ == 0)
{
v___x_3953_ = v___x_3950_;
v_isShared_3954_ = v_isSharedCheck_3959_;
goto v_resetjp_3952_;
}
else
{
lean_inc(v_a_3951_);
lean_dec(v___x_3950_);
v___x_3953_ = lean_box(0);
v_isShared_3954_ = v_isSharedCheck_3959_;
goto v_resetjp_3952_;
}
v_resetjp_3952_:
{
lean_object* v___x_3955_; lean_object* v___x_3957_; 
v___x_3955_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_3951_);
if (v_isShared_3954_ == 0)
{
lean_ctor_set(v___x_3953_, 0, v___x_3955_);
v___x_3957_ = v___x_3953_;
goto v_reusejp_3956_;
}
else
{
lean_object* v_reuseFailAlloc_3958_; 
v_reuseFailAlloc_3958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3958_, 0, v___x_3955_);
v___x_3957_ = v_reuseFailAlloc_3958_;
goto v_reusejp_3956_;
}
v_reusejp_3956_:
{
return v___x_3957_;
}
}
}
else
{
return v___x_3950_;
}
}
}
else
{
lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; size_t v_sz_3963_; size_t v___x_3964_; lean_object* v___x_3965_; 
lean_dec(v_stx_2393_);
v___x_3960_ = l_Lean_Syntax_getArg(v___x_3897_, v___x_3888_);
lean_dec(v___x_3897_);
v___x_3961_ = l_Lean_Syntax_getArgs(v___x_3960_);
lean_dec(v___x_3960_);
v___x_3962_ = l_Lean_Elab_Do_ControlInfo_empty;
v_sz_3963_ = lean_array_size(v___x_3961_);
v___x_3964_ = ((size_t)0ULL);
v___x_3965_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(v___x_2792_, v___x_3961_, v_sz_3963_, v___x_3964_, v___x_3962_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
lean_dec_ref(v___x_3961_);
return v___x_3965_;
}
}
v___jp_3967_:
{
lean_object* v___x_3974_; lean_object* v___x_3975_; uint8_t v___x_3976_; 
v___x_3974_ = lean_unsigned_to_nat(2u);
v___x_3975_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_3974_);
v___x_3976_ = l_Lean_Syntax_isNone(v___x_3975_);
if (v___x_3976_ == 0)
{
uint8_t v___x_3977_; 
lean_inc(v___x_3975_);
v___x_3977_ = l_Lean_Syntax_matchesNull(v___x_3975_, v___x_3966_);
if (v___x_3977_ == 0)
{
lean_object* v___x_3978_; uint8_t v___x_3979_; 
lean_dec(v___x_3975_);
v___x_3978_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_3979_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_3978_);
if (v___x_3979_ == 0)
{
lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v_env_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; 
lean_inc_n(v_stx_2393_, 2);
v___x_3980_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_3981_ = lean_st_ref_get(v___y_3973_);
v_env_3982_ = lean_ctor_get(v___x_3981_, 0);
lean_inc_ref(v_env_3982_);
lean_dec(v___x_3981_);
v___x_3983_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_3984_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_3983_, v_env_3982_, v___x_3980_);
v___x_3985_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_3986_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_3984_, v___x_3985_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_);
lean_dec(v___x_3984_);
if (lean_obj_tag(v___x_3986_) == 0)
{
lean_object* v_a_3987_; lean_object* v___x_3989_; uint8_t v_isShared_3990_; uint8_t v_isSharedCheck_4017_; 
v_a_3987_ = lean_ctor_get(v___x_3986_, 0);
v_isSharedCheck_4017_ = !lean_is_exclusive(v___x_3986_);
if (v_isSharedCheck_4017_ == 0)
{
v___x_3989_ = v___x_3986_;
v_isShared_3990_ = v_isSharedCheck_4017_;
goto v_resetjp_3988_;
}
else
{
lean_inc(v_a_3987_);
lean_dec(v___x_3986_);
v___x_3989_ = lean_box(0);
v_isShared_3990_ = v_isSharedCheck_4017_;
goto v_resetjp_3988_;
}
v_resetjp_3988_:
{
lean_object* v_fst_3991_; lean_object* v___x_3993_; uint8_t v_isShared_3994_; uint8_t v_isSharedCheck_4015_; 
v_fst_3991_ = lean_ctor_get(v_a_3987_, 0);
v_isSharedCheck_4015_ = !lean_is_exclusive(v_a_3987_);
if (v_isSharedCheck_4015_ == 0)
{
lean_object* v_unused_4016_; 
v_unused_4016_ = lean_ctor_get(v_a_3987_, 1);
lean_dec(v_unused_4016_);
v___x_3993_ = v_a_3987_;
v_isShared_3994_ = v_isSharedCheck_4015_;
goto v_resetjp_3992_;
}
else
{
lean_inc(v_fst_3991_);
lean_dec(v_a_3987_);
v___x_3993_ = lean_box(0);
v_isShared_3994_ = v_isSharedCheck_4015_;
goto v_resetjp_3992_;
}
v_resetjp_3992_:
{
if (lean_obj_tag(v_fst_3991_) == 0)
{
lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3998_; 
lean_del_object(v___x_3989_);
v___x_3995_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_3996_ = l_Lean_MessageData_ofName(v___x_3980_);
lean_inc_ref(v___x_3996_);
if (v_isShared_3994_ == 0)
{
lean_ctor_set_tag(v___x_3993_, 7);
lean_ctor_set(v___x_3993_, 1, v___x_3996_);
lean_ctor_set(v___x_3993_, 0, v___x_3995_);
v___x_3998_ = v___x_3993_;
goto v_reusejp_3997_;
}
else
{
lean_object* v_reuseFailAlloc_4010_; 
v_reuseFailAlloc_4010_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4010_, 0, v___x_3995_);
lean_ctor_set(v_reuseFailAlloc_4010_, 1, v___x_3996_);
v___x_3998_ = v_reuseFailAlloc_4010_;
goto v_reusejp_3997_;
}
v_reusejp_3997_:
{
lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; 
v___x_3999_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4000_, 0, v___x_3998_);
lean_ctor_set(v___x_4000_, 1, v___x_3999_);
v___x_4001_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_4002_ = l_Lean_indentD(v___x_4001_);
v___x_4003_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4003_, 0, v___x_4000_);
lean_ctor_set(v___x_4003_, 1, v___x_4002_);
v___x_4004_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4005_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4005_, 0, v___x_4003_);
lean_ctor_set(v___x_4005_, 1, v___x_4004_);
v___x_4006_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4006_, 0, v___x_4005_);
lean_ctor_set(v___x_4006_, 1, v___x_3996_);
v___x_4007_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_4008_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4008_, 0, v___x_4006_);
lean_ctor_set(v___x_4008_, 1, v___x_4007_);
v___x_4009_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4008_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_);
return v___x_4009_;
}
}
else
{
lean_object* v_val_4011_; lean_object* v___x_4013_; 
lean_del_object(v___x_3993_);
lean_dec(v___x_3980_);
lean_dec(v_stx_2393_);
v_val_4011_ = lean_ctor_get(v_fst_3991_, 0);
lean_inc(v_val_4011_);
lean_dec_ref_known(v_fst_3991_, 1);
if (v_isShared_3990_ == 0)
{
lean_ctor_set(v___x_3989_, 0, v_val_4011_);
v___x_4013_ = v___x_3989_;
goto v_reusejp_4012_;
}
else
{
lean_object* v_reuseFailAlloc_4014_; 
v_reuseFailAlloc_4014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4014_, 0, v_val_4011_);
v___x_4013_ = v_reuseFailAlloc_4014_;
goto v_reusejp_4012_;
}
v_reusejp_4012_:
{
return v___x_4013_;
}
}
}
}
}
else
{
lean_object* v_a_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4025_; 
lean_dec(v___x_3980_);
lean_dec(v_stx_2393_);
v_a_4018_ = lean_ctor_get(v___x_3986_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v___x_3986_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4020_ = v___x_3986_;
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_a_4018_);
lean_dec(v___x_3986_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v___x_4023_; 
if (v_isShared_4021_ == 0)
{
v___x_4023_ = v___x_4020_;
goto v_reusejp_4022_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v_a_4018_);
v___x_4023_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4022_;
}
v_reusejp_4022_:
{
return v___x_4023_;
}
}
}
}
else
{
lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; 
v___x_4026_ = lean_unsigned_to_nat(5u);
v___x_4027_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4026_);
lean_dec(v_stx_2393_);
v___x_4028_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4027_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_);
if (lean_obj_tag(v___x_4028_) == 0)
{
lean_object* v_a_4029_; lean_object* v___x_4031_; uint8_t v_isShared_4032_; uint8_t v_isSharedCheck_4037_; 
v_a_4029_ = lean_ctor_get(v___x_4028_, 0);
v_isSharedCheck_4037_ = !lean_is_exclusive(v___x_4028_);
if (v_isSharedCheck_4037_ == 0)
{
v___x_4031_ = v___x_4028_;
v_isShared_4032_ = v_isSharedCheck_4037_;
goto v_resetjp_4030_;
}
else
{
lean_inc(v_a_4029_);
lean_dec(v___x_4028_);
v___x_4031_ = lean_box(0);
v_isShared_4032_ = v_isSharedCheck_4037_;
goto v_resetjp_4030_;
}
v_resetjp_4030_:
{
lean_object* v___x_4033_; lean_object* v___x_4035_; 
v___x_4033_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_4029_);
if (v_isShared_4032_ == 0)
{
lean_ctor_set(v___x_4031_, 0, v___x_4033_);
v___x_4035_ = v___x_4031_;
goto v_reusejp_4034_;
}
else
{
lean_object* v_reuseFailAlloc_4036_; 
v_reuseFailAlloc_4036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4036_, 0, v___x_4033_);
v___x_4035_ = v_reuseFailAlloc_4036_;
goto v_reusejp_4034_;
}
v_reusejp_4034_:
{
return v___x_4035_;
}
}
}
else
{
return v___x_4028_;
}
}
}
else
{
lean_object* v___x_4038_; lean_object* v___x_4039_; uint8_t v___x_4040_; 
v___x_4038_ = l_Lean_Syntax_getArg(v___x_3975_, v___x_3888_);
lean_dec(v___x_3975_);
v___x_4039_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__80));
v___x_4040_ = l_Lean_Syntax_isOfKind(v___x_4038_, v___x_4039_);
if (v___x_4040_ == 0)
{
lean_object* v___x_4041_; uint8_t v___x_4042_; 
v___x_4041_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_4042_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_4041_);
if (v___x_4042_ == 0)
{
lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v_env_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; 
lean_inc_n(v_stx_2393_, 2);
v___x_4043_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_4044_ = lean_st_ref_get(v___y_3973_);
v_env_4045_ = lean_ctor_get(v___x_4044_, 0);
lean_inc_ref(v_env_4045_);
lean_dec(v___x_4044_);
v___x_4046_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4047_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4046_, v_env_4045_, v___x_4043_);
v___x_4048_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4049_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_4047_, v___x_4048_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_);
lean_dec(v___x_4047_);
if (lean_obj_tag(v___x_4049_) == 0)
{
lean_object* v_a_4050_; lean_object* v___x_4052_; uint8_t v_isShared_4053_; uint8_t v_isSharedCheck_4080_; 
v_a_4050_ = lean_ctor_get(v___x_4049_, 0);
v_isSharedCheck_4080_ = !lean_is_exclusive(v___x_4049_);
if (v_isSharedCheck_4080_ == 0)
{
v___x_4052_ = v___x_4049_;
v_isShared_4053_ = v_isSharedCheck_4080_;
goto v_resetjp_4051_;
}
else
{
lean_inc(v_a_4050_);
lean_dec(v___x_4049_);
v___x_4052_ = lean_box(0);
v_isShared_4053_ = v_isSharedCheck_4080_;
goto v_resetjp_4051_;
}
v_resetjp_4051_:
{
lean_object* v_fst_4054_; lean_object* v___x_4056_; uint8_t v_isShared_4057_; uint8_t v_isSharedCheck_4078_; 
v_fst_4054_ = lean_ctor_get(v_a_4050_, 0);
v_isSharedCheck_4078_ = !lean_is_exclusive(v_a_4050_);
if (v_isSharedCheck_4078_ == 0)
{
lean_object* v_unused_4079_; 
v_unused_4079_ = lean_ctor_get(v_a_4050_, 1);
lean_dec(v_unused_4079_);
v___x_4056_ = v_a_4050_;
v_isShared_4057_ = v_isSharedCheck_4078_;
goto v_resetjp_4055_;
}
else
{
lean_inc(v_fst_4054_);
lean_dec(v_a_4050_);
v___x_4056_ = lean_box(0);
v_isShared_4057_ = v_isSharedCheck_4078_;
goto v_resetjp_4055_;
}
v_resetjp_4055_:
{
if (lean_obj_tag(v_fst_4054_) == 0)
{
lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4061_; 
lean_del_object(v___x_4052_);
v___x_4058_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4059_ = l_Lean_MessageData_ofName(v___x_4043_);
lean_inc_ref(v___x_4059_);
if (v_isShared_4057_ == 0)
{
lean_ctor_set_tag(v___x_4056_, 7);
lean_ctor_set(v___x_4056_, 1, v___x_4059_);
lean_ctor_set(v___x_4056_, 0, v___x_4058_);
v___x_4061_ = v___x_4056_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4073_; 
v_reuseFailAlloc_4073_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4073_, 0, v___x_4058_);
lean_ctor_set(v_reuseFailAlloc_4073_, 1, v___x_4059_);
v___x_4061_ = v_reuseFailAlloc_4073_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; 
v___x_4062_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4063_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4063_, 0, v___x_4061_);
lean_ctor_set(v___x_4063_, 1, v___x_4062_);
v___x_4064_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_4065_ = l_Lean_indentD(v___x_4064_);
v___x_4066_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4066_, 0, v___x_4063_);
lean_ctor_set(v___x_4066_, 1, v___x_4065_);
v___x_4067_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4068_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4068_, 0, v___x_4066_);
lean_ctor_set(v___x_4068_, 1, v___x_4067_);
v___x_4069_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4069_, 0, v___x_4068_);
lean_ctor_set(v___x_4069_, 1, v___x_4059_);
v___x_4070_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_4071_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4071_, 0, v___x_4069_);
lean_ctor_set(v___x_4071_, 1, v___x_4070_);
v___x_4072_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4071_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_);
return v___x_4072_;
}
}
else
{
lean_object* v_val_4074_; lean_object* v___x_4076_; 
lean_del_object(v___x_4056_);
lean_dec(v___x_4043_);
lean_dec(v_stx_2393_);
v_val_4074_ = lean_ctor_get(v_fst_4054_, 0);
lean_inc(v_val_4074_);
lean_dec_ref_known(v_fst_4054_, 1);
if (v_isShared_4053_ == 0)
{
lean_ctor_set(v___x_4052_, 0, v_val_4074_);
v___x_4076_ = v___x_4052_;
goto v_reusejp_4075_;
}
else
{
lean_object* v_reuseFailAlloc_4077_; 
v_reuseFailAlloc_4077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4077_, 0, v_val_4074_);
v___x_4076_ = v_reuseFailAlloc_4077_;
goto v_reusejp_4075_;
}
v_reusejp_4075_:
{
return v___x_4076_;
}
}
}
}
}
else
{
lean_object* v_a_4081_; lean_object* v___x_4083_; uint8_t v_isShared_4084_; uint8_t v_isSharedCheck_4088_; 
lean_dec(v___x_4043_);
lean_dec(v_stx_2393_);
v_a_4081_ = lean_ctor_get(v___x_4049_, 0);
v_isSharedCheck_4088_ = !lean_is_exclusive(v___x_4049_);
if (v_isSharedCheck_4088_ == 0)
{
v___x_4083_ = v___x_4049_;
v_isShared_4084_ = v_isSharedCheck_4088_;
goto v_resetjp_4082_;
}
else
{
lean_inc(v_a_4081_);
lean_dec(v___x_4049_);
v___x_4083_ = lean_box(0);
v_isShared_4084_ = v_isSharedCheck_4088_;
goto v_resetjp_4082_;
}
v_resetjp_4082_:
{
lean_object* v___x_4086_; 
if (v_isShared_4084_ == 0)
{
v___x_4086_ = v___x_4083_;
goto v_reusejp_4085_;
}
else
{
lean_object* v_reuseFailAlloc_4087_; 
v_reuseFailAlloc_4087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4087_, 0, v_a_4081_);
v___x_4086_ = v_reuseFailAlloc_4087_;
goto v_reusejp_4085_;
}
v_reusejp_4085_:
{
return v___x_4086_;
}
}
}
}
else
{
lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; 
v___x_4089_ = lean_unsigned_to_nat(5u);
v___x_4090_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4089_);
lean_dec(v_stx_2393_);
v___x_4091_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4090_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_);
if (lean_obj_tag(v___x_4091_) == 0)
{
lean_object* v_a_4092_; lean_object* v___x_4094_; uint8_t v_isShared_4095_; uint8_t v_isSharedCheck_4100_; 
v_a_4092_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4100_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4100_ == 0)
{
v___x_4094_ = v___x_4091_;
v_isShared_4095_ = v_isSharedCheck_4100_;
goto v_resetjp_4093_;
}
else
{
lean_inc(v_a_4092_);
lean_dec(v___x_4091_);
v___x_4094_ = lean_box(0);
v_isShared_4095_ = v_isSharedCheck_4100_;
goto v_resetjp_4093_;
}
v_resetjp_4093_:
{
lean_object* v___x_4096_; lean_object* v___x_4098_; 
v___x_4096_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_4092_);
if (v_isShared_4095_ == 0)
{
lean_ctor_set(v___x_4094_, 0, v___x_4096_);
v___x_4098_ = v___x_4094_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v___x_4096_);
v___x_4098_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
return v___x_4098_;
}
}
}
else
{
return v___x_4091_;
}
}
}
else
{
v___y_3890_ = v___y_3968_;
v___y_3891_ = v___y_3969_;
v___y_3892_ = v___y_3970_;
v___y_3893_ = v___y_3971_;
v___y_3894_ = v___y_3972_;
v___y_3895_ = v___y_3973_;
goto v___jp_3889_;
}
}
}
else
{
lean_dec(v___x_3975_);
v___y_3890_ = v___y_3968_;
v___y_3891_ = v___y_3969_;
v___y_3892_ = v___y_3970_;
v___y_3893_ = v___y_3971_;
v___y_3894_ = v___y_3972_;
v___y_3895_ = v___y_3973_;
goto v___jp_3889_;
}
}
}
}
else
{
lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; uint8_t v___x_4230_; 
v___x_4227_ = lean_unsigned_to_nat(0u);
v___x_4228_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4227_);
v___x_4229_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__1));
lean_inc(v___x_4228_);
v___x_4230_ = l_Lean_Syntax_isOfKind(v___x_4228_, v___x_4229_);
if (v___x_4230_ == 0)
{
lean_object* v___x_4231_; uint8_t v___x_4232_; 
v___x_4231_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__3));
lean_inc(v___x_4228_);
v___x_4232_ = l_Lean_Syntax_isOfKind(v___x_4228_, v___x_4231_);
if (v___x_4232_ == 0)
{
lean_object* v___x_4233_; uint8_t v___x_4234_; 
lean_dec(v___x_4228_);
v___x_4233_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_4234_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_4233_);
if (v___x_4234_ == 0)
{
lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v_env_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; 
lean_inc_n(v_stx_2393_, 2);
v___x_4235_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_4236_ = lean_st_ref_get(v_a_2399_);
v_env_4237_ = lean_ctor_get(v___x_4236_, 0);
lean_inc_ref(v_env_4237_);
lean_dec(v___x_4236_);
v___x_4238_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4239_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4238_, v_env_4237_, v___x_4235_);
v___x_4240_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4241_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_4239_, v___x_4240_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_4239_);
if (lean_obj_tag(v___x_4241_) == 0)
{
lean_object* v_a_4242_; lean_object* v___x_4244_; uint8_t v_isShared_4245_; uint8_t v_isSharedCheck_4272_; 
v_a_4242_ = lean_ctor_get(v___x_4241_, 0);
v_isSharedCheck_4272_ = !lean_is_exclusive(v___x_4241_);
if (v_isSharedCheck_4272_ == 0)
{
v___x_4244_ = v___x_4241_;
v_isShared_4245_ = v_isSharedCheck_4272_;
goto v_resetjp_4243_;
}
else
{
lean_inc(v_a_4242_);
lean_dec(v___x_4241_);
v___x_4244_ = lean_box(0);
v_isShared_4245_ = v_isSharedCheck_4272_;
goto v_resetjp_4243_;
}
v_resetjp_4243_:
{
lean_object* v_fst_4246_; lean_object* v___x_4248_; uint8_t v_isShared_4249_; uint8_t v_isSharedCheck_4270_; 
v_fst_4246_ = lean_ctor_get(v_a_4242_, 0);
v_isSharedCheck_4270_ = !lean_is_exclusive(v_a_4242_);
if (v_isSharedCheck_4270_ == 0)
{
lean_object* v_unused_4271_; 
v_unused_4271_ = lean_ctor_get(v_a_4242_, 1);
lean_dec(v_unused_4271_);
v___x_4248_ = v_a_4242_;
v_isShared_4249_ = v_isSharedCheck_4270_;
goto v_resetjp_4247_;
}
else
{
lean_inc(v_fst_4246_);
lean_dec(v_a_4242_);
v___x_4248_ = lean_box(0);
v_isShared_4249_ = v_isSharedCheck_4270_;
goto v_resetjp_4247_;
}
v_resetjp_4247_:
{
if (lean_obj_tag(v_fst_4246_) == 0)
{
lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4253_; 
lean_del_object(v___x_4244_);
v___x_4250_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4251_ = l_Lean_MessageData_ofName(v___x_4235_);
lean_inc_ref(v___x_4251_);
if (v_isShared_4249_ == 0)
{
lean_ctor_set_tag(v___x_4248_, 7);
lean_ctor_set(v___x_4248_, 1, v___x_4251_);
lean_ctor_set(v___x_4248_, 0, v___x_4250_);
v___x_4253_ = v___x_4248_;
goto v_reusejp_4252_;
}
else
{
lean_object* v_reuseFailAlloc_4265_; 
v_reuseFailAlloc_4265_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4265_, 0, v___x_4250_);
lean_ctor_set(v_reuseFailAlloc_4265_, 1, v___x_4251_);
v___x_4253_ = v_reuseFailAlloc_4265_;
goto v_reusejp_4252_;
}
v_reusejp_4252_:
{
lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; 
v___x_4254_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4255_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4255_, 0, v___x_4253_);
lean_ctor_set(v___x_4255_, 1, v___x_4254_);
v___x_4256_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_4257_ = l_Lean_indentD(v___x_4256_);
v___x_4258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4258_, 0, v___x_4255_);
lean_ctor_set(v___x_4258_, 1, v___x_4257_);
v___x_4259_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4260_, 0, v___x_4258_);
lean_ctor_set(v___x_4260_, 1, v___x_4259_);
v___x_4261_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4261_, 0, v___x_4260_);
lean_ctor_set(v___x_4261_, 1, v___x_4251_);
v___x_4262_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_4263_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4263_, 0, v___x_4261_);
lean_ctor_set(v___x_4263_, 1, v___x_4262_);
v___x_4264_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4263_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_4264_;
}
}
else
{
lean_object* v_val_4266_; lean_object* v___x_4268_; 
lean_del_object(v___x_4248_);
lean_dec(v___x_4235_);
lean_dec(v_stx_2393_);
v_val_4266_ = lean_ctor_get(v_fst_4246_, 0);
lean_inc(v_val_4266_);
lean_dec_ref_known(v_fst_4246_, 1);
if (v_isShared_4245_ == 0)
{
lean_ctor_set(v___x_4244_, 0, v_val_4266_);
v___x_4268_ = v___x_4244_;
goto v_reusejp_4267_;
}
else
{
lean_object* v_reuseFailAlloc_4269_; 
v_reuseFailAlloc_4269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4269_, 0, v_val_4266_);
v___x_4268_ = v_reuseFailAlloc_4269_;
goto v_reusejp_4267_;
}
v_reusejp_4267_:
{
return v___x_4268_;
}
}
}
}
}
else
{
lean_object* v_a_4273_; lean_object* v___x_4275_; uint8_t v_isShared_4276_; uint8_t v_isSharedCheck_4280_; 
lean_dec(v___x_4235_);
lean_dec(v_stx_2393_);
v_a_4273_ = lean_ctor_get(v___x_4241_, 0);
v_isSharedCheck_4280_ = !lean_is_exclusive(v___x_4241_);
if (v_isSharedCheck_4280_ == 0)
{
v___x_4275_ = v___x_4241_;
v_isShared_4276_ = v_isSharedCheck_4280_;
goto v_resetjp_4274_;
}
else
{
lean_inc(v_a_4273_);
lean_dec(v___x_4241_);
v___x_4275_ = lean_box(0);
v_isShared_4276_ = v_isSharedCheck_4280_;
goto v_resetjp_4274_;
}
v_resetjp_4274_:
{
lean_object* v___x_4278_; 
if (v_isShared_4276_ == 0)
{
v___x_4278_ = v___x_4275_;
goto v_reusejp_4277_;
}
else
{
lean_object* v_reuseFailAlloc_4279_; 
v_reuseFailAlloc_4279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4279_, 0, v_a_4273_);
v___x_4278_ = v_reuseFailAlloc_4279_;
goto v_reusejp_4277_;
}
v_reusejp_4277_:
{
return v___x_4278_;
}
}
}
}
else
{
lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; 
v___x_4281_ = lean_unsigned_to_nat(5u);
v___x_4282_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4281_);
lean_dec(v_stx_2393_);
v___x_4283_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4282_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_4283_) == 0)
{
lean_object* v_a_4284_; lean_object* v___x_4286_; uint8_t v_isShared_4287_; uint8_t v_isSharedCheck_4292_; 
v_a_4284_ = lean_ctor_get(v___x_4283_, 0);
v_isSharedCheck_4292_ = !lean_is_exclusive(v___x_4283_);
if (v_isSharedCheck_4292_ == 0)
{
v___x_4286_ = v___x_4283_;
v_isShared_4287_ = v_isSharedCheck_4292_;
goto v_resetjp_4285_;
}
else
{
lean_inc(v_a_4284_);
lean_dec(v___x_4283_);
v___x_4286_ = lean_box(0);
v_isShared_4287_ = v_isSharedCheck_4292_;
goto v_resetjp_4285_;
}
v_resetjp_4285_:
{
lean_object* v___x_4288_; lean_object* v___x_4290_; 
v___x_4288_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_4284_);
if (v_isShared_4287_ == 0)
{
lean_ctor_set(v___x_4286_, 0, v___x_4288_);
v___x_4290_ = v___x_4286_;
goto v_reusejp_4289_;
}
else
{
lean_object* v_reuseFailAlloc_4291_; 
v_reuseFailAlloc_4291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4291_, 0, v___x_4288_);
v___x_4290_ = v_reuseFailAlloc_4291_;
goto v_reusejp_4289_;
}
v_reusejp_4289_:
{
return v___x_4290_;
}
}
}
else
{
return v___x_4283_;
}
}
}
else
{
lean_object* v___x_4293_; 
lean_dec(v_stx_2393_);
v___x_4293_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_2694_, v___x_4228_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_4293_;
}
}
else
{
lean_object* v___x_4294_; 
lean_dec(v_stx_2393_);
v___x_4294_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_2694_, v___x_4228_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_4294_;
}
}
}
else
{
lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; uint8_t v___x_4298_; 
v___x_4295_ = lean_unsigned_to_nat(0u);
v___x_4296_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4295_);
v___x_4297_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__84));
lean_inc(v___x_4296_);
v___x_4298_ = l_Lean_Syntax_isOfKind(v___x_4296_, v___x_4297_);
if (v___x_4298_ == 0)
{
lean_object* v___x_4299_; uint8_t v___x_4300_; 
v___x_4299_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__86));
lean_inc(v___x_4296_);
v___x_4300_ = l_Lean_Syntax_isOfKind(v___x_4296_, v___x_4299_);
if (v___x_4300_ == 0)
{
lean_object* v___x_4301_; uint8_t v___x_4302_; 
lean_dec(v___x_4296_);
v___x_4301_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_4302_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_4301_);
if (v___x_4302_ == 0)
{
lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v_env_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; 
lean_inc_n(v_stx_2393_, 2);
v___x_4303_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_4304_ = lean_st_ref_get(v_a_2399_);
v_env_4305_ = lean_ctor_get(v___x_4304_, 0);
lean_inc_ref(v_env_4305_);
lean_dec(v___x_4304_);
v___x_4306_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4307_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4306_, v_env_4305_, v___x_4303_);
v___x_4308_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4309_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_4307_, v___x_4308_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_4307_);
if (lean_obj_tag(v___x_4309_) == 0)
{
lean_object* v_a_4310_; lean_object* v___x_4312_; uint8_t v_isShared_4313_; uint8_t v_isSharedCheck_4340_; 
v_a_4310_ = lean_ctor_get(v___x_4309_, 0);
v_isSharedCheck_4340_ = !lean_is_exclusive(v___x_4309_);
if (v_isSharedCheck_4340_ == 0)
{
v___x_4312_ = v___x_4309_;
v_isShared_4313_ = v_isSharedCheck_4340_;
goto v_resetjp_4311_;
}
else
{
lean_inc(v_a_4310_);
lean_dec(v___x_4309_);
v___x_4312_ = lean_box(0);
v_isShared_4313_ = v_isSharedCheck_4340_;
goto v_resetjp_4311_;
}
v_resetjp_4311_:
{
lean_object* v_fst_4314_; lean_object* v___x_4316_; uint8_t v_isShared_4317_; uint8_t v_isSharedCheck_4338_; 
v_fst_4314_ = lean_ctor_get(v_a_4310_, 0);
v_isSharedCheck_4338_ = !lean_is_exclusive(v_a_4310_);
if (v_isSharedCheck_4338_ == 0)
{
lean_object* v_unused_4339_; 
v_unused_4339_ = lean_ctor_get(v_a_4310_, 1);
lean_dec(v_unused_4339_);
v___x_4316_ = v_a_4310_;
v_isShared_4317_ = v_isSharedCheck_4338_;
goto v_resetjp_4315_;
}
else
{
lean_inc(v_fst_4314_);
lean_dec(v_a_4310_);
v___x_4316_ = lean_box(0);
v_isShared_4317_ = v_isSharedCheck_4338_;
goto v_resetjp_4315_;
}
v_resetjp_4315_:
{
if (lean_obj_tag(v_fst_4314_) == 0)
{
lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4321_; 
lean_del_object(v___x_4312_);
v___x_4318_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4319_ = l_Lean_MessageData_ofName(v___x_4303_);
lean_inc_ref(v___x_4319_);
if (v_isShared_4317_ == 0)
{
lean_ctor_set_tag(v___x_4316_, 7);
lean_ctor_set(v___x_4316_, 1, v___x_4319_);
lean_ctor_set(v___x_4316_, 0, v___x_4318_);
v___x_4321_ = v___x_4316_;
goto v_reusejp_4320_;
}
else
{
lean_object* v_reuseFailAlloc_4333_; 
v_reuseFailAlloc_4333_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4333_, 0, v___x_4318_);
lean_ctor_set(v_reuseFailAlloc_4333_, 1, v___x_4319_);
v___x_4321_ = v_reuseFailAlloc_4333_;
goto v_reusejp_4320_;
}
v_reusejp_4320_:
{
lean_object* v___x_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; 
v___x_4322_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4323_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4323_, 0, v___x_4321_);
lean_ctor_set(v___x_4323_, 1, v___x_4322_);
v___x_4324_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_4325_ = l_Lean_indentD(v___x_4324_);
v___x_4326_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4326_, 0, v___x_4323_);
lean_ctor_set(v___x_4326_, 1, v___x_4325_);
v___x_4327_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4328_, 0, v___x_4326_);
lean_ctor_set(v___x_4328_, 1, v___x_4327_);
v___x_4329_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4329_, 0, v___x_4328_);
lean_ctor_set(v___x_4329_, 1, v___x_4319_);
v___x_4330_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_4331_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4331_, 0, v___x_4329_);
lean_ctor_set(v___x_4331_, 1, v___x_4330_);
v___x_4332_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4331_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_4332_;
}
}
else
{
lean_object* v_val_4334_; lean_object* v___x_4336_; 
lean_del_object(v___x_4316_);
lean_dec(v___x_4303_);
lean_dec(v_stx_2393_);
v_val_4334_ = lean_ctor_get(v_fst_4314_, 0);
lean_inc(v_val_4334_);
lean_dec_ref_known(v_fst_4314_, 1);
if (v_isShared_4313_ == 0)
{
lean_ctor_set(v___x_4312_, 0, v_val_4334_);
v___x_4336_ = v___x_4312_;
goto v_reusejp_4335_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v_val_4334_);
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
lean_object* v_a_4341_; lean_object* v___x_4343_; uint8_t v_isShared_4344_; uint8_t v_isSharedCheck_4348_; 
lean_dec(v___x_4303_);
lean_dec(v_stx_2393_);
v_a_4341_ = lean_ctor_get(v___x_4309_, 0);
v_isSharedCheck_4348_ = !lean_is_exclusive(v___x_4309_);
if (v_isSharedCheck_4348_ == 0)
{
v___x_4343_ = v___x_4309_;
v_isShared_4344_ = v_isSharedCheck_4348_;
goto v_resetjp_4342_;
}
else
{
lean_inc(v_a_4341_);
lean_dec(v___x_4309_);
v___x_4343_ = lean_box(0);
v_isShared_4344_ = v_isSharedCheck_4348_;
goto v_resetjp_4342_;
}
v_resetjp_4342_:
{
lean_object* v___x_4346_; 
if (v_isShared_4344_ == 0)
{
v___x_4346_ = v___x_4343_;
goto v_reusejp_4345_;
}
else
{
lean_object* v_reuseFailAlloc_4347_; 
v_reuseFailAlloc_4347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4347_, 0, v_a_4341_);
v___x_4346_ = v_reuseFailAlloc_4347_;
goto v_reusejp_4345_;
}
v_reusejp_4345_:
{
return v___x_4346_;
}
}
}
}
else
{
lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; 
v___x_4349_ = lean_unsigned_to_nat(5u);
v___x_4350_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4349_);
lean_dec(v_stx_2393_);
v___x_4351_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4350_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_4351_) == 0)
{
lean_object* v_a_4352_; lean_object* v___x_4354_; uint8_t v_isShared_4355_; uint8_t v_isSharedCheck_4360_; 
v_a_4352_ = lean_ctor_get(v___x_4351_, 0);
v_isSharedCheck_4360_ = !lean_is_exclusive(v___x_4351_);
if (v_isSharedCheck_4360_ == 0)
{
v___x_4354_ = v___x_4351_;
v_isShared_4355_ = v_isSharedCheck_4360_;
goto v_resetjp_4353_;
}
else
{
lean_inc(v_a_4352_);
lean_dec(v___x_4351_);
v___x_4354_ = lean_box(0);
v_isShared_4355_ = v_isSharedCheck_4360_;
goto v_resetjp_4353_;
}
v_resetjp_4353_:
{
lean_object* v___x_4356_; lean_object* v___x_4358_; 
v___x_4356_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_4352_);
if (v_isShared_4355_ == 0)
{
lean_ctor_set(v___x_4354_, 0, v___x_4356_);
v___x_4358_ = v___x_4354_;
goto v_reusejp_4357_;
}
else
{
lean_object* v_reuseFailAlloc_4359_; 
v_reuseFailAlloc_4359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4359_, 0, v___x_4356_);
v___x_4358_ = v_reuseFailAlloc_4359_;
goto v_reusejp_4357_;
}
v_reusejp_4357_:
{
return v___x_4358_;
}
}
}
else
{
return v___x_4351_;
}
}
}
else
{
lean_object* v___x_4361_; 
lean_dec(v_stx_2393_);
v___x_4361_ = l_Lean_Elab_Do_getLetPatDeclVars(v___x_4296_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_4296_);
if (lean_obj_tag(v___x_4361_) == 0)
{
lean_object* v_a_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; 
v_a_4362_ = lean_ctor_get(v___x_4361_, 0);
lean_inc(v_a_4362_);
lean_dec_ref_known(v___x_4361_, 1);
v___x_4363_ = lean_box(0);
v___x_4364_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_a_4362_, v___x_4363_, v___x_4363_, v___x_4363_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_4364_;
}
else
{
lean_object* v_a_4365_; lean_object* v___x_4367_; uint8_t v_isShared_4368_; uint8_t v_isSharedCheck_4372_; 
v_a_4365_ = lean_ctor_get(v___x_4361_, 0);
v_isSharedCheck_4372_ = !lean_is_exclusive(v___x_4361_);
if (v_isSharedCheck_4372_ == 0)
{
v___x_4367_ = v___x_4361_;
v_isShared_4368_ = v_isSharedCheck_4372_;
goto v_resetjp_4366_;
}
else
{
lean_inc(v_a_4365_);
lean_dec(v___x_4361_);
v___x_4367_ = lean_box(0);
v_isShared_4368_ = v_isSharedCheck_4372_;
goto v_resetjp_4366_;
}
v_resetjp_4366_:
{
lean_object* v___x_4370_; 
if (v_isShared_4368_ == 0)
{
v___x_4370_ = v___x_4367_;
goto v_reusejp_4369_;
}
else
{
lean_object* v_reuseFailAlloc_4371_; 
v_reuseFailAlloc_4371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4371_, 0, v_a_4365_);
v___x_4370_ = v_reuseFailAlloc_4371_;
goto v_reusejp_4369_;
}
v_reusejp_4369_:
{
return v___x_4370_;
}
}
}
}
}
else
{
lean_object* v___x_4373_; 
lean_dec(v_stx_2393_);
v___x_4373_ = l_Lean_Elab_Do_getLetIdDeclVars(v___x_4296_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_4296_);
if (lean_obj_tag(v___x_4373_) == 0)
{
lean_object* v_a_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; 
v_a_4374_ = lean_ctor_get(v___x_4373_, 0);
lean_inc(v_a_4374_);
lean_dec_ref_known(v___x_4373_, 1);
v___x_4375_ = lean_box(0);
v___x_4376_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_a_4374_, v___x_4375_, v___x_4375_, v___x_4375_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_4376_;
}
else
{
lean_object* v_a_4377_; lean_object* v___x_4379_; uint8_t v_isShared_4380_; uint8_t v_isSharedCheck_4384_; 
v_a_4377_ = lean_ctor_get(v___x_4373_, 0);
v_isSharedCheck_4384_ = !lean_is_exclusive(v___x_4373_);
if (v_isSharedCheck_4384_ == 0)
{
v___x_4379_ = v___x_4373_;
v_isShared_4380_ = v_isSharedCheck_4384_;
goto v_resetjp_4378_;
}
else
{
lean_inc(v_a_4377_);
lean_dec(v___x_4373_);
v___x_4379_ = lean_box(0);
v_isShared_4380_ = v_isSharedCheck_4384_;
goto v_resetjp_4378_;
}
v_resetjp_4378_:
{
lean_object* v___x_4382_; 
if (v_isShared_4380_ == 0)
{
v___x_4382_ = v___x_4379_;
goto v_reusejp_4381_;
}
else
{
lean_object* v_reuseFailAlloc_4383_; 
v_reuseFailAlloc_4383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4383_, 0, v_a_4377_);
v___x_4382_ = v_reuseFailAlloc_4383_;
goto v_reusejp_4381_;
}
v_reusejp_4381_:
{
return v___x_4382_;
}
}
}
}
}
}
else
{
lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; uint8_t v___x_4388_; 
v___x_4385_ = lean_unsigned_to_nat(0u);
v___x_4386_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4385_);
v___x_4387_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__88));
lean_inc(v___x_4386_);
v___x_4388_ = l_Lean_Syntax_isOfKind(v___x_4386_, v___x_4387_);
if (v___x_4388_ == 0)
{
lean_object* v___x_4389_; uint8_t v___x_4390_; 
lean_dec(v___x_4386_);
v___x_4389_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_4390_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_4389_);
if (v___x_4390_ == 0)
{
lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v_env_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; 
lean_inc_n(v_stx_2393_, 2);
v___x_4391_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_4392_ = lean_st_ref_get(v_a_2399_);
v_env_4393_ = lean_ctor_get(v___x_4392_, 0);
lean_inc_ref(v_env_4393_);
lean_dec(v___x_4392_);
v___x_4394_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4395_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4394_, v_env_4393_, v___x_4391_);
v___x_4396_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4397_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_4395_, v___x_4396_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_4395_);
if (lean_obj_tag(v___x_4397_) == 0)
{
lean_object* v_a_4398_; lean_object* v___x_4400_; uint8_t v_isShared_4401_; uint8_t v_isSharedCheck_4428_; 
v_a_4398_ = lean_ctor_get(v___x_4397_, 0);
v_isSharedCheck_4428_ = !lean_is_exclusive(v___x_4397_);
if (v_isSharedCheck_4428_ == 0)
{
v___x_4400_ = v___x_4397_;
v_isShared_4401_ = v_isSharedCheck_4428_;
goto v_resetjp_4399_;
}
else
{
lean_inc(v_a_4398_);
lean_dec(v___x_4397_);
v___x_4400_ = lean_box(0);
v_isShared_4401_ = v_isSharedCheck_4428_;
goto v_resetjp_4399_;
}
v_resetjp_4399_:
{
lean_object* v_fst_4402_; lean_object* v___x_4404_; uint8_t v_isShared_4405_; uint8_t v_isSharedCheck_4426_; 
v_fst_4402_ = lean_ctor_get(v_a_4398_, 0);
v_isSharedCheck_4426_ = !lean_is_exclusive(v_a_4398_);
if (v_isSharedCheck_4426_ == 0)
{
lean_object* v_unused_4427_; 
v_unused_4427_ = lean_ctor_get(v_a_4398_, 1);
lean_dec(v_unused_4427_);
v___x_4404_ = v_a_4398_;
v_isShared_4405_ = v_isSharedCheck_4426_;
goto v_resetjp_4403_;
}
else
{
lean_inc(v_fst_4402_);
lean_dec(v_a_4398_);
v___x_4404_ = lean_box(0);
v_isShared_4405_ = v_isSharedCheck_4426_;
goto v_resetjp_4403_;
}
v_resetjp_4403_:
{
if (lean_obj_tag(v_fst_4402_) == 0)
{
lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4409_; 
lean_del_object(v___x_4400_);
v___x_4406_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4407_ = l_Lean_MessageData_ofName(v___x_4391_);
lean_inc_ref(v___x_4407_);
if (v_isShared_4405_ == 0)
{
lean_ctor_set_tag(v___x_4404_, 7);
lean_ctor_set(v___x_4404_, 1, v___x_4407_);
lean_ctor_set(v___x_4404_, 0, v___x_4406_);
v___x_4409_ = v___x_4404_;
goto v_reusejp_4408_;
}
else
{
lean_object* v_reuseFailAlloc_4421_; 
v_reuseFailAlloc_4421_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4421_, 0, v___x_4406_);
lean_ctor_set(v_reuseFailAlloc_4421_, 1, v___x_4407_);
v___x_4409_ = v_reuseFailAlloc_4421_;
goto v_reusejp_4408_;
}
v_reusejp_4408_:
{
lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; 
v___x_4410_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4411_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4411_, 0, v___x_4409_);
lean_ctor_set(v___x_4411_, 1, v___x_4410_);
v___x_4412_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_4413_ = l_Lean_indentD(v___x_4412_);
v___x_4414_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4414_, 0, v___x_4411_);
lean_ctor_set(v___x_4414_, 1, v___x_4413_);
v___x_4415_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4416_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4416_, 0, v___x_4414_);
lean_ctor_set(v___x_4416_, 1, v___x_4415_);
v___x_4417_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4417_, 0, v___x_4416_);
lean_ctor_set(v___x_4417_, 1, v___x_4407_);
v___x_4418_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_4419_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4419_, 0, v___x_4417_);
lean_ctor_set(v___x_4419_, 1, v___x_4418_);
v___x_4420_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4419_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_4420_;
}
}
else
{
lean_object* v_val_4422_; lean_object* v___x_4424_; 
lean_del_object(v___x_4404_);
lean_dec(v___x_4391_);
lean_dec(v_stx_2393_);
v_val_4422_ = lean_ctor_get(v_fst_4402_, 0);
lean_inc(v_val_4422_);
lean_dec_ref_known(v_fst_4402_, 1);
if (v_isShared_4401_ == 0)
{
lean_ctor_set(v___x_4400_, 0, v_val_4422_);
v___x_4424_ = v___x_4400_;
goto v_reusejp_4423_;
}
else
{
lean_object* v_reuseFailAlloc_4425_; 
v_reuseFailAlloc_4425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4425_, 0, v_val_4422_);
v___x_4424_ = v_reuseFailAlloc_4425_;
goto v_reusejp_4423_;
}
v_reusejp_4423_:
{
return v___x_4424_;
}
}
}
}
}
else
{
lean_object* v_a_4429_; lean_object* v___x_4431_; uint8_t v_isShared_4432_; uint8_t v_isSharedCheck_4436_; 
lean_dec(v___x_4391_);
lean_dec(v_stx_2393_);
v_a_4429_ = lean_ctor_get(v___x_4397_, 0);
v_isSharedCheck_4436_ = !lean_is_exclusive(v___x_4397_);
if (v_isSharedCheck_4436_ == 0)
{
v___x_4431_ = v___x_4397_;
v_isShared_4432_ = v_isSharedCheck_4436_;
goto v_resetjp_4430_;
}
else
{
lean_inc(v_a_4429_);
lean_dec(v___x_4397_);
v___x_4431_ = lean_box(0);
v_isShared_4432_ = v_isSharedCheck_4436_;
goto v_resetjp_4430_;
}
v_resetjp_4430_:
{
lean_object* v___x_4434_; 
if (v_isShared_4432_ == 0)
{
v___x_4434_ = v___x_4431_;
goto v_reusejp_4433_;
}
else
{
lean_object* v_reuseFailAlloc_4435_; 
v_reuseFailAlloc_4435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4435_, 0, v_a_4429_);
v___x_4434_ = v_reuseFailAlloc_4435_;
goto v_reusejp_4433_;
}
v_reusejp_4433_:
{
return v___x_4434_;
}
}
}
}
else
{
lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; 
v___x_4437_ = lean_unsigned_to_nat(5u);
v___x_4438_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4437_);
lean_dec(v_stx_2393_);
v___x_4439_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4438_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_4439_) == 0)
{
lean_object* v_a_4440_; lean_object* v___x_4442_; uint8_t v_isShared_4443_; uint8_t v_isSharedCheck_4448_; 
v_a_4440_ = lean_ctor_get(v___x_4439_, 0);
v_isSharedCheck_4448_ = !lean_is_exclusive(v___x_4439_);
if (v_isSharedCheck_4448_ == 0)
{
v___x_4442_ = v___x_4439_;
v_isShared_4443_ = v_isSharedCheck_4448_;
goto v_resetjp_4441_;
}
else
{
lean_inc(v_a_4440_);
lean_dec(v___x_4439_);
v___x_4442_ = lean_box(0);
v_isShared_4443_ = v_isSharedCheck_4448_;
goto v_resetjp_4441_;
}
v_resetjp_4441_:
{
lean_object* v___x_4444_; lean_object* v___x_4446_; 
v___x_4444_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_4440_);
if (v_isShared_4443_ == 0)
{
lean_ctor_set(v___x_4442_, 0, v___x_4444_);
v___x_4446_ = v___x_4442_;
goto v_reusejp_4445_;
}
else
{
lean_object* v_reuseFailAlloc_4447_; 
v_reuseFailAlloc_4447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4447_, 0, v___x_4444_);
v___x_4446_ = v_reuseFailAlloc_4447_;
goto v_reusejp_4445_;
}
v_reusejp_4445_:
{
return v___x_4446_;
}
}
}
else
{
return v___x_4439_;
}
}
}
else
{
lean_object* v___x_4449_; lean_object* v___y_4451_; lean_object* v___y_4452_; lean_object* v___y_4453_; lean_object* v___y_4454_; lean_object* v___y_4455_; lean_object* v___y_4456_; lean_object* v___x_4583_; uint8_t v___x_4584_; 
v___x_4449_ = lean_unsigned_to_nat(1u);
v___x_4583_ = l_Lean_Syntax_getArg(v___x_4386_, v___x_4449_);
lean_dec(v___x_4386_);
v___x_4584_ = l_Lean_Syntax_isNone(v___x_4583_);
if (v___x_4584_ == 0)
{
uint8_t v___x_4585_; 
v___x_4585_ = l_Lean_Syntax_matchesNull(v___x_4583_, v___x_4449_);
if (v___x_4585_ == 0)
{
lean_object* v___x_4586_; uint8_t v___x_4587_; 
v___x_4586_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_4587_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_4586_);
if (v___x_4587_ == 0)
{
lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v_env_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; 
lean_inc_n(v_stx_2393_, 2);
v___x_4588_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_4589_ = lean_st_ref_get(v_a_2399_);
v_env_4590_ = lean_ctor_get(v___x_4589_, 0);
lean_inc_ref(v_env_4590_);
lean_dec(v___x_4589_);
v___x_4591_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4592_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4591_, v_env_4590_, v___x_4588_);
v___x_4593_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4594_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_4592_, v___x_4593_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_4592_);
if (lean_obj_tag(v___x_4594_) == 0)
{
lean_object* v_a_4595_; lean_object* v___x_4597_; uint8_t v_isShared_4598_; uint8_t v_isSharedCheck_4625_; 
v_a_4595_ = lean_ctor_get(v___x_4594_, 0);
v_isSharedCheck_4625_ = !lean_is_exclusive(v___x_4594_);
if (v_isSharedCheck_4625_ == 0)
{
v___x_4597_ = v___x_4594_;
v_isShared_4598_ = v_isSharedCheck_4625_;
goto v_resetjp_4596_;
}
else
{
lean_inc(v_a_4595_);
lean_dec(v___x_4594_);
v___x_4597_ = lean_box(0);
v_isShared_4598_ = v_isSharedCheck_4625_;
goto v_resetjp_4596_;
}
v_resetjp_4596_:
{
lean_object* v_fst_4599_; lean_object* v___x_4601_; uint8_t v_isShared_4602_; uint8_t v_isSharedCheck_4623_; 
v_fst_4599_ = lean_ctor_get(v_a_4595_, 0);
v_isSharedCheck_4623_ = !lean_is_exclusive(v_a_4595_);
if (v_isSharedCheck_4623_ == 0)
{
lean_object* v_unused_4624_; 
v_unused_4624_ = lean_ctor_get(v_a_4595_, 1);
lean_dec(v_unused_4624_);
v___x_4601_ = v_a_4595_;
v_isShared_4602_ = v_isSharedCheck_4623_;
goto v_resetjp_4600_;
}
else
{
lean_inc(v_fst_4599_);
lean_dec(v_a_4595_);
v___x_4601_ = lean_box(0);
v_isShared_4602_ = v_isSharedCheck_4623_;
goto v_resetjp_4600_;
}
v_resetjp_4600_:
{
if (lean_obj_tag(v_fst_4599_) == 0)
{
lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4606_; 
lean_del_object(v___x_4597_);
v___x_4603_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4604_ = l_Lean_MessageData_ofName(v___x_4588_);
lean_inc_ref(v___x_4604_);
if (v_isShared_4602_ == 0)
{
lean_ctor_set_tag(v___x_4601_, 7);
lean_ctor_set(v___x_4601_, 1, v___x_4604_);
lean_ctor_set(v___x_4601_, 0, v___x_4603_);
v___x_4606_ = v___x_4601_;
goto v_reusejp_4605_;
}
else
{
lean_object* v_reuseFailAlloc_4618_; 
v_reuseFailAlloc_4618_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4618_, 0, v___x_4603_);
lean_ctor_set(v_reuseFailAlloc_4618_, 1, v___x_4604_);
v___x_4606_ = v_reuseFailAlloc_4618_;
goto v_reusejp_4605_;
}
v_reusejp_4605_:
{
lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; 
v___x_4607_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4608_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4608_, 0, v___x_4606_);
lean_ctor_set(v___x_4608_, 1, v___x_4607_);
v___x_4609_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_4610_ = l_Lean_indentD(v___x_4609_);
v___x_4611_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4611_, 0, v___x_4608_);
lean_ctor_set(v___x_4611_, 1, v___x_4610_);
v___x_4612_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4613_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4613_, 0, v___x_4611_);
lean_ctor_set(v___x_4613_, 1, v___x_4612_);
v___x_4614_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4614_, 0, v___x_4613_);
lean_ctor_set(v___x_4614_, 1, v___x_4604_);
v___x_4615_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_4616_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4616_, 0, v___x_4614_);
lean_ctor_set(v___x_4616_, 1, v___x_4615_);
v___x_4617_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4616_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_4617_;
}
}
else
{
lean_object* v_val_4619_; lean_object* v___x_4621_; 
lean_del_object(v___x_4601_);
lean_dec(v___x_4588_);
lean_dec(v_stx_2393_);
v_val_4619_ = lean_ctor_get(v_fst_4599_, 0);
lean_inc(v_val_4619_);
lean_dec_ref_known(v_fst_4599_, 1);
if (v_isShared_4598_ == 0)
{
lean_ctor_set(v___x_4597_, 0, v_val_4619_);
v___x_4621_ = v___x_4597_;
goto v_reusejp_4620_;
}
else
{
lean_object* v_reuseFailAlloc_4622_; 
v_reuseFailAlloc_4622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4622_, 0, v_val_4619_);
v___x_4621_ = v_reuseFailAlloc_4622_;
goto v_reusejp_4620_;
}
v_reusejp_4620_:
{
return v___x_4621_;
}
}
}
}
}
else
{
lean_object* v_a_4626_; lean_object* v___x_4628_; uint8_t v_isShared_4629_; uint8_t v_isSharedCheck_4633_; 
lean_dec(v___x_4588_);
lean_dec(v_stx_2393_);
v_a_4626_ = lean_ctor_get(v___x_4594_, 0);
v_isSharedCheck_4633_ = !lean_is_exclusive(v___x_4594_);
if (v_isSharedCheck_4633_ == 0)
{
v___x_4628_ = v___x_4594_;
v_isShared_4629_ = v_isSharedCheck_4633_;
goto v_resetjp_4627_;
}
else
{
lean_inc(v_a_4626_);
lean_dec(v___x_4594_);
v___x_4628_ = lean_box(0);
v_isShared_4629_ = v_isSharedCheck_4633_;
goto v_resetjp_4627_;
}
v_resetjp_4627_:
{
lean_object* v___x_4631_; 
if (v_isShared_4629_ == 0)
{
v___x_4631_ = v___x_4628_;
goto v_reusejp_4630_;
}
else
{
lean_object* v_reuseFailAlloc_4632_; 
v_reuseFailAlloc_4632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4632_, 0, v_a_4626_);
v___x_4631_ = v_reuseFailAlloc_4632_;
goto v_reusejp_4630_;
}
v_reusejp_4630_:
{
return v___x_4631_;
}
}
}
}
else
{
lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; 
v___x_4634_ = lean_unsigned_to_nat(5u);
v___x_4635_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4634_);
lean_dec(v_stx_2393_);
v___x_4636_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4635_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_4636_) == 0)
{
lean_object* v_a_4637_; lean_object* v___x_4639_; uint8_t v_isShared_4640_; uint8_t v_isSharedCheck_4645_; 
v_a_4637_ = lean_ctor_get(v___x_4636_, 0);
v_isSharedCheck_4645_ = !lean_is_exclusive(v___x_4636_);
if (v_isSharedCheck_4645_ == 0)
{
v___x_4639_ = v___x_4636_;
v_isShared_4640_ = v_isSharedCheck_4645_;
goto v_resetjp_4638_;
}
else
{
lean_inc(v_a_4637_);
lean_dec(v___x_4636_);
v___x_4639_ = lean_box(0);
v_isShared_4640_ = v_isSharedCheck_4645_;
goto v_resetjp_4638_;
}
v_resetjp_4638_:
{
lean_object* v___x_4641_; lean_object* v___x_4643_; 
v___x_4641_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_4637_);
if (v_isShared_4640_ == 0)
{
lean_ctor_set(v___x_4639_, 0, v___x_4641_);
v___x_4643_ = v___x_4639_;
goto v_reusejp_4642_;
}
else
{
lean_object* v_reuseFailAlloc_4644_; 
v_reuseFailAlloc_4644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4644_, 0, v___x_4641_);
v___x_4643_ = v_reuseFailAlloc_4644_;
goto v_reusejp_4642_;
}
v_reusejp_4642_:
{
return v___x_4643_;
}
}
}
else
{
return v___x_4636_;
}
}
}
else
{
v___y_4451_ = v_a_2394_;
v___y_4452_ = v_a_2395_;
v___y_4453_ = v_a_2396_;
v___y_4454_ = v_a_2397_;
v___y_4455_ = v_a_2398_;
v___y_4456_ = v_a_2399_;
goto v___jp_4450_;
}
}
else
{
lean_dec(v___x_4583_);
v___y_4451_ = v_a_2394_;
v___y_4452_ = v_a_2395_;
v___y_4453_ = v_a_2396_;
v___y_4454_ = v_a_2397_;
v___y_4455_ = v_a_2398_;
v___y_4456_ = v_a_2399_;
goto v___jp_4450_;
}
v___jp_4450_:
{
lean_object* v___x_4457_; lean_object* v___x_4458_; uint8_t v___x_4459_; 
v___x_4457_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4449_);
v___x_4458_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__90));
lean_inc(v___x_4457_);
v___x_4459_ = l_Lean_Syntax_isOfKind(v___x_4457_, v___x_4458_);
if (v___x_4459_ == 0)
{
lean_object* v___x_4460_; uint8_t v___x_4461_; 
lean_dec(v___x_4457_);
v___x_4460_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_4461_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_4460_);
if (v___x_4461_ == 0)
{
lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v_env_4464_; lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; 
lean_inc_n(v_stx_2393_, 2);
v___x_4462_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_4463_ = lean_st_ref_get(v___y_4456_);
v_env_4464_ = lean_ctor_get(v___x_4463_, 0);
lean_inc_ref(v_env_4464_);
lean_dec(v___x_4463_);
v___x_4465_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4466_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4465_, v_env_4464_, v___x_4462_);
v___x_4467_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4468_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_4466_, v___x_4467_, v___y_4451_, v___y_4452_, v___y_4453_, v___y_4454_, v___y_4455_, v___y_4456_);
lean_dec(v___x_4466_);
if (lean_obj_tag(v___x_4468_) == 0)
{
lean_object* v_a_4469_; lean_object* v___x_4471_; uint8_t v_isShared_4472_; uint8_t v_isSharedCheck_4499_; 
v_a_4469_ = lean_ctor_get(v___x_4468_, 0);
v_isSharedCheck_4499_ = !lean_is_exclusive(v___x_4468_);
if (v_isSharedCheck_4499_ == 0)
{
v___x_4471_ = v___x_4468_;
v_isShared_4472_ = v_isSharedCheck_4499_;
goto v_resetjp_4470_;
}
else
{
lean_inc(v_a_4469_);
lean_dec(v___x_4468_);
v___x_4471_ = lean_box(0);
v_isShared_4472_ = v_isSharedCheck_4499_;
goto v_resetjp_4470_;
}
v_resetjp_4470_:
{
lean_object* v_fst_4473_; lean_object* v___x_4475_; uint8_t v_isShared_4476_; uint8_t v_isSharedCheck_4497_; 
v_fst_4473_ = lean_ctor_get(v_a_4469_, 0);
v_isSharedCheck_4497_ = !lean_is_exclusive(v_a_4469_);
if (v_isSharedCheck_4497_ == 0)
{
lean_object* v_unused_4498_; 
v_unused_4498_ = lean_ctor_get(v_a_4469_, 1);
lean_dec(v_unused_4498_);
v___x_4475_ = v_a_4469_;
v_isShared_4476_ = v_isSharedCheck_4497_;
goto v_resetjp_4474_;
}
else
{
lean_inc(v_fst_4473_);
lean_dec(v_a_4469_);
v___x_4475_ = lean_box(0);
v_isShared_4476_ = v_isSharedCheck_4497_;
goto v_resetjp_4474_;
}
v_resetjp_4474_:
{
if (lean_obj_tag(v_fst_4473_) == 0)
{
lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4480_; 
lean_del_object(v___x_4471_);
v___x_4477_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4478_ = l_Lean_MessageData_ofName(v___x_4462_);
lean_inc_ref(v___x_4478_);
if (v_isShared_4476_ == 0)
{
lean_ctor_set_tag(v___x_4475_, 7);
lean_ctor_set(v___x_4475_, 1, v___x_4478_);
lean_ctor_set(v___x_4475_, 0, v___x_4477_);
v___x_4480_ = v___x_4475_;
goto v_reusejp_4479_;
}
else
{
lean_object* v_reuseFailAlloc_4492_; 
v_reuseFailAlloc_4492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4492_, 0, v___x_4477_);
lean_ctor_set(v_reuseFailAlloc_4492_, 1, v___x_4478_);
v___x_4480_ = v_reuseFailAlloc_4492_;
goto v_reusejp_4479_;
}
v_reusejp_4479_:
{
lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; 
v___x_4481_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4482_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4482_, 0, v___x_4480_);
lean_ctor_set(v___x_4482_, 1, v___x_4481_);
v___x_4483_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_4484_ = l_Lean_indentD(v___x_4483_);
v___x_4485_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4485_, 0, v___x_4482_);
lean_ctor_set(v___x_4485_, 1, v___x_4484_);
v___x_4486_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4487_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4487_, 0, v___x_4485_);
lean_ctor_set(v___x_4487_, 1, v___x_4486_);
v___x_4488_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4488_, 0, v___x_4487_);
lean_ctor_set(v___x_4488_, 1, v___x_4478_);
v___x_4489_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_4490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4490_, 0, v___x_4488_);
lean_ctor_set(v___x_4490_, 1, v___x_4489_);
v___x_4491_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4490_, v___y_4451_, v___y_4452_, v___y_4453_, v___y_4454_, v___y_4455_, v___y_4456_);
return v___x_4491_;
}
}
else
{
lean_object* v_val_4493_; lean_object* v___x_4495_; 
lean_del_object(v___x_4475_);
lean_dec(v___x_4462_);
lean_dec(v_stx_2393_);
v_val_4493_ = lean_ctor_get(v_fst_4473_, 0);
lean_inc(v_val_4493_);
lean_dec_ref_known(v_fst_4473_, 1);
if (v_isShared_4472_ == 0)
{
lean_ctor_set(v___x_4471_, 0, v_val_4493_);
v___x_4495_ = v___x_4471_;
goto v_reusejp_4494_;
}
else
{
lean_object* v_reuseFailAlloc_4496_; 
v_reuseFailAlloc_4496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4496_, 0, v_val_4493_);
v___x_4495_ = v_reuseFailAlloc_4496_;
goto v_reusejp_4494_;
}
v_reusejp_4494_:
{
return v___x_4495_;
}
}
}
}
}
else
{
lean_object* v_a_4500_; lean_object* v___x_4502_; uint8_t v_isShared_4503_; uint8_t v_isSharedCheck_4507_; 
lean_dec(v___x_4462_);
lean_dec(v_stx_2393_);
v_a_4500_ = lean_ctor_get(v___x_4468_, 0);
v_isSharedCheck_4507_ = !lean_is_exclusive(v___x_4468_);
if (v_isSharedCheck_4507_ == 0)
{
v___x_4502_ = v___x_4468_;
v_isShared_4503_ = v_isSharedCheck_4507_;
goto v_resetjp_4501_;
}
else
{
lean_inc(v_a_4500_);
lean_dec(v___x_4468_);
v___x_4502_ = lean_box(0);
v_isShared_4503_ = v_isSharedCheck_4507_;
goto v_resetjp_4501_;
}
v_resetjp_4501_:
{
lean_object* v___x_4505_; 
if (v_isShared_4503_ == 0)
{
v___x_4505_ = v___x_4502_;
goto v_reusejp_4504_;
}
else
{
lean_object* v_reuseFailAlloc_4506_; 
v_reuseFailAlloc_4506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4506_, 0, v_a_4500_);
v___x_4505_ = v_reuseFailAlloc_4506_;
goto v_reusejp_4504_;
}
v_reusejp_4504_:
{
return v___x_4505_;
}
}
}
}
else
{
lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; 
v___x_4508_ = lean_unsigned_to_nat(5u);
v___x_4509_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4508_);
lean_dec(v_stx_2393_);
v___x_4510_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4509_, v___y_4451_, v___y_4452_, v___y_4453_, v___y_4454_, v___y_4455_, v___y_4456_);
if (lean_obj_tag(v___x_4510_) == 0)
{
lean_object* v_a_4511_; lean_object* v___x_4513_; uint8_t v_isShared_4514_; uint8_t v_isSharedCheck_4519_; 
v_a_4511_ = lean_ctor_get(v___x_4510_, 0);
v_isSharedCheck_4519_ = !lean_is_exclusive(v___x_4510_);
if (v_isSharedCheck_4519_ == 0)
{
v___x_4513_ = v___x_4510_;
v_isShared_4514_ = v_isSharedCheck_4519_;
goto v_resetjp_4512_;
}
else
{
lean_inc(v_a_4511_);
lean_dec(v___x_4510_);
v___x_4513_ = lean_box(0);
v_isShared_4514_ = v_isSharedCheck_4519_;
goto v_resetjp_4512_;
}
v_resetjp_4512_:
{
lean_object* v___x_4515_; lean_object* v___x_4517_; 
v___x_4515_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_4511_);
if (v_isShared_4514_ == 0)
{
lean_ctor_set(v___x_4513_, 0, v___x_4515_);
v___x_4517_ = v___x_4513_;
goto v_reusejp_4516_;
}
else
{
lean_object* v_reuseFailAlloc_4518_; 
v_reuseFailAlloc_4518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4518_, 0, v___x_4515_);
v___x_4517_ = v_reuseFailAlloc_4518_;
goto v_reusejp_4516_;
}
v_reusejp_4516_:
{
return v___x_4517_;
}
}
}
else
{
return v___x_4510_;
}
}
}
else
{
lean_object* v___x_4520_; uint8_t v___x_4521_; 
v___x_4520_ = l_Lean_Syntax_getArg(v___x_4457_, v___x_4449_);
lean_dec(v___x_4457_);
v___x_4521_ = l_Lean_Syntax_isNone(v___x_4520_);
if (v___x_4521_ == 0)
{
uint8_t v___x_4522_; 
v___x_4522_ = l_Lean_Syntax_matchesNull(v___x_4520_, v___x_4449_);
if (v___x_4522_ == 0)
{
lean_object* v___x_4523_; uint8_t v___x_4524_; 
v___x_4523_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_4524_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_4523_);
if (v___x_4524_ == 0)
{
lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v_env_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; 
lean_inc_n(v_stx_2393_, 2);
v___x_4525_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_4526_ = lean_st_ref_get(v___y_4456_);
v_env_4527_ = lean_ctor_get(v___x_4526_, 0);
lean_inc_ref(v_env_4527_);
lean_dec(v___x_4526_);
v___x_4528_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4529_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4528_, v_env_4527_, v___x_4525_);
v___x_4530_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4531_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_4529_, v___x_4530_, v___y_4451_, v___y_4452_, v___y_4453_, v___y_4454_, v___y_4455_, v___y_4456_);
lean_dec(v___x_4529_);
if (lean_obj_tag(v___x_4531_) == 0)
{
lean_object* v_a_4532_; lean_object* v___x_4534_; uint8_t v_isShared_4535_; uint8_t v_isSharedCheck_4562_; 
v_a_4532_ = lean_ctor_get(v___x_4531_, 0);
v_isSharedCheck_4562_ = !lean_is_exclusive(v___x_4531_);
if (v_isSharedCheck_4562_ == 0)
{
v___x_4534_ = v___x_4531_;
v_isShared_4535_ = v_isSharedCheck_4562_;
goto v_resetjp_4533_;
}
else
{
lean_inc(v_a_4532_);
lean_dec(v___x_4531_);
v___x_4534_ = lean_box(0);
v_isShared_4535_ = v_isSharedCheck_4562_;
goto v_resetjp_4533_;
}
v_resetjp_4533_:
{
lean_object* v_fst_4536_; lean_object* v___x_4538_; uint8_t v_isShared_4539_; uint8_t v_isSharedCheck_4560_; 
v_fst_4536_ = lean_ctor_get(v_a_4532_, 0);
v_isSharedCheck_4560_ = !lean_is_exclusive(v_a_4532_);
if (v_isSharedCheck_4560_ == 0)
{
lean_object* v_unused_4561_; 
v_unused_4561_ = lean_ctor_get(v_a_4532_, 1);
lean_dec(v_unused_4561_);
v___x_4538_ = v_a_4532_;
v_isShared_4539_ = v_isSharedCheck_4560_;
goto v_resetjp_4537_;
}
else
{
lean_inc(v_fst_4536_);
lean_dec(v_a_4532_);
v___x_4538_ = lean_box(0);
v_isShared_4539_ = v_isSharedCheck_4560_;
goto v_resetjp_4537_;
}
v_resetjp_4537_:
{
if (lean_obj_tag(v_fst_4536_) == 0)
{
lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4543_; 
lean_del_object(v___x_4534_);
v___x_4540_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4541_ = l_Lean_MessageData_ofName(v___x_4525_);
lean_inc_ref(v___x_4541_);
if (v_isShared_4539_ == 0)
{
lean_ctor_set_tag(v___x_4538_, 7);
lean_ctor_set(v___x_4538_, 1, v___x_4541_);
lean_ctor_set(v___x_4538_, 0, v___x_4540_);
v___x_4543_ = v___x_4538_;
goto v_reusejp_4542_;
}
else
{
lean_object* v_reuseFailAlloc_4555_; 
v_reuseFailAlloc_4555_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4555_, 0, v___x_4540_);
lean_ctor_set(v_reuseFailAlloc_4555_, 1, v___x_4541_);
v___x_4543_ = v_reuseFailAlloc_4555_;
goto v_reusejp_4542_;
}
v_reusejp_4542_:
{
lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; 
v___x_4544_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4545_, 0, v___x_4543_);
lean_ctor_set(v___x_4545_, 1, v___x_4544_);
v___x_4546_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_4547_ = l_Lean_indentD(v___x_4546_);
v___x_4548_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4548_, 0, v___x_4545_);
lean_ctor_set(v___x_4548_, 1, v___x_4547_);
v___x_4549_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4550_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4550_, 0, v___x_4548_);
lean_ctor_set(v___x_4550_, 1, v___x_4549_);
v___x_4551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4551_, 0, v___x_4550_);
lean_ctor_set(v___x_4551_, 1, v___x_4541_);
v___x_4552_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_4553_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4553_, 0, v___x_4551_);
lean_ctor_set(v___x_4553_, 1, v___x_4552_);
v___x_4554_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4553_, v___y_4451_, v___y_4452_, v___y_4453_, v___y_4454_, v___y_4455_, v___y_4456_);
return v___x_4554_;
}
}
else
{
lean_object* v_val_4556_; lean_object* v___x_4558_; 
lean_del_object(v___x_4538_);
lean_dec(v___x_4525_);
lean_dec(v_stx_2393_);
v_val_4556_ = lean_ctor_get(v_fst_4536_, 0);
lean_inc(v_val_4556_);
lean_dec_ref_known(v_fst_4536_, 1);
if (v_isShared_4535_ == 0)
{
lean_ctor_set(v___x_4534_, 0, v_val_4556_);
v___x_4558_ = v___x_4534_;
goto v_reusejp_4557_;
}
else
{
lean_object* v_reuseFailAlloc_4559_; 
v_reuseFailAlloc_4559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4559_, 0, v_val_4556_);
v___x_4558_ = v_reuseFailAlloc_4559_;
goto v_reusejp_4557_;
}
v_reusejp_4557_:
{
return v___x_4558_;
}
}
}
}
}
else
{
lean_object* v_a_4563_; lean_object* v___x_4565_; uint8_t v_isShared_4566_; uint8_t v_isSharedCheck_4570_; 
lean_dec(v___x_4525_);
lean_dec(v_stx_2393_);
v_a_4563_ = lean_ctor_get(v___x_4531_, 0);
v_isSharedCheck_4570_ = !lean_is_exclusive(v___x_4531_);
if (v_isSharedCheck_4570_ == 0)
{
v___x_4565_ = v___x_4531_;
v_isShared_4566_ = v_isSharedCheck_4570_;
goto v_resetjp_4564_;
}
else
{
lean_inc(v_a_4563_);
lean_dec(v___x_4531_);
v___x_4565_ = lean_box(0);
v_isShared_4566_ = v_isSharedCheck_4570_;
goto v_resetjp_4564_;
}
v_resetjp_4564_:
{
lean_object* v___x_4568_; 
if (v_isShared_4566_ == 0)
{
v___x_4568_ = v___x_4565_;
goto v_reusejp_4567_;
}
else
{
lean_object* v_reuseFailAlloc_4569_; 
v_reuseFailAlloc_4569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4569_, 0, v_a_4563_);
v___x_4568_ = v_reuseFailAlloc_4569_;
goto v_reusejp_4567_;
}
v_reusejp_4567_:
{
return v___x_4568_;
}
}
}
}
else
{
lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; 
v___x_4571_ = lean_unsigned_to_nat(5u);
v___x_4572_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4571_);
lean_dec(v_stx_2393_);
v___x_4573_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4572_, v___y_4451_, v___y_4452_, v___y_4453_, v___y_4454_, v___y_4455_, v___y_4456_);
if (lean_obj_tag(v___x_4573_) == 0)
{
lean_object* v_a_4574_; lean_object* v___x_4576_; uint8_t v_isShared_4577_; uint8_t v_isSharedCheck_4582_; 
v_a_4574_ = lean_ctor_get(v___x_4573_, 0);
v_isSharedCheck_4582_ = !lean_is_exclusive(v___x_4573_);
if (v_isSharedCheck_4582_ == 0)
{
v___x_4576_ = v___x_4573_;
v_isShared_4577_ = v_isSharedCheck_4582_;
goto v_resetjp_4575_;
}
else
{
lean_inc(v_a_4574_);
lean_dec(v___x_4573_);
v___x_4576_ = lean_box(0);
v_isShared_4577_ = v_isSharedCheck_4582_;
goto v_resetjp_4575_;
}
v_resetjp_4575_:
{
lean_object* v___x_4578_; lean_object* v___x_4580_; 
v___x_4578_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_4574_);
if (v_isShared_4577_ == 0)
{
lean_ctor_set(v___x_4576_, 0, v___x_4578_);
v___x_4580_ = v___x_4576_;
goto v_reusejp_4579_;
}
else
{
lean_object* v_reuseFailAlloc_4581_; 
v_reuseFailAlloc_4581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4581_, 0, v___x_4578_);
v___x_4580_ = v_reuseFailAlloc_4581_;
goto v_reusejp_4579_;
}
v_reusejp_4579_:
{
return v___x_4580_;
}
}
}
else
{
return v___x_4573_;
}
}
}
else
{
lean_dec(v_stx_2393_);
goto v___jp_2438_;
}
}
else
{
lean_dec(v___x_4520_);
lean_dec(v_stx_2393_);
goto v___jp_2438_;
}
}
}
}
}
}
else
{
lean_object* v___x_4646_; lean_object* v___x_4647_; uint8_t v___x_4648_; 
v___x_4646_ = lean_unsigned_to_nat(1u);
v___x_4647_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4646_);
v___x_4648_ = l_Lean_Syntax_isNone(v___x_4647_);
if (v___x_4648_ == 0)
{
uint8_t v___x_4649_; 
v___x_4649_ = l_Lean_Syntax_matchesNull(v___x_4647_, v___x_4646_);
if (v___x_4649_ == 0)
{
lean_object* v___x_4650_; uint8_t v___x_4651_; 
v___x_4650_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_4651_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_4650_);
if (v___x_4651_ == 0)
{
lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v_env_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; 
lean_inc_n(v_stx_2393_, 2);
v___x_4652_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_4653_ = lean_st_ref_get(v_a_2399_);
v_env_4654_ = lean_ctor_get(v___x_4653_, 0);
lean_inc_ref(v_env_4654_);
lean_dec(v___x_4653_);
v___x_4655_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4656_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4655_, v_env_4654_, v___x_4652_);
v___x_4657_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4658_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_4656_, v___x_4657_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_4656_);
if (lean_obj_tag(v___x_4658_) == 0)
{
lean_object* v_a_4659_; lean_object* v___x_4661_; uint8_t v_isShared_4662_; uint8_t v_isSharedCheck_4689_; 
v_a_4659_ = lean_ctor_get(v___x_4658_, 0);
v_isSharedCheck_4689_ = !lean_is_exclusive(v___x_4658_);
if (v_isSharedCheck_4689_ == 0)
{
v___x_4661_ = v___x_4658_;
v_isShared_4662_ = v_isSharedCheck_4689_;
goto v_resetjp_4660_;
}
else
{
lean_inc(v_a_4659_);
lean_dec(v___x_4658_);
v___x_4661_ = lean_box(0);
v_isShared_4662_ = v_isSharedCheck_4689_;
goto v_resetjp_4660_;
}
v_resetjp_4660_:
{
lean_object* v_fst_4663_; lean_object* v___x_4665_; uint8_t v_isShared_4666_; uint8_t v_isSharedCheck_4687_; 
v_fst_4663_ = lean_ctor_get(v_a_4659_, 0);
v_isSharedCheck_4687_ = !lean_is_exclusive(v_a_4659_);
if (v_isSharedCheck_4687_ == 0)
{
lean_object* v_unused_4688_; 
v_unused_4688_ = lean_ctor_get(v_a_4659_, 1);
lean_dec(v_unused_4688_);
v___x_4665_ = v_a_4659_;
v_isShared_4666_ = v_isSharedCheck_4687_;
goto v_resetjp_4664_;
}
else
{
lean_inc(v_fst_4663_);
lean_dec(v_a_4659_);
v___x_4665_ = lean_box(0);
v_isShared_4666_ = v_isSharedCheck_4687_;
goto v_resetjp_4664_;
}
v_resetjp_4664_:
{
if (lean_obj_tag(v_fst_4663_) == 0)
{
lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4670_; 
lean_del_object(v___x_4661_);
v___x_4667_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4668_ = l_Lean_MessageData_ofName(v___x_4652_);
lean_inc_ref(v___x_4668_);
if (v_isShared_4666_ == 0)
{
lean_ctor_set_tag(v___x_4665_, 7);
lean_ctor_set(v___x_4665_, 1, v___x_4668_);
lean_ctor_set(v___x_4665_, 0, v___x_4667_);
v___x_4670_ = v___x_4665_;
goto v_reusejp_4669_;
}
else
{
lean_object* v_reuseFailAlloc_4682_; 
v_reuseFailAlloc_4682_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4682_, 0, v___x_4667_);
lean_ctor_set(v_reuseFailAlloc_4682_, 1, v___x_4668_);
v___x_4670_ = v_reuseFailAlloc_4682_;
goto v_reusejp_4669_;
}
v_reusejp_4669_:
{
lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; 
v___x_4671_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4672_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4672_, 0, v___x_4670_);
lean_ctor_set(v___x_4672_, 1, v___x_4671_);
v___x_4673_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_4674_ = l_Lean_indentD(v___x_4673_);
v___x_4675_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4675_, 0, v___x_4672_);
lean_ctor_set(v___x_4675_, 1, v___x_4674_);
v___x_4676_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4677_, 0, v___x_4675_);
lean_ctor_set(v___x_4677_, 1, v___x_4676_);
v___x_4678_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4678_, 0, v___x_4677_);
lean_ctor_set(v___x_4678_, 1, v___x_4668_);
v___x_4679_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_4680_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4680_, 0, v___x_4678_);
lean_ctor_set(v___x_4680_, 1, v___x_4679_);
v___x_4681_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4680_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_4681_;
}
}
else
{
lean_object* v_val_4683_; lean_object* v___x_4685_; 
lean_del_object(v___x_4665_);
lean_dec(v___x_4652_);
lean_dec(v_stx_2393_);
v_val_4683_ = lean_ctor_get(v_fst_4663_, 0);
lean_inc(v_val_4683_);
lean_dec_ref_known(v_fst_4663_, 1);
if (v_isShared_4662_ == 0)
{
lean_ctor_set(v___x_4661_, 0, v_val_4683_);
v___x_4685_ = v___x_4661_;
goto v_reusejp_4684_;
}
else
{
lean_object* v_reuseFailAlloc_4686_; 
v_reuseFailAlloc_4686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4686_, 0, v_val_4683_);
v___x_4685_ = v_reuseFailAlloc_4686_;
goto v_reusejp_4684_;
}
v_reusejp_4684_:
{
return v___x_4685_;
}
}
}
}
}
else
{
lean_object* v_a_4690_; lean_object* v___x_4692_; uint8_t v_isShared_4693_; uint8_t v_isSharedCheck_4697_; 
lean_dec(v___x_4652_);
lean_dec(v_stx_2393_);
v_a_4690_ = lean_ctor_get(v___x_4658_, 0);
v_isSharedCheck_4697_ = !lean_is_exclusive(v___x_4658_);
if (v_isSharedCheck_4697_ == 0)
{
v___x_4692_ = v___x_4658_;
v_isShared_4693_ = v_isSharedCheck_4697_;
goto v_resetjp_4691_;
}
else
{
lean_inc(v_a_4690_);
lean_dec(v___x_4658_);
v___x_4692_ = lean_box(0);
v_isShared_4693_ = v_isSharedCheck_4697_;
goto v_resetjp_4691_;
}
v_resetjp_4691_:
{
lean_object* v___x_4695_; 
if (v_isShared_4693_ == 0)
{
v___x_4695_ = v___x_4692_;
goto v_reusejp_4694_;
}
else
{
lean_object* v_reuseFailAlloc_4696_; 
v_reuseFailAlloc_4696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4696_, 0, v_a_4690_);
v___x_4695_ = v_reuseFailAlloc_4696_;
goto v_reusejp_4694_;
}
v_reusejp_4694_:
{
return v___x_4695_;
}
}
}
}
else
{
lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; 
v___x_4698_ = lean_unsigned_to_nat(5u);
v___x_4699_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4698_);
lean_dec(v_stx_2393_);
v___x_4700_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4699_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_4700_) == 0)
{
lean_object* v_a_4701_; lean_object* v___x_4703_; uint8_t v_isShared_4704_; uint8_t v_isSharedCheck_4709_; 
v_a_4701_ = lean_ctor_get(v___x_4700_, 0);
v_isSharedCheck_4709_ = !lean_is_exclusive(v___x_4700_);
if (v_isSharedCheck_4709_ == 0)
{
v___x_4703_ = v___x_4700_;
v_isShared_4704_ = v_isSharedCheck_4709_;
goto v_resetjp_4702_;
}
else
{
lean_inc(v_a_4701_);
lean_dec(v___x_4700_);
v___x_4703_ = lean_box(0);
v_isShared_4704_ = v_isSharedCheck_4709_;
goto v_resetjp_4702_;
}
v_resetjp_4702_:
{
lean_object* v___x_4705_; lean_object* v___x_4707_; 
v___x_4705_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_4701_);
if (v_isShared_4704_ == 0)
{
lean_ctor_set(v___x_4703_, 0, v___x_4705_);
v___x_4707_ = v___x_4703_;
goto v_reusejp_4706_;
}
else
{
lean_object* v_reuseFailAlloc_4708_; 
v_reuseFailAlloc_4708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4708_, 0, v___x_4705_);
v___x_4707_ = v_reuseFailAlloc_4708_;
goto v_reusejp_4706_;
}
v_reusejp_4706_:
{
return v___x_4707_;
}
}
}
else
{
return v___x_4700_;
}
}
}
else
{
v___y_2712_ = v_a_2394_;
v___y_2713_ = v_a_2395_;
v___y_2714_ = v_a_2396_;
v___y_2715_ = v_a_2397_;
v___y_2716_ = v_a_2398_;
v___y_2717_ = v_a_2399_;
goto v___jp_2711_;
}
}
else
{
lean_dec(v___x_4647_);
v___y_2712_ = v_a_2394_;
v___y_2713_ = v_a_2395_;
v___y_2714_ = v_a_2396_;
v___y_2715_ = v_a_2397_;
v___y_2716_ = v_a_2398_;
v___y_2717_ = v_a_2399_;
goto v___jp_2711_;
}
}
}
else
{
lean_object* v___x_4710_; lean_object* v___x_4711_; uint8_t v___x_4712_; 
v___x_4710_ = lean_unsigned_to_nat(1u);
v___x_4711_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4710_);
v___x_4712_ = l_Lean_Syntax_isNone(v___x_4711_);
if (v___x_4712_ == 0)
{
uint8_t v___x_4713_; 
v___x_4713_ = l_Lean_Syntax_matchesNull(v___x_4711_, v___x_4710_);
if (v___x_4713_ == 0)
{
lean_object* v___x_4714_; uint8_t v___x_4715_; 
v___x_4714_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_4715_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_4714_);
if (v___x_4715_ == 0)
{
lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v_env_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; 
lean_inc_n(v_stx_2393_, 2);
v___x_4716_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_4717_ = lean_st_ref_get(v_a_2399_);
v_env_4718_ = lean_ctor_get(v___x_4717_, 0);
lean_inc_ref(v_env_4718_);
lean_dec(v___x_4717_);
v___x_4719_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4720_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4719_, v_env_4718_, v___x_4716_);
v___x_4721_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4722_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_4720_, v___x_4721_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_4720_);
if (lean_obj_tag(v___x_4722_) == 0)
{
lean_object* v_a_4723_; lean_object* v___x_4725_; uint8_t v_isShared_4726_; uint8_t v_isSharedCheck_4753_; 
v_a_4723_ = lean_ctor_get(v___x_4722_, 0);
v_isSharedCheck_4753_ = !lean_is_exclusive(v___x_4722_);
if (v_isSharedCheck_4753_ == 0)
{
v___x_4725_ = v___x_4722_;
v_isShared_4726_ = v_isSharedCheck_4753_;
goto v_resetjp_4724_;
}
else
{
lean_inc(v_a_4723_);
lean_dec(v___x_4722_);
v___x_4725_ = lean_box(0);
v_isShared_4726_ = v_isSharedCheck_4753_;
goto v_resetjp_4724_;
}
v_resetjp_4724_:
{
lean_object* v_fst_4727_; lean_object* v___x_4729_; uint8_t v_isShared_4730_; uint8_t v_isSharedCheck_4751_; 
v_fst_4727_ = lean_ctor_get(v_a_4723_, 0);
v_isSharedCheck_4751_ = !lean_is_exclusive(v_a_4723_);
if (v_isSharedCheck_4751_ == 0)
{
lean_object* v_unused_4752_; 
v_unused_4752_ = lean_ctor_get(v_a_4723_, 1);
lean_dec(v_unused_4752_);
v___x_4729_ = v_a_4723_;
v_isShared_4730_ = v_isSharedCheck_4751_;
goto v_resetjp_4728_;
}
else
{
lean_inc(v_fst_4727_);
lean_dec(v_a_4723_);
v___x_4729_ = lean_box(0);
v_isShared_4730_ = v_isSharedCheck_4751_;
goto v_resetjp_4728_;
}
v_resetjp_4728_:
{
if (lean_obj_tag(v_fst_4727_) == 0)
{
lean_object* v___x_4731_; lean_object* v___x_4732_; lean_object* v___x_4734_; 
lean_del_object(v___x_4725_);
v___x_4731_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4732_ = l_Lean_MessageData_ofName(v___x_4716_);
lean_inc_ref(v___x_4732_);
if (v_isShared_4730_ == 0)
{
lean_ctor_set_tag(v___x_4729_, 7);
lean_ctor_set(v___x_4729_, 1, v___x_4732_);
lean_ctor_set(v___x_4729_, 0, v___x_4731_);
v___x_4734_ = v___x_4729_;
goto v_reusejp_4733_;
}
else
{
lean_object* v_reuseFailAlloc_4746_; 
v_reuseFailAlloc_4746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4746_, 0, v___x_4731_);
lean_ctor_set(v_reuseFailAlloc_4746_, 1, v___x_4732_);
v___x_4734_ = v_reuseFailAlloc_4746_;
goto v_reusejp_4733_;
}
v_reusejp_4733_:
{
lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; 
v___x_4735_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4736_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4736_, 0, v___x_4734_);
lean_ctor_set(v___x_4736_, 1, v___x_4735_);
v___x_4737_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_4738_ = l_Lean_indentD(v___x_4737_);
v___x_4739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4739_, 0, v___x_4736_);
lean_ctor_set(v___x_4739_, 1, v___x_4738_);
v___x_4740_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4741_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4741_, 0, v___x_4739_);
lean_ctor_set(v___x_4741_, 1, v___x_4740_);
v___x_4742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4742_, 0, v___x_4741_);
lean_ctor_set(v___x_4742_, 1, v___x_4732_);
v___x_4743_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_4744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4744_, 0, v___x_4742_);
lean_ctor_set(v___x_4744_, 1, v___x_4743_);
v___x_4745_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4744_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_4745_;
}
}
else
{
lean_object* v_val_4747_; lean_object* v___x_4749_; 
lean_del_object(v___x_4729_);
lean_dec(v___x_4716_);
lean_dec(v_stx_2393_);
v_val_4747_ = lean_ctor_get(v_fst_4727_, 0);
lean_inc(v_val_4747_);
lean_dec_ref_known(v_fst_4727_, 1);
if (v_isShared_4726_ == 0)
{
lean_ctor_set(v___x_4725_, 0, v_val_4747_);
v___x_4749_ = v___x_4725_;
goto v_reusejp_4748_;
}
else
{
lean_object* v_reuseFailAlloc_4750_; 
v_reuseFailAlloc_4750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4750_, 0, v_val_4747_);
v___x_4749_ = v_reuseFailAlloc_4750_;
goto v_reusejp_4748_;
}
v_reusejp_4748_:
{
return v___x_4749_;
}
}
}
}
}
else
{
lean_object* v_a_4754_; lean_object* v___x_4756_; uint8_t v_isShared_4757_; uint8_t v_isSharedCheck_4761_; 
lean_dec(v___x_4716_);
lean_dec(v_stx_2393_);
v_a_4754_ = lean_ctor_get(v___x_4722_, 0);
v_isSharedCheck_4761_ = !lean_is_exclusive(v___x_4722_);
if (v_isSharedCheck_4761_ == 0)
{
v___x_4756_ = v___x_4722_;
v_isShared_4757_ = v_isSharedCheck_4761_;
goto v_resetjp_4755_;
}
else
{
lean_inc(v_a_4754_);
lean_dec(v___x_4722_);
v___x_4756_ = lean_box(0);
v_isShared_4757_ = v_isSharedCheck_4761_;
goto v_resetjp_4755_;
}
v_resetjp_4755_:
{
lean_object* v___x_4759_; 
if (v_isShared_4757_ == 0)
{
v___x_4759_ = v___x_4756_;
goto v_reusejp_4758_;
}
else
{
lean_object* v_reuseFailAlloc_4760_; 
v_reuseFailAlloc_4760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4760_, 0, v_a_4754_);
v___x_4759_ = v_reuseFailAlloc_4760_;
goto v_reusejp_4758_;
}
v_reusejp_4758_:
{
return v___x_4759_;
}
}
}
}
else
{
lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; 
v___x_4762_ = lean_unsigned_to_nat(5u);
v___x_4763_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4762_);
lean_dec(v_stx_2393_);
v___x_4764_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4763_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_4764_) == 0)
{
lean_object* v_a_4765_; lean_object* v___x_4767_; uint8_t v_isShared_4768_; uint8_t v_isSharedCheck_4773_; 
v_a_4765_ = lean_ctor_get(v___x_4764_, 0);
v_isSharedCheck_4773_ = !lean_is_exclusive(v___x_4764_);
if (v_isSharedCheck_4773_ == 0)
{
v___x_4767_ = v___x_4764_;
v_isShared_4768_ = v_isSharedCheck_4773_;
goto v_resetjp_4766_;
}
else
{
lean_inc(v_a_4765_);
lean_dec(v___x_4764_);
v___x_4767_ = lean_box(0);
v_isShared_4768_ = v_isSharedCheck_4773_;
goto v_resetjp_4766_;
}
v_resetjp_4766_:
{
lean_object* v___x_4769_; lean_object* v___x_4771_; 
v___x_4769_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_4765_);
if (v_isShared_4768_ == 0)
{
lean_ctor_set(v___x_4767_, 0, v___x_4769_);
v___x_4771_ = v___x_4767_;
goto v_reusejp_4770_;
}
else
{
lean_object* v_reuseFailAlloc_4772_; 
v_reuseFailAlloc_4772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4772_, 0, v___x_4769_);
v___x_4771_ = v_reuseFailAlloc_4772_;
goto v_reusejp_4770_;
}
v_reusejp_4770_:
{
return v___x_4771_;
}
}
}
else
{
return v___x_4764_;
}
}
}
else
{
v___y_2469_ = v_a_2394_;
v___y_2470_ = v_a_2395_;
v___y_2471_ = v_a_2396_;
v___y_2472_ = v_a_2397_;
v___y_2473_ = v_a_2398_;
v___y_2474_ = v_a_2399_;
goto v___jp_2468_;
}
}
else
{
lean_dec(v___x_4711_);
v___y_2469_ = v_a_2394_;
v___y_2470_ = v_a_2395_;
v___y_2471_ = v_a_2396_;
v___y_2472_ = v_a_2397_;
v___y_2473_ = v_a_2398_;
v___y_2474_ = v_a_2399_;
goto v___jp_2468_;
}
}
v___jp_2711_:
{
lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; uint8_t v___x_2721_; 
v___x_2718_ = lean_unsigned_to_nat(2u);
v___x_2719_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2718_);
v___x_2720_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
v___x_2721_ = l_Lean_Syntax_isOfKind(v___x_2719_, v___x_2720_);
if (v___x_2721_ == 0)
{
lean_object* v___x_2722_; uint8_t v___x_2723_; 
v___x_2722_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_2723_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2722_);
if (v___x_2723_ == 0)
{
lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v_env_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; 
lean_inc_n(v_stx_2393_, 2);
v___x_2724_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_2725_ = lean_st_ref_get(v___y_2717_);
v_env_2726_ = lean_ctor_get(v___x_2725_, 0);
lean_inc_ref(v_env_2726_);
lean_dec(v___x_2725_);
v___x_2727_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2728_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2727_, v_env_2726_, v___x_2724_);
v___x_2729_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2730_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_2728_, v___x_2729_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_);
lean_dec(v___x_2728_);
if (lean_obj_tag(v___x_2730_) == 0)
{
lean_object* v_a_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2761_; 
v_a_2731_ = lean_ctor_get(v___x_2730_, 0);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___x_2730_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2733_ = v___x_2730_;
v_isShared_2734_ = v_isSharedCheck_2761_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_a_2731_);
lean_dec(v___x_2730_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2761_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v_fst_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2759_; 
v_fst_2735_ = lean_ctor_get(v_a_2731_, 0);
v_isSharedCheck_2759_ = !lean_is_exclusive(v_a_2731_);
if (v_isSharedCheck_2759_ == 0)
{
lean_object* v_unused_2760_; 
v_unused_2760_ = lean_ctor_get(v_a_2731_, 1);
lean_dec(v_unused_2760_);
v___x_2737_ = v_a_2731_;
v_isShared_2738_ = v_isSharedCheck_2759_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_fst_2735_);
lean_dec(v_a_2731_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2759_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
if (lean_obj_tag(v_fst_2735_) == 0)
{
lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2742_; 
lean_del_object(v___x_2733_);
v___x_2739_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2740_ = l_Lean_MessageData_ofName(v___x_2724_);
lean_inc_ref(v___x_2740_);
if (v_isShared_2738_ == 0)
{
lean_ctor_set_tag(v___x_2737_, 7);
lean_ctor_set(v___x_2737_, 1, v___x_2740_);
lean_ctor_set(v___x_2737_, 0, v___x_2739_);
v___x_2742_ = v___x_2737_;
goto v_reusejp_2741_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v___x_2739_);
lean_ctor_set(v_reuseFailAlloc_2754_, 1, v___x_2740_);
v___x_2742_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2741_;
}
v_reusejp_2741_:
{
lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2743_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2742_);
lean_ctor_set(v___x_2744_, 1, v___x_2743_);
v___x_2745_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_2746_ = l_Lean_indentD(v___x_2745_);
v___x_2747_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2747_, 0, v___x_2744_);
lean_ctor_set(v___x_2747_, 1, v___x_2746_);
v___x_2748_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2749_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2749_, 0, v___x_2747_);
lean_ctor_set(v___x_2749_, 1, v___x_2748_);
v___x_2750_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2749_);
lean_ctor_set(v___x_2750_, 1, v___x_2740_);
v___x_2751_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_2752_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2752_, 0, v___x_2750_);
lean_ctor_set(v___x_2752_, 1, v___x_2751_);
v___x_2753_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2752_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_);
return v___x_2753_;
}
}
else
{
lean_object* v_val_2755_; lean_object* v___x_2757_; 
lean_del_object(v___x_2737_);
lean_dec(v___x_2724_);
lean_dec(v_stx_2393_);
v_val_2755_ = lean_ctor_get(v_fst_2735_, 0);
lean_inc(v_val_2755_);
lean_dec_ref_known(v_fst_2735_, 1);
if (v_isShared_2734_ == 0)
{
lean_ctor_set(v___x_2733_, 0, v_val_2755_);
v___x_2757_ = v___x_2733_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v_val_2755_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
return v___x_2757_;
}
}
}
}
}
else
{
lean_object* v_a_2762_; lean_object* v___x_2764_; uint8_t v_isShared_2765_; uint8_t v_isSharedCheck_2769_; 
lean_dec(v___x_2724_);
lean_dec(v_stx_2393_);
v_a_2762_ = lean_ctor_get(v___x_2730_, 0);
v_isSharedCheck_2769_ = !lean_is_exclusive(v___x_2730_);
if (v_isSharedCheck_2769_ == 0)
{
v___x_2764_ = v___x_2730_;
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
else
{
lean_inc(v_a_2762_);
lean_dec(v___x_2730_);
v___x_2764_ = lean_box(0);
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
v_resetjp_2763_:
{
lean_object* v___x_2767_; 
if (v_isShared_2765_ == 0)
{
v___x_2767_ = v___x_2764_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v_a_2762_);
v___x_2767_ = v_reuseFailAlloc_2768_;
goto v_reusejp_2766_;
}
v_reusejp_2766_:
{
return v___x_2767_;
}
}
}
}
else
{
lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
v___x_2770_ = lean_unsigned_to_nat(5u);
v___x_2771_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2770_);
lean_dec(v_stx_2393_);
v___x_2772_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2771_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_);
if (lean_obj_tag(v___x_2772_) == 0)
{
lean_object* v_a_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2781_; 
v_a_2773_ = lean_ctor_get(v___x_2772_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2772_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2775_ = v___x_2772_;
v_isShared_2776_ = v_isSharedCheck_2781_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_a_2773_);
lean_dec(v___x_2772_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2781_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2777_; lean_object* v___x_2779_; 
v___x_2777_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_2773_);
if (v_isShared_2776_ == 0)
{
lean_ctor_set(v___x_2775_, 0, v___x_2777_);
v___x_2779_ = v___x_2775_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v___x_2777_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
}
else
{
return v___x_2772_;
}
}
}
else
{
lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; 
v___x_2782_ = lean_unsigned_to_nat(3u);
v___x_2783_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2782_);
lean_dec(v_stx_2393_);
v___x_2784_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v___x_2710_, v___x_2783_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_);
return v___x_2784_;
}
}
}
else
{
lean_object* v___x_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; uint8_t v___x_4777_; 
v___x_4774_ = lean_unsigned_to_nat(0u);
v___x_4775_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4774_);
v___x_4776_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__13___closed__1));
v___x_4777_ = l_Lean_Syntax_isOfKind(v___x_4775_, v___x_4776_);
if (v___x_4777_ == 0)
{
lean_object* v___x_4778_; uint8_t v___x_4779_; 
v___x_4778_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_4779_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_4778_);
if (v___x_4779_ == 0)
{
lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v_env_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; 
lean_inc_n(v_stx_2393_, 2);
v___x_4780_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_4781_ = lean_st_ref_get(v_a_2399_);
v_env_4782_ = lean_ctor_get(v___x_4781_, 0);
lean_inc_ref(v_env_4782_);
lean_dec(v___x_4781_);
v___x_4783_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4784_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4783_, v_env_4782_, v___x_4780_);
v___x_4785_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4786_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_4784_, v___x_4785_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_4784_);
if (lean_obj_tag(v___x_4786_) == 0)
{
lean_object* v_a_4787_; lean_object* v___x_4789_; uint8_t v_isShared_4790_; uint8_t v_isSharedCheck_4817_; 
v_a_4787_ = lean_ctor_get(v___x_4786_, 0);
v_isSharedCheck_4817_ = !lean_is_exclusive(v___x_4786_);
if (v_isSharedCheck_4817_ == 0)
{
v___x_4789_ = v___x_4786_;
v_isShared_4790_ = v_isSharedCheck_4817_;
goto v_resetjp_4788_;
}
else
{
lean_inc(v_a_4787_);
lean_dec(v___x_4786_);
v___x_4789_ = lean_box(0);
v_isShared_4790_ = v_isSharedCheck_4817_;
goto v_resetjp_4788_;
}
v_resetjp_4788_:
{
lean_object* v_fst_4791_; lean_object* v___x_4793_; uint8_t v_isShared_4794_; uint8_t v_isSharedCheck_4815_; 
v_fst_4791_ = lean_ctor_get(v_a_4787_, 0);
v_isSharedCheck_4815_ = !lean_is_exclusive(v_a_4787_);
if (v_isSharedCheck_4815_ == 0)
{
lean_object* v_unused_4816_; 
v_unused_4816_ = lean_ctor_get(v_a_4787_, 1);
lean_dec(v_unused_4816_);
v___x_4793_ = v_a_4787_;
v_isShared_4794_ = v_isSharedCheck_4815_;
goto v_resetjp_4792_;
}
else
{
lean_inc(v_fst_4791_);
lean_dec(v_a_4787_);
v___x_4793_ = lean_box(0);
v_isShared_4794_ = v_isSharedCheck_4815_;
goto v_resetjp_4792_;
}
v_resetjp_4792_:
{
if (lean_obj_tag(v_fst_4791_) == 0)
{
lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4798_; 
lean_del_object(v___x_4789_);
v___x_4795_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4796_ = l_Lean_MessageData_ofName(v___x_4780_);
lean_inc_ref(v___x_4796_);
if (v_isShared_4794_ == 0)
{
lean_ctor_set_tag(v___x_4793_, 7);
lean_ctor_set(v___x_4793_, 1, v___x_4796_);
lean_ctor_set(v___x_4793_, 0, v___x_4795_);
v___x_4798_ = v___x_4793_;
goto v_reusejp_4797_;
}
else
{
lean_object* v_reuseFailAlloc_4810_; 
v_reuseFailAlloc_4810_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4810_, 0, v___x_4795_);
lean_ctor_set(v_reuseFailAlloc_4810_, 1, v___x_4796_);
v___x_4798_ = v_reuseFailAlloc_4810_;
goto v_reusejp_4797_;
}
v_reusejp_4797_:
{
lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; 
v___x_4799_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4800_, 0, v___x_4798_);
lean_ctor_set(v___x_4800_, 1, v___x_4799_);
v___x_4801_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_4802_ = l_Lean_indentD(v___x_4801_);
v___x_4803_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4803_, 0, v___x_4800_);
lean_ctor_set(v___x_4803_, 1, v___x_4802_);
v___x_4804_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4805_, 0, v___x_4803_);
lean_ctor_set(v___x_4805_, 1, v___x_4804_);
v___x_4806_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4806_, 0, v___x_4805_);
lean_ctor_set(v___x_4806_, 1, v___x_4796_);
v___x_4807_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_4808_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4808_, 0, v___x_4806_);
lean_ctor_set(v___x_4808_, 1, v___x_4807_);
v___x_4809_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4808_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_4809_;
}
}
else
{
lean_object* v_val_4811_; lean_object* v___x_4813_; 
lean_del_object(v___x_4793_);
lean_dec(v___x_4780_);
lean_dec(v_stx_2393_);
v_val_4811_ = lean_ctor_get(v_fst_4791_, 0);
lean_inc(v_val_4811_);
lean_dec_ref_known(v_fst_4791_, 1);
if (v_isShared_4790_ == 0)
{
lean_ctor_set(v___x_4789_, 0, v_val_4811_);
v___x_4813_ = v___x_4789_;
goto v_reusejp_4812_;
}
else
{
lean_object* v_reuseFailAlloc_4814_; 
v_reuseFailAlloc_4814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4814_, 0, v_val_4811_);
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
else
{
lean_object* v_a_4818_; lean_object* v___x_4820_; uint8_t v_isShared_4821_; uint8_t v_isSharedCheck_4825_; 
lean_dec(v___x_4780_);
lean_dec(v_stx_2393_);
v_a_4818_ = lean_ctor_get(v___x_4786_, 0);
v_isSharedCheck_4825_ = !lean_is_exclusive(v___x_4786_);
if (v_isSharedCheck_4825_ == 0)
{
v___x_4820_ = v___x_4786_;
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
else
{
lean_inc(v_a_4818_);
lean_dec(v___x_4786_);
v___x_4820_ = lean_box(0);
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
v_resetjp_4819_:
{
lean_object* v___x_4823_; 
if (v_isShared_4821_ == 0)
{
v___x_4823_ = v___x_4820_;
goto v_reusejp_4822_;
}
else
{
lean_object* v_reuseFailAlloc_4824_; 
v_reuseFailAlloc_4824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4824_, 0, v_a_4818_);
v___x_4823_ = v_reuseFailAlloc_4824_;
goto v_reusejp_4822_;
}
v_reusejp_4822_:
{
return v___x_4823_;
}
}
}
}
else
{
lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; 
v___x_4826_ = lean_unsigned_to_nat(5u);
v___x_4827_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4826_);
lean_dec(v_stx_2393_);
v___x_4828_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4827_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_4828_) == 0)
{
lean_object* v_a_4829_; lean_object* v___x_4831_; uint8_t v_isShared_4832_; uint8_t v_isSharedCheck_4837_; 
v_a_4829_ = lean_ctor_get(v___x_4828_, 0);
v_isSharedCheck_4837_ = !lean_is_exclusive(v___x_4828_);
if (v_isSharedCheck_4837_ == 0)
{
v___x_4831_ = v___x_4828_;
v_isShared_4832_ = v_isSharedCheck_4837_;
goto v_resetjp_4830_;
}
else
{
lean_inc(v_a_4829_);
lean_dec(v___x_4828_);
v___x_4831_ = lean_box(0);
v_isShared_4832_ = v_isSharedCheck_4837_;
goto v_resetjp_4830_;
}
v_resetjp_4830_:
{
lean_object* v___x_4833_; lean_object* v___x_4835_; 
v___x_4833_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_4829_);
if (v_isShared_4832_ == 0)
{
lean_ctor_set(v___x_4831_, 0, v___x_4833_);
v___x_4835_ = v___x_4831_;
goto v_reusejp_4834_;
}
else
{
lean_object* v_reuseFailAlloc_4836_; 
v_reuseFailAlloc_4836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4836_, 0, v___x_4833_);
v___x_4835_ = v_reuseFailAlloc_4836_;
goto v_reusejp_4834_;
}
v_reusejp_4834_:
{
return v___x_4835_;
}
}
}
else
{
return v___x_4828_;
}
}
}
else
{
lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; uint8_t v___x_4841_; 
v___x_4838_ = lean_unsigned_to_nat(1u);
v___x_4839_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4838_);
v___x_4840_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__92));
lean_inc(v___x_4839_);
v___x_4841_ = l_Lean_Syntax_isOfKind(v___x_4839_, v___x_4840_);
if (v___x_4841_ == 0)
{
lean_object* v___x_4842_; uint8_t v___x_4843_; 
lean_dec(v___x_4839_);
v___x_4842_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_4843_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_4842_);
if (v___x_4843_ == 0)
{
lean_object* v___x_4844_; lean_object* v___x_4845_; lean_object* v_env_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; 
lean_inc_n(v_stx_2393_, 2);
v___x_4844_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_4845_ = lean_st_ref_get(v_a_2399_);
v_env_4846_ = lean_ctor_get(v___x_4845_, 0);
lean_inc_ref(v_env_4846_);
lean_dec(v___x_4845_);
v___x_4847_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4848_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4847_, v_env_4846_, v___x_4844_);
v___x_4849_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4850_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_4848_, v___x_4849_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_4848_);
if (lean_obj_tag(v___x_4850_) == 0)
{
lean_object* v_a_4851_; lean_object* v___x_4853_; uint8_t v_isShared_4854_; uint8_t v_isSharedCheck_4881_; 
v_a_4851_ = lean_ctor_get(v___x_4850_, 0);
v_isSharedCheck_4881_ = !lean_is_exclusive(v___x_4850_);
if (v_isSharedCheck_4881_ == 0)
{
v___x_4853_ = v___x_4850_;
v_isShared_4854_ = v_isSharedCheck_4881_;
goto v_resetjp_4852_;
}
else
{
lean_inc(v_a_4851_);
lean_dec(v___x_4850_);
v___x_4853_ = lean_box(0);
v_isShared_4854_ = v_isSharedCheck_4881_;
goto v_resetjp_4852_;
}
v_resetjp_4852_:
{
lean_object* v_fst_4855_; lean_object* v___x_4857_; uint8_t v_isShared_4858_; uint8_t v_isSharedCheck_4879_; 
v_fst_4855_ = lean_ctor_get(v_a_4851_, 0);
v_isSharedCheck_4879_ = !lean_is_exclusive(v_a_4851_);
if (v_isSharedCheck_4879_ == 0)
{
lean_object* v_unused_4880_; 
v_unused_4880_ = lean_ctor_get(v_a_4851_, 1);
lean_dec(v_unused_4880_);
v___x_4857_ = v_a_4851_;
v_isShared_4858_ = v_isSharedCheck_4879_;
goto v_resetjp_4856_;
}
else
{
lean_inc(v_fst_4855_);
lean_dec(v_a_4851_);
v___x_4857_ = lean_box(0);
v_isShared_4858_ = v_isSharedCheck_4879_;
goto v_resetjp_4856_;
}
v_resetjp_4856_:
{
if (lean_obj_tag(v_fst_4855_) == 0)
{
lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___x_4862_; 
lean_del_object(v___x_4853_);
v___x_4859_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4860_ = l_Lean_MessageData_ofName(v___x_4844_);
lean_inc_ref(v___x_4860_);
if (v_isShared_4858_ == 0)
{
lean_ctor_set_tag(v___x_4857_, 7);
lean_ctor_set(v___x_4857_, 1, v___x_4860_);
lean_ctor_set(v___x_4857_, 0, v___x_4859_);
v___x_4862_ = v___x_4857_;
goto v_reusejp_4861_;
}
else
{
lean_object* v_reuseFailAlloc_4874_; 
v_reuseFailAlloc_4874_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4874_, 0, v___x_4859_);
lean_ctor_set(v_reuseFailAlloc_4874_, 1, v___x_4860_);
v___x_4862_ = v_reuseFailAlloc_4874_;
goto v_reusejp_4861_;
}
v_reusejp_4861_:
{
lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; 
v___x_4863_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4864_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4864_, 0, v___x_4862_);
lean_ctor_set(v___x_4864_, 1, v___x_4863_);
v___x_4865_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_4866_ = l_Lean_indentD(v___x_4865_);
v___x_4867_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4867_, 0, v___x_4864_);
lean_ctor_set(v___x_4867_, 1, v___x_4866_);
v___x_4868_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4869_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4869_, 0, v___x_4867_);
lean_ctor_set(v___x_4869_, 1, v___x_4868_);
v___x_4870_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4870_, 0, v___x_4869_);
lean_ctor_set(v___x_4870_, 1, v___x_4860_);
v___x_4871_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_4872_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4872_, 0, v___x_4870_);
lean_ctor_set(v___x_4872_, 1, v___x_4871_);
v___x_4873_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4872_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_4873_;
}
}
else
{
lean_object* v_val_4875_; lean_object* v___x_4877_; 
lean_del_object(v___x_4857_);
lean_dec(v___x_4844_);
lean_dec(v_stx_2393_);
v_val_4875_ = lean_ctor_get(v_fst_4855_, 0);
lean_inc(v_val_4875_);
lean_dec_ref_known(v_fst_4855_, 1);
if (v_isShared_4854_ == 0)
{
lean_ctor_set(v___x_4853_, 0, v_val_4875_);
v___x_4877_ = v___x_4853_;
goto v_reusejp_4876_;
}
else
{
lean_object* v_reuseFailAlloc_4878_; 
v_reuseFailAlloc_4878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4878_, 0, v_val_4875_);
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
else
{
lean_object* v_a_4882_; lean_object* v___x_4884_; uint8_t v_isShared_4885_; uint8_t v_isSharedCheck_4889_; 
lean_dec(v___x_4844_);
lean_dec(v_stx_2393_);
v_a_4882_ = lean_ctor_get(v___x_4850_, 0);
v_isSharedCheck_4889_ = !lean_is_exclusive(v___x_4850_);
if (v_isSharedCheck_4889_ == 0)
{
v___x_4884_ = v___x_4850_;
v_isShared_4885_ = v_isSharedCheck_4889_;
goto v_resetjp_4883_;
}
else
{
lean_inc(v_a_4882_);
lean_dec(v___x_4850_);
v___x_4884_ = lean_box(0);
v_isShared_4885_ = v_isSharedCheck_4889_;
goto v_resetjp_4883_;
}
v_resetjp_4883_:
{
lean_object* v___x_4887_; 
if (v_isShared_4885_ == 0)
{
v___x_4887_ = v___x_4884_;
goto v_reusejp_4886_;
}
else
{
lean_object* v_reuseFailAlloc_4888_; 
v_reuseFailAlloc_4888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4888_, 0, v_a_4882_);
v___x_4887_ = v_reuseFailAlloc_4888_;
goto v_reusejp_4886_;
}
v_reusejp_4886_:
{
return v___x_4887_;
}
}
}
}
else
{
lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; 
v___x_4890_ = lean_unsigned_to_nat(5u);
v___x_4891_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4890_);
lean_dec(v_stx_2393_);
v___x_4892_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4891_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_4892_) == 0)
{
lean_object* v_a_4893_; lean_object* v___x_4895_; uint8_t v_isShared_4896_; uint8_t v_isSharedCheck_4901_; 
v_a_4893_ = lean_ctor_get(v___x_4892_, 0);
v_isSharedCheck_4901_ = !lean_is_exclusive(v___x_4892_);
if (v_isSharedCheck_4901_ == 0)
{
v___x_4895_ = v___x_4892_;
v_isShared_4896_ = v_isSharedCheck_4901_;
goto v_resetjp_4894_;
}
else
{
lean_inc(v_a_4893_);
lean_dec(v___x_4892_);
v___x_4895_ = lean_box(0);
v_isShared_4896_ = v_isSharedCheck_4901_;
goto v_resetjp_4894_;
}
v_resetjp_4894_:
{
lean_object* v___x_4897_; lean_object* v___x_4899_; 
v___x_4897_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_4893_);
if (v_isShared_4896_ == 0)
{
lean_ctor_set(v___x_4895_, 0, v___x_4897_);
v___x_4899_ = v___x_4895_;
goto v_reusejp_4898_;
}
else
{
lean_object* v_reuseFailAlloc_4900_; 
v_reuseFailAlloc_4900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4900_, 0, v___x_4897_);
v___x_4899_ = v_reuseFailAlloc_4900_;
goto v_reusejp_4898_;
}
v_reusejp_4898_:
{
return v___x_4899_;
}
}
}
else
{
return v___x_4892_;
}
}
}
else
{
lean_object* v___x_4902_; uint8_t v___x_4903_; 
v___x_4902_ = l_Lean_Syntax_getArg(v___x_4839_, v___x_4774_);
lean_dec(v___x_4839_);
lean_inc(v___x_4902_);
v___x_4903_ = l_Lean_Syntax_matchesNull(v___x_4902_, v___x_4838_);
if (v___x_4903_ == 0)
{
lean_object* v___x_4904_; uint8_t v___x_4905_; 
lean_dec(v___x_4902_);
v___x_4904_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_4905_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_4904_);
if (v___x_4905_ == 0)
{
lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v_env_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; 
lean_inc_n(v_stx_2393_, 2);
v___x_4906_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_4907_ = lean_st_ref_get(v_a_2399_);
v_env_4908_ = lean_ctor_get(v___x_4907_, 0);
lean_inc_ref(v_env_4908_);
lean_dec(v___x_4907_);
v___x_4909_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4910_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4909_, v_env_4908_, v___x_4906_);
v___x_4911_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4912_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_4910_, v___x_4911_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_4910_);
if (lean_obj_tag(v___x_4912_) == 0)
{
lean_object* v_a_4913_; lean_object* v___x_4915_; uint8_t v_isShared_4916_; uint8_t v_isSharedCheck_4943_; 
v_a_4913_ = lean_ctor_get(v___x_4912_, 0);
v_isSharedCheck_4943_ = !lean_is_exclusive(v___x_4912_);
if (v_isSharedCheck_4943_ == 0)
{
v___x_4915_ = v___x_4912_;
v_isShared_4916_ = v_isSharedCheck_4943_;
goto v_resetjp_4914_;
}
else
{
lean_inc(v_a_4913_);
lean_dec(v___x_4912_);
v___x_4915_ = lean_box(0);
v_isShared_4916_ = v_isSharedCheck_4943_;
goto v_resetjp_4914_;
}
v_resetjp_4914_:
{
lean_object* v_fst_4917_; lean_object* v___x_4919_; uint8_t v_isShared_4920_; uint8_t v_isSharedCheck_4941_; 
v_fst_4917_ = lean_ctor_get(v_a_4913_, 0);
v_isSharedCheck_4941_ = !lean_is_exclusive(v_a_4913_);
if (v_isSharedCheck_4941_ == 0)
{
lean_object* v_unused_4942_; 
v_unused_4942_ = lean_ctor_get(v_a_4913_, 1);
lean_dec(v_unused_4942_);
v___x_4919_ = v_a_4913_;
v_isShared_4920_ = v_isSharedCheck_4941_;
goto v_resetjp_4918_;
}
else
{
lean_inc(v_fst_4917_);
lean_dec(v_a_4913_);
v___x_4919_ = lean_box(0);
v_isShared_4920_ = v_isSharedCheck_4941_;
goto v_resetjp_4918_;
}
v_resetjp_4918_:
{
if (lean_obj_tag(v_fst_4917_) == 0)
{
lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4924_; 
lean_del_object(v___x_4915_);
v___x_4921_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4922_ = l_Lean_MessageData_ofName(v___x_4906_);
lean_inc_ref(v___x_4922_);
if (v_isShared_4920_ == 0)
{
lean_ctor_set_tag(v___x_4919_, 7);
lean_ctor_set(v___x_4919_, 1, v___x_4922_);
lean_ctor_set(v___x_4919_, 0, v___x_4921_);
v___x_4924_ = v___x_4919_;
goto v_reusejp_4923_;
}
else
{
lean_object* v_reuseFailAlloc_4936_; 
v_reuseFailAlloc_4936_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4936_, 0, v___x_4921_);
lean_ctor_set(v_reuseFailAlloc_4936_, 1, v___x_4922_);
v___x_4924_ = v_reuseFailAlloc_4936_;
goto v_reusejp_4923_;
}
v_reusejp_4923_:
{
lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; 
v___x_4925_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4926_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4926_, 0, v___x_4924_);
lean_ctor_set(v___x_4926_, 1, v___x_4925_);
v___x_4927_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_4928_ = l_Lean_indentD(v___x_4927_);
v___x_4929_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4929_, 0, v___x_4926_);
lean_ctor_set(v___x_4929_, 1, v___x_4928_);
v___x_4930_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4931_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4931_, 0, v___x_4929_);
lean_ctor_set(v___x_4931_, 1, v___x_4930_);
v___x_4932_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4932_, 0, v___x_4931_);
lean_ctor_set(v___x_4932_, 1, v___x_4922_);
v___x_4933_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_4934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4934_, 0, v___x_4932_);
lean_ctor_set(v___x_4934_, 1, v___x_4933_);
v___x_4935_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4934_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_4935_;
}
}
else
{
lean_object* v_val_4937_; lean_object* v___x_4939_; 
lean_del_object(v___x_4919_);
lean_dec(v___x_4906_);
lean_dec(v_stx_2393_);
v_val_4937_ = lean_ctor_get(v_fst_4917_, 0);
lean_inc(v_val_4937_);
lean_dec_ref_known(v_fst_4917_, 1);
if (v_isShared_4916_ == 0)
{
lean_ctor_set(v___x_4915_, 0, v_val_4937_);
v___x_4939_ = v___x_4915_;
goto v_reusejp_4938_;
}
else
{
lean_object* v_reuseFailAlloc_4940_; 
v_reuseFailAlloc_4940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4940_, 0, v_val_4937_);
v___x_4939_ = v_reuseFailAlloc_4940_;
goto v_reusejp_4938_;
}
v_reusejp_4938_:
{
return v___x_4939_;
}
}
}
}
}
else
{
lean_object* v_a_4944_; lean_object* v___x_4946_; uint8_t v_isShared_4947_; uint8_t v_isSharedCheck_4951_; 
lean_dec(v___x_4906_);
lean_dec(v_stx_2393_);
v_a_4944_ = lean_ctor_get(v___x_4912_, 0);
v_isSharedCheck_4951_ = !lean_is_exclusive(v___x_4912_);
if (v_isSharedCheck_4951_ == 0)
{
v___x_4946_ = v___x_4912_;
v_isShared_4947_ = v_isSharedCheck_4951_;
goto v_resetjp_4945_;
}
else
{
lean_inc(v_a_4944_);
lean_dec(v___x_4912_);
v___x_4946_ = lean_box(0);
v_isShared_4947_ = v_isSharedCheck_4951_;
goto v_resetjp_4945_;
}
v_resetjp_4945_:
{
lean_object* v___x_4949_; 
if (v_isShared_4947_ == 0)
{
v___x_4949_ = v___x_4946_;
goto v_reusejp_4948_;
}
else
{
lean_object* v_reuseFailAlloc_4950_; 
v_reuseFailAlloc_4950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4950_, 0, v_a_4944_);
v___x_4949_ = v_reuseFailAlloc_4950_;
goto v_reusejp_4948_;
}
v_reusejp_4948_:
{
return v___x_4949_;
}
}
}
}
else
{
lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; 
v___x_4952_ = lean_unsigned_to_nat(5u);
v___x_4953_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_4952_);
lean_dec(v_stx_2393_);
v___x_4954_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_4953_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_4954_) == 0)
{
lean_object* v_a_4955_; lean_object* v___x_4957_; uint8_t v_isShared_4958_; uint8_t v_isSharedCheck_4963_; 
v_a_4955_ = lean_ctor_get(v___x_4954_, 0);
v_isSharedCheck_4963_ = !lean_is_exclusive(v___x_4954_);
if (v_isSharedCheck_4963_ == 0)
{
v___x_4957_ = v___x_4954_;
v_isShared_4958_ = v_isSharedCheck_4963_;
goto v_resetjp_4956_;
}
else
{
lean_inc(v_a_4955_);
lean_dec(v___x_4954_);
v___x_4957_ = lean_box(0);
v_isShared_4958_ = v_isSharedCheck_4963_;
goto v_resetjp_4956_;
}
v_resetjp_4956_:
{
lean_object* v___x_4959_; lean_object* v___x_4961_; 
v___x_4959_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_4955_);
if (v_isShared_4958_ == 0)
{
lean_ctor_set(v___x_4957_, 0, v___x_4959_);
v___x_4961_ = v___x_4957_;
goto v_reusejp_4960_;
}
else
{
lean_object* v_reuseFailAlloc_4962_; 
v_reuseFailAlloc_4962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4962_, 0, v___x_4959_);
v___x_4961_ = v_reuseFailAlloc_4962_;
goto v_reusejp_4960_;
}
v_reusejp_4960_:
{
return v___x_4961_;
}
}
}
else
{
return v___x_4954_;
}
}
}
else
{
lean_object* v___x_4964_; lean_object* v___x_4965_; uint8_t v___x_4966_; 
v___x_4964_ = l_Lean_Syntax_getArg(v___x_4902_, v___x_4774_);
lean_dec(v___x_4902_);
v___x_4965_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__94));
v___x_4966_ = l_Lean_Syntax_isOfKind(v___x_4964_, v___x_4965_);
if (v___x_4966_ == 0)
{
lean_object* v___x_4967_; uint8_t v___x_4968_; 
v___x_4967_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_4968_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_4967_);
if (v___x_4968_ == 0)
{
lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v_env_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; 
lean_inc_n(v_stx_2393_, 2);
v___x_4969_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_4970_ = lean_st_ref_get(v_a_2399_);
v_env_4971_ = lean_ctor_get(v___x_4970_, 0);
lean_inc_ref(v_env_4971_);
lean_dec(v___x_4970_);
v___x_4972_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_4973_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_4972_, v_env_4971_, v___x_4969_);
v___x_4974_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_4975_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_4973_, v___x_4974_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_4973_);
if (lean_obj_tag(v___x_4975_) == 0)
{
lean_object* v_a_4976_; lean_object* v___x_4978_; uint8_t v_isShared_4979_; uint8_t v_isSharedCheck_5006_; 
v_a_4976_ = lean_ctor_get(v___x_4975_, 0);
v_isSharedCheck_5006_ = !lean_is_exclusive(v___x_4975_);
if (v_isSharedCheck_5006_ == 0)
{
v___x_4978_ = v___x_4975_;
v_isShared_4979_ = v_isSharedCheck_5006_;
goto v_resetjp_4977_;
}
else
{
lean_inc(v_a_4976_);
lean_dec(v___x_4975_);
v___x_4978_ = lean_box(0);
v_isShared_4979_ = v_isSharedCheck_5006_;
goto v_resetjp_4977_;
}
v_resetjp_4977_:
{
lean_object* v_fst_4980_; lean_object* v___x_4982_; uint8_t v_isShared_4983_; uint8_t v_isSharedCheck_5004_; 
v_fst_4980_ = lean_ctor_get(v_a_4976_, 0);
v_isSharedCheck_5004_ = !lean_is_exclusive(v_a_4976_);
if (v_isSharedCheck_5004_ == 0)
{
lean_object* v_unused_5005_; 
v_unused_5005_ = lean_ctor_get(v_a_4976_, 1);
lean_dec(v_unused_5005_);
v___x_4982_ = v_a_4976_;
v_isShared_4983_ = v_isSharedCheck_5004_;
goto v_resetjp_4981_;
}
else
{
lean_inc(v_fst_4980_);
lean_dec(v_a_4976_);
v___x_4982_ = lean_box(0);
v_isShared_4983_ = v_isSharedCheck_5004_;
goto v_resetjp_4981_;
}
v_resetjp_4981_:
{
if (lean_obj_tag(v_fst_4980_) == 0)
{
lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4987_; 
lean_del_object(v___x_4978_);
v___x_4984_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_4985_ = l_Lean_MessageData_ofName(v___x_4969_);
lean_inc_ref(v___x_4985_);
if (v_isShared_4983_ == 0)
{
lean_ctor_set_tag(v___x_4982_, 7);
lean_ctor_set(v___x_4982_, 1, v___x_4985_);
lean_ctor_set(v___x_4982_, 0, v___x_4984_);
v___x_4987_ = v___x_4982_;
goto v_reusejp_4986_;
}
else
{
lean_object* v_reuseFailAlloc_4999_; 
v_reuseFailAlloc_4999_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4999_, 0, v___x_4984_);
lean_ctor_set(v_reuseFailAlloc_4999_, 1, v___x_4985_);
v___x_4987_ = v_reuseFailAlloc_4999_;
goto v_reusejp_4986_;
}
v_reusejp_4986_:
{
lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; 
v___x_4988_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_4989_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4989_, 0, v___x_4987_);
lean_ctor_set(v___x_4989_, 1, v___x_4988_);
v___x_4990_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_4991_ = l_Lean_indentD(v___x_4990_);
v___x_4992_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4992_, 0, v___x_4989_);
lean_ctor_set(v___x_4992_, 1, v___x_4991_);
v___x_4993_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_4994_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4994_, 0, v___x_4992_);
lean_ctor_set(v___x_4994_, 1, v___x_4993_);
v___x_4995_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4995_, 0, v___x_4994_);
lean_ctor_set(v___x_4995_, 1, v___x_4985_);
v___x_4996_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_4997_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4997_, 0, v___x_4995_);
lean_ctor_set(v___x_4997_, 1, v___x_4996_);
v___x_4998_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_4997_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_4998_;
}
}
else
{
lean_object* v_val_5000_; lean_object* v___x_5002_; 
lean_del_object(v___x_4982_);
lean_dec(v___x_4969_);
lean_dec(v_stx_2393_);
v_val_5000_ = lean_ctor_get(v_fst_4980_, 0);
lean_inc(v_val_5000_);
lean_dec_ref_known(v_fst_4980_, 1);
if (v_isShared_4979_ == 0)
{
lean_ctor_set(v___x_4978_, 0, v_val_5000_);
v___x_5002_ = v___x_4978_;
goto v_reusejp_5001_;
}
else
{
lean_object* v_reuseFailAlloc_5003_; 
v_reuseFailAlloc_5003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5003_, 0, v_val_5000_);
v___x_5002_ = v_reuseFailAlloc_5003_;
goto v_reusejp_5001_;
}
v_reusejp_5001_:
{
return v___x_5002_;
}
}
}
}
}
else
{
lean_object* v_a_5007_; lean_object* v___x_5009_; uint8_t v_isShared_5010_; uint8_t v_isSharedCheck_5014_; 
lean_dec(v___x_4969_);
lean_dec(v_stx_2393_);
v_a_5007_ = lean_ctor_get(v___x_4975_, 0);
v_isSharedCheck_5014_ = !lean_is_exclusive(v___x_4975_);
if (v_isSharedCheck_5014_ == 0)
{
v___x_5009_ = v___x_4975_;
v_isShared_5010_ = v_isSharedCheck_5014_;
goto v_resetjp_5008_;
}
else
{
lean_inc(v_a_5007_);
lean_dec(v___x_4975_);
v___x_5009_ = lean_box(0);
v_isShared_5010_ = v_isSharedCheck_5014_;
goto v_resetjp_5008_;
}
v_resetjp_5008_:
{
lean_object* v___x_5012_; 
if (v_isShared_5010_ == 0)
{
v___x_5012_ = v___x_5009_;
goto v_reusejp_5011_;
}
else
{
lean_object* v_reuseFailAlloc_5013_; 
v_reuseFailAlloc_5013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5013_, 0, v_a_5007_);
v___x_5012_ = v_reuseFailAlloc_5013_;
goto v_reusejp_5011_;
}
v_reusejp_5011_:
{
return v___x_5012_;
}
}
}
}
else
{
lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; 
v___x_5015_ = lean_unsigned_to_nat(5u);
v___x_5016_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_5015_);
lean_dec(v_stx_2393_);
v___x_5017_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_5016_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_5017_) == 0)
{
lean_object* v_a_5018_; lean_object* v___x_5020_; uint8_t v_isShared_5021_; uint8_t v_isSharedCheck_5026_; 
v_a_5018_ = lean_ctor_get(v___x_5017_, 0);
v_isSharedCheck_5026_ = !lean_is_exclusive(v___x_5017_);
if (v_isSharedCheck_5026_ == 0)
{
v___x_5020_ = v___x_5017_;
v_isShared_5021_ = v_isSharedCheck_5026_;
goto v_resetjp_5019_;
}
else
{
lean_inc(v_a_5018_);
lean_dec(v___x_5017_);
v___x_5020_ = lean_box(0);
v_isShared_5021_ = v_isSharedCheck_5026_;
goto v_resetjp_5019_;
}
v_resetjp_5019_:
{
lean_object* v___x_5022_; lean_object* v___x_5024_; 
v___x_5022_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_5018_);
if (v_isShared_5021_ == 0)
{
lean_ctor_set(v___x_5020_, 0, v___x_5022_);
v___x_5024_ = v___x_5020_;
goto v_reusejp_5023_;
}
else
{
lean_object* v_reuseFailAlloc_5025_; 
v_reuseFailAlloc_5025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5025_, 0, v___x_5022_);
v___x_5024_ = v_reuseFailAlloc_5025_;
goto v_reusejp_5023_;
}
v_reusejp_5023_:
{
return v___x_5024_;
}
}
}
else
{
return v___x_5017_;
}
}
}
else
{
lean_object* v___x_5027_; lean_object* v___x_5028_; 
lean_dec(v_stx_2393_);
v___x_5027_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_5028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5028_, 0, v___x_5027_);
return v___x_5028_;
}
}
}
}
}
}
else
{
lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; uint8_t v___x_5032_; 
v___x_5029_ = lean_unsigned_to_nat(1u);
v___x_5030_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_5029_);
v___x_5031_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
v___x_5032_ = l_Lean_Syntax_isOfKind(v___x_5030_, v___x_5031_);
if (v___x_5032_ == 0)
{
lean_object* v___x_5033_; uint8_t v___x_5034_; 
v___x_5033_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_5034_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_5033_);
if (v___x_5034_ == 0)
{
lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v_env_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; 
lean_inc_n(v_stx_2393_, 2);
v___x_5035_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_5036_ = lean_st_ref_get(v_a_2399_);
v_env_5037_ = lean_ctor_get(v___x_5036_, 0);
lean_inc_ref(v_env_5037_);
lean_dec(v___x_5036_);
v___x_5038_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5039_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5038_, v_env_5037_, v___x_5035_);
v___x_5040_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_5041_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_5039_, v___x_5040_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_5039_);
if (lean_obj_tag(v___x_5041_) == 0)
{
lean_object* v_a_5042_; lean_object* v___x_5044_; uint8_t v_isShared_5045_; uint8_t v_isSharedCheck_5072_; 
v_a_5042_ = lean_ctor_get(v___x_5041_, 0);
v_isSharedCheck_5072_ = !lean_is_exclusive(v___x_5041_);
if (v_isSharedCheck_5072_ == 0)
{
v___x_5044_ = v___x_5041_;
v_isShared_5045_ = v_isSharedCheck_5072_;
goto v_resetjp_5043_;
}
else
{
lean_inc(v_a_5042_);
lean_dec(v___x_5041_);
v___x_5044_ = lean_box(0);
v_isShared_5045_ = v_isSharedCheck_5072_;
goto v_resetjp_5043_;
}
v_resetjp_5043_:
{
lean_object* v_fst_5046_; lean_object* v___x_5048_; uint8_t v_isShared_5049_; uint8_t v_isSharedCheck_5070_; 
v_fst_5046_ = lean_ctor_get(v_a_5042_, 0);
v_isSharedCheck_5070_ = !lean_is_exclusive(v_a_5042_);
if (v_isSharedCheck_5070_ == 0)
{
lean_object* v_unused_5071_; 
v_unused_5071_ = lean_ctor_get(v_a_5042_, 1);
lean_dec(v_unused_5071_);
v___x_5048_ = v_a_5042_;
v_isShared_5049_ = v_isSharedCheck_5070_;
goto v_resetjp_5047_;
}
else
{
lean_inc(v_fst_5046_);
lean_dec(v_a_5042_);
v___x_5048_ = lean_box(0);
v_isShared_5049_ = v_isSharedCheck_5070_;
goto v_resetjp_5047_;
}
v_resetjp_5047_:
{
if (lean_obj_tag(v_fst_5046_) == 0)
{
lean_object* v___x_5050_; lean_object* v___x_5051_; lean_object* v___x_5053_; 
lean_del_object(v___x_5044_);
v___x_5050_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5051_ = l_Lean_MessageData_ofName(v___x_5035_);
lean_inc_ref(v___x_5051_);
if (v_isShared_5049_ == 0)
{
lean_ctor_set_tag(v___x_5048_, 7);
lean_ctor_set(v___x_5048_, 1, v___x_5051_);
lean_ctor_set(v___x_5048_, 0, v___x_5050_);
v___x_5053_ = v___x_5048_;
goto v_reusejp_5052_;
}
else
{
lean_object* v_reuseFailAlloc_5065_; 
v_reuseFailAlloc_5065_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5065_, 0, v___x_5050_);
lean_ctor_set(v_reuseFailAlloc_5065_, 1, v___x_5051_);
v___x_5053_ = v_reuseFailAlloc_5065_;
goto v_reusejp_5052_;
}
v_reusejp_5052_:
{
lean_object* v___x_5054_; lean_object* v___x_5055_; lean_object* v___x_5056_; lean_object* v___x_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; lean_object* v___x_5064_; 
v___x_5054_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5055_, 0, v___x_5053_);
lean_ctor_set(v___x_5055_, 1, v___x_5054_);
v___x_5056_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_5057_ = l_Lean_indentD(v___x_5056_);
v___x_5058_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5058_, 0, v___x_5055_);
lean_ctor_set(v___x_5058_, 1, v___x_5057_);
v___x_5059_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5060_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5060_, 0, v___x_5058_);
lean_ctor_set(v___x_5060_, 1, v___x_5059_);
v___x_5061_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5061_, 0, v___x_5060_);
lean_ctor_set(v___x_5061_, 1, v___x_5051_);
v___x_5062_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_5063_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5063_, 0, v___x_5061_);
lean_ctor_set(v___x_5063_, 1, v___x_5062_);
v___x_5064_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_5063_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_5064_;
}
}
else
{
lean_object* v_val_5066_; lean_object* v___x_5068_; 
lean_del_object(v___x_5048_);
lean_dec(v___x_5035_);
lean_dec(v_stx_2393_);
v_val_5066_ = lean_ctor_get(v_fst_5046_, 0);
lean_inc(v_val_5066_);
lean_dec_ref_known(v_fst_5046_, 1);
if (v_isShared_5045_ == 0)
{
lean_ctor_set(v___x_5044_, 0, v_val_5066_);
v___x_5068_ = v___x_5044_;
goto v_reusejp_5067_;
}
else
{
lean_object* v_reuseFailAlloc_5069_; 
v_reuseFailAlloc_5069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5069_, 0, v_val_5066_);
v___x_5068_ = v_reuseFailAlloc_5069_;
goto v_reusejp_5067_;
}
v_reusejp_5067_:
{
return v___x_5068_;
}
}
}
}
}
else
{
lean_object* v_a_5073_; lean_object* v___x_5075_; uint8_t v_isShared_5076_; uint8_t v_isSharedCheck_5080_; 
lean_dec(v___x_5035_);
lean_dec(v_stx_2393_);
v_a_5073_ = lean_ctor_get(v___x_5041_, 0);
v_isSharedCheck_5080_ = !lean_is_exclusive(v___x_5041_);
if (v_isSharedCheck_5080_ == 0)
{
v___x_5075_ = v___x_5041_;
v_isShared_5076_ = v_isSharedCheck_5080_;
goto v_resetjp_5074_;
}
else
{
lean_inc(v_a_5073_);
lean_dec(v___x_5041_);
v___x_5075_ = lean_box(0);
v_isShared_5076_ = v_isSharedCheck_5080_;
goto v_resetjp_5074_;
}
v_resetjp_5074_:
{
lean_object* v___x_5078_; 
if (v_isShared_5076_ == 0)
{
v___x_5078_ = v___x_5075_;
goto v_reusejp_5077_;
}
else
{
lean_object* v_reuseFailAlloc_5079_; 
v_reuseFailAlloc_5079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5079_, 0, v_a_5073_);
v___x_5078_ = v_reuseFailAlloc_5079_;
goto v_reusejp_5077_;
}
v_reusejp_5077_:
{
return v___x_5078_;
}
}
}
}
else
{
lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; 
v___x_5081_ = lean_unsigned_to_nat(5u);
v___x_5082_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_5081_);
lean_dec(v_stx_2393_);
v___x_5083_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_5082_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_5083_) == 0)
{
lean_object* v_a_5084_; lean_object* v___x_5086_; uint8_t v_isShared_5087_; uint8_t v_isSharedCheck_5092_; 
v_a_5084_ = lean_ctor_get(v___x_5083_, 0);
v_isSharedCheck_5092_ = !lean_is_exclusive(v___x_5083_);
if (v_isSharedCheck_5092_ == 0)
{
v___x_5086_ = v___x_5083_;
v_isShared_5087_ = v_isSharedCheck_5092_;
goto v_resetjp_5085_;
}
else
{
lean_inc(v_a_5084_);
lean_dec(v___x_5083_);
v___x_5086_ = lean_box(0);
v_isShared_5087_ = v_isSharedCheck_5092_;
goto v_resetjp_5085_;
}
v_resetjp_5085_:
{
lean_object* v___x_5088_; lean_object* v___x_5090_; 
v___x_5088_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_5084_);
if (v_isShared_5087_ == 0)
{
lean_ctor_set(v___x_5086_, 0, v___x_5088_);
v___x_5090_ = v___x_5086_;
goto v_reusejp_5089_;
}
else
{
lean_object* v_reuseFailAlloc_5091_; 
v_reuseFailAlloc_5091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5091_, 0, v___x_5088_);
v___x_5090_ = v_reuseFailAlloc_5091_;
goto v_reusejp_5089_;
}
v_reusejp_5089_:
{
return v___x_5090_;
}
}
}
else
{
return v___x_5083_;
}
}
}
else
{
lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; uint8_t v___x_5096_; 
v___x_5093_ = lean_unsigned_to_nat(2u);
v___x_5094_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_5093_);
v___x_5095_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13));
v___x_5096_ = l_Lean_Syntax_isOfKind(v___x_5094_, v___x_5095_);
if (v___x_5096_ == 0)
{
lean_object* v___x_5097_; uint8_t v___x_5098_; 
v___x_5097_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_5098_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_5097_);
if (v___x_5098_ == 0)
{
lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v_env_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; 
lean_inc_n(v_stx_2393_, 2);
v___x_5099_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_5100_ = lean_st_ref_get(v_a_2399_);
v_env_5101_ = lean_ctor_get(v___x_5100_, 0);
lean_inc_ref(v_env_5101_);
lean_dec(v___x_5100_);
v___x_5102_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5103_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5102_, v_env_5101_, v___x_5099_);
v___x_5104_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_5105_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_5103_, v___x_5104_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_5103_);
if (lean_obj_tag(v___x_5105_) == 0)
{
lean_object* v_a_5106_; lean_object* v___x_5108_; uint8_t v_isShared_5109_; uint8_t v_isSharedCheck_5136_; 
v_a_5106_ = lean_ctor_get(v___x_5105_, 0);
v_isSharedCheck_5136_ = !lean_is_exclusive(v___x_5105_);
if (v_isSharedCheck_5136_ == 0)
{
v___x_5108_ = v___x_5105_;
v_isShared_5109_ = v_isSharedCheck_5136_;
goto v_resetjp_5107_;
}
else
{
lean_inc(v_a_5106_);
lean_dec(v___x_5105_);
v___x_5108_ = lean_box(0);
v_isShared_5109_ = v_isSharedCheck_5136_;
goto v_resetjp_5107_;
}
v_resetjp_5107_:
{
lean_object* v_fst_5110_; lean_object* v___x_5112_; uint8_t v_isShared_5113_; uint8_t v_isSharedCheck_5134_; 
v_fst_5110_ = lean_ctor_get(v_a_5106_, 0);
v_isSharedCheck_5134_ = !lean_is_exclusive(v_a_5106_);
if (v_isSharedCheck_5134_ == 0)
{
lean_object* v_unused_5135_; 
v_unused_5135_ = lean_ctor_get(v_a_5106_, 1);
lean_dec(v_unused_5135_);
v___x_5112_ = v_a_5106_;
v_isShared_5113_ = v_isSharedCheck_5134_;
goto v_resetjp_5111_;
}
else
{
lean_inc(v_fst_5110_);
lean_dec(v_a_5106_);
v___x_5112_ = lean_box(0);
v_isShared_5113_ = v_isSharedCheck_5134_;
goto v_resetjp_5111_;
}
v_resetjp_5111_:
{
if (lean_obj_tag(v_fst_5110_) == 0)
{
lean_object* v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5117_; 
lean_del_object(v___x_5108_);
v___x_5114_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5115_ = l_Lean_MessageData_ofName(v___x_5099_);
lean_inc_ref(v___x_5115_);
if (v_isShared_5113_ == 0)
{
lean_ctor_set_tag(v___x_5112_, 7);
lean_ctor_set(v___x_5112_, 1, v___x_5115_);
lean_ctor_set(v___x_5112_, 0, v___x_5114_);
v___x_5117_ = v___x_5112_;
goto v_reusejp_5116_;
}
else
{
lean_object* v_reuseFailAlloc_5129_; 
v_reuseFailAlloc_5129_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5129_, 0, v___x_5114_);
lean_ctor_set(v_reuseFailAlloc_5129_, 1, v___x_5115_);
v___x_5117_ = v_reuseFailAlloc_5129_;
goto v_reusejp_5116_;
}
v_reusejp_5116_:
{
lean_object* v___x_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5122_; lean_object* v___x_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; 
v___x_5118_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5119_, 0, v___x_5117_);
lean_ctor_set(v___x_5119_, 1, v___x_5118_);
v___x_5120_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_5121_ = l_Lean_indentD(v___x_5120_);
v___x_5122_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5122_, 0, v___x_5119_);
lean_ctor_set(v___x_5122_, 1, v___x_5121_);
v___x_5123_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5124_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5124_, 0, v___x_5122_);
lean_ctor_set(v___x_5124_, 1, v___x_5123_);
v___x_5125_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5125_, 0, v___x_5124_);
lean_ctor_set(v___x_5125_, 1, v___x_5115_);
v___x_5126_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_5127_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5127_, 0, v___x_5125_);
lean_ctor_set(v___x_5127_, 1, v___x_5126_);
v___x_5128_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_5127_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_5128_;
}
}
else
{
lean_object* v_val_5130_; lean_object* v___x_5132_; 
lean_del_object(v___x_5112_);
lean_dec(v___x_5099_);
lean_dec(v_stx_2393_);
v_val_5130_ = lean_ctor_get(v_fst_5110_, 0);
lean_inc(v_val_5130_);
lean_dec_ref_known(v_fst_5110_, 1);
if (v_isShared_5109_ == 0)
{
lean_ctor_set(v___x_5108_, 0, v_val_5130_);
v___x_5132_ = v___x_5108_;
goto v_reusejp_5131_;
}
else
{
lean_object* v_reuseFailAlloc_5133_; 
v_reuseFailAlloc_5133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5133_, 0, v_val_5130_);
v___x_5132_ = v_reuseFailAlloc_5133_;
goto v_reusejp_5131_;
}
v_reusejp_5131_:
{
return v___x_5132_;
}
}
}
}
}
else
{
lean_object* v_a_5137_; lean_object* v___x_5139_; uint8_t v_isShared_5140_; uint8_t v_isSharedCheck_5144_; 
lean_dec(v___x_5099_);
lean_dec(v_stx_2393_);
v_a_5137_ = lean_ctor_get(v___x_5105_, 0);
v_isSharedCheck_5144_ = !lean_is_exclusive(v___x_5105_);
if (v_isSharedCheck_5144_ == 0)
{
v___x_5139_ = v___x_5105_;
v_isShared_5140_ = v_isSharedCheck_5144_;
goto v_resetjp_5138_;
}
else
{
lean_inc(v_a_5137_);
lean_dec(v___x_5105_);
v___x_5139_ = lean_box(0);
v_isShared_5140_ = v_isSharedCheck_5144_;
goto v_resetjp_5138_;
}
v_resetjp_5138_:
{
lean_object* v___x_5142_; 
if (v_isShared_5140_ == 0)
{
v___x_5142_ = v___x_5139_;
goto v_reusejp_5141_;
}
else
{
lean_object* v_reuseFailAlloc_5143_; 
v_reuseFailAlloc_5143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5143_, 0, v_a_5137_);
v___x_5142_ = v_reuseFailAlloc_5143_;
goto v_reusejp_5141_;
}
v_reusejp_5141_:
{
return v___x_5142_;
}
}
}
}
else
{
lean_object* v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; 
v___x_5145_ = lean_unsigned_to_nat(5u);
v___x_5146_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_5145_);
lean_dec(v_stx_2393_);
v___x_5147_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_5146_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_5147_) == 0)
{
lean_object* v_a_5148_; lean_object* v___x_5150_; uint8_t v_isShared_5151_; uint8_t v_isSharedCheck_5156_; 
v_a_5148_ = lean_ctor_get(v___x_5147_, 0);
v_isSharedCheck_5156_ = !lean_is_exclusive(v___x_5147_);
if (v_isSharedCheck_5156_ == 0)
{
v___x_5150_ = v___x_5147_;
v_isShared_5151_ = v_isSharedCheck_5156_;
goto v_resetjp_5149_;
}
else
{
lean_inc(v_a_5148_);
lean_dec(v___x_5147_);
v___x_5150_ = lean_box(0);
v_isShared_5151_ = v_isSharedCheck_5156_;
goto v_resetjp_5149_;
}
v_resetjp_5149_:
{
lean_object* v___x_5152_; lean_object* v___x_5154_; 
v___x_5152_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_5148_);
if (v_isShared_5151_ == 0)
{
lean_ctor_set(v___x_5150_, 0, v___x_5152_);
v___x_5154_ = v___x_5150_;
goto v_reusejp_5153_;
}
else
{
lean_object* v_reuseFailAlloc_5155_; 
v_reuseFailAlloc_5155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5155_, 0, v___x_5152_);
v___x_5154_ = v_reuseFailAlloc_5155_;
goto v_reusejp_5153_;
}
v_reusejp_5153_:
{
return v___x_5154_;
}
}
}
else
{
return v___x_5147_;
}
}
}
else
{
lean_object* v___x_5157_; lean_object* v___x_5158_; 
lean_dec(v_stx_2393_);
v___x_5157_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_5158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5158_, 0, v___x_5157_);
return v___x_5158_;
}
}
}
}
else
{
lean_object* v___x_5159_; lean_object* v___x_5160_; uint8_t v___x_5161_; 
v___x_5159_ = lean_unsigned_to_nat(1u);
v___x_5160_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_5159_);
v___x_5161_ = l_Lean_Syntax_isNone(v___x_5160_);
if (v___x_5161_ == 0)
{
uint8_t v___x_5162_; 
v___x_5162_ = l_Lean_Syntax_matchesNull(v___x_5160_, v___x_5159_);
if (v___x_5162_ == 0)
{
lean_object* v___x_5163_; uint8_t v___x_5164_; 
lean_del_object(v___x_2452_);
v___x_5163_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_5164_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_5163_);
if (v___x_5164_ == 0)
{
lean_object* v___x_5165_; lean_object* v___x_5166_; lean_object* v_env_5167_; lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; 
lean_inc_n(v_stx_2393_, 2);
v___x_5165_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_5166_ = lean_st_ref_get(v_a_2399_);
v_env_5167_ = lean_ctor_get(v___x_5166_, 0);
lean_inc_ref(v_env_5167_);
lean_dec(v___x_5166_);
v___x_5168_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5169_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5168_, v_env_5167_, v___x_5165_);
v___x_5170_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_5171_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_5169_, v___x_5170_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_5169_);
if (lean_obj_tag(v___x_5171_) == 0)
{
lean_object* v_a_5172_; lean_object* v___x_5174_; uint8_t v_isShared_5175_; uint8_t v_isSharedCheck_5202_; 
v_a_5172_ = lean_ctor_get(v___x_5171_, 0);
v_isSharedCheck_5202_ = !lean_is_exclusive(v___x_5171_);
if (v_isSharedCheck_5202_ == 0)
{
v___x_5174_ = v___x_5171_;
v_isShared_5175_ = v_isSharedCheck_5202_;
goto v_resetjp_5173_;
}
else
{
lean_inc(v_a_5172_);
lean_dec(v___x_5171_);
v___x_5174_ = lean_box(0);
v_isShared_5175_ = v_isSharedCheck_5202_;
goto v_resetjp_5173_;
}
v_resetjp_5173_:
{
lean_object* v_fst_5176_; lean_object* v___x_5178_; uint8_t v_isShared_5179_; uint8_t v_isSharedCheck_5200_; 
v_fst_5176_ = lean_ctor_get(v_a_5172_, 0);
v_isSharedCheck_5200_ = !lean_is_exclusive(v_a_5172_);
if (v_isSharedCheck_5200_ == 0)
{
lean_object* v_unused_5201_; 
v_unused_5201_ = lean_ctor_get(v_a_5172_, 1);
lean_dec(v_unused_5201_);
v___x_5178_ = v_a_5172_;
v_isShared_5179_ = v_isSharedCheck_5200_;
goto v_resetjp_5177_;
}
else
{
lean_inc(v_fst_5176_);
lean_dec(v_a_5172_);
v___x_5178_ = lean_box(0);
v_isShared_5179_ = v_isSharedCheck_5200_;
goto v_resetjp_5177_;
}
v_resetjp_5177_:
{
if (lean_obj_tag(v_fst_5176_) == 0)
{
lean_object* v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5183_; 
lean_del_object(v___x_5174_);
v___x_5180_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5181_ = l_Lean_MessageData_ofName(v___x_5165_);
lean_inc_ref(v___x_5181_);
if (v_isShared_5179_ == 0)
{
lean_ctor_set_tag(v___x_5178_, 7);
lean_ctor_set(v___x_5178_, 1, v___x_5181_);
lean_ctor_set(v___x_5178_, 0, v___x_5180_);
v___x_5183_ = v___x_5178_;
goto v_reusejp_5182_;
}
else
{
lean_object* v_reuseFailAlloc_5195_; 
v_reuseFailAlloc_5195_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5195_, 0, v___x_5180_);
lean_ctor_set(v_reuseFailAlloc_5195_, 1, v___x_5181_);
v___x_5183_ = v_reuseFailAlloc_5195_;
goto v_reusejp_5182_;
}
v_reusejp_5182_:
{
lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5190_; lean_object* v___x_5191_; lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; 
v___x_5184_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5185_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5185_, 0, v___x_5183_);
lean_ctor_set(v___x_5185_, 1, v___x_5184_);
v___x_5186_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_5187_ = l_Lean_indentD(v___x_5186_);
v___x_5188_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5188_, 0, v___x_5185_);
lean_ctor_set(v___x_5188_, 1, v___x_5187_);
v___x_5189_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5190_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5190_, 0, v___x_5188_);
lean_ctor_set(v___x_5190_, 1, v___x_5189_);
v___x_5191_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5191_, 0, v___x_5190_);
lean_ctor_set(v___x_5191_, 1, v___x_5181_);
v___x_5192_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_5193_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5193_, 0, v___x_5191_);
lean_ctor_set(v___x_5193_, 1, v___x_5192_);
v___x_5194_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_5193_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_5194_;
}
}
else
{
lean_object* v_val_5196_; lean_object* v___x_5198_; 
lean_del_object(v___x_5178_);
lean_dec(v___x_5165_);
lean_dec(v_stx_2393_);
v_val_5196_ = lean_ctor_get(v_fst_5176_, 0);
lean_inc(v_val_5196_);
lean_dec_ref_known(v_fst_5176_, 1);
if (v_isShared_5175_ == 0)
{
lean_ctor_set(v___x_5174_, 0, v_val_5196_);
v___x_5198_ = v___x_5174_;
goto v_reusejp_5197_;
}
else
{
lean_object* v_reuseFailAlloc_5199_; 
v_reuseFailAlloc_5199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5199_, 0, v_val_5196_);
v___x_5198_ = v_reuseFailAlloc_5199_;
goto v_reusejp_5197_;
}
v_reusejp_5197_:
{
return v___x_5198_;
}
}
}
}
}
else
{
lean_object* v_a_5203_; lean_object* v___x_5205_; uint8_t v_isShared_5206_; uint8_t v_isSharedCheck_5210_; 
lean_dec(v___x_5165_);
lean_dec(v_stx_2393_);
v_a_5203_ = lean_ctor_get(v___x_5171_, 0);
v_isSharedCheck_5210_ = !lean_is_exclusive(v___x_5171_);
if (v_isSharedCheck_5210_ == 0)
{
v___x_5205_ = v___x_5171_;
v_isShared_5206_ = v_isSharedCheck_5210_;
goto v_resetjp_5204_;
}
else
{
lean_inc(v_a_5203_);
lean_dec(v___x_5171_);
v___x_5205_ = lean_box(0);
v_isShared_5206_ = v_isSharedCheck_5210_;
goto v_resetjp_5204_;
}
v_resetjp_5204_:
{
lean_object* v___x_5208_; 
if (v_isShared_5206_ == 0)
{
v___x_5208_ = v___x_5205_;
goto v_reusejp_5207_;
}
else
{
lean_object* v_reuseFailAlloc_5209_; 
v_reuseFailAlloc_5209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5209_, 0, v_a_5203_);
v___x_5208_ = v_reuseFailAlloc_5209_;
goto v_reusejp_5207_;
}
v_reusejp_5207_:
{
return v___x_5208_;
}
}
}
}
else
{
lean_object* v___x_5211_; lean_object* v___x_5212_; lean_object* v___x_5213_; 
v___x_5211_ = lean_unsigned_to_nat(5u);
v___x_5212_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_5211_);
lean_dec(v_stx_2393_);
v___x_5213_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_5212_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_5213_) == 0)
{
lean_object* v_a_5214_; lean_object* v___x_5216_; uint8_t v_isShared_5217_; uint8_t v_isSharedCheck_5222_; 
v_a_5214_ = lean_ctor_get(v___x_5213_, 0);
v_isSharedCheck_5222_ = !lean_is_exclusive(v___x_5213_);
if (v_isSharedCheck_5222_ == 0)
{
v___x_5216_ = v___x_5213_;
v_isShared_5217_ = v_isSharedCheck_5222_;
goto v_resetjp_5215_;
}
else
{
lean_inc(v_a_5214_);
lean_dec(v___x_5213_);
v___x_5216_ = lean_box(0);
v_isShared_5217_ = v_isSharedCheck_5222_;
goto v_resetjp_5215_;
}
v_resetjp_5215_:
{
lean_object* v___x_5218_; lean_object* v___x_5220_; 
v___x_5218_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_5214_);
if (v_isShared_5217_ == 0)
{
lean_ctor_set(v___x_5216_, 0, v___x_5218_);
v___x_5220_ = v___x_5216_;
goto v_reusejp_5219_;
}
else
{
lean_object* v_reuseFailAlloc_5221_; 
v_reuseFailAlloc_5221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5221_, 0, v___x_5218_);
v___x_5220_ = v_reuseFailAlloc_5221_;
goto v_reusejp_5219_;
}
v_reusejp_5219_:
{
return v___x_5220_;
}
}
}
else
{
return v___x_5213_;
}
}
}
else
{
v___y_2554_ = v_a_2394_;
v___y_2555_ = v_a_2395_;
v___y_2556_ = v_a_2396_;
v___y_2557_ = v_a_2397_;
v___y_2558_ = v_a_2398_;
v___y_2559_ = v_a_2399_;
goto v___jp_2553_;
}
}
else
{
lean_dec(v___x_5160_);
v___y_2554_ = v_a_2394_;
v___y_2555_ = v_a_2395_;
v___y_2556_ = v_a_2396_;
v___y_2557_ = v_a_2397_;
v___y_2558_ = v_a_2398_;
v___y_2559_ = v_a_2399_;
goto v___jp_2553_;
}
}
}
else
{
lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; 
lean_del_object(v___x_2452_);
v___x_5223_ = lean_unsigned_to_nat(1u);
v___x_5224_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_5223_);
lean_dec(v_stx_2393_);
v___x_5225_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_5224_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_5225_;
}
}
else
{
lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; 
lean_del_object(v___x_2452_);
v___x_5226_ = lean_unsigned_to_nat(0u);
v___x_5227_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_5226_);
lean_dec(v_stx_2393_);
v___x_5228_ = l_Lean_Elab_Do_Forward_matchApp_x3f(v___x_5227_);
if (lean_obj_tag(v___x_5228_) == 1)
{
lean_object* v_val_5229_; lean_object* v_snd_5230_; lean_object* v_body_5231_; lean_object* v___x_5232_; 
v_val_5229_ = lean_ctor_get(v___x_5228_, 0);
lean_inc(v_val_5229_);
lean_dec_ref_known(v___x_5228_, 1);
v_snd_5230_ = lean_ctor_get(v_val_5229_, 1);
lean_inc(v_snd_5230_);
lean_dec(v_val_5229_);
v_body_5231_ = lean_ctor_get(v_snd_5230_, 1);
lean_inc(v_body_5231_);
lean_dec(v_snd_5230_);
v___x_5232_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_body_5231_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_5232_) == 0)
{
lean_object* v_a_5233_; lean_object* v___x_5235_; uint8_t v_isShared_5236_; uint8_t v_isSharedCheck_5253_; 
v_a_5233_ = lean_ctor_get(v___x_5232_, 0);
v_isSharedCheck_5253_ = !lean_is_exclusive(v___x_5232_);
if (v_isSharedCheck_5253_ == 0)
{
v___x_5235_ = v___x_5232_;
v_isShared_5236_ = v_isSharedCheck_5253_;
goto v_resetjp_5234_;
}
else
{
lean_inc(v_a_5233_);
lean_dec(v___x_5232_);
v___x_5235_ = lean_box(0);
v_isShared_5236_ = v_isSharedCheck_5253_;
goto v_resetjp_5234_;
}
v_resetjp_5234_:
{
uint8_t v_breaks_5237_; uint8_t v_continues_5238_; uint8_t v_returnsEarly_5239_; lean_object* v_reassigns_5240_; lean_object* v___x_5242_; uint8_t v_isShared_5243_; uint8_t v_isSharedCheck_5251_; 
v_breaks_5237_ = lean_ctor_get_uint8(v_a_5233_, sizeof(void*)*2);
v_continues_5238_ = lean_ctor_get_uint8(v_a_5233_, sizeof(void*)*2 + 1);
v_returnsEarly_5239_ = lean_ctor_get_uint8(v_a_5233_, sizeof(void*)*2 + 2);
v_reassigns_5240_ = lean_ctor_get(v_a_5233_, 1);
v_isSharedCheck_5251_ = !lean_is_exclusive(v_a_5233_);
if (v_isSharedCheck_5251_ == 0)
{
lean_object* v_unused_5252_; 
v_unused_5252_ = lean_ctor_get(v_a_5233_, 0);
lean_dec(v_unused_5252_);
v___x_5242_ = v_a_5233_;
v_isShared_5243_ = v_isSharedCheck_5251_;
goto v_resetjp_5241_;
}
else
{
lean_inc(v_reassigns_5240_);
lean_dec(v_a_5233_);
v___x_5242_ = lean_box(0);
v_isShared_5243_ = v_isSharedCheck_5251_;
goto v_resetjp_5241_;
}
v_resetjp_5241_:
{
lean_object* v___x_5244_; lean_object* v___x_5246_; 
v___x_5244_ = lean_unsigned_to_nat(1u);
if (v_isShared_5243_ == 0)
{
lean_ctor_set(v___x_5242_, 0, v___x_5244_);
v___x_5246_ = v___x_5242_;
goto v_reusejp_5245_;
}
else
{
lean_object* v_reuseFailAlloc_5250_; 
v_reuseFailAlloc_5250_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_5250_, 0, v___x_5244_);
lean_ctor_set(v_reuseFailAlloc_5250_, 1, v_reassigns_5240_);
lean_ctor_set_uint8(v_reuseFailAlloc_5250_, sizeof(void*)*2, v_breaks_5237_);
lean_ctor_set_uint8(v_reuseFailAlloc_5250_, sizeof(void*)*2 + 1, v_continues_5238_);
lean_ctor_set_uint8(v_reuseFailAlloc_5250_, sizeof(void*)*2 + 2, v_returnsEarly_5239_);
v___x_5246_ = v_reuseFailAlloc_5250_;
goto v_reusejp_5245_;
}
v_reusejp_5245_:
{
lean_object* v___x_5248_; 
lean_ctor_set_uint8(v___x_5246_, sizeof(void*)*2 + 3, v___x_2698_);
if (v_isShared_5236_ == 0)
{
lean_ctor_set(v___x_5235_, 0, v___x_5246_);
v___x_5248_ = v___x_5235_;
goto v_reusejp_5247_;
}
else
{
lean_object* v_reuseFailAlloc_5249_; 
v_reuseFailAlloc_5249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5249_, 0, v___x_5246_);
v___x_5248_ = v_reuseFailAlloc_5249_;
goto v_reusejp_5247_;
}
v_reusejp_5247_:
{
return v___x_5248_;
}
}
}
}
}
else
{
return v___x_5232_;
}
}
else
{
lean_object* v___x_5254_; lean_object* v___x_5255_; lean_object* v___x_5256_; lean_object* v___x_5257_; 
lean_dec(v___x_5228_);
v___x_5254_ = lean_unsigned_to_nat(1u);
v___x_5255_ = l_Lean_NameSet_empty;
v___x_5256_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_5256_, 0, v___x_5254_);
lean_ctor_set(v___x_5256_, 1, v___x_5255_);
lean_ctor_set_uint8(v___x_5256_, sizeof(void*)*2, v___x_2698_);
lean_ctor_set_uint8(v___x_5256_, sizeof(void*)*2 + 1, v___x_2698_);
lean_ctor_set_uint8(v___x_5256_, sizeof(void*)*2 + 2, v___x_2698_);
lean_ctor_set_uint8(v___x_5256_, sizeof(void*)*2 + 3, v___x_2698_);
v___x_5257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5257_, 0, v___x_5256_);
return v___x_5257_;
}
}
}
else
{
lean_object* v___x_5258_; lean_object* v___x_5263_; lean_object* v___x_5264_; uint8_t v___x_5265_; 
lean_del_object(v___x_2452_);
v___x_5258_ = lean_unsigned_to_nat(0u);
v___x_5263_ = lean_unsigned_to_nat(1u);
v___x_5264_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_5263_);
v___x_5265_ = l_Lean_Syntax_isNone(v___x_5264_);
if (v___x_5265_ == 0)
{
uint8_t v___x_5266_; 
v___x_5266_ = l_Lean_Syntax_matchesNull(v___x_5264_, v___x_5263_);
if (v___x_5266_ == 0)
{
lean_object* v___x_5267_; uint8_t v___x_5268_; 
v___x_5267_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_5268_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_5267_);
if (v___x_5268_ == 0)
{
lean_object* v___x_5269_; lean_object* v___x_5270_; lean_object* v_env_5271_; lean_object* v___x_5272_; lean_object* v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; 
lean_inc_n(v_stx_2393_, 2);
v___x_5269_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_5270_ = lean_st_ref_get(v_a_2399_);
v_env_5271_ = lean_ctor_get(v___x_5270_, 0);
lean_inc_ref(v_env_5271_);
lean_dec(v___x_5270_);
v___x_5272_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_5273_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_5272_, v_env_5271_, v___x_5269_);
v___x_5274_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_5275_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_5273_, v___x_5274_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
lean_dec(v___x_5273_);
if (lean_obj_tag(v___x_5275_) == 0)
{
lean_object* v_a_5276_; lean_object* v___x_5278_; uint8_t v_isShared_5279_; uint8_t v_isSharedCheck_5306_; 
v_a_5276_ = lean_ctor_get(v___x_5275_, 0);
v_isSharedCheck_5306_ = !lean_is_exclusive(v___x_5275_);
if (v_isSharedCheck_5306_ == 0)
{
v___x_5278_ = v___x_5275_;
v_isShared_5279_ = v_isSharedCheck_5306_;
goto v_resetjp_5277_;
}
else
{
lean_inc(v_a_5276_);
lean_dec(v___x_5275_);
v___x_5278_ = lean_box(0);
v_isShared_5279_ = v_isSharedCheck_5306_;
goto v_resetjp_5277_;
}
v_resetjp_5277_:
{
lean_object* v_fst_5280_; lean_object* v___x_5282_; uint8_t v_isShared_5283_; uint8_t v_isSharedCheck_5304_; 
v_fst_5280_ = lean_ctor_get(v_a_5276_, 0);
v_isSharedCheck_5304_ = !lean_is_exclusive(v_a_5276_);
if (v_isSharedCheck_5304_ == 0)
{
lean_object* v_unused_5305_; 
v_unused_5305_ = lean_ctor_get(v_a_5276_, 1);
lean_dec(v_unused_5305_);
v___x_5282_ = v_a_5276_;
v_isShared_5283_ = v_isSharedCheck_5304_;
goto v_resetjp_5281_;
}
else
{
lean_inc(v_fst_5280_);
lean_dec(v_a_5276_);
v___x_5282_ = lean_box(0);
v_isShared_5283_ = v_isSharedCheck_5304_;
goto v_resetjp_5281_;
}
v_resetjp_5281_:
{
if (lean_obj_tag(v_fst_5280_) == 0)
{
lean_object* v___x_5284_; lean_object* v___x_5285_; lean_object* v___x_5287_; 
lean_del_object(v___x_5278_);
v___x_5284_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_5285_ = l_Lean_MessageData_ofName(v___x_5269_);
lean_inc_ref(v___x_5285_);
if (v_isShared_5283_ == 0)
{
lean_ctor_set_tag(v___x_5282_, 7);
lean_ctor_set(v___x_5282_, 1, v___x_5285_);
lean_ctor_set(v___x_5282_, 0, v___x_5284_);
v___x_5287_ = v___x_5282_;
goto v_reusejp_5286_;
}
else
{
lean_object* v_reuseFailAlloc_5299_; 
v_reuseFailAlloc_5299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5299_, 0, v___x_5284_);
lean_ctor_set(v_reuseFailAlloc_5299_, 1, v___x_5285_);
v___x_5287_ = v_reuseFailAlloc_5299_;
goto v_reusejp_5286_;
}
v_reusejp_5286_:
{
lean_object* v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; 
v___x_5288_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_5289_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5289_, 0, v___x_5287_);
lean_ctor_set(v___x_5289_, 1, v___x_5288_);
v___x_5290_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_5291_ = l_Lean_indentD(v___x_5290_);
v___x_5292_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5292_, 0, v___x_5289_);
lean_ctor_set(v___x_5292_, 1, v___x_5291_);
v___x_5293_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_5294_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5294_, 0, v___x_5292_);
lean_ctor_set(v___x_5294_, 1, v___x_5293_);
v___x_5295_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5295_, 0, v___x_5294_);
lean_ctor_set(v___x_5295_, 1, v___x_5285_);
v___x_5296_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_5297_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5297_, 0, v___x_5295_);
lean_ctor_set(v___x_5297_, 1, v___x_5296_);
v___x_5298_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_5297_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
return v___x_5298_;
}
}
else
{
lean_object* v_val_5300_; lean_object* v___x_5302_; 
lean_del_object(v___x_5282_);
lean_dec(v___x_5269_);
lean_dec(v_stx_2393_);
v_val_5300_ = lean_ctor_get(v_fst_5280_, 0);
lean_inc(v_val_5300_);
lean_dec_ref_known(v_fst_5280_, 1);
if (v_isShared_5279_ == 0)
{
lean_ctor_set(v___x_5278_, 0, v_val_5300_);
v___x_5302_ = v___x_5278_;
goto v_reusejp_5301_;
}
else
{
lean_object* v_reuseFailAlloc_5303_; 
v_reuseFailAlloc_5303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5303_, 0, v_val_5300_);
v___x_5302_ = v_reuseFailAlloc_5303_;
goto v_reusejp_5301_;
}
v_reusejp_5301_:
{
return v___x_5302_;
}
}
}
}
}
else
{
lean_object* v_a_5307_; lean_object* v___x_5309_; uint8_t v_isShared_5310_; uint8_t v_isSharedCheck_5314_; 
lean_dec(v___x_5269_);
lean_dec(v_stx_2393_);
v_a_5307_ = lean_ctor_get(v___x_5275_, 0);
v_isSharedCheck_5314_ = !lean_is_exclusive(v___x_5275_);
if (v_isSharedCheck_5314_ == 0)
{
v___x_5309_ = v___x_5275_;
v_isShared_5310_ = v_isSharedCheck_5314_;
goto v_resetjp_5308_;
}
else
{
lean_inc(v_a_5307_);
lean_dec(v___x_5275_);
v___x_5309_ = lean_box(0);
v_isShared_5310_ = v_isSharedCheck_5314_;
goto v_resetjp_5308_;
}
v_resetjp_5308_:
{
lean_object* v___x_5312_; 
if (v_isShared_5310_ == 0)
{
v___x_5312_ = v___x_5309_;
goto v_reusejp_5311_;
}
else
{
lean_object* v_reuseFailAlloc_5313_; 
v_reuseFailAlloc_5313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5313_, 0, v_a_5307_);
v___x_5312_ = v_reuseFailAlloc_5313_;
goto v_reusejp_5311_;
}
v_reusejp_5311_:
{
return v___x_5312_;
}
}
}
}
else
{
lean_object* v___x_5315_; lean_object* v___x_5316_; lean_object* v___x_5317_; 
v___x_5315_ = lean_unsigned_to_nat(5u);
v___x_5316_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_5315_);
lean_dec(v_stx_2393_);
v___x_5317_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_5316_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_, v_a_2399_);
if (lean_obj_tag(v___x_5317_) == 0)
{
lean_object* v_a_5318_; lean_object* v___x_5320_; uint8_t v_isShared_5321_; uint8_t v_isSharedCheck_5326_; 
v_a_5318_ = lean_ctor_get(v___x_5317_, 0);
v_isSharedCheck_5326_ = !lean_is_exclusive(v___x_5317_);
if (v_isSharedCheck_5326_ == 0)
{
v___x_5320_ = v___x_5317_;
v_isShared_5321_ = v_isSharedCheck_5326_;
goto v_resetjp_5319_;
}
else
{
lean_inc(v_a_5318_);
lean_dec(v___x_5317_);
v___x_5320_ = lean_box(0);
v_isShared_5321_ = v_isSharedCheck_5326_;
goto v_resetjp_5319_;
}
v_resetjp_5319_:
{
lean_object* v___x_5322_; lean_object* v___x_5324_; 
v___x_5322_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_5318_);
if (v_isShared_5321_ == 0)
{
lean_ctor_set(v___x_5320_, 0, v___x_5322_);
v___x_5324_ = v___x_5320_;
goto v_reusejp_5323_;
}
else
{
lean_object* v_reuseFailAlloc_5325_; 
v_reuseFailAlloc_5325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5325_, 0, v___x_5322_);
v___x_5324_ = v_reuseFailAlloc_5325_;
goto v_reusejp_5323_;
}
v_reusejp_5323_:
{
return v___x_5324_;
}
}
}
else
{
return v___x_5317_;
}
}
}
else
{
lean_dec(v_stx_2393_);
goto v___jp_5259_;
}
}
else
{
lean_dec(v___x_5264_);
lean_dec(v_stx_2393_);
goto v___jp_5259_;
}
v___jp_5259_:
{
lean_object* v___x_5260_; lean_object* v___x_5261_; lean_object* v___x_5262_; 
v___x_5260_ = l_Lean_NameSet_empty;
v___x_5261_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_5261_, 0, v___x_5258_);
lean_ctor_set(v___x_5261_, 1, v___x_5260_);
lean_ctor_set_uint8(v___x_5261_, sizeof(void*)*2, v___x_2696_);
lean_ctor_set_uint8(v___x_5261_, sizeof(void*)*2 + 1, v___x_2696_);
lean_ctor_set_uint8(v___x_5261_, sizeof(void*)*2 + 2, v___x_2694_);
lean_ctor_set_uint8(v___x_5261_, sizeof(void*)*2 + 3, v___x_2694_);
v___x_5262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5262_, 0, v___x_5261_);
return v___x_5262_;
}
}
}
else
{
lean_object* v___x_5327_; lean_object* v___x_5328_; lean_object* v___x_5329_; lean_object* v___x_5330_; 
lean_del_object(v___x_2452_);
lean_dec(v_stx_2393_);
v___x_5327_ = lean_unsigned_to_nat(0u);
v___x_5328_ = l_Lean_NameSet_empty;
v___x_5329_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_5329_, 0, v___x_5327_);
lean_ctor_set(v___x_5329_, 1, v___x_5328_);
lean_ctor_set_uint8(v___x_5329_, sizeof(void*)*2, v___x_2693_);
lean_ctor_set_uint8(v___x_5329_, sizeof(void*)*2 + 1, v___x_2694_);
lean_ctor_set_uint8(v___x_5329_, sizeof(void*)*2 + 2, v___x_2693_);
lean_ctor_set_uint8(v___x_5329_, sizeof(void*)*2 + 3, v___x_2694_);
v___x_5330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5330_, 0, v___x_5329_);
return v___x_5330_;
}
}
else
{
lean_object* v___x_5331_; lean_object* v___x_5332_; 
lean_del_object(v___x_2452_);
lean_dec(v_stx_2393_);
v___x_5331_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__95, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__95_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__95);
v___x_5332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5332_, 0, v___x_5331_);
return v___x_5332_;
}
v___jp_2468_:
{
lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; uint8_t v___x_2478_; 
v___x_2475_ = lean_unsigned_to_nat(2u);
v___x_2476_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2475_);
v___x_2477_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
v___x_2478_ = l_Lean_Syntax_isOfKind(v___x_2476_, v___x_2477_);
if (v___x_2478_ == 0)
{
lean_object* v___x_2479_; uint8_t v___x_2480_; 
v___x_2479_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_2480_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2479_);
if (v___x_2480_ == 0)
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v_env_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
lean_inc_n(v_stx_2393_, 2);
v___x_2481_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_2482_ = lean_st_ref_get(v___y_2474_);
v_env_2483_ = lean_ctor_get(v___x_2482_, 0);
lean_inc_ref(v_env_2483_);
lean_dec(v___x_2482_);
v___x_2484_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2485_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2484_, v_env_2483_, v___x_2481_);
v___x_2486_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2487_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_2485_, v___x_2486_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_);
lean_dec(v___x_2485_);
if (lean_obj_tag(v___x_2487_) == 0)
{
lean_object* v_a_2488_; lean_object* v___x_2490_; uint8_t v_isShared_2491_; uint8_t v_isSharedCheck_2518_; 
v_a_2488_ = lean_ctor_get(v___x_2487_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v___x_2487_);
if (v_isSharedCheck_2518_ == 0)
{
v___x_2490_ = v___x_2487_;
v_isShared_2491_ = v_isSharedCheck_2518_;
goto v_resetjp_2489_;
}
else
{
lean_inc(v_a_2488_);
lean_dec(v___x_2487_);
v___x_2490_ = lean_box(0);
v_isShared_2491_ = v_isSharedCheck_2518_;
goto v_resetjp_2489_;
}
v_resetjp_2489_:
{
lean_object* v_fst_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2516_; 
v_fst_2492_ = lean_ctor_get(v_a_2488_, 0);
v_isSharedCheck_2516_ = !lean_is_exclusive(v_a_2488_);
if (v_isSharedCheck_2516_ == 0)
{
lean_object* v_unused_2517_; 
v_unused_2517_ = lean_ctor_get(v_a_2488_, 1);
lean_dec(v_unused_2517_);
v___x_2494_ = v_a_2488_;
v_isShared_2495_ = v_isSharedCheck_2516_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_fst_2492_);
lean_dec(v_a_2488_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2516_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
if (lean_obj_tag(v_fst_2492_) == 0)
{
lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2499_; 
lean_del_object(v___x_2490_);
v___x_2496_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2497_ = l_Lean_MessageData_ofName(v___x_2481_);
lean_inc_ref(v___x_2497_);
if (v_isShared_2495_ == 0)
{
lean_ctor_set_tag(v___x_2494_, 7);
lean_ctor_set(v___x_2494_, 1, v___x_2497_);
lean_ctor_set(v___x_2494_, 0, v___x_2496_);
v___x_2499_ = v___x_2494_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v___x_2496_);
lean_ctor_set(v_reuseFailAlloc_2511_, 1, v___x_2497_);
v___x_2499_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
v___x_2500_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2499_);
lean_ctor_set(v___x_2501_, 1, v___x_2500_);
v___x_2502_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_2503_ = l_Lean_indentD(v___x_2502_);
v___x_2504_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2501_);
lean_ctor_set(v___x_2504_, 1, v___x_2503_);
v___x_2505_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2506_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2504_);
lean_ctor_set(v___x_2506_, 1, v___x_2505_);
v___x_2507_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2507_, 0, v___x_2506_);
lean_ctor_set(v___x_2507_, 1, v___x_2497_);
v___x_2508_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_2509_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2509_, 0, v___x_2507_);
lean_ctor_set(v___x_2509_, 1, v___x_2508_);
v___x_2510_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2509_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_);
return v___x_2510_;
}
}
else
{
lean_object* v_val_2512_; lean_object* v___x_2514_; 
lean_del_object(v___x_2494_);
lean_dec(v___x_2481_);
lean_dec(v_stx_2393_);
v_val_2512_ = lean_ctor_get(v_fst_2492_, 0);
lean_inc(v_val_2512_);
lean_dec_ref_known(v_fst_2492_, 1);
if (v_isShared_2491_ == 0)
{
lean_ctor_set(v___x_2490_, 0, v_val_2512_);
v___x_2514_ = v___x_2490_;
goto v_reusejp_2513_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v_val_2512_);
v___x_2514_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2513_;
}
v_reusejp_2513_:
{
return v___x_2514_;
}
}
}
}
}
else
{
lean_object* v_a_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2526_; 
lean_dec(v___x_2481_);
lean_dec(v_stx_2393_);
v_a_2519_ = lean_ctor_get(v___x_2487_, 0);
v_isSharedCheck_2526_ = !lean_is_exclusive(v___x_2487_);
if (v_isSharedCheck_2526_ == 0)
{
v___x_2521_ = v___x_2487_;
v_isShared_2522_ = v_isSharedCheck_2526_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_a_2519_);
lean_dec(v___x_2487_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2526_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
lean_object* v___x_2524_; 
if (v_isShared_2522_ == 0)
{
v___x_2524_ = v___x_2521_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2525_; 
v_reuseFailAlloc_2525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2525_, 0, v_a_2519_);
v___x_2524_ = v_reuseFailAlloc_2525_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
return v___x_2524_;
}
}
}
}
else
{
lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; 
v___x_2527_ = lean_unsigned_to_nat(5u);
v___x_2528_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2527_);
lean_dec(v_stx_2393_);
v___x_2529_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2528_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_);
if (lean_obj_tag(v___x_2529_) == 0)
{
lean_object* v_a_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2538_; 
v_a_2530_ = lean_ctor_get(v___x_2529_, 0);
v_isSharedCheck_2538_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2538_ == 0)
{
v___x_2532_ = v___x_2529_;
v_isShared_2533_ = v_isSharedCheck_2538_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_a_2530_);
lean_dec(v___x_2529_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2538_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___x_2534_; lean_object* v___x_2536_; 
v___x_2534_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_2530_);
if (v_isShared_2533_ == 0)
{
lean_ctor_set(v___x_2532_, 0, v___x_2534_);
v___x_2536_ = v___x_2532_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v___x_2534_);
v___x_2536_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
return v___x_2536_;
}
}
}
else
{
return v___x_2529_;
}
}
}
else
{
lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2539_ = lean_unsigned_to_nat(7u);
v___x_2540_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2539_);
v___x_2541_ = lean_unsigned_to_nat(8u);
v___x_2542_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2541_);
lean_dec(v_stx_2393_);
v___x_2543_ = l_Lean_Syntax_getOptional_x3f(v___x_2542_);
lean_dec(v___x_2542_);
if (lean_obj_tag(v___x_2543_) == 0)
{
lean_object* v___x_2544_; 
v___x_2544_ = lean_box(0);
v___y_2407_ = v___y_2474_;
v___y_2408_ = v___x_2540_;
v___y_2409_ = v___y_2473_;
v___y_2410_ = v___y_2470_;
v___y_2411_ = v___y_2472_;
v___y_2412_ = v___y_2471_;
v___y_2413_ = v___y_2469_;
v___y_2414_ = v___x_2544_;
goto v___jp_2406_;
}
else
{
lean_object* v_val_2545_; lean_object* v___x_2547_; uint8_t v_isShared_2548_; uint8_t v_isSharedCheck_2552_; 
v_val_2545_ = lean_ctor_get(v___x_2543_, 0);
v_isSharedCheck_2552_ = !lean_is_exclusive(v___x_2543_);
if (v_isSharedCheck_2552_ == 0)
{
v___x_2547_ = v___x_2543_;
v_isShared_2548_ = v_isSharedCheck_2552_;
goto v_resetjp_2546_;
}
else
{
lean_inc(v_val_2545_);
lean_dec(v___x_2543_);
v___x_2547_ = lean_box(0);
v_isShared_2548_ = v_isSharedCheck_2552_;
goto v_resetjp_2546_;
}
v_resetjp_2546_:
{
lean_object* v___x_2550_; 
if (v_isShared_2548_ == 0)
{
v___x_2550_ = v___x_2547_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2551_; 
v_reuseFailAlloc_2551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2551_, 0, v_val_2545_);
v___x_2550_ = v_reuseFailAlloc_2551_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
v___y_2407_ = v___y_2474_;
v___y_2408_ = v___x_2540_;
v___y_2409_ = v___y_2473_;
v___y_2410_ = v___y_2470_;
v___y_2411_ = v___y_2472_;
v___y_2412_ = v___y_2471_;
v___y_2413_ = v___y_2469_;
v___y_2414_ = v___x_2550_;
goto v___jp_2406_;
}
}
}
}
}
v___jp_2553_:
{
lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; uint8_t v___x_2563_; 
v___x_2560_ = lean_unsigned_to_nat(2u);
v___x_2561_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2560_);
v___x_2562_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__1));
v___x_2563_ = l_Lean_Syntax_isOfKind(v___x_2561_, v___x_2562_);
if (v___x_2563_ == 0)
{
lean_object* v___x_2564_; uint8_t v___x_2565_; 
lean_del_object(v___x_2452_);
v___x_2564_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_2565_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2564_);
if (v___x_2565_ == 0)
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v_env_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
lean_inc_n(v_stx_2393_, 2);
v___x_2566_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_2567_ = lean_st_ref_get(v___y_2559_);
v_env_2568_ = lean_ctor_get(v___x_2567_, 0);
lean_inc_ref(v_env_2568_);
lean_dec(v___x_2567_);
v___x_2569_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2570_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2569_, v_env_2568_, v___x_2566_);
v___x_2571_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2572_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_2570_, v___x_2571_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
lean_dec(v___x_2570_);
if (lean_obj_tag(v___x_2572_) == 0)
{
lean_object* v_a_2573_; lean_object* v___x_2575_; uint8_t v_isShared_2576_; uint8_t v_isSharedCheck_2603_; 
v_a_2573_ = lean_ctor_get(v___x_2572_, 0);
v_isSharedCheck_2603_ = !lean_is_exclusive(v___x_2572_);
if (v_isSharedCheck_2603_ == 0)
{
v___x_2575_ = v___x_2572_;
v_isShared_2576_ = v_isSharedCheck_2603_;
goto v_resetjp_2574_;
}
else
{
lean_inc(v_a_2573_);
lean_dec(v___x_2572_);
v___x_2575_ = lean_box(0);
v_isShared_2576_ = v_isSharedCheck_2603_;
goto v_resetjp_2574_;
}
v_resetjp_2574_:
{
lean_object* v_fst_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2601_; 
v_fst_2577_ = lean_ctor_get(v_a_2573_, 0);
v_isSharedCheck_2601_ = !lean_is_exclusive(v_a_2573_);
if (v_isSharedCheck_2601_ == 0)
{
lean_object* v_unused_2602_; 
v_unused_2602_ = lean_ctor_get(v_a_2573_, 1);
lean_dec(v_unused_2602_);
v___x_2579_ = v_a_2573_;
v_isShared_2580_ = v_isSharedCheck_2601_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_fst_2577_);
lean_dec(v_a_2573_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2601_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
if (lean_obj_tag(v_fst_2577_) == 0)
{
lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2584_; 
lean_del_object(v___x_2575_);
v___x_2581_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2582_ = l_Lean_MessageData_ofName(v___x_2566_);
lean_inc_ref(v___x_2582_);
if (v_isShared_2580_ == 0)
{
lean_ctor_set_tag(v___x_2579_, 7);
lean_ctor_set(v___x_2579_, 1, v___x_2582_);
lean_ctor_set(v___x_2579_, 0, v___x_2581_);
v___x_2584_ = v___x_2579_;
goto v_reusejp_2583_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v___x_2581_);
lean_ctor_set(v_reuseFailAlloc_2596_, 1, v___x_2582_);
v___x_2584_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2583_;
}
v_reusejp_2583_:
{
lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; 
v___x_2585_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2586_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2586_, 0, v___x_2584_);
lean_ctor_set(v___x_2586_, 1, v___x_2585_);
v___x_2587_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_2588_ = l_Lean_indentD(v___x_2587_);
v___x_2589_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2586_);
lean_ctor_set(v___x_2589_, 1, v___x_2588_);
v___x_2590_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2589_);
lean_ctor_set(v___x_2591_, 1, v___x_2590_);
v___x_2592_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
lean_ctor_set(v___x_2592_, 1, v___x_2582_);
v___x_2593_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_2594_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2592_);
lean_ctor_set(v___x_2594_, 1, v___x_2593_);
v___x_2595_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2594_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
return v___x_2595_;
}
}
else
{
lean_object* v_val_2597_; lean_object* v___x_2599_; 
lean_del_object(v___x_2579_);
lean_dec(v___x_2566_);
lean_dec(v_stx_2393_);
v_val_2597_ = lean_ctor_get(v_fst_2577_, 0);
lean_inc(v_val_2597_);
lean_dec_ref_known(v_fst_2577_, 1);
if (v_isShared_2576_ == 0)
{
lean_ctor_set(v___x_2575_, 0, v_val_2597_);
v___x_2599_ = v___x_2575_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v_val_2597_);
v___x_2599_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
return v___x_2599_;
}
}
}
}
}
else
{
lean_object* v_a_2604_; lean_object* v___x_2606_; uint8_t v_isShared_2607_; uint8_t v_isSharedCheck_2611_; 
lean_dec(v___x_2566_);
lean_dec(v_stx_2393_);
v_a_2604_ = lean_ctor_get(v___x_2572_, 0);
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2572_);
if (v_isSharedCheck_2611_ == 0)
{
v___x_2606_ = v___x_2572_;
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
else
{
lean_inc(v_a_2604_);
lean_dec(v___x_2572_);
v___x_2606_ = lean_box(0);
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
v_resetjp_2605_:
{
lean_object* v___x_2609_; 
if (v_isShared_2607_ == 0)
{
v___x_2609_ = v___x_2606_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_a_2604_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
}
else
{
lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; 
v___x_2612_ = lean_unsigned_to_nat(5u);
v___x_2613_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2612_);
lean_dec(v_stx_2393_);
v___x_2614_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2613_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
if (lean_obj_tag(v___x_2614_) == 0)
{
lean_object* v_a_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2623_; 
v_a_2615_ = lean_ctor_get(v___x_2614_, 0);
v_isSharedCheck_2623_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2623_ == 0)
{
v___x_2617_ = v___x_2614_;
v_isShared_2618_ = v_isSharedCheck_2623_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_a_2615_);
lean_dec(v___x_2614_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2623_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v___x_2619_; lean_object* v___x_2621_; 
v___x_2619_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_2615_);
if (v_isShared_2618_ == 0)
{
lean_ctor_set(v___x_2617_, 0, v___x_2619_);
v___x_2621_ = v___x_2617_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v___x_2619_);
v___x_2621_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
return v___x_2621_;
}
}
}
else
{
return v___x_2614_;
}
}
}
else
{
lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; uint8_t v___x_2627_; 
v___x_2624_ = lean_unsigned_to_nat(3u);
v___x_2625_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2624_);
v___x_2626_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__13));
v___x_2627_ = l_Lean_Syntax_isOfKind(v___x_2625_, v___x_2626_);
if (v___x_2627_ == 0)
{
lean_object* v___x_2628_; uint8_t v___x_2629_; 
lean_del_object(v___x_2452_);
v___x_2628_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofElem___closed__3));
lean_inc(v_stx_2393_);
v___x_2629_ = l_Lean_Syntax_isOfKind(v_stx_2393_, v___x_2628_);
if (v___x_2629_ == 0)
{
lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v_env_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; 
lean_inc_n(v_stx_2393_, 2);
v___x_2630_ = l_Lean_Syntax_getKind(v_stx_2393_);
v___x_2631_ = lean_st_ref_get(v___y_2559_);
v_env_2632_ = lean_ctor_get(v___x_2631_, 0);
lean_inc_ref(v_env_2632_);
lean_dec(v___x_2631_);
v___x_2633_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2634_ = l_Lean_KeyedDeclsAttribute_getEntries___redArg(v___x_2633_, v_env_2632_, v___x_2630_);
v___x_2635_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg___closed__0));
v___x_2636_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_2393_, v___x_2634_, v___x_2635_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
lean_dec(v___x_2634_);
if (lean_obj_tag(v___x_2636_) == 0)
{
lean_object* v_a_2637_; lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2667_; 
v_a_2637_ = lean_ctor_get(v___x_2636_, 0);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2636_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2639_ = v___x_2636_;
v_isShared_2640_ = v_isSharedCheck_2667_;
goto v_resetjp_2638_;
}
else
{
lean_inc(v_a_2637_);
lean_dec(v___x_2636_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2667_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v_fst_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2665_; 
v_fst_2641_ = lean_ctor_get(v_a_2637_, 0);
v_isSharedCheck_2665_ = !lean_is_exclusive(v_a_2637_);
if (v_isSharedCheck_2665_ == 0)
{
lean_object* v_unused_2666_; 
v_unused_2666_ = lean_ctor_get(v_a_2637_, 1);
lean_dec(v_unused_2666_);
v___x_2643_ = v_a_2637_;
v_isShared_2644_ = v_isSharedCheck_2665_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_fst_2641_);
lean_dec(v_a_2637_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2665_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
if (lean_obj_tag(v_fst_2641_) == 0)
{
lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2648_; 
lean_del_object(v___x_2639_);
v___x_2645_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__5);
v___x_2646_ = l_Lean_MessageData_ofName(v___x_2630_);
lean_inc_ref(v___x_2646_);
if (v_isShared_2644_ == 0)
{
lean_ctor_set_tag(v___x_2643_, 7);
lean_ctor_set(v___x_2643_, 1, v___x_2646_);
lean_ctor_set(v___x_2643_, 0, v___x_2645_);
v___x_2648_ = v___x_2643_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v___x_2645_);
lean_ctor_set(v_reuseFailAlloc_2660_, 1, v___x_2646_);
v___x_2648_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; 
v___x_2649_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__7);
v___x_2650_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2650_, 0, v___x_2648_);
lean_ctor_set(v___x_2650_, 1, v___x_2649_);
v___x_2651_ = l_Lean_MessageData_ofSyntax(v_stx_2393_);
v___x_2652_ = l_Lean_indentD(v___x_2651_);
v___x_2653_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2653_, 0, v___x_2650_);
lean_ctor_set(v___x_2653_, 1, v___x_2652_);
v___x_2654_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__9);
v___x_2655_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2655_, 0, v___x_2653_);
lean_ctor_set(v___x_2655_, 1, v___x_2654_);
v___x_2656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2655_);
lean_ctor_set(v___x_2656_, 1, v___x_2646_);
v___x_2657_ = lean_obj_once(&l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11, &l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11_once, _init_l_Lean_Elab_Do_InferControlInfo_ofElem___closed__11);
v___x_2658_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2658_, 0, v___x_2656_);
lean_ctor_set(v___x_2658_, 1, v___x_2657_);
v___x_2659_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v___x_2658_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
return v___x_2659_;
}
}
else
{
lean_object* v_val_2661_; lean_object* v___x_2663_; 
lean_del_object(v___x_2643_);
lean_dec(v___x_2630_);
lean_dec(v_stx_2393_);
v_val_2661_ = lean_ctor_get(v_fst_2641_, 0);
lean_inc(v_val_2661_);
lean_dec_ref_known(v_fst_2641_, 1);
if (v_isShared_2640_ == 0)
{
lean_ctor_set(v___x_2639_, 0, v_val_2661_);
v___x_2663_ = v___x_2639_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v_val_2661_);
v___x_2663_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
return v___x_2663_;
}
}
}
}
}
else
{
lean_object* v_a_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2675_; 
lean_dec(v___x_2630_);
lean_dec(v_stx_2393_);
v_a_2668_ = lean_ctor_get(v___x_2636_, 0);
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2636_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2670_ = v___x_2636_;
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_a_2668_);
lean_dec(v___x_2636_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2673_; 
if (v_isShared_2671_ == 0)
{
v___x_2673_ = v___x_2670_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_a_2668_);
v___x_2673_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
return v___x_2673_;
}
}
}
}
else
{
lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2676_ = lean_unsigned_to_nat(5u);
v___x_2677_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2676_);
lean_dec(v_stx_2393_);
v___x_2678_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2677_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v_a_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2687_; 
v_a_2679_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2681_ = v___x_2678_;
v_isShared_2682_ = v_isSharedCheck_2687_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_a_2679_);
lean_dec(v___x_2678_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2687_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v___x_2683_; lean_object* v___x_2685_; 
v___x_2683_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_2679_);
if (v_isShared_2682_ == 0)
{
lean_ctor_set(v___x_2681_, 0, v___x_2683_);
v___x_2685_ = v___x_2681_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v___x_2683_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
else
{
return v___x_2678_;
}
}
}
else
{
lean_object* v___x_2688_; lean_object* v___x_2690_; 
lean_dec(v_stx_2393_);
v___x_2688_ = l_Lean_Elab_Do_ControlInfo_pure;
if (v_isShared_2453_ == 0)
{
lean_ctor_set(v___x_2452_, 0, v___x_2688_);
v___x_2690_ = v___x_2452_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v___x_2688_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
return v___x_2690_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5334_; lean_object* v___x_5336_; uint8_t v_isShared_5337_; uint8_t v_isSharedCheck_5341_; 
lean_dec(v_stx_2393_);
v_a_5334_ = lean_ctor_get(v___x_2449_, 0);
v_isSharedCheck_5341_ = !lean_is_exclusive(v___x_2449_);
if (v_isSharedCheck_5341_ == 0)
{
v___x_5336_ = v___x_2449_;
v_isShared_5337_ = v_isSharedCheck_5341_;
goto v_resetjp_5335_;
}
else
{
lean_inc(v_a_5334_);
lean_dec(v___x_2449_);
v___x_5336_ = lean_box(0);
v_isShared_5337_ = v_isSharedCheck_5341_;
goto v_resetjp_5335_;
}
v_resetjp_5335_:
{
lean_object* v___x_5339_; 
if (v_isShared_5337_ == 0)
{
v___x_5339_ = v___x_5336_;
goto v_reusejp_5338_;
}
else
{
lean_object* v_reuseFailAlloc_5340_; 
v_reuseFailAlloc_5340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5340_, 0, v_a_5334_);
v___x_5339_ = v_reuseFailAlloc_5340_;
goto v_reusejp_5338_;
}
v_reusejp_5338_:
{
return v___x_5339_;
}
}
}
v___jp_2401_:
{
lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2404_ = l_Lean_Elab_Do_ControlInfo_alternative(v___y_2402_, v_bodyInfo_2403_);
v___x_2405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2405_, 0, v___x_2404_);
return v___x_2405_;
}
v___jp_2406_:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2415_ = ((lean_object*)(l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___closed__6));
v___x_2416_ = lean_box(0);
v___x_2417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2417_, 0, v___y_2408_);
v___x_2418_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v___x_2415_, v___x_2416_, v___x_2417_, v___y_2414_, v___y_2413_, v___y_2410_, v___y_2412_, v___y_2411_, v___y_2409_, v___y_2407_);
return v___x_2418_;
}
v___jp_2419_:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; 
v___x_2426_ = lean_unsigned_to_nat(5u);
v___x_2427_ = l_Lean_Syntax_getArg(v_stx_2393_, v___x_2426_);
lean_dec(v_stx_2393_);
v___x_2428_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v___x_2427_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_);
if (lean_obj_tag(v___x_2428_) == 0)
{
lean_object* v_a_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2437_; 
v_a_2429_ = lean_ctor_get(v___x_2428_, 0);
v_isSharedCheck_2437_ = !lean_is_exclusive(v___x_2428_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2431_ = v___x_2428_;
v_isShared_2432_ = v_isSharedCheck_2437_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_a_2429_);
lean_dec(v___x_2428_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2437_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2433_; lean_object* v___x_2435_; 
v___x_2433_ = l_Lean_Elab_Do_ControlInfo_forLoop(v_a_2429_);
if (v_isShared_2432_ == 0)
{
lean_ctor_set(v___x_2431_, 0, v___x_2433_);
v___x_2435_ = v___x_2431_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v___x_2433_);
v___x_2435_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
return v___x_2435_;
}
}
}
else
{
return v___x_2428_;
}
}
v___jp_2438_:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; 
v___x_2439_ = l_Lean_Elab_Do_ControlInfo_pure;
v___x_2440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2440_, 0, v___x_2439_);
return v___x_2440_;
}
v___jp_2441_:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2444_ = l_Lean_Elab_Do_ControlInfo_alternative(v___y_2442_, v_bodyInfo_2443_);
v___x_2445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2444_);
return v___x_2445_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17(lean_object* v_as_5342_, size_t v_sz_5343_, size_t v_i_5344_, lean_object* v_b_5345_, lean_object* v___y_5346_, lean_object* v___y_5347_, lean_object* v___y_5348_, lean_object* v___y_5349_, lean_object* v___y_5350_, lean_object* v___y_5351_){
_start:
{
uint8_t v___x_5353_; 
v___x_5353_ = lean_usize_dec_lt(v_i_5344_, v_sz_5343_);
if (v___x_5353_ == 0)
{
lean_object* v___x_5354_; 
v___x_5354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5354_, 0, v_b_5345_);
return v___x_5354_;
}
else
{
lean_object* v_a_5355_; lean_object* v___x_5356_; 
v_a_5355_ = lean_array_uget_borrowed(v_as_5342_, v_i_5344_);
lean_inc(v_a_5355_);
v___x_5356_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_a_5355_, v___y_5346_, v___y_5347_, v___y_5348_, v___y_5349_, v___y_5350_, v___y_5351_);
if (lean_obj_tag(v___x_5356_) == 0)
{
lean_object* v_a_5357_; lean_object* v___x_5358_; size_t v___x_5359_; size_t v___x_5360_; 
v_a_5357_ = lean_ctor_get(v___x_5356_, 0);
lean_inc(v_a_5357_);
lean_dec_ref_known(v___x_5356_, 1);
v___x_5358_ = l_Lean_Elab_Do_ControlInfo_sequence(v_b_5345_, v_a_5357_);
v___x_5359_ = ((size_t)1ULL);
v___x_5360_ = lean_usize_add(v_i_5344_, v___x_5359_);
v_i_5344_ = v___x_5360_;
v_b_5345_ = v___x_5358_;
goto _start;
}
else
{
lean_dec_ref(v_b_5345_);
return v___x_5356_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq(lean_object* v_stx_5362_, lean_object* v_a_5363_, lean_object* v_a_5364_, lean_object* v_a_5365_, lean_object* v_a_5366_, lean_object* v_a_5367_, lean_object* v_a_5368_){
_start:
{
lean_object* v_info_5370_; lean_object* v___x_5371_; size_t v_sz_5372_; size_t v___x_5373_; lean_object* v___x_5374_; 
v_info_5370_ = lean_obj_once(&l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0, &l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0_once, _init_l_Lean_Elab_Do_instInhabitedControlInfo_default___closed__0);
v___x_5371_ = l_Lean_Parser_Term_getDoElems(v_stx_5362_);
v_sz_5372_ = lean_array_size(v___x_5371_);
v___x_5373_ = ((size_t)0ULL);
v___x_5374_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17(v___x_5371_, v_sz_5372_, v___x_5373_, v_info_5370_, v_a_5363_, v_a_5364_, v_a_5365_, v_a_5366_, v_a_5367_, v_a_5368_);
lean_dec_ref(v___x_5371_);
return v___x_5374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq___boxed(lean_object* v_stx_5375_, lean_object* v_a_5376_, lean_object* v_a_5377_, lean_object* v_a_5378_, lean_object* v_a_5379_, lean_object* v_a_5380_, lean_object* v_a_5381_, lean_object* v_a_5382_){
_start:
{
lean_object* v_res_5383_; 
v_res_5383_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_stx_5375_, v_a_5376_, v_a_5377_, v_a_5378_, v_a_5379_, v_a_5380_, v_a_5381_);
lean_dec(v_a_5381_);
lean_dec_ref(v_a_5380_);
lean_dec(v_a_5379_);
lean_dec_ref(v_a_5378_);
lean_dec(v_a_5377_);
lean_dec_ref(v_a_5376_);
return v_res_5383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofOptionSeq___boxed(lean_object* v_stx_x3f_5384_, lean_object* v_a_5385_, lean_object* v_a_5386_, lean_object* v_a_5387_, lean_object* v_a_5388_, lean_object* v_a_5389_, lean_object* v_a_5390_, lean_object* v_a_5391_){
_start:
{
lean_object* v_res_5392_; 
v_res_5392_ = l_Lean_Elab_Do_InferControlInfo_ofOptionSeq(v_stx_x3f_5384_, v_a_5385_, v_a_5386_, v_a_5387_, v_a_5388_, v_a_5389_, v_a_5390_);
lean_dec(v_a_5390_);
lean_dec_ref(v_a_5389_);
lean_dec(v_a_5388_);
lean_dec_ref(v_a_5387_);
lean_dec(v_a_5386_);
lean_dec_ref(v_a_5385_);
return v_res_5392_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5___boxed(lean_object* v_as_5393_, lean_object* v_sz_5394_, lean_object* v_i_5395_, lean_object* v_b_5396_, lean_object* v___y_5397_, lean_object* v___y_5398_, lean_object* v___y_5399_, lean_object* v___y_5400_, lean_object* v___y_5401_, lean_object* v___y_5402_, lean_object* v___y_5403_){
_start:
{
size_t v_sz_boxed_5404_; size_t v_i_boxed_5405_; lean_object* v_res_5406_; 
v_sz_boxed_5404_ = lean_unbox_usize(v_sz_5394_);
lean_dec(v_sz_5394_);
v_i_boxed_5405_ = lean_unbox_usize(v_i_5395_);
lean_dec(v_i_5395_);
v_res_5406_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__5(v_as_5393_, v_sz_boxed_5404_, v_i_boxed_5405_, v_b_5396_, v___y_5397_, v___y_5398_, v___y_5399_, v___y_5400_, v___y_5401_, v___y_5402_);
lean_dec(v___y_5402_);
lean_dec_ref(v___y_5401_);
lean_dec(v___y_5400_);
lean_dec_ref(v___y_5399_);
lean_dec(v___y_5398_);
lean_dec_ref(v___y_5397_);
lean_dec_ref(v_as_5393_);
return v_res_5406_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17___boxed(lean_object* v_as_5407_, lean_object* v_sz_5408_, lean_object* v_i_5409_, lean_object* v_b_5410_, lean_object* v___y_5411_, lean_object* v___y_5412_, lean_object* v___y_5413_, lean_object* v___y_5414_, lean_object* v___y_5415_, lean_object* v___y_5416_, lean_object* v___y_5417_){
_start:
{
size_t v_sz_boxed_5418_; size_t v_i_boxed_5419_; lean_object* v_res_5420_; 
v_sz_boxed_5418_ = lean_unbox_usize(v_sz_5408_);
lean_dec(v_sz_5408_);
v_i_boxed_5419_ = lean_unbox_usize(v_i_5409_);
lean_dec(v_i_5409_);
v_res_5420_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofSeq_spec__17(v_as_5407_, v_sz_boxed_5418_, v_i_boxed_5419_, v_b_5410_, v___y_5411_, v___y_5412_, v___y_5413_, v___y_5414_, v___y_5415_, v___y_5416_);
lean_dec(v___y_5416_);
lean_dec_ref(v___y_5415_);
lean_dec(v___y_5414_);
lean_dec_ref(v___y_5413_);
lean_dec(v___y_5412_);
lean_dec_ref(v___y_5411_);
lean_dec_ref(v_as_5407_);
return v_res_5420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign___boxed(lean_object* v_reassigned_5421_, lean_object* v_rhs_x3f_5422_, lean_object* v_otherwise_x3f_5423_, lean_object* v_body_x3f_5424_, lean_object* v_a_5425_, lean_object* v_a_5426_, lean_object* v_a_5427_, lean_object* v_a_5428_, lean_object* v_a_5429_, lean_object* v_a_5430_, lean_object* v_a_5431_){
_start:
{
lean_object* v_res_5432_; 
v_res_5432_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassign(v_reassigned_5421_, v_rhs_x3f_5422_, v_otherwise_x3f_5423_, v_body_x3f_5424_, v_a_5425_, v_a_5426_, v_a_5427_, v_a_5428_, v_a_5429_, v_a_5430_);
lean_dec(v_a_5430_);
lean_dec_ref(v_a_5429_);
lean_dec(v_a_5428_);
lean_dec_ref(v_a_5427_);
lean_dec(v_a_5426_);
lean_dec_ref(v_a_5425_);
return v_res_5432_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10___boxed(lean_object* v___x_5433_, lean_object* v_as_5434_, lean_object* v_sz_5435_, lean_object* v_i_5436_, lean_object* v_b_5437_, lean_object* v___y_5438_, lean_object* v___y_5439_, lean_object* v___y_5440_, lean_object* v___y_5441_, lean_object* v___y_5442_, lean_object* v___y_5443_, lean_object* v___y_5444_){
_start:
{
uint8_t v___x_190125__boxed_5445_; size_t v_sz_boxed_5446_; size_t v_i_boxed_5447_; lean_object* v_res_5448_; 
v___x_190125__boxed_5445_ = lean_unbox(v___x_5433_);
v_sz_boxed_5446_ = lean_unbox_usize(v_sz_5435_);
lean_dec(v_sz_5435_);
v_i_boxed_5447_ = lean_unbox_usize(v_i_5436_);
lean_dec(v_i_5436_);
v_res_5448_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__10(v___x_190125__boxed_5445_, v_as_5434_, v_sz_boxed_5446_, v_i_boxed_5447_, v_b_5437_, v___y_5438_, v___y_5439_, v___y_5440_, v___y_5441_, v___y_5442_, v___y_5443_);
lean_dec(v___y_5443_);
lean_dec_ref(v___y_5442_);
lean_dec(v___y_5441_);
lean_dec_ref(v___y_5440_);
lean_dec(v___y_5439_);
lean_dec_ref(v___y_5438_);
lean_dec_ref(v_as_5434_);
return v_res_5448_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14___boxed(lean_object* v___x_5449_, lean_object* v_as_5450_, lean_object* v_sz_5451_, lean_object* v_i_5452_, lean_object* v_b_5453_, lean_object* v___y_5454_, lean_object* v___y_5455_, lean_object* v___y_5456_, lean_object* v___y_5457_, lean_object* v___y_5458_, lean_object* v___y_5459_, lean_object* v___y_5460_){
_start:
{
uint8_t v___x_190172__boxed_5461_; size_t v_sz_boxed_5462_; size_t v_i_boxed_5463_; lean_object* v_res_5464_; 
v___x_190172__boxed_5461_ = lean_unbox(v___x_5449_);
v_sz_boxed_5462_ = lean_unbox_usize(v_sz_5451_);
lean_dec(v_sz_5451_);
v_i_boxed_5463_ = lean_unbox_usize(v_i_5452_);
lean_dec(v_i_5452_);
v_res_5464_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__14(v___x_190172__boxed_5461_, v_as_5450_, v_sz_boxed_5462_, v_i_boxed_5463_, v_b_5453_, v___y_5454_, v___y_5455_, v___y_5456_, v___y_5457_, v___y_5458_, v___y_5459_);
lean_dec(v___y_5459_);
lean_dec_ref(v___y_5458_);
lean_dec(v___y_5457_);
lean_dec_ref(v___y_5456_);
lean_dec(v___y_5455_);
lean_dec_ref(v___y_5454_);
lean_dec_ref(v_as_5450_);
return v_res_5464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11___boxed(lean_object* v_as_5465_, lean_object* v_sz_5466_, lean_object* v_i_5467_, lean_object* v_b_5468_, lean_object* v___y_5469_, lean_object* v___y_5470_, lean_object* v___y_5471_, lean_object* v___y_5472_, lean_object* v___y_5473_, lean_object* v___y_5474_, lean_object* v___y_5475_){
_start:
{
size_t v_sz_boxed_5476_; size_t v_i_boxed_5477_; lean_object* v_res_5478_; 
v_sz_boxed_5476_ = lean_unbox_usize(v_sz_5466_);
lean_dec(v_sz_5466_);
v_i_boxed_5477_ = lean_unbox_usize(v_i_5467_);
lean_dec(v_i_5467_);
v_res_5478_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__11(v_as_5465_, v_sz_boxed_5476_, v_i_boxed_5477_, v_b_5468_, v___y_5469_, v___y_5470_, v___y_5471_, v___y_5472_, v___y_5473_, v___y_5474_);
lean_dec(v___y_5474_);
lean_dec_ref(v___y_5473_);
lean_dec(v___y_5472_);
lean_dec_ref(v___y_5471_);
lean_dec(v___y_5470_);
lean_dec_ref(v___y_5469_);
lean_dec_ref(v_as_5465_);
return v_res_5478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow___boxed(lean_object* v_reassignment_5479_, lean_object* v_decl_5480_, lean_object* v_a_5481_, lean_object* v_a_5482_, lean_object* v_a_5483_, lean_object* v_a_5484_, lean_object* v_a_5485_, lean_object* v_a_5486_, lean_object* v_a_5487_){
_start:
{
uint8_t v_reassignment_boxed_5488_; lean_object* v_res_5489_; 
v_reassignment_boxed_5488_ = lean_unbox(v_reassignment_5479_);
v_res_5489_ = l_Lean_Elab_Do_InferControlInfo_ofLetOrReassignArrow(v_reassignment_boxed_5488_, v_decl_5480_, v_a_5481_, v_a_5482_, v_a_5483_, v_a_5484_, v_a_5485_, v_a_5486_);
lean_dec(v_a_5486_);
lean_dec_ref(v_a_5485_);
lean_dec(v_a_5484_);
lean_dec_ref(v_a_5483_);
lean_dec(v_a_5482_);
lean_dec_ref(v_a_5481_);
return v_res_5489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_InferControlInfo_ofElem___boxed(lean_object* v_stx_5490_, lean_object* v_a_5491_, lean_object* v_a_5492_, lean_object* v_a_5493_, lean_object* v_a_5494_, lean_object* v_a_5495_, lean_object* v_a_5496_, lean_object* v_a_5497_){
_start:
{
lean_object* v_res_5498_; 
v_res_5498_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_stx_5490_, v_a_5491_, v_a_5492_, v_a_5493_, v_a_5494_, v_a_5495_, v_a_5496_);
lean_dec(v_a_5496_);
lean_dec_ref(v_a_5495_);
lean_dec(v_a_5494_);
lean_dec_ref(v_a_5493_);
lean_dec(v_a_5492_);
lean_dec_ref(v_a_5491_);
return v_res_5498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(lean_object* v_00_u03b1_5499_, lean_object* v___y_5500_, lean_object* v___y_5501_, lean_object* v___y_5502_, lean_object* v___y_5503_, lean_object* v___y_5504_, lean_object* v___y_5505_){
_start:
{
lean_object* v___x_5507_; 
v___x_5507_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___redArg();
return v___x_5507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8___boxed(lean_object* v_00_u03b1_5508_, lean_object* v___y_5509_, lean_object* v___y_5510_, lean_object* v___y_5511_, lean_object* v___y_5512_, lean_object* v___y_5513_, lean_object* v___y_5514_, lean_object* v___y_5515_){
_start:
{
lean_object* v_res_5516_; 
v_res_5516_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__8(v_00_u03b1_5508_, v___y_5509_, v___y_5510_, v___y_5511_, v___y_5512_, v___y_5513_, v___y_5514_);
lean_dec(v___y_5514_);
lean_dec_ref(v___y_5513_);
lean_dec(v___y_5512_);
lean_dec_ref(v___y_5511_);
lean_dec(v___y_5510_);
lean_dec_ref(v___y_5509_);
return v_res_5516_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6(lean_object* v_00_u03b1_5517_, lean_object* v_ref_5518_, lean_object* v___y_5519_, lean_object* v___y_5520_, lean_object* v___y_5521_, lean_object* v___y_5522_, lean_object* v___y_5523_, lean_object* v___y_5524_){
_start:
{
lean_object* v___x_5526_; 
v___x_5526_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___redArg(v_ref_5518_);
return v___x_5526_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6___boxed(lean_object* v_00_u03b1_5527_, lean_object* v_ref_5528_, lean_object* v___y_5529_, lean_object* v___y_5530_, lean_object* v___y_5531_, lean_object* v___y_5532_, lean_object* v___y_5533_, lean_object* v___y_5534_, lean_object* v___y_5535_){
_start:
{
lean_object* v_res_5536_; 
v_res_5536_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__6(v_00_u03b1_5527_, v_ref_5528_, v___y_5529_, v___y_5530_, v___y_5531_, v___y_5532_, v___y_5533_, v___y_5534_);
lean_dec(v___y_5534_);
lean_dec_ref(v___y_5533_);
lean_dec(v___y_5532_);
lean_dec_ref(v___y_5531_);
lean_dec(v___y_5530_);
lean_dec_ref(v___y_5529_);
return v_res_5536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0(lean_object* v_00_u03b1_5537_, lean_object* v_x_5538_, lean_object* v___y_5539_, lean_object* v___y_5540_, lean_object* v___y_5541_, lean_object* v___y_5542_, lean_object* v___y_5543_, lean_object* v___y_5544_){
_start:
{
lean_object* v___x_5546_; 
v___x_5546_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___redArg(v_x_5538_, v___y_5539_, v___y_5540_, v___y_5541_, v___y_5542_, v___y_5543_, v___y_5544_);
return v___x_5546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0___boxed(lean_object* v_00_u03b1_5547_, lean_object* v_x_5548_, lean_object* v___y_5549_, lean_object* v___y_5550_, lean_object* v___y_5551_, lean_object* v___y_5552_, lean_object* v___y_5553_, lean_object* v___y_5554_, lean_object* v___y_5555_){
_start:
{
lean_object* v_res_5556_; 
v_res_5556_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0(v_00_u03b1_5547_, v_x_5548_, v___y_5549_, v___y_5550_, v___y_5551_, v___y_5552_, v___y_5553_, v___y_5554_);
lean_dec(v___y_5554_);
lean_dec_ref(v___y_5553_);
lean_dec(v___y_5552_);
lean_dec_ref(v___y_5551_);
lean_dec(v___y_5550_);
lean_dec_ref(v___y_5549_);
return v_res_5556_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2(lean_object* v_stx_5557_, lean_object* v_as_5558_, lean_object* v_as_x27_5559_, lean_object* v_b_5560_, lean_object* v_a_5561_, lean_object* v___y_5562_, lean_object* v___y_5563_, lean_object* v___y_5564_, lean_object* v___y_5565_, lean_object* v___y_5566_, lean_object* v___y_5567_){
_start:
{
lean_object* v___x_5569_; 
v___x_5569_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___redArg(v_stx_5557_, v_as_x27_5559_, v_b_5560_, v___y_5562_, v___y_5563_, v___y_5564_, v___y_5565_, v___y_5566_, v___y_5567_);
return v___x_5569_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2___boxed(lean_object* v_stx_5570_, lean_object* v_as_5571_, lean_object* v_as_x27_5572_, lean_object* v_b_5573_, lean_object* v_a_5574_, lean_object* v___y_5575_, lean_object* v___y_5576_, lean_object* v___y_5577_, lean_object* v___y_5578_, lean_object* v___y_5579_, lean_object* v___y_5580_, lean_object* v___y_5581_){
_start:
{
lean_object* v_res_5582_; 
v_res_5582_ = l_List_forIn_x27_loop___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__2(v_stx_5570_, v_as_5571_, v_as_x27_5572_, v_b_5573_, v_a_5574_, v___y_5575_, v___y_5576_, v___y_5577_, v___y_5578_, v___y_5579_, v___y_5580_);
lean_dec(v___y_5580_);
lean_dec_ref(v___y_5579_);
lean_dec(v___y_5578_);
lean_dec_ref(v___y_5577_);
lean_dec(v___y_5576_);
lean_dec_ref(v___y_5575_);
lean_dec(v_as_x27_5572_);
lean_dec(v_as_5571_);
return v_res_5582_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3(lean_object* v_00_u03b1_5583_, lean_object* v_msg_5584_, lean_object* v___y_5585_, lean_object* v___y_5586_, lean_object* v___y_5587_, lean_object* v___y_5588_, lean_object* v___y_5589_, lean_object* v___y_5590_){
_start:
{
lean_object* v___x_5592_; 
v___x_5592_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___redArg(v_msg_5584_, v___y_5585_, v___y_5586_, v___y_5587_, v___y_5588_, v___y_5589_, v___y_5590_);
return v___x_5592_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3___boxed(lean_object* v_00_u03b1_5593_, lean_object* v_msg_5594_, lean_object* v___y_5595_, lean_object* v___y_5596_, lean_object* v___y_5597_, lean_object* v___y_5598_, lean_object* v___y_5599_, lean_object* v___y_5600_, lean_object* v___y_5601_){
_start:
{
lean_object* v_res_5602_; 
v_res_5602_ = l_Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3(v_00_u03b1_5593_, v_msg_5594_, v___y_5595_, v___y_5596_, v___y_5597_, v___y_5598_, v___y_5599_, v___y_5600_);
lean_dec(v___y_5600_);
lean_dec_ref(v___y_5599_);
lean_dec(v___y_5598_);
lean_dec_ref(v___y_5597_);
lean_dec(v___y_5596_);
lean_dec_ref(v___y_5595_);
return v_res_5602_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1(lean_object* v_cls_5603_, lean_object* v_msg_5604_, lean_object* v___y_5605_, lean_object* v___y_5606_, lean_object* v___y_5607_, lean_object* v___y_5608_, lean_object* v___y_5609_, lean_object* v___y_5610_){
_start:
{
lean_object* v___x_5612_; 
v___x_5612_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___redArg(v_cls_5603_, v_msg_5604_, v___y_5607_, v___y_5608_, v___y_5609_, v___y_5610_);
return v___x_5612_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1___boxed(lean_object* v_cls_5613_, lean_object* v_msg_5614_, lean_object* v___y_5615_, lean_object* v___y_5616_, lean_object* v___y_5617_, lean_object* v___y_5618_, lean_object* v___y_5619_, lean_object* v___y_5620_, lean_object* v___y_5621_){
_start:
{
lean_object* v_res_5622_; 
v_res_5622_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__1(v_cls_5613_, v_msg_5614_, v___y_5615_, v___y_5616_, v___y_5617_, v___y_5618_, v___y_5619_, v___y_5620_);
lean_dec(v___y_5620_);
lean_dec_ref(v___y_5619_);
lean_dec(v___y_5618_);
lean_dec_ref(v___y_5617_);
lean_dec(v___y_5616_);
lean_dec_ref(v___y_5615_);
return v_res_5622_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3(lean_object* v_as_5623_, lean_object* v_as_x27_5624_, lean_object* v_b_5625_, lean_object* v_a_5626_, lean_object* v___y_5627_, lean_object* v___y_5628_, lean_object* v___y_5629_, lean_object* v___y_5630_, lean_object* v___y_5631_, lean_object* v___y_5632_){
_start:
{
lean_object* v___x_5634_; 
v___x_5634_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___redArg(v_as_x27_5624_, v_b_5625_, v___y_5627_, v___y_5628_, v___y_5629_, v___y_5630_, v___y_5631_, v___y_5632_);
return v___x_5634_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3___boxed(lean_object* v_as_5635_, lean_object* v_as_x27_5636_, lean_object* v_b_5637_, lean_object* v_a_5638_, lean_object* v___y_5639_, lean_object* v___y_5640_, lean_object* v___y_5641_, lean_object* v___y_5642_, lean_object* v___y_5643_, lean_object* v___y_5644_, lean_object* v___y_5645_){
_start:
{
lean_object* v_res_5646_; 
v_res_5646_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__3(v_as_5635_, v_as_x27_5636_, v_b_5637_, v_a_5638_, v___y_5639_, v___y_5640_, v___y_5641_, v___y_5642_, v___y_5643_, v___y_5644_);
lean_dec(v___y_5644_);
lean_dec_ref(v___y_5643_);
lean_dec(v___y_5642_);
lean_dec_ref(v___y_5641_);
lean_dec(v___y_5640_);
lean_dec_ref(v___y_5639_);
lean_dec(v_as_x27_5636_);
lean_dec(v_as_5635_);
return v_res_5646_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5(lean_object* v_00_u03b1_5647_, lean_object* v_ref_5648_, lean_object* v_msg_5649_, lean_object* v___y_5650_, lean_object* v___y_5651_, lean_object* v___y_5652_, lean_object* v___y_5653_, lean_object* v___y_5654_, lean_object* v___y_5655_){
_start:
{
lean_object* v___x_5657_; 
v___x_5657_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___redArg(v_ref_5648_, v_msg_5649_, v___y_5650_, v___y_5651_, v___y_5652_, v___y_5653_, v___y_5654_, v___y_5655_);
return v___x_5657_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5___boxed(lean_object* v_00_u03b1_5658_, lean_object* v_ref_5659_, lean_object* v_msg_5660_, lean_object* v___y_5661_, lean_object* v___y_5662_, lean_object* v___y_5663_, lean_object* v___y_5664_, lean_object* v___y_5665_, lean_object* v___y_5666_, lean_object* v___y_5667_){
_start:
{
lean_object* v_res_5668_; 
v_res_5668_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__5(v_00_u03b1_5658_, v_ref_5659_, v_msg_5660_, v___y_5661_, v___y_5662_, v___y_5663_, v___y_5664_, v___y_5665_, v___y_5666_);
lean_dec(v___y_5666_);
lean_dec_ref(v___y_5665_);
lean_dec(v___y_5664_);
lean_dec_ref(v___y_5663_);
lean_dec(v___y_5662_);
lean_dec_ref(v___y_5661_);
lean_dec(v_ref_5659_);
return v_res_5668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11(lean_object* v_msgData_5669_, lean_object* v_macroStack_5670_, lean_object* v___y_5671_, lean_object* v___y_5672_, lean_object* v___y_5673_, lean_object* v___y_5674_, lean_object* v___y_5675_, lean_object* v___y_5676_){
_start:
{
lean_object* v___x_5678_; 
v___x_5678_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___redArg(v_msgData_5669_, v_macroStack_5670_, v___y_5675_);
return v___x_5678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11___boxed(lean_object* v_msgData_5679_, lean_object* v_macroStack_5680_, lean_object* v___y_5681_, lean_object* v___y_5682_, lean_object* v___y_5683_, lean_object* v___y_5684_, lean_object* v___y_5685_, lean_object* v___y_5686_, lean_object* v___y_5687_){
_start:
{
lean_object* v_res_5688_; 
v_res_5688_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__3_spec__11(v_msgData_5679_, v_macroStack_5680_, v___y_5681_, v___y_5682_, v___y_5683_, v___y_5684_, v___y_5685_, v___y_5686_);
lean_dec(v___y_5686_);
lean_dec_ref(v___y_5685_);
lean_dec(v___y_5684_);
lean_dec_ref(v___y_5683_);
lean_dec(v___y_5682_);
lean_dec_ref(v___y_5681_);
return v_res_5688_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10(lean_object* v_00_u03b2_5689_, lean_object* v_m_5690_, lean_object* v_a_5691_){
_start:
{
lean_object* v___x_5692_; 
v___x_5692_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___redArg(v_m_5690_, v_a_5691_);
return v___x_5692_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10___boxed(lean_object* v_00_u03b2_5693_, lean_object* v_m_5694_, lean_object* v_a_5695_){
_start:
{
lean_object* v_res_5696_; 
v_res_5696_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10(v_00_u03b2_5693_, v_m_5694_, v_a_5695_);
lean_dec(v_a_5695_);
lean_dec_ref(v_m_5694_);
return v_res_5696_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26(lean_object* v_00_u03b2_5697_, lean_object* v_x_5698_, lean_object* v_x_5699_){
_start:
{
uint8_t v___x_5700_; 
v___x_5700_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___redArg(v_x_5698_, v_x_5699_);
return v___x_5700_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26___boxed(lean_object* v_00_u03b2_5701_, lean_object* v_x_5702_, lean_object* v_x_5703_){
_start:
{
uint8_t v_res_5704_; lean_object* v_r_5705_; 
v_res_5704_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26(v_00_u03b2_5701_, v_x_5702_, v_x_5703_);
lean_dec_ref(v_x_5703_);
lean_dec_ref(v_x_5702_);
v_r_5705_ = lean_box(v_res_5704_);
return v_r_5705_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27_spec__34(lean_object* v_00_u03b2_5706_){
_start:
{
lean_object* v___x_5707_; 
v___x_5707_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2);
return v___x_5707_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___redArg(){
_start:
{
lean_object* v___x_5709_; 
v___x_5709_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2);
return v___x_5709_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___redArg___boxed(lean_object* v___dummy_5710_){
_start:
{
lean_object* v_res_5711_; 
v_res_5711_ = l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27___redArg();
return v_res_5711_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__27(lean_object* v_00_u03b2_5712_){
_start:
{
lean_object* v___x_5713_; 
v___x_5713_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8___closed__2);
return v___x_5713_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30(lean_object* v_00_u03b2_5714_, lean_object* v_a_5715_, lean_object* v_x_5716_){
_start:
{
lean_object* v___x_5717_; 
v___x_5717_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___redArg(v_a_5715_, v_x_5716_);
return v___x_5717_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30___boxed(lean_object* v_00_u03b2_5718_, lean_object* v_a_5719_, lean_object* v_x_5720_){
_start:
{
lean_object* v_res_5721_; 
v_res_5721_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__10_spec__30(v_00_u03b2_5718_, v_a_5719_, v_x_5720_);
lean_dec(v_x_5720_);
lean_dec(v_a_5719_);
return v_res_5721_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32(lean_object* v_00_u03b2_5722_, lean_object* v_x_5723_, size_t v_x_5724_, lean_object* v_x_5725_){
_start:
{
uint8_t v___x_5726_; 
v___x_5726_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___redArg(v_x_5723_, v_x_5724_, v_x_5725_);
return v___x_5726_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32___boxed(lean_object* v_00_u03b2_5727_, lean_object* v_x_5728_, lean_object* v_x_5729_, lean_object* v_x_5730_){
_start:
{
size_t v_x_197646__boxed_5731_; uint8_t v_res_5732_; lean_object* v_r_5733_; 
v_x_197646__boxed_5731_ = lean_unbox_usize(v_x_5729_);
lean_dec(v_x_5729_);
v_res_5732_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32(v_00_u03b2_5727_, v_x_5728_, v_x_197646__boxed_5731_, v_x_5730_);
lean_dec_ref(v_x_5730_);
lean_dec_ref(v_x_5728_);
v_r_5733_ = lean_box(v_res_5732_);
return v_r_5733_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36(lean_object* v_00_u03b2_5734_, lean_object* v_keys_5735_, lean_object* v_vals_5736_, lean_object* v_heq_5737_, lean_object* v_i_5738_, lean_object* v_k_5739_){
_start:
{
uint8_t v___x_5740_; 
v___x_5740_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___redArg(v_keys_5735_, v_i_5738_, v_k_5739_);
return v___x_5740_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36___boxed(lean_object* v_00_u03b2_5741_, lean_object* v_keys_5742_, lean_object* v_vals_5743_, lean_object* v_heq_5744_, lean_object* v_i_5745_, lean_object* v_k_5746_){
_start:
{
uint8_t v_res_5747_; lean_object* v_r_5748_; 
v_res_5747_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_InferControlInfo_ofElem_spec__0_spec__2_spec__8_spec__26_spec__32_spec__36(v_00_u03b2_5741_, v_keys_5742_, v_vals_5743_, v_heq_5744_, v_i_5745_, v_k_5746_);
lean_dec_ref(v_k_5746_);
lean_dec_ref(v_vals_5743_);
lean_dec_ref(v_keys_5742_);
v_r_5748_ = lean_box(v_res_5747_);
return v_r_5748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq(lean_object* v_doSeq_5749_, lean_object* v_a_5750_, lean_object* v_a_5751_, lean_object* v_a_5752_, lean_object* v_a_5753_, lean_object* v_a_5754_, lean_object* v_a_5755_){
_start:
{
lean_object* v___x_5757_; 
v___x_5757_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_doSeq_5749_, v_a_5750_, v_a_5751_, v_a_5752_, v_a_5753_, v_a_5754_, v_a_5755_);
return v___x_5757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoSeq___boxed(lean_object* v_doSeq_5758_, lean_object* v_a_5759_, lean_object* v_a_5760_, lean_object* v_a_5761_, lean_object* v_a_5762_, lean_object* v_a_5763_, lean_object* v_a_5764_, lean_object* v_a_5765_){
_start:
{
lean_object* v_res_5766_; 
v_res_5766_ = l_Lean_Elab_Do_inferControlInfoSeq(v_doSeq_5758_, v_a_5759_, v_a_5760_, v_a_5761_, v_a_5762_, v_a_5763_, v_a_5764_);
lean_dec(v_a_5764_);
lean_dec_ref(v_a_5763_);
lean_dec(v_a_5762_);
lean_dec_ref(v_a_5761_);
lean_dec(v_a_5760_);
lean_dec_ref(v_a_5759_);
return v_res_5766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem(lean_object* v_doElem_5767_, lean_object* v_a_5768_, lean_object* v_a_5769_, lean_object* v_a_5770_, lean_object* v_a_5771_, lean_object* v_a_5772_, lean_object* v_a_5773_){
_start:
{
lean_object* v___x_5775_; 
v___x_5775_ = l_Lean_Elab_Do_InferControlInfo_ofElem(v_doElem_5767_, v_a_5768_, v_a_5769_, v_a_5770_, v_a_5771_, v_a_5772_, v_a_5773_);
return v___x_5775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_inferControlInfoElem___boxed(lean_object* v_doElem_5776_, lean_object* v_a_5777_, lean_object* v_a_5778_, lean_object* v_a_5779_, lean_object* v_a_5780_, lean_object* v_a_5781_, lean_object* v_a_5782_, lean_object* v_a_5783_){
_start:
{
lean_object* v_res_5784_; 
v_res_5784_ = l_Lean_Elab_Do_inferControlInfoElem(v_doElem_5776_, v_a_5777_, v_a_5778_, v_a_5779_, v_a_5780_, v_a_5781_, v_a_5782_);
lean_dec(v_a_5782_);
lean_dec_ref(v_a_5781_);
lean_dec(v_a_5780_);
lean_dec_ref(v_a_5779_);
lean_dec(v_a_5778_);
lean_dec_ref(v_a_5777_);
return v_res_5784_;
}
}
lean_object* runtime_initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_ForwardSyntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_ForwardSyntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Do_instInhabitedControlInfo_default = _init_l_Lean_Elab_Do_instInhabitedControlInfo_default();
lean_mark_persistent(l_Lean_Elab_Do_instInhabitedControlInfo_default);
l_Lean_Elab_Do_instInhabitedControlInfo = _init_l_Lean_Elab_Do_instInhabitedControlInfo();
lean_mark_persistent(l_Lean_Elab_Do_instInhabitedControlInfo);
l_Lean_Elab_Do_ControlInfo_pure = _init_l_Lean_Elab_Do_ControlInfo_pure();
lean_mark_persistent(l_Lean_Elab_Do_ControlInfo_pure);
l_Lean_Elab_Do_ControlInfo_empty = _init_l_Lean_Elab_Do_ControlInfo_empty();
lean_mark_persistent(l_Lean_Elab_Do_ControlInfo_empty);
res = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_initFn_00___x40_Lean_Elab_Do_InferControlInfo_1357362724____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Do_controlInfoElemAttribute = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Do_controlInfoElemAttribute);
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Do_InferControlInfo_0__Lean_Elab_Do_controlInfoElemAttribute___regBuiltin_Lean_Elab_Do_controlInfoElemAttribute_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_ForwardSyntax(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_ForwardSyntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_InferControlInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Do_InferControlInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Do_InferControlInfo(builtin);
}
#ifdef __cplusplus
}
#endif
