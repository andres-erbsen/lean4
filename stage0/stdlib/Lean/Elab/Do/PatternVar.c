// Lean compiler output
// Module: Lean.Elab.Do.PatternVar
// Imports: public import Lean.Elab.Term meta import Lean.Parser.Do import Lean.Elab.PatternVar import Lean.Elab.Quotation import Lean.Elab.ExprQuot
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_HygieneInfo_mkIdent(lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Elab_Term_ExprQuot_unwrapTopBareTermQuot_x3f(lean_object*);
uint8_t l_Lean_Elab_Term_ExprQuot_hasBareTermQuotInPat(lean_object*);
lean_object* l_Lean_Elab_Term_getPatternsVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Term_ExprQuot_promoteAllBareTermQuotsInPat(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_ExprQuot_hasExprQuotInPat(lean_object*);
lean_object* l_Lean_Elab_Term_getPatternVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_Quotation_shouldCheckBareQuotDiscr(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostpone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Quotation_getPatternVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_Quotation_getPatternsVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_promoteBarePatForRhs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_promoteBarePatForRhs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getPatternVarsEx___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getPatternVarsEx___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getPatternVarsEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getPatternVarsEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Do_getPatternsVarsEx_spec__0(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Do_getPatternsVarsEx_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getPatternsVarsEx_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getPatternsVarsEx_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getPatternsVarsEx___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getPatternsVarsEx___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Do_getPatternsVarsEx_spec__2(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Do_getPatternsVarsEx_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getPatternsVarsEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getPatternsVarsEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0 = (const lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__1 = (const lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__2 = (const lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__3 = (const lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__3_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__4 = (const lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Not a letId: "};
static const lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__5 = (const lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__6;
static const lean_string_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__7 = (const lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__7_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__8 = (const lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__9 = (const lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__10 = (const lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__11 = (const lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__11_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__12 = (const lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "this"};
static const lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__13 = (const lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__13_value),LEAN_SCALAR_PTR_LITERAL(38, 116, 214, 236, 212, 160, 188, 150)}};
static const lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__14 = (const lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__14_value;
static const lean_array_object l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__15 = (const lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__15_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getLetIdDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getLetIdDeclVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_getLetPatDeclVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__0 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__1 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_getLetPatDeclVars___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__2 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__2_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__3 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_getLetPatDeclVars___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__4 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_getLetPatDeclVars___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__5 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Do_getLetPatDeclVars___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__6;
static const lean_string_object l_Lean_Elab_Do_getLetPatDeclVars___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__7 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__7_value;
static const lean_string_object l_Lean_Elab_Do_getLetPatDeclVars___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__8 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__7_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__8_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__9 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__9_value)}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__10 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__11_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__11 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__11_value)}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__12 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__12_value;
static const lean_string_object l_Lean_Elab_Do_getLetPatDeclVars___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__13 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__13_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__14 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__14_value)}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__15 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__16 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__16_value)}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__17 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__18 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__15_value),((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__18_value)}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__19 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__19_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__15_value),((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__19_value)}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__20 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__12_value),((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__20_value)}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__21 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__12_value),((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__21_value)}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__22 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__10_value),((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__22_value)}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__23 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__23_value;
static const lean_string_object l_Lean_Elab_Do_getLetPatDeclVars___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__24 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__24_value;
static const lean_string_object l_Lean_Elab_Do_getLetPatDeclVars___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__25 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__25_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetPatDeclVars___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__25_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__26 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__26_value;
static const lean_string_object l_Lean_Elab_Do_getLetPatDeclVars___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Do_getLetPatDeclVars___closed__27 = (const lean_object*)&l_Lean_Elab_Do_getLetPatDeclVars___closed__27_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getLetPatDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getLetPatDeclVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetEqnsDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetEqnsDeclVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_getLetDeclVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l_Lean_Elab_Do_getLetDeclVars___closed__0 = (const lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetDeclVars___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetDeclVars___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetDeclVars___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetDeclVars___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l_Lean_Elab_Do_getLetDeclVars___closed__1 = (const lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_getLetDeclVars___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Not a let declaration: "};
static const lean_object* l_Lean_Elab_Do_getLetDeclVars___closed__2 = (const lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_getLetDeclVars___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_getLetDeclVars___closed__3;
static const lean_string_object l_Lean_Elab_Do_getLetDeclVars___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l_Lean_Elab_Do_getLetDeclVars___closed__4 = (const lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetDeclVars___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetDeclVars___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetDeclVars___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetDeclVars___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__4_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* l_Lean_Elab_Do_getLetDeclVars___closed__5 = (const lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__5_value;
static const lean_string_object l_Lean_Elab_Do_getLetDeclVars___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letPatDecl"};
static const lean_object* l_Lean_Elab_Do_getLetDeclVars___closed__6 = (const lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetDeclVars___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetDeclVars___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetDeclVars___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetDeclVars___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__6_value),LEAN_SCALAR_PTR_LITERAL(9, 25, 156, 50, 29, 105, 147, 239)}};
static const lean_object* l_Lean_Elab_Do_getLetDeclVars___closed__7 = (const lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__7_value;
static const lean_string_object l_Lean_Elab_Do_getLetDeclVars___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "letEqnsDecl"};
static const lean_object* l_Lean_Elab_Do_getLetDeclVars___closed__8 = (const lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetDeclVars___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetDeclVars___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetDeclVars___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetDeclVars___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__8_value),LEAN_SCALAR_PTR_LITERAL(82, 210, 72, 51, 179, 245, 26, 94)}};
static const lean_object* l_Lean_Elab_Do_getLetDeclVars___closed__9 = (const lean_object*)&l_Lean_Elab_Do_getLetDeclVars___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getLetDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getLetDeclVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetRecDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetRecDeclVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "letRecDecl"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(202, 48, 93, 231, 206, 172, 150, 190)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_getLetRecDeclsVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "letRecDecls"};
static const lean_object* l_Lean_Elab_Do_getLetRecDeclsVars___closed__0 = (const lean_object*)&l_Lean_Elab_Do_getLetRecDeclsVars___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_getLetRecDeclsVars___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetRecDeclsVars___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetRecDeclsVars___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetRecDeclsVars___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetRecDeclsVars___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_getLetRecDeclsVars___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getLetRecDeclsVars___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_getLetRecDeclsVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 117, 148, 85, 88, 242, 214, 126)}};
static const lean_object* l_Lean_Elab_Do_getLetRecDeclsVars___closed__1 = (const lean_object*)&l_Lean_Elab_Do_getLetRecDeclsVars___closed__1_value;
static const lean_array_object l_Lean_Elab_Do_getLetRecDeclsVars___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Do_getLetRecDeclsVars___closed__2 = (const lean_object*)&l_Lean_Elab_Do_getLetRecDeclsVars___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getLetRecDeclsVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getLetRecDeclsVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_getExprPatternVarsEx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "matchExprPat"};
static const lean_object* l_Lean_Elab_Do_getExprPatternVarsEx___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Do_getExprPatternVarsEx___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_getExprPatternVarsEx___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_getExprPatternVarsEx___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getExprPatternVarsEx___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_getExprPatternVarsEx___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getExprPatternVarsEx___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_getExprPatternVarsEx___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_getExprPatternVarsEx___redArg___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_getExprPatternVarsEx___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(34, 152, 68, 102, 242, 224, 57, 35)}};
static const lean_object* l_Lean_Elab_Do_getExprPatternVarsEx___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Do_getExprPatternVarsEx___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getExprPatternVarsEx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getExprPatternVarsEx___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getExprPatternVarsEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getExprPatternVarsEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_promoteBarePatForRhs(lean_object* v_pattern_1_, lean_object* v_rhs_2_, lean_object* v_depDiscrFVars_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_){
_start:
{
lean_object* v___x_11_; 
lean_inc(v_pattern_1_);
v___x_11_ = l_Lean_Elab_Term_ExprQuot_unwrapTopBareTermQuot_x3f(v_pattern_1_);
if (lean_obj_tag(v___x_11_) == 1)
{
lean_object* v_val_12_; lean_object* v___x_14_; uint8_t v_isShared_15_; uint8_t v_isSharedCheck_78_; 
v_val_12_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_78_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_78_ == 0)
{
v___x_14_ = v___x_11_;
v_isShared_15_ = v_isSharedCheck_78_;
goto v_resetjp_13_;
}
else
{
lean_inc(v_val_12_);
lean_dec(v___x_11_);
v___x_14_ = lean_box(0);
v_isShared_15_ = v_isSharedCheck_78_;
goto v_resetjp_13_;
}
v_resetjp_13_:
{
uint8_t v___x_16_; 
lean_inc(v_val_12_);
v___x_16_ = l_Lean_Elab_Term_Quotation_shouldCheckBareQuotDiscr(v_rhs_2_, v_val_12_);
if (v___x_16_ == 0)
{
lean_object* v___x_18_; 
lean_dec(v_val_12_);
lean_dec(v_depDiscrFVars_3_);
lean_dec(v_rhs_2_);
if (v_isShared_15_ == 0)
{
lean_ctor_set_tag(v___x_14_, 0);
lean_ctor_set(v___x_14_, 0, v_pattern_1_);
v___x_18_ = v___x_14_;
goto v_reusejp_17_;
}
else
{
lean_object* v_reuseFailAlloc_19_; 
v_reuseFailAlloc_19_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_19_, 0, v_pattern_1_);
v___x_18_ = v_reuseFailAlloc_19_;
goto v_reusejp_17_;
}
v_reusejp_17_:
{
return v___x_18_;
}
}
else
{
lean_object* v___x_20_; 
lean_del_object(v___x_14_);
v___x_20_ = l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent(v_rhs_2_, v_depDiscrFVars_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_);
if (lean_obj_tag(v___x_20_) == 0)
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_69_; 
v_a_21_ = lean_ctor_get(v___x_20_, 0);
v_isSharedCheck_69_ = !lean_is_exclusive(v___x_20_);
if (v_isSharedCheck_69_ == 0)
{
v___x_23_ = v___x_20_;
v_isShared_24_ = v_isSharedCheck_69_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_20_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_69_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
uint8_t v___x_25_; 
v___x_25_ = lean_unbox(v_a_21_);
lean_dec(v_a_21_);
switch(v___x_25_)
{
case 0:
{
lean_object* v___x_26_; lean_object* v___x_28_; 
lean_dec(v_val_12_);
v___x_26_ = l_Lean_Elab_Term_ExprQuot_promoteAllBareTermQuotsInPat(v_pattern_1_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 0, v___x_26_);
v___x_28_ = v___x_23_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v___x_26_);
v___x_28_ = v_reuseFailAlloc_29_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
return v___x_28_;
}
}
case 1:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
lean_del_object(v___x_23_);
v___x_30_ = l_Lean_NameSet_empty;
v___x_31_ = l_Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar(v_val_12_, v___x_30_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_);
if (lean_obj_tag(v___x_31_) == 0)
{
lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_57_; 
v_a_32_ = lean_ctor_get(v___x_31_, 0);
v_isSharedCheck_57_ = !lean_is_exclusive(v___x_31_);
if (v_isSharedCheck_57_ == 0)
{
v___x_34_ = v___x_31_;
v_isShared_35_ = v_isSharedCheck_57_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_31_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_57_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
uint8_t v___x_36_; 
v___x_36_ = lean_unbox(v_a_32_);
lean_dec(v_a_32_);
if (v___x_36_ == 0)
{
lean_object* v___x_38_; 
if (v_isShared_35_ == 0)
{
lean_ctor_set(v___x_34_, 0, v_pattern_1_);
v___x_38_ = v___x_34_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v_pattern_1_);
v___x_38_ = v_reuseFailAlloc_39_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
return v___x_38_;
}
}
else
{
lean_object* v___x_40_; 
lean_del_object(v___x_34_);
v___x_40_ = l_Lean_Elab_Term_tryPostpone(v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_);
if (lean_obj_tag(v___x_40_) == 0)
{
lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_47_; 
v_isSharedCheck_47_ = !lean_is_exclusive(v___x_40_);
if (v_isSharedCheck_47_ == 0)
{
lean_object* v_unused_48_; 
v_unused_48_ = lean_ctor_get(v___x_40_, 0);
lean_dec(v_unused_48_);
v___x_42_ = v___x_40_;
v_isShared_43_ = v_isSharedCheck_47_;
goto v_resetjp_41_;
}
else
{
lean_dec(v___x_40_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_47_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v___x_45_; 
if (v_isShared_43_ == 0)
{
lean_ctor_set(v___x_42_, 0, v_pattern_1_);
v___x_45_ = v___x_42_;
goto v_reusejp_44_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v_pattern_1_);
v___x_45_ = v_reuseFailAlloc_46_;
goto v_reusejp_44_;
}
v_reusejp_44_:
{
return v___x_45_;
}
}
}
else
{
lean_object* v_a_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_56_; 
lean_dec(v_pattern_1_);
v_a_49_ = lean_ctor_get(v___x_40_, 0);
v_isSharedCheck_56_ = !lean_is_exclusive(v___x_40_);
if (v_isSharedCheck_56_ == 0)
{
v___x_51_ = v___x_40_;
v_isShared_52_ = v_isSharedCheck_56_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_a_49_);
lean_dec(v___x_40_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_56_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v___x_54_; 
if (v_isShared_52_ == 0)
{
v___x_54_ = v___x_51_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v_a_49_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
}
}
}
else
{
lean_object* v_a_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_65_; 
lean_dec(v_pattern_1_);
v_a_58_ = lean_ctor_get(v___x_31_, 0);
v_isSharedCheck_65_ = !lean_is_exclusive(v___x_31_);
if (v_isSharedCheck_65_ == 0)
{
v___x_60_ = v___x_31_;
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_a_58_);
lean_dec(v___x_31_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_63_; 
if (v_isShared_61_ == 0)
{
v___x_63_ = v___x_60_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_a_58_);
v___x_63_ = v_reuseFailAlloc_64_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
return v___x_63_;
}
}
}
}
default: 
{
lean_object* v___x_67_; 
lean_dec(v_val_12_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 0, v_pattern_1_);
v___x_67_ = v___x_23_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v_pattern_1_);
v___x_67_ = v_reuseFailAlloc_68_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
return v___x_67_;
}
}
}
}
}
else
{
lean_object* v_a_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_77_; 
lean_dec(v_val_12_);
lean_dec(v_pattern_1_);
v_a_70_ = lean_ctor_get(v___x_20_, 0);
v_isSharedCheck_77_ = !lean_is_exclusive(v___x_20_);
if (v_isSharedCheck_77_ == 0)
{
v___x_72_ = v___x_20_;
v_isShared_73_ = v_isSharedCheck_77_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_a_70_);
lean_dec(v___x_20_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_77_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___x_75_; 
if (v_isShared_73_ == 0)
{
v___x_75_ = v___x_72_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v_a_70_);
v___x_75_ = v_reuseFailAlloc_76_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
return v___x_75_;
}
}
}
}
}
}
else
{
lean_object* v___x_79_; 
lean_dec(v___x_11_);
lean_dec(v_depDiscrFVars_3_);
lean_dec(v_rhs_2_);
v___x_79_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_79_, 0, v_pattern_1_);
return v___x_79_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_promoteBarePatForRhs___boxed(lean_object* v_pattern_80_, lean_object* v_rhs_81_, lean_object* v_depDiscrFVars_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_Elab_Do_promoteBarePatForRhs(v_pattern_80_, v_rhs_81_, v_depDiscrFVars_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
lean_dec(v_a_88_);
lean_dec_ref(v_a_87_);
lean_dec(v_a_86_);
lean_dec_ref(v_a_85_);
lean_dec(v_a_84_);
lean_dec_ref(v_a_83_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getPatternVarsEx___lam__0(lean_object* v_pattern_91_, lean_object* v_x_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v___x_138_; 
lean_inc(v_pattern_91_);
v___x_138_ = l_Lean_Elab_Term_ExprQuot_unwrapTopBareTermQuot_x3f(v_pattern_91_);
if (lean_obj_tag(v___x_138_) == 0)
{
uint8_t v___x_139_; 
lean_inc(v_pattern_91_);
v___x_139_ = l_Lean_Elab_Term_ExprQuot_hasBareTermQuotInPat(v_pattern_91_);
if (v___x_139_ == 0)
{
goto v___jp_100_;
}
else
{
lean_object* v___x_140_; lean_object* v___x_141_; 
lean_inc(v_pattern_91_);
v___x_140_ = l_Lean_Elab_Term_ExprQuot_promoteAllBareTermQuotsInPat(v_pattern_91_);
v___x_141_ = l_Lean_Elab_Term_getPatternVars(v___x_140_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
if (lean_obj_tag(v___x_141_) == 0)
{
lean_object* v_a_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_150_; 
lean_dec(v_pattern_91_);
v_a_142_ = lean_ctor_get(v___x_141_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_141_);
if (v_isSharedCheck_150_ == 0)
{
v___x_144_ = v___x_141_;
v_isShared_145_ = v_isSharedCheck_150_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_a_142_);
lean_dec(v___x_141_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_150_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_146_; lean_object* v___x_148_; 
v___x_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_146_, 0, v_a_142_);
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 0, v___x_146_);
v___x_148_ = v___x_144_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v___x_146_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
else
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_161_; 
v_a_151_ = lean_ctor_get(v___x_141_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_141_);
if (v_isSharedCheck_161_ == 0)
{
v___x_153_ = v___x_141_;
v_isShared_154_ = v_isSharedCheck_161_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_141_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_161_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
lean_inc(v_a_151_);
if (v_isShared_154_ == 0)
{
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_a_151_);
v___x_156_ = v_reuseFailAlloc_160_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
uint8_t v___x_157_; 
v___x_157_ = l_Lean_Exception_isInterrupt(v_a_151_);
if (v___x_157_ == 0)
{
uint8_t v___x_158_; 
lean_inc(v_a_151_);
v___x_158_ = l_Lean_Exception_isRuntime(v_a_151_);
if (v___x_158_ == 0)
{
if (lean_obj_tag(v_a_151_) == 1)
{
lean_object* v_extra_159_; 
v_extra_159_ = lean_ctor_get(v_a_151_, 1);
lean_inc(v_extra_159_);
lean_dec_ref_known(v_a_151_, 2);
if (lean_obj_tag(v_extra_159_) == 0)
{
lean_dec(v_pattern_91_);
return v___x_156_;
}
else
{
lean_dec(v_extra_159_);
lean_dec_ref(v___x_156_);
goto v___jp_119_;
}
}
else
{
lean_dec_ref(v___x_156_);
lean_dec(v_a_151_);
goto v___jp_119_;
}
}
else
{
lean_dec(v_a_151_);
lean_dec(v_pattern_91_);
return v___x_156_;
}
}
else
{
lean_dec(v_a_151_);
lean_dec(v_pattern_91_);
return v___x_156_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_138_, 1);
goto v___jp_100_;
}
v___jp_100_:
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_Elab_Term_getPatternVars(v_pattern_91_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
if (lean_obj_tag(v___x_101_) == 0)
{
lean_object* v_a_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_110_; 
v_a_102_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_110_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_110_ == 0)
{
v___x_104_ = v___x_101_;
v_isShared_105_ = v_isSharedCheck_110_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_a_102_);
lean_dec(v___x_101_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_110_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_106_; lean_object* v___x_108_; 
v___x_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_106_, 0, v_a_102_);
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 0, v___x_106_);
v___x_108_ = v___x_104_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v___x_106_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
return v___x_108_;
}
}
}
else
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_118_; 
v_a_111_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_118_ == 0)
{
v___x_113_ = v___x_101_;
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_101_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_116_; 
if (v_isShared_114_ == 0)
{
v___x_116_ = v___x_113_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v_a_111_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
}
v___jp_119_:
{
lean_object* v___x_120_; 
v___x_120_ = l_Lean_Elab_Term_getPatternVars(v_pattern_91_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
if (lean_obj_tag(v___x_120_) == 0)
{
lean_object* v_a_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_129_; 
v_a_121_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_129_ == 0)
{
v___x_123_ = v___x_120_;
v_isShared_124_ = v_isSharedCheck_129_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_a_121_);
lean_dec(v___x_120_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_129_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_125_; lean_object* v___x_127_; 
v___x_125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_125_, 0, v_a_121_);
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 0, v___x_125_);
v___x_127_ = v___x_123_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v___x_125_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
else
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
v_a_130_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___x_120_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___x_120_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_a_130_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getPatternVarsEx___lam__0___boxed(lean_object* v_pattern_162_, lean_object* v_x_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_Elab_Do_getPatternVarsEx___lam__0(v_pattern_162_, v_x_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
lean_dec(v___y_169_);
lean_dec_ref(v___y_168_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec_ref(v_x_163_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getPatternVarsEx(lean_object* v_pattern_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_){
_start:
{
lean_object* v___y_181_; uint8_t v___x_199_; 
lean_inc(v_pattern_172_);
v___x_199_ = l_Lean_Elab_Term_ExprQuot_hasExprQuotInPat(v_pattern_172_);
if (v___x_199_ == 0)
{
lean_object* v___x_200_; 
lean_inc(v_pattern_172_);
v___x_200_ = l_Lean_Elab_Term_Quotation_getPatternVars(v_pattern_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_, v_a_178_);
if (lean_obj_tag(v___x_200_) == 0)
{
lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_208_; 
lean_dec(v_pattern_172_);
v_a_201_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_208_ == 0)
{
v___x_203_ = v___x_200_;
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_dec(v___x_200_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_206_; 
if (v_isShared_204_ == 0)
{
v___x_206_ = v___x_203_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_a_201_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
}
else
{
lean_object* v_a_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_227_; 
v_a_209_ = lean_ctor_get(v___x_200_, 0);
v_isSharedCheck_227_ = !lean_is_exclusive(v___x_200_);
if (v_isSharedCheck_227_ == 0)
{
v___x_211_ = v___x_200_;
v_isShared_212_ = v_isSharedCheck_227_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_a_209_);
lean_dec(v___x_200_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_227_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
uint8_t v___x_213_; 
v___x_213_ = l_Lean_Exception_isInterrupt(v_a_209_);
if (v___x_213_ == 0)
{
uint8_t v___x_214_; 
lean_inc(v_a_209_);
v___x_214_ = l_Lean_Exception_isRuntime(v_a_209_);
if (v___x_214_ == 0)
{
if (lean_obj_tag(v_a_209_) == 1)
{
lean_object* v_extra_215_; 
v_extra_215_ = lean_ctor_get(v_a_209_, 1);
if (lean_obj_tag(v_extra_215_) == 0)
{
lean_object* v___x_217_; 
lean_dec(v_pattern_172_);
if (v_isShared_212_ == 0)
{
v___x_217_ = v___x_211_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v_a_209_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
else
{
lean_object* v___x_219_; 
lean_del_object(v___x_211_);
v___x_219_ = l_Lean_Elab_Do_getPatternVarsEx___lam__0(v_pattern_172_, v_a_209_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_, v_a_178_);
lean_dec_ref_known(v_a_209_, 2);
v___y_181_ = v___x_219_;
goto v___jp_180_;
}
}
else
{
lean_object* v___x_220_; 
lean_del_object(v___x_211_);
v___x_220_ = l_Lean_Elab_Do_getPatternVarsEx___lam__0(v_pattern_172_, v_a_209_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_, v_a_178_);
lean_dec(v_a_209_);
v___y_181_ = v___x_220_;
goto v___jp_180_;
}
}
else
{
lean_object* v___x_222_; 
lean_dec(v_pattern_172_);
if (v_isShared_212_ == 0)
{
v___x_222_ = v___x_211_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_a_209_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
else
{
lean_object* v___x_225_; 
lean_dec(v_pattern_172_);
if (v_isShared_212_ == 0)
{
v___x_225_ = v___x_211_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v_a_209_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
}
}
else
{
lean_object* v___x_228_; 
v___x_228_ = l_Lean_Elab_Term_getPatternVars(v_pattern_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_, v_a_178_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_236_; 
v_a_229_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_236_ == 0)
{
v___x_231_ = v___x_228_;
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_228_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_234_; 
if (v_isShared_232_ == 0)
{
v___x_234_ = v___x_231_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_a_229_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
else
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_244_; 
v_a_237_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_244_ == 0)
{
v___x_239_ = v___x_228_;
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_228_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_242_; 
if (v_isShared_240_ == 0)
{
v___x_242_ = v___x_239_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_a_237_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
v___jp_180_:
{
if (lean_obj_tag(v___y_181_) == 0)
{
lean_object* v_a_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_190_; 
v_a_182_ = lean_ctor_get(v___y_181_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___y_181_);
if (v_isSharedCheck_190_ == 0)
{
v___x_184_ = v___y_181_;
v_isShared_185_ = v_isSharedCheck_190_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_a_182_);
lean_dec(v___y_181_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_190_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v_a_186_; lean_object* v___x_188_; 
v_a_186_ = lean_ctor_get(v_a_182_, 0);
lean_inc(v_a_186_);
lean_dec(v_a_182_);
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 0, v_a_186_);
v___x_188_ = v___x_184_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_a_186_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
else
{
lean_object* v_a_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_198_; 
v_a_191_ = lean_ctor_get(v___y_181_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v___y_181_);
if (v_isSharedCheck_198_ == 0)
{
v___x_193_ = v___y_181_;
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_a_191_);
lean_dec(v___y_181_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_196_; 
if (v_isShared_194_ == 0)
{
v___x_196_ = v___x_193_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_a_191_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getPatternVarsEx___boxed(lean_object* v_pattern_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lean_Elab_Do_getPatternVarsEx(v_pattern_245_, v_a_246_, v_a_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_);
lean_dec(v_a_251_);
lean_dec_ref(v_a_250_);
lean_dec(v_a_249_);
lean_dec_ref(v_a_248_);
lean_dec(v_a_247_);
lean_dec_ref(v_a_246_);
return v_res_253_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Do_getPatternsVarsEx_spec__0(uint8_t v___y_254_, lean_object* v_as_255_, size_t v_i_256_, size_t v_stop_257_){
_start:
{
uint8_t v___x_258_; 
v___x_258_ = lean_usize_dec_eq(v_i_256_, v_stop_257_);
if (v___x_258_ == 0)
{
uint8_t v___x_259_; uint8_t v___y_261_; lean_object* v___x_265_; lean_object* v___x_266_; 
v___x_259_ = 1;
v___x_265_ = lean_array_uget_borrowed(v_as_255_, v_i_256_);
lean_inc(v___x_265_);
v___x_266_ = l_Lean_Elab_Term_ExprQuot_unwrapTopBareTermQuot_x3f(v___x_265_);
if (lean_obj_tag(v___x_266_) == 0)
{
uint8_t v___x_267_; 
lean_inc(v___x_265_);
v___x_267_ = l_Lean_Elab_Term_ExprQuot_hasBareTermQuotInPat(v___x_265_);
v___y_261_ = v___x_267_;
goto v___jp_260_;
}
else
{
lean_dec_ref_known(v___x_266_, 1);
v___y_261_ = v___y_254_;
goto v___jp_260_;
}
v___jp_260_:
{
if (v___y_261_ == 0)
{
size_t v___x_262_; size_t v___x_263_; 
v___x_262_ = ((size_t)1ULL);
v___x_263_ = lean_usize_add(v_i_256_, v___x_262_);
v_i_256_ = v___x_263_;
goto _start;
}
else
{
return v___x_259_;
}
}
}
else
{
uint8_t v___x_268_; 
v___x_268_ = 0;
return v___x_268_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Do_getPatternsVarsEx_spec__0___boxed(lean_object* v___y_269_, lean_object* v_as_270_, lean_object* v_i_271_, lean_object* v_stop_272_){
_start:
{
uint8_t v___y_6849__boxed_273_; size_t v_i_boxed_274_; size_t v_stop_boxed_275_; uint8_t v_res_276_; lean_object* v_r_277_; 
v___y_6849__boxed_273_ = lean_unbox(v___y_269_);
v_i_boxed_274_ = lean_unbox_usize(v_i_271_);
lean_dec(v_i_271_);
v_stop_boxed_275_ = lean_unbox_usize(v_stop_272_);
lean_dec(v_stop_272_);
v_res_276_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Do_getPatternsVarsEx_spec__0(v___y_6849__boxed_273_, v_as_270_, v_i_boxed_274_, v_stop_boxed_275_);
lean_dec_ref(v_as_270_);
v_r_277_ = lean_box(v_res_276_);
return v_r_277_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getPatternsVarsEx_spec__1(size_t v_sz_278_, size_t v_i_279_, lean_object* v_bs_280_){
_start:
{
uint8_t v___x_281_; 
v___x_281_ = lean_usize_dec_lt(v_i_279_, v_sz_278_);
if (v___x_281_ == 0)
{
return v_bs_280_;
}
else
{
lean_object* v_v_282_; lean_object* v___x_283_; lean_object* v_bs_x27_284_; lean_object* v___x_285_; size_t v___x_286_; size_t v___x_287_; lean_object* v___x_288_; 
v_v_282_ = lean_array_uget(v_bs_280_, v_i_279_);
v___x_283_ = lean_unsigned_to_nat(0u);
v_bs_x27_284_ = lean_array_uset(v_bs_280_, v_i_279_, v___x_283_);
v___x_285_ = l_Lean_Elab_Term_ExprQuot_promoteAllBareTermQuotsInPat(v_v_282_);
v___x_286_ = ((size_t)1ULL);
v___x_287_ = lean_usize_add(v_i_279_, v___x_286_);
v___x_288_ = lean_array_uset(v_bs_x27_284_, v_i_279_, v___x_285_);
v_i_279_ = v___x_287_;
v_bs_280_ = v___x_288_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getPatternsVarsEx_spec__1___boxed(lean_object* v_sz_290_, lean_object* v_i_291_, lean_object* v_bs_292_){
_start:
{
size_t v_sz_boxed_293_; size_t v_i_boxed_294_; lean_object* v_res_295_; 
v_sz_boxed_293_ = lean_unbox_usize(v_sz_290_);
lean_dec(v_sz_290_);
v_i_boxed_294_ = lean_unbox_usize(v_i_291_);
lean_dec(v_i_291_);
v_res_295_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getPatternsVarsEx_spec__1(v_sz_boxed_293_, v_i_boxed_294_, v_bs_292_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getPatternsVarsEx___lam__0(lean_object* v_patterns_296_, lean_object* v___x_297_, lean_object* v___x_298_, uint8_t v___y_299_, lean_object* v_x_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v___y_328_; lean_object* v___y_329_; lean_object* v___y_330_; lean_object* v___y_331_; lean_object* v___y_332_; lean_object* v___y_333_; uint8_t v___x_352_; 
v___x_352_ = lean_nat_dec_lt(v___x_297_, v___x_298_);
if (v___x_352_ == 0)
{
goto v___jp_308_;
}
else
{
if (v___x_352_ == 0)
{
goto v___jp_308_;
}
else
{
size_t v___x_353_; size_t v___x_354_; uint8_t v___x_355_; 
v___x_353_ = ((size_t)0ULL);
v___x_354_ = lean_usize_of_nat(v___x_298_);
v___x_355_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Do_getPatternsVarsEx_spec__0(v___y_299_, v_patterns_296_, v___x_353_, v___x_354_);
if (v___x_355_ == 0)
{
goto v___jp_308_;
}
else
{
size_t v_sz_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v_sz_356_ = lean_array_size(v_patterns_296_);
lean_inc_ref(v_patterns_296_);
v___x_357_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getPatternsVarsEx_spec__1(v_sz_356_, v___x_353_, v_patterns_296_);
v___x_358_ = l_Lean_Elab_Term_getPatternsVars(v___x_357_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_);
lean_dec_ref(v___x_357_);
if (lean_obj_tag(v___x_358_) == 0)
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_367_; 
lean_dec_ref(v_patterns_296_);
v_a_359_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_367_ == 0)
{
v___x_361_ = v___x_358_;
v_isShared_362_ = v_isSharedCheck_367_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_358_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_367_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_363_; lean_object* v___x_365_; 
v___x_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_363_, 0, v_a_359_);
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 0, v___x_363_);
v___x_365_ = v___x_361_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___x_363_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
else
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_378_; 
v_a_368_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_378_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_378_ == 0)
{
v___x_370_ = v___x_358_;
v_isShared_371_ = v_isSharedCheck_378_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_358_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_378_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
lean_inc(v_a_368_);
if (v_isShared_371_ == 0)
{
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v_a_368_);
v___x_373_ = v_reuseFailAlloc_377_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
uint8_t v___x_374_; 
v___x_374_ = l_Lean_Exception_isInterrupt(v_a_368_);
if (v___x_374_ == 0)
{
uint8_t v___x_375_; 
lean_inc(v_a_368_);
v___x_375_ = l_Lean_Exception_isRuntime(v_a_368_);
if (v___x_375_ == 0)
{
if (lean_obj_tag(v_a_368_) == 1)
{
lean_object* v_extra_376_; 
v_extra_376_ = lean_ctor_get(v_a_368_, 1);
lean_inc(v_extra_376_);
lean_dec_ref_known(v_a_368_, 2);
if (lean_obj_tag(v_extra_376_) == 0)
{
lean_dec_ref(v_patterns_296_);
return v___x_373_;
}
else
{
lean_dec(v_extra_376_);
lean_dec_ref(v___x_373_);
v___y_328_ = v___y_301_;
v___y_329_ = v___y_302_;
v___y_330_ = v___y_303_;
v___y_331_ = v___y_304_;
v___y_332_ = v___y_305_;
v___y_333_ = v___y_306_;
goto v___jp_327_;
}
}
else
{
lean_dec_ref(v___x_373_);
lean_dec(v_a_368_);
v___y_328_ = v___y_301_;
v___y_329_ = v___y_302_;
v___y_330_ = v___y_303_;
v___y_331_ = v___y_304_;
v___y_332_ = v___y_305_;
v___y_333_ = v___y_306_;
goto v___jp_327_;
}
}
else
{
lean_dec(v_a_368_);
lean_dec_ref(v_patterns_296_);
return v___x_373_;
}
}
else
{
lean_dec(v_a_368_);
lean_dec_ref(v_patterns_296_);
return v___x_373_;
}
}
}
}
}
}
}
v___jp_308_:
{
lean_object* v___x_309_; 
v___x_309_ = l_Lean_Elab_Term_getPatternsVars(v_patterns_296_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_);
lean_dec_ref(v_patterns_296_);
if (lean_obj_tag(v___x_309_) == 0)
{
lean_object* v_a_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_318_; 
v_a_310_ = lean_ctor_get(v___x_309_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_309_);
if (v_isSharedCheck_318_ == 0)
{
v___x_312_ = v___x_309_;
v_isShared_313_ = v_isSharedCheck_318_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_a_310_);
lean_dec(v___x_309_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_318_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_314_; lean_object* v___x_316_; 
v___x_314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_314_, 0, v_a_310_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 0, v___x_314_);
v___x_316_ = v___x_312_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v___x_314_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
else
{
lean_object* v_a_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_326_; 
v_a_319_ = lean_ctor_get(v___x_309_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_309_);
if (v_isSharedCheck_326_ == 0)
{
v___x_321_ = v___x_309_;
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_a_319_);
lean_dec(v___x_309_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_324_; 
if (v_isShared_322_ == 0)
{
v___x_324_ = v___x_321_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_a_319_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
}
v___jp_327_:
{
lean_object* v___x_334_; 
v___x_334_ = l_Lean_Elab_Term_getPatternsVars(v_patterns_296_, v___y_328_, v___y_329_, v___y_330_, v___y_331_, v___y_332_, v___y_333_);
lean_dec_ref(v_patterns_296_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_343_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_343_ == 0)
{
v___x_337_ = v___x_334_;
v_isShared_338_ = v_isSharedCheck_343_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_a_335_);
lean_dec(v___x_334_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_343_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_339_; lean_object* v___x_341_; 
v___x_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_339_, 0, v_a_335_);
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 0, v___x_339_);
v___x_341_ = v___x_337_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v___x_339_);
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
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
v_a_344_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_334_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_334_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getPatternsVarsEx___lam__0___boxed(lean_object* v_patterns_379_, lean_object* v___x_380_, lean_object* v___x_381_, lean_object* v___y_382_, lean_object* v_x_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
uint8_t v___y_6891__boxed_391_; lean_object* v_res_392_; 
v___y_6891__boxed_391_ = lean_unbox(v___y_382_);
v_res_392_ = l_Lean_Elab_Do_getPatternsVarsEx___lam__0(v_patterns_379_, v___x_380_, v___x_381_, v___y_6891__boxed_391_, v_x_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_);
lean_dec(v___y_389_);
lean_dec_ref(v___y_388_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
lean_dec(v___y_385_);
lean_dec_ref(v___y_384_);
lean_dec_ref(v_x_383_);
lean_dec(v___x_381_);
lean_dec(v___x_380_);
return v_res_392_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Do_getPatternsVarsEx_spec__2(lean_object* v_as_393_, size_t v_i_394_, size_t v_stop_395_){
_start:
{
uint8_t v___x_396_; 
v___x_396_ = lean_usize_dec_eq(v_i_394_, v_stop_395_);
if (v___x_396_ == 0)
{
lean_object* v___x_397_; uint8_t v___x_398_; 
v___x_397_ = lean_array_uget_borrowed(v_as_393_, v_i_394_);
lean_inc(v___x_397_);
v___x_398_ = l_Lean_Elab_Term_ExprQuot_hasExprQuotInPat(v___x_397_);
if (v___x_398_ == 0)
{
size_t v___x_399_; size_t v___x_400_; 
v___x_399_ = ((size_t)1ULL);
v___x_400_ = lean_usize_add(v_i_394_, v___x_399_);
v_i_394_ = v___x_400_;
goto _start;
}
else
{
return v___x_398_;
}
}
else
{
uint8_t v___x_402_; 
v___x_402_ = 0;
return v___x_402_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Do_getPatternsVarsEx_spec__2___boxed(lean_object* v_as_403_, lean_object* v_i_404_, lean_object* v_stop_405_){
_start:
{
size_t v_i_boxed_406_; size_t v_stop_boxed_407_; uint8_t v_res_408_; lean_object* v_r_409_; 
v_i_boxed_406_ = lean_unbox_usize(v_i_404_);
lean_dec(v_i_404_);
v_stop_boxed_407_ = lean_unbox_usize(v_stop_405_);
lean_dec(v_stop_405_);
v_res_408_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Do_getPatternsVarsEx_spec__2(v_as_403_, v_i_boxed_406_, v_stop_boxed_407_);
lean_dec_ref(v_as_403_);
v_r_409_ = lean_box(v_res_408_);
return v_r_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getPatternsVarsEx(lean_object* v_patterns_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_){
_start:
{
lean_object* v___y_419_; lean_object* v___x_437_; lean_object* v___x_438_; uint8_t v___y_440_; uint8_t v___x_469_; 
v___x_437_ = lean_unsigned_to_nat(0u);
v___x_438_ = lean_array_get_size(v_patterns_410_);
v___x_469_ = lean_nat_dec_lt(v___x_437_, v___x_438_);
if (v___x_469_ == 0)
{
v___y_440_ = v___x_469_;
goto v___jp_439_;
}
else
{
if (v___x_469_ == 0)
{
v___y_440_ = v___x_469_;
goto v___jp_439_;
}
else
{
size_t v___x_470_; size_t v___x_471_; uint8_t v___x_472_; 
v___x_470_ = ((size_t)0ULL);
v___x_471_ = lean_usize_of_nat(v___x_438_);
v___x_472_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Do_getPatternsVarsEx_spec__2(v_patterns_410_, v___x_470_, v___x_471_);
if (v___x_472_ == 0)
{
v___y_440_ = v___x_472_;
goto v___jp_439_;
}
else
{
lean_object* v___x_473_; 
v___x_473_ = l_Lean_Elab_Term_getPatternsVars(v_patterns_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_, v_a_416_);
lean_dec_ref(v_patterns_410_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
v_a_474_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_473_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_473_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
else
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_489_; 
v_a_482_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_489_ == 0)
{
v___x_484_ = v___x_473_;
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_473_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
if (v_isShared_485_ == 0)
{
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_a_482_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
}
}
}
v___jp_418_:
{
if (lean_obj_tag(v___y_419_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_428_; 
v_a_420_ = lean_ctor_get(v___y_419_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___y_419_);
if (v_isSharedCheck_428_ == 0)
{
v___x_422_ = v___y_419_;
v_isShared_423_ = v_isSharedCheck_428_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___y_419_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_428_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v_a_424_; lean_object* v___x_426_; 
v_a_424_ = lean_ctor_get(v_a_420_, 0);
lean_inc(v_a_424_);
lean_dec(v_a_420_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v_a_424_);
v___x_426_ = v___x_422_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_424_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
else
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_436_; 
v_a_429_ = lean_ctor_get(v___y_419_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___y_419_);
if (v_isSharedCheck_436_ == 0)
{
v___x_431_ = v___y_419_;
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___y_419_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_434_; 
if (v_isShared_432_ == 0)
{
v___x_434_ = v___x_431_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_a_429_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
v___jp_439_:
{
lean_object* v___x_441_; 
v___x_441_ = l_Lean_Elab_Term_Quotation_getPatternsVars(v_patterns_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_, v_a_416_);
if (lean_obj_tag(v___x_441_) == 0)
{
lean_object* v_a_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_449_; 
lean_dec_ref(v_patterns_410_);
v_a_442_ = lean_ctor_get(v___x_441_, 0);
v_isSharedCheck_449_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_449_ == 0)
{
v___x_444_ = v___x_441_;
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_a_442_);
lean_dec(v___x_441_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_447_; 
if (v_isShared_445_ == 0)
{
v___x_447_ = v___x_444_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v_a_442_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
}
else
{
lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_468_; 
v_a_450_ = lean_ctor_get(v___x_441_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_468_ == 0)
{
v___x_452_ = v___x_441_;
v_isShared_453_ = v_isSharedCheck_468_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v___x_441_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_468_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
uint8_t v___x_454_; 
v___x_454_ = l_Lean_Exception_isInterrupt(v_a_450_);
if (v___x_454_ == 0)
{
uint8_t v___x_455_; 
lean_inc(v_a_450_);
v___x_455_ = l_Lean_Exception_isRuntime(v_a_450_);
if (v___x_455_ == 0)
{
if (lean_obj_tag(v_a_450_) == 1)
{
lean_object* v_extra_456_; 
v_extra_456_ = lean_ctor_get(v_a_450_, 1);
if (lean_obj_tag(v_extra_456_) == 0)
{
lean_object* v___x_458_; 
lean_dec_ref(v_patterns_410_);
if (v_isShared_453_ == 0)
{
v___x_458_ = v___x_452_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_a_450_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
else
{
lean_object* v___x_460_; 
lean_del_object(v___x_452_);
v___x_460_ = l_Lean_Elab_Do_getPatternsVarsEx___lam__0(v_patterns_410_, v___x_437_, v___x_438_, v___y_440_, v_a_450_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_, v_a_416_);
lean_dec_ref_known(v_a_450_, 2);
v___y_419_ = v___x_460_;
goto v___jp_418_;
}
}
else
{
lean_object* v___x_461_; 
lean_del_object(v___x_452_);
v___x_461_ = l_Lean_Elab_Do_getPatternsVarsEx___lam__0(v_patterns_410_, v___x_437_, v___x_438_, v___y_440_, v_a_450_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_, v_a_416_);
lean_dec(v_a_450_);
v___y_419_ = v___x_461_;
goto v___jp_418_;
}
}
else
{
lean_object* v___x_463_; 
lean_dec_ref(v_patterns_410_);
if (v_isShared_453_ == 0)
{
v___x_463_ = v___x_452_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_450_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
else
{
lean_object* v___x_466_; 
lean_dec_ref(v_patterns_410_);
if (v_isShared_453_ == 0)
{
v___x_466_ = v___x_452_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_a_450_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getPatternsVarsEx___boxed(lean_object* v_patterns_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_Lean_Elab_Do_getPatternsVarsEx(v_patterns_490_, v_a_491_, v_a_492_, v_a_493_, v_a_494_, v_a_495_, v_a_496_);
lean_dec(v_a_496_);
lean_dec_ref(v_a_495_);
lean_dec(v_a_494_);
lean_dec_ref(v_a_493_);
lean_dec(v_a_492_);
lean_dec_ref(v_a_491_);
return v_res_498_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_499_ = lean_box(1);
v___x_500_ = l_Lean_MessageData_ofFormat(v___x_499_);
return v___x_500_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__3(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__2));
v___x_505_ = l_Lean_MessageData_ofFormat(v___x_504_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3(lean_object* v_x_506_, lean_object* v_x_507_){
_start:
{
if (lean_obj_tag(v_x_507_) == 0)
{
return v_x_506_;
}
else
{
lean_object* v_head_508_; lean_object* v_tail_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_531_; 
v_head_508_ = lean_ctor_get(v_x_507_, 0);
v_tail_509_ = lean_ctor_get(v_x_507_, 1);
v_isSharedCheck_531_ = !lean_is_exclusive(v_x_507_);
if (v_isSharedCheck_531_ == 0)
{
v___x_511_ = v_x_507_;
v_isShared_512_ = v_isSharedCheck_531_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_tail_509_);
lean_inc(v_head_508_);
lean_dec(v_x_507_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_531_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v_before_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_529_; 
v_before_513_ = lean_ctor_get(v_head_508_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v_head_508_);
if (v_isSharedCheck_529_ == 0)
{
lean_object* v_unused_530_; 
v_unused_530_ = lean_ctor_get(v_head_508_, 1);
lean_dec(v_unused_530_);
v___x_515_ = v_head_508_;
v_isShared_516_ = v_isSharedCheck_529_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_before_513_);
lean_dec(v_head_508_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_529_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_517_; lean_object* v___x_519_; 
v___x_517_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_516_ == 0)
{
lean_ctor_set_tag(v___x_515_, 7);
lean_ctor_set(v___x_515_, 1, v___x_517_);
lean_ctor_set(v___x_515_, 0, v_x_506_);
v___x_519_ = v___x_515_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v_x_506_);
lean_ctor_set(v_reuseFailAlloc_528_, 1, v___x_517_);
v___x_519_ = v_reuseFailAlloc_528_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
lean_object* v___x_520_; lean_object* v___x_522_; 
v___x_520_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__3);
if (v_isShared_512_ == 0)
{
lean_ctor_set_tag(v___x_511_, 7);
lean_ctor_set(v___x_511_, 1, v___x_520_);
lean_ctor_set(v___x_511_, 0, v___x_519_);
v___x_522_ = v___x_511_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v___x_519_);
lean_ctor_set(v_reuseFailAlloc_527_, 1, v___x_520_);
v___x_522_ = v_reuseFailAlloc_527_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_523_ = l_Lean_MessageData_ofSyntax(v_before_513_);
v___x_524_ = l_Lean_indentD(v___x_523_);
v___x_525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_522_);
lean_ctor_set(v___x_525_, 1, v___x_524_);
v_x_506_ = v___x_525_;
v_x_507_ = v_tail_509_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__2(lean_object* v_opts_532_, lean_object* v_opt_533_){
_start:
{
lean_object* v_name_534_; lean_object* v_defValue_535_; lean_object* v_map_536_; lean_object* v___x_537_; 
v_name_534_ = lean_ctor_get(v_opt_533_, 0);
v_defValue_535_ = lean_ctor_get(v_opt_533_, 1);
v_map_536_ = lean_ctor_get(v_opts_532_, 0);
v___x_537_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_536_, v_name_534_);
if (lean_obj_tag(v___x_537_) == 0)
{
uint8_t v___x_538_; 
v___x_538_ = lean_unbox(v_defValue_535_);
return v___x_538_;
}
else
{
lean_object* v_val_539_; 
v_val_539_ = lean_ctor_get(v___x_537_, 0);
lean_inc(v_val_539_);
lean_dec_ref_known(v___x_537_, 1);
if (lean_obj_tag(v_val_539_) == 1)
{
uint8_t v_v_540_; 
v_v_540_ = lean_ctor_get_uint8(v_val_539_, 0);
lean_dec_ref_known(v_val_539_, 0);
return v_v_540_;
}
else
{
uint8_t v___x_541_; 
lean_dec(v_val_539_);
v___x_541_ = lean_unbox(v_defValue_535_);
return v___x_541_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__2___boxed(lean_object* v_opts_542_, lean_object* v_opt_543_){
_start:
{
uint8_t v_res_544_; lean_object* v_r_545_; 
v_res_544_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__2(v_opts_542_, v_opt_543_);
lean_dec_ref(v_opt_543_);
lean_dec_ref(v_opts_542_);
v_r_545_ = lean_box(v_res_544_);
return v_r_545_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg___closed__1));
v___x_550_ = l_Lean_MessageData_ofFormat(v___x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg(lean_object* v_msgData_551_, lean_object* v_macroStack_552_, lean_object* v___y_553_){
_start:
{
lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; 
v___x_555_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_553_);
v___x_556_ = l_Lean_Elab_pp_macroStack;
v___x_557_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__2(v___x_555_, v___x_556_);
lean_dec_ref(v___x_555_);
if (v___x_557_ == 0)
{
lean_object* v___x_558_; 
lean_dec(v_macroStack_552_);
v___x_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_558_, 0, v_msgData_551_);
return v___x_558_;
}
else
{
if (lean_obj_tag(v_macroStack_552_) == 0)
{
lean_object* v___x_559_; 
v___x_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_559_, 0, v_msgData_551_);
return v___x_559_;
}
else
{
lean_object* v_head_560_; lean_object* v_after_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_576_; 
v_head_560_ = lean_ctor_get(v_macroStack_552_, 0);
lean_inc(v_head_560_);
v_after_561_ = lean_ctor_get(v_head_560_, 1);
v_isSharedCheck_576_ = !lean_is_exclusive(v_head_560_);
if (v_isSharedCheck_576_ == 0)
{
lean_object* v_unused_577_; 
v_unused_577_ = lean_ctor_get(v_head_560_, 0);
lean_dec(v_unused_577_);
v___x_563_ = v_head_560_;
v_isShared_564_ = v_isSharedCheck_576_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_after_561_);
lean_dec(v_head_560_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_576_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_565_; lean_object* v___x_567_; 
v___x_565_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_564_ == 0)
{
lean_ctor_set_tag(v___x_563_, 7);
lean_ctor_set(v___x_563_, 1, v___x_565_);
lean_ctor_set(v___x_563_, 0, v_msgData_551_);
v___x_567_ = v___x_563_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_msgData_551_);
lean_ctor_set(v_reuseFailAlloc_575_, 1, v___x_565_);
v___x_567_ = v_reuseFailAlloc_575_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v_msgData_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_568_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg___closed__2);
v___x_569_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_569_, 0, v___x_567_);
lean_ctor_set(v___x_569_, 1, v___x_568_);
v___x_570_ = l_Lean_MessageData_ofSyntax(v_after_561_);
v___x_571_ = l_Lean_indentD(v___x_570_);
v_msgData_572_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_572_, 0, v___x_569_);
lean_ctor_set(v_msgData_572_, 1, v___x_571_);
v___x_573_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1_spec__3(v_msgData_572_, v_macroStack_552_);
v___x_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_574_, 0, v___x_573_);
return v___x_574_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_578_, lean_object* v_macroStack_579_, lean_object* v___y_580_, lean_object* v___y_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg(v_msgData_578_, v_macroStack_579_, v___y_580_);
lean_dec_ref(v___y_580_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__0(lean_object* v_msgData_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_){
_start:
{
lean_object* v___x_589_; lean_object* v_env_590_; uint8_t v___x_591_; lean_object* v_env_592_; lean_object* v___x_593_; lean_object* v_toCold_594_; lean_object* v_mctx_595_; lean_object* v_lctx_596_; lean_object* v_options_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_589_ = lean_st_ref_get(v___y_587_);
v_env_590_ = lean_ctor_get(v___x_589_, 0);
lean_inc_ref(v_env_590_);
lean_dec(v___x_589_);
v___x_591_ = 0;
v_env_592_ = l_Lean_Environment_setRecordingDeps(v_env_590_, v___x_591_);
v___x_593_ = lean_st_ref_get(v___y_585_);
v_toCold_594_ = lean_ctor_get(v___y_586_, 0);
v_mctx_595_ = lean_ctor_get(v___x_593_, 0);
lean_inc_ref(v_mctx_595_);
lean_dec(v___x_593_);
v_lctx_596_ = lean_ctor_get(v___y_584_, 2);
v_options_597_ = lean_ctor_get(v_toCold_594_, 2);
lean_inc_ref(v_options_597_);
lean_inc_ref(v_lctx_596_);
v___x_598_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_598_, 0, v_env_592_);
lean_ctor_set(v___x_598_, 1, v_mctx_595_);
lean_ctor_set(v___x_598_, 2, v_lctx_596_);
lean_ctor_set(v___x_598_, 3, v_options_597_);
v___x_599_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_599_, 0, v___x_598_);
lean_ctor_set(v___x_599_, 1, v_msgData_583_);
v___x_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_600_, 0, v___x_599_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__0___boxed(lean_object* v_msgData_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__0(v_msgData_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
lean_dec(v___y_605_);
lean_dec_ref(v___y_604_);
lean_dec(v___y_603_);
lean_dec_ref(v___y_602_);
return v_res_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0___redArg(lean_object* v_msg_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_){
_start:
{
lean_object* v_ref_616_; lean_object* v_macroStack_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v_a_620_; lean_object* v___x_621_; lean_object* v_a_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_630_; 
v_ref_616_ = lean_ctor_get(v___y_613_, 2);
v_macroStack_617_ = lean_ctor_get(v___y_609_, 1);
v___x_618_ = l_Lean_Elab_getBetterRef(v_ref_616_, v_macroStack_617_);
v___x_619_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__0(v_msg_608_, v___y_611_, v___y_612_, v___y_613_, v___y_614_);
v_a_620_ = lean_ctor_get(v___x_619_, 0);
lean_inc(v_a_620_);
lean_dec_ref(v___x_619_);
lean_inc(v_macroStack_617_);
v___x_621_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg(v_a_620_, v_macroStack_617_, v___y_613_);
v_a_622_ = lean_ctor_get(v___x_621_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_621_);
if (v_isSharedCheck_630_ == 0)
{
v___x_624_ = v___x_621_;
v_isShared_625_ = v_isSharedCheck_630_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_a_622_);
lean_dec(v___x_621_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_630_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_626_; lean_object* v___x_628_; 
v___x_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_626_, 0, v___x_618_);
lean_ctor_set(v___x_626_, 1, v_a_622_);
if (v_isShared_625_ == 0)
{
lean_ctor_set_tag(v___x_624_, 1);
lean_ctor_set(v___x_624_, 0, v___x_626_);
v___x_628_ = v___x_624_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v___x_626_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0___redArg___boxed(lean_object* v_msg_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0___redArg(v_msg_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_);
lean_dec(v___y_637_);
lean_dec_ref(v___y_636_);
lean_dec(v___y_635_);
lean_dec_ref(v___y_634_);
lean_dec(v___y_633_);
lean_dec_ref(v___y_632_);
return v_res_639_;
}
}
static lean_object* _init_l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__6(void){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = ((lean_object*)(l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__5));
v___x_651_ = l_Lean_stringToMessageData(v___x_650_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars(lean_object* v_letId_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_){
_start:
{
lean_object* v___x_677_; uint8_t v___x_678_; 
v___x_677_ = ((lean_object*)(l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__4));
lean_inc(v_letId_669_);
v___x_678_ = l_Lean_Syntax_isOfKind(v_letId_669_, v___x_677_);
if (v___x_678_ == 0)
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_679_ = lean_obj_once(&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__6, &l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__6_once, _init_l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__6);
v___x_680_ = l_Lean_MessageData_ofSyntax(v_letId_669_);
v___x_681_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_679_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
v___x_682_ = l_Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0___redArg(v___x_681_, v_a_670_, v_a_671_, v_a_672_, v_a_673_, v_a_674_, v_a_675_);
return v___x_682_;
}
else
{
lean_object* v___x_683_; lean_object* v_id_684_; lean_object* v___x_685_; uint8_t v___x_686_; 
v___x_683_ = lean_unsigned_to_nat(0u);
v_id_684_ = l_Lean_Syntax_getArg(v_letId_669_, v___x_683_);
v___x_685_ = ((lean_object*)(l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__8));
lean_inc(v_id_684_);
v___x_686_ = l_Lean_Syntax_isOfKind(v_id_684_, v___x_685_);
if (v___x_686_ == 0)
{
lean_object* v___x_687_; uint8_t v___x_688_; 
v___x_687_ = ((lean_object*)(l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__10));
lean_inc(v_id_684_);
v___x_688_ = l_Lean_Syntax_isOfKind(v_id_684_, v___x_687_);
if (v___x_688_ == 0)
{
lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_689_ = ((lean_object*)(l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__12));
lean_inc(v_id_684_);
v___x_690_ = l_Lean_Syntax_isOfKind(v_id_684_, v___x_689_);
if (v___x_690_ == 0)
{
lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
lean_dec(v_id_684_);
v___x_691_ = lean_obj_once(&l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__6, &l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__6_once, _init_l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__6);
v___x_692_ = l_Lean_MessageData_ofSyntax(v_letId_669_);
v___x_693_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_693_, 0, v___x_691_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
v___x_694_ = l_Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0___redArg(v___x_693_, v_a_670_, v_a_671_, v_a_672_, v_a_673_, v_a_674_, v_a_675_);
return v___x_694_;
}
else
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
lean_dec(v_letId_669_);
v___x_695_ = ((lean_object*)(l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__14));
v___x_696_ = l_Lean_HygieneInfo_mkIdent(v_id_684_, v___x_695_, v___x_690_);
lean_dec(v_id_684_);
v___x_697_ = lean_unsigned_to_nat(1u);
v___x_698_ = lean_mk_empty_array_with_capacity(v___x_697_);
v___x_699_ = lean_array_push(v___x_698_, v___x_696_);
v___x_700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
return v___x_700_;
}
}
else
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
lean_dec(v_letId_669_);
v___x_701_ = lean_unsigned_to_nat(1u);
v___x_702_ = lean_mk_empty_array_with_capacity(v___x_701_);
v___x_703_ = lean_array_push(v___x_702_, v_id_684_);
v___x_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_704_, 0, v___x_703_);
return v___x_704_;
}
}
else
{
lean_object* v___x_705_; lean_object* v___x_706_; 
lean_dec(v_id_684_);
lean_dec(v_letId_669_);
v___x_705_ = ((lean_object*)(l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__15));
v___x_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_706_, 0, v___x_705_);
return v___x_706_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___boxed(lean_object* v_letId_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_){
_start:
{
lean_object* v_res_715_; 
v_res_715_ = l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars(v_letId_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_);
lean_dec(v_a_713_);
lean_dec_ref(v_a_712_);
lean_dec(v_a_711_);
lean_dec_ref(v_a_710_);
lean_dec(v_a_709_);
lean_dec_ref(v_a_708_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0(lean_object* v_00_u03b1_716_, lean_object* v_msg_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_){
_start:
{
lean_object* v___x_725_; 
v___x_725_ = l_Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0___redArg(v_msg_717_, v___y_718_, v___y_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0___boxed(lean_object* v_00_u03b1_726_, lean_object* v_msg_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0(v_00_u03b1_726_, v_msg_727_, v___y_728_, v___y_729_, v___y_730_, v___y_731_, v___y_732_, v___y_733_);
lean_dec(v___y_733_);
lean_dec_ref(v___y_732_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1(lean_object* v_msgData_736_, lean_object* v_macroStack_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___redArg(v_msgData_736_, v_macroStack_737_, v___y_742_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1___boxed(lean_object* v_msgData_746_, lean_object* v_macroStack_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v_res_755_; 
v_res_755_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0_spec__1(v_msgData_746_, v_macroStack_747_, v___y_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
lean_dec(v___y_749_);
lean_dec_ref(v___y_748_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getLetIdDeclVars(lean_object* v_letIdDecl_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_, lean_object* v_a_761_, lean_object* v_a_762_){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_764_ = lean_unsigned_to_nat(0u);
v___x_765_ = l_Lean_Syntax_getArg(v_letIdDecl_756_, v___x_764_);
v___x_766_ = l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars(v___x_765_, v_a_757_, v_a_758_, v_a_759_, v_a_760_, v_a_761_, v_a_762_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getLetIdDeclVars___boxed(lean_object* v_letIdDecl_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l_Lean_Elab_Do_getLetIdDeclVars(v_letIdDecl_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_);
lean_dec(v_a_773_);
lean_dec_ref(v_a_772_);
lean_dec(v_a_771_);
lean_dec_ref(v_a_770_);
lean_dec(v_a_769_);
lean_dec_ref(v_a_768_);
lean_dec(v_letIdDecl_767_);
return v_res_775_;
}
}
static lean_object* _init_l_Lean_Elab_Do_getLetPatDeclVars___closed__6(void){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_790_ = ((lean_object*)(l_Lean_Elab_Do_getLetPatDeclVars___closed__5));
v___x_791_ = l_String_toRawSubstring_x27(v___x_790_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getLetPatDeclVars(lean_object* v_letPatDecl_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v_pattern_849_; lean_object* v_rhsTyped_851_; lean_object* v___y_852_; lean_object* v___y_853_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___y_856_; lean_object* v___y_857_; lean_object* v___x_869_; lean_object* v_optType_870_; lean_object* v___x_871_; lean_object* v_rhs_872_; uint8_t v___x_873_; 
v___x_847_ = lean_box(1);
v___x_848_ = lean_unsigned_to_nat(0u);
v_pattern_849_ = l_Lean_Syntax_getArg(v_letPatDecl_839_, v___x_848_);
v___x_869_ = lean_unsigned_to_nat(2u);
v_optType_870_ = l_Lean_Syntax_getArg(v_letPatDecl_839_, v___x_869_);
v___x_871_ = lean_unsigned_to_nat(4u);
v_rhs_872_ = l_Lean_Syntax_getArg(v_letPatDecl_839_, v___x_871_);
v___x_873_ = l_Lean_Syntax_isNone(v_optType_870_);
if (v___x_873_ == 0)
{
lean_object* v_toCold_874_; lean_object* v_ref_875_; lean_object* v_quotContext_876_; lean_object* v_currMacroScope_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v_toCold_874_ = lean_ctor_get(v_a_844_, 0);
v_ref_875_ = lean_ctor_get(v_a_844_, 2);
v_quotContext_876_ = lean_ctor_get(v_toCold_874_, 8);
v_currMacroScope_877_ = lean_ctor_get(v_toCold_874_, 9);
v___x_878_ = l_Lean_SourceInfo_fromRef(v_ref_875_, v___x_873_);
v___x_879_ = ((lean_object*)(l_Lean_Elab_Do_getLetPatDeclVars___closed__1));
v___x_880_ = ((lean_object*)(l_Lean_Elab_Do_getLetPatDeclVars___closed__3));
v___x_881_ = ((lean_object*)(l_Lean_Elab_Do_getLetPatDeclVars___closed__4));
lean_inc_n(v___x_878_, 7);
v___x_882_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_882_, 0, v___x_878_);
lean_ctor_set(v___x_882_, 1, v___x_881_);
v___x_883_ = ((lean_object*)(l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__12));
v___x_884_ = lean_obj_once(&l_Lean_Elab_Do_getLetPatDeclVars___closed__6, &l_Lean_Elab_Do_getLetPatDeclVars___closed__6_once, _init_l_Lean_Elab_Do_getLetPatDeclVars___closed__6);
v___x_885_ = lean_box(0);
lean_inc(v_currMacroScope_877_);
lean_inc(v_quotContext_876_);
v___x_886_ = l_Lean_addMacroScope(v_quotContext_876_, v___x_885_, v_currMacroScope_877_);
v___x_887_ = ((lean_object*)(l_Lean_Elab_Do_getLetPatDeclVars___closed__23));
v___x_888_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_888_, 0, v___x_878_);
lean_ctor_set(v___x_888_, 1, v___x_884_);
lean_ctor_set(v___x_888_, 2, v___x_886_);
lean_ctor_set(v___x_888_, 3, v___x_887_);
v___x_889_ = l_Lean_Syntax_node1(v___x_878_, v___x_883_, v___x_888_);
v___x_890_ = l_Lean_Syntax_node2(v___x_878_, v___x_880_, v___x_882_, v___x_889_);
v___x_891_ = ((lean_object*)(l_Lean_Elab_Do_getLetPatDeclVars___closed__24));
v___x_892_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_892_, 0, v___x_878_);
lean_ctor_set(v___x_892_, 1, v___x_891_);
v___x_893_ = ((lean_object*)(l_Lean_Elab_Do_getLetPatDeclVars___closed__26));
v___x_894_ = l_Lean_Syntax_getArg(v_optType_870_, v___x_848_);
lean_dec(v_optType_870_);
v___x_895_ = lean_unsigned_to_nat(1u);
v___x_896_ = l_Lean_Syntax_getArg(v___x_894_, v___x_895_);
lean_dec(v___x_894_);
v___x_897_ = l_Lean_Syntax_node1(v___x_878_, v___x_893_, v___x_896_);
v___x_898_ = ((lean_object*)(l_Lean_Elab_Do_getLetPatDeclVars___closed__27));
v___x_899_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_878_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
v___x_900_ = l_Lean_Syntax_node5(v___x_878_, v___x_879_, v___x_890_, v_rhs_872_, v___x_892_, v___x_897_, v___x_899_);
v_rhsTyped_851_ = v___x_900_;
v___y_852_ = v_a_840_;
v___y_853_ = v_a_841_;
v___y_854_ = v_a_842_;
v___y_855_ = v_a_843_;
v___y_856_ = v_a_844_;
v___y_857_ = v_a_845_;
goto v___jp_850_;
}
else
{
lean_dec(v_optType_870_);
v_rhsTyped_851_ = v_rhs_872_;
v___y_852_ = v_a_840_;
v___y_853_ = v_a_841_;
v___y_854_ = v_a_842_;
v___y_855_ = v_a_843_;
v___y_856_ = v_a_844_;
v___y_857_ = v_a_845_;
goto v___jp_850_;
}
v___jp_850_:
{
lean_object* v___x_858_; 
v___x_858_ = l_Lean_Elab_Do_promoteBarePatForRhs(v_pattern_849_, v_rhsTyped_851_, v___x_847_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v_a_859_; lean_object* v___x_860_; 
v_a_859_ = lean_ctor_get(v___x_858_, 0);
lean_inc(v_a_859_);
lean_dec_ref_known(v___x_858_, 1);
v___x_860_ = l_Lean_Elab_Do_getPatternVarsEx(v_a_859_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_);
return v___x_860_;
}
else
{
lean_object* v_a_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_868_; 
v_a_861_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_868_ == 0)
{
v___x_863_ = v___x_858_;
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_a_861_);
lean_dec(v___x_858_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_866_; 
if (v_isShared_864_ == 0)
{
v___x_866_ = v___x_863_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_a_861_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getLetPatDeclVars___boxed(lean_object* v_letPatDecl_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l_Lean_Elab_Do_getLetPatDeclVars(v_letPatDecl_901_, v_a_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_, v_a_907_);
lean_dec(v_a_907_);
lean_dec_ref(v_a_906_);
lean_dec(v_a_905_);
lean_dec_ref(v_a_904_);
lean_dec(v_a_903_);
lean_dec_ref(v_a_902_);
lean_dec(v_letPatDecl_901_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetEqnsDeclVars(lean_object* v_letEqnsDecl_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_918_ = lean_unsigned_to_nat(0u);
v___x_919_ = l_Lean_Syntax_getArg(v_letEqnsDecl_910_, v___x_918_);
v___x_920_ = l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars(v___x_919_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_, v_a_916_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetEqnsDeclVars___boxed(lean_object* v_letEqnsDecl_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_){
_start:
{
lean_object* v_res_929_; 
v_res_929_ = l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetEqnsDeclVars(v_letEqnsDecl_921_, v_a_922_, v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_);
lean_dec(v_a_927_);
lean_dec_ref(v_a_926_);
lean_dec(v_a_925_);
lean_dec_ref(v_a_924_);
lean_dec(v_a_923_);
lean_dec_ref(v_a_922_);
lean_dec(v_letEqnsDecl_921_);
return v_res_929_;
}
}
static lean_object* _init_l_Lean_Elab_Do_getLetDeclVars___closed__3(void){
_start:
{
lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_937_ = ((lean_object*)(l_Lean_Elab_Do_getLetDeclVars___closed__2));
v___x_938_ = l_Lean_stringToMessageData(v___x_937_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getLetDeclVars(lean_object* v_letDecl_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_){
_start:
{
lean_object* v___x_965_; uint8_t v___x_966_; 
v___x_965_ = ((lean_object*)(l_Lean_Elab_Do_getLetDeclVars___closed__1));
lean_inc(v_letDecl_957_);
v___x_966_ = l_Lean_Syntax_isOfKind(v_letDecl_957_, v___x_965_);
if (v___x_966_ == 0)
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_967_ = lean_obj_once(&l_Lean_Elab_Do_getLetDeclVars___closed__3, &l_Lean_Elab_Do_getLetDeclVars___closed__3_once, _init_l_Lean_Elab_Do_getLetDeclVars___closed__3);
v___x_968_ = lean_box(0);
v___x_969_ = l_Lean_Syntax_formatStx(v_letDecl_957_, v___x_968_, v___x_966_);
v___x_970_ = l_Std_Format_defWidth;
v___x_971_ = lean_unsigned_to_nat(0u);
v___x_972_ = l_Std_Format_pretty(v___x_969_, v___x_970_, v___x_971_, v___x_971_);
v___x_973_ = l_Lean_stringToMessageData(v___x_972_);
v___x_974_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_967_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
v___x_975_ = l_Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0___redArg(v___x_974_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_);
return v___x_975_;
}
else
{
lean_object* v___x_976_; lean_object* v_letIdDecl_977_; lean_object* v___x_978_; uint8_t v___x_979_; 
v___x_976_ = lean_unsigned_to_nat(0u);
v_letIdDecl_977_ = l_Lean_Syntax_getArg(v_letDecl_957_, v___x_976_);
v___x_978_ = ((lean_object*)(l_Lean_Elab_Do_getLetDeclVars___closed__5));
lean_inc(v_letIdDecl_977_);
v___x_979_ = l_Lean_Syntax_isOfKind(v_letIdDecl_977_, v___x_978_);
if (v___x_979_ == 0)
{
lean_object* v___x_980_; uint8_t v___x_981_; 
v___x_980_ = ((lean_object*)(l_Lean_Elab_Do_getLetDeclVars___closed__7));
lean_inc(v_letIdDecl_977_);
v___x_981_ = l_Lean_Syntax_isOfKind(v_letIdDecl_977_, v___x_980_);
if (v___x_981_ == 0)
{
lean_object* v___x_982_; uint8_t v___x_983_; 
v___x_982_ = ((lean_object*)(l_Lean_Elab_Do_getLetDeclVars___closed__9));
lean_inc(v_letIdDecl_977_);
v___x_983_ = l_Lean_Syntax_isOfKind(v_letIdDecl_977_, v___x_982_);
if (v___x_983_ == 0)
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
lean_dec(v_letIdDecl_977_);
v___x_984_ = lean_obj_once(&l_Lean_Elab_Do_getLetDeclVars___closed__3, &l_Lean_Elab_Do_getLetDeclVars___closed__3_once, _init_l_Lean_Elab_Do_getLetDeclVars___closed__3);
v___x_985_ = lean_box(0);
v___x_986_ = l_Lean_Syntax_formatStx(v_letDecl_957_, v___x_985_, v___x_983_);
v___x_987_ = l_Std_Format_defWidth;
v___x_988_ = l_Std_Format_pretty(v___x_986_, v___x_987_, v___x_976_, v___x_976_);
v___x_989_ = l_Lean_stringToMessageData(v___x_988_);
v___x_990_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_984_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = l_Lean_throwError___at___00__private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars_spec__0___redArg(v___x_990_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_);
return v___x_991_;
}
else
{
lean_object* v___x_992_; 
lean_dec(v_letDecl_957_);
v___x_992_ = l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetEqnsDeclVars(v_letIdDecl_977_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_);
lean_dec(v_letIdDecl_977_);
return v___x_992_;
}
}
else
{
lean_object* v___x_993_; 
lean_dec(v_letDecl_957_);
v___x_993_ = l_Lean_Elab_Do_getLetPatDeclVars(v_letIdDecl_977_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_);
lean_dec(v_letIdDecl_977_);
return v___x_993_;
}
}
else
{
lean_object* v___x_994_; 
lean_dec(v_letDecl_957_);
v___x_994_ = l_Lean_Elab_Do_getLetIdDeclVars(v_letIdDecl_977_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_);
lean_dec(v_letIdDecl_977_);
return v___x_994_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getLetDeclVars___boxed(lean_object* v_letDecl_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_){
_start:
{
lean_object* v_res_1003_; 
v_res_1003_ = l_Lean_Elab_Do_getLetDeclVars(v_letDecl_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_);
lean_dec(v_a_1001_);
lean_dec_ref(v_a_1000_);
lean_dec(v_a_999_);
lean_dec_ref(v_a_998_);
lean_dec(v_a_997_);
lean_dec_ref(v_a_996_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetRecDeclVars(lean_object* v_letRecDecl_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1012_ = lean_unsigned_to_nat(2u);
v___x_1013_ = l_Lean_Syntax_getArg(v_letRecDecl_1004_, v___x_1012_);
v___x_1014_ = l_Lean_Elab_Do_getLetDeclVars(v___x_1013_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_, v_a_1009_, v_a_1010_);
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetRecDeclVars___boxed(lean_object* v_letRecDecl_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_){
_start:
{
lean_object* v_res_1023_; 
v_res_1023_ = l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetRecDeclVars(v_letRecDecl_1015_, v_a_1016_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_, v_a_1021_);
lean_dec(v_a_1021_);
lean_dec_ref(v_a_1020_);
lean_dec(v_a_1019_);
lean_dec_ref(v_a_1018_);
lean_dec(v_a_1017_);
lean_dec_ref(v_a_1016_);
lean_dec(v_letRecDecl_1015_);
return v_res_1023_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1024_ = lean_box(0);
v___x_1025_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1026_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1025_);
lean_ctor_set(v___x_1026_, 1, v___x_1024_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg(){
_start:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1028_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg___closed__0);
v___x_1029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
return v___x_1029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg___boxed(lean_object* v___y_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg();
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1(lean_object* v_00_u03b1_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg();
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___boxed(lean_object* v_00_u03b1_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1(v_00_u03b1_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0(size_t v_sz_1056_, size_t v_i_1057_, lean_object* v_bs_1058_){
_start:
{
uint8_t v___x_1059_; 
v___x_1059_ = lean_usize_dec_lt(v_i_1057_, v_sz_1056_);
if (v___x_1059_ == 0)
{
lean_object* v___x_1060_; 
v___x_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1060_, 0, v_bs_1058_);
return v___x_1060_;
}
else
{
lean_object* v_v_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; 
v_v_1061_ = lean_array_uget(v_bs_1058_, v_i_1057_);
v___x_1062_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0___closed__1));
lean_inc(v_v_1061_);
v___x_1063_ = l_Lean_Syntax_isOfKind(v_v_1061_, v___x_1062_);
if (v___x_1063_ == 0)
{
lean_object* v___x_1064_; 
lean_dec(v_v_1061_);
lean_dec_ref(v_bs_1058_);
v___x_1064_ = lean_box(0);
return v___x_1064_;
}
else
{
lean_object* v___x_1065_; lean_object* v_bs_x27_1066_; size_t v___x_1067_; size_t v___x_1068_; lean_object* v___x_1069_; 
v___x_1065_ = lean_unsigned_to_nat(0u);
v_bs_x27_1066_ = lean_array_uset(v_bs_1058_, v_i_1057_, v___x_1065_);
v___x_1067_ = ((size_t)1ULL);
v___x_1068_ = lean_usize_add(v_i_1057_, v___x_1067_);
v___x_1069_ = lean_array_uset(v_bs_x27_1066_, v_i_1057_, v_v_1061_);
v_i_1057_ = v___x_1068_;
v_bs_1058_ = v___x_1069_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0___boxed(lean_object* v_sz_1071_, lean_object* v_i_1072_, lean_object* v_bs_1073_){
_start:
{
size_t v_sz_boxed_1074_; size_t v_i_boxed_1075_; lean_object* v_res_1076_; 
v_sz_boxed_1074_ = lean_unbox_usize(v_sz_1071_);
lean_dec(v_sz_1071_);
v_i_boxed_1075_ = lean_unbox_usize(v_i_1072_);
lean_dec(v_i_1072_);
v_res_1076_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0(v_sz_boxed_1074_, v_i_boxed_1075_, v_bs_1073_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__2(lean_object* v_as_1077_, size_t v_sz_1078_, size_t v_i_1079_, lean_object* v_b_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_){
_start:
{
uint8_t v___x_1088_; 
v___x_1088_ = lean_usize_dec_lt(v_i_1079_, v_sz_1078_);
if (v___x_1088_ == 0)
{
lean_object* v___x_1089_; 
v___x_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1089_, 0, v_b_1080_);
return v___x_1089_;
}
else
{
lean_object* v_a_1090_; lean_object* v___x_1091_; 
v_a_1090_ = lean_array_uget_borrowed(v_as_1077_, v_i_1079_);
v___x_1091_ = l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetRecDeclVars(v_a_1090_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_);
if (lean_obj_tag(v___x_1091_) == 0)
{
lean_object* v_a_1092_; lean_object* v___x_1093_; size_t v___x_1094_; size_t v___x_1095_; 
v_a_1092_ = lean_ctor_get(v___x_1091_, 0);
lean_inc(v_a_1092_);
lean_dec_ref_known(v___x_1091_, 1);
v___x_1093_ = l_Array_append___redArg(v_b_1080_, v_a_1092_);
lean_dec(v_a_1092_);
v___x_1094_ = ((size_t)1ULL);
v___x_1095_ = lean_usize_add(v_i_1079_, v___x_1094_);
v_i_1079_ = v___x_1095_;
v_b_1080_ = v___x_1093_;
goto _start;
}
else
{
lean_dec_ref(v_b_1080_);
return v___x_1091_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__2___boxed(lean_object* v_as_1097_, lean_object* v_sz_1098_, lean_object* v_i_1099_, lean_object* v_b_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_){
_start:
{
size_t v_sz_boxed_1108_; size_t v_i_boxed_1109_; lean_object* v_res_1110_; 
v_sz_boxed_1108_ = lean_unbox_usize(v_sz_1098_);
lean_dec(v_sz_1098_);
v_i_boxed_1109_ = lean_unbox_usize(v_i_1099_);
lean_dec(v_i_1099_);
v_res_1110_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__2(v_as_1097_, v_sz_boxed_1108_, v_i_boxed_1109_, v_b_1100_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_);
lean_dec(v___y_1106_);
lean_dec_ref(v___y_1105_);
lean_dec(v___y_1104_);
lean_dec_ref(v___y_1103_);
lean_dec(v___y_1102_);
lean_dec_ref(v___y_1101_);
lean_dec_ref(v_as_1097_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__3(uint8_t v___x_1111_, lean_object* v_as_1112_, size_t v_i_1113_, size_t v_stop_1114_, lean_object* v_b_1115_){
_start:
{
lean_object* v___y_1117_; uint8_t v___x_1121_; 
v___x_1121_ = lean_usize_dec_eq(v_i_1113_, v_stop_1114_);
if (v___x_1121_ == 0)
{
lean_object* v_fst_1122_; uint8_t v___x_1123_; 
v_fst_1122_ = lean_ctor_get(v_b_1115_, 0);
v___x_1123_ = lean_unbox(v_fst_1122_);
if (v___x_1123_ == 0)
{
lean_object* v_snd_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1132_; 
v_snd_1124_ = lean_ctor_get(v_b_1115_, 1);
v_isSharedCheck_1132_ = !lean_is_exclusive(v_b_1115_);
if (v_isSharedCheck_1132_ == 0)
{
lean_object* v_unused_1133_; 
v_unused_1133_ = lean_ctor_get(v_b_1115_, 0);
lean_dec(v_unused_1133_);
v___x_1126_ = v_b_1115_;
v_isShared_1127_ = v_isSharedCheck_1132_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_snd_1124_);
lean_dec(v_b_1115_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1132_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1128_; lean_object* v___x_1130_; 
v___x_1128_ = lean_box(v___x_1111_);
if (v_isShared_1127_ == 0)
{
lean_ctor_set(v___x_1126_, 0, v___x_1128_);
v___x_1130_ = v___x_1126_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v___x_1128_);
lean_ctor_set(v_reuseFailAlloc_1131_, 1, v_snd_1124_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
v___y_1117_ = v___x_1130_;
goto v___jp_1116_;
}
}
}
else
{
lean_object* v_snd_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1144_; 
v_snd_1134_ = lean_ctor_get(v_b_1115_, 1);
v_isSharedCheck_1144_ = !lean_is_exclusive(v_b_1115_);
if (v_isSharedCheck_1144_ == 0)
{
lean_object* v_unused_1145_; 
v_unused_1145_ = lean_ctor_get(v_b_1115_, 0);
lean_dec(v_unused_1145_);
v___x_1136_ = v_b_1115_;
v_isShared_1137_ = v_isSharedCheck_1144_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_snd_1134_);
lean_dec(v_b_1115_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1144_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1142_; 
v___x_1138_ = lean_array_uget_borrowed(v_as_1112_, v_i_1113_);
lean_inc(v___x_1138_);
v___x_1139_ = lean_array_push(v_snd_1134_, v___x_1138_);
v___x_1140_ = lean_box(v___x_1121_);
if (v_isShared_1137_ == 0)
{
lean_ctor_set(v___x_1136_, 1, v___x_1139_);
lean_ctor_set(v___x_1136_, 0, v___x_1140_);
v___x_1142_ = v___x_1136_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v___x_1140_);
lean_ctor_set(v_reuseFailAlloc_1143_, 1, v___x_1139_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
v___y_1117_ = v___x_1142_;
goto v___jp_1116_;
}
}
}
}
else
{
return v_b_1115_;
}
v___jp_1116_:
{
size_t v___x_1118_; size_t v___x_1119_; 
v___x_1118_ = ((size_t)1ULL);
v___x_1119_ = lean_usize_add(v_i_1113_, v___x_1118_);
v_i_1113_ = v___x_1119_;
v_b_1115_ = v___y_1117_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__3___boxed(lean_object* v___x_1146_, lean_object* v_as_1147_, lean_object* v_i_1148_, lean_object* v_stop_1149_, lean_object* v_b_1150_){
_start:
{
uint8_t v___x_1616__boxed_1151_; size_t v_i_boxed_1152_; size_t v_stop_boxed_1153_; lean_object* v_res_1154_; 
v___x_1616__boxed_1151_ = lean_unbox(v___x_1146_);
v_i_boxed_1152_ = lean_unbox_usize(v_i_1148_);
lean_dec(v_i_1148_);
v_stop_boxed_1153_ = lean_unbox_usize(v_stop_1149_);
lean_dec(v_stop_1149_);
v_res_1154_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__3(v___x_1616__boxed_1151_, v_as_1147_, v_i_boxed_1152_, v_stop_boxed_1153_, v_b_1150_);
lean_dec_ref(v_as_1147_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getLetRecDeclsVars(lean_object* v_letRecDecls_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_){
_start:
{
lean_object* v___y_1172_; lean_object* v___x_1181_; uint8_t v___x_1182_; 
v___x_1181_ = ((lean_object*)(l_Lean_Elab_Do_getLetRecDeclsVars___closed__1));
lean_inc(v_letRecDecls_1163_);
v___x_1182_ = l_Lean_Syntax_isOfKind(v_letRecDecls_1163_, v___x_1181_);
if (v___x_1182_ == 0)
{
lean_object* v___x_1183_; 
lean_dec(v_letRecDecls_1163_);
v___x_1183_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg();
return v___x_1183_;
}
else
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; uint8_t v___x_1189_; 
v___x_1184_ = lean_unsigned_to_nat(0u);
v___x_1185_ = l_Lean_Syntax_getArg(v_letRecDecls_1163_, v___x_1184_);
lean_dec(v_letRecDecls_1163_);
v___x_1186_ = l_Lean_Syntax_getArgs(v___x_1185_);
lean_dec(v___x_1185_);
v___x_1187_ = ((lean_object*)(l_Lean_Elab_Do_getLetRecDeclsVars___closed__2));
v___x_1188_ = lean_array_get_size(v___x_1186_);
v___x_1189_ = lean_nat_dec_lt(v___x_1184_, v___x_1188_);
if (v___x_1189_ == 0)
{
lean_dec_ref(v___x_1186_);
v___y_1172_ = v___x_1187_;
goto v___jp_1171_;
}
else
{
lean_object* v___x_1190_; lean_object* v___x_1191_; size_t v___x_1192_; size_t v___x_1193_; lean_object* v___x_1194_; lean_object* v_snd_1195_; 
v___x_1190_ = lean_box(v___x_1189_);
v___x_1191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1190_);
lean_ctor_set(v___x_1191_, 1, v___x_1187_);
v___x_1192_ = ((size_t)0ULL);
v___x_1193_ = lean_usize_of_nat(v___x_1188_);
v___x_1194_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__3(v___x_1182_, v___x_1186_, v___x_1192_, v___x_1193_, v___x_1191_);
lean_dec_ref(v___x_1186_);
v_snd_1195_ = lean_ctor_get(v___x_1194_, 1);
lean_inc(v_snd_1195_);
lean_dec_ref(v___x_1194_);
v___y_1172_ = v_snd_1195_;
goto v___jp_1171_;
}
}
v___jp_1171_:
{
size_t v_sz_1173_; size_t v___x_1174_; lean_object* v___x_1175_; 
v_sz_1173_ = lean_array_size(v___y_1172_);
v___x_1174_ = ((size_t)0ULL);
v___x_1175_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__0(v_sz_1173_, v___x_1174_, v___y_1172_);
if (lean_obj_tag(v___x_1175_) == 0)
{
lean_object* v___x_1176_; 
v___x_1176_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg();
return v___x_1176_;
}
else
{
lean_object* v_val_1177_; lean_object* v_allVars_1178_; size_t v_sz_1179_; lean_object* v___x_1180_; 
v_val_1177_ = lean_ctor_get(v___x_1175_, 0);
lean_inc(v_val_1177_);
lean_dec_ref_known(v___x_1175_, 1);
v_allVars_1178_ = ((lean_object*)(l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__15));
v_sz_1179_ = lean_array_size(v_val_1177_);
v___x_1180_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__2(v_val_1177_, v_sz_1179_, v___x_1174_, v_allVars_1178_, v_a_1164_, v_a_1165_, v_a_1166_, v_a_1167_, v_a_1168_, v_a_1169_);
lean_dec(v_val_1177_);
return v___x_1180_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getLetRecDeclsVars___boxed(lean_object* v_letRecDecls_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l_Lean_Elab_Do_getLetRecDeclsVars(v_letRecDecls_1196_, v_a_1197_, v_a_1198_, v_a_1199_, v_a_1200_, v_a_1201_, v_a_1202_);
lean_dec(v_a_1202_);
lean_dec_ref(v_a_1201_);
lean_dec(v_a_1200_);
lean_dec_ref(v_a_1199_);
lean_dec(v_a_1198_);
lean_dec_ref(v_a_1197_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__2(size_t v_sz_1205_, size_t v_i_1206_, lean_object* v_bs_1207_){
_start:
{
uint8_t v___x_1208_; 
v___x_1208_ = lean_usize_dec_lt(v_i_1206_, v_sz_1205_);
if (v___x_1208_ == 0)
{
return v_bs_1207_;
}
else
{
lean_object* v_v_1209_; lean_object* v___x_1210_; lean_object* v_bs_x27_1211_; size_t v___x_1212_; size_t v___x_1213_; lean_object* v___x_1214_; 
v_v_1209_ = lean_array_uget(v_bs_1207_, v_i_1206_);
v___x_1210_ = lean_unsigned_to_nat(0u);
v_bs_x27_1211_ = lean_array_uset(v_bs_1207_, v_i_1206_, v___x_1210_);
v___x_1212_ = ((size_t)1ULL);
v___x_1213_ = lean_usize_add(v_i_1206_, v___x_1212_);
v___x_1214_ = lean_array_uset(v_bs_x27_1211_, v_i_1206_, v_v_1209_);
v_i_1206_ = v___x_1213_;
v_bs_1207_ = v___x_1214_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__2___boxed(lean_object* v_sz_1216_, lean_object* v_i_1217_, lean_object* v_bs_1218_){
_start:
{
size_t v_sz_boxed_1219_; size_t v_i_boxed_1220_; lean_object* v_res_1221_; 
v_sz_boxed_1219_ = lean_unbox_usize(v_sz_1216_);
lean_dec(v_sz_1216_);
v_i_boxed_1220_ = lean_unbox_usize(v_i_1217_);
lean_dec(v_i_1217_);
v_res_1221_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__2(v_sz_boxed_1219_, v_i_boxed_1220_, v_bs_1218_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__0(size_t v_sz_1222_, size_t v_i_1223_, lean_object* v_bs_1224_){
_start:
{
uint8_t v___x_1225_; 
v___x_1225_ = lean_usize_dec_lt(v_i_1223_, v_sz_1222_);
if (v___x_1225_ == 0)
{
return v_bs_1224_;
}
else
{
lean_object* v_v_1226_; lean_object* v___x_1227_; lean_object* v_bs_x27_1228_; size_t v___x_1229_; size_t v___x_1230_; lean_object* v___x_1231_; 
v_v_1226_ = lean_array_uget(v_bs_1224_, v_i_1223_);
v___x_1227_ = lean_unsigned_to_nat(0u);
v_bs_x27_1228_ = lean_array_uset(v_bs_1224_, v_i_1223_, v___x_1227_);
v___x_1229_ = ((size_t)1ULL);
v___x_1230_ = lean_usize_add(v_i_1223_, v___x_1229_);
v___x_1231_ = lean_array_uset(v_bs_x27_1228_, v_i_1223_, v_v_1226_);
v_i_1223_ = v___x_1230_;
v_bs_1224_ = v___x_1231_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__0___boxed(lean_object* v_sz_1233_, lean_object* v_i_1234_, lean_object* v_bs_1235_){
_start:
{
size_t v_sz_boxed_1236_; size_t v_i_boxed_1237_; lean_object* v_res_1238_; 
v_sz_boxed_1236_ = lean_unbox_usize(v_sz_1233_);
lean_dec(v_sz_1233_);
v_i_boxed_1237_ = lean_unbox_usize(v_i_1234_);
lean_dec(v_i_1234_);
v_res_1238_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__0(v_sz_boxed_1236_, v_i_boxed_1237_, v_bs_1235_);
return v_res_1238_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__1(lean_object* v_as_1239_, size_t v_i_1240_, size_t v_stop_1241_, lean_object* v_b_1242_){
_start:
{
lean_object* v___y_1244_; uint8_t v___x_1248_; 
v___x_1248_ = lean_usize_dec_eq(v_i_1240_, v_stop_1241_);
if (v___x_1248_ == 0)
{
lean_object* v___x_1249_; uint8_t v___x_1250_; 
v___x_1249_ = lean_array_uget_borrowed(v_as_1239_, v_i_1240_);
v___x_1250_ = l_Lean_Syntax_isIdent(v___x_1249_);
if (v___x_1250_ == 0)
{
v___y_1244_ = v_b_1242_;
goto v___jp_1243_;
}
else
{
lean_object* v___x_1251_; 
lean_inc(v___x_1249_);
v___x_1251_ = lean_array_push(v_b_1242_, v___x_1249_);
v___y_1244_ = v___x_1251_;
goto v___jp_1243_;
}
}
else
{
return v_b_1242_;
}
v___jp_1243_:
{
size_t v___x_1245_; size_t v___x_1246_; 
v___x_1245_ = ((size_t)1ULL);
v___x_1246_ = lean_usize_add(v_i_1240_, v___x_1245_);
v_i_1240_ = v___x_1246_;
v_b_1242_ = v___y_1244_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__1___boxed(lean_object* v_as_1252_, lean_object* v_i_1253_, lean_object* v_stop_1254_, lean_object* v_b_1255_){
_start:
{
size_t v_i_boxed_1256_; size_t v_stop_boxed_1257_; lean_object* v_res_1258_; 
v_i_boxed_1256_ = lean_unbox_usize(v_i_1253_);
lean_dec(v_i_1253_);
v_stop_boxed_1257_ = lean_unbox_usize(v_stop_1254_);
lean_dec(v_stop_1254_);
v_res_1258_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__1(v_as_1252_, v_i_boxed_1256_, v_stop_boxed_1257_, v_b_1255_);
lean_dec_ref(v_as_1252_);
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getExprPatternVarsEx___redArg(lean_object* v_exprPattern_1265_){
_start:
{
lean_object* v___y_1268_; lean_object* v___y_1274_; size_t v___y_1275_; lean_object* v___y_1276_; lean_object* v___x_1281_; uint8_t v___x_1282_; 
v___x_1281_ = ((lean_object*)(l_Lean_Elab_Do_getExprPatternVarsEx___redArg___closed__1));
lean_inc(v_exprPattern_1265_);
v___x_1282_ = l_Lean_Syntax_isOfKind(v_exprPattern_1265_, v___x_1281_);
if (v___x_1282_ == 0)
{
lean_object* v___x_1283_; 
lean_dec(v_exprPattern_1265_);
v___x_1283_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg();
return v___x_1283_;
}
else
{
lean_object* v___x_1284_; lean_object* v_var_x3f_1286_; lean_object* v___x_1312_; uint8_t v___x_1313_; 
v___x_1284_ = lean_unsigned_to_nat(0u);
v___x_1312_ = l_Lean_Syntax_getArg(v_exprPattern_1265_, v___x_1284_);
v___x_1313_ = l_Lean_Syntax_isNone(v___x_1312_);
if (v___x_1313_ == 0)
{
lean_object* v___x_1314_; uint8_t v___x_1315_; 
v___x_1314_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_1312_);
v___x_1315_ = l_Lean_Syntax_matchesNull(v___x_1312_, v___x_1314_);
if (v___x_1315_ == 0)
{
lean_object* v___x_1316_; 
lean_dec(v___x_1312_);
lean_dec(v_exprPattern_1265_);
v___x_1316_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg();
return v___x_1316_;
}
else
{
lean_object* v_var_x3f_1317_; lean_object* v___x_1318_; 
v_var_x3f_1317_ = l_Lean_Syntax_getArg(v___x_1312_, v___x_1284_);
lean_dec(v___x_1312_);
v___x_1318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1318_, 0, v_var_x3f_1317_);
v_var_x3f_1286_ = v___x_1318_;
goto v___jp_1285_;
}
}
else
{
lean_object* v___x_1319_; 
lean_dec(v___x_1312_);
v___x_1319_ = lean_box(0);
v_var_x3f_1286_ = v___x_1319_;
goto v___jp_1285_;
}
v___jp_1285_:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; uint8_t v___x_1290_; 
v___x_1287_ = lean_unsigned_to_nat(1u);
v___x_1288_ = l_Lean_Syntax_getArg(v_exprPattern_1265_, v___x_1287_);
v___x_1289_ = ((lean_object*)(l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__10));
v___x_1290_ = l_Lean_Syntax_isOfKind(v___x_1288_, v___x_1289_);
if (v___x_1290_ == 0)
{
lean_object* v___x_1291_; 
lean_dec(v_var_x3f_1286_);
lean_dec(v_exprPattern_1265_);
v___x_1291_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_getLetRecDeclsVars_spec__1___redArg();
return v___x_1291_;
}
else
{
lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v_pvars_1294_; 
v___x_1292_ = lean_unsigned_to_nat(2u);
v___x_1293_ = l_Lean_Syntax_getArg(v_exprPattern_1265_, v___x_1292_);
lean_dec(v_exprPattern_1265_);
v_pvars_1294_ = l_Lean_Syntax_getArgs(v___x_1293_);
lean_dec(v___x_1293_);
if (lean_obj_tag(v_var_x3f_1286_) == 0)
{
lean_object* v___x_1295_; lean_object* v___x_1296_; uint8_t v___x_1297_; 
v___x_1295_ = lean_array_get_size(v_pvars_1294_);
v___x_1296_ = ((lean_object*)(l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__15));
v___x_1297_ = lean_nat_dec_lt(v___x_1284_, v___x_1295_);
if (v___x_1297_ == 0)
{
lean_dec_ref(v_pvars_1294_);
v___y_1268_ = v___x_1296_;
goto v___jp_1267_;
}
else
{
size_t v___x_1298_; size_t v___x_1299_; lean_object* v___x_1300_; 
v___x_1298_ = ((size_t)0ULL);
v___x_1299_ = lean_usize_of_nat(v___x_1295_);
v___x_1300_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__1(v_pvars_1294_, v___x_1298_, v___x_1299_, v___x_1296_);
lean_dec_ref(v_pvars_1294_);
v___y_1268_ = v___x_1300_;
goto v___jp_1267_;
}
}
else
{
lean_object* v_val_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; size_t v_sz_1304_; size_t v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; uint8_t v___x_1309_; 
v_val_1301_ = lean_ctor_get(v_var_x3f_1286_, 0);
lean_inc(v_val_1301_);
lean_dec_ref_known(v_var_x3f_1286_, 1);
v___x_1302_ = lean_mk_empty_array_with_capacity(v___x_1287_);
v___x_1303_ = lean_array_push(v___x_1302_, v_val_1301_);
v_sz_1304_ = lean_array_size(v___x_1303_);
v___x_1305_ = ((size_t)0ULL);
v___x_1306_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__2(v_sz_1304_, v___x_1305_, v___x_1303_);
v___x_1307_ = lean_array_get_size(v_pvars_1294_);
v___x_1308_ = ((lean_object*)(l___private_Lean_Elab_Do_PatternVar_0__Lean_Elab_Do_getLetIdVars___closed__15));
v___x_1309_ = lean_nat_dec_lt(v___x_1284_, v___x_1307_);
if (v___x_1309_ == 0)
{
lean_dec_ref(v_pvars_1294_);
v___y_1274_ = v___x_1306_;
v___y_1275_ = v___x_1305_;
v___y_1276_ = v___x_1308_;
goto v___jp_1273_;
}
else
{
size_t v___x_1310_; lean_object* v___x_1311_; 
v___x_1310_ = lean_usize_of_nat(v___x_1307_);
v___x_1311_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__1(v_pvars_1294_, v___x_1305_, v___x_1310_, v___x_1308_);
lean_dec_ref(v_pvars_1294_);
v___y_1274_ = v___x_1306_;
v___y_1275_ = v___x_1305_;
v___y_1276_ = v___x_1311_;
goto v___jp_1273_;
}
}
}
}
}
v___jp_1267_:
{
size_t v_sz_1269_; size_t v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
v_sz_1269_ = lean_array_size(v___y_1268_);
v___x_1270_ = ((size_t)0ULL);
v___x_1271_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__0(v_sz_1269_, v___x_1270_, v___y_1268_);
v___x_1272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1271_);
return v___x_1272_;
}
v___jp_1273_:
{
lean_object* v___x_1277_; size_t v_sz_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1277_ = l_Array_append___redArg(v___y_1274_, v___y_1276_);
lean_dec_ref(v___y_1276_);
v_sz_1278_ = lean_array_size(v___x_1277_);
v___x_1279_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_getExprPatternVarsEx_spec__0(v_sz_1278_, v___y_1275_, v___x_1277_);
v___x_1280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1279_);
return v___x_1280_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getExprPatternVarsEx___redArg___boxed(lean_object* v_exprPattern_1320_, lean_object* v_a_1321_){
_start:
{
lean_object* v_res_1322_; 
v_res_1322_ = l_Lean_Elab_Do_getExprPatternVarsEx___redArg(v_exprPattern_1320_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getExprPatternVarsEx(lean_object* v_exprPattern_1323_, lean_object* v_a_1324_, lean_object* v_a_1325_, lean_object* v_a_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_){
_start:
{
lean_object* v___x_1331_; 
v___x_1331_ = l_Lean_Elab_Do_getExprPatternVarsEx___redArg(v_exprPattern_1323_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_getExprPatternVarsEx___boxed(lean_object* v_exprPattern_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_){
_start:
{
lean_object* v_res_1340_; 
v_res_1340_ = l_Lean_Elab_Do_getExprPatternVarsEx(v_exprPattern_1332_, v_a_1333_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_);
lean_dec(v_a_1338_);
lean_dec_ref(v_a_1337_);
lean_dec(v_a_1336_);
lean_dec_ref(v_a_1335_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
return v_res_1340_;
}
}
lean_object* runtime_initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PatternVar(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Quotation(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_ExprQuot(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Do_PatternVar(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Quotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ExprQuot(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Do_PatternVar(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Lean_Elab_PatternVar(uint8_t builtin);
lean_object* initialize_Lean_Elab_Quotation(uint8_t builtin);
lean_object* initialize_Lean_Elab_ExprQuot(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Do_PatternVar(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Quotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ExprQuot(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Do_PatternVar(builtin);
}
#ifdef __cplusplus
}
#endif
