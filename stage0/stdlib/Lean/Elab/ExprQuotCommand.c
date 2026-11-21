// Lean compiler output
// Module: Lean.Elab.ExprQuotCommand
// Imports: public import Lean.Elab.Command public import Lean.Elab.ExprQuot import Lean.Meta.ExprPattern
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
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
lean_object* l_Lean_Elab_Term_ExprQuot_inspectExprQuotPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_ExprPattern_discTreeKeys_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withDeclName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_runTermElabM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCheckPattern___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCheckPattern___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabCheckPattern___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "_checkPattern"};
static const lean_object* l_Lean_Elab_Command_elabCheckPattern___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabCheckPattern___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Command_elabCheckPattern___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabCheckPattern___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 206, 171, 195, 93, 115, 234, 36)}};
static const lean_object* l_Lean_Elab_Command_elabCheckPattern___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabCheckPattern___lam__1___closed__1_value;
static const lean_closure_object l_Lean_Elab_Command_elabCheckPattern___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_ExprPattern_discTreeKeys_x3f___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Command_elabCheckPattern___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabCheckPattern___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCheckPattern___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCheckPattern___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabCheckPattern___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Command_elabCheckPattern___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabCheckPattern___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_elabCheckPattern___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Command_elabCheckPattern___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabCheckPattern___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabCheckPattern___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_Command_elabCheckPattern___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabCheckPattern___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_elabCheckPattern___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "checkPattern"};
static const lean_object* l_Lean_Elab_Command_elabCheckPattern___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabCheckPattern___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Command_elabCheckPattern___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabCheckPattern___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabCheckPattern___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabCheckPattern___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Command_elabCheckPattern___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabCheckPattern___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabCheckPattern___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabCheckPattern___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabCheckPattern___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabCheckPattern___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabCheckPattern___closed__3_value),LEAN_SCALAR_PTR_LITERAL(159, 60, 154, 165, 96, 109, 99, 145)}};
static const lean_object* l_Lean_Elab_Command_elabCheckPattern___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabCheckPattern___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCheckPattern(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCheckPattern___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "elabCheckPattern"};
static const lean_object* l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabCheckPattern___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___closed__1_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabCheckPattern___closed__2_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(197, 150, 80, 66, 160, 115, 214, 66)}};
static const lean_object* l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 210, .m_capacity = 210, .m_length = 209, .m_data = "Command elaborator for `#check_pattern `(expr[rel]| p)`.\n\nLives in its own module above `Lean.Elab.Command` and `Lean.Elab.ExprQuot` so\n`Lean.Elab.BuiltinCommand` does not depend on `expr` quotation machinery."};
static const lean_object* l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern_docString__3___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2___redArg();
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2___boxed(lean_object* v_00_u03b1_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2(v_00_u03b1_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
return v_res_18_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0(uint8_t v_suppressElabErrors_27_, lean_object* v_x_28_){
_start:
{
if (lean_obj_tag(v_x_28_) == 1)
{
lean_object* v_pre_29_; 
v_pre_29_ = lean_ctor_get(v_x_28_, 0);
switch(lean_obj_tag(v_pre_29_))
{
case 1:
{
lean_object* v_pre_30_; 
v_pre_30_ = lean_ctor_get(v_pre_29_, 0);
switch(lean_obj_tag(v_pre_30_))
{
case 0:
{
lean_object* v_str_31_; lean_object* v_str_32_; lean_object* v___x_33_; uint8_t v___x_34_; 
v_str_31_ = lean_ctor_get(v_x_28_, 1);
v_str_32_ = lean_ctor_get(v_pre_29_, 1);
v___x_33_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__0));
v___x_34_ = lean_string_dec_eq(v_str_32_, v___x_33_);
if (v___x_34_ == 0)
{
lean_object* v___x_35_; uint8_t v___x_36_; 
v___x_35_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__1));
v___x_36_ = lean_string_dec_eq(v_str_32_, v___x_35_);
if (v___x_36_ == 0)
{
return v___x_36_;
}
else
{
lean_object* v___x_37_; uint8_t v___x_38_; 
v___x_37_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__2));
v___x_38_ = lean_string_dec_eq(v_str_31_, v___x_37_);
if (v___x_38_ == 0)
{
return v___x_38_;
}
else
{
return v_suppressElabErrors_27_;
}
}
}
else
{
lean_object* v___x_39_; uint8_t v___x_40_; 
v___x_39_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__3));
v___x_40_ = lean_string_dec_eq(v_str_31_, v___x_39_);
if (v___x_40_ == 0)
{
return v___x_40_;
}
else
{
return v_suppressElabErrors_27_;
}
}
}
case 1:
{
lean_object* v_pre_41_; 
v_pre_41_ = lean_ctor_get(v_pre_30_, 0);
if (lean_obj_tag(v_pre_41_) == 0)
{
lean_object* v_str_42_; lean_object* v_str_43_; lean_object* v_str_44_; lean_object* v___x_45_; uint8_t v___x_46_; 
v_str_42_ = lean_ctor_get(v_x_28_, 1);
v_str_43_ = lean_ctor_get(v_pre_29_, 1);
v_str_44_ = lean_ctor_get(v_pre_30_, 1);
v___x_45_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__4));
v___x_46_ = lean_string_dec_eq(v_str_44_, v___x_45_);
if (v___x_46_ == 0)
{
return v___x_46_;
}
else
{
lean_object* v___x_47_; uint8_t v___x_48_; 
v___x_47_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__5));
v___x_48_ = lean_string_dec_eq(v_str_43_, v___x_47_);
if (v___x_48_ == 0)
{
return v___x_48_;
}
else
{
lean_object* v___x_49_; uint8_t v___x_50_; 
v___x_49_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__6));
v___x_50_ = lean_string_dec_eq(v_str_42_, v___x_49_);
if (v___x_50_ == 0)
{
return v___x_50_;
}
else
{
return v_suppressElabErrors_27_;
}
}
}
}
else
{
uint8_t v___x_51_; 
v___x_51_ = 0;
return v___x_51_;
}
}
default: 
{
uint8_t v___x_52_; 
v___x_52_ = 0;
return v___x_52_;
}
}
}
case 0:
{
lean_object* v_str_53_; lean_object* v___x_54_; uint8_t v___x_55_; 
v_str_53_ = lean_ctor_get(v_x_28_, 1);
v___x_54_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___closed__7));
v___x_55_ = lean_string_dec_eq(v_str_53_, v___x_54_);
if (v___x_55_ == 0)
{
return v___x_55_;
}
else
{
return v_suppressElabErrors_27_;
}
}
default: 
{
uint8_t v___x_56_; 
v___x_56_ = 0;
return v___x_56_;
}
}
}
else
{
uint8_t v___x_57_; 
v___x_57_ = 0;
return v___x_57_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_58_, lean_object* v_x_59_){
_start:
{
uint8_t v_suppressElabErrors_boxed_60_; uint8_t v_res_61_; lean_object* v_r_62_; 
v_suppressElabErrors_boxed_60_ = lean_unbox(v_suppressElabErrors_58_);
v_res_61_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0(v_suppressElabErrors_boxed_60_, v_x_59_);
lean_dec(v_x_59_);
v_r_62_ = lean_box(v_res_61_);
return v_r_62_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0_spec__3(lean_object* v_opts_63_, lean_object* v_opt_64_){
_start:
{
lean_object* v_name_65_; lean_object* v_defValue_66_; lean_object* v_map_67_; lean_object* v___x_68_; 
v_name_65_ = lean_ctor_get(v_opt_64_, 0);
v_defValue_66_ = lean_ctor_get(v_opt_64_, 1);
v_map_67_ = lean_ctor_get(v_opts_63_, 0);
v___x_68_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_67_, v_name_65_);
if (lean_obj_tag(v___x_68_) == 0)
{
uint8_t v___x_69_; 
v___x_69_ = lean_unbox(v_defValue_66_);
return v___x_69_;
}
else
{
lean_object* v_val_70_; 
v_val_70_ = lean_ctor_get(v___x_68_, 0);
lean_inc(v_val_70_);
lean_dec_ref_known(v___x_68_, 1);
if (lean_obj_tag(v_val_70_) == 1)
{
uint8_t v_v_71_; 
v_v_71_ = lean_ctor_get_uint8(v_val_70_, 0);
lean_dec_ref_known(v_val_70_, 0);
return v_v_71_;
}
else
{
uint8_t v___x_72_; 
lean_dec(v_val_70_);
v___x_72_ = lean_unbox(v_defValue_66_);
return v___x_72_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0_spec__3___boxed(lean_object* v_opts_73_, lean_object* v_opt_74_){
_start:
{
uint8_t v_res_75_; lean_object* v_r_76_; 
v_res_75_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0_spec__3(v_opts_73_, v_opt_74_);
lean_dec_ref(v_opt_74_);
lean_dec_ref(v_opts_73_);
v_r_76_ = lean_box(v_res_75_);
return v_r_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0_spec__2(lean_object* v_msgData_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; lean_object* v_env_84_; uint8_t v___x_85_; lean_object* v_env_86_; lean_object* v___x_87_; lean_object* v_toCold_88_; lean_object* v_mctx_89_; lean_object* v_lctx_90_; lean_object* v_options_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_83_ = lean_st_ref_get(v___y_81_);
v_env_84_ = lean_ctor_get(v___x_83_, 0);
lean_inc_ref(v_env_84_);
lean_dec(v___x_83_);
v___x_85_ = 0;
v_env_86_ = l_Lean_Environment_setRecordingDeps(v_env_84_, v___x_85_);
v___x_87_ = lean_st_ref_get(v___y_79_);
v_toCold_88_ = lean_ctor_get(v___y_80_, 0);
v_mctx_89_ = lean_ctor_get(v___x_87_, 0);
lean_inc_ref(v_mctx_89_);
lean_dec(v___x_87_);
v_lctx_90_ = lean_ctor_get(v___y_78_, 2);
v_options_91_ = lean_ctor_get(v_toCold_88_, 2);
lean_inc_ref(v_options_91_);
lean_inc_ref(v_lctx_90_);
v___x_92_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_92_, 0, v_env_86_);
lean_ctor_set(v___x_92_, 1, v_mctx_89_);
lean_ctor_set(v___x_92_, 2, v_lctx_90_);
lean_ctor_set(v___x_92_, 3, v_options_91_);
v___x_93_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v_msgData_77_);
v___x_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0_spec__2___boxed(lean_object* v_msgData_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0_spec__2(v_msgData_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_);
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg(lean_object* v_ref_103_, lean_object* v_msgData_104_, uint8_t v_severity_105_, uint8_t v_isSilent_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_){
_start:
{
uint8_t v___y_113_; lean_object* v___y_114_; lean_object* v___y_115_; uint8_t v___y_116_; lean_object* v___y_117_; lean_object* v___y_118_; lean_object* v___y_119_; lean_object* v_toCold_120_; lean_object* v___y_121_; lean_object* v___y_150_; lean_object* v___y_151_; uint8_t v___y_152_; uint8_t v___y_153_; uint8_t v___y_154_; lean_object* v___y_155_; lean_object* v___y_156_; lean_object* v___y_157_; uint8_t v___y_177_; lean_object* v___y_178_; lean_object* v___y_179_; uint8_t v___y_180_; lean_object* v___y_181_; uint8_t v___y_182_; lean_object* v___y_183_; uint8_t v___y_187_; uint8_t v___y_188_; uint8_t v___x_198_; uint8_t v___y_200_; uint8_t v___x_206_; 
v___x_198_ = 2;
v___x_206_ = l_Lean_instBEqMessageSeverity_beq(v_severity_105_, v___x_198_);
if (v___x_206_ == 0)
{
v___y_200_ = v___x_206_;
goto v___jp_199_;
}
else
{
uint8_t v___x_207_; 
lean_inc_ref(v_msgData_104_);
v___x_207_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_104_);
if (v___x_207_ == 0)
{
v___y_200_ = v___x_207_;
goto v___jp_199_;
}
else
{
lean_object* v___x_208_; lean_object* v___x_209_; 
lean_dec_ref(v_msgData_104_);
v___x_208_ = lean_box(0);
v___x_209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
return v___x_209_;
}
}
v___jp_112_:
{
lean_object* v_currNamespace_122_; lean_object* v_openDecls_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v_env_128_; lean_object* v_nextMacroScope_129_; lean_object* v_ngen_130_; lean_object* v_auxDeclNGen_131_; lean_object* v_traceState_132_; lean_object* v_cache_133_; lean_object* v_recordedDeps_134_; lean_object* v_messages_135_; lean_object* v_infoState_136_; lean_object* v_snapshotTasks_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_148_; 
v_currNamespace_122_ = lean_ctor_get(v_toCold_120_, 4);
v_openDecls_123_ = lean_ctor_get(v_toCold_120_, 5);
lean_inc(v_openDecls_123_);
lean_inc(v_currNamespace_122_);
v___x_124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_124_, 0, v_currNamespace_122_);
lean_ctor_set(v___x_124_, 1, v_openDecls_123_);
v___x_125_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
lean_ctor_set(v___x_125_, 1, v___y_115_);
lean_inc_ref(v___y_114_);
lean_inc_ref(v___y_118_);
v___x_126_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_126_, 0, v___y_118_);
lean_ctor_set(v___x_126_, 1, v___y_119_);
lean_ctor_set(v___x_126_, 2, v___y_117_);
lean_ctor_set(v___x_126_, 3, v___y_114_);
lean_ctor_set(v___x_126_, 4, v___x_125_);
lean_ctor_set_uint8(v___x_126_, sizeof(void*)*5, v___y_113_);
lean_ctor_set_uint8(v___x_126_, sizeof(void*)*5 + 1, v___y_116_);
lean_ctor_set_uint8(v___x_126_, sizeof(void*)*5 + 2, v_isSilent_106_);
v___x_127_ = lean_st_ref_take(v___y_121_);
v_env_128_ = lean_ctor_get(v___x_127_, 0);
v_nextMacroScope_129_ = lean_ctor_get(v___x_127_, 1);
v_ngen_130_ = lean_ctor_get(v___x_127_, 2);
v_auxDeclNGen_131_ = lean_ctor_get(v___x_127_, 3);
v_traceState_132_ = lean_ctor_get(v___x_127_, 4);
v_cache_133_ = lean_ctor_get(v___x_127_, 5);
v_recordedDeps_134_ = lean_ctor_get(v___x_127_, 6);
v_messages_135_ = lean_ctor_get(v___x_127_, 7);
v_infoState_136_ = lean_ctor_get(v___x_127_, 8);
v_snapshotTasks_137_ = lean_ctor_get(v___x_127_, 9);
v_isSharedCheck_148_ = !lean_is_exclusive(v___x_127_);
if (v_isSharedCheck_148_ == 0)
{
v___x_139_ = v___x_127_;
v_isShared_140_ = v_isSharedCheck_148_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_snapshotTasks_137_);
lean_inc(v_infoState_136_);
lean_inc(v_messages_135_);
lean_inc(v_recordedDeps_134_);
lean_inc(v_cache_133_);
lean_inc(v_traceState_132_);
lean_inc(v_auxDeclNGen_131_);
lean_inc(v_ngen_130_);
lean_inc(v_nextMacroScope_129_);
lean_inc(v_env_128_);
lean_dec(v___x_127_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_148_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_144_; 
v___x_141_ = lean_box(0);
v___x_142_ = l_Lean_MessageLog_add(v___x_126_, v_messages_135_);
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 7, v___x_142_);
v___x_144_ = v___x_139_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_env_128_);
lean_ctor_set(v_reuseFailAlloc_147_, 1, v_nextMacroScope_129_);
lean_ctor_set(v_reuseFailAlloc_147_, 2, v_ngen_130_);
lean_ctor_set(v_reuseFailAlloc_147_, 3, v_auxDeclNGen_131_);
lean_ctor_set(v_reuseFailAlloc_147_, 4, v_traceState_132_);
lean_ctor_set(v_reuseFailAlloc_147_, 5, v_cache_133_);
lean_ctor_set(v_reuseFailAlloc_147_, 6, v_recordedDeps_134_);
lean_ctor_set(v_reuseFailAlloc_147_, 7, v___x_142_);
lean_ctor_set(v_reuseFailAlloc_147_, 8, v_infoState_136_);
lean_ctor_set(v_reuseFailAlloc_147_, 9, v_snapshotTasks_137_);
v___x_144_ = v_reuseFailAlloc_147_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = lean_st_ref_put(v___y_121_, v___x_144_);
v___x_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_146_, 0, v___x_141_);
return v___x_146_;
}
}
}
v___jp_149_:
{
lean_object* v_fileName_158_; lean_object* v_fileMap_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_175_; 
v_fileName_158_ = lean_ctor_get(v___y_156_, 0);
v_fileMap_159_ = lean_ctor_get(v___y_156_, 1);
v___x_160_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_104_);
v___x_161_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0_spec__2(v___x_160_, v___y_107_, v___y_108_, v___y_109_, v___y_110_);
v_a_162_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_175_ == 0)
{
v___x_164_ = v___x_161_;
v_isShared_165_ = v_isSharedCheck_175_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v___x_161_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_175_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
lean_inc_ref_n(v_fileMap_159_, 2);
v___x_166_ = l_Lean_FileMap_toPosition(v_fileMap_159_, v___y_155_);
lean_dec(v___y_155_);
v___x_167_ = l_Lean_FileMap_toPosition(v_fileMap_159_, v___y_157_);
lean_dec(v___y_157_);
v___x_168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
v___x_169_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___closed__0));
if (v___y_154_ == 0)
{
lean_del_object(v___x_164_);
lean_dec_ref(v___y_150_);
v___y_113_ = v___y_152_;
v___y_114_ = v___x_169_;
v___y_115_ = v_a_162_;
v___y_116_ = v___y_153_;
v___y_117_ = v___x_168_;
v___y_118_ = v_fileName_158_;
v___y_119_ = v___x_166_;
v_toCold_120_ = v___y_151_;
v___y_121_ = v___y_110_;
goto v___jp_112_;
}
else
{
uint8_t v___x_170_; 
lean_inc(v_a_162_);
v___x_170_ = l_Lean_MessageData_hasTag(v___y_150_, v_a_162_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; lean_object* v___x_173_; 
lean_dec_ref_known(v___x_168_, 1);
lean_dec_ref(v___x_166_);
lean_dec(v_a_162_);
v___x_171_ = lean_box(0);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 0, v___x_171_);
v___x_173_ = v___x_164_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v___x_171_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
else
{
lean_del_object(v___x_164_);
v___y_113_ = v___y_152_;
v___y_114_ = v___x_169_;
v___y_115_ = v_a_162_;
v___y_116_ = v___y_153_;
v___y_117_ = v___x_168_;
v___y_118_ = v_fileName_158_;
v___y_119_ = v___x_166_;
v_toCold_120_ = v___y_151_;
v___y_121_ = v___y_110_;
goto v___jp_112_;
}
}
}
}
v___jp_176_:
{
lean_object* v___x_184_; 
v___x_184_ = l_Lean_Syntax_getTailPos_x3f(v___y_181_, v___y_180_);
lean_dec(v___y_181_);
if (lean_obj_tag(v___x_184_) == 0)
{
lean_inc(v___y_183_);
v___y_150_ = v___y_178_;
v___y_151_ = v___y_179_;
v___y_152_ = v___y_180_;
v___y_153_ = v___y_182_;
v___y_154_ = v___y_177_;
v___y_155_ = v___y_183_;
v___y_156_ = v___y_179_;
v___y_157_ = v___y_183_;
goto v___jp_149_;
}
else
{
lean_object* v_val_185_; 
v_val_185_ = lean_ctor_get(v___x_184_, 0);
lean_inc(v_val_185_);
lean_dec_ref_known(v___x_184_, 1);
v___y_150_ = v___y_178_;
v___y_151_ = v___y_179_;
v___y_152_ = v___y_180_;
v___y_153_ = v___y_182_;
v___y_154_ = v___y_177_;
v___y_155_ = v___y_183_;
v___y_156_ = v___y_179_;
v___y_157_ = v_val_185_;
goto v___jp_149_;
}
}
v___jp_186_:
{
lean_object* v_toCold_189_; lean_object* v_ref_190_; uint8_t v_suppressElabErrors_191_; lean_object* v___x_192_; lean_object* v___f_193_; lean_object* v_ref_194_; lean_object* v___x_195_; 
v_toCold_189_ = lean_ctor_get(v___y_109_, 0);
v_ref_190_ = lean_ctor_get(v___y_109_, 2);
v_suppressElabErrors_191_ = lean_ctor_get_uint8(v___y_109_, sizeof(void*)*3 + 2);
v___x_192_ = lean_box(v_suppressElabErrors_191_);
v___f_193_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_193_, 0, v___x_192_);
v_ref_194_ = l_Lean_replaceRef(v_ref_103_, v_ref_190_);
v___x_195_ = l_Lean_Syntax_getPos_x3f(v_ref_194_, v___y_187_);
if (lean_obj_tag(v___x_195_) == 0)
{
lean_object* v___x_196_; 
v___x_196_ = lean_unsigned_to_nat(0u);
v___y_177_ = v_suppressElabErrors_191_;
v___y_178_ = v___f_193_;
v___y_179_ = v_toCold_189_;
v___y_180_ = v___y_187_;
v___y_181_ = v_ref_194_;
v___y_182_ = v___y_188_;
v___y_183_ = v___x_196_;
goto v___jp_176_;
}
else
{
lean_object* v_val_197_; 
v_val_197_ = lean_ctor_get(v___x_195_, 0);
lean_inc(v_val_197_);
lean_dec_ref_known(v___x_195_, 1);
v___y_177_ = v_suppressElabErrors_191_;
v___y_178_ = v___f_193_;
v___y_179_ = v_toCold_189_;
v___y_180_ = v___y_187_;
v___y_181_ = v_ref_194_;
v___y_182_ = v___y_188_;
v___y_183_ = v_val_197_;
goto v___jp_176_;
}
}
v___jp_199_:
{
uint8_t v___x_201_; uint8_t v___x_202_; 
v___x_201_ = 1;
v___x_202_ = l_Lean_instBEqMessageSeverity_beq(v_severity_105_, v___x_201_);
if (v___x_202_ == 0)
{
v___y_187_ = v___y_200_;
v___y_188_ = v_severity_105_;
goto v___jp_186_;
}
else
{
lean_object* v___x_203_; lean_object* v___x_204_; uint8_t v___x_205_; 
v___x_203_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_109_);
v___x_204_ = l_Lean_warningAsError;
v___x_205_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0_spec__3(v___x_203_, v___x_204_);
lean_dec_ref(v___x_203_);
if (v___x_205_ == 0)
{
v___y_187_ = v___y_200_;
v___y_188_ = v_severity_105_;
goto v___jp_186_;
}
else
{
v___y_187_ = v___y_200_;
v___y_188_ = v___x_198_;
goto v___jp_186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg___boxed(lean_object* v_ref_210_, lean_object* v_msgData_211_, lean_object* v_severity_212_, lean_object* v_isSilent_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
uint8_t v_severity_boxed_219_; uint8_t v_isSilent_boxed_220_; lean_object* v_res_221_; 
v_severity_boxed_219_ = lean_unbox(v_severity_212_);
v_isSilent_boxed_220_ = lean_unbox(v_isSilent_213_);
v_res_221_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg(v_ref_210_, v_msgData_211_, v_severity_boxed_219_, v_isSilent_boxed_220_, v___y_214_, v___y_215_, v___y_216_, v___y_217_);
lean_dec(v___y_217_);
lean_dec_ref(v___y_216_);
lean_dec(v___y_215_);
lean_dec_ref(v___y_214_);
lean_dec(v_ref_210_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0(lean_object* v_ref_222_, lean_object* v_msgData_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_){
_start:
{
uint8_t v___x_231_; uint8_t v___x_232_; lean_object* v___x_233_; 
v___x_231_ = 0;
v___x_232_ = 0;
v___x_233_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg(v_ref_222_, v_msgData_223_, v___x_231_, v___x_232_, v___y_226_, v___y_227_, v___y_228_, v___y_229_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0___boxed(lean_object* v_ref_234_, lean_object* v_msgData_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0(v_ref_234_, v_msgData_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_, v___y_240_, v___y_241_);
lean_dec(v___y_241_);
lean_dec_ref(v___y_240_);
lean_dec(v___y_239_);
lean_dec_ref(v___y_238_);
lean_dec(v___y_237_);
lean_dec_ref(v___y_236_);
lean_dec(v_ref_234_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCheckPattern___lam__0(lean_object* v_tk_244_, lean_object* v_vars_245_, lean_object* v_term_246_, lean_object* v___x_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_){
_start:
{
lean_object* v_toCold_255_; lean_object* v_currRecDepth_256_; lean_object* v_ref_257_; uint16_t v_optionFlags_258_; uint8_t v_suppressElabErrors_259_; uint8_t v_checkDeprecated_260_; uint8_t v_isRecordingDeps_261_; lean_object* v_ref_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v_toCold_255_ = lean_ctor_get(v___y_252_, 0);
v_currRecDepth_256_ = lean_ctor_get(v___y_252_, 1);
v_ref_257_ = lean_ctor_get(v___y_252_, 2);
v_optionFlags_258_ = lean_ctor_get_uint16(v___y_252_, sizeof(void*)*3);
v_suppressElabErrors_259_ = lean_ctor_get_uint8(v___y_252_, sizeof(void*)*3 + 2);
v_checkDeprecated_260_ = lean_ctor_get_uint8(v___y_252_, sizeof(void*)*3 + 3);
v_isRecordingDeps_261_ = lean_ctor_get_uint8(v___y_252_, sizeof(void*)*3 + 4);
v_ref_262_ = l_Lean_replaceRef(v_tk_244_, v_ref_257_);
lean_inc(v_currRecDepth_256_);
lean_inc_ref(v_toCold_255_);
v___x_263_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_263_, 0, v_toCold_255_);
lean_ctor_set(v___x_263_, 1, v_currRecDepth_256_);
lean_ctor_set(v___x_263_, 2, v_ref_262_);
lean_ctor_set_uint16(v___x_263_, sizeof(void*)*3, v_optionFlags_258_);
lean_ctor_set_uint8(v___x_263_, sizeof(void*)*3 + 2, v_suppressElabErrors_259_);
lean_ctor_set_uint8(v___x_263_, sizeof(void*)*3 + 3, v_checkDeprecated_260_);
lean_ctor_set_uint8(v___x_263_, sizeof(void*)*3 + 4, v_isRecordingDeps_261_);
v___x_264_ = l_Lean_Elab_Term_ExprQuot_inspectExprQuotPattern(v_vars_245_, v_term_246_, v___x_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_, v___x_263_, v___y_253_);
lean_dec_ref_known(v___x_263_, 3);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v_a_265_; lean_object* v___x_266_; 
v_a_265_ = lean_ctor_get(v___x_264_, 0);
lean_inc(v_a_265_);
lean_dec_ref_known(v___x_264_, 1);
v___x_266_ = l_Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0(v_tk_244_, v_a_265_, v___y_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_);
return v___x_266_;
}
else
{
lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_274_; 
v_a_267_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_274_ == 0)
{
v___x_269_ = v___x_264_;
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_dec(v___x_264_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_272_; 
if (v_isShared_270_ == 0)
{
v___x_272_ = v___x_269_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_267_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCheckPattern___lam__0___boxed(lean_object* v_tk_275_, lean_object* v_vars_276_, lean_object* v_term_277_, lean_object* v___x_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l_Lean_Elab_Command_elabCheckPattern___lam__0(v_tk_275_, v_vars_276_, v_term_277_, v___x_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
lean_dec(v___y_284_);
lean_dec_ref(v___y_283_);
lean_dec(v___y_282_);
lean_dec_ref(v___y_281_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
lean_dec(v_term_277_);
lean_dec_ref(v_vars_276_);
lean_dec(v_tk_275_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCheckPattern___lam__1(lean_object* v_tk_291_, lean_object* v_term_292_, lean_object* v_vars_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___f_303_; lean_object* v___x_304_; 
v___x_301_ = ((lean_object*)(l_Lean_Elab_Command_elabCheckPattern___lam__1___closed__1));
v___x_302_ = ((lean_object*)(l_Lean_Elab_Command_elabCheckPattern___lam__1___closed__2));
v___f_303_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabCheckPattern___lam__0___boxed), 11, 4);
lean_closure_set(v___f_303_, 0, v_tk_291_);
lean_closure_set(v___f_303_, 1, v_vars_293_);
lean_closure_set(v___f_303_, 2, v_term_292_);
lean_closure_set(v___f_303_, 3, v___x_302_);
v___x_304_ = l_Lean_Elab_Term_withDeclName___redArg(v___x_301_, v___f_303_, v___y_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_, v___y_299_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCheckPattern___lam__1___boxed(lean_object* v_tk_305_, lean_object* v_term_306_, lean_object* v_vars_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l_Lean_Elab_Command_elabCheckPattern___lam__1(v_tk_305_, v_term_306_, v_vars_307_, v___y_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_, v___y_313_);
lean_dec(v___y_313_);
lean_dec_ref(v___y_312_);
lean_dec(v___y_311_);
lean_dec_ref(v___y_310_);
lean_dec(v___y_309_);
lean_dec_ref(v___y_308_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1_spec__2___redArg(lean_object* v_env_316_, lean_object* v___y_317_){
_start:
{
lean_object* v___x_319_; lean_object* v_messages_320_; lean_object* v_scopes_321_; lean_object* v_usedQuotCtxts_322_; lean_object* v_nextMacroScope_323_; lean_object* v_maxRecDepth_324_; lean_object* v_ngen_325_; lean_object* v_auxDeclNGen_326_; lean_object* v_infoState_327_; lean_object* v_traceState_328_; lean_object* v_snapshotTasks_329_; lean_object* v_prevLinterStates_330_; lean_object* v_codeQualityEntryTasks_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_341_; 
v___x_319_ = lean_st_ref_take(v___y_317_);
v_messages_320_ = lean_ctor_get(v___x_319_, 1);
v_scopes_321_ = lean_ctor_get(v___x_319_, 2);
v_usedQuotCtxts_322_ = lean_ctor_get(v___x_319_, 3);
v_nextMacroScope_323_ = lean_ctor_get(v___x_319_, 4);
v_maxRecDepth_324_ = lean_ctor_get(v___x_319_, 5);
v_ngen_325_ = lean_ctor_get(v___x_319_, 6);
v_auxDeclNGen_326_ = lean_ctor_get(v___x_319_, 7);
v_infoState_327_ = lean_ctor_get(v___x_319_, 8);
v_traceState_328_ = lean_ctor_get(v___x_319_, 9);
v_snapshotTasks_329_ = lean_ctor_get(v___x_319_, 10);
v_prevLinterStates_330_ = lean_ctor_get(v___x_319_, 11);
v_codeQualityEntryTasks_331_ = lean_ctor_get(v___x_319_, 12);
v_isSharedCheck_341_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_341_ == 0)
{
lean_object* v_unused_342_; 
v_unused_342_ = lean_ctor_get(v___x_319_, 0);
lean_dec(v_unused_342_);
v___x_333_ = v___x_319_;
v_isShared_334_ = v_isSharedCheck_341_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_codeQualityEntryTasks_331_);
lean_inc(v_prevLinterStates_330_);
lean_inc(v_snapshotTasks_329_);
lean_inc(v_traceState_328_);
lean_inc(v_infoState_327_);
lean_inc(v_auxDeclNGen_326_);
lean_inc(v_ngen_325_);
lean_inc(v_maxRecDepth_324_);
lean_inc(v_nextMacroScope_323_);
lean_inc(v_usedQuotCtxts_322_);
lean_inc(v_scopes_321_);
lean_inc(v_messages_320_);
lean_dec(v___x_319_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_341_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_335_; lean_object* v___x_337_; 
v___x_335_ = lean_box(0);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v_env_316_);
v___x_337_ = v___x_333_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_env_316_);
lean_ctor_set(v_reuseFailAlloc_340_, 1, v_messages_320_);
lean_ctor_set(v_reuseFailAlloc_340_, 2, v_scopes_321_);
lean_ctor_set(v_reuseFailAlloc_340_, 3, v_usedQuotCtxts_322_);
lean_ctor_set(v_reuseFailAlloc_340_, 4, v_nextMacroScope_323_);
lean_ctor_set(v_reuseFailAlloc_340_, 5, v_maxRecDepth_324_);
lean_ctor_set(v_reuseFailAlloc_340_, 6, v_ngen_325_);
lean_ctor_set(v_reuseFailAlloc_340_, 7, v_auxDeclNGen_326_);
lean_ctor_set(v_reuseFailAlloc_340_, 8, v_infoState_327_);
lean_ctor_set(v_reuseFailAlloc_340_, 9, v_traceState_328_);
lean_ctor_set(v_reuseFailAlloc_340_, 10, v_snapshotTasks_329_);
lean_ctor_set(v_reuseFailAlloc_340_, 11, v_prevLinterStates_330_);
lean_ctor_set(v_reuseFailAlloc_340_, 12, v_codeQualityEntryTasks_331_);
v___x_337_ = v_reuseFailAlloc_340_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_338_ = lean_st_ref_put(v___y_317_, v___x_337_);
v___x_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_339_, 0, v___x_335_);
return v___x_339_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1_spec__2___redArg___boxed(lean_object* v_env_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1_spec__2___redArg(v_env_343_, v___y_344_);
lean_dec(v___y_344_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1___redArg(lean_object* v_env_347_, lean_object* v_x_348_, lean_object* v___y_349_, lean_object* v___y_350_){
_start:
{
lean_object* v___x_352_; lean_object* v_env_353_; lean_object* v_a_355_; lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_352_ = lean_st_ref_get(v___y_350_);
v_env_353_ = lean_ctor_get(v___x_352_, 0);
lean_inc_ref(v_env_353_);
lean_dec(v___x_352_);
v___x_365_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1_spec__2___redArg(v_env_347_, v___y_350_);
lean_dec_ref(v___x_365_);
lean_inc(v___y_350_);
lean_inc_ref(v___y_349_);
v___x_366_ = lean_apply_3(v_x_348_, v___y_349_, v___y_350_, lean_box(0));
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v_a_367_; lean_object* v___x_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_375_; 
v_a_367_ = lean_ctor_get(v___x_366_, 0);
lean_inc(v_a_367_);
lean_dec_ref_known(v___x_366_, 1);
v___x_368_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1_spec__2___redArg(v_env_353_, v___y_350_);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_375_ == 0)
{
lean_object* v_unused_376_; 
v_unused_376_ = lean_ctor_get(v___x_368_, 0);
lean_dec(v_unused_376_);
v___x_370_ = v___x_368_;
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
else
{
lean_dec(v___x_368_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 0, v_a_367_);
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_a_367_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
else
{
lean_object* v_a_377_; 
v_a_377_ = lean_ctor_get(v___x_366_, 0);
lean_inc(v_a_377_);
lean_dec_ref_known(v___x_366_, 1);
v_a_355_ = v_a_377_;
goto v___jp_354_;
}
v___jp_354_:
{
lean_object* v___x_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
v___x_356_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1_spec__2___redArg(v_env_353_, v___y_350_);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_363_ == 0)
{
lean_object* v_unused_364_; 
v_unused_364_ = lean_ctor_get(v___x_356_, 0);
lean_dec(v_unused_364_);
v___x_358_ = v___x_356_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_dec(v___x_356_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
lean_ctor_set_tag(v___x_358_, 1);
lean_ctor_set(v___x_358_, 0, v_a_355_);
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_355_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1___redArg___boxed(lean_object* v_env_378_, lean_object* v_x_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1___redArg(v_env_378_, v_x_379_, v___y_380_, v___y_381_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCheckPattern(lean_object* v_stx_393_, lean_object* v_a_394_, lean_object* v_a_395_){
_start:
{
lean_object* v___y_398_; lean_object* v___y_399_; lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_412_ = ((lean_object*)(l_Lean_Elab_Command_elabCheckPattern___closed__4));
lean_inc(v_stx_393_);
v___x_413_ = l_Lean_Syntax_isOfKind(v_stx_393_, v___x_412_);
if (v___x_413_ == 0)
{
lean_dec(v_stx_393_);
goto v___jp_410_;
}
else
{
lean_object* v___x_414_; lean_object* v___x_415_; uint8_t v___x_416_; 
v___x_414_ = lean_unsigned_to_nat(2u);
v___x_415_ = l_Lean_Syntax_getNumArgs(v_stx_393_);
v___x_416_ = lean_nat_dec_le(v___x_414_, v___x_415_);
lean_dec(v___x_415_);
if (v___x_416_ == 0)
{
lean_dec(v_stx_393_);
goto v___jp_410_;
}
else
{
v___y_398_ = v_a_394_;
v___y_399_ = v_a_395_;
goto v___jp_397_;
}
}
v___jp_397_:
{
lean_object* v___x_400_; lean_object* v_tk_401_; lean_object* v___x_402_; lean_object* v_term_403_; lean_object* v___f_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v_env_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_400_ = lean_unsigned_to_nat(0u);
v_tk_401_ = l_Lean_Syntax_getArg(v_stx_393_, v___x_400_);
v___x_402_ = lean_unsigned_to_nat(1u);
v_term_403_ = l_Lean_Syntax_getArg(v_stx_393_, v___x_402_);
lean_dec(v_stx_393_);
v___f_404_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabCheckPattern___lam__1___boxed), 10, 2);
lean_closure_set(v___f_404_, 0, v_tk_401_);
lean_closure_set(v___f_404_, 1, v_term_403_);
v___x_405_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_runTermElabM___boxed), 5, 2);
lean_closure_set(v___x_405_, 0, lean_box(0));
lean_closure_set(v___x_405_, 1, v___f_404_);
v___x_406_ = lean_st_ref_get(v___y_399_);
v_env_407_ = lean_ctor_get(v___x_406_, 0);
lean_inc_ref(v_env_407_);
lean_dec(v___x_406_);
v___x_408_ = l_Lean_Environment_unlockAsync(v_env_407_);
v___x_409_ = l_Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1___redArg(v___x_408_, v___x_405_, v___y_398_, v___y_399_);
return v___x_409_;
}
v___jp_410_:
{
lean_object* v___x_411_; 
v___x_411_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Command_elabCheckPattern_spec__2___redArg();
return v___x_411_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabCheckPattern___boxed(lean_object* v_stx_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lean_Elab_Command_elabCheckPattern(v_stx_417_, v_a_418_, v_a_419_);
lean_dec(v_a_419_);
lean_dec_ref(v_a_418_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1_spec__2(lean_object* v_env_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
lean_object* v___x_426_; 
v___x_426_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1_spec__2___redArg(v_env_422_, v___y_424_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1_spec__2___boxed(lean_object* v_env_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1_spec__2(v_env_427_, v___y_428_, v___y_429_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1(lean_object* v_00_u03b1_432_, lean_object* v_env_433_, lean_object* v_x_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v___x_438_; 
v___x_438_ = l_Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1___redArg(v_env_433_, v_x_434_, v___y_435_, v___y_436_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1___boxed(lean_object* v_00_u03b1_439_, lean_object* v_env_440_, lean_object* v_x_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lean_withEnv___at___00Lean_Elab_Command_elabCheckPattern_spec__1(v_00_u03b1_439_, v_env_440_, v_x_441_, v___y_442_, v___y_443_);
lean_dec(v___y_443_);
lean_dec_ref(v___y_442_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0(lean_object* v_ref_446_, lean_object* v_msgData_447_, uint8_t v_severity_448_, uint8_t v_isSilent_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
lean_object* v___x_457_; 
v___x_457_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___redArg(v_ref_446_, v_msgData_447_, v_severity_448_, v_isSilent_449_, v___y_452_, v___y_453_, v___y_454_, v___y_455_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0___boxed(lean_object* v_ref_458_, lean_object* v_msgData_459_, lean_object* v_severity_460_, lean_object* v_isSilent_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
uint8_t v_severity_boxed_469_; uint8_t v_isSilent_boxed_470_; lean_object* v_res_471_; 
v_severity_boxed_469_ = lean_unbox(v_severity_460_);
v_isSilent_boxed_470_ = lean_unbox(v_isSilent_461_);
v_res_471_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00Lean_Elab_Command_elabCheckPattern_spec__0_spec__0(v_ref_458_, v_msgData_459_, v_severity_boxed_469_, v_isSilent_boxed_470_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_);
lean_dec(v___y_467_);
lean_dec_ref(v___y_466_);
lean_dec(v___y_465_);
lean_dec_ref(v___y_464_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v_ref_458_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1(){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_479_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_480_ = ((lean_object*)(l_Lean_Elab_Command_elabCheckPattern___closed__4));
v___x_481_ = ((lean_object*)(l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___closed__1));
v___x_482_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabCheckPattern___boxed), 4, 0);
v___x_483_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_479_, v___x_480_, v___x_481_, v___x_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___boxed(lean_object* v_a_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1();
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern_docString__3(){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_488_ = ((lean_object*)(l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1___closed__1));
v___x_489_ = ((lean_object*)(l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern_docString__3___closed__0));
v___x_490_ = l_Lean_addBuiltinDocString(v___x_488_, v___x_489_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern_docString__3___boxed(lean_object* v_a_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern_docString__3();
return v_res_492_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_ExprQuot(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_ExprPattern(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_ExprQuotCommand(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ExprQuot(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ExprPattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ExprQuotCommand_0__Lean_Elab_Command_elabCheckPattern___regBuiltin_Lean_Elab_Command_elabCheckPattern_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_ExprQuotCommand(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Elab_ExprQuot(uint8_t builtin);
lean_object* initialize_Lean_Meta_ExprPattern(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_ExprQuotCommand(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ExprQuot(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ExprPattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ExprQuotCommand(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_ExprQuotCommand(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_ExprQuotCommand(builtin);
}
#ifdef __cplusplus
}
#endif
