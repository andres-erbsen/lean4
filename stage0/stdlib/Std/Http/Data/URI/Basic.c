// Lean compiler output
// Module: Std.Http.Data.URI.Basic
// Imports: import Init.Data.ToString public import Std.Net public import Std.Http.Internal public import Std.Http.Data.URI.Encoding public import Init.Data.String.Search public import Init.Data.String.Length
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint8_t l_Std_Http_Internal_instDecidableIsLowerCase(lean_object*);
lean_object* l_String_toListImpl(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
uint8_t lean_sarray_dec_eq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Std_Net_instDecidableEqIPv4Addr_decEq(lean_object*, lean_object*);
uint8_t l_Std_Net_instDecidableEqIPv6Addr_decEq(lean_object*, lean_object*);
uint8_t lean_uint16_dec_eq(uint16_t, uint16_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_uv_ntop_v4(lean_object*);
lean_object* lean_uv_ntop_v6(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Std_Http_URI_EncodedSegment_encode(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_ByteArray_empty;
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Std_Http_URI_EncodedQueryParam_encode(lean_object*);
lean_object* lean_byte_array_data(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_slice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* l_Std_Http_URI_EncodedFragment_encode(lean_object*);
lean_object* l_Std_Http_URI_EncodedQueryParam_decode(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uv_pton_v4(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_List_takeWhile___redArg(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Http_URI_EncodedSegment_decode(lean_object*);
extern lean_object* l_Std_Net_instInhabitedIPv4Addr_default;
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_instBEqOption_beq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Option_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instReprTupleOfRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_repr___redArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Std_Http_URI_EncodedUserInfo_decode(lean_object*);
lean_object* l_Std_Http_URI_EncodedUserInfo_encode(lean_object*);
lean_object* l_ByteArray_decEq___boxed(lean_object*, lean_object*);
lean_object* l_List_eraseDupsBy___redArg(lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
static const lean_string_object l_Std_Http_URI_instInhabitedScheme___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "http"};
static const lean_object* l_Std_Http_URI_instInhabitedScheme___closed__0 = (const lean_object*)&l_Std_Http_URI_instInhabitedScheme___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedScheme = (const lean_object*)&l_Std_Http_URI_instInhabitedScheme___closed__0_value;
LEAN_EXPORT lean_object* l_String_mapAux___at___00Std_Http_URI_Scheme_ofString_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_Scheme_ofString_x21_spec__0(lean_object*);
static const lean_string_object l_Std_Http_URI_Scheme_ofString_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Std.Http.Data.URI.Basic"};
static const lean_object* l_Std_Http_URI_Scheme_ofString_x21___closed__0 = (const lean_object*)&l_Std_Http_URI_Scheme_ofString_x21___closed__0_value;
static const lean_string_object l_Std_Http_URI_Scheme_ofString_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Std.Http.URI.Scheme.ofString!"};
static const lean_object* l_Std_Http_URI_Scheme_ofString_x21___closed__1 = (const lean_object*)&l_Std_Http_URI_Scheme_ofString_x21___closed__1_value;
static const lean_string_object l_Std_Http_URI_Scheme_ofString_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid URI scheme: "};
static const lean_object* l_Std_Http_URI_Scheme_ofString_x21___closed__2 = (const lean_object*)&l_Std_Http_URI_Scheme_ofString_x21___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofString_x21(lean_object*);
static const lean_string_object l_Std_Http_URI_Scheme_defaultPort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "https"};
static const lean_object* l_Std_Http_URI_Scheme_defaultPort___closed__0 = (const lean_object*)&l_Std_Http_URI_Scheme_defaultPort___closed__0_value;
LEAN_EXPORT uint16_t l_Std_Http_URI_Scheme_defaultPort(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_defaultPort___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofPort(uint16_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofPort___boxed(lean_object*);
static lean_once_cell_t l_Std_Http_URI_instInhabitedUserInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instInhabitedUserInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedUserInfo_default;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedUserInfo;
static const lean_string_object l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_URI_instReprUserInfo_repr_spec__1(lean_object*);
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "username"};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__3_value),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__6 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7;
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "password"};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__10 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__11 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__11_value;
static const lean_string_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__12 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__12_value;
static lean_once_cell_t l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13;
static lean_once_cell_t l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15_value;
static const lean_ctor_object l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__12_value)}};
static const lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprUserInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprUserInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprUserInfo___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprUserInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprUserInfo = (const lean_object*)&l_Std_Http_URI_instReprUserInfo___closed__0_value;
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqUserInfo_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqUserInfo_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqUserInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqUserInfo_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqUserInfo___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqUserInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqUserInfo = (const lean_object*)&l_Std_Http_URI_instBEqUserInfo___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_ofStrings(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_username_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_username_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_password_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_password_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_isValidDomainLabel(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_isValidDomainLabel___boxed(lean_object*);
static const lean_string_object l_String_dropSuffix_x3f___at___00Std_Http_URI_endsInNumber_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_String_dropSuffix_x3f___at___00Std_Http_URI_endsInNumber_spec__2___redArg___closed__0 = (const lean_object*)&l_String_dropSuffix_x3f___at___00Std_Http_URI_endsInNumber_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Std_Http_URI_endsInNumber_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Std_Http_URI_endsInNumber_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Std_Http_URI_endsInNumber_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_endsInNumber___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_endsInNumber___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_endsInNumber_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_endsInNumber_spec__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_endsInNumber_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_endsInNumber_spec__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_endsInNumber___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_endsInNumber___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_endsInNumber___closed__0 = (const lean_object*)&l_Std_Http_URI_endsInNumber___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_endsInNumber___boxed__const__1;
LEAN_EXPORT uint8_t l_Std_Http_URI_endsInNumber(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_endsInNumber___boxed(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_DomainName_ofString_x3f(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_name_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_name_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv4_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv4_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv6_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv6_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_URI_instInhabitedHost_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instInhabitedHost_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedHost_default;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedHost;
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqHost_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqHost_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqHost_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqHost___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqHost___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqHost = (const lean_object*)&l_Std_Http_URI_instBEqHost___closed__0_value;
static const lean_string_object l_Std_Http_URI_instReprHost___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Std.Http.URI.Host."};
static const lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprHost___lam__0___closed__0_value;
static const lean_string_object l_Std_Http_URI_instReprHost___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprHost___lam__0___closed__1_value;
static const lean_string_object l_Std_Http_URI_instReprHost___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ipv4"};
static const lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprHost___lam__0___closed__2_value;
static const lean_string_object l_Std_Http_URI_instReprHost___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ipv6"};
static const lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprHost___lam__0___closed__3_value;
static lean_once_cell_t l_Std_Http_URI_instReprHost___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__4;
static lean_once_cell_t l_Std_Http_URI_instReprHost___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprHost___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprHost___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprHost___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprHost___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprHost___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprHost___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprHost = (const lean_object*)&l_Std_Http_URI_instReprHost___closed__0_value;
static const lean_string_object l_Std_Http_URI_instToStringHost___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Std_Http_URI_instToStringHost___lam__0___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringHost___lam__0___closed__0_value;
static const lean_string_object l_Std_Http_URI_instToStringHost___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Std_Http_URI_instToStringHost___lam__0___closed__1 = (const lean_object*)&l_Std_Http_URI_instToStringHost___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringHost___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringHost___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_instToStringHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instToStringHost___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringHost___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringHost___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instToStringHost = (const lean_object*)&l_Std_Http_URI_instToStringHost___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedPort_default;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedPort;
static const lean_string_object l_Std_Http_URI_instReprPort_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Std.Http.URI.Port.empty"};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instReprPort_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__0_value)}};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__1_value;
static const lean_string_object l_Std_Http_URI_instReprPort_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Std.Http.URI.Port.omitted"};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_instReprPort_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__2_value)}};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__3_value;
static const lean_string_object l_Std_Http_URI_instReprPort_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Std.Http.URI.Port.value"};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__4 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_instReprPort_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__4_value)}};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__5 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__5_value;
static const lean_ctor_object l_Std_Http_URI_instReprPort_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_URI_instReprPort_repr___closed__6 = (const lean_object*)&l_Std_Http_URI_instReprPort_repr___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPort_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPort_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprPort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprPort_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprPort___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprPort___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprPort = (const lean_object*)&l_Std_Http_URI_instReprPort___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableEqPort_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableEqPort_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableEqPort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableEqPort___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_URI_instInhabitedAuthority_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instInhabitedAuthority_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedAuthority_default;
LEAN_EXPORT lean_object* l_Std_Http_URI_instInhabitedAuthority;
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "userInfo"};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__2_value),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "host"};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5_value;
static lean_once_cell_t l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6;
static const lean_string_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__7 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__7_value;
static const lean_ctor_object l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__7_value)}};
static const lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprAuthority___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprAuthority_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprAuthority___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprAuthority___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprAuthority = (const lean_object*)&l_Std_Http_URI_instReprAuthority___closed__0_value;
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqAuthority_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqAuthority_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqAuthority___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqAuthority_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqAuthority___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqAuthority___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqAuthority = (const lean_object*)&l_Std_Http_URI_instBEqAuthority___closed__0_value;
static const lean_string_object l_Std_Http_URI_instToStringAuthority___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Http_URI_instToStringAuthority___lam__0___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringAuthority___lam__0___closed__0_value;
static const lean_string_object l_Std_Http_URI_instToStringAuthority___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Http_URI_instToStringAuthority___lam__0___closed__1 = (const lean_object*)&l_Std_Http_URI_instToStringAuthority___lam__0___closed__1_value;
static const lean_string_object l_Std_Http_URI_instToStringAuthority___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_Std_Http_URI_instToStringAuthority___lam__0___closed__2 = (const lean_object*)&l_Std_Http_URI_instToStringAuthority___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringAuthority___lam__0(lean_object*);
static const lean_closure_object l_Std_Http_URI_instToStringAuthority___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instToStringAuthority___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringAuthority___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringAuthority___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instToStringAuthority = (const lean_object*)&l_Std_Http_URI_instToStringAuthority___closed__0_value;
static const lean_array_object l_Std_Http_URI_instInhabitedPath_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_instInhabitedPath_default___closed__0 = (const lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instInhabitedPath_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Http_URI_instInhabitedPath_default___closed__1 = (const lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedPath_default = (const lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedPath = (const lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1_value;
static lean_once_cell_t l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2;
static lean_once_cell_t l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3;
static const lean_ctor_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringHost___lam__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5_value;
static const lean_string_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__6_value;
static const lean_ctor_object l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__6_value)}};
static const lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Http_URI_instReprPath_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "segments"};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instReprPath_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_URI_instReprPath_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_instReprPath_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__2_value),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Http_URI_instReprPath_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "absolute"};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__4 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_instReprPath_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Http_URI_instReprPath_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_URI_instReprPath_repr___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprPath_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprPath___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprPath___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprPath = (const lean_object*)&l_Std_Http_URI_instReprPath___closed__0_value;
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqPath_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqPath_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqPath_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqPath___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqPath___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqPath = (const lean_object*)&l_Std_Http_URI_instBEqPath___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringPath___lam__0(lean_object*);
static const lean_string_object l_Std_Http_URI_instToStringPath___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__0_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__1 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__1_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__2 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__2_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__3 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__3_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__4 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__4_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__5 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__5_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__6 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__6_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__7 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__7_value;
static const lean_ctor_object l_Std_Http_URI_instToStringPath___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__1_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__2_value)}};
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__8 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__8_value;
static const lean_ctor_object l_Std_Http_URI_instToStringPath___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__8_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__3_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__4_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__5_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__6_value)}};
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__9 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__9_value;
static const lean_ctor_object l_Std_Http_URI_instToStringPath___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__9_value),((lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__7_value)}};
static const lean_object* l_Std_Http_URI_instToStringPath___lam__1___closed__10 = (const lean_object*)&l_Std_Http_URI_instToStringPath___lam__1___closed__10_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringPath___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instToStringPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instToStringPath___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instToStringPath___closed__0 = (const lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value;
static const lean_closure_object l_Std_Http_URI_instToStringPath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instToStringPath___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringPath___closed__0_value)} };
static const lean_object* l_Std_Http_URI_instToStringPath___closed__1 = (const lean_object*)&l_Std_Http_URI_instToStringPath___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instToStringPath = (const lean_object*)&l_Std_Http_URI_instToStringPath___closed__1_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_Path_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_isEmpty___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Std_Http_URI_Path_render_spec__0_spec__0(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Std_Http_URI_Path_render_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Std_Http_URI_Path_render_spec__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_contains___at___00Std_Http_URI_Path_render_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_render_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_render_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Path_render___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "./"};
static const lean_object* l_Std_Http_URI_Path_render___closed__0 = (const lean_object*)&l_Std_Http_URI_Path_render___closed__0_value;
static const lean_string_object l_Std_Http_URI_Path_render___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "/."};
static const lean_object* l_Std_Http_URI_Path_render___closed__1 = (const lean_object*)&l_Std_Http_URI_Path_render___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_render(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_render___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_parent(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_join(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_join___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_appendEncoded(lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ".."};
static const lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_normalize(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_toDecodedSegments(lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__0_value;
static const lean_closure_object l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Option_repr___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__0_value)} };
static const lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__1_value;
static const lean_closure_object l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprTupleOfRepr___redArg___lam__0, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__1_value)} };
static const lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__2 = (const lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__2_value;
static const lean_closure_object l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Prod_repr___boxed, .m_arity = 6, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__0_value),((lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__2_value)} };
static const lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__3 = (const lean_object*)&l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__0_value;
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__4 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__4_value;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__1_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__5 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_URI_instReprQuery_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprQuery___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprQuery___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprQuery___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprQuery = (const lean_object*)&l_Std_Http_URI_instReprQuery___closed__0_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l_Std_Http_URI_instInhabitedQuery___aux__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_instInhabitedQuery___aux__1___closed__0 = (const lean_object*)&l_Std_Http_URI_instInhabitedQuery___aux__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedQuery___aux__1 = (const lean_object*)&l_Std_Http_URI_instInhabitedQuery___aux__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedQuery = (const lean_object*)&l_Std_Http_URI_instInhabitedQuery___aux__1___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___aux__1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___aux__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqQuery___aux__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ByteArray_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqQuery___aux__1___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqQuery___aux__1___closed__0_value;
static const lean_closure_object l_Std_Http_URI_instBEqQuery___aux__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqQuery___aux__1___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_instBEqQuery___aux__1___closed__0_value)} };
static const lean_object* l_Std_Http_URI_instBEqQuery___aux__1___closed__1 = (const lean_object*)&l_Std_Http_URI_instBEqQuery___aux__1___closed__1_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___aux__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_URI_instBEqQuery_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_URI_instBEqQuery_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqQuery___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqQuery___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqQuery___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqQuery = (const lean_object*)&l_Std_Http_URI_instBEqQuery___closed__0_value;
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_eraseDups___at___00Std_Http_URI_Query_names_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_names(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_values(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toArray(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Query_formatQueryParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l_Std_Http_URI_Query_formatQueryParam___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_formatQueryParam___closed__0_value;
static const lean_string_object l_Std_Http_URI_Query_formatQueryParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "%3D"};
static const lean_object* l_Std_Http_URI_Query_formatQueryParam___closed__1 = (const lean_object*)&l_Std_Http_URI_Query_formatQueryParam___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_formatQueryParam(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findEncoded_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findEncoded_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_find_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_find_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_find_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_find_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAllEncoded(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAllEncoded___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAll_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAll_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAll_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAll_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAll___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insertEncoded(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Std_Http_URI_Query_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_Query_empty___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_empty___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_empty = (const lean_object*)&l_Std_Http_URI_Query_empty___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_ofList(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_Query_containsEncoded(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_containsEncoded___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_contains_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_contains_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_Query_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_eraseEncoded(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_eraseEncoded___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_erase_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_erase_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_erase___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_URI_Query_get___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_instToStringAuthority___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_URI_Query_get___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_get___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_getD(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_getD___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_set___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Query_toRawString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "&"};
static const lean_object* l_Std_Http_URI_Query_toRawString___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_toRawString___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toRawString(lean_object*);
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_instEmptyCollection = (const lean_object*)&l_Std_Http_URI_Query_empty___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instSingletonProdString___lam__0(lean_object*);
static const lean_closure_object l_Std_Http_URI_Query_instSingletonProdString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_Query_instSingletonProdString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_Query_instSingletonProdString___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_instSingletonProdString___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_instSingletonProdString = (const lean_object*)&l_Std_Http_URI_Query_instSingletonProdString___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instInsertProdString___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_Query_instInsertProdString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_Query_instInsertProdString___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_Query_instInsertProdString___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_instInsertProdString___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_instInsertProdString = (const lean_object*)&l_Std_Http_URI_Query_instInsertProdString___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instToString___lam__0(lean_object*);
static const lean_string_object l_Std_Http_URI_Query_instToString___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Std_Http_URI_Query_instToString___lam__1___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_instToString___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instToString___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_Query_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_Query_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_Query_instToString___closed__0 = (const lean_object*)&l_Std_Http_URI_Query_instToString___closed__0_value;
static const lean_closure_object l_Std_Http_URI_Query_instToString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_Query_instToString___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_URI_Query_instToString___closed__0_value)} };
static const lean_object* l_Std_Http_URI_Query_instToString___closed__1 = (const lean_object*)&l_Std_Http_URI_Query_instToString___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Query_instToString = (const lean_object*)&l_Std_Http_URI_Query_instToString___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Http_URI_Query_formatOption_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_formatOption(lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_instReprURI_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scheme"};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__2 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__2_value),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__3 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__3_value;
static lean_once_cell_t l_Std_Http_instReprURI_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instReprURI_repr___redArg___closed__4;
static const lean_string_object l_Std_Http_instReprURI_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "authority"};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__5 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__6 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Http_instReprURI_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instReprURI_repr___redArg___closed__7;
static const lean_string_object l_Std_Http_instReprURI_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "path"};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__8 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__9 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Http_instReprURI_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "query"};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__10 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__11 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__11_value;
static lean_once_cell_t l_Std_Http_instReprURI_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_instReprURI_repr___redArg___closed__12;
static const lean_string_object l_Std_Http_instReprURI_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fragment"};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__13 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__13_value;
static const lean_ctor_object l_Std_Http_instReprURI_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__13_value)}};
static const lean_object* l_Std_Http_instReprURI_repr___redArg___closed__14 = (const lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__14_value;
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instReprURI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instReprURI_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instReprURI___closed__0 = (const lean_object*)&l_Std_Http_instReprURI___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instReprURI = (const lean_object*)&l_Std_Http_instReprURI___closed__0_value;
static const lean_ctor_object l_Std_Http_instInhabitedURI_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instInhabitedScheme___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_instInhabitedURI_default___closed__0 = (const lean_object*)&l_Std_Http_instInhabitedURI_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedURI_default = (const lean_object*)&l_Std_Http_instInhabitedURI_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedURI = (const lean_object*)&l_Std_Http_instInhabitedURI_default___closed__0_value;
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_instBEqURI_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instBEqURI_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instBEqURI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instBEqURI_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instBEqURI___closed__0 = (const lean_object*)&l_Std_Http_instBEqURI___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instBEqURI = (const lean_object*)&l_Std_Http_instBEqURI___closed__0_value;
static const lean_string_object l_Std_Http_instToStringURI___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Std_Http_instToStringURI___lam__0___closed__0 = (const lean_object*)&l_Std_Http_instToStringURI___lam__0___closed__0_value;
static const lean_string_object l_Std_Http_instToStringURI___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "//"};
static const lean_object* l_Std_Http_instToStringURI___lam__0___closed__1 = (const lean_object*)&l_Std_Http_instToStringURI___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_instToStringURI___lam__0(lean_object*);
static const lean_closure_object l_Std_Http_instToStringURI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instToStringURI___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instToStringURI___closed__0 = (const lean_object*)&l_Std_Http_instToStringURI___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instToStringURI = (const lean_object*)&l_Std_Http_instToStringURI___closed__0_value;
static const lean_array_object l_Std_Http_URI_instInhabitedBuilder_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_instInhabitedBuilder_default___closed__0 = (const lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instInhabitedBuilder_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__0_value),((lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_URI_instInhabitedBuilder_default___closed__1 = (const lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedBuilder_default = (const lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedBuilder = (const lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_Builder_empty = (const lean_object*)&l_Std_Http_URI_instInhabitedBuilder_default___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setScheme_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_Builder_setScheme_x21_spec__0(lean_object*);
static const lean_string_object l_Std_Http_URI_Builder_setScheme_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Std.Http.URI.Builder.setScheme!"};
static const lean_object* l_Std_Http_URI_Builder_setScheme_x21___closed__0 = (const lean_object*)&l_Std_Http_URI_Builder_setScheme_x21___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setScheme_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setUserInfo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHost_x3f(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Builder_setHost_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Std.Http.URI.Builder.setHost!"};
static const lean_object* l_Std_Http_URI_Builder_setHost_x21___closed__0 = (const lean_object*)&l_Std_Http_URI_Builder_setHost_x21___closed__0_value;
static const lean_string_object l_Std_Http_URI_Builder_setHost_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "invalid host: "};
static const lean_object* l_Std_Http_URI_Builder_setHost_x21___closed__1 = (const lean_object*)&l_Std_Http_URI_Builder_setHost_x21___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHost_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHostIPv4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHostIPv6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPort(lean_object*, uint16_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPort___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_appendPathSegment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_addQueryParam(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_addQueryFlag(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setQuery(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setFragment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_build(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_withScheme_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_withAuthority(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_withPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_withQuery(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_withFragment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_normalize(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprOrigin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprOrigin_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprOrigin___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprOrigin___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprOrigin = (const lean_object*)&l_Std_Http_URI_instReprOrigin___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqOrigin_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqOrigin_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqOrigin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqOrigin_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqOrigin___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqOrigin___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqOrigin = (const lean_object*)&l_Std_Http_URI_instBEqOrigin___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Origin_hostHeader(lean_object*);
static const lean_ctor_object l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_instReprURI_repr___redArg___closed__6_value)}};
static const lean_object* l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__0_value),((lean_object*)&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__1 = (const lean_object*)&l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instReprRelativeRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instReprRelativeRef_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instReprRelativeRef___closed__0 = (const lean_object*)&l_Std_Http_URI_instReprRelativeRef___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instReprRelativeRef = (const lean_object*)&l_Std_Http_URI_instReprRelativeRef___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_instInhabitedRelativeRef_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_URI_instInhabitedRelativeRef_default___closed__0 = (const lean_object*)&l_Std_Http_URI_instInhabitedRelativeRef_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedRelativeRef_default = (const lean_object*)&l_Std_Http_URI_instInhabitedRelativeRef_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instInhabitedRelativeRef = (const lean_object*)&l_Std_Http_URI_instInhabitedRelativeRef_default___closed__0_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqRelativeRef_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqRelativeRef_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instBEqRelativeRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instBEqRelativeRef_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instBEqRelativeRef___closed__0 = (const lean_object*)&l_Std_Http_URI_instBEqRelativeRef___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_URI_instBEqRelativeRef = (const lean_object*)&l_Std_Http_URI_instBEqRelativeRef___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_instToStringRelativeRef___lam__0(lean_object*);
static const lean_closure_object l_Std_Http_instToStringRelativeRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instToStringRelativeRef___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instToStringRelativeRef___closed__0 = (const lean_object*)&l_Std_Http_instToStringRelativeRef___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instToStringRelativeRef = (const lean_object*)&l_Std_Http_instToStringRelativeRef___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_absolute_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_absolute_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_relative_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URIReference_relative_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_instReprURIReference_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Std.Http.URIReference.absolute"};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__0 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__0_value;
static const lean_ctor_object l_Std_Http_instReprURIReference_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURIReference_repr___closed__0_value)}};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__1 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__1_value;
static const lean_ctor_object l_Std_Http_instReprURIReference_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprURIReference_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__2 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__2_value;
static const lean_string_object l_Std_Http_instReprURIReference_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Std.Http.URIReference.relative"};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__3 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__3_value;
static const lean_ctor_object l_Std_Http_instReprURIReference_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprURIReference_repr___closed__3_value)}};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__4 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__4_value;
static const lean_ctor_object l_Std_Http_instReprURIReference_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprURIReference_repr___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_instReprURIReference_repr___closed__5 = (const lean_object*)&l_Std_Http_instReprURIReference_repr___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Http_instReprURIReference_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instReprURIReference_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instReprURIReference___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instReprURIReference_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instReprURIReference___closed__0 = (const lean_object*)&l_Std_Http_instReprURIReference___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instReprURIReference = (const lean_object*)&l_Std_Http_instReprURIReference___closed__0_value;
static const lean_ctor_object l_Std_Http_instInhabitedURIReference_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_instInhabitedURI_default___closed__0_value)}};
static const lean_object* l_Std_Http_instInhabitedURIReference_default___closed__0 = (const lean_object*)&l_Std_Http_instInhabitedURIReference_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedURIReference_default = (const lean_object*)&l_Std_Http_instInhabitedURIReference_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedURIReference = (const lean_object*)&l_Std_Http_instInhabitedURIReference_default___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_instToStringURIReference___lam__0(lean_object*);
static const lean_closure_object l_Std_Http_instToStringURIReference___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instToStringURIReference___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instToStringURIReference___closed__0 = (const lean_object*)&l_Std_Http_instToStringURIReference___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instToStringURIReference = (const lean_object*)&l_Std_Http_instToStringURIReference___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_originForm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_originForm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_absoluteForm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_absoluteForm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authorityForm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authorityForm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_asteriskForm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_asteriskForm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_instInhabitedRequestTarget_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instInhabitedPath_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_instInhabitedRequestTarget_default___closed__0 = (const lean_object*)&l_Std_Http_instInhabitedRequestTarget_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedRequestTarget_default = (const lean_object*)&l_Std_Http_instInhabitedRequestTarget_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instInhabitedRequestTarget = (const lean_object*)&l_Std_Http_instInhabitedRequestTarget_default___closed__0_value;
static const lean_string_object l_Std_Http_instReprRequestTarget_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Std.Http.RequestTarget.asteriskForm"};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__0 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__0_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__0_value)}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__1 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__1_value;
static const lean_string_object l_Std_Http_instReprRequestTarget_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Std.Http.RequestTarget.originForm"};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__2 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__2_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__2_value)}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__3 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__3_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__4 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__4_value;
static const lean_string_object l_Std_Http_instReprRequestTarget_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Std.Http.RequestTarget.absoluteForm"};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__5 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__5_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__5_value)}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__6 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__6_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__7 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__7_value;
static const lean_string_object l_Std_Http_instReprRequestTarget_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Http.RequestTarget.authorityForm"};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__8 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__8_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__8_value)}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__9 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__9_value;
static const lean_ctor_object l_Std_Http_instReprRequestTarget_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Http_instReprRequestTarget_repr___closed__10 = (const lean_object*)&l_Std_Http_instReprRequestTarget_repr___closed__10_value;
LEAN_EXPORT lean_object* l_Std_Http_instReprRequestTarget_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_instReprRequestTarget_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_instReprRequestTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_instReprRequestTarget_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_instReprRequestTarget___closed__0 = (const lean_object*)&l_Std_Http_instReprRequestTarget___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_instReprRequestTarget = (const lean_object*)&l_Std_Http_instReprRequestTarget___closed__0_value;
static const lean_array_object l_Std_Http_RequestTarget_path___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_RequestTarget_path___closed__0 = (const lean_object*)&l_Std_Http_RequestTarget_path___closed__0_value;
static const lean_ctor_object l_Std_Http_RequestTarget_path___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_RequestTarget_path___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Http_RequestTarget_path___closed__1 = (const lean_object*)&l_Std_Http_RequestTarget_path___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_path(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_path___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_query(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_query___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authority_x3f(lean_object*);
static const lean_string_object l_Std_Http_RequestTarget_instToString___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l_Std_Http_RequestTarget_instToString___lam__0___closed__0 = (const lean_object*)&l_Std_Http_RequestTarget_instToString___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_instToString___lam__0(lean_object*);
static const lean_closure_object l_Std_Http_RequestTarget_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_RequestTarget_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_RequestTarget_instToString___closed__0 = (const lean_object*)&l_Std_Http_RequestTarget_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_RequestTarget_instToString = (const lean_object*)&l_Std_Http_RequestTarget_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_instEncodeV11___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_RequestTarget_instEncodeV11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_RequestTarget_instEncodeV11___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_RequestTarget_instEncodeV11___closed__0 = (const lean_object*)&l_Std_Http_RequestTarget_instEncodeV11___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_RequestTarget_instEncodeV11 = (const lean_object*)&l_Std_Http_RequestTarget_instEncodeV11___closed__0_value;
LEAN_EXPORT lean_object* l_String_mapAux___at___00Std_Http_URI_Scheme_ofString_x3f_spec__0(lean_object* v_s_3_, lean_object* v_p_4_){
_start:
{
lean_object* v___y_6_; lean_object* v___y_7_; uint32_t v___y_11_; lean_object* v___x_23_; uint8_t v_decide_24_; 
v___x_23_ = lean_string_utf8_byte_size(v_s_3_);
v_decide_24_ = lean_nat_dec_eq(v_p_4_, v___x_23_);
if (v_decide_24_ == 0)
{
uint32_t v___x_25_; uint32_t v___x_26_; uint8_t v___x_27_; 
v___x_25_ = lean_string_utf8_get_fast(v_s_3_, v_p_4_);
v___x_26_ = 65;
v___x_27_ = lean_uint32_dec_le(v___x_26_, v___x_25_);
if (v___x_27_ == 0)
{
v___y_11_ = v___x_25_;
goto v___jp_10_;
}
else
{
uint32_t v___x_28_; uint8_t v___x_29_; 
v___x_28_ = 90;
v___x_29_ = lean_uint32_dec_le(v___x_25_, v___x_28_);
if (v___x_29_ == 0)
{
v___y_11_ = v___x_25_;
goto v___jp_10_;
}
else
{
uint32_t v___x_30_; uint32_t v___x_31_; 
v___x_30_ = 32;
v___x_31_ = lean_uint32_add(v___x_25_, v___x_30_);
v___y_11_ = v___x_31_;
goto v___jp_10_;
}
}
}
else
{
lean_dec(v_p_4_);
return v_s_3_;
}
v___jp_5_:
{
lean_object* v___x_8_; 
v___x_8_ = lean_nat_add(v_p_4_, v___y_7_);
lean_dec(v_p_4_);
v_s_3_ = v___y_6_;
v_p_4_ = v___x_8_;
goto _start;
}
v___jp_10_:
{
lean_object* v___x_12_; uint32_t v___x_13_; uint8_t v___x_14_; 
lean_inc(v_p_4_);
v___x_12_ = lean_string_utf8_set(v_s_3_, v_p_4_, v___y_11_);
v___x_13_ = 127;
v___x_14_ = lean_uint32_dec_le(v___y_11_, v___x_13_);
if (v___x_14_ == 0)
{
uint32_t v___x_15_; uint8_t v___x_16_; 
v___x_15_ = 2047;
v___x_16_ = lean_uint32_dec_le(v___y_11_, v___x_15_);
if (v___x_16_ == 0)
{
uint32_t v___x_17_; uint8_t v___x_18_; 
v___x_17_ = 65535;
v___x_18_ = lean_uint32_dec_le(v___y_11_, v___x_17_);
if (v___x_18_ == 0)
{
lean_object* v___x_19_; 
v___x_19_ = lean_unsigned_to_nat(4u);
v___y_6_ = v___x_12_;
v___y_7_ = v___x_19_;
goto v___jp_5_;
}
else
{
lean_object* v___x_20_; 
v___x_20_ = lean_unsigned_to_nat(3u);
v___y_6_ = v___x_12_;
v___y_7_ = v___x_20_;
goto v___jp_5_;
}
}
else
{
lean_object* v___x_21_; 
v___x_21_ = lean_unsigned_to_nat(2u);
v___y_6_ = v___x_12_;
v___y_7_ = v___x_21_;
goto v___jp_5_;
}
}
else
{
lean_object* v___x_22_; 
v___x_22_ = lean_unsigned_to_nat(1u);
v___y_6_ = v___x_12_;
v___y_7_ = v___x_22_;
goto v___jp_5_;
}
}
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1(lean_object* v_x_32_){
_start:
{
if (lean_obj_tag(v_x_32_) == 0)
{
uint8_t v___x_33_; 
v___x_33_ = 1;
return v___x_33_;
}
else
{
lean_object* v_head_34_; lean_object* v_tail_35_; uint32_t v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; uint8_t v___x_68_; 
v_head_34_ = lean_ctor_get(v_x_32_, 0);
v_tail_35_ = lean_ctor_get(v_x_32_, 1);
v___x_65_ = lean_unbox_uint32(v_head_34_);
v___x_66_ = lean_uint32_to_nat(v___x_65_);
v___x_67_ = lean_unsigned_to_nat(128u);
v___x_68_ = lean_nat_dec_lt(v___x_66_, v___x_67_);
lean_dec(v___x_66_);
if (v___x_68_ == 0)
{
goto v___jp_36_;
}
else
{
uint32_t v___x_69_; uint32_t v___x_70_; uint8_t v___x_71_; 
v___x_69_ = 48;
v___x_70_ = lean_unbox_uint32(v_head_34_);
v___x_71_ = lean_uint32_dec_le(v___x_69_, v___x_70_);
if (v___x_71_ == 0)
{
goto v___jp_57_;
}
else
{
uint32_t v___x_72_; uint32_t v___x_73_; uint8_t v___x_74_; 
v___x_72_ = 57;
v___x_73_ = lean_unbox_uint32(v_head_34_);
v___x_74_ = lean_uint32_dec_le(v___x_73_, v___x_72_);
if (v___x_74_ == 0)
{
goto v___jp_57_;
}
else
{
v_x_32_ = v_tail_35_;
goto _start;
}
}
}
v___jp_36_:
{
uint32_t v___x_37_; uint32_t v___x_38_; uint8_t v___x_39_; 
v___x_37_ = 43;
v___x_38_ = lean_unbox_uint32(v_head_34_);
v___x_39_ = lean_uint32_dec_eq(v___x_38_, v___x_37_);
if (v___x_39_ == 0)
{
uint32_t v___x_40_; uint32_t v___x_41_; uint8_t v___x_42_; 
v___x_40_ = 45;
v___x_41_ = lean_unbox_uint32(v_head_34_);
v___x_42_ = lean_uint32_dec_eq(v___x_41_, v___x_40_);
if (v___x_42_ == 0)
{
uint32_t v___x_43_; uint32_t v___x_44_; uint8_t v___x_45_; 
v___x_43_ = 46;
v___x_44_ = lean_unbox_uint32(v_head_34_);
v___x_45_ = lean_uint32_dec_eq(v___x_44_, v___x_43_);
if (v___x_45_ == 0)
{
return v___x_45_;
}
else
{
v_x_32_ = v_tail_35_;
goto _start;
}
}
else
{
v_x_32_ = v_tail_35_;
goto _start;
}
}
else
{
v_x_32_ = v_tail_35_;
goto _start;
}
}
v___jp_49_:
{
uint32_t v___x_50_; uint32_t v___x_51_; uint8_t v___x_52_; 
v___x_50_ = 97;
v___x_51_ = lean_unbox_uint32(v_head_34_);
v___x_52_ = lean_uint32_dec_le(v___x_50_, v___x_51_);
if (v___x_52_ == 0)
{
goto v___jp_36_;
}
else
{
uint32_t v___x_53_; uint32_t v___x_54_; uint8_t v___x_55_; 
v___x_53_ = 122;
v___x_54_ = lean_unbox_uint32(v_head_34_);
v___x_55_ = lean_uint32_dec_le(v___x_54_, v___x_53_);
if (v___x_55_ == 0)
{
goto v___jp_36_;
}
else
{
v_x_32_ = v_tail_35_;
goto _start;
}
}
}
v___jp_57_:
{
uint32_t v___x_58_; uint32_t v___x_59_; uint8_t v___x_60_; 
v___x_58_ = 65;
v___x_59_ = lean_unbox_uint32(v_head_34_);
v___x_60_ = lean_uint32_dec_le(v___x_58_, v___x_59_);
if (v___x_60_ == 0)
{
goto v___jp_49_;
}
else
{
uint32_t v___x_61_; uint32_t v___x_62_; uint8_t v___x_63_; 
v___x_61_ = 90;
v___x_62_ = lean_unbox_uint32(v_head_34_);
v___x_63_ = lean_uint32_dec_le(v___x_62_, v___x_61_);
if (v___x_63_ == 0)
{
goto v___jp_49_;
}
else
{
v_x_32_ = v_tail_35_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1___boxed(lean_object* v_x_76_){
_start:
{
uint8_t v_res_77_; lean_object* v_r_78_; 
v_res_77_ = l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1(v_x_76_);
lean_dec(v_x_76_);
v_r_78_ = lean_box(v_res_77_);
return v_r_78_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofString_x3f(lean_object* v_s_79_){
_start:
{
lean_object* v___x_80_; lean_object* v_lower_81_; uint8_t v___x_82_; 
v___x_80_ = lean_unsigned_to_nat(0u);
v_lower_81_ = l_String_mapAux___at___00Std_Http_URI_Scheme_ofString_x3f_spec__0(v_s_79_, v___x_80_);
lean_inc_ref(v_lower_81_);
v___x_82_ = l_Std_Http_Internal_instDecidableIsLowerCase(v_lower_81_);
if (v___x_82_ == 0)
{
lean_object* v___x_83_; 
lean_dec_ref(v_lower_81_);
v___x_83_ = lean_box(0);
return v___x_83_;
}
else
{
lean_object* v___x_84_; uint8_t v___x_85_; 
lean_inc_ref(v_lower_81_);
v___x_84_ = l_String_toListImpl(v_lower_81_);
v___x_85_ = l_List_all___at___00Std_Http_URI_Scheme_ofString_x3f_spec__1(v___x_84_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; 
lean_dec(v___x_84_);
lean_dec_ref(v_lower_81_);
v___x_86_ = lean_box(0);
return v___x_86_;
}
else
{
lean_object* v___x_87_; 
v___x_87_ = l_List_head_x3f___redArg(v___x_84_);
lean_dec(v___x_84_);
if (lean_obj_tag(v___x_87_) == 0)
{
lean_object* v___x_88_; 
lean_dec_ref(v_lower_81_);
v___x_88_ = lean_box(0);
return v___x_88_;
}
else
{
lean_object* v_val_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_112_; 
v_val_89_ = lean_ctor_get(v___x_87_, 0);
v_isSharedCheck_112_ = !lean_is_exclusive(v___x_87_);
if (v_isSharedCheck_112_ == 0)
{
v___x_91_ = v___x_87_;
v_isShared_92_ = v_isSharedCheck_112_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_val_89_);
lean_dec(v___x_87_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_112_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
uint32_t v___x_105_; uint32_t v___x_106_; uint8_t v___x_107_; 
v___x_105_ = 65;
v___x_106_ = lean_unbox_uint32(v_val_89_);
v___x_107_ = lean_uint32_dec_le(v___x_105_, v___x_106_);
if (v___x_107_ == 0)
{
goto v___jp_93_;
}
else
{
uint32_t v___x_108_; uint32_t v___x_109_; uint8_t v___x_110_; 
v___x_108_ = 90;
v___x_109_ = lean_unbox_uint32(v_val_89_);
v___x_110_ = lean_uint32_dec_le(v___x_109_, v___x_108_);
if (v___x_110_ == 0)
{
goto v___jp_93_;
}
else
{
lean_object* v___x_111_; 
lean_del_object(v___x_91_);
lean_dec(v_val_89_);
v___x_111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_111_, 0, v_lower_81_);
return v___x_111_;
}
}
v___jp_93_:
{
uint32_t v___x_94_; uint32_t v___x_95_; uint8_t v___x_96_; 
v___x_94_ = 97;
v___x_95_ = lean_unbox_uint32(v_val_89_);
v___x_96_ = lean_uint32_dec_le(v___x_94_, v___x_95_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; 
lean_del_object(v___x_91_);
lean_dec(v_val_89_);
lean_dec_ref(v_lower_81_);
v___x_97_ = lean_box(0);
return v___x_97_;
}
else
{
uint32_t v___x_98_; uint32_t v___x_99_; uint8_t v___x_100_; 
v___x_98_ = 122;
v___x_99_ = lean_unbox_uint32(v_val_89_);
lean_dec(v_val_89_);
v___x_100_ = lean_uint32_dec_le(v___x_99_, v___x_98_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; 
lean_del_object(v___x_91_);
lean_dec_ref(v_lower_81_);
v___x_101_ = lean_box(0);
return v___x_101_;
}
else
{
lean_object* v___x_103_; 
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 0, v_lower_81_);
v___x_103_ = v___x_91_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_lower_81_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
return v___x_103_;
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
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_Scheme_ofString_x21_spec__0(lean_object* v_msg_113_){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = ((lean_object*)(l_Std_Http_URI_instInhabitedScheme___closed__0));
v___x_115_ = lean_panic_fn_borrowed(v___x_114_, v_msg_113_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofString_x21(lean_object* v_s_119_){
_start:
{
lean_object* v___x_120_; 
lean_inc_ref(v_s_119_);
v___x_120_ = l_Std_Http_URI_Scheme_ofString_x3f(v_s_119_);
if (lean_obj_tag(v___x_120_) == 0)
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_121_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__0));
v___x_122_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__1));
v___x_123_ = lean_unsigned_to_nat(85u);
v___x_124_ = lean_unsigned_to_nat(12u);
v___x_125_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__2));
v___x_126_ = l_String_quote(v_s_119_);
v___x_127_ = lean_string_append(v___x_125_, v___x_126_);
lean_dec_ref(v___x_126_);
v___x_128_ = l_mkPanicMessageWithDecl(v___x_121_, v___x_122_, v___x_123_, v___x_124_, v___x_127_);
lean_dec_ref(v___x_127_);
v___x_129_ = l_panic___at___00Std_Http_URI_Scheme_ofString_x21_spec__0(v___x_128_);
return v___x_129_;
}
else
{
lean_object* v_val_130_; 
lean_dec_ref(v_s_119_);
v_val_130_ = lean_ctor_get(v___x_120_, 0);
lean_inc(v_val_130_);
lean_dec_ref_known(v___x_120_, 1);
return v_val_130_;
}
}
}
LEAN_EXPORT uint16_t l_Std_Http_URI_Scheme_defaultPort(lean_object* v_scheme_132_){
_start:
{
lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_133_ = ((lean_object*)(l_Std_Http_URI_Scheme_defaultPort___closed__0));
v___x_134_ = lean_string_dec_eq(v_scheme_132_, v___x_133_);
if (v___x_134_ == 0)
{
uint16_t v___x_135_; 
v___x_135_ = 80;
return v___x_135_;
}
else
{
uint16_t v___x_136_; 
v___x_136_ = 443;
return v___x_136_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_defaultPort___boxed(lean_object* v_scheme_137_){
_start:
{
uint16_t v_res_138_; lean_object* v_r_139_; 
v_res_138_ = l_Std_Http_URI_Scheme_defaultPort(v_scheme_137_);
lean_dec_ref(v_scheme_137_);
v_r_139_ = lean_box(v_res_138_);
return v_r_139_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofPort(uint16_t v_port_140_){
_start:
{
uint16_t v___x_141_; uint8_t v___x_142_; 
v___x_141_ = 443;
v___x_142_ = lean_uint16_dec_eq(v_port_140_, v___x_141_);
if (v___x_142_ == 0)
{
lean_object* v___x_143_; 
v___x_143_ = ((lean_object*)(l_Std_Http_URI_instInhabitedScheme___closed__0));
return v___x_143_;
}
else
{
lean_object* v___x_144_; 
v___x_144_ = ((lean_object*)(l_Std_Http_URI_Scheme_defaultPort___closed__0));
return v___x_144_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Scheme_ofPort___boxed(lean_object* v_port_145_){
_start:
{
uint16_t v_port_boxed_146_; lean_object* v_res_147_; 
v_port_boxed_146_ = lean_unbox(v_port_145_);
v_res_147_ = l_Std_Http_URI_Scheme_ofPort(v_port_boxed_146_);
return v_res_147_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedUserInfo_default___closed__0(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_box(0);
v___x_149_ = l_ByteArray_empty;
v___x_150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v___x_148_);
return v___x_150_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedUserInfo_default(void){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lean_obj_once(&l_Std_Http_URI_instInhabitedUserInfo_default___closed__0, &l_Std_Http_URI_instInhabitedUserInfo_default___closed__0_once, _init_l_Std_Http_URI_instInhabitedUserInfo_default___closed__0);
return v___x_151_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedUserInfo(void){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = l_Std_Http_URI_instInhabitedUserInfo_default;
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0(lean_object* v_x_159_, lean_object* v_x_160_){
_start:
{
if (lean_obj_tag(v_x_159_) == 0)
{
lean_object* v___x_161_; 
v___x_161_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_161_;
}
else
{
lean_object* v_val_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_174_; 
v_val_162_ = lean_ctor_get(v_x_159_, 0);
v_isSharedCheck_174_ = !lean_is_exclusive(v_x_159_);
if (v_isSharedCheck_174_ == 0)
{
v___x_164_ = v_x_159_;
v_isShared_165_ = v_isSharedCheck_174_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_val_162_);
lean_dec(v_x_159_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_174_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_170_; 
v___x_166_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_167_ = lean_string_from_utf8_unchecked(v_val_162_);
v___x_168_ = l_String_quote(v___x_167_);
if (v_isShared_165_ == 0)
{
lean_ctor_set_tag(v___x_164_, 3);
lean_ctor_set(v___x_164_, 0, v___x_168_);
v___x_170_ = v___x_164_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v___x_168_);
v___x_170_ = v_reuseFailAlloc_173_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_166_);
lean_ctor_set(v___x_171_, 1, v___x_170_);
v___x_172_ = l_Repr_addAppParen(v___x_171_, v_x_160_);
return v___x_172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___boxed(lean_object* v_x_175_, lean_object* v_x_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0(v_x_175_, v_x_176_);
lean_dec(v_x_176_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Http_URI_instReprUserInfo_repr_spec__1(lean_object* v_a_178_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = lean_nat_to_int(v_a_178_);
return v___x_179_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lean_unsigned_to_nat(12u);
v___x_194_ = lean_nat_to_int(v___x_193_);
return v___x_194_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__0));
v___x_203_ = lean_string_length(v___x_202_);
return v___x_203_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__13);
v___x_205_ = lean_nat_to_int(v___x_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr___redArg(lean_object* v_x_210_){
_start:
{
lean_object* v_username_211_; lean_object* v_password_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_247_; 
v_username_211_ = lean_ctor_get(v_x_210_, 0);
v_password_212_ = lean_ctor_get(v_x_210_, 1);
v_isSharedCheck_247_ = !lean_is_exclusive(v_x_210_);
if (v_isSharedCheck_247_ == 0)
{
v___x_214_ = v_x_210_;
v_isShared_215_ = v_isSharedCheck_247_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_password_212_);
lean_inc(v_username_211_);
lean_dec(v_x_210_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_247_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_223_; 
v___x_216_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_217_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__6));
v___x_218_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_219_ = lean_string_from_utf8_unchecked(v_username_211_);
v___x_220_ = l_String_quote(v___x_219_);
v___x_221_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
if (v_isShared_215_ == 0)
{
lean_ctor_set_tag(v___x_214_, 4);
lean_ctor_set(v___x_214_, 1, v___x_221_);
lean_ctor_set(v___x_214_, 0, v___x_218_);
v___x_223_ = v___x_214_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_218_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v___x_221_);
v___x_223_ = v_reuseFailAlloc_246_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
uint8_t v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_224_ = 0;
v___x_225_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_225_, 0, v___x_223_);
lean_ctor_set_uint8(v___x_225_, sizeof(void*)*1, v___x_224_);
v___x_226_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_217_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_228_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_228_, 0, v___x_226_);
lean_ctor_set(v___x_228_, 1, v___x_227_);
v___x_229_ = lean_box(1);
v___x_230_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_228_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
v___x_231_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__11));
v___x_232_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_230_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
lean_ctor_set(v___x_233_, 1, v___x_216_);
v___x_234_ = lean_unsigned_to_nat(0u);
v___x_235_ = l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0(v_password_212_, v___x_234_);
v___x_236_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_218_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
v___x_237_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_237_, 0, v___x_236_);
lean_ctor_set_uint8(v___x_237_, sizeof(void*)*1, v___x_224_);
v___x_238_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_233_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_240_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_241_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
lean_ctor_set(v___x_241_, 1, v___x_238_);
v___x_242_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_243_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_241_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_239_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_245_, 0, v___x_244_);
lean_ctor_set_uint8(v___x_245_, sizeof(void*)*1, v___x_224_);
return v___x_245_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr(lean_object* v_x_248_, lean_object* v_prec_249_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = l_Std_Http_URI_instReprUserInfo_repr___redArg(v_x_248_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprUserInfo_repr___boxed(lean_object* v_x_251_, lean_object* v_prec_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Std_Http_URI_instReprUserInfo_repr(v_x_251_, v_prec_252_);
lean_dec(v_prec_252_);
return v_res_253_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0(lean_object* v_x_256_, lean_object* v_x_257_){
_start:
{
if (lean_obj_tag(v_x_256_) == 0)
{
if (lean_obj_tag(v_x_257_) == 0)
{
uint8_t v___x_258_; 
v___x_258_ = 1;
return v___x_258_;
}
else
{
uint8_t v___x_259_; 
v___x_259_ = 0;
return v___x_259_;
}
}
else
{
if (lean_obj_tag(v_x_257_) == 0)
{
uint8_t v___x_260_; 
v___x_260_ = 0;
return v___x_260_;
}
else
{
lean_object* v_val_261_; lean_object* v_val_262_; uint8_t v___x_263_; 
v_val_261_ = lean_ctor_get(v_x_256_, 0);
v_val_262_ = lean_ctor_get(v_x_257_, 0);
v___x_263_ = lean_sarray_dec_eq(v_val_261_, v_val_262_);
return v___x_263_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0___boxed(lean_object* v_x_264_, lean_object* v_x_265_){
_start:
{
uint8_t v_res_266_; lean_object* v_r_267_; 
v_res_266_ = l_instBEqOption_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0(v_x_264_, v_x_265_);
lean_dec(v_x_265_);
lean_dec(v_x_264_);
v_r_267_ = lean_box(v_res_266_);
return v_r_267_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqUserInfo_beq(lean_object* v_x_268_, lean_object* v_x_269_){
_start:
{
lean_object* v_username_270_; lean_object* v_password_271_; lean_object* v_username_272_; lean_object* v_password_273_; uint8_t v___x_274_; 
v_username_270_ = lean_ctor_get(v_x_268_, 0);
v_password_271_ = lean_ctor_get(v_x_268_, 1);
v_username_272_ = lean_ctor_get(v_x_269_, 0);
v_password_273_ = lean_ctor_get(v_x_269_, 1);
v___x_274_ = lean_sarray_dec_eq(v_username_270_, v_username_272_);
if (v___x_274_ == 0)
{
return v___x_274_;
}
else
{
uint8_t v___x_275_; 
v___x_275_ = l_instBEqOption_beq___at___00Std_Http_URI_instBEqUserInfo_beq_spec__0(v_password_271_, v_password_273_);
return v___x_275_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqUserInfo_beq___boxed(lean_object* v_x_276_, lean_object* v_x_277_){
_start:
{
uint8_t v_res_278_; lean_object* v_r_279_; 
v_res_278_ = l_Std_Http_URI_instBEqUserInfo_beq(v_x_276_, v_x_277_);
lean_dec_ref(v_x_277_);
lean_dec_ref(v_x_276_);
v_r_279_ = lean_box(v_res_278_);
return v_r_279_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_ofStrings(lean_object* v_username_282_, lean_object* v_password_283_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_Std_Http_URI_EncodedUserInfo_encode(v_username_282_);
if (lean_obj_tag(v_password_283_) == 0)
{
lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_285_ = lean_box(0);
v___x_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_284_);
lean_ctor_set(v___x_286_, 1, v___x_285_);
return v___x_286_;
}
else
{
lean_object* v_val_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_296_; 
v_val_287_ = lean_ctor_get(v_password_283_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v_password_283_);
if (v_isSharedCheck_296_ == 0)
{
v___x_289_ = v_password_283_;
v_isShared_290_ = v_isSharedCheck_296_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_val_287_);
lean_dec(v_password_283_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_296_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_291_; lean_object* v___x_293_; 
v___x_291_ = l_Std_Http_URI_EncodedUserInfo_encode(v_val_287_);
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v___x_291_);
v___x_293_ = v___x_289_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_291_);
v___x_293_ = v_reuseFailAlloc_295_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
lean_object* v___x_294_; 
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_284_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
return v___x_294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_username_x3f(lean_object* v_ui_297_){
_start:
{
lean_object* v_username_298_; lean_object* v___x_299_; 
v_username_298_ = lean_ctor_get(v_ui_297_, 0);
v___x_299_ = l_Std_Http_URI_EncodedUserInfo_decode(v_username_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_username_x3f___boxed(lean_object* v_ui_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l_Std_Http_URI_UserInfo_username_x3f(v_ui_300_);
lean_dec_ref(v_ui_300_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_password_x3f(lean_object* v_ui_302_){
_start:
{
lean_object* v_password_303_; 
v_password_303_ = lean_ctor_get(v_ui_302_, 1);
if (lean_obj_tag(v_password_303_) == 0)
{
lean_object* v___x_304_; 
v___x_304_ = lean_box(0);
return v___x_304_;
}
else
{
lean_object* v_val_305_; lean_object* v___x_306_; 
v_val_305_ = lean_ctor_get(v_password_303_, 0);
v___x_306_ = l_Std_Http_URI_EncodedUserInfo_decode(v_val_305_);
return v___x_306_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_UserInfo_password_x3f___boxed(lean_object* v_ui_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Std_Http_URI_UserInfo_password_x3f(v_ui_307_);
lean_dec_ref(v_ui_307_);
return v_res_308_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0(lean_object* v_x_309_){
_start:
{
if (lean_obj_tag(v_x_309_) == 0)
{
uint8_t v___x_310_; 
v___x_310_ = 1;
return v___x_310_;
}
else
{
lean_object* v_head_311_; lean_object* v_tail_312_; uint32_t v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; 
v_head_311_ = lean_ctor_get(v_x_309_, 0);
v_tail_312_ = lean_ctor_get(v_x_309_, 1);
v___x_338_ = lean_unbox_uint32(v_head_311_);
v___x_339_ = lean_uint32_to_nat(v___x_338_);
v___x_340_ = lean_unsigned_to_nat(128u);
v___x_341_ = lean_nat_dec_lt(v___x_339_, v___x_340_);
lean_dec(v___x_339_);
if (v___x_341_ == 0)
{
goto v___jp_313_;
}
else
{
uint32_t v___x_342_; uint32_t v___x_343_; uint8_t v___x_344_; 
v___x_342_ = 48;
v___x_343_ = lean_unbox_uint32(v_head_311_);
v___x_344_ = lean_uint32_dec_le(v___x_342_, v___x_343_);
if (v___x_344_ == 0)
{
goto v___jp_330_;
}
else
{
uint32_t v___x_345_; uint32_t v___x_346_; uint8_t v___x_347_; 
v___x_345_ = 57;
v___x_346_ = lean_unbox_uint32(v_head_311_);
v___x_347_ = lean_uint32_dec_le(v___x_346_, v___x_345_);
if (v___x_347_ == 0)
{
goto v___jp_330_;
}
else
{
v_x_309_ = v_tail_312_;
goto _start;
}
}
}
v___jp_313_:
{
uint32_t v___x_314_; uint32_t v___x_315_; uint8_t v___x_316_; 
v___x_314_ = 45;
v___x_315_ = lean_unbox_uint32(v_head_311_);
v___x_316_ = lean_uint32_dec_eq(v___x_315_, v___x_314_);
if (v___x_316_ == 0)
{
uint32_t v___x_317_; uint32_t v___x_318_; uint8_t v___x_319_; 
v___x_317_ = 95;
v___x_318_ = lean_unbox_uint32(v_head_311_);
v___x_319_ = lean_uint32_dec_eq(v___x_318_, v___x_317_);
if (v___x_319_ == 0)
{
return v___x_319_;
}
else
{
v_x_309_ = v_tail_312_;
goto _start;
}
}
else
{
v_x_309_ = v_tail_312_;
goto _start;
}
}
v___jp_322_:
{
uint32_t v___x_323_; uint32_t v___x_324_; uint8_t v___x_325_; 
v___x_323_ = 97;
v___x_324_ = lean_unbox_uint32(v_head_311_);
v___x_325_ = lean_uint32_dec_le(v___x_323_, v___x_324_);
if (v___x_325_ == 0)
{
goto v___jp_313_;
}
else
{
uint32_t v___x_326_; uint32_t v___x_327_; uint8_t v___x_328_; 
v___x_326_ = 122;
v___x_327_ = lean_unbox_uint32(v_head_311_);
v___x_328_ = lean_uint32_dec_le(v___x_327_, v___x_326_);
if (v___x_328_ == 0)
{
goto v___jp_313_;
}
else
{
v_x_309_ = v_tail_312_;
goto _start;
}
}
}
v___jp_330_:
{
uint32_t v___x_331_; uint32_t v___x_332_; uint8_t v___x_333_; 
v___x_331_ = 65;
v___x_332_ = lean_unbox_uint32(v_head_311_);
v___x_333_ = lean_uint32_dec_le(v___x_331_, v___x_332_);
if (v___x_333_ == 0)
{
goto v___jp_322_;
}
else
{
uint32_t v___x_334_; uint32_t v___x_335_; uint8_t v___x_336_; 
v___x_334_ = 90;
v___x_335_ = lean_unbox_uint32(v_head_311_);
v___x_336_ = lean_uint32_dec_le(v___x_335_, v___x_334_);
if (v___x_336_ == 0)
{
goto v___jp_322_;
}
else
{
v_x_309_ = v_tail_312_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0___boxed(lean_object* v_x_349_){
_start:
{
uint8_t v_res_350_; lean_object* v_r_351_; 
v_res_350_ = l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0(v_x_349_);
lean_dec(v_x_349_);
v_r_351_ = lean_box(v_res_350_);
return v_r_351_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_isValidDomainLabel(lean_object* v_s_352_){
_start:
{
lean_object* v_chars_353_; lean_object* v___x_354_; lean_object* v___x_355_; uint8_t v___x_356_; 
v_chars_353_ = l_String_toListImpl(v_s_352_);
v___x_354_ = l_List_lengthTR___redArg(v_chars_353_);
v___x_355_ = lean_unsigned_to_nat(63u);
v___x_356_ = lean_nat_dec_le(v___x_354_, v___x_355_);
lean_dec(v___x_354_);
if (v___x_356_ == 0)
{
lean_dec(v_chars_353_);
return v___x_356_;
}
else
{
uint8_t v___x_357_; 
v___x_357_ = l_List_all___at___00Std_Http_URI_isValidDomainLabel_spec__0(v_chars_353_);
if (v___x_357_ == 0)
{
lean_dec(v_chars_353_);
return v___x_357_;
}
else
{
lean_object* v___x_358_; 
v___x_358_ = l_List_head_x3f___redArg(v_chars_353_);
if (lean_obj_tag(v___x_358_) == 0)
{
uint8_t v___x_359_; 
lean_dec(v_chars_353_);
v___x_359_ = 0;
return v___x_359_;
}
else
{
lean_object* v_val_360_; uint32_t v___x_361_; uint32_t v___x_362_; uint8_t v___x_363_; 
v_val_360_ = lean_ctor_get(v___x_358_, 0);
lean_inc(v_val_360_);
lean_dec_ref_known(v___x_358_, 1);
v___x_361_ = 45;
v___x_362_ = lean_unbox_uint32(v_val_360_);
lean_dec(v_val_360_);
v___x_363_ = lean_uint32_dec_eq(v___x_362_, v___x_361_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; 
v___x_364_ = l_List_getLast_x3f___redArg(v_chars_353_);
lean_dec(v_chars_353_);
if (lean_obj_tag(v___x_364_) == 0)
{
return v___x_363_;
}
else
{
lean_object* v_val_365_; uint32_t v___x_366_; uint8_t v___x_367_; 
v_val_365_ = lean_ctor_get(v___x_364_, 0);
lean_inc(v_val_365_);
lean_dec_ref_known(v___x_364_, 1);
v___x_366_ = lean_unbox_uint32(v_val_365_);
lean_dec(v_val_365_);
v___x_367_ = lean_uint32_dec_eq(v___x_366_, v___x_361_);
if (v___x_367_ == 0)
{
return v___x_357_;
}
else
{
return v___x_363_;
}
}
}
else
{
uint8_t v___x_368_; 
lean_dec(v_chars_353_);
v___x_368_ = 0;
return v___x_368_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_isValidDomainLabel___boxed(lean_object* v_s_369_){
_start:
{
uint8_t v_res_370_; lean_object* v_r_371_; 
v_res_370_ = l_Std_Http_URI_isValidDomainLabel(v_s_369_);
v_r_371_ = lean_box(v_res_370_);
return v_r_371_;
}
}
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Std_Http_URI_endsInNumber_spec__2___redArg(lean_object* v_s_373_){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; uint8_t v___x_376_; 
v___x_374_ = lean_string_utf8_byte_size(v_s_373_);
v___x_375_ = lean_unsigned_to_nat(1u);
v___x_376_ = lean_nat_dec_le(v___x_375_, v___x_374_);
if (v___x_376_ == 0)
{
lean_object* v___x_377_; 
lean_dec_ref(v_s_373_);
v___x_377_ = lean_box(0);
return v___x_377_;
}
else
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; uint8_t v___x_381_; 
v___x_378_ = ((lean_object*)(l_String_dropSuffix_x3f___at___00Std_Http_URI_endsInNumber_spec__2___redArg___closed__0));
v___x_379_ = lean_unsigned_to_nat(0u);
v___x_380_ = lean_nat_sub(v___x_374_, v___x_375_);
v___x_381_ = lean_string_memcmp(v_s_373_, v___x_378_, v___x_380_, v___x_379_, v___x_375_);
if (v___x_381_ == 0)
{
lean_object* v___x_382_; 
lean_dec(v___x_380_);
lean_dec_ref(v_s_373_);
v___x_382_ = lean_box(0);
return v___x_382_;
}
else
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
lean_inc_ref(v_s_373_);
v___x_383_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_383_, 0, v_s_373_);
lean_ctor_set(v___x_383_, 1, v___x_379_);
lean_ctor_set(v___x_383_, 2, v___x_374_);
v___x_384_ = l_String_Slice_pos_x21(v___x_383_, v___x_380_);
lean_dec(v___x_380_);
lean_dec_ref_known(v___x_383_, 3);
v___x_385_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_385_, 0, v_s_373_);
lean_ctor_set(v___x_385_, 1, v___x_379_);
lean_ctor_set(v___x_385_, 2, v___x_384_);
v___x_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
return v___x_386_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Std_Http_URI_endsInNumber_spec__2(lean_object* v_s_387_, lean_object* v_pat_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = l_String_dropSuffix_x3f___at___00Std_Http_URI_endsInNumber_spec__2___redArg(v_s_387_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Std_Http_URI_endsInNumber_spec__2___boxed(lean_object* v_s_390_, lean_object* v_pat_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l_String_dropSuffix_x3f___at___00Std_Http_URI_endsInNumber_spec__2(v_s_390_, v_pat_391_);
lean_dec_ref(v_pat_391_);
return v_res_392_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_endsInNumber___lam__0(uint32_t v_x_393_){
_start:
{
uint32_t v___x_394_; uint8_t v___x_395_; 
v___x_394_ = 46;
v___x_395_ = lean_uint32_dec_eq(v_x_393_, v___x_394_);
if (v___x_395_ == 0)
{
uint8_t v___x_396_; 
v___x_396_ = 1;
return v___x_396_;
}
else
{
uint8_t v___x_397_; 
v___x_397_ = 0;
return v___x_397_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_endsInNumber___lam__0___boxed(lean_object* v_x_398_){
_start:
{
uint32_t v_x_784__boxed_399_; uint8_t v_res_400_; lean_object* v_r_401_; 
v_x_784__boxed_399_ = lean_unbox_uint32(v_x_398_);
lean_dec(v_x_398_);
v_res_400_ = l_Std_Http_URI_endsInNumber___lam__0(v_x_784__boxed_399_);
v_r_401_ = lean_box(v_res_400_);
return v_r_401_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_endsInNumber_spec__1(lean_object* v_x_402_){
_start:
{
if (lean_obj_tag(v_x_402_) == 0)
{
uint8_t v___x_403_; 
v___x_403_ = 1;
return v___x_403_;
}
else
{
lean_object* v_head_404_; lean_object* v_tail_405_; uint32_t v___x_422_; uint32_t v___x_423_; uint8_t v___x_424_; 
v_head_404_ = lean_ctor_get(v_x_402_, 0);
v_tail_405_ = lean_ctor_get(v_x_402_, 1);
v___x_422_ = 48;
v___x_423_ = lean_unbox_uint32(v_head_404_);
v___x_424_ = lean_uint32_dec_le(v___x_422_, v___x_423_);
if (v___x_424_ == 0)
{
goto v___jp_414_;
}
else
{
uint32_t v___x_425_; uint32_t v___x_426_; uint8_t v___x_427_; 
v___x_425_ = 57;
v___x_426_ = lean_unbox_uint32(v_head_404_);
v___x_427_ = lean_uint32_dec_le(v___x_426_, v___x_425_);
if (v___x_427_ == 0)
{
goto v___jp_414_;
}
else
{
v_x_402_ = v_tail_405_;
goto _start;
}
}
v___jp_406_:
{
uint32_t v___x_407_; uint32_t v___x_408_; uint8_t v___x_409_; 
v___x_407_ = 65;
v___x_408_ = lean_unbox_uint32(v_head_404_);
v___x_409_ = lean_uint32_dec_le(v___x_407_, v___x_408_);
if (v___x_409_ == 0)
{
return v___x_409_;
}
else
{
uint32_t v___x_410_; uint32_t v___x_411_; uint8_t v___x_412_; 
v___x_410_ = 70;
v___x_411_ = lean_unbox_uint32(v_head_404_);
v___x_412_ = lean_uint32_dec_le(v___x_411_, v___x_410_);
if (v___x_412_ == 0)
{
return v___x_412_;
}
else
{
v_x_402_ = v_tail_405_;
goto _start;
}
}
}
v___jp_414_:
{
uint32_t v___x_415_; uint32_t v___x_416_; uint8_t v___x_417_; 
v___x_415_ = 97;
v___x_416_ = lean_unbox_uint32(v_head_404_);
v___x_417_ = lean_uint32_dec_le(v___x_415_, v___x_416_);
if (v___x_417_ == 0)
{
goto v___jp_406_;
}
else
{
uint32_t v___x_418_; uint32_t v___x_419_; uint8_t v___x_420_; 
v___x_418_ = 102;
v___x_419_ = lean_unbox_uint32(v_head_404_);
v___x_420_ = lean_uint32_dec_le(v___x_419_, v___x_418_);
if (v___x_420_ == 0)
{
goto v___jp_406_;
}
else
{
v_x_402_ = v_tail_405_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_endsInNumber_spec__1___boxed(lean_object* v_x_429_){
_start:
{
uint8_t v_res_430_; lean_object* v_r_431_; 
v_res_430_ = l_List_all___at___00Std_Http_URI_endsInNumber_spec__1(v_x_429_);
lean_dec(v_x_429_);
v_r_431_ = lean_box(v_res_430_);
return v_r_431_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Std_Http_URI_endsInNumber_spec__0(lean_object* v_x_432_){
_start:
{
if (lean_obj_tag(v_x_432_) == 0)
{
uint8_t v___x_433_; 
v___x_433_ = 1;
return v___x_433_;
}
else
{
lean_object* v_head_434_; lean_object* v_tail_435_; uint32_t v___x_436_; uint32_t v___x_437_; uint8_t v___x_438_; 
v_head_434_ = lean_ctor_get(v_x_432_, 0);
v_tail_435_ = lean_ctor_get(v_x_432_, 1);
v___x_436_ = 48;
v___x_437_ = lean_unbox_uint32(v_head_434_);
v___x_438_ = lean_uint32_dec_le(v___x_436_, v___x_437_);
if (v___x_438_ == 0)
{
return v___x_438_;
}
else
{
uint32_t v___x_439_; uint32_t v___x_440_; uint8_t v___x_441_; 
v___x_439_ = 57;
v___x_440_ = lean_unbox_uint32(v_head_434_);
v___x_441_ = lean_uint32_dec_le(v___x_440_, v___x_439_);
if (v___x_441_ == 0)
{
return v___x_441_;
}
else
{
v_x_432_ = v_tail_435_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Std_Http_URI_endsInNumber_spec__0___boxed(lean_object* v_x_443_){
_start:
{
uint8_t v_res_444_; lean_object* v_r_445_; 
v_res_444_ = l_List_all___at___00Std_Http_URI_endsInNumber_spec__0(v_x_443_);
lean_dec(v_x_443_);
v_r_445_ = lean_box(v_res_444_);
return v_r_445_;
}
}
static lean_object* _init_l_Std_Http_URI_endsInNumber___boxed__const__1(void){
_start:
{
uint32_t v___x_447_; lean_object* v___x_448_; 
v___x_447_ = 48;
v___x_448_ = lean_box_uint32(v___x_447_);
return v___x_448_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_endsInNumber(lean_object* v_s_449_){
_start:
{
lean_object* v___y_451_; lean_object* v___y_452_; lean_object* v_digits_456_; lean_object* v___f_460_; lean_object* v___y_462_; lean_object* v___x_491_; 
v___f_460_ = ((lean_object*)(l_Std_Http_URI_endsInNumber___closed__0));
lean_inc_ref(v_s_449_);
v___x_491_ = l_String_dropSuffix_x3f___at___00Std_Http_URI_endsInNumber_spec__2___redArg(v_s_449_);
if (lean_obj_tag(v___x_491_) == 0)
{
v___y_462_ = v_s_449_;
goto v___jp_461_;
}
else
{
lean_object* v_val_492_; lean_object* v_str_493_; lean_object* v_endExclusive_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
lean_dec_ref(v_s_449_);
v_val_492_ = lean_ctor_get(v___x_491_, 0);
lean_inc(v_val_492_);
lean_dec_ref_known(v___x_491_, 1);
v_str_493_ = lean_ctor_get(v_val_492_, 0);
lean_inc_ref(v_str_493_);
v_endExclusive_494_ = lean_ctor_get(v_val_492_, 2);
lean_inc(v_endExclusive_494_);
lean_dec(v_val_492_);
v___x_495_ = lean_unsigned_to_nat(0u);
v___x_496_ = lean_string_utf8_extract_fast(v_str_493_, v___x_495_, v_endExclusive_494_);
lean_dec(v_endExclusive_494_);
lean_dec_ref(v_str_493_);
v___y_462_ = v___x_496_;
goto v___jp_461_;
}
v___jp_450_:
{
uint8_t v___x_453_; 
v___x_453_ = l_List_all___at___00Std_Http_URI_endsInNumber_spec__1(v___y_452_);
lean_dec(v___y_452_);
if (v___x_453_ == 0)
{
uint8_t v___x_454_; 
v___x_454_ = l_List_all___at___00Std_Http_URI_endsInNumber_spec__0(v___y_451_);
lean_dec(v___y_451_);
return v___x_454_;
}
else
{
lean_dec(v___y_451_);
return v___x_453_;
}
}
v___jp_455_:
{
uint8_t v___x_457_; 
v___x_457_ = l_List_isEmpty___redArg(v_digits_456_);
if (v___x_457_ == 0)
{
uint8_t v___x_458_; 
v___x_458_ = l_List_all___at___00Std_Http_URI_endsInNumber_spec__0(v_digits_456_);
lean_dec(v_digits_456_);
return v___x_458_;
}
else
{
uint8_t v___x_459_; 
lean_dec(v_digits_456_);
v___x_459_ = 0;
return v___x_459_;
}
}
v___jp_461_:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v_last_466_; 
v___x_463_ = l_String_toListImpl(v___y_462_);
v___x_464_ = l_List_reverse___redArg(v___x_463_);
v___x_465_ = l_List_takeWhile___redArg(v___f_460_, v___x_464_);
v_last_466_ = l_List_reverse___redArg(v___x_465_);
if (lean_obj_tag(v_last_466_) == 1)
{
lean_object* v_head_467_; lean_object* v_tail_468_; uint32_t v___x_469_; uint32_t v___x_470_; uint8_t v___x_471_; 
v_head_467_ = lean_ctor_get(v_last_466_, 0);
v_tail_468_ = lean_ctor_get(v_last_466_, 1);
v___x_469_ = 48;
v___x_470_ = lean_unbox_uint32(v_head_467_);
v___x_471_ = lean_uint32_dec_eq(v___x_470_, v___x_469_);
if (v___x_471_ == 0)
{
v_digits_456_ = v_last_466_;
goto v___jp_455_;
}
else
{
lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_488_; 
lean_inc(v_tail_468_);
v_isSharedCheck_488_ = !lean_is_exclusive(v_last_466_);
if (v_isSharedCheck_488_ == 0)
{
lean_object* v_unused_489_; lean_object* v_unused_490_; 
v_unused_489_ = lean_ctor_get(v_last_466_, 1);
lean_dec(v_unused_489_);
v_unused_490_ = lean_ctor_get(v_last_466_, 0);
lean_dec(v_unused_490_);
v___x_473_ = v_last_466_;
v_isShared_474_ = v_isSharedCheck_488_;
goto v_resetjp_472_;
}
else
{
lean_dec(v_last_466_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_488_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
if (lean_obj_tag(v_tail_468_) == 1)
{
lean_object* v_head_475_; lean_object* v_tail_476_; uint32_t v___x_477_; uint32_t v___x_478_; uint8_t v___x_479_; 
lean_del_object(v___x_473_);
v_head_475_ = lean_ctor_get(v_tail_468_, 0);
v_tail_476_ = lean_ctor_get(v_tail_468_, 1);
v___x_477_ = 120;
v___x_478_ = lean_unbox_uint32(v_head_475_);
v___x_479_ = lean_uint32_dec_eq(v___x_478_, v___x_477_);
if (v___x_479_ == 0)
{
uint32_t v___x_480_; uint32_t v___x_481_; uint8_t v___x_482_; 
v___x_480_ = 88;
v___x_481_ = lean_unbox_uint32(v_head_475_);
v___x_482_ = lean_uint32_dec_eq(v___x_481_, v___x_480_);
if (v___x_482_ == 0)
{
uint8_t v___x_483_; 
v___x_483_ = l_List_all___at___00Std_Http_URI_endsInNumber_spec__0(v_tail_468_);
lean_dec_ref_known(v_tail_468_, 2);
return v___x_483_;
}
else
{
lean_inc(v_tail_476_);
v___y_451_ = v_tail_468_;
v___y_452_ = v_tail_476_;
goto v___jp_450_;
}
}
else
{
lean_inc(v_tail_476_);
v___y_451_ = v_tail_468_;
v___y_452_ = v_tail_476_;
goto v___jp_450_;
}
}
else
{
lean_object* v___x_484_; lean_object* v___x_486_; 
v___x_484_ = l_Std_Http_URI_endsInNumber___boxed__const__1;
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 0, v___x_484_);
v___x_486_ = v___x_473_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_484_);
lean_ctor_set(v_reuseFailAlloc_487_, 1, v_tail_468_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
v_digits_456_ = v___x_486_;
goto v___jp_455_;
}
}
}
}
}
else
{
v_digits_456_ = v_last_466_;
goto v___jp_455_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_endsInNumber___boxed(lean_object* v_s_497_){
_start:
{
uint8_t v_res_498_; lean_object* v_r_499_; 
v_res_498_ = l_Std_Http_URI_endsInNumber(v_s_497_);
v_r_499_ = lean_box(v_res_498_);
return v_r_499_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg(){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___closed__0));
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg___boxed(lean_object* v___dummy_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg();
return v_res_505_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___redArg();
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0(lean_object* v_s_507_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___boxed(lean_object* v_s_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0(v_s_509_);
lean_dec_ref(v_s_509_);
return v_res_510_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(uint8_t v___x_511_, lean_object* v___y_512_, lean_object* v___x_513_, lean_object* v___x_514_, lean_object* v_a_515_, uint8_t v_b_516_){
_start:
{
uint8_t v___y_518_; lean_object* v_it_519_; lean_object* v_startInclusive_520_; lean_object* v_endExclusive_521_; uint8_t v___y_526_; 
if (v___x_511_ == 0)
{
uint8_t v___x_552_; 
v___x_552_ = 1;
v___y_526_ = v___x_552_;
goto v___jp_525_;
}
else
{
uint8_t v___x_553_; 
v___x_553_ = 0;
v___y_526_ = v___x_553_;
goto v___jp_525_;
}
v___jp_517_:
{
lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_522_ = lean_string_utf8_extract_fast(v___y_512_, v_startInclusive_520_, v_endExclusive_521_);
lean_dec(v_endExclusive_521_);
lean_dec(v_startInclusive_520_);
v___x_523_ = l_Std_Http_URI_isValidDomainLabel(v___x_522_);
if (v___x_523_ == 0)
{
lean_dec(v_it_519_);
lean_dec(v___x_514_);
return v___x_523_;
}
else
{
v_a_515_ = v_it_519_;
v_b_516_ = v___y_518_;
goto _start;
}
}
v___jp_525_:
{
if (lean_obj_tag(v_a_515_) == 0)
{
lean_object* v_currPos_527_; lean_object* v_searcher_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_551_; 
v_currPos_527_ = lean_ctor_get(v_a_515_, 0);
v_searcher_528_ = lean_ctor_get(v_a_515_, 1);
v_isSharedCheck_551_ = !lean_is_exclusive(v_a_515_);
if (v_isSharedCheck_551_ == 0)
{
v___x_530_ = v_a_515_;
v_isShared_531_ = v_isSharedCheck_551_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_searcher_528_);
lean_inc(v_currPos_527_);
lean_dec(v_a_515_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_551_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
uint8_t v_decide_532_; 
v_decide_532_ = lean_nat_dec_eq(v_searcher_528_, v___x_514_);
if (v_decide_532_ == 0)
{
uint32_t v___x_533_; uint32_t v___x_534_; uint8_t v___x_535_; 
v___x_533_ = 46;
v___x_534_ = lean_string_utf8_get_fast(v___y_512_, v_searcher_528_);
v___x_535_ = lean_uint32_dec_eq(v___x_534_, v___x_533_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; lean_object* v___x_538_; 
v___x_536_ = lean_string_utf8_next_fast(v___y_512_, v_searcher_528_);
lean_dec(v_searcher_528_);
if (v_isShared_531_ == 0)
{
lean_ctor_set(v___x_530_, 1, v___x_536_);
v___x_538_ = v___x_530_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_currPos_527_);
lean_ctor_set(v_reuseFailAlloc_540_, 1, v___x_536_);
v___x_538_ = v_reuseFailAlloc_540_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
v_a_515_ = v___x_538_;
goto _start;
}
}
else
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v_slice_544_; lean_object* v_nextIt_546_; 
v___x_541_ = lean_string_utf8_next_fast(v___y_512_, v_searcher_528_);
v___x_542_ = lean_nat_sub(v___x_541_, v_searcher_528_);
v___x_543_ = lean_nat_add(v_searcher_528_, v___x_542_);
lean_dec(v___x_542_);
v_slice_544_ = l_String_Slice_subslice_x21(v___x_513_, v_currPos_527_, v_searcher_528_);
lean_inc(v___x_543_);
if (v_isShared_531_ == 0)
{
lean_ctor_set(v___x_530_, 1, v___x_543_);
lean_ctor_set(v___x_530_, 0, v___x_543_);
v_nextIt_546_ = v___x_530_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v___x_543_);
lean_ctor_set(v_reuseFailAlloc_549_, 1, v___x_543_);
v_nextIt_546_ = v_reuseFailAlloc_549_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
lean_object* v_startInclusive_547_; lean_object* v_endExclusive_548_; 
v_startInclusive_547_ = lean_ctor_get(v_slice_544_, 0);
lean_inc(v_startInclusive_547_);
v_endExclusive_548_ = lean_ctor_get(v_slice_544_, 1);
lean_inc(v_endExclusive_548_);
lean_dec_ref(v_slice_544_);
v___y_518_ = v___y_526_;
v_it_519_ = v_nextIt_546_;
v_startInclusive_520_ = v_startInclusive_547_;
v_endExclusive_521_ = v_endExclusive_548_;
goto v___jp_517_;
}
}
}
else
{
lean_object* v___x_550_; 
lean_del_object(v___x_530_);
lean_dec(v_searcher_528_);
v___x_550_ = lean_box(1);
lean_inc(v___x_514_);
v___y_518_ = v___y_526_;
v_it_519_ = v___x_550_;
v_startInclusive_520_ = v_currPos_527_;
v_endExclusive_521_ = v___x_514_;
goto v___jp_517_;
}
}
}
else
{
lean_dec(v___x_514_);
return v_b_516_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg___boxed(lean_object* v___x_554_, lean_object* v___y_555_, lean_object* v___x_556_, lean_object* v___x_557_, lean_object* v_a_558_, lean_object* v_b_559_){
_start:
{
uint8_t v___x_4049__boxed_560_; uint8_t v_b_boxed_561_; uint8_t v_res_562_; lean_object* v_r_563_; 
v___x_4049__boxed_560_ = lean_unbox(v___x_554_);
v_b_boxed_561_ = lean_unbox(v_b_559_);
v_res_562_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(v___x_4049__boxed_560_, v___y_555_, v___x_556_, v___x_557_, v_a_558_, v_b_boxed_561_);
lean_dec_ref(v___x_556_);
lean_dec_ref(v___y_555_);
v_r_563_ = lean_box(v_res_562_);
return v_r_563_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(lean_object* v___x_564_, lean_object* v___y_565_, lean_object* v___x_566_, lean_object* v_a_567_, uint8_t v_b_568_){
_start:
{
if (lean_obj_tag(v_a_567_) == 0)
{
lean_object* v_currPos_569_; lean_object* v_searcher_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_585_; 
v_currPos_569_ = lean_ctor_get(v_a_567_, 0);
v_searcher_570_ = lean_ctor_get(v_a_567_, 1);
v_isSharedCheck_585_ = !lean_is_exclusive(v_a_567_);
if (v_isSharedCheck_585_ == 0)
{
v___x_572_ = v_a_567_;
v_isShared_573_ = v_isSharedCheck_585_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_searcher_570_);
lean_inc(v_currPos_569_);
lean_dec(v_a_567_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_585_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_574_; uint8_t v___x_575_; uint8_t v_decide_576_; 
v___x_574_ = lean_unsigned_to_nat(0u);
v___x_575_ = lean_nat_dec_eq(v___x_564_, v___x_574_);
v_decide_576_ = lean_nat_dec_eq(v_searcher_570_, v___x_566_);
if (v_decide_576_ == 0)
{
uint32_t v___x_577_; uint32_t v___x_578_; uint8_t v___x_579_; 
v___x_577_ = 46;
v___x_578_ = lean_string_utf8_get_fast(v___y_565_, v_searcher_570_);
v___x_579_ = lean_uint32_dec_eq(v___x_578_, v___x_577_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; lean_object* v___x_582_; 
v___x_580_ = lean_string_utf8_next_fast(v___y_565_, v_searcher_570_);
lean_dec(v_searcher_570_);
if (v_isShared_573_ == 0)
{
lean_ctor_set(v___x_572_, 1, v___x_580_);
v___x_582_ = v___x_572_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_currPos_569_);
lean_ctor_set(v_reuseFailAlloc_584_, 1, v___x_580_);
v___x_582_ = v_reuseFailAlloc_584_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
v_a_567_ = v___x_582_;
goto _start;
}
}
else
{
lean_del_object(v___x_572_);
lean_dec(v_searcher_570_);
lean_dec(v_currPos_569_);
return v___x_575_;
}
}
else
{
lean_del_object(v___x_572_);
lean_dec(v_searcher_570_);
lean_dec(v_currPos_569_);
return v___x_575_;
}
}
}
else
{
return v_b_568_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg___boxed(lean_object* v___x_586_, lean_object* v___y_587_, lean_object* v___x_588_, lean_object* v_a_589_, lean_object* v_b_590_){
_start:
{
uint8_t v_b_boxed_591_; uint8_t v_res_592_; lean_object* v_r_593_; 
v_b_boxed_591_ = lean_unbox(v_b_590_);
v_res_592_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(v___x_586_, v___y_587_, v___x_588_, v_a_589_, v_b_boxed_591_);
lean_dec(v___x_588_);
lean_dec_ref(v___y_587_);
lean_dec(v___x_586_);
v_r_593_ = lean_box(v_res_592_);
return v_r_593_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_DomainName_ofString_x3f(lean_object* v_s_594_){
_start:
{
lean_object* v___x_595_; lean_object* v_lower_596_; uint8_t v___y_598_; uint8_t v___y_599_; lean_object* v___y_600_; lean_object* v___x_613_; lean_object* v___y_615_; uint8_t v___x_626_; 
v___x_595_ = lean_unsigned_to_nat(0u);
v_lower_596_ = l_String_mapAux___at___00Std_Http_URI_Scheme_ofString_x3f_spec__0(v_s_594_, v___x_595_);
v___x_613_ = lean_string_utf8_byte_size(v_lower_596_);
v___x_626_ = lean_nat_dec_eq(v___x_613_, v___x_595_);
if (v___x_626_ == 0)
{
lean_object* v___x_627_; 
lean_inc_ref(v_lower_596_);
v___x_627_ = l_String_dropSuffix_x3f___at___00Std_Http_URI_endsInNumber_spec__2___redArg(v_lower_596_);
if (lean_obj_tag(v___x_627_) == 0)
{
lean_inc_ref(v_lower_596_);
v___y_615_ = v_lower_596_;
goto v___jp_614_;
}
else
{
lean_object* v_val_628_; lean_object* v_str_629_; lean_object* v_endExclusive_630_; lean_object* v___x_631_; 
v_val_628_ = lean_ctor_get(v___x_627_, 0);
lean_inc(v_val_628_);
lean_dec_ref_known(v___x_627_, 1);
v_str_629_ = lean_ctor_get(v_val_628_, 0);
lean_inc_ref(v_str_629_);
v_endExclusive_630_ = lean_ctor_get(v_val_628_, 2);
lean_inc(v_endExclusive_630_);
lean_dec(v_val_628_);
v___x_631_ = lean_string_utf8_extract_fast(v_str_629_, v___x_595_, v_endExclusive_630_);
lean_dec(v_endExclusive_630_);
lean_dec_ref(v_str_629_);
v___y_615_ = v___x_631_;
goto v___jp_614_;
}
}
else
{
lean_object* v___x_632_; 
lean_dec_ref(v_lower_596_);
v___x_632_ = lean_box(0);
return v___x_632_;
}
v___jp_597_:
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; uint8_t v___x_604_; 
v___x_601_ = lean_string_utf8_byte_size(v___y_600_);
lean_inc_ref(v___y_600_);
v___x_602_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_602_, 0, v___y_600_);
lean_ctor_set(v___x_602_, 1, v___x_595_);
lean_ctor_set(v___x_602_, 2, v___x_601_);
v___x_603_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0);
v___x_604_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(v___y_598_, v___y_600_, v___x_602_, v___x_601_, v___x_603_, v___y_599_);
lean_dec_ref_known(v___x_602_, 3);
lean_dec_ref(v___y_600_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; 
lean_dec_ref(v_lower_596_);
v___x_605_ = lean_box(0);
return v___x_605_;
}
else
{
uint8_t v___x_606_; 
lean_inc_ref(v_lower_596_);
v___x_606_ = l_Std_Http_URI_endsInNumber(v_lower_596_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; lean_object* v___x_608_; uint8_t v___x_609_; 
v___x_607_ = lean_string_length(v_lower_596_);
v___x_608_ = lean_unsigned_to_nat(255u);
v___x_609_ = lean_nat_dec_le(v___x_607_, v___x_608_);
if (v___x_609_ == 0)
{
lean_object* v___x_610_; 
lean_dec_ref(v_lower_596_);
v___x_610_ = lean_box(0);
return v___x_610_;
}
else
{
lean_object* v___x_611_; 
v___x_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_611_, 0, v_lower_596_);
return v___x_611_;
}
}
else
{
lean_object* v___x_612_; 
lean_dec_ref(v_lower_596_);
v___x_612_ = lean_box(0);
return v___x_612_;
}
}
}
v___jp_614_:
{
lean_object* v___x_616_; lean_object* v___x_617_; uint8_t v___x_618_; uint8_t v___x_619_; 
v___x_616_ = lean_string_utf8_byte_size(v___y_615_);
v___x_617_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Std_Http_URI_DomainName_ofString_x3f_spec__0___closed__0);
v___x_618_ = 1;
v___x_619_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(v___x_613_, v___y_615_, v___x_616_, v___x_617_, v___x_618_);
lean_dec_ref(v___y_615_);
if (v___x_619_ == 0)
{
lean_object* v___x_620_; 
lean_inc_ref(v_lower_596_);
v___x_620_ = l_String_dropSuffix_x3f___at___00Std_Http_URI_endsInNumber_spec__2___redArg(v_lower_596_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_inc_ref(v_lower_596_);
v___y_598_ = v___x_619_;
v___y_599_ = v___x_618_;
v___y_600_ = v_lower_596_;
goto v___jp_597_;
}
else
{
lean_object* v_val_621_; lean_object* v_str_622_; lean_object* v_endExclusive_623_; lean_object* v___x_624_; 
v_val_621_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_val_621_);
lean_dec_ref_known(v___x_620_, 1);
v_str_622_ = lean_ctor_get(v_val_621_, 0);
lean_inc_ref(v_str_622_);
v_endExclusive_623_ = lean_ctor_get(v_val_621_, 2);
lean_inc(v_endExclusive_623_);
lean_dec(v_val_621_);
v___x_624_ = lean_string_utf8_extract_fast(v_str_622_, v___x_595_, v_endExclusive_623_);
lean_dec(v_endExclusive_623_);
lean_dec_ref(v_str_622_);
v___y_598_ = v___x_619_;
v___y_599_ = v___x_618_;
v___y_600_ = v___x_624_;
goto v___jp_597_;
}
}
else
{
lean_object* v___x_625_; 
lean_dec_ref(v_lower_596_);
v___x_625_ = lean_box(0);
return v___x_625_;
}
}
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1(lean_object* v___x_633_, lean_object* v___y_634_, lean_object* v___x_635_, lean_object* v___x_636_, lean_object* v_inst_637_, lean_object* v_R_638_, lean_object* v_a_639_, uint8_t v_b_640_, lean_object* v_c_641_){
_start:
{
uint8_t v___x_642_; 
v___x_642_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___redArg(v___x_633_, v___y_634_, v___x_636_, v_a_639_, v_b_640_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1___boxed(lean_object* v___x_643_, lean_object* v___y_644_, lean_object* v___x_645_, lean_object* v___x_646_, lean_object* v_inst_647_, lean_object* v_R_648_, lean_object* v_a_649_, lean_object* v_b_650_, lean_object* v_c_651_){
_start:
{
uint8_t v_b_boxed_652_; uint8_t v_res_653_; lean_object* v_r_654_; 
v_b_boxed_652_ = lean_unbox(v_b_650_);
v_res_653_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__1(v___x_643_, v___y_644_, v___x_645_, v___x_646_, v_inst_647_, v_R_648_, v_a_649_, v_b_boxed_652_, v_c_651_);
lean_dec(v___x_646_);
lean_dec_ref(v___x_645_);
lean_dec_ref(v___y_644_);
lean_dec(v___x_643_);
v_r_654_ = lean_box(v_res_653_);
return v_r_654_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2(uint8_t v___x_655_, lean_object* v___y_656_, lean_object* v___x_657_, lean_object* v___x_658_, lean_object* v_inst_659_, lean_object* v_R_660_, lean_object* v_a_661_, uint8_t v_b_662_, lean_object* v_c_663_){
_start:
{
uint8_t v___x_664_; 
v___x_664_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___redArg(v___x_655_, v___y_656_, v___x_657_, v___x_658_, v_a_661_, v_b_662_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2___boxed(lean_object* v___x_665_, lean_object* v___y_666_, lean_object* v___x_667_, lean_object* v___x_668_, lean_object* v_inst_669_, lean_object* v_R_670_, lean_object* v_a_671_, lean_object* v_b_672_, lean_object* v_c_673_){
_start:
{
uint8_t v___x_4253__boxed_674_; uint8_t v_b_boxed_675_; uint8_t v_res_676_; lean_object* v_r_677_; 
v___x_4253__boxed_674_ = lean_unbox(v___x_665_);
v_b_boxed_675_ = lean_unbox(v_b_672_);
v_res_676_ = l_WellFounded_opaqueFix_u2083___at___00Std_Http_URI_DomainName_ofString_x3f_spec__2(v___x_4253__boxed_674_, v___y_666_, v___x_667_, v___x_668_, v_inst_669_, v_R_670_, v_a_671_, v_b_boxed_675_, v_c_673_);
lean_dec_ref(v___x_667_);
lean_dec_ref(v___y_666_);
v_r_677_ = lean_box(v_res_676_);
return v_r_677_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorIdx___impl(lean_object* v_x_678_){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = lean_obj_tag_nat(v_x_678_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorIdx___impl___boxed(lean_object* v_x_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l_Std_Http_URI_Host_ctorIdx___impl(v_x_680_);
lean_dec_ref(v_x_680_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim___redArg(lean_object* v_t_682_, lean_object* v_k_683_){
_start:
{
lean_object* v_name_684_; lean_object* v___x_685_; 
v_name_684_ = lean_ctor_get(v_t_682_, 0);
lean_inc_ref(v_name_684_);
lean_dec_ref(v_t_682_);
v___x_685_ = lean_apply_1(v_k_683_, v_name_684_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim(lean_object* v_motive_686_, lean_object* v_ctorIdx_687_, lean_object* v_t_688_, lean_object* v_h_689_, lean_object* v_k_690_){
_start:
{
lean_object* v___x_691_; 
v___x_691_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_688_, v_k_690_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ctorElim___boxed(lean_object* v_motive_692_, lean_object* v_ctorIdx_693_, lean_object* v_t_694_, lean_object* v_h_695_, lean_object* v_k_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l_Std_Http_URI_Host_ctorElim(v_motive_692_, v_ctorIdx_693_, v_t_694_, v_h_695_, v_k_696_);
lean_dec(v_ctorIdx_693_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_name_elim___redArg(lean_object* v_t_698_, lean_object* v_name_699_){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_698_, v_name_699_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_name_elim(lean_object* v_motive_701_, lean_object* v_t_702_, lean_object* v_h_703_, lean_object* v_name_704_){
_start:
{
lean_object* v___x_705_; 
v___x_705_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_702_, v_name_704_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv4_elim___redArg(lean_object* v_t_706_, lean_object* v_ipv4_707_){
_start:
{
lean_object* v___x_708_; 
v___x_708_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_706_, v_ipv4_707_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv4_elim(lean_object* v_motive_709_, lean_object* v_t_710_, lean_object* v_h_711_, lean_object* v_ipv4_712_){
_start:
{
lean_object* v___x_713_; 
v___x_713_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_710_, v_ipv4_712_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv6_elim___redArg(lean_object* v_t_714_, lean_object* v_ipv6_715_){
_start:
{
lean_object* v___x_716_; 
v___x_716_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_714_, v_ipv6_715_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Host_ipv6_elim(lean_object* v_motive_717_, lean_object* v_t_718_, lean_object* v_h_719_, lean_object* v_ipv6_720_){
_start:
{
lean_object* v___x_721_; 
v___x_721_ = l_Std_Http_URI_Host_ctorElim___redArg(v_t_718_, v_ipv6_720_);
return v___x_721_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedHost_default___closed__0(void){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = l_Std_Net_instInhabitedIPv4Addr_default;
v___x_723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
return v___x_723_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedHost_default(void){
_start:
{
lean_object* v___x_724_; 
v___x_724_ = lean_obj_once(&l_Std_Http_URI_instInhabitedHost_default___closed__0, &l_Std_Http_URI_instInhabitedHost_default___closed__0_once, _init_l_Std_Http_URI_instInhabitedHost_default___closed__0);
return v___x_724_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedHost(void){
_start:
{
lean_object* v___x_725_; 
v___x_725_ = l_Std_Http_URI_instInhabitedHost_default;
return v___x_725_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqHost_beq(lean_object* v_x_726_, lean_object* v_x_727_){
_start:
{
switch(lean_obj_tag(v_x_726_))
{
case 0:
{
if (lean_obj_tag(v_x_727_) == 0)
{
lean_object* v_name_728_; lean_object* v_name_729_; uint8_t v___x_730_; 
v_name_728_ = lean_ctor_get(v_x_726_, 0);
v_name_729_ = lean_ctor_get(v_x_727_, 0);
v___x_730_ = lean_string_dec_eq(v_name_728_, v_name_729_);
return v___x_730_;
}
else
{
uint8_t v___x_731_; 
v___x_731_ = 0;
return v___x_731_;
}
}
case 1:
{
if (lean_obj_tag(v_x_727_) == 1)
{
lean_object* v_ipv4_732_; lean_object* v_ipv4_733_; uint8_t v___x_734_; 
v_ipv4_732_ = lean_ctor_get(v_x_726_, 0);
v_ipv4_733_ = lean_ctor_get(v_x_727_, 0);
v___x_734_ = l_Std_Net_instDecidableEqIPv4Addr_decEq(v_ipv4_732_, v_ipv4_733_);
return v___x_734_;
}
else
{
uint8_t v___x_735_; 
v___x_735_ = 0;
return v___x_735_;
}
}
default: 
{
if (lean_obj_tag(v_x_727_) == 2)
{
lean_object* v_ipv6_736_; lean_object* v_ipv6_737_; uint8_t v___x_738_; 
v_ipv6_736_ = lean_ctor_get(v_x_726_, 0);
v_ipv6_737_ = lean_ctor_get(v_x_727_, 0);
v___x_738_ = l_Std_Net_instDecidableEqIPv6Addr_decEq(v_ipv6_736_, v_ipv6_737_);
return v___x_738_;
}
else
{
uint8_t v___x_739_; 
v___x_739_ = 0;
return v___x_739_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqHost_beq___boxed(lean_object* v_x_740_, lean_object* v_x_741_){
_start:
{
uint8_t v_res_742_; lean_object* v_r_743_; 
v_res_742_ = l_Std_Http_URI_instBEqHost_beq(v_x_740_, v_x_741_);
lean_dec_ref(v_x_741_);
lean_dec_ref(v_x_740_);
v_r_743_ = lean_box(v_res_742_);
return v_r_743_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprHost___lam__0___closed__4(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = lean_unsigned_to_nat(2u);
v___x_751_ = lean_nat_to_int(v___x_750_);
return v___x_751_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprHost___lam__0___closed__5(void){
_start:
{
lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_752_ = lean_unsigned_to_nat(1u);
v___x_753_ = lean_nat_to_int(v___x_752_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprHost___lam__0(lean_object* v_x_754_, lean_object* v_prec_755_){
_start:
{
lean_object* v___y_757_; lean_object* v_ctr_758_; lean_object* v_a_759_; lean_object* v___y_771_; lean_object* v___x_802_; uint8_t v___x_803_; 
v___x_802_ = lean_unsigned_to_nat(1024u);
v___x_803_ = lean_nat_dec_le(v___x_802_, v_prec_755_);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; 
v___x_804_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_771_ = v___x_804_;
goto v___jp_770_;
}
else
{
lean_object* v___x_805_; 
v___x_805_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_771_ = v___x_805_;
goto v___jp_770_;
}
v___jp_756_:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; uint8_t v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_760_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__0));
v___x_761_ = lean_string_append(v___x_760_, v_ctr_758_);
v___x_762_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
v___x_763_ = lean_box(1);
v___x_764_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_764_, 0, v___x_762_);
lean_ctor_set(v___x_764_, 1, v___x_763_);
v___x_765_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_765_, 0, v___x_764_);
lean_ctor_set(v___x_765_, 1, v_a_759_);
lean_inc(v___y_757_);
v___x_766_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_766_, 0, v___y_757_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = 0;
v___x_768_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_768_, 0, v___x_766_);
lean_ctor_set_uint8(v___x_768_, sizeof(void*)*1, v___x_767_);
v___x_769_ = l_Repr_addAppParen(v___x_768_, v_prec_755_);
return v___x_769_;
}
v___jp_770_:
{
switch(lean_obj_tag(v_x_754_))
{
case 0:
{
lean_object* v_name_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_781_; 
v_name_772_ = lean_ctor_get(v_x_754_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v_x_754_);
if (v_isSharedCheck_781_ == 0)
{
v___x_774_ = v_x_754_;
v_isShared_775_ = v_isSharedCheck_781_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_name_772_);
lean_dec(v_x_754_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_781_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_779_; 
v___x_776_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__1));
v___x_777_ = l_String_quote(v_name_772_);
if (v_isShared_775_ == 0)
{
lean_ctor_set_tag(v___x_774_, 3);
lean_ctor_set(v___x_774_, 0, v___x_777_);
v___x_779_ = v___x_774_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_777_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
v___y_757_ = v___y_771_;
v_ctr_758_ = v___x_776_;
v_a_759_ = v___x_779_;
goto v___jp_756_;
}
}
}
case 1:
{
lean_object* v_ipv4_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_791_; 
v_ipv4_782_ = lean_ctor_get(v_x_754_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v_x_754_);
if (v_isSharedCheck_791_ == 0)
{
v___x_784_ = v_x_754_;
v_isShared_785_ = v_isSharedCheck_791_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_ipv4_782_);
lean_dec(v_x_754_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_791_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_789_; 
v___x_786_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__2));
v___x_787_ = lean_uv_ntop_v4(v_ipv4_782_);
lean_dec_ref(v_ipv4_782_);
if (v_isShared_785_ == 0)
{
lean_ctor_set_tag(v___x_784_, 3);
lean_ctor_set(v___x_784_, 0, v___x_787_);
v___x_789_ = v___x_784_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v___x_787_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
v___y_757_ = v___y_771_;
v_ctr_758_ = v___x_786_;
v_a_759_ = v___x_789_;
goto v___jp_756_;
}
}
}
default: 
{
lean_object* v_ipv6_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_801_; 
v_ipv6_792_ = lean_ctor_get(v_x_754_, 0);
v_isSharedCheck_801_ = !lean_is_exclusive(v_x_754_);
if (v_isSharedCheck_801_ == 0)
{
v___x_794_ = v_x_754_;
v_isShared_795_ = v_isSharedCheck_801_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_ipv6_792_);
lean_dec(v_x_754_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_801_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_799_; 
v___x_796_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__3));
v___x_797_ = lean_uv_ntop_v6(v_ipv6_792_);
lean_dec_ref(v_ipv6_792_);
if (v_isShared_795_ == 0)
{
lean_ctor_set_tag(v___x_794_, 3);
lean_ctor_set(v___x_794_, 0, v___x_797_);
v___x_799_ = v___x_794_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v___x_797_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
v___y_757_ = v___y_771_;
v_ctr_758_ = v___x_796_;
v_a_759_ = v___x_799_;
goto v___jp_756_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprHost___lam__0___boxed(lean_object* v_x_806_, lean_object* v_prec_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l_Std_Http_URI_instReprHost___lam__0(v_x_806_, v_prec_807_);
lean_dec(v_prec_807_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringHost___lam__0(lean_object* v_x_813_){
_start:
{
switch(lean_obj_tag(v_x_813_))
{
case 0:
{
lean_object* v_name_814_; 
v_name_814_ = lean_ctor_get(v_x_813_, 0);
lean_inc_ref(v_name_814_);
return v_name_814_;
}
case 1:
{
lean_object* v_ipv4_815_; lean_object* v___x_816_; 
v_ipv4_815_ = lean_ctor_get(v_x_813_, 0);
v___x_816_ = lean_uv_ntop_v4(v_ipv4_815_);
return v___x_816_;
}
default: 
{
lean_object* v_ipv6_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v_ipv6_817_ = lean_ctor_get(v_x_813_, 0);
v___x_818_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_819_ = lean_uv_ntop_v6(v_ipv6_817_);
v___x_820_ = lean_string_append(v___x_818_, v___x_819_);
lean_dec_ref(v___x_819_);
v___x_821_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_822_ = lean_string_append(v___x_820_, v___x_821_);
return v___x_822_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringHost___lam__0___boxed(lean_object* v_x_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l_Std_Http_URI_instToStringHost___lam__0(v_x_823_);
lean_dec_ref(v_x_823_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorIdx___impl(lean_object* v_x_827_){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = lean_obj_tag_nat(v_x_827_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorIdx___impl___boxed(lean_object* v_x_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_Std_Http_URI_Port_ctorIdx___impl(v_x_829_);
lean_dec(v_x_829_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___redArg(lean_object* v_t_831_, lean_object* v_k_832_){
_start:
{
if (lean_obj_tag(v_t_831_) == 2)
{
uint16_t v_port_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v_port_833_ = lean_ctor_get_uint16(v_t_831_, 0);
v___x_834_ = lean_box(v_port_833_);
v___x_835_ = lean_apply_1(v_k_832_, v___x_834_);
return v___x_835_;
}
else
{
return v_k_832_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___redArg___boxed(lean_object* v_t_836_, lean_object* v_k_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_836_, v_k_837_);
lean_dec(v_t_836_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim(lean_object* v_motive_839_, lean_object* v_ctorIdx_840_, lean_object* v_t_841_, lean_object* v_h_842_, lean_object* v_k_843_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_841_, v_k_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_ctorElim___boxed(lean_object* v_motive_845_, lean_object* v_ctorIdx_846_, lean_object* v_t_847_, lean_object* v_h_848_, lean_object* v_k_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l_Std_Http_URI_Port_ctorElim(v_motive_845_, v_ctorIdx_846_, v_t_847_, v_h_848_, v_k_849_);
lean_dec(v_t_847_);
lean_dec(v_ctorIdx_846_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___redArg(lean_object* v_t_851_, lean_object* v_omitted_852_){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_851_, v_omitted_852_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___redArg___boxed(lean_object* v_t_854_, lean_object* v_omitted_855_){
_start:
{
lean_object* v_res_856_; 
v_res_856_ = l_Std_Http_URI_Port_omitted_elim___redArg(v_t_854_, v_omitted_855_);
lean_dec(v_t_854_);
return v_res_856_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim(lean_object* v_motive_857_, lean_object* v_t_858_, lean_object* v_h_859_, lean_object* v_omitted_860_){
_start:
{
lean_object* v___x_861_; 
v___x_861_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_858_, v_omitted_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_omitted_elim___boxed(lean_object* v_motive_862_, lean_object* v_t_863_, lean_object* v_h_864_, lean_object* v_omitted_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l_Std_Http_URI_Port_omitted_elim(v_motive_862_, v_t_863_, v_h_864_, v_omitted_865_);
lean_dec(v_t_863_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___redArg(lean_object* v_t_867_, lean_object* v_empty_868_){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_867_, v_empty_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___redArg___boxed(lean_object* v_t_870_, lean_object* v_empty_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Std_Http_URI_Port_empty_elim___redArg(v_t_870_, v_empty_871_);
lean_dec(v_t_870_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim(lean_object* v_motive_873_, lean_object* v_t_874_, lean_object* v_h_875_, lean_object* v_empty_876_){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_874_, v_empty_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_empty_elim___boxed(lean_object* v_motive_878_, lean_object* v_t_879_, lean_object* v_h_880_, lean_object* v_empty_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l_Std_Http_URI_Port_empty_elim(v_motive_878_, v_t_879_, v_h_880_, v_empty_881_);
lean_dec(v_t_879_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___redArg(lean_object* v_t_883_, lean_object* v_value_884_){
_start:
{
lean_object* v___x_885_; 
v___x_885_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_883_, v_value_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___redArg___boxed(lean_object* v_t_886_, lean_object* v_value_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l_Std_Http_URI_Port_value_elim___redArg(v_t_886_, v_value_887_);
lean_dec(v_t_886_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim(lean_object* v_motive_889_, lean_object* v_t_890_, lean_object* v_h_891_, lean_object* v_value_892_){
_start:
{
lean_object* v___x_893_; 
v___x_893_ = l_Std_Http_URI_Port_ctorElim___redArg(v_t_890_, v_value_892_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Port_value_elim___boxed(lean_object* v_motive_894_, lean_object* v_t_895_, lean_object* v_h_896_, lean_object* v_value_897_){
_start:
{
lean_object* v_res_898_; 
v_res_898_ = l_Std_Http_URI_Port_value_elim(v_motive_894_, v_t_895_, v_h_896_, v_value_897_);
lean_dec(v_t_895_);
return v_res_898_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedPort_default(void){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = lean_box(0);
return v___x_899_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedPort(void){
_start:
{
lean_object* v___x_900_; 
v___x_900_ = lean_box(0);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPort_repr(lean_object* v_x_913_, lean_object* v_prec_914_){
_start:
{
lean_object* v___y_916_; lean_object* v___y_923_; 
switch(lean_obj_tag(v_x_913_))
{
case 0:
{
lean_object* v___x_929_; uint8_t v___x_930_; 
v___x_929_ = lean_unsigned_to_nat(1024u);
v___x_930_ = lean_nat_dec_le(v___x_929_, v_prec_914_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; 
v___x_931_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_923_ = v___x_931_;
goto v___jp_922_;
}
else
{
lean_object* v___x_932_; 
v___x_932_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_923_ = v___x_932_;
goto v___jp_922_;
}
}
case 1:
{
lean_object* v___x_933_; uint8_t v___x_934_; 
v___x_933_ = lean_unsigned_to_nat(1024u);
v___x_934_ = lean_nat_dec_le(v___x_933_, v_prec_914_);
if (v___x_934_ == 0)
{
lean_object* v___x_935_; 
v___x_935_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_916_ = v___x_935_;
goto v___jp_915_;
}
else
{
lean_object* v___x_936_; 
v___x_936_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_916_ = v___x_936_;
goto v___jp_915_;
}
}
default: 
{
uint16_t v_port_937_; lean_object* v___y_939_; lean_object* v___x_949_; uint8_t v___x_950_; 
v_port_937_ = lean_ctor_get_uint16(v_x_913_, 0);
v___x_949_ = lean_unsigned_to_nat(1024u);
v___x_950_ = lean_nat_dec_le(v___x_949_, v_prec_914_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; 
v___x_951_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_939_ = v___x_951_;
goto v___jp_938_;
}
else
{
lean_object* v___x_952_; 
v___x_952_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_939_ = v___x_952_;
goto v___jp_938_;
}
v___jp_938_:
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; uint8_t v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_940_ = ((lean_object*)(l_Std_Http_URI_instReprPort_repr___closed__6));
v___x_941_ = lean_uint16_to_nat(v_port_937_);
v___x_942_ = l_Nat_reprFast(v___x_941_);
v___x_943_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_943_, 0, v___x_942_);
v___x_944_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_944_, 0, v___x_940_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
lean_inc(v___y_939_);
v___x_945_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_945_, 0, v___y_939_);
lean_ctor_set(v___x_945_, 1, v___x_944_);
v___x_946_ = 0;
v___x_947_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_947_, 0, v___x_945_);
lean_ctor_set_uint8(v___x_947_, sizeof(void*)*1, v___x_946_);
v___x_948_ = l_Repr_addAppParen(v___x_947_, v_prec_914_);
return v___x_948_;
}
}
}
v___jp_915_:
{
lean_object* v___x_917_; lean_object* v___x_918_; uint8_t v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_917_ = ((lean_object*)(l_Std_Http_URI_instReprPort_repr___closed__1));
lean_inc(v___y_916_);
v___x_918_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_918_, 0, v___y_916_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = 0;
v___x_920_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_920_, 0, v___x_918_);
lean_ctor_set_uint8(v___x_920_, sizeof(void*)*1, v___x_919_);
v___x_921_ = l_Repr_addAppParen(v___x_920_, v_prec_914_);
return v___x_921_;
}
v___jp_922_:
{
lean_object* v___x_924_; lean_object* v___x_925_; uint8_t v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_924_ = ((lean_object*)(l_Std_Http_URI_instReprPort_repr___closed__3));
lean_inc(v___y_923_);
v___x_925_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_925_, 0, v___y_923_);
lean_ctor_set(v___x_925_, 1, v___x_924_);
v___x_926_ = 0;
v___x_927_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_927_, 0, v___x_925_);
lean_ctor_set_uint8(v___x_927_, sizeof(void*)*1, v___x_926_);
v___x_928_ = l_Repr_addAppParen(v___x_927_, v_prec_914_);
return v___x_928_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPort_repr___boxed(lean_object* v_x_953_, lean_object* v_prec_954_){
_start:
{
lean_object* v_res_955_; 
v_res_955_ = l_Std_Http_URI_instReprPort_repr(v_x_953_, v_prec_954_);
lean_dec(v_prec_954_);
lean_dec(v_x_953_);
return v_res_955_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableEqPort_decEq(lean_object* v_x_958_, lean_object* v_x_959_){
_start:
{
switch(lean_obj_tag(v_x_958_))
{
case 0:
{
if (lean_obj_tag(v_x_959_) == 0)
{
uint8_t v___x_960_; 
v___x_960_ = 1;
return v___x_960_;
}
else
{
uint8_t v___x_961_; 
v___x_961_ = 0;
return v___x_961_;
}
}
case 1:
{
if (lean_obj_tag(v_x_959_) == 1)
{
uint8_t v___x_962_; 
v___x_962_ = 1;
return v___x_962_;
}
else
{
uint8_t v___x_963_; 
v___x_963_ = 0;
return v___x_963_;
}
}
default: 
{
if (lean_obj_tag(v_x_959_) == 2)
{
uint16_t v_port_964_; uint16_t v_port_965_; uint8_t v___x_966_; 
v_port_964_ = lean_ctor_get_uint16(v_x_958_, 0);
v_port_965_ = lean_ctor_get_uint16(v_x_959_, 0);
v___x_966_ = lean_uint16_dec_eq(v_port_964_, v_port_965_);
return v___x_966_;
}
else
{
uint8_t v___x_967_; 
v___x_967_ = 0;
return v___x_967_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableEqPort_decEq___boxed(lean_object* v_x_968_, lean_object* v_x_969_){
_start:
{
uint8_t v_res_970_; lean_object* v_r_971_; 
v_res_970_ = l_Std_Http_URI_instDecidableEqPort_decEq(v_x_968_, v_x_969_);
lean_dec(v_x_969_);
lean_dec(v_x_968_);
v_r_971_ = lean_box(v_res_970_);
return v_r_971_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableEqPort(lean_object* v_x_972_, lean_object* v_x_973_){
_start:
{
uint8_t v___x_974_; 
v___x_974_ = l_Std_Http_URI_instDecidableEqPort_decEq(v_x_972_, v_x_973_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableEqPort___boxed(lean_object* v_x_975_, lean_object* v_x_976_){
_start:
{
uint8_t v_res_977_; lean_object* v_r_978_; 
v_res_977_ = l_Std_Http_URI_instDecidableEqPort(v_x_975_, v_x_976_);
lean_dec(v_x_976_);
lean_dec(v_x_975_);
v_r_978_ = lean_box(v_res_977_);
return v_r_978_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedAuthority_default___closed__0(void){
_start:
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_979_ = lean_box(0);
v___x_980_ = l_Std_Http_URI_instInhabitedHost_default;
v___x_981_ = lean_box(0);
v___x_982_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_982_, 0, v___x_981_);
lean_ctor_set(v___x_982_, 1, v___x_980_);
lean_ctor_set(v___x_982_, 2, v___x_979_);
return v___x_982_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedAuthority_default(void){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = lean_obj_once(&l_Std_Http_URI_instInhabitedAuthority_default___closed__0, &l_Std_Http_URI_instInhabitedAuthority_default___closed__0_once, _init_l_Std_Http_URI_instInhabitedAuthority_default___closed__0);
return v___x_983_;
}
}
static lean_object* _init_l_Std_Http_URI_instInhabitedAuthority(void){
_start:
{
lean_object* v___x_984_; 
v___x_984_ = l_Std_Http_URI_instInhabitedAuthority_default;
return v___x_984_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0(lean_object* v_x_985_, lean_object* v_x_986_){
_start:
{
if (lean_obj_tag(v_x_985_) == 0)
{
lean_object* v___x_987_; 
v___x_987_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_987_;
}
else
{
lean_object* v_val_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v_val_988_ = lean_ctor_get(v_x_985_, 0);
lean_inc(v_val_988_);
lean_dec_ref_known(v_x_985_, 1);
v___x_989_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_990_ = l_Std_Http_URI_instReprUserInfo_repr___redArg(v_val_988_);
v___x_991_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_991_, 0, v___x_989_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
v___x_992_ = l_Repr_addAppParen(v___x_991_, v_x_986_);
return v___x_992_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0___boxed(lean_object* v_x_993_, lean_object* v_x_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0(v_x_993_, v_x_994_);
lean_dec(v_x_994_);
return v_res_995_;
}
}
static lean_object* _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1008_ = lean_unsigned_to_nat(8u);
v___x_1009_ = lean_nat_to_int(v___x_1008_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr___redArg(lean_object* v_x_1013_){
_start:
{
lean_object* v_userInfo_1014_; lean_object* v_host_1015_; lean_object* v_port_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; uint8_t v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v_ctr_1036_; lean_object* v_a_1037_; 
v_userInfo_1014_ = lean_ctor_get(v_x_1013_, 0);
lean_inc(v_userInfo_1014_);
v_host_1015_ = lean_ctor_get(v_x_1013_, 1);
lean_inc_ref(v_host_1015_);
v_port_1016_ = lean_ctor_get(v_x_1013_, 2);
lean_inc(v_port_1016_);
lean_dec_ref(v_x_1013_);
v___x_1017_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_1018_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__3));
v___x_1019_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_1020_ = lean_unsigned_to_nat(0u);
v___x_1021_ = l_Option_repr___at___00Std_Http_URI_instReprAuthority_repr_spec__0(v_userInfo_1014_, v___x_1020_);
v___x_1022_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1019_);
lean_ctor_set(v___x_1022_, 1, v___x_1021_);
v___x_1023_ = 0;
v___x_1024_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1024_, 0, v___x_1022_);
lean_ctor_set_uint8(v___x_1024_, sizeof(void*)*1, v___x_1023_);
v___x_1025_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1018_);
lean_ctor_set(v___x_1025_, 1, v___x_1024_);
v___x_1026_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_1027_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1025_);
lean_ctor_set(v___x_1027_, 1, v___x_1026_);
v___x_1028_ = lean_box(1);
v___x_1029_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1027_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
v___x_1030_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5));
v___x_1031_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1029_);
lean_ctor_set(v___x_1031_, 1, v___x_1030_);
v___x_1032_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
lean_ctor_set(v___x_1032_, 1, v___x_1017_);
v___x_1033_ = lean_obj_once(&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6, &l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once, _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6);
v___x_1034_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
switch(lean_obj_tag(v_host_1015_))
{
case 0:
{
lean_object* v_name_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1074_; 
v_name_1065_ = lean_ctor_get(v_host_1015_, 0);
v_isSharedCheck_1074_ = !lean_is_exclusive(v_host_1015_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1067_ = v_host_1015_;
v_isShared_1068_ = v_isSharedCheck_1074_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_name_1065_);
lean_dec(v_host_1015_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1074_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1072_; 
v___x_1069_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__1));
v___x_1070_ = l_String_quote(v_name_1065_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set_tag(v___x_1067_, 3);
lean_ctor_set(v___x_1067_, 0, v___x_1070_);
v___x_1072_ = v___x_1067_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v___x_1070_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
v_ctr_1036_ = v___x_1069_;
v_a_1037_ = v___x_1072_;
goto v___jp_1035_;
}
}
}
case 1:
{
lean_object* v_ipv4_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1084_; 
v_ipv4_1075_ = lean_ctor_get(v_host_1015_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v_host_1015_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1077_ = v_host_1015_;
v_isShared_1078_ = v_isSharedCheck_1084_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_ipv4_1075_);
lean_dec(v_host_1015_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1084_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1082_; 
v___x_1079_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__2));
v___x_1080_ = lean_uv_ntop_v4(v_ipv4_1075_);
lean_dec_ref(v_ipv4_1075_);
if (v_isShared_1078_ == 0)
{
lean_ctor_set_tag(v___x_1077_, 3);
lean_ctor_set(v___x_1077_, 0, v___x_1080_);
v___x_1082_ = v___x_1077_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v___x_1080_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
v_ctr_1036_ = v___x_1079_;
v_a_1037_ = v___x_1082_;
goto v___jp_1035_;
}
}
}
default: 
{
lean_object* v_ipv6_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1094_; 
v_ipv6_1085_ = lean_ctor_get(v_host_1015_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v_host_1015_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1087_ = v_host_1015_;
v_isShared_1088_ = v_isSharedCheck_1094_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_ipv6_1085_);
lean_dec(v_host_1015_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1094_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1092_; 
v___x_1089_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__3));
v___x_1090_ = lean_uv_ntop_v6(v_ipv6_1085_);
lean_dec_ref(v_ipv6_1085_);
if (v_isShared_1088_ == 0)
{
lean_ctor_set_tag(v___x_1087_, 3);
lean_ctor_set(v___x_1087_, 0, v___x_1090_);
v___x_1092_ = v___x_1087_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v___x_1090_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
v_ctr_1036_ = v___x_1089_;
v_a_1037_ = v___x_1092_;
goto v___jp_1035_;
}
}
}
}
v___jp_1035_:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1038_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__0));
v___x_1039_ = lean_string_append(v___x_1038_, v_ctr_1036_);
v___x_1040_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1039_);
v___x_1041_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1040_);
lean_ctor_set(v___x_1041_, 1, v___x_1028_);
v___x_1042_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1041_);
lean_ctor_set(v___x_1042_, 1, v_a_1037_);
v___x_1043_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1034_);
lean_ctor_set(v___x_1043_, 1, v___x_1042_);
v___x_1044_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1044_, 0, v___x_1043_);
lean_ctor_set_uint8(v___x_1044_, sizeof(void*)*1, v___x_1023_);
v___x_1045_ = l_Repr_addAppParen(v___x_1044_, v___x_1020_);
v___x_1046_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1033_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
v___x_1047_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
lean_ctor_set_uint8(v___x_1047_, sizeof(void*)*1, v___x_1023_);
v___x_1048_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1032_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
v___x_1049_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1048_);
lean_ctor_set(v___x_1049_, 1, v___x_1026_);
v___x_1050_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1049_);
lean_ctor_set(v___x_1050_, 1, v___x_1028_);
v___x_1051_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8));
v___x_1052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1050_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
v___x_1053_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
lean_ctor_set(v___x_1053_, 1, v___x_1017_);
v___x_1054_ = l_Std_Http_URI_instReprPort_repr(v_port_1016_, v___x_1020_);
lean_dec(v_port_1016_);
v___x_1055_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1033_);
lean_ctor_set(v___x_1055_, 1, v___x_1054_);
v___x_1056_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1056_, 0, v___x_1055_);
lean_ctor_set_uint8(v___x_1056_, sizeof(void*)*1, v___x_1023_);
v___x_1057_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1053_);
lean_ctor_set(v___x_1057_, 1, v___x_1056_);
v___x_1058_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_1059_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_1060_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1059_);
lean_ctor_set(v___x_1060_, 1, v___x_1057_);
v___x_1061_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_1062_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1060_);
lean_ctor_set(v___x_1062_, 1, v___x_1061_);
v___x_1063_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1058_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
v___x_1064_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1064_, 0, v___x_1063_);
lean_ctor_set_uint8(v___x_1064_, sizeof(void*)*1, v___x_1023_);
return v___x_1064_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr(lean_object* v_x_1095_, lean_object* v_prec_1096_){
_start:
{
lean_object* v___x_1097_; 
v___x_1097_ = l_Std_Http_URI_instReprAuthority_repr___redArg(v_x_1095_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprAuthority_repr___boxed(lean_object* v_x_1098_, lean_object* v_prec_1099_){
_start:
{
lean_object* v_res_1100_; 
v_res_1100_ = l_Std_Http_URI_instReprAuthority_repr(v_x_1098_, v_prec_1099_);
lean_dec(v_prec_1099_);
return v_res_1100_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0(lean_object* v_x_1103_, lean_object* v_x_1104_){
_start:
{
if (lean_obj_tag(v_x_1103_) == 0)
{
if (lean_obj_tag(v_x_1104_) == 0)
{
uint8_t v___x_1105_; 
v___x_1105_ = 1;
return v___x_1105_;
}
else
{
uint8_t v___x_1106_; 
v___x_1106_ = 0;
return v___x_1106_;
}
}
else
{
if (lean_obj_tag(v_x_1104_) == 0)
{
uint8_t v___x_1107_; 
v___x_1107_ = 0;
return v___x_1107_;
}
else
{
lean_object* v_val_1108_; lean_object* v_val_1109_; uint8_t v___x_1110_; 
v_val_1108_ = lean_ctor_get(v_x_1103_, 0);
v_val_1109_ = lean_ctor_get(v_x_1104_, 0);
v___x_1110_ = l_Std_Http_URI_instBEqUserInfo_beq(v_val_1108_, v_val_1109_);
return v___x_1110_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0___boxed(lean_object* v_x_1111_, lean_object* v_x_1112_){
_start:
{
uint8_t v_res_1113_; lean_object* v_r_1114_; 
v_res_1113_ = l_instBEqOption_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0(v_x_1111_, v_x_1112_);
lean_dec(v_x_1112_);
lean_dec(v_x_1111_);
v_r_1114_ = lean_box(v_res_1113_);
return v_r_1114_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqAuthority_beq(lean_object* v_x_1115_, lean_object* v_x_1116_){
_start:
{
lean_object* v_userInfo_1117_; lean_object* v_host_1118_; lean_object* v_port_1119_; lean_object* v_userInfo_1120_; lean_object* v_host_1121_; lean_object* v_port_1122_; uint8_t v___x_1123_; 
v_userInfo_1117_ = lean_ctor_get(v_x_1115_, 0);
v_host_1118_ = lean_ctor_get(v_x_1115_, 1);
v_port_1119_ = lean_ctor_get(v_x_1115_, 2);
v_userInfo_1120_ = lean_ctor_get(v_x_1116_, 0);
v_host_1121_ = lean_ctor_get(v_x_1116_, 1);
v_port_1122_ = lean_ctor_get(v_x_1116_, 2);
v___x_1123_ = l_instBEqOption_beq___at___00Std_Http_URI_instBEqAuthority_beq_spec__0(v_userInfo_1117_, v_userInfo_1120_);
if (v___x_1123_ == 0)
{
return v___x_1123_;
}
else
{
uint8_t v___x_1124_; 
v___x_1124_ = l_Std_Http_URI_instBEqHost_beq(v_host_1118_, v_host_1121_);
if (v___x_1124_ == 0)
{
return v___x_1124_;
}
else
{
uint8_t v___x_1125_; 
v___x_1125_ = l_Std_Http_URI_instDecidableEqPort_decEq(v_port_1119_, v_port_1122_);
return v___x_1125_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqAuthority_beq___boxed(lean_object* v_x_1126_, lean_object* v_x_1127_){
_start:
{
uint8_t v_res_1128_; lean_object* v_r_1129_; 
v_res_1128_ = l_Std_Http_URI_instBEqAuthority_beq(v_x_1126_, v_x_1127_);
lean_dec_ref(v_x_1127_);
lean_dec_ref(v_x_1126_);
v_r_1129_ = lean_box(v_res_1128_);
return v_r_1129_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringAuthority___lam__0(lean_object* v_auth_1135_){
_start:
{
lean_object* v___y_1137_; lean_object* v___y_1138_; lean_object* v___y_1139_; lean_object* v_userInfo_1142_; lean_object* v_host_1143_; lean_object* v_port_1144_; lean_object* v___y_1146_; lean_object* v___y_1147_; lean_object* v___y_1156_; 
v_userInfo_1142_ = lean_ctor_get(v_auth_1135_, 0);
lean_inc(v_userInfo_1142_);
v_host_1143_ = lean_ctor_get(v_auth_1135_, 1);
lean_inc_ref(v_host_1143_);
v_port_1144_ = lean_ctor_get(v_auth_1135_, 2);
lean_inc(v_port_1144_);
lean_dec_ref(v_auth_1135_);
if (lean_obj_tag(v_userInfo_1142_) == 0)
{
lean_object* v___x_1166_; 
v___x_1166_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_1156_ = v___x_1166_;
goto v___jp_1155_;
}
else
{
lean_object* v_val_1167_; lean_object* v_password_1168_; 
v_val_1167_ = lean_ctor_get(v_userInfo_1142_, 0);
lean_inc(v_val_1167_);
lean_dec_ref_known(v_userInfo_1142_, 1);
v_password_1168_ = lean_ctor_get(v_val_1167_, 1);
if (lean_obj_tag(v_password_1168_) == 0)
{
lean_object* v_username_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
v_username_1169_ = lean_ctor_get(v_val_1167_, 0);
lean_inc_ref(v_username_1169_);
lean_dec(v_val_1167_);
v___x_1170_ = lean_string_from_utf8_unchecked(v_username_1169_);
v___x_1171_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_1172_ = lean_string_append(v___x_1170_, v___x_1171_);
v___y_1156_ = v___x_1172_;
goto v___jp_1155_;
}
else
{
lean_object* v_username_1173_; lean_object* v_val_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
lean_inc_ref(v_password_1168_);
v_username_1173_ = lean_ctor_get(v_val_1167_, 0);
lean_inc_ref(v_username_1173_);
lean_dec(v_val_1167_);
v_val_1174_ = lean_ctor_get(v_password_1168_, 0);
lean_inc(v_val_1174_);
lean_dec_ref_known(v_password_1168_, 1);
v___x_1175_ = lean_string_from_utf8_unchecked(v_username_1173_);
v___x_1176_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_1177_ = lean_string_append(v___x_1175_, v___x_1176_);
v___x_1178_ = lean_string_from_utf8_unchecked(v_val_1174_);
v___x_1179_ = lean_string_append(v___x_1177_, v___x_1178_);
lean_dec_ref(v___x_1178_);
v___x_1180_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_1181_ = lean_string_append(v___x_1179_, v___x_1180_);
v___y_1156_ = v___x_1181_;
goto v___jp_1155_;
}
}
v___jp_1136_:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; 
v___x_1140_ = lean_string_append(v___y_1137_, v___y_1138_);
lean_dec_ref(v___y_1138_);
v___x_1141_ = lean_string_append(v___x_1140_, v___y_1139_);
lean_dec_ref(v___y_1139_);
return v___x_1141_;
}
v___jp_1145_:
{
switch(lean_obj_tag(v_port_1144_))
{
case 0:
{
lean_object* v___x_1148_; 
v___x_1148_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_1137_ = v___y_1146_;
v___y_1138_ = v___y_1147_;
v___y_1139_ = v___x_1148_;
goto v___jp_1136_;
}
case 1:
{
lean_object* v___x_1149_; 
v___x_1149_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_1137_ = v___y_1146_;
v___y_1138_ = v___y_1147_;
v___y_1139_ = v___x_1149_;
goto v___jp_1136_;
}
default: 
{
uint16_t v_port_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v_port_1150_ = lean_ctor_get_uint16(v_port_1144_, 0);
lean_dec_ref_known(v_port_1144_, 0);
v___x_1151_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_1152_ = lean_uint16_to_nat(v_port_1150_);
v___x_1153_ = l_Nat_reprFast(v___x_1152_);
v___x_1154_ = lean_string_append(v___x_1151_, v___x_1153_);
lean_dec_ref(v___x_1153_);
v___y_1137_ = v___y_1146_;
v___y_1138_ = v___y_1147_;
v___y_1139_ = v___x_1154_;
goto v___jp_1136_;
}
}
}
v___jp_1155_:
{
switch(lean_obj_tag(v_host_1143_))
{
case 0:
{
lean_object* v_name_1157_; 
v_name_1157_ = lean_ctor_get(v_host_1143_, 0);
lean_inc_ref(v_name_1157_);
lean_dec_ref_known(v_host_1143_, 1);
v___y_1146_ = v___y_1156_;
v___y_1147_ = v_name_1157_;
goto v___jp_1145_;
}
case 1:
{
lean_object* v_ipv4_1158_; lean_object* v___x_1159_; 
v_ipv4_1158_ = lean_ctor_get(v_host_1143_, 0);
lean_inc_ref(v_ipv4_1158_);
lean_dec_ref_known(v_host_1143_, 1);
v___x_1159_ = lean_uv_ntop_v4(v_ipv4_1158_);
lean_dec_ref(v_ipv4_1158_);
v___y_1146_ = v___y_1156_;
v___y_1147_ = v___x_1159_;
goto v___jp_1145_;
}
default: 
{
lean_object* v_ipv6_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; 
v_ipv6_1160_ = lean_ctor_get(v_host_1143_, 0);
lean_inc_ref(v_ipv6_1160_);
lean_dec_ref_known(v_host_1143_, 1);
v___x_1161_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_1162_ = lean_uv_ntop_v6(v_ipv6_1160_);
lean_dec_ref(v_ipv6_1160_);
v___x_1163_ = lean_string_append(v___x_1161_, v___x_1162_);
lean_dec_ref(v___x_1162_);
v___x_1164_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_1165_ = lean_string_append(v___x_1163_, v___x_1164_);
v___y_1146_ = v___y_1156_;
v___y_1147_ = v___x_1165_;
goto v___jp_1145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_1191_, lean_object* v_x_1192_, lean_object* v_x_1193_){
_start:
{
if (lean_obj_tag(v_x_1193_) == 0)
{
lean_dec(v_x_1191_);
return v_x_1192_;
}
else
{
lean_object* v_head_1194_; lean_object* v_tail_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1207_; 
v_head_1194_ = lean_ctor_get(v_x_1193_, 0);
v_tail_1195_ = lean_ctor_get(v_x_1193_, 1);
v_isSharedCheck_1207_ = !lean_is_exclusive(v_x_1193_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1197_ = v_x_1193_;
v_isShared_1198_ = v_isSharedCheck_1207_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_tail_1195_);
lean_inc(v_head_1194_);
lean_dec(v_x_1193_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1207_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1200_; 
lean_inc(v_x_1191_);
if (v_isShared_1198_ == 0)
{
lean_ctor_set_tag(v___x_1197_, 5);
lean_ctor_set(v___x_1197_, 1, v_x_1191_);
lean_ctor_set(v___x_1197_, 0, v_x_1192_);
v___x_1200_ = v___x_1197_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_x_1192_);
lean_ctor_set(v_reuseFailAlloc_1206_, 1, v_x_1191_);
v___x_1200_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1201_ = lean_string_from_utf8_unchecked(v_head_1194_);
v___x_1202_ = l_String_quote(v___x_1201_);
v___x_1203_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1202_);
v___x_1204_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1204_, 0, v___x_1200_);
lean_ctor_set(v___x_1204_, 1, v___x_1203_);
v_x_1192_ = v___x_1204_;
v_x_1193_ = v_tail_1195_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1(lean_object* v_x_1208_, lean_object* v_x_1209_, lean_object* v_x_1210_){
_start:
{
if (lean_obj_tag(v_x_1210_) == 0)
{
lean_dec(v_x_1208_);
return v_x_1209_;
}
else
{
lean_object* v_head_1211_; lean_object* v_tail_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1224_; 
v_head_1211_ = lean_ctor_get(v_x_1210_, 0);
v_tail_1212_ = lean_ctor_get(v_x_1210_, 1);
v_isSharedCheck_1224_ = !lean_is_exclusive(v_x_1210_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1214_ = v_x_1210_;
v_isShared_1215_ = v_isSharedCheck_1224_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_tail_1212_);
lean_inc(v_head_1211_);
lean_dec(v_x_1210_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1224_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1217_; 
lean_inc(v_x_1208_);
if (v_isShared_1215_ == 0)
{
lean_ctor_set_tag(v___x_1214_, 5);
lean_ctor_set(v___x_1214_, 1, v_x_1208_);
lean_ctor_set(v___x_1214_, 0, v_x_1209_);
v___x_1217_ = v___x_1214_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_x_1209_);
lean_ctor_set(v_reuseFailAlloc_1223_, 1, v_x_1208_);
v___x_1217_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1218_ = lean_string_from_utf8_unchecked(v_head_1211_);
v___x_1219_ = l_String_quote(v___x_1218_);
v___x_1220_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
v___x_1221_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1217_);
lean_ctor_set(v___x_1221_, 1, v___x_1220_);
v___x_1222_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1_spec__2(v_x_1208_, v___x_1221_, v_tail_1212_);
return v___x_1222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0___lam__0(lean_object* v___y_1225_){
_start:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1226_ = lean_string_from_utf8_unchecked(v___y_1225_);
v___x_1227_ = l_String_quote(v___x_1226_);
v___x_1228_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1227_);
return v___x_1228_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0(lean_object* v_x_1229_, lean_object* v_x_1230_){
_start:
{
if (lean_obj_tag(v_x_1229_) == 0)
{
lean_object* v___x_1231_; 
lean_dec(v_x_1230_);
v___x_1231_ = lean_box(0);
return v___x_1231_;
}
else
{
lean_object* v_tail_1232_; 
v_tail_1232_ = lean_ctor_get(v_x_1229_, 1);
if (lean_obj_tag(v_tail_1232_) == 0)
{
lean_object* v_head_1233_; lean_object* v___x_1234_; 
lean_dec(v_x_1230_);
v_head_1233_ = lean_ctor_get(v_x_1229_, 0);
lean_inc(v_head_1233_);
lean_dec_ref_known(v_x_1229_, 2);
v___x_1234_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0___lam__0(v_head_1233_);
return v___x_1234_;
}
else
{
lean_object* v_head_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
lean_inc(v_tail_1232_);
v_head_1235_ = lean_ctor_get(v_x_1229_, 0);
lean_inc(v_head_1235_);
lean_dec_ref_known(v_x_1229_, 2);
v___x_1236_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0___lam__0(v_head_1235_);
v___x_1237_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0_spec__1(v_x_1230_, v___x_1236_, v_tail_1232_);
return v___x_1237_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1242_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__0));
v___x_1243_ = lean_string_length(v___x_1242_);
return v___x_1243_;
}
}
static lean_object* _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1244_ = lean_obj_once(&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2, &l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2_once, _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__2);
v___x_1245_ = lean_nat_to_int(v___x_1244_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0(lean_object* v_xs_1253_){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; uint8_t v___x_1256_; 
v___x_1254_ = lean_array_get_size(v_xs_1253_);
v___x_1255_ = lean_unsigned_to_nat(0u);
v___x_1256_ = lean_nat_dec_eq(v___x_1254_, v___x_1255_);
if (v___x_1256_ == 0)
{
lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1257_ = lean_array_to_list(v_xs_1253_);
v___x_1258_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1));
v___x_1259_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0_spec__0(v___x_1257_, v___x_1258_);
v___x_1260_ = lean_obj_once(&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3, &l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3_once, _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3);
v___x_1261_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4));
v___x_1262_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1261_);
lean_ctor_set(v___x_1262_, 1, v___x_1259_);
v___x_1263_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5));
v___x_1264_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1262_);
lean_ctor_set(v___x_1264_, 1, v___x_1263_);
v___x_1265_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1260_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
v___x_1266_ = l_Std_Format_fill(v___x_1265_);
return v___x_1266_;
}
else
{
lean_object* v___x_1267_; 
lean_dec_ref(v_xs_1253_);
v___x_1267_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7));
return v___x_1267_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr___redArg(lean_object* v_x_1280_){
_start:
{
lean_object* v_segments_1281_; uint8_t v_absolute_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1314_; 
v_segments_1281_ = lean_ctor_get(v_x_1280_, 0);
v_absolute_1282_ = lean_ctor_get_uint8(v_x_1280_, sizeof(void*)*1);
v_isSharedCheck_1314_ = !lean_is_exclusive(v_x_1280_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1284_ = v_x_1280_;
v_isShared_1285_ = v_isSharedCheck_1314_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_segments_1281_);
lean_dec(v_x_1280_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1314_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; uint8_t v___x_1291_; lean_object* v___x_1293_; 
v___x_1286_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_1287_ = ((lean_object*)(l_Std_Http_URI_instReprPath_repr___redArg___closed__3));
v___x_1288_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_1289_ = l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0(v_segments_1281_);
v___x_1290_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1288_);
lean_ctor_set(v___x_1290_, 1, v___x_1289_);
v___x_1291_ = 0;
if (v_isShared_1285_ == 0)
{
lean_ctor_set_tag(v___x_1284_, 6);
lean_ctor_set(v___x_1284_, 0, v___x_1290_);
v___x_1293_ = v___x_1284_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v___x_1290_);
v___x_1293_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
lean_ctor_set_uint8(v___x_1293_, sizeof(void*)*1, v___x_1291_);
v___x_1294_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1287_);
lean_ctor_set(v___x_1294_, 1, v___x_1293_);
v___x_1295_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_1296_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1294_);
lean_ctor_set(v___x_1296_, 1, v___x_1295_);
v___x_1297_ = lean_box(1);
v___x_1298_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1296_);
lean_ctor_set(v___x_1298_, 1, v___x_1297_);
v___x_1299_ = ((lean_object*)(l_Std_Http_URI_instReprPath_repr___redArg___closed__5));
v___x_1300_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1298_);
lean_ctor_set(v___x_1300_, 1, v___x_1299_);
v___x_1301_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1300_);
lean_ctor_set(v___x_1301_, 1, v___x_1286_);
v___x_1302_ = l_Bool_repr___redArg(v_absolute_1282_);
v___x_1303_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1288_);
lean_ctor_set(v___x_1303_, 1, v___x_1302_);
v___x_1304_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
lean_ctor_set_uint8(v___x_1304_, sizeof(void*)*1, v___x_1291_);
v___x_1305_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1301_);
lean_ctor_set(v___x_1305_, 1, v___x_1304_);
v___x_1306_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_1307_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_1308_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1307_);
lean_ctor_set(v___x_1308_, 1, v___x_1305_);
v___x_1309_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_1310_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1308_);
lean_ctor_set(v___x_1310_, 1, v___x_1309_);
v___x_1311_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1306_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
v___x_1312_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1312_, 0, v___x_1311_);
lean_ctor_set_uint8(v___x_1312_, sizeof(void*)*1, v___x_1291_);
return v___x_1312_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr(lean_object* v_x_1315_, lean_object* v_prec_1316_){
_start:
{
lean_object* v___x_1317_; 
v___x_1317_ = l_Std_Http_URI_instReprPath_repr___redArg(v_x_1315_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprPath_repr___boxed(lean_object* v_x_1318_, lean_object* v_prec_1319_){
_start:
{
lean_object* v_res_1320_; 
v_res_1320_ = l_Std_Http_URI_instReprPath_repr(v_x_1318_, v_prec_1319_);
lean_dec(v_prec_1319_);
return v_res_1320_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(lean_object* v_xs_1323_, lean_object* v_ys_1324_, lean_object* v_x_1325_){
_start:
{
lean_object* v_zero_1326_; uint8_t v_isZero_1327_; 
v_zero_1326_ = lean_unsigned_to_nat(0u);
v_isZero_1327_ = lean_nat_dec_eq(v_x_1325_, v_zero_1326_);
if (v_isZero_1327_ == 1)
{
lean_dec(v_x_1325_);
return v_isZero_1327_;
}
else
{
lean_object* v_one_1328_; lean_object* v_n_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; uint8_t v___x_1332_; 
v_one_1328_ = lean_unsigned_to_nat(1u);
v_n_1329_ = lean_nat_sub(v_x_1325_, v_one_1328_);
lean_dec(v_x_1325_);
v___x_1330_ = lean_array_fget_borrowed(v_xs_1323_, v_n_1329_);
v___x_1331_ = lean_array_fget_borrowed(v_ys_1324_, v_n_1329_);
v___x_1332_ = lean_sarray_dec_eq(v___x_1330_, v___x_1331_);
if (v___x_1332_ == 0)
{
lean_dec(v_n_1329_);
return v___x_1332_;
}
else
{
v_x_1325_ = v_n_1329_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg___boxed(lean_object* v_xs_1334_, lean_object* v_ys_1335_, lean_object* v_x_1336_){
_start:
{
uint8_t v_res_1337_; lean_object* v_r_1338_; 
v_res_1337_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(v_xs_1334_, v_ys_1335_, v_x_1336_);
lean_dec_ref(v_ys_1335_);
lean_dec_ref(v_xs_1334_);
v_r_1338_ = lean_box(v_res_1337_);
return v_r_1338_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqPath_beq(lean_object* v_x_1339_, lean_object* v_x_1340_){
_start:
{
lean_object* v_segments_1341_; uint8_t v_absolute_1342_; lean_object* v_segments_1343_; uint8_t v_absolute_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; uint8_t v___x_1347_; 
v_segments_1341_ = lean_ctor_get(v_x_1339_, 0);
v_absolute_1342_ = lean_ctor_get_uint8(v_x_1339_, sizeof(void*)*1);
v_segments_1343_ = lean_ctor_get(v_x_1340_, 0);
v_absolute_1344_ = lean_ctor_get_uint8(v_x_1340_, sizeof(void*)*1);
v___x_1345_ = lean_array_get_size(v_segments_1341_);
v___x_1346_ = lean_array_get_size(v_segments_1343_);
v___x_1347_ = lean_nat_dec_eq(v___x_1345_, v___x_1346_);
if (v___x_1347_ == 0)
{
return v___x_1347_;
}
else
{
uint8_t v___x_1348_; 
v___x_1348_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(v_segments_1341_, v_segments_1343_, v___x_1345_);
if (v___x_1348_ == 0)
{
return v___x_1348_;
}
else
{
if (v_absolute_1344_ == 0)
{
if (v_absolute_1342_ == 0)
{
return v___x_1348_;
}
else
{
return v_absolute_1344_;
}
}
else
{
return v_absolute_1342_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqPath_beq___boxed(lean_object* v_x_1349_, lean_object* v_x_1350_){
_start:
{
uint8_t v_res_1351_; lean_object* v_r_1352_; 
v_res_1351_ = l_Std_Http_URI_instBEqPath_beq(v_x_1349_, v_x_1350_);
lean_dec_ref(v_x_1350_);
lean_dec_ref(v_x_1349_);
v_r_1352_ = lean_box(v_res_1351_);
return v_r_1352_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0(lean_object* v_xs_1353_, lean_object* v_ys_1354_, lean_object* v_hsz_1355_, lean_object* v_x_1356_, lean_object* v_x_1357_){
_start:
{
uint8_t v___x_1358_; 
v___x_1358_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___redArg(v_xs_1353_, v_ys_1354_, v_x_1356_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0___boxed(lean_object* v_xs_1359_, lean_object* v_ys_1360_, lean_object* v_hsz_1361_, lean_object* v_x_1362_, lean_object* v_x_1363_){
_start:
{
uint8_t v_res_1364_; lean_object* v_r_1365_; 
v_res_1364_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqPath_beq_spec__0(v_xs_1359_, v_ys_1360_, v_hsz_1361_, v_x_1362_, v_x_1363_);
lean_dec_ref(v_ys_1360_);
lean_dec_ref(v_xs_1359_);
v_r_1365_ = lean_box(v_res_1364_);
return v_r_1365_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringPath___lam__0(lean_object* v_x_1368_){
_start:
{
lean_object* v___x_1369_; 
v___x_1369_ = lean_string_from_utf8_unchecked(v_x_1368_);
return v___x_1369_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringPath___lam__1(lean_object* v___f_1390_, lean_object* v_path_1391_){
_start:
{
lean_object* v_segments_1392_; uint8_t v_absolute_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; size_t v_sz_1396_; size_t v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v_result_1400_; 
v_segments_1392_ = lean_ctor_get(v_path_1391_, 0);
lean_inc_ref(v_segments_1392_);
v_absolute_1393_ = lean_ctor_get_uint8(v_path_1391_, sizeof(void*)*1);
lean_dec_ref(v_path_1391_);
v___x_1394_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_1395_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__10));
v_sz_1396_ = lean_array_size(v_segments_1392_);
v___x_1397_ = ((size_t)0ULL);
v___x_1398_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1395_, v___f_1390_, v_sz_1396_, v___x_1397_, v_segments_1392_);
v___x_1399_ = lean_array_to_list(v___x_1398_);
v_result_1400_ = l_String_intercalate(v___x_1394_, v___x_1399_);
if (v_absolute_1393_ == 0)
{
return v_result_1400_;
}
else
{
lean_object* v___x_1401_; 
v___x_1401_ = lean_string_append(v___x_1394_, v_result_1400_);
lean_dec_ref(v_result_1400_);
return v___x_1401_;
}
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_Path_isEmpty(lean_object* v_p_1406_){
_start:
{
lean_object* v_segments_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; uint8_t v___x_1410_; 
v_segments_1407_ = lean_ctor_get(v_p_1406_, 0);
v___x_1408_ = lean_array_get_size(v_segments_1407_);
v___x_1409_ = lean_unsigned_to_nat(0u);
v___x_1410_ = lean_nat_dec_eq(v___x_1408_, v___x_1409_);
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_isEmpty___boxed(lean_object* v_p_1411_){
_start:
{
uint8_t v_res_1412_; lean_object* v_r_1413_; 
v_res_1412_ = l_Std_Http_URI_Path_isEmpty(v_p_1411_);
lean_dec_ref(v_p_1411_);
v_r_1413_ = lean_box(v_res_1412_);
return v_r_1413_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Std_Http_URI_Path_render_spec__0_spec__0(uint8_t v_a_1414_, lean_object* v_as_1415_, size_t v_i_1416_, size_t v_stop_1417_){
_start:
{
uint8_t v___x_1418_; 
v___x_1418_ = lean_usize_dec_eq(v_i_1416_, v_stop_1417_);
if (v___x_1418_ == 0)
{
lean_object* v___x_1419_; uint8_t v___x_1420_; uint8_t v___x_1421_; 
v___x_1419_ = lean_array_uget_borrowed(v_as_1415_, v_i_1416_);
v___x_1420_ = lean_unbox(v___x_1419_);
v___x_1421_ = lean_uint8_dec_eq(v_a_1414_, v___x_1420_);
if (v___x_1421_ == 0)
{
size_t v___x_1422_; size_t v___x_1423_; 
v___x_1422_ = ((size_t)1ULL);
v___x_1423_ = lean_usize_add(v_i_1416_, v___x_1422_);
v_i_1416_ = v___x_1423_;
goto _start;
}
else
{
return v___x_1421_;
}
}
else
{
uint8_t v___x_1425_; 
v___x_1425_ = 0;
return v___x_1425_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Std_Http_URI_Path_render_spec__0_spec__0___boxed(lean_object* v_a_1426_, lean_object* v_as_1427_, lean_object* v_i_1428_, lean_object* v_stop_1429_){
_start:
{
uint8_t v_a_boxed_1430_; size_t v_i_boxed_1431_; size_t v_stop_boxed_1432_; uint8_t v_res_1433_; lean_object* v_r_1434_; 
v_a_boxed_1430_ = lean_unbox(v_a_1426_);
v_i_boxed_1431_ = lean_unbox_usize(v_i_1428_);
lean_dec(v_i_1428_);
v_stop_boxed_1432_ = lean_unbox_usize(v_stop_1429_);
lean_dec(v_stop_1429_);
v_res_1433_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Std_Http_URI_Path_render_spec__0_spec__0(v_a_boxed_1430_, v_as_1427_, v_i_boxed_1431_, v_stop_boxed_1432_);
lean_dec_ref(v_as_1427_);
v_r_1434_ = lean_box(v_res_1433_);
return v_r_1434_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Std_Http_URI_Path_render_spec__0(lean_object* v_as_1435_, uint8_t v_a_1436_){
_start:
{
lean_object* v___x_1437_; lean_object* v___x_1438_; uint8_t v___x_1439_; 
v___x_1437_ = lean_unsigned_to_nat(0u);
v___x_1438_ = lean_array_get_size(v_as_1435_);
v___x_1439_ = lean_nat_dec_lt(v___x_1437_, v___x_1438_);
if (v___x_1439_ == 0)
{
return v___x_1439_;
}
else
{
size_t v___x_1440_; size_t v___x_1441_; uint8_t v___x_1442_; 
v___x_1440_ = ((size_t)0ULL);
v___x_1441_ = lean_usize_of_nat(v___x_1438_);
v___x_1442_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Std_Http_URI_Path_render_spec__0_spec__0(v_a_1436_, v_as_1435_, v___x_1440_, v___x_1441_);
return v___x_1442_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Std_Http_URI_Path_render_spec__0___boxed(lean_object* v_as_1443_, lean_object* v_a_1444_){
_start:
{
uint8_t v_a_boxed_1445_; uint8_t v_res_1446_; lean_object* v_r_1447_; 
v_a_boxed_1445_ = lean_unbox(v_a_1444_);
v_res_1446_ = l_Array_contains___at___00Std_Http_URI_Path_render_spec__0(v_as_1443_, v_a_boxed_1445_);
lean_dec_ref(v_as_1443_);
v_r_1447_ = lean_box(v_res_1446_);
return v_r_1447_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_render_spec__1(size_t v_sz_1448_, size_t v_i_1449_, lean_object* v_bs_1450_){
_start:
{
uint8_t v___x_1451_; 
v___x_1451_ = lean_usize_dec_lt(v_i_1449_, v_sz_1448_);
if (v___x_1451_ == 0)
{
return v_bs_1450_;
}
else
{
lean_object* v_v_1452_; lean_object* v___x_1453_; lean_object* v_bs_x27_1454_; lean_object* v___x_1455_; size_t v___x_1456_; size_t v___x_1457_; lean_object* v___x_1458_; 
v_v_1452_ = lean_array_uget(v_bs_1450_, v_i_1449_);
v___x_1453_ = lean_unsigned_to_nat(0u);
v_bs_x27_1454_ = lean_array_uset(v_bs_1450_, v_i_1449_, v___x_1453_);
v___x_1455_ = lean_string_from_utf8_unchecked(v_v_1452_);
v___x_1456_ = ((size_t)1ULL);
v___x_1457_ = lean_usize_add(v_i_1449_, v___x_1456_);
v___x_1458_ = lean_array_uset(v_bs_x27_1454_, v_i_1449_, v___x_1455_);
v_i_1449_ = v___x_1457_;
v_bs_1450_ = v___x_1458_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_render_spec__1___boxed(lean_object* v_sz_1460_, lean_object* v_i_1461_, lean_object* v_bs_1462_){
_start:
{
size_t v_sz_boxed_1463_; size_t v_i_boxed_1464_; lean_object* v_res_1465_; 
v_sz_boxed_1463_ = lean_unbox_usize(v_sz_1460_);
lean_dec(v_sz_1460_);
v_i_boxed_1464_ = lean_unbox_usize(v_i_1461_);
lean_dec(v_i_1461_);
v_res_1465_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_render_spec__1(v_sz_boxed_1463_, v_i_boxed_1464_, v_bs_1462_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_render(lean_object* v_p_1468_, uint8_t v_hasAuthority_1469_, uint8_t v_hasScheme_1470_){
_start:
{
lean_object* v___y_1472_; uint8_t v___y_1476_; lean_object* v___y_1477_; lean_object* v___y_1478_; lean_object* v___y_1479_; uint8_t v___y_1480_; lean_object* v___y_1492_; uint8_t v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1495_; lean_object* v___y_1496_; lean_object* v_segments_1504_; uint8_t v_absolute_1505_; lean_object* v___y_1507_; lean_object* v___x_1514_; size_t v_sz_1515_; size_t v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v_result_1519_; 
v_segments_1504_ = lean_ctor_get(v_p_1468_, 0);
lean_inc_ref_n(v_segments_1504_, 2);
v_absolute_1505_ = lean_ctor_get_uint8(v_p_1468_, sizeof(void*)*1);
lean_dec_ref(v_p_1468_);
v___x_1514_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v_sz_1515_ = lean_array_size(v_segments_1504_);
v___x_1516_ = ((size_t)0ULL);
v___x_1517_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_render_spec__1(v_sz_1515_, v___x_1516_, v_segments_1504_);
v___x_1518_ = lean_array_to_list(v___x_1517_);
v_result_1519_ = l_String_intercalate(v___x_1514_, v___x_1518_);
if (v_absolute_1505_ == 0)
{
v___y_1507_ = v_result_1519_;
goto v___jp_1506_;
}
else
{
lean_object* v___x_1520_; 
v___x_1520_ = lean_string_append(v___x_1514_, v_result_1519_);
lean_dec_ref(v_result_1519_);
v___y_1507_ = v___x_1520_;
goto v___jp_1506_;
}
v___jp_1471_:
{
lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1473_ = ((lean_object*)(l_Std_Http_URI_Path_render___closed__0));
v___x_1474_ = lean_string_append(v___x_1473_, v___y_1472_);
lean_dec_ref(v___y_1472_);
return v___x_1474_;
}
v___jp_1475_:
{
if (v_hasAuthority_1469_ == 0)
{
if (v___y_1476_ == 0)
{
if (v___y_1480_ == 0)
{
if (v_hasScheme_1470_ == 0)
{
if (lean_obj_tag(v___y_1479_) == 0)
{
return v___y_1478_;
}
else
{
lean_object* v_val_1481_; lean_object* v___x_1482_; uint8_t v___x_1483_; uint8_t v___x_1484_; 
v_val_1481_ = lean_ctor_get(v___y_1479_, 0);
lean_inc(v_val_1481_);
lean_dec_ref_known(v___y_1479_, 1);
v___x_1482_ = lean_byte_array_data(v_val_1481_);
v___x_1483_ = 58;
v___x_1484_ = l_Array_contains___at___00Std_Http_URI_Path_render_spec__0(v___x_1482_, v___x_1483_);
lean_dec_ref(v___x_1482_);
if (v___x_1484_ == 0)
{
return v___y_1478_;
}
else
{
v___y_1472_ = v___y_1478_;
goto v___jp_1471_;
}
}
}
else
{
lean_dec(v___y_1479_);
return v___y_1478_;
}
}
else
{
lean_dec(v___y_1479_);
v___y_1472_ = v___y_1478_;
goto v___jp_1471_;
}
}
else
{
lean_dec(v___y_1479_);
if (v___y_1480_ == 0)
{
return v___y_1478_;
}
else
{
lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___x_1485_ = ((lean_object*)(l_Std_Http_URI_Path_render___closed__1));
v___x_1486_ = lean_string_append(v___x_1485_, v___y_1478_);
lean_dec_ref(v___y_1478_);
return v___x_1486_;
}
}
}
else
{
lean_dec(v___y_1479_);
if (v___y_1476_ == 0)
{
lean_object* v___x_1487_; uint8_t v___x_1488_; 
v___x_1487_ = lean_string_utf8_byte_size(v___y_1478_);
v___x_1488_ = lean_nat_dec_eq(v___x_1487_, v___y_1477_);
if (v___x_1488_ == 0)
{
lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1489_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___x_1490_ = lean_string_append(v___x_1489_, v___y_1478_);
lean_dec_ref(v___y_1478_);
return v___x_1490_;
}
else
{
return v___y_1478_;
}
}
else
{
return v___y_1478_;
}
}
}
v___jp_1491_:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; uint8_t v___x_1499_; 
v___x_1497_ = lean_unsigned_to_nat(1u);
v___x_1498_ = lean_array_get_size(v___y_1492_);
lean_dec_ref(v___y_1492_);
v___x_1499_ = lean_nat_dec_lt(v___x_1497_, v___x_1498_);
if (v___x_1499_ == 0)
{
v___y_1476_ = v___y_1493_;
v___y_1477_ = v___y_1494_;
v___y_1478_ = v___y_1495_;
v___y_1479_ = v___y_1496_;
v___y_1480_ = v___x_1499_;
goto v___jp_1475_;
}
else
{
if (lean_obj_tag(v___y_1496_) == 0)
{
uint8_t v___x_1500_; 
v___x_1500_ = 0;
v___y_1476_ = v___y_1493_;
v___y_1477_ = v___y_1494_;
v___y_1478_ = v___y_1495_;
v___y_1479_ = v___y_1496_;
v___y_1480_ = v___x_1500_;
goto v___jp_1475_;
}
else
{
lean_object* v_val_1501_; lean_object* v___x_1502_; uint8_t v___x_1503_; 
v_val_1501_ = lean_ctor_get(v___y_1496_, 0);
v___x_1502_ = lean_byte_array_size(v_val_1501_);
v___x_1503_ = lean_nat_dec_eq(v___x_1502_, v___y_1494_);
v___y_1476_ = v___y_1493_;
v___y_1477_ = v___y_1494_;
v___y_1478_ = v___y_1495_;
v___y_1479_ = v___y_1496_;
v___y_1480_ = v___x_1503_;
goto v___jp_1475_;
}
}
}
v___jp_1506_:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; uint8_t v___x_1510_; 
v___x_1508_ = lean_unsigned_to_nat(0u);
v___x_1509_ = lean_array_get_size(v_segments_1504_);
v___x_1510_ = lean_nat_dec_lt(v___x_1508_, v___x_1509_);
if (v___x_1510_ == 0)
{
lean_object* v___x_1511_; 
v___x_1511_ = lean_box(0);
v___y_1492_ = v_segments_1504_;
v___y_1493_ = v_absolute_1505_;
v___y_1494_ = v___x_1508_;
v___y_1495_ = v___y_1507_;
v___y_1496_ = v___x_1511_;
goto v___jp_1491_;
}
else
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = lean_array_fget_borrowed(v_segments_1504_, v___x_1508_);
lean_inc(v___x_1512_);
v___x_1513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1512_);
v___y_1492_ = v_segments_1504_;
v___y_1493_ = v_absolute_1505_;
v___y_1494_ = v___x_1508_;
v___y_1495_ = v___y_1507_;
v___y_1496_ = v___x_1513_;
goto v___jp_1491_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_render___boxed(lean_object* v_p_1521_, lean_object* v_hasAuthority_1522_, lean_object* v_hasScheme_1523_){
_start:
{
uint8_t v_hasAuthority_boxed_1524_; uint8_t v_hasScheme_boxed_1525_; lean_object* v_res_1526_; 
v_hasAuthority_boxed_1524_ = lean_unbox(v_hasAuthority_1522_);
v_hasScheme_boxed_1525_ = lean_unbox(v_hasScheme_1523_);
v_res_1526_ = l_Std_Http_URI_Path_render(v_p_1521_, v_hasAuthority_boxed_1524_, v_hasScheme_boxed_1525_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_parent(lean_object* v_p_1527_){
_start:
{
lean_object* v_segments_1528_; uint8_t v_absolute_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; uint8_t v___x_1532_; 
v_segments_1528_ = lean_ctor_get(v_p_1527_, 0);
v_absolute_1529_ = lean_ctor_get_uint8(v_p_1527_, sizeof(void*)*1);
v___x_1530_ = lean_array_get_size(v_segments_1528_);
v___x_1531_ = lean_unsigned_to_nat(0u);
v___x_1532_ = lean_nat_dec_eq(v___x_1530_, v___x_1531_);
if (v___x_1532_ == 0)
{
lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1540_; 
lean_inc_ref(v_segments_1528_);
v_isSharedCheck_1540_ = !lean_is_exclusive(v_p_1527_);
if (v_isSharedCheck_1540_ == 0)
{
lean_object* v_unused_1541_; 
v_unused_1541_ = lean_ctor_get(v_p_1527_, 0);
lean_dec(v_unused_1541_);
v___x_1534_ = v_p_1527_;
v_isShared_1535_ = v_isSharedCheck_1540_;
goto v_resetjp_1533_;
}
else
{
lean_dec(v_p_1527_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1540_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1536_; lean_object* v___x_1538_; 
v___x_1536_ = lean_array_pop(v_segments_1528_);
if (v_isShared_1535_ == 0)
{
lean_ctor_set(v___x_1534_, 0, v___x_1536_);
v___x_1538_ = v___x_1534_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v___x_1536_);
lean_ctor_set_uint8(v_reuseFailAlloc_1539_, sizeof(void*)*1, v_absolute_1529_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
else
{
return v_p_1527_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_join(lean_object* v_p1_1542_, lean_object* v_p2_1543_){
_start:
{
uint8_t v_absolute_1544_; 
v_absolute_1544_ = lean_ctor_get_uint8(v_p2_1543_, sizeof(void*)*1);
if (v_absolute_1544_ == 0)
{
lean_object* v_segments_1545_; lean_object* v_segments_1546_; uint8_t v_absolute_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1555_; 
v_segments_1545_ = lean_ctor_get(v_p2_1543_, 0);
v_segments_1546_ = lean_ctor_get(v_p1_1542_, 0);
v_absolute_1547_ = lean_ctor_get_uint8(v_p1_1542_, sizeof(void*)*1);
v_isSharedCheck_1555_ = !lean_is_exclusive(v_p1_1542_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1549_ = v_p1_1542_;
v_isShared_1550_ = v_isSharedCheck_1555_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_segments_1546_);
lean_dec(v_p1_1542_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1555_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1551_; lean_object* v___x_1553_; 
v___x_1551_ = l_Array_append___redArg(v_segments_1546_, v_segments_1545_);
if (v_isShared_1550_ == 0)
{
lean_ctor_set(v___x_1549_, 0, v___x_1551_);
v___x_1553_ = v___x_1549_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v___x_1551_);
lean_ctor_set_uint8(v_reuseFailAlloc_1554_, sizeof(void*)*1, v_absolute_1547_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
else
{
lean_dec_ref(v_p1_1542_);
lean_inc_ref(v_p2_1543_);
return v_p2_1543_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_join___boxed(lean_object* v_p1_1556_, lean_object* v_p2_1557_){
_start:
{
lean_object* v_res_1558_; 
v_res_1558_ = l_Std_Http_URI_Path_join(v_p1_1556_, v_p2_1557_);
lean_dec_ref(v_p2_1557_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_append(lean_object* v_p_1559_, lean_object* v_segment_1560_){
_start:
{
lean_object* v_segments_1561_; uint8_t v_absolute_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1571_; 
v_segments_1561_ = lean_ctor_get(v_p_1559_, 0);
v_absolute_1562_ = lean_ctor_get_uint8(v_p_1559_, sizeof(void*)*1);
v_isSharedCheck_1571_ = !lean_is_exclusive(v_p_1559_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1564_ = v_p_1559_;
v_isShared_1565_ = v_isSharedCheck_1571_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_segments_1561_);
lean_dec(v_p_1559_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1571_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1569_; 
v___x_1566_ = l_Std_Http_URI_EncodedSegment_encode(v_segment_1560_);
v___x_1567_ = lean_array_push(v_segments_1561_, v___x_1566_);
if (v_isShared_1565_ == 0)
{
lean_ctor_set(v___x_1564_, 0, v___x_1567_);
v___x_1569_ = v___x_1564_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v___x_1567_);
lean_ctor_set_uint8(v_reuseFailAlloc_1570_, sizeof(void*)*1, v_absolute_1562_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_appendEncoded(lean_object* v_p_1572_, lean_object* v_segment_1573_){
_start:
{
lean_object* v_segments_1574_; uint8_t v_absolute_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1583_; 
v_segments_1574_ = lean_ctor_get(v_p_1572_, 0);
v_absolute_1575_ = lean_ctor_get_uint8(v_p_1572_, sizeof(void*)*1);
v_isSharedCheck_1583_ = !lean_is_exclusive(v_p_1572_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1577_ = v_p_1572_;
v_isShared_1578_ = v_isSharedCheck_1583_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_segments_1574_);
lean_dec(v_p_1572_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1583_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1579_; lean_object* v___x_1581_; 
v___x_1579_ = lean_array_push(v_segments_1574_, v_segment_1573_);
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 0, v___x_1579_);
v___x_1581_ = v___x_1577_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v___x_1579_);
lean_ctor_set_uint8(v_reuseFailAlloc_1582_, sizeof(void*)*1, v_absolute_1575_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
}
static lean_object* _init_l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1584_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___x_1585_ = l_Std_Http_URI_EncodedSegment_encode(v___x_1584_);
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___lam__0(lean_object* v_tail_1586_, lean_object* v_output_1587_){
_start:
{
uint8_t v___x_1588_; 
v___x_1588_ = l_List_isEmpty___redArg(v_tail_1586_);
if (v___x_1588_ == 0)
{
return v_output_1587_;
}
else
{
lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1589_ = lean_obj_once(&l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___lam__0___closed__0, &l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___lam__0___closed__0_once, _init_l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___lam__0___closed__0);
v___x_1590_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1589_);
lean_ctor_set(v___x_1590_, 1, v_output_1587_);
return v___x_1590_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___lam__0___boxed(lean_object* v_tail_1591_, lean_object* v_output_1592_){
_start:
{
lean_object* v_res_1593_; 
v_res_1593_ = l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___lam__0(v_tail_1591_, v_output_1592_);
lean_dec(v_tail_1591_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop(lean_object* v_input_1595_, lean_object* v_output_1596_){
_start:
{
if (lean_obj_tag(v_input_1595_) == 0)
{
lean_object* v___x_1597_; 
v___x_1597_ = l_List_reverse___redArg(v_output_1596_);
return v___x_1597_;
}
else
{
lean_object* v_head_1598_; lean_object* v_tail_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1619_; 
v_head_1598_ = lean_ctor_get(v_input_1595_, 0);
v_tail_1599_ = lean_ctor_get(v_input_1595_, 1);
v_isSharedCheck_1619_ = !lean_is_exclusive(v_input_1595_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1601_ = v_input_1595_;
v_isShared_1602_ = v_isSharedCheck_1619_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_tail_1599_);
lean_inc(v_head_1598_);
lean_dec(v_input_1595_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1619_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; uint8_t v___x_1605_; 
lean_inc(v_head_1598_);
v___x_1603_ = lean_string_from_utf8_unchecked(v_head_1598_);
v___x_1604_ = ((lean_object*)(l_String_dropSuffix_x3f___at___00Std_Http_URI_endsInNumber_spec__2___redArg___closed__0));
v___x_1605_ = lean_string_dec_eq(v___x_1603_, v___x_1604_);
if (v___x_1605_ == 0)
{
lean_object* v___x_1606_; uint8_t v___x_1607_; 
v___x_1606_ = ((lean_object*)(l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___closed__0));
v___x_1607_ = lean_string_dec_eq(v___x_1603_, v___x_1606_);
lean_dec_ref(v___x_1603_);
if (v___x_1607_ == 0)
{
lean_object* v___x_1609_; 
if (v_isShared_1602_ == 0)
{
lean_ctor_set(v___x_1601_, 1, v_output_1596_);
v___x_1609_ = v___x_1601_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v_head_1598_);
lean_ctor_set(v_reuseFailAlloc_1611_, 1, v_output_1596_);
v___x_1609_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
v_input_1595_ = v_tail_1599_;
v_output_1596_ = v___x_1609_;
goto _start;
}
}
else
{
lean_del_object(v___x_1601_);
lean_dec(v_head_1598_);
if (lean_obj_tag(v_output_1596_) == 0)
{
lean_object* v___x_1612_; 
v___x_1612_ = l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___lam__0(v_tail_1599_, v_output_1596_);
v_input_1595_ = v_tail_1599_;
v_output_1596_ = v___x_1612_;
goto _start;
}
else
{
lean_object* v_tail_1614_; lean_object* v___x_1615_; 
v_tail_1614_ = lean_ctor_get(v_output_1596_, 1);
lean_inc(v_tail_1614_);
lean_dec_ref_known(v_output_1596_, 2);
v___x_1615_ = l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___lam__0(v_tail_1599_, v_tail_1614_);
v_input_1595_ = v_tail_1599_;
v_output_1596_ = v___x_1615_;
goto _start;
}
}
}
else
{
lean_object* v___x_1617_; 
lean_dec_ref(v___x_1603_);
lean_del_object(v___x_1601_);
lean_dec(v_head_1598_);
v___x_1617_ = l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop___lam__0(v_tail_1599_, v_output_1596_);
v_input_1595_ = v_tail_1599_;
v_output_1596_ = v___x_1617_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_normalize(lean_object* v_p_1620_){
_start:
{
lean_object* v_segments_1621_; uint8_t v_absolute_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1633_; 
v_segments_1621_ = lean_ctor_get(v_p_1620_, 0);
v_absolute_1622_ = lean_ctor_get_uint8(v_p_1620_, sizeof(void*)*1);
v_isSharedCheck_1633_ = !lean_is_exclusive(v_p_1620_);
if (v_isSharedCheck_1633_ == 0)
{
v___x_1624_ = v_p_1620_;
v_isShared_1625_ = v_isSharedCheck_1633_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_segments_1621_);
lean_dec(v_p_1620_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1633_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1631_; 
v___x_1626_ = lean_array_to_list(v_segments_1621_);
v___x_1627_ = lean_box(0);
v___x_1628_ = l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Path_normalize_loop(v___x_1626_, v___x_1627_);
v___x_1629_ = lean_array_mk(v___x_1628_);
if (v_isShared_1625_ == 0)
{
lean_ctor_set(v___x_1624_, 0, v___x_1629_);
v___x_1631_ = v___x_1624_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v___x_1629_);
lean_ctor_set_uint8(v_reuseFailAlloc_1632_, sizeof(void*)*1, v_absolute_1622_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0(size_t v_sz_1634_, size_t v_i_1635_, lean_object* v_bs_1636_){
_start:
{
uint8_t v___x_1637_; 
v___x_1637_ = lean_usize_dec_lt(v_i_1635_, v_sz_1634_);
if (v___x_1637_ == 0)
{
return v_bs_1636_;
}
else
{
lean_object* v_v_1638_; lean_object* v___x_1639_; lean_object* v_bs_x27_1640_; lean_object* v___y_1642_; lean_object* v___x_1647_; 
v_v_1638_ = lean_array_uget(v_bs_1636_, v_i_1635_);
v___x_1639_ = lean_unsigned_to_nat(0u);
v_bs_x27_1640_ = lean_array_uset(v_bs_1636_, v_i_1635_, v___x_1639_);
v___x_1647_ = l_Std_Http_URI_EncodedSegment_decode(v_v_1638_);
if (lean_obj_tag(v___x_1647_) == 0)
{
lean_object* v___x_1648_; 
v___x_1648_ = lean_string_from_utf8_unchecked(v_v_1638_);
v___y_1642_ = v___x_1648_;
goto v___jp_1641_;
}
else
{
lean_object* v_val_1649_; 
lean_dec(v_v_1638_);
v_val_1649_ = lean_ctor_get(v___x_1647_, 0);
lean_inc(v_val_1649_);
lean_dec_ref_known(v___x_1647_, 1);
v___y_1642_ = v_val_1649_;
goto v___jp_1641_;
}
v___jp_1641_:
{
size_t v___x_1643_; size_t v___x_1644_; lean_object* v___x_1645_; 
v___x_1643_ = ((size_t)1ULL);
v___x_1644_ = lean_usize_add(v_i_1635_, v___x_1643_);
v___x_1645_ = lean_array_uset(v_bs_x27_1640_, v_i_1635_, v___y_1642_);
v_i_1635_ = v___x_1644_;
v_bs_1636_ = v___x_1645_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0___boxed(lean_object* v_sz_1650_, lean_object* v_i_1651_, lean_object* v_bs_1652_){
_start:
{
size_t v_sz_boxed_1653_; size_t v_i_boxed_1654_; lean_object* v_res_1655_; 
v_sz_boxed_1653_ = lean_unbox_usize(v_sz_1650_);
lean_dec(v_sz_1650_);
v_i_boxed_1654_ = lean_unbox_usize(v_i_1651_);
lean_dec(v_i_1651_);
v_res_1655_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0(v_sz_boxed_1653_, v_i_boxed_1654_, v_bs_1652_);
return v_res_1655_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Path_toDecodedSegments(lean_object* v_p_1656_){
_start:
{
lean_object* v_segments_1657_; size_t v_sz_1658_; size_t v___x_1659_; lean_object* v___x_1660_; 
v_segments_1657_ = lean_ctor_get(v_p_1656_, 0);
lean_inc_ref(v_segments_1657_);
lean_dec_ref(v_p_1656_);
v_sz_1658_ = lean_array_size(v_segments_1657_);
v___x_1659_ = ((size_t)0ULL);
v___x_1660_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Path_toDecodedSegments_spec__0(v_sz_1658_, v___x_1659_, v_segments_1657_);
return v___x_1660_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1___redArg(lean_object* v_xs_1669_){
_start:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; 
v___x_1670_ = ((lean_object*)(l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__3));
v___x_1671_ = l_Array_repr___redArg(v___x_1670_, v_xs_1669_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1(lean_object* v_xs_1672_, lean_object* v_x_1673_){
_start:
{
lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1674_ = ((lean_object*)(l_Std_Http_URI_instReprQuery___aux__1___redArg___closed__3));
v___x_1675_ = l_Array_repr___redArg(v___x_1674_, v_xs_1672_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___aux__1___boxed(lean_object* v_xs_1676_, lean_object* v_x_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l_Std_Http_URI_instReprQuery___aux__1(v_xs_1676_, v_x_1677_);
lean_dec(v_x_1677_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2_spec__3(lean_object* v_x_1679_, lean_object* v_x_1680_, lean_object* v_x_1681_){
_start:
{
if (lean_obj_tag(v_x_1681_) == 0)
{
lean_dec(v_x_1679_);
return v_x_1680_;
}
else
{
lean_object* v_head_1682_; lean_object* v_tail_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1692_; 
v_head_1682_ = lean_ctor_get(v_x_1681_, 0);
v_tail_1683_ = lean_ctor_get(v_x_1681_, 1);
v_isSharedCheck_1692_ = !lean_is_exclusive(v_x_1681_);
if (v_isSharedCheck_1692_ == 0)
{
v___x_1685_ = v_x_1681_;
v_isShared_1686_ = v_isSharedCheck_1692_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_tail_1683_);
lean_inc(v_head_1682_);
lean_dec(v_x_1681_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1692_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v___x_1688_; 
lean_inc(v_x_1679_);
if (v_isShared_1686_ == 0)
{
lean_ctor_set_tag(v___x_1685_, 5);
lean_ctor_set(v___x_1685_, 1, v_x_1679_);
lean_ctor_set(v___x_1685_, 0, v_x_1680_);
v___x_1688_ = v___x_1685_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_x_1680_);
lean_ctor_set(v_reuseFailAlloc_1691_, 1, v_x_1679_);
v___x_1688_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
lean_object* v___x_1689_; 
v___x_1689_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1688_);
lean_ctor_set(v___x_1689_, 1, v_head_1682_);
v_x_1680_ = v___x_1689_;
v_x_1681_ = v_tail_1683_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2(lean_object* v_x_1693_, lean_object* v_x_1694_){
_start:
{
if (lean_obj_tag(v_x_1693_) == 0)
{
lean_object* v___x_1695_; 
lean_dec(v_x_1694_);
v___x_1695_ = lean_box(0);
return v___x_1695_;
}
else
{
lean_object* v_tail_1696_; 
v_tail_1696_ = lean_ctor_get(v_x_1693_, 1);
if (lean_obj_tag(v_tail_1696_) == 0)
{
lean_object* v_head_1697_; 
lean_dec(v_x_1694_);
v_head_1697_ = lean_ctor_get(v_x_1693_, 0);
lean_inc(v_head_1697_);
lean_dec_ref_known(v_x_1693_, 2);
return v_head_1697_;
}
else
{
lean_object* v_head_1698_; lean_object* v___x_1699_; 
lean_inc(v_tail_1696_);
v_head_1698_ = lean_ctor_get(v_x_1693_, 0);
lean_inc(v_head_1698_);
lean_dec_ref_known(v_x_1693_, 2);
v___x_1699_ = l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2_spec__3(v_x_1694_, v_head_1698_, v_tail_1696_);
return v___x_1699_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1(lean_object* v_x_1700_, lean_object* v_x_1701_){
_start:
{
if (lean_obj_tag(v_x_1700_) == 0)
{
lean_object* v___x_1702_; 
v___x_1702_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_1702_;
}
else
{
lean_object* v_val_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1715_; 
v_val_1703_ = lean_ctor_get(v_x_1700_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v_x_1700_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1705_ = v_x_1700_;
v_isShared_1706_ = v_isSharedCheck_1715_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_val_1703_);
lean_dec(v_x_1700_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1715_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1711_; 
v___x_1707_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_1708_ = lean_string_from_utf8_unchecked(v_val_1703_);
v___x_1709_ = l_String_quote(v___x_1708_);
if (v_isShared_1706_ == 0)
{
lean_ctor_set_tag(v___x_1705_, 3);
lean_ctor_set(v___x_1705_, 0, v___x_1709_);
v___x_1711_ = v___x_1705_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v___x_1709_);
v___x_1711_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1712_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1712_, 0, v___x_1707_);
lean_ctor_set(v___x_1712_, 1, v___x_1711_);
v___x_1713_ = l_Repr_addAppParen(v___x_1712_, v_x_1701_);
return v___x_1713_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1___boxed(lean_object* v_x_1716_, lean_object* v_x_1717_){
_start:
{
lean_object* v_res_1718_; 
v_res_1718_ = l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1(v_x_1716_, v_x_1717_);
lean_dec(v_x_1717_);
return v_res_1718_;
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1721_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__0));
v___x_1722_ = lean_string_length(v___x_1721_);
return v___x_1722_;
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1723_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2, &l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2_once, _init_l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__2);
v___x_1724_ = lean_nat_to_int(v___x_1723_);
return v___x_1724_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(lean_object* v_x_1729_){
_start:
{
lean_object* v_fst_1730_; lean_object* v_snd_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1756_; 
v_fst_1730_ = lean_ctor_get(v_x_1729_, 0);
v_snd_1731_ = lean_ctor_get(v_x_1729_, 1);
v_isSharedCheck_1756_ = !lean_is_exclusive(v_x_1729_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1733_ = v_x_1729_;
v_isShared_1734_ = v_isSharedCheck_1756_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_snd_1731_);
lean_inc(v_fst_1730_);
lean_dec(v_x_1729_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1756_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1740_; 
v___x_1735_ = lean_string_from_utf8_unchecked(v_fst_1730_);
v___x_1736_ = l_String_quote(v___x_1735_);
v___x_1737_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1737_, 0, v___x_1736_);
v___x_1738_ = lean_box(0);
if (v_isShared_1734_ == 0)
{
lean_ctor_set_tag(v___x_1733_, 1);
lean_ctor_set(v___x_1733_, 1, v___x_1738_);
lean_ctor_set(v___x_1733_, 0, v___x_1737_);
v___x_1740_ = v___x_1733_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v___x_1737_);
lean_ctor_set(v_reuseFailAlloc_1755_, 1, v___x_1738_);
v___x_1740_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; uint8_t v___x_1753_; lean_object* v___x_1754_; 
v___x_1741_ = lean_unsigned_to_nat(0u);
v___x_1742_ = l_Option_repr___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__1(v_snd_1731_, v___x_1741_);
v___x_1743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1743_, 0, v___x_1742_);
lean_ctor_set(v___x_1743_, 1, v___x_1740_);
v___x_1744_ = l_List_reverse___redArg(v___x_1743_);
v___x_1745_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1));
v___x_1746_ = l_Std_Format_joinSep___at___00Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0_spec__2(v___x_1744_, v___x_1745_);
v___x_1747_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3, &l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3_once, _init_l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__3);
v___x_1748_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__4));
v___x_1749_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1749_, 0, v___x_1748_);
lean_ctor_set(v___x_1749_, 1, v___x_1746_);
v___x_1750_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg___closed__5));
v___x_1751_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1749_);
lean_ctor_set(v___x_1751_, 1, v___x_1750_);
v___x_1752_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1752_, 0, v___x_1747_);
lean_ctor_set(v___x_1752_, 1, v___x_1751_);
v___x_1753_ = 0;
v___x_1754_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1754_, 0, v___x_1752_);
lean_ctor_set_uint8(v___x_1754_, sizeof(void*)*1, v___x_1753_);
return v___x_1754_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4_spec__6(lean_object* v_x_1757_, lean_object* v_x_1758_, lean_object* v_x_1759_){
_start:
{
if (lean_obj_tag(v_x_1759_) == 0)
{
lean_dec(v_x_1757_);
return v_x_1758_;
}
else
{
lean_object* v_head_1760_; lean_object* v_tail_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1771_; 
v_head_1760_ = lean_ctor_get(v_x_1759_, 0);
v_tail_1761_ = lean_ctor_get(v_x_1759_, 1);
v_isSharedCheck_1771_ = !lean_is_exclusive(v_x_1759_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1763_ = v_x_1759_;
v_isShared_1764_ = v_isSharedCheck_1771_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_tail_1761_);
lean_inc(v_head_1760_);
lean_dec(v_x_1759_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1771_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1766_; 
lean_inc(v_x_1757_);
if (v_isShared_1764_ == 0)
{
lean_ctor_set_tag(v___x_1763_, 5);
lean_ctor_set(v___x_1763_, 1, v_x_1757_);
lean_ctor_set(v___x_1763_, 0, v_x_1758_);
v___x_1766_ = v___x_1763_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_x_1758_);
lean_ctor_set(v_reuseFailAlloc_1770_, 1, v_x_1757_);
v___x_1766_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1767_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(v_head_1760_);
v___x_1768_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1766_);
lean_ctor_set(v___x_1768_, 1, v___x_1767_);
v_x_1758_ = v___x_1768_;
v_x_1759_ = v_tail_1761_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4(lean_object* v_x_1772_, lean_object* v_x_1773_, lean_object* v_x_1774_){
_start:
{
if (lean_obj_tag(v_x_1774_) == 0)
{
lean_dec(v_x_1772_);
return v_x_1773_;
}
else
{
lean_object* v_head_1775_; lean_object* v_tail_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1786_; 
v_head_1775_ = lean_ctor_get(v_x_1774_, 0);
v_tail_1776_ = lean_ctor_get(v_x_1774_, 1);
v_isSharedCheck_1786_ = !lean_is_exclusive(v_x_1774_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1778_ = v_x_1774_;
v_isShared_1779_ = v_isSharedCheck_1786_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_tail_1776_);
lean_inc(v_head_1775_);
lean_dec(v_x_1774_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1786_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1781_; 
lean_inc(v_x_1772_);
if (v_isShared_1779_ == 0)
{
lean_ctor_set_tag(v___x_1778_, 5);
lean_ctor_set(v___x_1778_, 1, v_x_1772_);
lean_ctor_set(v___x_1778_, 0, v_x_1773_);
v___x_1781_ = v___x_1778_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_x_1773_);
lean_ctor_set(v_reuseFailAlloc_1785_, 1, v_x_1772_);
v___x_1781_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
v___x_1782_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(v_head_1775_);
v___x_1783_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1783_, 0, v___x_1781_);
lean_ctor_set(v___x_1783_, 1, v___x_1782_);
v___x_1784_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4_spec__6(v_x_1772_, v___x_1783_, v_tail_1776_);
return v___x_1784_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1(lean_object* v_x_1787_, lean_object* v_x_1788_){
_start:
{
if (lean_obj_tag(v_x_1787_) == 0)
{
lean_object* v___x_1789_; 
lean_dec(v_x_1788_);
v___x_1789_ = lean_box(0);
return v___x_1789_;
}
else
{
lean_object* v_tail_1790_; 
v_tail_1790_ = lean_ctor_get(v_x_1787_, 1);
if (lean_obj_tag(v_tail_1790_) == 0)
{
lean_object* v_head_1791_; lean_object* v___x_1792_; 
lean_dec(v_x_1788_);
v_head_1791_ = lean_ctor_get(v_x_1787_, 0);
lean_inc(v_head_1791_);
lean_dec_ref_known(v_x_1787_, 2);
v___x_1792_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(v_head_1791_);
return v___x_1792_;
}
else
{
lean_object* v_head_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
lean_inc(v_tail_1790_);
v_head_1793_ = lean_ctor_get(v_x_1787_, 0);
lean_inc(v_head_1793_);
lean_dec_ref_known(v_x_1787_, 2);
v___x_1794_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(v_head_1793_);
v___x_1795_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1_spec__4(v_x_1788_, v___x_1794_, v_tail_1790_);
return v___x_1795_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Http_URI_instReprQuery_spec__0(lean_object* v_xs_1796_){
_start:
{
lean_object* v___x_1797_; lean_object* v___x_1798_; uint8_t v___x_1799_; 
v___x_1797_ = lean_array_get_size(v_xs_1796_);
v___x_1798_ = lean_unsigned_to_nat(0u);
v___x_1799_ = lean_nat_dec_eq(v___x_1797_, v___x_1798_);
if (v___x_1799_ == 0)
{
lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1800_ = lean_array_to_list(v_xs_1796_);
v___x_1801_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__1));
v___x_1802_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__1(v___x_1800_, v___x_1801_);
v___x_1803_ = lean_obj_once(&l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3, &l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3_once, _init_l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__3);
v___x_1804_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__4));
v___x_1805_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1805_, 0, v___x_1804_);
lean_ctor_set(v___x_1805_, 1, v___x_1802_);
v___x_1806_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__5));
v___x_1807_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1805_);
lean_ctor_set(v___x_1807_, 1, v___x_1806_);
v___x_1808_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1803_);
lean_ctor_set(v___x_1808_, 1, v___x_1807_);
v___x_1809_ = l_Std_Format_fill(v___x_1808_);
return v___x_1809_;
}
else
{
lean_object* v___x_1810_; 
lean_dec_ref(v_xs_1796_);
v___x_1810_ = ((lean_object*)(l_Array_repr___at___00Std_Http_URI_instReprPath_repr_spec__0___closed__7));
return v___x_1810_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___lam__0(lean_object* v___y_1811_, lean_object* v___y_1812_){
_start:
{
lean_object* v___x_1813_; 
v___x_1813_ = l_Array_repr___at___00Std_Http_URI_instReprQuery_spec__0(v___y_1811_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprQuery___lam__0___boxed(lean_object* v___y_1814_, lean_object* v___y_1815_){
_start:
{
lean_object* v_res_1816_; 
v_res_1816_ = l_Std_Http_URI_instReprQuery___lam__0(v___y_1814_, v___y_1815_);
lean_dec(v___y_1815_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0(lean_object* v_x_1819_, lean_object* v_x_1820_){
_start:
{
lean_object* v___x_1821_; 
v___x_1821_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___redArg(v_x_1819_);
return v___x_1821_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0___boxed(lean_object* v_x_1822_, lean_object* v_x_1823_){
_start:
{
lean_object* v_res_1824_; 
v_res_1824_ = l_Prod_repr___at___00Array_repr___at___00Std_Http_URI_instReprQuery_spec__0_spec__0(v_x_1822_, v_x_1823_);
lean_dec(v_x_1823_);
return v_res_1824_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___aux__1___lam__0(lean_object* v___f_1829_, lean_object* v_x_1830_, lean_object* v_x_1831_){
_start:
{
lean_object* v_fst_1832_; lean_object* v_snd_1833_; lean_object* v_fst_1834_; lean_object* v_snd_1835_; uint8_t v___x_1836_; 
v_fst_1832_ = lean_ctor_get(v_x_1830_, 0);
lean_inc(v_fst_1832_);
v_snd_1833_ = lean_ctor_get(v_x_1830_, 1);
lean_inc(v_snd_1833_);
lean_dec_ref(v_x_1830_);
v_fst_1834_ = lean_ctor_get(v_x_1831_, 0);
lean_inc(v_fst_1834_);
v_snd_1835_ = lean_ctor_get(v_x_1831_, 1);
lean_inc(v_snd_1835_);
lean_dec_ref(v_x_1831_);
v___x_1836_ = lean_sarray_dec_eq(v_fst_1832_, v_fst_1834_);
lean_dec(v_fst_1834_);
lean_dec(v_fst_1832_);
if (v___x_1836_ == 0)
{
lean_dec(v_snd_1835_);
lean_dec(v_snd_1833_);
lean_dec_ref(v___f_1829_);
return v___x_1836_;
}
else
{
uint8_t v___x_1837_; 
v___x_1837_ = l_instBEqOption_beq___redArg(v___f_1829_, v_snd_1833_, v_snd_1835_);
return v___x_1837_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___aux__1___lam__0___boxed(lean_object* v___f_1838_, lean_object* v_x_1839_, lean_object* v_x_1840_){
_start:
{
uint8_t v_res_1841_; lean_object* v_r_1842_; 
v_res_1841_ = l_Std_Http_URI_instBEqQuery___aux__1___lam__0(v___f_1838_, v_x_1839_, v_x_1840_);
v_r_1842_ = lean_box(v_res_1841_);
return v_r_1842_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___aux__1(lean_object* v_xs_1846_, lean_object* v_ys_1847_){
_start:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; uint8_t v___x_1850_; 
v___x_1848_ = lean_array_get_size(v_xs_1846_);
v___x_1849_ = lean_array_get_size(v_ys_1847_);
v___x_1850_ = lean_nat_dec_eq(v___x_1848_, v___x_1849_);
if (v___x_1850_ == 0)
{
return v___x_1850_;
}
else
{
lean_object* v___f_1851_; uint8_t v___x_1852_; 
v___f_1851_ = ((lean_object*)(l_Std_Http_URI_instBEqQuery___aux__1___closed__1));
v___x_1852_ = l_Array_isEqvAux___redArg(v_xs_1846_, v_ys_1847_, v___f_1851_, v___x_1848_);
return v___x_1852_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___aux__1___boxed(lean_object* v_xs_1853_, lean_object* v_ys_1854_){
_start:
{
uint8_t v_res_1855_; lean_object* v_r_1856_; 
v_res_1855_ = l_Std_Http_URI_instBEqQuery___aux__1(v_xs_1853_, v_ys_1854_);
lean_dec_ref(v_ys_1854_);
lean_dec_ref(v_xs_1853_);
v_r_1856_ = lean_box(v_res_1855_);
return v_r_1856_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_URI_instBEqQuery_spec__0(lean_object* v_x_1857_, lean_object* v_x_1858_){
_start:
{
if (lean_obj_tag(v_x_1857_) == 0)
{
if (lean_obj_tag(v_x_1858_) == 0)
{
uint8_t v___x_1859_; 
v___x_1859_ = 1;
return v___x_1859_;
}
else
{
uint8_t v___x_1860_; 
v___x_1860_ = 0;
return v___x_1860_;
}
}
else
{
if (lean_obj_tag(v_x_1858_) == 0)
{
uint8_t v___x_1861_; 
v___x_1861_ = 0;
return v___x_1861_;
}
else
{
lean_object* v_val_1862_; lean_object* v_val_1863_; uint8_t v___x_1864_; 
v_val_1862_ = lean_ctor_get(v_x_1857_, 0);
v_val_1863_ = lean_ctor_get(v_x_1858_, 0);
v___x_1864_ = lean_sarray_dec_eq(v_val_1862_, v_val_1863_);
return v___x_1864_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_URI_instBEqQuery_spec__0___boxed(lean_object* v_x_1865_, lean_object* v_x_1866_){
_start:
{
uint8_t v_res_1867_; lean_object* v_r_1868_; 
v_res_1867_ = l_instBEqOption_beq___at___00Std_Http_URI_instBEqQuery_spec__0(v_x_1865_, v_x_1866_);
lean_dec(v_x_1866_);
lean_dec(v_x_1865_);
v_r_1868_ = lean_box(v_res_1867_);
return v_r_1868_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(lean_object* v_xs_1869_, lean_object* v_ys_1870_, lean_object* v_x_1871_){
_start:
{
lean_object* v_zero_1872_; uint8_t v_isZero_1873_; 
v_zero_1872_ = lean_unsigned_to_nat(0u);
v_isZero_1873_ = lean_nat_dec_eq(v_x_1871_, v_zero_1872_);
if (v_isZero_1873_ == 1)
{
lean_dec(v_x_1871_);
return v_isZero_1873_;
}
else
{
lean_object* v_one_1874_; lean_object* v_n_1875_; lean_object* v___x_1876_; lean_object* v_fst_1877_; lean_object* v_snd_1878_; lean_object* v___x_1879_; lean_object* v_fst_1880_; lean_object* v_snd_1881_; uint8_t v___x_1882_; 
v_one_1874_ = lean_unsigned_to_nat(1u);
v_n_1875_ = lean_nat_sub(v_x_1871_, v_one_1874_);
lean_dec(v_x_1871_);
v___x_1876_ = lean_array_fget_borrowed(v_xs_1869_, v_n_1875_);
v_fst_1877_ = lean_ctor_get(v___x_1876_, 0);
v_snd_1878_ = lean_ctor_get(v___x_1876_, 1);
v___x_1879_ = lean_array_fget_borrowed(v_ys_1870_, v_n_1875_);
v_fst_1880_ = lean_ctor_get(v___x_1879_, 0);
v_snd_1881_ = lean_ctor_get(v___x_1879_, 1);
v___x_1882_ = lean_sarray_dec_eq(v_fst_1877_, v_fst_1880_);
if (v___x_1882_ == 0)
{
lean_dec(v_n_1875_);
return v___x_1882_;
}
else
{
uint8_t v___x_1883_; 
v___x_1883_ = l_instBEqOption_beq___at___00Std_Http_URI_instBEqQuery_spec__0(v_snd_1878_, v_snd_1881_);
if (v___x_1883_ == 0)
{
lean_dec(v_n_1875_);
return v___x_1883_;
}
else
{
v_x_1871_ = v_n_1875_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg___boxed(lean_object* v_xs_1885_, lean_object* v_ys_1886_, lean_object* v_x_1887_){
_start:
{
uint8_t v_res_1888_; lean_object* v_r_1889_; 
v_res_1888_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(v_xs_1885_, v_ys_1886_, v_x_1887_);
lean_dec_ref(v_ys_1886_);
lean_dec_ref(v_xs_1885_);
v_r_1889_ = lean_box(v_res_1888_);
return v_r_1889_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqQuery___lam__0(lean_object* v___y_1890_, lean_object* v___y_1891_){
_start:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; uint8_t v___x_1894_; 
v___x_1892_ = lean_array_get_size(v___y_1890_);
v___x_1893_ = lean_array_get_size(v___y_1891_);
v___x_1894_ = lean_nat_dec_eq(v___x_1892_, v___x_1893_);
if (v___x_1894_ == 0)
{
return v___x_1894_;
}
else
{
uint8_t v___x_1895_; 
v___x_1895_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(v___y_1890_, v___y_1891_, v___x_1892_);
return v___x_1895_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqQuery___lam__0___boxed(lean_object* v___y_1896_, lean_object* v___y_1897_){
_start:
{
uint8_t v_res_1898_; lean_object* v_r_1899_; 
v_res_1898_ = l_Std_Http_URI_instBEqQuery___lam__0(v___y_1896_, v___y_1897_);
lean_dec_ref(v___y_1897_);
lean_dec_ref(v___y_1896_);
v_r_1899_ = lean_box(v_res_1898_);
return v_r_1899_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1(lean_object* v_xs_1902_, lean_object* v_ys_1903_, lean_object* v_hsz_1904_, lean_object* v_x_1905_, lean_object* v_x_1906_){
_start:
{
uint8_t v___x_1907_; 
v___x_1907_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(v_xs_1902_, v_ys_1903_, v_x_1905_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___boxed(lean_object* v_xs_1908_, lean_object* v_ys_1909_, lean_object* v_hsz_1910_, lean_object* v_x_1911_, lean_object* v_x_1912_){
_start:
{
uint8_t v_res_1913_; lean_object* v_r_1914_; 
v_res_1913_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1(v_xs_1908_, v_ys_1909_, v_hsz_1910_, v_x_1911_, v_x_1912_);
lean_dec_ref(v_ys_1909_);
lean_dec_ref(v_xs_1908_);
v_r_1914_ = lean_box(v_res_1913_);
return v_r_1914_;
}
}
LEAN_EXPORT lean_object* l_List_eraseDups___at___00Std_Http_URI_Query_names_spec__1(lean_object* v_as_1915_){
_start:
{
lean_object* v___f_1916_; lean_object* v___x_1917_; 
v___f_1916_ = ((lean_object*)(l_Std_Http_URI_instBEqQuery___aux__1___closed__0));
v___x_1917_ = l_List_eraseDupsBy___redArg(v___f_1916_, v_as_1915_);
return v___x_1917_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0(size_t v_sz_1918_, size_t v_i_1919_, lean_object* v_bs_1920_){
_start:
{
uint8_t v___x_1921_; 
v___x_1921_ = lean_usize_dec_lt(v_i_1919_, v_sz_1918_);
if (v___x_1921_ == 0)
{
return v_bs_1920_;
}
else
{
lean_object* v_v_1922_; lean_object* v_fst_1923_; lean_object* v___x_1924_; lean_object* v_bs_x27_1925_; size_t v___x_1926_; size_t v___x_1927_; lean_object* v___x_1928_; 
v_v_1922_ = lean_array_uget_borrowed(v_bs_1920_, v_i_1919_);
v_fst_1923_ = lean_ctor_get(v_v_1922_, 0);
lean_inc(v_fst_1923_);
v___x_1924_ = lean_unsigned_to_nat(0u);
v_bs_x27_1925_ = lean_array_uset(v_bs_1920_, v_i_1919_, v___x_1924_);
v___x_1926_ = ((size_t)1ULL);
v___x_1927_ = lean_usize_add(v_i_1919_, v___x_1926_);
v___x_1928_ = lean_array_uset(v_bs_x27_1925_, v_i_1919_, v_fst_1923_);
v_i_1919_ = v___x_1927_;
v_bs_1920_ = v___x_1928_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0___boxed(lean_object* v_sz_1930_, lean_object* v_i_1931_, lean_object* v_bs_1932_){
_start:
{
size_t v_sz_boxed_1933_; size_t v_i_boxed_1934_; lean_object* v_res_1935_; 
v_sz_boxed_1933_ = lean_unbox_usize(v_sz_1930_);
lean_dec(v_sz_1930_);
v_i_boxed_1934_ = lean_unbox_usize(v_i_1931_);
lean_dec(v_i_1931_);
v_res_1935_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0(v_sz_boxed_1933_, v_i_boxed_1934_, v_bs_1932_);
return v_res_1935_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_names(lean_object* v_query_1936_){
_start:
{
size_t v_sz_1937_; size_t v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; 
v_sz_1937_ = lean_array_size(v_query_1936_);
v___x_1938_ = ((size_t)0ULL);
v___x_1939_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_names_spec__0(v_sz_1937_, v___x_1938_, v_query_1936_);
v___x_1940_ = lean_array_to_list(v___x_1939_);
v___x_1941_ = l_List_eraseDups___at___00Std_Http_URI_Query_names_spec__1(v___x_1940_);
v___x_1942_ = lean_array_mk(v___x_1941_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0(size_t v_sz_1943_, size_t v_i_1944_, lean_object* v_bs_1945_){
_start:
{
uint8_t v___x_1946_; 
v___x_1946_ = lean_usize_dec_lt(v_i_1944_, v_sz_1943_);
if (v___x_1946_ == 0)
{
return v_bs_1945_;
}
else
{
lean_object* v_v_1947_; lean_object* v_snd_1948_; lean_object* v___x_1949_; lean_object* v_bs_x27_1950_; size_t v___x_1951_; size_t v___x_1952_; lean_object* v___x_1953_; 
v_v_1947_ = lean_array_uget_borrowed(v_bs_1945_, v_i_1944_);
v_snd_1948_ = lean_ctor_get(v_v_1947_, 1);
lean_inc(v_snd_1948_);
v___x_1949_ = lean_unsigned_to_nat(0u);
v_bs_x27_1950_ = lean_array_uset(v_bs_1945_, v_i_1944_, v___x_1949_);
v___x_1951_ = ((size_t)1ULL);
v___x_1952_ = lean_usize_add(v_i_1944_, v___x_1951_);
v___x_1953_ = lean_array_uset(v_bs_x27_1950_, v_i_1944_, v_snd_1948_);
v_i_1944_ = v___x_1952_;
v_bs_1945_ = v___x_1953_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0___boxed(lean_object* v_sz_1955_, lean_object* v_i_1956_, lean_object* v_bs_1957_){
_start:
{
size_t v_sz_boxed_1958_; size_t v_i_boxed_1959_; lean_object* v_res_1960_; 
v_sz_boxed_1958_ = lean_unbox_usize(v_sz_1955_);
lean_dec(v_sz_1955_);
v_i_boxed_1959_ = lean_unbox_usize(v_i_1956_);
lean_dec(v_i_1956_);
v_res_1960_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0(v_sz_boxed_1958_, v_i_boxed_1959_, v_bs_1957_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_values(lean_object* v_query_1961_){
_start:
{
size_t v_sz_1962_; size_t v___x_1963_; lean_object* v___x_1964_; 
v_sz_1962_ = lean_array_size(v_query_1961_);
v___x_1963_ = ((size_t)0ULL);
v___x_1964_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_values_spec__0(v_sz_1962_, v___x_1963_, v_query_1961_);
return v___x_1964_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toArray(lean_object* v_query_1965_){
_start:
{
lean_inc_ref(v_query_1965_);
return v_query_1965_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toArray___boxed(lean_object* v_query_1966_){
_start:
{
lean_object* v_res_1967_; 
v_res_1967_ = l_Std_Http_URI_Query_toArray(v_query_1966_);
lean_dec_ref(v_query_1966_);
return v_res_1967_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0_spec__0___redArg(lean_object* v_s_1968_, lean_object* v_replacement_1969_, lean_object* v_a_1970_, lean_object* v_b_1971_){
_start:
{
lean_object* v_str_1972_; lean_object* v_startInclusive_1973_; lean_object* v_endExclusive_1974_; lean_object* v___x_1975_; uint8_t v_decide_1976_; 
v_str_1972_ = lean_ctor_get(v_s_1968_, 0);
v_startInclusive_1973_ = lean_ctor_get(v_s_1968_, 1);
v_endExclusive_1974_ = lean_ctor_get(v_s_1968_, 2);
v___x_1975_ = lean_nat_sub(v_endExclusive_1974_, v_startInclusive_1973_);
v_decide_1976_ = lean_nat_dec_eq(v_a_1970_, v___x_1975_);
lean_dec(v___x_1975_);
if (v_decide_1976_ == 0)
{
uint32_t v___x_1977_; lean_object* v___x_1978_; uint32_t v___x_1979_; uint8_t v___x_1980_; 
v___x_1977_ = 61;
v___x_1978_ = lean_nat_add(v_startInclusive_1973_, v_a_1970_);
v___x_1979_ = lean_string_utf8_get_fast(v_str_1972_, v___x_1978_);
v___x_1980_ = lean_uint32_dec_eq(v___x_1979_, v___x_1977_);
if (v___x_1980_ == 0)
{
lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v_str_1984_; lean_object* v_startInclusive_1985_; lean_object* v_endExclusive_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
v___x_1981_ = lean_string_utf8_next_fast(v_str_1972_, v___x_1978_);
lean_dec(v___x_1978_);
v___x_1982_ = lean_nat_sub(v___x_1981_, v_startInclusive_1973_);
lean_inc_ref(v_s_1968_);
v___x_1983_ = l_String_Slice_slice_x21(v_s_1968_, v_a_1970_, v___x_1982_);
lean_dec(v_a_1970_);
v_str_1984_ = lean_ctor_get(v___x_1983_, 0);
lean_inc_ref(v_str_1984_);
v_startInclusive_1985_ = lean_ctor_get(v___x_1983_, 1);
lean_inc(v_startInclusive_1985_);
v_endExclusive_1986_ = lean_ctor_get(v___x_1983_, 2);
lean_inc(v_endExclusive_1986_);
lean_dec_ref(v___x_1983_);
v___x_1987_ = lean_string_utf8_extract_fast(v_str_1984_, v_startInclusive_1985_, v_endExclusive_1986_);
lean_dec(v_endExclusive_1986_);
lean_dec(v_startInclusive_1985_);
lean_dec_ref(v_str_1984_);
v___x_1988_ = lean_string_append(v_b_1971_, v___x_1987_);
lean_dec_ref(v___x_1987_);
v_a_1970_ = v___x_1982_;
v_b_1971_ = v___x_1988_;
goto _start;
}
else
{
lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1990_ = lean_string_utf8_next_fast(v_str_1972_, v___x_1978_);
v___x_1991_ = lean_nat_sub(v___x_1990_, v___x_1978_);
lean_dec(v___x_1978_);
v___x_1992_ = lean_nat_add(v_a_1970_, v___x_1991_);
lean_dec(v___x_1991_);
lean_dec(v_a_1970_);
v___x_1993_ = lean_unsigned_to_nat(0u);
v___x_1994_ = lean_string_utf8_byte_size(v_replacement_1969_);
v___x_1995_ = lean_string_utf8_extract_fast(v_replacement_1969_, v___x_1993_, v___x_1994_);
v___x_1996_ = lean_string_append(v_b_1971_, v___x_1995_);
lean_dec_ref(v___x_1995_);
v_a_1970_ = v___x_1992_;
v_b_1971_ = v___x_1996_;
goto _start;
}
}
else
{
lean_dec(v_a_1970_);
lean_dec_ref(v_s_1968_);
return v_b_1971_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0_spec__0___redArg___boxed(lean_object* v_s_1998_, lean_object* v_replacement_1999_, lean_object* v_a_2000_, lean_object* v_b_2001_){
_start:
{
lean_object* v_res_2002_; 
v_res_2002_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0_spec__0___redArg(v_s_1998_, v_replacement_1999_, v_a_2000_, v_b_2001_);
lean_dec_ref(v_replacement_1999_);
return v_res_2002_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0___redArg(lean_object* v_s_2003_, lean_object* v_replacement_2004_){
_start:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; 
v___x_2005_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___x_2006_ = lean_unsigned_to_nat(0u);
v___x_2007_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0_spec__0___redArg(v_s_2003_, v_replacement_2004_, v___x_2006_, v___x_2005_);
return v___x_2007_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0___redArg___boxed(lean_object* v_s_2008_, lean_object* v_replacement_2009_){
_start:
{
lean_object* v_res_2010_; 
v_res_2010_ = l_String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0___redArg(v_s_2008_, v_replacement_2009_);
lean_dec_ref(v_replacement_2009_);
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_formatQueryParam(lean_object* v_key_2013_, lean_object* v_value_2014_){
_start:
{
lean_object* v___y_2016_; lean_object* v___x_2022_; uint8_t v___x_2023_; uint8_t v___x_2024_; 
lean_inc_ref(v_key_2013_);
v___x_2022_ = lean_byte_array_data(v_key_2013_);
v___x_2023_ = 61;
v___x_2024_ = l_Array_contains___at___00Std_Http_URI_Path_render_spec__0(v___x_2022_, v___x_2023_);
lean_dec_ref(v___x_2022_);
if (v___x_2024_ == 0)
{
lean_object* v___x_2025_; 
v___x_2025_ = lean_string_from_utf8_unchecked(v_key_2013_);
v___y_2016_ = v___x_2025_;
goto v___jp_2015_;
}
else
{
lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; 
v___x_2026_ = lean_string_from_utf8_unchecked(v_key_2013_);
v___x_2027_ = ((lean_object*)(l_Std_Http_URI_Query_formatQueryParam___closed__1));
v___x_2028_ = lean_unsigned_to_nat(0u);
v___x_2029_ = lean_string_utf8_byte_size(v___x_2026_);
v___x_2030_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2030_, 0, v___x_2026_);
lean_ctor_set(v___x_2030_, 1, v___x_2028_);
lean_ctor_set(v___x_2030_, 2, v___x_2029_);
v___x_2031_ = l_String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0___redArg(v___x_2030_, v___x_2027_);
v___y_2016_ = v___x_2031_;
goto v___jp_2015_;
}
v___jp_2015_:
{
if (lean_obj_tag(v_value_2014_) == 0)
{
return v___y_2016_;
}
else
{
lean_object* v_val_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; 
v_val_2017_ = lean_ctor_get(v_value_2014_, 0);
lean_inc(v_val_2017_);
lean_dec_ref_known(v_value_2014_, 1);
v___x_2018_ = ((lean_object*)(l_Std_Http_URI_Query_formatQueryParam___closed__0));
v___x_2019_ = lean_string_append(v___y_2016_, v___x_2018_);
v___x_2020_ = lean_string_from_utf8_unchecked(v_val_2017_);
v___x_2021_ = lean_string_append(v___x_2019_, v___x_2020_);
lean_dec_ref(v___x_2020_);
return v___x_2021_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0(lean_object* v_s_2032_, uint32_t v_pattern_2033_, lean_object* v_replacement_2034_){
_start:
{
lean_object* v___x_2035_; 
v___x_2035_ = l_String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0___redArg(v_s_2032_, v_replacement_2034_);
return v___x_2035_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0___boxed(lean_object* v_s_2036_, lean_object* v_pattern_2037_, lean_object* v_replacement_2038_){
_start:
{
uint32_t v_pattern_boxed_2039_; lean_object* v_res_2040_; 
v_pattern_boxed_2039_ = lean_unbox_uint32(v_pattern_2037_);
lean_dec(v_pattern_2037_);
v_res_2040_ = l_String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0(v_s_2036_, v_pattern_boxed_2039_, v_replacement_2038_);
lean_dec_ref(v_replacement_2038_);
return v_res_2040_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0_spec__0(lean_object* v_s_2041_, lean_object* v_replacement_2042_, lean_object* v_inst_2043_, lean_object* v_R_2044_, lean_object* v_a_2045_, lean_object* v_b_2046_, lean_object* v_c_2047_){
_start:
{
lean_object* v___x_2048_; 
v___x_2048_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0_spec__0___redArg(v_s_2041_, v_replacement_2042_, v_a_2045_, v_b_2046_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0_spec__0___boxed(lean_object* v_s_2049_, lean_object* v_replacement_2050_, lean_object* v_inst_2051_, lean_object* v_R_2052_, lean_object* v_a_2053_, lean_object* v_b_2054_, lean_object* v_c_2055_){
_start:
{
lean_object* v_res_2056_; 
v_res_2056_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Std_Http_URI_Query_formatQueryParam_spec__0_spec__0(v_s_2049_, v_replacement_2050_, v_inst_2051_, v_R_2052_, v_a_2053_, v_b_2054_, v_c_2055_);
lean_dec_ref(v_replacement_2050_);
return v_res_2056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0(lean_object* v_key_2060_, lean_object* v_as_2061_, size_t v_sz_2062_, size_t v_i_2063_, lean_object* v_b_2064_){
_start:
{
uint8_t v___x_2065_; 
v___x_2065_ = lean_usize_dec_lt(v_i_2063_, v_sz_2062_);
if (v___x_2065_ == 0)
{
lean_inc_ref(v_b_2064_);
return v_b_2064_;
}
else
{
lean_object* v_a_2066_; lean_object* v_fst_2067_; lean_object* v___x_2068_; uint8_t v___x_2069_; 
v_a_2066_ = lean_array_uget_borrowed(v_as_2061_, v_i_2063_);
v_fst_2067_ = lean_ctor_get(v_a_2066_, 0);
v___x_2068_ = lean_box(0);
v___x_2069_ = lean_sarray_dec_eq(v_fst_2067_, v_key_2060_);
if (v___x_2069_ == 0)
{
lean_object* v___x_2070_; size_t v___x_2071_; size_t v___x_2072_; 
v___x_2070_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0));
v___x_2071_ = ((size_t)1ULL);
v___x_2072_ = lean_usize_add(v_i_2063_, v___x_2071_);
v_i_2063_ = v___x_2072_;
v_b_2064_ = v___x_2070_;
goto _start;
}
else
{
lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; 
lean_inc(v_a_2066_);
v___x_2074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2074_, 0, v_a_2066_);
v___x_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2075_, 0, v___x_2074_);
v___x_2076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2076_, 0, v___x_2075_);
lean_ctor_set(v___x_2076_, 1, v___x_2068_);
return v___x_2076_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___boxed(lean_object* v_key_2077_, lean_object* v_as_2078_, lean_object* v_sz_2079_, lean_object* v_i_2080_, lean_object* v_b_2081_){
_start:
{
size_t v_sz_boxed_2082_; size_t v_i_boxed_2083_; lean_object* v_res_2084_; 
v_sz_boxed_2082_ = lean_unbox_usize(v_sz_2079_);
lean_dec(v_sz_2079_);
v_i_boxed_2083_ = lean_unbox_usize(v_i_2080_);
lean_dec(v_i_2080_);
v_res_2084_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0(v_key_2077_, v_as_2078_, v_sz_boxed_2082_, v_i_boxed_2083_, v_b_2081_);
lean_dec_ref(v_b_2081_);
lean_dec_ref(v_as_2078_);
lean_dec_ref(v_key_2077_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findEncoded_x3f(lean_object* v_query_2085_, lean_object* v_key_2086_){
_start:
{
lean_object* v___x_2087_; lean_object* v___x_2088_; size_t v_sz_2089_; size_t v___x_2090_; lean_object* v___x_2091_; lean_object* v_fst_2092_; 
v___x_2087_ = lean_box(0);
v___x_2088_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0));
v_sz_2089_ = lean_array_size(v_query_2085_);
v___x_2090_ = ((size_t)0ULL);
v___x_2091_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0(v_key_2086_, v_query_2085_, v_sz_2089_, v___x_2090_, v___x_2088_);
v_fst_2092_ = lean_ctor_get(v___x_2091_, 0);
lean_inc(v_fst_2092_);
lean_dec_ref(v___x_2091_);
if (lean_obj_tag(v_fst_2092_) == 0)
{
return v___x_2087_;
}
else
{
lean_object* v_val_2093_; 
v_val_2093_ = lean_ctor_get(v_fst_2092_, 0);
lean_inc(v_val_2093_);
lean_dec_ref_known(v_fst_2092_, 1);
if (lean_obj_tag(v_val_2093_) == 0)
{
return v___x_2087_;
}
else
{
lean_object* v_val_2094_; lean_object* v___x_2096_; uint8_t v_isShared_2097_; uint8_t v_isSharedCheck_2102_; 
v_val_2094_ = lean_ctor_get(v_val_2093_, 0);
v_isSharedCheck_2102_ = !lean_is_exclusive(v_val_2093_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2096_ = v_val_2093_;
v_isShared_2097_ = v_isSharedCheck_2102_;
goto v_resetjp_2095_;
}
else
{
lean_inc(v_val_2094_);
lean_dec(v_val_2093_);
v___x_2096_ = lean_box(0);
v_isShared_2097_ = v_isSharedCheck_2102_;
goto v_resetjp_2095_;
}
v_resetjp_2095_:
{
lean_object* v_snd_2098_; lean_object* v___x_2100_; 
v_snd_2098_ = lean_ctor_get(v_val_2094_, 1);
lean_inc(v_snd_2098_);
lean_dec(v_val_2094_);
if (v_isShared_2097_ == 0)
{
lean_ctor_set(v___x_2096_, 0, v_snd_2098_);
v___x_2100_ = v___x_2096_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v_snd_2098_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findEncoded_x3f___boxed(lean_object* v_query_2103_, lean_object* v_key_2104_){
_start:
{
lean_object* v_res_2105_; 
v_res_2105_ = l_Std_Http_URI_Query_findEncoded_x3f(v_query_2103_, v_key_2104_);
lean_dec_ref(v_key_2104_);
lean_dec_ref(v_query_2103_);
return v_res_2105_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs_spec__0(lean_object* v_x_2106_, lean_object* v_x_2107_){
_start:
{
if (lean_obj_tag(v_x_2106_) == 0)
{
if (lean_obj_tag(v_x_2107_) == 0)
{
uint8_t v___x_2108_; 
v___x_2108_ = 1;
return v___x_2108_;
}
else
{
uint8_t v___x_2109_; 
v___x_2109_ = 0;
return v___x_2109_;
}
}
else
{
if (lean_obj_tag(v_x_2107_) == 0)
{
uint8_t v___x_2110_; 
v___x_2110_ = 0;
return v___x_2110_;
}
else
{
lean_object* v_val_2111_; lean_object* v_val_2112_; uint8_t v___x_2113_; 
v_val_2111_ = lean_ctor_get(v_x_2106_, 0);
v_val_2112_ = lean_ctor_get(v_x_2107_, 0);
v___x_2113_ = lean_string_dec_eq(v_val_2111_, v_val_2112_);
return v___x_2113_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs_spec__0___boxed(lean_object* v_x_2114_, lean_object* v_x_2115_){
_start:
{
uint8_t v_res_2116_; lean_object* v_r_2117_; 
v_res_2116_ = l_instBEqOption_beq___at___00__private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs_spec__0(v_x_2114_, v_x_2115_);
lean_dec(v_x_2115_);
lean_dec(v_x_2114_);
v_r_2117_ = lean_box(v_res_2116_);
return v_r_2117_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs(lean_object* v_key_2118_, lean_object* v_name_2119_){
_start:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; uint8_t v___x_2122_; 
v___x_2120_ = l_Std_Http_URI_EncodedQueryParam_decode(v_name_2119_);
v___x_2121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2121_, 0, v_key_2118_);
v___x_2122_ = l_instBEqOption_beq___at___00__private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs_spec__0(v___x_2120_, v___x_2121_);
lean_dec_ref_known(v___x_2121_, 1);
lean_dec(v___x_2120_);
return v___x_2122_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs___boxed(lean_object* v_key_2123_, lean_object* v_name_2124_){
_start:
{
uint8_t v_res_2125_; lean_object* v_r_2126_; 
v_res_2125_ = l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs(v_key_2123_, v_name_2124_);
lean_dec_ref(v_name_2124_);
v_r_2126_ = lean_box(v_res_2125_);
return v_r_2126_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_find_x3f_spec__0(lean_object* v_key_2127_, lean_object* v_as_2128_, size_t v_sz_2129_, size_t v_i_2130_, lean_object* v_b_2131_){
_start:
{
uint8_t v___x_2132_; 
v___x_2132_ = lean_usize_dec_lt(v_i_2130_, v_sz_2129_);
if (v___x_2132_ == 0)
{
lean_dec_ref(v_key_2127_);
lean_inc_ref(v_b_2131_);
return v_b_2131_;
}
else
{
lean_object* v_a_2133_; lean_object* v_fst_2134_; lean_object* v___x_2135_; uint8_t v___x_2136_; 
v_a_2133_ = lean_array_uget_borrowed(v_as_2128_, v_i_2130_);
v_fst_2134_ = lean_ctor_get(v_a_2133_, 0);
v___x_2135_ = lean_box(0);
lean_inc_ref(v_key_2127_);
v___x_2136_ = l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs(v_key_2127_, v_fst_2134_);
if (v___x_2136_ == 0)
{
lean_object* v___x_2137_; size_t v___x_2138_; size_t v___x_2139_; 
v___x_2137_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0));
v___x_2138_ = ((size_t)1ULL);
v___x_2139_ = lean_usize_add(v_i_2130_, v___x_2138_);
v_i_2130_ = v___x_2139_;
v_b_2131_ = v___x_2137_;
goto _start;
}
else
{
lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; 
lean_dec_ref(v_key_2127_);
lean_inc(v_a_2133_);
v___x_2141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2141_, 0, v_a_2133_);
v___x_2142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2141_);
v___x_2143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2143_, 0, v___x_2142_);
lean_ctor_set(v___x_2143_, 1, v___x_2135_);
return v___x_2143_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_find_x3f_spec__0___boxed(lean_object* v_key_2144_, lean_object* v_as_2145_, lean_object* v_sz_2146_, lean_object* v_i_2147_, lean_object* v_b_2148_){
_start:
{
size_t v_sz_boxed_2149_; size_t v_i_boxed_2150_; lean_object* v_res_2151_; 
v_sz_boxed_2149_ = lean_unbox_usize(v_sz_2146_);
lean_dec(v_sz_2146_);
v_i_boxed_2150_ = lean_unbox_usize(v_i_2147_);
lean_dec(v_i_2147_);
v_res_2151_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_find_x3f_spec__0(v_key_2144_, v_as_2145_, v_sz_boxed_2149_, v_i_boxed_2150_, v_b_2148_);
lean_dec_ref(v_b_2148_);
lean_dec_ref(v_as_2145_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_find_x3f(lean_object* v_query_2152_, lean_object* v_key_2153_){
_start:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; size_t v_sz_2156_; size_t v___x_2157_; lean_object* v___x_2158_; lean_object* v_fst_2159_; 
v___x_2154_ = lean_box(0);
v___x_2155_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_findEncoded_x3f_spec__0___closed__0));
v_sz_2156_ = lean_array_size(v_query_2152_);
v___x_2157_ = ((size_t)0ULL);
v___x_2158_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_Http_URI_Query_find_x3f_spec__0(v_key_2153_, v_query_2152_, v_sz_2156_, v___x_2157_, v___x_2155_);
v_fst_2159_ = lean_ctor_get(v___x_2158_, 0);
lean_inc(v_fst_2159_);
lean_dec_ref(v___x_2158_);
if (lean_obj_tag(v_fst_2159_) == 0)
{
return v___x_2154_;
}
else
{
lean_object* v_val_2160_; 
v_val_2160_ = lean_ctor_get(v_fst_2159_, 0);
lean_inc(v_val_2160_);
lean_dec_ref_known(v_fst_2159_, 1);
if (lean_obj_tag(v_val_2160_) == 0)
{
return v___x_2154_;
}
else
{
lean_object* v_val_2161_; lean_object* v___x_2163_; uint8_t v_isShared_2164_; uint8_t v_isSharedCheck_2169_; 
v_val_2161_ = lean_ctor_get(v_val_2160_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v_val_2160_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2163_ = v_val_2160_;
v_isShared_2164_ = v_isSharedCheck_2169_;
goto v_resetjp_2162_;
}
else
{
lean_inc(v_val_2161_);
lean_dec(v_val_2160_);
v___x_2163_ = lean_box(0);
v_isShared_2164_ = v_isSharedCheck_2169_;
goto v_resetjp_2162_;
}
v_resetjp_2162_:
{
lean_object* v_snd_2165_; lean_object* v___x_2167_; 
v_snd_2165_ = lean_ctor_get(v_val_2161_, 1);
lean_inc(v_snd_2165_);
lean_dec(v_val_2161_);
if (v_isShared_2164_ == 0)
{
lean_ctor_set(v___x_2163_, 0, v_snd_2165_);
v___x_2167_ = v___x_2163_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_snd_2165_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_find_x3f___boxed(lean_object* v_query_2170_, lean_object* v_key_2171_){
_start:
{
lean_object* v_res_2172_; 
v_res_2172_ = l_Std_Http_URI_Query_find_x3f(v_query_2170_, v_key_2171_);
lean_dec_ref(v_query_2170_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(lean_object* v_key_2173_, lean_object* v_as_2174_, size_t v_i_2175_, size_t v_stop_2176_, lean_object* v_b_2177_){
_start:
{
lean_object* v___y_2179_; uint8_t v___x_2183_; 
v___x_2183_ = lean_usize_dec_eq(v_i_2175_, v_stop_2176_);
if (v___x_2183_ == 0)
{
lean_object* v___x_2184_; lean_object* v_fst_2185_; lean_object* v_snd_2186_; uint8_t v___x_2187_; 
v___x_2184_ = lean_array_uget_borrowed(v_as_2174_, v_i_2175_);
v_fst_2185_ = lean_ctor_get(v___x_2184_, 0);
v_snd_2186_ = lean_ctor_get(v___x_2184_, 1);
v___x_2187_ = lean_sarray_dec_eq(v_fst_2185_, v_key_2173_);
if (v___x_2187_ == 0)
{
v___y_2179_ = v_b_2177_;
goto v___jp_2178_;
}
else
{
lean_object* v___x_2188_; 
lean_inc(v_snd_2186_);
v___x_2188_ = lean_array_push(v_b_2177_, v_snd_2186_);
v___y_2179_ = v___x_2188_;
goto v___jp_2178_;
}
}
else
{
return v_b_2177_;
}
v___jp_2178_:
{
size_t v___x_2180_; size_t v___x_2181_; 
v___x_2180_ = ((size_t)1ULL);
v___x_2181_ = lean_usize_add(v_i_2175_, v___x_2180_);
v_i_2175_ = v___x_2181_;
v_b_2177_ = v___y_2179_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0___boxed(lean_object* v_key_2189_, lean_object* v_as_2190_, lean_object* v_i_2191_, lean_object* v_stop_2192_, lean_object* v_b_2193_){
_start:
{
size_t v_i_boxed_2194_; size_t v_stop_boxed_2195_; lean_object* v_res_2196_; 
v_i_boxed_2194_ = lean_unbox_usize(v_i_2191_);
lean_dec(v_i_2191_);
v_stop_boxed_2195_ = lean_unbox_usize(v_stop_2192_);
lean_dec(v_stop_2192_);
v_res_2196_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(v_key_2189_, v_as_2190_, v_i_boxed_2194_, v_stop_boxed_2195_, v_b_2193_);
lean_dec_ref(v_as_2190_);
lean_dec_ref(v_key_2189_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0(lean_object* v_key_2199_, lean_object* v_as_2200_, lean_object* v_start_2201_, lean_object* v_stop_2202_){
_start:
{
lean_object* v___x_2203_; uint8_t v___x_2204_; 
v___x_2203_ = ((lean_object*)(l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___closed__0));
v___x_2204_ = lean_nat_dec_lt(v_start_2201_, v_stop_2202_);
if (v___x_2204_ == 0)
{
return v___x_2203_;
}
else
{
lean_object* v___x_2205_; uint8_t v___x_2206_; 
v___x_2205_ = lean_array_get_size(v_as_2200_);
v___x_2206_ = lean_nat_dec_le(v_stop_2202_, v___x_2205_);
if (v___x_2206_ == 0)
{
uint8_t v___x_2207_; 
v___x_2207_ = lean_nat_dec_lt(v_start_2201_, v___x_2205_);
if (v___x_2207_ == 0)
{
return v___x_2203_;
}
else
{
size_t v___x_2208_; size_t v___x_2209_; lean_object* v___x_2210_; 
v___x_2208_ = lean_usize_of_nat(v_start_2201_);
v___x_2209_ = lean_usize_of_nat(v___x_2205_);
v___x_2210_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(v_key_2199_, v_as_2200_, v___x_2208_, v___x_2209_, v___x_2203_);
return v___x_2210_;
}
}
else
{
size_t v___x_2211_; size_t v___x_2212_; lean_object* v___x_2213_; 
v___x_2211_ = lean_usize_of_nat(v_start_2201_);
v___x_2212_ = lean_usize_of_nat(v_stop_2202_);
v___x_2213_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0_spec__0(v_key_2199_, v_as_2200_, v___x_2211_, v___x_2212_, v___x_2203_);
return v___x_2213_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___boxed(lean_object* v_key_2214_, lean_object* v_as_2215_, lean_object* v_start_2216_, lean_object* v_stop_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0(v_key_2214_, v_as_2215_, v_start_2216_, v_stop_2217_);
lean_dec(v_stop_2217_);
lean_dec(v_start_2216_);
lean_dec_ref(v_as_2215_);
lean_dec_ref(v_key_2214_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAllEncoded(lean_object* v_query_2219_, lean_object* v_key_2220_){
_start:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2221_ = lean_unsigned_to_nat(0u);
v___x_2222_ = lean_array_get_size(v_query_2219_);
v___x_2223_ = l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0(v_key_2220_, v_query_2219_, v___x_2221_, v___x_2222_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAllEncoded___boxed(lean_object* v_query_2224_, lean_object* v_key_2225_){
_start:
{
lean_object* v_res_2226_; 
v_res_2226_ = l_Std_Http_URI_Query_findAllEncoded(v_query_2224_, v_key_2225_);
lean_dec_ref(v_key_2225_);
lean_dec_ref(v_query_2224_);
return v_res_2226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAll_spec__0_spec__0(lean_object* v_key_2227_, lean_object* v_as_2228_, size_t v_i_2229_, size_t v_stop_2230_, lean_object* v_b_2231_){
_start:
{
lean_object* v___y_2233_; uint8_t v___x_2237_; 
v___x_2237_ = lean_usize_dec_eq(v_i_2229_, v_stop_2230_);
if (v___x_2237_ == 0)
{
lean_object* v___x_2238_; lean_object* v_fst_2239_; lean_object* v_snd_2240_; uint8_t v___x_2241_; 
v___x_2238_ = lean_array_uget_borrowed(v_as_2228_, v_i_2229_);
v_fst_2239_ = lean_ctor_get(v___x_2238_, 0);
v_snd_2240_ = lean_ctor_get(v___x_2238_, 1);
lean_inc_ref(v_key_2227_);
v___x_2241_ = l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs(v_key_2227_, v_fst_2239_);
if (v___x_2241_ == 0)
{
v___y_2233_ = v_b_2231_;
goto v___jp_2232_;
}
else
{
lean_object* v___x_2242_; 
lean_inc(v_snd_2240_);
v___x_2242_ = lean_array_push(v_b_2231_, v_snd_2240_);
v___y_2233_ = v___x_2242_;
goto v___jp_2232_;
}
}
else
{
lean_dec_ref(v_key_2227_);
return v_b_2231_;
}
v___jp_2232_:
{
size_t v___x_2234_; size_t v___x_2235_; 
v___x_2234_ = ((size_t)1ULL);
v___x_2235_ = lean_usize_add(v_i_2229_, v___x_2234_);
v_i_2229_ = v___x_2235_;
v_b_2231_ = v___y_2233_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAll_spec__0_spec__0___boxed(lean_object* v_key_2243_, lean_object* v_as_2244_, lean_object* v_i_2245_, lean_object* v_stop_2246_, lean_object* v_b_2247_){
_start:
{
size_t v_i_boxed_2248_; size_t v_stop_boxed_2249_; lean_object* v_res_2250_; 
v_i_boxed_2248_ = lean_unbox_usize(v_i_2245_);
lean_dec(v_i_2245_);
v_stop_boxed_2249_ = lean_unbox_usize(v_stop_2246_);
lean_dec(v_stop_2246_);
v_res_2250_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAll_spec__0_spec__0(v_key_2243_, v_as_2244_, v_i_boxed_2248_, v_stop_boxed_2249_, v_b_2247_);
lean_dec_ref(v_as_2244_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAll_spec__0(lean_object* v_key_2251_, lean_object* v_as_2252_, lean_object* v_start_2253_, lean_object* v_stop_2254_){
_start:
{
lean_object* v___x_2255_; uint8_t v___x_2256_; 
v___x_2255_ = ((lean_object*)(l_Array_filterMapM___at___00Std_Http_URI_Query_findAllEncoded_spec__0___closed__0));
v___x_2256_ = lean_nat_dec_lt(v_start_2253_, v_stop_2254_);
if (v___x_2256_ == 0)
{
lean_dec_ref(v_key_2251_);
return v___x_2255_;
}
else
{
lean_object* v___x_2257_; uint8_t v___x_2258_; 
v___x_2257_ = lean_array_get_size(v_as_2252_);
v___x_2258_ = lean_nat_dec_le(v_stop_2254_, v___x_2257_);
if (v___x_2258_ == 0)
{
uint8_t v___x_2259_; 
v___x_2259_ = lean_nat_dec_lt(v_start_2253_, v___x_2257_);
if (v___x_2259_ == 0)
{
lean_dec_ref(v_key_2251_);
return v___x_2255_;
}
else
{
size_t v___x_2260_; size_t v___x_2261_; lean_object* v___x_2262_; 
v___x_2260_ = lean_usize_of_nat(v_start_2253_);
v___x_2261_ = lean_usize_of_nat(v___x_2257_);
v___x_2262_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAll_spec__0_spec__0(v_key_2251_, v_as_2252_, v___x_2260_, v___x_2261_, v___x_2255_);
return v___x_2262_;
}
}
else
{
size_t v___x_2263_; size_t v___x_2264_; lean_object* v___x_2265_; 
v___x_2263_ = lean_usize_of_nat(v_start_2253_);
v___x_2264_ = lean_usize_of_nat(v_stop_2254_);
v___x_2265_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Std_Http_URI_Query_findAll_spec__0_spec__0(v_key_2251_, v_as_2252_, v___x_2263_, v___x_2264_, v___x_2255_);
return v___x_2265_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Std_Http_URI_Query_findAll_spec__0___boxed(lean_object* v_key_2266_, lean_object* v_as_2267_, lean_object* v_start_2268_, lean_object* v_stop_2269_){
_start:
{
lean_object* v_res_2270_; 
v_res_2270_ = l_Array_filterMapM___at___00Std_Http_URI_Query_findAll_spec__0(v_key_2266_, v_as_2267_, v_start_2268_, v_stop_2269_);
lean_dec(v_stop_2269_);
lean_dec(v_start_2268_);
lean_dec_ref(v_as_2267_);
return v_res_2270_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAll(lean_object* v_query_2271_, lean_object* v_key_2272_){
_start:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; 
v___x_2273_ = lean_unsigned_to_nat(0u);
v___x_2274_ = lean_array_get_size(v_query_2271_);
v___x_2275_ = l_Array_filterMapM___at___00Std_Http_URI_Query_findAll_spec__0(v_key_2272_, v_query_2271_, v___x_2273_, v___x_2274_);
return v___x_2275_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_findAll___boxed(lean_object* v_query_2276_, lean_object* v_key_2277_){
_start:
{
lean_object* v_res_2278_; 
v_res_2278_ = l_Std_Http_URI_Query_findAll(v_query_2276_, v_key_2277_);
lean_dec_ref(v_query_2276_);
return v_res_2278_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insert(lean_object* v_query_2279_, lean_object* v_key_2280_, lean_object* v_value_2281_){
_start:
{
lean_object* v_encodedKey_2282_; lean_object* v_encodedValue_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; 
v_encodedKey_2282_ = l_Std_Http_URI_EncodedQueryParam_encode(v_key_2280_);
v_encodedValue_2283_ = l_Std_Http_URI_EncodedQueryParam_encode(v_value_2281_);
v___x_2284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2284_, 0, v_encodedValue_2283_);
v___x_2285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2285_, 0, v_encodedKey_2282_);
lean_ctor_set(v___x_2285_, 1, v___x_2284_);
v___x_2286_ = lean_array_push(v_query_2279_, v___x_2285_);
return v___x_2286_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_insertEncoded(lean_object* v_query_2287_, lean_object* v_key_2288_, lean_object* v_value_2289_){
_start:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; 
v___x_2290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2290_, 0, v_key_2288_);
lean_ctor_set(v___x_2290_, 1, v_value_2289_);
v___x_2291_ = lean_array_push(v_query_2287_, v___x_2290_);
return v___x_2291_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_ofList(lean_object* v_pairs_2295_){
_start:
{
lean_object* v___x_2296_; 
v___x_2296_ = lean_array_mk(v_pairs_2295_);
return v___x_2296_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0(lean_object* v_key_2297_, lean_object* v_as_2298_, size_t v_i_2299_, size_t v_stop_2300_){
_start:
{
uint8_t v___x_2301_; 
v___x_2301_ = lean_usize_dec_eq(v_i_2299_, v_stop_2300_);
if (v___x_2301_ == 0)
{
lean_object* v___x_2302_; lean_object* v_fst_2303_; uint8_t v___x_2304_; 
v___x_2302_ = lean_array_uget_borrowed(v_as_2298_, v_i_2299_);
v_fst_2303_ = lean_ctor_get(v___x_2302_, 0);
v___x_2304_ = lean_sarray_dec_eq(v_fst_2303_, v_key_2297_);
if (v___x_2304_ == 0)
{
size_t v___x_2305_; size_t v___x_2306_; 
v___x_2305_ = ((size_t)1ULL);
v___x_2306_ = lean_usize_add(v_i_2299_, v___x_2305_);
v_i_2299_ = v___x_2306_;
goto _start;
}
else
{
return v___x_2304_;
}
}
else
{
uint8_t v___x_2308_; 
v___x_2308_ = 0;
return v___x_2308_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0___boxed(lean_object* v_key_2309_, lean_object* v_as_2310_, lean_object* v_i_2311_, lean_object* v_stop_2312_){
_start:
{
size_t v_i_boxed_2313_; size_t v_stop_boxed_2314_; uint8_t v_res_2315_; lean_object* v_r_2316_; 
v_i_boxed_2313_ = lean_unbox_usize(v_i_2311_);
lean_dec(v_i_2311_);
v_stop_boxed_2314_ = lean_unbox_usize(v_stop_2312_);
lean_dec(v_stop_2312_);
v_res_2315_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0(v_key_2309_, v_as_2310_, v_i_boxed_2313_, v_stop_boxed_2314_);
lean_dec_ref(v_as_2310_);
lean_dec_ref(v_key_2309_);
v_r_2316_ = lean_box(v_res_2315_);
return v_r_2316_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_Query_containsEncoded(lean_object* v_query_2317_, lean_object* v_key_2318_){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; uint8_t v___x_2321_; 
v___x_2319_ = lean_unsigned_to_nat(0u);
v___x_2320_ = lean_array_get_size(v_query_2317_);
v___x_2321_ = lean_nat_dec_lt(v___x_2319_, v___x_2320_);
if (v___x_2321_ == 0)
{
return v___x_2321_;
}
else
{
if (v___x_2321_ == 0)
{
return v___x_2321_;
}
else
{
size_t v___x_2322_; size_t v___x_2323_; uint8_t v___x_2324_; 
v___x_2322_ = ((size_t)0ULL);
v___x_2323_ = lean_usize_of_nat(v___x_2320_);
v___x_2324_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_containsEncoded_spec__0(v_key_2318_, v_query_2317_, v___x_2322_, v___x_2323_);
return v___x_2324_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_containsEncoded___boxed(lean_object* v_query_2325_, lean_object* v_key_2326_){
_start:
{
uint8_t v_res_2327_; lean_object* v_r_2328_; 
v_res_2327_ = l_Std_Http_URI_Query_containsEncoded(v_query_2325_, v_key_2326_);
lean_dec_ref(v_key_2326_);
lean_dec_ref(v_query_2325_);
v_r_2328_ = lean_box(v_res_2327_);
return v_r_2328_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_contains_spec__0(lean_object* v_key_2329_, lean_object* v_as_2330_, size_t v_i_2331_, size_t v_stop_2332_){
_start:
{
uint8_t v___x_2333_; 
v___x_2333_ = lean_usize_dec_eq(v_i_2331_, v_stop_2332_);
if (v___x_2333_ == 0)
{
lean_object* v___x_2334_; lean_object* v_fst_2335_; uint8_t v___x_2336_; 
v___x_2334_ = lean_array_uget_borrowed(v_as_2330_, v_i_2331_);
v_fst_2335_ = lean_ctor_get(v___x_2334_, 0);
lean_inc_ref(v_key_2329_);
v___x_2336_ = l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs(v_key_2329_, v_fst_2335_);
if (v___x_2336_ == 0)
{
size_t v___x_2337_; size_t v___x_2338_; 
v___x_2337_ = ((size_t)1ULL);
v___x_2338_ = lean_usize_add(v_i_2331_, v___x_2337_);
v_i_2331_ = v___x_2338_;
goto _start;
}
else
{
lean_dec_ref(v_key_2329_);
return v___x_2336_;
}
}
else
{
uint8_t v___x_2340_; 
lean_dec_ref(v_key_2329_);
v___x_2340_ = 0;
return v___x_2340_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_contains_spec__0___boxed(lean_object* v_key_2341_, lean_object* v_as_2342_, lean_object* v_i_2343_, lean_object* v_stop_2344_){
_start:
{
size_t v_i_boxed_2345_; size_t v_stop_boxed_2346_; uint8_t v_res_2347_; lean_object* v_r_2348_; 
v_i_boxed_2345_ = lean_unbox_usize(v_i_2343_);
lean_dec(v_i_2343_);
v_stop_boxed_2346_ = lean_unbox_usize(v_stop_2344_);
lean_dec(v_stop_2344_);
v_res_2347_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_contains_spec__0(v_key_2341_, v_as_2342_, v_i_boxed_2345_, v_stop_boxed_2346_);
lean_dec_ref(v_as_2342_);
v_r_2348_ = lean_box(v_res_2347_);
return v_r_2348_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_Query_contains(lean_object* v_query_2349_, lean_object* v_key_2350_){
_start:
{
lean_object* v___x_2351_; lean_object* v___x_2352_; uint8_t v___x_2353_; 
v___x_2351_ = lean_unsigned_to_nat(0u);
v___x_2352_ = lean_array_get_size(v_query_2349_);
v___x_2353_ = lean_nat_dec_lt(v___x_2351_, v___x_2352_);
if (v___x_2353_ == 0)
{
lean_dec_ref(v_key_2350_);
return v___x_2353_;
}
else
{
if (v___x_2353_ == 0)
{
lean_dec_ref(v_key_2350_);
return v___x_2353_;
}
else
{
size_t v___x_2354_; size_t v___x_2355_; uint8_t v___x_2356_; 
v___x_2354_ = ((size_t)0ULL);
v___x_2355_ = lean_usize_of_nat(v___x_2352_);
v___x_2356_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Std_Http_URI_Query_contains_spec__0(v_key_2350_, v_query_2349_, v___x_2354_, v___x_2355_);
return v___x_2356_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_contains___boxed(lean_object* v_query_2357_, lean_object* v_key_2358_){
_start:
{
uint8_t v_res_2359_; lean_object* v_r_2360_; 
v_res_2359_ = l_Std_Http_URI_Query_contains(v_query_2357_, v_key_2358_);
lean_dec_ref(v_query_2357_);
v_r_2360_ = lean_box(v_res_2359_);
return v_r_2360_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(lean_object* v_key_2361_, lean_object* v_as_2362_, size_t v_i_2363_, size_t v_stop_2364_, lean_object* v_b_2365_){
_start:
{
lean_object* v___y_2367_; uint8_t v___x_2371_; 
v___x_2371_ = lean_usize_dec_eq(v_i_2363_, v_stop_2364_);
if (v___x_2371_ == 0)
{
lean_object* v___x_2372_; lean_object* v_fst_2373_; uint8_t v___x_2374_; 
v___x_2372_ = lean_array_uget_borrowed(v_as_2362_, v_i_2363_);
v_fst_2373_ = lean_ctor_get(v___x_2372_, 0);
v___x_2374_ = lean_sarray_dec_eq(v_fst_2373_, v_key_2361_);
if (v___x_2374_ == 0)
{
lean_object* v___x_2375_; 
lean_inc(v___x_2372_);
v___x_2375_ = lean_array_push(v_b_2365_, v___x_2372_);
v___y_2367_ = v___x_2375_;
goto v___jp_2366_;
}
else
{
v___y_2367_ = v_b_2365_;
goto v___jp_2366_;
}
}
else
{
return v_b_2365_;
}
v___jp_2366_:
{
size_t v___x_2368_; size_t v___x_2369_; 
v___x_2368_ = ((size_t)1ULL);
v___x_2369_ = lean_usize_add(v_i_2363_, v___x_2368_);
v_i_2363_ = v___x_2369_;
v_b_2365_ = v___y_2367_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0___boxed(lean_object* v_key_2376_, lean_object* v_as_2377_, lean_object* v_i_2378_, lean_object* v_stop_2379_, lean_object* v_b_2380_){
_start:
{
size_t v_i_boxed_2381_; size_t v_stop_boxed_2382_; lean_object* v_res_2383_; 
v_i_boxed_2381_ = lean_unbox_usize(v_i_2378_);
lean_dec(v_i_2378_);
v_stop_boxed_2382_ = lean_unbox_usize(v_stop_2379_);
lean_dec(v_stop_2379_);
v_res_2383_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(v_key_2376_, v_as_2377_, v_i_boxed_2381_, v_stop_boxed_2382_, v_b_2380_);
lean_dec_ref(v_as_2377_);
lean_dec_ref(v_key_2376_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_eraseEncoded(lean_object* v_query_2384_, lean_object* v_key_2385_){
_start:
{
lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; uint8_t v___x_2389_; 
v___x_2386_ = lean_unsigned_to_nat(0u);
v___x_2387_ = lean_array_get_size(v_query_2384_);
v___x_2388_ = ((lean_object*)(l_Std_Http_URI_Query_empty___closed__0));
v___x_2389_ = lean_nat_dec_lt(v___x_2386_, v___x_2387_);
if (v___x_2389_ == 0)
{
return v___x_2388_;
}
else
{
size_t v___x_2390_; size_t v___x_2391_; lean_object* v___x_2392_; 
v___x_2390_ = ((size_t)0ULL);
v___x_2391_ = lean_usize_of_nat(v___x_2387_);
v___x_2392_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_eraseEncoded_spec__0(v_key_2385_, v_query_2384_, v___x_2390_, v___x_2391_, v___x_2388_);
return v___x_2392_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_eraseEncoded___boxed(lean_object* v_query_2393_, lean_object* v_key_2394_){
_start:
{
lean_object* v_res_2395_; 
v_res_2395_ = l_Std_Http_URI_Query_eraseEncoded(v_query_2393_, v_key_2394_);
lean_dec_ref(v_key_2394_);
lean_dec_ref(v_query_2393_);
return v_res_2395_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_erase_spec__0(lean_object* v_key_2396_, lean_object* v_as_2397_, size_t v_i_2398_, size_t v_stop_2399_, lean_object* v_b_2400_){
_start:
{
lean_object* v___y_2402_; uint8_t v___x_2406_; 
v___x_2406_ = lean_usize_dec_eq(v_i_2398_, v_stop_2399_);
if (v___x_2406_ == 0)
{
lean_object* v___x_2407_; lean_object* v_fst_2408_; uint8_t v___x_2409_; 
v___x_2407_ = lean_array_uget_borrowed(v_as_2397_, v_i_2398_);
v_fst_2408_ = lean_ctor_get(v___x_2407_, 0);
lean_inc_ref(v_key_2396_);
v___x_2409_ = l___private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs(v_key_2396_, v_fst_2408_);
if (v___x_2409_ == 0)
{
lean_object* v___x_2410_; 
lean_inc(v___x_2407_);
v___x_2410_ = lean_array_push(v_b_2400_, v___x_2407_);
v___y_2402_ = v___x_2410_;
goto v___jp_2401_;
}
else
{
v___y_2402_ = v_b_2400_;
goto v___jp_2401_;
}
}
else
{
lean_dec_ref(v_key_2396_);
return v_b_2400_;
}
v___jp_2401_:
{
size_t v___x_2403_; size_t v___x_2404_; 
v___x_2403_ = ((size_t)1ULL);
v___x_2404_ = lean_usize_add(v_i_2398_, v___x_2403_);
v_i_2398_ = v___x_2404_;
v_b_2400_ = v___y_2402_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_erase_spec__0___boxed(lean_object* v_key_2411_, lean_object* v_as_2412_, lean_object* v_i_2413_, lean_object* v_stop_2414_, lean_object* v_b_2415_){
_start:
{
size_t v_i_boxed_2416_; size_t v_stop_boxed_2417_; lean_object* v_res_2418_; 
v_i_boxed_2416_ = lean_unbox_usize(v_i_2413_);
lean_dec(v_i_2413_);
v_stop_boxed_2417_ = lean_unbox_usize(v_stop_2414_);
lean_dec(v_stop_2414_);
v_res_2418_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_erase_spec__0(v_key_2411_, v_as_2412_, v_i_boxed_2416_, v_stop_boxed_2417_, v_b_2415_);
lean_dec_ref(v_as_2412_);
return v_res_2418_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_erase(lean_object* v_query_2419_, lean_object* v_key_2420_){
_start:
{
lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; uint8_t v___x_2424_; 
v___x_2421_ = lean_unsigned_to_nat(0u);
v___x_2422_ = lean_array_get_size(v_query_2419_);
v___x_2423_ = ((lean_object*)(l_Std_Http_URI_Query_empty___closed__0));
v___x_2424_ = lean_nat_dec_lt(v___x_2421_, v___x_2422_);
if (v___x_2424_ == 0)
{
lean_dec_ref(v_key_2420_);
return v___x_2423_;
}
else
{
size_t v___x_2425_; size_t v___x_2426_; lean_object* v___x_2427_; 
v___x_2425_ = ((size_t)0ULL);
v___x_2426_ = lean_usize_of_nat(v___x_2422_);
v___x_2427_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_Http_URI_Query_erase_spec__0(v_key_2420_, v_query_2419_, v___x_2425_, v___x_2426_, v___x_2423_);
return v___x_2427_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_erase___boxed(lean_object* v_query_2428_, lean_object* v_key_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l_Std_Http_URI_Query_erase(v_query_2428_, v_key_2429_);
lean_dec_ref(v_query_2428_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_get(lean_object* v_query_2433_, lean_object* v_key_2434_){
_start:
{
lean_object* v___x_2435_; 
v___x_2435_ = l_Std_Http_URI_Query_find_x3f(v_query_2433_, v_key_2434_);
if (lean_obj_tag(v___x_2435_) == 0)
{
lean_object* v___x_2436_; 
v___x_2436_ = lean_box(0);
return v___x_2436_;
}
else
{
lean_object* v_val_2437_; 
v_val_2437_ = lean_ctor_get(v___x_2435_, 0);
lean_inc(v_val_2437_);
lean_dec_ref_known(v___x_2435_, 1);
if (lean_obj_tag(v_val_2437_) == 0)
{
lean_object* v___x_2438_; 
v___x_2438_ = ((lean_object*)(l_Std_Http_URI_Query_get___closed__0));
return v___x_2438_;
}
else
{
lean_object* v_val_2439_; lean_object* v___x_2440_; 
v_val_2439_ = lean_ctor_get(v_val_2437_, 0);
lean_inc(v_val_2439_);
lean_dec_ref_known(v_val_2437_, 1);
v___x_2440_ = l_Std_Http_URI_EncodedQueryParam_decode(v_val_2439_);
lean_dec(v_val_2439_);
return v___x_2440_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_get___boxed(lean_object* v_query_2441_, lean_object* v_key_2442_){
_start:
{
lean_object* v_res_2443_; 
v_res_2443_ = l_Std_Http_URI_Query_get(v_query_2441_, v_key_2442_);
lean_dec_ref(v_query_2441_);
return v_res_2443_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_getD(lean_object* v_query_2444_, lean_object* v_key_2445_, lean_object* v_default_2446_){
_start:
{
lean_object* v___x_2447_; 
v___x_2447_ = l_Std_Http_URI_Query_get(v_query_2444_, v_key_2445_);
if (lean_obj_tag(v___x_2447_) == 0)
{
lean_inc_ref(v_default_2446_);
return v_default_2446_;
}
else
{
lean_object* v_val_2448_; 
v_val_2448_ = lean_ctor_get(v___x_2447_, 0);
lean_inc(v_val_2448_);
lean_dec_ref_known(v___x_2447_, 1);
return v_val_2448_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_getD___boxed(lean_object* v_query_2449_, lean_object* v_key_2450_, lean_object* v_default_2451_){
_start:
{
lean_object* v_res_2452_; 
v_res_2452_ = l_Std_Http_URI_Query_getD(v_query_2449_, v_key_2450_, v_default_2451_);
lean_dec_ref(v_default_2451_);
lean_dec_ref(v_query_2449_);
return v_res_2452_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_set(lean_object* v_query_2453_, lean_object* v_key_2454_, lean_object* v_value_2455_){
_start:
{
lean_object* v___x_2456_; lean_object* v___x_2457_; 
lean_inc_ref(v_key_2454_);
v___x_2456_ = l_Std_Http_URI_Query_erase(v_query_2453_, v_key_2454_);
v___x_2457_ = l_Std_Http_URI_Query_insert(v___x_2456_, v_key_2454_, v_value_2455_);
return v___x_2457_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_set___boxed(lean_object* v_query_2458_, lean_object* v_key_2459_, lean_object* v_value_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l_Std_Http_URI_Query_set(v_query_2458_, v_key_2459_, v_value_2460_);
lean_dec_ref(v_query_2458_);
return v_res_2461_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0(size_t v_sz_2462_, size_t v_i_2463_, lean_object* v_bs_2464_){
_start:
{
uint8_t v___x_2465_; 
v___x_2465_ = lean_usize_dec_lt(v_i_2463_, v_sz_2462_);
if (v___x_2465_ == 0)
{
return v_bs_2464_;
}
else
{
lean_object* v_v_2466_; lean_object* v_fst_2467_; lean_object* v_snd_2468_; lean_object* v___x_2469_; lean_object* v_bs_x27_2470_; lean_object* v___x_2471_; size_t v___x_2472_; size_t v___x_2473_; lean_object* v___x_2474_; 
v_v_2466_ = lean_array_uget_borrowed(v_bs_2464_, v_i_2463_);
v_fst_2467_ = lean_ctor_get(v_v_2466_, 0);
lean_inc(v_fst_2467_);
v_snd_2468_ = lean_ctor_get(v_v_2466_, 1);
lean_inc(v_snd_2468_);
v___x_2469_ = lean_unsigned_to_nat(0u);
v_bs_x27_2470_ = lean_array_uset(v_bs_2464_, v_i_2463_, v___x_2469_);
v___x_2471_ = l_Std_Http_URI_Query_formatQueryParam(v_fst_2467_, v_snd_2468_);
v___x_2472_ = ((size_t)1ULL);
v___x_2473_ = lean_usize_add(v_i_2463_, v___x_2472_);
v___x_2474_ = lean_array_uset(v_bs_x27_2470_, v_i_2463_, v___x_2471_);
v_i_2463_ = v___x_2473_;
v_bs_2464_ = v___x_2474_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0___boxed(lean_object* v_sz_2476_, lean_object* v_i_2477_, lean_object* v_bs_2478_){
_start:
{
size_t v_sz_boxed_2479_; size_t v_i_boxed_2480_; lean_object* v_res_2481_; 
v_sz_boxed_2479_ = lean_unbox_usize(v_sz_2476_);
lean_dec(v_sz_2476_);
v_i_boxed_2480_ = lean_unbox_usize(v_i_2477_);
lean_dec(v_i_2477_);
v_res_2481_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0(v_sz_boxed_2479_, v_i_boxed_2480_, v_bs_2478_);
return v_res_2481_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_toRawString(lean_object* v_query_2483_){
_start:
{
size_t v_sz_2484_; size_t v___x_2485_; lean_object* v_params_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; 
v_sz_2484_ = lean_array_size(v_query_2483_);
v___x_2485_ = ((size_t)0ULL);
v_params_2486_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Query_toRawString_spec__0(v_sz_2484_, v___x_2485_, v_query_2483_);
v___x_2487_ = ((lean_object*)(l_Std_Http_URI_Query_toRawString___closed__0));
v___x_2488_ = lean_array_to_list(v_params_2486_);
v___x_2489_ = l_String_intercalate(v___x_2487_, v___x_2488_);
return v___x_2489_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instSingletonProdString___lam__0(lean_object* v_x_2491_){
_start:
{
lean_object* v_fst_2492_; lean_object* v_snd_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
v_fst_2492_ = lean_ctor_get(v_x_2491_, 0);
lean_inc(v_fst_2492_);
v_snd_2493_ = lean_ctor_get(v_x_2491_, 1);
lean_inc(v_snd_2493_);
lean_dec_ref(v_x_2491_);
v___x_2494_ = ((lean_object*)(l_Std_Http_URI_Query_empty));
v___x_2495_ = l_Std_Http_URI_Query_insert(v___x_2494_, v_fst_2492_, v_snd_2493_);
return v___x_2495_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instInsertProdString___lam__0(lean_object* v_x_2498_, lean_object* v_q_2499_){
_start:
{
lean_object* v_fst_2500_; lean_object* v_snd_2501_; lean_object* v___x_2502_; 
v_fst_2500_ = lean_ctor_get(v_x_2498_, 0);
lean_inc(v_fst_2500_);
v_snd_2501_ = lean_ctor_get(v_x_2498_, 1);
lean_inc(v_snd_2501_);
lean_dec_ref(v_x_2498_);
v___x_2502_ = l_Std_Http_URI_Query_insert(v_q_2499_, v_fst_2500_, v_snd_2501_);
return v___x_2502_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instToString___lam__0(lean_object* v_x_2505_){
_start:
{
lean_object* v_fst_2506_; lean_object* v_snd_2507_; lean_object* v___x_2508_; 
v_fst_2506_ = lean_ctor_get(v_x_2505_, 0);
lean_inc(v_fst_2506_);
v_snd_2507_ = lean_ctor_get(v_x_2505_, 1);
lean_inc(v_snd_2507_);
lean_dec_ref(v_x_2505_);
v___x_2508_ = l_Std_Http_URI_Query_formatQueryParam(v_fst_2506_, v_snd_2507_);
return v___x_2508_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_instToString___lam__1(lean_object* v___f_2510_, lean_object* v_q_2511_){
_start:
{
lean_object* v___x_2512_; lean_object* v___x_2513_; uint8_t v___x_2514_; 
v___x_2512_ = lean_array_get_size(v_q_2511_);
v___x_2513_ = lean_unsigned_to_nat(0u);
v___x_2514_ = lean_nat_dec_eq(v___x_2512_, v___x_2513_);
if (v___x_2514_ == 0)
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v_encodedParams_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; 
v___x_2515_ = lean_array_to_list(v_q_2511_);
v___x_2516_ = lean_box(0);
v_encodedParams_2517_ = l_List_mapTR_loop___redArg(v___f_2510_, v___x_2515_, v___x_2516_);
v___x_2518_ = ((lean_object*)(l_Std_Http_URI_Query_instToString___lam__1___closed__0));
v___x_2519_ = ((lean_object*)(l_Std_Http_URI_Query_toRawString___closed__0));
v___x_2520_ = l_String_intercalate(v___x_2519_, v_encodedParams_2517_);
v___x_2521_ = lean_string_append(v___x_2518_, v___x_2520_);
lean_dec_ref(v___x_2520_);
return v___x_2521_;
}
else
{
lean_object* v___x_2522_; 
lean_dec_ref(v_q_2511_);
lean_dec_ref(v___f_2510_);
v___x_2522_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
return v___x_2522_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Std_Http_URI_Query_formatOption_spec__0(lean_object* v_a_2527_, lean_object* v_a_2528_){
_start:
{
if (lean_obj_tag(v_a_2527_) == 0)
{
lean_object* v___x_2529_; 
v___x_2529_ = l_List_reverse___redArg(v_a_2528_);
return v___x_2529_;
}
else
{
lean_object* v_head_2530_; lean_object* v_tail_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2542_; 
v_head_2530_ = lean_ctor_get(v_a_2527_, 0);
v_tail_2531_ = lean_ctor_get(v_a_2527_, 1);
v_isSharedCheck_2542_ = !lean_is_exclusive(v_a_2527_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2533_ = v_a_2527_;
v_isShared_2534_ = v_isSharedCheck_2542_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_tail_2531_);
lean_inc(v_head_2530_);
lean_dec(v_a_2527_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2542_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v_fst_2535_; lean_object* v_snd_2536_; lean_object* v___x_2537_; lean_object* v___x_2539_; 
v_fst_2535_ = lean_ctor_get(v_head_2530_, 0);
lean_inc(v_fst_2535_);
v_snd_2536_ = lean_ctor_get(v_head_2530_, 1);
lean_inc(v_snd_2536_);
lean_dec(v_head_2530_);
v___x_2537_ = l_Std_Http_URI_Query_formatQueryParam(v_fst_2535_, v_snd_2536_);
if (v_isShared_2534_ == 0)
{
lean_ctor_set(v___x_2533_, 1, v_a_2528_);
lean_ctor_set(v___x_2533_, 0, v___x_2537_);
v___x_2539_ = v___x_2533_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v___x_2537_);
lean_ctor_set(v_reuseFailAlloc_2541_, 1, v_a_2528_);
v___x_2539_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
v_a_2527_ = v_tail_2531_;
v_a_2528_ = v___x_2539_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Query_formatOption(lean_object* v_x_2543_){
_start:
{
if (lean_obj_tag(v_x_2543_) == 0)
{
lean_object* v___x_2544_; 
v___x_2544_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
return v___x_2544_;
}
else
{
lean_object* v_val_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; uint8_t v___x_2548_; 
v_val_2545_ = lean_ctor_get(v_x_2543_, 0);
lean_inc(v_val_2545_);
lean_dec_ref_known(v_x_2543_, 1);
v___x_2546_ = lean_array_get_size(v_val_2545_);
v___x_2547_ = lean_unsigned_to_nat(0u);
v___x_2548_ = lean_nat_dec_eq(v___x_2546_, v___x_2547_);
if (v___x_2548_ == 0)
{
lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v_encodedParams_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; 
v___x_2549_ = lean_array_to_list(v_val_2545_);
v___x_2550_ = lean_box(0);
v_encodedParams_2551_ = l_List_mapTR_loop___at___00Std_Http_URI_Query_formatOption_spec__0(v___x_2549_, v___x_2550_);
v___x_2552_ = ((lean_object*)(l_Std_Http_URI_Query_instToString___lam__1___closed__0));
v___x_2553_ = ((lean_object*)(l_Std_Http_URI_Query_toRawString___closed__0));
v___x_2554_ = l_String_intercalate(v___x_2553_, v_encodedParams_2551_);
v___x_2555_ = lean_string_append(v___x_2552_, v___x_2554_);
lean_dec_ref(v___x_2554_);
return v___x_2555_;
}
else
{
lean_object* v___x_2556_; 
lean_dec(v_val_2545_);
v___x_2556_ = ((lean_object*)(l_Std_Http_URI_Query_instToString___lam__1___closed__0));
return v___x_2556_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(lean_object* v_x_2557_, lean_object* v_x_2558_){
_start:
{
if (lean_obj_tag(v_x_2557_) == 0)
{
lean_object* v___x_2559_; 
v___x_2559_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_2559_;
}
else
{
lean_object* v_val_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v_val_2560_ = lean_ctor_get(v_x_2557_, 0);
lean_inc(v_val_2560_);
lean_dec_ref_known(v_x_2557_, 1);
v___x_2561_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_2562_ = l_Std_Http_URI_instReprAuthority_repr___redArg(v_val_2560_);
v___x_2563_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2563_, 0, v___x_2561_);
lean_ctor_set(v___x_2563_, 1, v___x_2562_);
v___x_2564_ = l_Repr_addAppParen(v___x_2563_, v_x_2558_);
return v___x_2564_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0___boxed(lean_object* v_x_2565_, lean_object* v_x_2566_){
_start:
{
lean_object* v_res_2567_; 
v_res_2567_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(v_x_2565_, v_x_2566_);
lean_dec(v_x_2566_);
return v_res_2567_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(lean_object* v_x_2568_, lean_object* v_x_2569_){
_start:
{
if (lean_obj_tag(v_x_2568_) == 0)
{
lean_object* v___x_2570_; 
v___x_2570_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_2570_;
}
else
{
lean_object* v_val_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; 
v_val_2571_ = lean_ctor_get(v_x_2568_, 0);
lean_inc(v_val_2571_);
lean_dec_ref_known(v_x_2568_, 1);
v___x_2572_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_2573_ = l_Array_repr___at___00Std_Http_URI_instReprQuery_spec__0(v_val_2571_);
v___x_2574_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2574_, 0, v___x_2572_);
lean_ctor_set(v___x_2574_, 1, v___x_2573_);
v___x_2575_ = l_Repr_addAppParen(v___x_2574_, v_x_2569_);
return v___x_2575_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1___boxed(lean_object* v_x_2576_, lean_object* v_x_2577_){
_start:
{
lean_object* v_res_2578_; 
v_res_2578_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(v_x_2576_, v_x_2577_);
lean_dec(v_x_2577_);
return v_res_2578_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(lean_object* v_x_2579_, lean_object* v_x_2580_){
_start:
{
if (lean_obj_tag(v_x_2579_) == 0)
{
lean_object* v___x_2581_; 
v___x_2581_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__1));
return v___x_2581_;
}
else
{
lean_object* v_val_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2593_; 
v_val_2582_ = lean_ctor_get(v_x_2579_, 0);
v_isSharedCheck_2593_ = !lean_is_exclusive(v_x_2579_);
if (v_isSharedCheck_2593_ == 0)
{
v___x_2584_ = v_x_2579_;
v_isShared_2585_ = v_isSharedCheck_2593_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_val_2582_);
lean_dec(v_x_2579_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2593_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2589_; 
v___x_2586_ = ((lean_object*)(l_Option_repr___at___00Std_Http_URI_instReprUserInfo_repr_spec__0___closed__3));
v___x_2587_ = l_String_quote(v_val_2582_);
if (v_isShared_2585_ == 0)
{
lean_ctor_set_tag(v___x_2584_, 3);
lean_ctor_set(v___x_2584_, 0, v___x_2587_);
v___x_2589_ = v___x_2584_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v___x_2587_);
v___x_2589_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
lean_object* v___x_2590_; lean_object* v___x_2591_; 
v___x_2590_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2586_);
lean_ctor_set(v___x_2590_, 1, v___x_2589_);
v___x_2591_ = l_Repr_addAppParen(v___x_2590_, v_x_2580_);
return v___x_2591_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2___boxed(lean_object* v_x_2594_, lean_object* v_x_2595_){
_start:
{
lean_object* v_res_2596_; 
v_res_2596_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(v_x_2594_, v_x_2595_);
lean_dec(v_x_2595_);
return v_res_2596_;
}
}
static lean_object* _init_l_Std_Http_instReprURI_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2606_ = lean_unsigned_to_nat(10u);
v___x_2607_ = lean_nat_to_int(v___x_2606_);
return v___x_2607_;
}
}
static lean_object* _init_l_Std_Http_instReprURI_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2611_ = lean_unsigned_to_nat(13u);
v___x_2612_ = lean_nat_to_int(v___x_2611_);
return v___x_2612_;
}
}
static lean_object* _init_l_Std_Http_instReprURI_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_2619_; lean_object* v___x_2620_; 
v___x_2619_ = lean_unsigned_to_nat(9u);
v___x_2620_ = lean_nat_to_int(v___x_2619_);
return v___x_2620_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr___redArg(lean_object* v_x_2624_){
_start:
{
lean_object* v_scheme_2625_; lean_object* v_authority_2626_; lean_object* v_path_2627_; lean_object* v_query_2628_; lean_object* v_fragment_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; uint8_t v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; 
v_scheme_2625_ = lean_ctor_get(v_x_2624_, 0);
lean_inc_ref(v_scheme_2625_);
v_authority_2626_ = lean_ctor_get(v_x_2624_, 1);
lean_inc(v_authority_2626_);
v_path_2627_ = lean_ctor_get(v_x_2624_, 2);
lean_inc_ref(v_path_2627_);
v_query_2628_ = lean_ctor_get(v_x_2624_, 3);
lean_inc(v_query_2628_);
v_fragment_2629_ = lean_ctor_get(v_x_2624_, 4);
lean_inc(v_fragment_2629_);
lean_dec_ref(v_x_2624_);
v___x_2630_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_2631_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__3));
v___x_2632_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__4, &l_Std_Http_instReprURI_repr___redArg___closed__4_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__4);
v___x_2633_ = l_String_quote(v_scheme_2625_);
v___x_2634_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2634_, 0, v___x_2633_);
v___x_2635_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2635_, 0, v___x_2632_);
lean_ctor_set(v___x_2635_, 1, v___x_2634_);
v___x_2636_ = 0;
v___x_2637_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2637_, 0, v___x_2635_);
lean_ctor_set_uint8(v___x_2637_, sizeof(void*)*1, v___x_2636_);
v___x_2638_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2638_, 0, v___x_2631_);
lean_ctor_set(v___x_2638_, 1, v___x_2637_);
v___x_2639_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_2640_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2638_);
lean_ctor_set(v___x_2640_, 1, v___x_2639_);
v___x_2641_ = lean_box(1);
v___x_2642_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2640_);
lean_ctor_set(v___x_2642_, 1, v___x_2641_);
v___x_2643_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__6));
v___x_2644_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2644_, 0, v___x_2642_);
lean_ctor_set(v___x_2644_, 1, v___x_2643_);
v___x_2645_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2645_, 0, v___x_2644_);
lean_ctor_set(v___x_2645_, 1, v___x_2630_);
v___x_2646_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__7, &l_Std_Http_instReprURI_repr___redArg___closed__7_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__7);
v___x_2647_ = lean_unsigned_to_nat(0u);
v___x_2648_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(v_authority_2626_, v___x_2647_);
v___x_2649_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2649_, 0, v___x_2646_);
lean_ctor_set(v___x_2649_, 1, v___x_2648_);
v___x_2650_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2650_, 0, v___x_2649_);
lean_ctor_set_uint8(v___x_2650_, sizeof(void*)*1, v___x_2636_);
v___x_2651_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2651_, 0, v___x_2645_);
lean_ctor_set(v___x_2651_, 1, v___x_2650_);
v___x_2652_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2651_);
lean_ctor_set(v___x_2652_, 1, v___x_2639_);
v___x_2653_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2653_, 0, v___x_2652_);
lean_ctor_set(v___x_2653_, 1, v___x_2641_);
v___x_2654_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__9));
v___x_2655_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2655_, 0, v___x_2653_);
lean_ctor_set(v___x_2655_, 1, v___x_2654_);
v___x_2656_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2655_);
lean_ctor_set(v___x_2656_, 1, v___x_2630_);
v___x_2657_ = lean_obj_once(&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6, &l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once, _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6);
v___x_2658_ = l_Std_Http_URI_instReprPath_repr___redArg(v_path_2627_);
v___x_2659_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2659_, 0, v___x_2657_);
lean_ctor_set(v___x_2659_, 1, v___x_2658_);
v___x_2660_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2660_, 0, v___x_2659_);
lean_ctor_set_uint8(v___x_2660_, sizeof(void*)*1, v___x_2636_);
v___x_2661_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2661_, 0, v___x_2656_);
lean_ctor_set(v___x_2661_, 1, v___x_2660_);
v___x_2662_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2662_, 0, v___x_2661_);
lean_ctor_set(v___x_2662_, 1, v___x_2639_);
v___x_2663_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2663_, 0, v___x_2662_);
lean_ctor_set(v___x_2663_, 1, v___x_2641_);
v___x_2664_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__11));
v___x_2665_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2663_);
lean_ctor_set(v___x_2665_, 1, v___x_2664_);
v___x_2666_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2666_, 0, v___x_2665_);
lean_ctor_set(v___x_2666_, 1, v___x_2630_);
v___x_2667_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__12, &l_Std_Http_instReprURI_repr___redArg___closed__12_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__12);
v___x_2668_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(v_query_2628_, v___x_2647_);
v___x_2669_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2669_, 0, v___x_2667_);
lean_ctor_set(v___x_2669_, 1, v___x_2668_);
v___x_2670_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2670_, 0, v___x_2669_);
lean_ctor_set_uint8(v___x_2670_, sizeof(void*)*1, v___x_2636_);
v___x_2671_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2666_);
lean_ctor_set(v___x_2671_, 1, v___x_2670_);
v___x_2672_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2672_, 0, v___x_2671_);
lean_ctor_set(v___x_2672_, 1, v___x_2639_);
v___x_2673_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2673_, 0, v___x_2672_);
lean_ctor_set(v___x_2673_, 1, v___x_2641_);
v___x_2674_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__14));
v___x_2675_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2673_);
lean_ctor_set(v___x_2675_, 1, v___x_2674_);
v___x_2676_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2675_);
lean_ctor_set(v___x_2676_, 1, v___x_2630_);
v___x_2677_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_2678_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(v_fragment_2629_, v___x_2647_);
v___x_2679_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2677_);
lean_ctor_set(v___x_2679_, 1, v___x_2678_);
v___x_2680_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2680_, 0, v___x_2679_);
lean_ctor_set_uint8(v___x_2680_, sizeof(void*)*1, v___x_2636_);
v___x_2681_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2676_);
lean_ctor_set(v___x_2681_, 1, v___x_2680_);
v___x_2682_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_2683_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_2684_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2684_, 0, v___x_2683_);
lean_ctor_set(v___x_2684_, 1, v___x_2681_);
v___x_2685_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_2686_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2686_, 0, v___x_2684_);
lean_ctor_set(v___x_2686_, 1, v___x_2685_);
v___x_2687_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2682_);
lean_ctor_set(v___x_2687_, 1, v___x_2686_);
v___x_2688_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2688_, 0, v___x_2687_);
lean_ctor_set_uint8(v___x_2688_, sizeof(void*)*1, v___x_2636_);
return v___x_2688_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr(lean_object* v_x_2689_, lean_object* v_prec_2690_){
_start:
{
lean_object* v___x_2691_; 
v___x_2691_ = l_Std_Http_instReprURI_repr___redArg(v_x_2689_);
return v___x_2691_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURI_repr___boxed(lean_object* v_x_2692_, lean_object* v_prec_2693_){
_start:
{
lean_object* v_res_2694_; 
v_res_2694_ = l_Std_Http_instReprURI_repr(v_x_2692_, v_prec_2693_);
lean_dec(v_prec_2693_);
return v_res_2694_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__0(lean_object* v_x_2703_, lean_object* v_x_2704_){
_start:
{
if (lean_obj_tag(v_x_2703_) == 0)
{
if (lean_obj_tag(v_x_2704_) == 0)
{
uint8_t v___x_2705_; 
v___x_2705_ = 1;
return v___x_2705_;
}
else
{
uint8_t v___x_2706_; 
v___x_2706_ = 0;
return v___x_2706_;
}
}
else
{
if (lean_obj_tag(v_x_2704_) == 0)
{
uint8_t v___x_2707_; 
v___x_2707_ = 0;
return v___x_2707_;
}
else
{
lean_object* v_val_2708_; lean_object* v_val_2709_; uint8_t v___x_2710_; 
v_val_2708_ = lean_ctor_get(v_x_2703_, 0);
v_val_2709_ = lean_ctor_get(v_x_2704_, 0);
v___x_2710_ = l_Std_Http_URI_instBEqAuthority_beq(v_val_2708_, v_val_2709_);
return v___x_2710_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__0___boxed(lean_object* v_x_2711_, lean_object* v_x_2712_){
_start:
{
uint8_t v_res_2713_; lean_object* v_r_2714_; 
v_res_2713_ = l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__0(v_x_2711_, v_x_2712_);
lean_dec(v_x_2712_);
lean_dec(v_x_2711_);
v_r_2714_ = lean_box(v_res_2713_);
return v_r_2714_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__1(lean_object* v_x_2715_, lean_object* v_x_2716_){
_start:
{
if (lean_obj_tag(v_x_2715_) == 0)
{
if (lean_obj_tag(v_x_2716_) == 0)
{
uint8_t v___x_2717_; 
v___x_2717_ = 1;
return v___x_2717_;
}
else
{
uint8_t v___x_2718_; 
v___x_2718_ = 0;
return v___x_2718_;
}
}
else
{
if (lean_obj_tag(v_x_2716_) == 0)
{
uint8_t v___x_2719_; 
v___x_2719_ = 0;
return v___x_2719_;
}
else
{
lean_object* v_val_2720_; lean_object* v_val_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; uint8_t v___x_2724_; 
v_val_2720_ = lean_ctor_get(v_x_2715_, 0);
v_val_2721_ = lean_ctor_get(v_x_2716_, 0);
v___x_2722_ = lean_array_get_size(v_val_2720_);
v___x_2723_ = lean_array_get_size(v_val_2721_);
v___x_2724_ = lean_nat_dec_eq(v___x_2722_, v___x_2723_);
if (v___x_2724_ == 0)
{
return v___x_2724_;
}
else
{
uint8_t v___x_2725_; 
v___x_2725_ = l_Array_isEqvAux___at___00Std_Http_URI_instBEqQuery_spec__1___redArg(v_val_2720_, v_val_2721_, v___x_2722_);
return v___x_2725_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__1___boxed(lean_object* v_x_2726_, lean_object* v_x_2727_){
_start:
{
uint8_t v_res_2728_; lean_object* v_r_2729_; 
v_res_2728_ = l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__1(v_x_2726_, v_x_2727_);
lean_dec(v_x_2727_);
lean_dec(v_x_2726_);
v_r_2729_ = lean_box(v_res_2728_);
return v_r_2729_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_instBEqURI_beq(lean_object* v_x_2730_, lean_object* v_x_2731_){
_start:
{
lean_object* v_scheme_2732_; lean_object* v_authority_2733_; lean_object* v_path_2734_; lean_object* v_query_2735_; lean_object* v_fragment_2736_; lean_object* v_scheme_2737_; lean_object* v_authority_2738_; lean_object* v_path_2739_; lean_object* v_query_2740_; lean_object* v_fragment_2741_; uint8_t v___x_2742_; 
v_scheme_2732_ = lean_ctor_get(v_x_2730_, 0);
v_authority_2733_ = lean_ctor_get(v_x_2730_, 1);
v_path_2734_ = lean_ctor_get(v_x_2730_, 2);
v_query_2735_ = lean_ctor_get(v_x_2730_, 3);
v_fragment_2736_ = lean_ctor_get(v_x_2730_, 4);
v_scheme_2737_ = lean_ctor_get(v_x_2731_, 0);
v_authority_2738_ = lean_ctor_get(v_x_2731_, 1);
v_path_2739_ = lean_ctor_get(v_x_2731_, 2);
v_query_2740_ = lean_ctor_get(v_x_2731_, 3);
v_fragment_2741_ = lean_ctor_get(v_x_2731_, 4);
v___x_2742_ = lean_string_dec_eq(v_scheme_2732_, v_scheme_2737_);
if (v___x_2742_ == 0)
{
return v___x_2742_;
}
else
{
uint8_t v___x_2743_; 
v___x_2743_ = l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__0(v_authority_2733_, v_authority_2738_);
if (v___x_2743_ == 0)
{
return v___x_2743_;
}
else
{
uint8_t v___x_2744_; 
v___x_2744_ = l_Std_Http_URI_instBEqPath_beq(v_path_2734_, v_path_2739_);
if (v___x_2744_ == 0)
{
return v___x_2744_;
}
else
{
uint8_t v___x_2745_; 
v___x_2745_ = l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__1(v_query_2735_, v_query_2740_);
if (v___x_2745_ == 0)
{
return v___x_2745_;
}
else
{
uint8_t v___x_2746_; 
v___x_2746_ = l_instBEqOption_beq___at___00__private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs_spec__0(v_fragment_2736_, v_fragment_2741_);
return v___x_2746_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instBEqURI_beq___boxed(lean_object* v_x_2747_, lean_object* v_x_2748_){
_start:
{
uint8_t v_res_2749_; lean_object* v_r_2750_; 
v_res_2749_ = l_Std_Http_instBEqURI_beq(v_x_2747_, v_x_2748_);
lean_dec_ref(v_x_2748_);
lean_dec_ref(v_x_2747_);
v_r_2750_ = lean_box(v_res_2749_);
return v_r_2750_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instToStringURI___lam__0(lean_object* v_uri_2755_){
_start:
{
lean_object* v_scheme_2756_; lean_object* v_authority_2757_; lean_object* v_path_2758_; lean_object* v_query_2759_; lean_object* v_fragment_2760_; lean_object* v___y_2762_; lean_object* v___y_2763_; lean_object* v___y_2764_; lean_object* v___y_2765_; lean_object* v___y_2773_; uint8_t v___y_2774_; lean_object* v___y_2785_; 
v_scheme_2756_ = lean_ctor_get(v_uri_2755_, 0);
lean_inc_ref(v_scheme_2756_);
v_authority_2757_ = lean_ctor_get(v_uri_2755_, 1);
lean_inc(v_authority_2757_);
v_path_2758_ = lean_ctor_get(v_uri_2755_, 2);
lean_inc_ref(v_path_2758_);
v_query_2759_ = lean_ctor_get(v_uri_2755_, 3);
lean_inc(v_query_2759_);
v_fragment_2760_ = lean_ctor_get(v_uri_2755_, 4);
lean_inc(v_fragment_2760_);
lean_dec_ref(v_uri_2755_);
if (lean_obj_tag(v_authority_2757_) == 0)
{
lean_object* v___x_2788_; 
v___x_2788_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_2785_ = v___x_2788_;
goto v___jp_2784_;
}
else
{
lean_object* v_val_2789_; lean_object* v_userInfo_2790_; lean_object* v_host_2791_; lean_object* v_port_2792_; lean_object* v___x_2793_; lean_object* v___y_2795_; lean_object* v___y_2796_; lean_object* v___y_2797_; lean_object* v___y_2802_; lean_object* v___y_2803_; lean_object* v___y_2812_; 
v_val_2789_ = lean_ctor_get(v_authority_2757_, 0);
v_userInfo_2790_ = lean_ctor_get(v_val_2789_, 0);
v_host_2791_ = lean_ctor_get(v_val_2789_, 1);
v_port_2792_ = lean_ctor_get(v_val_2789_, 2);
v___x_2793_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__0___closed__1));
if (lean_obj_tag(v_userInfo_2790_) == 0)
{
lean_object* v___x_2822_; 
v___x_2822_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_2812_ = v___x_2822_;
goto v___jp_2811_;
}
else
{
lean_object* v_val_2823_; lean_object* v_password_2824_; 
v_val_2823_ = lean_ctor_get(v_userInfo_2790_, 0);
v_password_2824_ = lean_ctor_get(v_val_2823_, 1);
if (lean_obj_tag(v_password_2824_) == 0)
{
lean_object* v_username_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; 
v_username_2825_ = lean_ctor_get(v_val_2823_, 0);
lean_inc_ref(v_username_2825_);
v___x_2826_ = lean_string_from_utf8_unchecked(v_username_2825_);
v___x_2827_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_2828_ = lean_string_append(v___x_2826_, v___x_2827_);
v___y_2812_ = v___x_2828_;
goto v___jp_2811_;
}
else
{
lean_object* v_username_2829_; lean_object* v_val_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; 
v_username_2829_ = lean_ctor_get(v_val_2823_, 0);
v_val_2830_ = lean_ctor_get(v_password_2824_, 0);
lean_inc_ref(v_username_2829_);
v___x_2831_ = lean_string_from_utf8_unchecked(v_username_2829_);
v___x_2832_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_2833_ = lean_string_append(v___x_2831_, v___x_2832_);
lean_inc(v_val_2830_);
v___x_2834_ = lean_string_from_utf8_unchecked(v_val_2830_);
v___x_2835_ = lean_string_append(v___x_2833_, v___x_2834_);
lean_dec_ref(v___x_2834_);
v___x_2836_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_2837_ = lean_string_append(v___x_2835_, v___x_2836_);
v___y_2812_ = v___x_2837_;
goto v___jp_2811_;
}
}
v___jp_2794_:
{
lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; 
v___x_2798_ = lean_string_append(v___y_2795_, v___y_2796_);
lean_dec_ref(v___y_2796_);
v___x_2799_ = lean_string_append(v___x_2798_, v___y_2797_);
lean_dec_ref(v___y_2797_);
v___x_2800_ = lean_string_append(v___x_2793_, v___x_2799_);
lean_dec_ref(v___x_2799_);
v___y_2785_ = v___x_2800_;
goto v___jp_2784_;
}
v___jp_2801_:
{
switch(lean_obj_tag(v_port_2792_))
{
case 0:
{
lean_object* v___x_2804_; 
v___x_2804_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_2795_ = v___y_2802_;
v___y_2796_ = v___y_2803_;
v___y_2797_ = v___x_2804_;
goto v___jp_2794_;
}
case 1:
{
lean_object* v___x_2805_; 
v___x_2805_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_2795_ = v___y_2802_;
v___y_2796_ = v___y_2803_;
v___y_2797_ = v___x_2805_;
goto v___jp_2794_;
}
default: 
{
uint16_t v_port_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; 
v_port_2806_ = lean_ctor_get_uint16(v_port_2792_, 0);
v___x_2807_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_2808_ = lean_uint16_to_nat(v_port_2806_);
v___x_2809_ = l_Nat_reprFast(v___x_2808_);
v___x_2810_ = lean_string_append(v___x_2807_, v___x_2809_);
lean_dec_ref(v___x_2809_);
v___y_2795_ = v___y_2802_;
v___y_2796_ = v___y_2803_;
v___y_2797_ = v___x_2810_;
goto v___jp_2794_;
}
}
}
v___jp_2811_:
{
switch(lean_obj_tag(v_host_2791_))
{
case 0:
{
lean_object* v_name_2813_; 
v_name_2813_ = lean_ctor_get(v_host_2791_, 0);
lean_inc_ref(v_name_2813_);
v___y_2802_ = v___y_2812_;
v___y_2803_ = v_name_2813_;
goto v___jp_2801_;
}
case 1:
{
lean_object* v_ipv4_2814_; lean_object* v___x_2815_; 
v_ipv4_2814_ = lean_ctor_get(v_host_2791_, 0);
v___x_2815_ = lean_uv_ntop_v4(v_ipv4_2814_);
v___y_2802_ = v___y_2812_;
v___y_2803_ = v___x_2815_;
goto v___jp_2801_;
}
default: 
{
lean_object* v_ipv6_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; 
v_ipv6_2816_ = lean_ctor_get(v_host_2791_, 0);
v___x_2817_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_2818_ = lean_uv_ntop_v6(v_ipv6_2816_);
v___x_2819_ = lean_string_append(v___x_2817_, v___x_2818_);
lean_dec_ref(v___x_2818_);
v___x_2820_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_2821_ = lean_string_append(v___x_2819_, v___x_2820_);
v___y_2802_ = v___y_2812_;
v___y_2803_ = v___x_2821_;
goto v___jp_2801_;
}
}
}
}
v___jp_2761_:
{
lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; 
v___x_2766_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_2767_ = lean_string_append(v_scheme_2756_, v___x_2766_);
v___x_2768_ = lean_string_append(v___x_2767_, v___y_2764_);
lean_dec_ref(v___y_2764_);
v___x_2769_ = lean_string_append(v___x_2768_, v___y_2763_);
lean_dec_ref(v___y_2763_);
v___x_2770_ = lean_string_append(v___x_2769_, v___y_2762_);
lean_dec_ref(v___y_2762_);
v___x_2771_ = lean_string_append(v___x_2770_, v___y_2765_);
lean_dec_ref(v___y_2765_);
return v___x_2771_;
}
v___jp_2772_:
{
uint8_t v___x_2775_; lean_object* v_pathPart_2776_; lean_object* v_queryPart_2777_; 
v___x_2775_ = 1;
v_pathPart_2776_ = l_Std_Http_URI_Path_render(v_path_2758_, v___y_2774_, v___x_2775_);
v_queryPart_2777_ = l_Std_Http_URI_Query_formatOption(v_query_2759_);
if (lean_obj_tag(v_fragment_2760_) == 0)
{
lean_object* v___x_2778_; 
v___x_2778_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_2762_ = v_queryPart_2777_;
v___y_2763_ = v_pathPart_2776_;
v___y_2764_ = v___y_2773_;
v___y_2765_ = v___x_2778_;
goto v___jp_2761_;
}
else
{
lean_object* v_val_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; 
v_val_2779_ = lean_ctor_get(v_fragment_2760_, 0);
lean_inc(v_val_2779_);
lean_dec_ref_known(v_fragment_2760_, 1);
v___x_2780_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__0___closed__0));
v___x_2781_ = l_Std_Http_URI_EncodedFragment_encode(v_val_2779_);
v___x_2782_ = lean_string_from_utf8_unchecked(v___x_2781_);
v___x_2783_ = lean_string_append(v___x_2780_, v___x_2782_);
lean_dec_ref(v___x_2782_);
v___y_2762_ = v_queryPart_2777_;
v___y_2763_ = v_pathPart_2776_;
v___y_2764_ = v___y_2773_;
v___y_2765_ = v___x_2783_;
goto v___jp_2761_;
}
}
v___jp_2784_:
{
if (lean_obj_tag(v_authority_2757_) == 0)
{
uint8_t v___x_2786_; 
v___x_2786_ = 0;
v___y_2773_ = v___y_2785_;
v___y_2774_ = v___x_2786_;
goto v___jp_2772_;
}
else
{
uint8_t v___x_2787_; 
lean_dec_ref_known(v_authority_2757_, 1);
v___x_2787_ = 1;
v___y_2773_ = v___y_2785_;
v___y_2774_ = v___x_2787_;
goto v___jp_2772_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setScheme_x3f(lean_object* v_b_2849_, lean_object* v_scheme_2850_){
_start:
{
lean_object* v___x_2851_; 
v___x_2851_ = l_Std_Http_URI_Scheme_ofString_x3f(v_scheme_2850_);
if (lean_obj_tag(v___x_2851_) == 0)
{
lean_object* v___x_2852_; 
lean_dec_ref(v_b_2849_);
v___x_2852_ = lean_box(0);
return v___x_2852_;
}
else
{
lean_object* v_userInfo_2853_; lean_object* v_host_2854_; lean_object* v_port_2855_; lean_object* v_pathSegments_2856_; lean_object* v_query_2857_; lean_object* v_fragment_2858_; lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2873_; 
v_userInfo_2853_ = lean_ctor_get(v_b_2849_, 1);
v_host_2854_ = lean_ctor_get(v_b_2849_, 2);
v_port_2855_ = lean_ctor_get(v_b_2849_, 3);
v_pathSegments_2856_ = lean_ctor_get(v_b_2849_, 4);
v_query_2857_ = lean_ctor_get(v_b_2849_, 5);
v_fragment_2858_ = lean_ctor_get(v_b_2849_, 6);
v_isSharedCheck_2873_ = !lean_is_exclusive(v_b_2849_);
if (v_isSharedCheck_2873_ == 0)
{
lean_object* v_unused_2874_; 
v_unused_2874_ = lean_ctor_get(v_b_2849_, 0);
lean_dec(v_unused_2874_);
v___x_2860_ = v_b_2849_;
v_isShared_2861_ = v_isSharedCheck_2873_;
goto v_resetjp_2859_;
}
else
{
lean_inc(v_fragment_2858_);
lean_inc(v_query_2857_);
lean_inc(v_pathSegments_2856_);
lean_inc(v_port_2855_);
lean_inc(v_host_2854_);
lean_inc(v_userInfo_2853_);
lean_dec(v_b_2849_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2873_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
lean_object* v___x_2863_; 
lean_inc_ref(v___x_2851_);
if (v_isShared_2861_ == 0)
{
lean_ctor_set(v___x_2860_, 0, v___x_2851_);
v___x_2863_ = v___x_2860_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v___x_2851_);
lean_ctor_set(v_reuseFailAlloc_2872_, 1, v_userInfo_2853_);
lean_ctor_set(v_reuseFailAlloc_2872_, 2, v_host_2854_);
lean_ctor_set(v_reuseFailAlloc_2872_, 3, v_port_2855_);
lean_ctor_set(v_reuseFailAlloc_2872_, 4, v_pathSegments_2856_);
lean_ctor_set(v_reuseFailAlloc_2872_, 5, v_query_2857_);
lean_ctor_set(v_reuseFailAlloc_2872_, 6, v_fragment_2858_);
v___x_2863_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
lean_object* v___x_2865_; uint8_t v_isShared_2866_; uint8_t v_isSharedCheck_2870_; 
v_isSharedCheck_2870_ = !lean_is_exclusive(v___x_2851_);
if (v_isSharedCheck_2870_ == 0)
{
lean_object* v_unused_2871_; 
v_unused_2871_ = lean_ctor_get(v___x_2851_, 0);
lean_dec(v_unused_2871_);
v___x_2865_ = v___x_2851_;
v_isShared_2866_ = v_isSharedCheck_2870_;
goto v_resetjp_2864_;
}
else
{
lean_dec(v___x_2851_);
v___x_2865_ = lean_box(0);
v_isShared_2866_ = v_isSharedCheck_2870_;
goto v_resetjp_2864_;
}
v_resetjp_2864_:
{
lean_object* v___x_2868_; 
if (v_isShared_2866_ == 0)
{
lean_ctor_set(v___x_2865_, 0, v___x_2863_);
v___x_2868_ = v___x_2865_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v___x_2863_);
v___x_2868_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
return v___x_2868_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_Builder_setScheme_x21_spec__0(lean_object* v_msg_2875_){
_start:
{
lean_object* v___x_2876_; lean_object* v___x_2877_; 
v___x_2876_ = ((lean_object*)(l_Std_Http_URI_instInhabitedBuilder_default));
v___x_2877_ = lean_panic_fn_borrowed(v___x_2876_, v_msg_2875_);
return v___x_2877_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setScheme_x21(lean_object* v_b_2879_, lean_object* v_scheme_2880_){
_start:
{
lean_object* v___x_2881_; 
lean_inc_ref(v_scheme_2880_);
v___x_2881_ = l_Std_Http_URI_Builder_setScheme_x3f(v_b_2879_, v_scheme_2880_);
if (lean_obj_tag(v___x_2881_) == 0)
{
lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; 
v___x_2882_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__0));
v___x_2883_ = ((lean_object*)(l_Std_Http_URI_Builder_setScheme_x21___closed__0));
v___x_2884_ = lean_unsigned_to_nat(748u);
v___x_2885_ = lean_unsigned_to_nat(14u);
v___x_2886_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__2));
v___x_2887_ = l_String_quote(v_scheme_2880_);
v___x_2888_ = lean_string_append(v___x_2886_, v___x_2887_);
lean_dec_ref(v___x_2887_);
v___x_2889_ = l_mkPanicMessageWithDecl(v___x_2882_, v___x_2883_, v___x_2884_, v___x_2885_, v___x_2888_);
lean_dec_ref(v___x_2888_);
v___x_2890_ = l_panic___at___00Std_Http_URI_Builder_setScheme_x21_spec__0(v___x_2889_);
return v___x_2890_;
}
else
{
lean_object* v_val_2891_; 
lean_dec_ref(v_scheme_2880_);
v_val_2891_ = lean_ctor_get(v___x_2881_, 0);
lean_inc(v_val_2891_);
lean_dec_ref_known(v___x_2881_, 1);
return v_val_2891_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setUserInfo(lean_object* v_b_2892_, lean_object* v_username_2893_, lean_object* v_password_2894_){
_start:
{
lean_object* v_scheme_2895_; lean_object* v_host_2896_; lean_object* v_port_2897_; lean_object* v_pathSegments_2898_; lean_object* v_query_2899_; lean_object* v_fragment_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2923_; 
v_scheme_2895_ = lean_ctor_get(v_b_2892_, 0);
v_host_2896_ = lean_ctor_get(v_b_2892_, 2);
v_port_2897_ = lean_ctor_get(v_b_2892_, 3);
v_pathSegments_2898_ = lean_ctor_get(v_b_2892_, 4);
v_query_2899_ = lean_ctor_get(v_b_2892_, 5);
v_fragment_2900_ = lean_ctor_get(v_b_2892_, 6);
v_isSharedCheck_2923_ = !lean_is_exclusive(v_b_2892_);
if (v_isSharedCheck_2923_ == 0)
{
lean_object* v_unused_2924_; 
v_unused_2924_ = lean_ctor_get(v_b_2892_, 1);
lean_dec(v_unused_2924_);
v___x_2902_ = v_b_2892_;
v_isShared_2903_ = v_isSharedCheck_2923_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_fragment_2900_);
lean_inc(v_query_2899_);
lean_inc(v_pathSegments_2898_);
lean_inc(v_port_2897_);
lean_inc(v_host_2896_);
lean_inc(v_scheme_2895_);
lean_dec(v_b_2892_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2923_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___y_2905_; lean_object* v___x_2910_; 
v___x_2910_ = l_Std_Http_URI_EncodedUserInfo_encode(v_username_2893_);
if (lean_obj_tag(v_password_2894_) == 0)
{
lean_object* v___x_2911_; lean_object* v___x_2912_; 
v___x_2911_ = lean_box(0);
v___x_2912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2910_);
lean_ctor_set(v___x_2912_, 1, v___x_2911_);
v___y_2905_ = v___x_2912_;
goto v___jp_2904_;
}
else
{
lean_object* v_val_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2922_; 
v_val_2913_ = lean_ctor_get(v_password_2894_, 0);
v_isSharedCheck_2922_ = !lean_is_exclusive(v_password_2894_);
if (v_isSharedCheck_2922_ == 0)
{
v___x_2915_ = v_password_2894_;
v_isShared_2916_ = v_isSharedCheck_2922_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_val_2913_);
lean_dec(v_password_2894_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2922_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
lean_object* v___x_2917_; lean_object* v___x_2919_; 
v___x_2917_ = l_Std_Http_URI_EncodedUserInfo_encode(v_val_2913_);
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 0, v___x_2917_);
v___x_2919_ = v___x_2915_;
goto v_reusejp_2918_;
}
else
{
lean_object* v_reuseFailAlloc_2921_; 
v_reuseFailAlloc_2921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2921_, 0, v___x_2917_);
v___x_2919_ = v_reuseFailAlloc_2921_;
goto v_reusejp_2918_;
}
v_reusejp_2918_:
{
lean_object* v___x_2920_; 
v___x_2920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2920_, 0, v___x_2910_);
lean_ctor_set(v___x_2920_, 1, v___x_2919_);
v___y_2905_ = v___x_2920_;
goto v___jp_2904_;
}
}
}
v___jp_2904_:
{
lean_object* v___x_2906_; lean_object* v___x_2908_; 
v___x_2906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2906_, 0, v___y_2905_);
if (v_isShared_2903_ == 0)
{
lean_ctor_set(v___x_2902_, 1, v___x_2906_);
v___x_2908_ = v___x_2902_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v_scheme_2895_);
lean_ctor_set(v_reuseFailAlloc_2909_, 1, v___x_2906_);
lean_ctor_set(v_reuseFailAlloc_2909_, 2, v_host_2896_);
lean_ctor_set(v_reuseFailAlloc_2909_, 3, v_port_2897_);
lean_ctor_set(v_reuseFailAlloc_2909_, 4, v_pathSegments_2898_);
lean_ctor_set(v_reuseFailAlloc_2909_, 5, v_query_2899_);
lean_ctor_set(v_reuseFailAlloc_2909_, 6, v_fragment_2900_);
v___x_2908_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
return v___x_2908_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHost_x3f(lean_object* v_b_2925_, lean_object* v_name_2926_){
_start:
{
lean_object* v___x_2927_; 
v___x_2927_ = lean_uv_pton_v4(v_name_2926_);
if (lean_obj_tag(v___x_2927_) == 1)
{
lean_object* v_val_2928_; lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_2951_; 
lean_dec_ref(v_name_2926_);
v_val_2928_ = lean_ctor_get(v___x_2927_, 0);
v_isSharedCheck_2951_ = !lean_is_exclusive(v___x_2927_);
if (v_isSharedCheck_2951_ == 0)
{
v___x_2930_ = v___x_2927_;
v_isShared_2931_ = v_isSharedCheck_2951_;
goto v_resetjp_2929_;
}
else
{
lean_inc(v_val_2928_);
lean_dec(v___x_2927_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_2951_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v_scheme_2932_; lean_object* v_userInfo_2933_; lean_object* v_port_2934_; lean_object* v_pathSegments_2935_; lean_object* v_query_2936_; lean_object* v_fragment_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2949_; 
v_scheme_2932_ = lean_ctor_get(v_b_2925_, 0);
v_userInfo_2933_ = lean_ctor_get(v_b_2925_, 1);
v_port_2934_ = lean_ctor_get(v_b_2925_, 3);
v_pathSegments_2935_ = lean_ctor_get(v_b_2925_, 4);
v_query_2936_ = lean_ctor_get(v_b_2925_, 5);
v_fragment_2937_ = lean_ctor_get(v_b_2925_, 6);
v_isSharedCheck_2949_ = !lean_is_exclusive(v_b_2925_);
if (v_isSharedCheck_2949_ == 0)
{
lean_object* v_unused_2950_; 
v_unused_2950_ = lean_ctor_get(v_b_2925_, 2);
lean_dec(v_unused_2950_);
v___x_2939_ = v_b_2925_;
v_isShared_2940_ = v_isSharedCheck_2949_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_fragment_2937_);
lean_inc(v_query_2936_);
lean_inc(v_pathSegments_2935_);
lean_inc(v_port_2934_);
lean_inc(v_userInfo_2933_);
lean_inc(v_scheme_2932_);
lean_dec(v_b_2925_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2949_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
lean_object* v___x_2941_; lean_object* v___x_2943_; 
v___x_2941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2941_, 0, v_val_2928_);
if (v_isShared_2931_ == 0)
{
lean_ctor_set(v___x_2930_, 0, v___x_2941_);
v___x_2943_ = v___x_2930_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v___x_2941_);
v___x_2943_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
lean_object* v___x_2945_; 
if (v_isShared_2940_ == 0)
{
lean_ctor_set(v___x_2939_, 2, v___x_2943_);
v___x_2945_ = v___x_2939_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_scheme_2932_);
lean_ctor_set(v_reuseFailAlloc_2947_, 1, v_userInfo_2933_);
lean_ctor_set(v_reuseFailAlloc_2947_, 2, v___x_2943_);
lean_ctor_set(v_reuseFailAlloc_2947_, 3, v_port_2934_);
lean_ctor_set(v_reuseFailAlloc_2947_, 4, v_pathSegments_2935_);
lean_ctor_set(v_reuseFailAlloc_2947_, 5, v_query_2936_);
lean_ctor_set(v_reuseFailAlloc_2947_, 6, v_fragment_2937_);
v___x_2945_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
lean_object* v___x_2946_; 
v___x_2946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2946_, 0, v___x_2945_);
return v___x_2946_;
}
}
}
}
}
else
{
lean_object* v___x_2952_; 
lean_dec(v___x_2927_);
v___x_2952_ = l_Std_Http_URI_DomainName_ofString_x3f(v_name_2926_);
if (lean_obj_tag(v___x_2952_) == 0)
{
lean_object* v___x_2953_; 
lean_dec_ref(v_b_2925_);
v___x_2953_ = lean_box(0);
return v___x_2953_;
}
else
{
lean_object* v_val_2954_; lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_2977_; 
v_val_2954_ = lean_ctor_get(v___x_2952_, 0);
v_isSharedCheck_2977_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_2977_ == 0)
{
v___x_2956_ = v___x_2952_;
v_isShared_2957_ = v_isSharedCheck_2977_;
goto v_resetjp_2955_;
}
else
{
lean_inc(v_val_2954_);
lean_dec(v___x_2952_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_2977_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
lean_object* v_scheme_2958_; lean_object* v_userInfo_2959_; lean_object* v_port_2960_; lean_object* v_pathSegments_2961_; lean_object* v_query_2962_; lean_object* v_fragment_2963_; lean_object* v___x_2965_; uint8_t v_isShared_2966_; uint8_t v_isSharedCheck_2975_; 
v_scheme_2958_ = lean_ctor_get(v_b_2925_, 0);
v_userInfo_2959_ = lean_ctor_get(v_b_2925_, 1);
v_port_2960_ = lean_ctor_get(v_b_2925_, 3);
v_pathSegments_2961_ = lean_ctor_get(v_b_2925_, 4);
v_query_2962_ = lean_ctor_get(v_b_2925_, 5);
v_fragment_2963_ = lean_ctor_get(v_b_2925_, 6);
v_isSharedCheck_2975_ = !lean_is_exclusive(v_b_2925_);
if (v_isSharedCheck_2975_ == 0)
{
lean_object* v_unused_2976_; 
v_unused_2976_ = lean_ctor_get(v_b_2925_, 2);
lean_dec(v_unused_2976_);
v___x_2965_ = v_b_2925_;
v_isShared_2966_ = v_isSharedCheck_2975_;
goto v_resetjp_2964_;
}
else
{
lean_inc(v_fragment_2963_);
lean_inc(v_query_2962_);
lean_inc(v_pathSegments_2961_);
lean_inc(v_port_2960_);
lean_inc(v_userInfo_2959_);
lean_inc(v_scheme_2958_);
lean_dec(v_b_2925_);
v___x_2965_ = lean_box(0);
v_isShared_2966_ = v_isSharedCheck_2975_;
goto v_resetjp_2964_;
}
v_resetjp_2964_:
{
lean_object* v___x_2967_; lean_object* v___x_2969_; 
v___x_2967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2967_, 0, v_val_2954_);
if (v_isShared_2957_ == 0)
{
lean_ctor_set(v___x_2956_, 0, v___x_2967_);
v___x_2969_ = v___x_2956_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v___x_2967_);
v___x_2969_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
lean_object* v___x_2971_; 
if (v_isShared_2966_ == 0)
{
lean_ctor_set(v___x_2965_, 2, v___x_2969_);
v___x_2971_ = v___x_2965_;
goto v_reusejp_2970_;
}
else
{
lean_object* v_reuseFailAlloc_2973_; 
v_reuseFailAlloc_2973_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2973_, 0, v_scheme_2958_);
lean_ctor_set(v_reuseFailAlloc_2973_, 1, v_userInfo_2959_);
lean_ctor_set(v_reuseFailAlloc_2973_, 2, v___x_2969_);
lean_ctor_set(v_reuseFailAlloc_2973_, 3, v_port_2960_);
lean_ctor_set(v_reuseFailAlloc_2973_, 4, v_pathSegments_2961_);
lean_ctor_set(v_reuseFailAlloc_2973_, 5, v_query_2962_);
lean_ctor_set(v_reuseFailAlloc_2973_, 6, v_fragment_2963_);
v___x_2971_ = v_reuseFailAlloc_2973_;
goto v_reusejp_2970_;
}
v_reusejp_2970_:
{
lean_object* v___x_2972_; 
v___x_2972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2972_, 0, v___x_2971_);
return v___x_2972_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHost_x21(lean_object* v_b_2980_, lean_object* v_name_2981_){
_start:
{
lean_object* v___x_2982_; 
lean_inc_ref(v_name_2981_);
v___x_2982_ = l_Std_Http_URI_Builder_setHost_x3f(v_b_2980_, v_name_2981_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2983_ = ((lean_object*)(l_Std_Http_URI_Scheme_ofString_x21___closed__0));
v___x_2984_ = ((lean_object*)(l_Std_Http_URI_Builder_setHost_x21___closed__0));
v___x_2985_ = lean_unsigned_to_nat(779u);
v___x_2986_ = lean_unsigned_to_nat(14u);
v___x_2987_ = ((lean_object*)(l_Std_Http_URI_Builder_setHost_x21___closed__1));
v___x_2988_ = l_String_quote(v_name_2981_);
v___x_2989_ = lean_string_append(v___x_2987_, v___x_2988_);
lean_dec_ref(v___x_2988_);
v___x_2990_ = l_mkPanicMessageWithDecl(v___x_2983_, v___x_2984_, v___x_2985_, v___x_2986_, v___x_2989_);
lean_dec_ref(v___x_2989_);
v___x_2991_ = l_panic___at___00Std_Http_URI_Builder_setScheme_x21_spec__0(v___x_2990_);
return v___x_2991_;
}
else
{
lean_object* v_val_2992_; 
lean_dec_ref(v_name_2981_);
v_val_2992_ = lean_ctor_get(v___x_2982_, 0);
lean_inc(v_val_2992_);
lean_dec_ref_known(v___x_2982_, 1);
return v_val_2992_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHostIPv4(lean_object* v_b_2993_, lean_object* v_addr_2994_){
_start:
{
lean_object* v_scheme_2995_; lean_object* v_userInfo_2996_; lean_object* v_port_2997_; lean_object* v_pathSegments_2998_; lean_object* v_query_2999_; lean_object* v_fragment_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3009_; 
v_scheme_2995_ = lean_ctor_get(v_b_2993_, 0);
v_userInfo_2996_ = lean_ctor_get(v_b_2993_, 1);
v_port_2997_ = lean_ctor_get(v_b_2993_, 3);
v_pathSegments_2998_ = lean_ctor_get(v_b_2993_, 4);
v_query_2999_ = lean_ctor_get(v_b_2993_, 5);
v_fragment_3000_ = lean_ctor_get(v_b_2993_, 6);
v_isSharedCheck_3009_ = !lean_is_exclusive(v_b_2993_);
if (v_isSharedCheck_3009_ == 0)
{
lean_object* v_unused_3010_; 
v_unused_3010_ = lean_ctor_get(v_b_2993_, 2);
lean_dec(v_unused_3010_);
v___x_3002_ = v_b_2993_;
v_isShared_3003_ = v_isSharedCheck_3009_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_fragment_3000_);
lean_inc(v_query_2999_);
lean_inc(v_pathSegments_2998_);
lean_inc(v_port_2997_);
lean_inc(v_userInfo_2996_);
lean_inc(v_scheme_2995_);
lean_dec(v_b_2993_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3009_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3007_; 
v___x_3004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3004_, 0, v_addr_2994_);
v___x_3005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3005_, 0, v___x_3004_);
if (v_isShared_3003_ == 0)
{
lean_ctor_set(v___x_3002_, 2, v___x_3005_);
v___x_3007_ = v___x_3002_;
goto v_reusejp_3006_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v_scheme_2995_);
lean_ctor_set(v_reuseFailAlloc_3008_, 1, v_userInfo_2996_);
lean_ctor_set(v_reuseFailAlloc_3008_, 2, v___x_3005_);
lean_ctor_set(v_reuseFailAlloc_3008_, 3, v_port_2997_);
lean_ctor_set(v_reuseFailAlloc_3008_, 4, v_pathSegments_2998_);
lean_ctor_set(v_reuseFailAlloc_3008_, 5, v_query_2999_);
lean_ctor_set(v_reuseFailAlloc_3008_, 6, v_fragment_3000_);
v___x_3007_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3006_;
}
v_reusejp_3006_:
{
return v___x_3007_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setHostIPv6(lean_object* v_b_3011_, lean_object* v_addr_3012_){
_start:
{
lean_object* v_scheme_3013_; lean_object* v_userInfo_3014_; lean_object* v_port_3015_; lean_object* v_pathSegments_3016_; lean_object* v_query_3017_; lean_object* v_fragment_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3027_; 
v_scheme_3013_ = lean_ctor_get(v_b_3011_, 0);
v_userInfo_3014_ = lean_ctor_get(v_b_3011_, 1);
v_port_3015_ = lean_ctor_get(v_b_3011_, 3);
v_pathSegments_3016_ = lean_ctor_get(v_b_3011_, 4);
v_query_3017_ = lean_ctor_get(v_b_3011_, 5);
v_fragment_3018_ = lean_ctor_get(v_b_3011_, 6);
v_isSharedCheck_3027_ = !lean_is_exclusive(v_b_3011_);
if (v_isSharedCheck_3027_ == 0)
{
lean_object* v_unused_3028_; 
v_unused_3028_ = lean_ctor_get(v_b_3011_, 2);
lean_dec(v_unused_3028_);
v___x_3020_ = v_b_3011_;
v_isShared_3021_ = v_isSharedCheck_3027_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_fragment_3018_);
lean_inc(v_query_3017_);
lean_inc(v_pathSegments_3016_);
lean_inc(v_port_3015_);
lean_inc(v_userInfo_3014_);
lean_inc(v_scheme_3013_);
lean_dec(v_b_3011_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3027_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3025_; 
v___x_3022_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3022_, 0, v_addr_3012_);
v___x_3023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3023_, 0, v___x_3022_);
if (v_isShared_3021_ == 0)
{
lean_ctor_set(v___x_3020_, 2, v___x_3023_);
v___x_3025_ = v___x_3020_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v_scheme_3013_);
lean_ctor_set(v_reuseFailAlloc_3026_, 1, v_userInfo_3014_);
lean_ctor_set(v_reuseFailAlloc_3026_, 2, v___x_3023_);
lean_ctor_set(v_reuseFailAlloc_3026_, 3, v_port_3015_);
lean_ctor_set(v_reuseFailAlloc_3026_, 4, v_pathSegments_3016_);
lean_ctor_set(v_reuseFailAlloc_3026_, 5, v_query_3017_);
lean_ctor_set(v_reuseFailAlloc_3026_, 6, v_fragment_3018_);
v___x_3025_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
return v___x_3025_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPort(lean_object* v_b_3029_, uint16_t v_port_3030_){
_start:
{
lean_object* v_scheme_3031_; lean_object* v_userInfo_3032_; lean_object* v_host_3033_; lean_object* v_pathSegments_3034_; lean_object* v_query_3035_; lean_object* v_fragment_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3044_; 
v_scheme_3031_ = lean_ctor_get(v_b_3029_, 0);
v_userInfo_3032_ = lean_ctor_get(v_b_3029_, 1);
v_host_3033_ = lean_ctor_get(v_b_3029_, 2);
v_pathSegments_3034_ = lean_ctor_get(v_b_3029_, 4);
v_query_3035_ = lean_ctor_get(v_b_3029_, 5);
v_fragment_3036_ = lean_ctor_get(v_b_3029_, 6);
v_isSharedCheck_3044_ = !lean_is_exclusive(v_b_3029_);
if (v_isSharedCheck_3044_ == 0)
{
lean_object* v_unused_3045_; 
v_unused_3045_ = lean_ctor_get(v_b_3029_, 3);
lean_dec(v_unused_3045_);
v___x_3038_ = v_b_3029_;
v_isShared_3039_ = v_isSharedCheck_3044_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_fragment_3036_);
lean_inc(v_query_3035_);
lean_inc(v_pathSegments_3034_);
lean_inc(v_host_3033_);
lean_inc(v_userInfo_3032_);
lean_inc(v_scheme_3031_);
lean_dec(v_b_3029_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3044_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3040_; lean_object* v___x_3042_; 
v___x_3040_ = lean_alloc_ctor(2, 0, 2);
lean_ctor_set_uint16(v___x_3040_, 0, v_port_3030_);
if (v_isShared_3039_ == 0)
{
lean_ctor_set(v___x_3038_, 3, v___x_3040_);
v___x_3042_ = v___x_3038_;
goto v_reusejp_3041_;
}
else
{
lean_object* v_reuseFailAlloc_3043_; 
v_reuseFailAlloc_3043_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3043_, 0, v_scheme_3031_);
lean_ctor_set(v_reuseFailAlloc_3043_, 1, v_userInfo_3032_);
lean_ctor_set(v_reuseFailAlloc_3043_, 2, v_host_3033_);
lean_ctor_set(v_reuseFailAlloc_3043_, 3, v___x_3040_);
lean_ctor_set(v_reuseFailAlloc_3043_, 4, v_pathSegments_3034_);
lean_ctor_set(v_reuseFailAlloc_3043_, 5, v_query_3035_);
lean_ctor_set(v_reuseFailAlloc_3043_, 6, v_fragment_3036_);
v___x_3042_ = v_reuseFailAlloc_3043_;
goto v_reusejp_3041_;
}
v_reusejp_3041_:
{
return v___x_3042_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPort___boxed(lean_object* v_b_3046_, lean_object* v_port_3047_){
_start:
{
uint16_t v_port_boxed_3048_; lean_object* v_res_3049_; 
v_port_boxed_3048_ = lean_unbox(v_port_3047_);
v_res_3049_ = l_Std_Http_URI_Builder_setPort(v_b_3046_, v_port_boxed_3048_);
return v_res_3049_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setPath(lean_object* v_b_3050_, lean_object* v_segments_3051_){
_start:
{
lean_object* v_scheme_3052_; lean_object* v_userInfo_3053_; lean_object* v_host_3054_; lean_object* v_port_3055_; lean_object* v_query_3056_; lean_object* v_fragment_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3064_; 
v_scheme_3052_ = lean_ctor_get(v_b_3050_, 0);
v_userInfo_3053_ = lean_ctor_get(v_b_3050_, 1);
v_host_3054_ = lean_ctor_get(v_b_3050_, 2);
v_port_3055_ = lean_ctor_get(v_b_3050_, 3);
v_query_3056_ = lean_ctor_get(v_b_3050_, 5);
v_fragment_3057_ = lean_ctor_get(v_b_3050_, 6);
v_isSharedCheck_3064_ = !lean_is_exclusive(v_b_3050_);
if (v_isSharedCheck_3064_ == 0)
{
lean_object* v_unused_3065_; 
v_unused_3065_ = lean_ctor_get(v_b_3050_, 4);
lean_dec(v_unused_3065_);
v___x_3059_ = v_b_3050_;
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_fragment_3057_);
lean_inc(v_query_3056_);
lean_inc(v_port_3055_);
lean_inc(v_host_3054_);
lean_inc(v_userInfo_3053_);
lean_inc(v_scheme_3052_);
lean_dec(v_b_3050_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3062_; 
if (v_isShared_3060_ == 0)
{
lean_ctor_set(v___x_3059_, 4, v_segments_3051_);
v___x_3062_ = v___x_3059_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v_scheme_3052_);
lean_ctor_set(v_reuseFailAlloc_3063_, 1, v_userInfo_3053_);
lean_ctor_set(v_reuseFailAlloc_3063_, 2, v_host_3054_);
lean_ctor_set(v_reuseFailAlloc_3063_, 3, v_port_3055_);
lean_ctor_set(v_reuseFailAlloc_3063_, 4, v_segments_3051_);
lean_ctor_set(v_reuseFailAlloc_3063_, 5, v_query_3056_);
lean_ctor_set(v_reuseFailAlloc_3063_, 6, v_fragment_3057_);
v___x_3062_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
return v___x_3062_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_appendPathSegment(lean_object* v_b_3066_, lean_object* v_segment_3067_){
_start:
{
lean_object* v_scheme_3068_; lean_object* v_userInfo_3069_; lean_object* v_host_3070_; lean_object* v_port_3071_; lean_object* v_pathSegments_3072_; lean_object* v_query_3073_; lean_object* v_fragment_3074_; lean_object* v___x_3076_; uint8_t v_isShared_3077_; uint8_t v_isSharedCheck_3082_; 
v_scheme_3068_ = lean_ctor_get(v_b_3066_, 0);
v_userInfo_3069_ = lean_ctor_get(v_b_3066_, 1);
v_host_3070_ = lean_ctor_get(v_b_3066_, 2);
v_port_3071_ = lean_ctor_get(v_b_3066_, 3);
v_pathSegments_3072_ = lean_ctor_get(v_b_3066_, 4);
v_query_3073_ = lean_ctor_get(v_b_3066_, 5);
v_fragment_3074_ = lean_ctor_get(v_b_3066_, 6);
v_isSharedCheck_3082_ = !lean_is_exclusive(v_b_3066_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_3076_ = v_b_3066_;
v_isShared_3077_ = v_isSharedCheck_3082_;
goto v_resetjp_3075_;
}
else
{
lean_inc(v_fragment_3074_);
lean_inc(v_query_3073_);
lean_inc(v_pathSegments_3072_);
lean_inc(v_port_3071_);
lean_inc(v_host_3070_);
lean_inc(v_userInfo_3069_);
lean_inc(v_scheme_3068_);
lean_dec(v_b_3066_);
v___x_3076_ = lean_box(0);
v_isShared_3077_ = v_isSharedCheck_3082_;
goto v_resetjp_3075_;
}
v_resetjp_3075_:
{
lean_object* v___x_3078_; lean_object* v___x_3080_; 
v___x_3078_ = lean_array_push(v_pathSegments_3072_, v_segment_3067_);
if (v_isShared_3077_ == 0)
{
lean_ctor_set(v___x_3076_, 4, v___x_3078_);
v___x_3080_ = v___x_3076_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v_scheme_3068_);
lean_ctor_set(v_reuseFailAlloc_3081_, 1, v_userInfo_3069_);
lean_ctor_set(v_reuseFailAlloc_3081_, 2, v_host_3070_);
lean_ctor_set(v_reuseFailAlloc_3081_, 3, v_port_3071_);
lean_ctor_set(v_reuseFailAlloc_3081_, 4, v___x_3078_);
lean_ctor_set(v_reuseFailAlloc_3081_, 5, v_query_3073_);
lean_ctor_set(v_reuseFailAlloc_3081_, 6, v_fragment_3074_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_addQueryParam(lean_object* v_b_3083_, lean_object* v_key_3084_, lean_object* v_value_3085_){
_start:
{
lean_object* v_scheme_3086_; lean_object* v_userInfo_3087_; lean_object* v_host_3088_; lean_object* v_port_3089_; lean_object* v_pathSegments_3090_; lean_object* v_query_3091_; lean_object* v_fragment_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3102_; 
v_scheme_3086_ = lean_ctor_get(v_b_3083_, 0);
v_userInfo_3087_ = lean_ctor_get(v_b_3083_, 1);
v_host_3088_ = lean_ctor_get(v_b_3083_, 2);
v_port_3089_ = lean_ctor_get(v_b_3083_, 3);
v_pathSegments_3090_ = lean_ctor_get(v_b_3083_, 4);
v_query_3091_ = lean_ctor_get(v_b_3083_, 5);
v_fragment_3092_ = lean_ctor_get(v_b_3083_, 6);
v_isSharedCheck_3102_ = !lean_is_exclusive(v_b_3083_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_3094_ = v_b_3083_;
v_isShared_3095_ = v_isSharedCheck_3102_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_fragment_3092_);
lean_inc(v_query_3091_);
lean_inc(v_pathSegments_3090_);
lean_inc(v_port_3089_);
lean_inc(v_host_3088_);
lean_inc(v_userInfo_3087_);
lean_inc(v_scheme_3086_);
lean_dec(v_b_3083_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3102_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3100_; 
v___x_3096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3096_, 0, v_value_3085_);
v___x_3097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3097_, 0, v_key_3084_);
lean_ctor_set(v___x_3097_, 1, v___x_3096_);
v___x_3098_ = lean_array_push(v_query_3091_, v___x_3097_);
if (v_isShared_3095_ == 0)
{
lean_ctor_set(v___x_3094_, 5, v___x_3098_);
v___x_3100_ = v___x_3094_;
goto v_reusejp_3099_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_scheme_3086_);
lean_ctor_set(v_reuseFailAlloc_3101_, 1, v_userInfo_3087_);
lean_ctor_set(v_reuseFailAlloc_3101_, 2, v_host_3088_);
lean_ctor_set(v_reuseFailAlloc_3101_, 3, v_port_3089_);
lean_ctor_set(v_reuseFailAlloc_3101_, 4, v_pathSegments_3090_);
lean_ctor_set(v_reuseFailAlloc_3101_, 5, v___x_3098_);
lean_ctor_set(v_reuseFailAlloc_3101_, 6, v_fragment_3092_);
v___x_3100_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3099_;
}
v_reusejp_3099_:
{
return v___x_3100_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_addQueryFlag(lean_object* v_b_3103_, lean_object* v_key_3104_){
_start:
{
lean_object* v_scheme_3105_; lean_object* v_userInfo_3106_; lean_object* v_host_3107_; lean_object* v_port_3108_; lean_object* v_pathSegments_3109_; lean_object* v_query_3110_; lean_object* v_fragment_3111_; lean_object* v___x_3113_; uint8_t v_isShared_3114_; uint8_t v_isSharedCheck_3121_; 
v_scheme_3105_ = lean_ctor_get(v_b_3103_, 0);
v_userInfo_3106_ = lean_ctor_get(v_b_3103_, 1);
v_host_3107_ = lean_ctor_get(v_b_3103_, 2);
v_port_3108_ = lean_ctor_get(v_b_3103_, 3);
v_pathSegments_3109_ = lean_ctor_get(v_b_3103_, 4);
v_query_3110_ = lean_ctor_get(v_b_3103_, 5);
v_fragment_3111_ = lean_ctor_get(v_b_3103_, 6);
v_isSharedCheck_3121_ = !lean_is_exclusive(v_b_3103_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3113_ = v_b_3103_;
v_isShared_3114_ = v_isSharedCheck_3121_;
goto v_resetjp_3112_;
}
else
{
lean_inc(v_fragment_3111_);
lean_inc(v_query_3110_);
lean_inc(v_pathSegments_3109_);
lean_inc(v_port_3108_);
lean_inc(v_host_3107_);
lean_inc(v_userInfo_3106_);
lean_inc(v_scheme_3105_);
lean_dec(v_b_3103_);
v___x_3113_ = lean_box(0);
v_isShared_3114_ = v_isSharedCheck_3121_;
goto v_resetjp_3112_;
}
v_resetjp_3112_:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3119_; 
v___x_3115_ = lean_box(0);
v___x_3116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3116_, 0, v_key_3104_);
lean_ctor_set(v___x_3116_, 1, v___x_3115_);
v___x_3117_ = lean_array_push(v_query_3110_, v___x_3116_);
if (v_isShared_3114_ == 0)
{
lean_ctor_set(v___x_3113_, 5, v___x_3117_);
v___x_3119_ = v___x_3113_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v_scheme_3105_);
lean_ctor_set(v_reuseFailAlloc_3120_, 1, v_userInfo_3106_);
lean_ctor_set(v_reuseFailAlloc_3120_, 2, v_host_3107_);
lean_ctor_set(v_reuseFailAlloc_3120_, 3, v_port_3108_);
lean_ctor_set(v_reuseFailAlloc_3120_, 4, v_pathSegments_3109_);
lean_ctor_set(v_reuseFailAlloc_3120_, 5, v___x_3117_);
lean_ctor_set(v_reuseFailAlloc_3120_, 6, v_fragment_3111_);
v___x_3119_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
return v___x_3119_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setQuery(lean_object* v_b_3122_, lean_object* v_query_3123_){
_start:
{
lean_object* v_scheme_3124_; lean_object* v_userInfo_3125_; lean_object* v_host_3126_; lean_object* v_port_3127_; lean_object* v_pathSegments_3128_; lean_object* v_fragment_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
v_scheme_3124_ = lean_ctor_get(v_b_3122_, 0);
v_userInfo_3125_ = lean_ctor_get(v_b_3122_, 1);
v_host_3126_ = lean_ctor_get(v_b_3122_, 2);
v_port_3127_ = lean_ctor_get(v_b_3122_, 3);
v_pathSegments_3128_ = lean_ctor_get(v_b_3122_, 4);
v_fragment_3129_ = lean_ctor_get(v_b_3122_, 6);
v_isSharedCheck_3136_ = !lean_is_exclusive(v_b_3122_);
if (v_isSharedCheck_3136_ == 0)
{
lean_object* v_unused_3137_; 
v_unused_3137_ = lean_ctor_get(v_b_3122_, 5);
lean_dec(v_unused_3137_);
v___x_3131_ = v_b_3122_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_fragment_3129_);
lean_inc(v_pathSegments_3128_);
lean_inc(v_port_3127_);
lean_inc(v_host_3126_);
lean_inc(v_userInfo_3125_);
lean_inc(v_scheme_3124_);
lean_dec(v_b_3122_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3134_; 
if (v_isShared_3132_ == 0)
{
lean_ctor_set(v___x_3131_, 5, v_query_3123_);
v___x_3134_ = v___x_3131_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_scheme_3124_);
lean_ctor_set(v_reuseFailAlloc_3135_, 1, v_userInfo_3125_);
lean_ctor_set(v_reuseFailAlloc_3135_, 2, v_host_3126_);
lean_ctor_set(v_reuseFailAlloc_3135_, 3, v_port_3127_);
lean_ctor_set(v_reuseFailAlloc_3135_, 4, v_pathSegments_3128_);
lean_ctor_set(v_reuseFailAlloc_3135_, 5, v_query_3123_);
lean_ctor_set(v_reuseFailAlloc_3135_, 6, v_fragment_3129_);
v___x_3134_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
return v___x_3134_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_setFragment(lean_object* v_b_3138_, lean_object* v_fragment_3139_){
_start:
{
lean_object* v_scheme_3140_; lean_object* v_userInfo_3141_; lean_object* v_host_3142_; lean_object* v_port_3143_; lean_object* v_pathSegments_3144_; lean_object* v_query_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3153_; 
v_scheme_3140_ = lean_ctor_get(v_b_3138_, 0);
v_userInfo_3141_ = lean_ctor_get(v_b_3138_, 1);
v_host_3142_ = lean_ctor_get(v_b_3138_, 2);
v_port_3143_ = lean_ctor_get(v_b_3138_, 3);
v_pathSegments_3144_ = lean_ctor_get(v_b_3138_, 4);
v_query_3145_ = lean_ctor_get(v_b_3138_, 5);
v_isSharedCheck_3153_ = !lean_is_exclusive(v_b_3138_);
if (v_isSharedCheck_3153_ == 0)
{
lean_object* v_unused_3154_; 
v_unused_3154_ = lean_ctor_get(v_b_3138_, 6);
lean_dec(v_unused_3154_);
v___x_3147_ = v_b_3138_;
v_isShared_3148_ = v_isSharedCheck_3153_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_query_3145_);
lean_inc(v_pathSegments_3144_);
lean_inc(v_port_3143_);
lean_inc(v_host_3142_);
lean_inc(v_userInfo_3141_);
lean_inc(v_scheme_3140_);
lean_dec(v_b_3138_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3153_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3149_; lean_object* v___x_3151_; 
v___x_3149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3149_, 0, v_fragment_3139_);
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 6, v___x_3149_);
v___x_3151_ = v___x_3147_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v_scheme_3140_);
lean_ctor_set(v_reuseFailAlloc_3152_, 1, v_userInfo_3141_);
lean_ctor_set(v_reuseFailAlloc_3152_, 2, v_host_3142_);
lean_ctor_set(v_reuseFailAlloc_3152_, 3, v_port_3143_);
lean_ctor_set(v_reuseFailAlloc_3152_, 4, v_pathSegments_3144_);
lean_ctor_set(v_reuseFailAlloc_3152_, 5, v_query_3145_);
lean_ctor_set(v_reuseFailAlloc_3152_, 6, v___x_3149_);
v___x_3151_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
return v___x_3151_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0(size_t v_sz_3155_, size_t v_i_3156_, lean_object* v_bs_3157_){
_start:
{
uint8_t v___x_3158_; 
v___x_3158_ = lean_usize_dec_lt(v_i_3156_, v_sz_3155_);
if (v___x_3158_ == 0)
{
return v_bs_3157_;
}
else
{
lean_object* v_v_3159_; lean_object* v___x_3160_; lean_object* v_bs_x27_3161_; lean_object* v___x_3162_; size_t v___x_3163_; size_t v___x_3164_; lean_object* v___x_3165_; 
v_v_3159_ = lean_array_uget(v_bs_3157_, v_i_3156_);
v___x_3160_ = lean_unsigned_to_nat(0u);
v_bs_x27_3161_ = lean_array_uset(v_bs_3157_, v_i_3156_, v___x_3160_);
v___x_3162_ = l_Std_Http_URI_EncodedSegment_encode(v_v_3159_);
v___x_3163_ = ((size_t)1ULL);
v___x_3164_ = lean_usize_add(v_i_3156_, v___x_3163_);
v___x_3165_ = lean_array_uset(v_bs_x27_3161_, v_i_3156_, v___x_3162_);
v_i_3156_ = v___x_3164_;
v_bs_3157_ = v___x_3165_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0___boxed(lean_object* v_sz_3167_, lean_object* v_i_3168_, lean_object* v_bs_3169_){
_start:
{
size_t v_sz_boxed_3170_; size_t v_i_boxed_3171_; lean_object* v_res_3172_; 
v_sz_boxed_3170_ = lean_unbox_usize(v_sz_3167_);
lean_dec(v_sz_3167_);
v_i_boxed_3171_ = lean_unbox_usize(v_i_3168_);
lean_dec(v_i_3168_);
v_res_3172_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0(v_sz_boxed_3170_, v_i_boxed_3171_, v_bs_3169_);
return v_res_3172_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1(size_t v_sz_3173_, size_t v_i_3174_, lean_object* v_bs_3175_){
_start:
{
uint8_t v___x_3176_; 
v___x_3176_ = lean_usize_dec_lt(v_i_3174_, v_sz_3173_);
if (v___x_3176_ == 0)
{
return v_bs_3175_;
}
else
{
lean_object* v_v_3177_; lean_object* v_fst_3178_; lean_object* v_snd_3179_; lean_object* v___x_3181_; uint8_t v_isShared_3182_; uint8_t v_isSharedCheck_3208_; 
v_v_3177_ = lean_array_uget(v_bs_3175_, v_i_3174_);
v_fst_3178_ = lean_ctor_get(v_v_3177_, 0);
v_snd_3179_ = lean_ctor_get(v_v_3177_, 1);
v_isSharedCheck_3208_ = !lean_is_exclusive(v_v_3177_);
if (v_isSharedCheck_3208_ == 0)
{
v___x_3181_ = v_v_3177_;
v_isShared_3182_ = v_isSharedCheck_3208_;
goto v_resetjp_3180_;
}
else
{
lean_inc(v_snd_3179_);
lean_inc(v_fst_3178_);
lean_dec(v_v_3177_);
v___x_3181_ = lean_box(0);
v_isShared_3182_ = v_isSharedCheck_3208_;
goto v_resetjp_3180_;
}
v_resetjp_3180_:
{
lean_object* v___x_3183_; lean_object* v_bs_x27_3184_; lean_object* v___y_3186_; lean_object* v___x_3191_; 
v___x_3183_ = lean_unsigned_to_nat(0u);
v_bs_x27_3184_ = lean_array_uset(v_bs_3175_, v_i_3174_, v___x_3183_);
v___x_3191_ = l_Std_Http_URI_EncodedQueryParam_encode(v_fst_3178_);
if (lean_obj_tag(v_snd_3179_) == 0)
{
lean_object* v___x_3192_; lean_object* v___x_3194_; 
v___x_3192_ = lean_box(0);
if (v_isShared_3182_ == 0)
{
lean_ctor_set(v___x_3181_, 1, v___x_3192_);
lean_ctor_set(v___x_3181_, 0, v___x_3191_);
v___x_3194_ = v___x_3181_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v___x_3191_);
lean_ctor_set(v_reuseFailAlloc_3195_, 1, v___x_3192_);
v___x_3194_ = v_reuseFailAlloc_3195_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
v___y_3186_ = v___x_3194_;
goto v___jp_3185_;
}
}
else
{
lean_object* v_val_3196_; lean_object* v___x_3198_; uint8_t v_isShared_3199_; uint8_t v_isSharedCheck_3207_; 
v_val_3196_ = lean_ctor_get(v_snd_3179_, 0);
v_isSharedCheck_3207_ = !lean_is_exclusive(v_snd_3179_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3198_ = v_snd_3179_;
v_isShared_3199_ = v_isSharedCheck_3207_;
goto v_resetjp_3197_;
}
else
{
lean_inc(v_val_3196_);
lean_dec(v_snd_3179_);
v___x_3198_ = lean_box(0);
v_isShared_3199_ = v_isSharedCheck_3207_;
goto v_resetjp_3197_;
}
v_resetjp_3197_:
{
lean_object* v___x_3200_; lean_object* v___x_3202_; 
v___x_3200_ = l_Std_Http_URI_EncodedQueryParam_encode(v_val_3196_);
if (v_isShared_3199_ == 0)
{
lean_ctor_set(v___x_3198_, 0, v___x_3200_);
v___x_3202_ = v___x_3198_;
goto v_reusejp_3201_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v___x_3200_);
v___x_3202_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3201_;
}
v_reusejp_3201_:
{
lean_object* v___x_3204_; 
if (v_isShared_3182_ == 0)
{
lean_ctor_set(v___x_3181_, 1, v___x_3202_);
lean_ctor_set(v___x_3181_, 0, v___x_3191_);
v___x_3204_ = v___x_3181_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v___x_3191_);
lean_ctor_set(v_reuseFailAlloc_3205_, 1, v___x_3202_);
v___x_3204_ = v_reuseFailAlloc_3205_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
v___y_3186_ = v___x_3204_;
goto v___jp_3185_;
}
}
}
}
v___jp_3185_:
{
size_t v___x_3187_; size_t v___x_3188_; lean_object* v___x_3189_; 
v___x_3187_ = ((size_t)1ULL);
v___x_3188_ = lean_usize_add(v_i_3174_, v___x_3187_);
v___x_3189_ = lean_array_uset(v_bs_x27_3184_, v_i_3174_, v___y_3186_);
v_i_3174_ = v___x_3188_;
v_bs_3175_ = v___x_3189_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1___boxed(lean_object* v_sz_3209_, lean_object* v_i_3210_, lean_object* v_bs_3211_){
_start:
{
size_t v_sz_boxed_3212_; size_t v_i_boxed_3213_; lean_object* v_res_3214_; 
v_sz_boxed_3212_ = lean_unbox_usize(v_sz_3209_);
lean_dec(v_sz_3209_);
v_i_boxed_3213_ = lean_unbox_usize(v_i_3210_);
lean_dec(v_i_3210_);
v_res_3214_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1(v_sz_boxed_3212_, v_i_boxed_3213_, v_bs_3211_);
return v_res_3214_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Builder_build(lean_object* v_b_3215_){
_start:
{
lean_object* v___y_3217_; lean_object* v___y_3218_; lean_object* v___y_3219_; lean_object* v___y_3220_; uint8_t v___y_3221_; lean_object* v___y_3222_; lean_object* v_scheme_3238_; lean_object* v_userInfo_3239_; lean_object* v_host_3240_; lean_object* v_port_3241_; lean_object* v_pathSegments_3242_; lean_object* v_query_3243_; lean_object* v_fragment_3244_; lean_object* v___y_3246_; 
v_scheme_3238_ = lean_ctor_get(v_b_3215_, 0);
lean_inc(v_scheme_3238_);
v_userInfo_3239_ = lean_ctor_get(v_b_3215_, 1);
lean_inc(v_userInfo_3239_);
v_host_3240_ = lean_ctor_get(v_b_3215_, 2);
lean_inc(v_host_3240_);
v_port_3241_ = lean_ctor_get(v_b_3215_, 3);
lean_inc(v_port_3241_);
v_pathSegments_3242_ = lean_ctor_get(v_b_3215_, 4);
lean_inc_ref(v_pathSegments_3242_);
v_query_3243_ = lean_ctor_get(v_b_3215_, 5);
lean_inc_ref(v_query_3243_);
v_fragment_3244_ = lean_ctor_get(v_b_3215_, 6);
lean_inc(v_fragment_3244_);
lean_dec_ref(v_b_3215_);
if (lean_obj_tag(v_scheme_3238_) == 0)
{
lean_object* v___x_3259_; 
v___x_3259_ = ((lean_object*)(l_Std_Http_URI_Scheme_defaultPort___closed__0));
v___y_3246_ = v___x_3259_;
goto v___jp_3245_;
}
else
{
lean_object* v_val_3260_; 
v_val_3260_ = lean_ctor_get(v_scheme_3238_, 0);
lean_inc(v_val_3260_);
lean_dec_ref_known(v_scheme_3238_, 1);
v___y_3246_ = v_val_3260_;
goto v___jp_3245_;
}
v___jp_3216_:
{
size_t v_sz_3223_; size_t v___x_3224_; lean_object* v___x_3225_; lean_object* v_path_3226_; size_t v_sz_3227_; lean_object* v_query_3228_; lean_object* v___x_3229_; lean_object* v_query_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; uint8_t v___x_3233_; 
v_sz_3223_ = lean_array_size(v___y_3219_);
v___x_3224_ = ((size_t)0ULL);
v___x_3225_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__0(v_sz_3223_, v___x_3224_, v___y_3219_);
v_path_3226_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_path_3226_, 0, v___x_3225_);
lean_ctor_set_uint8(v_path_3226_, sizeof(void*)*1, v___y_3221_);
v_sz_3227_ = lean_array_size(v___y_3218_);
v_query_3228_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Http_URI_Builder_build_spec__1(v_sz_3227_, v___x_3224_, v___y_3218_);
v___x_3229_ = lean_array_to_list(v_query_3228_);
v_query_3230_ = lean_array_mk(v___x_3229_);
v___x_3231_ = lean_array_get_size(v_query_3230_);
v___x_3232_ = lean_unsigned_to_nat(0u);
v___x_3233_ = lean_nat_dec_eq(v___x_3231_, v___x_3232_);
if (v___x_3233_ == 0)
{
lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3234_, 0, v_query_3230_);
v___x_3235_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3235_, 0, v___y_3220_);
lean_ctor_set(v___x_3235_, 1, v___y_3222_);
lean_ctor_set(v___x_3235_, 2, v_path_3226_);
lean_ctor_set(v___x_3235_, 3, v___x_3234_);
lean_ctor_set(v___x_3235_, 4, v___y_3217_);
return v___x_3235_;
}
else
{
lean_object* v___x_3236_; lean_object* v___x_3237_; 
lean_dec_ref(v_query_3230_);
v___x_3236_ = lean_box(0);
v___x_3237_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3237_, 0, v___y_3220_);
lean_ctor_set(v___x_3237_, 1, v___y_3222_);
lean_ctor_set(v___x_3237_, 2, v_path_3226_);
lean_ctor_set(v___x_3237_, 3, v___x_3236_);
lean_ctor_set(v___x_3237_, 4, v___y_3217_);
return v___x_3237_;
}
}
v___jp_3245_:
{
if (lean_obj_tag(v_host_3240_) == 0)
{
uint8_t v___x_3247_; lean_object* v___x_3248_; 
lean_dec(v_port_3241_);
lean_dec(v_userInfo_3239_);
v___x_3247_ = 1;
v___x_3248_ = lean_box(0);
v___y_3217_ = v_fragment_3244_;
v___y_3218_ = v_query_3243_;
v___y_3219_ = v_pathSegments_3242_;
v___y_3220_ = v___y_3246_;
v___y_3221_ = v___x_3247_;
v___y_3222_ = v___x_3248_;
goto v___jp_3216_;
}
else
{
lean_object* v_val_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3258_; 
v_val_3249_ = lean_ctor_get(v_host_3240_, 0);
v_isSharedCheck_3258_ = !lean_is_exclusive(v_host_3240_);
if (v_isSharedCheck_3258_ == 0)
{
v___x_3251_ = v_host_3240_;
v_isShared_3252_ = v_isSharedCheck_3258_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_val_3249_);
lean_dec(v_host_3240_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3258_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
uint8_t v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3256_; 
v___x_3253_ = 1;
v___x_3254_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3254_, 0, v_userInfo_3239_);
lean_ctor_set(v___x_3254_, 1, v_val_3249_);
lean_ctor_set(v___x_3254_, 2, v_port_3241_);
if (v_isShared_3252_ == 0)
{
lean_ctor_set(v___x_3251_, 0, v___x_3254_);
v___x_3256_ = v___x_3251_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v___x_3254_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
v___y_3217_ = v_fragment_3244_;
v___y_3218_ = v_query_3243_;
v___y_3219_ = v_pathSegments_3242_;
v___y_3220_ = v___y_3246_;
v___y_3221_ = v___x_3253_;
v___y_3222_ = v___x_3256_;
goto v___jp_3216_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withScheme_x21(lean_object* v_uri_3261_, lean_object* v_scheme_3262_){
_start:
{
lean_object* v_authority_3263_; lean_object* v_path_3264_; lean_object* v_query_3265_; lean_object* v_fragment_3266_; lean_object* v___x_3268_; uint8_t v_isShared_3269_; uint8_t v_isSharedCheck_3274_; 
v_authority_3263_ = lean_ctor_get(v_uri_3261_, 1);
v_path_3264_ = lean_ctor_get(v_uri_3261_, 2);
v_query_3265_ = lean_ctor_get(v_uri_3261_, 3);
v_fragment_3266_ = lean_ctor_get(v_uri_3261_, 4);
v_isSharedCheck_3274_ = !lean_is_exclusive(v_uri_3261_);
if (v_isSharedCheck_3274_ == 0)
{
lean_object* v_unused_3275_; 
v_unused_3275_ = lean_ctor_get(v_uri_3261_, 0);
lean_dec(v_unused_3275_);
v___x_3268_ = v_uri_3261_;
v_isShared_3269_ = v_isSharedCheck_3274_;
goto v_resetjp_3267_;
}
else
{
lean_inc(v_fragment_3266_);
lean_inc(v_query_3265_);
lean_inc(v_path_3264_);
lean_inc(v_authority_3263_);
lean_dec(v_uri_3261_);
v___x_3268_ = lean_box(0);
v_isShared_3269_ = v_isSharedCheck_3274_;
goto v_resetjp_3267_;
}
v_resetjp_3267_:
{
lean_object* v___x_3270_; lean_object* v___x_3272_; 
v___x_3270_ = l_Std_Http_URI_Scheme_ofString_x21(v_scheme_3262_);
if (v_isShared_3269_ == 0)
{
lean_ctor_set(v___x_3268_, 0, v___x_3270_);
v___x_3272_ = v___x_3268_;
goto v_reusejp_3271_;
}
else
{
lean_object* v_reuseFailAlloc_3273_; 
v_reuseFailAlloc_3273_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3273_, 0, v___x_3270_);
lean_ctor_set(v_reuseFailAlloc_3273_, 1, v_authority_3263_);
lean_ctor_set(v_reuseFailAlloc_3273_, 2, v_path_3264_);
lean_ctor_set(v_reuseFailAlloc_3273_, 3, v_query_3265_);
lean_ctor_set(v_reuseFailAlloc_3273_, 4, v_fragment_3266_);
v___x_3272_ = v_reuseFailAlloc_3273_;
goto v_reusejp_3271_;
}
v_reusejp_3271_:
{
return v___x_3272_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withAuthority(lean_object* v_uri_3276_, lean_object* v_authority_3277_){
_start:
{
lean_object* v_scheme_3278_; lean_object* v_path_3279_; lean_object* v_query_3280_; lean_object* v_fragment_3281_; lean_object* v___x_3283_; uint8_t v_isShared_3284_; uint8_t v_isSharedCheck_3288_; 
v_scheme_3278_ = lean_ctor_get(v_uri_3276_, 0);
v_path_3279_ = lean_ctor_get(v_uri_3276_, 2);
v_query_3280_ = lean_ctor_get(v_uri_3276_, 3);
v_fragment_3281_ = lean_ctor_get(v_uri_3276_, 4);
v_isSharedCheck_3288_ = !lean_is_exclusive(v_uri_3276_);
if (v_isSharedCheck_3288_ == 0)
{
lean_object* v_unused_3289_; 
v_unused_3289_ = lean_ctor_get(v_uri_3276_, 1);
lean_dec(v_unused_3289_);
v___x_3283_ = v_uri_3276_;
v_isShared_3284_ = v_isSharedCheck_3288_;
goto v_resetjp_3282_;
}
else
{
lean_inc(v_fragment_3281_);
lean_inc(v_query_3280_);
lean_inc(v_path_3279_);
lean_inc(v_scheme_3278_);
lean_dec(v_uri_3276_);
v___x_3283_ = lean_box(0);
v_isShared_3284_ = v_isSharedCheck_3288_;
goto v_resetjp_3282_;
}
v_resetjp_3282_:
{
lean_object* v___x_3286_; 
if (v_isShared_3284_ == 0)
{
lean_ctor_set(v___x_3283_, 1, v_authority_3277_);
v___x_3286_ = v___x_3283_;
goto v_reusejp_3285_;
}
else
{
lean_object* v_reuseFailAlloc_3287_; 
v_reuseFailAlloc_3287_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3287_, 0, v_scheme_3278_);
lean_ctor_set(v_reuseFailAlloc_3287_, 1, v_authority_3277_);
lean_ctor_set(v_reuseFailAlloc_3287_, 2, v_path_3279_);
lean_ctor_set(v_reuseFailAlloc_3287_, 3, v_query_3280_);
lean_ctor_set(v_reuseFailAlloc_3287_, 4, v_fragment_3281_);
v___x_3286_ = v_reuseFailAlloc_3287_;
goto v_reusejp_3285_;
}
v_reusejp_3285_:
{
return v___x_3286_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withPath(lean_object* v_uri_3290_, lean_object* v_path_3291_){
_start:
{
lean_object* v_scheme_3292_; lean_object* v_authority_3293_; lean_object* v_query_3294_; lean_object* v_fragment_3295_; lean_object* v___x_3297_; uint8_t v_isShared_3298_; uint8_t v_isSharedCheck_3302_; 
v_scheme_3292_ = lean_ctor_get(v_uri_3290_, 0);
v_authority_3293_ = lean_ctor_get(v_uri_3290_, 1);
v_query_3294_ = lean_ctor_get(v_uri_3290_, 3);
v_fragment_3295_ = lean_ctor_get(v_uri_3290_, 4);
v_isSharedCheck_3302_ = !lean_is_exclusive(v_uri_3290_);
if (v_isSharedCheck_3302_ == 0)
{
lean_object* v_unused_3303_; 
v_unused_3303_ = lean_ctor_get(v_uri_3290_, 2);
lean_dec(v_unused_3303_);
v___x_3297_ = v_uri_3290_;
v_isShared_3298_ = v_isSharedCheck_3302_;
goto v_resetjp_3296_;
}
else
{
lean_inc(v_fragment_3295_);
lean_inc(v_query_3294_);
lean_inc(v_authority_3293_);
lean_inc(v_scheme_3292_);
lean_dec(v_uri_3290_);
v___x_3297_ = lean_box(0);
v_isShared_3298_ = v_isSharedCheck_3302_;
goto v_resetjp_3296_;
}
v_resetjp_3296_:
{
lean_object* v___x_3300_; 
if (v_isShared_3298_ == 0)
{
lean_ctor_set(v___x_3297_, 2, v_path_3291_);
v___x_3300_ = v___x_3297_;
goto v_reusejp_3299_;
}
else
{
lean_object* v_reuseFailAlloc_3301_; 
v_reuseFailAlloc_3301_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3301_, 0, v_scheme_3292_);
lean_ctor_set(v_reuseFailAlloc_3301_, 1, v_authority_3293_);
lean_ctor_set(v_reuseFailAlloc_3301_, 2, v_path_3291_);
lean_ctor_set(v_reuseFailAlloc_3301_, 3, v_query_3294_);
lean_ctor_set(v_reuseFailAlloc_3301_, 4, v_fragment_3295_);
v___x_3300_ = v_reuseFailAlloc_3301_;
goto v_reusejp_3299_;
}
v_reusejp_3299_:
{
return v___x_3300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withQuery(lean_object* v_uri_3304_, lean_object* v_query_3305_){
_start:
{
lean_object* v_scheme_3306_; lean_object* v_authority_3307_; lean_object* v_path_3308_; lean_object* v_fragment_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3317_; 
v_scheme_3306_ = lean_ctor_get(v_uri_3304_, 0);
v_authority_3307_ = lean_ctor_get(v_uri_3304_, 1);
v_path_3308_ = lean_ctor_get(v_uri_3304_, 2);
v_fragment_3309_ = lean_ctor_get(v_uri_3304_, 4);
v_isSharedCheck_3317_ = !lean_is_exclusive(v_uri_3304_);
if (v_isSharedCheck_3317_ == 0)
{
lean_object* v_unused_3318_; 
v_unused_3318_ = lean_ctor_get(v_uri_3304_, 3);
lean_dec(v_unused_3318_);
v___x_3311_ = v_uri_3304_;
v_isShared_3312_ = v_isSharedCheck_3317_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_fragment_3309_);
lean_inc(v_path_3308_);
lean_inc(v_authority_3307_);
lean_inc(v_scheme_3306_);
lean_dec(v_uri_3304_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3317_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
lean_object* v___x_3313_; lean_object* v___x_3315_; 
v___x_3313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3313_, 0, v_query_3305_);
if (v_isShared_3312_ == 0)
{
lean_ctor_set(v___x_3311_, 3, v___x_3313_);
v___x_3315_ = v___x_3311_;
goto v_reusejp_3314_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v_scheme_3306_);
lean_ctor_set(v_reuseFailAlloc_3316_, 1, v_authority_3307_);
lean_ctor_set(v_reuseFailAlloc_3316_, 2, v_path_3308_);
lean_ctor_set(v_reuseFailAlloc_3316_, 3, v___x_3313_);
lean_ctor_set(v_reuseFailAlloc_3316_, 4, v_fragment_3309_);
v___x_3315_ = v_reuseFailAlloc_3316_;
goto v_reusejp_3314_;
}
v_reusejp_3314_:
{
return v___x_3315_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_withFragment(lean_object* v_uri_3319_, lean_object* v_fragment_3320_){
_start:
{
lean_object* v_scheme_3321_; lean_object* v_authority_3322_; lean_object* v_path_3323_; lean_object* v_query_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3331_; 
v_scheme_3321_ = lean_ctor_get(v_uri_3319_, 0);
v_authority_3322_ = lean_ctor_get(v_uri_3319_, 1);
v_path_3323_ = lean_ctor_get(v_uri_3319_, 2);
v_query_3324_ = lean_ctor_get(v_uri_3319_, 3);
v_isSharedCheck_3331_ = !lean_is_exclusive(v_uri_3319_);
if (v_isSharedCheck_3331_ == 0)
{
lean_object* v_unused_3332_; 
v_unused_3332_ = lean_ctor_get(v_uri_3319_, 4);
lean_dec(v_unused_3332_);
v___x_3326_ = v_uri_3319_;
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_query_3324_);
lean_inc(v_path_3323_);
lean_inc(v_authority_3322_);
lean_inc(v_scheme_3321_);
lean_dec(v_uri_3319_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
lean_object* v___x_3329_; 
if (v_isShared_3327_ == 0)
{
lean_ctor_set(v___x_3326_, 4, v_fragment_3320_);
v___x_3329_ = v___x_3326_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v_scheme_3321_);
lean_ctor_set(v_reuseFailAlloc_3330_, 1, v_authority_3322_);
lean_ctor_set(v_reuseFailAlloc_3330_, 2, v_path_3323_);
lean_ctor_set(v_reuseFailAlloc_3330_, 3, v_query_3324_);
lean_ctor_set(v_reuseFailAlloc_3330_, 4, v_fragment_3320_);
v___x_3329_ = v_reuseFailAlloc_3330_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
return v___x_3329_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_normalize(lean_object* v_uri_3333_){
_start:
{
lean_object* v_scheme_3334_; lean_object* v_authority_3335_; lean_object* v_path_3336_; lean_object* v_query_3337_; lean_object* v_fragment_3338_; lean_object* v___x_3340_; uint8_t v_isShared_3341_; uint8_t v_isSharedCheck_3346_; 
v_scheme_3334_ = lean_ctor_get(v_uri_3333_, 0);
v_authority_3335_ = lean_ctor_get(v_uri_3333_, 1);
v_path_3336_ = lean_ctor_get(v_uri_3333_, 2);
v_query_3337_ = lean_ctor_get(v_uri_3333_, 3);
v_fragment_3338_ = lean_ctor_get(v_uri_3333_, 4);
v_isSharedCheck_3346_ = !lean_is_exclusive(v_uri_3333_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3340_ = v_uri_3333_;
v_isShared_3341_ = v_isSharedCheck_3346_;
goto v_resetjp_3339_;
}
else
{
lean_inc(v_fragment_3338_);
lean_inc(v_query_3337_);
lean_inc(v_path_3336_);
lean_inc(v_authority_3335_);
lean_inc(v_scheme_3334_);
lean_dec(v_uri_3333_);
v___x_3340_ = lean_box(0);
v_isShared_3341_ = v_isSharedCheck_3346_;
goto v_resetjp_3339_;
}
v_resetjp_3339_:
{
lean_object* v___x_3342_; lean_object* v___x_3344_; 
v___x_3342_ = l_Std_Http_URI_Path_normalize(v_path_3336_);
if (v_isShared_3341_ == 0)
{
lean_ctor_set(v___x_3340_, 2, v___x_3342_);
v___x_3344_ = v___x_3340_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3345_; 
v_reuseFailAlloc_3345_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3345_, 0, v_scheme_3334_);
lean_ctor_set(v_reuseFailAlloc_3345_, 1, v_authority_3335_);
lean_ctor_set(v_reuseFailAlloc_3345_, 2, v___x_3342_);
lean_ctor_set(v_reuseFailAlloc_3345_, 3, v_query_3337_);
lean_ctor_set(v_reuseFailAlloc_3345_, 4, v_fragment_3338_);
v___x_3344_ = v_reuseFailAlloc_3345_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
return v___x_3344_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr___redArg(lean_object* v_x_3347_){
_start:
{
lean_object* v_scheme_3348_; lean_object* v_host_3349_; uint16_t v_port_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; uint8_t v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v_ctr_3371_; lean_object* v_a_3372_; 
v_scheme_3348_ = lean_ctor_get(v_x_3347_, 0);
lean_inc_ref(v_scheme_3348_);
v_host_3349_ = lean_ctor_get(v_x_3347_, 1);
lean_inc_ref(v_host_3349_);
v_port_3350_ = lean_ctor_get_uint16(v_x_3347_, sizeof(void*)*2);
lean_dec_ref(v_x_3347_);
v___x_3351_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_3352_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__3));
v___x_3353_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__4, &l_Std_Http_instReprURI_repr___redArg___closed__4_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__4);
v___x_3354_ = l_String_quote(v_scheme_3348_);
v___x_3355_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3354_);
v___x_3356_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3356_, 0, v___x_3353_);
lean_ctor_set(v___x_3356_, 1, v___x_3355_);
v___x_3357_ = 0;
v___x_3358_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3358_, 0, v___x_3356_);
lean_ctor_set_uint8(v___x_3358_, sizeof(void*)*1, v___x_3357_);
v___x_3359_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3352_);
lean_ctor_set(v___x_3359_, 1, v___x_3358_);
v___x_3360_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_3361_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3359_);
lean_ctor_set(v___x_3361_, 1, v___x_3360_);
v___x_3362_ = lean_box(1);
v___x_3363_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3363_, 0, v___x_3361_);
lean_ctor_set(v___x_3363_, 1, v___x_3362_);
v___x_3364_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__5));
v___x_3365_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3365_, 0, v___x_3363_);
lean_ctor_set(v___x_3365_, 1, v___x_3364_);
v___x_3366_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3366_, 0, v___x_3365_);
lean_ctor_set(v___x_3366_, 1, v___x_3351_);
v___x_3367_ = lean_obj_once(&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6, &l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once, _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6);
v___x_3368_ = lean_unsigned_to_nat(0u);
v___x_3369_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
switch(lean_obj_tag(v_host_3349_))
{
case 0:
{
lean_object* v_name_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3411_; 
v_name_3402_ = lean_ctor_get(v_host_3349_, 0);
v_isSharedCheck_3411_ = !lean_is_exclusive(v_host_3349_);
if (v_isSharedCheck_3411_ == 0)
{
v___x_3404_ = v_host_3349_;
v_isShared_3405_ = v_isSharedCheck_3411_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_name_3402_);
lean_dec(v_host_3349_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3411_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3409_; 
v___x_3406_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__1));
v___x_3407_ = l_String_quote(v_name_3402_);
if (v_isShared_3405_ == 0)
{
lean_ctor_set_tag(v___x_3404_, 3);
lean_ctor_set(v___x_3404_, 0, v___x_3407_);
v___x_3409_ = v___x_3404_;
goto v_reusejp_3408_;
}
else
{
lean_object* v_reuseFailAlloc_3410_; 
v_reuseFailAlloc_3410_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3410_, 0, v___x_3407_);
v___x_3409_ = v_reuseFailAlloc_3410_;
goto v_reusejp_3408_;
}
v_reusejp_3408_:
{
v_ctr_3371_ = v___x_3406_;
v_a_3372_ = v___x_3409_;
goto v___jp_3370_;
}
}
}
case 1:
{
lean_object* v_ipv4_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3421_; 
v_ipv4_3412_ = lean_ctor_get(v_host_3349_, 0);
v_isSharedCheck_3421_ = !lean_is_exclusive(v_host_3349_);
if (v_isSharedCheck_3421_ == 0)
{
v___x_3414_ = v_host_3349_;
v_isShared_3415_ = v_isSharedCheck_3421_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_ipv4_3412_);
lean_dec(v_host_3349_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3421_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3419_; 
v___x_3416_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__2));
v___x_3417_ = lean_uv_ntop_v4(v_ipv4_3412_);
lean_dec_ref(v_ipv4_3412_);
if (v_isShared_3415_ == 0)
{
lean_ctor_set_tag(v___x_3414_, 3);
lean_ctor_set(v___x_3414_, 0, v___x_3417_);
v___x_3419_ = v___x_3414_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v___x_3417_);
v___x_3419_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
v_ctr_3371_ = v___x_3416_;
v_a_3372_ = v___x_3419_;
goto v___jp_3370_;
}
}
}
default: 
{
lean_object* v_ipv6_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3431_; 
v_ipv6_3422_ = lean_ctor_get(v_host_3349_, 0);
v_isSharedCheck_3431_ = !lean_is_exclusive(v_host_3349_);
if (v_isSharedCheck_3431_ == 0)
{
v___x_3424_ = v_host_3349_;
v_isShared_3425_ = v_isSharedCheck_3431_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_ipv6_3422_);
lean_dec(v_host_3349_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3431_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3429_; 
v___x_3426_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__3));
v___x_3427_ = lean_uv_ntop_v6(v_ipv6_3422_);
lean_dec_ref(v_ipv6_3422_);
if (v_isShared_3425_ == 0)
{
lean_ctor_set_tag(v___x_3424_, 3);
lean_ctor_set(v___x_3424_, 0, v___x_3427_);
v___x_3429_ = v___x_3424_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3430_; 
v_reuseFailAlloc_3430_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3430_, 0, v___x_3427_);
v___x_3429_ = v_reuseFailAlloc_3430_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
v_ctr_3371_ = v___x_3426_;
v_a_3372_ = v___x_3429_;
goto v___jp_3370_;
}
}
}
}
v___jp_3370_:
{
lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3373_ = ((lean_object*)(l_Std_Http_URI_instReprHost___lam__0___closed__0));
v___x_3374_ = lean_string_append(v___x_3373_, v_ctr_3371_);
v___x_3375_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3374_);
v___x_3376_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3376_, 0, v___x_3375_);
lean_ctor_set(v___x_3376_, 1, v___x_3362_);
v___x_3377_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3377_, 0, v___x_3376_);
lean_ctor_set(v___x_3377_, 1, v_a_3372_);
v___x_3378_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3378_, 0, v___x_3369_);
lean_ctor_set(v___x_3378_, 1, v___x_3377_);
v___x_3379_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3379_, 0, v___x_3378_);
lean_ctor_set_uint8(v___x_3379_, sizeof(void*)*1, v___x_3357_);
v___x_3380_ = l_Repr_addAppParen(v___x_3379_, v___x_3368_);
v___x_3381_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3381_, 0, v___x_3367_);
lean_ctor_set(v___x_3381_, 1, v___x_3380_);
v___x_3382_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3382_, 0, v___x_3381_);
lean_ctor_set_uint8(v___x_3382_, sizeof(void*)*1, v___x_3357_);
v___x_3383_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3383_, 0, v___x_3366_);
lean_ctor_set(v___x_3383_, 1, v___x_3382_);
v___x_3384_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3384_, 0, v___x_3383_);
lean_ctor_set(v___x_3384_, 1, v___x_3360_);
v___x_3385_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3385_, 0, v___x_3384_);
lean_ctor_set(v___x_3385_, 1, v___x_3362_);
v___x_3386_ = ((lean_object*)(l_Std_Http_URI_instReprAuthority_repr___redArg___closed__8));
v___x_3387_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3387_, 0, v___x_3385_);
lean_ctor_set(v___x_3387_, 1, v___x_3386_);
v___x_3388_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3388_, 0, v___x_3387_);
lean_ctor_set(v___x_3388_, 1, v___x_3351_);
v___x_3389_ = lean_uint16_to_nat(v_port_3350_);
v___x_3390_ = l_Nat_reprFast(v___x_3389_);
v___x_3391_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3391_, 0, v___x_3390_);
v___x_3392_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3392_, 0, v___x_3367_);
lean_ctor_set(v___x_3392_, 1, v___x_3391_);
v___x_3393_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3393_, 0, v___x_3392_);
lean_ctor_set_uint8(v___x_3393_, sizeof(void*)*1, v___x_3357_);
v___x_3394_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3394_, 0, v___x_3388_);
lean_ctor_set(v___x_3394_, 1, v___x_3393_);
v___x_3395_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_3396_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_3397_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3397_, 0, v___x_3396_);
lean_ctor_set(v___x_3397_, 1, v___x_3394_);
v___x_3398_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_3399_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3397_);
lean_ctor_set(v___x_3399_, 1, v___x_3398_);
v___x_3400_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3400_, 0, v___x_3395_);
lean_ctor_set(v___x_3400_, 1, v___x_3399_);
v___x_3401_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3401_, 0, v___x_3400_);
lean_ctor_set_uint8(v___x_3401_, sizeof(void*)*1, v___x_3357_);
return v___x_3401_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr(lean_object* v_x_3432_, lean_object* v_prec_3433_){
_start:
{
lean_object* v___x_3434_; 
v___x_3434_ = l_Std_Http_URI_instReprOrigin_repr___redArg(v_x_3432_);
return v___x_3434_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprOrigin_repr___boxed(lean_object* v_x_3435_, lean_object* v_prec_3436_){
_start:
{
lean_object* v_res_3437_; 
v_res_3437_ = l_Std_Http_URI_instReprOrigin_repr(v_x_3435_, v_prec_3436_);
lean_dec(v_prec_3436_);
return v_res_3437_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqOrigin_beq(lean_object* v_x_3440_, lean_object* v_x_3441_){
_start:
{
lean_object* v_scheme_3442_; lean_object* v_host_3443_; uint16_t v_port_3444_; lean_object* v_scheme_3445_; lean_object* v_host_3446_; uint16_t v_port_3447_; uint8_t v___x_3448_; 
v_scheme_3442_ = lean_ctor_get(v_x_3440_, 0);
v_host_3443_ = lean_ctor_get(v_x_3440_, 1);
v_port_3444_ = lean_ctor_get_uint16(v_x_3440_, sizeof(void*)*2);
v_scheme_3445_ = lean_ctor_get(v_x_3441_, 0);
v_host_3446_ = lean_ctor_get(v_x_3441_, 1);
v_port_3447_ = lean_ctor_get_uint16(v_x_3441_, sizeof(void*)*2);
v___x_3448_ = lean_string_dec_eq(v_scheme_3442_, v_scheme_3445_);
if (v___x_3448_ == 0)
{
return v___x_3448_;
}
else
{
uint8_t v___x_3449_; 
v___x_3449_ = l_Std_Http_URI_instBEqHost_beq(v_host_3443_, v_host_3446_);
if (v___x_3449_ == 0)
{
return v___x_3449_;
}
else
{
uint8_t v___x_3450_; 
v___x_3450_ = lean_uint16_dec_eq(v_port_3444_, v_port_3447_);
return v___x_3450_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqOrigin_beq___boxed(lean_object* v_x_3451_, lean_object* v_x_3452_){
_start:
{
uint8_t v_res_3453_; lean_object* v_r_3454_; 
v_res_3453_ = l_Std_Http_URI_instBEqOrigin_beq(v_x_3451_, v_x_3452_);
lean_dec_ref(v_x_3452_);
lean_dec_ref(v_x_3451_);
v_r_3454_ = lean_box(v_res_3453_);
return v_r_3454_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Origin_hostHeader(lean_object* v_o_3457_){
_start:
{
lean_object* v_scheme_3458_; lean_object* v_host_3459_; uint16_t v_port_3460_; lean_object* v___y_3462_; uint16_t v_defaultPort_3468_; uint8_t v___x_3469_; 
v_scheme_3458_ = lean_ctor_get(v_o_3457_, 0);
lean_inc_ref(v_scheme_3458_);
v_host_3459_ = lean_ctor_get(v_o_3457_, 1);
lean_inc_ref(v_host_3459_);
v_port_3460_ = lean_ctor_get_uint16(v_o_3457_, sizeof(void*)*2);
lean_dec_ref(v_o_3457_);
v_defaultPort_3468_ = l_Std_Http_URI_Scheme_defaultPort(v_scheme_3458_);
lean_dec_ref(v_scheme_3458_);
v___x_3469_ = lean_uint16_dec_eq(v_port_3460_, v_defaultPort_3468_);
if (v___x_3469_ == 0)
{
switch(lean_obj_tag(v_host_3459_))
{
case 0:
{
lean_object* v_name_3470_; 
v_name_3470_ = lean_ctor_get(v_host_3459_, 0);
lean_inc_ref(v_name_3470_);
lean_dec_ref_known(v_host_3459_, 1);
v___y_3462_ = v_name_3470_;
goto v___jp_3461_;
}
case 1:
{
lean_object* v_ipv4_3471_; lean_object* v___x_3472_; 
v_ipv4_3471_ = lean_ctor_get(v_host_3459_, 0);
lean_inc_ref(v_ipv4_3471_);
lean_dec_ref_known(v_host_3459_, 1);
v___x_3472_ = lean_uv_ntop_v4(v_ipv4_3471_);
lean_dec_ref(v_ipv4_3471_);
v___y_3462_ = v___x_3472_;
goto v___jp_3461_;
}
default: 
{
lean_object* v_ipv6_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; 
v_ipv6_3473_ = lean_ctor_get(v_host_3459_, 0);
lean_inc_ref(v_ipv6_3473_);
lean_dec_ref_known(v_host_3459_, 1);
v___x_3474_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3475_ = lean_uv_ntop_v6(v_ipv6_3473_);
lean_dec_ref(v_ipv6_3473_);
v___x_3476_ = lean_string_append(v___x_3474_, v___x_3475_);
lean_dec_ref(v___x_3475_);
v___x_3477_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3478_ = lean_string_append(v___x_3476_, v___x_3477_);
v___y_3462_ = v___x_3478_;
goto v___jp_3461_;
}
}
}
else
{
switch(lean_obj_tag(v_host_3459_))
{
case 0:
{
lean_object* v_name_3479_; 
v_name_3479_ = lean_ctor_get(v_host_3459_, 0);
lean_inc_ref(v_name_3479_);
lean_dec_ref_known(v_host_3459_, 1);
return v_name_3479_;
}
case 1:
{
lean_object* v_ipv4_3480_; lean_object* v___x_3481_; 
v_ipv4_3480_ = lean_ctor_get(v_host_3459_, 0);
lean_inc_ref(v_ipv4_3480_);
lean_dec_ref_known(v_host_3459_, 1);
v___x_3481_ = lean_uv_ntop_v4(v_ipv4_3480_);
lean_dec_ref(v_ipv4_3480_);
return v___x_3481_;
}
default: 
{
lean_object* v_ipv6_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; 
v_ipv6_3482_ = lean_ctor_get(v_host_3459_, 0);
lean_inc_ref(v_ipv6_3482_);
lean_dec_ref_known(v_host_3459_, 1);
v___x_3483_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3484_ = lean_uv_ntop_v6(v_ipv6_3482_);
lean_dec_ref(v_ipv6_3482_);
v___x_3485_ = lean_string_append(v___x_3483_, v___x_3484_);
lean_dec_ref(v___x_3484_);
v___x_3486_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3487_ = lean_string_append(v___x_3485_, v___x_3486_);
return v___x_3487_;
}
}
}
v___jp_3461_:
{
lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; 
v___x_3463_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3464_ = lean_string_append(v___y_3462_, v___x_3463_);
v___x_3465_ = lean_uint16_to_nat(v_port_3460_);
v___x_3466_ = l_Nat_reprFast(v___x_3465_);
v___x_3467_ = lean_string_append(v___x_3464_, v___x_3466_);
lean_dec_ref(v___x_3466_);
return v___x_3467_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr___redArg(lean_object* v_x_3494_){
_start:
{
lean_object* v_authority_3495_; lean_object* v_path_3496_; lean_object* v_query_3497_; lean_object* v_fragment_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; uint8_t v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; 
v_authority_3495_ = lean_ctor_get(v_x_3494_, 0);
lean_inc(v_authority_3495_);
v_path_3496_ = lean_ctor_get(v_x_3494_, 1);
lean_inc_ref(v_path_3496_);
v_query_3497_ = lean_ctor_get(v_x_3494_, 2);
lean_inc(v_query_3497_);
v_fragment_3498_ = lean_ctor_get(v_x_3494_, 3);
lean_inc(v_fragment_3498_);
lean_dec_ref(v_x_3494_);
v___x_3499_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__5));
v___x_3500_ = ((lean_object*)(l_Std_Http_URI_instReprRelativeRef_repr___redArg___closed__1));
v___x_3501_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__7, &l_Std_Http_instReprURI_repr___redArg___closed__7_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__7);
v___x_3502_ = lean_unsigned_to_nat(0u);
v___x_3503_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__0(v_authority_3495_, v___x_3502_);
v___x_3504_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3504_, 0, v___x_3501_);
lean_ctor_set(v___x_3504_, 1, v___x_3503_);
v___x_3505_ = 0;
v___x_3506_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3506_, 0, v___x_3504_);
lean_ctor_set_uint8(v___x_3506_, sizeof(void*)*1, v___x_3505_);
v___x_3507_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3507_, 0, v___x_3500_);
lean_ctor_set(v___x_3507_, 1, v___x_3506_);
v___x_3508_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__9));
v___x_3509_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3507_);
lean_ctor_set(v___x_3509_, 1, v___x_3508_);
v___x_3510_ = lean_box(1);
v___x_3511_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3511_, 0, v___x_3509_);
lean_ctor_set(v___x_3511_, 1, v___x_3510_);
v___x_3512_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__9));
v___x_3513_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3513_, 0, v___x_3511_);
lean_ctor_set(v___x_3513_, 1, v___x_3512_);
v___x_3514_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3514_, 0, v___x_3513_);
lean_ctor_set(v___x_3514_, 1, v___x_3499_);
v___x_3515_ = lean_obj_once(&l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6, &l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6_once, _init_l_Std_Http_URI_instReprAuthority_repr___redArg___closed__6);
v___x_3516_ = l_Std_Http_URI_instReprPath_repr___redArg(v_path_3496_);
v___x_3517_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3517_, 0, v___x_3515_);
lean_ctor_set(v___x_3517_, 1, v___x_3516_);
v___x_3518_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3518_, 0, v___x_3517_);
lean_ctor_set_uint8(v___x_3518_, sizeof(void*)*1, v___x_3505_);
v___x_3519_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3519_, 0, v___x_3514_);
lean_ctor_set(v___x_3519_, 1, v___x_3518_);
v___x_3520_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3520_, 0, v___x_3519_);
lean_ctor_set(v___x_3520_, 1, v___x_3508_);
v___x_3521_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3521_, 0, v___x_3520_);
lean_ctor_set(v___x_3521_, 1, v___x_3510_);
v___x_3522_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__11));
v___x_3523_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3523_, 0, v___x_3521_);
lean_ctor_set(v___x_3523_, 1, v___x_3522_);
v___x_3524_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3524_, 0, v___x_3523_);
lean_ctor_set(v___x_3524_, 1, v___x_3499_);
v___x_3525_ = lean_obj_once(&l_Std_Http_instReprURI_repr___redArg___closed__12, &l_Std_Http_instReprURI_repr___redArg___closed__12_once, _init_l_Std_Http_instReprURI_repr___redArg___closed__12);
v___x_3526_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(v_query_3497_, v___x_3502_);
v___x_3527_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3527_, 0, v___x_3525_);
lean_ctor_set(v___x_3527_, 1, v___x_3526_);
v___x_3528_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3528_, 0, v___x_3527_);
lean_ctor_set_uint8(v___x_3528_, sizeof(void*)*1, v___x_3505_);
v___x_3529_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3529_, 0, v___x_3524_);
lean_ctor_set(v___x_3529_, 1, v___x_3528_);
v___x_3530_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3530_, 0, v___x_3529_);
lean_ctor_set(v___x_3530_, 1, v___x_3508_);
v___x_3531_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3531_, 0, v___x_3530_);
lean_ctor_set(v___x_3531_, 1, v___x_3510_);
v___x_3532_ = ((lean_object*)(l_Std_Http_instReprURI_repr___redArg___closed__14));
v___x_3533_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3531_);
lean_ctor_set(v___x_3533_, 1, v___x_3532_);
v___x_3534_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3533_);
lean_ctor_set(v___x_3534_, 1, v___x_3499_);
v___x_3535_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__7);
v___x_3536_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__2(v_fragment_3498_, v___x_3502_);
v___x_3537_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3535_);
lean_ctor_set(v___x_3537_, 1, v___x_3536_);
v___x_3538_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3538_, 0, v___x_3537_);
lean_ctor_set_uint8(v___x_3538_, sizeof(void*)*1, v___x_3505_);
v___x_3539_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3539_, 0, v___x_3534_);
lean_ctor_set(v___x_3539_, 1, v___x_3538_);
v___x_3540_ = lean_obj_once(&l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14, &l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14_once, _init_l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__14);
v___x_3541_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__15));
v___x_3542_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3542_, 0, v___x_3541_);
lean_ctor_set(v___x_3542_, 1, v___x_3539_);
v___x_3543_ = ((lean_object*)(l_Std_Http_URI_instReprUserInfo_repr___redArg___closed__16));
v___x_3544_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3544_, 0, v___x_3542_);
lean_ctor_set(v___x_3544_, 1, v___x_3543_);
v___x_3545_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3545_, 0, v___x_3540_);
lean_ctor_set(v___x_3545_, 1, v___x_3544_);
v___x_3546_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3546_, 0, v___x_3545_);
lean_ctor_set_uint8(v___x_3546_, sizeof(void*)*1, v___x_3505_);
return v___x_3546_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr(lean_object* v_x_3547_, lean_object* v_prec_3548_){
_start:
{
lean_object* v___x_3549_; 
v___x_3549_ = l_Std_Http_URI_instReprRelativeRef_repr___redArg(v_x_3547_);
return v___x_3549_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprRelativeRef_repr___boxed(lean_object* v_x_3550_, lean_object* v_prec_3551_){
_start:
{
lean_object* v_res_3552_; 
v_res_3552_ = l_Std_Http_URI_instReprRelativeRef_repr(v_x_3550_, v_prec_3551_);
lean_dec(v_prec_3551_);
return v_res_3552_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instBEqRelativeRef_beq(lean_object* v_x_3560_, lean_object* v_x_3561_){
_start:
{
lean_object* v_authority_3562_; lean_object* v_path_3563_; lean_object* v_query_3564_; lean_object* v_fragment_3565_; lean_object* v_authority_3566_; lean_object* v_path_3567_; lean_object* v_query_3568_; lean_object* v_fragment_3569_; uint8_t v___x_3570_; 
v_authority_3562_ = lean_ctor_get(v_x_3560_, 0);
v_path_3563_ = lean_ctor_get(v_x_3560_, 1);
v_query_3564_ = lean_ctor_get(v_x_3560_, 2);
v_fragment_3565_ = lean_ctor_get(v_x_3560_, 3);
v_authority_3566_ = lean_ctor_get(v_x_3561_, 0);
v_path_3567_ = lean_ctor_get(v_x_3561_, 1);
v_query_3568_ = lean_ctor_get(v_x_3561_, 2);
v_fragment_3569_ = lean_ctor_get(v_x_3561_, 3);
v___x_3570_ = l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__0(v_authority_3562_, v_authority_3566_);
if (v___x_3570_ == 0)
{
return v___x_3570_;
}
else
{
uint8_t v___x_3571_; 
v___x_3571_ = l_Std_Http_URI_instBEqPath_beq(v_path_3563_, v_path_3567_);
if (v___x_3571_ == 0)
{
return v___x_3571_;
}
else
{
uint8_t v___x_3572_; 
v___x_3572_ = l_instBEqOption_beq___at___00Std_Http_instBEqURI_beq_spec__1(v_query_3564_, v_query_3568_);
if (v___x_3572_ == 0)
{
return v___x_3572_;
}
else
{
uint8_t v___x_3573_; 
v___x_3573_ = l_instBEqOption_beq___at___00__private_Std_Http_Data_URI_Basic_0__Std_Http_URI_Query_nameIs_spec__0(v_fragment_3565_, v_fragment_3569_);
return v___x_3573_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqRelativeRef_beq___boxed(lean_object* v_x_3574_, lean_object* v_x_3575_){
_start:
{
uint8_t v_res_3576_; lean_object* v_r_3577_; 
v_res_3576_ = l_Std_Http_URI_instBEqRelativeRef_beq(v_x_3574_, v_x_3575_);
lean_dec_ref(v_x_3575_);
lean_dec_ref(v_x_3574_);
v_r_3577_ = lean_box(v_res_3576_);
return v_r_3577_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instToStringRelativeRef___lam__0(lean_object* v_ref_3580_){
_start:
{
lean_object* v___y_3582_; lean_object* v___y_3583_; lean_object* v___y_3584_; lean_object* v___y_3585_; lean_object* v_authority_3589_; lean_object* v_path_3590_; lean_object* v_query_3591_; lean_object* v_fragment_3592_; lean_object* v___y_3594_; uint8_t v___y_3595_; lean_object* v___y_3606_; 
v_authority_3589_ = lean_ctor_get(v_ref_3580_, 0);
lean_inc(v_authority_3589_);
v_path_3590_ = lean_ctor_get(v_ref_3580_, 1);
lean_inc_ref(v_path_3590_);
v_query_3591_ = lean_ctor_get(v_ref_3580_, 2);
lean_inc(v_query_3591_);
v_fragment_3592_ = lean_ctor_get(v_ref_3580_, 3);
lean_inc(v_fragment_3592_);
lean_dec_ref(v_ref_3580_);
if (lean_obj_tag(v_authority_3589_) == 0)
{
lean_object* v___x_3609_; 
v___x_3609_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3606_ = v___x_3609_;
goto v___jp_3605_;
}
else
{
lean_object* v_val_3610_; lean_object* v_userInfo_3611_; lean_object* v_host_3612_; lean_object* v_port_3613_; lean_object* v___x_3614_; lean_object* v___y_3616_; lean_object* v___y_3617_; lean_object* v___y_3618_; lean_object* v___y_3623_; lean_object* v___y_3624_; lean_object* v___y_3633_; 
v_val_3610_ = lean_ctor_get(v_authority_3589_, 0);
v_userInfo_3611_ = lean_ctor_get(v_val_3610_, 0);
v_host_3612_ = lean_ctor_get(v_val_3610_, 1);
v_port_3613_ = lean_ctor_get(v_val_3610_, 2);
v___x_3614_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__0___closed__1));
if (lean_obj_tag(v_userInfo_3611_) == 0)
{
lean_object* v___x_3643_; 
v___x_3643_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3633_ = v___x_3643_;
goto v___jp_3632_;
}
else
{
lean_object* v_val_3644_; lean_object* v_password_3645_; 
v_val_3644_ = lean_ctor_get(v_userInfo_3611_, 0);
v_password_3645_ = lean_ctor_get(v_val_3644_, 1);
if (lean_obj_tag(v_password_3645_) == 0)
{
lean_object* v_username_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; 
v_username_3646_ = lean_ctor_get(v_val_3644_, 0);
lean_inc_ref(v_username_3646_);
v___x_3647_ = lean_string_from_utf8_unchecked(v_username_3646_);
v___x_3648_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3649_ = lean_string_append(v___x_3647_, v___x_3648_);
v___y_3633_ = v___x_3649_;
goto v___jp_3632_;
}
else
{
lean_object* v_username_3650_; lean_object* v_val_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; 
v_username_3650_ = lean_ctor_get(v_val_3644_, 0);
v_val_3651_ = lean_ctor_get(v_password_3645_, 0);
lean_inc_ref(v_username_3650_);
v___x_3652_ = lean_string_from_utf8_unchecked(v_username_3650_);
v___x_3653_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3654_ = lean_string_append(v___x_3652_, v___x_3653_);
lean_inc(v_val_3651_);
v___x_3655_ = lean_string_from_utf8_unchecked(v_val_3651_);
v___x_3656_ = lean_string_append(v___x_3654_, v___x_3655_);
lean_dec_ref(v___x_3655_);
v___x_3657_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3658_ = lean_string_append(v___x_3656_, v___x_3657_);
v___y_3633_ = v___x_3658_;
goto v___jp_3632_;
}
}
v___jp_3615_:
{
lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; 
v___x_3619_ = lean_string_append(v___y_3617_, v___y_3616_);
lean_dec_ref(v___y_3616_);
v___x_3620_ = lean_string_append(v___x_3619_, v___y_3618_);
lean_dec_ref(v___y_3618_);
v___x_3621_ = lean_string_append(v___x_3614_, v___x_3620_);
lean_dec_ref(v___x_3620_);
v___y_3606_ = v___x_3621_;
goto v___jp_3605_;
}
v___jp_3622_:
{
switch(lean_obj_tag(v_port_3613_))
{
case 0:
{
lean_object* v___x_3625_; 
v___x_3625_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3616_ = v___y_3624_;
v___y_3617_ = v___y_3623_;
v___y_3618_ = v___x_3625_;
goto v___jp_3615_;
}
case 1:
{
lean_object* v___x_3626_; 
v___x_3626_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3616_ = v___y_3624_;
v___y_3617_ = v___y_3623_;
v___y_3618_ = v___x_3626_;
goto v___jp_3615_;
}
default: 
{
uint16_t v_port_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; 
v_port_3627_ = lean_ctor_get_uint16(v_port_3613_, 0);
v___x_3628_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3629_ = lean_uint16_to_nat(v_port_3627_);
v___x_3630_ = l_Nat_reprFast(v___x_3629_);
v___x_3631_ = lean_string_append(v___x_3628_, v___x_3630_);
lean_dec_ref(v___x_3630_);
v___y_3616_ = v___y_3624_;
v___y_3617_ = v___y_3623_;
v___y_3618_ = v___x_3631_;
goto v___jp_3615_;
}
}
}
v___jp_3632_:
{
switch(lean_obj_tag(v_host_3612_))
{
case 0:
{
lean_object* v_name_3634_; 
v_name_3634_ = lean_ctor_get(v_host_3612_, 0);
lean_inc_ref(v_name_3634_);
v___y_3623_ = v___y_3633_;
v___y_3624_ = v_name_3634_;
goto v___jp_3622_;
}
case 1:
{
lean_object* v_ipv4_3635_; lean_object* v___x_3636_; 
v_ipv4_3635_ = lean_ctor_get(v_host_3612_, 0);
v___x_3636_ = lean_uv_ntop_v4(v_ipv4_3635_);
v___y_3623_ = v___y_3633_;
v___y_3624_ = v___x_3636_;
goto v___jp_3622_;
}
default: 
{
lean_object* v_ipv6_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; 
v_ipv6_3637_ = lean_ctor_get(v_host_3612_, 0);
v___x_3638_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3639_ = lean_uv_ntop_v6(v_ipv6_3637_);
v___x_3640_ = lean_string_append(v___x_3638_, v___x_3639_);
lean_dec_ref(v___x_3639_);
v___x_3641_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3642_ = lean_string_append(v___x_3640_, v___x_3641_);
v___y_3623_ = v___y_3633_;
v___y_3624_ = v___x_3642_;
goto v___jp_3622_;
}
}
}
}
v___jp_3581_:
{
lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
v___x_3586_ = lean_string_append(v___y_3584_, v___y_3583_);
lean_dec_ref(v___y_3583_);
v___x_3587_ = lean_string_append(v___x_3586_, v___y_3582_);
lean_dec_ref(v___y_3582_);
v___x_3588_ = lean_string_append(v___x_3587_, v___y_3585_);
lean_dec_ref(v___y_3585_);
return v___x_3588_;
}
v___jp_3593_:
{
uint8_t v___x_3596_; lean_object* v_pathPart_3597_; lean_object* v_queryPart_3598_; 
v___x_3596_ = 0;
v_pathPart_3597_ = l_Std_Http_URI_Path_render(v_path_3590_, v___y_3595_, v___x_3596_);
v_queryPart_3598_ = l_Std_Http_URI_Query_formatOption(v_query_3591_);
if (lean_obj_tag(v_fragment_3592_) == 0)
{
lean_object* v___x_3599_; 
v___x_3599_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3582_ = v_queryPart_3598_;
v___y_3583_ = v_pathPart_3597_;
v___y_3584_ = v___y_3594_;
v___y_3585_ = v___x_3599_;
goto v___jp_3581_;
}
else
{
lean_object* v_val_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; 
v_val_3600_ = lean_ctor_get(v_fragment_3592_, 0);
lean_inc(v_val_3600_);
lean_dec_ref_known(v_fragment_3592_, 1);
v___x_3601_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__0___closed__0));
v___x_3602_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3600_);
v___x_3603_ = lean_string_from_utf8_unchecked(v___x_3602_);
v___x_3604_ = lean_string_append(v___x_3601_, v___x_3603_);
lean_dec_ref(v___x_3603_);
v___y_3582_ = v_queryPart_3598_;
v___y_3583_ = v_pathPart_3597_;
v___y_3584_ = v___y_3594_;
v___y_3585_ = v___x_3604_;
goto v___jp_3581_;
}
}
v___jp_3605_:
{
if (lean_obj_tag(v_authority_3589_) == 0)
{
uint8_t v___x_3607_; 
v___x_3607_ = 0;
v___y_3594_ = v___y_3606_;
v___y_3595_ = v___x_3607_;
goto v___jp_3593_;
}
else
{
uint8_t v___x_3608_; 
lean_dec_ref_known(v_authority_3589_, 1);
v___x_3608_ = 1;
v___y_3594_ = v___y_3606_;
v___y_3595_ = v___x_3608_;
goto v___jp_3593_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorIdx___impl(lean_object* v_x_3661_){
_start:
{
lean_object* v___x_3662_; 
v___x_3662_ = lean_obj_tag_nat(v_x_3661_);
return v___x_3662_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorIdx___impl___boxed(lean_object* v_x_3663_){
_start:
{
lean_object* v_res_3664_; 
v_res_3664_ = l_Std_Http_URIReference_ctorIdx___impl(v_x_3663_);
lean_dec_ref(v_x_3663_);
return v_res_3664_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim___redArg(lean_object* v_t_3665_, lean_object* v_k_3666_){
_start:
{
lean_object* v_uri_3667_; lean_object* v___x_3668_; 
v_uri_3667_ = lean_ctor_get(v_t_3665_, 0);
lean_inc_ref(v_uri_3667_);
lean_dec_ref(v_t_3665_);
v___x_3668_ = lean_apply_1(v_k_3666_, v_uri_3667_);
return v___x_3668_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim(lean_object* v_motive_3669_, lean_object* v_ctorIdx_3670_, lean_object* v_t_3671_, lean_object* v_h_3672_, lean_object* v_k_3673_){
_start:
{
lean_object* v___x_3674_; 
v___x_3674_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3671_, v_k_3673_);
return v___x_3674_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_ctorElim___boxed(lean_object* v_motive_3675_, lean_object* v_ctorIdx_3676_, lean_object* v_t_3677_, lean_object* v_h_3678_, lean_object* v_k_3679_){
_start:
{
lean_object* v_res_3680_; 
v_res_3680_ = l_Std_Http_URIReference_ctorElim(v_motive_3675_, v_ctorIdx_3676_, v_t_3677_, v_h_3678_, v_k_3679_);
lean_dec(v_ctorIdx_3676_);
return v_res_3680_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_absolute_elim___redArg(lean_object* v_t_3681_, lean_object* v_absolute_3682_){
_start:
{
lean_object* v___x_3683_; 
v___x_3683_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3681_, v_absolute_3682_);
return v___x_3683_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_absolute_elim(lean_object* v_motive_3684_, lean_object* v_t_3685_, lean_object* v_h_3686_, lean_object* v_absolute_3687_){
_start:
{
lean_object* v___x_3688_; 
v___x_3688_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3685_, v_absolute_3687_);
return v___x_3688_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_relative_elim___redArg(lean_object* v_t_3689_, lean_object* v_relative_3690_){
_start:
{
lean_object* v___x_3691_; 
v___x_3691_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3689_, v_relative_3690_);
return v___x_3691_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URIReference_relative_elim(lean_object* v_motive_3692_, lean_object* v_t_3693_, lean_object* v_h_3694_, lean_object* v_relative_3695_){
_start:
{
lean_object* v___x_3696_; 
v___x_3696_ = l_Std_Http_URIReference_ctorElim___redArg(v_t_3693_, v_relative_3695_);
return v___x_3696_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURIReference_repr(lean_object* v_x_3709_, lean_object* v_prec_3710_){
_start:
{
if (lean_obj_tag(v_x_3709_) == 0)
{
lean_object* v_uri_3711_; lean_object* v___y_3713_; lean_object* v___x_3721_; uint8_t v___x_3722_; 
v_uri_3711_ = lean_ctor_get(v_x_3709_, 0);
lean_inc_ref(v_uri_3711_);
lean_dec_ref_known(v_x_3709_, 1);
v___x_3721_ = lean_unsigned_to_nat(1024u);
v___x_3722_ = lean_nat_dec_le(v___x_3721_, v_prec_3710_);
if (v___x_3722_ == 0)
{
lean_object* v___x_3723_; 
v___x_3723_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3713_ = v___x_3723_;
goto v___jp_3712_;
}
else
{
lean_object* v___x_3724_; 
v___x_3724_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3713_ = v___x_3724_;
goto v___jp_3712_;
}
v___jp_3712_:
{
lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; uint8_t v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; 
v___x_3714_ = ((lean_object*)(l_Std_Http_instReprURIReference_repr___closed__2));
v___x_3715_ = l_Std_Http_instReprURI_repr___redArg(v_uri_3711_);
v___x_3716_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3716_, 0, v___x_3714_);
lean_ctor_set(v___x_3716_, 1, v___x_3715_);
lean_inc(v___y_3713_);
v___x_3717_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3717_, 0, v___y_3713_);
lean_ctor_set(v___x_3717_, 1, v___x_3716_);
v___x_3718_ = 0;
v___x_3719_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3719_, 0, v___x_3717_);
lean_ctor_set_uint8(v___x_3719_, sizeof(void*)*1, v___x_3718_);
v___x_3720_ = l_Repr_addAppParen(v___x_3719_, v_prec_3710_);
return v___x_3720_;
}
}
else
{
lean_object* v_ref_3725_; lean_object* v___y_3727_; lean_object* v___x_3735_; uint8_t v___x_3736_; 
v_ref_3725_ = lean_ctor_get(v_x_3709_, 0);
lean_inc_ref(v_ref_3725_);
lean_dec_ref_known(v_x_3709_, 1);
v___x_3735_ = lean_unsigned_to_nat(1024u);
v___x_3736_ = lean_nat_dec_le(v___x_3735_, v_prec_3710_);
if (v___x_3736_ == 0)
{
lean_object* v___x_3737_; 
v___x_3737_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3727_ = v___x_3737_;
goto v___jp_3726_;
}
else
{
lean_object* v___x_3738_; 
v___x_3738_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3727_ = v___x_3738_;
goto v___jp_3726_;
}
v___jp_3726_:
{
lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; uint8_t v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; 
v___x_3728_ = ((lean_object*)(l_Std_Http_instReprURIReference_repr___closed__5));
v___x_3729_ = l_Std_Http_URI_instReprRelativeRef_repr___redArg(v_ref_3725_);
v___x_3730_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3730_, 0, v___x_3728_);
lean_ctor_set(v___x_3730_, 1, v___x_3729_);
lean_inc(v___y_3727_);
v___x_3731_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3731_, 0, v___y_3727_);
lean_ctor_set(v___x_3731_, 1, v___x_3730_);
v___x_3732_ = 0;
v___x_3733_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3733_, 0, v___x_3731_);
lean_ctor_set_uint8(v___x_3733_, sizeof(void*)*1, v___x_3732_);
v___x_3734_ = l_Repr_addAppParen(v___x_3733_, v_prec_3710_);
return v___x_3734_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprURIReference_repr___boxed(lean_object* v_x_3739_, lean_object* v_prec_3740_){
_start:
{
lean_object* v_res_3741_; 
v_res_3741_ = l_Std_Http_instReprURIReference_repr(v_x_3739_, v_prec_3740_);
lean_dec(v_prec_3740_);
return v_res_3741_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instToStringURIReference___lam__0(lean_object* v_x_3748_){
_start:
{
lean_object* v___y_3750_; lean_object* v___y_3751_; lean_object* v___y_3752_; lean_object* v___y_3753_; 
if (lean_obj_tag(v_x_3748_) == 0)
{
lean_object* v_uri_3757_; lean_object* v_scheme_3758_; lean_object* v_authority_3759_; lean_object* v_path_3760_; lean_object* v_query_3761_; lean_object* v_fragment_3762_; lean_object* v___y_3764_; lean_object* v___y_3765_; lean_object* v___y_3766_; lean_object* v___y_3767_; lean_object* v___y_3775_; uint8_t v___y_3776_; lean_object* v___y_3787_; 
v_uri_3757_ = lean_ctor_get(v_x_3748_, 0);
lean_inc_ref(v_uri_3757_);
lean_dec_ref_known(v_x_3748_, 1);
v_scheme_3758_ = lean_ctor_get(v_uri_3757_, 0);
lean_inc_ref(v_scheme_3758_);
v_authority_3759_ = lean_ctor_get(v_uri_3757_, 1);
lean_inc(v_authority_3759_);
v_path_3760_ = lean_ctor_get(v_uri_3757_, 2);
lean_inc_ref(v_path_3760_);
v_query_3761_ = lean_ctor_get(v_uri_3757_, 3);
lean_inc(v_query_3761_);
v_fragment_3762_ = lean_ctor_get(v_uri_3757_, 4);
lean_inc(v_fragment_3762_);
lean_dec_ref(v_uri_3757_);
if (lean_obj_tag(v_authority_3759_) == 0)
{
lean_object* v___x_3790_; 
v___x_3790_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3787_ = v___x_3790_;
goto v___jp_3786_;
}
else
{
lean_object* v_val_3791_; lean_object* v_userInfo_3792_; lean_object* v_host_3793_; lean_object* v_port_3794_; lean_object* v___x_3795_; lean_object* v___y_3797_; lean_object* v___y_3798_; lean_object* v___y_3799_; lean_object* v___y_3804_; lean_object* v___y_3805_; lean_object* v___y_3814_; 
v_val_3791_ = lean_ctor_get(v_authority_3759_, 0);
v_userInfo_3792_ = lean_ctor_get(v_val_3791_, 0);
v_host_3793_ = lean_ctor_get(v_val_3791_, 1);
v_port_3794_ = lean_ctor_get(v_val_3791_, 2);
v___x_3795_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__0___closed__1));
if (lean_obj_tag(v_userInfo_3792_) == 0)
{
lean_object* v___x_3824_; 
v___x_3824_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3814_ = v___x_3824_;
goto v___jp_3813_;
}
else
{
lean_object* v_val_3825_; lean_object* v_password_3826_; 
v_val_3825_ = lean_ctor_get(v_userInfo_3792_, 0);
v_password_3826_ = lean_ctor_get(v_val_3825_, 1);
if (lean_obj_tag(v_password_3826_) == 0)
{
lean_object* v_username_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; 
v_username_3827_ = lean_ctor_get(v_val_3825_, 0);
lean_inc_ref(v_username_3827_);
v___x_3828_ = lean_string_from_utf8_unchecked(v_username_3827_);
v___x_3829_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3830_ = lean_string_append(v___x_3828_, v___x_3829_);
v___y_3814_ = v___x_3830_;
goto v___jp_3813_;
}
else
{
lean_object* v_username_3831_; lean_object* v_val_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; 
v_username_3831_ = lean_ctor_get(v_val_3825_, 0);
v_val_3832_ = lean_ctor_get(v_password_3826_, 0);
lean_inc_ref(v_username_3831_);
v___x_3833_ = lean_string_from_utf8_unchecked(v_username_3831_);
v___x_3834_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3835_ = lean_string_append(v___x_3833_, v___x_3834_);
lean_inc(v_val_3832_);
v___x_3836_ = lean_string_from_utf8_unchecked(v_val_3832_);
v___x_3837_ = lean_string_append(v___x_3835_, v___x_3836_);
lean_dec_ref(v___x_3836_);
v___x_3838_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3839_ = lean_string_append(v___x_3837_, v___x_3838_);
v___y_3814_ = v___x_3839_;
goto v___jp_3813_;
}
}
v___jp_3796_:
{
lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; 
v___x_3800_ = lean_string_append(v___y_3797_, v___y_3798_);
lean_dec_ref(v___y_3798_);
v___x_3801_ = lean_string_append(v___x_3800_, v___y_3799_);
lean_dec_ref(v___y_3799_);
v___x_3802_ = lean_string_append(v___x_3795_, v___x_3801_);
lean_dec_ref(v___x_3801_);
v___y_3787_ = v___x_3802_;
goto v___jp_3786_;
}
v___jp_3803_:
{
switch(lean_obj_tag(v_port_3794_))
{
case 0:
{
lean_object* v___x_3806_; 
v___x_3806_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3797_ = v___y_3804_;
v___y_3798_ = v___y_3805_;
v___y_3799_ = v___x_3806_;
goto v___jp_3796_;
}
case 1:
{
lean_object* v___x_3807_; 
v___x_3807_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3797_ = v___y_3804_;
v___y_3798_ = v___y_3805_;
v___y_3799_ = v___x_3807_;
goto v___jp_3796_;
}
default: 
{
uint16_t v_port_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; 
v_port_3808_ = lean_ctor_get_uint16(v_port_3794_, 0);
v___x_3809_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3810_ = lean_uint16_to_nat(v_port_3808_);
v___x_3811_ = l_Nat_reprFast(v___x_3810_);
v___x_3812_ = lean_string_append(v___x_3809_, v___x_3811_);
lean_dec_ref(v___x_3811_);
v___y_3797_ = v___y_3804_;
v___y_3798_ = v___y_3805_;
v___y_3799_ = v___x_3812_;
goto v___jp_3796_;
}
}
}
v___jp_3813_:
{
switch(lean_obj_tag(v_host_3793_))
{
case 0:
{
lean_object* v_name_3815_; 
v_name_3815_ = lean_ctor_get(v_host_3793_, 0);
lean_inc_ref(v_name_3815_);
v___y_3804_ = v___y_3814_;
v___y_3805_ = v_name_3815_;
goto v___jp_3803_;
}
case 1:
{
lean_object* v_ipv4_3816_; lean_object* v___x_3817_; 
v_ipv4_3816_ = lean_ctor_get(v_host_3793_, 0);
v___x_3817_ = lean_uv_ntop_v4(v_ipv4_3816_);
v___y_3804_ = v___y_3814_;
v___y_3805_ = v___x_3817_;
goto v___jp_3803_;
}
default: 
{
lean_object* v_ipv6_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; 
v_ipv6_3818_ = lean_ctor_get(v_host_3793_, 0);
v___x_3819_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3820_ = lean_uv_ntop_v6(v_ipv6_3818_);
v___x_3821_ = lean_string_append(v___x_3819_, v___x_3820_);
lean_dec_ref(v___x_3820_);
v___x_3822_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3823_ = lean_string_append(v___x_3821_, v___x_3822_);
v___y_3804_ = v___y_3814_;
v___y_3805_ = v___x_3823_;
goto v___jp_3803_;
}
}
}
}
v___jp_3763_:
{
lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; 
v___x_3768_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3769_ = lean_string_append(v_scheme_3758_, v___x_3768_);
v___x_3770_ = lean_string_append(v___x_3769_, v___y_3765_);
lean_dec_ref(v___y_3765_);
v___x_3771_ = lean_string_append(v___x_3770_, v___y_3766_);
lean_dec_ref(v___y_3766_);
v___x_3772_ = lean_string_append(v___x_3771_, v___y_3764_);
lean_dec_ref(v___y_3764_);
v___x_3773_ = lean_string_append(v___x_3772_, v___y_3767_);
lean_dec_ref(v___y_3767_);
return v___x_3773_;
}
v___jp_3774_:
{
uint8_t v___x_3777_; lean_object* v_pathPart_3778_; lean_object* v_queryPart_3779_; 
v___x_3777_ = 1;
v_pathPart_3778_ = l_Std_Http_URI_Path_render(v_path_3760_, v___y_3776_, v___x_3777_);
v_queryPart_3779_ = l_Std_Http_URI_Query_formatOption(v_query_3761_);
if (lean_obj_tag(v_fragment_3762_) == 0)
{
lean_object* v___x_3780_; 
v___x_3780_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3764_ = v_queryPart_3779_;
v___y_3765_ = v___y_3775_;
v___y_3766_ = v_pathPart_3778_;
v___y_3767_ = v___x_3780_;
goto v___jp_3763_;
}
else
{
lean_object* v_val_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; 
v_val_3781_ = lean_ctor_get(v_fragment_3762_, 0);
lean_inc(v_val_3781_);
lean_dec_ref_known(v_fragment_3762_, 1);
v___x_3782_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__0___closed__0));
v___x_3783_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3781_);
v___x_3784_ = lean_string_from_utf8_unchecked(v___x_3783_);
v___x_3785_ = lean_string_append(v___x_3782_, v___x_3784_);
lean_dec_ref(v___x_3784_);
v___y_3764_ = v_queryPart_3779_;
v___y_3765_ = v___y_3775_;
v___y_3766_ = v_pathPart_3778_;
v___y_3767_ = v___x_3785_;
goto v___jp_3763_;
}
}
v___jp_3786_:
{
if (lean_obj_tag(v_authority_3759_) == 0)
{
uint8_t v___x_3788_; 
v___x_3788_ = 0;
v___y_3775_ = v___y_3787_;
v___y_3776_ = v___x_3788_;
goto v___jp_3774_;
}
else
{
uint8_t v___x_3789_; 
lean_dec_ref_known(v_authority_3759_, 1);
v___x_3789_ = 1;
v___y_3775_ = v___y_3787_;
v___y_3776_ = v___x_3789_;
goto v___jp_3774_;
}
}
}
else
{
lean_object* v_ref_3840_; lean_object* v_authority_3841_; lean_object* v_path_3842_; lean_object* v_query_3843_; lean_object* v_fragment_3844_; lean_object* v___y_3846_; uint8_t v___y_3847_; lean_object* v___y_3858_; 
v_ref_3840_ = lean_ctor_get(v_x_3748_, 0);
lean_inc_ref(v_ref_3840_);
lean_dec_ref_known(v_x_3748_, 1);
v_authority_3841_ = lean_ctor_get(v_ref_3840_, 0);
lean_inc(v_authority_3841_);
v_path_3842_ = lean_ctor_get(v_ref_3840_, 1);
lean_inc_ref(v_path_3842_);
v_query_3843_ = lean_ctor_get(v_ref_3840_, 2);
lean_inc(v_query_3843_);
v_fragment_3844_ = lean_ctor_get(v_ref_3840_, 3);
lean_inc(v_fragment_3844_);
lean_dec_ref(v_ref_3840_);
if (lean_obj_tag(v_authority_3841_) == 0)
{
lean_object* v___x_3861_; 
v___x_3861_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3858_ = v___x_3861_;
goto v___jp_3857_;
}
else
{
lean_object* v_val_3862_; lean_object* v_userInfo_3863_; lean_object* v_host_3864_; lean_object* v_port_3865_; lean_object* v___x_3866_; lean_object* v___y_3868_; lean_object* v___y_3869_; lean_object* v___y_3870_; lean_object* v___y_3875_; lean_object* v___y_3876_; lean_object* v___y_3885_; 
v_val_3862_ = lean_ctor_get(v_authority_3841_, 0);
v_userInfo_3863_ = lean_ctor_get(v_val_3862_, 0);
v_host_3864_ = lean_ctor_get(v_val_3862_, 1);
v_port_3865_ = lean_ctor_get(v_val_3862_, 2);
v___x_3866_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__0___closed__1));
if (lean_obj_tag(v_userInfo_3863_) == 0)
{
lean_object* v___x_3895_; 
v___x_3895_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3885_ = v___x_3895_;
goto v___jp_3884_;
}
else
{
lean_object* v_val_3896_; lean_object* v_password_3897_; 
v_val_3896_ = lean_ctor_get(v_userInfo_3863_, 0);
v_password_3897_ = lean_ctor_get(v_val_3896_, 1);
if (lean_obj_tag(v_password_3897_) == 0)
{
lean_object* v_username_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; 
v_username_3898_ = lean_ctor_get(v_val_3896_, 0);
lean_inc_ref(v_username_3898_);
v___x_3899_ = lean_string_from_utf8_unchecked(v_username_3898_);
v___x_3900_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3901_ = lean_string_append(v___x_3899_, v___x_3900_);
v___y_3885_ = v___x_3901_;
goto v___jp_3884_;
}
else
{
lean_object* v_username_3902_; lean_object* v_val_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; 
v_username_3902_ = lean_ctor_get(v_val_3896_, 0);
v_val_3903_ = lean_ctor_get(v_password_3897_, 0);
lean_inc_ref(v_username_3902_);
v___x_3904_ = lean_string_from_utf8_unchecked(v_username_3902_);
v___x_3905_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3906_ = lean_string_append(v___x_3904_, v___x_3905_);
lean_inc(v_val_3903_);
v___x_3907_ = lean_string_from_utf8_unchecked(v_val_3903_);
v___x_3908_ = lean_string_append(v___x_3906_, v___x_3907_);
lean_dec_ref(v___x_3907_);
v___x_3909_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_3910_ = lean_string_append(v___x_3908_, v___x_3909_);
v___y_3885_ = v___x_3910_;
goto v___jp_3884_;
}
}
v___jp_3867_:
{
lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; 
v___x_3871_ = lean_string_append(v___y_3869_, v___y_3868_);
lean_dec_ref(v___y_3868_);
v___x_3872_ = lean_string_append(v___x_3871_, v___y_3870_);
lean_dec_ref(v___y_3870_);
v___x_3873_ = lean_string_append(v___x_3866_, v___x_3872_);
lean_dec_ref(v___x_3872_);
v___y_3858_ = v___x_3873_;
goto v___jp_3857_;
}
v___jp_3874_:
{
switch(lean_obj_tag(v_port_3865_))
{
case 0:
{
lean_object* v___x_3877_; 
v___x_3877_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3868_ = v___y_3876_;
v___y_3869_ = v___y_3875_;
v___y_3870_ = v___x_3877_;
goto v___jp_3867_;
}
case 1:
{
lean_object* v___x_3878_; 
v___x_3878_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_3868_ = v___y_3876_;
v___y_3869_ = v___y_3875_;
v___y_3870_ = v___x_3878_;
goto v___jp_3867_;
}
default: 
{
uint16_t v_port_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; 
v_port_3879_ = lean_ctor_get_uint16(v_port_3865_, 0);
v___x_3880_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_3881_ = lean_uint16_to_nat(v_port_3879_);
v___x_3882_ = l_Nat_reprFast(v___x_3881_);
v___x_3883_ = lean_string_append(v___x_3880_, v___x_3882_);
lean_dec_ref(v___x_3882_);
v___y_3868_ = v___y_3876_;
v___y_3869_ = v___y_3875_;
v___y_3870_ = v___x_3883_;
goto v___jp_3867_;
}
}
}
v___jp_3884_:
{
switch(lean_obj_tag(v_host_3864_))
{
case 0:
{
lean_object* v_name_3886_; 
v_name_3886_ = lean_ctor_get(v_host_3864_, 0);
lean_inc_ref(v_name_3886_);
v___y_3875_ = v___y_3885_;
v___y_3876_ = v_name_3886_;
goto v___jp_3874_;
}
case 1:
{
lean_object* v_ipv4_3887_; lean_object* v___x_3888_; 
v_ipv4_3887_ = lean_ctor_get(v_host_3864_, 0);
v___x_3888_ = lean_uv_ntop_v4(v_ipv4_3887_);
v___y_3875_ = v___y_3885_;
v___y_3876_ = v___x_3888_;
goto v___jp_3874_;
}
default: 
{
lean_object* v_ipv6_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; 
v_ipv6_3889_ = lean_ctor_get(v_host_3864_, 0);
v___x_3890_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_3891_ = lean_uv_ntop_v6(v_ipv6_3889_);
v___x_3892_ = lean_string_append(v___x_3890_, v___x_3891_);
lean_dec_ref(v___x_3891_);
v___x_3893_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_3894_ = lean_string_append(v___x_3892_, v___x_3893_);
v___y_3875_ = v___y_3885_;
v___y_3876_ = v___x_3894_;
goto v___jp_3874_;
}
}
}
}
v___jp_3845_:
{
uint8_t v___x_3848_; lean_object* v_pathPart_3849_; lean_object* v_queryPart_3850_; 
v___x_3848_ = 0;
v_pathPart_3849_ = l_Std_Http_URI_Path_render(v_path_3842_, v___y_3847_, v___x_3848_);
v_queryPart_3850_ = l_Std_Http_URI_Query_formatOption(v_query_3843_);
if (lean_obj_tag(v_fragment_3844_) == 0)
{
lean_object* v___x_3851_; 
v___x_3851_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_3750_ = v___y_3846_;
v___y_3751_ = v_queryPart_3850_;
v___y_3752_ = v_pathPart_3849_;
v___y_3753_ = v___x_3851_;
goto v___jp_3749_;
}
else
{
lean_object* v_val_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; 
v_val_3852_ = lean_ctor_get(v_fragment_3844_, 0);
lean_inc(v_val_3852_);
lean_dec_ref_known(v_fragment_3844_, 1);
v___x_3853_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__0___closed__0));
v___x_3854_ = l_Std_Http_URI_EncodedFragment_encode(v_val_3852_);
v___x_3855_ = lean_string_from_utf8_unchecked(v___x_3854_);
v___x_3856_ = lean_string_append(v___x_3853_, v___x_3855_);
lean_dec_ref(v___x_3855_);
v___y_3750_ = v___y_3846_;
v___y_3751_ = v_queryPart_3850_;
v___y_3752_ = v_pathPart_3849_;
v___y_3753_ = v___x_3856_;
goto v___jp_3749_;
}
}
v___jp_3857_:
{
if (lean_obj_tag(v_authority_3841_) == 0)
{
uint8_t v___x_3859_; 
v___x_3859_ = 0;
v___y_3846_ = v___y_3858_;
v___y_3847_ = v___x_3859_;
goto v___jp_3845_;
}
else
{
uint8_t v___x_3860_; 
lean_dec_ref_known(v_authority_3841_, 1);
v___x_3860_ = 1;
v___y_3846_ = v___y_3858_;
v___y_3847_ = v___x_3860_;
goto v___jp_3845_;
}
}
}
v___jp_3749_:
{
lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; 
v___x_3754_ = lean_string_append(v___y_3750_, v___y_3752_);
lean_dec_ref(v___y_3752_);
v___x_3755_ = lean_string_append(v___x_3754_, v___y_3751_);
lean_dec_ref(v___y_3751_);
v___x_3756_ = lean_string_append(v___x_3755_, v___y_3753_);
lean_dec_ref(v___y_3753_);
return v___x_3756_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorIdx___impl(lean_object* v_x_3913_){
_start:
{
lean_object* v___x_3914_; 
v___x_3914_ = lean_obj_tag_nat(v_x_3913_);
return v___x_3914_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorIdx___impl___boxed(lean_object* v_x_3915_){
_start:
{
lean_object* v_res_3916_; 
v_res_3916_ = l_Std_Http_RequestTarget_ctorIdx___impl(v_x_3915_);
lean_dec(v_x_3915_);
return v_res_3916_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim___redArg(lean_object* v_t_3917_, lean_object* v_k_3918_){
_start:
{
switch(lean_obj_tag(v_t_3917_))
{
case 0:
{
lean_object* v_path_3919_; lean_object* v_query_3920_; lean_object* v___x_3921_; 
v_path_3919_ = lean_ctor_get(v_t_3917_, 0);
lean_inc_ref(v_path_3919_);
v_query_3920_ = lean_ctor_get(v_t_3917_, 1);
lean_inc(v_query_3920_);
lean_dec_ref_known(v_t_3917_, 2);
v___x_3921_ = lean_apply_2(v_k_3918_, v_path_3919_, v_query_3920_);
return v___x_3921_;
}
case 3:
{
return v_k_3918_;
}
default: 
{
lean_object* v_uri_3922_; lean_object* v___x_3923_; 
v_uri_3922_ = lean_ctor_get(v_t_3917_, 0);
lean_inc_ref(v_uri_3922_);
lean_dec(v_t_3917_);
v___x_3923_ = lean_apply_1(v_k_3918_, v_uri_3922_);
return v___x_3923_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim(lean_object* v_motive_3924_, lean_object* v_ctorIdx_3925_, lean_object* v_t_3926_, lean_object* v_h_3927_, lean_object* v_k_3928_){
_start:
{
lean_object* v___x_3929_; 
v___x_3929_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3926_, v_k_3928_);
return v___x_3929_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_ctorElim___boxed(lean_object* v_motive_3930_, lean_object* v_ctorIdx_3931_, lean_object* v_t_3932_, lean_object* v_h_3933_, lean_object* v_k_3934_){
_start:
{
lean_object* v_res_3935_; 
v_res_3935_ = l_Std_Http_RequestTarget_ctorElim(v_motive_3930_, v_ctorIdx_3931_, v_t_3932_, v_h_3933_, v_k_3934_);
lean_dec(v_ctorIdx_3931_);
return v_res_3935_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_originForm_elim___redArg(lean_object* v_t_3936_, lean_object* v_originForm_3937_){
_start:
{
lean_object* v___x_3938_; 
v___x_3938_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3936_, v_originForm_3937_);
return v___x_3938_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_originForm_elim(lean_object* v_motive_3939_, lean_object* v_t_3940_, lean_object* v_h_3941_, lean_object* v_originForm_3942_){
_start:
{
lean_object* v___x_3943_; 
v___x_3943_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3940_, v_originForm_3942_);
return v___x_3943_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_absoluteForm_elim___redArg(lean_object* v_t_3944_, lean_object* v_absoluteForm_3945_){
_start:
{
lean_object* v___x_3946_; 
v___x_3946_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3944_, v_absoluteForm_3945_);
return v___x_3946_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_absoluteForm_elim(lean_object* v_motive_3947_, lean_object* v_t_3948_, lean_object* v_h_3949_, lean_object* v_absoluteForm_3950_){
_start:
{
lean_object* v___x_3951_; 
v___x_3951_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3948_, v_absoluteForm_3950_);
return v___x_3951_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authorityForm_elim___redArg(lean_object* v_t_3952_, lean_object* v_authorityForm_3953_){
_start:
{
lean_object* v___x_3954_; 
v___x_3954_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3952_, v_authorityForm_3953_);
return v___x_3954_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authorityForm_elim(lean_object* v_motive_3955_, lean_object* v_t_3956_, lean_object* v_h_3957_, lean_object* v_authorityForm_3958_){
_start:
{
lean_object* v___x_3959_; 
v___x_3959_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3956_, v_authorityForm_3958_);
return v___x_3959_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_asteriskForm_elim___redArg(lean_object* v_t_3960_, lean_object* v_asteriskForm_3961_){
_start:
{
lean_object* v___x_3962_; 
v___x_3962_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3960_, v_asteriskForm_3961_);
return v___x_3962_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_asteriskForm_elim(lean_object* v_motive_3963_, lean_object* v_t_3964_, lean_object* v_h_3965_, lean_object* v_asteriskForm_3966_){
_start:
{
lean_object* v___x_3967_; 
v___x_3967_ = l_Std_Http_RequestTarget_ctorElim___redArg(v_t_3964_, v_asteriskForm_3966_);
return v___x_3967_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprRequestTarget_repr(lean_object* v_x_3994_, lean_object* v_prec_3995_){
_start:
{
lean_object* v___y_3997_; 
switch(lean_obj_tag(v_x_3994_))
{
case 0:
{
lean_object* v_path_4003_; lean_object* v_query_4004_; lean_object* v___x_4006_; uint8_t v_isShared_4007_; uint8_t v_isSharedCheck_4028_; 
v_path_4003_ = lean_ctor_get(v_x_3994_, 0);
v_query_4004_ = lean_ctor_get(v_x_3994_, 1);
v_isSharedCheck_4028_ = !lean_is_exclusive(v_x_3994_);
if (v_isSharedCheck_4028_ == 0)
{
v___x_4006_ = v_x_3994_;
v_isShared_4007_ = v_isSharedCheck_4028_;
goto v_resetjp_4005_;
}
else
{
lean_inc(v_query_4004_);
lean_inc(v_path_4003_);
lean_dec(v_x_3994_);
v___x_4006_ = lean_box(0);
v_isShared_4007_ = v_isSharedCheck_4028_;
goto v_resetjp_4005_;
}
v_resetjp_4005_:
{
lean_object* v___y_4009_; lean_object* v___x_4024_; uint8_t v___x_4025_; 
v___x_4024_ = lean_unsigned_to_nat(1024u);
v___x_4025_ = lean_nat_dec_le(v___x_4024_, v_prec_3995_);
if (v___x_4025_ == 0)
{
lean_object* v___x_4026_; 
v___x_4026_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_4009_ = v___x_4026_;
goto v___jp_4008_;
}
else
{
lean_object* v___x_4027_; 
v___x_4027_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_4009_ = v___x_4027_;
goto v___jp_4008_;
}
v___jp_4008_:
{
lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4015_; 
v___x_4010_ = lean_box(1);
v___x_4011_ = ((lean_object*)(l_Std_Http_instReprRequestTarget_repr___closed__4));
v___x_4012_ = lean_unsigned_to_nat(1024u);
v___x_4013_ = l_Std_Http_URI_instReprPath_repr___redArg(v_path_4003_);
if (v_isShared_4007_ == 0)
{
lean_ctor_set_tag(v___x_4006_, 5);
lean_ctor_set(v___x_4006_, 1, v___x_4013_);
lean_ctor_set(v___x_4006_, 0, v___x_4011_);
v___x_4015_ = v___x_4006_;
goto v_reusejp_4014_;
}
else
{
lean_object* v_reuseFailAlloc_4023_; 
v_reuseFailAlloc_4023_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4023_, 0, v___x_4011_);
lean_ctor_set(v_reuseFailAlloc_4023_, 1, v___x_4013_);
v___x_4015_ = v_reuseFailAlloc_4023_;
goto v_reusejp_4014_;
}
v_reusejp_4014_:
{
lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; uint8_t v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; 
v___x_4016_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4016_, 0, v___x_4015_);
lean_ctor_set(v___x_4016_, 1, v___x_4010_);
v___x_4017_ = l_Option_repr___at___00Std_Http_instReprURI_repr_spec__1(v_query_4004_, v___x_4012_);
v___x_4018_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4018_, 0, v___x_4016_);
lean_ctor_set(v___x_4018_, 1, v___x_4017_);
lean_inc(v___y_4009_);
v___x_4019_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4019_, 0, v___y_4009_);
lean_ctor_set(v___x_4019_, 1, v___x_4018_);
v___x_4020_ = 0;
v___x_4021_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4021_, 0, v___x_4019_);
lean_ctor_set_uint8(v___x_4021_, sizeof(void*)*1, v___x_4020_);
v___x_4022_ = l_Repr_addAppParen(v___x_4021_, v_prec_3995_);
return v___x_4022_;
}
}
}
}
case 1:
{
lean_object* v_uri_4029_; lean_object* v___y_4031_; lean_object* v___x_4039_; uint8_t v___x_4040_; 
v_uri_4029_ = lean_ctor_get(v_x_3994_, 0);
lean_inc_ref(v_uri_4029_);
lean_dec_ref_known(v_x_3994_, 1);
v___x_4039_ = lean_unsigned_to_nat(1024u);
v___x_4040_ = lean_nat_dec_le(v___x_4039_, v_prec_3995_);
if (v___x_4040_ == 0)
{
lean_object* v___x_4041_; 
v___x_4041_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_4031_ = v___x_4041_;
goto v___jp_4030_;
}
else
{
lean_object* v___x_4042_; 
v___x_4042_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_4031_ = v___x_4042_;
goto v___jp_4030_;
}
v___jp_4030_:
{
lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; uint8_t v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; 
v___x_4032_ = ((lean_object*)(l_Std_Http_instReprRequestTarget_repr___closed__7));
v___x_4033_ = l_Std_Http_instReprURI_repr___redArg(v_uri_4029_);
v___x_4034_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4034_, 0, v___x_4032_);
lean_ctor_set(v___x_4034_, 1, v___x_4033_);
lean_inc(v___y_4031_);
v___x_4035_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4035_, 0, v___y_4031_);
lean_ctor_set(v___x_4035_, 1, v___x_4034_);
v___x_4036_ = 0;
v___x_4037_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4037_, 0, v___x_4035_);
lean_ctor_set_uint8(v___x_4037_, sizeof(void*)*1, v___x_4036_);
v___x_4038_ = l_Repr_addAppParen(v___x_4037_, v_prec_3995_);
return v___x_4038_;
}
}
case 2:
{
lean_object* v_authority_4043_; lean_object* v___y_4045_; lean_object* v___x_4053_; uint8_t v___x_4054_; 
v_authority_4043_ = lean_ctor_get(v_x_3994_, 0);
lean_inc_ref(v_authority_4043_);
lean_dec_ref_known(v_x_3994_, 1);
v___x_4053_ = lean_unsigned_to_nat(1024u);
v___x_4054_ = lean_nat_dec_le(v___x_4053_, v_prec_3995_);
if (v___x_4054_ == 0)
{
lean_object* v___x_4055_; 
v___x_4055_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_4045_ = v___x_4055_;
goto v___jp_4044_;
}
else
{
lean_object* v___x_4056_; 
v___x_4056_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_4045_ = v___x_4056_;
goto v___jp_4044_;
}
v___jp_4044_:
{
lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; uint8_t v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; 
v___x_4046_ = ((lean_object*)(l_Std_Http_instReprRequestTarget_repr___closed__10));
v___x_4047_ = l_Std_Http_URI_instReprAuthority_repr___redArg(v_authority_4043_);
v___x_4048_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4048_, 0, v___x_4046_);
lean_ctor_set(v___x_4048_, 1, v___x_4047_);
lean_inc(v___y_4045_);
v___x_4049_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4049_, 0, v___y_4045_);
lean_ctor_set(v___x_4049_, 1, v___x_4048_);
v___x_4050_ = 0;
v___x_4051_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4051_, 0, v___x_4049_);
lean_ctor_set_uint8(v___x_4051_, sizeof(void*)*1, v___x_4050_);
v___x_4052_ = l_Repr_addAppParen(v___x_4051_, v_prec_3995_);
return v___x_4052_;
}
}
default: 
{
lean_object* v___x_4057_; uint8_t v___x_4058_; 
v___x_4057_ = lean_unsigned_to_nat(1024u);
v___x_4058_ = lean_nat_dec_le(v___x_4057_, v_prec_3995_);
if (v___x_4058_ == 0)
{
lean_object* v___x_4059_; 
v___x_4059_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__4, &l_Std_Http_URI_instReprHost___lam__0___closed__4_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__4);
v___y_3997_ = v___x_4059_;
goto v___jp_3996_;
}
else
{
lean_object* v___x_4060_; 
v___x_4060_ = lean_obj_once(&l_Std_Http_URI_instReprHost___lam__0___closed__5, &l_Std_Http_URI_instReprHost___lam__0___closed__5_once, _init_l_Std_Http_URI_instReprHost___lam__0___closed__5);
v___y_3997_ = v___x_4060_;
goto v___jp_3996_;
}
}
}
v___jp_3996_:
{
lean_object* v___x_3998_; lean_object* v___x_3999_; uint8_t v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; 
v___x_3998_ = ((lean_object*)(l_Std_Http_instReprRequestTarget_repr___closed__1));
lean_inc(v___y_3997_);
v___x_3999_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3999_, 0, v___y_3997_);
lean_ctor_set(v___x_3999_, 1, v___x_3998_);
v___x_4000_ = 0;
v___x_4001_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4001_, 0, v___x_3999_);
lean_ctor_set_uint8(v___x_4001_, sizeof(void*)*1, v___x_4000_);
v___x_4002_ = l_Repr_addAppParen(v___x_4001_, v_prec_3995_);
return v___x_4002_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_instReprRequestTarget_repr___boxed(lean_object* v_x_4061_, lean_object* v_prec_4062_){
_start:
{
lean_object* v_res_4063_; 
v_res_4063_ = l_Std_Http_instReprRequestTarget_repr(v_x_4061_, v_prec_4062_);
lean_dec(v_prec_4062_);
return v_res_4063_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_path(lean_object* v_x_4071_){
_start:
{
switch(lean_obj_tag(v_x_4071_))
{
case 0:
{
lean_object* v_path_4072_; 
v_path_4072_ = lean_ctor_get(v_x_4071_, 0);
lean_inc_ref(v_path_4072_);
return v_path_4072_;
}
case 1:
{
lean_object* v_uri_4073_; lean_object* v_path_4074_; 
v_uri_4073_ = lean_ctor_get(v_x_4071_, 0);
v_path_4074_ = lean_ctor_get(v_uri_4073_, 2);
lean_inc_ref(v_path_4074_);
return v_path_4074_;
}
default: 
{
lean_object* v___x_4075_; 
v___x_4075_ = ((lean_object*)(l_Std_Http_RequestTarget_path___closed__1));
return v___x_4075_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_path___boxed(lean_object* v_x_4076_){
_start:
{
lean_object* v_res_4077_; 
v_res_4077_ = l_Std_Http_RequestTarget_path(v_x_4076_);
lean_dec(v_x_4076_);
return v_res_4077_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_query(lean_object* v_x_4078_){
_start:
{
switch(lean_obj_tag(v_x_4078_))
{
case 0:
{
lean_object* v_query_4079_; 
v_query_4079_ = lean_ctor_get(v_x_4078_, 1);
if (lean_obj_tag(v_query_4079_) == 0)
{
lean_object* v___x_4080_; 
v___x_4080_ = ((lean_object*)(l_Std_Http_URI_Query_empty));
return v___x_4080_;
}
else
{
lean_object* v_val_4081_; 
v_val_4081_ = lean_ctor_get(v_query_4079_, 0);
lean_inc(v_val_4081_);
return v_val_4081_;
}
}
case 1:
{
lean_object* v_uri_4082_; lean_object* v_query_4083_; 
v_uri_4082_ = lean_ctor_get(v_x_4078_, 0);
v_query_4083_ = lean_ctor_get(v_uri_4082_, 3);
if (lean_obj_tag(v_query_4083_) == 0)
{
lean_object* v___x_4084_; 
v___x_4084_ = ((lean_object*)(l_Std_Http_URI_Query_empty));
return v___x_4084_;
}
else
{
lean_object* v_val_4085_; 
v_val_4085_ = lean_ctor_get(v_query_4083_, 0);
lean_inc(v_val_4085_);
return v_val_4085_;
}
}
default: 
{
lean_object* v___x_4086_; 
v___x_4086_ = ((lean_object*)(l_Std_Http_URI_Query_empty));
return v___x_4086_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_query___boxed(lean_object* v_x_4087_){
_start:
{
lean_object* v_res_4088_; 
v_res_4088_ = l_Std_Http_RequestTarget_query(v_x_4087_);
lean_dec(v_x_4087_);
return v_res_4088_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_authority_x3f(lean_object* v_x_4089_){
_start:
{
switch(lean_obj_tag(v_x_4089_))
{
case 2:
{
lean_object* v_authority_4090_; lean_object* v___x_4092_; uint8_t v_isShared_4093_; uint8_t v_isSharedCheck_4097_; 
v_authority_4090_ = lean_ctor_get(v_x_4089_, 0);
v_isSharedCheck_4097_ = !lean_is_exclusive(v_x_4089_);
if (v_isSharedCheck_4097_ == 0)
{
v___x_4092_ = v_x_4089_;
v_isShared_4093_ = v_isSharedCheck_4097_;
goto v_resetjp_4091_;
}
else
{
lean_inc(v_authority_4090_);
lean_dec(v_x_4089_);
v___x_4092_ = lean_box(0);
v_isShared_4093_ = v_isSharedCheck_4097_;
goto v_resetjp_4091_;
}
v_resetjp_4091_:
{
lean_object* v___x_4095_; 
if (v_isShared_4093_ == 0)
{
lean_ctor_set_tag(v___x_4092_, 1);
v___x_4095_ = v___x_4092_;
goto v_reusejp_4094_;
}
else
{
lean_object* v_reuseFailAlloc_4096_; 
v_reuseFailAlloc_4096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4096_, 0, v_authority_4090_);
v___x_4095_ = v_reuseFailAlloc_4096_;
goto v_reusejp_4094_;
}
v_reusejp_4094_:
{
return v___x_4095_;
}
}
}
case 1:
{
lean_object* v_uri_4098_; lean_object* v_authority_4099_; 
v_uri_4098_ = lean_ctor_get(v_x_4089_, 0);
lean_inc_ref(v_uri_4098_);
lean_dec_ref_known(v_x_4089_, 1);
v_authority_4099_ = lean_ctor_get(v_uri_4098_, 1);
lean_inc(v_authority_4099_);
lean_dec_ref(v_uri_4098_);
return v_authority_4099_;
}
default: 
{
lean_object* v___x_4100_; 
lean_dec(v_x_4089_);
v___x_4100_ = lean_box(0);
return v___x_4100_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_instToString___lam__0(lean_object* v_x_4102_){
_start:
{
lean_object* v___y_4104_; lean_object* v___y_4105_; lean_object* v___y_4106_; 
switch(lean_obj_tag(v_x_4102_))
{
case 0:
{
lean_object* v_path_4109_; lean_object* v_query_4110_; lean_object* v___y_4112_; uint8_t v___x_4115_; lean_object* v_pathStr_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; uint8_t v___x_4119_; 
v_path_4109_ = lean_ctor_get(v_x_4102_, 0);
lean_inc_ref(v_path_4109_);
v_query_4110_ = lean_ctor_get(v_x_4102_, 1);
lean_inc(v_query_4110_);
lean_dec_ref_known(v_x_4102_, 2);
v___x_4115_ = 1;
v_pathStr_4116_ = l_Std_Http_URI_Path_render(v_path_4109_, v___x_4115_, v___x_4115_);
v___x_4117_ = lean_string_utf8_byte_size(v_pathStr_4116_);
v___x_4118_ = lean_unsigned_to_nat(0u);
v___x_4119_ = lean_nat_dec_eq(v___x_4117_, v___x_4118_);
if (v___x_4119_ == 0)
{
v___y_4112_ = v_pathStr_4116_;
goto v___jp_4111_;
}
else
{
lean_object* v___x_4120_; 
lean_dec_ref(v_pathStr_4116_);
v___x_4120_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___y_4112_ = v___x_4120_;
goto v___jp_4111_;
}
v___jp_4111_:
{
lean_object* v_queryStr_4113_; lean_object* v___x_4114_; 
v_queryStr_4113_ = l_Std_Http_URI_Query_formatOption(v_query_4110_);
v___x_4114_ = lean_string_append(v___y_4112_, v_queryStr_4113_);
lean_dec_ref(v_queryStr_4113_);
return v___x_4114_;
}
}
case 1:
{
lean_object* v_uri_4121_; lean_object* v_scheme_4122_; lean_object* v_authority_4123_; lean_object* v_path_4124_; lean_object* v_query_4125_; lean_object* v_fragment_4126_; lean_object* v___y_4128_; lean_object* v___y_4129_; lean_object* v___y_4130_; lean_object* v___y_4131_; lean_object* v___y_4139_; uint8_t v___y_4140_; lean_object* v___y_4151_; 
v_uri_4121_ = lean_ctor_get(v_x_4102_, 0);
lean_inc_ref(v_uri_4121_);
lean_dec_ref_known(v_x_4102_, 1);
v_scheme_4122_ = lean_ctor_get(v_uri_4121_, 0);
lean_inc_ref(v_scheme_4122_);
v_authority_4123_ = lean_ctor_get(v_uri_4121_, 1);
lean_inc(v_authority_4123_);
v_path_4124_ = lean_ctor_get(v_uri_4121_, 2);
lean_inc_ref(v_path_4124_);
v_query_4125_ = lean_ctor_get(v_uri_4121_, 3);
lean_inc(v_query_4125_);
v_fragment_4126_ = lean_ctor_get(v_uri_4121_, 4);
lean_inc(v_fragment_4126_);
lean_dec_ref(v_uri_4121_);
if (lean_obj_tag(v_authority_4123_) == 0)
{
lean_object* v___x_4154_; 
v___x_4154_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4151_ = v___x_4154_;
goto v___jp_4150_;
}
else
{
lean_object* v_val_4155_; lean_object* v_userInfo_4156_; lean_object* v_host_4157_; lean_object* v_port_4158_; lean_object* v___x_4159_; lean_object* v___y_4161_; lean_object* v___y_4162_; lean_object* v___y_4163_; lean_object* v___y_4168_; lean_object* v___y_4169_; lean_object* v___y_4178_; 
v_val_4155_ = lean_ctor_get(v_authority_4123_, 0);
v_userInfo_4156_ = lean_ctor_get(v_val_4155_, 0);
v_host_4157_ = lean_ctor_get(v_val_4155_, 1);
v_port_4158_ = lean_ctor_get(v_val_4155_, 2);
v___x_4159_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__0___closed__1));
if (lean_obj_tag(v_userInfo_4156_) == 0)
{
lean_object* v___x_4188_; 
v___x_4188_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4178_ = v___x_4188_;
goto v___jp_4177_;
}
else
{
lean_object* v_val_4189_; lean_object* v_password_4190_; 
v_val_4189_ = lean_ctor_get(v_userInfo_4156_, 0);
v_password_4190_ = lean_ctor_get(v_val_4189_, 1);
if (lean_obj_tag(v_password_4190_) == 0)
{
lean_object* v_username_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; 
v_username_4191_ = lean_ctor_get(v_val_4189_, 0);
lean_inc_ref(v_username_4191_);
v___x_4192_ = lean_string_from_utf8_unchecked(v_username_4191_);
v___x_4193_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4194_ = lean_string_append(v___x_4192_, v___x_4193_);
v___y_4178_ = v___x_4194_;
goto v___jp_4177_;
}
else
{
lean_object* v_username_4195_; lean_object* v_val_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; 
v_username_4195_ = lean_ctor_get(v_val_4189_, 0);
v_val_4196_ = lean_ctor_get(v_password_4190_, 0);
lean_inc_ref(v_username_4195_);
v___x_4197_ = lean_string_from_utf8_unchecked(v_username_4195_);
v___x_4198_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4199_ = lean_string_append(v___x_4197_, v___x_4198_);
lean_inc(v_val_4196_);
v___x_4200_ = lean_string_from_utf8_unchecked(v_val_4196_);
v___x_4201_ = lean_string_append(v___x_4199_, v___x_4200_);
lean_dec_ref(v___x_4200_);
v___x_4202_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4203_ = lean_string_append(v___x_4201_, v___x_4202_);
v___y_4178_ = v___x_4203_;
goto v___jp_4177_;
}
}
v___jp_4160_:
{
lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; 
v___x_4164_ = lean_string_append(v___y_4162_, v___y_4161_);
lean_dec_ref(v___y_4161_);
v___x_4165_ = lean_string_append(v___x_4164_, v___y_4163_);
lean_dec_ref(v___y_4163_);
v___x_4166_ = lean_string_append(v___x_4159_, v___x_4165_);
lean_dec_ref(v___x_4165_);
v___y_4151_ = v___x_4166_;
goto v___jp_4150_;
}
v___jp_4167_:
{
switch(lean_obj_tag(v_port_4158_))
{
case 0:
{
lean_object* v___x_4170_; 
v___x_4170_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4161_ = v___y_4169_;
v___y_4162_ = v___y_4168_;
v___y_4163_ = v___x_4170_;
goto v___jp_4160_;
}
case 1:
{
lean_object* v___x_4171_; 
v___x_4171_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_4161_ = v___y_4169_;
v___y_4162_ = v___y_4168_;
v___y_4163_ = v___x_4171_;
goto v___jp_4160_;
}
default: 
{
uint16_t v_port_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; 
v_port_4172_ = lean_ctor_get_uint16(v_port_4158_, 0);
v___x_4173_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4174_ = lean_uint16_to_nat(v_port_4172_);
v___x_4175_ = l_Nat_reprFast(v___x_4174_);
v___x_4176_ = lean_string_append(v___x_4173_, v___x_4175_);
lean_dec_ref(v___x_4175_);
v___y_4161_ = v___y_4169_;
v___y_4162_ = v___y_4168_;
v___y_4163_ = v___x_4176_;
goto v___jp_4160_;
}
}
}
v___jp_4177_:
{
switch(lean_obj_tag(v_host_4157_))
{
case 0:
{
lean_object* v_name_4179_; 
v_name_4179_ = lean_ctor_get(v_host_4157_, 0);
lean_inc_ref(v_name_4179_);
v___y_4168_ = v___y_4178_;
v___y_4169_ = v_name_4179_;
goto v___jp_4167_;
}
case 1:
{
lean_object* v_ipv4_4180_; lean_object* v___x_4181_; 
v_ipv4_4180_ = lean_ctor_get(v_host_4157_, 0);
v___x_4181_ = lean_uv_ntop_v4(v_ipv4_4180_);
v___y_4168_ = v___y_4178_;
v___y_4169_ = v___x_4181_;
goto v___jp_4167_;
}
default: 
{
lean_object* v_ipv6_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; 
v_ipv6_4182_ = lean_ctor_get(v_host_4157_, 0);
v___x_4183_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_4184_ = lean_uv_ntop_v6(v_ipv6_4182_);
v___x_4185_ = lean_string_append(v___x_4183_, v___x_4184_);
lean_dec_ref(v___x_4184_);
v___x_4186_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_4187_ = lean_string_append(v___x_4185_, v___x_4186_);
v___y_4168_ = v___y_4178_;
v___y_4169_ = v___x_4187_;
goto v___jp_4167_;
}
}
}
}
v___jp_4127_:
{
lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; 
v___x_4132_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4133_ = lean_string_append(v_scheme_4122_, v___x_4132_);
v___x_4134_ = lean_string_append(v___x_4133_, v___y_4128_);
lean_dec_ref(v___y_4128_);
v___x_4135_ = lean_string_append(v___x_4134_, v___y_4129_);
lean_dec_ref(v___y_4129_);
v___x_4136_ = lean_string_append(v___x_4135_, v___y_4130_);
lean_dec_ref(v___y_4130_);
v___x_4137_ = lean_string_append(v___x_4136_, v___y_4131_);
lean_dec_ref(v___y_4131_);
return v___x_4137_;
}
v___jp_4138_:
{
uint8_t v___x_4141_; lean_object* v_pathPart_4142_; lean_object* v_queryPart_4143_; 
v___x_4141_ = 1;
v_pathPart_4142_ = l_Std_Http_URI_Path_render(v_path_4124_, v___y_4140_, v___x_4141_);
v_queryPart_4143_ = l_Std_Http_URI_Query_formatOption(v_query_4125_);
if (lean_obj_tag(v_fragment_4126_) == 0)
{
lean_object* v___x_4144_; 
v___x_4144_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4128_ = v___y_4139_;
v___y_4129_ = v_pathPart_4142_;
v___y_4130_ = v_queryPart_4143_;
v___y_4131_ = v___x_4144_;
goto v___jp_4127_;
}
else
{
lean_object* v_val_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; 
v_val_4145_ = lean_ctor_get(v_fragment_4126_, 0);
lean_inc(v_val_4145_);
lean_dec_ref_known(v_fragment_4126_, 1);
v___x_4146_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__0___closed__0));
v___x_4147_ = l_Std_Http_URI_EncodedFragment_encode(v_val_4145_);
v___x_4148_ = lean_string_from_utf8_unchecked(v___x_4147_);
v___x_4149_ = lean_string_append(v___x_4146_, v___x_4148_);
lean_dec_ref(v___x_4148_);
v___y_4128_ = v___y_4139_;
v___y_4129_ = v_pathPart_4142_;
v___y_4130_ = v_queryPart_4143_;
v___y_4131_ = v___x_4149_;
goto v___jp_4127_;
}
}
v___jp_4150_:
{
if (lean_obj_tag(v_authority_4123_) == 0)
{
uint8_t v___x_4152_; 
v___x_4152_ = 0;
v___y_4139_ = v___y_4151_;
v___y_4140_ = v___x_4152_;
goto v___jp_4138_;
}
else
{
uint8_t v___x_4153_; 
lean_dec_ref_known(v_authority_4123_, 1);
v___x_4153_ = 1;
v___y_4139_ = v___y_4151_;
v___y_4140_ = v___x_4153_;
goto v___jp_4138_;
}
}
}
case 2:
{
lean_object* v_authority_4204_; lean_object* v_userInfo_4205_; lean_object* v_host_4206_; lean_object* v_port_4207_; lean_object* v___y_4209_; lean_object* v___y_4210_; lean_object* v___y_4219_; 
v_authority_4204_ = lean_ctor_get(v_x_4102_, 0);
lean_inc_ref(v_authority_4204_);
lean_dec_ref_known(v_x_4102_, 1);
v_userInfo_4205_ = lean_ctor_get(v_authority_4204_, 0);
lean_inc(v_userInfo_4205_);
v_host_4206_ = lean_ctor_get(v_authority_4204_, 1);
lean_inc_ref(v_host_4206_);
v_port_4207_ = lean_ctor_get(v_authority_4204_, 2);
lean_inc(v_port_4207_);
lean_dec_ref(v_authority_4204_);
if (lean_obj_tag(v_userInfo_4205_) == 0)
{
lean_object* v___x_4229_; 
v___x_4229_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4219_ = v___x_4229_;
goto v___jp_4218_;
}
else
{
lean_object* v_val_4230_; lean_object* v_password_4231_; 
v_val_4230_ = lean_ctor_get(v_userInfo_4205_, 0);
lean_inc(v_val_4230_);
lean_dec_ref_known(v_userInfo_4205_, 1);
v_password_4231_ = lean_ctor_get(v_val_4230_, 1);
if (lean_obj_tag(v_password_4231_) == 0)
{
lean_object* v_username_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; 
v_username_4232_ = lean_ctor_get(v_val_4230_, 0);
lean_inc_ref(v_username_4232_);
lean_dec(v_val_4230_);
v___x_4233_ = lean_string_from_utf8_unchecked(v_username_4232_);
v___x_4234_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4235_ = lean_string_append(v___x_4233_, v___x_4234_);
v___y_4219_ = v___x_4235_;
goto v___jp_4218_;
}
else
{
lean_object* v_username_4236_; lean_object* v_val_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; 
lean_inc_ref(v_password_4231_);
v_username_4236_ = lean_ctor_get(v_val_4230_, 0);
lean_inc_ref(v_username_4236_);
lean_dec(v_val_4230_);
v_val_4237_ = lean_ctor_get(v_password_4231_, 0);
lean_inc(v_val_4237_);
lean_dec_ref_known(v_password_4231_, 1);
v___x_4238_ = lean_string_from_utf8_unchecked(v_username_4236_);
v___x_4239_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4240_ = lean_string_append(v___x_4238_, v___x_4239_);
v___x_4241_ = lean_string_from_utf8_unchecked(v_val_4237_);
v___x_4242_ = lean_string_append(v___x_4240_, v___x_4241_);
lean_dec_ref(v___x_4241_);
v___x_4243_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4244_ = lean_string_append(v___x_4242_, v___x_4243_);
v___y_4219_ = v___x_4244_;
goto v___jp_4218_;
}
}
v___jp_4208_:
{
switch(lean_obj_tag(v_port_4207_))
{
case 0:
{
lean_object* v___x_4211_; 
v___x_4211_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4104_ = v___y_4209_;
v___y_4105_ = v___y_4210_;
v___y_4106_ = v___x_4211_;
goto v___jp_4103_;
}
case 1:
{
lean_object* v___x_4212_; 
v___x_4212_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_4104_ = v___y_4209_;
v___y_4105_ = v___y_4210_;
v___y_4106_ = v___x_4212_;
goto v___jp_4103_;
}
default: 
{
uint16_t v_port_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; 
v_port_4213_ = lean_ctor_get_uint16(v_port_4207_, 0);
lean_dec_ref_known(v_port_4207_, 0);
v___x_4214_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4215_ = lean_uint16_to_nat(v_port_4213_);
v___x_4216_ = l_Nat_reprFast(v___x_4215_);
v___x_4217_ = lean_string_append(v___x_4214_, v___x_4216_);
lean_dec_ref(v___x_4216_);
v___y_4104_ = v___y_4209_;
v___y_4105_ = v___y_4210_;
v___y_4106_ = v___x_4217_;
goto v___jp_4103_;
}
}
}
v___jp_4218_:
{
switch(lean_obj_tag(v_host_4206_))
{
case 0:
{
lean_object* v_name_4220_; 
v_name_4220_ = lean_ctor_get(v_host_4206_, 0);
lean_inc_ref(v_name_4220_);
lean_dec_ref_known(v_host_4206_, 1);
v___y_4209_ = v___y_4219_;
v___y_4210_ = v_name_4220_;
goto v___jp_4208_;
}
case 1:
{
lean_object* v_ipv4_4221_; lean_object* v___x_4222_; 
v_ipv4_4221_ = lean_ctor_get(v_host_4206_, 0);
lean_inc_ref(v_ipv4_4221_);
lean_dec_ref_known(v_host_4206_, 1);
v___x_4222_ = lean_uv_ntop_v4(v_ipv4_4221_);
lean_dec_ref(v_ipv4_4221_);
v___y_4209_ = v___y_4219_;
v___y_4210_ = v___x_4222_;
goto v___jp_4208_;
}
default: 
{
lean_object* v_ipv6_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; 
v_ipv6_4223_ = lean_ctor_get(v_host_4206_, 0);
lean_inc_ref(v_ipv6_4223_);
lean_dec_ref_known(v_host_4206_, 1);
v___x_4224_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_4225_ = lean_uv_ntop_v6(v_ipv6_4223_);
lean_dec_ref(v_ipv6_4223_);
v___x_4226_ = lean_string_append(v___x_4224_, v___x_4225_);
lean_dec_ref(v___x_4225_);
v___x_4227_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_4228_ = lean_string_append(v___x_4226_, v___x_4227_);
v___y_4209_ = v___y_4219_;
v___y_4210_ = v___x_4228_;
goto v___jp_4208_;
}
}
}
}
default: 
{
lean_object* v___x_4245_; 
v___x_4245_ = ((lean_object*)(l_Std_Http_RequestTarget_instToString___lam__0___closed__0));
return v___x_4245_;
}
}
v___jp_4103_:
{
lean_object* v___x_4107_; lean_object* v___x_4108_; 
v___x_4107_ = lean_string_append(v___y_4104_, v___y_4105_);
lean_dec_ref(v___y_4105_);
v___x_4108_ = lean_string_append(v___x_4107_, v___y_4106_);
lean_dec_ref(v___y_4106_);
return v___x_4108_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_RequestTarget_instEncodeV11___lam__0(lean_object* v_out_4248_, lean_object* v_target_4249_){
_start:
{
lean_object* v___y_4251_; lean_object* v___y_4259_; lean_object* v___y_4260_; lean_object* v___y_4261_; 
switch(lean_obj_tag(v_target_4249_))
{
case 0:
{
lean_object* v_path_4264_; lean_object* v_query_4265_; lean_object* v___y_4267_; uint8_t v___x_4270_; lean_object* v_pathStr_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; uint8_t v___x_4274_; 
v_path_4264_ = lean_ctor_get(v_target_4249_, 0);
lean_inc_ref(v_path_4264_);
v_query_4265_ = lean_ctor_get(v_target_4249_, 1);
lean_inc(v_query_4265_);
lean_dec_ref_known(v_target_4249_, 2);
v___x_4270_ = 1;
v_pathStr_4271_ = l_Std_Http_URI_Path_render(v_path_4264_, v___x_4270_, v___x_4270_);
v___x_4272_ = lean_string_utf8_byte_size(v_pathStr_4271_);
v___x_4273_ = lean_unsigned_to_nat(0u);
v___x_4274_ = lean_nat_dec_eq(v___x_4272_, v___x_4273_);
if (v___x_4274_ == 0)
{
v___y_4267_ = v_pathStr_4271_;
goto v___jp_4266_;
}
else
{
lean_object* v___x_4275_; 
lean_dec_ref(v_pathStr_4271_);
v___x_4275_ = ((lean_object*)(l_Std_Http_URI_instToStringPath___lam__1___closed__0));
v___y_4267_ = v___x_4275_;
goto v___jp_4266_;
}
v___jp_4266_:
{
lean_object* v_queryStr_4268_; lean_object* v___x_4269_; 
v_queryStr_4268_ = l_Std_Http_URI_Query_formatOption(v_query_4265_);
v___x_4269_ = lean_string_append(v___y_4267_, v_queryStr_4268_);
lean_dec_ref(v_queryStr_4268_);
v___y_4251_ = v___x_4269_;
goto v___jp_4250_;
}
}
case 1:
{
lean_object* v_uri_4276_; lean_object* v_scheme_4277_; lean_object* v_authority_4278_; lean_object* v_path_4279_; lean_object* v_query_4280_; lean_object* v_fragment_4281_; lean_object* v___y_4283_; lean_object* v___y_4284_; lean_object* v___y_4285_; lean_object* v___y_4286_; lean_object* v___y_4294_; uint8_t v___y_4295_; lean_object* v___y_4306_; 
v_uri_4276_ = lean_ctor_get(v_target_4249_, 0);
lean_inc_ref(v_uri_4276_);
lean_dec_ref_known(v_target_4249_, 1);
v_scheme_4277_ = lean_ctor_get(v_uri_4276_, 0);
lean_inc_ref(v_scheme_4277_);
v_authority_4278_ = lean_ctor_get(v_uri_4276_, 1);
lean_inc(v_authority_4278_);
v_path_4279_ = lean_ctor_get(v_uri_4276_, 2);
lean_inc_ref(v_path_4279_);
v_query_4280_ = lean_ctor_get(v_uri_4276_, 3);
lean_inc(v_query_4280_);
v_fragment_4281_ = lean_ctor_get(v_uri_4276_, 4);
lean_inc(v_fragment_4281_);
lean_dec_ref(v_uri_4276_);
if (lean_obj_tag(v_authority_4278_) == 0)
{
lean_object* v___x_4309_; 
v___x_4309_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4306_ = v___x_4309_;
goto v___jp_4305_;
}
else
{
lean_object* v_val_4310_; lean_object* v_userInfo_4311_; lean_object* v_host_4312_; lean_object* v_port_4313_; lean_object* v___x_4314_; lean_object* v___y_4316_; lean_object* v___y_4317_; lean_object* v___y_4318_; lean_object* v___y_4323_; lean_object* v___y_4324_; lean_object* v___y_4333_; 
v_val_4310_ = lean_ctor_get(v_authority_4278_, 0);
v_userInfo_4311_ = lean_ctor_get(v_val_4310_, 0);
v_host_4312_ = lean_ctor_get(v_val_4310_, 1);
v_port_4313_ = lean_ctor_get(v_val_4310_, 2);
v___x_4314_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__0___closed__1));
if (lean_obj_tag(v_userInfo_4311_) == 0)
{
lean_object* v___x_4343_; 
v___x_4343_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4333_ = v___x_4343_;
goto v___jp_4332_;
}
else
{
lean_object* v_val_4344_; lean_object* v_password_4345_; 
v_val_4344_ = lean_ctor_get(v_userInfo_4311_, 0);
v_password_4345_ = lean_ctor_get(v_val_4344_, 1);
if (lean_obj_tag(v_password_4345_) == 0)
{
lean_object* v_username_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; 
v_username_4346_ = lean_ctor_get(v_val_4344_, 0);
lean_inc_ref(v_username_4346_);
v___x_4347_ = lean_string_from_utf8_unchecked(v_username_4346_);
v___x_4348_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4349_ = lean_string_append(v___x_4347_, v___x_4348_);
v___y_4333_ = v___x_4349_;
goto v___jp_4332_;
}
else
{
lean_object* v_username_4350_; lean_object* v_val_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; 
v_username_4350_ = lean_ctor_get(v_val_4344_, 0);
v_val_4351_ = lean_ctor_get(v_password_4345_, 0);
lean_inc_ref(v_username_4350_);
v___x_4352_ = lean_string_from_utf8_unchecked(v_username_4350_);
v___x_4353_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4354_ = lean_string_append(v___x_4352_, v___x_4353_);
lean_inc(v_val_4351_);
v___x_4355_ = lean_string_from_utf8_unchecked(v_val_4351_);
v___x_4356_ = lean_string_append(v___x_4354_, v___x_4355_);
lean_dec_ref(v___x_4355_);
v___x_4357_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4358_ = lean_string_append(v___x_4356_, v___x_4357_);
v___y_4333_ = v___x_4358_;
goto v___jp_4332_;
}
}
v___jp_4315_:
{
lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; 
v___x_4319_ = lean_string_append(v___y_4317_, v___y_4316_);
lean_dec_ref(v___y_4316_);
v___x_4320_ = lean_string_append(v___x_4319_, v___y_4318_);
lean_dec_ref(v___y_4318_);
v___x_4321_ = lean_string_append(v___x_4314_, v___x_4320_);
lean_dec_ref(v___x_4320_);
v___y_4306_ = v___x_4321_;
goto v___jp_4305_;
}
v___jp_4322_:
{
switch(lean_obj_tag(v_port_4313_))
{
case 0:
{
lean_object* v___x_4325_; 
v___x_4325_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4316_ = v___y_4324_;
v___y_4317_ = v___y_4323_;
v___y_4318_ = v___x_4325_;
goto v___jp_4315_;
}
case 1:
{
lean_object* v___x_4326_; 
v___x_4326_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_4316_ = v___y_4324_;
v___y_4317_ = v___y_4323_;
v___y_4318_ = v___x_4326_;
goto v___jp_4315_;
}
default: 
{
uint16_t v_port_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; 
v_port_4327_ = lean_ctor_get_uint16(v_port_4313_, 0);
v___x_4328_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4329_ = lean_uint16_to_nat(v_port_4327_);
v___x_4330_ = l_Nat_reprFast(v___x_4329_);
v___x_4331_ = lean_string_append(v___x_4328_, v___x_4330_);
lean_dec_ref(v___x_4330_);
v___y_4316_ = v___y_4324_;
v___y_4317_ = v___y_4323_;
v___y_4318_ = v___x_4331_;
goto v___jp_4315_;
}
}
}
v___jp_4332_:
{
switch(lean_obj_tag(v_host_4312_))
{
case 0:
{
lean_object* v_name_4334_; 
v_name_4334_ = lean_ctor_get(v_host_4312_, 0);
lean_inc_ref(v_name_4334_);
v___y_4323_ = v___y_4333_;
v___y_4324_ = v_name_4334_;
goto v___jp_4322_;
}
case 1:
{
lean_object* v_ipv4_4335_; lean_object* v___x_4336_; 
v_ipv4_4335_ = lean_ctor_get(v_host_4312_, 0);
v___x_4336_ = lean_uv_ntop_v4(v_ipv4_4335_);
v___y_4323_ = v___y_4333_;
v___y_4324_ = v___x_4336_;
goto v___jp_4322_;
}
default: 
{
lean_object* v_ipv6_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; 
v_ipv6_4337_ = lean_ctor_get(v_host_4312_, 0);
v___x_4338_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_4339_ = lean_uv_ntop_v6(v_ipv6_4337_);
v___x_4340_ = lean_string_append(v___x_4338_, v___x_4339_);
lean_dec_ref(v___x_4339_);
v___x_4341_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_4342_ = lean_string_append(v___x_4340_, v___x_4341_);
v___y_4323_ = v___y_4333_;
v___y_4324_ = v___x_4342_;
goto v___jp_4322_;
}
}
}
}
v___jp_4282_:
{
lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; 
v___x_4287_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4288_ = lean_string_append(v_scheme_4277_, v___x_4287_);
v___x_4289_ = lean_string_append(v___x_4288_, v___y_4285_);
lean_dec_ref(v___y_4285_);
v___x_4290_ = lean_string_append(v___x_4289_, v___y_4283_);
lean_dec_ref(v___y_4283_);
v___x_4291_ = lean_string_append(v___x_4290_, v___y_4284_);
lean_dec_ref(v___y_4284_);
v___x_4292_ = lean_string_append(v___x_4291_, v___y_4286_);
lean_dec_ref(v___y_4286_);
v___y_4251_ = v___x_4292_;
goto v___jp_4250_;
}
v___jp_4293_:
{
uint8_t v___x_4296_; lean_object* v_pathPart_4297_; lean_object* v_queryPart_4298_; 
v___x_4296_ = 1;
v_pathPart_4297_ = l_Std_Http_URI_Path_render(v_path_4279_, v___y_4295_, v___x_4296_);
v_queryPart_4298_ = l_Std_Http_URI_Query_formatOption(v_query_4280_);
if (lean_obj_tag(v_fragment_4281_) == 0)
{
lean_object* v___x_4299_; 
v___x_4299_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4283_ = v_pathPart_4297_;
v___y_4284_ = v_queryPart_4298_;
v___y_4285_ = v___y_4294_;
v___y_4286_ = v___x_4299_;
goto v___jp_4282_;
}
else
{
lean_object* v_val_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; 
v_val_4300_ = lean_ctor_get(v_fragment_4281_, 0);
lean_inc(v_val_4300_);
lean_dec_ref_known(v_fragment_4281_, 1);
v___x_4301_ = ((lean_object*)(l_Std_Http_instToStringURI___lam__0___closed__0));
v___x_4302_ = l_Std_Http_URI_EncodedFragment_encode(v_val_4300_);
v___x_4303_ = lean_string_from_utf8_unchecked(v___x_4302_);
v___x_4304_ = lean_string_append(v___x_4301_, v___x_4303_);
lean_dec_ref(v___x_4303_);
v___y_4283_ = v_pathPart_4297_;
v___y_4284_ = v_queryPart_4298_;
v___y_4285_ = v___y_4294_;
v___y_4286_ = v___x_4304_;
goto v___jp_4282_;
}
}
v___jp_4305_:
{
if (lean_obj_tag(v_authority_4278_) == 0)
{
uint8_t v___x_4307_; 
v___x_4307_ = 0;
v___y_4294_ = v___y_4306_;
v___y_4295_ = v___x_4307_;
goto v___jp_4293_;
}
else
{
uint8_t v___x_4308_; 
lean_dec_ref_known(v_authority_4278_, 1);
v___x_4308_ = 1;
v___y_4294_ = v___y_4306_;
v___y_4295_ = v___x_4308_;
goto v___jp_4293_;
}
}
}
case 2:
{
lean_object* v_authority_4359_; lean_object* v_userInfo_4360_; lean_object* v_host_4361_; lean_object* v_port_4362_; lean_object* v___y_4364_; lean_object* v___y_4365_; lean_object* v___y_4374_; 
v_authority_4359_ = lean_ctor_get(v_target_4249_, 0);
lean_inc_ref(v_authority_4359_);
lean_dec_ref_known(v_target_4249_, 1);
v_userInfo_4360_ = lean_ctor_get(v_authority_4359_, 0);
lean_inc(v_userInfo_4360_);
v_host_4361_ = lean_ctor_get(v_authority_4359_, 1);
lean_inc_ref(v_host_4361_);
v_port_4362_ = lean_ctor_get(v_authority_4359_, 2);
lean_inc(v_port_4362_);
lean_dec_ref(v_authority_4359_);
if (lean_obj_tag(v_userInfo_4360_) == 0)
{
lean_object* v___x_4384_; 
v___x_4384_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4374_ = v___x_4384_;
goto v___jp_4373_;
}
else
{
lean_object* v_val_4385_; lean_object* v_password_4386_; 
v_val_4385_ = lean_ctor_get(v_userInfo_4360_, 0);
lean_inc(v_val_4385_);
lean_dec_ref_known(v_userInfo_4360_, 1);
v_password_4386_ = lean_ctor_get(v_val_4385_, 1);
if (lean_obj_tag(v_password_4386_) == 0)
{
lean_object* v_username_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; 
v_username_4387_ = lean_ctor_get(v_val_4385_, 0);
lean_inc_ref(v_username_4387_);
lean_dec(v_val_4385_);
v___x_4388_ = lean_string_from_utf8_unchecked(v_username_4387_);
v___x_4389_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4390_ = lean_string_append(v___x_4388_, v___x_4389_);
v___y_4374_ = v___x_4390_;
goto v___jp_4373_;
}
else
{
lean_object* v_username_4391_; lean_object* v_val_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; 
lean_inc_ref(v_password_4386_);
v_username_4391_ = lean_ctor_get(v_val_4385_, 0);
lean_inc_ref(v_username_4391_);
lean_dec(v_val_4385_);
v_val_4392_ = lean_ctor_get(v_password_4386_, 0);
lean_inc(v_val_4392_);
lean_dec_ref_known(v_password_4386_, 1);
v___x_4393_ = lean_string_from_utf8_unchecked(v_username_4391_);
v___x_4394_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4395_ = lean_string_append(v___x_4393_, v___x_4394_);
v___x_4396_ = lean_string_from_utf8_unchecked(v_val_4392_);
v___x_4397_ = lean_string_append(v___x_4395_, v___x_4396_);
lean_dec_ref(v___x_4396_);
v___x_4398_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__2));
v___x_4399_ = lean_string_append(v___x_4397_, v___x_4398_);
v___y_4374_ = v___x_4399_;
goto v___jp_4373_;
}
}
v___jp_4363_:
{
switch(lean_obj_tag(v_port_4362_))
{
case 0:
{
lean_object* v___x_4366_; 
v___x_4366_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__0));
v___y_4259_ = v___y_4365_;
v___y_4260_ = v___y_4364_;
v___y_4261_ = v___x_4366_;
goto v___jp_4258_;
}
case 1:
{
lean_object* v___x_4367_; 
v___x_4367_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___y_4259_ = v___y_4365_;
v___y_4260_ = v___y_4364_;
v___y_4261_ = v___x_4367_;
goto v___jp_4258_;
}
default: 
{
uint16_t v_port_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; 
v_port_4368_ = lean_ctor_get_uint16(v_port_4362_, 0);
lean_dec_ref_known(v_port_4362_, 0);
v___x_4369_ = ((lean_object*)(l_Std_Http_URI_instToStringAuthority___lam__0___closed__1));
v___x_4370_ = lean_uint16_to_nat(v_port_4368_);
v___x_4371_ = l_Nat_reprFast(v___x_4370_);
v___x_4372_ = lean_string_append(v___x_4369_, v___x_4371_);
lean_dec_ref(v___x_4371_);
v___y_4259_ = v___y_4365_;
v___y_4260_ = v___y_4364_;
v___y_4261_ = v___x_4372_;
goto v___jp_4258_;
}
}
}
v___jp_4373_:
{
switch(lean_obj_tag(v_host_4361_))
{
case 0:
{
lean_object* v_name_4375_; 
v_name_4375_ = lean_ctor_get(v_host_4361_, 0);
lean_inc_ref(v_name_4375_);
lean_dec_ref_known(v_host_4361_, 1);
v___y_4364_ = v___y_4374_;
v___y_4365_ = v_name_4375_;
goto v___jp_4363_;
}
case 1:
{
lean_object* v_ipv4_4376_; lean_object* v___x_4377_; 
v_ipv4_4376_ = lean_ctor_get(v_host_4361_, 0);
lean_inc_ref(v_ipv4_4376_);
lean_dec_ref_known(v_host_4361_, 1);
v___x_4377_ = lean_uv_ntop_v4(v_ipv4_4376_);
lean_dec_ref(v_ipv4_4376_);
v___y_4364_ = v___y_4374_;
v___y_4365_ = v___x_4377_;
goto v___jp_4363_;
}
default: 
{
lean_object* v_ipv6_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; 
v_ipv6_4378_ = lean_ctor_get(v_host_4361_, 0);
lean_inc_ref(v_ipv6_4378_);
lean_dec_ref_known(v_host_4361_, 1);
v___x_4379_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__0));
v___x_4380_ = lean_uv_ntop_v6(v_ipv6_4378_);
lean_dec_ref(v_ipv6_4378_);
v___x_4381_ = lean_string_append(v___x_4379_, v___x_4380_);
lean_dec_ref(v___x_4380_);
v___x_4382_ = ((lean_object*)(l_Std_Http_URI_instToStringHost___lam__0___closed__1));
v___x_4383_ = lean_string_append(v___x_4381_, v___x_4382_);
v___y_4364_ = v___y_4374_;
v___y_4365_ = v___x_4383_;
goto v___jp_4363_;
}
}
}
}
default: 
{
lean_object* v___x_4400_; 
v___x_4400_ = ((lean_object*)(l_Std_Http_RequestTarget_instToString___lam__0___closed__0));
v___y_4251_ = v___x_4400_;
goto v___jp_4250_;
}
}
v___jp_4250_:
{
lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; uint8_t v___x_4256_; lean_object* v___x_4257_; 
v___x_4252_ = lean_string_to_utf8(v___y_4251_);
v___x_4253_ = lean_unsigned_to_nat(0u);
v___x_4254_ = lean_byte_array_size(v_out_4248_);
v___x_4255_ = lean_byte_array_size(v___x_4252_);
v___x_4256_ = 0;
v___x_4257_ = lean_byte_array_copy_slice(v___x_4252_, v___x_4253_, v_out_4248_, v___x_4254_, v___x_4255_, v___x_4256_);
lean_dec_ref(v___x_4252_);
return v___x_4257_;
}
v___jp_4258_:
{
lean_object* v___x_4262_; lean_object* v___x_4263_; 
v___x_4262_ = lean_string_append(v___y_4260_, v___y_4259_);
lean_dec_ref(v___y_4259_);
v___x_4263_ = lean_string_append(v___x_4262_, v___y_4261_);
lean_dec_ref(v___y_4261_);
v___y_4251_ = v___x_4263_;
goto v___jp_4250_;
}
}
}
lean_object* runtime_initialize_Init_Data_ToString(uint8_t builtin);
lean_object* runtime_initialize_Std_Net(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Internal(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_URI_Encoding(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_URI_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_ToString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Net(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Encoding(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Http_URI_instInhabitedUserInfo_default = _init_l_Std_Http_URI_instInhabitedUserInfo_default();
lean_mark_persistent(l_Std_Http_URI_instInhabitedUserInfo_default);
l_Std_Http_URI_instInhabitedUserInfo = _init_l_Std_Http_URI_instInhabitedUserInfo();
lean_mark_persistent(l_Std_Http_URI_instInhabitedUserInfo);
l_Std_Http_URI_endsInNumber___boxed__const__1 = _init_l_Std_Http_URI_endsInNumber___boxed__const__1();
lean_mark_persistent(l_Std_Http_URI_endsInNumber___boxed__const__1);
l_Std_Http_URI_instInhabitedHost_default = _init_l_Std_Http_URI_instInhabitedHost_default();
lean_mark_persistent(l_Std_Http_URI_instInhabitedHost_default);
l_Std_Http_URI_instInhabitedHost = _init_l_Std_Http_URI_instInhabitedHost();
lean_mark_persistent(l_Std_Http_URI_instInhabitedHost);
l_Std_Http_URI_instInhabitedPort_default = _init_l_Std_Http_URI_instInhabitedPort_default();
lean_mark_persistent(l_Std_Http_URI_instInhabitedPort_default);
l_Std_Http_URI_instInhabitedPort = _init_l_Std_Http_URI_instInhabitedPort();
lean_mark_persistent(l_Std_Http_URI_instInhabitedPort);
l_Std_Http_URI_instInhabitedAuthority_default = _init_l_Std_Http_URI_instInhabitedAuthority_default();
lean_mark_persistent(l_Std_Http_URI_instInhabitedAuthority_default);
l_Std_Http_URI_instInhabitedAuthority = _init_l_Std_Http_URI_instInhabitedAuthority();
lean_mark_persistent(l_Std_Http_URI_instInhabitedAuthority);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_URI_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_ToString(uint8_t builtin);
lean_object* initialize_Std_Net(uint8_t builtin);
lean_object* initialize_Std_Http_Internal(uint8_t builtin);
lean_object* initialize_Std_Http_Data_URI_Encoding(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_URI_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_ToString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Net(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Internal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_URI_Encoding(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_URI_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_URI_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
