// Lean compiler output
// Module: Std.Http.Data.Headers.Basic
// Imports: public import Std.Http.Data.URI public import Std.Http.Data.Headers.Name public import Std.Http.Data.Headers.Value public import Std.Internal.Parsec.Basic import Init.Data.String.Search
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
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Http_URI_Parser_parseHostHeader(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Std_Http_Internal_isToken(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Std_Http_Header_Value_ofString_x21(lean_object*);
lean_object* lean_uv_ntop_v4(lean_object*);
lean_object* lean_uv_ntop_v6(lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Std_Http_Internal_unquoteHttpString_x3f(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
extern lean_object* l_Std_Http_Header_Name_expect;
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Std_Http_URI_instReprPort_repr(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_mk(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Std_Http_Header_Name_instEncodeV11_go(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_sub(size_t, size_t);
extern lean_object* l_Std_Http_Header_Name_transferEncoding;
extern lean_object* l_Std_Http_Header_Name_contentLength;
extern lean_object* l_Std_Http_Header_Name_connection;
uint8_t l_Std_Http_URI_instBEqHost_beq(lean_object*, lean_object*);
uint8_t l_Std_Http_URI_instDecidableEqPort_decEq(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Internal_appendFieldLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Std_Http_Internal_appendFieldLine___closed__0 = (const lean_object*)&l_Std_Http_Internal_appendFieldLine___closed__0_value;
static lean_once_cell_t l_Std_Http_Internal_appendFieldLine___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Internal_appendFieldLine___closed__1;
static lean_once_cell_t l_Std_Http_Internal_appendFieldLine___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Internal_appendFieldLine___closed__2;
static const lean_string_object l_Std_Http_Internal_appendFieldLine___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\r\n"};
static const lean_object* l_Std_Http_Internal_appendFieldLine___closed__3 = (const lean_object*)&l_Std_Http_Internal_appendFieldLine___closed__3_value;
static lean_once_cell_t l_Std_Http_Internal_appendFieldLine___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Internal_appendFieldLine___closed__4;
static lean_once_cell_t l_Std_Http_Internal_appendFieldLine___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Internal_appendFieldLine___closed__5;
LEAN_EXPORT lean_object* l_Std_Http_Internal_appendFieldLine(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_appendFieldLine___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader(lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqContentLength_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqContentLength_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Header_instBEqContentLength___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_instBEqContentLength_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_instBEqContentLength___closed__0 = (const lean_object*)&l_Std_Http_Header_instBEqContentLength___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_instBEqContentLength = (const lean_object*)&l_Std_Http_Header_instBEqContentLength___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_Header_instReprContentLength_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__3_value),((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__6 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7;
static const lean_string_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__8_value;
static lean_once_cell_t l_Std_Http_Header_instReprContentLength_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__9;
static lean_once_cell_t l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10;
static const lean_ctor_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__11 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__11_value;
static const lean_ctor_object l_Std_Http_Header_instReprContentLength_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg___closed__12 = (const lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprContentLength_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprContentLength_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Header_instReprContentLength___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_instReprContentLength_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_instReprContentLength___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprContentLength___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_instReprContentLength = (const lean_object*)&l_Std_Http_Header_instReprContentLength___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Std_Http_Header_ContentLength_parse_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Std_Http_Header_ContentLength_parse_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_ContentLength_parse(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_ContentLength_serialize(lean_object*);
static const lean_closure_object l_Std_Http_Header_ContentLength_inst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_ContentLength_parse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_ContentLength_inst___closed__0 = (const lean_object*)&l_Std_Http_Header_ContentLength_inst___closed__0_value;
static const lean_closure_object l_Std_Http_Header_ContentLength_inst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_ContentLength_serialize, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_ContentLength_inst___closed__1 = (const lean_object*)&l_Std_Http_Header_ContentLength_inst___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_ContentLength_inst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Header_ContentLength_inst___closed__0_value),((lean_object*)&l_Std_Http_Header_ContentLength_inst___closed__1_value)}};
static const lean_object* l_Std_Http_Header_ContentLength_inst___closed__2 = (const lean_object*)&l_Std_Http_Header_ContentLength_inst___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_ContentLength_inst = (const lean_object*)&l_Std_Http_Header_ContentLength_inst___closed__2_value;
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_Header_TransferEncoding_Validate_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_Header_TransferEncoding_Validate_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "chunked"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_TransferEncoding_Validate_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_TransferEncoding_Validate_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Header_TransferEncoding_Validate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1___closed__0_value)}};
static const lean_object* l_Std_Http_Header_TransferEncoding_Validate___closed__0 = (const lean_object*)&l_Std_Http_Header_TransferEncoding_Validate___closed__0_value;
static const lean_array_object l_Std_Http_Header_TransferEncoding_Validate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_Header_TransferEncoding_Validate___closed__1 = (const lean_object*)&l_Std_Http_Header_TransferEncoding_Validate___closed__1_value;
LEAN_EXPORT uint8_t l_Std_Http_Header_TransferEncoding_Validate(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_Validate___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__0_value;
static const lean_string_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__3_value;
static const lean_string_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__4_value;
static lean_once_cell_t l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__5;
static lean_once_cell_t l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__6;
static const lean_ctor_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__8_value;
static const lean_string_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__9 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__9_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__9_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__10 = (const lean_object*)&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "codings"};
static const lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__2_value),((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__3_value;
static lean_once_cell_t l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__4;
static const lean_string_object l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "isValid"};
static const lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__6 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__6_value;
static const lean_string_object l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__7 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__7_value;
static const lean_ctor_object l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__7_value)}};
static const lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprTransferEncoding_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Header_instReprTransferEncoding___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_instReprTransferEncoding_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_instReprTransferEncoding___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_instReprTransferEncoding = (const lean_object*)&l_Std_Http_Header_instReprTransferEncoding___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_Header_TransferEncoding_isChunked(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_isChunked___boxed(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter___closed__0 = (const lean_object*)&l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter___closed__0_value;
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Header_TransferEncoding_Validate___closed__1_value)}};
static const lean_object* l_Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_parseCodings_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_parseFieldLines_x3f_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_parseFieldLines_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_parseFieldLines_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_parseFieldLines_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_parse(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_finalCodingIsChunked_x3f_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_finalCodingIsChunked_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_finalCodingIsChunked_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_finalCodingIsChunked_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_serialize(lean_object*);
static const lean_closure_object l_Std_Http_Header_TransferEncoding_inst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_TransferEncoding_parse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_TransferEncoding_inst___closed__0 = (const lean_object*)&l_Std_Http_Header_TransferEncoding_inst___closed__0_value;
static const lean_closure_object l_Std_Http_Header_TransferEncoding_inst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_TransferEncoding_serialize, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_TransferEncoding_inst___closed__1 = (const lean_object*)&l_Std_Http_Header_TransferEncoding_inst___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_TransferEncoding_inst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Header_TransferEncoding_inst___closed__0_value),((lean_object*)&l_Std_Http_Header_TransferEncoding_inst___closed__1_value)}};
static const lean_object* l_Std_Http_Header_TransferEncoding_inst___closed__2 = (const lean_object*)&l_Std_Http_Header_TransferEncoding_inst___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_TransferEncoding_inst = (const lean_object*)&l_Std_Http_Header_TransferEncoding_inst___closed__2_value;
static const lean_string_object l_Std_Http_Header_instReprConnection_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tokens"};
static const lean_object* l_Std_Http_Header_instReprConnection_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_Header_instReprConnection_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_Header_instReprConnection_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_instReprConnection_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_Header_instReprConnection_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_Header_instReprConnection_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__2_value),((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_Header_instReprConnection_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_Header_instReprConnection_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "valid"};
static const lean_object* l_Std_Http_Header_instReprConnection_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_Header_instReprConnection_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_Header_instReprConnection_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_Header_instReprConnection_repr___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprConnection_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprConnection_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprConnection_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Header_instReprConnection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_instReprConnection_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_instReprConnection___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprConnection___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_instReprConnection = (const lean_object*)&l_Std_Http_Header_instReprConnection___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_containsToken_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_containsToken_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Header_Connection_containsToken(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_Connection_containsToken___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Header_Connection_shouldClose___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "close"};
static const lean_object* l_Std_Http_Header_Connection_shouldClose___closed__0 = (const lean_object*)&l_Std_Http_Header_Connection_shouldClose___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_Header_Connection_shouldClose(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_Connection_shouldClose___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_parse_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_parse_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_Connection_parse(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_Connection_serialize(lean_object*);
static const lean_closure_object l_Std_Http_Header_Connection_inst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_Connection_parse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_Connection_inst___closed__0 = (const lean_object*)&l_Std_Http_Header_Connection_inst___closed__0_value;
static const lean_closure_object l_Std_Http_Header_Connection_inst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_Connection_serialize, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_Connection_inst___closed__1 = (const lean_object*)&l_Std_Http_Header_Connection_inst___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_Connection_inst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Header_Connection_inst___closed__0_value),((lean_object*)&l_Std_Http_Header_Connection_inst___closed__1_value)}};
static const lean_object* l_Std_Http_Header_Connection_inst___closed__2 = (const lean_object*)&l_Std_Http_Header_Connection_inst___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_Connection_inst = (const lean_object*)&l_Std_Http_Header_Connection_inst___closed__2_value;
static const lean_string_object l_Std_Http_Header_instReprHost_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "host"};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_Header_instReprHost_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_instReprHost_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_Header_instReprHost_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__2_value),((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__3_value;
static lean_once_cell_t l_Std_Http_Header_instReprHost_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__4;
static lean_once_cell_t l_Std_Http_Header_instReprHost_repr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__5;
static const lean_string_object l_Std_Http_Header_instReprHost_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Std.Http.URI.Host."};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__6 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__6_value;
static const lean_string_object l_Std_Http_Header_instReprHost_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__7 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__7_value;
static const lean_ctor_object l_Std_Http_Header_instReprHost_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__7_value)}};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__8_value;
static const lean_string_object l_Std_Http_Header_instReprHost_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__9 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Http_Header_instReprHost_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ipv4"};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__10 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__10_value;
static const lean_string_object l_Std_Http_Header_instReprHost_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ipv6"};
static const lean_object* l_Std_Http_Header_instReprHost_repr___redArg___closed__11 = (const lean_object*)&l_Std_Http_Header_instReprHost_repr___redArg___closed__11_value;
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprHost_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprHost_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprHost_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Header_instReprHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_instReprHost_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_instReprHost___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprHost___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_instReprHost = (const lean_object*)&l_Std_Http_Header_instReprHost___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqHost_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqHost_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Header_instBEqHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_instBEqHost_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_instBEqHost___closed__0 = (const lean_object*)&l_Std_Http_Header_instBEqHost___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_instBEqHost = (const lean_object*)&l_Std_Http_Header_instBEqHost___closed__0_value;
static const lean_string_object l_Std_Http_Header_Host_parse___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "expected end of input"};
static const lean_object* l_Std_Http_Header_Host_parse___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Header_Host_parse___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Http_Header_Host_parse___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Header_Host_parse___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Header_Host_parse___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Header_Host_parse___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_parse___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_parse___lam__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Header_Host_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*9 + 0, .m_other = 9, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(253) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(256) << 1) | 1)),((lean_object*)(((size_t)(8192) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(128) << 1) | 1)),((lean_object*)(((size_t)(8192) << 1) | 1)),((lean_object*)(((size_t)(100) << 1) | 1))}};
static const lean_object* l_Std_Http_Header_Host_parse___closed__0 = (const lean_object*)&l_Std_Http_Header_Host_parse___closed__0_value;
static const lean_closure_object l_Std_Http_Header_Host_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_Host_parse___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Header_Host_parse___closed__0_value)} };
static const lean_object* l_Std_Http_Header_Host_parse___closed__1 = (const lean_object*)&l_Std_Http_Header_Host_parse___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_parse(lean_object*);
static const lean_string_object l_Std_Http_Header_Host_serialize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Http_Header_Host_serialize___closed__0 = (const lean_object*)&l_Std_Http_Header_Host_serialize___closed__0_value;
static const lean_string_object l_Std_Http_Header_Host_serialize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Std_Http_Header_Host_serialize___closed__1 = (const lean_object*)&l_Std_Http_Header_Host_serialize___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_serialize(lean_object*);
static const lean_closure_object l_Std_Http_Header_Host_inst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_Host_parse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_Host_inst___closed__0 = (const lean_object*)&l_Std_Http_Header_Host_inst___closed__0_value;
static const lean_closure_object l_Std_Http_Header_Host_inst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_Host_serialize, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_Host_inst___closed__1 = (const lean_object*)&l_Std_Http_Header_Host_inst___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_Host_inst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Header_Host_inst___closed__0_value),((lean_object*)&l_Std_Http_Header_Host_inst___closed__1_value)}};
static const lean_object* l_Std_Http_Header_Host_inst___closed__2 = (const lean_object*)&l_Std_Http_Header_Host_inst___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_Host_inst = (const lean_object*)&l_Std_Http_Header_Host_inst___closed__2_value;
static const lean_ctor_object l_Std_Http_Header_instReprExpect_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Header_instReprExpect_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprExpect_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_Header_instReprExpect_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_Header_instReprExpect_repr___redArg___closed__0_value),((lean_object*)&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__12_value)}};
static const lean_object* l_Std_Http_Header_instReprExpect_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_Header_instReprExpect_repr___redArg___closed__1_value;
static lean_once_cell_t l_Std_Http_Header_instReprExpect_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprExpect_repr___redArg___closed__2;
static lean_once_cell_t l_Std_Http_Header_instReprExpect_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprExpect_repr___redArg___closed__3;
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprExpect_repr___redArg();
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprExpect_repr___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Http_Header_instReprExpect_repr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_instReprExpect_repr___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprExpect_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprExpect_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Header_instReprExpect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_instReprExpect_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_instReprExpect___closed__0 = (const lean_object*)&l_Std_Http_Header_instReprExpect___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_instReprExpect = (const lean_object*)&l_Std_Http_Header_instReprExpect___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqExpect_beq___redArg();
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqExpect_beq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqExpect_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqExpect_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Header_instBEqExpect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_instBEqExpect_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_instBEqExpect___closed__0 = (const lean_object*)&l_Std_Http_Header_instBEqExpect___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_instBEqExpect = (const lean_object*)&l_Std_Http_Header_instBEqExpect___closed__0_value;
static const lean_string_object l_Std_Http_Header_Expect_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "100-continue"};
static const lean_object* l_Std_Http_Header_Expect_parse___closed__0 = (const lean_object*)&l_Std_Http_Header_Expect_parse___closed__0_value;
static const lean_ctor_object l_Std_Http_Header_Expect_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Header_Expect_parse___closed__1 = (const lean_object*)&l_Std_Http_Header_Expect_parse___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Header_Expect_parse(lean_object*);
static lean_once_cell_t l_Std_Http_Header_Expect_serialize___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Expect_serialize___redArg___closed__0;
static lean_once_cell_t l_Std_Http_Header_Expect_serialize___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Expect_serialize___redArg___closed__1;
LEAN_EXPORT lean_object* l_Std_Http_Header_Expect_serialize___redArg();
LEAN_EXPORT lean_object* l_Std_Http_Header_Expect_serialize___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Http_Header_Expect_serialize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Header_Expect_serialize___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_Header_Expect_serialize(lean_object*);
static const lean_closure_object l_Std_Http_Header_Expect_inst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_Expect_parse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_Expect_inst___closed__0 = (const lean_object*)&l_Std_Http_Header_Expect_inst___closed__0_value;
static const lean_closure_object l_Std_Http_Header_Expect_inst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Header_Expect_serialize, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Header_Expect_inst___closed__1 = (const lean_object*)&l_Std_Http_Header_Expect_inst___closed__1_value;
static const lean_ctor_object l_Std_Http_Header_Expect_inst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Header_Expect_inst___closed__0_value),((lean_object*)&l_Std_Http_Header_Expect_inst___closed__1_value)}};
static const lean_object* l_Std_Http_Header_Expect_inst___closed__2 = (const lean_object*)&l_Std_Http_Header_Expect_inst___closed__2_value;
LEAN_EXPORT const lean_object* l_Std_Http_Header_Expect_inst = (const lean_object*)&l_Std_Http_Header_Expect_inst___closed__2_value;
static lean_object* _init_l_Std_Http_Internal_appendFieldLine___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = ((lean_object*)(l_Std_Http_Internal_appendFieldLine___closed__0));
v___x_3_ = lean_string_to_utf8(v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Std_Http_Internal_appendFieldLine___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_obj_once(&l_Std_Http_Internal_appendFieldLine___closed__1, &l_Std_Http_Internal_appendFieldLine___closed__1_once, _init_l_Std_Http_Internal_appendFieldLine___closed__1);
v___x_5_ = lean_byte_array_size(v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l_Std_Http_Internal_appendFieldLine___closed__4(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = ((lean_object*)(l_Std_Http_Internal_appendFieldLine___closed__3));
v___x_8_ = lean_string_to_utf8(v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Std_Http_Internal_appendFieldLine___closed__5(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_obj_once(&l_Std_Http_Internal_appendFieldLine___closed__4, &l_Std_Http_Internal_appendFieldLine___closed__4_once, _init_l_Std_Http_Internal_appendFieldLine___closed__4);
v___x_10_ = lean_byte_array_size(v___x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_appendFieldLine(lean_object* v_out_11_, lean_object* v_name_12_, lean_object* v_value_13_){
_start:
{
lean_object* v___x_14_; uint8_t v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; uint8_t v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_14_ = lean_unsigned_to_nat(0u);
v___x_15_ = 1;
v___x_16_ = l_Std_Http_Header_Name_instEncodeV11_go(v_name_12_, v___x_14_, v___x_15_, v_out_11_);
v___x_17_ = lean_obj_once(&l_Std_Http_Internal_appendFieldLine___closed__1, &l_Std_Http_Internal_appendFieldLine___closed__1_once, _init_l_Std_Http_Internal_appendFieldLine___closed__1);
v___x_18_ = lean_byte_array_size(v___x_16_);
v___x_19_ = lean_obj_once(&l_Std_Http_Internal_appendFieldLine___closed__2, &l_Std_Http_Internal_appendFieldLine___closed__2_once, _init_l_Std_Http_Internal_appendFieldLine___closed__2);
v___x_20_ = 0;
v___x_21_ = lean_byte_array_copy_slice(v___x_17_, v___x_14_, v___x_16_, v___x_18_, v___x_19_, v___x_20_);
v___x_22_ = lean_string_to_utf8(v_value_13_);
v___x_23_ = lean_byte_array_size(v___x_21_);
v___x_24_ = lean_byte_array_size(v___x_22_);
v___x_25_ = lean_byte_array_copy_slice(v___x_22_, v___x_14_, v___x_21_, v___x_23_, v___x_24_, v___x_20_);
lean_dec_ref(v___x_22_);
v___x_26_ = lean_obj_once(&l_Std_Http_Internal_appendFieldLine___closed__4, &l_Std_Http_Internal_appendFieldLine___closed__4_once, _init_l_Std_Http_Internal_appendFieldLine___closed__4);
v___x_27_ = lean_byte_array_size(v___x_25_);
v___x_28_ = lean_obj_once(&l_Std_Http_Internal_appendFieldLine___closed__5, &l_Std_Http_Internal_appendFieldLine___closed__5_once, _init_l_Std_Http_Internal_appendFieldLine___closed__5);
v___x_29_ = lean_byte_array_copy_slice(v___x_26_, v___x_14_, v___x_25_, v___x_27_, v___x_28_, v___x_20_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_appendFieldLine___boxed(lean_object* v_out_30_, lean_object* v_name_31_, lean_object* v_value_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Std_Http_Internal_appendFieldLine(v_out_30_, v_name_31_, v_value_32_);
lean_dec_ref(v_name_31_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader___redArg___lam__0(lean_object* v_h_34_, lean_object* v_out_35_, lean_object* v_a_36_){
_start:
{
lean_object* v_serialize_37_; lean_object* v___x_38_; lean_object* v_fst_39_; lean_object* v_snd_40_; lean_object* v___x_41_; 
v_serialize_37_ = lean_ctor_get(v_h_34_, 1);
lean_inc_ref(v_serialize_37_);
lean_dec_ref(v_h_34_);
v___x_38_ = lean_apply_1(v_serialize_37_, v_a_36_);
v_fst_39_ = lean_ctor_get(v___x_38_, 0);
lean_inc(v_fst_39_);
v_snd_40_ = lean_ctor_get(v___x_38_, 1);
lean_inc(v_snd_40_);
lean_dec_ref(v___x_38_);
v___x_41_ = l_Std_Http_Internal_appendFieldLine(v_out_35_, v_fst_39_, v_snd_40_);
lean_dec(v_fst_39_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader___redArg(lean_object* v_h_42_){
_start:
{
lean_object* v___f_43_; 
v___f_43_ = lean_alloc_closure((void*)(l_Std_Http_instEncodeV11OfHeader___redArg___lam__0), 3, 1);
lean_closure_set(v___f_43_, 0, v_h_42_);
return v___f_43_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instEncodeV11OfHeader(lean_object* v_00_u03b1_44_, lean_object* v_h_45_){
_start:
{
lean_object* v___f_46_; 
v___f_46_ = lean_alloc_closure((void*)(l_Std_Http_instEncodeV11OfHeader___redArg___lam__0), 3, 1);
lean_closure_set(v___f_46_, 0, v_h_45_);
return v___f_46_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg(){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg___closed__0));
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg___boxed(lean_object* v___dummy_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg();
return v_res_52_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___redArg();
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1(lean_object* v_s_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___boxed(lean_object* v_s_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1(v_s_56_);
lean_dec_ref(v_s_56_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__0(lean_object* v_s_58_, lean_object* v_p_59_){
_start:
{
lean_object* v___y_61_; lean_object* v___y_62_; uint32_t v___y_66_; lean_object* v___x_78_; uint8_t v_decide_79_; 
v___x_78_ = lean_string_utf8_byte_size(v_s_58_);
v_decide_79_ = lean_nat_dec_eq(v_p_59_, v___x_78_);
if (v_decide_79_ == 0)
{
uint32_t v___x_80_; uint32_t v___x_81_; uint8_t v___x_82_; 
v___x_80_ = lean_string_utf8_get_fast(v_s_58_, v_p_59_);
v___x_81_ = 65;
v___x_82_ = lean_uint32_dec_le(v___x_81_, v___x_80_);
if (v___x_82_ == 0)
{
v___y_66_ = v___x_80_;
goto v___jp_65_;
}
else
{
uint32_t v___x_83_; uint8_t v___x_84_; 
v___x_83_ = 90;
v___x_84_ = lean_uint32_dec_le(v___x_80_, v___x_83_);
if (v___x_84_ == 0)
{
v___y_66_ = v___x_80_;
goto v___jp_65_;
}
else
{
uint32_t v___x_85_; uint32_t v___x_86_; 
v___x_85_ = 32;
v___x_86_ = lean_uint32_add(v___x_80_, v___x_85_);
v___y_66_ = v___x_86_;
goto v___jp_65_;
}
}
}
else
{
lean_dec(v_p_59_);
return v_s_58_;
}
v___jp_60_:
{
lean_object* v___x_63_; 
v___x_63_ = lean_nat_add(v_p_59_, v___y_62_);
lean_dec(v_p_59_);
v_s_58_ = v___y_61_;
v_p_59_ = v___x_63_;
goto _start;
}
v___jp_65_:
{
lean_object* v___x_67_; uint32_t v___x_68_; uint8_t v___x_69_; 
lean_inc(v_p_59_);
v___x_67_ = lean_string_utf8_set(v_s_58_, v_p_59_, v___y_66_);
v___x_68_ = 127;
v___x_69_ = lean_uint32_dec_le(v___y_66_, v___x_68_);
if (v___x_69_ == 0)
{
uint32_t v___x_70_; uint8_t v___x_71_; 
v___x_70_ = 2047;
v___x_71_ = lean_uint32_dec_le(v___y_66_, v___x_70_);
if (v___x_71_ == 0)
{
uint32_t v___x_72_; uint8_t v___x_73_; 
v___x_72_ = 65535;
v___x_73_ = lean_uint32_dec_le(v___y_66_, v___x_72_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; 
v___x_74_ = lean_unsigned_to_nat(4u);
v___y_61_ = v___x_67_;
v___y_62_ = v___x_74_;
goto v___jp_60_;
}
else
{
lean_object* v___x_75_; 
v___x_75_ = lean_unsigned_to_nat(3u);
v___y_61_ = v___x_67_;
v___y_62_ = v___x_75_;
goto v___jp_60_;
}
}
else
{
lean_object* v___x_76_; 
v___x_76_ = lean_unsigned_to_nat(2u);
v___y_61_ = v___x_67_;
v___y_62_ = v___x_76_;
goto v___jp_60_;
}
}
else
{
lean_object* v___x_77_; 
v___x_77_ = lean_unsigned_to_nat(1u);
v___y_61_ = v___x_67_;
v___y_62_ = v___x_77_;
goto v___jp_60_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__4(size_t v_sz_87_, size_t v_i_88_, lean_object* v_bs_89_){
_start:
{
uint8_t v___x_90_; 
v___x_90_ = lean_usize_dec_lt(v_i_88_, v_sz_87_);
if (v___x_90_ == 0)
{
return v_bs_89_;
}
else
{
lean_object* v_v_91_; lean_object* v___x_92_; lean_object* v_bs_x27_93_; lean_object* v___x_94_; lean_object* v___x_95_; size_t v___x_96_; size_t v___x_97_; lean_object* v___x_98_; 
v_v_91_ = lean_array_uget(v_bs_89_, v_i_88_);
v___x_92_ = lean_unsigned_to_nat(0u);
v_bs_x27_93_ = lean_array_uset(v_bs_89_, v_i_88_, v___x_92_);
v___x_94_ = l_String_Slice_toString(v_v_91_);
lean_dec(v_v_91_);
v___x_95_ = l_String_mapAux___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__0(v___x_94_, v___x_92_);
v___x_96_ = ((size_t)1ULL);
v___x_97_ = lean_usize_add(v_i_88_, v___x_96_);
v___x_98_ = lean_array_uset(v_bs_x27_93_, v_i_88_, v___x_95_);
v_i_88_ = v___x_97_;
v_bs_89_ = v___x_98_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__4___boxed(lean_object* v_sz_100_, lean_object* v_i_101_, lean_object* v_bs_102_){
_start:
{
size_t v_sz_boxed_103_; size_t v_i_boxed_104_; lean_object* v_res_105_; 
v_sz_boxed_103_ = lean_unbox_usize(v_sz_100_);
lean_dec(v_sz_100_);
v_i_boxed_104_ = lean_unbox_usize(v_i_101_);
lean_dec(v_i_101_);
v_res_105_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__4(v_sz_boxed_103_, v_i_boxed_104_, v_bs_102_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___redArg(lean_object* v___x_106_, lean_object* v___x_107_, lean_object* v___x_108_, lean_object* v_a_109_, lean_object* v_b_110_){
_start:
{
lean_object* v_it_112_; lean_object* v_startInclusive_113_; lean_object* v_endExclusive_114_; 
if (lean_obj_tag(v_a_109_) == 0)
{
lean_object* v_currPos_119_; lean_object* v_searcher_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_149_; 
v_currPos_119_ = lean_ctor_get(v_a_109_, 0);
v_searcher_120_ = lean_ctor_get(v_a_109_, 1);
v_isSharedCheck_149_ = !lean_is_exclusive(v_a_109_);
if (v_isSharedCheck_149_ == 0)
{
v___x_122_ = v_a_109_;
v_isShared_123_ = v_isSharedCheck_149_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_searcher_120_);
lean_inc(v_currPos_119_);
lean_dec(v_a_109_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_149_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v_str_124_; lean_object* v_startInclusive_125_; lean_object* v_endExclusive_126_; lean_object* v___x_127_; uint8_t v_decide_128_; 
v_str_124_ = lean_ctor_get(v___x_107_, 0);
v_startInclusive_125_ = lean_ctor_get(v___x_107_, 1);
v_endExclusive_126_ = lean_ctor_get(v___x_107_, 2);
v___x_127_ = lean_nat_sub(v_endExclusive_126_, v_startInclusive_125_);
v_decide_128_ = lean_nat_dec_eq(v_searcher_120_, v___x_127_);
lean_dec(v___x_127_);
if (v_decide_128_ == 0)
{
lean_object* v___x_129_; uint32_t v___x_130_; uint32_t v___x_131_; uint8_t v___x_132_; 
v___x_129_ = lean_nat_add(v_startInclusive_125_, v_searcher_120_);
v___x_130_ = lean_string_utf8_get_fast(v_str_124_, v___x_129_);
v___x_131_ = 44;
v___x_132_ = lean_uint32_dec_eq(v___x_130_, v___x_131_);
if (v___x_132_ == 0)
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_136_; 
lean_dec(v_searcher_120_);
v___x_133_ = lean_string_utf8_next_fast(v_str_124_, v___x_129_);
lean_dec(v___x_129_);
v___x_134_ = lean_nat_sub(v___x_133_, v_startInclusive_125_);
if (v_isShared_123_ == 0)
{
lean_ctor_set(v___x_122_, 1, v___x_134_);
v___x_136_ = v___x_122_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_currPos_119_);
lean_ctor_set(v_reuseFailAlloc_138_, 1, v___x_134_);
v___x_136_ = v_reuseFailAlloc_138_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
v_a_109_ = v___x_136_;
goto _start;
}
}
else
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v_slice_142_; lean_object* v_nextIt_144_; 
v___x_139_ = lean_string_utf8_next_fast(v_str_124_, v___x_129_);
v___x_140_ = lean_nat_sub(v___x_139_, v___x_129_);
lean_dec(v___x_129_);
v___x_141_ = lean_nat_add(v_searcher_120_, v___x_140_);
lean_dec(v___x_140_);
v_slice_142_ = l_String_Slice_subslice_x21(v___x_107_, v_currPos_119_, v_searcher_120_);
lean_inc(v___x_141_);
if (v_isShared_123_ == 0)
{
lean_ctor_set(v___x_122_, 1, v___x_141_);
lean_ctor_set(v___x_122_, 0, v___x_141_);
v_nextIt_144_ = v___x_122_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v___x_141_);
lean_ctor_set(v_reuseFailAlloc_147_, 1, v___x_141_);
v_nextIt_144_ = v_reuseFailAlloc_147_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
lean_object* v_startInclusive_145_; lean_object* v_endExclusive_146_; 
v_startInclusive_145_ = lean_ctor_get(v_slice_142_, 0);
lean_inc(v_startInclusive_145_);
v_endExclusive_146_ = lean_ctor_get(v_slice_142_, 1);
lean_inc(v_endExclusive_146_);
lean_dec_ref(v_slice_142_);
v_it_112_ = v_nextIt_144_;
v_startInclusive_113_ = v_startInclusive_145_;
v_endExclusive_114_ = v_endExclusive_146_;
goto v___jp_111_;
}
}
}
else
{
lean_object* v___x_148_; 
lean_del_object(v___x_122_);
lean_dec(v_searcher_120_);
v___x_148_ = lean_box(1);
lean_inc(v___x_108_);
v_it_112_ = v___x_148_;
v_startInclusive_113_ = v_currPos_119_;
v_endExclusive_114_ = v___x_108_;
goto v___jp_111_;
}
}
}
else
{
lean_dec(v___x_108_);
lean_dec_ref(v___x_106_);
return v_b_110_;
}
v___jp_111_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
lean_inc_ref(v___x_106_);
v___x_115_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_115_, 0, v___x_106_);
lean_ctor_set(v___x_115_, 1, v_startInclusive_113_);
lean_ctor_set(v___x_115_, 2, v_endExclusive_114_);
v___x_116_ = l_String_Slice_trimAscii(v___x_115_);
v___x_117_ = lean_array_push(v_b_110_, v___x_116_);
v_a_109_ = v_it_112_;
v_b_110_ = v___x_117_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___redArg___boxed(lean_object* v___x_150_, lean_object* v___x_151_, lean_object* v___x_152_, lean_object* v_a_153_, lean_object* v_b_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___redArg(v___x_150_, v___x_151_, v___x_152_, v_a_153_, v_b_154_);
lean_dec_ref(v___x_151_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___redArg(lean_object* v___x_156_, lean_object* v___x_157_, lean_object* v___x_158_, lean_object* v_a_159_, lean_object* v_b_160_){
_start:
{
lean_object* v_it_162_; lean_object* v_startInclusive_163_; lean_object* v_endExclusive_164_; 
if (lean_obj_tag(v_a_159_) == 0)
{
lean_object* v_currPos_169_; lean_object* v_searcher_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_199_; 
v_currPos_169_ = lean_ctor_get(v_a_159_, 0);
v_searcher_170_ = lean_ctor_get(v_a_159_, 1);
v_isSharedCheck_199_ = !lean_is_exclusive(v_a_159_);
if (v_isSharedCheck_199_ == 0)
{
v___x_172_ = v_a_159_;
v_isShared_173_ = v_isSharedCheck_199_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_searcher_170_);
lean_inc(v_currPos_169_);
lean_dec(v_a_159_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_199_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v_str_174_; lean_object* v_startInclusive_175_; lean_object* v_endExclusive_176_; lean_object* v___x_177_; uint8_t v_decide_178_; 
v_str_174_ = lean_ctor_get(v___x_157_, 0);
v_startInclusive_175_ = lean_ctor_get(v___x_157_, 1);
v_endExclusive_176_ = lean_ctor_get(v___x_157_, 2);
v___x_177_ = lean_nat_sub(v_endExclusive_176_, v_startInclusive_175_);
v_decide_178_ = lean_nat_dec_eq(v_searcher_170_, v___x_177_);
lean_dec(v___x_177_);
if (v_decide_178_ == 0)
{
lean_object* v___x_179_; uint32_t v___x_180_; uint32_t v___x_181_; uint8_t v___x_182_; 
v___x_179_ = lean_nat_add(v_startInclusive_175_, v_searcher_170_);
v___x_180_ = lean_string_utf8_get_fast(v_str_174_, v___x_179_);
v___x_181_ = 44;
v___x_182_ = lean_uint32_dec_eq(v___x_180_, v___x_181_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_186_; 
lean_dec(v_searcher_170_);
v___x_183_ = lean_string_utf8_next_fast(v_str_174_, v___x_179_);
lean_dec(v___x_179_);
v___x_184_ = lean_nat_sub(v___x_183_, v_startInclusive_175_);
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 1, v___x_184_);
v___x_186_ = v___x_172_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_currPos_169_);
lean_ctor_set(v_reuseFailAlloc_188_, 1, v___x_184_);
v___x_186_ = v_reuseFailAlloc_188_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
lean_object* v___x_187_; 
v___x_187_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___redArg(v___x_156_, v___x_157_, v___x_158_, v___x_186_, v_b_160_);
return v___x_187_;
}
}
else
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v_slice_192_; lean_object* v_nextIt_194_; 
v___x_189_ = lean_string_utf8_next_fast(v_str_174_, v___x_179_);
v___x_190_ = lean_nat_sub(v___x_189_, v___x_179_);
lean_dec(v___x_179_);
v___x_191_ = lean_nat_add(v_searcher_170_, v___x_190_);
lean_dec(v___x_190_);
v_slice_192_ = l_String_Slice_subslice_x21(v___x_157_, v_currPos_169_, v_searcher_170_);
lean_inc(v___x_191_);
if (v_isShared_173_ == 0)
{
lean_ctor_set(v___x_172_, 1, v___x_191_);
lean_ctor_set(v___x_172_, 0, v___x_191_);
v_nextIt_194_ = v___x_172_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_191_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v___x_191_);
v_nextIt_194_ = v_reuseFailAlloc_197_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
lean_object* v_startInclusive_195_; lean_object* v_endExclusive_196_; 
v_startInclusive_195_ = lean_ctor_get(v_slice_192_, 0);
lean_inc(v_startInclusive_195_);
v_endExclusive_196_ = lean_ctor_get(v_slice_192_, 1);
lean_inc(v_endExclusive_196_);
lean_dec_ref(v_slice_192_);
v_it_162_ = v_nextIt_194_;
v_startInclusive_163_ = v_startInclusive_195_;
v_endExclusive_164_ = v_endExclusive_196_;
goto v___jp_161_;
}
}
}
else
{
lean_object* v___x_198_; 
lean_del_object(v___x_172_);
lean_dec(v_searcher_170_);
v___x_198_ = lean_box(1);
lean_inc(v___x_158_);
v_it_162_ = v___x_198_;
v_startInclusive_163_ = v_currPos_169_;
v_endExclusive_164_ = v___x_158_;
goto v___jp_161_;
}
}
}
else
{
lean_dec(v___x_158_);
lean_dec_ref(v___x_156_);
return v_b_160_;
}
v___jp_161_:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
lean_inc_ref(v___x_156_);
v___x_165_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_165_, 0, v___x_156_);
lean_ctor_set(v___x_165_, 1, v_startInclusive_163_);
lean_ctor_set(v___x_165_, 2, v_endExclusive_164_);
v___x_166_ = l_String_Slice_trimAscii(v___x_165_);
v___x_167_ = lean_array_push(v_b_160_, v___x_166_);
v___x_168_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___redArg(v___x_156_, v___x_157_, v___x_158_, v_it_162_, v___x_167_);
return v___x_168_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___redArg___boxed(lean_object* v___x_200_, lean_object* v___x_201_, lean_object* v___x_202_, lean_object* v_a_203_, lean_object* v_b_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___redArg(v___x_200_, v___x_201_, v___x_202_, v_a_203_, v_b_204_);
lean_dec_ref(v___x_201_);
return v_res_205_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___redArg(lean_object* v___x_206_, lean_object* v___x_207_, lean_object* v___x_208_, lean_object* v_a_209_, uint8_t v_b_210_){
_start:
{
if (lean_obj_tag(v_a_209_) == 0)
{
lean_object* v_currPos_211_; lean_object* v_searcher_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_255_; 
v_currPos_211_ = lean_ctor_get(v_a_209_, 0);
v_searcher_212_ = lean_ctor_get(v_a_209_, 1);
v_isSharedCheck_255_ = !lean_is_exclusive(v_a_209_);
if (v_isSharedCheck_255_ == 0)
{
v___x_214_ = v_a_209_;
v_isShared_215_ = v_isSharedCheck_255_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_searcher_212_);
lean_inc(v_currPos_211_);
lean_dec(v_a_209_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_255_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v_str_216_; lean_object* v_startInclusive_217_; lean_object* v_endExclusive_218_; uint8_t v___x_219_; lean_object* v_it_221_; lean_object* v_startInclusive_222_; lean_object* v_endExclusive_223_; lean_object* v___x_233_; uint8_t v_decide_234_; 
v_str_216_ = lean_ctor_get(v___x_207_, 0);
v_startInclusive_217_ = lean_ctor_get(v___x_207_, 1);
v_endExclusive_218_ = lean_ctor_get(v___x_207_, 2);
v___x_219_ = 1;
v___x_233_ = lean_nat_sub(v_endExclusive_218_, v_startInclusive_217_);
v_decide_234_ = lean_nat_dec_eq(v_searcher_212_, v___x_233_);
lean_dec(v___x_233_);
if (v_decide_234_ == 0)
{
lean_object* v___x_235_; uint32_t v___x_236_; uint32_t v___x_237_; uint8_t v___x_238_; 
v___x_235_ = lean_nat_add(v_startInclusive_217_, v_searcher_212_);
v___x_236_ = lean_string_utf8_get_fast(v_str_216_, v___x_235_);
v___x_237_ = 44;
v___x_238_ = lean_uint32_dec_eq(v___x_236_, v___x_237_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_242_; 
lean_dec(v_searcher_212_);
v___x_239_ = lean_string_utf8_next_fast(v_str_216_, v___x_235_);
lean_dec(v___x_235_);
v___x_240_ = lean_nat_sub(v___x_239_, v_startInclusive_217_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 1, v___x_240_);
v___x_242_ = v___x_214_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_currPos_211_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v___x_240_);
v___x_242_ = v_reuseFailAlloc_244_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
v_a_209_ = v___x_242_;
goto _start;
}
}
else
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v_slice_248_; lean_object* v_nextIt_250_; 
v___x_245_ = lean_string_utf8_next_fast(v_str_216_, v___x_235_);
v___x_246_ = lean_nat_sub(v___x_245_, v___x_235_);
lean_dec(v___x_235_);
v___x_247_ = lean_nat_add(v_searcher_212_, v___x_246_);
lean_dec(v___x_246_);
v_slice_248_ = l_String_Slice_subslice_x21(v___x_207_, v_currPos_211_, v_searcher_212_);
lean_inc(v___x_247_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 1, v___x_247_);
lean_ctor_set(v___x_214_, 0, v___x_247_);
v_nextIt_250_ = v___x_214_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v___x_247_);
lean_ctor_set(v_reuseFailAlloc_253_, 1, v___x_247_);
v_nextIt_250_ = v_reuseFailAlloc_253_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
lean_object* v_startInclusive_251_; lean_object* v_endExclusive_252_; 
v_startInclusive_251_ = lean_ctor_get(v_slice_248_, 0);
lean_inc(v_startInclusive_251_);
v_endExclusive_252_ = lean_ctor_get(v_slice_248_, 1);
lean_inc(v_endExclusive_252_);
lean_dec_ref(v_slice_248_);
v_it_221_ = v_nextIt_250_;
v_startInclusive_222_ = v_startInclusive_251_;
v_endExclusive_223_ = v_endExclusive_252_;
goto v___jp_220_;
}
}
}
else
{
lean_object* v___x_254_; 
lean_del_object(v___x_214_);
lean_dec(v_searcher_212_);
v___x_254_ = lean_box(1);
lean_inc(v___x_208_);
v_it_221_ = v___x_254_;
v_startInclusive_222_ = v_currPos_211_;
v_endExclusive_223_ = v___x_208_;
goto v___jp_220_;
}
v___jp_220_:
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v_startInclusive_226_; lean_object* v_endExclusive_227_; lean_object* v___x_228_; lean_object* v___x_229_; uint8_t v___x_230_; 
lean_inc_ref(v___x_206_);
v___x_224_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_224_, 0, v___x_206_);
lean_ctor_set(v___x_224_, 1, v_startInclusive_222_);
lean_ctor_set(v___x_224_, 2, v_endExclusive_223_);
v___x_225_ = l_String_Slice_trimAscii(v___x_224_);
v_startInclusive_226_ = lean_ctor_get(v___x_225_, 1);
lean_inc(v_startInclusive_226_);
v_endExclusive_227_ = lean_ctor_get(v___x_225_, 2);
lean_inc(v_endExclusive_227_);
lean_dec_ref(v___x_225_);
v___x_228_ = lean_nat_sub(v_endExclusive_227_, v_startInclusive_226_);
lean_dec(v_startInclusive_226_);
lean_dec(v_endExclusive_227_);
v___x_229_ = lean_unsigned_to_nat(0u);
v___x_230_ = lean_nat_dec_eq(v___x_228_, v___x_229_);
lean_dec(v___x_228_);
if (v___x_230_ == 0)
{
v_a_209_ = v_it_221_;
v_b_210_ = v___x_219_;
goto _start;
}
else
{
uint8_t v___x_232_; 
lean_dec(v_it_221_);
lean_dec(v___x_208_);
lean_dec_ref(v___x_206_);
v___x_232_ = 0;
return v___x_232_;
}
}
}
}
else
{
lean_dec(v___x_208_);
lean_dec_ref(v___x_206_);
return v_b_210_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___redArg___boxed(lean_object* v___x_256_, lean_object* v___x_257_, lean_object* v___x_258_, lean_object* v_a_259_, lean_object* v_b_260_){
_start:
{
uint8_t v_b_boxed_261_; uint8_t v_res_262_; lean_object* v_r_263_; 
v_b_boxed_261_ = lean_unbox(v_b_260_);
v_res_262_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___redArg(v___x_256_, v___x_257_, v___x_258_, v_a_259_, v_b_boxed_261_);
lean_dec_ref(v___x_257_);
v_r_263_ = lean_box(v_res_262_);
return v_r_263_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___redArg(lean_object* v___x_264_, lean_object* v___x_265_, lean_object* v___x_266_, lean_object* v_a_267_, uint8_t v_b_268_){
_start:
{
if (lean_obj_tag(v_a_267_) == 0)
{
lean_object* v_currPos_269_; lean_object* v_searcher_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_313_; 
v_currPos_269_ = lean_ctor_get(v_a_267_, 0);
v_searcher_270_ = lean_ctor_get(v_a_267_, 1);
v_isSharedCheck_313_ = !lean_is_exclusive(v_a_267_);
if (v_isSharedCheck_313_ == 0)
{
v___x_272_ = v_a_267_;
v_isShared_273_ = v_isSharedCheck_313_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_searcher_270_);
lean_inc(v_currPos_269_);
lean_dec(v_a_267_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_313_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v_str_274_; lean_object* v_startInclusive_275_; lean_object* v_endExclusive_276_; uint8_t v___x_277_; lean_object* v_it_279_; lean_object* v_startInclusive_280_; lean_object* v_endExclusive_281_; lean_object* v___x_291_; uint8_t v_decide_292_; 
v_str_274_ = lean_ctor_get(v___x_265_, 0);
v_startInclusive_275_ = lean_ctor_get(v___x_265_, 1);
v_endExclusive_276_ = lean_ctor_get(v___x_265_, 2);
v___x_277_ = 1;
v___x_291_ = lean_nat_sub(v_endExclusive_276_, v_startInclusive_275_);
v_decide_292_ = lean_nat_dec_eq(v_searcher_270_, v___x_291_);
lean_dec(v___x_291_);
if (v_decide_292_ == 0)
{
lean_object* v___x_293_; uint32_t v___x_294_; uint32_t v___x_295_; uint8_t v___x_296_; 
v___x_293_ = lean_nat_add(v_startInclusive_275_, v_searcher_270_);
v___x_294_ = lean_string_utf8_get_fast(v_str_274_, v___x_293_);
v___x_295_ = 44;
v___x_296_ = lean_uint32_dec_eq(v___x_294_, v___x_295_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_300_; 
lean_dec(v_searcher_270_);
v___x_297_ = lean_string_utf8_next_fast(v_str_274_, v___x_293_);
lean_dec(v___x_293_);
v___x_298_ = lean_nat_sub(v___x_297_, v_startInclusive_275_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 1, v___x_298_);
v___x_300_ = v___x_272_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_currPos_269_);
lean_ctor_set(v_reuseFailAlloc_302_, 1, v___x_298_);
v___x_300_ = v_reuseFailAlloc_302_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
uint8_t v___x_301_; 
v___x_301_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___redArg(v___x_264_, v___x_265_, v___x_266_, v___x_300_, v_b_268_);
return v___x_301_;
}
}
else
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v_slice_306_; lean_object* v_nextIt_308_; 
v___x_303_ = lean_string_utf8_next_fast(v_str_274_, v___x_293_);
v___x_304_ = lean_nat_sub(v___x_303_, v___x_293_);
lean_dec(v___x_293_);
v___x_305_ = lean_nat_add(v_searcher_270_, v___x_304_);
lean_dec(v___x_304_);
v_slice_306_ = l_String_Slice_subslice_x21(v___x_265_, v_currPos_269_, v_searcher_270_);
lean_inc(v___x_305_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 1, v___x_305_);
lean_ctor_set(v___x_272_, 0, v___x_305_);
v_nextIt_308_ = v___x_272_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v___x_305_);
lean_ctor_set(v_reuseFailAlloc_311_, 1, v___x_305_);
v_nextIt_308_ = v_reuseFailAlloc_311_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
lean_object* v_startInclusive_309_; lean_object* v_endExclusive_310_; 
v_startInclusive_309_ = lean_ctor_get(v_slice_306_, 0);
lean_inc(v_startInclusive_309_);
v_endExclusive_310_ = lean_ctor_get(v_slice_306_, 1);
lean_inc(v_endExclusive_310_);
lean_dec_ref(v_slice_306_);
v_it_279_ = v_nextIt_308_;
v_startInclusive_280_ = v_startInclusive_309_;
v_endExclusive_281_ = v_endExclusive_310_;
goto v___jp_278_;
}
}
}
else
{
lean_object* v___x_312_; 
lean_del_object(v___x_272_);
lean_dec(v_searcher_270_);
v___x_312_ = lean_box(1);
lean_inc(v___x_266_);
v_it_279_ = v___x_312_;
v_startInclusive_280_ = v_currPos_269_;
v_endExclusive_281_ = v___x_266_;
goto v___jp_278_;
}
v___jp_278_:
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v_startInclusive_284_; lean_object* v_endExclusive_285_; lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
lean_inc_ref(v___x_264_);
v___x_282_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_282_, 0, v___x_264_);
lean_ctor_set(v___x_282_, 1, v_startInclusive_280_);
lean_ctor_set(v___x_282_, 2, v_endExclusive_281_);
v___x_283_ = l_String_Slice_trimAscii(v___x_282_);
v_startInclusive_284_ = lean_ctor_get(v___x_283_, 1);
lean_inc(v_startInclusive_284_);
v_endExclusive_285_ = lean_ctor_get(v___x_283_, 2);
lean_inc(v_endExclusive_285_);
lean_dec_ref(v___x_283_);
v___x_286_ = lean_nat_sub(v_endExclusive_285_, v_startInclusive_284_);
lean_dec(v_startInclusive_284_);
lean_dec(v_endExclusive_285_);
v___x_287_ = lean_unsigned_to_nat(0u);
v___x_288_ = lean_nat_dec_eq(v___x_286_, v___x_287_);
lean_dec(v___x_286_);
if (v___x_288_ == 0)
{
uint8_t v___x_289_; 
v___x_289_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___redArg(v___x_264_, v___x_265_, v___x_266_, v_it_279_, v___x_277_);
return v___x_289_;
}
else
{
uint8_t v___x_290_; 
lean_dec(v_it_279_);
lean_dec(v___x_266_);
lean_dec_ref(v___x_264_);
v___x_290_ = 0;
return v___x_290_;
}
}
}
}
else
{
lean_dec(v___x_266_);
lean_dec_ref(v___x_264_);
return v_b_268_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___redArg___boxed(lean_object* v___x_314_, lean_object* v___x_315_, lean_object* v___x_316_, lean_object* v_a_317_, lean_object* v_b_318_){
_start:
{
uint8_t v_b_boxed_319_; uint8_t v_res_320_; lean_object* v_r_321_; 
v_b_boxed_319_ = lean_unbox(v_b_318_);
v_res_320_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___redArg(v___x_314_, v___x_315_, v___x_316_, v_a_317_, v_b_boxed_319_);
lean_dec_ref(v___x_315_);
v_r_321_ = lean_box(v_res_320_);
return v_r_321_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList(lean_object* v_v_324_){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v_parts_328_; uint8_t v___x_329_; uint8_t v___x_330_; 
v___x_325_ = lean_unsigned_to_nat(0u);
v___x_326_ = lean_string_utf8_byte_size(v_v_324_);
lean_inc_ref_n(v_v_324_, 2);
v___x_327_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_327_, 0, v_v_324_);
lean_ctor_set(v___x_327_, 1, v___x_325_);
lean_ctor_set(v___x_327_, 2, v___x_326_);
v_parts_328_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__1___closed__0);
v___x_329_ = 1;
v___x_330_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___redArg(v_v_324_, v___x_327_, v___x_326_, v_parts_328_, v___x_329_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; 
lean_dec_ref_known(v___x_327_, 3);
lean_dec_ref(v_v_324_);
v___x_331_ = lean_box(0);
return v___x_331_;
}
else
{
lean_object* v___x_332_; lean_object* v___x_333_; size_t v_sz_334_; size_t v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_332_ = ((lean_object*)(l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList___closed__0));
v___x_333_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___redArg(v_v_324_, v___x_327_, v___x_326_, v_parts_328_, v___x_332_);
lean_dec_ref_known(v___x_327_, 3);
v_sz_334_ = lean_array_size(v___x_333_);
v___x_335_ = ((size_t)0ULL);
v___x_336_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__4(v_sz_334_, v___x_335_, v___x_333_);
v___x_337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
return v___x_337_;
}
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2(lean_object* v___x_338_, lean_object* v___x_339_, lean_object* v___x_340_, lean_object* v_inst_341_, lean_object* v_R_342_, lean_object* v_a_343_, uint8_t v_b_344_, lean_object* v_c_345_){
_start:
{
uint8_t v___x_346_; 
v___x_346_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___redArg(v___x_338_, v___x_339_, v___x_340_, v_a_343_, v_b_344_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2___boxed(lean_object* v___x_347_, lean_object* v___x_348_, lean_object* v___x_349_, lean_object* v_inst_350_, lean_object* v_R_351_, lean_object* v_a_352_, lean_object* v_b_353_, lean_object* v_c_354_){
_start:
{
uint8_t v_b_boxed_355_; uint8_t v_res_356_; lean_object* v_r_357_; 
v_b_boxed_355_ = lean_unbox(v_b_353_);
v_res_356_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2(v___x_347_, v___x_348_, v___x_349_, v_inst_350_, v_R_351_, v_a_352_, v_b_boxed_355_, v_c_354_);
lean_dec_ref(v___x_348_);
v_r_357_ = lean_box(v_res_356_);
return v_r_357_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3(lean_object* v___x_358_, lean_object* v___x_359_, lean_object* v___x_360_, lean_object* v_inst_361_, lean_object* v_R_362_, lean_object* v_a_363_, lean_object* v_b_364_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___redArg(v___x_358_, v___x_359_, v___x_360_, v_a_363_, v_b_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3___boxed(lean_object* v___x_366_, lean_object* v___x_367_, lean_object* v___x_368_, lean_object* v_inst_369_, lean_object* v_R_370_, lean_object* v_a_371_, lean_object* v_b_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3(v___x_366_, v___x_367_, v___x_368_, v_inst_369_, v_R_370_, v_a_371_, v_b_372_);
lean_dec_ref(v___x_367_);
return v_res_373_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2(lean_object* v___x_374_, lean_object* v___x_375_, lean_object* v___x_376_, lean_object* v_inst_377_, lean_object* v_R_378_, lean_object* v_a_379_, uint8_t v_b_380_, lean_object* v_c_381_){
_start:
{
uint8_t v___x_382_; 
v___x_382_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___redArg(v___x_374_, v___x_375_, v___x_376_, v_a_379_, v_b_380_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2___boxed(lean_object* v___x_383_, lean_object* v___x_384_, lean_object* v___x_385_, lean_object* v_inst_386_, lean_object* v_R_387_, lean_object* v_a_388_, lean_object* v_b_389_, lean_object* v_c_390_){
_start:
{
uint8_t v_b_boxed_391_; uint8_t v_res_392_; lean_object* v_r_393_; 
v_b_boxed_391_ = lean_unbox(v_b_389_);
v_res_392_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__2_spec__2(v___x_383_, v___x_384_, v___x_385_, v_inst_386_, v_R_387_, v_a_388_, v_b_boxed_391_, v_c_390_);
lean_dec_ref(v___x_384_);
v_r_393_ = lean_box(v_res_392_);
return v_r_393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4(lean_object* v___x_394_, lean_object* v___x_395_, lean_object* v___x_396_, lean_object* v_inst_397_, lean_object* v_R_398_, lean_object* v_a_399_, lean_object* v_b_400_){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___redArg(v___x_394_, v___x_395_, v___x_396_, v_a_399_, v_b_400_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4___boxed(lean_object* v___x_402_, lean_object* v___x_403_, lean_object* v___x_404_, lean_object* v_inst_405_, lean_object* v_R_406_, lean_object* v_a_407_, lean_object* v_b_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__3_spec__4(v___x_402_, v___x_403_, v___x_404_, v_inst_405_, v_R_406_, v_a_407_, v_b_408_);
lean_dec_ref(v___x_403_);
return v_res_409_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqContentLength_beq(lean_object* v_x_410_, lean_object* v_x_411_){
_start:
{
uint8_t v___x_412_; 
v___x_412_ = lean_nat_dec_eq(v_x_410_, v_x_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqContentLength_beq___boxed(lean_object* v_x_413_, lean_object* v_x_414_){
_start:
{
uint8_t v_res_415_; lean_object* v_r_416_; 
v_res_415_ = l_Std_Http_Header_instBEqContentLength_beq(v_x_413_, v_x_414_);
lean_dec(v_x_414_);
lean_dec(v_x_413_);
v_r_416_ = lean_box(v_res_415_);
return v_r_416_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_Header_instReprContentLength_repr_spec__0(lean_object* v_a_419_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = lean_nat_to_int(v_a_419_);
return v___x_420_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = lean_unsigned_to_nat(10u);
v___x_435_ = lean_nat_to_int(v___x_434_);
return v___x_435_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__0));
v___x_438_ = lean_string_length(v___x_437_);
return v___x_438_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_439_ = lean_obj_once(&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__9, &l_Std_Http_Header_instReprContentLength_repr___redArg___closed__9_once, _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__9);
v___x_440_ = lean_nat_to_int(v___x_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprContentLength_repr___redArg(lean_object* v_x_445_){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; uint8_t v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_446_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__6));
v___x_447_ = lean_obj_once(&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7, &l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7_once, _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7);
v___x_448_ = l_Nat_reprFast(v_x_445_);
v___x_449_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_449_, 0, v___x_448_);
v___x_450_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_447_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
v___x_451_ = 0;
v___x_452_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_452_, 0, v___x_450_);
lean_ctor_set_uint8(v___x_452_, sizeof(void*)*1, v___x_451_);
v___x_453_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_446_);
lean_ctor_set(v___x_453_, 1, v___x_452_);
v___x_454_ = lean_obj_once(&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10, &l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10_once, _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10);
v___x_455_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__11));
v___x_456_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
lean_ctor_set(v___x_456_, 1, v___x_453_);
v___x_457_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__12));
v___x_458_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_456_);
lean_ctor_set(v___x_458_, 1, v___x_457_);
v___x_459_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_459_, 0, v___x_454_);
lean_ctor_set(v___x_459_, 1, v___x_458_);
v___x_460_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_460_, 0, v___x_459_);
lean_ctor_set_uint8(v___x_460_, sizeof(void*)*1, v___x_451_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprContentLength_repr(lean_object* v_x_461_, lean_object* v_prec_462_){
_start:
{
lean_object* v___x_463_; 
v___x_463_ = l_Std_Http_Header_instReprContentLength_repr___redArg(v_x_461_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprContentLength_repr___boxed(lean_object* v_x_464_, lean_object* v_prec_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l_Std_Http_Header_instReprContentLength_repr(v_x_464_, v_prec_465_);
lean_dec(v_prec_465_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Std_Http_Header_ContentLength_parse_spec__0(lean_object* v_s_469_, lean_object* v_pos_470_){
_start:
{
lean_object* v_str_471_; lean_object* v_startInclusive_472_; lean_object* v_endExclusive_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; uint8_t v_decide_477_; 
v_str_471_ = lean_ctor_get(v_s_469_, 0);
v_startInclusive_472_ = lean_ctor_get(v_s_469_, 1);
v_endExclusive_473_ = lean_ctor_get(v_s_469_, 2);
v___x_474_ = lean_nat_add(v_startInclusive_472_, v_pos_470_);
v___x_475_ = lean_unsigned_to_nat(0u);
v___x_476_ = lean_nat_sub(v_endExclusive_473_, v___x_474_);
v_decide_477_ = lean_nat_dec_eq(v___x_475_, v___x_476_);
lean_dec(v___x_476_);
if (v_decide_477_ == 0)
{
uint32_t v___x_478_; uint32_t v___x_479_; uint8_t v___x_480_; 
v___x_478_ = lean_string_utf8_get_fast(v_str_471_, v___x_474_);
v___x_479_ = 48;
v___x_480_ = lean_uint32_dec_le(v___x_479_, v___x_478_);
if (v___x_480_ == 0)
{
lean_dec(v___x_474_);
return v_pos_470_;
}
else
{
uint32_t v___x_481_; uint8_t v___x_482_; 
v___x_481_ = 57;
v___x_482_ = lean_uint32_dec_le(v___x_478_, v___x_481_);
if (v___x_482_ == 0)
{
lean_dec(v___x_474_);
return v_pos_470_;
}
else
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; uint8_t v___x_488_; 
v___x_483_ = lean_string_utf8_next_fast(v_str_471_, v___x_474_);
v___x_484_ = lean_nat_sub(v___x_483_, v___x_474_);
lean_dec(v___x_474_);
v___x_485_ = lean_nat_add(v_pos_470_, v___x_484_);
lean_dec(v___x_484_);
v___x_486_ = lean_unsigned_to_nat(1u);
v___x_487_ = lean_nat_add(v_pos_470_, v___x_486_);
v___x_488_ = lean_nat_dec_le(v___x_487_, v___x_485_);
lean_dec(v___x_487_);
if (v___x_488_ == 0)
{
lean_dec(v___x_485_);
return v_pos_470_;
}
else
{
lean_dec(v_pos_470_);
v_pos_470_ = v___x_485_;
goto _start;
}
}
}
}
else
{
lean_dec(v___x_474_);
return v_pos_470_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00Std_Http_Header_ContentLength_parse_spec__0___boxed(lean_object* v_s_490_, lean_object* v_pos_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_String_Slice_Pos_skipWhile___at___00Std_Http_Header_ContentLength_parse_spec__0(v_s_490_, v_pos_491_);
lean_dec_ref(v_s_490_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_ContentLength_parse(lean_object* v_v_493_){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; uint8_t v___x_496_; 
v___x_494_ = lean_string_utf8_byte_size(v_v_493_);
v___x_495_ = lean_unsigned_to_nat(0u);
v___x_496_ = lean_nat_dec_eq(v___x_494_, v___x_495_);
if (v___x_496_ == 0)
{
lean_object* v___x_497_; lean_object* v___x_498_; uint8_t v_decide_499_; 
v___x_497_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_497_, 0, v_v_493_);
lean_ctor_set(v___x_497_, 1, v___x_495_);
lean_ctor_set(v___x_497_, 2, v___x_494_);
v___x_498_ = l_String_Slice_Pos_skipWhile___at___00Std_Http_Header_ContentLength_parse_spec__0(v___x_497_, v___x_495_);
v_decide_499_ = lean_nat_dec_eq(v___x_498_, v___x_494_);
lean_dec(v___x_498_);
if (v_decide_499_ == 0)
{
lean_object* v___x_500_; 
lean_dec_ref_known(v___x_497_, 3);
v___x_500_ = lean_box(0);
return v___x_500_;
}
else
{
lean_object* v___x_501_; 
v___x_501_ = l_String_Slice_toNat_x3f(v___x_497_);
lean_dec_ref_known(v___x_497_, 3);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v___x_502_; 
v___x_502_ = lean_box(0);
return v___x_502_;
}
else
{
lean_object* v_val_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_510_; 
v_val_503_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_510_ == 0)
{
v___x_505_ = v___x_501_;
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_val_503_);
lean_dec(v___x_501_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_510_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_508_; 
if (v_isShared_506_ == 0)
{
v___x_508_ = v___x_505_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_val_503_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
}
else
{
lean_object* v___x_511_; 
lean_dec_ref(v_v_493_);
v___x_511_ = lean_box(0);
return v___x_511_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_ContentLength_serialize(lean_object* v_h_512_){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_513_ = l_Std_Http_Header_Name_contentLength;
v___x_514_ = l_Nat_reprFast(v_h_512_);
v___x_515_ = l_Std_Http_Header_Value_ofString_x21(v___x_514_);
v___x_516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_516_, 0, v___x_513_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
return v___x_516_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_Header_TransferEncoding_Validate_spec__0(lean_object* v_x_523_, lean_object* v_x_524_){
_start:
{
if (lean_obj_tag(v_x_523_) == 0)
{
if (lean_obj_tag(v_x_524_) == 0)
{
uint8_t v___x_525_; 
v___x_525_ = 1;
return v___x_525_;
}
else
{
uint8_t v___x_526_; 
v___x_526_ = 0;
return v___x_526_;
}
}
else
{
if (lean_obj_tag(v_x_524_) == 0)
{
uint8_t v___x_527_; 
v___x_527_ = 0;
return v___x_527_;
}
else
{
lean_object* v_val_528_; lean_object* v_val_529_; uint8_t v___x_530_; 
v_val_528_ = lean_ctor_get(v_x_523_, 0);
v_val_529_ = lean_ctor_get(v_x_524_, 0);
v___x_530_ = lean_string_dec_eq(v_val_528_, v_val_529_);
return v___x_530_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_Header_TransferEncoding_Validate_spec__0___boxed(lean_object* v_x_531_, lean_object* v_x_532_){
_start:
{
uint8_t v_res_533_; lean_object* v_r_534_; 
v_res_533_ = l_instBEqOption_beq___at___00Std_Http_Header_TransferEncoding_Validate_spec__0(v_x_531_, v_x_532_);
lean_dec(v_x_532_);
lean_dec(v_x_531_);
v_r_534_ = lean_box(v_res_533_);
return v_r_534_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1(lean_object* v_as_536_, size_t v_i_537_, size_t v_stop_538_, lean_object* v_b_539_){
_start:
{
lean_object* v___y_541_; uint8_t v___x_545_; 
v___x_545_ = lean_usize_dec_eq(v_i_537_, v_stop_538_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; lean_object* v___x_547_; uint8_t v___x_548_; 
v___x_546_ = lean_array_uget_borrowed(v_as_536_, v_i_537_);
v___x_547_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1___closed__0));
v___x_548_ = lean_string_dec_eq(v___x_546_, v___x_547_);
if (v___x_548_ == 0)
{
v___y_541_ = v_b_539_;
goto v___jp_540_;
}
else
{
lean_object* v___x_549_; 
lean_inc(v___x_546_);
v___x_549_ = lean_array_push(v_b_539_, v___x_546_);
v___y_541_ = v___x_549_;
goto v___jp_540_;
}
}
else
{
return v_b_539_;
}
v___jp_540_:
{
size_t v___x_542_; size_t v___x_543_; 
v___x_542_ = ((size_t)1ULL);
v___x_543_ = lean_usize_add(v_i_537_, v___x_542_);
v_i_537_ = v___x_543_;
v_b_539_ = v___y_541_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1___boxed(lean_object* v_as_550_, lean_object* v_i_551_, lean_object* v_stop_552_, lean_object* v_b_553_){
_start:
{
size_t v_i_boxed_554_; size_t v_stop_boxed_555_; lean_object* v_res_556_; 
v_i_boxed_554_ = lean_unbox_usize(v_i_551_);
lean_dec(v_i_551_);
v_stop_boxed_555_ = lean_unbox_usize(v_stop_552_);
lean_dec(v_stop_552_);
v_res_556_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1(v_as_550_, v_i_boxed_554_, v_stop_boxed_555_, v_b_553_);
lean_dec_ref(v_as_550_);
return v_res_556_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_TransferEncoding_Validate_spec__2(lean_object* v___x_557_, lean_object* v_as_558_, size_t v_i_559_, size_t v_stop_560_){
_start:
{
uint8_t v___x_561_; 
v___x_561_ = lean_usize_dec_eq(v_i_559_, v_stop_560_);
if (v___x_561_ == 0)
{
uint8_t v___x_562_; lean_object* v___x_563_; uint8_t v___x_564_; 
v___x_562_ = 1;
v___x_563_ = lean_array_uget_borrowed(v_as_558_, v_i_559_);
lean_inc(v___x_563_);
v___x_564_ = l_Std_Http_Internal_isToken(v___x_563_);
if (v___x_564_ == 0)
{
return v___x_562_;
}
else
{
lean_object* v___x_565_; uint8_t v___x_566_; 
v___x_565_ = lean_unsigned_to_nat(0u);
v___x_566_ = lean_nat_dec_eq(v___x_557_, v___x_565_);
if (v___x_566_ == 0)
{
size_t v___x_567_; size_t v___x_568_; 
v___x_567_ = ((size_t)1ULL);
v___x_568_ = lean_usize_add(v_i_559_, v___x_567_);
v_i_559_ = v___x_568_;
goto _start;
}
else
{
return v___x_562_;
}
}
}
else
{
uint8_t v___x_570_; 
v___x_570_ = 0;
return v___x_570_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_TransferEncoding_Validate_spec__2___boxed(lean_object* v___x_571_, lean_object* v_as_572_, lean_object* v_i_573_, lean_object* v_stop_574_){
_start:
{
size_t v_i_boxed_575_; size_t v_stop_boxed_576_; uint8_t v_res_577_; lean_object* v_r_578_; 
v_i_boxed_575_ = lean_unbox_usize(v_i_573_);
lean_dec(v_i_573_);
v_stop_boxed_576_ = lean_unbox_usize(v_stop_574_);
lean_dec(v_stop_574_);
v_res_577_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_TransferEncoding_Validate_spec__2(v___x_571_, v_as_572_, v_i_boxed_575_, v_stop_boxed_576_);
lean_dec_ref(v_as_572_);
lean_dec(v___x_571_);
v_r_578_ = lean_box(v_res_577_);
return v_r_578_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_TransferEncoding_Validate(lean_object* v_codings_583_){
_start:
{
lean_object* v___y_585_; uint8_t v___y_586_; uint8_t v___y_587_; lean_object* v___y_588_; uint8_t v___y_595_; uint8_t v___y_596_; lean_object* v___y_597_; uint8_t v___y_607_; lean_object* v___x_616_; lean_object* v___x_617_; uint8_t v___x_618_; 
v___x_616_ = lean_array_get_size(v_codings_583_);
v___x_617_ = lean_unsigned_to_nat(0u);
v___x_618_ = lean_nat_dec_eq(v___x_616_, v___x_617_);
if (v___x_618_ == 0)
{
uint8_t v___x_619_; 
v___x_619_ = lean_nat_dec_lt(v___x_617_, v___x_616_);
if (v___x_619_ == 0)
{
v___y_607_ = v___x_619_;
goto v___jp_606_;
}
else
{
if (v___x_619_ == 0)
{
v___y_607_ = v___x_619_;
goto v___jp_606_;
}
else
{
size_t v___x_620_; size_t v___x_621_; uint8_t v___x_622_; 
v___x_620_ = ((size_t)0ULL);
v___x_621_ = lean_usize_of_nat(v___x_616_);
v___x_622_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_TransferEncoding_Validate_spec__2(v___x_616_, v_codings_583_, v___x_620_, v___x_621_);
if (v___x_622_ == 0)
{
v___y_607_ = v___x_622_;
goto v___jp_606_;
}
else
{
return v___x_618_;
}
}
}
}
else
{
uint8_t v___x_623_; 
v___x_623_ = 0;
return v___x_623_;
}
v___jp_584_:
{
lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_589_ = lean_unsigned_to_nat(1u);
v___x_590_ = lean_nat_dec_lt(v___x_589_, v___y_585_);
if (v___x_590_ == 0)
{
uint8_t v___x_591_; 
v___x_591_ = lean_nat_dec_eq(v___y_585_, v___x_589_);
lean_dec(v___y_585_);
if (v___x_591_ == 0)
{
lean_dec(v___y_588_);
return v___y_586_;
}
else
{
lean_object* v___x_592_; uint8_t v_lastIsChunked_593_; 
v___x_592_ = ((lean_object*)(l_Std_Http_Header_TransferEncoding_Validate___closed__0));
v_lastIsChunked_593_ = l_instBEqOption_beq___at___00Std_Http_Header_TransferEncoding_Validate_spec__0(v___y_588_, v___x_592_);
lean_dec(v___y_588_);
if (v_lastIsChunked_593_ == 0)
{
return v___x_590_;
}
else
{
return v___y_586_;
}
}
}
else
{
lean_dec(v___y_588_);
lean_dec(v___y_585_);
return v___y_587_;
}
}
v___jp_594_:
{
lean_object* v_chunkedCount_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; uint8_t v___x_602_; 
v_chunkedCount_598_ = lean_array_get_size(v___y_597_);
lean_dec_ref(v___y_597_);
v___x_599_ = lean_array_get_size(v_codings_583_);
v___x_600_ = lean_unsigned_to_nat(1u);
v___x_601_ = lean_nat_sub(v___x_599_, v___x_600_);
v___x_602_ = lean_nat_dec_lt(v___x_601_, v___x_599_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; 
lean_dec(v___x_601_);
v___x_603_ = lean_box(0);
v___y_585_ = v_chunkedCount_598_;
v___y_586_ = v___y_595_;
v___y_587_ = v___y_596_;
v___y_588_ = v___x_603_;
goto v___jp_584_;
}
else
{
lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_604_ = lean_array_fget_borrowed(v_codings_583_, v___x_601_);
lean_dec(v___x_601_);
lean_inc(v___x_604_);
v___x_605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_605_, 0, v___x_604_);
v___y_585_ = v_chunkedCount_598_;
v___y_586_ = v___y_595_;
v___y_587_ = v___y_596_;
v___y_588_ = v___x_605_;
goto v___jp_584_;
}
}
v___jp_606_:
{
uint8_t v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_608_ = 1;
v___x_609_ = lean_unsigned_to_nat(0u);
v___x_610_ = lean_array_get_size(v_codings_583_);
v___x_611_ = ((lean_object*)(l_Std_Http_Header_TransferEncoding_Validate___closed__1));
v___x_612_ = lean_nat_dec_lt(v___x_609_, v___x_610_);
if (v___x_612_ == 0)
{
v___y_595_ = v___x_608_;
v___y_596_ = v___y_607_;
v___y_597_ = v___x_611_;
goto v___jp_594_;
}
else
{
size_t v___x_613_; size_t v___x_614_; lean_object* v___x_615_; 
v___x_613_ = ((size_t)0ULL);
v___x_614_ = lean_usize_of_nat(v___x_610_);
v___x_615_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1(v_codings_583_, v___x_613_, v___x_614_, v___x_611_);
v___y_595_ = v___x_608_;
v___y_596_ = v___y_607_;
v___y_597_ = v___x_615_;
goto v___jp_594_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_Validate___boxed(lean_object* v_codings_624_){
_start:
{
uint8_t v_res_625_; lean_object* v_r_626_; 
v_res_625_ = l_Std_Http_Header_TransferEncoding_Validate(v_codings_624_);
lean_dec_ref(v_codings_624_);
v_r_626_ = lean_box(v_res_625_);
return v_r_626_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0___lam__0(lean_object* v___y_627_){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = l_String_quote(v___y_627_);
v___x_629_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_630_, lean_object* v_x_631_, lean_object* v_x_632_){
_start:
{
if (lean_obj_tag(v_x_632_) == 0)
{
lean_dec(v_x_630_);
return v_x_631_;
}
else
{
lean_object* v_head_633_; lean_object* v_tail_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_645_; 
v_head_633_ = lean_ctor_get(v_x_632_, 0);
v_tail_634_ = lean_ctor_get(v_x_632_, 1);
v_isSharedCheck_645_ = !lean_is_exclusive(v_x_632_);
if (v_isSharedCheck_645_ == 0)
{
v___x_636_ = v_x_632_;
v_isShared_637_ = v_isSharedCheck_645_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_tail_634_);
lean_inc(v_head_633_);
lean_dec(v_x_632_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_645_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_639_; 
lean_inc(v_x_630_);
if (v_isShared_637_ == 0)
{
lean_ctor_set_tag(v___x_636_, 5);
lean_ctor_set(v___x_636_, 1, v_x_630_);
lean_ctor_set(v___x_636_, 0, v_x_631_);
v___x_639_ = v___x_636_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v_x_631_);
lean_ctor_set(v_reuseFailAlloc_644_, 1, v_x_630_);
v___x_639_ = v_reuseFailAlloc_644_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_640_ = l_String_quote(v_head_633_);
v___x_641_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
v___x_642_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_639_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
v_x_631_ = v___x_642_;
v_x_632_ = v_tail_634_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0_spec__1(lean_object* v_x_646_, lean_object* v_x_647_, lean_object* v_x_648_){
_start:
{
if (lean_obj_tag(v_x_648_) == 0)
{
lean_dec(v_x_646_);
return v_x_647_;
}
else
{
lean_object* v_head_649_; lean_object* v_tail_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_661_; 
v_head_649_ = lean_ctor_get(v_x_648_, 0);
v_tail_650_ = lean_ctor_get(v_x_648_, 1);
v_isSharedCheck_661_ = !lean_is_exclusive(v_x_648_);
if (v_isSharedCheck_661_ == 0)
{
v___x_652_ = v_x_648_;
v_isShared_653_ = v_isSharedCheck_661_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_tail_650_);
lean_inc(v_head_649_);
lean_dec(v_x_648_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_661_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
lean_inc(v_x_646_);
if (v_isShared_653_ == 0)
{
lean_ctor_set_tag(v___x_652_, 5);
lean_ctor_set(v___x_652_, 1, v_x_646_);
lean_ctor_set(v___x_652_, 0, v_x_647_);
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_x_647_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v_x_646_);
v___x_655_ = v_reuseFailAlloc_660_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_656_ = l_String_quote(v_head_649_);
v___x_657_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
v___x_658_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_655_);
lean_ctor_set(v___x_658_, 1, v___x_657_);
v___x_659_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0_spec__1_spec__2(v_x_646_, v___x_658_, v_tail_650_);
return v___x_659_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0(lean_object* v_x_662_, lean_object* v_x_663_){
_start:
{
if (lean_obj_tag(v_x_662_) == 0)
{
lean_object* v___x_664_; 
lean_dec(v_x_663_);
v___x_664_ = lean_box(0);
return v___x_664_;
}
else
{
lean_object* v_tail_665_; 
v_tail_665_ = lean_ctor_get(v_x_662_, 1);
if (lean_obj_tag(v_tail_665_) == 0)
{
lean_object* v_head_666_; lean_object* v___x_667_; 
lean_dec(v_x_663_);
v_head_666_ = lean_ctor_get(v_x_662_, 0);
lean_inc(v_head_666_);
lean_dec_ref_known(v_x_662_, 2);
v___x_667_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0___lam__0(v_head_666_);
return v___x_667_;
}
else
{
lean_object* v_head_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
lean_inc(v_tail_665_);
v_head_668_ = lean_ctor_get(v_x_662_, 0);
lean_inc(v_head_668_);
lean_dec_ref_known(v_x_662_, 2);
v___x_669_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0___lam__0(v_head_668_);
v___x_670_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0_spec__1(v_x_663_, v___x_669_, v_tail_665_);
return v___x_670_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__5(void){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__0));
v___x_680_ = lean_string_length(v___x_679_);
return v___x_680_;
}
}
static lean_object* _init_l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__6(void){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = lean_obj_once(&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__5, &l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__5_once, _init_l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__5);
v___x_682_ = lean_nat_to_int(v___x_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0(lean_object* v_xs_690_){
_start:
{
lean_object* v___x_691_; lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_691_ = lean_array_get_size(v_xs_690_);
v___x_692_ = lean_unsigned_to_nat(0u);
v___x_693_ = lean_nat_dec_eq(v___x_691_, v___x_692_);
if (v___x_693_ == 0)
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_694_ = lean_array_to_list(v_xs_690_);
v___x_695_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__3));
v___x_696_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0_spec__0(v___x_694_, v___x_695_);
v___x_697_ = lean_obj_once(&l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__6, &l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__6_once, _init_l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__6);
v___x_698_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__7));
v___x_699_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
lean_ctor_set(v___x_699_, 1, v___x_696_);
v___x_700_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__8));
v___x_701_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_701_, 0, v___x_699_);
lean_ctor_set(v___x_701_, 1, v___x_700_);
v___x_702_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_702_, 0, v___x_697_);
lean_ctor_set(v___x_702_, 1, v___x_701_);
v___x_703_ = l_Std_Format_fill(v___x_702_);
return v___x_703_;
}
else
{
lean_object* v___x_704_; 
lean_dec_ref(v_xs_690_);
v___x_704_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__10));
return v___x_704_;
}
}
}
static lean_object* _init_l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_714_ = lean_unsigned_to_nat(11u);
v___x_715_ = lean_nat_to_int(v___x_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___redArg(lean_object* v_x_722_){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; uint8_t v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_723_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5));
v___x_724_ = ((lean_object*)(l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__3));
v___x_725_ = lean_obj_once(&l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__4, &l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__4_once, _init_l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__4);
v___x_726_ = l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0(v_x_722_);
v___x_727_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_727_, 0, v___x_725_);
lean_ctor_set(v___x_727_, 1, v___x_726_);
v___x_728_ = 0;
v___x_729_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_729_, 0, v___x_727_);
lean_ctor_set_uint8(v___x_729_, sizeof(void*)*1, v___x_728_);
v___x_730_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_730_, 0, v___x_724_);
lean_ctor_set(v___x_730_, 1, v___x_729_);
v___x_731_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__2));
v___x_732_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_732_, 0, v___x_730_);
lean_ctor_set(v___x_732_, 1, v___x_731_);
v___x_733_ = lean_box(1);
v___x_734_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_734_, 0, v___x_732_);
lean_ctor_set(v___x_734_, 1, v___x_733_);
v___x_735_ = ((lean_object*)(l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__6));
v___x_736_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_736_, 0, v___x_734_);
lean_ctor_set(v___x_736_, 1, v___x_735_);
v___x_737_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_737_, 0, v___x_736_);
lean_ctor_set(v___x_737_, 1, v___x_723_);
v___x_738_ = ((lean_object*)(l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__8));
v___x_739_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_737_);
lean_ctor_set(v___x_739_, 1, v___x_738_);
v___x_740_ = lean_obj_once(&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10, &l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10_once, _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10);
v___x_741_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__11));
v___x_742_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_741_);
lean_ctor_set(v___x_742_, 1, v___x_739_);
v___x_743_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__12));
v___x_744_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_742_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
v___x_745_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_745_, 0, v___x_740_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_746_, 0, v___x_745_);
lean_ctor_set_uint8(v___x_746_, sizeof(void*)*1, v___x_728_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprTransferEncoding_repr(lean_object* v_x_747_, lean_object* v_prec_748_){
_start:
{
lean_object* v___x_749_; 
v___x_749_ = l_Std_Http_Header_instReprTransferEncoding_repr___redArg(v_x_747_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprTransferEncoding_repr___boxed(lean_object* v_x_750_, lean_object* v_prec_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l_Std_Http_Header_instReprTransferEncoding_repr(v_x_750_, v_prec_751_);
lean_dec(v_prec_751_);
return v_res_752_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_TransferEncoding_isChunked(lean_object* v_te_755_){
_start:
{
lean_object* v___y_757_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; uint8_t v___x_763_; 
v___x_760_ = lean_array_get_size(v_te_755_);
v___x_761_ = lean_unsigned_to_nat(1u);
v___x_762_ = lean_nat_sub(v___x_760_, v___x_761_);
v___x_763_ = lean_nat_dec_lt(v___x_762_, v___x_760_);
if (v___x_763_ == 0)
{
lean_object* v___x_764_; 
lean_dec(v___x_762_);
v___x_764_ = lean_box(0);
v___y_757_ = v___x_764_;
goto v___jp_756_;
}
else
{
lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_765_ = lean_array_fget_borrowed(v_te_755_, v___x_762_);
lean_dec(v___x_762_);
lean_inc(v___x_765_);
v___x_766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_766_, 0, v___x_765_);
v___y_757_ = v___x_766_;
goto v___jp_756_;
}
v___jp_756_:
{
lean_object* v___x_758_; uint8_t v___x_759_; 
v___x_758_ = ((lean_object*)(l_Std_Http_Header_TransferEncoding_Validate___closed__0));
v___x_759_ = l_instBEqOption_beq___at___00Std_Http_Header_TransferEncoding_Validate_spec__0(v___y_757_, v___x_758_);
lean_dec(v___y_757_);
return v___x_759_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_isChunked___boxed(lean_object* v_te_767_){
_start:
{
uint8_t v_res_768_; lean_object* v_r_769_; 
v_res_768_ = l_Std_Http_Header_TransferEncoding_isChunked(v_te_767_);
lean_dec_ref(v_te_767_);
v_r_769_ = lean_box(v_res_768_);
return v_r_769_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___redArg(){
_start:
{
lean_object* v___x_773_; 
v___x_773_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___redArg___closed__0));
return v___x_773_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___redArg___boxed(lean_object* v___dummy_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___redArg();
return v_res_775_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___closed__0(void){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___redArg();
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0(lean_object* v_s_777_){
_start:
{
lean_object* v___x_778_; 
v___x_778_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___closed__0);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___boxed(lean_object* v_s_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0(v_s_779_);
lean_dec_ref(v_s_779_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__1___redArg(lean_object* v_param_781_, lean_object* v___x_782_, lean_object* v___x_783_, lean_object* v_a_784_, lean_object* v_b_785_){
_start:
{
lean_object* v_it_787_; lean_object* v_startInclusive_788_; lean_object* v_endExclusive_789_; 
if (lean_obj_tag(v_a_784_) == 0)
{
lean_object* v_currPos_794_; lean_object* v_searcher_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_818_; 
v_currPos_794_ = lean_ctor_get(v_a_784_, 0);
v_searcher_795_ = lean_ctor_get(v_a_784_, 1);
v_isSharedCheck_818_ = !lean_is_exclusive(v_a_784_);
if (v_isSharedCheck_818_ == 0)
{
v___x_797_ = v_a_784_;
v_isShared_798_ = v_isSharedCheck_818_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_searcher_795_);
lean_inc(v_currPos_794_);
lean_dec(v_a_784_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_818_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
uint8_t v_decide_799_; 
v_decide_799_ = lean_nat_dec_eq(v_searcher_795_, v___x_783_);
if (v_decide_799_ == 0)
{
uint32_t v___x_800_; uint32_t v___x_801_; uint8_t v___x_802_; 
v___x_800_ = 61;
v___x_801_ = lean_string_utf8_get_fast(v_param_781_, v_searcher_795_);
v___x_802_ = lean_uint32_dec_eq(v___x_801_, v___x_800_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; lean_object* v___x_805_; 
v___x_803_ = lean_string_utf8_next_fast(v_param_781_, v_searcher_795_);
lean_dec(v_searcher_795_);
if (v_isShared_798_ == 0)
{
lean_ctor_set(v___x_797_, 1, v___x_803_);
v___x_805_ = v___x_797_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_currPos_794_);
lean_ctor_set(v_reuseFailAlloc_807_, 1, v___x_803_);
v___x_805_ = v_reuseFailAlloc_807_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
v_a_784_ = v___x_805_;
goto _start;
}
}
else
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v_slice_811_; lean_object* v_nextIt_813_; 
v___x_808_ = lean_string_utf8_next_fast(v_param_781_, v_searcher_795_);
v___x_809_ = lean_nat_sub(v___x_808_, v_searcher_795_);
v___x_810_ = lean_nat_add(v_searcher_795_, v___x_809_);
lean_dec(v___x_809_);
v_slice_811_ = l_String_Slice_subslice_x21(v___x_782_, v_currPos_794_, v_searcher_795_);
lean_inc(v___x_810_);
if (v_isShared_798_ == 0)
{
lean_ctor_set(v___x_797_, 1, v___x_810_);
lean_ctor_set(v___x_797_, 0, v___x_810_);
v_nextIt_813_ = v___x_797_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v___x_810_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v___x_810_);
v_nextIt_813_ = v_reuseFailAlloc_816_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
lean_object* v_startInclusive_814_; lean_object* v_endExclusive_815_; 
v_startInclusive_814_ = lean_ctor_get(v_slice_811_, 0);
lean_inc(v_startInclusive_814_);
v_endExclusive_815_ = lean_ctor_get(v_slice_811_, 1);
lean_inc(v_endExclusive_815_);
lean_dec_ref(v_slice_811_);
v_it_787_ = v_nextIt_813_;
v_startInclusive_788_ = v_startInclusive_814_;
v_endExclusive_789_ = v_endExclusive_815_;
goto v___jp_786_;
}
}
}
else
{
lean_object* v___x_817_; 
lean_del_object(v___x_797_);
lean_dec(v_searcher_795_);
v___x_817_ = lean_box(1);
lean_inc(v___x_783_);
v_it_787_ = v___x_817_;
v_startInclusive_788_ = v_currPos_794_;
v_endExclusive_789_ = v___x_783_;
goto v___jp_786_;
}
}
}
else
{
lean_dec(v___x_783_);
lean_dec_ref(v_param_781_);
return v_b_785_;
}
v___jp_786_:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
lean_inc_ref(v_param_781_);
v___x_790_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_790_, 0, v_param_781_);
lean_ctor_set(v___x_790_, 1, v_startInclusive_788_);
lean_ctor_set(v___x_790_, 2, v_endExclusive_789_);
v___x_791_ = l_String_Slice_toString(v___x_790_);
lean_dec_ref_known(v___x_790_, 3);
v___x_792_ = lean_array_push(v_b_785_, v___x_791_);
v_a_784_ = v_it_787_;
v_b_785_ = v___x_792_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__1___redArg___boxed(lean_object* v_param_819_, lean_object* v___x_820_, lean_object* v___x_821_, lean_object* v_a_822_, lean_object* v_b_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__1___redArg(v_param_819_, v___x_820_, v___x_821_, v_a_822_, v_b_823_);
lean_dec_ref(v___x_820_);
return v_res_824_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter(lean_object* v_param_826_){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_827_ = lean_unsigned_to_nat(0u);
v___x_828_ = lean_string_utf8_byte_size(v_param_826_);
lean_inc_ref(v_param_826_);
v___x_829_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_829_, 0, v_param_826_);
lean_ctor_set(v___x_829_, 1, v___x_827_);
lean_ctor_set(v___x_829_, 2, v___x_828_);
v___x_830_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___closed__0);
v___x_831_ = ((lean_object*)(l_Std_Http_Header_TransferEncoding_Validate___closed__1));
v___x_832_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__1___redArg(v_param_826_, v___x_829_, v___x_828_, v___x_830_, v___x_831_);
lean_dec_ref_known(v___x_829_, 3);
v___x_833_ = lean_array_to_list(v___x_832_);
if (lean_obj_tag(v___x_833_) == 1)
{
lean_object* v_tail_834_; 
v_tail_834_ = lean_ctor_get(v___x_833_, 1);
lean_inc(v_tail_834_);
if (lean_obj_tag(v_tail_834_) == 1)
{
lean_object* v_head_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; uint8_t v___x_840_; 
v_head_835_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_head_835_);
lean_dec_ref_known(v___x_833_, 2);
v___x_836_ = lean_string_utf8_byte_size(v_head_835_);
v___x_837_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_837_, 0, v_head_835_);
lean_ctor_set(v___x_837_, 1, v___x_827_);
lean_ctor_set(v___x_837_, 2, v___x_836_);
v___x_838_ = l_String_Slice_trimAscii(v___x_837_);
v___x_839_ = l_String_Slice_toString(v___x_838_);
lean_dec_ref(v___x_838_);
v___x_840_ = l_Std_Http_Internal_isToken(v___x_839_);
if (v___x_840_ == 0)
{
lean_dec_ref_known(v_tail_834_, 2);
return v___x_840_;
}
else
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v_value_846_; lean_object* v___x_847_; uint8_t v___x_848_; 
v___x_841_ = ((lean_object*)(l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter___closed__0));
v___x_842_ = l_String_intercalate(v___x_841_, v_tail_834_);
v___x_843_ = lean_string_utf8_byte_size(v___x_842_);
v___x_844_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_844_, 0, v___x_842_);
lean_ctor_set(v___x_844_, 1, v___x_827_);
lean_ctor_set(v___x_844_, 2, v___x_843_);
v___x_845_ = l_String_Slice_trimAscii(v___x_844_);
v_value_846_ = l_String_Slice_toString(v___x_845_);
lean_dec_ref(v___x_845_);
v___x_847_ = lean_string_utf8_byte_size(v_value_846_);
v___x_848_ = lean_nat_dec_eq(v___x_847_, v___x_827_);
if (v___x_848_ == 0)
{
lean_object* v___x_849_; 
v___x_849_ = l_Std_Http_Internal_unquoteHttpString_x3f(v_value_846_);
if (lean_obj_tag(v___x_849_) == 0)
{
return v___x_848_;
}
else
{
lean_dec_ref_known(v___x_849_, 1);
return v___x_840_;
}
}
else
{
uint8_t v___x_850_; 
lean_dec_ref(v_value_846_);
v___x_850_ = 0;
return v___x_850_;
}
}
}
else
{
uint8_t v___x_851_; 
lean_dec_ref_known(v___x_833_, 2);
lean_dec(v_tail_834_);
v___x_851_ = 0;
return v___x_851_;
}
}
else
{
uint8_t v___x_852_; 
lean_dec(v___x_833_);
v___x_852_ = 0;
return v___x_852_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter___boxed(lean_object* v_param_853_){
_start:
{
uint8_t v_res_854_; lean_object* v_r_855_; 
v_res_854_ = l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter(v_param_853_);
v_r_855_ = lean_box(v_res_854_);
return v_r_855_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__1(lean_object* v_param_856_, lean_object* v___x_857_, lean_object* v___x_858_, lean_object* v_inst_859_, lean_object* v_R_860_, lean_object* v_a_861_, lean_object* v_b_862_){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__1___redArg(v_param_856_, v___x_857_, v___x_858_, v_a_861_, v_b_862_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__1___boxed(lean_object* v_param_864_, lean_object* v___x_865_, lean_object* v___x_866_, lean_object* v_inst_867_, lean_object* v_R_868_, lean_object* v_a_869_, lean_object* v_b_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__1(v_param_864_, v___x_865_, v___x_866_, v_inst_867_, v_R_868_, v_a_869_, v_b_870_);
lean_dec_ref(v___x_865_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___redArg(){
_start:
{
lean_object* v___x_873_; 
v___x_873_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___redArg___closed__0));
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___redArg___boxed(lean_object* v___dummy_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___redArg();
return v_res_875_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_876_; 
v___x_876_ = l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___redArg();
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0(lean_object* v_s_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___closed__0);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___boxed(lean_object* v_s_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0(v_s_879_);
lean_dec_ref(v_s_879_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___redArg(){
_start:
{
lean_object* v___x_882_; 
v___x_882_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter_spec__0___redArg___closed__0));
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___redArg___boxed(lean_object* v___dummy_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___redArg();
return v_res_884_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___closed__0(void){
_start:
{
lean_object* v___x_885_; 
v___x_885_ = l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___redArg();
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3(lean_object* v_s_886_){
_start:
{
lean_object* v___x_887_; 
v___x_887_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___closed__0, &l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___closed__0);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___boxed(lean_object* v_s_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3(v_s_888_);
lean_dec_ref(v_s_888_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__4___redArg(lean_object* v___x_890_, lean_object* v___x_891_, lean_object* v___x_892_, lean_object* v_a_893_, lean_object* v_b_894_){
_start:
{
lean_object* v_it_896_; lean_object* v_startInclusive_897_; lean_object* v_endExclusive_898_; 
if (lean_obj_tag(v_a_893_) == 0)
{
lean_object* v_currPos_903_; lean_object* v_searcher_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_927_; 
v_currPos_903_ = lean_ctor_get(v_a_893_, 0);
v_searcher_904_ = lean_ctor_get(v_a_893_, 1);
v_isSharedCheck_927_ = !lean_is_exclusive(v_a_893_);
if (v_isSharedCheck_927_ == 0)
{
v___x_906_ = v_a_893_;
v_isShared_907_ = v_isSharedCheck_927_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_searcher_904_);
lean_inc(v_currPos_903_);
lean_dec(v_a_893_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_927_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
uint8_t v_decide_908_; 
v_decide_908_ = lean_nat_dec_eq(v_searcher_904_, v___x_892_);
if (v_decide_908_ == 0)
{
uint32_t v___x_909_; uint32_t v___x_910_; uint8_t v___x_911_; 
v___x_909_ = 44;
v___x_910_ = lean_string_utf8_get_fast(v___x_890_, v_searcher_904_);
v___x_911_ = lean_uint32_dec_eq(v___x_910_, v___x_909_);
if (v___x_911_ == 0)
{
lean_object* v___x_912_; lean_object* v___x_914_; 
v___x_912_ = lean_string_utf8_next_fast(v___x_890_, v_searcher_904_);
lean_dec(v_searcher_904_);
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 1, v___x_912_);
v___x_914_ = v___x_906_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_currPos_903_);
lean_ctor_set(v_reuseFailAlloc_916_, 1, v___x_912_);
v___x_914_ = v_reuseFailAlloc_916_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
v_a_893_ = v___x_914_;
goto _start;
}
}
else
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v_slice_920_; lean_object* v_nextIt_922_; 
v___x_917_ = lean_string_utf8_next_fast(v___x_890_, v_searcher_904_);
v___x_918_ = lean_nat_sub(v___x_917_, v_searcher_904_);
v___x_919_ = lean_nat_add(v_searcher_904_, v___x_918_);
lean_dec(v___x_918_);
v_slice_920_ = l_String_Slice_subslice_x21(v___x_891_, v_currPos_903_, v_searcher_904_);
lean_inc(v___x_919_);
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 1, v___x_919_);
lean_ctor_set(v___x_906_, 0, v___x_919_);
v_nextIt_922_ = v___x_906_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___x_919_);
lean_ctor_set(v_reuseFailAlloc_925_, 1, v___x_919_);
v_nextIt_922_ = v_reuseFailAlloc_925_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
lean_object* v_startInclusive_923_; lean_object* v_endExclusive_924_; 
v_startInclusive_923_ = lean_ctor_get(v_slice_920_, 0);
lean_inc(v_startInclusive_923_);
v_endExclusive_924_ = lean_ctor_get(v_slice_920_, 1);
lean_inc(v_endExclusive_924_);
lean_dec_ref(v_slice_920_);
v_it_896_ = v_nextIt_922_;
v_startInclusive_897_ = v_startInclusive_923_;
v_endExclusive_898_ = v_endExclusive_924_;
goto v___jp_895_;
}
}
}
else
{
lean_object* v___x_926_; 
lean_del_object(v___x_906_);
lean_dec(v_searcher_904_);
v___x_926_ = lean_box(1);
lean_inc(v___x_892_);
v_it_896_ = v___x_926_;
v_startInclusive_897_ = v_currPos_903_;
v_endExclusive_898_ = v___x_892_;
goto v___jp_895_;
}
}
}
else
{
lean_dec(v___x_892_);
lean_dec_ref(v___x_890_);
return v_b_894_;
}
v___jp_895_:
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
lean_inc_ref(v___x_890_);
v___x_899_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_899_, 0, v___x_890_);
lean_ctor_set(v___x_899_, 1, v_startInclusive_897_);
lean_ctor_set(v___x_899_, 2, v_endExclusive_898_);
v___x_900_ = l_String_Slice_toString(v___x_899_);
lean_dec_ref_known(v___x_899_, 3);
v___x_901_ = lean_array_push(v_b_894_, v___x_900_);
v_a_893_ = v_it_896_;
v_b_894_ = v___x_901_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__4___redArg___boxed(lean_object* v___x_928_, lean_object* v___x_929_, lean_object* v___x_930_, lean_object* v_a_931_, lean_object* v_b_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__4___redArg(v___x_928_, v___x_929_, v___x_930_, v_a_931_, v_b_932_);
lean_dec_ref(v___x_929_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__1___redArg(lean_object* v_element_934_, lean_object* v___x_935_, lean_object* v___x_936_, lean_object* v_a_937_, lean_object* v_b_938_){
_start:
{
lean_object* v_it_940_; lean_object* v_startInclusive_941_; lean_object* v_endExclusive_942_; 
if (lean_obj_tag(v_a_937_) == 0)
{
lean_object* v_currPos_947_; lean_object* v_searcher_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_971_; 
v_currPos_947_ = lean_ctor_get(v_a_937_, 0);
v_searcher_948_ = lean_ctor_get(v_a_937_, 1);
v_isSharedCheck_971_ = !lean_is_exclusive(v_a_937_);
if (v_isSharedCheck_971_ == 0)
{
v___x_950_ = v_a_937_;
v_isShared_951_ = v_isSharedCheck_971_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_searcher_948_);
lean_inc(v_currPos_947_);
lean_dec(v_a_937_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_971_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
uint8_t v_decide_952_; 
v_decide_952_ = lean_nat_dec_eq(v_searcher_948_, v___x_936_);
if (v_decide_952_ == 0)
{
uint32_t v___x_953_; uint32_t v___x_954_; uint8_t v___x_955_; 
v___x_953_ = 59;
v___x_954_ = lean_string_utf8_get_fast(v_element_934_, v_searcher_948_);
v___x_955_ = lean_uint32_dec_eq(v___x_954_, v___x_953_);
if (v___x_955_ == 0)
{
lean_object* v___x_956_; lean_object* v___x_958_; 
v___x_956_ = lean_string_utf8_next_fast(v_element_934_, v_searcher_948_);
lean_dec(v_searcher_948_);
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 1, v___x_956_);
v___x_958_ = v___x_950_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_currPos_947_);
lean_ctor_set(v_reuseFailAlloc_960_, 1, v___x_956_);
v___x_958_ = v_reuseFailAlloc_960_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
v_a_937_ = v___x_958_;
goto _start;
}
}
else
{
lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v_slice_964_; lean_object* v_nextIt_966_; 
v___x_961_ = lean_string_utf8_next_fast(v_element_934_, v_searcher_948_);
v___x_962_ = lean_nat_sub(v___x_961_, v_searcher_948_);
v___x_963_ = lean_nat_add(v_searcher_948_, v___x_962_);
lean_dec(v___x_962_);
v_slice_964_ = l_String_Slice_subslice_x21(v___x_935_, v_currPos_947_, v_searcher_948_);
lean_inc(v___x_963_);
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 1, v___x_963_);
lean_ctor_set(v___x_950_, 0, v___x_963_);
v_nextIt_966_ = v___x_950_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v___x_963_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v___x_963_);
v_nextIt_966_ = v_reuseFailAlloc_969_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
lean_object* v_startInclusive_967_; lean_object* v_endExclusive_968_; 
v_startInclusive_967_ = lean_ctor_get(v_slice_964_, 0);
lean_inc(v_startInclusive_967_);
v_endExclusive_968_ = lean_ctor_get(v_slice_964_, 1);
lean_inc(v_endExclusive_968_);
lean_dec_ref(v_slice_964_);
v_it_940_ = v_nextIt_966_;
v_startInclusive_941_ = v_startInclusive_967_;
v_endExclusive_942_ = v_endExclusive_968_;
goto v___jp_939_;
}
}
}
else
{
lean_object* v___x_970_; 
lean_del_object(v___x_950_);
lean_dec(v_searcher_948_);
v___x_970_ = lean_box(1);
lean_inc(v___x_936_);
v_it_940_ = v___x_970_;
v_startInclusive_941_ = v_currPos_947_;
v_endExclusive_942_ = v___x_936_;
goto v___jp_939_;
}
}
}
else
{
lean_dec(v___x_936_);
lean_dec_ref(v_element_934_);
return v_b_938_;
}
v___jp_939_:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
lean_inc_ref(v_element_934_);
v___x_943_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_943_, 0, v_element_934_);
lean_ctor_set(v___x_943_, 1, v_startInclusive_941_);
lean_ctor_set(v___x_943_, 2, v_endExclusive_942_);
v___x_944_ = l_String_Slice_toString(v___x_943_);
lean_dec_ref_known(v___x_943_, 3);
v___x_945_ = lean_array_push(v_b_938_, v___x_944_);
v_a_937_ = v_it_940_;
v_b_938_ = v___x_945_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__1___redArg___boxed(lean_object* v_element_972_, lean_object* v___x_973_, lean_object* v___x_974_, lean_object* v_a_975_, lean_object* v_b_976_){
_start:
{
lean_object* v_res_977_; 
v_res_977_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__1___redArg(v_element_972_, v___x_973_, v___x_974_, v_a_975_, v_b_976_);
lean_dec_ref(v___x_973_);
return v_res_977_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__2(lean_object* v_x_978_){
_start:
{
if (lean_obj_tag(v_x_978_) == 0)
{
uint8_t v___x_979_; 
v___x_979_ = 1;
return v___x_979_;
}
else
{
lean_object* v_head_980_; lean_object* v_tail_981_; uint8_t v___x_982_; 
v_head_980_ = lean_ctor_get(v_x_978_, 0);
lean_inc(v_head_980_);
v_tail_981_ = lean_ctor_get(v_x_978_, 1);
lean_inc(v_tail_981_);
lean_dec_ref_known(v_x_978_, 2);
v___x_982_ = l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_TransferEncoding_isTransferParameter(v_head_980_);
if (v___x_982_ == 0)
{
lean_dec(v_tail_981_);
return v___x_982_;
}
else
{
v_x_978_ = v_tail_981_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__2___boxed(lean_object* v_x_984_){
_start:
{
uint8_t v_res_985_; lean_object* v_r_986_; 
v_res_985_ = l_List_all___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__2(v_x_984_);
v_r_986_ = lean_box(v_res_985_);
return v_r_986_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5_spec__5(lean_object* v_as_987_, size_t v_i_988_, size_t v_stop_989_, lean_object* v_b_990_){
_start:
{
lean_object* v_val_992_; lean_object* v_val_997_; uint8_t v___x_999_; 
v___x_999_ = lean_usize_dec_eq(v_i_988_, v_stop_989_);
if (v___x_999_ == 0)
{
lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v_startInclusive_1005_; lean_object* v_endExclusive_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1034_; 
v___x_1000_ = lean_array_uget_borrowed(v_as_987_, v_i_988_);
v___x_1001_ = lean_unsigned_to_nat(0u);
v___x_1002_ = lean_string_utf8_byte_size(v___x_1000_);
lean_inc(v___x_1000_);
v___x_1003_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1000_);
lean_ctor_set(v___x_1003_, 1, v___x_1001_);
lean_ctor_set(v___x_1003_, 2, v___x_1002_);
lean_inc_ref(v___x_1003_);
v___x_1004_ = l_String_Slice_trimAscii(v___x_1003_);
v_startInclusive_1005_ = lean_ctor_get(v___x_1004_, 1);
v_endExclusive_1006_ = lean_ctor_get(v___x_1004_, 2);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1034_ == 0)
{
lean_object* v_unused_1035_; 
v_unused_1035_ = lean_ctor_get(v___x_1004_, 0);
lean_dec(v_unused_1035_);
v___x_1008_ = v___x_1004_;
v_isShared_1009_ = v_isSharedCheck_1034_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_endExclusive_1006_);
lean_inc(v_startInclusive_1005_);
lean_dec(v___x_1004_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1034_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1010_; uint8_t v___x_1011_; 
v___x_1010_ = lean_nat_sub(v_endExclusive_1006_, v_startInclusive_1005_);
lean_dec(v_startInclusive_1005_);
lean_dec(v_endExclusive_1006_);
v___x_1011_ = lean_nat_dec_eq(v___x_1010_, v___x_1001_);
lean_dec(v___x_1010_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1012_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__0___closed__0);
v___x_1013_ = ((lean_object*)(l_Std_Http_Header_TransferEncoding_Validate___closed__1));
lean_inc(v___x_1000_);
v___x_1014_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__1___redArg(v___x_1000_, v___x_1003_, v___x_1002_, v___x_1012_, v___x_1013_);
lean_dec_ref_known(v___x_1003_, 3);
v___x_1015_ = lean_array_to_list(v___x_1014_);
if (lean_obj_tag(v___x_1015_) == 1)
{
lean_object* v_head_1016_; lean_object* v_tail_1017_; lean_object* v___x_1018_; lean_object* v___x_1020_; 
v_head_1016_ = lean_ctor_get(v___x_1015_, 0);
lean_inc(v_head_1016_);
v_tail_1017_ = lean_ctor_get(v___x_1015_, 1);
lean_inc(v_tail_1017_);
lean_dec_ref_known(v___x_1015_, 2);
v___x_1018_ = lean_string_utf8_byte_size(v_head_1016_);
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 2, v___x_1018_);
lean_ctor_set(v___x_1008_, 1, v___x_1001_);
lean_ctor_set(v___x_1008_, 0, v_head_1016_);
v___x_1020_ = v___x_1008_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_head_1016_);
lean_ctor_set(v_reuseFailAlloc_1032_, 1, v___x_1001_);
lean_ctor_set(v_reuseFailAlloc_1032_, 2, v___x_1018_);
v___x_1020_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v_name_1023_; uint8_t v___x_1024_; 
v___x_1021_ = l_String_Slice_trimAscii(v___x_1020_);
v___x_1022_ = l_String_Slice_toString(v___x_1021_);
lean_dec_ref(v___x_1021_);
v_name_1023_ = l_String_mapAux___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__0(v___x_1022_, v___x_1001_);
lean_inc_ref(v_name_1023_);
v___x_1024_ = l_Std_Http_Internal_isToken(v_name_1023_);
if (v___x_1024_ == 0)
{
lean_object* v___x_1025_; 
lean_dec_ref(v_name_1023_);
lean_dec(v_tail_1017_);
lean_dec_ref(v_b_990_);
v___x_1025_ = lean_box(0);
return v___x_1025_;
}
else
{
uint8_t v___x_1026_; 
lean_inc(v_tail_1017_);
v___x_1026_ = l_List_all___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__2(v_tail_1017_);
if (v___x_1026_ == 0)
{
lean_object* v___x_1027_; 
lean_dec_ref(v_name_1023_);
lean_dec(v_tail_1017_);
lean_dec_ref(v_b_990_);
v___x_1027_ = lean_box(0);
return v___x_1027_;
}
else
{
uint8_t v___x_1028_; 
v___x_1028_ = l_List_isEmpty___redArg(v_tail_1017_);
lean_dec(v_tail_1017_);
if (v___x_1028_ == 0)
{
lean_object* v___x_1029_; uint8_t v___x_1030_; 
v___x_1029_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1___closed__0));
v___x_1030_ = lean_string_dec_eq(v_name_1023_, v___x_1029_);
if (v___x_1030_ == 0)
{
v_val_997_ = v_name_1023_;
goto v___jp_996_;
}
else
{
lean_object* v___x_1031_; 
lean_dec_ref(v_name_1023_);
lean_dec_ref(v_b_990_);
v___x_1031_ = lean_box(0);
return v___x_1031_;
}
}
else
{
v_val_997_ = v_name_1023_;
goto v___jp_996_;
}
}
}
}
}
else
{
lean_object* v___x_1033_; 
lean_dec(v___x_1015_);
lean_del_object(v___x_1008_);
lean_dec_ref(v_b_990_);
v___x_1033_ = lean_box(0);
return v___x_1033_;
}
}
else
{
lean_del_object(v___x_1008_);
lean_dec_ref_known(v___x_1003_, 3);
v_val_992_ = v_b_990_;
goto v___jp_991_;
}
}
}
else
{
lean_object* v___x_1036_; 
v___x_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1036_, 0, v_b_990_);
return v___x_1036_;
}
v___jp_991_:
{
size_t v___x_993_; size_t v___x_994_; 
v___x_993_ = ((size_t)1ULL);
v___x_994_ = lean_usize_add(v_i_988_, v___x_993_);
v_i_988_ = v___x_994_;
v_b_990_ = v_val_992_;
goto _start;
}
v___jp_996_:
{
lean_object* v___x_998_; 
v___x_998_ = lean_array_push(v_b_990_, v_val_997_);
v_val_992_ = v___x_998_;
goto v___jp_991_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5_spec__5___boxed(lean_object* v_as_1037_, lean_object* v_i_1038_, lean_object* v_stop_1039_, lean_object* v_b_1040_){
_start:
{
size_t v_i_boxed_1041_; size_t v_stop_boxed_1042_; lean_object* v_res_1043_; 
v_i_boxed_1041_ = lean_unbox_usize(v_i_1038_);
lean_dec(v_i_1038_);
v_stop_boxed_1042_ = lean_unbox_usize(v_stop_1039_);
lean_dec(v_stop_1039_);
v_res_1043_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5_spec__5(v_as_1037_, v_i_boxed_1041_, v_stop_boxed_1042_, v_b_1040_);
lean_dec_ref(v_as_1037_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5(lean_object* v_as_1046_, lean_object* v_start_1047_, lean_object* v_stop_1048_){
_start:
{
lean_object* v___x_1049_; uint8_t v___x_1050_; 
v___x_1049_ = ((lean_object*)(l_Std_Http_Header_TransferEncoding_Validate___closed__1));
v___x_1050_ = lean_nat_dec_lt(v_start_1047_, v_stop_1048_);
if (v___x_1050_ == 0)
{
lean_object* v___x_1051_; 
v___x_1051_ = ((lean_object*)(l_Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5___closed__0));
return v___x_1051_;
}
else
{
lean_object* v___x_1052_; uint8_t v___x_1053_; 
v___x_1052_ = lean_array_get_size(v_as_1046_);
v___x_1053_ = lean_nat_dec_le(v_stop_1048_, v___x_1052_);
if (v___x_1053_ == 0)
{
uint8_t v___x_1054_; 
v___x_1054_ = lean_nat_dec_lt(v_start_1047_, v___x_1052_);
if (v___x_1054_ == 0)
{
lean_object* v___x_1055_; 
v___x_1055_ = ((lean_object*)(l_Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5___closed__0));
return v___x_1055_;
}
else
{
size_t v___x_1056_; size_t v___x_1057_; lean_object* v___x_1058_; 
v___x_1056_ = lean_usize_of_nat(v_start_1047_);
v___x_1057_ = lean_usize_of_nat(v___x_1052_);
v___x_1058_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5_spec__5(v_as_1046_, v___x_1056_, v___x_1057_, v___x_1049_);
return v___x_1058_;
}
}
else
{
size_t v___x_1059_; size_t v___x_1060_; lean_object* v___x_1061_; 
v___x_1059_ = lean_usize_of_nat(v_start_1047_);
v___x_1060_ = lean_usize_of_nat(v_stop_1048_);
v___x_1061_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5_spec__5(v_as_1046_, v___x_1059_, v___x_1060_, v___x_1049_);
return v___x_1061_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5___boxed(lean_object* v_as_1062_, lean_object* v_start_1063_, lean_object* v_stop_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5(v_as_1062_, v_start_1063_, v_stop_1064_);
lean_dec(v_stop_1064_);
lean_dec(v_start_1063_);
lean_dec_ref(v_as_1062_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_parseCodings_x3f(lean_object* v_v_1066_){
_start:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1067_ = lean_unsigned_to_nat(0u);
v___x_1068_ = lean_string_utf8_byte_size(v_v_1066_);
lean_inc_ref(v_v_1066_);
v___x_1069_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1069_, 0, v_v_1066_);
lean_ctor_set(v___x_1069_, 1, v___x_1067_);
lean_ctor_set(v___x_1069_, 2, v___x_1068_);
v___x_1070_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___closed__0, &l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__3___closed__0);
v___x_1071_ = ((lean_object*)(l_Std_Http_Header_TransferEncoding_Validate___closed__1));
v___x_1072_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__4___redArg(v_v_1066_, v___x_1069_, v___x_1068_, v___x_1070_, v___x_1071_);
lean_dec_ref_known(v___x_1069_, 3);
v___x_1073_ = lean_array_to_list(v___x_1072_);
v___x_1074_ = lean_array_mk(v___x_1073_);
v___x_1075_ = lean_array_get_size(v___x_1074_);
v___x_1076_ = l_Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5(v___x_1074_, v___x_1067_, v___x_1075_);
lean_dec_ref(v___x_1074_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__1(lean_object* v_element_1077_, lean_object* v___x_1078_, lean_object* v___x_1079_, lean_object* v_inst_1080_, lean_object* v_R_1081_, lean_object* v_a_1082_, lean_object* v_b_1083_){
_start:
{
lean_object* v___x_1084_; 
v___x_1084_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__1___redArg(v_element_1077_, v___x_1078_, v___x_1079_, v_a_1082_, v_b_1083_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__1___boxed(lean_object* v_element_1085_, lean_object* v___x_1086_, lean_object* v___x_1087_, lean_object* v_inst_1088_, lean_object* v_R_1089_, lean_object* v_a_1090_, lean_object* v_b_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__1(v_element_1085_, v___x_1086_, v___x_1087_, v_inst_1088_, v_R_1089_, v_a_1090_, v_b_1091_);
lean_dec_ref(v___x_1086_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__4(lean_object* v___x_1093_, lean_object* v___x_1094_, lean_object* v___x_1095_, lean_object* v_inst_1096_, lean_object* v_R_1097_, lean_object* v_a_1098_, lean_object* v_b_1099_){
_start:
{
lean_object* v___x_1100_; 
v___x_1100_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__4___redArg(v___x_1093_, v___x_1094_, v___x_1095_, v_a_1098_, v_b_1099_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__4___boxed(lean_object* v___x_1101_, lean_object* v___x_1102_, lean_object* v___x_1103_, lean_object* v_inst_1104_, lean_object* v_R_1105_, lean_object* v_a_1106_, lean_object* v_b_1107_){
_start:
{
lean_object* v_res_1108_; 
v_res_1108_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__4(v___x_1101_, v___x_1102_, v___x_1103_, v_inst_1104_, v_R_1105_, v_a_1106_, v_b_1107_);
lean_dec_ref(v___x_1102_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_parseFieldLines_x3f_spec__0(lean_object* v_as_1109_, size_t v_i_1110_, size_t v_stop_1111_, lean_object* v_b_1112_){
_start:
{
uint8_t v___x_1113_; 
v___x_1113_ = lean_usize_dec_eq(v_i_1110_, v_stop_1111_);
if (v___x_1113_ == 0)
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = lean_array_uget_borrowed(v_as_1109_, v_i_1110_);
lean_inc(v___x_1114_);
v___x_1115_ = l_Std_Http_Header_TransferEncoding_parseCodings_x3f(v___x_1114_);
if (lean_obj_tag(v___x_1115_) == 0)
{
lean_dec_ref(v_b_1112_);
return v___x_1115_;
}
else
{
lean_object* v_val_1116_; lean_object* v___x_1117_; size_t v___x_1118_; size_t v___x_1119_; 
v_val_1116_ = lean_ctor_get(v___x_1115_, 0);
lean_inc(v_val_1116_);
lean_dec_ref_known(v___x_1115_, 1);
v___x_1117_ = l_Array_append___redArg(v_b_1112_, v_val_1116_);
lean_dec(v_val_1116_);
v___x_1118_ = ((size_t)1ULL);
v___x_1119_ = lean_usize_add(v_i_1110_, v___x_1118_);
v_i_1110_ = v___x_1119_;
v_b_1112_ = v___x_1117_;
goto _start;
}
}
else
{
lean_object* v___x_1121_; 
v___x_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1121_, 0, v_b_1112_);
return v___x_1121_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_parseFieldLines_x3f_spec__0___boxed(lean_object* v_as_1122_, lean_object* v_i_1123_, lean_object* v_stop_1124_, lean_object* v_b_1125_){
_start:
{
size_t v_i_boxed_1126_; size_t v_stop_boxed_1127_; lean_object* v_res_1128_; 
v_i_boxed_1126_ = lean_unbox_usize(v_i_1123_);
lean_dec(v_i_1123_);
v_stop_boxed_1127_ = lean_unbox_usize(v_stop_1124_);
lean_dec(v_stop_1124_);
v_res_1128_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_parseFieldLines_x3f_spec__0(v_as_1122_, v_i_boxed_1126_, v_stop_boxed_1127_, v_b_1125_);
lean_dec_ref(v_as_1122_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_parseFieldLines_x3f(lean_object* v_values_1129_){
_start:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; uint8_t v___x_1133_; 
v___x_1130_ = lean_unsigned_to_nat(0u);
v___x_1131_ = ((lean_object*)(l_Std_Http_Header_TransferEncoding_Validate___closed__1));
v___x_1132_ = lean_array_get_size(v_values_1129_);
v___x_1133_ = lean_nat_dec_lt(v___x_1130_, v___x_1132_);
if (v___x_1133_ == 0)
{
lean_object* v___x_1134_; 
v___x_1134_ = ((lean_object*)(l_Array_filterMapM___at___00Std_Http_Header_TransferEncoding_parseCodings_x3f_spec__5___closed__0));
return v___x_1134_;
}
else
{
size_t v___x_1135_; size_t v___x_1136_; lean_object* v___x_1137_; 
v___x_1135_ = ((size_t)0ULL);
v___x_1136_ = lean_usize_of_nat(v___x_1132_);
v___x_1137_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_parseFieldLines_x3f_spec__0(v_values_1129_, v___x_1135_, v___x_1136_, v___x_1131_);
return v___x_1137_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_parseFieldLines_x3f___boxed(lean_object* v_values_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l_Std_Http_Header_TransferEncoding_parseFieldLines_x3f(v_values_1138_);
lean_dec_ref(v_values_1138_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_parse(lean_object* v_v_1140_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = l_Std_Http_Header_TransferEncoding_parseCodings_x3f(v_v_1140_);
if (lean_obj_tag(v___x_1141_) == 0)
{
lean_object* v___x_1142_; 
v___x_1142_ = lean_box(0);
return v___x_1142_;
}
else
{
lean_object* v_val_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1152_; 
v_val_1143_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1145_ = v___x_1141_;
v_isShared_1146_ = v_isSharedCheck_1152_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_val_1143_);
lean_dec(v___x_1141_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1152_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
uint8_t v___x_1147_; 
v___x_1147_ = l_Std_Http_Header_TransferEncoding_Validate(v_val_1143_);
if (v___x_1147_ == 0)
{
lean_object* v___x_1148_; 
lean_del_object(v___x_1145_);
lean_dec(v_val_1143_);
v___x_1148_ = lean_box(0);
return v___x_1148_;
}
else
{
lean_object* v___x_1150_; 
if (v_isShared_1146_ == 0)
{
v___x_1150_ = v___x_1145_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_val_1143_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_finalCodingIsChunked_x3f_spec__0(lean_object* v_as_1153_, size_t v_i_1154_, size_t v_stop_1155_, lean_object* v_b_1156_){
_start:
{
uint8_t v___x_1157_; 
v___x_1157_ = lean_usize_dec_eq(v_i_1154_, v_stop_1155_);
if (v___x_1157_ == 0)
{
lean_object* v___x_1158_; size_t v___x_1159_; size_t v___x_1160_; lean_object* v___x_1161_; uint8_t v___x_1162_; 
v___x_1158_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_Validate_spec__1___closed__0));
v___x_1159_ = ((size_t)1ULL);
v___x_1160_ = lean_usize_sub(v_i_1154_, v___x_1159_);
v___x_1161_ = lean_array_uget_borrowed(v_as_1153_, v___x_1160_);
v___x_1162_ = lean_string_dec_eq(v___x_1161_, v___x_1158_);
if (v___x_1162_ == 0)
{
v_i_1154_ = v___x_1160_;
goto _start;
}
else
{
lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1164_ = lean_unsigned_to_nat(1u);
v___x_1165_ = lean_nat_add(v_b_1156_, v___x_1164_);
lean_dec(v_b_1156_);
v_i_1154_ = v___x_1160_;
v_b_1156_ = v___x_1165_;
goto _start;
}
}
else
{
return v_b_1156_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_finalCodingIsChunked_x3f_spec__0___boxed(lean_object* v_as_1167_, lean_object* v_i_1168_, lean_object* v_stop_1169_, lean_object* v_b_1170_){
_start:
{
size_t v_i_boxed_1171_; size_t v_stop_boxed_1172_; lean_object* v_res_1173_; 
v_i_boxed_1171_ = lean_unbox_usize(v_i_1168_);
lean_dec(v_i_1168_);
v_stop_boxed_1172_ = lean_unbox_usize(v_stop_1169_);
lean_dec(v_stop_1169_);
v_res_1173_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_finalCodingIsChunked_x3f_spec__0(v_as_1167_, v_i_boxed_1171_, v_stop_boxed_1172_, v_b_1170_);
lean_dec_ref(v_as_1167_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_finalCodingIsChunked_x3f(lean_object* v_values_1174_){
_start:
{
uint8_t v___y_1176_; lean_object* v___y_1177_; lean_object* v___x_1183_; 
v___x_1183_ = l_Std_Http_Header_TransferEncoding_parseFieldLines_x3f(v_values_1174_);
if (lean_obj_tag(v___x_1183_) == 0)
{
lean_object* v___x_1184_; 
v___x_1184_ = lean_box(0);
return v___x_1184_;
}
else
{
lean_object* v_val_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1210_; 
v_val_1185_ = lean_ctor_get(v___x_1183_, 0);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1187_ = v___x_1183_;
v_isShared_1188_ = v_isSharedCheck_1210_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_val_1185_);
lean_dec(v___x_1183_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1210_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___y_1190_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; uint8_t v___x_1206_; 
v___x_1203_ = lean_array_get_size(v_val_1185_);
v___x_1204_ = lean_unsigned_to_nat(1u);
v___x_1205_ = lean_nat_sub(v___x_1203_, v___x_1204_);
v___x_1206_ = lean_nat_dec_lt(v___x_1205_, v___x_1203_);
if (v___x_1206_ == 0)
{
lean_object* v___x_1207_; 
lean_dec(v___x_1205_);
v___x_1207_ = lean_box(0);
v___y_1190_ = v___x_1207_;
goto v___jp_1189_;
}
else
{
lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1208_ = lean_array_fget_borrowed(v_val_1185_, v___x_1205_);
lean_dec(v___x_1205_);
lean_inc(v___x_1208_);
v___x_1209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1208_);
v___y_1190_ = v___x_1209_;
goto v___jp_1189_;
}
v___jp_1189_:
{
lean_object* v___x_1191_; uint8_t v___x_1192_; 
v___x_1191_ = ((lean_object*)(l_Std_Http_Header_TransferEncoding_Validate___closed__0));
v___x_1192_ = l_instBEqOption_beq___at___00Std_Http_Header_TransferEncoding_Validate_spec__0(v___y_1190_, v___x_1191_);
lean_dec(v___y_1190_);
if (v___x_1192_ == 0)
{
lean_object* v___x_1193_; lean_object* v___x_1195_; 
lean_dec(v_val_1185_);
v___x_1193_ = lean_box(v___x_1192_);
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 0, v___x_1193_);
v___x_1195_ = v___x_1187_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v___x_1193_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
else
{
lean_object* v___x_1197_; lean_object* v___x_1198_; uint8_t v___x_1199_; 
lean_del_object(v___x_1187_);
v___x_1197_ = lean_unsigned_to_nat(0u);
v___x_1198_ = lean_array_get_size(v_val_1185_);
v___x_1199_ = lean_nat_dec_lt(v___x_1197_, v___x_1198_);
if (v___x_1199_ == 0)
{
lean_dec(v_val_1185_);
v___y_1176_ = v___x_1192_;
v___y_1177_ = v___x_1197_;
goto v___jp_1175_;
}
else
{
size_t v___x_1200_; size_t v___x_1201_; lean_object* v___x_1202_; 
v___x_1200_ = lean_usize_of_nat(v___x_1198_);
v___x_1201_ = ((size_t)0ULL);
v___x_1202_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Http_Header_TransferEncoding_finalCodingIsChunked_x3f_spec__0(v_val_1185_, v___x_1200_, v___x_1201_, v___x_1197_);
lean_dec(v_val_1185_);
v___y_1176_ = v___x_1192_;
v___y_1177_ = v___x_1202_;
goto v___jp_1175_;
}
}
}
}
}
v___jp_1175_:
{
lean_object* v___x_1178_; uint8_t v___x_1179_; 
v___x_1178_ = lean_unsigned_to_nat(1u);
v___x_1179_ = lean_nat_dec_eq(v___y_1177_, v___x_1178_);
lean_dec(v___y_1177_);
if (v___x_1179_ == 0)
{
lean_object* v___x_1180_; 
v___x_1180_ = lean_box(0);
return v___x_1180_;
}
else
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1181_ = lean_box(v___y_1176_);
v___x_1182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1182_, 0, v___x_1181_);
return v___x_1182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_finalCodingIsChunked_x3f___boxed(lean_object* v_values_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l_Std_Http_Header_TransferEncoding_finalCodingIsChunked_x3f(v_values_1211_);
lean_dec_ref(v_values_1211_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_TransferEncoding_serialize(lean_object* v_te_1213_){
_start:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v_value_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1214_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__1));
v___x_1215_ = lean_array_to_list(v_te_1213_);
v_value_1216_ = l_String_intercalate(v___x_1214_, v___x_1215_);
v___x_1217_ = l_Std_Http_Header_Name_transferEncoding;
v___x_1218_ = l_Std_Http_Header_Value_ofString_x21(v_value_1216_);
v___x_1219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1217_);
lean_ctor_set(v___x_1219_, 1, v___x_1218_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprConnection_repr___redArg(lean_object* v_x_1238_){
_start:
{
lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; uint8_t v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1239_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5));
v___x_1240_ = ((lean_object*)(l_Std_Http_Header_instReprConnection_repr___redArg___closed__3));
v___x_1241_ = lean_obj_once(&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7, &l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7_once, _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__7);
v___x_1242_ = l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0(v_x_1238_);
v___x_1243_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1241_);
lean_ctor_set(v___x_1243_, 1, v___x_1242_);
v___x_1244_ = 0;
v___x_1245_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1245_, 0, v___x_1243_);
lean_ctor_set_uint8(v___x_1245_, sizeof(void*)*1, v___x_1244_);
v___x_1246_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1240_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
v___x_1247_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__2));
v___x_1248_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1246_);
lean_ctor_set(v___x_1248_, 1, v___x_1247_);
v___x_1249_ = lean_box(1);
v___x_1250_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1248_);
lean_ctor_set(v___x_1250_, 1, v___x_1249_);
v___x_1251_ = ((lean_object*)(l_Std_Http_Header_instReprConnection_repr___redArg___closed__5));
v___x_1252_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1250_);
lean_ctor_set(v___x_1252_, 1, v___x_1251_);
v___x_1253_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1252_);
lean_ctor_set(v___x_1253_, 1, v___x_1239_);
v___x_1254_ = ((lean_object*)(l_Std_Http_Header_instReprTransferEncoding_repr___redArg___closed__8));
v___x_1255_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1253_);
lean_ctor_set(v___x_1255_, 1, v___x_1254_);
v___x_1256_ = lean_obj_once(&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10, &l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10_once, _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10);
v___x_1257_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__11));
v___x_1258_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
lean_ctor_set(v___x_1258_, 1, v___x_1255_);
v___x_1259_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__12));
v___x_1260_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1258_);
lean_ctor_set(v___x_1260_, 1, v___x_1259_);
v___x_1261_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1256_);
lean_ctor_set(v___x_1261_, 1, v___x_1260_);
v___x_1262_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
lean_ctor_set_uint8(v___x_1262_, sizeof(void*)*1, v___x_1244_);
return v___x_1262_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprConnection_repr(lean_object* v_x_1263_, lean_object* v_prec_1264_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = l_Std_Http_Header_instReprConnection_repr___redArg(v_x_1263_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprConnection_repr___boxed(lean_object* v_x_1266_, lean_object* v_prec_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Std_Http_Header_instReprConnection_repr(v_x_1266_, v_prec_1267_);
lean_dec(v_prec_1267_);
return v_res_1268_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_containsToken_spec__0(lean_object* v_token_1271_, lean_object* v_as_1272_, size_t v_i_1273_, size_t v_stop_1274_){
_start:
{
uint8_t v___x_1275_; 
v___x_1275_ = lean_usize_dec_eq(v_i_1273_, v_stop_1274_);
if (v___x_1275_ == 0)
{
lean_object* v___x_1276_; uint8_t v___x_1277_; 
v___x_1276_ = lean_array_uget_borrowed(v_as_1272_, v_i_1273_);
v___x_1277_ = lean_string_dec_eq(v___x_1276_, v_token_1271_);
if (v___x_1277_ == 0)
{
size_t v___x_1278_; size_t v___x_1279_; 
v___x_1278_ = ((size_t)1ULL);
v___x_1279_ = lean_usize_add(v_i_1273_, v___x_1278_);
v_i_1273_ = v___x_1279_;
goto _start;
}
else
{
return v___x_1277_;
}
}
else
{
uint8_t v___x_1281_; 
v___x_1281_ = 0;
return v___x_1281_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_containsToken_spec__0___boxed(lean_object* v_token_1282_, lean_object* v_as_1283_, lean_object* v_i_1284_, lean_object* v_stop_1285_){
_start:
{
size_t v_i_boxed_1286_; size_t v_stop_boxed_1287_; uint8_t v_res_1288_; lean_object* v_r_1289_; 
v_i_boxed_1286_ = lean_unbox_usize(v_i_1284_);
lean_dec(v_i_1284_);
v_stop_boxed_1287_ = lean_unbox_usize(v_stop_1285_);
lean_dec(v_stop_1285_);
v_res_1288_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_containsToken_spec__0(v_token_1282_, v_as_1283_, v_i_boxed_1286_, v_stop_boxed_1287_);
lean_dec_ref(v_as_1283_);
lean_dec_ref(v_token_1282_);
v_r_1289_ = lean_box(v_res_1288_);
return v_r_1289_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_Connection_containsToken(lean_object* v_connection_1290_, lean_object* v_token_1291_){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; uint8_t v___x_1294_; 
v___x_1292_ = lean_unsigned_to_nat(0u);
v___x_1293_ = lean_array_get_size(v_connection_1290_);
v___x_1294_ = lean_nat_dec_lt(v___x_1292_, v___x_1293_);
if (v___x_1294_ == 0)
{
lean_dec_ref(v_token_1291_);
return v___x_1294_;
}
else
{
lean_object* v___x_1295_; 
v___x_1295_ = lean_string_utf8_byte_size(v_token_1291_);
if (v___x_1294_ == 0)
{
lean_dec_ref(v_token_1291_);
return v___x_1294_;
}
else
{
lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v_token_1299_; size_t v___x_1300_; size_t v___x_1301_; uint8_t v___x_1302_; 
v___x_1296_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1296_, 0, v_token_1291_);
lean_ctor_set(v___x_1296_, 1, v___x_1292_);
lean_ctor_set(v___x_1296_, 2, v___x_1295_);
v___x_1297_ = l_String_Slice_trimAscii(v___x_1296_);
v___x_1298_ = l_String_Slice_toString(v___x_1297_);
lean_dec_ref(v___x_1297_);
v_token_1299_ = l_String_mapAux___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__0(v___x_1298_, v___x_1292_);
v___x_1300_ = ((size_t)0ULL);
v___x_1301_ = lean_usize_of_nat(v___x_1293_);
v___x_1302_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_containsToken_spec__0(v_token_1299_, v_connection_1290_, v___x_1300_, v___x_1301_);
lean_dec_ref(v_token_1299_);
return v___x_1302_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Connection_containsToken___boxed(lean_object* v_connection_1303_, lean_object* v_token_1304_){
_start:
{
uint8_t v_res_1305_; lean_object* v_r_1306_; 
v_res_1305_ = l_Std_Http_Header_Connection_containsToken(v_connection_1303_, v_token_1304_);
lean_dec_ref(v_connection_1303_);
v_r_1306_ = lean_box(v_res_1305_);
return v_r_1306_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_Connection_shouldClose(lean_object* v_connection_1308_){
_start:
{
lean_object* v___x_1309_; uint8_t v___x_1310_; 
v___x_1309_ = ((lean_object*)(l_Std_Http_Header_Connection_shouldClose___closed__0));
v___x_1310_ = l_Std_Http_Header_Connection_containsToken(v_connection_1308_, v___x_1309_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Connection_shouldClose___boxed(lean_object* v_connection_1311_){
_start:
{
uint8_t v_res_1312_; lean_object* v_r_1313_; 
v_res_1312_ = l_Std_Http_Header_Connection_shouldClose(v_connection_1311_);
lean_dec_ref(v_connection_1311_);
v_r_1313_ = lean_box(v_res_1312_);
return v_r_1313_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_parse_spec__0(lean_object* v_as_1314_, size_t v_i_1315_, size_t v_stop_1316_){
_start:
{
uint8_t v___x_1317_; 
v___x_1317_ = lean_usize_dec_eq(v_i_1315_, v_stop_1316_);
if (v___x_1317_ == 0)
{
lean_object* v___x_1318_; uint8_t v___x_1319_; 
v___x_1318_ = lean_array_uget_borrowed(v_as_1314_, v_i_1315_);
lean_inc(v___x_1318_);
v___x_1319_ = l_Std_Http_Internal_isToken(v___x_1318_);
if (v___x_1319_ == 0)
{
uint8_t v___x_1320_; 
v___x_1320_ = 1;
return v___x_1320_;
}
else
{
size_t v___x_1321_; size_t v___x_1322_; 
v___x_1321_ = ((size_t)1ULL);
v___x_1322_ = lean_usize_add(v_i_1315_, v___x_1321_);
v_i_1315_ = v___x_1322_;
goto _start;
}
}
else
{
uint8_t v___x_1324_; 
v___x_1324_ = 0;
return v___x_1324_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_parse_spec__0___boxed(lean_object* v_as_1325_, lean_object* v_i_1326_, lean_object* v_stop_1327_){
_start:
{
size_t v_i_boxed_1328_; size_t v_stop_boxed_1329_; uint8_t v_res_1330_; lean_object* v_r_1331_; 
v_i_boxed_1328_ = lean_unbox_usize(v_i_1326_);
lean_dec(v_i_1326_);
v_stop_boxed_1329_ = lean_unbox_usize(v_stop_1327_);
lean_dec(v_stop_1327_);
v_res_1330_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_parse_spec__0(v_as_1325_, v_i_boxed_1328_, v_stop_boxed_1329_);
lean_dec_ref(v_as_1325_);
v_r_1331_ = lean_box(v_res_1330_);
return v_r_1331_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Connection_parse(lean_object* v_v_1332_){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = l___private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList(v_v_1332_);
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v___x_1334_; 
v___x_1334_ = lean_box(0);
return v___x_1334_;
}
else
{
lean_object* v_val_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1355_; 
v_val_1335_ = lean_ctor_get(v___x_1333_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1337_ = v___x_1333_;
v_isShared_1338_ = v_isSharedCheck_1355_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_val_1335_);
lean_dec(v___x_1333_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1355_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; uint8_t v___x_1341_; 
v___x_1339_ = lean_unsigned_to_nat(0u);
v___x_1340_ = lean_array_get_size(v_val_1335_);
v___x_1341_ = lean_nat_dec_lt(v___x_1339_, v___x_1340_);
if (v___x_1341_ == 0)
{
lean_object* v___x_1343_; 
if (v_isShared_1338_ == 0)
{
v___x_1343_ = v___x_1337_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_val_1335_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
return v___x_1343_;
}
}
else
{
if (v___x_1341_ == 0)
{
lean_object* v___x_1346_; 
if (v_isShared_1338_ == 0)
{
v___x_1346_ = v___x_1337_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v_val_1335_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
return v___x_1346_;
}
}
else
{
size_t v___x_1348_; size_t v___x_1349_; uint8_t v___x_1350_; 
v___x_1348_ = ((size_t)0ULL);
v___x_1349_ = lean_usize_of_nat(v___x_1340_);
v___x_1350_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_Header_Connection_parse_spec__0(v_val_1335_, v___x_1348_, v___x_1349_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1352_; 
if (v_isShared_1338_ == 0)
{
v___x_1352_ = v___x_1337_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v_val_1335_);
v___x_1352_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
return v___x_1352_;
}
}
else
{
lean_object* v___x_1354_; 
lean_del_object(v___x_1337_);
lean_dec(v_val_1335_);
v___x_1354_ = lean_box(0);
return v___x_1354_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Connection_serialize(lean_object* v_connection_1356_){
_start:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v_value_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1357_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__1));
v___x_1358_ = lean_array_to_list(v_connection_1356_);
v_value_1359_ = l_String_intercalate(v___x_1357_, v___x_1358_);
v___x_1360_ = l_Std_Http_Header_Name_connection;
v___x_1361_ = l_Std_Http_Header_Value_ofString_x21(v_value_1359_);
v___x_1362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1360_);
lean_ctor_set(v___x_1362_, 1, v___x_1361_);
return v___x_1362_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprHost_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; 
v___x_1378_ = lean_unsigned_to_nat(8u);
v___x_1379_ = lean_nat_to_int(v___x_1378_);
return v___x_1379_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprHost_repr___redArg___closed__5(void){
_start:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1380_ = lean_unsigned_to_nat(2u);
v___x_1381_ = lean_nat_to_int(v___x_1380_);
return v___x_1381_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprHost_repr___redArg(lean_object* v_x_1389_){
_start:
{
lean_object* v_host_1390_; lean_object* v_port_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1465_; 
v_host_1390_ = lean_ctor_get(v_x_1389_, 0);
v_port_1391_ = lean_ctor_get(v_x_1389_, 1);
v_isSharedCheck_1465_ = !lean_is_exclusive(v_x_1389_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1393_ = v_x_1389_;
v_isShared_1394_ = v_isSharedCheck_1465_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_port_1391_);
lean_inc(v_host_1390_);
lean_dec(v_x_1389_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1465_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v_ctr_1401_; lean_object* v_a_1402_; 
v___x_1395_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__5));
v___x_1396_ = ((lean_object*)(l_Std_Http_Header_instReprHost_repr___redArg___closed__3));
v___x_1397_ = lean_obj_once(&l_Std_Http_Header_instReprHost_repr___redArg___closed__4, &l_Std_Http_Header_instReprHost_repr___redArg___closed__4_once, _init_l_Std_Http_Header_instReprHost_repr___redArg___closed__4);
v___x_1398_ = lean_unsigned_to_nat(0u);
v___x_1399_ = lean_obj_once(&l_Std_Http_Header_instReprHost_repr___redArg___closed__5, &l_Std_Http_Header_instReprHost_repr___redArg___closed__5_once, _init_l_Std_Http_Header_instReprHost_repr___redArg___closed__5);
switch(lean_obj_tag(v_host_1390_))
{
case 0:
{
lean_object* v_name_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1444_; 
v_name_1435_ = lean_ctor_get(v_host_1390_, 0);
v_isSharedCheck_1444_ = !lean_is_exclusive(v_host_1390_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1437_ = v_host_1390_;
v_isShared_1438_ = v_isSharedCheck_1444_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_name_1435_);
lean_dec(v_host_1390_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1444_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1442_; 
v___x_1439_ = ((lean_object*)(l_Std_Http_Header_instReprHost_repr___redArg___closed__9));
v___x_1440_ = l_String_quote(v_name_1435_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set_tag(v___x_1437_, 3);
lean_ctor_set(v___x_1437_, 0, v___x_1440_);
v___x_1442_ = v___x_1437_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1440_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
v_ctr_1401_ = v___x_1439_;
v_a_1402_ = v___x_1442_;
goto v___jp_1400_;
}
}
}
case 1:
{
lean_object* v_ipv4_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1454_; 
v_ipv4_1445_ = lean_ctor_get(v_host_1390_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v_host_1390_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1447_ = v_host_1390_;
v_isShared_1448_ = v_isSharedCheck_1454_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_ipv4_1445_);
lean_dec(v_host_1390_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1454_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1452_; 
v___x_1449_ = ((lean_object*)(l_Std_Http_Header_instReprHost_repr___redArg___closed__10));
v___x_1450_ = lean_uv_ntop_v4(v_ipv4_1445_);
lean_dec_ref(v_ipv4_1445_);
if (v_isShared_1448_ == 0)
{
lean_ctor_set_tag(v___x_1447_, 3);
lean_ctor_set(v___x_1447_, 0, v___x_1450_);
v___x_1452_ = v___x_1447_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v___x_1450_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
v_ctr_1401_ = v___x_1449_;
v_a_1402_ = v___x_1452_;
goto v___jp_1400_;
}
}
}
default: 
{
lean_object* v_ipv6_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1464_; 
v_ipv6_1455_ = lean_ctor_get(v_host_1390_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v_host_1390_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1457_ = v_host_1390_;
v_isShared_1458_ = v_isSharedCheck_1464_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_ipv6_1455_);
lean_dec(v_host_1390_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1464_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1462_; 
v___x_1459_ = ((lean_object*)(l_Std_Http_Header_instReprHost_repr___redArg___closed__11));
v___x_1460_ = lean_uv_ntop_v6(v_ipv6_1455_);
lean_dec_ref(v_ipv6_1455_);
if (v_isShared_1458_ == 0)
{
lean_ctor_set_tag(v___x_1457_, 3);
lean_ctor_set(v___x_1457_, 0, v___x_1460_);
v___x_1462_ = v___x_1457_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v___x_1460_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
v_ctr_1401_ = v___x_1459_;
v_a_1402_ = v___x_1462_;
goto v___jp_1400_;
}
}
}
}
v___jp_1400_:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1408_; 
v___x_1403_ = ((lean_object*)(l_Std_Http_Header_instReprHost_repr___redArg___closed__6));
v___x_1404_ = lean_string_append(v___x_1403_, v_ctr_1401_);
v___x_1405_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1405_, 0, v___x_1404_);
v___x_1406_ = lean_box(1);
if (v_isShared_1394_ == 0)
{
lean_ctor_set_tag(v___x_1393_, 5);
lean_ctor_set(v___x_1393_, 1, v___x_1406_);
lean_ctor_set(v___x_1393_, 0, v___x_1405_);
v___x_1408_ = v___x_1393_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v___x_1405_);
lean_ctor_set(v_reuseFailAlloc_1434_, 1, v___x_1406_);
v___x_1408_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; uint8_t v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; 
v___x_1409_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1408_);
lean_ctor_set(v___x_1409_, 1, v_a_1402_);
v___x_1410_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1399_);
lean_ctor_set(v___x_1410_, 1, v___x_1409_);
v___x_1411_ = 0;
v___x_1412_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1412_, 0, v___x_1410_);
lean_ctor_set_uint8(v___x_1412_, sizeof(void*)*1, v___x_1411_);
v___x_1413_ = l_Repr_addAppParen(v___x_1412_, v___x_1398_);
v___x_1414_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1397_);
lean_ctor_set(v___x_1414_, 1, v___x_1413_);
v___x_1415_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1415_, 0, v___x_1414_);
lean_ctor_set_uint8(v___x_1415_, sizeof(void*)*1, v___x_1411_);
v___x_1416_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1396_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__2));
v___x_1418_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1418_, 0, v___x_1416_);
lean_ctor_set(v___x_1418_, 1, v___x_1417_);
v___x_1419_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1418_);
lean_ctor_set(v___x_1419_, 1, v___x_1406_);
v___x_1420_ = ((lean_object*)(l_Std_Http_Header_instReprHost_repr___redArg___closed__8));
v___x_1421_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1419_);
lean_ctor_set(v___x_1421_, 1, v___x_1420_);
v___x_1422_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1421_);
lean_ctor_set(v___x_1422_, 1, v___x_1395_);
v___x_1423_ = l_Std_Http_URI_instReprPort_repr(v_port_1391_, v___x_1398_);
lean_dec(v_port_1391_);
v___x_1424_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1397_);
lean_ctor_set(v___x_1424_, 1, v___x_1423_);
v___x_1425_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1425_, 0, v___x_1424_);
lean_ctor_set_uint8(v___x_1425_, sizeof(void*)*1, v___x_1411_);
v___x_1426_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1422_);
lean_ctor_set(v___x_1426_, 1, v___x_1425_);
v___x_1427_ = lean_obj_once(&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10, &l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10_once, _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10);
v___x_1428_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__11));
v___x_1429_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1429_, 0, v___x_1428_);
lean_ctor_set(v___x_1429_, 1, v___x_1426_);
v___x_1430_ = ((lean_object*)(l_Std_Http_Header_instReprContentLength_repr___redArg___closed__12));
v___x_1431_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1429_);
lean_ctor_set(v___x_1431_, 1, v___x_1430_);
v___x_1432_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1432_, 0, v___x_1427_);
lean_ctor_set(v___x_1432_, 1, v___x_1431_);
v___x_1433_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1433_, 0, v___x_1432_);
lean_ctor_set_uint8(v___x_1433_, sizeof(void*)*1, v___x_1411_);
return v___x_1433_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprHost_repr(lean_object* v_x_1466_, lean_object* v_prec_1467_){
_start:
{
lean_object* v___x_1468_; 
v___x_1468_ = l_Std_Http_Header_instReprHost_repr___redArg(v_x_1466_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprHost_repr___boxed(lean_object* v_x_1469_, lean_object* v_prec_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_Std_Http_Header_instReprHost_repr(v_x_1469_, v_prec_1470_);
lean_dec(v_prec_1470_);
return v_res_1471_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqHost_beq(lean_object* v_x_1474_, lean_object* v_x_1475_){
_start:
{
lean_object* v_host_1476_; lean_object* v_port_1477_; lean_object* v_host_1478_; lean_object* v_port_1479_; uint8_t v___x_1480_; 
v_host_1476_ = lean_ctor_get(v_x_1474_, 0);
v_port_1477_ = lean_ctor_get(v_x_1474_, 1);
v_host_1478_ = lean_ctor_get(v_x_1475_, 0);
v_port_1479_ = lean_ctor_get(v_x_1475_, 1);
v___x_1480_ = l_Std_Http_URI_instBEqHost_beq(v_host_1476_, v_host_1478_);
if (v___x_1480_ == 0)
{
return v___x_1480_;
}
else
{
uint8_t v___x_1481_; 
v___x_1481_ = l_Std_Http_URI_instDecidableEqPort_decEq(v_port_1477_, v_port_1479_);
return v___x_1481_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqHost_beq___boxed(lean_object* v_x_1482_, lean_object* v_x_1483_){
_start:
{
uint8_t v_res_1484_; lean_object* v_r_1485_; 
v_res_1484_ = l_Std_Http_Header_instBEqHost_beq(v_x_1482_, v_x_1483_);
lean_dec_ref(v_x_1483_);
lean_dec_ref(v_x_1482_);
v_r_1485_ = lean_box(v_res_1484_);
return v_r_1485_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_parse___lam__0(lean_object* v___x_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v___x_1493_; 
v___x_1493_ = l_Std_Http_URI_Parser_parseHostHeader(v___x_1491_, v___y_1492_);
if (lean_obj_tag(v___x_1493_) == 0)
{
lean_object* v_pos_1494_; lean_object* v_array_1495_; lean_object* v_idx_1496_; lean_object* v___x_1497_; uint8_t v___x_1498_; 
v_pos_1494_ = lean_ctor_get(v___x_1493_, 0);
v_array_1495_ = lean_ctor_get(v_pos_1494_, 0);
v_idx_1496_ = lean_ctor_get(v_pos_1494_, 1);
v___x_1497_ = lean_byte_array_size(v_array_1495_);
v___x_1498_ = lean_nat_dec_lt(v_idx_1496_, v___x_1497_);
if (v___x_1498_ == 0)
{
return v___x_1493_;
}
else
{
lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1506_; 
lean_inc(v_pos_1494_);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1493_);
if (v_isSharedCheck_1506_ == 0)
{
lean_object* v_unused_1507_; lean_object* v_unused_1508_; 
v_unused_1507_ = lean_ctor_get(v___x_1493_, 1);
lean_dec(v_unused_1507_);
v_unused_1508_ = lean_ctor_get(v___x_1493_, 0);
lean_dec(v_unused_1508_);
v___x_1500_ = v___x_1493_;
v_isShared_1501_ = v_isSharedCheck_1506_;
goto v_resetjp_1499_;
}
else
{
lean_dec(v___x_1493_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1506_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1502_; lean_object* v___x_1504_; 
v___x_1502_ = ((lean_object*)(l_Std_Http_Header_Host_parse___lam__0___closed__1));
if (v_isShared_1501_ == 0)
{
lean_ctor_set_tag(v___x_1500_, 1);
lean_ctor_set(v___x_1500_, 1, v___x_1502_);
v___x_1504_ = v___x_1500_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_pos_1494_);
lean_ctor_set(v_reuseFailAlloc_1505_, 1, v___x_1502_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
}
else
{
return v___x_1493_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_parse___lam__0___boxed(lean_object* v___x_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l_Std_Http_Header_Host_parse___lam__0(v___x_1509_, v___y_1510_);
lean_dec_ref(v___x_1509_);
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_parse(lean_object* v_v_1522_){
_start:
{
lean_object* v___f_1523_; lean_object* v___x_1524_; lean_object* v_parsed_1525_; 
v___f_1523_ = ((lean_object*)(l_Std_Http_Header_Host_parse___closed__1));
v___x_1524_ = lean_string_to_utf8(v_v_1522_);
v_parsed_1525_ = l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(v___f_1523_, v___x_1524_);
if (lean_obj_tag(v_parsed_1525_) == 0)
{
lean_object* v___x_1526_; 
lean_dec_ref_known(v_parsed_1525_, 1);
v___x_1526_ = lean_box(0);
return v___x_1526_;
}
else
{
lean_object* v_a_1527_; lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1543_; 
v_a_1527_ = lean_ctor_get(v_parsed_1525_, 0);
v_isSharedCheck_1543_ = !lean_is_exclusive(v_parsed_1525_);
if (v_isSharedCheck_1543_ == 0)
{
v___x_1529_ = v_parsed_1525_;
v_isShared_1530_ = v_isSharedCheck_1543_;
goto v_resetjp_1528_;
}
else
{
lean_inc(v_a_1527_);
lean_dec(v_parsed_1525_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1543_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
lean_object* v_fst_1531_; lean_object* v_snd_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1542_; 
v_fst_1531_ = lean_ctor_get(v_a_1527_, 0);
v_snd_1532_ = lean_ctor_get(v_a_1527_, 1);
v_isSharedCheck_1542_ = !lean_is_exclusive(v_a_1527_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1534_ = v_a_1527_;
v_isShared_1535_ = v_isSharedCheck_1542_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_snd_1532_);
lean_inc(v_fst_1531_);
lean_dec(v_a_1527_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1542_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_fst_1531_);
lean_ctor_set(v_reuseFailAlloc_1541_, 1, v_snd_1532_);
v___x_1537_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
lean_object* v___x_1539_; 
if (v_isShared_1530_ == 0)
{
lean_ctor_set(v___x_1529_, 0, v___x_1537_);
v___x_1539_ = v___x_1529_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v___x_1537_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Host_serialize(lean_object* v_host_1546_){
_start:
{
lean_object* v___y_1548_; lean_object* v___y_1552_; lean_object* v_port_1556_; 
v_port_1556_ = lean_ctor_get(v_host_1546_, 1);
switch(lean_obj_tag(v_port_1556_))
{
case 0:
{
lean_object* v_host_1557_; 
v_host_1557_ = lean_ctor_get(v_host_1546_, 0);
lean_inc_ref(v_host_1557_);
lean_dec_ref(v_host_1546_);
switch(lean_obj_tag(v_host_1557_))
{
case 0:
{
lean_object* v_name_1558_; lean_object* v___x_1559_; 
v_name_1558_ = lean_ctor_get(v_host_1557_, 0);
lean_inc_ref(v_name_1558_);
lean_dec_ref_known(v_host_1557_, 1);
v___x_1559_ = l_Std_Http_Header_Value_ofString_x21(v_name_1558_);
v___y_1548_ = v___x_1559_;
goto v___jp_1547_;
}
case 1:
{
lean_object* v_ipv4_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
v_ipv4_1560_ = lean_ctor_get(v_host_1557_, 0);
lean_inc_ref(v_ipv4_1560_);
lean_dec_ref_known(v_host_1557_, 1);
v___x_1561_ = lean_uv_ntop_v4(v_ipv4_1560_);
lean_dec_ref(v_ipv4_1560_);
v___x_1562_ = l_Std_Http_Header_Value_ofString_x21(v___x_1561_);
v___y_1548_ = v___x_1562_;
goto v___jp_1547_;
}
default: 
{
lean_object* v_ipv6_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; 
v_ipv6_1563_ = lean_ctor_get(v_host_1557_, 0);
lean_inc_ref(v_ipv6_1563_);
lean_dec_ref_known(v_host_1557_, 1);
v___x_1564_ = ((lean_object*)(l_Std_Http_Header_Host_serialize___closed__1));
v___x_1565_ = lean_uv_ntop_v6(v_ipv6_1563_);
lean_dec_ref(v_ipv6_1563_);
v___x_1566_ = lean_string_append(v___x_1564_, v___x_1565_);
lean_dec_ref(v___x_1565_);
v___x_1567_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__4));
v___x_1568_ = lean_string_append(v___x_1566_, v___x_1567_);
v___x_1569_ = l_Std_Http_Header_Value_ofString_x21(v___x_1568_);
v___y_1548_ = v___x_1569_;
goto v___jp_1547_;
}
}
}
case 1:
{
lean_object* v_host_1570_; 
v_host_1570_ = lean_ctor_get(v_host_1546_, 0);
lean_inc_ref(v_host_1570_);
lean_dec_ref(v_host_1546_);
switch(lean_obj_tag(v_host_1570_))
{
case 0:
{
lean_object* v_name_1571_; 
v_name_1571_ = lean_ctor_get(v_host_1570_, 0);
lean_inc_ref(v_name_1571_);
lean_dec_ref_known(v_host_1570_, 1);
v___y_1552_ = v_name_1571_;
goto v___jp_1551_;
}
case 1:
{
lean_object* v_ipv4_1572_; lean_object* v___x_1573_; 
v_ipv4_1572_ = lean_ctor_get(v_host_1570_, 0);
lean_inc_ref(v_ipv4_1572_);
lean_dec_ref_known(v_host_1570_, 1);
v___x_1573_ = lean_uv_ntop_v4(v_ipv4_1572_);
lean_dec_ref(v_ipv4_1572_);
v___y_1552_ = v___x_1573_;
goto v___jp_1551_;
}
default: 
{
lean_object* v_ipv6_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; 
v_ipv6_1574_ = lean_ctor_get(v_host_1570_, 0);
lean_inc_ref(v_ipv6_1574_);
lean_dec_ref_known(v_host_1570_, 1);
v___x_1575_ = ((lean_object*)(l_Std_Http_Header_Host_serialize___closed__1));
v___x_1576_ = lean_uv_ntop_v6(v_ipv6_1574_);
lean_dec_ref(v_ipv6_1574_);
v___x_1577_ = lean_string_append(v___x_1575_, v___x_1576_);
lean_dec_ref(v___x_1576_);
v___x_1578_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__4));
v___x_1579_ = lean_string_append(v___x_1577_, v___x_1578_);
v___y_1552_ = v___x_1579_;
goto v___jp_1551_;
}
}
}
default: 
{
lean_object* v_host_1580_; uint16_t v_port_1581_; lean_object* v___y_1583_; 
lean_inc_ref(v_port_1556_);
v_host_1580_ = lean_ctor_get(v_host_1546_, 0);
lean_inc_ref(v_host_1580_);
lean_dec_ref(v_host_1546_);
v_port_1581_ = lean_ctor_get_uint16(v_port_1556_, 0);
lean_dec_ref_known(v_port_1556_, 0);
switch(lean_obj_tag(v_host_1580_))
{
case 0:
{
lean_object* v_name_1590_; 
v_name_1590_ = lean_ctor_get(v_host_1580_, 0);
lean_inc_ref(v_name_1590_);
lean_dec_ref_known(v_host_1580_, 1);
v___y_1583_ = v_name_1590_;
goto v___jp_1582_;
}
case 1:
{
lean_object* v_ipv4_1591_; lean_object* v___x_1592_; 
v_ipv4_1591_ = lean_ctor_get(v_host_1580_, 0);
lean_inc_ref(v_ipv4_1591_);
lean_dec_ref_known(v_host_1580_, 1);
v___x_1592_ = lean_uv_ntop_v4(v_ipv4_1591_);
lean_dec_ref(v_ipv4_1591_);
v___y_1583_ = v___x_1592_;
goto v___jp_1582_;
}
default: 
{
lean_object* v_ipv6_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v_ipv6_1593_ = lean_ctor_get(v_host_1580_, 0);
lean_inc_ref(v_ipv6_1593_);
lean_dec_ref_known(v_host_1580_, 1);
v___x_1594_ = ((lean_object*)(l_Std_Http_Header_Host_serialize___closed__1));
v___x_1595_ = lean_uv_ntop_v6(v_ipv6_1593_);
lean_dec_ref(v_ipv6_1593_);
v___x_1596_ = lean_string_append(v___x_1594_, v___x_1595_);
lean_dec_ref(v___x_1595_);
v___x_1597_ = ((lean_object*)(l_Array_repr___at___00Std_Http_Header_instReprTransferEncoding_repr_spec__0___closed__4));
v___x_1598_ = lean_string_append(v___x_1596_, v___x_1597_);
v___y_1583_ = v___x_1598_;
goto v___jp_1582_;
}
}
v___jp_1582_:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1584_ = ((lean_object*)(l_Std_Http_Header_Host_serialize___closed__0));
v___x_1585_ = lean_string_append(v___y_1583_, v___x_1584_);
v___x_1586_ = lean_uint16_to_nat(v_port_1581_);
v___x_1587_ = l_Nat_reprFast(v___x_1586_);
v___x_1588_ = lean_string_append(v___x_1585_, v___x_1587_);
lean_dec_ref(v___x_1587_);
v___x_1589_ = l_Std_Http_Header_Value_ofString_x21(v___x_1588_);
v___y_1548_ = v___x_1589_;
goto v___jp_1547_;
}
}
}
v___jp_1547_:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1549_ = ((lean_object*)(l_Std_Http_Header_instReprHost_repr___redArg___closed__0));
v___x_1550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1549_);
lean_ctor_set(v___x_1550_, 1, v___y_1548_);
return v___x_1550_;
}
v___jp_1551_:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1553_ = ((lean_object*)(l_Std_Http_Header_Host_serialize___closed__0));
v___x_1554_ = lean_string_append(v___y_1552_, v___x_1553_);
v___x_1555_ = l_Std_Http_Header_Value_ofString_x21(v___x_1554_);
v___y_1548_ = v___x_1555_;
goto v___jp_1547_;
}
}
}
static lean_object* _init_l_Std_Http_Header_instReprExpect_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1611_ = ((lean_object*)(l_Std_Http_Header_instReprExpect_repr___redArg___closed__1));
v___x_1612_ = lean_obj_once(&l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10, &l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10_once, _init_l_Std_Http_Header_instReprContentLength_repr___redArg___closed__10);
v___x_1613_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1612_);
lean_ctor_set(v___x_1613_, 1, v___x_1611_);
return v___x_1613_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprExpect_repr___redArg___closed__3(void){
_start:
{
uint8_t v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; 
v___x_1614_ = 0;
v___x_1615_ = lean_obj_once(&l_Std_Http_Header_instReprExpect_repr___redArg___closed__2, &l_Std_Http_Header_instReprExpect_repr___redArg___closed__2_once, _init_l_Std_Http_Header_instReprExpect_repr___redArg___closed__2);
v___x_1616_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1616_, 0, v___x_1615_);
lean_ctor_set_uint8(v___x_1616_, sizeof(void*)*1, v___x_1614_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprExpect_repr___redArg(){
_start:
{
lean_object* v___x_1618_; 
v___x_1618_ = lean_obj_once(&l_Std_Http_Header_instReprExpect_repr___redArg___closed__3, &l_Std_Http_Header_instReprExpect_repr___redArg___closed__3_once, _init_l_Std_Http_Header_instReprExpect_repr___redArg___closed__3);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprExpect_repr___redArg___boxed(lean_object* v___dummy_1619_){
_start:
{
lean_object* v_res_1620_; 
v_res_1620_ = l_Std_Http_Header_instReprExpect_repr___redArg();
return v_res_1620_;
}
}
static lean_object* _init_l_Std_Http_Header_instReprExpect_repr___closed__0(void){
_start:
{
lean_object* v___x_1621_; 
v___x_1621_ = l_Std_Http_Header_instReprExpect_repr___redArg();
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprExpect_repr(lean_object* v_x_1622_, lean_object* v_prec_1623_){
_start:
{
lean_object* v___x_1624_; 
v___x_1624_ = lean_obj_once(&l_Std_Http_Header_instReprExpect_repr___closed__0, &l_Std_Http_Header_instReprExpect_repr___closed__0_once, _init_l_Std_Http_Header_instReprExpect_repr___closed__0);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instReprExpect_repr___boxed(lean_object* v_x_1625_, lean_object* v_prec_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Std_Http_Header_instReprExpect_repr(v_x_1625_, v_prec_1626_);
lean_dec(v_prec_1626_);
return v_res_1627_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqExpect_beq___redArg(){
_start:
{
uint8_t v___x_1631_; 
v___x_1631_ = 1;
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqExpect_beq___redArg___boxed(lean_object* v___dummy_1632_){
_start:
{
uint8_t v_res_1633_; lean_object* v_r_1634_; 
v_res_1633_ = l_Std_Http_Header_instBEqExpect_beq___redArg();
v_r_1634_ = lean_box(v_res_1633_);
return v_r_1634_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Header_instBEqExpect_beq(lean_object* v_x_1635_, lean_object* v_y_1636_){
_start:
{
uint8_t v___x_1637_; 
v___x_1637_ = 1;
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_instBEqExpect_beq___boxed(lean_object* v_x_1638_, lean_object* v_y_1639_){
_start:
{
uint8_t v_res_1640_; lean_object* v_r_1641_; 
v_res_1640_ = l_Std_Http_Header_instBEqExpect_beq(v_x_1638_, v_y_1639_);
v_r_1641_ = lean_box(v_res_1640_);
return v_r_1641_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Expect_parse(lean_object* v_v_1647_){
_start:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v_normalized_1653_; lean_object* v___x_1654_; uint8_t v___x_1655_; 
v___x_1648_ = lean_unsigned_to_nat(0u);
v___x_1649_ = lean_string_utf8_byte_size(v_v_1647_);
v___x_1650_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1650_, 0, v_v_1647_);
lean_ctor_set(v___x_1650_, 1, v___x_1648_);
lean_ctor_set(v___x_1650_, 2, v___x_1649_);
v___x_1651_ = l_String_Slice_trimAscii(v___x_1650_);
v___x_1652_ = l_String_Slice_toString(v___x_1651_);
lean_dec_ref(v___x_1651_);
v_normalized_1653_ = l_String_mapAux___at___00__private_Std_Http_Data_Headers_Basic_0__Std_Http_Header_parseTokenList_spec__0(v___x_1652_, v___x_1648_);
v___x_1654_ = ((lean_object*)(l_Std_Http_Header_Expect_parse___closed__0));
v___x_1655_ = lean_string_dec_eq(v_normalized_1653_, v___x_1654_);
lean_dec_ref(v_normalized_1653_);
if (v___x_1655_ == 0)
{
lean_object* v___x_1656_; 
v___x_1656_ = lean_box(0);
return v___x_1656_;
}
else
{
lean_object* v___x_1657_; 
v___x_1657_ = ((lean_object*)(l_Std_Http_Header_Expect_parse___closed__1));
return v___x_1657_;
}
}
}
static lean_object* _init_l_Std_Http_Header_Expect_serialize___redArg___closed__0(void){
_start:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1658_ = ((lean_object*)(l_Std_Http_Header_Expect_parse___closed__0));
v___x_1659_ = l_Std_Http_Header_Value_ofString_x21(v___x_1658_);
return v___x_1659_;
}
}
static lean_object* _init_l_Std_Http_Header_Expect_serialize___redArg___closed__1(void){
_start:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1660_ = lean_obj_once(&l_Std_Http_Header_Expect_serialize___redArg___closed__0, &l_Std_Http_Header_Expect_serialize___redArg___closed__0_once, _init_l_Std_Http_Header_Expect_serialize___redArg___closed__0);
v___x_1661_ = l_Std_Http_Header_Name_expect;
v___x_1662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1661_);
lean_ctor_set(v___x_1662_, 1, v___x_1660_);
return v___x_1662_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Expect_serialize___redArg(){
_start:
{
lean_object* v___x_1664_; 
v___x_1664_ = lean_obj_once(&l_Std_Http_Header_Expect_serialize___redArg___closed__1, &l_Std_Http_Header_Expect_serialize___redArg___closed__1_once, _init_l_Std_Http_Header_Expect_serialize___redArg___closed__1);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Expect_serialize___redArg___boxed(lean_object* v___dummy_1665_){
_start:
{
lean_object* v_res_1666_; 
v_res_1666_ = l_Std_Http_Header_Expect_serialize___redArg();
return v_res_1666_;
}
}
static lean_object* _init_l_Std_Http_Header_Expect_serialize___closed__0(void){
_start:
{
lean_object* v___x_1667_; 
v___x_1667_ = l_Std_Http_Header_Expect_serialize___redArg();
return v___x_1667_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Header_Expect_serialize(lean_object* v_x_1668_){
_start:
{
lean_object* v___x_1669_; 
v___x_1669_ = lean_obj_once(&l_Std_Http_Header_Expect_serialize___closed__0, &l_Std_Http_Header_Expect_serialize___closed__0_once, _init_l_Std_Http_Header_Expect_serialize___closed__0);
return v___x_1669_;
}
}
lean_object* runtime_initialize_Std_Http_Data_URI(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Headers_Name(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_Headers_Value(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Parsec_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_Headers_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Http_Data_URI(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Headers_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Headers_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_Headers_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Http_Data_URI(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Headers_Name(uint8_t builtin);
lean_object* initialize_Std_Http_Data_Headers_Value(uint8_t builtin);
lean_object* initialize_Std_Internal_Parsec_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_Headers_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Http_Data_URI(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Headers_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_Headers_Value(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_Headers_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_Headers_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_Headers_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
