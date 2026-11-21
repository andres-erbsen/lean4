// Lean compiler output
// Module: Lean.Elab.Quotation.Util
// Imports: public import Lean.Elab.Term public import Lean.Linter.Init import Init.Omega import Init.Data.Array.Mem
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
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isEscapedAntiquot(lean_object*);
lean_object* l_Lean_Syntax_getAntiquotTerm(lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isAntiquot(lean_object*);
uint8_t l_Lean_Syntax_isTokenAntiquot(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Syntax_isAntiquotSplice(lean_object*);
uint8_t l_Lean_Syntax_isAntiquotSuffixSplice(lean_object*);
uint8_t l_Lean_Syntax_isAntiquots(lean_object*);
uint8_t l_Lean_Syntax_isQuot(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Syntax_getCanonicalAntiquot(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_topDown(lean_object*, uint8_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_ResolveName_backward_privateInPublic_warn;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_getMessageLog___redArg(lean_object*);
uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_Core_setMessageLog___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
extern lean_object* l_Lean_Elab_postponeExceptionId;
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Core_resetMessageLog___redArg(lean_object*);
lean_object* l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
extern lean_object* l_Lean_Linter_linterMessageTag;
lean_object* lean_array_uget(lean_object*, size_t);
extern lean_object* l_Lean_Linter_linter_exprQuot_syntaxHole;
uint8_t l_Lean_Syntax_isMissing(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__0_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "hygiene"};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__0_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__0_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__1_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__0_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(187, 171, 26, 124, 58, 231, 48, 110)}};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__1_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__1_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__2_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 243, .m_capacity = 243, .m_length = 242, .m_data = "Annotate identifiers in quotations such that they are resolved relative to the scope at their declaration, not that at their eventual use/expansion, to avoid accidental capturing. Note that quotations/notations already defined are unaffected."};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__2_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__2_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__3_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__2_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__3_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__3_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__4_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__4_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__4_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__5_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__5_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__5_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__6_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__6_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__6_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__7_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Quotation"};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__7_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__7_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__8_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__4_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__8_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__8_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__5_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__8_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__8_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__6_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__8_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__8_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__7_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(14, 125, 73, 172, 99, 41, 123, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__8_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__8_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__0_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(66, 249, 245, 72, 137, 60, 151, 235)}};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__8_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__8_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_hygiene;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__0 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__1 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__1_value;
static const lean_string_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__3 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__3_value;
static const lean_string_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__2 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__2_value;
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__4_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__6_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__4_value_aux_2),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__4 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__4_value;
static const lean_string_object l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "complex antiquotation not allowed here"};
static const lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__5 = (const lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__5_value;
static lean_once_cell_t l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__6;
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1_spec__2(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Term_Quotation_getAntiquotationIds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Term_Quotation_getAntiquotationIds___closed__0 = (const lean_object*)&l_Lean_Elab_Term_Quotation_getAntiquotationIds___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_getAntiquotationIds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_getAntiquotationIds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_Quotation_getPatternVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Term_Quotation_getPatternVars___closed__0 = (const lean_object*)&l_Lean_Elab_Term_Quotation_getPatternVars___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_Quotation_getPatternVars___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_Quotation_getPatternVars___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Term_Quotation_getPatternVars___closed__1 = (const lean_object*)&l_Lean_Elab_Term_Quotation_getPatternVars___closed__1_value;
static const lean_string_object l_Lean_Elab_Term_Quotation_getPatternVars___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "namedPattern"};
static const lean_object* l_Lean_Elab_Term_Quotation_getPatternVars___closed__2 = (const lean_object*)&l_Lean_Elab_Term_Quotation_getPatternVars___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Term_Quotation_getPatternVars___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__4_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_Quotation_getPatternVars___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_Quotation_getPatternVars___closed__3_value_aux_0),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_Quotation_getPatternVars___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_Quotation_getPatternVars___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__6_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_Quotation_getPatternVars___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_Quotation_getPatternVars___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Term_Quotation_getPatternVars___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 38, 53, 234, 94, 148, 183, 69)}};
static const lean_object* l_Lean_Elab_Term_Quotation_getPatternVars___closed__3 = (const lean_object*)&l_Lean_Elab_Term_Quotation_getPatternVars___closed__3_value;
static const lean_string_object l_Lean_Elab_Term_Quotation_getPatternVars___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "unsupported pattern in syntax match"};
static const lean_object* l_Lean_Elab_Term_Quotation_getPatternVars___closed__4 = (const lean_object*)&l_Lean_Elab_Term_Quotation_getPatternVars___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Term_Quotation_getPatternVars___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_Quotation_getPatternVars___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_getPatternVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_getPatternVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_Quotation_getPatternsVars_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_Quotation_getPatternsVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_getPatternsVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_getPatternsVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_getAntiquotKindSpec_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_getAntiquotKindSpec_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_resolveSectionVariable_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_resolveSectionVariable_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_resolveSectionVariable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_resolveSectionVariable___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "syntheticHole"};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__0 = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__4_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__1_value_aux_0),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__6_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(218, 189, 67, 60, 211, 196, 112, 165)}};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__1 = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "exprQuot"};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__2 = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__4_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__3_value_aux_0),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__6_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(17, 169, 76, 19, 140, 185, 192, 68)}};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__3 = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Array_map__unattach_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Array_map__unattach_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Term_Quotation_collectNamedSyntaxHoles___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Term_Quotation_collectNamedSyntaxHoles___closed__0 = (const lean_object*)&l_Lean_Elab_Term_Quotation_collectNamedSyntaxHoles___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_collectNamedSyntaxHoles(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "named pattern variable `\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "` inside ordinary syntax quotation in an `Expr` context; did you mean `` `(expr| ...) ``\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_Quotation_isBareTermQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l_Lean_Elab_Term_Quotation_isBareTermQuot___closed__0 = (const lean_object*)&l_Lean_Elab_Term_Quotation_isBareTermQuot___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_Quotation_isBareTermQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__4_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_Quotation_isBareTermQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_Quotation_isBareTermQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_Quotation_isBareTermQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_Quotation_isBareTermQuot___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__6_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_Quotation_isBareTermQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_Quotation_isBareTermQuot___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Term_Quotation_isBareTermQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(145, 163, 173, 41, 168, 168, 65, 81)}};
static const lean_object* l_Lean_Elab_Term_Quotation_isBareTermQuot___closed__1 = (const lean_object*)&l_Lean_Elab_Term_Quotation_isBareTermQuot___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Term_Quotation_isBareTermQuot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_isBareTermQuot___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "precheckedQuot"};
static const lean_object* l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___closed__0 = (const lean_object*)&l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__4_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___closed__1_value_aux_0),((lean_object*)&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__6_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(110, 214, 3, 29, 194, 190, 3, 97)}};
static const lean_object* l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___closed__1 = (const lean_object*)&l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Term_Quotation_isCandidateBareExprQuot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_isCandidateBareExprQuot___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Term_Quotation_shouldCheckBareQuotDiscr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_shouldCheckBareQuotDiscr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots_go_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots___closed__0 = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectArmPlainIdentPats_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectArmPlainIdentPats_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_collectArmPlainIdentPats(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_collectArmPlainIdentPats___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectArmPlainIdentPats_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectArmPlainIdentPats_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3_spec__6___redArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Private declaration `"};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__1;
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "` accessed publicly; this is allowed only because the `backward.privateInPublic` option is enabled. \n\nDisable `backward.privateInPublic.warn` to silence this warning."};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__2_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3_spec__6(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isExpr_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isExpr_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isExpr_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isExpr_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isMVar_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isMVar_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isMVar_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isMVar_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_other_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_other_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_other_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_other_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Term_Quotation_instBEqQuotDiscrTypeClass_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_instBEqQuotDiscrTypeClass_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Term_Quotation_instBEqQuotDiscrTypeClass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_Quotation_instBEqQuotDiscrTypeClass_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Term_Quotation_instBEqQuotDiscrTypeClass___closed__0 = (const lean_object*)&l_Lean_Elab_Term_Quotation_instBEqQuotDiscrTypeClass___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Term_Quotation_instBEqQuotDiscrTypeClass = (const lean_object*)&l_Lean_Elab_Term_Quotation_instBEqQuotDiscrTypeClass___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__0 = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__4_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__0_value),LEAN_SCALAR_PTR_LITERAL(45, 144, 98, 72, 115, 31, 20, 74)}};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__1 = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "TSyntax"};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__2 = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__4_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__2_value),LEAN_SCALAR_PTR_LITERAL(208, 86, 51, 178, 37, 75, 0, 6)}};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__3 = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__3_value;
LEAN_EXPORT uint8_t l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Expr"};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__4_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 208, 74, 211, 93, 83, 88, 82)}};
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0___closed__1_value;
LEAN_EXPORT uint8_t l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_collectOtherDiscrFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_collectOtherDiscrFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1_spec__1___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent___closed__0 = (const lean_object*)&l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_54_ = ((lean_object*)(l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__1_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_));
v___x_55_ = ((lean_object*)(l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__3_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_));
v___x_56_ = ((lean_object*)(l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__8_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_));
v___x_57_ = l_Lean_Option_register___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4__spec__0(v___x_54_, v___x_55_, v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4____boxed(lean_object* v_a_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_();
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__1(lean_object* v_msgData_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
lean_object* v___x_66_; lean_object* v_env_67_; uint8_t v___x_68_; lean_object* v_env_69_; lean_object* v___x_70_; lean_object* v_toCold_71_; lean_object* v_mctx_72_; lean_object* v_lctx_73_; lean_object* v_options_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_66_ = lean_st_ref_get(v___y_64_);
v_env_67_ = lean_ctor_get(v___x_66_, 0);
lean_inc_ref(v_env_67_);
lean_dec(v___x_66_);
v___x_68_ = 0;
v_env_69_ = l_Lean_Environment_setRecordingDeps(v_env_67_, v___x_68_);
v___x_70_ = lean_st_ref_get(v___y_62_);
v_toCold_71_ = lean_ctor_get(v___y_63_, 0);
v_mctx_72_ = lean_ctor_get(v___x_70_, 0);
lean_inc_ref(v_mctx_72_);
lean_dec(v___x_70_);
v_lctx_73_ = lean_ctor_get(v___y_61_, 2);
v_options_74_ = lean_ctor_get(v_toCold_71_, 2);
lean_inc_ref(v_options_74_);
lean_inc_ref(v_lctx_73_);
v___x_75_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_75_, 0, v_env_69_);
lean_ctor_set(v___x_75_, 1, v_mctx_72_);
lean_ctor_set(v___x_75_, 2, v_lctx_73_);
lean_ctor_set(v___x_75_, 3, v_options_74_);
v___x_76_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set(v___x_76_, 1, v_msgData_60_);
v___x_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__1(v_msgData_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_);
lean_dec(v___y_82_);
lean_dec_ref(v___y_81_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
return v_res_84_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__4(lean_object* v_opts_85_, lean_object* v_opt_86_){
_start:
{
lean_object* v_name_87_; lean_object* v_defValue_88_; lean_object* v_map_89_; lean_object* v___x_90_; 
v_name_87_ = lean_ctor_get(v_opt_86_, 0);
v_defValue_88_ = lean_ctor_get(v_opt_86_, 1);
v_map_89_ = lean_ctor_get(v_opts_85_, 0);
v___x_90_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_89_, v_name_87_);
if (lean_obj_tag(v___x_90_) == 0)
{
uint8_t v___x_91_; 
v___x_91_ = lean_unbox(v_defValue_88_);
return v___x_91_;
}
else
{
lean_object* v_val_92_; 
v_val_92_ = lean_ctor_get(v___x_90_, 0);
lean_inc(v_val_92_);
lean_dec_ref_known(v___x_90_, 1);
if (lean_obj_tag(v_val_92_) == 1)
{
uint8_t v_v_93_; 
v_v_93_ = lean_ctor_get_uint8(v_val_92_, 0);
lean_dec_ref_known(v_val_92_, 0);
return v_v_93_;
}
else
{
uint8_t v___x_94_; 
lean_dec(v_val_92_);
v___x_94_ = lean_unbox(v_defValue_88_);
return v___x_94_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_opts_95_, lean_object* v_opt_96_){
_start:
{
uint8_t v_res_97_; lean_object* v_r_98_; 
v_res_97_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__4(v_opts_95_, v_opt_96_);
lean_dec_ref(v_opt_96_);
lean_dec_ref(v_opts_95_);
v_r_98_ = lean_box(v_res_97_);
return v_r_98_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__0(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = lean_box(1);
v___x_100_ = l_Lean_MessageData_ofFormat(v___x_99_);
return v___x_100_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__3(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__2));
v___x_105_ = l_Lean_MessageData_ofFormat(v___x_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5(lean_object* v_x_106_, lean_object* v_x_107_){
_start:
{
if (lean_obj_tag(v_x_107_) == 0)
{
return v_x_106_;
}
else
{
lean_object* v_head_108_; lean_object* v_tail_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_131_; 
v_head_108_ = lean_ctor_get(v_x_107_, 0);
v_tail_109_ = lean_ctor_get(v_x_107_, 1);
v_isSharedCheck_131_ = !lean_is_exclusive(v_x_107_);
if (v_isSharedCheck_131_ == 0)
{
v___x_111_ = v_x_107_;
v_isShared_112_ = v_isSharedCheck_131_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_tail_109_);
lean_inc(v_head_108_);
lean_dec(v_x_107_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_131_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v_before_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_129_; 
v_before_113_ = lean_ctor_get(v_head_108_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v_head_108_);
if (v_isSharedCheck_129_ == 0)
{
lean_object* v_unused_130_; 
v_unused_130_ = lean_ctor_get(v_head_108_, 1);
lean_dec(v_unused_130_);
v___x_115_ = v_head_108_;
v_isShared_116_ = v_isSharedCheck_129_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_before_113_);
lean_dec(v_head_108_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_129_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_117_; lean_object* v___x_119_; 
v___x_117_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__0);
if (v_isShared_116_ == 0)
{
lean_ctor_set_tag(v___x_115_, 7);
lean_ctor_set(v___x_115_, 1, v___x_117_);
lean_ctor_set(v___x_115_, 0, v_x_106_);
v___x_119_ = v___x_115_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_x_106_);
lean_ctor_set(v_reuseFailAlloc_128_, 1, v___x_117_);
v___x_119_ = v_reuseFailAlloc_128_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_120_; lean_object* v___x_122_; 
v___x_120_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__3);
if (v_isShared_112_ == 0)
{
lean_ctor_set_tag(v___x_111_, 7);
lean_ctor_set(v___x_111_, 1, v___x_120_);
lean_ctor_set(v___x_111_, 0, v___x_119_);
v___x_122_ = v___x_111_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v___x_119_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v___x_120_);
v___x_122_ = v_reuseFailAlloc_127_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_123_ = l_Lean_MessageData_ofSyntax(v_before_113_);
v___x_124_ = l_Lean_indentD(v___x_123_);
v___x_125_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_122_);
lean_ctor_set(v___x_125_, 1, v___x_124_);
v_x_106_ = v___x_125_;
v_x_107_ = v_tail_109_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg___closed__1));
v___x_136_ = l_Lean_MessageData_ofFormat(v___x_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg(lean_object* v_msgData_137_, lean_object* v_macroStack_138_, lean_object* v___y_139_){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; 
v___x_141_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_139_);
v___x_142_ = l_Lean_Elab_pp_macroStack;
v___x_143_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__4(v___x_141_, v___x_142_);
lean_dec_ref(v___x_141_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; 
lean_dec(v_macroStack_138_);
v___x_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_144_, 0, v_msgData_137_);
return v___x_144_;
}
else
{
if (lean_obj_tag(v_macroStack_138_) == 0)
{
lean_object* v___x_145_; 
v___x_145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_145_, 0, v_msgData_137_);
return v___x_145_;
}
else
{
lean_object* v_head_146_; lean_object* v_after_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_162_; 
v_head_146_ = lean_ctor_get(v_macroStack_138_, 0);
lean_inc(v_head_146_);
v_after_147_ = lean_ctor_get(v_head_146_, 1);
v_isSharedCheck_162_ = !lean_is_exclusive(v_head_146_);
if (v_isSharedCheck_162_ == 0)
{
lean_object* v_unused_163_; 
v_unused_163_ = lean_ctor_get(v_head_146_, 0);
lean_dec(v_unused_163_);
v___x_149_ = v_head_146_;
v_isShared_150_ = v_isSharedCheck_162_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_after_147_);
lean_dec(v_head_146_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_162_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_151_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5___closed__0);
if (v_isShared_150_ == 0)
{
lean_ctor_set_tag(v___x_149_, 7);
lean_ctor_set(v___x_149_, 1, v___x_151_);
lean_ctor_set(v___x_149_, 0, v_msgData_137_);
v___x_153_ = v___x_149_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v_msgData_137_);
lean_ctor_set(v_reuseFailAlloc_161_, 1, v___x_151_);
v___x_153_ = v_reuseFailAlloc_161_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v_msgData_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_154_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg___closed__2);
v___x_155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_155_, 0, v___x_153_);
lean_ctor_set(v___x_155_, 1, v___x_154_);
v___x_156_ = l_Lean_MessageData_ofSyntax(v_after_147_);
v___x_157_ = l_Lean_indentD(v___x_156_);
v_msgData_158_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_158_, 0, v___x_155_);
lean_ctor_set(v_msgData_158_, 1, v___x_157_);
v___x_159_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__5(v_msgData_158_, v_macroStack_138_);
v___x_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_160_, 0, v___x_159_);
return v___x_160_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_msgData_164_, lean_object* v_macroStack_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg(v_msgData_164_, v_macroStack_165_, v___y_166_);
lean_dec_ref(v___y_166_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0___redArg(lean_object* v_msg_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_){
_start:
{
lean_object* v_ref_177_; lean_object* v_macroStack_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v_a_181_; lean_object* v___x_182_; lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_191_; 
v_ref_177_ = lean_ctor_get(v___y_174_, 2);
v_macroStack_178_ = lean_ctor_get(v___y_170_, 1);
v___x_179_ = l_Lean_Elab_getBetterRef(v_ref_177_, v_macroStack_178_);
v___x_180_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__1(v_msg_169_, v___y_172_, v___y_173_, v___y_174_, v___y_175_);
v_a_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc(v_a_181_);
lean_dec_ref(v___x_180_);
lean_inc(v_macroStack_178_);
v___x_182_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg(v_a_181_, v_macroStack_178_, v___y_174_);
v_a_183_ = lean_ctor_get(v___x_182_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_182_);
if (v_isSharedCheck_191_ == 0)
{
v___x_185_ = v___x_182_;
v_isShared_186_ = v_isSharedCheck_191_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_182_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_191_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_187_; lean_object* v___x_189_; 
v___x_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_179_);
lean_ctor_set(v___x_187_, 1, v_a_183_);
if (v_isShared_186_ == 0)
{
lean_ctor_set_tag(v___x_185_, 1);
lean_ctor_set(v___x_185_, 0, v___x_187_);
v___x_189_ = v___x_185_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v___x_187_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0___redArg___boxed(lean_object* v_msg_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0___redArg(v_msg_192_, v___y_193_, v___y_194_, v___y_195_, v___y_196_, v___y_197_, v___y_198_);
lean_dec(v___y_198_);
lean_dec_ref(v___y_197_);
lean_dec(v___y_196_);
lean_dec_ref(v___y_195_);
lean_dec(v___y_194_);
lean_dec_ref(v___y_193_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0___redArg(lean_object* v_ref_201_, lean_object* v_msg_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
lean_object* v_toCold_210_; lean_object* v_currRecDepth_211_; lean_object* v_ref_212_; uint16_t v_optionFlags_213_; uint8_t v_suppressElabErrors_214_; uint8_t v_checkDeprecated_215_; uint8_t v_isRecordingDeps_216_; lean_object* v_ref_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v_toCold_210_ = lean_ctor_get(v___y_207_, 0);
v_currRecDepth_211_ = lean_ctor_get(v___y_207_, 1);
v_ref_212_ = lean_ctor_get(v___y_207_, 2);
v_optionFlags_213_ = lean_ctor_get_uint16(v___y_207_, sizeof(void*)*3);
v_suppressElabErrors_214_ = lean_ctor_get_uint8(v___y_207_, sizeof(void*)*3 + 2);
v_checkDeprecated_215_ = lean_ctor_get_uint8(v___y_207_, sizeof(void*)*3 + 3);
v_isRecordingDeps_216_ = lean_ctor_get_uint8(v___y_207_, sizeof(void*)*3 + 4);
v_ref_217_ = l_Lean_replaceRef(v_ref_201_, v_ref_212_);
lean_inc(v_currRecDepth_211_);
lean_inc_ref(v_toCold_210_);
v___x_218_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_218_, 0, v_toCold_210_);
lean_ctor_set(v___x_218_, 1, v_currRecDepth_211_);
lean_ctor_set(v___x_218_, 2, v_ref_217_);
lean_ctor_set_uint16(v___x_218_, sizeof(void*)*3, v_optionFlags_213_);
lean_ctor_set_uint8(v___x_218_, sizeof(void*)*3 + 2, v_suppressElabErrors_214_);
lean_ctor_set_uint8(v___x_218_, sizeof(void*)*3 + 3, v_checkDeprecated_215_);
lean_ctor_set_uint8(v___x_218_, sizeof(void*)*3 + 4, v_isRecordingDeps_216_);
v___x_219_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0___redArg(v_msg_202_, v___y_203_, v___y_204_, v___y_205_, v___y_206_, v___x_218_, v___y_208_);
lean_dec_ref_known(v___x_218_, 3);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0___redArg___boxed(lean_object* v_ref_220_, lean_object* v_msg_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0___redArg(v_ref_220_, v_msg_221_, v___y_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_, v___y_227_);
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
lean_dec(v___y_225_);
lean_dec_ref(v___y_224_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
lean_dec(v_ref_220_);
return v_res_229_;
}
}
static lean_object* _init_l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__6(void){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_241_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__5));
v___x_242_ = l_Lean_stringToMessageData(v___x_241_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1(uint8_t v_firstChoiceOnly_243_, lean_object* v_stx_244_, lean_object* v_b_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
lean_object* v_b_254_; lean_object* v___y_258_; lean_object* v___y_259_; lean_object* v___x_284_; lean_object* v_a_286_; uint8_t v___x_312_; 
v___x_284_ = lean_box(0);
v___x_312_ = l_Lean_Syntax_isAntiquot(v_stx_244_);
if (v___x_312_ == 0)
{
uint8_t v___x_313_; 
lean_inc(v_stx_244_);
v___x_313_ = l_Lean_Syntax_isTokenAntiquot(v_stx_244_);
if (v___x_313_ == 0)
{
v_a_286_ = v_b_245_;
goto v___jp_285_;
}
else
{
goto v___jp_295_;
}
}
else
{
goto v___jp_295_;
}
v___jp_253_:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_255_, 0, v_b_254_);
v___x_256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
return v___x_256_;
}
v___jp_257_:
{
lean_object* v___x_260_; lean_object* v___x_261_; size_t v_sz_262_; size_t v___x_263_; lean_object* v___x_264_; 
v___x_260_ = lean_box(0);
v___x_261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
lean_ctor_set(v___x_261_, 1, v___y_259_);
v_sz_262_ = lean_array_size(v___y_258_);
v___x_263_ = ((size_t)0ULL);
v___x_264_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1_spec__2(v_firstChoiceOnly_243_, v___y_258_, v_sz_262_, v___x_263_, v___x_261_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_);
lean_dec_ref(v___y_258_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_275_; 
v_a_265_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_275_ == 0)
{
v___x_267_ = v___x_264_;
v_isShared_268_ = v_isSharedCheck_275_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v___x_264_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_275_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v_fst_269_; 
v_fst_269_ = lean_ctor_get(v_a_265_, 0);
if (lean_obj_tag(v_fst_269_) == 0)
{
lean_object* v_snd_270_; 
lean_del_object(v___x_267_);
v_snd_270_ = lean_ctor_get(v_a_265_, 1);
lean_inc(v_snd_270_);
lean_dec(v_a_265_);
v_b_254_ = v_snd_270_;
goto v___jp_253_;
}
else
{
lean_object* v_val_271_; lean_object* v___x_273_; 
lean_inc_ref(v_fst_269_);
lean_dec(v_a_265_);
v_val_271_ = lean_ctor_get(v_fst_269_, 0);
lean_inc(v_val_271_);
lean_dec_ref_known(v_fst_269_, 1);
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 0, v_val_271_);
v___x_273_ = v___x_267_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_val_271_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
}
else
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_283_; 
v_a_276_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_283_ == 0)
{
v___x_278_ = v___x_264_;
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_264_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_281_; 
if (v_isShared_279_ == 0)
{
v___x_281_ = v___x_278_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_a_276_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
}
v___jp_285_:
{
if (lean_obj_tag(v_stx_244_) == 1)
{
if (v_firstChoiceOnly_243_ == 0)
{
lean_object* v_args_287_; 
v_args_287_ = lean_ctor_get(v_stx_244_, 2);
lean_inc_ref(v_args_287_);
lean_dec_ref_known(v_stx_244_, 3);
v___y_258_ = v_args_287_;
v___y_259_ = v_a_286_;
goto v___jp_257_;
}
else
{
lean_object* v_kind_288_; lean_object* v_args_289_; lean_object* v___x_290_; uint8_t v___x_291_; 
v_kind_288_ = lean_ctor_get(v_stx_244_, 1);
lean_inc(v_kind_288_);
v_args_289_ = lean_ctor_get(v_stx_244_, 2);
lean_inc_ref(v_args_289_);
lean_dec_ref_known(v_stx_244_, 3);
v___x_290_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__1));
v___x_291_ = lean_name_eq(v_kind_288_, v___x_290_);
lean_dec(v_kind_288_);
if (v___x_291_ == 0)
{
v___y_258_ = v_args_289_;
v___y_259_ = v_a_286_;
goto v___jp_257_;
}
else
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = lean_unsigned_to_nat(0u);
v___x_293_ = lean_array_get(v___x_284_, v_args_289_, v___x_292_);
lean_dec_ref(v_args_289_);
v_stx_244_ = v___x_293_;
v_b_245_ = v_a_286_;
goto _start;
}
}
}
else
{
lean_dec(v_stx_244_);
v_b_254_ = v_a_286_;
goto v___jp_253_;
}
}
v___jp_295_:
{
uint8_t v___x_296_; 
v___x_296_ = l_Lean_Syntax_isEscapedAntiquot(v_stx_244_);
if (v___x_296_ == 0)
{
lean_object* v_anti_297_; uint8_t v___x_298_; 
v_anti_297_ = l_Lean_Syntax_getAntiquotTerm(v_stx_244_);
v___x_298_ = l_Lean_Syntax_isIdent(v_anti_297_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_299_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__4));
v___x_300_ = l_Lean_Syntax_isOfKind(v_anti_297_, v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = lean_obj_once(&l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__6, &l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__6_once, _init_l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__6);
v___x_302_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0___redArg(v_stx_244_, v___x_301_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_dec_ref_known(v___x_302_, 1);
v_a_286_ = v_b_245_;
goto v___jp_285_;
}
else
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_310_; 
lean_dec_ref(v_b_245_);
lean_dec(v_stx_244_);
v_a_303_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_310_ == 0)
{
v___x_305_ = v___x_302_;
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v___x_302_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_308_; 
if (v_isShared_306_ == 0)
{
v___x_308_ = v___x_305_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_a_303_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
}
else
{
v_a_286_ = v_b_245_;
goto v___jp_285_;
}
}
else
{
lean_object* v_ids_311_; 
v_ids_311_ = lean_array_push(v_b_245_, v_anti_297_);
v_a_286_ = v_ids_311_;
goto v___jp_285_;
}
}
else
{
v_a_286_ = v_b_245_;
goto v___jp_285_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1_spec__2(uint8_t v_firstChoiceOnly_314_, lean_object* v_as_315_, size_t v_sz_316_, size_t v_i_317_, lean_object* v_b_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
uint8_t v___x_326_; 
v___x_326_ = lean_usize_dec_lt(v_i_317_, v_sz_316_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; 
v___x_327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_327_, 0, v_b_318_);
return v___x_327_;
}
else
{
lean_object* v_snd_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_362_; 
v_snd_328_ = lean_ctor_get(v_b_318_, 1);
v_isSharedCheck_362_ = !lean_is_exclusive(v_b_318_);
if (v_isSharedCheck_362_ == 0)
{
lean_object* v_unused_363_; 
v_unused_363_ = lean_ctor_get(v_b_318_, 0);
lean_dec(v_unused_363_);
v___x_330_ = v_b_318_;
v_isShared_331_ = v_isSharedCheck_362_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_snd_328_);
lean_dec(v_b_318_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_362_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_332_; lean_object* v_a_333_; lean_object* v___x_334_; 
v___x_332_ = lean_box(0);
v_a_333_ = lean_array_uget_borrowed(v_as_315_, v_i_317_);
lean_inc(v_snd_328_);
lean_inc(v_a_333_);
v___x_334_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1(v_firstChoiceOnly_314_, v_a_333_, v_snd_328_, v___y_319_, v___y_320_, v___y_321_, v___y_322_, v___y_323_, v___y_324_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_353_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_353_ == 0)
{
v___x_337_ = v___x_334_;
v_isShared_338_ = v_isSharedCheck_353_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_a_335_);
lean_dec(v___x_334_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_353_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
if (lean_obj_tag(v_a_335_) == 0)
{
lean_object* v___x_339_; lean_object* v___x_341_; 
v___x_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_339_, 0, v_a_335_);
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 0, v___x_339_);
v___x_341_ = v___x_330_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v___x_339_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v_snd_328_);
v___x_341_ = v_reuseFailAlloc_345_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
lean_object* v___x_343_; 
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 0, v___x_341_);
v___x_343_ = v___x_337_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_341_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; 
lean_del_object(v___x_337_);
lean_dec(v_snd_328_);
v_a_346_ = lean_ctor_get(v_a_335_, 0);
lean_inc(v_a_346_);
lean_dec_ref_known(v_a_335_, 1);
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 1, v_a_346_);
lean_ctor_set(v___x_330_, 0, v___x_332_);
v___x_348_ = v___x_330_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v___x_332_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v_a_346_);
v___x_348_ = v_reuseFailAlloc_352_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
size_t v___x_349_; size_t v___x_350_; 
v___x_349_ = ((size_t)1ULL);
v___x_350_ = lean_usize_add(v_i_317_, v___x_349_);
v_i_317_ = v___x_350_;
v_b_318_ = v___x_348_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
lean_del_object(v___x_330_);
lean_dec(v_snd_328_);
v_a_354_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_334_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_334_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1_spec__2___boxed(lean_object* v_firstChoiceOnly_364_, lean_object* v_as_365_, lean_object* v_sz_366_, lean_object* v_i_367_, lean_object* v_b_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_376_; size_t v_sz_boxed_377_; size_t v_i_boxed_378_; lean_object* v_res_379_; 
v_firstChoiceOnly_boxed_376_ = lean_unbox(v_firstChoiceOnly_364_);
v_sz_boxed_377_ = lean_unbox_usize(v_sz_366_);
lean_dec(v_sz_366_);
v_i_boxed_378_ = lean_unbox_usize(v_i_367_);
lean_dec(v_i_367_);
v_res_379_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1_spec__2(v_firstChoiceOnly_boxed_376_, v_as_365_, v_sz_boxed_377_, v_i_boxed_378_, v_b_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec_ref(v_as_365_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___boxed(lean_object* v_firstChoiceOnly_380_, lean_object* v_stx_381_, lean_object* v_b_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
uint8_t v_firstChoiceOnly_boxed_390_; lean_object* v_res_391_; 
v_firstChoiceOnly_boxed_390_ = lean_unbox(v_firstChoiceOnly_380_);
v_res_391_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1(v_firstChoiceOnly_boxed_390_, v_stx_381_, v_b_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_getAntiquotationIds(lean_object* v_stx_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_){
_start:
{
uint8_t v___x_402_; lean_object* v___x_403_; uint8_t v_firstChoiceOnly_404_; lean_object* v_stx_405_; lean_object* v_ids_406_; lean_object* v___x_407_; 
v___x_402_ = 1;
v___x_403_ = l_Lean_Syntax_topDown(v_stx_394_, v___x_402_);
v_firstChoiceOnly_404_ = lean_ctor_get_uint8(v___x_403_, sizeof(void*)*1);
v_stx_405_ = lean_ctor_get(v___x_403_, 0);
lean_inc(v_stx_405_);
lean_dec_ref(v___x_403_);
v_ids_406_ = ((lean_object*)(l_Lean_Elab_Term_Quotation_getAntiquotationIds___closed__0));
v___x_407_ = l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1(v_firstChoiceOnly_404_, v_stx_405_, v_ids_406_, v_a_395_, v_a_396_, v_a_397_, v_a_398_, v_a_399_, v_a_400_);
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_416_; 
v_a_408_ = lean_ctor_get(v___x_407_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_416_ == 0)
{
v___x_410_ = v___x_407_;
v_isShared_411_ = v_isSharedCheck_416_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_407_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_416_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v_a_412_; lean_object* v___x_414_; 
v_a_412_ = lean_ctor_get(v_a_408_, 0);
lean_inc(v_a_412_);
lean_dec(v_a_408_);
if (v_isShared_411_ == 0)
{
lean_ctor_set(v___x_410_, 0, v_a_412_);
v___x_414_ = v___x_410_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_a_412_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
v_a_417_ = lean_ctor_get(v___x_407_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_407_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_407_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_getAntiquotationIds___boxed(lean_object* v_stx_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lean_Elab_Term_Quotation_getAntiquotationIds(v_stx_425_, v_a_426_, v_a_427_, v_a_428_, v_a_429_, v_a_430_, v_a_431_);
lean_dec(v_a_431_);
lean_dec_ref(v_a_430_);
lean_dec(v_a_429_);
lean_dec_ref(v_a_428_);
lean_dec(v_a_427_);
lean_dec_ref(v_a_426_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0(lean_object* v_00_u03b1_434_, lean_object* v_ref_435_, lean_object* v_msg_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0___redArg(v_ref_435_, v_msg_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0___boxed(lean_object* v_00_u03b1_445_, lean_object* v_ref_446_, lean_object* v_msg_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0(v_00_u03b1_445_, v_ref_446_, v_msg_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_, v___y_453_);
lean_dec(v___y_453_);
lean_dec_ref(v___y_452_);
lean_dec(v___y_451_);
lean_dec_ref(v___y_450_);
lean_dec(v___y_449_);
lean_dec_ref(v___y_448_);
lean_dec(v_ref_446_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0(lean_object* v_00_u03b1_456_, lean_object* v_msg_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0___redArg(v_msg_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0___boxed(lean_object* v_00_u03b1_466_, lean_object* v_msg_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0(v_00_u03b1_466_, v_msg_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_);
lean_dec(v___y_473_);
lean_dec_ref(v___y_472_);
lean_dec(v___y_471_);
lean_dec_ref(v___y_470_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_468_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2(lean_object* v_msgData_476_, lean_object* v_macroStack_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
lean_object* v___x_485_; 
v___x_485_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___redArg(v_msgData_476_, v_macroStack_477_, v___y_482_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2___boxed(lean_object* v_msgData_486_, lean_object* v_macroStack_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2(v_msgData_486_, v_macroStack_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_);
lean_dec(v___y_493_);
lean_dec_ref(v___y_492_);
lean_dec(v___y_491_);
lean_dec_ref(v___y_490_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
return v_res_495_;
}
}
static lean_object* _init_l_Lean_Elab_Term_Quotation_getPatternVars___closed__5(void){
_start:
{
lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_506_ = ((lean_object*)(l_Lean_Elab_Term_Quotation_getPatternVars___closed__4));
v___x_507_ = l_Lean_stringToMessageData(v___x_506_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_getPatternVars(lean_object* v_stx_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_){
_start:
{
uint8_t v___x_516_; 
v___x_516_ = l_Lean_Syntax_isQuot(v_stx_508_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; uint8_t v___x_518_; 
v___x_517_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__4));
lean_inc(v_stx_508_);
v___x_518_ = l_Lean_Syntax_isOfKind(v_stx_508_, v___x_517_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; uint8_t v___x_520_; 
v___x_519_ = ((lean_object*)(l_Lean_Elab_Term_Quotation_getPatternVars___closed__1));
lean_inc(v_stx_508_);
v___x_520_ = l_Lean_Syntax_isOfKind(v_stx_508_, v___x_519_);
if (v___x_520_ == 0)
{
lean_object* v___x_521_; uint8_t v___x_522_; 
v___x_521_ = ((lean_object*)(l_Lean_Elab_Term_Quotation_getPatternVars___closed__3));
lean_inc(v_stx_508_);
v___x_522_ = l_Lean_Syntax_isOfKind(v_stx_508_, v___x_521_);
if (v___x_522_ == 0)
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_523_ = lean_obj_once(&l_Lean_Elab_Term_Quotation_getPatternVars___closed__5, &l_Lean_Elab_Term_Quotation_getPatternVars___closed__5_once, _init_l_Lean_Elab_Term_Quotation_getPatternVars___closed__5);
lean_inc(v_stx_508_);
v___x_524_ = l_Lean_MessageData_ofSyntax(v_stx_508_);
v___x_525_ = l_Lean_indentD(v___x_524_);
v___x_526_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_526_, 0, v___x_523_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0___redArg(v_stx_508_, v___x_526_, v_a_509_, v_a_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_);
lean_dec(v_stx_508_);
return v___x_527_;
}
else
{
lean_object* v___x_528_; lean_object* v___x_529_; uint8_t v___x_530_; 
v___x_528_ = lean_unsigned_to_nat(0u);
v___x_529_ = l_Lean_Syntax_getArg(v_stx_508_, v___x_528_);
lean_inc(v___x_529_);
v___x_530_ = l_Lean_Syntax_isOfKind(v___x_529_, v___x_519_);
if (v___x_530_ == 0)
{
lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
lean_dec(v___x_529_);
v___x_531_ = lean_obj_once(&l_Lean_Elab_Term_Quotation_getPatternVars___closed__5, &l_Lean_Elab_Term_Quotation_getPatternVars___closed__5_once, _init_l_Lean_Elab_Term_Quotation_getPatternVars___closed__5);
lean_inc(v_stx_508_);
v___x_532_ = l_Lean_MessageData_ofSyntax(v_stx_508_);
v___x_533_ = l_Lean_indentD(v___x_532_);
v___x_534_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_531_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
v___x_535_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0___redArg(v_stx_508_, v___x_534_, v_a_509_, v_a_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_);
lean_dec(v_stx_508_);
return v___x_535_;
}
else
{
lean_object* v___x_536_; lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_536_ = lean_unsigned_to_nat(2u);
v___x_537_ = l_Lean_Syntax_getArg(v_stx_508_, v___x_536_);
v___x_538_ = l_Lean_Syntax_matchesNull(v___x_537_, v___x_528_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
lean_dec(v___x_529_);
v___x_539_ = lean_obj_once(&l_Lean_Elab_Term_Quotation_getPatternVars___closed__5, &l_Lean_Elab_Term_Quotation_getPatternVars___closed__5_once, _init_l_Lean_Elab_Term_Quotation_getPatternVars___closed__5);
lean_inc(v_stx_508_);
v___x_540_ = l_Lean_MessageData_ofSyntax(v_stx_508_);
v___x_541_ = l_Lean_indentD(v___x_540_);
v___x_542_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_542_, 0, v___x_539_);
lean_ctor_set(v___x_542_, 1, v___x_541_);
v___x_543_ = l_Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0___redArg(v_stx_508_, v___x_542_, v_a_509_, v_a_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_);
lean_dec(v_stx_508_);
return v___x_543_;
}
else
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_544_ = lean_unsigned_to_nat(3u);
v___x_545_ = l_Lean_Syntax_getArg(v_stx_508_, v___x_544_);
lean_dec(v_stx_508_);
v___x_546_ = l_Lean_Elab_Term_Quotation_getPatternVars(v___x_545_, v_a_509_, v_a_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_);
if (lean_obj_tag(v___x_546_) == 0)
{
lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_555_; 
v_a_547_ = lean_ctor_get(v___x_546_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_555_ == 0)
{
v___x_549_ = v___x_546_;
v_isShared_550_ = v_isSharedCheck_555_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_dec(v___x_546_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_555_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_551_; lean_object* v___x_553_; 
v___x_551_ = lean_array_push(v_a_547_, v___x_529_);
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 0, v___x_551_);
v___x_553_ = v___x_549_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_551_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
else
{
lean_dec(v___x_529_);
return v___x_546_;
}
}
}
}
}
else
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_556_ = lean_unsigned_to_nat(1u);
v___x_557_ = lean_mk_empty_array_with_capacity(v___x_556_);
v___x_558_ = lean_array_push(v___x_557_, v_stx_508_);
v___x_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
return v___x_559_;
}
}
else
{
lean_object* v___x_560_; lean_object* v___x_561_; 
lean_dec(v_stx_508_);
v___x_560_ = ((lean_object*)(l_Lean_Elab_Term_Quotation_getAntiquotationIds___closed__0));
v___x_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
return v___x_561_;
}
}
else
{
lean_object* v___x_562_; 
v___x_562_ = l_Lean_Elab_Term_Quotation_getAntiquotationIds(v_stx_508_, v_a_509_, v_a_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
v_a_563_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_570_ == 0)
{
v___x_565_ = v___x_562_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_562_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_563_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
else
{
lean_object* v_a_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_578_; 
v_a_571_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_578_ == 0)
{
v___x_573_ = v___x_562_;
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_a_571_);
lean_dec(v___x_562_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_576_; 
if (v_isShared_574_ == 0)
{
v___x_576_ = v___x_573_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_a_571_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_getPatternVars___boxed(lean_object* v_stx_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Lean_Elab_Term_Quotation_getPatternVars(v_stx_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
lean_dec(v_a_585_);
lean_dec_ref(v_a_584_);
lean_dec(v_a_583_);
lean_dec_ref(v_a_582_);
lean_dec(v_a_581_);
lean_dec_ref(v_a_580_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_Quotation_getPatternsVars_spec__0(lean_object* v_as_588_, size_t v_i_589_, size_t v_stop_590_, lean_object* v_b_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
uint8_t v___x_599_; 
v___x_599_ = lean_usize_dec_eq(v_i_589_, v_stop_590_);
if (v___x_599_ == 0)
{
lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_600_ = lean_array_uget_borrowed(v_as_588_, v_i_589_);
lean_inc(v___x_600_);
v___x_601_ = l_Lean_Elab_Term_Quotation_getPatternVars(v___x_600_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; lean_object* v___x_603_; size_t v___x_604_; size_t v___x_605_; 
v_a_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_a_602_);
lean_dec_ref_known(v___x_601_, 1);
v___x_603_ = l_Array_append___redArg(v_b_591_, v_a_602_);
lean_dec(v_a_602_);
v___x_604_ = ((size_t)1ULL);
v___x_605_ = lean_usize_add(v_i_589_, v___x_604_);
v_i_589_ = v___x_605_;
v_b_591_ = v___x_603_;
goto _start;
}
else
{
lean_dec_ref(v_b_591_);
return v___x_601_;
}
}
else
{
lean_object* v___x_607_; 
v___x_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_607_, 0, v_b_591_);
return v___x_607_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_Quotation_getPatternsVars_spec__0___boxed(lean_object* v_as_608_, lean_object* v_i_609_, lean_object* v_stop_610_, lean_object* v_b_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_){
_start:
{
size_t v_i_boxed_619_; size_t v_stop_boxed_620_; lean_object* v_res_621_; 
v_i_boxed_619_ = lean_unbox_usize(v_i_609_);
lean_dec(v_i_609_);
v_stop_boxed_620_ = lean_unbox_usize(v_stop_610_);
lean_dec(v_stop_610_);
v_res_621_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_Quotation_getPatternsVars_spec__0(v_as_608_, v_i_boxed_619_, v_stop_boxed_620_, v_b_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_, v___y_616_, v___y_617_);
lean_dec(v___y_617_);
lean_dec_ref(v___y_616_);
lean_dec(v___y_615_);
lean_dec_ref(v___y_614_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec_ref(v_as_608_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_getPatternsVars(lean_object* v_pats_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_){
_start:
{
lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; uint8_t v___x_633_; 
v___x_630_ = lean_unsigned_to_nat(0u);
v___x_631_ = ((lean_object*)(l_Lean_Elab_Term_Quotation_getAntiquotationIds___closed__0));
v___x_632_ = lean_array_get_size(v_pats_622_);
v___x_633_ = lean_nat_dec_lt(v___x_630_, v___x_632_);
if (v___x_633_ == 0)
{
lean_object* v___x_634_; 
v___x_634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_634_, 0, v___x_631_);
return v___x_634_;
}
else
{
size_t v___x_635_; size_t v___x_636_; lean_object* v___x_637_; 
v___x_635_ = ((size_t)0ULL);
v___x_636_ = lean_usize_of_nat(v___x_632_);
v___x_637_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_Quotation_getPatternsVars_spec__0(v_pats_622_, v___x_635_, v___x_636_, v___x_631_, v_a_623_, v_a_624_, v_a_625_, v_a_626_, v_a_627_, v_a_628_);
return v___x_637_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_getPatternsVars___boxed(lean_object* v_pats_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Lean_Elab_Term_Quotation_getPatternsVars(v_pats_638_, v_a_639_, v_a_640_, v_a_641_, v_a_642_, v_a_643_, v_a_644_);
lean_dec(v_a_644_);
lean_dec_ref(v_a_643_);
lean_dec(v_a_642_);
lean_dec_ref(v_a_641_);
lean_dec(v_a_640_);
lean_dec_ref(v_a_639_);
lean_dec_ref(v_pats_638_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_getAntiquotKindSpec_x3f(lean_object* v_antiquot_647_){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v_name_651_; uint8_t v___x_652_; 
v___x_648_ = lean_unsigned_to_nat(3u);
v___x_649_ = l_Lean_Syntax_getArg(v_antiquot_647_, v___x_648_);
v___x_650_ = lean_unsigned_to_nat(1u);
v_name_651_ = l_Lean_Syntax_getArg(v___x_649_, v___x_650_);
lean_dec(v___x_649_);
v___x_652_ = l_Lean_Syntax_isMissing(v_name_651_);
if (v___x_652_ == 0)
{
lean_object* v___x_653_; 
v___x_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_653_, 0, v_name_651_);
return v___x_653_;
}
else
{
lean_object* v___x_654_; 
lean_dec(v_name_651_);
v___x_654_ = lean_box(0);
return v___x_654_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_getAntiquotKindSpec_x3f___boxed(lean_object* v_antiquot_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = l_Lean_Elab_Term_Quotation_getAntiquotKindSpec_x3f(v_antiquot_655_);
lean_dec(v_antiquot_655_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_resolveSectionVariable_loop(lean_object* v_sectionVars_657_, lean_object* v_extractionResult_658_, lean_object* v_a_659_, lean_object* v_a_660_){
_start:
{
if (lean_obj_tag(v_a_659_) == 1)
{
lean_object* v_pre_661_; lean_object* v_str_662_; lean_object* v_imported_663_; lean_object* v_ctx_664_; lean_object* v_scopes_665_; lean_object* v___x_666_; lean_object* v_id_667_; lean_object* v___x_668_; 
v_pre_661_ = lean_ctor_get(v_a_659_, 0);
lean_inc(v_pre_661_);
v_str_662_ = lean_ctor_get(v_a_659_, 1);
lean_inc_ref(v_str_662_);
v_imported_663_ = lean_ctor_get(v_extractionResult_658_, 1);
v_ctx_664_ = lean_ctor_get(v_extractionResult_658_, 2);
v_scopes_665_ = lean_ctor_get(v_extractionResult_658_, 3);
lean_inc(v_scopes_665_);
lean_inc(v_ctx_664_);
lean_inc(v_imported_663_);
v___x_666_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_666_, 0, v_a_659_);
lean_ctor_set(v___x_666_, 1, v_imported_663_);
lean_ctor_set(v___x_666_, 2, v_ctx_664_);
lean_ctor_set(v___x_666_, 3, v_scopes_665_);
v_id_667_ = l_Lean_MacroScopesView_review(v___x_666_);
v___x_668_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_sectionVars_657_, v_id_667_);
lean_dec(v_id_667_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v___x_669_; 
v___x_669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_669_, 0, v_str_662_);
lean_ctor_set(v___x_669_, 1, v_a_660_);
v_a_659_ = v_pre_661_;
v_a_660_ = v___x_669_;
goto _start;
}
else
{
lean_object* v_val_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
lean_dec_ref(v_str_662_);
lean_dec(v_pre_661_);
v_val_671_ = lean_ctor_get(v___x_668_, 0);
lean_inc(v_val_671_);
lean_dec_ref_known(v___x_668_, 1);
v___x_672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_672_, 0, v_val_671_);
lean_ctor_set(v___x_672_, 1, v_a_660_);
v___x_673_ = lean_box(0);
v___x_674_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_674_, 0, v___x_672_);
lean_ctor_set(v___x_674_, 1, v___x_673_);
return v___x_674_;
}
}
else
{
lean_object* v___x_675_; 
lean_dec(v_a_660_);
lean_dec(v_a_659_);
v___x_675_ = lean_box(0);
return v___x_675_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_resolveSectionVariable_loop___boxed(lean_object* v_sectionVars_676_, lean_object* v_extractionResult_677_, lean_object* v_a_678_, lean_object* v_a_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_resolveSectionVariable_loop(v_sectionVars_676_, v_extractionResult_677_, v_a_678_, v_a_679_);
lean_dec_ref(v_extractionResult_677_);
lean_dec(v_sectionVars_676_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_resolveSectionVariable(lean_object* v_sectionVars_681_, lean_object* v_id_682_){
_start:
{
lean_object* v_extractionResult_683_; lean_object* v_name_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v_extractionResult_683_ = l_Lean_extractMacroScopes(v_id_682_);
v_name_684_ = lean_ctor_get(v_extractionResult_683_, 0);
lean_inc(v_name_684_);
v___x_685_ = lean_box(0);
v___x_686_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_resolveSectionVariable_loop(v_sectionVars_681_, v_extractionResult_683_, v_name_684_, v___x_685_);
lean_dec_ref(v_extractionResult_683_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_resolveSectionVariable___boxed(lean_object* v_sectionVars_687_, lean_object* v_id_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_Lean_Elab_Term_Quotation_resolveSectionVariable(v_sectionVars_687_, v_id_688_);
lean_dec(v_sectionVars_687_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go(lean_object* v_cur_702_, lean_object* v_acc_703_){
_start:
{
lean_object* v___x_704_; uint8_t v___x_705_; 
v___x_704_ = ((lean_object*)(l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__1));
lean_inc(v_cur_702_);
v___x_705_ = l_Lean_Syntax_isOfKind(v_cur_702_, v___x_704_);
if (v___x_705_ == 0)
{
uint8_t v___x_706_; 
v___x_706_ = l_Lean_Syntax_isAntiquot(v_cur_702_);
if (v___x_706_ == 0)
{
uint8_t v___x_707_; 
lean_inc(v_cur_702_);
v___x_707_ = l_Lean_Syntax_isTokenAntiquot(v_cur_702_);
if (v___x_707_ == 0)
{
uint8_t v___x_708_; 
v___x_708_ = l_Lean_Syntax_isAntiquotSplice(v_cur_702_);
if (v___x_708_ == 0)
{
uint8_t v___x_709_; 
v___x_709_ = l_Lean_Syntax_isAntiquotSuffixSplice(v_cur_702_);
if (v___x_709_ == 0)
{
uint8_t v___x_710_; 
v___x_710_ = l_Lean_Syntax_isQuot(v_cur_702_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; uint8_t v___x_712_; 
v___x_711_ = ((lean_object*)(l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__3));
lean_inc(v_cur_702_);
v___x_712_ = l_Lean_Syntax_isOfKind(v_cur_702_, v___x_711_);
if (v___x_712_ == 0)
{
if (lean_obj_tag(v_cur_702_) == 1)
{
lean_object* v_args_713_; lean_object* v___x_714_; lean_object* v___x_715_; uint8_t v___x_716_; 
v_args_713_ = lean_ctor_get(v_cur_702_, 2);
lean_inc_ref(v_args_713_);
lean_dec_ref_known(v_cur_702_, 3);
v___x_714_ = lean_unsigned_to_nat(0u);
v___x_715_ = lean_array_get_size(v_args_713_);
v___x_716_ = lean_nat_dec_lt(v___x_714_, v___x_715_);
if (v___x_716_ == 0)
{
lean_dec_ref(v_args_713_);
return v_acc_703_;
}
else
{
size_t v___x_717_; size_t v___x_718_; lean_object* v___x_719_; 
v___x_717_ = ((size_t)0ULL);
v___x_718_ = lean_usize_of_nat(v___x_715_);
v___x_719_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go_spec__0(v_args_713_, v___x_717_, v___x_718_, v_acc_703_);
lean_dec_ref(v_args_713_);
return v___x_719_;
}
}
else
{
lean_dec(v_cur_702_);
return v_acc_703_;
}
}
else
{
lean_dec(v_cur_702_);
return v_acc_703_;
}
}
else
{
lean_dec(v_cur_702_);
return v_acc_703_;
}
}
else
{
lean_dec(v_cur_702_);
return v_acc_703_;
}
}
else
{
lean_dec(v_cur_702_);
return v_acc_703_;
}
}
else
{
lean_dec(v_cur_702_);
return v_acc_703_;
}
}
else
{
lean_dec(v_cur_702_);
return v_acc_703_;
}
}
else
{
lean_object* v___x_720_; lean_object* v___x_721_; uint8_t v___x_722_; 
v___x_720_ = lean_unsigned_to_nat(1u);
v___x_721_ = l_Lean_Syntax_getArg(v_cur_702_, v___x_720_);
v___x_722_ = l_Lean_Syntax_isIdent(v___x_721_);
if (v___x_722_ == 0)
{
lean_dec(v___x_721_);
lean_dec(v_cur_702_);
return v_acc_703_;
}
else
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_723_ = l_Lean_Syntax_getId(v___x_721_);
lean_dec(v___x_721_);
v___x_724_ = l_Lean_Name_eraseMacroScopes(v___x_723_);
lean_dec(v___x_723_);
v___x_725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_725_, 0, v_cur_702_);
lean_ctor_set(v___x_725_, 1, v___x_724_);
v___x_726_ = lean_array_push(v_acc_703_, v___x_725_);
return v___x_726_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go_spec__0(lean_object* v_as_727_, size_t v_i_728_, size_t v_stop_729_, lean_object* v_b_730_){
_start:
{
uint8_t v___x_731_; 
v___x_731_ = lean_usize_dec_eq(v_i_728_, v_stop_729_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; lean_object* v___x_733_; size_t v___x_734_; size_t v___x_735_; 
v___x_732_ = lean_array_uget_borrowed(v_as_727_, v_i_728_);
lean_inc(v___x_732_);
v___x_733_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go(v___x_732_, v_b_730_);
v___x_734_ = ((size_t)1ULL);
v___x_735_ = lean_usize_add(v_i_728_, v___x_734_);
v_i_728_ = v___x_735_;
v_b_730_ = v___x_733_;
goto _start;
}
else
{
return v_b_730_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go_spec__0___boxed(lean_object* v_as_737_, lean_object* v_i_738_, lean_object* v_stop_739_, lean_object* v_b_740_){
_start:
{
size_t v_i_boxed_741_; size_t v_stop_boxed_742_; lean_object* v_res_743_; 
v_i_boxed_741_ = lean_unbox_usize(v_i_738_);
lean_dec(v_i_738_);
v_stop_boxed_742_ = lean_unbox_usize(v_stop_739_);
lean_dec(v_stop_739_);
v_res_743_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go_spec__0(v_as_737_, v_i_boxed_741_, v_stop_boxed_742_, v_b_740_);
lean_dec_ref(v_as_737_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go_match__1_splitter___redArg(lean_object* v_cur_744_, lean_object* v_h__1_745_, lean_object* v_h__2_746_){
_start:
{
if (lean_obj_tag(v_cur_744_) == 1)
{
lean_object* v_info_747_; lean_object* v_kind_748_; lean_object* v_args_749_; lean_object* v___x_750_; 
lean_dec(v_h__2_746_);
v_info_747_ = lean_ctor_get(v_cur_744_, 0);
lean_inc(v_info_747_);
v_kind_748_ = lean_ctor_get(v_cur_744_, 1);
lean_inc(v_kind_748_);
v_args_749_ = lean_ctor_get(v_cur_744_, 2);
lean_inc_ref(v_args_749_);
lean_dec_ref_known(v_cur_744_, 3);
v___x_750_ = lean_apply_3(v_h__1_745_, v_info_747_, v_kind_748_, v_args_749_);
return v___x_750_;
}
else
{
lean_object* v___x_751_; 
lean_dec(v_h__1_745_);
v___x_751_ = lean_apply_2(v_h__2_746_, v_cur_744_, lean_box(0));
return v___x_751_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go_match__1_splitter(lean_object* v_motive_752_, lean_object* v_cur_753_, lean_object* v_h__1_754_, lean_object* v_h__2_755_){
_start:
{
if (lean_obj_tag(v_cur_753_) == 1)
{
lean_object* v_info_756_; lean_object* v_kind_757_; lean_object* v_args_758_; lean_object* v___x_759_; 
lean_dec(v_h__2_755_);
v_info_756_ = lean_ctor_get(v_cur_753_, 0);
lean_inc(v_info_756_);
v_kind_757_ = lean_ctor_get(v_cur_753_, 1);
lean_inc(v_kind_757_);
v_args_758_ = lean_ctor_get(v_cur_753_, 2);
lean_inc_ref(v_args_758_);
lean_dec_ref_known(v_cur_753_, 3);
v___x_759_ = lean_apply_3(v_h__1_754_, v_info_756_, v_kind_757_, v_args_758_);
return v___x_759_;
}
else
{
lean_object* v___x_760_; 
lean_dec(v_h__1_754_);
v___x_760_ = lean_apply_2(v_h__2_755_, v_cur_753_, lean_box(0));
return v___x_760_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Array_map__unattach_match__1_splitter___redArg(lean_object* v_x_761_, lean_object* v_h__1_762_){
_start:
{
lean_object* v___x_763_; 
v___x_763_ = lean_apply_2(v_h__1_762_, v_x_761_, lean_box(0));
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Array_map__unattach_match__1_splitter(lean_object* v_00_u03b1_764_, lean_object* v_P_765_, lean_object* v_motive_766_, lean_object* v_x_767_, lean_object* v_h__1_768_){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = lean_apply_2(v_h__1_768_, v_x_767_, lean_box(0));
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_collectNamedSyntaxHoles(lean_object* v_stx_772_){
_start:
{
lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = ((lean_object*)(l_Lean_Elab_Term_Quotation_collectNamedSyntaxHoles___closed__0));
v___x_774_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go(v_stx_772_, v___x_773_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0_spec__0___redArg(lean_object* v_o_775_, lean_object* v___y_776_){
_start:
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v_env_780_; lean_object* v___x_781_; lean_object* v_toEnvExtension_782_; lean_object* v_asyncMode_783_; lean_object* v___x_784_; uint8_t v___x_785_; lean_object* v___x_786_; lean_object* v_merged_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_795_; 
v___x_778_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_779_ = lean_st_ref_get(v___y_776_);
v_env_780_ = lean_ctor_get(v___x_779_, 0);
lean_inc_ref(v_env_780_);
lean_dec(v___x_779_);
v___x_781_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_782_ = lean_ctor_get(v___x_781_, 0);
v_asyncMode_783_ = lean_ctor_get(v_toEnvExtension_782_, 2);
v___x_784_ = lean_box(0);
v___x_785_ = 0;
v___x_786_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_778_, v___x_781_, v_env_780_, v_asyncMode_783_, v___x_784_, v___x_785_);
v_merged_787_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_795_ == 0)
{
lean_object* v_unused_796_; 
v_unused_796_ = lean_ctor_get(v___x_786_, 1);
lean_dec(v_unused_796_);
v___x_789_ = v___x_786_;
v_isShared_790_ = v_isSharedCheck_795_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_merged_787_);
lean_dec(v___x_786_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_795_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_792_; 
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 1, v_merged_787_);
lean_ctor_set(v___x_789_, 0, v_o_775_);
v___x_792_ = v___x_789_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_o_775_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v_merged_787_);
v___x_792_ = v_reuseFailAlloc_794_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
lean_object* v___x_793_; 
v___x_793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_793_, 0, v___x_792_);
return v___x_793_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0_spec__0___redArg___boxed(lean_object* v_o_797_, lean_object* v___y_798_, lean_object* v___y_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0_spec__0___redArg(v_o_797_, v___y_798_);
lean_dec(v___y_798_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0(lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_808_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_805_);
v___x_809_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0_spec__0___redArg(v___x_808_, v___y_806_);
return v___x_809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0___boxed(lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0(v___y_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
lean_dec(v___y_815_);
lean_dec_ref(v___y_814_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
return v_res_817_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0(uint8_t v_suppressElabErrors_825_, lean_object* v_x_826_){
_start:
{
if (lean_obj_tag(v_x_826_) == 1)
{
lean_object* v_pre_827_; 
v_pre_827_ = lean_ctor_get(v_x_826_, 0);
switch(lean_obj_tag(v_pre_827_))
{
case 1:
{
lean_object* v_pre_828_; 
v_pre_828_ = lean_ctor_get(v_pre_827_, 0);
switch(lean_obj_tag(v_pre_828_))
{
case 0:
{
lean_object* v_str_829_; lean_object* v_str_830_; lean_object* v___x_831_; uint8_t v___x_832_; 
v_str_829_ = lean_ctor_get(v_x_826_, 1);
v_str_830_ = lean_ctor_get(v_pre_827_, 1);
v___x_831_ = ((lean_object*)(l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn___closed__5_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_));
v___x_832_ = lean_string_dec_eq(v_str_830_, v___x_831_);
if (v___x_832_ == 0)
{
lean_object* v___x_833_; uint8_t v___x_834_; 
v___x_833_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__0));
v___x_834_ = lean_string_dec_eq(v_str_830_, v___x_833_);
if (v___x_834_ == 0)
{
return v___x_834_;
}
else
{
lean_object* v___x_835_; uint8_t v___x_836_; 
v___x_835_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__1));
v___x_836_ = lean_string_dec_eq(v_str_829_, v___x_835_);
if (v___x_836_ == 0)
{
return v___x_836_;
}
else
{
return v_suppressElabErrors_825_;
}
}
}
else
{
lean_object* v___x_837_; uint8_t v___x_838_; 
v___x_837_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__2));
v___x_838_ = lean_string_dec_eq(v_str_829_, v___x_837_);
if (v___x_838_ == 0)
{
return v___x_838_;
}
else
{
return v_suppressElabErrors_825_;
}
}
}
case 1:
{
lean_object* v_pre_839_; 
v_pre_839_ = lean_ctor_get(v_pre_828_, 0);
if (lean_obj_tag(v_pre_839_) == 0)
{
lean_object* v_str_840_; lean_object* v_str_841_; lean_object* v_str_842_; lean_object* v___x_843_; uint8_t v___x_844_; 
v_str_840_ = lean_ctor_get(v_x_826_, 1);
v_str_841_ = lean_ctor_get(v_pre_827_, 1);
v_str_842_ = lean_ctor_get(v_pre_828_, 1);
v___x_843_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__3));
v___x_844_ = lean_string_dec_eq(v_str_842_, v___x_843_);
if (v___x_844_ == 0)
{
return v___x_844_;
}
else
{
lean_object* v___x_845_; uint8_t v___x_846_; 
v___x_845_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__4));
v___x_846_ = lean_string_dec_eq(v_str_841_, v___x_845_);
if (v___x_846_ == 0)
{
return v___x_846_;
}
else
{
lean_object* v___x_847_; uint8_t v___x_848_; 
v___x_847_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__5));
v___x_848_ = lean_string_dec_eq(v_str_840_, v___x_847_);
if (v___x_848_ == 0)
{
return v___x_848_;
}
else
{
return v_suppressElabErrors_825_;
}
}
}
}
else
{
uint8_t v___x_849_; 
v___x_849_ = 0;
return v___x_849_;
}
}
default: 
{
uint8_t v___x_850_; 
v___x_850_ = 0;
return v___x_850_;
}
}
}
case 0:
{
lean_object* v_str_851_; lean_object* v___x_852_; uint8_t v___x_853_; 
v_str_851_ = lean_ctor_get(v_x_826_, 1);
v___x_852_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___closed__6));
v___x_853_ = lean_string_dec_eq(v_str_851_, v___x_852_);
if (v___x_853_ == 0)
{
return v___x_853_;
}
else
{
return v_suppressElabErrors_825_;
}
}
default: 
{
uint8_t v___x_854_; 
v___x_854_ = 0;
return v___x_854_;
}
}
}
else
{
uint8_t v___x_855_; 
v___x_855_ = 0;
return v___x_855_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_856_, lean_object* v_x_857_){
_start:
{
uint8_t v_suppressElabErrors_boxed_858_; uint8_t v_res_859_; lean_object* v_r_860_; 
v_suppressElabErrors_boxed_858_ = lean_unbox(v_suppressElabErrors_856_);
v_res_859_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0(v_suppressElabErrors_boxed_858_, v_x_857_);
lean_dec(v_x_857_);
v_r_860_ = lean_box(v_res_859_);
return v_r_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_ref_862_, lean_object* v_msgData_863_, uint8_t v_severity_864_, uint8_t v_isSilent_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_){
_start:
{
lean_object* v___y_872_; uint8_t v___y_873_; uint8_t v___y_874_; lean_object* v___y_875_; lean_object* v___y_876_; lean_object* v___y_877_; lean_object* v___y_878_; lean_object* v_toCold_879_; lean_object* v___y_880_; lean_object* v___y_909_; lean_object* v___y_910_; uint8_t v___y_911_; uint8_t v___y_912_; lean_object* v___y_913_; lean_object* v___y_914_; uint8_t v___y_915_; lean_object* v___y_916_; lean_object* v___y_936_; lean_object* v___y_937_; uint8_t v___y_938_; uint8_t v___y_939_; uint8_t v___y_940_; lean_object* v___y_941_; lean_object* v___y_942_; uint8_t v___y_946_; uint8_t v___y_947_; uint8_t v___x_957_; uint8_t v___y_959_; uint8_t v___x_965_; 
v___x_957_ = 2;
v___x_965_ = l_Lean_instBEqMessageSeverity_beq(v_severity_864_, v___x_957_);
if (v___x_965_ == 0)
{
v___y_959_ = v___x_965_;
goto v___jp_958_;
}
else
{
uint8_t v___x_966_; 
lean_inc_ref(v_msgData_863_);
v___x_966_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_863_);
if (v___x_966_ == 0)
{
v___y_959_ = v___x_966_;
goto v___jp_958_;
}
else
{
lean_object* v___x_967_; lean_object* v___x_968_; 
lean_dec_ref(v_msgData_863_);
v___x_967_ = lean_box(0);
v___x_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
return v___x_968_;
}
}
v___jp_871_:
{
lean_object* v_currNamespace_881_; lean_object* v_openDecls_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v_env_887_; lean_object* v_nextMacroScope_888_; lean_object* v_ngen_889_; lean_object* v_auxDeclNGen_890_; lean_object* v_traceState_891_; lean_object* v_cache_892_; lean_object* v_recordedDeps_893_; lean_object* v_messages_894_; lean_object* v_infoState_895_; lean_object* v_snapshotTasks_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_907_; 
v_currNamespace_881_ = lean_ctor_get(v_toCold_879_, 4);
v_openDecls_882_ = lean_ctor_get(v_toCold_879_, 5);
lean_inc(v_openDecls_882_);
lean_inc(v_currNamespace_881_);
v___x_883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_883_, 0, v_currNamespace_881_);
lean_ctor_set(v___x_883_, 1, v_openDecls_882_);
v___x_884_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_883_);
lean_ctor_set(v___x_884_, 1, v___y_876_);
lean_inc_ref(v___y_877_);
lean_inc_ref(v___y_872_);
v___x_885_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_885_, 0, v___y_872_);
lean_ctor_set(v___x_885_, 1, v___y_875_);
lean_ctor_set(v___x_885_, 2, v___y_878_);
lean_ctor_set(v___x_885_, 3, v___y_877_);
lean_ctor_set(v___x_885_, 4, v___x_884_);
lean_ctor_set_uint8(v___x_885_, sizeof(void*)*5, v___y_874_);
lean_ctor_set_uint8(v___x_885_, sizeof(void*)*5 + 1, v___y_873_);
lean_ctor_set_uint8(v___x_885_, sizeof(void*)*5 + 2, v_isSilent_865_);
v___x_886_ = lean_st_ref_take(v___y_880_);
v_env_887_ = lean_ctor_get(v___x_886_, 0);
v_nextMacroScope_888_ = lean_ctor_get(v___x_886_, 1);
v_ngen_889_ = lean_ctor_get(v___x_886_, 2);
v_auxDeclNGen_890_ = lean_ctor_get(v___x_886_, 3);
v_traceState_891_ = lean_ctor_get(v___x_886_, 4);
v_cache_892_ = lean_ctor_get(v___x_886_, 5);
v_recordedDeps_893_ = lean_ctor_get(v___x_886_, 6);
v_messages_894_ = lean_ctor_get(v___x_886_, 7);
v_infoState_895_ = lean_ctor_get(v___x_886_, 8);
v_snapshotTasks_896_ = lean_ctor_get(v___x_886_, 9);
v_isSharedCheck_907_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_907_ == 0)
{
v___x_898_ = v___x_886_;
v_isShared_899_ = v_isSharedCheck_907_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_snapshotTasks_896_);
lean_inc(v_infoState_895_);
lean_inc(v_messages_894_);
lean_inc(v_recordedDeps_893_);
lean_inc(v_cache_892_);
lean_inc(v_traceState_891_);
lean_inc(v_auxDeclNGen_890_);
lean_inc(v_ngen_889_);
lean_inc(v_nextMacroScope_888_);
lean_inc(v_env_887_);
lean_dec(v___x_886_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_907_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_903_; 
v___x_900_ = lean_box(0);
v___x_901_ = l_Lean_MessageLog_add(v___x_885_, v_messages_894_);
if (v_isShared_899_ == 0)
{
lean_ctor_set(v___x_898_, 7, v___x_901_);
v___x_903_ = v___x_898_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_env_887_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_nextMacroScope_888_);
lean_ctor_set(v_reuseFailAlloc_906_, 2, v_ngen_889_);
lean_ctor_set(v_reuseFailAlloc_906_, 3, v_auxDeclNGen_890_);
lean_ctor_set(v_reuseFailAlloc_906_, 4, v_traceState_891_);
lean_ctor_set(v_reuseFailAlloc_906_, 5, v_cache_892_);
lean_ctor_set(v_reuseFailAlloc_906_, 6, v_recordedDeps_893_);
lean_ctor_set(v_reuseFailAlloc_906_, 7, v___x_901_);
lean_ctor_set(v_reuseFailAlloc_906_, 8, v_infoState_895_);
lean_ctor_set(v_reuseFailAlloc_906_, 9, v_snapshotTasks_896_);
v___x_903_ = v_reuseFailAlloc_906_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_904_ = lean_st_ref_put(v___y_880_, v___x_903_);
v___x_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_900_);
return v___x_905_;
}
}
}
v___jp_908_:
{
lean_object* v_fileName_917_; lean_object* v_fileMap_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_934_; 
v_fileName_917_ = lean_ctor_get(v___y_914_, 0);
v_fileMap_918_ = lean_ctor_get(v___y_914_, 1);
v___x_919_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_863_);
v___x_920_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__1(v___x_919_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
v_a_921_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_934_ == 0)
{
v___x_923_ = v___x_920_;
v_isShared_924_ = v_isSharedCheck_934_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_920_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_934_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
lean_inc_ref_n(v_fileMap_918_, 2);
v___x_925_ = l_Lean_FileMap_toPosition(v_fileMap_918_, v___y_913_);
lean_dec(v___y_913_);
v___x_926_ = l_Lean_FileMap_toPosition(v_fileMap_918_, v___y_916_);
lean_dec(v___y_916_);
v___x_927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_927_, 0, v___x_926_);
v___x_928_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___closed__0));
if (v___y_915_ == 0)
{
lean_del_object(v___x_923_);
lean_dec_ref(v___y_910_);
v___y_872_ = v_fileName_917_;
v___y_873_ = v___y_912_;
v___y_874_ = v___y_911_;
v___y_875_ = v___x_925_;
v___y_876_ = v_a_921_;
v___y_877_ = v___x_928_;
v___y_878_ = v___x_927_;
v_toCold_879_ = v___y_909_;
v___y_880_ = v___y_869_;
goto v___jp_871_;
}
else
{
uint8_t v___x_929_; 
lean_inc(v_a_921_);
v___x_929_ = l_Lean_MessageData_hasTag(v___y_910_, v_a_921_);
if (v___x_929_ == 0)
{
lean_object* v___x_930_; lean_object* v___x_932_; 
lean_dec_ref_known(v___x_927_, 1);
lean_dec_ref(v___x_925_);
lean_dec(v_a_921_);
v___x_930_ = lean_box(0);
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 0, v___x_930_);
v___x_932_ = v___x_923_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_930_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
else
{
lean_del_object(v___x_923_);
v___y_872_ = v_fileName_917_;
v___y_873_ = v___y_912_;
v___y_874_ = v___y_911_;
v___y_875_ = v___x_925_;
v___y_876_ = v_a_921_;
v___y_877_ = v___x_928_;
v___y_878_ = v___x_927_;
v_toCold_879_ = v___y_909_;
v___y_880_ = v___y_869_;
goto v___jp_871_;
}
}
}
}
v___jp_935_:
{
lean_object* v___x_943_; 
v___x_943_ = l_Lean_Syntax_getTailPos_x3f(v___y_941_, v___y_940_);
lean_dec(v___y_941_);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_inc(v___y_942_);
v___y_909_ = v___y_936_;
v___y_910_ = v___y_937_;
v___y_911_ = v___y_940_;
v___y_912_ = v___y_939_;
v___y_913_ = v___y_942_;
v___y_914_ = v___y_936_;
v___y_915_ = v___y_938_;
v___y_916_ = v___y_942_;
goto v___jp_908_;
}
else
{
lean_object* v_val_944_; 
v_val_944_ = lean_ctor_get(v___x_943_, 0);
lean_inc(v_val_944_);
lean_dec_ref_known(v___x_943_, 1);
v___y_909_ = v___y_936_;
v___y_910_ = v___y_937_;
v___y_911_ = v___y_940_;
v___y_912_ = v___y_939_;
v___y_913_ = v___y_942_;
v___y_914_ = v___y_936_;
v___y_915_ = v___y_938_;
v___y_916_ = v_val_944_;
goto v___jp_908_;
}
}
v___jp_945_:
{
lean_object* v_toCold_948_; lean_object* v_ref_949_; uint8_t v_suppressElabErrors_950_; lean_object* v___x_951_; lean_object* v___f_952_; lean_object* v_ref_953_; lean_object* v___x_954_; 
v_toCold_948_ = lean_ctor_get(v___y_868_, 0);
v_ref_949_ = lean_ctor_get(v___y_868_, 2);
v_suppressElabErrors_950_ = lean_ctor_get_uint8(v___y_868_, sizeof(void*)*3 + 2);
v___x_951_ = lean_box(v_suppressElabErrors_950_);
v___f_952_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_952_, 0, v___x_951_);
v_ref_953_ = l_Lean_replaceRef(v_ref_862_, v_ref_949_);
v___x_954_ = l_Lean_Syntax_getPos_x3f(v_ref_953_, v___y_946_);
if (lean_obj_tag(v___x_954_) == 0)
{
lean_object* v___x_955_; 
v___x_955_ = lean_unsigned_to_nat(0u);
v___y_936_ = v_toCold_948_;
v___y_937_ = v___f_952_;
v___y_938_ = v_suppressElabErrors_950_;
v___y_939_ = v___y_947_;
v___y_940_ = v___y_946_;
v___y_941_ = v_ref_953_;
v___y_942_ = v___x_955_;
goto v___jp_935_;
}
else
{
lean_object* v_val_956_; 
v_val_956_ = lean_ctor_get(v___x_954_, 0);
lean_inc(v_val_956_);
lean_dec_ref_known(v___x_954_, 1);
v___y_936_ = v_toCold_948_;
v___y_937_ = v___f_952_;
v___y_938_ = v_suppressElabErrors_950_;
v___y_939_ = v___y_947_;
v___y_940_ = v___y_946_;
v___y_941_ = v_ref_953_;
v___y_942_ = v_val_956_;
goto v___jp_935_;
}
}
v___jp_958_:
{
uint8_t v___x_960_; uint8_t v___x_961_; 
v___x_960_ = 1;
v___x_961_ = l_Lean_instBEqMessageSeverity_beq(v_severity_864_, v___x_960_);
if (v___x_961_ == 0)
{
v___y_946_ = v___y_959_;
v___y_947_ = v_severity_864_;
goto v___jp_945_;
}
else
{
lean_object* v___x_962_; lean_object* v___x_963_; uint8_t v___x_964_; 
v___x_962_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_868_);
v___x_963_ = l_Lean_warningAsError;
v___x_964_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__4(v___x_962_, v___x_963_);
lean_dec_ref(v___x_962_);
if (v___x_964_ == 0)
{
v___y_946_ = v___y_959_;
v___y_947_ = v_severity_864_;
goto v___jp_945_;
}
else
{
v___y_946_ = v___y_959_;
v___y_947_ = v___x_957_;
goto v___jp_945_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_ref_969_, lean_object* v_msgData_970_, lean_object* v_severity_971_, lean_object* v_isSilent_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_){
_start:
{
uint8_t v_severity_boxed_978_; uint8_t v_isSilent_boxed_979_; lean_object* v_res_980_; 
v_severity_boxed_978_ = lean_unbox(v_severity_971_);
v_isSilent_boxed_979_ = lean_unbox(v_isSilent_972_);
v_res_980_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg(v_ref_969_, v_msgData_970_, v_severity_boxed_978_, v_isSilent_boxed_979_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
lean_dec(v___y_976_);
lean_dec_ref(v___y_975_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v_ref_969_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3(lean_object* v_ref_981_, lean_object* v_msgData_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_){
_start:
{
uint8_t v___x_990_; uint8_t v___x_991_; lean_object* v___x_992_; 
v___x_990_ = 1;
v___x_991_ = 0;
v___x_992_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg(v_ref_981_, v_msgData_982_, v___x_990_, v___x_991_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3___boxed(lean_object* v_ref_993_, lean_object* v_msgData_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3(v_ref_993_, v_msgData_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec(v___y_996_);
lean_dec_ref(v___y_995_);
lean_dec(v_ref_993_);
return v_res_1002_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__0));
v___x_1005_ = l_Lean_stringToMessageData(v___x_1004_);
return v___x_1005_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__2));
v___x_1008_ = l_Lean_stringToMessageData(v___x_1007_);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2(lean_object* v_linterOption_1009_, lean_object* v_stx_1010_, lean_object* v_msg_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
lean_object* v_name_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1037_; 
v_name_1019_ = lean_ctor_get(v_linterOption_1009_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v_linterOption_1009_);
if (v_isSharedCheck_1037_ == 0)
{
lean_object* v_unused_1038_; 
v_unused_1038_ = lean_ctor_get(v_linterOption_1009_, 1);
lean_dec(v_unused_1038_);
v___x_1021_ = v_linterOption_1009_;
v_isShared_1022_ = v_isSharedCheck_1037_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_name_1019_);
lean_dec(v_linterOption_1009_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1037_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1026_; 
v___x_1023_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__1);
lean_inc(v_name_1019_);
v___x_1024_ = l_Lean_MessageData_ofName(v_name_1019_);
if (v_isShared_1022_ == 0)
{
lean_ctor_set_tag(v___x_1021_, 7);
lean_ctor_set(v___x_1021_, 1, v___x_1024_);
lean_ctor_set(v___x_1021_, 0, v___x_1023_);
v___x_1026_ = v___x_1021_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1023_);
lean_ctor_set(v_reuseFailAlloc_1036_, 1, v___x_1024_);
v___x_1026_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v_disable_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1027_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___closed__3);
v___x_1028_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1026_);
lean_ctor_set(v___x_1028_, 1, v___x_1027_);
v_disable_1029_ = l_Lean_MessageData_note(v___x_1028_);
v___x_1030_ = l_Lean_Linter_linterMessageTag;
v___x_1031_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1031_, 0, v_msg_1011_);
lean_ctor_set(v___x_1031_, 1, v_disable_1029_);
v___x_1032_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1030_);
lean_ctor_set(v___x_1032_, 1, v___x_1031_);
v___x_1033_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1033_, 0, v_name_1019_);
lean_ctor_set(v___x_1033_, 1, v___x_1032_);
lean_inc(v_stx_1010_);
v___x_1034_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_1034_, 0, v_stx_1010_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
v___x_1035_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3(v_stx_1010_, v___x_1034_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
lean_dec(v_stx_1010_);
return v___x_1035_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2___boxed(lean_object* v_linterOption_1039_, lean_object* v_stx_1040_, lean_object* v_msg_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2(v_linterOption_1039_, v_stx_1040_, v_msg_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1(lean_object* v_linterOption_1050_, lean_object* v_stx_1051_, lean_object* v_msg_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_){
_start:
{
lean_object* v___x_1060_; lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1071_; 
v___x_1060_ = l_Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0(v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_);
v_a_1061_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1063_ = v___x_1060_;
v_isShared_1064_ = v_isSharedCheck_1071_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v___x_1060_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1071_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
uint8_t v___x_1065_; 
v___x_1065_ = l_Lean_Linter_getLinterValue(v_linterOption_1050_, v_a_1061_);
lean_dec(v_a_1061_);
if (v___x_1065_ == 0)
{
lean_object* v___x_1066_; lean_object* v___x_1068_; 
lean_dec_ref(v_msg_1052_);
lean_dec(v_stx_1051_);
lean_dec_ref(v_linterOption_1050_);
v___x_1066_ = lean_box(0);
if (v_isShared_1064_ == 0)
{
lean_ctor_set(v___x_1063_, 0, v___x_1066_);
v___x_1068_ = v___x_1063_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v___x_1066_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
else
{
lean_object* v___x_1070_; 
lean_del_object(v___x_1063_);
v___x_1070_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2(v_linterOption_1050_, v_stx_1051_, v_msg_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_);
return v___x_1070_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1___boxed(lean_object* v_linterOption_1072_, lean_object* v_stx_1073_, lean_object* v_msg_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
lean_object* v_res_1082_; 
v_res_1082_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1(v_linterOption_1072_, v_stx_1073_, v_msg_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
return v_res_1082_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; 
v___x_1084_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__0));
v___x_1085_ = l_Lean_stringToMessageData(v___x_1084_);
return v___x_1085_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1087_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__2));
v___x_1088_ = l_Lean_stringToMessageData(v___x_1087_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2(lean_object* v_as_1089_, size_t v_sz_1090_, size_t v_i_1091_, lean_object* v_b_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_){
_start:
{
uint8_t v___x_1100_; 
v___x_1100_ = lean_usize_dec_lt(v_i_1091_, v_sz_1090_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; 
v___x_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1101_, 0, v_b_1092_);
return v___x_1101_;
}
else
{
lean_object* v_a_1102_; lean_object* v_fst_1103_; lean_object* v_snd_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1121_; 
v_a_1102_ = lean_array_uget(v_as_1089_, v_i_1091_);
v_fst_1103_ = lean_ctor_get(v_a_1102_, 0);
v_snd_1104_ = lean_ctor_get(v_a_1102_, 1);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_a_1102_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1106_ = v_a_1102_;
v_isShared_1107_ = v_isSharedCheck_1121_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_snd_1104_);
lean_inc(v_fst_1103_);
lean_dec(v_a_1102_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1121_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1113_; 
v___x_1108_ = l_Lean_Linter_linter_exprQuot_syntaxHole;
v___x_1109_ = lean_box(0);
v___x_1110_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__1);
v___x_1111_ = l_Lean_MessageData_ofName(v_snd_1104_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set_tag(v___x_1106_, 7);
lean_ctor_set(v___x_1106_, 1, v___x_1111_);
lean_ctor_set(v___x_1106_, 0, v___x_1110_);
v___x_1113_ = v___x_1106_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v___x_1110_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v___x_1111_);
v___x_1113_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1114_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___closed__3);
v___x_1115_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1113_);
lean_ctor_set(v___x_1115_, 1, v___x_1114_);
v___x_1116_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1(v___x_1108_, v_fst_1103_, v___x_1115_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_);
if (lean_obj_tag(v___x_1116_) == 0)
{
size_t v___x_1117_; size_t v___x_1118_; 
lean_dec_ref_known(v___x_1116_, 1);
v___x_1117_ = ((size_t)1ULL);
v___x_1118_ = lean_usize_add(v_i_1091_, v___x_1117_);
v_i_1091_ = v___x_1118_;
v_b_1092_ = v___x_1109_;
goto _start;
}
else
{
return v___x_1116_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2___boxed(lean_object* v_as_1122_, lean_object* v_sz_1123_, lean_object* v_i_1124_, lean_object* v_b_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_){
_start:
{
size_t v_sz_boxed_1133_; size_t v_i_boxed_1134_; lean_object* v_res_1135_; 
v_sz_boxed_1133_ = lean_unbox_usize(v_sz_1123_);
lean_dec(v_sz_1123_);
v_i_boxed_1134_ = lean_unbox_usize(v_i_1124_);
lean_dec(v_i_1124_);
v_res_1135_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2(v_as_1122_, v_sz_boxed_1133_, v_i_boxed_1134_, v_b_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1128_);
lean_dec(v___y_1127_);
lean_dec_ref(v___y_1126_);
lean_dec_ref(v_as_1122_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot(lean_object* v_quotContent_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_){
_start:
{
lean_object* v___x_1144_; lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1168_; 
v___x_1144_ = l_Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0(v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_);
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1147_ = v___x_1144_;
v_isShared_1148_ = v_isSharedCheck_1168_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1144_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1168_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1149_; uint8_t v___x_1150_; 
v___x_1149_ = l_Lean_Linter_linter_exprQuot_syntaxHole;
v___x_1150_ = l_Lean_Linter_getLinterValue(v___x_1149_, v_a_1145_);
lean_dec(v_a_1145_);
if (v___x_1150_ == 0)
{
lean_object* v___x_1151_; lean_object* v___x_1153_; 
lean_dec(v_quotContent_1136_);
v___x_1151_ = lean_box(0);
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 0, v___x_1151_);
v___x_1153_ = v___x_1147_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1151_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
else
{
lean_object* v___x_1155_; lean_object* v___x_1156_; size_t v_sz_1157_; size_t v___x_1158_; lean_object* v___x_1159_; 
lean_del_object(v___x_1147_);
v___x_1155_ = l_Lean_Elab_Term_Quotation_collectNamedSyntaxHoles(v_quotContent_1136_);
v___x_1156_ = lean_box(0);
v_sz_1157_ = lean_array_size(v___x_1155_);
v___x_1158_ = ((size_t)0ULL);
v___x_1159_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__2(v___x_1155_, v_sz_1157_, v___x_1158_, v___x_1156_, v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_);
lean_dec_ref(v___x_1155_);
if (lean_obj_tag(v___x_1159_) == 0)
{
lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1166_; 
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1166_ == 0)
{
lean_object* v_unused_1167_; 
v_unused_1167_ = lean_ctor_get(v___x_1159_, 0);
lean_dec(v_unused_1167_);
v___x_1161_ = v___x_1159_;
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
else
{
lean_dec(v___x_1159_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 0, v___x_1156_);
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v___x_1156_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
else
{
return v___x_1159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot___boxed(lean_object* v_quotContent_1169_, lean_object* v_a_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l_Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot(v_quotContent_1169_, v_a_1170_, v_a_1171_, v_a_1172_, v_a_1173_, v_a_1174_, v_a_1175_);
lean_dec(v_a_1175_);
lean_dec_ref(v_a_1174_);
lean_dec(v_a_1173_);
lean_dec_ref(v_a_1172_);
lean_dec(v_a_1171_);
lean_dec_ref(v_a_1170_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0_spec__0(lean_object* v_o_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v___x_1186_; 
v___x_1186_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0_spec__0___redArg(v_o_1178_, v___y_1184_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0_spec__0___boxed(lean_object* v_o_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__0_spec__0(v_o_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_);
lean_dec(v___y_1193_);
lean_dec_ref(v___y_1192_);
lean_dec(v___y_1191_);
lean_dec_ref(v___y_1190_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5(lean_object* v_ref_1196_, lean_object* v_msgData_1197_, uint8_t v_severity_1198_, uint8_t v_isSilent_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
lean_object* v___x_1207_; 
v___x_1207_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg(v_ref_1196_, v_msgData_1197_, v_severity_1198_, v_isSilent_1199_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_ref_1208_, lean_object* v_msgData_1209_, lean_object* v_severity_1210_, lean_object* v_isSilent_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_){
_start:
{
uint8_t v_severity_boxed_1219_; uint8_t v_isSilent_boxed_1220_; lean_object* v_res_1221_; 
v_severity_boxed_1219_ = lean_unbox(v_severity_1210_);
v_isSilent_boxed_1220_ = lean_unbox(v_isSilent_1211_);
v_res_1221_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5(v_ref_1208_, v_msgData_1209_, v_severity_boxed_1219_, v_isSilent_boxed_1220_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_);
lean_dec(v___y_1217_);
lean_dec_ref(v___y_1216_);
lean_dec(v___y_1215_);
lean_dec_ref(v___y_1214_);
lean_dec(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_dec(v_ref_1208_);
return v_res_1221_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_Quotation_isBareTermQuot(lean_object* v_stx_1228_){
_start:
{
lean_object* v___x_1229_; uint8_t v___x_1230_; 
v___x_1229_ = ((lean_object*)(l_Lean_Elab_Term_Quotation_isBareTermQuot___closed__1));
lean_inc(v_stx_1228_);
v___x_1230_ = l_Lean_Syntax_isOfKind(v_stx_1228_, v___x_1229_);
if (v___x_1230_ == 0)
{
lean_dec(v_stx_1228_);
return v___x_1230_;
}
else
{
lean_object* v___x_1231_; lean_object* v___x_1232_; uint8_t v___x_1233_; 
v___x_1231_ = l_Lean_Syntax_getNumArgs(v_stx_1228_);
lean_dec(v_stx_1228_);
v___x_1232_ = lean_unsigned_to_nat(3u);
v___x_1233_ = lean_nat_dec_eq(v___x_1231_, v___x_1232_);
lean_dec(v___x_1231_);
return v___x_1233_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_isBareTermQuot___boxed(lean_object* v_stx_1234_){
_start:
{
uint8_t v_res_1235_; lean_object* v_r_1236_; 
v_res_1235_ = l_Lean_Elab_Term_Quotation_isBareTermQuot(v_stx_1234_);
v_r_1236_ = lean_box(v_res_1235_);
return v_r_1236_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot(lean_object* v_stx_1243_){
_start:
{
uint8_t v___x_1244_; 
lean_inc(v_stx_1243_);
v___x_1244_ = l_Lean_Syntax_isTokenAntiquot(v_stx_1243_);
if (v___x_1244_ == 0)
{
uint8_t v___x_1245_; 
v___x_1245_ = l_Lean_Syntax_isAntiquotSplice(v_stx_1243_);
if (v___x_1245_ == 0)
{
uint8_t v___x_1246_; 
v___x_1246_ = l_Lean_Syntax_isAntiquotSuffixSplice(v_stx_1243_);
if (v___x_1246_ == 0)
{
uint8_t v___x_1247_; 
lean_inc(v_stx_1243_);
v___x_1247_ = l_Lean_Syntax_isAntiquots(v_stx_1243_);
if (v___x_1247_ == 0)
{
uint8_t v___x_1248_; 
v___x_1248_ = l_Lean_Syntax_isQuot(v_stx_1243_);
if (v___x_1248_ == 0)
{
lean_object* v___x_1249_; uint8_t v___x_1250_; 
v___x_1249_ = ((lean_object*)(l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__3));
lean_inc(v_stx_1243_);
v___x_1250_ = l_Lean_Syntax_isOfKind(v_stx_1243_, v___x_1249_);
if (v___x_1250_ == 0)
{
lean_object* v___x_1251_; uint8_t v___x_1252_; 
v___x_1251_ = ((lean_object*)(l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___closed__1));
lean_inc(v_stx_1243_);
v___x_1252_ = l_Lean_Syntax_isOfKind(v_stx_1243_, v___x_1251_);
if (v___x_1252_ == 0)
{
if (lean_obj_tag(v_stx_1243_) == 1)
{
lean_object* v_args_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; uint8_t v___x_1256_; 
v_args_1253_ = lean_ctor_get(v_stx_1243_, 2);
lean_inc_ref(v_args_1253_);
lean_dec_ref_known(v_stx_1243_, 3);
v___x_1254_ = lean_unsigned_to_nat(0u);
v___x_1255_ = lean_array_get_size(v_args_1253_);
v___x_1256_ = lean_nat_dec_lt(v___x_1254_, v___x_1255_);
if (v___x_1256_ == 0)
{
lean_dec_ref(v_args_1253_);
return v___x_1256_;
}
else
{
if (v___x_1256_ == 0)
{
lean_dec_ref(v_args_1253_);
return v___x_1256_;
}
else
{
size_t v___x_1257_; size_t v___x_1258_; uint8_t v___x_1259_; 
v___x_1257_ = ((size_t)0ULL);
v___x_1258_ = lean_usize_of_nat(v___x_1255_);
v___x_1259_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot_spec__0(v_args_1253_, v___x_1257_, v___x_1258_);
lean_dec_ref(v_args_1253_);
return v___x_1259_;
}
}
}
else
{
lean_dec(v_stx_1243_);
return v___x_1252_;
}
}
else
{
lean_dec(v_stx_1243_);
return v___x_1247_;
}
}
else
{
lean_dec(v_stx_1243_);
return v___x_1247_;
}
}
else
{
lean_dec(v_stx_1243_);
return v___x_1247_;
}
}
else
{
lean_object* v_anti_1260_; uint8_t v___x_1261_; 
v_anti_1260_ = l_Lean_Syntax_getCanonicalAntiquot(v_stx_1243_);
v___x_1261_ = l_Lean_Syntax_isEscapedAntiquot(v_anti_1260_);
if (v___x_1261_ == 0)
{
lean_object* v___x_1262_; lean_object* v___x_1263_; uint8_t v___x_1264_; 
v___x_1262_ = lean_unsigned_to_nat(3u);
v___x_1263_ = l_Lean_Syntax_getArg(v_anti_1260_, v___x_1262_);
v___x_1264_ = l_Lean_Syntax_isNone(v___x_1263_);
lean_dec(v___x_1263_);
if (v___x_1264_ == 0)
{
lean_dec(v_anti_1260_);
return v___x_1247_;
}
else
{
lean_object* v___x_1265_; lean_object* v___x_1266_; uint8_t v___x_1267_; 
v___x_1265_ = l_Lean_Syntax_getAntiquotTerm(v_anti_1260_);
lean_dec(v_anti_1260_);
v___x_1266_ = ((lean_object*)(l_Lean_Syntax_instForInTopDownOfMonad_loop___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__1___closed__4));
v___x_1267_ = l_Lean_Syntax_isOfKind(v___x_1265_, v___x_1266_);
return v___x_1267_;
}
}
else
{
lean_dec(v_anti_1260_);
return v___x_1246_;
}
}
}
else
{
lean_dec(v_stx_1243_);
return v___x_1246_;
}
}
else
{
lean_dec(v_stx_1243_);
return v___x_1245_;
}
}
else
{
lean_dec(v_stx_1243_);
return v___x_1244_;
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot_spec__0(lean_object* v_as_1268_, size_t v_i_1269_, size_t v_stop_1270_){
_start:
{
uint8_t v___x_1271_; 
v___x_1271_ = lean_usize_dec_eq(v_i_1269_, v_stop_1270_);
if (v___x_1271_ == 0)
{
lean_object* v___x_1272_; uint8_t v___x_1273_; 
v___x_1272_ = lean_array_uget_borrowed(v_as_1268_, v_i_1269_);
lean_inc(v___x_1272_);
v___x_1273_ = l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot(v___x_1272_);
if (v___x_1273_ == 0)
{
size_t v___x_1274_; size_t v___x_1275_; 
v___x_1274_ = ((size_t)1ULL);
v___x_1275_ = lean_usize_add(v_i_1269_, v___x_1274_);
v_i_1269_ = v___x_1275_;
goto _start;
}
else
{
return v___x_1273_;
}
}
else
{
uint8_t v___x_1277_; 
v___x_1277_ = 0;
return v___x_1277_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot_spec__0___boxed(lean_object* v_as_1278_, lean_object* v_i_1279_, lean_object* v_stop_1280_){
_start:
{
size_t v_i_boxed_1281_; size_t v_stop_boxed_1282_; uint8_t v_res_1283_; lean_object* v_r_1284_; 
v_i_boxed_1281_ = lean_unbox_usize(v_i_1279_);
lean_dec(v_i_1279_);
v_stop_boxed_1282_ = lean_unbox_usize(v_stop_1280_);
lean_dec(v_stop_1280_);
v_res_1283_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot_spec__0(v_as_1278_, v_i_boxed_1281_, v_stop_boxed_1282_);
lean_dec_ref(v_as_1278_);
v_r_1284_ = lean_box(v_res_1283_);
return v_r_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___boxed(lean_object* v_stx_1285_){
_start:
{
uint8_t v_res_1286_; lean_object* v_r_1287_; 
v_res_1286_ = l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot(v_stx_1285_);
v_r_1287_ = lean_box(v_res_1286_);
return v_r_1287_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_Quotation_isCandidateBareExprQuot(lean_object* v_stx_1288_){
_start:
{
uint8_t v___x_1289_; 
lean_inc(v_stx_1288_);
v___x_1289_ = l_Lean_Elab_Term_Quotation_isBareTermQuot(v_stx_1288_);
if (v___x_1289_ == 0)
{
lean_dec(v_stx_1288_);
return v___x_1289_;
}
else
{
lean_object* v___x_1290_; lean_object* v___x_1291_; uint8_t v___x_1292_; 
v___x_1290_ = lean_unsigned_to_nat(1u);
v___x_1291_ = l_Lean_Syntax_getArg(v_stx_1288_, v___x_1290_);
lean_dec(v_stx_1288_);
v___x_1292_ = l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot(v___x_1291_);
if (v___x_1292_ == 0)
{
return v___x_1289_;
}
else
{
uint8_t v___x_1293_; 
v___x_1293_ = 0;
return v___x_1293_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_isCandidateBareExprQuot___boxed(lean_object* v_stx_1294_){
_start:
{
uint8_t v_res_1295_; lean_object* v_r_1296_; 
v_res_1295_ = l_Lean_Elab_Term_Quotation_isCandidateBareExprQuot(v_stx_1294_);
v_r_1296_ = lean_box(v_res_1295_);
return v_r_1296_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_Quotation_shouldCheckBareQuotDiscr(lean_object* v_discr_1297_, lean_object* v_quot_1298_){
_start:
{
uint8_t v___x_1299_; 
lean_inc(v_quot_1298_);
v___x_1299_ = l_Lean_Elab_Term_Quotation_isBareTermQuot(v_quot_1298_);
if (v___x_1299_ == 0)
{
lean_dec(v_quot_1298_);
return v___x_1299_;
}
else
{
lean_object* v___x_1300_; lean_object* v___x_1301_; uint8_t v___x_1302_; 
v___x_1300_ = lean_unsigned_to_nat(1u);
v___x_1301_ = l_Lean_Syntax_getArg(v_quot_1298_, v___x_1300_);
lean_dec(v_quot_1298_);
lean_inc(v___x_1301_);
v___x_1302_ = l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot(v___x_1301_);
if (v___x_1302_ == 0)
{
lean_dec(v___x_1301_);
return v___x_1299_;
}
else
{
lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; uint8_t v___x_1306_; 
v___x_1303_ = l_Lean_Elab_Term_Quotation_collectNamedSyntaxHoles(v___x_1301_);
v___x_1304_ = lean_array_get_size(v___x_1303_);
lean_dec_ref(v___x_1303_);
v___x_1305_ = lean_unsigned_to_nat(0u);
v___x_1306_ = lean_nat_dec_eq(v___x_1304_, v___x_1305_);
if (v___x_1306_ == 0)
{
return v___x_1299_;
}
else
{
if (lean_obj_tag(v_discr_1297_) == 3)
{
lean_object* v_preresolved_1307_; 
v_preresolved_1307_ = lean_ctor_get(v_discr_1297_, 3);
if (lean_obj_tag(v_preresolved_1307_) == 0)
{
lean_object* v_val_1308_; uint8_t v___x_1309_; 
v_val_1308_ = lean_ctor_get(v_discr_1297_, 2);
v___x_1309_ = l_Lean_Name_isAnonymous(v_val_1308_);
if (v___x_1309_ == 0)
{
return v___x_1299_;
}
else
{
uint8_t v___x_1310_; 
v___x_1310_ = 0;
return v___x_1310_;
}
}
else
{
uint8_t v___x_1311_; 
v___x_1311_ = 0;
return v___x_1311_;
}
}
else
{
uint8_t v___x_1312_; 
v___x_1312_ = 0;
return v___x_1312_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_shouldCheckBareQuotDiscr___boxed(lean_object* v_discr_1313_, lean_object* v_quot_1314_){
_start:
{
uint8_t v_res_1315_; lean_object* v_r_1316_; 
v_res_1315_ = l_Lean_Elab_Term_Quotation_shouldCheckBareQuotDiscr(v_discr_1313_, v_quot_1314_);
lean_dec(v_discr_1313_);
v_r_1316_ = lean_box(v_res_1315_);
return v_r_1316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots_go(lean_object* v_cur_1317_, lean_object* v_acc_1318_){
_start:
{
uint8_t v___x_1319_; 
lean_inc(v_cur_1317_);
v___x_1319_ = l_Lean_Syntax_isAntiquots(v_cur_1317_);
if (v___x_1319_ == 0)
{
uint8_t v___x_1320_; 
lean_inc(v_cur_1317_);
v___x_1320_ = l_Lean_Syntax_isTokenAntiquot(v_cur_1317_);
if (v___x_1320_ == 0)
{
uint8_t v___x_1321_; 
v___x_1321_ = l_Lean_Syntax_isAntiquotSplice(v_cur_1317_);
if (v___x_1321_ == 0)
{
uint8_t v___x_1322_; 
v___x_1322_ = l_Lean_Syntax_isAntiquotSuffixSplice(v_cur_1317_);
if (v___x_1322_ == 0)
{
uint8_t v___x_1323_; 
v___x_1323_ = l_Lean_Syntax_isQuot(v_cur_1317_);
if (v___x_1323_ == 0)
{
lean_object* v___x_1324_; uint8_t v___x_1325_; 
v___x_1324_ = ((lean_object*)(l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectNamedSyntaxHoles_go___closed__3));
lean_inc(v_cur_1317_);
v___x_1325_ = l_Lean_Syntax_isOfKind(v_cur_1317_, v___x_1324_);
if (v___x_1325_ == 0)
{
lean_object* v___x_1326_; uint8_t v___x_1327_; 
v___x_1326_ = ((lean_object*)(l_Lean_Elab_Term_Quotation_hasSyntaxOnlyAntiquot___closed__1));
lean_inc(v_cur_1317_);
v___x_1327_ = l_Lean_Syntax_isOfKind(v_cur_1317_, v___x_1326_);
if (v___x_1327_ == 0)
{
if (lean_obj_tag(v_cur_1317_) == 1)
{
lean_object* v_args_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; uint8_t v___x_1331_; 
v_args_1328_ = lean_ctor_get(v_cur_1317_, 2);
lean_inc_ref(v_args_1328_);
lean_dec_ref_known(v_cur_1317_, 3);
v___x_1329_ = lean_unsigned_to_nat(0u);
v___x_1330_ = lean_array_get_size(v_args_1328_);
v___x_1331_ = lean_nat_dec_lt(v___x_1329_, v___x_1330_);
if (v___x_1331_ == 0)
{
lean_dec_ref(v_args_1328_);
return v_acc_1318_;
}
else
{
size_t v___x_1332_; size_t v___x_1333_; lean_object* v___x_1334_; 
v___x_1332_ = ((size_t)0ULL);
v___x_1333_ = lean_usize_of_nat(v___x_1330_);
v___x_1334_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots_go_spec__0(v_args_1328_, v___x_1332_, v___x_1333_, v_acc_1318_);
lean_dec_ref(v_args_1328_);
return v___x_1334_;
}
}
else
{
lean_dec(v_cur_1317_);
return v_acc_1318_;
}
}
else
{
lean_dec(v_cur_1317_);
return v_acc_1318_;
}
}
else
{
lean_dec(v_cur_1317_);
return v_acc_1318_;
}
}
else
{
lean_dec(v_cur_1317_);
return v_acc_1318_;
}
}
else
{
lean_dec(v_cur_1317_);
return v_acc_1318_;
}
}
else
{
lean_dec(v_cur_1317_);
return v_acc_1318_;
}
}
else
{
lean_dec(v_cur_1317_);
return v_acc_1318_;
}
}
else
{
lean_object* v_anti_1335_; uint8_t v___x_1336_; 
v_anti_1335_ = l_Lean_Syntax_getCanonicalAntiquot(v_cur_1317_);
v___x_1336_ = l_Lean_Syntax_isEscapedAntiquot(v_anti_1335_);
if (v___x_1336_ == 0)
{
lean_object* v_t_1337_; uint8_t v___x_1338_; 
v_t_1337_ = l_Lean_Syntax_getAntiquotTerm(v_anti_1335_);
lean_dec(v_anti_1335_);
v___x_1338_ = l_Lean_Syntax_isIdent(v_t_1337_);
if (v___x_1338_ == 0)
{
lean_dec(v_t_1337_);
return v_acc_1318_;
}
else
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1339_ = l_Lean_Syntax_getId(v_t_1337_);
lean_dec(v_t_1337_);
v___x_1340_ = lean_array_push(v_acc_1318_, v___x_1339_);
return v___x_1340_;
}
}
else
{
lean_dec(v_anti_1335_);
return v_acc_1318_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots_go_spec__0(lean_object* v_as_1341_, size_t v_i_1342_, size_t v_stop_1343_, lean_object* v_b_1344_){
_start:
{
uint8_t v___x_1345_; 
v___x_1345_ = lean_usize_dec_eq(v_i_1342_, v_stop_1343_);
if (v___x_1345_ == 0)
{
lean_object* v___x_1346_; lean_object* v___x_1347_; size_t v___x_1348_; size_t v___x_1349_; 
v___x_1346_ = lean_array_uget_borrowed(v_as_1341_, v_i_1342_);
lean_inc(v___x_1346_);
v___x_1347_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots_go(v___x_1346_, v_b_1344_);
v___x_1348_ = ((size_t)1ULL);
v___x_1349_ = lean_usize_add(v_i_1342_, v___x_1348_);
v_i_1342_ = v___x_1349_;
v_b_1344_ = v___x_1347_;
goto _start;
}
else
{
return v_b_1344_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots_go_spec__0___boxed(lean_object* v_as_1351_, lean_object* v_i_1352_, lean_object* v_stop_1353_, lean_object* v_b_1354_){
_start:
{
size_t v_i_boxed_1355_; size_t v_stop_boxed_1356_; lean_object* v_res_1357_; 
v_i_boxed_1355_ = lean_unbox_usize(v_i_1352_);
lean_dec(v_i_1352_);
v_stop_boxed_1356_ = lean_unbox_usize(v_stop_1353_);
lean_dec(v_stop_1353_);
v_res_1357_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots_go_spec__0(v_as_1351_, v_i_boxed_1355_, v_stop_boxed_1356_, v_b_1354_);
lean_dec_ref(v_as_1351_);
return v_res_1357_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots(lean_object* v_stx_1360_){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1361_ = ((lean_object*)(l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots___closed__0));
v___x_1362_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots_go(v_stx_1360_, v___x_1361_);
return v___x_1362_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectArmPlainIdentPats_spec__0___redArg(lean_object* v_upperBound_1363_, lean_object* v_skipCol_1364_, lean_object* v_pats_1365_, lean_object* v_a_1366_, lean_object* v_b_1367_){
_start:
{
lean_object* v_a_1369_; uint8_t v___x_1373_; 
v___x_1373_ = lean_nat_dec_lt(v_a_1366_, v_upperBound_1363_);
if (v___x_1373_ == 0)
{
lean_dec(v_a_1366_);
return v_b_1367_;
}
else
{
uint8_t v___x_1374_; 
v___x_1374_ = lean_nat_dec_eq(v_a_1366_, v_skipCol_1364_);
if (v___x_1374_ == 0)
{
lean_object* v___x_1375_; uint8_t v___x_1376_; 
v___x_1375_ = lean_array_fget_borrowed(v_pats_1365_, v_a_1366_);
v___x_1376_ = l_Lean_Syntax_isIdent(v___x_1375_);
if (v___x_1376_ == 0)
{
v_a_1369_ = v_b_1367_;
goto v___jp_1368_;
}
else
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; 
v___x_1377_ = l_Lean_Syntax_getId(v___x_1375_);
v___x_1378_ = l_Lean_Name_eraseMacroScopes(v___x_1377_);
lean_dec(v___x_1377_);
v___x_1379_ = l_Lean_NameSet_insert(v_b_1367_, v___x_1378_);
v_a_1369_ = v___x_1379_;
goto v___jp_1368_;
}
}
else
{
v_a_1369_ = v_b_1367_;
goto v___jp_1368_;
}
}
v___jp_1368_:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___x_1370_ = lean_unsigned_to_nat(1u);
v___x_1371_ = lean_nat_add(v_a_1366_, v___x_1370_);
lean_dec(v_a_1366_);
v_a_1366_ = v___x_1371_;
v_b_1367_ = v_a_1369_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectArmPlainIdentPats_spec__0___redArg___boxed(lean_object* v_upperBound_1380_, lean_object* v_skipCol_1381_, lean_object* v_pats_1382_, lean_object* v_a_1383_, lean_object* v_b_1384_){
_start:
{
lean_object* v_res_1385_; 
v_res_1385_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectArmPlainIdentPats_spec__0___redArg(v_upperBound_1380_, v_skipCol_1381_, v_pats_1382_, v_a_1383_, v_b_1384_);
lean_dec_ref(v_pats_1382_);
lean_dec(v_skipCol_1381_);
lean_dec(v_upperBound_1380_);
return v_res_1385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_collectArmPlainIdentPats(lean_object* v_pats_1386_, lean_object* v_skipCol_1387_){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v_s_1390_; lean_object* v___x_1391_; 
v___x_1388_ = lean_array_get_size(v_pats_1386_);
v___x_1389_ = lean_unsigned_to_nat(0u);
v_s_1390_ = l_Lean_NameSet_empty;
v___x_1391_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectArmPlainIdentPats_spec__0___redArg(v___x_1388_, v_skipCol_1387_, v_pats_1386_, v___x_1389_, v_s_1390_);
return v___x_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_collectArmPlainIdentPats___boxed(lean_object* v_pats_1392_, lean_object* v_skipCol_1393_){
_start:
{
lean_object* v_res_1394_; 
v_res_1394_ = l_Lean_Elab_Term_Quotation_collectArmPlainIdentPats(v_pats_1392_, v_skipCol_1393_);
lean_dec(v_skipCol_1393_);
lean_dec_ref(v_pats_1392_);
return v_res_1394_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectArmPlainIdentPats_spec__0(lean_object* v_upperBound_1395_, lean_object* v_skipCol_1396_, lean_object* v_pats_1397_, lean_object* v_inst_1398_, lean_object* v_R_1399_, lean_object* v_a_1400_, lean_object* v_b_1401_, lean_object* v_c_1402_){
_start:
{
lean_object* v___x_1403_; 
v___x_1403_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectArmPlainIdentPats_spec__0___redArg(v_upperBound_1395_, v_skipCol_1396_, v_pats_1397_, v_a_1400_, v_b_1401_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectArmPlainIdentPats_spec__0___boxed(lean_object* v_upperBound_1404_, lean_object* v_skipCol_1405_, lean_object* v_pats_1406_, lean_object* v_inst_1407_, lean_object* v_R_1408_, lean_object* v_a_1409_, lean_object* v_b_1410_, lean_object* v_c_1411_){
_start:
{
lean_object* v_res_1412_; 
v_res_1412_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectArmPlainIdentPats_spec__0(v_upperBound_1404_, v_skipCol_1405_, v_pats_1406_, v_inst_1407_, v_R_1408_, v_a_1409_, v_b_1410_, v_c_1411_);
lean_dec_ref(v_pats_1406_);
lean_dec(v_skipCol_1405_);
lean_dec(v_upperBound_1404_);
return v_res_1412_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3_spec__6___redArg(lean_object* v_msgData_1413_, uint8_t v_severity_1414_, uint8_t v_isSilent_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_){
_start:
{
lean_object* v_ref_1421_; lean_object* v___x_1422_; 
v_ref_1421_ = lean_ctor_get(v___y_1418_, 2);
v___x_1422_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_Term_Quotation_warnNamedSyntaxHolesInQuot_spec__1_spec__2_spec__3_spec__5___redArg(v_ref_1421_, v_msgData_1413_, v_severity_1414_, v_isSilent_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_);
return v___x_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3_spec__6___redArg___boxed(lean_object* v_msgData_1423_, lean_object* v_severity_1424_, lean_object* v_isSilent_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_){
_start:
{
uint8_t v_severity_boxed_1431_; uint8_t v_isSilent_boxed_1432_; lean_object* v_res_1433_; 
v_severity_boxed_1431_ = lean_unbox(v_severity_1424_);
v_isSilent_boxed_1432_ = lean_unbox(v_isSilent_1425_);
v_res_1433_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3_spec__6___redArg(v_msgData_1423_, v_severity_boxed_1431_, v_isSilent_boxed_1432_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_);
lean_dec(v___y_1429_);
lean_dec_ref(v___y_1428_);
lean_dec(v___y_1427_);
lean_dec_ref(v___y_1426_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3(lean_object* v_msgData_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_){
_start:
{
uint8_t v___x_1442_; uint8_t v___x_1443_; lean_object* v___x_1444_; 
v___x_1442_ = 1;
v___x_1443_ = 0;
v___x_1444_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3_spec__6___redArg(v_msgData_1434_, v___x_1442_, v___x_1443_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3___boxed(lean_object* v_msgData_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v_res_1453_; 
v_res_1453_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3(v_msgData_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
lean_dec(v___y_1449_);
lean_dec_ref(v___y_1448_);
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1446_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__2___redArg(lean_object* v_opt_1454_, lean_object* v___y_1455_){
_start:
{
lean_object* v___x_1457_; uint8_t v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
v___x_1457_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1455_);
v___x_1458_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Term_Quotation_getAntiquotationIds_spec__0_spec__0_spec__2_spec__4(v___x_1457_, v_opt_1454_);
lean_dec_ref(v___x_1457_);
v___x_1459_ = lean_box(v___x_1458_);
v___x_1460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1460_, 0, v___x_1459_);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_opt_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__2___redArg(v_opt_1461_, v___y_1462_);
lean_dec_ref(v___y_1462_);
lean_dec_ref(v_opt_1461_);
return v_res_1464_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1466_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__0));
v___x_1467_ = l_Lean_stringToMessageData(v___x_1466_);
return v___x_1467_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1469_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__2));
v___x_1470_ = l_Lean_stringToMessageData(v___x_1469_);
return v___x_1470_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1(lean_object* v_id_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
lean_object* v___x_1479_; lean_object* v_env_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1502_; 
v___x_1479_ = lean_st_ref_get(v___y_1477_);
v_env_1480_ = lean_ctor_get(v___x_1479_, 0);
lean_inc_ref(v_env_1480_);
lean_dec(v___x_1479_);
v___x_1481_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_1482_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__2___redArg(v___x_1481_, v___y_1476_);
v_a_1483_ = lean_ctor_get(v___x_1482_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1485_ = v___x_1482_;
v_isShared_1486_ = v_isSharedCheck_1502_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1482_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1502_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
uint8_t v_isExporting_1492_; 
v_isExporting_1492_ = lean_ctor_get_uint8(v_env_1480_, sizeof(void*)*13);
lean_dec_ref(v_env_1480_);
if (v_isExporting_1492_ == 0)
{
lean_dec(v_a_1483_);
lean_dec(v_id_1471_);
goto v___jp_1487_;
}
else
{
uint8_t v___x_1493_; 
v___x_1493_ = l_Lean_isPrivateName(v_id_1471_);
if (v___x_1493_ == 0)
{
lean_dec(v_a_1483_);
lean_dec(v_id_1471_);
goto v___jp_1487_;
}
else
{
uint8_t v___x_1494_; 
v___x_1494_ = lean_unbox(v_a_1483_);
lean_dec(v_a_1483_);
if (v___x_1494_ == 0)
{
lean_dec(v_id_1471_);
goto v___jp_1487_;
}
else
{
lean_object* v___x_1495_; uint8_t v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
lean_del_object(v___x_1485_);
v___x_1495_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__1);
v___x_1496_ = 0;
v___x_1497_ = l_Lean_MessageData_ofConstName(v_id_1471_, v___x_1496_);
v___x_1498_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1495_);
lean_ctor_set(v___x_1498_, 1, v___x_1497_);
v___x_1499_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___closed__3);
v___x_1500_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1498_);
lean_ctor_set(v___x_1500_, 1, v___x_1499_);
v___x_1501_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3(v___x_1500_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_);
return v___x_1501_;
}
}
}
v___jp_1487_:
{
lean_object* v___x_1488_; lean_object* v___x_1490_; 
v___x_1488_ = lean_box(0);
if (v_isShared_1486_ == 0)
{
lean_ctor_set(v___x_1485_, 0, v___x_1488_);
v___x_1490_ = v___x_1485_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v___x_1488_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
return v___x_1490_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1___boxed(lean_object* v_id_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1(v_id_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_);
lean_dec(v___y_1509_);
lean_dec_ref(v___y_1508_);
lean_dec(v___y_1507_);
lean_dec_ref(v___y_1506_);
lean_dec(v___y_1505_);
lean_dec_ref(v___y_1504_);
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__0(lean_object* v_x_1512_){
_start:
{
if (lean_obj_tag(v_x_1512_) == 0)
{
lean_object* v___x_1513_; 
v___x_1513_ = lean_box(0);
return v___x_1513_;
}
else
{
lean_object* v_head_1514_; lean_object* v_tail_1515_; lean_object* v_fst_1516_; uint8_t v___x_1517_; 
v_head_1514_ = lean_ctor_get(v_x_1512_, 0);
v_tail_1515_ = lean_ctor_get(v_x_1512_, 1);
v_fst_1516_ = lean_ctor_get(v_head_1514_, 0);
v___x_1517_ = l_Lean_isPrivateName(v_fst_1516_);
if (v___x_1517_ == 0)
{
v_x_1512_ = v_tail_1515_;
goto _start;
}
else
{
lean_object* v___x_1519_; 
lean_inc(v_head_1514_);
v___x_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1519_, 0, v_head_1514_);
return v___x_1519_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__0___boxed(lean_object* v_x_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__0(v_x_1520_);
lean_dec(v_x_1520_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0(lean_object* v_id_1522_, uint8_t v_enableLog_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_){
_start:
{
lean_object* v___x_1531_; lean_object* v_toCold_1532_; lean_object* v_env_1533_; lean_object* v_currNamespace_1534_; lean_object* v_openDecls_1535_; lean_object* v___x_1536_; lean_object* v_res_1537_; lean_object* v___x_1538_; 
v___x_1531_ = lean_st_ref_get(v___y_1529_);
v_toCold_1532_ = lean_ctor_get(v___y_1528_, 0);
v_env_1533_ = lean_ctor_get(v___x_1531_, 0);
lean_inc_ref(v_env_1533_);
lean_dec(v___x_1531_);
v_currNamespace_1534_ = lean_ctor_get(v_toCold_1532_, 4);
v_openDecls_1535_ = lean_ctor_get(v_toCold_1532_, 5);
v___x_1536_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1528_);
lean_inc(v_openDecls_1535_);
lean_inc(v_currNamespace_1534_);
v_res_1537_ = l_Lean_ResolveName_resolveGlobalName(v_env_1533_, v___x_1536_, v_currNamespace_1534_, v_openDecls_1535_, v_id_1522_);
lean_dec_ref(v___x_1536_);
v___x_1538_ = lean_st_ref_get(v___y_1529_);
if (v_enableLog_1523_ == 0)
{
lean_object* v___x_1539_; 
lean_dec(v___x_1538_);
v___x_1539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1539_, 0, v_res_1537_);
return v___x_1539_;
}
else
{
lean_object* v_env_1540_; uint8_t v_isExporting_1541_; 
v_env_1540_ = lean_ctor_get(v___x_1538_, 0);
lean_inc_ref(v_env_1540_);
lean_dec(v___x_1538_);
v_isExporting_1541_ = lean_ctor_get_uint8(v_env_1540_, sizeof(void*)*13);
lean_dec_ref(v_env_1540_);
if (v_isExporting_1541_ == 0)
{
lean_object* v___x_1542_; 
v___x_1542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1542_, 0, v_res_1537_);
return v___x_1542_;
}
else
{
lean_object* v___x_1543_; 
v___x_1543_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__0(v_res_1537_);
if (lean_obj_tag(v___x_1543_) == 1)
{
lean_object* v_val_1544_; lean_object* v_fst_1545_; lean_object* v___x_1546_; 
v_val_1544_ = lean_ctor_get(v___x_1543_, 0);
lean_inc(v_val_1544_);
lean_dec_ref_known(v___x_1543_, 1);
v_fst_1545_ = lean_ctor_get(v_val_1544_, 0);
lean_inc(v_fst_1545_);
lean_dec(v_val_1544_);
v___x_1546_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1(v_fst_1545_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_);
if (lean_obj_tag(v___x_1546_) == 0)
{
lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1553_ == 0)
{
lean_object* v_unused_1554_; 
v_unused_1554_ = lean_ctor_get(v___x_1546_, 0);
lean_dec(v_unused_1554_);
v___x_1548_ = v___x_1546_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_dec(v___x_1546_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1549_ == 0)
{
lean_ctor_set(v___x_1548_, 0, v_res_1537_);
v___x_1551_ = v___x_1548_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_res_1537_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
else
{
lean_object* v_a_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1562_; 
lean_dec(v_res_1537_);
v_a_1555_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1557_ = v___x_1546_;
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_a_1555_);
lean_dec(v___x_1546_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
lean_object* v___x_1560_; 
if (v_isShared_1558_ == 0)
{
v___x_1560_ = v___x_1557_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v_a_1555_);
v___x_1560_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
return v___x_1560_;
}
}
}
}
else
{
lean_object* v___x_1563_; 
lean_dec(v___x_1543_);
v___x_1563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1563_, 0, v_res_1537_);
return v___x_1563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0___boxed(lean_object* v_id_1564_, lean_object* v_enableLog_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_){
_start:
{
uint8_t v_enableLog_boxed_1573_; lean_object* v_res_1574_; 
v_enableLog_boxed_1573_ = lean_unbox(v_enableLog_1565_);
v_res_1574_ = l_Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0(v_id_1564_, v_enableLog_boxed_1573_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_, v___y_1571_);
lean_dec(v___y_1571_);
lean_dec_ref(v___y_1570_);
lean_dec(v___y_1569_);
lean_dec_ref(v___y_1568_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__1(lean_object* v___y_1578_, uint8_t v___x_1579_, lean_object* v___x_1580_, lean_object* v_as_1581_, size_t v_sz_1582_, size_t v_i_1583_, lean_object* v_b_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v_a_1593_; uint8_t v___x_1597_; 
v___x_1597_ = lean_usize_dec_lt(v_i_1583_, v_sz_1582_);
if (v___x_1597_ == 0)
{
lean_object* v___x_1598_; 
v___x_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1598_, 0, v_b_1584_);
return v___x_1598_;
}
else
{
lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v_a_1601_; uint8_t v___y_1603_; uint8_t v___y_1604_; uint8_t v___y_1605_; uint8_t v___y_1613_; lean_object* v___x_1626_; 
lean_dec_ref(v_b_1584_);
v___x_1599_ = lean_box(0);
v___x_1600_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__1___closed__0));
v_a_1601_ = lean_array_uget_borrowed(v_as_1581_, v_i_1583_);
v___x_1626_ = l_Lean_LocalContext_findFromUserName_x3f(v___x_1580_, v_a_1601_);
if (lean_obj_tag(v___x_1626_) == 0)
{
uint8_t v___x_1627_; 
v___x_1627_ = 0;
v___y_1613_ = v___x_1627_;
goto v___jp_1612_;
}
else
{
lean_dec_ref_known(v___x_1626_, 1);
v___y_1613_ = v___x_1579_;
goto v___jp_1612_;
}
v___jp_1602_:
{
lean_object* v___x_1606_; uint8_t v___x_1607_; 
v___x_1606_ = l_Lean_Name_eraseMacroScopes(v_a_1601_);
v___x_1607_ = l_Lean_NameSet_contains(v___y_1578_, v___x_1606_);
lean_dec(v___x_1606_);
if (v___x_1607_ == 0)
{
if (v___y_1603_ == 0)
{
if (v___y_1605_ == 0)
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1608_ = lean_box(v___y_1604_);
v___x_1609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1608_);
v___x_1610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1609_);
lean_ctor_set(v___x_1610_, 1, v___x_1599_);
v___x_1611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1610_);
return v___x_1611_;
}
else
{
v_a_1593_ = v___x_1600_;
goto v___jp_1592_;
}
}
else
{
v_a_1593_ = v___x_1600_;
goto v___jp_1592_;
}
}
else
{
v_a_1593_ = v___x_1600_;
goto v___jp_1592_;
}
}
v___jp_1612_:
{
uint8_t v___x_1614_; lean_object* v___x_1615_; 
v___x_1614_ = 0;
lean_inc(v_a_1601_);
v___x_1615_ = l_Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0(v_a_1601_, v___x_1614_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_);
if (lean_obj_tag(v___x_1615_) == 0)
{
lean_object* v_a_1616_; uint8_t v___x_1617_; 
v_a_1616_ = lean_ctor_get(v___x_1615_, 0);
lean_inc(v_a_1616_);
lean_dec_ref_known(v___x_1615_, 1);
v___x_1617_ = l_List_isEmpty___redArg(v_a_1616_);
lean_dec(v_a_1616_);
if (v___x_1617_ == 0)
{
v___y_1603_ = v___y_1613_;
v___y_1604_ = v___x_1614_;
v___y_1605_ = v___x_1579_;
goto v___jp_1602_;
}
else
{
v___y_1603_ = v___y_1613_;
v___y_1604_ = v___x_1614_;
v___y_1605_ = v___x_1614_;
goto v___jp_1602_;
}
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1625_; 
v_a_1618_ = lean_ctor_get(v___x_1615_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1615_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1620_ = v___x_1615_;
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1615_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1623_; 
if (v_isShared_1621_ == 0)
{
v___x_1623_ = v___x_1620_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_a_1618_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
return v___x_1623_;
}
}
}
}
}
v___jp_1592_:
{
size_t v___x_1594_; size_t v___x_1595_; 
v___x_1594_ = ((size_t)1ULL);
v___x_1595_ = lean_usize_add(v_i_1583_, v___x_1594_);
lean_inc_ref(v_a_1593_);
v_i_1583_ = v___x_1595_;
v_b_1584_ = v_a_1593_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__1___boxed(lean_object* v___y_1628_, lean_object* v___x_1629_, lean_object* v___x_1630_, lean_object* v_as_1631_, lean_object* v_sz_1632_, lean_object* v_i_1633_, lean_object* v_b_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_){
_start:
{
uint8_t v___x_4269__boxed_1642_; size_t v_sz_boxed_1643_; size_t v_i_boxed_1644_; lean_object* v_res_1645_; 
v___x_4269__boxed_1642_ = lean_unbox(v___x_1629_);
v_sz_boxed_1643_ = lean_unbox_usize(v_sz_1632_);
lean_dec(v_sz_1632_);
v_i_boxed_1644_ = lean_unbox_usize(v_i_1633_);
lean_dec(v_i_1633_);
v_res_1645_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__1(v___y_1628_, v___x_4269__boxed_1642_, v___x_1630_, v_as_1631_, v_sz_boxed_1643_, v_i_boxed_1644_, v_b_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_);
lean_dec(v___y_1640_);
lean_dec_ref(v___y_1639_);
lean_dec(v___y_1638_);
lean_dec_ref(v___y_1637_);
lean_dec(v___y_1636_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v_as_1631_);
lean_dec_ref(v___x_1630_);
lean_dec(v___y_1628_);
return v_res_1645_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__2(lean_object* v_as_1646_, size_t v_i_1647_, size_t v_stop_1648_, lean_object* v_b_1649_){
_start:
{
uint8_t v___x_1650_; 
v___x_1650_ = lean_usize_dec_eq(v_i_1647_, v_stop_1648_);
if (v___x_1650_ == 0)
{
lean_object* v___x_1651_; lean_object* v_snd_1652_; lean_object* v___x_1653_; size_t v___x_1654_; size_t v___x_1655_; 
v___x_1651_ = lean_array_uget_borrowed(v_as_1646_, v_i_1647_);
v_snd_1652_ = lean_ctor_get(v___x_1651_, 1);
lean_inc(v_snd_1652_);
v___x_1653_ = l_Lean_NameSet_insert(v_b_1649_, v_snd_1652_);
v___x_1654_ = ((size_t)1ULL);
v___x_1655_ = lean_usize_add(v_i_1647_, v___x_1654_);
v_i_1647_ = v___x_1655_;
v_b_1649_ = v___x_1653_;
goto _start;
}
else
{
return v_b_1649_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__2___boxed(lean_object* v_as_1657_, lean_object* v_i_1658_, lean_object* v_stop_1659_, lean_object* v_b_1660_){
_start:
{
size_t v_i_boxed_1661_; size_t v_stop_boxed_1662_; lean_object* v_res_1663_; 
v_i_boxed_1661_ = lean_unbox_usize(v_i_1658_);
lean_dec(v_i_1658_);
v_stop_boxed_1662_ = lean_unbox_usize(v_stop_1659_);
lean_dec(v_stop_1659_);
v_res_1663_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__2(v_as_1657_, v_i_boxed_1661_, v_stop_boxed_1662_, v_b_1660_);
lean_dec_ref(v_as_1657_);
return v_res_1663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar(lean_object* v_quot_1664_, lean_object* v_extraBound_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_){
_start:
{
uint8_t v___x_1673_; 
lean_inc(v_quot_1664_);
v___x_1673_ = l_Lean_Elab_Term_Quotation_isCandidateBareExprQuot(v_quot_1664_);
if (v___x_1673_ == 0)
{
lean_object* v___x_1674_; lean_object* v___x_1675_; 
lean_dec(v_extraBound_1665_);
lean_dec(v_quot_1664_);
v___x_1674_ = lean_box(v___x_1673_);
v___x_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1674_);
return v___x_1675_;
}
else
{
lean_object* v___x_1676_; lean_object* v_body_1677_; lean_object* v___y_1679_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; uint8_t v___x_1711_; 
v___x_1676_ = lean_unsigned_to_nat(1u);
v_body_1677_ = l_Lean_Syntax_getArg(v_quot_1664_, v___x_1676_);
lean_dec(v_quot_1664_);
lean_inc(v_body_1677_);
v___x_1708_ = l_Lean_Elab_Term_Quotation_collectNamedSyntaxHoles(v_body_1677_);
v___x_1709_ = lean_unsigned_to_nat(0u);
v___x_1710_ = lean_array_get_size(v___x_1708_);
v___x_1711_ = lean_nat_dec_lt(v___x_1709_, v___x_1710_);
if (v___x_1711_ == 0)
{
lean_dec_ref(v___x_1708_);
v___y_1679_ = v_extraBound_1665_;
goto v___jp_1678_;
}
else
{
size_t v___x_1712_; size_t v___x_1713_; lean_object* v___x_1714_; 
v___x_1712_ = ((size_t)0ULL);
v___x_1713_ = lean_usize_of_nat(v___x_1710_);
v___x_1714_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__2(v___x_1708_, v___x_1712_, v___x_1713_, v_extraBound_1665_);
lean_dec_ref(v___x_1708_);
v___y_1679_ = v___x_1714_;
goto v___jp_1678_;
}
v___jp_1678_:
{
lean_object* v_lctx_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; size_t v_sz_1683_; size_t v___x_1684_; lean_object* v___x_1685_; 
v_lctx_1680_ = lean_ctor_get(v_a_1668_, 2);
v___x_1681_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_collectUnescapedIdentAntiquots(v_body_1677_);
v___x_1682_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__1___closed__0));
v_sz_1683_ = lean_array_size(v___x_1681_);
v___x_1684_ = ((size_t)0ULL);
v___x_1685_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__1(v___y_1679_, v___x_1673_, v_lctx_1680_, v___x_1681_, v_sz_1683_, v___x_1684_, v___x_1682_, v_a_1666_, v_a_1667_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_);
lean_dec_ref(v___x_1681_);
lean_dec(v___y_1679_);
if (lean_obj_tag(v___x_1685_) == 0)
{
lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1699_; 
v_a_1686_ = lean_ctor_get(v___x_1685_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1688_ = v___x_1685_;
v_isShared_1689_ = v_isSharedCheck_1699_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_dec(v___x_1685_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1699_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v_fst_1690_; 
v_fst_1690_ = lean_ctor_get(v_a_1686_, 0);
lean_inc(v_fst_1690_);
lean_dec(v_a_1686_);
if (lean_obj_tag(v_fst_1690_) == 0)
{
lean_object* v___x_1691_; lean_object* v___x_1693_; 
v___x_1691_ = lean_box(v___x_1673_);
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 0, v___x_1691_);
v___x_1693_ = v___x_1688_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v___x_1691_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
}
}
else
{
lean_object* v_val_1695_; lean_object* v___x_1697_; 
v_val_1695_ = lean_ctor_get(v_fst_1690_, 0);
lean_inc(v_val_1695_);
lean_dec_ref_known(v_fst_1690_, 1);
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 0, v_val_1695_);
v___x_1697_ = v___x_1688_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v_val_1695_);
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
v_a_1700_ = lean_ctor_get(v___x_1685_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1702_ = v___x_1685_;
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_a_1700_);
lean_dec(v___x_1685_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar___boxed(lean_object* v_quot_1715_, lean_object* v_extraBound_1716_, lean_object* v_a_1717_, lean_object* v_a_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l_Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar(v_quot_1715_, v_extraBound_1716_, v_a_1717_, v_a_1718_, v_a_1719_, v_a_1720_, v_a_1721_, v_a_1722_);
lean_dec(v_a_1722_);
lean_dec_ref(v_a_1721_);
lean_dec(v_a_1720_);
lean_dec_ref(v_a_1719_);
lean_dec(v_a_1718_);
lean_dec_ref(v_a_1717_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__2(lean_object* v_opt_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_){
_start:
{
lean_object* v___x_1733_; 
v___x_1733_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__2___redArg(v_opt_1725_, v___y_1730_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__2___boxed(lean_object* v_opt_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_){
_start:
{
lean_object* v_res_1742_; 
v_res_1742_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__2(v_opt_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec_ref(v_opt_1734_);
return v_res_1742_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3_spec__6(lean_object* v_msgData_1743_, uint8_t v_severity_1744_, uint8_t v_isSilent_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_){
_start:
{
lean_object* v___x_1753_; 
v___x_1753_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3_spec__6___redArg(v_msgData_1743_, v_severity_1744_, v_isSilent_1745_, v___y_1748_, v___y_1749_, v___y_1750_, v___y_1751_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3_spec__6___boxed(lean_object* v_msgData_1754_, lean_object* v_severity_1755_, lean_object* v_isSilent_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_){
_start:
{
uint8_t v_severity_boxed_1764_; uint8_t v_isSilent_boxed_1765_; lean_object* v_res_1766_; 
v_severity_boxed_1764_ = lean_unbox(v_severity_1755_);
v_isSilent_boxed_1765_ = lean_unbox(v_isSilent_1756_);
v_res_1766_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00Lean_Elab_Term_Quotation_couldBeBareExprQuotOnMVar_spec__0_spec__1_spec__3_spec__6(v_msgData_1754_, v_severity_boxed_1764_, v_isSilent_boxed_1765_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_);
lean_dec(v___y_1762_);
lean_dec_ref(v___y_1761_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
return v_res_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_ctorIdx___impl(uint8_t v_x_1767_){
_start:
{
lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1768_ = lean_box(v_x_1767_);
v___x_1769_ = lean_obj_tag_nat(v___x_1768_);
lean_dec(v___x_1768_);
return v___x_1769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_ctorIdx___impl___boxed(lean_object* v_x_1770_){
_start:
{
uint8_t v_x_4__boxed_1771_; lean_object* v_res_1772_; 
v_x_4__boxed_1771_ = lean_unbox(v_x_1770_);
v_res_1772_ = l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_ctorIdx___impl(v_x_4__boxed_1771_);
return v_res_1772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_ctorElim___redArg(lean_object* v_k_1773_){
_start:
{
lean_inc(v_k_1773_);
return v_k_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_ctorElim___redArg___boxed(lean_object* v_k_1774_){
_start:
{
lean_object* v_res_1775_; 
v_res_1775_ = l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_ctorElim___redArg(v_k_1774_);
lean_dec(v_k_1774_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_ctorElim(lean_object* v_motive_1776_, lean_object* v_ctorIdx_1777_, uint8_t v_t_1778_, lean_object* v_h_1779_, lean_object* v_k_1780_){
_start:
{
lean_inc(v_k_1780_);
return v_k_1780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_ctorElim___boxed(lean_object* v_motive_1781_, lean_object* v_ctorIdx_1782_, lean_object* v_t_1783_, lean_object* v_h_1784_, lean_object* v_k_1785_){
_start:
{
uint8_t v_t_boxed_1786_; lean_object* v_res_1787_; 
v_t_boxed_1786_ = lean_unbox(v_t_1783_);
v_res_1787_ = l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_ctorElim(v_motive_1781_, v_ctorIdx_1782_, v_t_boxed_1786_, v_h_1784_, v_k_1785_);
lean_dec(v_k_1785_);
lean_dec(v_ctorIdx_1782_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isExpr_elim___redArg(lean_object* v_isExpr_1788_){
_start:
{
lean_inc(v_isExpr_1788_);
return v_isExpr_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isExpr_elim___redArg___boxed(lean_object* v_isExpr_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isExpr_elim___redArg(v_isExpr_1789_);
lean_dec(v_isExpr_1789_);
return v_res_1790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isExpr_elim(lean_object* v_motive_1791_, uint8_t v_t_1792_, lean_object* v_h_1793_, lean_object* v_isExpr_1794_){
_start:
{
lean_inc(v_isExpr_1794_);
return v_isExpr_1794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isExpr_elim___boxed(lean_object* v_motive_1795_, lean_object* v_t_1796_, lean_object* v_h_1797_, lean_object* v_isExpr_1798_){
_start:
{
uint8_t v_t_boxed_1799_; lean_object* v_res_1800_; 
v_t_boxed_1799_ = lean_unbox(v_t_1796_);
v_res_1800_ = l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isExpr_elim(v_motive_1795_, v_t_boxed_1799_, v_h_1797_, v_isExpr_1798_);
lean_dec(v_isExpr_1798_);
return v_res_1800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isMVar_elim___redArg(lean_object* v_isMVar_1801_){
_start:
{
lean_inc(v_isMVar_1801_);
return v_isMVar_1801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isMVar_elim___redArg___boxed(lean_object* v_isMVar_1802_){
_start:
{
lean_object* v_res_1803_; 
v_res_1803_ = l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isMVar_elim___redArg(v_isMVar_1802_);
lean_dec(v_isMVar_1802_);
return v_res_1803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isMVar_elim(lean_object* v_motive_1804_, uint8_t v_t_1805_, lean_object* v_h_1806_, lean_object* v_isMVar_1807_){
_start:
{
lean_inc(v_isMVar_1807_);
return v_isMVar_1807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isMVar_elim___boxed(lean_object* v_motive_1808_, lean_object* v_t_1809_, lean_object* v_h_1810_, lean_object* v_isMVar_1811_){
_start:
{
uint8_t v_t_boxed_1812_; lean_object* v_res_1813_; 
v_t_boxed_1812_ = lean_unbox(v_t_1809_);
v_res_1813_ = l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_isMVar_elim(v_motive_1808_, v_t_boxed_1812_, v_h_1810_, v_isMVar_1811_);
lean_dec(v_isMVar_1811_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_other_elim___redArg(lean_object* v_other_1814_){
_start:
{
lean_inc(v_other_1814_);
return v_other_1814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_other_elim___redArg___boxed(lean_object* v_other_1815_){
_start:
{
lean_object* v_res_1816_; 
v_res_1816_ = l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_other_elim___redArg(v_other_1815_);
lean_dec(v_other_1815_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_other_elim(lean_object* v_motive_1817_, uint8_t v_t_1818_, lean_object* v_h_1819_, lean_object* v_other_1820_){
_start:
{
lean_inc(v_other_1820_);
return v_other_1820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_other_elim___boxed(lean_object* v_motive_1821_, lean_object* v_t_1822_, lean_object* v_h_1823_, lean_object* v_other_1824_){
_start:
{
uint8_t v_t_boxed_1825_; lean_object* v_res_1826_; 
v_t_boxed_1825_ = lean_unbox(v_t_1822_);
v_res_1826_ = l_Lean_Elab_Term_Quotation_QuotDiscrTypeClass_other_elim(v_motive_1821_, v_t_boxed_1825_, v_h_1823_, v_other_1824_);
lean_dec(v_other_1824_);
return v_res_1826_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_Quotation_instBEqQuotDiscrTypeClass_beq(uint8_t v_x_1827_, uint8_t v_y_1828_){
_start:
{
lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; uint8_t v___x_1833_; 
v___x_1829_ = lean_box(v_x_1827_);
v___x_1830_ = lean_obj_tag_nat(v___x_1829_);
lean_dec(v___x_1829_);
v___x_1831_ = lean_box(v_y_1828_);
v___x_1832_ = lean_obj_tag_nat(v___x_1831_);
lean_dec(v___x_1831_);
v___x_1833_ = lean_nat_dec_eq(v___x_1830_, v___x_1832_);
return v___x_1833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_instBEqQuotDiscrTypeClass_beq___boxed(lean_object* v_x_1834_, lean_object* v_y_1835_){
_start:
{
uint8_t v_x_24__boxed_1836_; uint8_t v_y_25__boxed_1837_; uint8_t v_res_1838_; lean_object* v_r_1839_; 
v_x_24__boxed_1836_ = lean_unbox(v_x_1834_);
v_y_25__boxed_1837_ = lean_unbox(v_y_1835_);
v_res_1838_ = l_Lean_Elab_Term_Quotation_instBEqQuotDiscrTypeClass_beq(v_x_24__boxed_1836_, v_y_25__boxed_1837_);
v_r_1839_ = lean_box(v_res_1838_);
return v_r_1839_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead(lean_object* v_ty_1850_){
_start:
{
lean_object* v___x_1851_; uint8_t v___x_1852_; 
v___x_1851_ = ((lean_object*)(l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__1));
v___x_1852_ = l_Lean_Expr_isConstOf(v_ty_1850_, v___x_1851_);
if (v___x_1852_ == 0)
{
lean_object* v___x_1853_; lean_object* v___x_1854_; uint8_t v___x_1855_; 
v___x_1853_ = l_Lean_Expr_getAppFn(v_ty_1850_);
v___x_1854_ = ((lean_object*)(l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___closed__3));
v___x_1855_ = l_Lean_Expr_isConstOf(v___x_1853_, v___x_1854_);
lean_dec_ref(v___x_1853_);
return v___x_1855_;
}
else
{
return v___x_1852_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead___boxed(lean_object* v_ty_1856_){
_start:
{
uint8_t v_res_1857_; lean_object* v_r_1858_; 
v_res_1857_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead(v_ty_1856_);
lean_dec_ref(v_ty_1856_);
v_r_1858_ = lean_box(v_res_1857_);
return v_r_1858_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0(lean_object* v_x_1863_){
_start:
{
lean_object* v___x_1864_; uint8_t v___x_1865_; 
v___x_1864_ = ((lean_object*)(l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0___closed__1));
v___x_1865_ = l_Lean_Expr_isConstOf(v_x_1863_, v___x_1864_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0___boxed(lean_object* v_x_1866_){
_start:
{
uint8_t v_res_1867_; lean_object* v_r_1868_; 
v_res_1867_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0(v_x_1866_);
lean_dec_ref(v_x_1866_);
v_r_1868_ = lean_box(v_res_1867_);
return v_r_1868_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__0___redArg(lean_object* v_k_1869_, lean_object* v_t_1870_){
_start:
{
if (lean_obj_tag(v_t_1870_) == 0)
{
lean_object* v_k_1871_; lean_object* v_l_1872_; lean_object* v_r_1873_; uint8_t v___x_1874_; 
v_k_1871_ = lean_ctor_get(v_t_1870_, 1);
v_l_1872_ = lean_ctor_get(v_t_1870_, 3);
v_r_1873_ = lean_ctor_get(v_t_1870_, 4);
v___x_1874_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1869_, v_k_1871_);
switch(v___x_1874_)
{
case 0:
{
v_t_1870_ = v_l_1872_;
goto _start;
}
case 1:
{
uint8_t v___x_1876_; 
v___x_1876_ = 1;
return v___x_1876_;
}
default: 
{
v_t_1870_ = v_r_1873_;
goto _start;
}
}
}
else
{
uint8_t v___x_1878_; 
v___x_1878_ = 0;
return v___x_1878_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__0___redArg___boxed(lean_object* v_k_1879_, lean_object* v_t_1880_){
_start:
{
uint8_t v_res_1881_; lean_object* v_r_1882_; 
v_res_1881_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__0___redArg(v_k_1879_, v_t_1880_);
lean_dec(v_t_1880_);
lean_dec(v_k_1879_);
v_r_1882_ = lean_box(v_res_1881_);
return v_r_1882_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__1(lean_object* v_depDiscrFVars_1883_, lean_object* v_e_1884_){
_start:
{
uint8_t v___x_1885_; lean_object* v_d_1887_; lean_object* v_b_1888_; 
v___x_1885_ = l_Lean_Expr_hasFVar(v_e_1884_);
if (v___x_1885_ == 0)
{
return v___x_1885_;
}
else
{
switch(lean_obj_tag(v_e_1884_))
{
case 7:
{
lean_object* v_binderType_1891_; lean_object* v_body_1892_; 
v_binderType_1891_ = lean_ctor_get(v_e_1884_, 1);
v_body_1892_ = lean_ctor_get(v_e_1884_, 2);
v_d_1887_ = v_binderType_1891_;
v_b_1888_ = v_body_1892_;
goto v___jp_1886_;
}
case 6:
{
lean_object* v_binderType_1893_; lean_object* v_body_1894_; 
v_binderType_1893_ = lean_ctor_get(v_e_1884_, 1);
v_body_1894_ = lean_ctor_get(v_e_1884_, 2);
v_d_1887_ = v_binderType_1893_;
v_b_1888_ = v_body_1894_;
goto v___jp_1886_;
}
case 10:
{
lean_object* v_expr_1895_; 
v_expr_1895_ = lean_ctor_get(v_e_1884_, 1);
v_e_1884_ = v_expr_1895_;
goto _start;
}
case 8:
{
lean_object* v_type_1897_; lean_object* v_value_1898_; lean_object* v_body_1899_; uint8_t v___x_1900_; 
v_type_1897_ = lean_ctor_get(v_e_1884_, 1);
v_value_1898_ = lean_ctor_get(v_e_1884_, 2);
v_body_1899_ = lean_ctor_get(v_e_1884_, 3);
v___x_1900_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__1(v_depDiscrFVars_1883_, v_type_1897_);
if (v___x_1900_ == 0)
{
uint8_t v___x_1901_; 
v___x_1901_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__1(v_depDiscrFVars_1883_, v_value_1898_);
if (v___x_1901_ == 0)
{
v_e_1884_ = v_body_1899_;
goto _start;
}
else
{
return v___x_1885_;
}
}
else
{
return v___x_1885_;
}
}
case 5:
{
lean_object* v_fn_1903_; lean_object* v_arg_1904_; uint8_t v___x_1905_; 
v_fn_1903_ = lean_ctor_get(v_e_1884_, 0);
v_arg_1904_ = lean_ctor_get(v_e_1884_, 1);
v___x_1905_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__1(v_depDiscrFVars_1883_, v_fn_1903_);
if (v___x_1905_ == 0)
{
v_e_1884_ = v_arg_1904_;
goto _start;
}
else
{
return v___x_1885_;
}
}
case 11:
{
lean_object* v_struct_1907_; 
v_struct_1907_ = lean_ctor_get(v_e_1884_, 2);
v_e_1884_ = v_struct_1907_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_1909_; uint8_t v___x_1910_; 
v_fvarId_1909_ = lean_ctor_get(v_e_1884_, 0);
v___x_1910_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__0___redArg(v_fvarId_1909_, v_depDiscrFVars_1883_);
return v___x_1910_;
}
default: 
{
uint8_t v___x_1911_; 
v___x_1911_ = 0;
return v___x_1911_;
}
}
}
v___jp_1886_:
{
uint8_t v___x_1889_; 
v___x_1889_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__1(v_depDiscrFVars_1883_, v_d_1887_);
if (v___x_1889_ == 0)
{
v_e_1884_ = v_b_1888_;
goto _start;
}
else
{
return v___x_1885_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__1___boxed(lean_object* v_depDiscrFVars_1912_, lean_object* v_e_1913_){
_start:
{
uint8_t v_res_1914_; lean_object* v_r_1915_; 
v_res_1914_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__1(v_depDiscrFVars_1912_, v_e_1913_);
lean_dec_ref(v_e_1913_);
lean_dec(v_depDiscrFVars_1912_);
v_r_1915_ = lean_box(v_res_1914_);
return v_r_1915_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg(lean_object* v_ty_1917_, lean_object* v_depDiscrFVars_1918_, lean_object* v_a_1919_){
_start:
{
if (lean_obj_tag(v_depDiscrFVars_1918_) == 0)
{
uint8_t v___x_1925_; 
v___x_1925_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_isSyntaxTypeHead(v_ty_1917_);
if (v___x_1925_ == 0)
{
uint8_t v___x_1926_; 
v___x_1926_ = l_Lean_Expr_isForall(v_ty_1917_);
if (v___x_1926_ == 0)
{
lean_object* v___f_1927_; lean_object* v___x_1944_; 
v___f_1927_ = ((lean_object*)(l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___closed__0));
v___x_1944_ = l_Lean_Expr_getAppFn(v_ty_1917_);
if (lean_obj_tag(v___x_1944_) == 4)
{
lean_object* v_declName_1945_; lean_object* v___x_1946_; lean_object* v_env_1947_; lean_object* v___x_1948_; 
v_declName_1945_ = lean_ctor_get(v___x_1944_, 0);
lean_inc(v_declName_1945_);
lean_dec_ref_known(v___x_1944_, 2);
v___x_1946_ = lean_st_ref_get(v_a_1919_);
v_env_1947_ = lean_ctor_get(v___x_1946_, 0);
lean_inc_ref(v_env_1947_);
lean_dec(v___x_1946_);
v___x_1948_ = l_Lean_Environment_find_x3f(v_env_1947_, v_declName_1945_, v___x_1926_);
if (lean_obj_tag(v___x_1948_) == 1)
{
lean_object* v_val_1949_; 
v_val_1949_ = lean_ctor_get(v___x_1948_, 0);
lean_inc(v_val_1949_);
lean_dec_ref_known(v___x_1948_, 1);
if (lean_obj_tag(v_val_1949_) == 5)
{
lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1957_; 
v_isSharedCheck_1957_ = !lean_is_exclusive(v_val_1949_);
if (v_isSharedCheck_1957_ == 0)
{
lean_object* v_unused_1958_; 
v_unused_1958_ = lean_ctor_get(v_val_1949_, 0);
lean_dec(v_unused_1958_);
v___x_1951_ = v_val_1949_;
v_isShared_1952_ = v_isSharedCheck_1957_;
goto v_resetjp_1950_;
}
else
{
lean_dec(v_val_1949_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1957_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v___x_1953_; lean_object* v___x_1955_; 
v___x_1953_ = lean_box(v___x_1926_);
if (v_isShared_1952_ == 0)
{
lean_ctor_set_tag(v___x_1951_, 0);
lean_ctor_set(v___x_1951_, 0, v___x_1953_);
v___x_1955_ = v___x_1951_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v___x_1953_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
else
{
lean_dec(v_val_1949_);
goto v___jp_1928_;
}
}
else
{
lean_dec(v___x_1948_);
goto v___jp_1928_;
}
}
else
{
lean_dec_ref(v___x_1944_);
goto v___jp_1928_;
}
v___jp_1928_:
{
uint8_t v___x_1929_; 
v___x_1929_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__1(v_depDiscrFVars_1918_, v_ty_1917_);
if (v___x_1929_ == 0)
{
lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1930_ = lean_box(v___x_1926_);
v___x_1931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1930_);
return v___x_1931_;
}
else
{
lean_object* v___x_1932_; 
v___x_1932_ = lean_find_expr(v___f_1927_, v_ty_1917_);
if (lean_obj_tag(v___x_1932_) == 0)
{
lean_object* v___x_1933_; lean_object* v___x_1934_; 
v___x_1933_ = lean_box(v___x_1926_);
v___x_1934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1934_, 0, v___x_1933_);
return v___x_1934_;
}
else
{
lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1942_; 
v_isSharedCheck_1942_ = !lean_is_exclusive(v___x_1932_);
if (v_isSharedCheck_1942_ == 0)
{
lean_object* v_unused_1943_; 
v_unused_1943_ = lean_ctor_get(v___x_1932_, 0);
lean_dec(v_unused_1943_);
v___x_1936_ = v___x_1932_;
v_isShared_1937_ = v_isSharedCheck_1942_;
goto v_resetjp_1935_;
}
else
{
lean_dec(v___x_1932_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1942_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1938_; lean_object* v___x_1940_; 
v___x_1938_ = lean_box(v___x_1929_);
if (v_isShared_1937_ == 0)
{
lean_ctor_set_tag(v___x_1936_, 0);
lean_ctor_set(v___x_1936_, 0, v___x_1938_);
v___x_1940_ = v___x_1936_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v___x_1938_);
v___x_1940_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
return v___x_1940_;
}
}
}
}
}
}
else
{
goto v___jp_1921_;
}
}
else
{
goto v___jp_1921_;
}
}
else
{
goto v___jp_1921_;
}
v___jp_1921_:
{
uint8_t v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
v___x_1922_ = 0;
v___x_1923_ = lean_box(v___x_1922_);
v___x_1924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1923_);
return v___x_1924_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___boxed(lean_object* v_ty_1959_, lean_object* v_depDiscrFVars_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg(v_ty_1959_, v_depDiscrFVars_1960_, v_a_1961_);
lean_dec(v_a_1961_);
lean_dec(v_depDiscrFVars_1960_);
lean_dec_ref(v_ty_1959_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType(lean_object* v_ty_1964_, lean_object* v_depDiscrFVars_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_, lean_object* v_a_1969_){
_start:
{
lean_object* v___x_1971_; 
v___x_1971_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg(v_ty_1964_, v_depDiscrFVars_1965_, v_a_1969_);
return v___x_1971_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___boxed(lean_object* v_ty_1972_, lean_object* v_depDiscrFVars_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_, lean_object* v_a_1978_){
_start:
{
lean_object* v_res_1979_; 
v_res_1979_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType(v_ty_1972_, v_depDiscrFVars_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_);
lean_dec(v_a_1977_);
lean_dec_ref(v_a_1976_);
lean_dec(v_a_1975_);
lean_dec_ref(v_a_1974_);
lean_dec(v_depDiscrFVars_1973_);
lean_dec_ref(v_ty_1972_);
return v_res_1979_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__0(lean_object* v_00_u03b2_1980_, lean_object* v_k_1981_, lean_object* v_t_1982_){
_start:
{
uint8_t v___x_1983_; 
v___x_1983_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__0___redArg(v_k_1981_, v_t_1982_);
return v___x_1983_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__0___boxed(lean_object* v_00_u03b2_1984_, lean_object* v_k_1985_, lean_object* v_t_1986_){
_start:
{
uint8_t v_res_1987_; lean_object* v_r_1988_; 
v_res_1987_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType_spec__0(v_00_u03b2_1984_, v_k_1985_, v_t_1986_);
lean_dec(v_t_1986_);
lean_dec(v_k_1985_);
v_r_1988_ = lean_box(v_res_1987_);
return v_r_1988_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType_spec__0___redArg(lean_object* v_e_1989_, lean_object* v___y_1990_){
_start:
{
uint8_t v___x_1992_; 
v___x_1992_ = l_Lean_Expr_hasMVar(v_e_1989_);
if (v___x_1992_ == 0)
{
lean_object* v___x_1993_; 
v___x_1993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1993_, 0, v_e_1989_);
return v___x_1993_;
}
else
{
lean_object* v___x_1994_; lean_object* v_mctx_1995_; lean_object* v___x_1996_; lean_object* v_fst_1997_; lean_object* v_snd_1998_; lean_object* v___x_1999_; lean_object* v_cache_2000_; lean_object* v_zetaDeltaFVarIds_2001_; lean_object* v_postponed_2002_; lean_object* v_diag_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2012_; 
v___x_1994_ = lean_st_ref_get(v___y_1990_);
v_mctx_1995_ = lean_ctor_get(v___x_1994_, 0);
lean_inc_ref(v_mctx_1995_);
lean_dec(v___x_1994_);
v___x_1996_ = l_Lean_instantiateMVarsCore(v_mctx_1995_, v_e_1989_);
v_fst_1997_ = lean_ctor_get(v___x_1996_, 0);
lean_inc(v_fst_1997_);
v_snd_1998_ = lean_ctor_get(v___x_1996_, 1);
lean_inc(v_snd_1998_);
lean_dec_ref(v___x_1996_);
v___x_1999_ = lean_st_ref_take(v___y_1990_);
v_cache_2000_ = lean_ctor_get(v___x_1999_, 1);
v_zetaDeltaFVarIds_2001_ = lean_ctor_get(v___x_1999_, 2);
v_postponed_2002_ = lean_ctor_get(v___x_1999_, 3);
v_diag_2003_ = lean_ctor_get(v___x_1999_, 4);
v_isSharedCheck_2012_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2012_ == 0)
{
lean_object* v_unused_2013_; 
v_unused_2013_ = lean_ctor_get(v___x_1999_, 0);
lean_dec(v_unused_2013_);
v___x_2005_ = v___x_1999_;
v_isShared_2006_ = v_isSharedCheck_2012_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_diag_2003_);
lean_inc(v_postponed_2002_);
lean_inc(v_zetaDeltaFVarIds_2001_);
lean_inc(v_cache_2000_);
lean_dec(v___x_1999_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2012_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v___x_2008_; 
if (v_isShared_2006_ == 0)
{
lean_ctor_set(v___x_2005_, 0, v_snd_1998_);
v___x_2008_ = v___x_2005_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v_snd_1998_);
lean_ctor_set(v_reuseFailAlloc_2011_, 1, v_cache_2000_);
lean_ctor_set(v_reuseFailAlloc_2011_, 2, v_zetaDeltaFVarIds_2001_);
lean_ctor_set(v_reuseFailAlloc_2011_, 3, v_postponed_2002_);
lean_ctor_set(v_reuseFailAlloc_2011_, 4, v_diag_2003_);
v___x_2008_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2009_ = lean_st_ref_put(v___y_1990_, v___x_2008_);
v___x_2010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2010_, 0, v_fst_1997_);
return v___x_2010_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType_spec__0___redArg___boxed(lean_object* v_e_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_){
_start:
{
lean_object* v_res_2017_; 
v_res_2017_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType_spec__0___redArg(v_e_2014_, v___y_2015_);
lean_dec(v___y_2015_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType_spec__0(lean_object* v_e_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_){
_start:
{
lean_object* v___x_2024_; 
v___x_2024_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType_spec__0___redArg(v_e_2018_, v___y_2020_);
return v___x_2024_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType_spec__0___boxed(lean_object* v_e_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType_spec__0(v_e_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_);
lean_dec(v___y_2029_);
lean_dec_ref(v___y_2028_);
lean_dec(v___y_2027_);
lean_dec_ref(v___y_2026_);
return v_res_2031_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType(lean_object* v_rawTy_2032_, lean_object* v_depDiscrFVars_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_, lean_object* v_a_2037_){
_start:
{
lean_object* v___x_2039_; lean_object* v_a_2040_; lean_object* v___x_2041_; 
v___x_2039_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType_spec__0___redArg(v_rawTy_2032_, v_a_2035_);
v_a_2040_ = lean_ctor_get(v___x_2039_, 0);
lean_inc(v_a_2040_);
lean_dec_ref(v___x_2039_);
lean_inc(v_a_2037_);
lean_inc_ref(v_a_2036_);
lean_inc(v_a_2035_);
lean_inc_ref(v_a_2034_);
v___x_2041_ = lean_whnf(v_a_2040_, v_a_2034_, v_a_2035_, v_a_2036_, v_a_2037_);
if (lean_obj_tag(v___x_2041_) == 0)
{
lean_object* v_a_2042_; lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2077_; 
v_a_2042_ = lean_ctor_get(v___x_2041_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_2041_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2044_ = v___x_2041_;
v_isShared_2045_ = v_isSharedCheck_2077_;
goto v_resetjp_2043_;
}
else
{
lean_inc(v_a_2042_);
lean_dec(v___x_2041_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2077_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v___x_2046_; uint8_t v___x_2047_; 
v___x_2046_ = ((lean_object*)(l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg___lam__0___closed__1));
v___x_2047_ = l_Lean_Expr_isConstOf(v_a_2042_, v___x_2046_);
if (v___x_2047_ == 0)
{
lean_object* v___x_2048_; uint8_t v___x_2049_; 
v___x_2048_ = l_Lean_Expr_getAppFn(v_a_2042_);
v___x_2049_ = l_Lean_Expr_isMVar(v___x_2048_);
lean_dec_ref(v___x_2048_);
if (v___x_2049_ == 0)
{
lean_object* v___x_2050_; lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2066_; 
lean_del_object(v___x_2044_);
v___x_2050_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_hasNonInductDepExprType___redArg(v_a_2042_, v_depDiscrFVars_2033_, v_a_2037_);
lean_dec(v_a_2042_);
v_a_2051_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2066_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2066_ == 0)
{
v___x_2053_ = v___x_2050_;
v_isShared_2054_ = v_isSharedCheck_2066_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2050_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2066_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
uint8_t v___x_2055_; 
v___x_2055_ = lean_unbox(v_a_2051_);
lean_dec(v_a_2051_);
if (v___x_2055_ == 0)
{
uint8_t v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2059_; 
v___x_2056_ = 2;
v___x_2057_ = lean_box(v___x_2056_);
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 0, v___x_2057_);
v___x_2059_ = v___x_2053_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v___x_2057_);
v___x_2059_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
return v___x_2059_;
}
}
else
{
uint8_t v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2064_; 
v___x_2061_ = 0;
v___x_2062_ = lean_box(v___x_2061_);
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 0, v___x_2062_);
v___x_2064_ = v___x_2053_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v___x_2062_);
v___x_2064_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
return v___x_2064_;
}
}
}
}
else
{
uint8_t v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2070_; 
lean_dec(v_a_2042_);
v___x_2067_ = 1;
v___x_2068_ = lean_box(v___x_2067_);
if (v_isShared_2045_ == 0)
{
lean_ctor_set(v___x_2044_, 0, v___x_2068_);
v___x_2070_ = v___x_2044_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v___x_2068_);
v___x_2070_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
return v___x_2070_;
}
}
}
else
{
uint8_t v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2075_; 
lean_dec(v_a_2042_);
v___x_2072_ = 0;
v___x_2073_ = lean_box(v___x_2072_);
if (v_isShared_2045_ == 0)
{
lean_ctor_set(v___x_2044_, 0, v___x_2073_);
v___x_2075_ = v___x_2044_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v___x_2073_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
}
else
{
lean_object* v_a_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2085_; 
v_a_2078_ = lean_ctor_get(v___x_2041_, 0);
v_isSharedCheck_2085_ = !lean_is_exclusive(v___x_2041_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2080_ = v___x_2041_;
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_a_2078_);
lean_dec(v___x_2041_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2083_; 
if (v_isShared_2081_ == 0)
{
v___x_2083_ = v___x_2080_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v_a_2078_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType___boxed(lean_object* v_rawTy_2086_, lean_object* v_depDiscrFVars_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_){
_start:
{
lean_object* v_res_2093_; 
v_res_2093_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType(v_rawTy_2086_, v_depDiscrFVars_2087_, v_a_2088_, v_a_2089_, v_a_2090_, v_a_2091_);
lean_dec(v_a_2091_);
lean_dec_ref(v_a_2090_);
lean_dec(v_a_2089_);
lean_dec_ref(v_a_2088_);
lean_dec(v_depDiscrFVars_2087_);
return v_res_2093_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0___redArg___lam__0(lean_object* v_b_2094_, lean_object* v_x_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2103_, 0, v_b_2094_);
v___x_2104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2103_);
return v___x_2104_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0___redArg___lam__0___boxed(lean_object* v_b_2105_, lean_object* v_x_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_){
_start:
{
lean_object* v_res_2114_; 
v_res_2114_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0___redArg___lam__0(v_b_2105_, v_x_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_);
lean_dec(v___y_2112_);
lean_dec_ref(v___y_2111_);
lean_dec(v___y_2110_);
lean_dec_ref(v___y_2109_);
lean_dec(v___y_2108_);
lean_dec_ref(v___y_2107_);
lean_dec(v_x_2106_);
return v_res_2114_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0___redArg(lean_object* v_upperBound_2115_, lean_object* v_excludeCol_2116_, lean_object* v_discrs_2117_, lean_object* v___x_2118_, lean_object* v_a_2119_, lean_object* v_b_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_){
_start:
{
lean_object* v_a_2129_; lean_object* v___y_2134_; uint8_t v___x_2153_; 
v___x_2153_ = lean_nat_dec_lt(v_a_2119_, v_upperBound_2115_);
if (v___x_2153_ == 0)
{
lean_object* v___x_2154_; 
lean_dec(v_a_2119_);
v___x_2154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2154_, 0, v_b_2120_);
return v___x_2154_;
}
else
{
uint8_t v___x_2155_; 
v___x_2155_ = lean_nat_dec_eq(v_a_2119_, v_excludeCol_2116_);
if (v___x_2155_ == 0)
{
lean_object* v___x_2156_; 
v___x_2156_ = lean_array_fget_borrowed(v_discrs_2117_, v_a_2119_);
if (lean_obj_tag(v___x_2156_) == 3)
{
lean_object* v_preresolved_2157_; 
v_preresolved_2157_ = lean_ctor_get(v___x_2156_, 3);
if (lean_obj_tag(v_preresolved_2157_) == 0)
{
lean_object* v_val_2158_; uint8_t v___x_2159_; 
v_val_2158_ = lean_ctor_get(v___x_2156_, 2);
v___x_2159_ = l_Lean_Name_isAnonymous(v_val_2158_);
if (v___x_2159_ == 0)
{
lean_object* v___x_2160_; 
v___x_2160_ = l_Lean_LocalContext_findFromUserName_x3f(v___x_2118_, v_val_2158_);
if (lean_obj_tag(v___x_2160_) == 1)
{
lean_object* v_val_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; 
v_val_2161_ = lean_ctor_get(v___x_2160_, 0);
lean_inc(v_val_2161_);
lean_dec_ref_known(v___x_2160_, 1);
v___x_2162_ = l_Lean_LocalDecl_fvarId(v_val_2161_);
lean_dec(v_val_2161_);
v___x_2163_ = l_Lean_FVarIdSet_insert(v_b_2120_, v___x_2162_);
v_a_2129_ = v___x_2163_;
goto v___jp_2128_;
}
else
{
lean_dec(v___x_2160_);
v_a_2129_ = v_b_2120_;
goto v___jp_2128_;
}
}
else
{
v_a_2129_ = v_b_2120_;
goto v___jp_2128_;
}
}
else
{
lean_object* v___x_2164_; 
v___x_2164_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0___redArg___lam__0(v_b_2120_, v___x_2156_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_);
v___y_2134_ = v___x_2164_;
goto v___jp_2133_;
}
}
else
{
lean_object* v___x_2165_; 
v___x_2165_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0___redArg___lam__0(v_b_2120_, v___x_2156_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_);
v___y_2134_ = v___x_2165_;
goto v___jp_2133_;
}
}
else
{
v_a_2129_ = v_b_2120_;
goto v___jp_2128_;
}
}
v___jp_2128_:
{
lean_object* v___x_2130_; lean_object* v___x_2131_; 
v___x_2130_ = lean_unsigned_to_nat(1u);
v___x_2131_ = lean_nat_add(v_a_2119_, v___x_2130_);
lean_dec(v_a_2119_);
v_a_2119_ = v___x_2131_;
v_b_2120_ = v_a_2129_;
goto _start;
}
v___jp_2133_:
{
if (lean_obj_tag(v___y_2134_) == 0)
{
lean_object* v_a_2135_; lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2144_; 
v_a_2135_ = lean_ctor_get(v___y_2134_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___y_2134_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2137_ = v___y_2134_;
v_isShared_2138_ = v_isSharedCheck_2144_;
goto v_resetjp_2136_;
}
else
{
lean_inc(v_a_2135_);
lean_dec(v___y_2134_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2144_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
if (lean_obj_tag(v_a_2135_) == 0)
{
lean_object* v_a_2139_; lean_object* v___x_2141_; 
lean_dec(v_a_2119_);
v_a_2139_ = lean_ctor_get(v_a_2135_, 0);
lean_inc(v_a_2139_);
lean_dec_ref_known(v_a_2135_, 1);
if (v_isShared_2138_ == 0)
{
lean_ctor_set(v___x_2137_, 0, v_a_2139_);
v___x_2141_ = v___x_2137_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v_a_2139_);
v___x_2141_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
return v___x_2141_;
}
}
else
{
lean_object* v_a_2143_; 
lean_del_object(v___x_2137_);
v_a_2143_ = lean_ctor_get(v_a_2135_, 0);
lean_inc(v_a_2143_);
lean_dec_ref_known(v_a_2135_, 1);
v_a_2129_ = v_a_2143_;
goto v___jp_2128_;
}
}
}
else
{
lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2152_; 
lean_dec(v_a_2119_);
v_a_2145_ = lean_ctor_get(v___y_2134_, 0);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___y_2134_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2147_ = v___y_2134_;
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___y_2134_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2150_; 
if (v_isShared_2148_ == 0)
{
v___x_2150_ = v___x_2147_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_a_2145_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0___redArg___boxed(lean_object* v_upperBound_2166_, lean_object* v_excludeCol_2167_, lean_object* v_discrs_2168_, lean_object* v___x_2169_, lean_object* v_a_2170_, lean_object* v_b_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_){
_start:
{
lean_object* v_res_2179_; 
v_res_2179_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0___redArg(v_upperBound_2166_, v_excludeCol_2167_, v_discrs_2168_, v___x_2169_, v_a_2170_, v_b_2171_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_);
lean_dec(v___y_2177_);
lean_dec_ref(v___y_2176_);
lean_dec(v___y_2175_);
lean_dec_ref(v___y_2174_);
lean_dec(v___y_2173_);
lean_dec_ref(v___y_2172_);
lean_dec_ref(v___x_2169_);
lean_dec_ref(v_discrs_2168_);
lean_dec(v_excludeCol_2167_);
lean_dec(v_upperBound_2166_);
return v_res_2179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_collectOtherDiscrFVars(lean_object* v_discrs_2180_, lean_object* v_excludeCol_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_, lean_object* v_a_2187_){
_start:
{
lean_object* v_lctx_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; 
v_lctx_2189_ = lean_ctor_get(v_a_2184_, 2);
v___x_2190_ = lean_box(1);
v___x_2191_ = lean_array_get_size(v_discrs_2180_);
v___x_2192_ = lean_unsigned_to_nat(0u);
v___x_2193_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0___redArg(v___x_2191_, v_excludeCol_2181_, v_discrs_2180_, v_lctx_2189_, v___x_2192_, v___x_2190_, v_a_2182_, v_a_2183_, v_a_2184_, v_a_2185_, v_a_2186_, v_a_2187_);
return v___x_2193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_collectOtherDiscrFVars___boxed(lean_object* v_discrs_2194_, lean_object* v_excludeCol_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_){
_start:
{
lean_object* v_res_2203_; 
v_res_2203_ = l_Lean_Elab_Term_Quotation_collectOtherDiscrFVars(v_discrs_2194_, v_excludeCol_2195_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_, v_a_2200_, v_a_2201_);
lean_dec(v_a_2201_);
lean_dec_ref(v_a_2200_);
lean_dec(v_a_2199_);
lean_dec_ref(v_a_2198_);
lean_dec(v_a_2197_);
lean_dec_ref(v_a_2196_);
lean_dec(v_excludeCol_2195_);
lean_dec_ref(v_discrs_2194_);
return v_res_2203_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0(lean_object* v_upperBound_2204_, lean_object* v_excludeCol_2205_, lean_object* v_discrs_2206_, lean_object* v___x_2207_, lean_object* v_inst_2208_, lean_object* v_R_2209_, lean_object* v_a_2210_, lean_object* v_b_2211_, lean_object* v_c_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_){
_start:
{
lean_object* v___x_2220_; 
v___x_2220_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0___redArg(v_upperBound_2204_, v_excludeCol_2205_, v_discrs_2206_, v___x_2207_, v_a_2210_, v_b_2211_, v___y_2213_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_);
return v___x_2220_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0___boxed(lean_object* v_upperBound_2221_, lean_object* v_excludeCol_2222_, lean_object* v_discrs_2223_, lean_object* v___x_2224_, lean_object* v_inst_2225_, lean_object* v_R_2226_, lean_object* v_a_2227_, lean_object* v_b_2228_, lean_object* v_c_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_){
_start:
{
lean_object* v_res_2237_; 
v_res_2237_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Term_Quotation_collectOtherDiscrFVars_spec__0(v_upperBound_2221_, v_excludeCol_2222_, v_discrs_2223_, v___x_2224_, v_inst_2225_, v_R_2226_, v_a_2227_, v_b_2228_, v_c_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_);
lean_dec(v___y_2235_);
lean_dec_ref(v___y_2234_);
lean_dec(v___y_2233_);
lean_dec_ref(v___y_2232_);
lean_dec(v___y_2231_);
lean_dec_ref(v___y_2230_);
lean_dec_ref(v___x_2224_);
lean_dec_ref(v_discrs_2223_);
lean_dec(v_excludeCol_2222_);
lean_dec(v_upperBound_2221_);
return v_res_2237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__0___redArg(lean_object* v_a_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v___x_2246_; 
v___x_2246_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__0___redArg___boxed(lean_object* v_a_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_){
_start:
{
lean_object* v_res_2255_; 
v_res_2255_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__0___redArg(v_a_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_);
lean_dec(v___y_2253_);
lean_dec_ref(v___y_2252_);
lean_dec(v___y_2251_);
lean_dec_ref(v___y_2250_);
lean_dec(v___y_2249_);
lean_dec_ref(v___y_2248_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__0(lean_object* v_00_u03b1_2256_, lean_object* v_a_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_){
_start:
{
lean_object* v___x_2265_; 
v___x_2265_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_2257_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_, v___y_2262_, v___y_2263_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__0___boxed(lean_object* v_00_u03b1_2266_, lean_object* v_a_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_){
_start:
{
lean_object* v_res_2275_; 
v_res_2275_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__0(v_00_u03b1_2266_, v_a_2267_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_);
lean_dec(v___y_2273_);
lean_dec_ref(v___y_2272_);
lean_dec(v___y_2271_);
lean_dec_ref(v___y_2270_);
lean_dec(v___y_2269_);
lean_dec_ref(v___y_2268_);
return v_res_2275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent___lam__0(lean_object* v_discr_2276_, lean_object* v___x_2277_, uint8_t v___x_2278_, lean_object* v_depDiscrFVars_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_){
_start:
{
lean_object* v___x_2287_; 
v___x_2287_ = l_Lean_Elab_Term_elabTerm(v_discr_2276_, v___x_2277_, v___x_2278_, v___x_2278_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_);
if (lean_obj_tag(v___x_2287_) == 0)
{
lean_object* v_a_2288_; lean_object* v___x_2289_; 
v_a_2288_ = lean_ctor_get(v___x_2287_, 0);
lean_inc(v_a_2288_);
lean_dec_ref_known(v___x_2287_, 1);
v___x_2289_ = l_Lean_Core_getMessageLog___redArg(v___y_2285_);
if (lean_obj_tag(v___x_2289_) == 0)
{
lean_object* v_a_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2311_; 
v_a_2290_ = lean_ctor_get(v___x_2289_, 0);
v_isSharedCheck_2311_ = !lean_is_exclusive(v___x_2289_);
if (v_isSharedCheck_2311_ == 0)
{
v___x_2292_ = v___x_2289_;
v_isShared_2293_ = v_isSharedCheck_2311_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_a_2290_);
lean_dec(v___x_2289_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2311_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
uint8_t v___x_2294_; 
v___x_2294_ = l_Lean_MessageLog_hasErrors(v_a_2290_);
lean_dec(v_a_2290_);
if (v___x_2294_ == 0)
{
lean_object* v___x_2295_; 
lean_del_object(v___x_2292_);
lean_inc(v___y_2285_);
lean_inc_ref(v___y_2284_);
lean_inc(v___y_2283_);
lean_inc_ref(v___y_2282_);
v___x_2295_ = lean_infer_type(v_a_2288_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_);
if (lean_obj_tag(v___x_2295_) == 0)
{
lean_object* v_a_2296_; lean_object* v___x_2297_; 
v_a_2296_ = lean_ctor_get(v___x_2295_, 0);
lean_inc(v_a_2296_);
lean_dec_ref_known(v___x_2295_, 1);
v___x_2297_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType(v_a_2296_, v_depDiscrFVars_2279_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_);
lean_dec(v___y_2285_);
lean_dec_ref(v___y_2284_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
return v___x_2297_;
}
else
{
lean_object* v_a_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2305_; 
lean_dec(v___y_2285_);
lean_dec_ref(v___y_2284_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
v_a_2298_ = lean_ctor_get(v___x_2295_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2295_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2300_ = v___x_2295_;
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_a_2298_);
lean_dec(v___x_2295_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2303_; 
if (v_isShared_2301_ == 0)
{
v___x_2303_ = v___x_2300_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v_a_2298_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
}
else
{
uint8_t v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2309_; 
lean_dec(v_a_2288_);
lean_dec(v___y_2285_);
lean_dec_ref(v___y_2284_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
v___x_2306_ = 2;
v___x_2307_ = lean_box(v___x_2306_);
if (v_isShared_2293_ == 0)
{
lean_ctor_set(v___x_2292_, 0, v___x_2307_);
v___x_2309_ = v___x_2292_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v___x_2307_);
v___x_2309_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
return v___x_2309_;
}
}
}
}
else
{
lean_object* v_a_2312_; lean_object* v___x_2314_; uint8_t v_isShared_2315_; uint8_t v_isSharedCheck_2319_; 
lean_dec(v_a_2288_);
lean_dec(v___y_2285_);
lean_dec_ref(v___y_2284_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
v_a_2312_ = lean_ctor_get(v___x_2289_, 0);
v_isSharedCheck_2319_ = !lean_is_exclusive(v___x_2289_);
if (v_isSharedCheck_2319_ == 0)
{
v___x_2314_ = v___x_2289_;
v_isShared_2315_ = v_isSharedCheck_2319_;
goto v_resetjp_2313_;
}
else
{
lean_inc(v_a_2312_);
lean_dec(v___x_2289_);
v___x_2314_ = lean_box(0);
v_isShared_2315_ = v_isSharedCheck_2319_;
goto v_resetjp_2313_;
}
v_resetjp_2313_:
{
lean_object* v___x_2317_; 
if (v_isShared_2315_ == 0)
{
v___x_2317_ = v___x_2314_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v_a_2312_);
v___x_2317_ = v_reuseFailAlloc_2318_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
return v___x_2317_;
}
}
}
}
else
{
lean_object* v_a_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2327_; 
lean_dec(v___y_2285_);
lean_dec_ref(v___y_2284_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
v_a_2320_ = lean_ctor_get(v___x_2287_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2287_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2322_ = v___x_2287_;
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_a_2320_);
lean_dec(v___x_2287_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2325_; 
if (v_isShared_2323_ == 0)
{
v___x_2325_ = v___x_2322_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_a_2320_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent___lam__0___boxed(lean_object* v_discr_2328_, lean_object* v___x_2329_, lean_object* v___x_2330_, lean_object* v_depDiscrFVars_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_){
_start:
{
uint8_t v___x_9714__boxed_2339_; lean_object* v_res_2340_; 
v___x_9714__boxed_2339_ = lean_unbox(v___x_2330_);
v_res_2340_ = l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent___lam__0(v_discr_2328_, v___x_2329_, v___x_9714__boxed_2339_, v_depDiscrFVars_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
lean_dec(v_depDiscrFVars_2331_);
return v_res_2340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1_spec__1___redArg(uint8_t v_flag_2341_, lean_object* v___y_2342_){
_start:
{
lean_object* v___x_2344_; lean_object* v_infoState_2345_; lean_object* v_env_2346_; lean_object* v_nextMacroScope_2347_; lean_object* v_ngen_2348_; lean_object* v_auxDeclNGen_2349_; lean_object* v_traceState_2350_; lean_object* v_cache_2351_; lean_object* v_recordedDeps_2352_; lean_object* v_messages_2353_; lean_object* v_snapshotTasks_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2374_; 
v___x_2344_ = lean_st_ref_take(v___y_2342_);
v_infoState_2345_ = lean_ctor_get(v___x_2344_, 8);
v_env_2346_ = lean_ctor_get(v___x_2344_, 0);
v_nextMacroScope_2347_ = lean_ctor_get(v___x_2344_, 1);
v_ngen_2348_ = lean_ctor_get(v___x_2344_, 2);
v_auxDeclNGen_2349_ = lean_ctor_get(v___x_2344_, 3);
v_traceState_2350_ = lean_ctor_get(v___x_2344_, 4);
v_cache_2351_ = lean_ctor_get(v___x_2344_, 5);
v_recordedDeps_2352_ = lean_ctor_get(v___x_2344_, 6);
v_messages_2353_ = lean_ctor_get(v___x_2344_, 7);
v_snapshotTasks_2354_ = lean_ctor_get(v___x_2344_, 9);
v_isSharedCheck_2374_ = !lean_is_exclusive(v___x_2344_);
if (v_isSharedCheck_2374_ == 0)
{
v___x_2356_ = v___x_2344_;
v_isShared_2357_ = v_isSharedCheck_2374_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_snapshotTasks_2354_);
lean_inc(v_infoState_2345_);
lean_inc(v_messages_2353_);
lean_inc(v_recordedDeps_2352_);
lean_inc(v_cache_2351_);
lean_inc(v_traceState_2350_);
lean_inc(v_auxDeclNGen_2349_);
lean_inc(v_ngen_2348_);
lean_inc(v_nextMacroScope_2347_);
lean_inc(v_env_2346_);
lean_dec(v___x_2344_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2374_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v_assignment_2358_; lean_object* v_lazyAssignment_2359_; lean_object* v_trees_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2373_; 
v_assignment_2358_ = lean_ctor_get(v_infoState_2345_, 0);
v_lazyAssignment_2359_ = lean_ctor_get(v_infoState_2345_, 1);
v_trees_2360_ = lean_ctor_get(v_infoState_2345_, 2);
v_isSharedCheck_2373_ = !lean_is_exclusive(v_infoState_2345_);
if (v_isSharedCheck_2373_ == 0)
{
v___x_2362_ = v_infoState_2345_;
v_isShared_2363_ = v_isSharedCheck_2373_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_trees_2360_);
lean_inc(v_lazyAssignment_2359_);
lean_inc(v_assignment_2358_);
lean_dec(v_infoState_2345_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2373_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v___x_2364_; lean_object* v___x_2366_; 
v___x_2364_ = lean_box(0);
if (v_isShared_2363_ == 0)
{
v___x_2366_ = v___x_2362_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v_assignment_2358_);
lean_ctor_set(v_reuseFailAlloc_2372_, 1, v_lazyAssignment_2359_);
lean_ctor_set(v_reuseFailAlloc_2372_, 2, v_trees_2360_);
v___x_2366_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
lean_object* v___x_2368_; 
lean_ctor_set_uint8(v___x_2366_, sizeof(void*)*3, v_flag_2341_);
if (v_isShared_2357_ == 0)
{
lean_ctor_set(v___x_2356_, 8, v___x_2366_);
v___x_2368_ = v___x_2356_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_env_2346_);
lean_ctor_set(v_reuseFailAlloc_2371_, 1, v_nextMacroScope_2347_);
lean_ctor_set(v_reuseFailAlloc_2371_, 2, v_ngen_2348_);
lean_ctor_set(v_reuseFailAlloc_2371_, 3, v_auxDeclNGen_2349_);
lean_ctor_set(v_reuseFailAlloc_2371_, 4, v_traceState_2350_);
lean_ctor_set(v_reuseFailAlloc_2371_, 5, v_cache_2351_);
lean_ctor_set(v_reuseFailAlloc_2371_, 6, v_recordedDeps_2352_);
lean_ctor_set(v_reuseFailAlloc_2371_, 7, v_messages_2353_);
lean_ctor_set(v_reuseFailAlloc_2371_, 8, v___x_2366_);
lean_ctor_set(v_reuseFailAlloc_2371_, 9, v_snapshotTasks_2354_);
v___x_2368_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; 
v___x_2369_ = lean_st_ref_put(v___y_2342_, v___x_2368_);
v___x_2370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2370_, 0, v___x_2364_);
return v___x_2370_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1_spec__1___redArg___boxed(lean_object* v_flag_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_){
_start:
{
uint8_t v_flag_boxed_2378_; lean_object* v_res_2379_; 
v_flag_boxed_2378_ = lean_unbox(v_flag_2375_);
v_res_2379_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1_spec__1___redArg(v_flag_boxed_2378_, v___y_2376_);
lean_dec(v___y_2376_);
return v_res_2379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1___redArg(uint8_t v_flag_2380_, lean_object* v_x_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_){
_start:
{
lean_object* v___x_2389_; lean_object* v_infoState_2390_; uint8_t v_enabled_2391_; lean_object* v_a_2393_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___x_2389_ = lean_st_ref_get(v___y_2387_);
v_infoState_2390_ = lean_ctor_get(v___x_2389_, 8);
lean_inc_ref(v_infoState_2390_);
lean_dec(v___x_2389_);
v_enabled_2391_ = lean_ctor_get_uint8(v_infoState_2390_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2390_);
v___x_2403_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1_spec__1___redArg(v_flag_2380_, v___y_2387_);
lean_dec_ref(v___x_2403_);
lean_inc(v___y_2387_);
lean_inc_ref(v___y_2386_);
lean_inc(v___y_2385_);
lean_inc_ref(v___y_2384_);
lean_inc(v___y_2383_);
lean_inc_ref(v___y_2382_);
v___x_2404_ = lean_apply_7(v_x_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_, lean_box(0));
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_object* v_a_2405_; lean_object* v___x_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2413_; 
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_a_2405_);
lean_dec_ref_known(v___x_2404_, 1);
v___x_2406_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1_spec__1___redArg(v_enabled_2391_, v___y_2387_);
v_isSharedCheck_2413_ = !lean_is_exclusive(v___x_2406_);
if (v_isSharedCheck_2413_ == 0)
{
lean_object* v_unused_2414_; 
v_unused_2414_ = lean_ctor_get(v___x_2406_, 0);
lean_dec(v_unused_2414_);
v___x_2408_ = v___x_2406_;
v_isShared_2409_ = v_isSharedCheck_2413_;
goto v_resetjp_2407_;
}
else
{
lean_dec(v___x_2406_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2413_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___x_2411_; 
if (v_isShared_2409_ == 0)
{
lean_ctor_set(v___x_2408_, 0, v_a_2405_);
v___x_2411_ = v___x_2408_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v_a_2405_);
v___x_2411_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
return v___x_2411_;
}
}
}
else
{
lean_object* v_a_2415_; 
v_a_2415_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_a_2415_);
lean_dec_ref_known(v___x_2404_, 1);
v_a_2393_ = v_a_2415_;
goto v___jp_2392_;
}
v___jp_2392_:
{
lean_object* v___x_2394_; lean_object* v___x_2396_; uint8_t v_isShared_2397_; uint8_t v_isSharedCheck_2401_; 
v___x_2394_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1_spec__1___redArg(v_enabled_2391_, v___y_2387_);
v_isSharedCheck_2401_ = !lean_is_exclusive(v___x_2394_);
if (v_isSharedCheck_2401_ == 0)
{
lean_object* v_unused_2402_; 
v_unused_2402_ = lean_ctor_get(v___x_2394_, 0);
lean_dec(v_unused_2402_);
v___x_2396_ = v___x_2394_;
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
else
{
lean_dec(v___x_2394_);
v___x_2396_ = lean_box(0);
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
v_resetjp_2395_:
{
lean_object* v___x_2399_; 
if (v_isShared_2397_ == 0)
{
lean_ctor_set_tag(v___x_2396_, 1);
lean_ctor_set(v___x_2396_, 0, v_a_2393_);
v___x_2399_ = v___x_2396_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v_a_2393_);
v___x_2399_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
return v___x_2399_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1___redArg___boxed(lean_object* v_flag_2416_, lean_object* v_x_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_){
_start:
{
uint8_t v_flag_boxed_2425_; lean_object* v_res_2426_; 
v_flag_boxed_2425_ = lean_unbox(v_flag_2416_);
v_res_2426_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1___redArg(v_flag_boxed_2425_, v_x_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_);
lean_dec(v___y_2423_);
lean_dec_ref(v___y_2422_);
lean_dec(v___y_2421_);
lean_dec_ref(v___y_2420_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent(lean_object* v_discr_2430_, lean_object* v_depDiscrFVars_2431_, lean_object* v_a_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_, lean_object* v_a_2437_){
_start:
{
lean_object* v___y_2440_; lean_object* v___y_2441_; lean_object* v_a_2442_; lean_object* v___y_2461_; lean_object* v___y_2462_; lean_object* v_a_2463_; lean_object* v___y_2483_; lean_object* v___y_2484_; lean_object* v_a_2485_; lean_object* v___y_2494_; lean_object* v___y_2495_; lean_object* v___y_2496_; lean_object* v___y_2497_; lean_object* v___y_2498_; lean_object* v___y_2499_; 
if (lean_obj_tag(v_discr_2430_) == 3)
{
lean_object* v_preresolved_2529_; 
v_preresolved_2529_ = lean_ctor_get(v_discr_2430_, 3);
if (lean_obj_tag(v_preresolved_2529_) == 0)
{
lean_object* v_val_2530_; uint8_t v___x_2531_; 
v_val_2530_ = lean_ctor_get(v_discr_2430_, 2);
v___x_2531_ = l_Lean_Name_isAnonymous(v_val_2530_);
if (v___x_2531_ == 0)
{
lean_object* v_lctx_2532_; lean_object* v___x_2533_; 
v_lctx_2532_ = lean_ctor_get(v_a_2434_, 2);
v___x_2533_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_2532_, v_val_2530_);
if (lean_obj_tag(v___x_2533_) == 1)
{
lean_object* v_val_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
lean_dec_ref_known(v_discr_2430_, 4);
v_val_2534_ = lean_ctor_get(v___x_2533_, 0);
lean_inc(v_val_2534_);
lean_dec_ref_known(v___x_2533_, 1);
v___x_2535_ = l_Lean_LocalDecl_type(v_val_2534_);
lean_dec(v_val_2534_);
v___x_2536_ = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_classifyRawDiscrType(v___x_2535_, v_depDiscrFVars_2431_, v_a_2434_, v_a_2435_, v_a_2436_, v_a_2437_);
lean_dec(v_depDiscrFVars_2431_);
if (lean_obj_tag(v___x_2536_) == 0)
{
return v___x_2536_;
}
else
{
lean_object* v_a_2537_; uint8_t v___x_2538_; 
v_a_2537_ = lean_ctor_get(v___x_2536_, 0);
v___x_2538_ = l_Lean_Exception_isInterrupt(v_a_2537_);
if (v___x_2538_ == 0)
{
uint8_t v___x_2539_; 
lean_inc(v_a_2537_);
v___x_2539_ = l_Lean_Exception_isRuntime(v_a_2537_);
if (v___x_2539_ == 0)
{
if (lean_obj_tag(v_a_2537_) == 1)
{
return v___x_2536_;
}
else
{
lean_object* v___x_2541_; uint8_t v_isShared_2542_; uint8_t v_isSharedCheck_2548_; 
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2536_);
if (v_isSharedCheck_2548_ == 0)
{
lean_object* v_unused_2549_; 
v_unused_2549_ = lean_ctor_get(v___x_2536_, 0);
lean_dec(v_unused_2549_);
v___x_2541_ = v___x_2536_;
v_isShared_2542_ = v_isSharedCheck_2548_;
goto v_resetjp_2540_;
}
else
{
lean_dec(v___x_2536_);
v___x_2541_ = lean_box(0);
v_isShared_2542_ = v_isSharedCheck_2548_;
goto v_resetjp_2540_;
}
v_resetjp_2540_:
{
uint8_t v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2546_; 
v___x_2543_ = 2;
v___x_2544_ = lean_box(v___x_2543_);
if (v_isShared_2542_ == 0)
{
lean_ctor_set_tag(v___x_2541_, 0);
lean_ctor_set(v___x_2541_, 0, v___x_2544_);
v___x_2546_ = v___x_2541_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v___x_2544_);
v___x_2546_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
return v___x_2546_;
}
}
}
}
else
{
return v___x_2536_;
}
}
else
{
return v___x_2536_;
}
}
}
else
{
lean_dec(v___x_2533_);
v___y_2494_ = v_a_2432_;
v___y_2495_ = v_a_2433_;
v___y_2496_ = v_a_2434_;
v___y_2497_ = v_a_2435_;
v___y_2498_ = v_a_2436_;
v___y_2499_ = v_a_2437_;
goto v___jp_2493_;
}
}
else
{
v___y_2494_ = v_a_2432_;
v___y_2495_ = v_a_2433_;
v___y_2496_ = v_a_2434_;
v___y_2497_ = v_a_2435_;
v___y_2498_ = v_a_2436_;
v___y_2499_ = v_a_2437_;
goto v___jp_2493_;
}
}
else
{
v___y_2494_ = v_a_2432_;
v___y_2495_ = v_a_2433_;
v___y_2496_ = v_a_2434_;
v___y_2497_ = v_a_2435_;
v___y_2498_ = v_a_2436_;
v___y_2499_ = v_a_2437_;
goto v___jp_2493_;
}
}
else
{
v___y_2494_ = v_a_2432_;
v___y_2495_ = v_a_2433_;
v___y_2496_ = v_a_2434_;
v___y_2497_ = v_a_2435_;
v___y_2498_ = v_a_2436_;
v___y_2499_ = v_a_2437_;
goto v___jp_2493_;
}
v___jp_2439_:
{
lean_object* v___x_2443_; 
v___x_2443_ = l_Lean_Core_setMessageLog___redArg(v___y_2441_, v___y_2440_);
if (lean_obj_tag(v___x_2443_) == 0)
{
lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2450_; 
v_isSharedCheck_2450_ = !lean_is_exclusive(v___x_2443_);
if (v_isSharedCheck_2450_ == 0)
{
lean_object* v_unused_2451_; 
v_unused_2451_ = lean_ctor_get(v___x_2443_, 0);
lean_dec(v_unused_2451_);
v___x_2445_ = v___x_2443_;
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
else
{
lean_dec(v___x_2443_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v___x_2448_; 
if (v_isShared_2446_ == 0)
{
lean_ctor_set_tag(v___x_2445_, 1);
lean_ctor_set(v___x_2445_, 0, v_a_2442_);
v___x_2448_ = v___x_2445_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2449_; 
v_reuseFailAlloc_2449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2449_, 0, v_a_2442_);
v___x_2448_ = v_reuseFailAlloc_2449_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
return v___x_2448_;
}
}
}
else
{
lean_object* v_a_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2459_; 
lean_dec_ref(v_a_2442_);
v_a_2452_ = lean_ctor_get(v___x_2443_, 0);
v_isSharedCheck_2459_ = !lean_is_exclusive(v___x_2443_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2454_ = v___x_2443_;
v_isShared_2455_ = v_isSharedCheck_2459_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_a_2452_);
lean_dec(v___x_2443_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2459_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v___x_2457_; 
if (v_isShared_2455_ == 0)
{
v___x_2457_ = v___x_2454_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_a_2452_);
v___x_2457_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
return v___x_2457_;
}
}
}
}
v___jp_2460_:
{
lean_object* v___x_2464_; 
v___x_2464_ = l_Lean_Core_setMessageLog___redArg(v___y_2462_, v___y_2461_);
if (lean_obj_tag(v___x_2464_) == 0)
{
lean_object* v___x_2466_; uint8_t v_isShared_2467_; uint8_t v_isSharedCheck_2472_; 
v_isSharedCheck_2472_ = !lean_is_exclusive(v___x_2464_);
if (v_isSharedCheck_2472_ == 0)
{
lean_object* v_unused_2473_; 
v_unused_2473_ = lean_ctor_get(v___x_2464_, 0);
lean_dec(v_unused_2473_);
v___x_2466_ = v___x_2464_;
v_isShared_2467_ = v_isSharedCheck_2472_;
goto v_resetjp_2465_;
}
else
{
lean_dec(v___x_2464_);
v___x_2466_ = lean_box(0);
v_isShared_2467_ = v_isSharedCheck_2472_;
goto v_resetjp_2465_;
}
v_resetjp_2465_:
{
lean_object* v_a_2468_; lean_object* v___x_2470_; 
v_a_2468_ = lean_ctor_get(v_a_2463_, 0);
lean_inc(v_a_2468_);
lean_dec_ref(v_a_2463_);
if (v_isShared_2467_ == 0)
{
lean_ctor_set(v___x_2466_, 0, v_a_2468_);
v___x_2470_ = v___x_2466_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_a_2468_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
}
else
{
lean_object* v_a_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2481_; 
lean_dec_ref(v_a_2463_);
v_a_2474_ = lean_ctor_get(v___x_2464_, 0);
v_isSharedCheck_2481_ = !lean_is_exclusive(v___x_2464_);
if (v_isSharedCheck_2481_ == 0)
{
v___x_2476_ = v___x_2464_;
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_a_2474_);
lean_dec(v___x_2464_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
lean_object* v___x_2479_; 
if (v_isShared_2477_ == 0)
{
v___x_2479_ = v___x_2476_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v_a_2474_);
v___x_2479_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
return v___x_2479_;
}
}
}
}
v___jp_2482_:
{
uint8_t v___x_2486_; 
v___x_2486_ = l_Lean_Exception_isInterrupt(v_a_2485_);
if (v___x_2486_ == 0)
{
uint8_t v___x_2487_; 
lean_inc_ref(v_a_2485_);
v___x_2487_ = l_Lean_Exception_isRuntime(v_a_2485_);
if (v___x_2487_ == 0)
{
if (lean_obj_tag(v_a_2485_) == 1)
{
lean_object* v_id_2488_; lean_object* v___x_2489_; uint8_t v___x_2490_; 
v_id_2488_ = lean_ctor_get(v_a_2485_, 0);
v___x_2489_ = l_Lean_Elab_postponeExceptionId;
v___x_2490_ = l_Lean_instBEqInternalExceptionId_beq(v_id_2488_, v___x_2489_);
if (v___x_2490_ == 0)
{
lean_object* v___x_2491_; 
lean_dec_ref_known(v_a_2485_, 2);
v___x_2491_ = ((lean_object*)(l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent___closed__0));
v___y_2461_ = v___y_2483_;
v___y_2462_ = v___y_2484_;
v_a_2463_ = v___x_2491_;
goto v___jp_2460_;
}
else
{
v___y_2440_ = v___y_2483_;
v___y_2441_ = v___y_2484_;
v_a_2442_ = v_a_2485_;
goto v___jp_2439_;
}
}
else
{
lean_object* v___x_2492_; 
lean_dec_ref(v_a_2485_);
v___x_2492_ = ((lean_object*)(l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent___closed__0));
v___y_2461_ = v___y_2483_;
v___y_2462_ = v___y_2484_;
v_a_2463_ = v___x_2492_;
goto v___jp_2460_;
}
}
else
{
v___y_2440_ = v___y_2483_;
v___y_2441_ = v___y_2484_;
v_a_2442_ = v_a_2485_;
goto v___jp_2439_;
}
}
else
{
v___y_2440_ = v___y_2483_;
v___y_2441_ = v___y_2484_;
v_a_2442_ = v_a_2485_;
goto v___jp_2439_;
}
}
v___jp_2493_:
{
lean_object* v___x_2500_; 
v___x_2500_ = l_Lean_Core_getMessageLog___redArg(v___y_2499_);
if (lean_obj_tag(v___x_2500_) == 0)
{
lean_object* v_a_2501_; lean_object* v___x_2502_; 
v_a_2501_ = lean_ctor_get(v___x_2500_, 0);
lean_inc(v_a_2501_);
lean_dec_ref_known(v___x_2500_, 1);
v___x_2502_ = l_Lean_Core_resetMessageLog___redArg(v___y_2499_);
if (lean_obj_tag(v___x_2502_) == 0)
{
uint8_t v___x_2503_; lean_object* v___x_2504_; uint8_t v___x_2505_; lean_object* v___x_2506_; lean_object* v___f_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
lean_dec_ref_known(v___x_2502_, 1);
v___x_2503_ = 0;
v___x_2504_ = lean_box(0);
v___x_2505_ = 1;
v___x_2506_ = lean_box(v___x_2505_);
v___f_2507_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent___lam__0___boxed), 11, 4);
lean_closure_set(v___f_2507_, 0, v_discr_2430_);
lean_closure_set(v___f_2507_, 1, v___x_2504_);
lean_closure_set(v___f_2507_, 2, v___x_2506_);
lean_closure_set(v___f_2507_, 3, v_depDiscrFVars_2431_);
v___x_2508_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__0___boxed), 9, 2);
lean_closure_set(v___x_2508_, 0, lean_box(0));
lean_closure_set(v___x_2508_, 1, v___f_2507_);
v___x_2509_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___boxed), 9, 2);
lean_closure_set(v___x_2509_, 0, lean_box(0));
lean_closure_set(v___x_2509_, 1, v___x_2508_);
v___x_2510_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1___redArg(v___x_2503_, v___x_2509_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_);
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v_a_2511_; lean_object* v___x_2513_; uint8_t v_isShared_2514_; uint8_t v_isSharedCheck_2518_; 
v_a_2511_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2518_ == 0)
{
v___x_2513_ = v___x_2510_;
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
else
{
lean_inc(v_a_2511_);
lean_dec(v___x_2510_);
v___x_2513_ = lean_box(0);
v_isShared_2514_ = v_isSharedCheck_2518_;
goto v_resetjp_2512_;
}
v_resetjp_2512_:
{
lean_object* v___x_2516_; 
if (v_isShared_2514_ == 0)
{
lean_ctor_set_tag(v___x_2513_, 1);
v___x_2516_ = v___x_2513_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v_a_2511_);
v___x_2516_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
v___y_2461_ = v___y_2499_;
v___y_2462_ = v_a_2501_;
v_a_2463_ = v___x_2516_;
goto v___jp_2460_;
}
}
}
else
{
lean_object* v_a_2519_; 
v_a_2519_ = lean_ctor_get(v___x_2510_, 0);
lean_inc(v_a_2519_);
lean_dec_ref_known(v___x_2510_, 1);
v___y_2483_ = v___y_2499_;
v___y_2484_ = v_a_2501_;
v_a_2485_ = v_a_2519_;
goto v___jp_2482_;
}
}
else
{
lean_object* v_a_2520_; 
lean_dec(v_depDiscrFVars_2431_);
lean_dec(v_discr_2430_);
v_a_2520_ = lean_ctor_get(v___x_2502_, 0);
lean_inc(v_a_2520_);
lean_dec_ref_known(v___x_2502_, 1);
v___y_2483_ = v___y_2499_;
v___y_2484_ = v_a_2501_;
v_a_2485_ = v_a_2520_;
goto v___jp_2482_;
}
}
else
{
lean_object* v_a_2521_; lean_object* v___x_2523_; uint8_t v_isShared_2524_; uint8_t v_isSharedCheck_2528_; 
lean_dec(v_depDiscrFVars_2431_);
lean_dec(v_discr_2430_);
v_a_2521_ = lean_ctor_get(v___x_2500_, 0);
v_isSharedCheck_2528_ = !lean_is_exclusive(v___x_2500_);
if (v_isSharedCheck_2528_ == 0)
{
v___x_2523_ = v___x_2500_;
v_isShared_2524_ = v_isSharedCheck_2528_;
goto v_resetjp_2522_;
}
else
{
lean_inc(v_a_2521_);
lean_dec(v___x_2500_);
v___x_2523_ = lean_box(0);
v_isShared_2524_ = v_isSharedCheck_2528_;
goto v_resetjp_2522_;
}
v_resetjp_2522_:
{
lean_object* v___x_2526_; 
if (v_isShared_2524_ == 0)
{
v___x_2526_ = v___x_2523_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v_a_2521_);
v___x_2526_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
return v___x_2526_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent___boxed(lean_object* v_discr_2550_, lean_object* v_depDiscrFVars_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_){
_start:
{
lean_object* v_res_2559_; 
v_res_2559_ = l_Lean_Elab_Term_Quotation_classifyDiscrTypeSilent(v_discr_2550_, v_depDiscrFVars_2551_, v_a_2552_, v_a_2553_, v_a_2554_, v_a_2555_, v_a_2556_, v_a_2557_);
lean_dec(v_a_2557_);
lean_dec_ref(v_a_2556_);
lean_dec(v_a_2555_);
lean_dec_ref(v_a_2554_);
lean_dec(v_a_2553_);
lean_dec_ref(v_a_2552_);
return v_res_2559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1_spec__1(uint8_t v_flag_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_){
_start:
{
lean_object* v___x_2568_; 
v___x_2568_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1_spec__1___redArg(v_flag_2560_, v___y_2566_);
return v___x_2568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1_spec__1___boxed(lean_object* v_flag_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_){
_start:
{
uint8_t v_flag_boxed_2577_; lean_object* v_res_2578_; 
v_flag_boxed_2577_ = lean_unbox(v_flag_2569_);
v_res_2578_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1_spec__1(v_flag_boxed_2577_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_);
lean_dec(v___y_2575_);
lean_dec_ref(v___y_2574_);
lean_dec(v___y_2573_);
lean_dec_ref(v___y_2572_);
lean_dec(v___y_2571_);
lean_dec_ref(v___y_2570_);
return v_res_2578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1(lean_object* v_00_u03b1_2579_, uint8_t v_flag_2580_, lean_object* v_x_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_){
_start:
{
lean_object* v___x_2589_; 
v___x_2589_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1___redArg(v_flag_2580_, v_x_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1___boxed(lean_object* v_00_u03b1_2590_, lean_object* v_flag_2591_, lean_object* v_x_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_){
_start:
{
uint8_t v_flag_boxed_2600_; lean_object* v_res_2601_; 
v_flag_boxed_2600_ = lean_unbox(v_flag_2591_);
v_res_2601_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_Elab_Term_Quotation_classifyDiscrTypeSilent_spec__1(v_00_u03b1_2590_, v_flag_boxed_2600_, v_x_2592_, v___y_2593_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_);
lean_dec(v___y_2598_);
lean_dec_ref(v___y_2597_);
lean_dec(v___y_2596_);
lean_dec_ref(v___y_2595_);
lean_dec(v___y_2594_);
lean_dec_ref(v___y_2593_);
return v_res_2601_;
}
}
lean_object* runtime_initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Mem(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Quotation_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Mem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Quotation_Util_0__Lean_Elab_Term_Quotation_initFn_00___x40_Lean_Elab_Quotation_Util_137815056____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Term_Quotation_hygiene = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Term_Quotation_hygiene);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Quotation_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Term(uint8_t builtin);
lean_object* initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Mem(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Quotation_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Mem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Quotation_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Quotation_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Quotation_Util(builtin);
}
#ifdef __cplusplus
}
#endif
