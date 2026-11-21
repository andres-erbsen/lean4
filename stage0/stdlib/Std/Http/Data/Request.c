// Lean compiler output
// Module: Std.Http.Data.Request
// Imports: public import Std.Http.Data.Extensions public import Std.Http.Data.Method public import Std.Http.Data.Version public import Std.Http.Data.Headers public import Std.Http.Data.URI
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
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Http_Internal_appendFieldLine___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Headers_fold___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_uv_ntop_v4(lean_object*);
lean_object* lean_uv_ntop_v6(lean_object*);
lean_object* l_Std_Http_URI_Path_render(lean_object*, uint8_t, uint8_t);
lean_object* l_Std_Http_URI_Query_formatOption(lean_object*);
lean_object* l_Std_Http_URI_EncodedFragment_encode(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_String_Slice_Pattern_Char_instToForwardSearcherCharDefaultForwardSearcherForallBoolBeq___redArg___lam__0___boxed(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Http_Extensions_empty;
extern lean_object* l_Std_Http_Headers_empty;
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Std_Http_instReprMethod_repr(uint8_t, lean_object*);
lean_object* l_Std_Http_instReprVersion_repr(uint8_t, lean_object*);
lean_object* l_Std_Http_instReprRequestTarget_repr(lean_object*, lean_object*);
lean_object* l_Std_Http_instReprHeaders_repr___redArg(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_Http_URI_Parser_parseRequestTarget(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Http_instInhabitedRequestTarget_default;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_String_Slice_splitToSubslice___redArg(lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Header_Name_ofString_x21(lean_object*);
lean_object* l_Std_Http_Header_Value_ofString_x21(lean_object*);
lean_object* l_Std_Http_Extensions_compareName___boxed(lean_object*, lean_object*);
lean_object* l_Std_Http_Header_Name_ofString_x3f(lean_object*);
lean_object* l_Std_Http_Header_Value_ofString_x3f(lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Request_instInhabitedHead_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instInhabitedHead_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_instInhabitedHead_default;
LEAN_EXPORT lean_object* l_Std_Http_Request_instInhabitedHead;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_Request_instReprHead_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Http_Request_instReprHead_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Http_Request_instReprHead_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "method"};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_Request_instReprHead_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__3_value),((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__6 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Http_Request_instReprHead_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__7;
static const lean_string_object l_Std_Http_Request_instReprHead_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__9 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Http_Request_instReprHead_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__10 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__11 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__11_value;
static lean_once_cell_t l_Std_Http_Request_instReprHead_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__12;
static const lean_string_object l_Std_Http_Request_instReprHead_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "uri"};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__13 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__13_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__13_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__14 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__14_value;
static lean_once_cell_t l_Std_Http_Request_instReprHead_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__15;
static const lean_string_object l_Std_Http_Request_instReprHead_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "headers"};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__16 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__16_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__16_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__17 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__17_value;
static const lean_string_object l_Std_Http_Request_instReprHead_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__18 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__18_value;
static lean_once_cell_t l_Std_Http_Request_instReprHead_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__19;
static lean_once_cell_t l_Std_Http_Request_instReprHead_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__20;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__21 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__21_value;
static const lean_ctor_object l_Std_Http_Request_instReprHead_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__18_value)}};
static const lean_object* l_Std_Http_Request_instReprHead_repr___redArg___closed__22 = (const lean_object*)&l_Std_Http_Request_instReprHead_repr___redArg___closed__22_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_instReprHead_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_instReprHead_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_instReprHead_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Request_instReprHead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Request_instReprHead_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instReprHead___closed__0 = (const lean_object*)&l_Std_Http_Request_instReprHead___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Request_instReprHead = (const lean_object*)&l_Std_Http_Request_instReprHead___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedRequest_default___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedRequest_default(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedRequest___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedRequest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__1___closed__0 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__1___closed__0_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_Slice_Pattern_Char_instToForwardSearcherCharDefaultForwardSearcherForallBoolBeq___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___lam__1___closed__1 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__1___closed__1_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__1___closed__2 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__1___closed__2_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__1___closed__3 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__1___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__1___boxed__const__1;
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__1(lean_object*);
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\r\n"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__0 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__0_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__1 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__1_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__2 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__2_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__3 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__3_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__4 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__4_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__5 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__5_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__6 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__6_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__7 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__7_value;
static const lean_ctor_object l_Std_Http_Request_instToStringHead___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__1_value),((lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__2_value)}};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__8 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__8_value;
static const lean_ctor_object l_Std_Http_Request_instToStringHead___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__8_value),((lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__3_value),((lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__4_value),((lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__5_value),((lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__6_value)}};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__9 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__9_value;
static const lean_ctor_object l_Std_Http_Request_instToStringHead___lam__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__9_value),((lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__7_value)}};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__10 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__10_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HTTP/1.0"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__11 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__11_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HTTP/1.1"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__12 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__12_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HTTP/2.0"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__13 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__13_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "HTTP/3.0"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__14 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__14_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__15 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__15_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__16 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__16_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__17 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__17_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__18 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__18_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__19 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__19_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__20 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__20_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "//"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__21 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__21_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__22 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__22_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__23 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__23_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ACL"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__24 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__24_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "BASELINE-CONTROL"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__25 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__25_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "BIND"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__26 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__26_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "CHECKIN"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__27 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__27_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "CHECKOUT"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__28 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__28_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "CONNECT"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__29 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__29_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COPY"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__30 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__30_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "DELETE"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__31 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__31_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GET"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__32 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__32_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HEAD"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__33 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__33_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "LABEL"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__34 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__34_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LINK"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__35 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__35_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LOCK"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__36 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__36_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "MERGE"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__37 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__37_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MKACTIVITY"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__38 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__38_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MKCALENDAR"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__39 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__39_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "MKCOL"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__40 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__40_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "MKREDIRECTREF"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__41 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__41_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MKWORKSPACE"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__42 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__42_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "MOVE"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__43 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__43_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "OPTIONS"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__44 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__44_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ORDERPATCH"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__45 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__45_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PATCH"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__46 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__46_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "POST"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__47 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__47_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "PRI"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__48 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__48_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "PROPFIND"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__49 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__49_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "PROPPATCH"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__50 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__50_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "PUT"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__51 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__51_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "QUERY"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__52 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__52_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "REBIND"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__53 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__53_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "REPORT"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__54 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__54_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SEARCH"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__55 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__55_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "TRACE"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__56 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__56_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UNBIND"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__57 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__57_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UNCHECKOUT"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__58 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__58_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UNLINK"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__59 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__59_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UNLOCK"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__60 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__60_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UPDATE"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__61 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__61_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "UPDATEREDIRECTREF"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__62 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__62_value;
static const lean_string_object l_Std_Http_Request_instToStringHead___lam__2___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "VERSION-CONTROL"};
static const lean_object* l_Std_Http_Request_instToStringHead___lam__2___closed__63 = (const lean_object*)&l_Std_Http_Request_instToStringHead___lam__2___closed__63_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Request_instToStringHead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Request_instToStringHead___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instToStringHead___closed__0 = (const lean_object*)&l_Std_Http_Request_instToStringHead___closed__0_value;
static const lean_closure_object l_Std_Http_Request_instToStringHead___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Request_instToStringHead___lam__2, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Request_instToStringHead___closed__0_value)} };
static const lean_object* l_Std_Http_Request_instToStringHead___closed__1 = (const lean_object*)&l_Std_Http_Request_instToStringHead___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_Request_instToStringHead = (const lean_object*)&l_Std_Http_Request_instToStringHead___closed__1_value;
static lean_once_cell_t l_Std_Http_Request_instEncodeV11Head___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0___closed__0;
static lean_once_cell_t l_Std_Http_Request_instEncodeV11Head___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0___closed__1;
static const lean_closure_object l_Std_Http_Request_instEncodeV11Head___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_appendFieldLine___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0___closed__2 = (const lean_object*)&l_Std_Http_Request_instEncodeV11Head___lam__0___closed__2_value;
static lean_once_cell_t l_Std_Http_Request_instEncodeV11Head___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0___closed__3;
static lean_once_cell_t l_Std_Http_Request_instEncodeV11Head___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0___closed__4;
static lean_once_cell_t l_Std_Http_Request_instEncodeV11Head___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0___closed__5;
static lean_once_cell_t l_Std_Http_Request_instEncodeV11Head___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0___closed__6;
static lean_once_cell_t l_Std_Http_Request_instEncodeV11Head___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0___closed__7;
static lean_once_cell_t l_Std_Http_Request_instEncodeV11Head___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0___closed__8;
static lean_once_cell_t l_Std_Http_Request_instEncodeV11Head___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0___closed__9;
static lean_once_cell_t l_Std_Http_Request_instEncodeV11Head___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0___closed__10;
LEAN_EXPORT lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Request_instEncodeV11Head___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Request_instEncodeV11Head___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_instEncodeV11Head___closed__0 = (const lean_object*)&l_Std_Http_Request_instEncodeV11Head___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Request_instEncodeV11Head = (const lean_object*)&l_Std_Http_Request_instEncodeV11Head___closed__0_value;
static lean_once_cell_t l_Std_Http_Request_new___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_new___closed__0;
static lean_once_cell_t l_Std_Http_Request_new___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_new___closed__1;
LEAN_EXPORT lean_object* l_Std_Http_Request_new;
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_method(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_method___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_version(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_version___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_uri(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_Request_Builder_uri_x21_spec__0(lean_object*);
static const lean_string_object l_Std_Http_Request_Builder_uri_x21___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "expected end of input"};
static const lean_object* l_Std_Http_Request_Builder_uri_x21___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Request_Builder_uri_x21___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Http_Request_Builder_uri_x21___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Request_Builder_uri_x21___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Request_Builder_uri_x21___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Request_Builder_uri_x21___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_uri_x21___lam__0(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Request_Builder_uri_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*9 + 0, .m_other = 9, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(253) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(256) << 1) | 1)),((lean_object*)(((size_t)(8192) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(128) << 1) | 1)),((lean_object*)(((size_t)(8192) << 1) | 1)),((lean_object*)(((size_t)(100) << 1) | 1))}};
static const lean_object* l_Std_Http_Request_Builder_uri_x21___closed__0 = (const lean_object*)&l_Std_Http_Request_Builder_uri_x21___closed__0_value;
static const lean_closure_object l_Std_Http_Request_Builder_uri_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Request_Builder_uri_x21___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Request_Builder_uri_x21___closed__0_value)} };
static const lean_object* l_Std_Http_Request_Builder_uri_x21___closed__1 = (const lean_object*)&l_Std_Http_Request_Builder_uri_x21___closed__1_value;
static const lean_string_object l_Std_Http_Request_Builder_uri_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Std.Http.Data.URI"};
static const lean_object* l_Std_Http_Request_Builder_uri_x21___closed__2 = (const lean_object*)&l_Std_Http_Request_Builder_uri_x21___closed__2_value;
static const lean_string_object l_Std_Http_Request_Builder_uri_x21___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Std.Http.RequestTarget.parse!"};
static const lean_object* l_Std_Http_Request_Builder_uri_x21___closed__3 = (const lean_object*)&l_Std_Http_Request_Builder_uri_x21___closed__3_value;
static const lean_string_object l_Std_Http_Request_Builder_uri_x21___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid request target"};
static const lean_object* l_Std_Http_Request_Builder_uri_x21___closed__4 = (const lean_object*)&l_Std_Http_Request_Builder_uri_x21___closed__4_value;
static lean_once_cell_t l_Std_Http_Request_Builder_uri_x21___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_Builder_uri_x21___closed__5;
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_uri_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_headers(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_header(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_header_x21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_header_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_headerOpt(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Request_Builder_extension___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Extensions_compareName___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Request_Builder_extension___redArg___closed__0 = (const lean_object*)&l_Std_Http_Request_Builder_extension___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_extension___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_extension(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_body___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_body___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_body(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_body___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Request_get___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_get___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_get(lean_object*);
static lean_once_cell_t l_Std_Http_Request_post___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_post___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_post(lean_object*);
static lean_once_cell_t l_Std_Http_Request_put___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_put___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_put(lean_object*);
static lean_once_cell_t l_Std_Http_Request_delete___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_delete___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_delete(lean_object*);
static lean_once_cell_t l_Std_Http_Request_patch___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_patch___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_patch(lean_object*);
static lean_once_cell_t l_Std_Http_Request_head___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_head___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_head(lean_object*);
static lean_once_cell_t l_Std_Http_Request_options___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_options___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_options(lean_object*);
static lean_once_cell_t l_Std_Http_Request_connect___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_connect___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_connect(lean_object*);
static lean_once_cell_t l_Std_Http_Request_trace___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Request_trace___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Request_trace(lean_object*);
static lean_object* _init_l_Std_Http_Request_instInhabitedHead_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; uint8_t v___x_3_; uint8_t v___x_4_; lean_object* v___x_5_; 
v___x_1_ = l_Std_Http_Headers_empty;
v___x_2_ = lean_box(3);
v___x_3_ = 0;
v___x_4_ = 0;
v___x_5_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_5_, 0, v___x_2_);
lean_ctor_set(v___x_5_, 1, v___x_1_);
lean_ctor_set_uint8(v___x_5_, sizeof(void*)*2, v___x_4_);
lean_ctor_set_uint8(v___x_5_, sizeof(void*)*2 + 1, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_l_Std_Http_Request_instInhabitedHead_default(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l_Std_Http_Request_instInhabitedHead_default___closed__0, &l_Std_Http_Request_instInhabitedHead_default___closed__0_once, _init_l_Std_Http_Request_instInhabitedHead_default___closed__0);
return v___x_6_;
}
}
static lean_object* _init_l_Std_Http_Request_instInhabitedHead(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Std_Http_Request_instInhabitedHead_default;
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_Request_instReprHead_repr_spec__0(lean_object* v_a_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_nat_to_int(v_a_8_);
return v___x_9_;
}
}
static lean_object* _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_23_ = lean_unsigned_to_nat(10u);
v___x_24_ = lean_nat_to_int(v___x_23_);
return v___x_24_;
}
}
static lean_object* _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_31_ = lean_unsigned_to_nat(11u);
v___x_32_ = lean_nat_to_int(v___x_31_);
return v___x_32_;
}
}
static lean_object* _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_unsigned_to_nat(7u);
v___x_37_ = lean_nat_to_int(v___x_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__0));
v___x_43_ = lean_string_length(v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = lean_obj_once(&l_Std_Http_Request_instReprHead_repr___redArg___closed__19, &l_Std_Http_Request_instReprHead_repr___redArg___closed__19_once, _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__19);
v___x_45_ = lean_nat_to_int(v___x_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instReprHead_repr___redArg(lean_object* v_x_50_){
_start:
{
uint8_t v_method_51_; uint8_t v_version_52_; lean_object* v_uri_53_; lean_object* v_headers_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; uint8_t v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v_method_51_ = lean_ctor_get_uint8(v_x_50_, sizeof(void*)*2);
v_version_52_ = lean_ctor_get_uint8(v_x_50_, sizeof(void*)*2 + 1);
v_uri_53_ = lean_ctor_get(v_x_50_, 0);
lean_inc(v_uri_53_);
v_headers_54_ = lean_ctor_get(v_x_50_, 1);
lean_inc_ref(v_headers_54_);
lean_dec_ref(v_x_50_);
v___x_55_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__5));
v___x_56_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__6));
v___x_57_ = lean_obj_once(&l_Std_Http_Request_instReprHead_repr___redArg___closed__7, &l_Std_Http_Request_instReprHead_repr___redArg___closed__7_once, _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__7);
v___x_58_ = lean_unsigned_to_nat(0u);
v___x_59_ = l_Std_Http_instReprMethod_repr(v_method_51_, v___x_58_);
v___x_60_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_57_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
v___x_61_ = 0;
v___x_62_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_62_, 0, v___x_60_);
lean_ctor_set_uint8(v___x_62_, sizeof(void*)*1, v___x_61_);
v___x_63_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_56_);
lean_ctor_set(v___x_63_, 1, v___x_62_);
v___x_64_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__9));
v___x_65_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_65_, 0, v___x_63_);
lean_ctor_set(v___x_65_, 1, v___x_64_);
v___x_66_ = lean_box(1);
v___x_67_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_65_);
lean_ctor_set(v___x_67_, 1, v___x_66_);
v___x_68_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__11));
v___x_69_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_67_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
v___x_70_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v___x_55_);
v___x_71_ = lean_obj_once(&l_Std_Http_Request_instReprHead_repr___redArg___closed__12, &l_Std_Http_Request_instReprHead_repr___redArg___closed__12_once, _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__12);
v___x_72_ = l_Std_Http_instReprVersion_repr(v_version_52_, v___x_58_);
v___x_73_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_71_);
lean_ctor_set(v___x_73_, 1, v___x_72_);
v___x_74_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set_uint8(v___x_74_, sizeof(void*)*1, v___x_61_);
v___x_75_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_70_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set(v___x_76_, 1, v___x_64_);
v___x_77_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
lean_ctor_set(v___x_77_, 1, v___x_66_);
v___x_78_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__14));
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_77_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
v___x_80_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_55_);
v___x_81_ = lean_obj_once(&l_Std_Http_Request_instReprHead_repr___redArg___closed__15, &l_Std_Http_Request_instReprHead_repr___redArg___closed__15_once, _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__15);
v___x_82_ = l_Std_Http_instReprRequestTarget_repr(v_uri_53_, v___x_58_);
v___x_83_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_81_);
lean_ctor_set(v___x_83_, 1, v___x_82_);
v___x_84_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set_uint8(v___x_84_, sizeof(void*)*1, v___x_61_);
v___x_85_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_80_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v___x_64_);
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set(v___x_87_, 1, v___x_66_);
v___x_88_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__17));
v___x_89_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_87_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
lean_ctor_set(v___x_90_, 1, v___x_55_);
v___x_91_ = l_Std_Http_instReprHeaders_repr___redArg(v_headers_54_);
v___x_92_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_71_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set_uint8(v___x_93_, sizeof(void*)*1, v___x_61_);
v___x_94_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_94_, 0, v___x_90_);
lean_ctor_set(v___x_94_, 1, v___x_93_);
v___x_95_ = lean_obj_once(&l_Std_Http_Request_instReprHead_repr___redArg___closed__20, &l_Std_Http_Request_instReprHead_repr___redArg___closed__20_once, _init_l_Std_Http_Request_instReprHead_repr___redArg___closed__20);
v___x_96_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__21));
v___x_97_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v___x_94_);
v___x_98_ = ((lean_object*)(l_Std_Http_Request_instReprHead_repr___redArg___closed__22));
v___x_99_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_97_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
v___x_100_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_95_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set_uint8(v___x_101_, sizeof(void*)*1, v___x_61_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instReprHead_repr(lean_object* v_x_102_, lean_object* v_prec_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Std_Http_Request_instReprHead_repr___redArg(v_x_102_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instReprHead_repr___boxed(lean_object* v_x_105_, lean_object* v_prec_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Std_Http_Request_instReprHead_repr(v_x_105_, v_prec_106_);
lean_dec(v_prec_106_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedRequest_default___redArg(lean_object* v_inst_110_){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_111_ = l_Std_Http_Request_instInhabitedHead_default;
v___x_112_ = l_Std_Http_Extensions_empty;
v___x_113_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_113_, 0, v___x_111_);
lean_ctor_set(v___x_113_, 1, v_inst_110_);
lean_ctor_set(v___x_113_, 2, v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedRequest_default(lean_object* v_t_114_, lean_object* v_inst_115_){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = l_Std_Http_instInhabitedRequest_default___redArg(v_inst_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedRequest___redArg(lean_object* v_inst_117_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = l_Std_Http_instInhabitedRequest_default___redArg(v_inst_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instInhabitedRequest(lean_object* v_a_119_, lean_object* v_inst_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = l_Std_Http_instInhabitedRequest_default___redArg(v_inst_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__0(lean_object* v___x_122_, lean_object* v___x_123_, lean_object* v___x_124_, lean_object* v_fst_125_, lean_object* v___x_126_, uint32_t v___x_127_, lean_object* v___x_128_, lean_object* v_it_129_, lean_object* v_acc_130_, lean_object* v_hP_131_, lean_object* v_recur_132_){
_start:
{
lean_object* v_it_134_; lean_object* v_out_135_; lean_object* v_it_151_; lean_object* v_startInclusive_152_; lean_object* v_endExclusive_153_; 
if (lean_obj_tag(v_it_129_) == 0)
{
lean_object* v_currPos_165_; lean_object* v_searcher_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_188_; 
v_currPos_165_ = lean_ctor_get(v_it_129_, 0);
v_searcher_166_ = lean_ctor_get(v_it_129_, 1);
v_isSharedCheck_188_ = !lean_is_exclusive(v_it_129_);
if (v_isSharedCheck_188_ == 0)
{
v___x_168_ = v_it_129_;
v_isShared_169_ = v_isSharedCheck_188_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_searcher_166_);
lean_inc(v_currPos_165_);
lean_dec(v_it_129_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_188_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
uint8_t v_decide_170_; 
v_decide_170_ = lean_nat_dec_eq(v_searcher_166_, v___x_126_);
if (v_decide_170_ == 0)
{
uint32_t v___x_171_; uint8_t v___x_172_; 
lean_dec(v___x_126_);
v___x_171_ = lean_string_utf8_get_fast(v_fst_125_, v_searcher_166_);
v___x_172_ = lean_uint32_dec_eq(v___x_171_, v___x_127_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; lean_object* v___x_175_; 
v___x_173_ = lean_string_utf8_next_fast(v_fst_125_, v_searcher_166_);
lean_dec(v_searcher_166_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 1, v___x_173_);
v___x_175_ = v___x_168_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_currPos_165_);
lean_ctor_set(v_reuseFailAlloc_177_, 1, v___x_173_);
v___x_175_ = v_reuseFailAlloc_177_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
lean_object* v___x_176_; 
v___x_176_ = lean_apply_4(v_recur_132_, v___x_175_, v_acc_130_, lean_box(0), lean_box(0));
return v___x_176_;
}
}
else
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v_slice_181_; lean_object* v_nextIt_183_; 
v___x_178_ = lean_string_utf8_next_fast(v_fst_125_, v_searcher_166_);
v___x_179_ = lean_nat_sub(v___x_178_, v_searcher_166_);
v___x_180_ = lean_nat_add(v_searcher_166_, v___x_179_);
lean_dec(v___x_179_);
v_slice_181_ = l_String_Slice_subslice_x21(v___x_128_, v_currPos_165_, v_searcher_166_);
lean_inc(v___x_180_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 1, v___x_180_);
lean_ctor_set(v___x_168_, 0, v___x_180_);
v_nextIt_183_ = v___x_168_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v___x_180_);
lean_ctor_set(v_reuseFailAlloc_186_, 1, v___x_180_);
v_nextIt_183_ = v_reuseFailAlloc_186_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
lean_object* v_startInclusive_184_; lean_object* v_endExclusive_185_; 
v_startInclusive_184_ = lean_ctor_get(v_slice_181_, 0);
lean_inc(v_startInclusive_184_);
v_endExclusive_185_ = lean_ctor_get(v_slice_181_, 1);
lean_inc(v_endExclusive_185_);
lean_dec_ref(v_slice_181_);
v_it_151_ = v_nextIt_183_;
v_startInclusive_152_ = v_startInclusive_184_;
v_endExclusive_153_ = v_endExclusive_185_;
goto v___jp_150_;
}
}
}
else
{
lean_object* v___x_187_; 
lean_del_object(v___x_168_);
lean_dec(v_searcher_166_);
v___x_187_ = lean_box(1);
v_it_151_ = v___x_187_;
v_startInclusive_152_ = v_currPos_165_;
v_endExclusive_153_ = v___x_126_;
goto v___jp_150_;
}
}
}
else
{
lean_dec_ref(v_recur_132_);
lean_dec(v___x_126_);
return v_acc_130_;
}
v___jp_133_:
{
if (lean_obj_tag(v_acc_130_) == 0)
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_136_, 0, v_out_135_);
v___x_137_ = lean_apply_4(v_recur_132_, v_it_134_, v___x_136_, lean_box(0), lean_box(0));
return v___x_137_;
}
else
{
lean_object* v_val_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_149_; 
v_val_138_ = lean_ctor_get(v_acc_130_, 0);
v_isSharedCheck_149_ = !lean_is_exclusive(v_acc_130_);
if (v_isSharedCheck_149_ == 0)
{
v___x_140_ = v_acc_130_;
v_isShared_141_ = v_isSharedCheck_149_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_val_138_);
lean_dec(v_acc_130_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_149_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_146_; 
v___x_142_ = lean_string_utf8_extract_fast(v___x_122_, v___x_123_, v___x_124_);
v___x_143_ = lean_string_append(v_val_138_, v___x_142_);
lean_dec_ref(v___x_142_);
v___x_144_ = lean_string_append(v___x_143_, v_out_135_);
lean_dec_ref(v_out_135_);
if (v_isShared_141_ == 0)
{
lean_ctor_set(v___x_140_, 0, v___x_144_);
v___x_146_ = v___x_140_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_144_);
v___x_146_ = v_reuseFailAlloc_148_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
lean_object* v___x_147_; 
v___x_147_ = lean_apply_4(v_recur_132_, v_it_134_, v___x_146_, lean_box(0), lean_box(0));
return v___x_147_;
}
}
}
}
v___jp_150_:
{
lean_object* v___x_154_; uint32_t v___x_155_; uint32_t v___x_156_; uint8_t v___x_157_; 
v___x_154_ = lean_string_utf8_extract_fast(v_fst_125_, v_startInclusive_152_, v_endExclusive_153_);
lean_dec(v_endExclusive_153_);
lean_dec(v_startInclusive_152_);
v___x_155_ = lean_string_utf8_get(v___x_154_, v___x_123_);
v___x_156_ = 97;
v___x_157_ = lean_uint32_dec_le(v___x_156_, v___x_155_);
if (v___x_157_ == 0)
{
lean_object* v___x_158_; 
v___x_158_ = lean_string_utf8_set(v___x_154_, v___x_123_, v___x_155_);
v_it_134_ = v_it_151_;
v_out_135_ = v___x_158_;
goto v___jp_133_;
}
else
{
uint32_t v___x_159_; uint8_t v___x_160_; 
v___x_159_ = 122;
v___x_160_ = lean_uint32_dec_le(v___x_155_, v___x_159_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; 
v___x_161_ = lean_string_utf8_set(v___x_154_, v___x_123_, v___x_155_);
v_it_134_ = v_it_151_;
v_out_135_ = v___x_161_;
goto v___jp_133_;
}
else
{
uint32_t v___x_162_; uint32_t v___x_163_; lean_object* v___x_164_; 
v___x_162_ = 4294967264;
v___x_163_ = lean_uint32_add(v___x_155_, v___x_162_);
v___x_164_ = lean_string_utf8_set(v___x_154_, v___x_123_, v___x_163_);
v_it_134_ = v_it_151_;
v_out_135_ = v___x_164_;
goto v___jp_133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__0___boxed(lean_object* v___x_189_, lean_object* v___x_190_, lean_object* v___x_191_, lean_object* v_fst_192_, lean_object* v___x_193_, lean_object* v___x_194_, lean_object* v___x_195_, lean_object* v_it_196_, lean_object* v_acc_197_, lean_object* v_hP_198_, lean_object* v_recur_199_){
_start:
{
uint32_t v___x_1474__boxed_200_; lean_object* v_res_201_; 
v___x_1474__boxed_200_ = lean_unbox_uint32(v___x_194_);
lean_dec(v___x_194_);
v_res_201_ = l_Std_Http_Request_instToStringHead___lam__0(v___x_189_, v___x_190_, v___x_191_, v_fst_192_, v___x_193_, v___x_1474__boxed_200_, v___x_195_, v_it_196_, v_acc_197_, v_hP_198_, v_recur_199_);
lean_dec_ref(v___x_195_);
lean_dec_ref(v_fst_192_);
lean_dec(v___x_191_);
lean_dec(v___x_190_);
lean_dec_ref(v___x_189_);
return v_res_201_;
}
}
static lean_object* _init_l_Std_Http_Request_instToStringHead___lam__1___boxed__const__1(void){
_start:
{
uint32_t v___x_206_; lean_object* v___x_207_; 
v___x_206_ = 45;
v___x_207_ = lean_box_uint32(v___x_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__1(lean_object* v_x_208_){
_start:
{
lean_object* v_fst_209_; lean_object* v_snd_210_; lean_object* v___y_212_; lean_object* v___f_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v_it_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___f_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v_fst_209_ = lean_ctor_get(v_x_208_, 0);
lean_inc_n(v_fst_209_, 2);
v_snd_210_ = lean_ctor_get(v_x_208_, 1);
lean_inc(v_snd_210_);
lean_dec_ref(v_x_208_);
v___f_216_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__1___closed__1));
v___x_217_ = lean_unsigned_to_nat(0u);
v___x_218_ = lean_string_utf8_byte_size(v_fst_209_);
v___x_219_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_219_, 0, v_fst_209_);
lean_ctor_set(v___x_219_, 1, v___x_217_);
lean_ctor_set(v___x_219_, 2, v___x_218_);
lean_inc_ref(v___x_219_);
v_it_220_ = l_String_Slice_splitToSubslice___redArg(v___x_219_, v___f_216_);
v___x_221_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__1___closed__2));
v___x_222_ = lean_unsigned_to_nat(1u);
v___x_223_ = l_Std_Http_Request_instToStringHead___lam__1___boxed__const__1;
v___f_224_ = lean_alloc_closure((void*)(l_Std_Http_Request_instToStringHead___lam__0___boxed), 11, 7);
lean_closure_set(v___f_224_, 0, v___x_221_);
lean_closure_set(v___f_224_, 1, v___x_217_);
lean_closure_set(v___f_224_, 2, v___x_222_);
lean_closure_set(v___f_224_, 3, v_fst_209_);
lean_closure_set(v___f_224_, 4, v___x_218_);
lean_closure_set(v___f_224_, 5, v___x_223_);
lean_closure_set(v___f_224_, 6, v___x_219_);
v___x_225_ = lean_box(0);
v___x_226_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_224_, v_it_220_, v___x_225_, lean_box(0));
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v___x_227_; 
v___x_227_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__1___closed__3));
v___y_212_ = v___x_227_;
goto v___jp_211_;
}
else
{
lean_object* v_val_228_; 
v_val_228_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_val_228_);
lean_dec_ref_known(v___x_226_, 1);
v___y_212_ = v_val_228_;
goto v___jp_211_;
}
v___jp_211_:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_213_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__1___closed__0));
v___x_214_ = lean_string_append(v___y_212_, v___x_213_);
v___x_215_ = lean_string_append(v___x_214_, v_snd_210_);
lean_dec(v_snd_210_);
return v___x_215_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instToStringHead___lam__2(lean_object* v___f_302_, lean_object* v_req_303_){
_start:
{
uint8_t v_method_304_; uint8_t v_version_305_; lean_object* v_uri_306_; lean_object* v_headers_307_; lean_object* v___y_309_; lean_object* v___y_310_; lean_object* v___y_323_; lean_object* v___y_324_; lean_object* v___y_325_; lean_object* v___y_333_; lean_object* v___y_334_; lean_object* v___y_335_; lean_object* v___y_336_; lean_object* v___y_340_; lean_object* v___y_341_; lean_object* v___y_342_; lean_object* v___y_343_; lean_object* v___y_344_; lean_object* v___y_345_; lean_object* v___y_346_; lean_object* v___y_354_; lean_object* v___y_355_; lean_object* v___y_356_; lean_object* v___y_357_; lean_object* v___y_358_; lean_object* v___y_359_; lean_object* v___y_360_; uint8_t v___y_361_; lean_object* v___y_372_; lean_object* v___y_373_; lean_object* v___y_374_; lean_object* v___y_375_; lean_object* v___y_376_; lean_object* v___y_377_; lean_object* v___y_378_; lean_object* v___y_381_; lean_object* v___y_382_; lean_object* v___y_383_; lean_object* v___y_384_; lean_object* v___y_385_; lean_object* v___y_386_; lean_object* v___y_387_; lean_object* v___y_388_; lean_object* v___y_389_; lean_object* v___y_390_; lean_object* v___y_391_; lean_object* v___y_397_; lean_object* v___y_398_; lean_object* v___y_399_; lean_object* v___y_400_; lean_object* v___y_401_; lean_object* v___y_402_; lean_object* v_port_403_; lean_object* v___y_404_; lean_object* v___y_405_; lean_object* v___y_406_; lean_object* v___y_407_; lean_object* v___y_416_; lean_object* v___y_417_; lean_object* v___y_418_; lean_object* v___y_419_; lean_object* v___y_420_; lean_object* v___y_421_; lean_object* v_host_422_; lean_object* v_port_423_; lean_object* v___y_424_; lean_object* v___y_425_; lean_object* v___y_426_; lean_object* v___y_437_; lean_object* v___y_438_; lean_object* v___y_439_; lean_object* v___y_440_; lean_object* v___y_441_; lean_object* v___y_445_; lean_object* v_port_446_; lean_object* v___y_447_; lean_object* v___y_448_; lean_object* v___y_449_; lean_object* v___y_458_; lean_object* v_host_459_; lean_object* v_port_460_; lean_object* v___y_461_; lean_object* v___y_462_; lean_object* v___y_473_; 
v_method_304_ = lean_ctor_get_uint8(v_req_303_, sizeof(void*)*2);
v_version_305_ = lean_ctor_get_uint8(v_req_303_, sizeof(void*)*2 + 1);
v_uri_306_ = lean_ctor_get(v_req_303_, 0);
lean_inc(v_uri_306_);
v_headers_307_ = lean_ctor_get(v_req_303_, 1);
lean_inc_ref(v_headers_307_);
lean_dec_ref(v_req_303_);
switch(v_method_304_)
{
case 0:
{
lean_object* v___x_541_; 
v___x_541_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__24));
v___y_473_ = v___x_541_;
goto v___jp_472_;
}
case 1:
{
lean_object* v___x_542_; 
v___x_542_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__25));
v___y_473_ = v___x_542_;
goto v___jp_472_;
}
case 2:
{
lean_object* v___x_543_; 
v___x_543_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__26));
v___y_473_ = v___x_543_;
goto v___jp_472_;
}
case 3:
{
lean_object* v___x_544_; 
v___x_544_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__27));
v___y_473_ = v___x_544_;
goto v___jp_472_;
}
case 4:
{
lean_object* v___x_545_; 
v___x_545_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__28));
v___y_473_ = v___x_545_;
goto v___jp_472_;
}
case 5:
{
lean_object* v___x_546_; 
v___x_546_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__29));
v___y_473_ = v___x_546_;
goto v___jp_472_;
}
case 6:
{
lean_object* v___x_547_; 
v___x_547_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__30));
v___y_473_ = v___x_547_;
goto v___jp_472_;
}
case 7:
{
lean_object* v___x_548_; 
v___x_548_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__31));
v___y_473_ = v___x_548_;
goto v___jp_472_;
}
case 8:
{
lean_object* v___x_549_; 
v___x_549_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__32));
v___y_473_ = v___x_549_;
goto v___jp_472_;
}
case 9:
{
lean_object* v___x_550_; 
v___x_550_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__33));
v___y_473_ = v___x_550_;
goto v___jp_472_;
}
case 10:
{
lean_object* v___x_551_; 
v___x_551_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__34));
v___y_473_ = v___x_551_;
goto v___jp_472_;
}
case 11:
{
lean_object* v___x_552_; 
v___x_552_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__35));
v___y_473_ = v___x_552_;
goto v___jp_472_;
}
case 12:
{
lean_object* v___x_553_; 
v___x_553_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__36));
v___y_473_ = v___x_553_;
goto v___jp_472_;
}
case 13:
{
lean_object* v___x_554_; 
v___x_554_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__37));
v___y_473_ = v___x_554_;
goto v___jp_472_;
}
case 14:
{
lean_object* v___x_555_; 
v___x_555_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__38));
v___y_473_ = v___x_555_;
goto v___jp_472_;
}
case 15:
{
lean_object* v___x_556_; 
v___x_556_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__39));
v___y_473_ = v___x_556_;
goto v___jp_472_;
}
case 16:
{
lean_object* v___x_557_; 
v___x_557_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__40));
v___y_473_ = v___x_557_;
goto v___jp_472_;
}
case 17:
{
lean_object* v___x_558_; 
v___x_558_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__41));
v___y_473_ = v___x_558_;
goto v___jp_472_;
}
case 18:
{
lean_object* v___x_559_; 
v___x_559_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__42));
v___y_473_ = v___x_559_;
goto v___jp_472_;
}
case 19:
{
lean_object* v___x_560_; 
v___x_560_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__43));
v___y_473_ = v___x_560_;
goto v___jp_472_;
}
case 20:
{
lean_object* v___x_561_; 
v___x_561_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__44));
v___y_473_ = v___x_561_;
goto v___jp_472_;
}
case 21:
{
lean_object* v___x_562_; 
v___x_562_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__45));
v___y_473_ = v___x_562_;
goto v___jp_472_;
}
case 22:
{
lean_object* v___x_563_; 
v___x_563_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__46));
v___y_473_ = v___x_563_;
goto v___jp_472_;
}
case 23:
{
lean_object* v___x_564_; 
v___x_564_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__47));
v___y_473_ = v___x_564_;
goto v___jp_472_;
}
case 24:
{
lean_object* v___x_565_; 
v___x_565_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__48));
v___y_473_ = v___x_565_;
goto v___jp_472_;
}
case 25:
{
lean_object* v___x_566_; 
v___x_566_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__49));
v___y_473_ = v___x_566_;
goto v___jp_472_;
}
case 26:
{
lean_object* v___x_567_; 
v___x_567_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__50));
v___y_473_ = v___x_567_;
goto v___jp_472_;
}
case 27:
{
lean_object* v___x_568_; 
v___x_568_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__51));
v___y_473_ = v___x_568_;
goto v___jp_472_;
}
case 28:
{
lean_object* v___x_569_; 
v___x_569_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__52));
v___y_473_ = v___x_569_;
goto v___jp_472_;
}
case 29:
{
lean_object* v___x_570_; 
v___x_570_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__53));
v___y_473_ = v___x_570_;
goto v___jp_472_;
}
case 30:
{
lean_object* v___x_571_; 
v___x_571_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__54));
v___y_473_ = v___x_571_;
goto v___jp_472_;
}
case 31:
{
lean_object* v___x_572_; 
v___x_572_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__55));
v___y_473_ = v___x_572_;
goto v___jp_472_;
}
case 32:
{
lean_object* v___x_573_; 
v___x_573_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__56));
v___y_473_ = v___x_573_;
goto v___jp_472_;
}
case 33:
{
lean_object* v___x_574_; 
v___x_574_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__57));
v___y_473_ = v___x_574_;
goto v___jp_472_;
}
case 34:
{
lean_object* v___x_575_; 
v___x_575_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__58));
v___y_473_ = v___x_575_;
goto v___jp_472_;
}
case 35:
{
lean_object* v___x_576_; 
v___x_576_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__59));
v___y_473_ = v___x_576_;
goto v___jp_472_;
}
case 36:
{
lean_object* v___x_577_; 
v___x_577_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__60));
v___y_473_ = v___x_577_;
goto v___jp_472_;
}
case 37:
{
lean_object* v___x_578_; 
v___x_578_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__61));
v___y_473_ = v___x_578_;
goto v___jp_472_;
}
case 38:
{
lean_object* v___x_579_; 
v___x_579_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__62));
v___y_473_ = v___x_579_;
goto v___jp_472_;
}
default: 
{
lean_object* v___x_580_; 
v___x_580_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__63));
v___y_473_ = v___x_580_;
goto v___jp_472_;
}
}
v___jp_308_:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; size_t v_sz_315_; size_t v___x_316_; lean_object* v_pairs_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_311_ = lean_string_append(v___y_309_, v___y_310_);
v___x_312_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__0));
v___x_313_ = lean_string_append(v___x_311_, v___x_312_);
v___x_314_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__10));
v_sz_315_ = lean_array_size(v_headers_307_);
v___x_316_ = ((size_t)0ULL);
v_pairs_317_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_314_, v___f_302_, v_sz_315_, v___x_316_, v_headers_307_);
v___x_318_ = lean_array_to_list(v_pairs_317_);
v___x_319_ = l_String_intercalate(v___x_312_, v___x_318_);
v___x_320_ = lean_string_append(v___x_313_, v___x_319_);
lean_dec_ref(v___x_319_);
v___x_321_ = lean_string_append(v___x_320_, v___x_312_);
return v___x_321_;
}
v___jp_322_:
{
lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_326_ = lean_string_append(v___y_323_, v___y_325_);
lean_dec_ref(v___y_325_);
v___x_327_ = lean_string_append(v___x_326_, v___y_324_);
switch(v_version_305_)
{
case 0:
{
lean_object* v___x_328_; 
v___x_328_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__11));
v___y_309_ = v___x_327_;
v___y_310_ = v___x_328_;
goto v___jp_308_;
}
case 1:
{
lean_object* v___x_329_; 
v___x_329_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__12));
v___y_309_ = v___x_327_;
v___y_310_ = v___x_329_;
goto v___jp_308_;
}
case 2:
{
lean_object* v___x_330_; 
v___x_330_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__13));
v___y_309_ = v___x_327_;
v___y_310_ = v___x_330_;
goto v___jp_308_;
}
default: 
{
lean_object* v___x_331_; 
v___x_331_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__14));
v___y_309_ = v___x_327_;
v___y_310_ = v___x_331_;
goto v___jp_308_;
}
}
}
v___jp_332_:
{
lean_object* v_queryStr_337_; lean_object* v___x_338_; 
v_queryStr_337_ = l_Std_Http_URI_Query_formatOption(v___y_333_);
v___x_338_ = lean_string_append(v___y_336_, v_queryStr_337_);
lean_dec_ref(v_queryStr_337_);
v___y_323_ = v___y_334_;
v___y_324_ = v___y_335_;
v___y_325_ = v___x_338_;
goto v___jp_322_;
}
v___jp_339_:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_347_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__15));
v___x_348_ = lean_string_append(v___y_340_, v___x_347_);
v___x_349_ = lean_string_append(v___x_348_, v___y_342_);
lean_dec_ref(v___y_342_);
v___x_350_ = lean_string_append(v___x_349_, v___y_344_);
lean_dec_ref(v___y_344_);
v___x_351_ = lean_string_append(v___x_350_, v___y_343_);
lean_dec_ref(v___y_343_);
v___x_352_ = lean_string_append(v___x_351_, v___y_346_);
lean_dec_ref(v___y_346_);
v___y_323_ = v___y_341_;
v___y_324_ = v___y_345_;
v___y_325_ = v___x_352_;
goto v___jp_322_;
}
v___jp_353_:
{
uint8_t v___x_362_; lean_object* v_pathPart_363_; lean_object* v_queryPart_364_; 
v___x_362_ = 1;
v_pathPart_363_ = l_Std_Http_URI_Path_render(v___y_355_, v___y_361_, v___x_362_);
v_queryPart_364_ = l_Std_Http_URI_Query_formatOption(v___y_356_);
if (lean_obj_tag(v___y_359_) == 0)
{
lean_object* v___x_365_; 
v___x_365_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__1___closed__3));
v___y_340_ = v___y_354_;
v___y_341_ = v___y_357_;
v___y_342_ = v___y_358_;
v___y_343_ = v_queryPart_364_;
v___y_344_ = v_pathPart_363_;
v___y_345_ = v___y_360_;
v___y_346_ = v___x_365_;
goto v___jp_339_;
}
else
{
lean_object* v_val_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v_val_366_ = lean_ctor_get(v___y_359_, 0);
lean_inc(v_val_366_);
lean_dec_ref_known(v___y_359_, 1);
v___x_367_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__16));
v___x_368_ = l_Std_Http_URI_EncodedFragment_encode(v_val_366_);
v___x_369_ = lean_string_from_utf8_unchecked(v___x_368_);
v___x_370_ = lean_string_append(v___x_367_, v___x_369_);
lean_dec_ref(v___x_369_);
v___y_340_ = v___y_354_;
v___y_341_ = v___y_357_;
v___y_342_ = v___y_358_;
v___y_343_ = v_queryPart_364_;
v___y_344_ = v_pathPart_363_;
v___y_345_ = v___y_360_;
v___y_346_ = v___x_370_;
goto v___jp_339_;
}
}
v___jp_371_:
{
uint8_t v___x_379_; 
v___x_379_ = 0;
v___y_354_ = v___y_372_;
v___y_355_ = v___y_373_;
v___y_356_ = v___y_374_;
v___y_357_ = v___y_375_;
v___y_358_ = v___y_378_;
v___y_359_ = v___y_376_;
v___y_360_ = v___y_377_;
v___y_361_ = v___x_379_;
goto v___jp_353_;
}
v___jp_380_:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_392_ = lean_string_append(v___y_388_, v___y_384_);
lean_dec_ref(v___y_384_);
v___x_393_ = lean_string_append(v___x_392_, v___y_391_);
lean_dec_ref(v___y_391_);
lean_inc_ref(v___y_385_);
v___x_394_ = lean_string_append(v___y_385_, v___x_393_);
lean_dec_ref(v___x_393_);
if (lean_obj_tag(v___y_389_) == 0)
{
v___y_372_ = v___y_381_;
v___y_373_ = v___y_382_;
v___y_374_ = v___y_383_;
v___y_375_ = v___y_386_;
v___y_376_ = v___y_387_;
v___y_377_ = v___y_390_;
v___y_378_ = v___x_394_;
goto v___jp_371_;
}
else
{
uint8_t v___x_395_; 
lean_dec_ref_known(v___y_389_, 1);
v___x_395_ = 1;
v___y_354_ = v___y_381_;
v___y_355_ = v___y_382_;
v___y_356_ = v___y_383_;
v___y_357_ = v___y_386_;
v___y_358_ = v___x_394_;
v___y_359_ = v___y_387_;
v___y_360_ = v___y_390_;
v___y_361_ = v___x_395_;
goto v___jp_353_;
}
}
v___jp_396_:
{
switch(lean_obj_tag(v_port_403_))
{
case 0:
{
lean_object* v___x_408_; 
v___x_408_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__1___closed__3));
v___y_381_ = v___y_397_;
v___y_382_ = v___y_398_;
v___y_383_ = v___y_399_;
v___y_384_ = v___y_407_;
v___y_385_ = v___y_400_;
v___y_386_ = v___y_401_;
v___y_387_ = v___y_402_;
v___y_388_ = v___y_404_;
v___y_389_ = v___y_405_;
v___y_390_ = v___y_406_;
v___y_391_ = v___x_408_;
goto v___jp_380_;
}
case 1:
{
lean_object* v___x_409_; 
v___x_409_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__15));
v___y_381_ = v___y_397_;
v___y_382_ = v___y_398_;
v___y_383_ = v___y_399_;
v___y_384_ = v___y_407_;
v___y_385_ = v___y_400_;
v___y_386_ = v___y_401_;
v___y_387_ = v___y_402_;
v___y_388_ = v___y_404_;
v___y_389_ = v___y_405_;
v___y_390_ = v___y_406_;
v___y_391_ = v___x_409_;
goto v___jp_380_;
}
default: 
{
uint16_t v_port_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v_port_410_ = lean_ctor_get_uint16(v_port_403_, 0);
lean_dec_ref_known(v_port_403_, 0);
v___x_411_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__15));
v___x_412_ = lean_uint16_to_nat(v_port_410_);
v___x_413_ = l_Nat_reprFast(v___x_412_);
v___x_414_ = lean_string_append(v___x_411_, v___x_413_);
lean_dec_ref(v___x_413_);
v___y_381_ = v___y_397_;
v___y_382_ = v___y_398_;
v___y_383_ = v___y_399_;
v___y_384_ = v___y_407_;
v___y_385_ = v___y_400_;
v___y_386_ = v___y_401_;
v___y_387_ = v___y_402_;
v___y_388_ = v___y_404_;
v___y_389_ = v___y_405_;
v___y_390_ = v___y_406_;
v___y_391_ = v___x_414_;
goto v___jp_380_;
}
}
}
v___jp_415_:
{
switch(lean_obj_tag(v_host_422_))
{
case 0:
{
lean_object* v_name_427_; 
v_name_427_ = lean_ctor_get(v_host_422_, 0);
lean_inc_ref(v_name_427_);
lean_dec_ref_known(v_host_422_, 1);
v___y_397_ = v___y_416_;
v___y_398_ = v___y_417_;
v___y_399_ = v___y_418_;
v___y_400_ = v___y_419_;
v___y_401_ = v___y_420_;
v___y_402_ = v___y_421_;
v_port_403_ = v_port_423_;
v___y_404_ = v___y_426_;
v___y_405_ = v___y_424_;
v___y_406_ = v___y_425_;
v___y_407_ = v_name_427_;
goto v___jp_396_;
}
case 1:
{
lean_object* v_ipv4_428_; lean_object* v___x_429_; 
v_ipv4_428_ = lean_ctor_get(v_host_422_, 0);
lean_inc_ref(v_ipv4_428_);
lean_dec_ref_known(v_host_422_, 1);
v___x_429_ = lean_uv_ntop_v4(v_ipv4_428_);
lean_dec_ref(v_ipv4_428_);
v___y_397_ = v___y_416_;
v___y_398_ = v___y_417_;
v___y_399_ = v___y_418_;
v___y_400_ = v___y_419_;
v___y_401_ = v___y_420_;
v___y_402_ = v___y_421_;
v_port_403_ = v_port_423_;
v___y_404_ = v___y_426_;
v___y_405_ = v___y_424_;
v___y_406_ = v___y_425_;
v___y_407_ = v___x_429_;
goto v___jp_396_;
}
default: 
{
lean_object* v_ipv6_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v_ipv6_430_ = lean_ctor_get(v_host_422_, 0);
lean_inc_ref(v_ipv6_430_);
lean_dec_ref_known(v_host_422_, 1);
v___x_431_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__17));
v___x_432_ = lean_uv_ntop_v6(v_ipv6_430_);
lean_dec_ref(v_ipv6_430_);
v___x_433_ = lean_string_append(v___x_431_, v___x_432_);
lean_dec_ref(v___x_432_);
v___x_434_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__18));
v___x_435_ = lean_string_append(v___x_433_, v___x_434_);
v___y_397_ = v___y_416_;
v___y_398_ = v___y_417_;
v___y_399_ = v___y_418_;
v___y_400_ = v___y_419_;
v___y_401_ = v___y_420_;
v___y_402_ = v___y_421_;
v_port_403_ = v_port_423_;
v___y_404_ = v___y_426_;
v___y_405_ = v___y_424_;
v___y_406_ = v___y_425_;
v___y_407_ = v___x_435_;
goto v___jp_396_;
}
}
}
v___jp_436_:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = lean_string_append(v___y_440_, v___y_437_);
lean_dec_ref(v___y_437_);
v___x_443_ = lean_string_append(v___x_442_, v___y_441_);
lean_dec_ref(v___y_441_);
v___y_323_ = v___y_438_;
v___y_324_ = v___y_439_;
v___y_325_ = v___x_443_;
goto v___jp_322_;
}
v___jp_444_:
{
switch(lean_obj_tag(v_port_446_))
{
case 0:
{
lean_object* v___x_450_; 
v___x_450_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__1___closed__3));
v___y_437_ = v___y_449_;
v___y_438_ = v___y_445_;
v___y_439_ = v___y_448_;
v___y_440_ = v___y_447_;
v___y_441_ = v___x_450_;
goto v___jp_436_;
}
case 1:
{
lean_object* v___x_451_; 
v___x_451_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__15));
v___y_437_ = v___y_449_;
v___y_438_ = v___y_445_;
v___y_439_ = v___y_448_;
v___y_440_ = v___y_447_;
v___y_441_ = v___x_451_;
goto v___jp_436_;
}
default: 
{
uint16_t v_port_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v_port_452_ = lean_ctor_get_uint16(v_port_446_, 0);
lean_dec_ref_known(v_port_446_, 0);
v___x_453_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__15));
v___x_454_ = lean_uint16_to_nat(v_port_452_);
v___x_455_ = l_Nat_reprFast(v___x_454_);
v___x_456_ = lean_string_append(v___x_453_, v___x_455_);
lean_dec_ref(v___x_455_);
v___y_437_ = v___y_449_;
v___y_438_ = v___y_445_;
v___y_439_ = v___y_448_;
v___y_440_ = v___y_447_;
v___y_441_ = v___x_456_;
goto v___jp_436_;
}
}
}
v___jp_457_:
{
switch(lean_obj_tag(v_host_459_))
{
case 0:
{
lean_object* v_name_463_; 
v_name_463_ = lean_ctor_get(v_host_459_, 0);
lean_inc_ref(v_name_463_);
lean_dec_ref_known(v_host_459_, 1);
v___y_445_ = v___y_458_;
v_port_446_ = v_port_460_;
v___y_447_ = v___y_462_;
v___y_448_ = v___y_461_;
v___y_449_ = v_name_463_;
goto v___jp_444_;
}
case 1:
{
lean_object* v_ipv4_464_; lean_object* v___x_465_; 
v_ipv4_464_ = lean_ctor_get(v_host_459_, 0);
lean_inc_ref(v_ipv4_464_);
lean_dec_ref_known(v_host_459_, 1);
v___x_465_ = lean_uv_ntop_v4(v_ipv4_464_);
lean_dec_ref(v_ipv4_464_);
v___y_445_ = v___y_458_;
v_port_446_ = v_port_460_;
v___y_447_ = v___y_462_;
v___y_448_ = v___y_461_;
v___y_449_ = v___x_465_;
goto v___jp_444_;
}
default: 
{
lean_object* v_ipv6_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v_ipv6_466_ = lean_ctor_get(v_host_459_, 0);
lean_inc_ref(v_ipv6_466_);
lean_dec_ref_known(v_host_459_, 1);
v___x_467_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__17));
v___x_468_ = lean_uv_ntop_v6(v_ipv6_466_);
lean_dec_ref(v_ipv6_466_);
v___x_469_ = lean_string_append(v___x_467_, v___x_468_);
lean_dec_ref(v___x_468_);
v___x_470_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__18));
v___x_471_ = lean_string_append(v___x_469_, v___x_470_);
v___y_445_ = v___y_458_;
v_port_446_ = v_port_460_;
v___y_447_ = v___y_462_;
v___y_448_ = v___y_461_;
v___y_449_ = v___x_471_;
goto v___jp_444_;
}
}
}
v___jp_472_:
{
lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_474_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__19));
lean_inc_ref(v___y_473_);
v___x_475_ = lean_string_append(v___y_473_, v___x_474_);
switch(lean_obj_tag(v_uri_306_))
{
case 0:
{
lean_object* v_path_476_; lean_object* v_query_477_; uint8_t v___x_478_; lean_object* v_pathStr_479_; lean_object* v___x_480_; lean_object* v___x_481_; uint8_t v___x_482_; 
v_path_476_ = lean_ctor_get(v_uri_306_, 0);
lean_inc_ref(v_path_476_);
v_query_477_ = lean_ctor_get(v_uri_306_, 1);
lean_inc(v_query_477_);
lean_dec_ref_known(v_uri_306_, 2);
v___x_478_ = 1;
v_pathStr_479_ = l_Std_Http_URI_Path_render(v_path_476_, v___x_478_, v___x_478_);
v___x_480_ = lean_string_utf8_byte_size(v_pathStr_479_);
v___x_481_ = lean_unsigned_to_nat(0u);
v___x_482_ = lean_nat_dec_eq(v___x_480_, v___x_481_);
if (v___x_482_ == 0)
{
v___y_333_ = v_query_477_;
v___y_334_ = v___x_475_;
v___y_335_ = v___x_474_;
v___y_336_ = v_pathStr_479_;
goto v___jp_332_;
}
else
{
lean_object* v___x_483_; 
lean_dec_ref(v_pathStr_479_);
v___x_483_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__20));
v___y_333_ = v_query_477_;
v___y_334_ = v___x_475_;
v___y_335_ = v___x_474_;
v___y_336_ = v___x_483_;
goto v___jp_332_;
}
}
case 1:
{
lean_object* v_uri_484_; lean_object* v_authority_485_; 
v_uri_484_ = lean_ctor_get(v_uri_306_, 0);
lean_inc_ref(v_uri_484_);
lean_dec_ref_known(v_uri_306_, 1);
v_authority_485_ = lean_ctor_get(v_uri_484_, 1);
if (lean_obj_tag(v_authority_485_) == 0)
{
lean_object* v_scheme_486_; lean_object* v_path_487_; lean_object* v_query_488_; lean_object* v_fragment_489_; lean_object* v___x_490_; 
v_scheme_486_ = lean_ctor_get(v_uri_484_, 0);
lean_inc_ref(v_scheme_486_);
v_path_487_ = lean_ctor_get(v_uri_484_, 2);
lean_inc_ref(v_path_487_);
v_query_488_ = lean_ctor_get(v_uri_484_, 3);
lean_inc(v_query_488_);
v_fragment_489_ = lean_ctor_get(v_uri_484_, 4);
lean_inc(v_fragment_489_);
lean_dec_ref(v_uri_484_);
v___x_490_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__1___closed__3));
v___y_372_ = v_scheme_486_;
v___y_373_ = v_path_487_;
v___y_374_ = v_query_488_;
v___y_375_ = v___x_475_;
v___y_376_ = v_fragment_489_;
v___y_377_ = v___x_474_;
v___y_378_ = v___x_490_;
goto v___jp_371_;
}
else
{
lean_object* v_val_491_; lean_object* v_scheme_492_; lean_object* v_path_493_; lean_object* v_query_494_; lean_object* v_fragment_495_; lean_object* v_userInfo_496_; lean_object* v_host_497_; lean_object* v_port_498_; lean_object* v___x_499_; 
lean_inc_ref(v_authority_485_);
v_val_491_ = lean_ctor_get(v_authority_485_, 0);
v_scheme_492_ = lean_ctor_get(v_uri_484_, 0);
lean_inc_ref(v_scheme_492_);
v_path_493_ = lean_ctor_get(v_uri_484_, 2);
lean_inc_ref(v_path_493_);
v_query_494_ = lean_ctor_get(v_uri_484_, 3);
lean_inc(v_query_494_);
v_fragment_495_ = lean_ctor_get(v_uri_484_, 4);
lean_inc(v_fragment_495_);
lean_dec_ref(v_uri_484_);
v_userInfo_496_ = lean_ctor_get(v_val_491_, 0);
v_host_497_ = lean_ctor_get(v_val_491_, 1);
lean_inc_ref(v_host_497_);
v_port_498_ = lean_ctor_get(v_val_491_, 2);
lean_inc(v_port_498_);
v___x_499_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__21));
if (lean_obj_tag(v_userInfo_496_) == 0)
{
lean_object* v___x_500_; 
v___x_500_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__1___closed__3));
v___y_416_ = v_scheme_492_;
v___y_417_ = v_path_493_;
v___y_418_ = v_query_494_;
v___y_419_ = v___x_499_;
v___y_420_ = v___x_475_;
v___y_421_ = v_fragment_495_;
v_host_422_ = v_host_497_;
v_port_423_ = v_port_498_;
v___y_424_ = v_authority_485_;
v___y_425_ = v___x_474_;
v___y_426_ = v___x_500_;
goto v___jp_415_;
}
else
{
lean_object* v_val_501_; lean_object* v_password_502_; 
v_val_501_ = lean_ctor_get(v_userInfo_496_, 0);
v_password_502_ = lean_ctor_get(v_val_501_, 1);
if (lean_obj_tag(v_password_502_) == 0)
{
lean_object* v_username_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v_username_503_ = lean_ctor_get(v_val_501_, 0);
lean_inc_ref(v_username_503_);
v___x_504_ = lean_string_from_utf8_unchecked(v_username_503_);
v___x_505_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__22));
v___x_506_ = lean_string_append(v___x_504_, v___x_505_);
v___y_416_ = v_scheme_492_;
v___y_417_ = v_path_493_;
v___y_418_ = v_query_494_;
v___y_419_ = v___x_499_;
v___y_420_ = v___x_475_;
v___y_421_ = v_fragment_495_;
v_host_422_ = v_host_497_;
v_port_423_ = v_port_498_;
v___y_424_ = v_authority_485_;
v___y_425_ = v___x_474_;
v___y_426_ = v___x_506_;
goto v___jp_415_;
}
else
{
lean_object* v_username_507_; lean_object* v_val_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v_username_507_ = lean_ctor_get(v_val_501_, 0);
v_val_508_ = lean_ctor_get(v_password_502_, 0);
lean_inc_ref(v_username_507_);
v___x_509_ = lean_string_from_utf8_unchecked(v_username_507_);
v___x_510_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__15));
v___x_511_ = lean_string_append(v___x_509_, v___x_510_);
lean_inc(v_val_508_);
v___x_512_ = lean_string_from_utf8_unchecked(v_val_508_);
v___x_513_ = lean_string_append(v___x_511_, v___x_512_);
lean_dec_ref(v___x_512_);
v___x_514_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__22));
v___x_515_ = lean_string_append(v___x_513_, v___x_514_);
v___y_416_ = v_scheme_492_;
v___y_417_ = v_path_493_;
v___y_418_ = v_query_494_;
v___y_419_ = v___x_499_;
v___y_420_ = v___x_475_;
v___y_421_ = v_fragment_495_;
v_host_422_ = v_host_497_;
v_port_423_ = v_port_498_;
v___y_424_ = v_authority_485_;
v___y_425_ = v___x_474_;
v___y_426_ = v___x_515_;
goto v___jp_415_;
}
}
}
}
case 2:
{
lean_object* v_authority_516_; lean_object* v_userInfo_517_; 
v_authority_516_ = lean_ctor_get(v_uri_306_, 0);
lean_inc_ref(v_authority_516_);
lean_dec_ref_known(v_uri_306_, 1);
v_userInfo_517_ = lean_ctor_get(v_authority_516_, 0);
if (lean_obj_tag(v_userInfo_517_) == 0)
{
lean_object* v_host_518_; lean_object* v_port_519_; lean_object* v___x_520_; 
v_host_518_ = lean_ctor_get(v_authority_516_, 1);
lean_inc_ref(v_host_518_);
v_port_519_ = lean_ctor_get(v_authority_516_, 2);
lean_inc(v_port_519_);
lean_dec_ref(v_authority_516_);
v___x_520_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__1___closed__3));
v___y_458_ = v___x_475_;
v_host_459_ = v_host_518_;
v_port_460_ = v_port_519_;
v___y_461_ = v___x_474_;
v___y_462_ = v___x_520_;
goto v___jp_457_;
}
else
{
lean_object* v_val_521_; lean_object* v_password_522_; 
v_val_521_ = lean_ctor_get(v_userInfo_517_, 0);
lean_inc(v_val_521_);
v_password_522_ = lean_ctor_get(v_val_521_, 1);
if (lean_obj_tag(v_password_522_) == 0)
{
lean_object* v_host_523_; lean_object* v_port_524_; lean_object* v_username_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v_host_523_ = lean_ctor_get(v_authority_516_, 1);
lean_inc_ref(v_host_523_);
v_port_524_ = lean_ctor_get(v_authority_516_, 2);
lean_inc(v_port_524_);
lean_dec_ref(v_authority_516_);
v_username_525_ = lean_ctor_get(v_val_521_, 0);
lean_inc_ref(v_username_525_);
lean_dec(v_val_521_);
v___x_526_ = lean_string_from_utf8_unchecked(v_username_525_);
v___x_527_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__22));
v___x_528_ = lean_string_append(v___x_526_, v___x_527_);
v___y_458_ = v___x_475_;
v_host_459_ = v_host_523_;
v_port_460_ = v_port_524_;
v___y_461_ = v___x_474_;
v___y_462_ = v___x_528_;
goto v___jp_457_;
}
else
{
lean_object* v_host_529_; lean_object* v_port_530_; lean_object* v_username_531_; lean_object* v_val_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
lean_inc_ref(v_password_522_);
v_host_529_ = lean_ctor_get(v_authority_516_, 1);
lean_inc_ref(v_host_529_);
v_port_530_ = lean_ctor_get(v_authority_516_, 2);
lean_inc(v_port_530_);
lean_dec_ref(v_authority_516_);
v_username_531_ = lean_ctor_get(v_val_521_, 0);
lean_inc_ref(v_username_531_);
lean_dec(v_val_521_);
v_val_532_ = lean_ctor_get(v_password_522_, 0);
lean_inc(v_val_532_);
lean_dec_ref_known(v_password_522_, 1);
v___x_533_ = lean_string_from_utf8_unchecked(v_username_531_);
v___x_534_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__15));
v___x_535_ = lean_string_append(v___x_533_, v___x_534_);
v___x_536_ = lean_string_from_utf8_unchecked(v_val_532_);
v___x_537_ = lean_string_append(v___x_535_, v___x_536_);
lean_dec_ref(v___x_536_);
v___x_538_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__22));
v___x_539_ = lean_string_append(v___x_537_, v___x_538_);
v___y_458_ = v___x_475_;
v_host_459_ = v_host_529_;
v_port_460_ = v_port_530_;
v___y_461_ = v___x_474_;
v___y_462_ = v___x_539_;
goto v___jp_457_;
}
}
}
default: 
{
lean_object* v___x_540_; 
v___x_540_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__23));
v___y_323_ = v___x_475_;
v___y_324_ = v___x_474_;
v___y_325_ = v___x_540_;
goto v___jp_322_;
}
}
}
}
}
static lean_object* _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__0(void){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_585_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__0));
v___x_586_ = lean_string_to_utf8(v___x_585_);
return v___x_586_;
}
}
static lean_object* _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__1(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__0___closed__0, &l_Std_Http_Request_instEncodeV11Head___lam__0___closed__0_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__0);
v___x_588_ = lean_byte_array_size(v___x_587_);
return v___x_588_;
}
}
static lean_object* _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__3(void){
_start:
{
lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_590_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__11));
v___x_591_ = lean_string_to_utf8(v___x_590_);
return v___x_591_;
}
}
static lean_object* _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__4(void){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_592_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__0___closed__3, &l_Std_Http_Request_instEncodeV11Head___lam__0___closed__3_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__3);
v___x_593_ = lean_byte_array_size(v___x_592_);
return v___x_593_;
}
}
static lean_object* _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__5(void){
_start:
{
lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_594_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__12));
v___x_595_ = lean_string_to_utf8(v___x_594_);
return v___x_595_;
}
}
static lean_object* _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__6(void){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_596_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__0___closed__5, &l_Std_Http_Request_instEncodeV11Head___lam__0___closed__5_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__5);
v___x_597_ = lean_byte_array_size(v___x_596_);
return v___x_597_;
}
}
static lean_object* _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__7(void){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_598_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__13));
v___x_599_ = lean_string_to_utf8(v___x_598_);
return v___x_599_;
}
}
static lean_object* _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__8(void){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_600_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__0___closed__7, &l_Std_Http_Request_instEncodeV11Head___lam__0___closed__7_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__7);
v___x_601_ = lean_byte_array_size(v___x_600_);
return v___x_601_;
}
}
static lean_object* _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__9(void){
_start:
{
lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_602_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__14));
v___x_603_ = lean_string_to_utf8(v___x_602_);
return v___x_603_;
}
}
static lean_object* _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__10(void){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_604_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__0___closed__9, &l_Std_Http_Request_instEncodeV11Head___lam__0___closed__9_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__9);
v___x_605_ = lean_byte_array_size(v___x_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_instEncodeV11Head___lam__0(lean_object* v_out_606_, lean_object* v_req_607_){
_start:
{
uint8_t v_method_608_; uint8_t v_version_609_; lean_object* v_uri_610_; lean_object* v_headers_611_; lean_object* v___y_613_; lean_object* v___y_625_; lean_object* v___y_626_; uint8_t v___y_627_; lean_object* v___y_628_; lean_object* v___y_660_; lean_object* v___y_661_; lean_object* v___y_662_; uint8_t v___y_663_; lean_object* v___y_664_; lean_object* v___y_665_; lean_object* v___y_669_; lean_object* v_port_670_; lean_object* v___y_671_; lean_object* v___y_672_; uint8_t v___y_673_; lean_object* v___y_674_; lean_object* v___y_683_; lean_object* v_host_684_; lean_object* v_port_685_; lean_object* v___y_686_; uint8_t v___y_687_; lean_object* v___y_688_; lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_702_; uint8_t v___y_703_; lean_object* v___y_704_; lean_object* v___y_705_; lean_object* v___y_706_; lean_object* v___y_714_; lean_object* v___y_715_; lean_object* v___y_716_; lean_object* v___y_717_; uint8_t v___y_718_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___y_721_; uint8_t v___y_722_; lean_object* v___y_733_; lean_object* v___y_734_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_739_; uint8_t v___y_740_; lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___y_743_; lean_object* v___y_744_; lean_object* v___y_750_; lean_object* v___y_751_; lean_object* v___y_752_; lean_object* v___y_753_; lean_object* v___y_754_; uint8_t v___y_755_; lean_object* v___y_756_; lean_object* v___y_757_; lean_object* v___y_758_; lean_object* v_port_759_; lean_object* v___y_760_; lean_object* v___y_761_; lean_object* v___y_770_; lean_object* v___y_771_; lean_object* v___y_772_; lean_object* v___y_773_; lean_object* v___y_774_; uint8_t v___y_775_; lean_object* v___y_776_; lean_object* v___y_777_; lean_object* v_host_778_; lean_object* v_port_779_; lean_object* v___y_780_; lean_object* v___y_781_; lean_object* v___y_792_; lean_object* v___y_793_; lean_object* v___y_794_; uint8_t v___y_795_; lean_object* v___y_796_; lean_object* v___y_800_; 
v_method_608_ = lean_ctor_get_uint8(v_req_607_, sizeof(void*)*2);
v_version_609_ = lean_ctor_get_uint8(v_req_607_, sizeof(void*)*2 + 1);
v_uri_610_ = lean_ctor_get(v_req_607_, 0);
lean_inc(v_uri_610_);
v_headers_611_ = lean_ctor_get(v_req_607_, 1);
lean_inc_ref(v_headers_611_);
lean_dec_ref(v_req_607_);
switch(v_method_608_)
{
case 0:
{
lean_object* v___x_873_; 
v___x_873_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__24));
v___y_800_ = v___x_873_;
goto v___jp_799_;
}
case 1:
{
lean_object* v___x_874_; 
v___x_874_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__25));
v___y_800_ = v___x_874_;
goto v___jp_799_;
}
case 2:
{
lean_object* v___x_875_; 
v___x_875_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__26));
v___y_800_ = v___x_875_;
goto v___jp_799_;
}
case 3:
{
lean_object* v___x_876_; 
v___x_876_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__27));
v___y_800_ = v___x_876_;
goto v___jp_799_;
}
case 4:
{
lean_object* v___x_877_; 
v___x_877_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__28));
v___y_800_ = v___x_877_;
goto v___jp_799_;
}
case 5:
{
lean_object* v___x_878_; 
v___x_878_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__29));
v___y_800_ = v___x_878_;
goto v___jp_799_;
}
case 6:
{
lean_object* v___x_879_; 
v___x_879_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__30));
v___y_800_ = v___x_879_;
goto v___jp_799_;
}
case 7:
{
lean_object* v___x_880_; 
v___x_880_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__31));
v___y_800_ = v___x_880_;
goto v___jp_799_;
}
case 8:
{
lean_object* v___x_881_; 
v___x_881_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__32));
v___y_800_ = v___x_881_;
goto v___jp_799_;
}
case 9:
{
lean_object* v___x_882_; 
v___x_882_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__33));
v___y_800_ = v___x_882_;
goto v___jp_799_;
}
case 10:
{
lean_object* v___x_883_; 
v___x_883_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__34));
v___y_800_ = v___x_883_;
goto v___jp_799_;
}
case 11:
{
lean_object* v___x_884_; 
v___x_884_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__35));
v___y_800_ = v___x_884_;
goto v___jp_799_;
}
case 12:
{
lean_object* v___x_885_; 
v___x_885_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__36));
v___y_800_ = v___x_885_;
goto v___jp_799_;
}
case 13:
{
lean_object* v___x_886_; 
v___x_886_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__37));
v___y_800_ = v___x_886_;
goto v___jp_799_;
}
case 14:
{
lean_object* v___x_887_; 
v___x_887_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__38));
v___y_800_ = v___x_887_;
goto v___jp_799_;
}
case 15:
{
lean_object* v___x_888_; 
v___x_888_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__39));
v___y_800_ = v___x_888_;
goto v___jp_799_;
}
case 16:
{
lean_object* v___x_889_; 
v___x_889_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__40));
v___y_800_ = v___x_889_;
goto v___jp_799_;
}
case 17:
{
lean_object* v___x_890_; 
v___x_890_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__41));
v___y_800_ = v___x_890_;
goto v___jp_799_;
}
case 18:
{
lean_object* v___x_891_; 
v___x_891_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__42));
v___y_800_ = v___x_891_;
goto v___jp_799_;
}
case 19:
{
lean_object* v___x_892_; 
v___x_892_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__43));
v___y_800_ = v___x_892_;
goto v___jp_799_;
}
case 20:
{
lean_object* v___x_893_; 
v___x_893_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__44));
v___y_800_ = v___x_893_;
goto v___jp_799_;
}
case 21:
{
lean_object* v___x_894_; 
v___x_894_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__45));
v___y_800_ = v___x_894_;
goto v___jp_799_;
}
case 22:
{
lean_object* v___x_895_; 
v___x_895_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__46));
v___y_800_ = v___x_895_;
goto v___jp_799_;
}
case 23:
{
lean_object* v___x_896_; 
v___x_896_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__47));
v___y_800_ = v___x_896_;
goto v___jp_799_;
}
case 24:
{
lean_object* v___x_897_; 
v___x_897_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__48));
v___y_800_ = v___x_897_;
goto v___jp_799_;
}
case 25:
{
lean_object* v___x_898_; 
v___x_898_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__49));
v___y_800_ = v___x_898_;
goto v___jp_799_;
}
case 26:
{
lean_object* v___x_899_; 
v___x_899_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__50));
v___y_800_ = v___x_899_;
goto v___jp_799_;
}
case 27:
{
lean_object* v___x_900_; 
v___x_900_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__51));
v___y_800_ = v___x_900_;
goto v___jp_799_;
}
case 28:
{
lean_object* v___x_901_; 
v___x_901_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__52));
v___y_800_ = v___x_901_;
goto v___jp_799_;
}
case 29:
{
lean_object* v___x_902_; 
v___x_902_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__53));
v___y_800_ = v___x_902_;
goto v___jp_799_;
}
case 30:
{
lean_object* v___x_903_; 
v___x_903_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__54));
v___y_800_ = v___x_903_;
goto v___jp_799_;
}
case 31:
{
lean_object* v___x_904_; 
v___x_904_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__55));
v___y_800_ = v___x_904_;
goto v___jp_799_;
}
case 32:
{
lean_object* v___x_905_; 
v___x_905_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__56));
v___y_800_ = v___x_905_;
goto v___jp_799_;
}
case 33:
{
lean_object* v___x_906_; 
v___x_906_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__57));
v___y_800_ = v___x_906_;
goto v___jp_799_;
}
case 34:
{
lean_object* v___x_907_; 
v___x_907_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__58));
v___y_800_ = v___x_907_;
goto v___jp_799_;
}
case 35:
{
lean_object* v___x_908_; 
v___x_908_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__59));
v___y_800_ = v___x_908_;
goto v___jp_799_;
}
case 36:
{
lean_object* v___x_909_; 
v___x_909_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__60));
v___y_800_ = v___x_909_;
goto v___jp_799_;
}
case 37:
{
lean_object* v___x_910_; 
v___x_910_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__61));
v___y_800_ = v___x_910_;
goto v___jp_799_;
}
case 38:
{
lean_object* v___x_911_; 
v___x_911_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__62));
v___y_800_ = v___x_911_;
goto v___jp_799_;
}
default: 
{
lean_object* v___x_912_; 
v___x_912_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__63));
v___y_800_ = v___x_912_;
goto v___jp_799_;
}
}
v___jp_612_:
{
lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; uint8_t v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_614_ = lean_byte_array_size(v___y_613_);
v___x_615_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__0___closed__0, &l_Std_Http_Request_instEncodeV11Head___lam__0___closed__0_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__0);
v___x_616_ = lean_unsigned_to_nat(0u);
v___x_617_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__0___closed__1, &l_Std_Http_Request_instEncodeV11Head___lam__0___closed__1_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__1);
v___x_618_ = 0;
v___x_619_ = lean_byte_array_copy_slice(v___x_615_, v___x_616_, v___y_613_, v___x_614_, v___x_617_, v___x_618_);
v___x_620_ = ((lean_object*)(l_Std_Http_Request_instEncodeV11Head___lam__0___closed__2));
v___x_621_ = l_Std_Http_Headers_fold___redArg(v_headers_611_, v___x_619_, v___x_620_);
lean_dec_ref(v_headers_611_);
v___x_622_ = lean_byte_array_size(v___x_621_);
v___x_623_ = lean_byte_array_copy_slice(v___x_615_, v___x_616_, v___x_621_, v___x_622_, v___x_617_, v___x_618_);
return v___x_623_;
}
v___jp_624_:
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; uint8_t v___x_633_; lean_object* v___x_634_; 
v___x_629_ = lean_byte_array_size(v___y_626_);
v___x_630_ = lean_string_to_utf8(v___y_628_);
v___x_631_ = lean_byte_array_size(v___x_630_);
v___x_632_ = lean_byte_array_copy_slice(v___x_630_, v___y_625_, v___y_626_, v___x_629_, v___x_631_, v___y_627_);
lean_dec_ref(v___x_630_);
v___x_633_ = 32;
v___x_634_ = lean_byte_array_push(v___x_632_, v___x_633_);
switch(v_version_609_)
{
case 0:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___x_639_; lean_object* v___x_640_; 
v___x_635_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__0___closed__3, &l_Std_Http_Request_instEncodeV11Head___lam__0___closed__3_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__3);
v___x_636_ = lean_unsigned_to_nat(0u);
v___x_637_ = lean_byte_array_size(v___x_634_);
v___x_638_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__0___closed__4, &l_Std_Http_Request_instEncodeV11Head___lam__0___closed__4_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__4);
v___x_639_ = 0;
v___x_640_ = lean_byte_array_copy_slice(v___x_635_, v___x_636_, v___x_634_, v___x_637_, v___x_638_, v___x_639_);
v___y_613_ = v___x_640_;
goto v___jp_612_;
}
case 1:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; uint8_t v___x_645_; lean_object* v___x_646_; 
v___x_641_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__0___closed__5, &l_Std_Http_Request_instEncodeV11Head___lam__0___closed__5_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__5);
v___x_642_ = lean_unsigned_to_nat(0u);
v___x_643_ = lean_byte_array_size(v___x_634_);
v___x_644_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__0___closed__6, &l_Std_Http_Request_instEncodeV11Head___lam__0___closed__6_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__6);
v___x_645_ = 0;
v___x_646_ = lean_byte_array_copy_slice(v___x_641_, v___x_642_, v___x_634_, v___x_643_, v___x_644_, v___x_645_);
v___y_613_ = v___x_646_;
goto v___jp_612_;
}
case 2:
{
lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; uint8_t v___x_651_; lean_object* v___x_652_; 
v___x_647_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__0___closed__7, &l_Std_Http_Request_instEncodeV11Head___lam__0___closed__7_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__7);
v___x_648_ = lean_unsigned_to_nat(0u);
v___x_649_ = lean_byte_array_size(v___x_634_);
v___x_650_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__0___closed__8, &l_Std_Http_Request_instEncodeV11Head___lam__0___closed__8_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__8);
v___x_651_ = 0;
v___x_652_ = lean_byte_array_copy_slice(v___x_647_, v___x_648_, v___x_634_, v___x_649_, v___x_650_, v___x_651_);
v___y_613_ = v___x_652_;
goto v___jp_612_;
}
default: 
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; uint8_t v___x_657_; lean_object* v___x_658_; 
v___x_653_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__0___closed__9, &l_Std_Http_Request_instEncodeV11Head___lam__0___closed__9_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__9);
v___x_654_ = lean_unsigned_to_nat(0u);
v___x_655_ = lean_byte_array_size(v___x_634_);
v___x_656_ = lean_obj_once(&l_Std_Http_Request_instEncodeV11Head___lam__0___closed__10, &l_Std_Http_Request_instEncodeV11Head___lam__0___closed__10_once, _init_l_Std_Http_Request_instEncodeV11Head___lam__0___closed__10);
v___x_657_ = 0;
v___x_658_ = lean_byte_array_copy_slice(v___x_653_, v___x_654_, v___x_634_, v___x_655_, v___x_656_, v___x_657_);
v___y_613_ = v___x_658_;
goto v___jp_612_;
}
}
}
v___jp_659_:
{
lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_666_ = lean_string_append(v___y_662_, v___y_664_);
lean_dec_ref(v___y_664_);
v___x_667_ = lean_string_append(v___x_666_, v___y_665_);
lean_dec_ref(v___y_665_);
v___y_625_ = v___y_660_;
v___y_626_ = v___y_661_;
v___y_627_ = v___y_663_;
v___y_628_ = v___x_667_;
goto v___jp_624_;
}
v___jp_668_:
{
switch(lean_obj_tag(v_port_670_))
{
case 0:
{
lean_object* v___x_675_; 
v___x_675_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__1___closed__3));
v___y_660_ = v___y_669_;
v___y_661_ = v___y_671_;
v___y_662_ = v___y_672_;
v___y_663_ = v___y_673_;
v___y_664_ = v___y_674_;
v___y_665_ = v___x_675_;
goto v___jp_659_;
}
case 1:
{
lean_object* v___x_676_; 
v___x_676_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__15));
v___y_660_ = v___y_669_;
v___y_661_ = v___y_671_;
v___y_662_ = v___y_672_;
v___y_663_ = v___y_673_;
v___y_664_ = v___y_674_;
v___y_665_ = v___x_676_;
goto v___jp_659_;
}
default: 
{
uint16_t v_port_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v_port_677_ = lean_ctor_get_uint16(v_port_670_, 0);
lean_dec_ref_known(v_port_670_, 0);
v___x_678_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__15));
v___x_679_ = lean_uint16_to_nat(v_port_677_);
v___x_680_ = l_Nat_reprFast(v___x_679_);
v___x_681_ = lean_string_append(v___x_678_, v___x_680_);
lean_dec_ref(v___x_680_);
v___y_660_ = v___y_669_;
v___y_661_ = v___y_671_;
v___y_662_ = v___y_672_;
v___y_663_ = v___y_673_;
v___y_664_ = v___y_674_;
v___y_665_ = v___x_681_;
goto v___jp_659_;
}
}
}
v___jp_682_:
{
switch(lean_obj_tag(v_host_684_))
{
case 0:
{
lean_object* v_name_689_; 
v_name_689_ = lean_ctor_get(v_host_684_, 0);
lean_inc_ref(v_name_689_);
lean_dec_ref_known(v_host_684_, 1);
v___y_669_ = v___y_683_;
v_port_670_ = v_port_685_;
v___y_671_ = v___y_686_;
v___y_672_ = v___y_688_;
v___y_673_ = v___y_687_;
v___y_674_ = v_name_689_;
goto v___jp_668_;
}
case 1:
{
lean_object* v_ipv4_690_; lean_object* v___x_691_; 
v_ipv4_690_ = lean_ctor_get(v_host_684_, 0);
lean_inc_ref(v_ipv4_690_);
lean_dec_ref_known(v_host_684_, 1);
v___x_691_ = lean_uv_ntop_v4(v_ipv4_690_);
lean_dec_ref(v_ipv4_690_);
v___y_669_ = v___y_683_;
v_port_670_ = v_port_685_;
v___y_671_ = v___y_686_;
v___y_672_ = v___y_688_;
v___y_673_ = v___y_687_;
v___y_674_ = v___x_691_;
goto v___jp_668_;
}
default: 
{
lean_object* v_ipv6_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v_ipv6_692_ = lean_ctor_get(v_host_684_, 0);
lean_inc_ref(v_ipv6_692_);
lean_dec_ref_known(v_host_684_, 1);
v___x_693_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__17));
v___x_694_ = lean_uv_ntop_v6(v_ipv6_692_);
lean_dec_ref(v_ipv6_692_);
v___x_695_ = lean_string_append(v___x_693_, v___x_694_);
lean_dec_ref(v___x_694_);
v___x_696_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__18));
v___x_697_ = lean_string_append(v___x_695_, v___x_696_);
v___y_669_ = v___y_683_;
v_port_670_ = v_port_685_;
v___y_671_ = v___y_686_;
v___y_672_ = v___y_688_;
v___y_673_ = v___y_687_;
v___y_674_ = v___x_697_;
goto v___jp_668_;
}
}
}
v___jp_698_:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_707_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__15));
v___x_708_ = lean_string_append(v___y_704_, v___x_707_);
v___x_709_ = lean_string_append(v___x_708_, v___y_705_);
lean_dec_ref(v___y_705_);
v___x_710_ = lean_string_append(v___x_709_, v___y_702_);
lean_dec_ref(v___y_702_);
v___x_711_ = lean_string_append(v___x_710_, v___y_700_);
lean_dec_ref(v___y_700_);
v___x_712_ = lean_string_append(v___x_711_, v___y_706_);
lean_dec_ref(v___y_706_);
v___y_625_ = v___y_699_;
v___y_626_ = v___y_701_;
v___y_627_ = v___y_703_;
v___y_628_ = v___x_712_;
goto v___jp_624_;
}
v___jp_713_:
{
uint8_t v___x_723_; lean_object* v_pathPart_724_; lean_object* v_queryPart_725_; 
v___x_723_ = 1;
v_pathPart_724_ = l_Std_Http_URI_Path_render(v___y_719_, v___y_722_, v___x_723_);
v_queryPart_725_ = l_Std_Http_URI_Query_formatOption(v___y_716_);
if (lean_obj_tag(v___y_721_) == 0)
{
lean_object* v___x_726_; 
v___x_726_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__1___closed__3));
v___y_699_ = v___y_714_;
v___y_700_ = v_queryPart_725_;
v___y_701_ = v___y_715_;
v___y_702_ = v_pathPart_724_;
v___y_703_ = v___y_718_;
v___y_704_ = v___y_717_;
v___y_705_ = v___y_720_;
v___y_706_ = v___x_726_;
goto v___jp_698_;
}
else
{
lean_object* v_val_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v_val_727_ = lean_ctor_get(v___y_721_, 0);
lean_inc(v_val_727_);
lean_dec_ref_known(v___y_721_, 1);
v___x_728_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__16));
v___x_729_ = l_Std_Http_URI_EncodedFragment_encode(v_val_727_);
v___x_730_ = lean_string_from_utf8_unchecked(v___x_729_);
v___x_731_ = lean_string_append(v___x_728_, v___x_730_);
lean_dec_ref(v___x_730_);
v___y_699_ = v___y_714_;
v___y_700_ = v_queryPart_725_;
v___y_701_ = v___y_715_;
v___y_702_ = v_pathPart_724_;
v___y_703_ = v___y_718_;
v___y_704_ = v___y_717_;
v___y_705_ = v___y_720_;
v___y_706_ = v___x_731_;
goto v___jp_698_;
}
}
v___jp_732_:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_745_ = lean_string_append(v___y_735_, v___y_738_);
lean_dec_ref(v___y_738_);
v___x_746_ = lean_string_append(v___x_745_, v___y_744_);
lean_dec_ref(v___y_744_);
lean_inc_ref(v___y_734_);
v___x_747_ = lean_string_append(v___y_734_, v___x_746_);
lean_dec_ref(v___x_746_);
if (lean_obj_tag(v___y_743_) == 0)
{
v___y_714_ = v___y_733_;
v___y_715_ = v___y_736_;
v___y_716_ = v___y_737_;
v___y_717_ = v___y_739_;
v___y_718_ = v___y_740_;
v___y_719_ = v___y_741_;
v___y_720_ = v___x_747_;
v___y_721_ = v___y_742_;
v___y_722_ = v___y_740_;
goto v___jp_713_;
}
else
{
uint8_t v___x_748_; 
lean_dec_ref_known(v___y_743_, 1);
v___x_748_ = 1;
v___y_714_ = v___y_733_;
v___y_715_ = v___y_736_;
v___y_716_ = v___y_737_;
v___y_717_ = v___y_739_;
v___y_718_ = v___y_740_;
v___y_719_ = v___y_741_;
v___y_720_ = v___x_747_;
v___y_721_ = v___y_742_;
v___y_722_ = v___x_748_;
goto v___jp_713_;
}
}
v___jp_749_:
{
switch(lean_obj_tag(v_port_759_))
{
case 0:
{
lean_object* v___x_762_; 
v___x_762_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__1___closed__3));
v___y_733_ = v___y_750_;
v___y_734_ = v___y_751_;
v___y_735_ = v___y_752_;
v___y_736_ = v___y_754_;
v___y_737_ = v___y_753_;
v___y_738_ = v___y_761_;
v___y_739_ = v___y_756_;
v___y_740_ = v___y_755_;
v___y_741_ = v___y_757_;
v___y_742_ = v___y_758_;
v___y_743_ = v___y_760_;
v___y_744_ = v___x_762_;
goto v___jp_732_;
}
case 1:
{
lean_object* v___x_763_; 
v___x_763_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__15));
v___y_733_ = v___y_750_;
v___y_734_ = v___y_751_;
v___y_735_ = v___y_752_;
v___y_736_ = v___y_754_;
v___y_737_ = v___y_753_;
v___y_738_ = v___y_761_;
v___y_739_ = v___y_756_;
v___y_740_ = v___y_755_;
v___y_741_ = v___y_757_;
v___y_742_ = v___y_758_;
v___y_743_ = v___y_760_;
v___y_744_ = v___x_763_;
goto v___jp_732_;
}
default: 
{
uint16_t v_port_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v_port_764_ = lean_ctor_get_uint16(v_port_759_, 0);
lean_dec_ref_known(v_port_759_, 0);
v___x_765_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__15));
v___x_766_ = lean_uint16_to_nat(v_port_764_);
v___x_767_ = l_Nat_reprFast(v___x_766_);
v___x_768_ = lean_string_append(v___x_765_, v___x_767_);
lean_dec_ref(v___x_767_);
v___y_733_ = v___y_750_;
v___y_734_ = v___y_751_;
v___y_735_ = v___y_752_;
v___y_736_ = v___y_754_;
v___y_737_ = v___y_753_;
v___y_738_ = v___y_761_;
v___y_739_ = v___y_756_;
v___y_740_ = v___y_755_;
v___y_741_ = v___y_757_;
v___y_742_ = v___y_758_;
v___y_743_ = v___y_760_;
v___y_744_ = v___x_768_;
goto v___jp_732_;
}
}
}
v___jp_769_:
{
switch(lean_obj_tag(v_host_778_))
{
case 0:
{
lean_object* v_name_782_; 
v_name_782_ = lean_ctor_get(v_host_778_, 0);
lean_inc_ref(v_name_782_);
lean_dec_ref_known(v_host_778_, 1);
v___y_750_ = v___y_770_;
v___y_751_ = v___y_771_;
v___y_752_ = v___y_781_;
v___y_753_ = v___y_773_;
v___y_754_ = v___y_772_;
v___y_755_ = v___y_775_;
v___y_756_ = v___y_774_;
v___y_757_ = v___y_776_;
v___y_758_ = v___y_777_;
v_port_759_ = v_port_779_;
v___y_760_ = v___y_780_;
v___y_761_ = v_name_782_;
goto v___jp_749_;
}
case 1:
{
lean_object* v_ipv4_783_; lean_object* v___x_784_; 
v_ipv4_783_ = lean_ctor_get(v_host_778_, 0);
lean_inc_ref(v_ipv4_783_);
lean_dec_ref_known(v_host_778_, 1);
v___x_784_ = lean_uv_ntop_v4(v_ipv4_783_);
lean_dec_ref(v_ipv4_783_);
v___y_750_ = v___y_770_;
v___y_751_ = v___y_771_;
v___y_752_ = v___y_781_;
v___y_753_ = v___y_773_;
v___y_754_ = v___y_772_;
v___y_755_ = v___y_775_;
v___y_756_ = v___y_774_;
v___y_757_ = v___y_776_;
v___y_758_ = v___y_777_;
v_port_759_ = v_port_779_;
v___y_760_ = v___y_780_;
v___y_761_ = v___x_784_;
goto v___jp_749_;
}
default: 
{
lean_object* v_ipv6_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v_ipv6_785_ = lean_ctor_get(v_host_778_, 0);
lean_inc_ref(v_ipv6_785_);
lean_dec_ref_known(v_host_778_, 1);
v___x_786_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__17));
v___x_787_ = lean_uv_ntop_v6(v_ipv6_785_);
lean_dec_ref(v_ipv6_785_);
v___x_788_ = lean_string_append(v___x_786_, v___x_787_);
lean_dec_ref(v___x_787_);
v___x_789_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__18));
v___x_790_ = lean_string_append(v___x_788_, v___x_789_);
v___y_750_ = v___y_770_;
v___y_751_ = v___y_771_;
v___y_752_ = v___y_781_;
v___y_753_ = v___y_773_;
v___y_754_ = v___y_772_;
v___y_755_ = v___y_775_;
v___y_756_ = v___y_774_;
v___y_757_ = v___y_776_;
v___y_758_ = v___y_777_;
v_port_759_ = v_port_779_;
v___y_760_ = v___y_780_;
v___y_761_ = v___x_790_;
goto v___jp_749_;
}
}
}
v___jp_791_:
{
lean_object* v_queryStr_797_; lean_object* v___x_798_; 
v_queryStr_797_ = l_Std_Http_URI_Query_formatOption(v___y_793_);
v___x_798_ = lean_string_append(v___y_796_, v_queryStr_797_);
lean_dec_ref(v_queryStr_797_);
v___y_625_ = v___y_792_;
v___y_626_ = v___y_794_;
v___y_627_ = v___y_795_;
v___y_628_ = v___x_798_;
goto v___jp_624_;
}
v___jp_799_:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; uint8_t v___x_805_; lean_object* v___x_806_; uint8_t v___x_807_; lean_object* v___x_808_; 
v___x_801_ = lean_byte_array_size(v_out_606_);
lean_inc_ref(v___y_800_);
v___x_802_ = lean_string_to_utf8(v___y_800_);
v___x_803_ = lean_unsigned_to_nat(0u);
v___x_804_ = lean_byte_array_size(v___x_802_);
v___x_805_ = 0;
v___x_806_ = lean_byte_array_copy_slice(v___x_802_, v___x_803_, v_out_606_, v___x_801_, v___x_804_, v___x_805_);
lean_dec_ref(v___x_802_);
v___x_807_ = 32;
v___x_808_ = lean_byte_array_push(v___x_806_, v___x_807_);
switch(lean_obj_tag(v_uri_610_))
{
case 0:
{
lean_object* v_path_809_; lean_object* v_query_810_; uint8_t v___x_811_; lean_object* v_pathStr_812_; lean_object* v___x_813_; uint8_t v___x_814_; 
v_path_809_ = lean_ctor_get(v_uri_610_, 0);
lean_inc_ref(v_path_809_);
v_query_810_ = lean_ctor_get(v_uri_610_, 1);
lean_inc(v_query_810_);
lean_dec_ref_known(v_uri_610_, 2);
v___x_811_ = 1;
v_pathStr_812_ = l_Std_Http_URI_Path_render(v_path_809_, v___x_811_, v___x_811_);
v___x_813_ = lean_string_utf8_byte_size(v_pathStr_812_);
v___x_814_ = lean_nat_dec_eq(v___x_813_, v___x_803_);
if (v___x_814_ == 0)
{
v___y_792_ = v___x_803_;
v___y_793_ = v_query_810_;
v___y_794_ = v___x_808_;
v___y_795_ = v___x_805_;
v___y_796_ = v_pathStr_812_;
goto v___jp_791_;
}
else
{
lean_object* v___x_815_; 
lean_dec_ref(v_pathStr_812_);
v___x_815_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__20));
v___y_792_ = v___x_803_;
v___y_793_ = v_query_810_;
v___y_794_ = v___x_808_;
v___y_795_ = v___x_805_;
v___y_796_ = v___x_815_;
goto v___jp_791_;
}
}
case 1:
{
lean_object* v_uri_816_; lean_object* v_authority_817_; 
v_uri_816_ = lean_ctor_get(v_uri_610_, 0);
lean_inc_ref(v_uri_816_);
lean_dec_ref_known(v_uri_610_, 1);
v_authority_817_ = lean_ctor_get(v_uri_816_, 1);
if (lean_obj_tag(v_authority_817_) == 0)
{
lean_object* v_scheme_818_; lean_object* v_path_819_; lean_object* v_query_820_; lean_object* v_fragment_821_; lean_object* v___x_822_; 
v_scheme_818_ = lean_ctor_get(v_uri_816_, 0);
lean_inc_ref(v_scheme_818_);
v_path_819_ = lean_ctor_get(v_uri_816_, 2);
lean_inc_ref(v_path_819_);
v_query_820_ = lean_ctor_get(v_uri_816_, 3);
lean_inc(v_query_820_);
v_fragment_821_ = lean_ctor_get(v_uri_816_, 4);
lean_inc(v_fragment_821_);
lean_dec_ref(v_uri_816_);
v___x_822_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__1___closed__3));
v___y_714_ = v___x_803_;
v___y_715_ = v___x_808_;
v___y_716_ = v_query_820_;
v___y_717_ = v_scheme_818_;
v___y_718_ = v___x_805_;
v___y_719_ = v_path_819_;
v___y_720_ = v___x_822_;
v___y_721_ = v_fragment_821_;
v___y_722_ = v___x_805_;
goto v___jp_713_;
}
else
{
lean_object* v_val_823_; lean_object* v_scheme_824_; lean_object* v_path_825_; lean_object* v_query_826_; lean_object* v_fragment_827_; lean_object* v_userInfo_828_; lean_object* v_host_829_; lean_object* v_port_830_; lean_object* v___x_831_; 
lean_inc_ref(v_authority_817_);
v_val_823_ = lean_ctor_get(v_authority_817_, 0);
v_scheme_824_ = lean_ctor_get(v_uri_816_, 0);
lean_inc_ref(v_scheme_824_);
v_path_825_ = lean_ctor_get(v_uri_816_, 2);
lean_inc_ref(v_path_825_);
v_query_826_ = lean_ctor_get(v_uri_816_, 3);
lean_inc(v_query_826_);
v_fragment_827_ = lean_ctor_get(v_uri_816_, 4);
lean_inc(v_fragment_827_);
lean_dec_ref(v_uri_816_);
v_userInfo_828_ = lean_ctor_get(v_val_823_, 0);
v_host_829_ = lean_ctor_get(v_val_823_, 1);
lean_inc_ref(v_host_829_);
v_port_830_ = lean_ctor_get(v_val_823_, 2);
lean_inc(v_port_830_);
v___x_831_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__21));
if (lean_obj_tag(v_userInfo_828_) == 0)
{
lean_object* v___x_832_; 
v___x_832_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__1___closed__3));
v___y_770_ = v___x_803_;
v___y_771_ = v___x_831_;
v___y_772_ = v___x_808_;
v___y_773_ = v_query_826_;
v___y_774_ = v_scheme_824_;
v___y_775_ = v___x_805_;
v___y_776_ = v_path_825_;
v___y_777_ = v_fragment_827_;
v_host_778_ = v_host_829_;
v_port_779_ = v_port_830_;
v___y_780_ = v_authority_817_;
v___y_781_ = v___x_832_;
goto v___jp_769_;
}
else
{
lean_object* v_val_833_; lean_object* v_password_834_; 
v_val_833_ = lean_ctor_get(v_userInfo_828_, 0);
v_password_834_ = lean_ctor_get(v_val_833_, 1);
if (lean_obj_tag(v_password_834_) == 0)
{
lean_object* v_username_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v_username_835_ = lean_ctor_get(v_val_833_, 0);
lean_inc_ref(v_username_835_);
v___x_836_ = lean_string_from_utf8_unchecked(v_username_835_);
v___x_837_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__22));
v___x_838_ = lean_string_append(v___x_836_, v___x_837_);
v___y_770_ = v___x_803_;
v___y_771_ = v___x_831_;
v___y_772_ = v___x_808_;
v___y_773_ = v_query_826_;
v___y_774_ = v_scheme_824_;
v___y_775_ = v___x_805_;
v___y_776_ = v_path_825_;
v___y_777_ = v_fragment_827_;
v_host_778_ = v_host_829_;
v_port_779_ = v_port_830_;
v___y_780_ = v_authority_817_;
v___y_781_ = v___x_838_;
goto v___jp_769_;
}
else
{
lean_object* v_username_839_; lean_object* v_val_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v_username_839_ = lean_ctor_get(v_val_833_, 0);
v_val_840_ = lean_ctor_get(v_password_834_, 0);
lean_inc_ref(v_username_839_);
v___x_841_ = lean_string_from_utf8_unchecked(v_username_839_);
v___x_842_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__15));
v___x_843_ = lean_string_append(v___x_841_, v___x_842_);
lean_inc(v_val_840_);
v___x_844_ = lean_string_from_utf8_unchecked(v_val_840_);
v___x_845_ = lean_string_append(v___x_843_, v___x_844_);
lean_dec_ref(v___x_844_);
v___x_846_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__22));
v___x_847_ = lean_string_append(v___x_845_, v___x_846_);
v___y_770_ = v___x_803_;
v___y_771_ = v___x_831_;
v___y_772_ = v___x_808_;
v___y_773_ = v_query_826_;
v___y_774_ = v_scheme_824_;
v___y_775_ = v___x_805_;
v___y_776_ = v_path_825_;
v___y_777_ = v_fragment_827_;
v_host_778_ = v_host_829_;
v_port_779_ = v_port_830_;
v___y_780_ = v_authority_817_;
v___y_781_ = v___x_847_;
goto v___jp_769_;
}
}
}
}
case 2:
{
lean_object* v_authority_848_; lean_object* v_userInfo_849_; 
v_authority_848_ = lean_ctor_get(v_uri_610_, 0);
lean_inc_ref(v_authority_848_);
lean_dec_ref_known(v_uri_610_, 1);
v_userInfo_849_ = lean_ctor_get(v_authority_848_, 0);
if (lean_obj_tag(v_userInfo_849_) == 0)
{
lean_object* v_host_850_; lean_object* v_port_851_; lean_object* v___x_852_; 
v_host_850_ = lean_ctor_get(v_authority_848_, 1);
lean_inc_ref(v_host_850_);
v_port_851_ = lean_ctor_get(v_authority_848_, 2);
lean_inc(v_port_851_);
lean_dec_ref(v_authority_848_);
v___x_852_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__1___closed__3));
v___y_683_ = v___x_803_;
v_host_684_ = v_host_850_;
v_port_685_ = v_port_851_;
v___y_686_ = v___x_808_;
v___y_687_ = v___x_805_;
v___y_688_ = v___x_852_;
goto v___jp_682_;
}
else
{
lean_object* v_val_853_; lean_object* v_password_854_; 
v_val_853_ = lean_ctor_get(v_userInfo_849_, 0);
lean_inc(v_val_853_);
v_password_854_ = lean_ctor_get(v_val_853_, 1);
if (lean_obj_tag(v_password_854_) == 0)
{
lean_object* v_host_855_; lean_object* v_port_856_; lean_object* v_username_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v_host_855_ = lean_ctor_get(v_authority_848_, 1);
lean_inc_ref(v_host_855_);
v_port_856_ = lean_ctor_get(v_authority_848_, 2);
lean_inc(v_port_856_);
lean_dec_ref(v_authority_848_);
v_username_857_ = lean_ctor_get(v_val_853_, 0);
lean_inc_ref(v_username_857_);
lean_dec(v_val_853_);
v___x_858_ = lean_string_from_utf8_unchecked(v_username_857_);
v___x_859_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__22));
v___x_860_ = lean_string_append(v___x_858_, v___x_859_);
v___y_683_ = v___x_803_;
v_host_684_ = v_host_855_;
v_port_685_ = v_port_856_;
v___y_686_ = v___x_808_;
v___y_687_ = v___x_805_;
v___y_688_ = v___x_860_;
goto v___jp_682_;
}
else
{
lean_object* v_host_861_; lean_object* v_port_862_; lean_object* v_username_863_; lean_object* v_val_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
lean_inc_ref(v_password_854_);
v_host_861_ = lean_ctor_get(v_authority_848_, 1);
lean_inc_ref(v_host_861_);
v_port_862_ = lean_ctor_get(v_authority_848_, 2);
lean_inc(v_port_862_);
lean_dec_ref(v_authority_848_);
v_username_863_ = lean_ctor_get(v_val_853_, 0);
lean_inc_ref(v_username_863_);
lean_dec(v_val_853_);
v_val_864_ = lean_ctor_get(v_password_854_, 0);
lean_inc(v_val_864_);
lean_dec_ref_known(v_password_854_, 1);
v___x_865_ = lean_string_from_utf8_unchecked(v_username_863_);
v___x_866_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__15));
v___x_867_ = lean_string_append(v___x_865_, v___x_866_);
v___x_868_ = lean_string_from_utf8_unchecked(v_val_864_);
v___x_869_ = lean_string_append(v___x_867_, v___x_868_);
lean_dec_ref(v___x_868_);
v___x_870_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__22));
v___x_871_ = lean_string_append(v___x_869_, v___x_870_);
v___y_683_ = v___x_803_;
v_host_684_ = v_host_861_;
v_port_685_ = v_port_862_;
v___y_686_ = v___x_808_;
v___y_687_ = v___x_805_;
v___y_688_ = v___x_871_;
goto v___jp_682_;
}
}
}
default: 
{
lean_object* v___x_872_; 
v___x_872_ = ((lean_object*)(l_Std_Http_Request_instToStringHead___lam__2___closed__23));
v___y_625_ = v___x_803_;
v___y_626_ = v___x_808_;
v___y_627_ = v___x_805_;
v___y_628_ = v___x_872_;
goto v___jp_624_;
}
}
}
}
}
static lean_object* _init_l_Std_Http_Request_new___closed__0(void){
_start:
{
lean_object* v___x_915_; lean_object* v___x_916_; uint8_t v___x_917_; uint8_t v___x_918_; lean_object* v___x_919_; 
v___x_915_ = l_Std_Http_Headers_empty;
v___x_916_ = lean_box(3);
v___x_917_ = 1;
v___x_918_ = 8;
v___x_919_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_919_, 0, v___x_916_);
lean_ctor_set(v___x_919_, 1, v___x_915_);
lean_ctor_set_uint8(v___x_919_, sizeof(void*)*2, v___x_918_);
lean_ctor_set_uint8(v___x_919_, sizeof(void*)*2 + 1, v___x_917_);
return v___x_919_;
}
}
static lean_object* _init_l_Std_Http_Request_new___closed__1(void){
_start:
{
lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_920_ = l_Std_Http_Extensions_empty;
v___x_921_ = lean_obj_once(&l_Std_Http_Request_new___closed__0, &l_Std_Http_Request_new___closed__0_once, _init_l_Std_Http_Request_new___closed__0);
v___x_922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_922_, 0, v___x_921_);
lean_ctor_set(v___x_922_, 1, v___x_920_);
return v___x_922_;
}
}
static lean_object* _init_l_Std_Http_Request_new(void){
_start:
{
lean_object* v___x_923_; 
v___x_923_ = lean_obj_once(&l_Std_Http_Request_new___closed__1, &l_Std_Http_Request_new___closed__1_once, _init_l_Std_Http_Request_new___closed__1);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_method(lean_object* v_builder_924_, uint8_t v_method_925_){
_start:
{
lean_object* v_line_926_; lean_object* v_extensions_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_944_; 
v_line_926_ = lean_ctor_get(v_builder_924_, 0);
v_extensions_927_ = lean_ctor_get(v_builder_924_, 1);
v_isSharedCheck_944_ = !lean_is_exclusive(v_builder_924_);
if (v_isSharedCheck_944_ == 0)
{
v___x_929_ = v_builder_924_;
v_isShared_930_ = v_isSharedCheck_944_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_extensions_927_);
lean_inc(v_line_926_);
lean_dec(v_builder_924_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_944_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
uint8_t v_version_931_; lean_object* v_uri_932_; lean_object* v_headers_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_943_; 
v_version_931_ = lean_ctor_get_uint8(v_line_926_, sizeof(void*)*2 + 1);
v_uri_932_ = lean_ctor_get(v_line_926_, 0);
v_headers_933_ = lean_ctor_get(v_line_926_, 1);
v_isSharedCheck_943_ = !lean_is_exclusive(v_line_926_);
if (v_isSharedCheck_943_ == 0)
{
v___x_935_ = v_line_926_;
v_isShared_936_ = v_isSharedCheck_943_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_headers_933_);
lean_inc(v_uri_932_);
lean_dec(v_line_926_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_943_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_938_; 
if (v_isShared_936_ == 0)
{
v___x_938_ = v___x_935_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_uri_932_);
lean_ctor_set(v_reuseFailAlloc_942_, 1, v_headers_933_);
lean_ctor_set_uint8(v_reuseFailAlloc_942_, sizeof(void*)*2 + 1, v_version_931_);
v___x_938_ = v_reuseFailAlloc_942_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
lean_object* v___x_940_; 
lean_ctor_set_uint8(v___x_938_, sizeof(void*)*2, v_method_925_);
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 0, v___x_938_);
v___x_940_ = v___x_929_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v___x_938_);
lean_ctor_set(v_reuseFailAlloc_941_, 1, v_extensions_927_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_method___boxed(lean_object* v_builder_945_, lean_object* v_method_946_){
_start:
{
uint8_t v_method_boxed_947_; lean_object* v_res_948_; 
v_method_boxed_947_ = lean_unbox(v_method_946_);
v_res_948_ = l_Std_Http_Request_Builder_method(v_builder_945_, v_method_boxed_947_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_version(lean_object* v_builder_949_, uint8_t v_version_950_){
_start:
{
lean_object* v_line_951_; lean_object* v_extensions_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_969_; 
v_line_951_ = lean_ctor_get(v_builder_949_, 0);
v_extensions_952_ = lean_ctor_get(v_builder_949_, 1);
v_isSharedCheck_969_ = !lean_is_exclusive(v_builder_949_);
if (v_isSharedCheck_969_ == 0)
{
v___x_954_ = v_builder_949_;
v_isShared_955_ = v_isSharedCheck_969_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_extensions_952_);
lean_inc(v_line_951_);
lean_dec(v_builder_949_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_969_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
uint8_t v_method_956_; lean_object* v_uri_957_; lean_object* v_headers_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_968_; 
v_method_956_ = lean_ctor_get_uint8(v_line_951_, sizeof(void*)*2);
v_uri_957_ = lean_ctor_get(v_line_951_, 0);
v_headers_958_ = lean_ctor_get(v_line_951_, 1);
v_isSharedCheck_968_ = !lean_is_exclusive(v_line_951_);
if (v_isSharedCheck_968_ == 0)
{
v___x_960_ = v_line_951_;
v_isShared_961_ = v_isSharedCheck_968_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_headers_958_);
lean_inc(v_uri_957_);
lean_dec(v_line_951_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_968_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_uri_957_);
lean_ctor_set(v_reuseFailAlloc_967_, 1, v_headers_958_);
lean_ctor_set_uint8(v_reuseFailAlloc_967_, sizeof(void*)*2, v_method_956_);
v___x_963_ = v_reuseFailAlloc_967_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
lean_object* v___x_965_; 
lean_ctor_set_uint8(v___x_963_, sizeof(void*)*2 + 1, v_version_950_);
if (v_isShared_955_ == 0)
{
lean_ctor_set(v___x_954_, 0, v___x_963_);
v___x_965_ = v___x_954_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v___x_963_);
lean_ctor_set(v_reuseFailAlloc_966_, 1, v_extensions_952_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_version___boxed(lean_object* v_builder_970_, lean_object* v_version_971_){
_start:
{
uint8_t v_version_boxed_972_; lean_object* v_res_973_; 
v_version_boxed_972_ = lean_unbox(v_version_971_);
v_res_973_ = l_Std_Http_Request_Builder_version(v_builder_970_, v_version_boxed_972_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_uri(lean_object* v_builder_974_, lean_object* v_uri_975_){
_start:
{
lean_object* v_line_976_; lean_object* v_extensions_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_995_; 
v_line_976_ = lean_ctor_get(v_builder_974_, 0);
v_extensions_977_ = lean_ctor_get(v_builder_974_, 1);
v_isSharedCheck_995_ = !lean_is_exclusive(v_builder_974_);
if (v_isSharedCheck_995_ == 0)
{
v___x_979_ = v_builder_974_;
v_isShared_980_ = v_isSharedCheck_995_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_extensions_977_);
lean_inc(v_line_976_);
lean_dec(v_builder_974_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_995_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
uint8_t v_method_981_; uint8_t v_version_982_; lean_object* v_headers_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_993_; 
v_method_981_ = lean_ctor_get_uint8(v_line_976_, sizeof(void*)*2);
v_version_982_ = lean_ctor_get_uint8(v_line_976_, sizeof(void*)*2 + 1);
v_headers_983_ = lean_ctor_get(v_line_976_, 1);
v_isSharedCheck_993_ = !lean_is_exclusive(v_line_976_);
if (v_isSharedCheck_993_ == 0)
{
lean_object* v_unused_994_; 
v_unused_994_ = lean_ctor_get(v_line_976_, 0);
lean_dec(v_unused_994_);
v___x_985_ = v_line_976_;
v_isShared_986_ = v_isSharedCheck_993_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_headers_983_);
lean_dec(v_line_976_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_993_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
lean_ctor_set(v___x_985_, 0, v_uri_975_);
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_uri_975_);
lean_ctor_set(v_reuseFailAlloc_992_, 1, v_headers_983_);
lean_ctor_set_uint8(v_reuseFailAlloc_992_, sizeof(void*)*2, v_method_981_);
lean_ctor_set_uint8(v_reuseFailAlloc_992_, sizeof(void*)*2 + 1, v_version_982_);
v___x_988_ = v_reuseFailAlloc_992_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
lean_object* v___x_990_; 
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 0, v___x_988_);
v___x_990_ = v___x_979_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v___x_988_);
lean_ctor_set(v_reuseFailAlloc_991_, 1, v_extensions_977_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_Request_Builder_uri_x21_spec__0(lean_object* v_msg_996_){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = l_Std_Http_instInhabitedRequestTarget_default;
v___x_998_ = lean_panic_fn_borrowed(v___x_997_, v_msg_996_);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_uri_x21___lam__0(lean_object* v___x_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v___x_1004_; 
v___x_1004_ = l_Std_Http_URI_Parser_parseRequestTarget(v___x_1002_, v___y_1003_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_pos_1005_; lean_object* v_array_1006_; lean_object* v_idx_1007_; lean_object* v___x_1008_; uint8_t v___x_1009_; 
v_pos_1005_ = lean_ctor_get(v___x_1004_, 0);
v_array_1006_ = lean_ctor_get(v_pos_1005_, 0);
v_idx_1007_ = lean_ctor_get(v_pos_1005_, 1);
v___x_1008_ = lean_byte_array_size(v_array_1006_);
v___x_1009_ = lean_nat_dec_lt(v_idx_1007_, v___x_1008_);
if (v___x_1009_ == 0)
{
return v___x_1004_;
}
else
{
lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1017_; 
lean_inc(v_pos_1005_);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1017_ == 0)
{
lean_object* v_unused_1018_; lean_object* v_unused_1019_; 
v_unused_1018_ = lean_ctor_get(v___x_1004_, 1);
lean_dec(v_unused_1018_);
v_unused_1019_ = lean_ctor_get(v___x_1004_, 0);
lean_dec(v_unused_1019_);
v___x_1011_ = v___x_1004_;
v_isShared_1012_ = v_isSharedCheck_1017_;
goto v_resetjp_1010_;
}
else
{
lean_dec(v___x_1004_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1017_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1013_; lean_object* v___x_1015_; 
v___x_1013_ = ((lean_object*)(l_Std_Http_Request_Builder_uri_x21___lam__0___closed__1));
if (v_isShared_1012_ == 0)
{
lean_ctor_set_tag(v___x_1011_, 1);
lean_ctor_set(v___x_1011_, 1, v___x_1013_);
v___x_1015_ = v___x_1011_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_pos_1005_);
lean_ctor_set(v_reuseFailAlloc_1016_, 1, v___x_1013_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
}
else
{
return v___x_1004_;
}
}
}
static lean_object* _init_l_Std_Http_Request_Builder_uri_x21___closed__5(void){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1033_ = ((lean_object*)(l_Std_Http_Request_Builder_uri_x21___closed__4));
v___x_1034_ = lean_unsigned_to_nat(12u);
v___x_1035_ = lean_unsigned_to_nat(45u);
v___x_1036_ = ((lean_object*)(l_Std_Http_Request_Builder_uri_x21___closed__3));
v___x_1037_ = ((lean_object*)(l_Std_Http_Request_Builder_uri_x21___closed__2));
v___x_1038_ = l_mkPanicMessageWithDecl(v___x_1037_, v___x_1036_, v___x_1035_, v___x_1034_, v___x_1033_);
return v___x_1038_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_uri_x21(lean_object* v_builder_1039_, lean_object* v_uri_1040_){
_start:
{
lean_object* v___y_1042_; lean_object* v___f_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___f_1063_ = ((lean_object*)(l_Std_Http_Request_Builder_uri_x21___closed__1));
v___x_1064_ = lean_string_to_utf8(v_uri_1040_);
v___x_1065_ = l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(v___f_1063_, v___x_1064_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
lean_dec_ref_known(v___x_1065_, 1);
v___x_1066_ = lean_obj_once(&l_Std_Http_Request_Builder_uri_x21___closed__5, &l_Std_Http_Request_Builder_uri_x21___closed__5_once, _init_l_Std_Http_Request_Builder_uri_x21___closed__5);
v___x_1067_ = l_panic___at___00Std_Http_Request_Builder_uri_x21_spec__0(v___x_1066_);
v___y_1042_ = v___x_1067_;
goto v___jp_1041_;
}
else
{
lean_object* v_a_1068_; 
v_a_1068_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1068_);
lean_dec_ref_known(v___x_1065_, 1);
v___y_1042_ = v_a_1068_;
goto v___jp_1041_;
}
v___jp_1041_:
{
lean_object* v_line_1043_; lean_object* v_extensions_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1062_; 
v_line_1043_ = lean_ctor_get(v_builder_1039_, 0);
v_extensions_1044_ = lean_ctor_get(v_builder_1039_, 1);
v_isSharedCheck_1062_ = !lean_is_exclusive(v_builder_1039_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1046_ = v_builder_1039_;
v_isShared_1047_ = v_isSharedCheck_1062_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_extensions_1044_);
lean_inc(v_line_1043_);
lean_dec(v_builder_1039_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1062_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
uint8_t v_method_1048_; uint8_t v_version_1049_; lean_object* v_headers_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1060_; 
v_method_1048_ = lean_ctor_get_uint8(v_line_1043_, sizeof(void*)*2);
v_version_1049_ = lean_ctor_get_uint8(v_line_1043_, sizeof(void*)*2 + 1);
v_headers_1050_ = lean_ctor_get(v_line_1043_, 1);
v_isSharedCheck_1060_ = !lean_is_exclusive(v_line_1043_);
if (v_isSharedCheck_1060_ == 0)
{
lean_object* v_unused_1061_; 
v_unused_1061_ = lean_ctor_get(v_line_1043_, 0);
lean_dec(v_unused_1061_);
v___x_1052_ = v_line_1043_;
v_isShared_1053_ = v_isSharedCheck_1060_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_headers_1050_);
lean_dec(v_line_1043_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1060_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1055_; 
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 0, v___y_1042_);
v___x_1055_ = v___x_1052_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v___y_1042_);
lean_ctor_set(v_reuseFailAlloc_1059_, 1, v_headers_1050_);
lean_ctor_set_uint8(v_reuseFailAlloc_1059_, sizeof(void*)*2, v_method_1048_);
lean_ctor_set_uint8(v_reuseFailAlloc_1059_, sizeof(void*)*2 + 1, v_version_1049_);
v___x_1055_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
lean_object* v___x_1057_; 
if (v_isShared_1047_ == 0)
{
lean_ctor_set(v___x_1046_, 0, v___x_1055_);
v___x_1057_ = v___x_1046_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1055_);
lean_ctor_set(v_reuseFailAlloc_1058_, 1, v_extensions_1044_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_headers(lean_object* v_builder_1069_, lean_object* v_headers_1070_){
_start:
{
lean_object* v_line_1071_; lean_object* v_extensions_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1090_; 
v_line_1071_ = lean_ctor_get(v_builder_1069_, 0);
v_extensions_1072_ = lean_ctor_get(v_builder_1069_, 1);
v_isSharedCheck_1090_ = !lean_is_exclusive(v_builder_1069_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1074_ = v_builder_1069_;
v_isShared_1075_ = v_isSharedCheck_1090_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_extensions_1072_);
lean_inc(v_line_1071_);
lean_dec(v_builder_1069_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1090_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
uint8_t v_method_1076_; uint8_t v_version_1077_; lean_object* v_uri_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1088_; 
v_method_1076_ = lean_ctor_get_uint8(v_line_1071_, sizeof(void*)*2);
v_version_1077_ = lean_ctor_get_uint8(v_line_1071_, sizeof(void*)*2 + 1);
v_uri_1078_ = lean_ctor_get(v_line_1071_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v_line_1071_);
if (v_isSharedCheck_1088_ == 0)
{
lean_object* v_unused_1089_; 
v_unused_1089_ = lean_ctor_get(v_line_1071_, 1);
lean_dec(v_unused_1089_);
v___x_1080_ = v_line_1071_;
v_isShared_1081_ = v_isSharedCheck_1088_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_uri_1078_);
lean_dec(v_line_1071_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1088_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1083_; 
if (v_isShared_1081_ == 0)
{
lean_ctor_set(v___x_1080_, 1, v_headers_1070_);
v___x_1083_ = v___x_1080_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v_uri_1078_);
lean_ctor_set(v_reuseFailAlloc_1087_, 1, v_headers_1070_);
lean_ctor_set_uint8(v_reuseFailAlloc_1087_, sizeof(void*)*2, v_method_1076_);
lean_ctor_set_uint8(v_reuseFailAlloc_1087_, sizeof(void*)*2 + 1, v_version_1077_);
v___x_1083_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
lean_object* v___x_1085_; 
if (v_isShared_1075_ == 0)
{
lean_ctor_set(v___x_1074_, 0, v___x_1083_);
v___x_1085_ = v___x_1074_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v___x_1083_);
lean_ctor_set(v_reuseFailAlloc_1086_, 1, v_extensions_1072_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_header(lean_object* v_builder_1091_, lean_object* v_key_1092_, lean_object* v_value_1093_){
_start:
{
lean_object* v_line_1094_; lean_object* v_extensions_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1115_; 
v_line_1094_ = lean_ctor_get(v_builder_1091_, 0);
v_extensions_1095_ = lean_ctor_get(v_builder_1091_, 1);
v_isSharedCheck_1115_ = !lean_is_exclusive(v_builder_1091_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1097_ = v_builder_1091_;
v_isShared_1098_ = v_isSharedCheck_1115_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_extensions_1095_);
lean_inc(v_line_1094_);
lean_dec(v_builder_1091_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1115_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
uint8_t v_method_1099_; uint8_t v_version_1100_; lean_object* v_uri_1101_; lean_object* v_headers_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1114_; 
v_method_1099_ = lean_ctor_get_uint8(v_line_1094_, sizeof(void*)*2);
v_version_1100_ = lean_ctor_get_uint8(v_line_1094_, sizeof(void*)*2 + 1);
v_uri_1101_ = lean_ctor_get(v_line_1094_, 0);
v_headers_1102_ = lean_ctor_get(v_line_1094_, 1);
v_isSharedCheck_1114_ = !lean_is_exclusive(v_line_1094_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1104_ = v_line_1094_;
v_isShared_1105_ = v_isSharedCheck_1114_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_headers_1102_);
lean_inc(v_uri_1101_);
lean_dec(v_line_1094_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1114_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1109_; 
v___x_1106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1106_, 0, v_key_1092_);
lean_ctor_set(v___x_1106_, 1, v_value_1093_);
v___x_1107_ = lean_array_push(v_headers_1102_, v___x_1106_);
if (v_isShared_1105_ == 0)
{
lean_ctor_set(v___x_1104_, 1, v___x_1107_);
v___x_1109_ = v___x_1104_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_uri_1101_);
lean_ctor_set(v_reuseFailAlloc_1113_, 1, v___x_1107_);
lean_ctor_set_uint8(v_reuseFailAlloc_1113_, sizeof(void*)*2, v_method_1099_);
lean_ctor_set_uint8(v_reuseFailAlloc_1113_, sizeof(void*)*2 + 1, v_version_1100_);
v___x_1109_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
lean_object* v___x_1111_; 
if (v_isShared_1098_ == 0)
{
lean_ctor_set(v___x_1097_, 0, v___x_1109_);
v___x_1111_ = v___x_1097_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v___x_1109_);
lean_ctor_set(v_reuseFailAlloc_1112_, 1, v_extensions_1095_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_header_x21(lean_object* v_builder_1116_, lean_object* v_key_1117_, lean_object* v_value_1118_){
_start:
{
lean_object* v_line_1119_; lean_object* v_extensions_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1142_; 
v_line_1119_ = lean_ctor_get(v_builder_1116_, 0);
v_extensions_1120_ = lean_ctor_get(v_builder_1116_, 1);
v_isSharedCheck_1142_ = !lean_is_exclusive(v_builder_1116_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1122_ = v_builder_1116_;
v_isShared_1123_ = v_isSharedCheck_1142_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_extensions_1120_);
lean_inc(v_line_1119_);
lean_dec(v_builder_1116_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1142_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
uint8_t v_method_1124_; uint8_t v_version_1125_; lean_object* v_uri_1126_; lean_object* v_headers_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1141_; 
v_method_1124_ = lean_ctor_get_uint8(v_line_1119_, sizeof(void*)*2);
v_version_1125_ = lean_ctor_get_uint8(v_line_1119_, sizeof(void*)*2 + 1);
v_uri_1126_ = lean_ctor_get(v_line_1119_, 0);
v_headers_1127_ = lean_ctor_get(v_line_1119_, 1);
v_isSharedCheck_1141_ = !lean_is_exclusive(v_line_1119_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1129_ = v_line_1119_;
v_isShared_1130_ = v_isSharedCheck_1141_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_headers_1127_);
lean_inc(v_uri_1126_);
lean_dec(v_line_1119_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1141_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v_key_1131_; lean_object* v_value_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1136_; 
v_key_1131_ = l_Std_Http_Header_Name_ofString_x21(v_key_1117_);
v_value_1132_ = l_Std_Http_Header_Value_ofString_x21(v_value_1118_);
v___x_1133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1133_, 0, v_key_1131_);
lean_ctor_set(v___x_1133_, 1, v_value_1132_);
v___x_1134_ = lean_array_push(v_headers_1127_, v___x_1133_);
if (v_isShared_1130_ == 0)
{
lean_ctor_set(v___x_1129_, 1, v___x_1134_);
v___x_1136_ = v___x_1129_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_uri_1126_);
lean_ctor_set(v_reuseFailAlloc_1140_, 1, v___x_1134_);
lean_ctor_set_uint8(v_reuseFailAlloc_1140_, sizeof(void*)*2, v_method_1124_);
lean_ctor_set_uint8(v_reuseFailAlloc_1140_, sizeof(void*)*2 + 1, v_version_1125_);
v___x_1136_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
lean_object* v___x_1138_; 
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 0, v___x_1136_);
v___x_1138_ = v___x_1122_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1136_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v_extensions_1120_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_header_x3f(lean_object* v_builder_1143_, lean_object* v_key_1144_, lean_object* v_value_1145_){
_start:
{
lean_object* v___x_1146_; 
v___x_1146_ = l_Std_Http_Header_Name_ofString_x3f(v_key_1144_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v___x_1147_; 
lean_dec_ref(v_value_1145_);
lean_dec_ref(v_builder_1143_);
v___x_1147_ = lean_box(0);
return v___x_1147_;
}
else
{
lean_object* v_val_1148_; lean_object* v___x_1149_; 
v_val_1148_ = lean_ctor_get(v___x_1146_, 0);
lean_inc(v_val_1148_);
lean_dec_ref_known(v___x_1146_, 1);
v___x_1149_ = l_Std_Http_Header_Value_ofString_x3f(v_value_1145_);
if (lean_obj_tag(v___x_1149_) == 0)
{
lean_object* v___x_1150_; 
lean_dec(v_val_1148_);
lean_dec_ref(v_builder_1143_);
v___x_1150_ = lean_box(0);
return v___x_1150_;
}
else
{
lean_object* v_line_1151_; lean_object* v_val_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1181_; 
v_line_1151_ = lean_ctor_get(v_builder_1143_, 0);
lean_inc_ref(v_line_1151_);
v_val_1152_ = lean_ctor_get(v___x_1149_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1149_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1154_ = v___x_1149_;
v_isShared_1155_ = v_isSharedCheck_1181_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_val_1152_);
lean_dec(v___x_1149_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1181_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v_extensions_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1179_; 
v_extensions_1156_ = lean_ctor_get(v_builder_1143_, 1);
v_isSharedCheck_1179_ = !lean_is_exclusive(v_builder_1143_);
if (v_isSharedCheck_1179_ == 0)
{
lean_object* v_unused_1180_; 
v_unused_1180_ = lean_ctor_get(v_builder_1143_, 0);
lean_dec(v_unused_1180_);
v___x_1158_ = v_builder_1143_;
v_isShared_1159_ = v_isSharedCheck_1179_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_extensions_1156_);
lean_dec(v_builder_1143_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1179_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
uint8_t v_method_1160_; uint8_t v_version_1161_; lean_object* v_uri_1162_; lean_object* v_headers_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1178_; 
v_method_1160_ = lean_ctor_get_uint8(v_line_1151_, sizeof(void*)*2);
v_version_1161_ = lean_ctor_get_uint8(v_line_1151_, sizeof(void*)*2 + 1);
v_uri_1162_ = lean_ctor_get(v_line_1151_, 0);
v_headers_1163_ = lean_ctor_get(v_line_1151_, 1);
v_isSharedCheck_1178_ = !lean_is_exclusive(v_line_1151_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1165_ = v_line_1151_;
v_isShared_1166_ = v_isSharedCheck_1178_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_headers_1163_);
lean_inc(v_uri_1162_);
lean_dec(v_line_1151_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1178_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1170_; 
v___x_1167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1167_, 0, v_val_1148_);
lean_ctor_set(v___x_1167_, 1, v_val_1152_);
v___x_1168_ = lean_array_push(v_headers_1163_, v___x_1167_);
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 1, v___x_1168_);
v___x_1170_ = v___x_1165_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v_uri_1162_);
lean_ctor_set(v_reuseFailAlloc_1177_, 1, v___x_1168_);
lean_ctor_set_uint8(v_reuseFailAlloc_1177_, sizeof(void*)*2, v_method_1160_);
lean_ctor_set_uint8(v_reuseFailAlloc_1177_, sizeof(void*)*2 + 1, v_version_1161_);
v___x_1170_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
lean_object* v___x_1172_; 
if (v_isShared_1159_ == 0)
{
lean_ctor_set(v___x_1158_, 0, v___x_1170_);
v___x_1172_ = v___x_1158_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v___x_1170_);
lean_ctor_set(v_reuseFailAlloc_1176_, 1, v_extensions_1156_);
v___x_1172_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
lean_object* v___x_1174_; 
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 0, v___x_1172_);
v___x_1174_ = v___x_1154_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v___x_1172_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
return v___x_1174_;
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_headerOpt(lean_object* v_builder_1182_, lean_object* v_key_1183_, lean_object* v_value_1184_){
_start:
{
if (lean_obj_tag(v_value_1184_) == 0)
{
lean_dec_ref(v_key_1183_);
return v_builder_1182_;
}
else
{
lean_object* v_val_1185_; lean_object* v___x_1186_; 
v_val_1185_ = lean_ctor_get(v_value_1184_, 0);
lean_inc(v_val_1185_);
lean_dec_ref_known(v_value_1184_, 1);
v___x_1186_ = l_Std_Http_Request_Builder_header(v_builder_1182_, v_key_1183_, v_val_1185_);
return v___x_1186_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_extension___redArg(lean_object* v_builder_1188_, lean_object* v_inst_1189_, lean_object* v_data_1190_){
_start:
{
lean_object* v_line_1191_; lean_object* v_extensions_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1203_; 
v_line_1191_ = lean_ctor_get(v_builder_1188_, 0);
v_extensions_1192_ = lean_ctor_get(v_builder_1188_, 1);
v_isSharedCheck_1203_ = !lean_is_exclusive(v_builder_1188_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1194_ = v_builder_1188_;
v_isShared_1195_ = v_isSharedCheck_1203_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_extensions_1192_);
lean_inc(v_line_1191_);
lean_dec(v_builder_1188_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1203_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v_dyn_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1201_; 
v_dyn_1196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_dyn_1196_, 0, v_inst_1189_);
lean_ctor_set(v_dyn_1196_, 1, v_data_1190_);
v___x_1197_ = ((lean_object*)(l_Std_Http_Request_Builder_extension___redArg___closed__0));
v___x_1198_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_dyn_1196_);
v___x_1199_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___x_1197_, v___x_1198_, v_dyn_1196_, v_extensions_1192_);
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 1, v___x_1199_);
v___x_1201_ = v___x_1194_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v_line_1191_);
lean_ctor_set(v_reuseFailAlloc_1202_, 1, v___x_1199_);
v___x_1201_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
return v___x_1201_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_extension(lean_object* v_00_u03b1_1204_, lean_object* v_builder_1205_, lean_object* v_inst_1206_, lean_object* v_data_1207_){
_start:
{
lean_object* v___x_1208_; 
v___x_1208_ = l_Std_Http_Request_Builder_extension___redArg(v_builder_1205_, v_inst_1206_, v_data_1207_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_body___redArg(lean_object* v_builder_1209_, lean_object* v_body_1210_){
_start:
{
lean_object* v_line_1211_; lean_object* v_extensions_1212_; lean_object* v___x_1213_; 
v_line_1211_ = lean_ctor_get(v_builder_1209_, 0);
v_extensions_1212_ = lean_ctor_get(v_builder_1209_, 1);
lean_inc(v_extensions_1212_);
lean_inc_ref(v_line_1211_);
v___x_1213_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1213_, 0, v_line_1211_);
lean_ctor_set(v___x_1213_, 1, v_body_1210_);
lean_ctor_set(v___x_1213_, 2, v_extensions_1212_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_body___redArg___boxed(lean_object* v_builder_1214_, lean_object* v_body_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l_Std_Http_Request_Builder_body___redArg(v_builder_1214_, v_body_1215_);
lean_dec_ref(v_builder_1214_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_body(lean_object* v_t_1217_, lean_object* v_builder_1218_, lean_object* v_body_1219_){
_start:
{
lean_object* v___x_1220_; 
v___x_1220_ = l_Std_Http_Request_Builder_body___redArg(v_builder_1218_, v_body_1219_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_Builder_body___boxed(lean_object* v_t_1221_, lean_object* v_builder_1222_, lean_object* v_body_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Std_Http_Request_Builder_body(v_t_1221_, v_builder_1222_, v_body_1223_);
lean_dec_ref(v_builder_1222_);
return v_res_1224_;
}
}
static lean_object* _init_l_Std_Http_Request_get___closed__0(void){
_start:
{
uint8_t v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1225_ = 8;
v___x_1226_ = l_Std_Http_Request_new;
v___x_1227_ = l_Std_Http_Request_Builder_method(v___x_1226_, v___x_1225_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_get(lean_object* v_uri_1228_){
_start:
{
lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1229_ = lean_obj_once(&l_Std_Http_Request_get___closed__0, &l_Std_Http_Request_get___closed__0_once, _init_l_Std_Http_Request_get___closed__0);
v___x_1230_ = l_Std_Http_Request_Builder_uri(v___x_1229_, v_uri_1228_);
return v___x_1230_;
}
}
static lean_object* _init_l_Std_Http_Request_post___closed__0(void){
_start:
{
uint8_t v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1231_ = 23;
v___x_1232_ = l_Std_Http_Request_new;
v___x_1233_ = l_Std_Http_Request_Builder_method(v___x_1232_, v___x_1231_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_post(lean_object* v_uri_1234_){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1235_ = lean_obj_once(&l_Std_Http_Request_post___closed__0, &l_Std_Http_Request_post___closed__0_once, _init_l_Std_Http_Request_post___closed__0);
v___x_1236_ = l_Std_Http_Request_Builder_uri(v___x_1235_, v_uri_1234_);
return v___x_1236_;
}
}
static lean_object* _init_l_Std_Http_Request_put___closed__0(void){
_start:
{
uint8_t v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1237_ = 27;
v___x_1238_ = l_Std_Http_Request_new;
v___x_1239_ = l_Std_Http_Request_Builder_method(v___x_1238_, v___x_1237_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_put(lean_object* v_uri_1240_){
_start:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1241_ = lean_obj_once(&l_Std_Http_Request_put___closed__0, &l_Std_Http_Request_put___closed__0_once, _init_l_Std_Http_Request_put___closed__0);
v___x_1242_ = l_Std_Http_Request_Builder_uri(v___x_1241_, v_uri_1240_);
return v___x_1242_;
}
}
static lean_object* _init_l_Std_Http_Request_delete___closed__0(void){
_start:
{
uint8_t v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1243_ = 7;
v___x_1244_ = l_Std_Http_Request_new;
v___x_1245_ = l_Std_Http_Request_Builder_method(v___x_1244_, v___x_1243_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_delete(lean_object* v_uri_1246_){
_start:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; 
v___x_1247_ = lean_obj_once(&l_Std_Http_Request_delete___closed__0, &l_Std_Http_Request_delete___closed__0_once, _init_l_Std_Http_Request_delete___closed__0);
v___x_1248_ = l_Std_Http_Request_Builder_uri(v___x_1247_, v_uri_1246_);
return v___x_1248_;
}
}
static lean_object* _init_l_Std_Http_Request_patch___closed__0(void){
_start:
{
uint8_t v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1249_ = 22;
v___x_1250_ = l_Std_Http_Request_new;
v___x_1251_ = l_Std_Http_Request_Builder_method(v___x_1250_, v___x_1249_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_patch(lean_object* v_uri_1252_){
_start:
{
lean_object* v___x_1253_; lean_object* v___x_1254_; 
v___x_1253_ = lean_obj_once(&l_Std_Http_Request_patch___closed__0, &l_Std_Http_Request_patch___closed__0_once, _init_l_Std_Http_Request_patch___closed__0);
v___x_1254_ = l_Std_Http_Request_Builder_uri(v___x_1253_, v_uri_1252_);
return v___x_1254_;
}
}
static lean_object* _init_l_Std_Http_Request_head___closed__0(void){
_start:
{
uint8_t v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1255_ = 9;
v___x_1256_ = l_Std_Http_Request_new;
v___x_1257_ = l_Std_Http_Request_Builder_method(v___x_1256_, v___x_1255_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_head(lean_object* v_uri_1258_){
_start:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1259_ = lean_obj_once(&l_Std_Http_Request_head___closed__0, &l_Std_Http_Request_head___closed__0_once, _init_l_Std_Http_Request_head___closed__0);
v___x_1260_ = l_Std_Http_Request_Builder_uri(v___x_1259_, v_uri_1258_);
return v___x_1260_;
}
}
static lean_object* _init_l_Std_Http_Request_options___closed__0(void){
_start:
{
uint8_t v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1261_ = 20;
v___x_1262_ = l_Std_Http_Request_new;
v___x_1263_ = l_Std_Http_Request_Builder_method(v___x_1262_, v___x_1261_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_options(lean_object* v_uri_1264_){
_start:
{
lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1265_ = lean_obj_once(&l_Std_Http_Request_options___closed__0, &l_Std_Http_Request_options___closed__0_once, _init_l_Std_Http_Request_options___closed__0);
v___x_1266_ = l_Std_Http_Request_Builder_uri(v___x_1265_, v_uri_1264_);
return v___x_1266_;
}
}
static lean_object* _init_l_Std_Http_Request_connect___closed__0(void){
_start:
{
uint8_t v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1267_ = 5;
v___x_1268_ = l_Std_Http_Request_new;
v___x_1269_ = l_Std_Http_Request_Builder_method(v___x_1268_, v___x_1267_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_connect(lean_object* v_uri_1270_){
_start:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1271_ = lean_obj_once(&l_Std_Http_Request_connect___closed__0, &l_Std_Http_Request_connect___closed__0_once, _init_l_Std_Http_Request_connect___closed__0);
v___x_1272_ = l_Std_Http_Request_Builder_uri(v___x_1271_, v_uri_1270_);
return v___x_1272_;
}
}
static lean_object* _init_l_Std_Http_Request_trace___closed__0(void){
_start:
{
uint8_t v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1273_ = 32;
v___x_1274_ = l_Std_Http_Request_new;
v___x_1275_ = l_Std_Http_Request_Builder_method(v___x_1274_, v___x_1273_);
return v___x_1275_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Request_trace(lean_object* v_uri_1276_){
_start:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1277_ = lean_obj_once(&l_Std_Http_Request_trace___closed__0, &l_Std_Http_Request_trace___closed__0_once, _init_l_Std_Http_Request_trace___closed__0);
v___x_1278_ = l_Std_Http_Request_Builder_uri(v___x_1277_, v_uri_1276_);
return v___x_1278_;
}
}
lean_object* runtime_initialize_Std_Http_Data_Extensions(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Method(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Version(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Headers(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_URI(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_Request(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Http_Data_Extensions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Method(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Headers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Http_Request_instInhabitedHead_default = _init_l_Std_Http_Request_instInhabitedHead_default();
lean_mark_persistent(l_Std_Http_Request_instInhabitedHead_default);
l_Std_Http_Request_instInhabitedHead = _init_l_Std_Http_Request_instInhabitedHead();
lean_mark_persistent(l_Std_Http_Request_instInhabitedHead);
l_Std_Http_Request_instToStringHead___lam__1___boxed__const__1 = _init_l_Std_Http_Request_instToStringHead___lam__1___boxed__const__1();
lean_mark_persistent(l_Std_Http_Request_instToStringHead___lam__1___boxed__const__1);
l_Std_Http_Request_new = _init_l_Std_Http_Request_new();
lean_mark_persistent(l_Std_Http_Request_new);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_Request(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Http_Data_Extensions(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Method(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Version(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Headers(uint8_t builtin);
lean_object* initialize_Std_Http_Data_URI(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_Request(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Http_Data_Extensions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Method(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Headers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_URI(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Request(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_Request(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_Request(builtin);
}
#ifdef __cplusplus
}
#endif
