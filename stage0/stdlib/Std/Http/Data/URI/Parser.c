// Lean compiler output
// Module: Std.Http.Data.URI.Parser
// Imports: import Init.While public import Init.Data.String.Basic public import Std.Internal.Parsec public import Std.Internal.Parsec.ByteArray public import Std.Http.Data.URI.Basic public import Std.Http.Data.URI.Config import Init.Data.String.Search
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ByteArray_toByteSlice(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_ByteSlice_toByteArray(lean_object*);
lean_object* l_Std_Http_URI_EncodedSegment_ofByteArray_x3f(lean_object*);
lean_object* l_ByteSlice_size(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_skipBytes(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
uint8_t l_Std_Http_URI_isValidDomainLabel(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
uint8_t l_Std_Http_URI_endsInNumber(lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x3f(lean_object*, lean_object*);
lean_object* l_Std_Http_URI_EncodedString_decode___redArg(lean_object*);
lean_object* lean_uv_pton_v4(lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* lean_uv_pton_v6(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
uint16_t lean_uint16_of_nat(lean_object*);
lean_object* l_Std_Http_URI_EncodedUserInfo_ofByteArray_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Std_Http_URI_Query_empty;
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Http_URI_EncodedQueryParam_fromString_x3f(lean_object*);
lean_object* l_Std_Http_URI_Query_insertEncoded(lean_object*, lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Std_Http_URI_EncodedFragment_ofByteArray_x3f(lean_object*);
lean_object* l_Std_Http_URI_EncodedString_decodeLossy___redArg(lean_object*);
uint8_t l_Std_Http_Internal_instDecidableIsLowerCase(lean_object*);
lean_object* l_String_toListImpl(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_byte_array_data(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_tryOpt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_tryOpt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_peekIs(lean_object*, lean_object*);
static const lean_string_object l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "condition not satisfied"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__1_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "invalid scheme"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__2_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__3_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__4 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__4_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__5 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__5_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__6 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__6_value;
static lean_once_cell_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7;
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__8 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__8_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "scheme length limit is 0 (no scheme allowed)"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__9 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__9_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__9_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__10 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__10_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "port number too large: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__1_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "invalid port number: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1(uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "invalid percent encoding in user info"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1_value;
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid IPv6 address: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '91'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__2_value;
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__3_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '93'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__4 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__4_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__4_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__5 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__5_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected at least one char"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__6_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___boxed(lean_object*);
static const lean_string_object l_String_dropSuffix_x3f___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_String_dropSuffix_x3f___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__3___redArg___closed__0 = (const lean_object*)&l_String_dropSuffix_x3f___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__1(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "invalid host"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__1_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "invalid domain name: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__2_value;
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__3_value;
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__4 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__4_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "invalid port number"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__1_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '58'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__2_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '64'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__4 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__4_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__4_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__5 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__5_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "too many path segments (limit: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "path too long (limit: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " bytes)"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "invalid percent encoding in path segment"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__4 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__4_value)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Parser_parsePath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "require '/' in path"};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__0 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parsePath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__0_value)}};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__1 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__1_value;
static const lean_string_object l_Std_Http_URI_Parser_parsePath___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "need a path"};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__2 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parsePath___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__2_value)}};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__3 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__3_value;
static const lean_array_object l_Std_Http_URI_Parser_parsePath___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__4 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__4_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parsePath___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Http_URI_Parser_parsePath___closed__5 = (const lean_object*)&l_Std_Http_URI_Parser_parsePath___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parsePath(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parsePath___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid query string"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__1_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "too many query parameters (limit: "};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "invalid percent encoding in fragment"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "//"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__0_value;
static lean_once_cell_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Parser_parseURI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '35'"};
static const lean_object* l_Std_Http_URI_Parser_parseURI___closed__0 = (const lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parseURI___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__0_value)}};
static const lean_object* l_Std_Http_URI_Parser_parseURI___closed__1 = (const lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__1_value;
static const lean_string_object l_Std_Http_URI_Parser_parseURI___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '63'"};
static const lean_object* l_Std_Http_URI_Parser_parseURI___closed__2 = (const lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parseURI___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__2_value)}};
static const lean_object* l_Std_Http_URI_Parser_parseURI___closed__3 = (const lean_object*)&l_Std_Http_URI_Parser_parseURI___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseURI(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '42'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk(lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "not origin"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "empty host in an http(s) URI"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__1_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "http"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__2_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "https"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteFromScheme(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "not http absolute uri with path"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__1_value;
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "not http absolute uri"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__2 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__2_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__3 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absolute(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseRequestTarget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_uri(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withAuthority(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath_spec__0_spec__0(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath_spec__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "the first segment of a relative path cannot contain ':'"};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath___closed__0 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath___closed__0_value)}};
static const lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath___closed__1 = (const lean_object*)&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseURIReference(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_Parser_parseHostHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "invalid host header"};
static const lean_object* l_Std_Http_URI_Parser_parseHostHeader___closed__0 = (const lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__0_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parseHostHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__0_value)}};
static const lean_object* l_Std_Http_URI_Parser_parseHostHeader___closed__1 = (const lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__1_value;
static const lean_string_object l_Std_Http_URI_Parser_parseHostHeader___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "invalid host header port"};
static const lean_object* l_Std_Http_URI_Parser_parseHostHeader___closed__2 = (const lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__2_value;
static const lean_ctor_object l_Std_Http_URI_Parser_parseHostHeader___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__2_value)}};
static const lean_object* l_Std_Http_URI_Parser_parseHostHeader___closed__3 = (const lean_object*)&l_Std_Http_URI_Parser_parseHostHeader___closed__3_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseHostHeader(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseHostHeader___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_tryOpt___redArg(lean_object* v_p_1_, lean_object* v_a_2_){
_start:
{
lean_object* v___x_3_; 
lean_inc_ref(v_a_2_);
v___x_3_ = lean_apply_1(v_p_1_, v_a_2_);
if (lean_obj_tag(v___x_3_) == 0)
{
lean_object* v_pos_4_; lean_object* v_res_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_13_; 
lean_dec_ref(v_a_2_);
v_pos_4_ = lean_ctor_get(v___x_3_, 0);
v_res_5_ = lean_ctor_get(v___x_3_, 1);
v_isSharedCheck_13_ = !lean_is_exclusive(v___x_3_);
if (v_isSharedCheck_13_ == 0)
{
v___x_7_ = v___x_3_;
v_isShared_8_ = v_isSharedCheck_13_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_res_5_);
lean_inc(v_pos_4_);
lean_dec(v___x_3_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_13_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v___x_9_; lean_object* v___x_11_; 
v___x_9_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_9_, 0, v_res_5_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 1, v___x_9_);
v___x_11_ = v___x_7_;
goto v_reusejp_10_;
}
else
{
lean_object* v_reuseFailAlloc_12_; 
v_reuseFailAlloc_12_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_12_, 0, v_pos_4_);
lean_ctor_set(v_reuseFailAlloc_12_, 1, v___x_9_);
v___x_11_ = v_reuseFailAlloc_12_;
goto v_reusejp_10_;
}
v_reusejp_10_:
{
return v___x_11_;
}
}
}
else
{
lean_object* v_err_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_27_; 
v_err_14_ = lean_ctor_get(v___x_3_, 1);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_3_);
if (v_isSharedCheck_27_ == 0)
{
lean_object* v_unused_28_; 
v_unused_28_ = lean_ctor_get(v___x_3_, 0);
lean_dec(v_unused_28_);
v___x_16_ = v___x_3_;
v_isShared_17_ = v_isSharedCheck_27_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_err_14_);
lean_dec(v___x_3_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_27_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v_idx_18_; uint8_t v___x_19_; 
v_idx_18_ = lean_ctor_get(v_a_2_, 1);
v___x_19_ = lean_nat_dec_eq(v_idx_18_, v_idx_18_);
if (v___x_19_ == 0)
{
lean_object* v___x_21_; 
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 0, v_a_2_);
v___x_21_ = v___x_16_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_22_; 
v_reuseFailAlloc_22_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_22_, 0, v_a_2_);
lean_ctor_set(v_reuseFailAlloc_22_, 1, v_err_14_);
v___x_21_ = v_reuseFailAlloc_22_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
return v___x_21_;
}
}
else
{
lean_object* v___x_23_; lean_object* v___x_25_; 
lean_dec(v_err_14_);
v___x_23_ = lean_box(0);
if (v_isShared_17_ == 0)
{
lean_ctor_set_tag(v___x_16_, 0);
lean_ctor_set(v___x_16_, 1, v___x_23_);
lean_ctor_set(v___x_16_, 0, v_a_2_);
v___x_25_ = v___x_16_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_2_);
lean_ctor_set(v_reuseFailAlloc_26_, 1, v___x_23_);
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
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_tryOpt(lean_object* v_00_u03b1_29_, lean_object* v_p_30_, lean_object* v_a_31_){
_start:
{
lean_object* v___x_32_; 
lean_inc_ref(v_a_31_);
v___x_32_ = lean_apply_1(v_p_30_, v_a_31_);
if (lean_obj_tag(v___x_32_) == 0)
{
lean_object* v_pos_33_; lean_object* v_res_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_42_; 
lean_dec_ref(v_a_31_);
v_pos_33_ = lean_ctor_get(v___x_32_, 0);
v_res_34_ = lean_ctor_get(v___x_32_, 1);
v_isSharedCheck_42_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_42_ == 0)
{
v___x_36_ = v___x_32_;
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_res_34_);
lean_inc(v_pos_33_);
lean_dec(v___x_32_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_38_; lean_object* v___x_40_; 
v___x_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_38_, 0, v_res_34_);
if (v_isShared_37_ == 0)
{
lean_ctor_set(v___x_36_, 1, v___x_38_);
v___x_40_ = v___x_36_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v_pos_33_);
lean_ctor_set(v_reuseFailAlloc_41_, 1, v___x_38_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
}
else
{
lean_object* v_err_43_; lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_56_; 
v_err_43_ = lean_ctor_get(v___x_32_, 1);
v_isSharedCheck_56_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_56_ == 0)
{
lean_object* v_unused_57_; 
v_unused_57_ = lean_ctor_get(v___x_32_, 0);
lean_dec(v_unused_57_);
v___x_45_ = v___x_32_;
v_isShared_46_ = v_isSharedCheck_56_;
goto v_resetjp_44_;
}
else
{
lean_inc(v_err_43_);
lean_dec(v___x_32_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_56_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v_idx_47_; uint8_t v___x_48_; 
v_idx_47_ = lean_ctor_get(v_a_31_, 1);
v___x_48_ = lean_nat_dec_eq(v_idx_47_, v_idx_47_);
if (v___x_48_ == 0)
{
lean_object* v___x_50_; 
if (v_isShared_46_ == 0)
{
lean_ctor_set(v___x_45_, 0, v_a_31_);
v___x_50_ = v___x_45_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_a_31_);
lean_ctor_set(v_reuseFailAlloc_51_, 1, v_err_43_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
else
{
lean_object* v___x_52_; lean_object* v___x_54_; 
lean_dec(v_err_43_);
v___x_52_ = lean_box(0);
if (v_isShared_46_ == 0)
{
lean_ctor_set_tag(v___x_45_, 0);
lean_ctor_set(v___x_45_, 1, v___x_52_);
lean_ctor_set(v___x_45_, 0, v_a_31_);
v___x_54_ = v___x_45_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v_a_31_);
lean_ctor_set(v_reuseFailAlloc_55_, 1, v___x_52_);
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
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_peekIs(lean_object* v_p_58_, lean_object* v_a_59_){
_start:
{
lean_object* v_pos_61_; lean_object* v_array_65_; lean_object* v_idx_66_; lean_object* v___x_67_; uint8_t v___x_68_; 
v_array_65_ = lean_ctor_get(v_a_59_, 0);
v_idx_66_ = lean_ctor_get(v_a_59_, 1);
v___x_67_ = lean_byte_array_size(v_array_65_);
v___x_68_ = lean_nat_dec_lt(v_idx_66_, v___x_67_);
if (v___x_68_ == 0)
{
lean_dec_ref(v_p_58_);
v_pos_61_ = v_a_59_;
goto v___jp_60_;
}
else
{
uint8_t v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; uint8_t v___x_72_; 
v___x_69_ = lean_byte_array_fget(v_array_65_, v_idx_66_);
v___x_70_ = lean_box(v___x_69_);
v___x_71_ = lean_apply_1(v_p_58_, v___x_70_);
v___x_72_ = lean_unbox(v___x_71_);
if (v___x_72_ == 0)
{
v_pos_61_ = v_a_59_;
goto v___jp_60_;
}
else
{
lean_object* v___x_73_; 
v___x_73_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_73_, 0, v_a_59_);
lean_ctor_set(v___x_73_, 1, v___x_71_);
return v___x_73_;
}
}
v___jp_60_:
{
uint8_t v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_62_ = 0;
v___x_63_ = lean_box(v___x_62_);
v___x_64_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_64_, 0, v_pos_61_);
lean_ctor_set(v___x_64_, 1, v___x_63_);
return v___x_64_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(lean_object* v_msg_75_){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = ((lean_object*)(l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2___closed__0));
v___x_77_ = lean_panic_fn_borrowed(v___x_76_, v_msg_75_);
return v___x_77_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0(uint8_t v_c_78_){
_start:
{
uint8_t v___x_96_; uint8_t v___x_97_; 
v___x_96_ = 48;
v___x_97_ = lean_uint8_dec_le(v___x_96_, v_c_78_);
if (v___x_97_ == 0)
{
goto v___jp_91_;
}
else
{
uint8_t v___x_98_; uint8_t v___x_99_; 
v___x_98_ = 57;
v___x_99_ = lean_uint8_dec_le(v_c_78_, v___x_98_);
if (v___x_99_ == 0)
{
goto v___jp_91_;
}
else
{
return v___x_99_;
}
}
v___jp_79_:
{
uint8_t v___x_80_; uint8_t v___x_81_; 
v___x_80_ = 43;
v___x_81_ = lean_uint8_dec_eq(v_c_78_, v___x_80_);
if (v___x_81_ == 0)
{
uint8_t v___x_82_; uint8_t v___x_83_; 
v___x_82_ = 45;
v___x_83_ = lean_uint8_dec_eq(v_c_78_, v___x_82_);
if (v___x_83_ == 0)
{
uint8_t v___x_84_; uint8_t v___x_85_; 
v___x_84_ = 46;
v___x_85_ = lean_uint8_dec_eq(v_c_78_, v___x_84_);
return v___x_85_;
}
else
{
return v___x_83_;
}
}
else
{
return v___x_81_;
}
}
v___jp_86_:
{
uint8_t v___x_87_; uint8_t v___x_88_; 
v___x_87_ = 65;
v___x_88_ = lean_uint8_dec_le(v___x_87_, v_c_78_);
if (v___x_88_ == 0)
{
goto v___jp_79_;
}
else
{
uint8_t v___x_89_; uint8_t v___x_90_; 
v___x_89_ = 90;
v___x_90_ = lean_uint8_dec_le(v_c_78_, v___x_89_);
if (v___x_90_ == 0)
{
goto v___jp_79_;
}
else
{
return v___x_90_;
}
}
}
v___jp_91_:
{
uint8_t v___x_92_; uint8_t v___x_93_; 
v___x_92_ = 97;
v___x_93_ = lean_uint8_dec_le(v___x_92_, v_c_78_);
if (v___x_93_ == 0)
{
goto v___jp_86_;
}
else
{
uint8_t v___x_94_; uint8_t v___x_95_; 
v___x_94_ = 122;
v___x_95_ = lean_uint8_dec_le(v_c_78_, v___x_94_);
if (v___x_95_ == 0)
{
goto v___jp_86_;
}
else
{
return v___x_95_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0___boxed(lean_object* v_c_100_){
_start:
{
uint8_t v_c_boxed_101_; uint8_t v_res_102_; lean_object* v_r_103_; 
v_c_boxed_101_ = lean_unbox(v_c_100_);
v_res_102_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___lam__0(v_c_boxed_101_);
v_r_103_ = lean_box(v_res_102_);
return v_r_103_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1(lean_object* v_x_104_){
_start:
{
if (lean_obj_tag(v_x_104_) == 0)
{
uint8_t v___x_105_; 
v___x_105_ = 1;
return v___x_105_;
}
else
{
lean_object* v_head_106_; lean_object* v_tail_107_; uint32_t v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; uint8_t v___x_140_; 
v_head_106_ = lean_ctor_get(v_x_104_, 0);
v_tail_107_ = lean_ctor_get(v_x_104_, 1);
v___x_137_ = lean_unbox_uint32(v_head_106_);
v___x_138_ = lean_uint32_to_nat(v___x_137_);
v___x_139_ = lean_unsigned_to_nat(128u);
v___x_140_ = lean_nat_dec_lt(v___x_138_, v___x_139_);
lean_dec(v___x_138_);
if (v___x_140_ == 0)
{
goto v___jp_108_;
}
else
{
uint32_t v___x_141_; uint32_t v___x_142_; uint8_t v___x_143_; 
v___x_141_ = 48;
v___x_142_ = lean_unbox_uint32(v_head_106_);
v___x_143_ = lean_uint32_dec_le(v___x_141_, v___x_142_);
if (v___x_143_ == 0)
{
goto v___jp_129_;
}
else
{
uint32_t v___x_144_; uint32_t v___x_145_; uint8_t v___x_146_; 
v___x_144_ = 57;
v___x_145_ = lean_unbox_uint32(v_head_106_);
v___x_146_ = lean_uint32_dec_le(v___x_145_, v___x_144_);
if (v___x_146_ == 0)
{
goto v___jp_129_;
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
}
v___jp_108_:
{
uint32_t v___x_109_; uint32_t v___x_110_; uint8_t v___x_111_; 
v___x_109_ = 43;
v___x_110_ = lean_unbox_uint32(v_head_106_);
v___x_111_ = lean_uint32_dec_eq(v___x_110_, v___x_109_);
if (v___x_111_ == 0)
{
uint32_t v___x_112_; uint32_t v___x_113_; uint8_t v___x_114_; 
v___x_112_ = 45;
v___x_113_ = lean_unbox_uint32(v_head_106_);
v___x_114_ = lean_uint32_dec_eq(v___x_113_, v___x_112_);
if (v___x_114_ == 0)
{
uint32_t v___x_115_; uint32_t v___x_116_; uint8_t v___x_117_; 
v___x_115_ = 46;
v___x_116_ = lean_unbox_uint32(v_head_106_);
v___x_117_ = lean_uint32_dec_eq(v___x_116_, v___x_115_);
if (v___x_117_ == 0)
{
return v___x_117_;
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
v___jp_121_:
{
uint32_t v___x_122_; uint32_t v___x_123_; uint8_t v___x_124_; 
v___x_122_ = 97;
v___x_123_ = lean_unbox_uint32(v_head_106_);
v___x_124_ = lean_uint32_dec_le(v___x_122_, v___x_123_);
if (v___x_124_ == 0)
{
goto v___jp_108_;
}
else
{
uint32_t v___x_125_; uint32_t v___x_126_; uint8_t v___x_127_; 
v___x_125_ = 122;
v___x_126_ = lean_unbox_uint32(v_head_106_);
v___x_127_ = lean_uint32_dec_le(v___x_126_, v___x_125_);
if (v___x_127_ == 0)
{
goto v___jp_108_;
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
}
v___jp_129_:
{
uint32_t v___x_130_; uint32_t v___x_131_; uint8_t v___x_132_; 
v___x_130_ = 65;
v___x_131_ = lean_unbox_uint32(v_head_106_);
v___x_132_ = lean_uint32_dec_le(v___x_130_, v___x_131_);
if (v___x_132_ == 0)
{
goto v___jp_121_;
}
else
{
uint32_t v___x_133_; uint32_t v___x_134_; uint8_t v___x_135_; 
v___x_133_ = 90;
v___x_134_ = lean_unbox_uint32(v_head_106_);
v___x_135_ = lean_uint32_dec_le(v___x_134_, v___x_133_);
if (v___x_135_ == 0)
{
goto v___jp_121_;
}
else
{
v_x_104_ = v_tail_107_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1___boxed(lean_object* v_x_148_){
_start:
{
uint8_t v_res_149_; lean_object* v_r_150_; 
v_res_149_ = l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1(v_x_148_);
lean_dec(v_x_148_);
v_r_150_ = lean_box(v_res_149_);
return v_r_150_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__0(lean_object* v_s_151_, lean_object* v_p_152_){
_start:
{
lean_object* v___y_154_; lean_object* v___y_155_; uint32_t v___y_159_; lean_object* v___x_171_; uint8_t v_decide_172_; 
v___x_171_ = lean_string_utf8_byte_size(v_s_151_);
v_decide_172_ = lean_nat_dec_eq(v_p_152_, v___x_171_);
if (v_decide_172_ == 0)
{
uint32_t v___x_173_; uint32_t v___x_174_; uint8_t v___x_175_; 
v___x_173_ = lean_string_utf8_get_fast(v_s_151_, v_p_152_);
v___x_174_ = 65;
v___x_175_ = lean_uint32_dec_le(v___x_174_, v___x_173_);
if (v___x_175_ == 0)
{
v___y_159_ = v___x_173_;
goto v___jp_158_;
}
else
{
uint32_t v___x_176_; uint8_t v___x_177_; 
v___x_176_ = 90;
v___x_177_ = lean_uint32_dec_le(v___x_173_, v___x_176_);
if (v___x_177_ == 0)
{
v___y_159_ = v___x_173_;
goto v___jp_158_;
}
else
{
uint32_t v___x_178_; uint32_t v___x_179_; 
v___x_178_ = 32;
v___x_179_ = lean_uint32_add(v___x_173_, v___x_178_);
v___y_159_ = v___x_179_;
goto v___jp_158_;
}
}
}
else
{
lean_dec(v_p_152_);
return v_s_151_;
}
v___jp_153_:
{
lean_object* v___x_156_; 
v___x_156_ = lean_nat_add(v_p_152_, v___y_155_);
lean_dec(v_p_152_);
v_s_151_ = v___y_154_;
v_p_152_ = v___x_156_;
goto _start;
}
v___jp_158_:
{
lean_object* v___x_160_; uint32_t v___x_161_; uint8_t v___x_162_; 
lean_inc(v_p_152_);
v___x_160_ = lean_string_utf8_set(v_s_151_, v_p_152_, v___y_159_);
v___x_161_ = 127;
v___x_162_ = lean_uint32_dec_le(v___y_159_, v___x_161_);
if (v___x_162_ == 0)
{
uint32_t v___x_163_; uint8_t v___x_164_; 
v___x_163_ = 2047;
v___x_164_ = lean_uint32_dec_le(v___y_159_, v___x_163_);
if (v___x_164_ == 0)
{
uint32_t v___x_165_; uint8_t v___x_166_; 
v___x_165_ = 65535;
v___x_166_ = lean_uint32_dec_le(v___y_159_, v___x_165_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; 
v___x_167_ = lean_unsigned_to_nat(4u);
v___y_154_ = v___x_160_;
v___y_155_ = v___x_167_;
goto v___jp_153_;
}
else
{
lean_object* v___x_168_; 
v___x_168_ = lean_unsigned_to_nat(3u);
v___y_154_ = v___x_160_;
v___y_155_ = v___x_168_;
goto v___jp_153_;
}
}
else
{
lean_object* v___x_169_; 
v___x_169_ = lean_unsigned_to_nat(2u);
v___y_154_ = v___x_160_;
v___y_155_ = v___x_169_;
goto v___jp_153_;
}
}
else
{
lean_object* v___x_170_; 
v___x_170_ = lean_unsigned_to_nat(1u);
v___y_154_ = v___x_160_;
v___y_155_ = v___x_170_;
goto v___jp_153_;
}
}
}
}
static lean_object* _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_189_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__6));
v___x_190_ = lean_unsigned_to_nat(46u);
v___x_191_ = lean_unsigned_to_nat(193u);
v___x_192_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__5));
v___x_193_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__4));
v___x_194_ = l_mkPanicMessageWithDecl(v___x_193_, v___x_192_, v___x_191_, v___x_190_, v___x_189_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(lean_object* v_config_199_, lean_object* v_a_200_){
_start:
{
lean_object* v___y_205_; uint32_t v___y_209_; lean_object* v___y_210_; lean_object* v___y_211_; lean_object* v_maxSchemeLength_217_; lean_object* v___x_218_; lean_object* v___y_220_; lean_object* v___y_221_; uint8_t v___x_237_; lean_object* v___y_239_; lean_object* v___y_240_; uint8_t v___y_241_; lean_object* v_lower_242_; lean_object* v_upper_243_; lean_object* v___y_256_; lean_object* v___y_257_; lean_object* v___y_258_; lean_object* v___y_259_; uint8_t v___y_260_; lean_object* v___y_261_; 
v_maxSchemeLength_217_ = lean_ctor_get(v_config_199_, 0);
v___x_218_ = lean_unsigned_to_nat(0u);
v___x_237_ = lean_nat_dec_eq(v_maxSchemeLength_217_, v___x_218_);
if (v___x_237_ == 0)
{
lean_object* v_array_263_; lean_object* v_idx_264_; lean_object* v___x_265_; uint8_t v___x_266_; 
v_array_263_ = lean_ctor_get(v_a_200_, 0);
v_idx_264_ = lean_ctor_get(v_a_200_, 1);
v___x_265_ = lean_byte_array_size(v_array_263_);
v___x_266_ = lean_nat_dec_lt(v_idx_264_, v___x_265_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_box(0);
v___x_268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_268_, 0, v_a_200_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
return v___x_268_;
}
else
{
lean_object* v___f_269_; lean_object* v_pos_271_; uint8_t v_res_272_; uint8_t v_c_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v_it_x27_287_; uint8_t v___x_293_; uint8_t v___x_294_; 
v___f_269_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__8));
v_c_284_ = lean_byte_array_fget(v_array_263_, v_idx_264_);
v___x_285_ = lean_unsigned_to_nat(1u);
v___x_286_ = lean_nat_add(v_idx_264_, v___x_285_);
lean_inc_ref(v_array_263_);
v_it_x27_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_287_, 0, v_array_263_);
lean_ctor_set(v_it_x27_287_, 1, v___x_286_);
v___x_293_ = 65;
v___x_294_ = lean_uint8_dec_le(v___x_293_, v_c_284_);
if (v___x_294_ == 0)
{
goto v___jp_288_;
}
else
{
uint8_t v___x_295_; uint8_t v___x_296_; 
v___x_295_ = 90;
v___x_296_ = lean_uint8_dec_le(v_c_284_, v___x_295_);
if (v___x_296_ == 0)
{
goto v___jp_288_;
}
else
{
lean_dec_ref(v_a_200_);
v_pos_271_ = v_it_x27_287_;
v_res_272_ = v_c_284_;
goto v___jp_270_;
}
}
v___jp_270_:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v_snd_276_; lean_object* v_fst_277_; lean_object* v_fst_278_; lean_object* v_array_279_; lean_object* v_idx_280_; lean_object* v___x_281_; lean_object* v___x_282_; uint8_t v___x_283_; 
v___x_273_ = lean_unsigned_to_nat(1u);
v___x_274_ = lean_nat_sub(v_maxSchemeLength_217_, v___x_273_);
lean_inc_ref(v_pos_271_);
v___x_275_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_269_, v___x_274_, v___x_218_, v_pos_271_);
lean_dec(v___x_274_);
v_snd_276_ = lean_ctor_get(v___x_275_, 1);
lean_inc(v_snd_276_);
v_fst_277_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_fst_277_);
lean_dec_ref(v___x_275_);
v_fst_278_ = lean_ctor_get(v_snd_276_, 0);
lean_inc(v_fst_278_);
lean_dec(v_snd_276_);
v_array_279_ = lean_ctor_get(v_pos_271_, 0);
lean_inc_ref(v_array_279_);
v_idx_280_ = lean_ctor_get(v_pos_271_, 1);
lean_inc(v_idx_280_);
lean_dec_ref(v_pos_271_);
v___x_281_ = lean_nat_add(v_idx_280_, v_fst_277_);
lean_dec(v_fst_277_);
v___x_282_ = lean_byte_array_size(v_array_279_);
v___x_283_ = lean_nat_dec_le(v_idx_280_, v___x_218_);
if (v___x_283_ == 0)
{
v___y_256_ = v___x_282_;
v___y_257_ = v_fst_278_;
v___y_258_ = v_array_279_;
v___y_259_ = v___x_281_;
v___y_260_ = v_res_272_;
v___y_261_ = v_idx_280_;
goto v___jp_255_;
}
else
{
lean_dec(v_idx_280_);
v___y_256_ = v___x_282_;
v___y_257_ = v_fst_278_;
v___y_258_ = v_array_279_;
v___y_259_ = v___x_281_;
v___y_260_ = v_res_272_;
v___y_261_ = v___x_218_;
goto v___jp_255_;
}
}
v___jp_288_:
{
uint8_t v___x_289_; uint8_t v___x_290_; 
v___x_289_ = 97;
v___x_290_ = lean_uint8_dec_le(v___x_289_, v_c_284_);
if (v___x_290_ == 0)
{
lean_dec_ref_known(v_it_x27_287_, 2);
goto v___jp_201_;
}
else
{
uint8_t v___x_291_; uint8_t v___x_292_; 
v___x_291_ = 122;
v___x_292_ = lean_uint8_dec_le(v_c_284_, v___x_291_);
if (v___x_292_ == 0)
{
lean_dec_ref_known(v_it_x27_287_, 2);
goto v___jp_201_;
}
else
{
lean_dec_ref(v_a_200_);
v_pos_271_ = v_it_x27_287_;
v_res_272_ = v_c_284_;
goto v___jp_270_;
}
}
}
}
}
else
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__10));
v___x_298_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_298_, 0, v_a_200_);
lean_ctor_set(v___x_298_, 1, v___x_297_);
return v___x_298_;
}
v___jp_201_:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__1));
v___x_203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_203_, 0, v_a_200_);
lean_ctor_set(v___x_203_, 1, v___x_202_);
return v___x_203_;
}
v___jp_204_:
{
lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_206_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__3));
v___x_207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_207_, 0, v___y_205_);
lean_ctor_set(v___x_207_, 1, v___x_206_);
return v___x_207_;
}
v___jp_208_:
{
uint32_t v___x_212_; uint8_t v___x_213_; 
v___x_212_ = 97;
v___x_213_ = lean_uint32_dec_le(v___x_212_, v___y_209_);
if (v___x_213_ == 0)
{
lean_dec_ref(v___y_210_);
v___y_205_ = v___y_211_;
goto v___jp_204_;
}
else
{
uint32_t v___x_214_; uint8_t v___x_215_; 
v___x_214_ = 122;
v___x_215_ = lean_uint32_dec_le(v___y_209_, v___x_214_);
if (v___x_215_ == 0)
{
lean_dec_ref(v___y_210_);
v___y_205_ = v___y_211_;
goto v___jp_204_;
}
else
{
lean_object* v___x_216_; 
v___x_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_216_, 0, v___y_211_);
lean_ctor_set(v___x_216_, 1, v___y_210_);
return v___x_216_;
}
}
}
v___jp_219_:
{
lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_222_ = l_String_mapAux___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__0(v___y_221_, v___x_218_);
lean_inc_ref(v___x_222_);
v___x_223_ = l_Std_Http_Internal_instDecidableIsLowerCase(v___x_222_);
if (v___x_223_ == 0)
{
lean_dec_ref(v___x_222_);
v___y_205_ = v___y_220_;
goto v___jp_204_;
}
else
{
lean_object* v___x_224_; uint8_t v___x_225_; 
lean_inc_ref(v___x_222_);
v___x_224_ = l_String_toListImpl(v___x_222_);
v___x_225_ = l_List_all___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__1(v___x_224_);
if (v___x_225_ == 0)
{
lean_dec(v___x_224_);
lean_dec_ref(v___x_222_);
v___y_205_ = v___y_220_;
goto v___jp_204_;
}
else
{
lean_object* v___x_226_; 
v___x_226_ = l_List_head_x3f___redArg(v___x_224_);
lean_dec(v___x_224_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_dec_ref(v___x_222_);
v___y_205_ = v___y_220_;
goto v___jp_204_;
}
else
{
lean_object* v_val_227_; uint32_t v___x_228_; uint32_t v___x_229_; uint8_t v___x_230_; 
v_val_227_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_val_227_);
lean_dec_ref_known(v___x_226_, 1);
v___x_228_ = 65;
v___x_229_ = lean_unbox_uint32(v_val_227_);
v___x_230_ = lean_uint32_dec_le(v___x_228_, v___x_229_);
if (v___x_230_ == 0)
{
uint32_t v___x_231_; 
v___x_231_ = lean_unbox_uint32(v_val_227_);
lean_dec(v_val_227_);
v___y_209_ = v___x_231_;
v___y_210_ = v___x_222_;
v___y_211_ = v___y_220_;
goto v___jp_208_;
}
else
{
uint32_t v___x_232_; uint32_t v___x_233_; uint8_t v___x_234_; 
v___x_232_ = 90;
v___x_233_ = lean_unbox_uint32(v_val_227_);
v___x_234_ = lean_uint32_dec_le(v___x_233_, v___x_232_);
if (v___x_234_ == 0)
{
uint32_t v___x_235_; 
v___x_235_ = lean_unbox_uint32(v_val_227_);
lean_dec(v_val_227_);
v___y_209_ = v___x_235_;
v___y_210_ = v___x_222_;
v___y_211_ = v___y_220_;
goto v___jp_208_;
}
else
{
lean_object* v___x_236_; 
lean_dec(v_val_227_);
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v___y_220_);
lean_ctor_set(v___x_236_, 1, v___x_222_);
return v___x_236_;
}
}
}
}
}
}
v___jp_238_:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_244_ = l_ByteArray_toByteSlice(v___y_240_, v_lower_242_, v_upper_243_);
v___x_245_ = l_ByteArray_empty;
v___x_246_ = lean_byte_array_push(v___x_245_, v___y_241_);
v___x_247_ = l_ByteSlice_toByteArray(v___x_244_);
v___x_248_ = lean_byte_array_size(v___x_246_);
v___x_249_ = lean_byte_array_size(v___x_247_);
v___x_250_ = lean_byte_array_copy_slice(v___x_247_, v___x_218_, v___x_246_, v___x_248_, v___x_249_, v___x_237_);
lean_dec_ref(v___x_247_);
v___x_251_ = lean_string_validate_utf8(v___x_250_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_dec_ref(v___x_250_);
v___x_252_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7);
v___x_253_ = l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(v___x_252_);
v___y_220_ = v___y_239_;
v___y_221_ = v___x_253_;
goto v___jp_219_;
}
else
{
lean_object* v___x_254_; 
v___x_254_ = lean_string_from_utf8_unchecked(v___x_250_);
v___y_220_ = v___y_239_;
v___y_221_ = v___x_254_;
goto v___jp_219_;
}
}
v___jp_255_:
{
uint8_t v___x_262_; 
v___x_262_ = lean_nat_dec_le(v___y_259_, v___y_256_);
if (v___x_262_ == 0)
{
lean_dec(v___y_259_);
v___y_239_ = v___y_257_;
v___y_240_ = v___y_258_;
v___y_241_ = v___y_260_;
v_lower_242_ = v___y_261_;
v_upper_243_ = v___y_256_;
goto v___jp_238_;
}
else
{
lean_dec(v___y_256_);
v___y_239_ = v___y_257_;
v___y_240_ = v___y_258_;
v___y_241_ = v___y_260_;
v_lower_242_ = v___y_261_;
v_upper_243_ = v___y_259_;
goto v___jp_238_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___boxed(lean_object* v_config_299_, lean_object* v_a_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_299_, v_a_300_);
lean_dec_ref(v_config_299_);
return v_res_301_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0(uint8_t v___y_302_){
_start:
{
uint8_t v___x_303_; uint8_t v___x_304_; 
v___x_303_ = 48;
v___x_304_ = lean_uint8_dec_le(v___x_303_, v___y_302_);
if (v___x_304_ == 0)
{
return v___x_304_;
}
else
{
uint8_t v___x_305_; uint8_t v___x_306_; 
v___x_305_ = 57;
v___x_306_ = lean_uint8_dec_le(v___y_302_, v___x_305_);
return v___x_306_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0___boxed(lean_object* v___y_307_){
_start:
{
uint8_t v___y_560__boxed_308_; uint8_t v_res_309_; lean_object* v_r_310_; 
v___y_560__boxed_308_ = lean_unbox(v___y_307_);
v_res_309_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___lam__0(v___y_560__boxed_308_);
v_r_310_ = lean_box(v_res_309_);
return v_r_310_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(lean_object* v_a_314_){
_start:
{
lean_object* v___f_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v_snd_319_; lean_object* v_fst_320_; lean_object* v_fst_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_374_; 
v___f_315_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__0));
v___x_316_ = lean_unsigned_to_nat(5u);
v___x_317_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_314_);
v___x_318_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_315_, v___x_316_, v___x_317_, v_a_314_);
v_snd_319_ = lean_ctor_get(v___x_318_, 1);
lean_inc(v_snd_319_);
v_fst_320_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_fst_320_);
lean_dec_ref(v___x_318_);
v_fst_321_ = lean_ctor_get(v_snd_319_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v_snd_319_);
if (v_isSharedCheck_374_ == 0)
{
lean_object* v_unused_375_; 
v_unused_375_ = lean_ctor_get(v_snd_319_, 1);
lean_dec(v_unused_375_);
v___x_323_ = v_snd_319_;
v_isShared_324_ = v_isSharedCheck_374_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_fst_321_);
lean_dec(v_snd_319_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_374_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___y_326_; lean_object* v_array_357_; lean_object* v_idx_358_; lean_object* v_lower_360_; lean_object* v_upper_361_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___y_371_; uint8_t v___x_373_; 
v_array_357_ = lean_ctor_get(v_a_314_, 0);
lean_inc_ref(v_array_357_);
v_idx_358_ = lean_ctor_get(v_a_314_, 1);
lean_inc(v_idx_358_);
lean_dec_ref(v_a_314_);
v___x_368_ = lean_nat_add(v_idx_358_, v_fst_320_);
lean_dec(v_fst_320_);
v___x_369_ = lean_byte_array_size(v_array_357_);
v___x_373_ = lean_nat_dec_le(v_idx_358_, v___x_317_);
if (v___x_373_ == 0)
{
v___y_371_ = v_idx_358_;
goto v___jp_370_;
}
else
{
lean_dec(v_idx_358_);
v___y_371_ = v___x_317_;
goto v___jp_370_;
}
v___jp_325_:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_327_ = lean_string_utf8_byte_size(v___y_326_);
lean_inc_ref(v___y_326_);
v___x_328_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_328_, 0, v___y_326_);
lean_ctor_set(v___x_328_, 1, v___x_317_);
lean_ctor_set(v___x_328_, 2, v___x_327_);
v___x_329_ = l_String_Slice_toNat_x3f(v___x_328_);
lean_dec_ref_known(v___x_328_, 3);
if (lean_obj_tag(v___x_329_) == 1)
{
lean_object* v_val_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_350_; 
lean_dec_ref(v___y_326_);
v_val_330_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_350_ == 0)
{
v___x_332_ = v___x_329_;
v_isShared_333_ = v_isSharedCheck_350_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_val_330_);
lean_dec(v___x_329_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_350_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_334_ = lean_unsigned_to_nat(65535u);
v___x_335_ = lean_nat_dec_lt(v___x_334_, v_val_330_);
if (v___x_335_ == 0)
{
uint16_t v___x_336_; lean_object* v___x_337_; lean_object* v___x_339_; 
lean_del_object(v___x_332_);
v___x_336_ = lean_uint16_of_nat(v_val_330_);
lean_dec(v_val_330_);
v___x_337_ = lean_box(v___x_336_);
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 1, v___x_337_);
v___x_339_ = v___x_323_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_fst_321_);
lean_ctor_set(v_reuseFailAlloc_340_, 1, v___x_337_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
else
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_345_; 
v___x_341_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__1));
v___x_342_ = l_Nat_reprFast(v_val_330_);
v___x_343_ = lean_string_append(v___x_341_, v___x_342_);
lean_dec_ref(v___x_342_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 0, v___x_343_);
v___x_345_ = v___x_332_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v___x_343_);
v___x_345_ = v_reuseFailAlloc_349_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
lean_object* v___x_347_; 
if (v_isShared_324_ == 0)
{
lean_ctor_set_tag(v___x_323_, 1);
lean_ctor_set(v___x_323_, 1, v___x_345_);
v___x_347_ = v___x_323_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_fst_321_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v___x_345_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
}
}
else
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_355_; 
lean_dec(v___x_329_);
v___x_351_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber___closed__2));
v___x_352_ = lean_string_append(v___x_351_, v___y_326_);
lean_dec_ref(v___y_326_);
v___x_353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
if (v_isShared_324_ == 0)
{
lean_ctor_set_tag(v___x_323_, 1);
lean_ctor_set(v___x_323_, 1, v___x_353_);
v___x_355_ = v___x_323_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_fst_321_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v___x_353_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
v___jp_359_:
{
lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_362_ = l_ByteArray_toByteSlice(v_array_357_, v_lower_360_, v_upper_361_);
v___x_363_ = l_ByteSlice_toByteArray(v___x_362_);
v___x_364_ = lean_string_validate_utf8(v___x_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___x_366_; 
lean_dec_ref(v___x_363_);
v___x_365_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7);
v___x_366_ = l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(v___x_365_);
v___y_326_ = v___x_366_;
goto v___jp_325_;
}
else
{
lean_object* v___x_367_; 
v___x_367_ = lean_string_from_utf8_unchecked(v___x_363_);
v___y_326_ = v___x_367_;
goto v___jp_325_;
}
}
v___jp_370_:
{
uint8_t v___x_372_; 
v___x_372_ = lean_nat_dec_le(v___x_368_, v___x_369_);
if (v___x_372_ == 0)
{
lean_dec(v___x_368_);
v_lower_360_ = v___y_371_;
v_upper_361_ = v___x_369_;
goto v___jp_359_;
}
else
{
v_lower_360_ = v___y_371_;
v_upper_361_ = v___x_368_;
goto v___jp_359_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0(uint8_t v_x_376_){
_start:
{
uint8_t v___x_422_; uint8_t v___x_423_; 
v___x_422_ = 58;
v___x_423_ = lean_uint8_dec_eq(v_x_376_, v___x_422_);
if (v___x_423_ == 0)
{
uint8_t v___x_424_; uint8_t v___x_425_; 
v___x_424_ = 48;
v___x_425_ = lean_uint8_dec_le(v___x_424_, v_x_376_);
if (v___x_425_ == 0)
{
goto v___jp_417_;
}
else
{
uint8_t v___x_426_; uint8_t v___x_427_; 
v___x_426_ = 57;
v___x_427_ = lean_uint8_dec_le(v_x_376_, v___x_426_);
if (v___x_427_ == 0)
{
goto v___jp_417_;
}
else
{
return v___x_427_;
}
}
}
else
{
uint8_t v___x_428_; 
v___x_428_ = 0;
return v___x_428_;
}
v___jp_377_:
{
uint8_t v___x_378_; uint8_t v___x_379_; 
v___x_378_ = 45;
v___x_379_ = lean_uint8_dec_eq(v_x_376_, v___x_378_);
if (v___x_379_ == 0)
{
uint8_t v___x_380_; uint8_t v___x_381_; 
v___x_380_ = 46;
v___x_381_ = lean_uint8_dec_eq(v_x_376_, v___x_380_);
if (v___x_381_ == 0)
{
uint8_t v___x_382_; uint8_t v___x_383_; 
v___x_382_ = 95;
v___x_383_ = lean_uint8_dec_eq(v_x_376_, v___x_382_);
if (v___x_383_ == 0)
{
uint8_t v___x_384_; uint8_t v___x_385_; 
v___x_384_ = 126;
v___x_385_ = lean_uint8_dec_eq(v_x_376_, v___x_384_);
if (v___x_385_ == 0)
{
uint8_t v___x_386_; uint8_t v___x_387_; 
v___x_386_ = 33;
v___x_387_ = lean_uint8_dec_eq(v_x_376_, v___x_386_);
if (v___x_387_ == 0)
{
uint8_t v___x_388_; uint8_t v___x_389_; 
v___x_388_ = 36;
v___x_389_ = lean_uint8_dec_eq(v_x_376_, v___x_388_);
if (v___x_389_ == 0)
{
uint8_t v___x_390_; uint8_t v___x_391_; 
v___x_390_ = 38;
v___x_391_ = lean_uint8_dec_eq(v_x_376_, v___x_390_);
if (v___x_391_ == 0)
{
uint8_t v___x_392_; uint8_t v___x_393_; 
v___x_392_ = 39;
v___x_393_ = lean_uint8_dec_eq(v_x_376_, v___x_392_);
if (v___x_393_ == 0)
{
uint8_t v___x_394_; uint8_t v___x_395_; 
v___x_394_ = 40;
v___x_395_ = lean_uint8_dec_eq(v_x_376_, v___x_394_);
if (v___x_395_ == 0)
{
uint8_t v___x_396_; uint8_t v___x_397_; 
v___x_396_ = 41;
v___x_397_ = lean_uint8_dec_eq(v_x_376_, v___x_396_);
if (v___x_397_ == 0)
{
uint8_t v___x_398_; uint8_t v___x_399_; 
v___x_398_ = 42;
v___x_399_ = lean_uint8_dec_eq(v_x_376_, v___x_398_);
if (v___x_399_ == 0)
{
uint8_t v___x_400_; uint8_t v___x_401_; 
v___x_400_ = 43;
v___x_401_ = lean_uint8_dec_eq(v_x_376_, v___x_400_);
if (v___x_401_ == 0)
{
uint8_t v___x_402_; uint8_t v___x_403_; 
v___x_402_ = 44;
v___x_403_ = lean_uint8_dec_eq(v_x_376_, v___x_402_);
if (v___x_403_ == 0)
{
uint8_t v___x_404_; uint8_t v___x_405_; 
v___x_404_ = 59;
v___x_405_ = lean_uint8_dec_eq(v_x_376_, v___x_404_);
if (v___x_405_ == 0)
{
uint8_t v___x_406_; uint8_t v___x_407_; 
v___x_406_ = 61;
v___x_407_ = lean_uint8_dec_eq(v_x_376_, v___x_406_);
if (v___x_407_ == 0)
{
uint8_t v___x_408_; uint8_t v___x_409_; 
v___x_408_ = 58;
v___x_409_ = lean_uint8_dec_eq(v_x_376_, v___x_408_);
if (v___x_409_ == 0)
{
uint8_t v___x_410_; uint8_t v___x_411_; 
v___x_410_ = 37;
v___x_411_ = lean_uint8_dec_eq(v_x_376_, v___x_410_);
return v___x_411_;
}
else
{
return v___x_409_;
}
}
else
{
return v___x_407_;
}
}
else
{
return v___x_405_;
}
}
else
{
return v___x_403_;
}
}
else
{
return v___x_401_;
}
}
else
{
return v___x_399_;
}
}
else
{
return v___x_397_;
}
}
else
{
return v___x_395_;
}
}
else
{
return v___x_393_;
}
}
else
{
return v___x_391_;
}
}
else
{
return v___x_389_;
}
}
else
{
return v___x_387_;
}
}
else
{
return v___x_385_;
}
}
else
{
return v___x_383_;
}
}
else
{
return v___x_381_;
}
}
else
{
return v___x_379_;
}
}
v___jp_412_:
{
uint8_t v___x_413_; uint8_t v___x_414_; 
v___x_413_ = 65;
v___x_414_ = lean_uint8_dec_le(v___x_413_, v_x_376_);
if (v___x_414_ == 0)
{
goto v___jp_377_;
}
else
{
uint8_t v___x_415_; uint8_t v___x_416_; 
v___x_415_ = 90;
v___x_416_ = lean_uint8_dec_le(v_x_376_, v___x_415_);
if (v___x_416_ == 0)
{
goto v___jp_377_;
}
else
{
return v___x_416_;
}
}
}
v___jp_417_:
{
uint8_t v___x_418_; uint8_t v___x_419_; 
v___x_418_ = 97;
v___x_419_ = lean_uint8_dec_le(v___x_418_, v_x_376_);
if (v___x_419_ == 0)
{
goto v___jp_412_;
}
else
{
uint8_t v___x_420_; uint8_t v___x_421_; 
v___x_420_ = 122;
v___x_421_ = lean_uint8_dec_le(v_x_376_, v___x_420_);
if (v___x_421_ == 0)
{
goto v___jp_412_;
}
else
{
return v___x_421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0___boxed(lean_object* v_x_429_){
_start:
{
uint8_t v_x_boxed_430_; uint8_t v_res_431_; lean_object* v_r_432_; 
v_x_boxed_430_ = lean_unbox(v_x_429_);
v_res_431_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__0(v_x_boxed_430_);
v_r_432_ = lean_box(v_res_431_);
return v_r_432_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1(uint8_t v___x_433_, uint8_t v___x_434_, uint8_t v_x_435_){
_start:
{
uint8_t v___x_480_; uint8_t v___x_481_; 
v___x_480_ = 48;
v___x_481_ = lean_uint8_dec_le(v___x_480_, v_x_435_);
if (v___x_481_ == 0)
{
goto v___jp_475_;
}
else
{
uint8_t v___x_482_; uint8_t v___x_483_; 
v___x_482_ = 57;
v___x_483_ = lean_uint8_dec_le(v_x_435_, v___x_482_);
if (v___x_483_ == 0)
{
goto v___jp_475_;
}
else
{
return v___x_434_;
}
}
v___jp_436_:
{
uint8_t v___x_437_; uint8_t v___x_438_; 
v___x_437_ = 45;
v___x_438_ = lean_uint8_dec_eq(v_x_435_, v___x_437_);
if (v___x_438_ == 0)
{
uint8_t v___x_439_; uint8_t v___x_440_; 
v___x_439_ = 46;
v___x_440_ = lean_uint8_dec_eq(v_x_435_, v___x_439_);
if (v___x_440_ == 0)
{
uint8_t v___x_441_; uint8_t v___x_442_; 
v___x_441_ = 95;
v___x_442_ = lean_uint8_dec_eq(v_x_435_, v___x_441_);
if (v___x_442_ == 0)
{
uint8_t v___x_443_; uint8_t v___x_444_; 
v___x_443_ = 126;
v___x_444_ = lean_uint8_dec_eq(v_x_435_, v___x_443_);
if (v___x_444_ == 0)
{
uint8_t v___x_445_; uint8_t v___x_446_; 
v___x_445_ = 33;
v___x_446_ = lean_uint8_dec_eq(v_x_435_, v___x_445_);
if (v___x_446_ == 0)
{
uint8_t v___x_447_; uint8_t v___x_448_; 
v___x_447_ = 36;
v___x_448_ = lean_uint8_dec_eq(v_x_435_, v___x_447_);
if (v___x_448_ == 0)
{
uint8_t v___x_449_; uint8_t v___x_450_; 
v___x_449_ = 38;
v___x_450_ = lean_uint8_dec_eq(v_x_435_, v___x_449_);
if (v___x_450_ == 0)
{
uint8_t v___x_451_; uint8_t v___x_452_; 
v___x_451_ = 39;
v___x_452_ = lean_uint8_dec_eq(v_x_435_, v___x_451_);
if (v___x_452_ == 0)
{
uint8_t v___x_453_; uint8_t v___x_454_; 
v___x_453_ = 40;
v___x_454_ = lean_uint8_dec_eq(v_x_435_, v___x_453_);
if (v___x_454_ == 0)
{
uint8_t v___x_455_; uint8_t v___x_456_; 
v___x_455_ = 41;
v___x_456_ = lean_uint8_dec_eq(v_x_435_, v___x_455_);
if (v___x_456_ == 0)
{
uint8_t v___x_457_; uint8_t v___x_458_; 
v___x_457_ = 42;
v___x_458_ = lean_uint8_dec_eq(v_x_435_, v___x_457_);
if (v___x_458_ == 0)
{
uint8_t v___x_459_; uint8_t v___x_460_; 
v___x_459_ = 43;
v___x_460_ = lean_uint8_dec_eq(v_x_435_, v___x_459_);
if (v___x_460_ == 0)
{
uint8_t v___x_461_; uint8_t v___x_462_; 
v___x_461_ = 44;
v___x_462_ = lean_uint8_dec_eq(v_x_435_, v___x_461_);
if (v___x_462_ == 0)
{
uint8_t v___x_463_; uint8_t v___x_464_; 
v___x_463_ = 59;
v___x_464_ = lean_uint8_dec_eq(v_x_435_, v___x_463_);
if (v___x_464_ == 0)
{
uint8_t v___x_465_; uint8_t v___x_466_; 
v___x_465_ = 61;
v___x_466_ = lean_uint8_dec_eq(v_x_435_, v___x_465_);
if (v___x_466_ == 0)
{
uint8_t v___x_467_; 
v___x_467_ = lean_uint8_dec_eq(v_x_435_, v___x_433_);
if (v___x_467_ == 0)
{
uint8_t v___x_468_; uint8_t v___x_469_; 
v___x_468_ = 37;
v___x_469_ = lean_uint8_dec_eq(v_x_435_, v___x_468_);
return v___x_469_;
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
else
{
return v___x_434_;
}
}
v___jp_470_:
{
uint8_t v___x_471_; uint8_t v___x_472_; 
v___x_471_ = 65;
v___x_472_ = lean_uint8_dec_le(v___x_471_, v_x_435_);
if (v___x_472_ == 0)
{
goto v___jp_436_;
}
else
{
uint8_t v___x_473_; uint8_t v___x_474_; 
v___x_473_ = 90;
v___x_474_ = lean_uint8_dec_le(v_x_435_, v___x_473_);
if (v___x_474_ == 0)
{
goto v___jp_436_;
}
else
{
return v___x_434_;
}
}
}
v___jp_475_:
{
uint8_t v___x_476_; uint8_t v___x_477_; 
v___x_476_ = 97;
v___x_477_ = lean_uint8_dec_le(v___x_476_, v_x_435_);
if (v___x_477_ == 0)
{
goto v___jp_470_;
}
else
{
uint8_t v___x_478_; uint8_t v___x_479_; 
v___x_478_ = 122;
v___x_479_ = lean_uint8_dec_le(v_x_435_, v___x_478_);
if (v___x_479_ == 0)
{
goto v___jp_470_;
}
else
{
return v___x_434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1___boxed(lean_object* v___x_484_, lean_object* v___x_485_, lean_object* v_x_486_){
_start:
{
uint8_t v___x_4638__boxed_487_; uint8_t v___x_4639__boxed_488_; uint8_t v_x_boxed_489_; uint8_t v_res_490_; lean_object* v_r_491_; 
v___x_4638__boxed_487_ = lean_unbox(v___x_484_);
v___x_4639__boxed_488_ = lean_unbox(v___x_485_);
v_x_boxed_489_ = lean_unbox(v_x_486_);
v_res_490_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1(v___x_4638__boxed_487_, v___x_4639__boxed_488_, v_x_boxed_489_);
v_r_491_ = lean_box(v_res_490_);
return v_r_491_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo(lean_object* v_config_496_, lean_object* v_a_497_){
_start:
{
lean_object* v___y_499_; lean_object* v_userPassEncoded_500_; lean_object* v___y_501_; lean_object* v___y_505_; lean_object* v___y_506_; lean_object* v___y_507_; lean_object* v_lower_508_; lean_object* v_upper_509_; lean_object* v___y_516_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v___y_519_; lean_object* v___y_520_; lean_object* v___y_521_; lean_object* v___y_524_; lean_object* v_pos_525_; lean_object* v_maxUserInfoLength_527_; lean_object* v___f_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v_snd_531_; lean_object* v_fst_532_; lean_object* v_fst_533_; lean_object* v_array_534_; lean_object* v_idx_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_583_; 
v_maxUserInfoLength_527_ = lean_ctor_get(v_config_496_, 2);
v___f_528_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__2));
v___x_529_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_497_);
v___x_530_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_528_, v_maxUserInfoLength_527_, v___x_529_, v_a_497_);
v_snd_531_ = lean_ctor_get(v___x_530_, 1);
lean_inc(v_snd_531_);
v_fst_532_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_fst_532_);
lean_dec_ref(v___x_530_);
v_fst_533_ = lean_ctor_get(v_snd_531_, 0);
lean_inc(v_fst_533_);
lean_dec(v_snd_531_);
v_array_534_ = lean_ctor_get(v_a_497_, 0);
v_idx_535_ = lean_ctor_get(v_a_497_, 1);
v_isSharedCheck_583_ = !lean_is_exclusive(v_a_497_);
if (v_isSharedCheck_583_ == 0)
{
v___x_537_ = v_a_497_;
v_isShared_538_ = v_isSharedCheck_583_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_idx_535_);
lean_inc(v_array_534_);
lean_dec(v_a_497_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_583_;
goto v_resetjp_536_;
}
v___jp_498_:
{
lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_502_, 0, v___y_499_);
lean_ctor_set(v___x_502_, 1, v_userPassEncoded_500_);
v___x_503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_503_, 0, v___y_501_);
lean_ctor_set(v___x_503_, 1, v___x_502_);
return v___x_503_;
}
v___jp_504_:
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_510_ = l_ByteArray_toByteSlice(v___y_505_, v_lower_508_, v_upper_509_);
v___x_511_ = l_ByteSlice_toByteArray(v___x_510_);
v___x_512_ = l_Std_Http_URI_EncodedUserInfo_ofByteArray_x3f(v___x_511_);
if (lean_obj_tag(v___x_512_) == 1)
{
v___y_499_ = v___y_506_;
v_userPassEncoded_500_ = v___x_512_;
v___y_501_ = v___y_507_;
goto v___jp_498_;
}
else
{
lean_object* v___x_513_; lean_object* v___x_514_; 
lean_dec(v___x_512_);
lean_dec_ref(v___y_506_);
v___x_513_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1));
v___x_514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_514_, 0, v___y_507_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
return v___x_514_;
}
}
v___jp_515_:
{
uint8_t v___x_522_; 
v___x_522_ = lean_nat_dec_le(v___y_516_, v___y_517_);
if (v___x_522_ == 0)
{
lean_dec(v___y_516_);
v___y_505_ = v___y_518_;
v___y_506_ = v___y_519_;
v___y_507_ = v___y_520_;
v_lower_508_ = v___y_521_;
v_upper_509_ = v___y_517_;
goto v___jp_504_;
}
else
{
lean_dec(v___y_517_);
v___y_505_ = v___y_518_;
v___y_506_ = v___y_519_;
v___y_507_ = v___y_520_;
v_lower_508_ = v___y_521_;
v_upper_509_ = v___y_516_;
goto v___jp_504_;
}
}
v___jp_523_:
{
lean_object* v___x_526_; 
v___x_526_ = lean_box(0);
v___y_499_ = v___y_524_;
v_userPassEncoded_500_ = v___x_526_;
v___y_501_ = v_pos_525_;
goto v___jp_498_;
}
v_resetjp_536_:
{
lean_object* v_lower_540_; lean_object* v_upper_541_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___y_580_; uint8_t v___x_582_; 
v___x_577_ = lean_nat_add(v_idx_535_, v_fst_532_);
lean_dec(v_fst_532_);
v___x_578_ = lean_byte_array_size(v_array_534_);
v___x_582_ = lean_nat_dec_le(v_idx_535_, v___x_529_);
if (v___x_582_ == 0)
{
v___y_580_ = v_idx_535_;
goto v___jp_579_;
}
else
{
lean_dec(v_idx_535_);
v___y_580_ = v___x_529_;
goto v___jp_579_;
}
v___jp_539_:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_542_ = l_ByteArray_toByteSlice(v_array_534_, v_lower_540_, v_upper_541_);
v___x_543_ = l_ByteSlice_toByteArray(v___x_542_);
v___x_544_ = l_Std_Http_URI_EncodedUserInfo_ofByteArray_x3f(v___x_543_);
if (lean_obj_tag(v___x_544_) == 1)
{
lean_object* v_val_545_; lean_object* v_array_546_; lean_object* v_idx_547_; lean_object* v___x_548_; uint8_t v___x_549_; 
lean_del_object(v___x_537_);
v_val_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_val_545_);
lean_dec_ref_known(v___x_544_, 1);
v_array_546_ = lean_ctor_get(v_fst_533_, 0);
v_idx_547_ = lean_ctor_get(v_fst_533_, 1);
v___x_548_ = lean_byte_array_size(v_array_546_);
v___x_549_ = lean_nat_dec_lt(v_idx_547_, v___x_548_);
if (v___x_549_ == 0)
{
v___y_524_ = v_val_545_;
v_pos_525_ = v_fst_533_;
goto v___jp_523_;
}
else
{
uint8_t v___x_550_; uint8_t v___x_551_; uint8_t v___x_552_; 
v___x_550_ = lean_byte_array_fget(v_array_546_, v_idx_547_);
v___x_551_ = 58;
v___x_552_ = lean_uint8_dec_eq(v___x_550_, v___x_551_);
if (v___x_552_ == 0)
{
v___y_524_ = v_val_545_;
v_pos_525_ = v_fst_533_;
goto v___jp_523_;
}
else
{
lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_570_; 
lean_inc(v_idx_547_);
lean_inc_ref(v_array_546_);
v_isSharedCheck_570_ = !lean_is_exclusive(v_fst_533_);
if (v_isSharedCheck_570_ == 0)
{
lean_object* v_unused_571_; lean_object* v_unused_572_; 
v_unused_571_ = lean_ctor_get(v_fst_533_, 1);
lean_dec(v_unused_571_);
v_unused_572_ = lean_ctor_get(v_fst_533_, 0);
lean_dec(v_unused_572_);
v___x_554_ = v_fst_533_;
v_isShared_555_ = v_isSharedCheck_570_;
goto v_resetjp_553_;
}
else
{
lean_dec(v_fst_533_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_570_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___f_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_562_; 
v___x_556_ = lean_box(v___x_551_);
v___x_557_ = lean_box(v___x_549_);
v___f_558_ = lean_alloc_closure((void*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___lam__1___boxed), 3, 2);
lean_closure_set(v___f_558_, 0, v___x_556_);
lean_closure_set(v___f_558_, 1, v___x_557_);
v___x_559_ = lean_unsigned_to_nat(1u);
v___x_560_ = lean_nat_add(v_idx_547_, v___x_559_);
lean_dec(v_idx_547_);
lean_inc(v___x_560_);
lean_inc_ref(v_array_546_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 1, v___x_560_);
v___x_562_ = v___x_554_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_array_546_);
lean_ctor_set(v_reuseFailAlloc_569_, 1, v___x_560_);
v___x_562_ = v_reuseFailAlloc_569_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
lean_object* v___x_563_; lean_object* v_snd_564_; lean_object* v_fst_565_; lean_object* v_fst_566_; lean_object* v___x_567_; uint8_t v___x_568_; 
v___x_563_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_558_, v_maxUserInfoLength_527_, v___x_529_, v___x_562_);
v_snd_564_ = lean_ctor_get(v___x_563_, 1);
lean_inc(v_snd_564_);
v_fst_565_ = lean_ctor_get(v___x_563_, 0);
lean_inc(v_fst_565_);
lean_dec_ref(v___x_563_);
v_fst_566_ = lean_ctor_get(v_snd_564_, 0);
lean_inc(v_fst_566_);
lean_dec(v_snd_564_);
v___x_567_ = lean_nat_add(v___x_560_, v_fst_565_);
lean_dec(v_fst_565_);
v___x_568_ = lean_nat_dec_le(v___x_560_, v___x_529_);
if (v___x_568_ == 0)
{
v___y_516_ = v___x_567_;
v___y_517_ = v___x_548_;
v___y_518_ = v_array_546_;
v___y_519_ = v_val_545_;
v___y_520_ = v_fst_566_;
v___y_521_ = v___x_560_;
goto v___jp_515_;
}
else
{
lean_dec(v___x_560_);
v___y_516_ = v___x_567_;
v___y_517_ = v___x_548_;
v___y_518_ = v_array_546_;
v___y_519_ = v_val_545_;
v___y_520_ = v_fst_566_;
v___y_521_ = v___x_529_;
goto v___jp_515_;
}
}
}
}
}
}
else
{
lean_object* v___x_573_; lean_object* v___x_575_; 
lean_dec(v___x_544_);
v___x_573_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___closed__1));
if (v_isShared_538_ == 0)
{
lean_ctor_set_tag(v___x_537_, 1);
lean_ctor_set(v___x_537_, 1, v___x_573_);
lean_ctor_set(v___x_537_, 0, v_fst_533_);
v___x_575_ = v___x_537_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_fst_533_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v___x_573_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
v___jp_579_:
{
uint8_t v___x_581_; 
v___x_581_ = lean_nat_dec_le(v___x_577_, v___x_578_);
if (v___x_581_ == 0)
{
lean_dec(v___x_577_);
v_lower_540_ = v___y_580_;
v_upper_541_ = v___x_578_;
goto v___jp_539_;
}
else
{
v_lower_540_ = v___y_580_;
v_upper_541_ = v___x_577_;
goto v___jp_539_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo___boxed(lean_object* v_config_584_, lean_object* v_a_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo(v_config_584_, v_a_585_);
lean_dec_ref(v_config_584_);
return v_res_586_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0(uint8_t v_x_587_){
_start:
{
uint8_t v___x_598_; uint8_t v___x_599_; 
v___x_598_ = 58;
v___x_599_ = lean_uint8_dec_eq(v_x_587_, v___x_598_);
if (v___x_599_ == 0)
{
uint8_t v___x_600_; uint8_t v___x_601_; 
v___x_600_ = 46;
v___x_601_ = lean_uint8_dec_eq(v_x_587_, v___x_600_);
if (v___x_601_ == 0)
{
uint8_t v___x_602_; uint8_t v___x_603_; 
v___x_602_ = 48;
v___x_603_ = lean_uint8_dec_le(v___x_602_, v_x_587_);
if (v___x_603_ == 0)
{
goto v___jp_593_;
}
else
{
uint8_t v___x_604_; uint8_t v___x_605_; 
v___x_604_ = 57;
v___x_605_ = lean_uint8_dec_le(v_x_587_, v___x_604_);
if (v___x_605_ == 0)
{
goto v___jp_593_;
}
else
{
return v___x_605_;
}
}
}
else
{
return v___x_601_;
}
}
else
{
return v___x_599_;
}
v___jp_588_:
{
uint8_t v___x_589_; uint8_t v___x_590_; 
v___x_589_ = 65;
v___x_590_ = lean_uint8_dec_le(v___x_589_, v_x_587_);
if (v___x_590_ == 0)
{
return v___x_590_;
}
else
{
uint8_t v___x_591_; uint8_t v___x_592_; 
v___x_591_ = 70;
v___x_592_ = lean_uint8_dec_le(v_x_587_, v___x_591_);
return v___x_592_;
}
}
v___jp_593_:
{
uint8_t v___x_594_; uint8_t v___x_595_; 
v___x_594_ = 97;
v___x_595_ = lean_uint8_dec_le(v___x_594_, v_x_587_);
if (v___x_595_ == 0)
{
goto v___jp_588_;
}
else
{
uint8_t v___x_596_; uint8_t v___x_597_; 
v___x_596_ = 102;
v___x_597_ = lean_uint8_dec_le(v_x_587_, v___x_596_);
if (v___x_597_ == 0)
{
goto v___jp_588_;
}
else
{
return v___x_597_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0___boxed(lean_object* v_x_606_){
_start:
{
uint8_t v_x_boxed_607_; uint8_t v_res_608_; lean_object* v_r_609_; 
v_x_boxed_607_ = lean_unbox(v_x_606_);
v_res_608_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___lam__0(v_x_boxed_607_);
v_r_609_ = lean_box(v_res_608_);
return v_r_609_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6(lean_object* v_a_621_){
_start:
{
lean_object* v___y_623_; lean_object* v___y_624_; lean_object* v_array_632_; lean_object* v_idx_633_; lean_object* v___x_634_; uint8_t v___x_635_; 
v_array_632_ = lean_ctor_get(v_a_621_, 0);
v_idx_633_ = lean_ctor_get(v_a_621_, 1);
v___x_634_ = lean_byte_array_size(v_array_632_);
v___x_635_ = lean_nat_dec_lt(v_idx_633_, v___x_634_);
if (v___x_635_ == 0)
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = lean_box(0);
v___x_637_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_637_, 0, v_a_621_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
return v___x_637_;
}
else
{
uint8_t v___x_638_; uint8_t v_got_639_; uint8_t v___x_640_; 
v___x_638_ = 91;
v_got_639_ = lean_byte_array_fget(v_array_632_, v_idx_633_);
v___x_640_ = lean_uint8_dec_eq(v_got_639_, v___x_638_);
if (v___x_640_ == 0)
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__2));
v___x_642_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_642_, 0, v_a_621_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
return v___x_642_;
}
else
{
lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_718_; 
lean_inc(v_idx_633_);
lean_inc_ref(v_array_632_);
v_isSharedCheck_718_ = !lean_is_exclusive(v_a_621_);
if (v_isSharedCheck_718_ == 0)
{
lean_object* v_unused_719_; lean_object* v_unused_720_; 
v_unused_719_ = lean_ctor_get(v_a_621_, 1);
lean_dec(v_unused_719_);
v_unused_720_ = lean_ctor_get(v_a_621_, 0);
lean_dec(v_unused_720_);
v___x_644_ = v_a_621_;
v_isShared_645_ = v_isSharedCheck_718_;
goto v_resetjp_643_;
}
else
{
lean_dec(v_a_621_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_718_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___f_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_650_; 
v___f_646_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__3));
v___x_647_ = lean_unsigned_to_nat(1u);
v___x_648_ = lean_nat_add(v_idx_633_, v___x_647_);
lean_dec(v_idx_633_);
lean_inc(v___x_648_);
lean_inc_ref(v_array_632_);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 1, v___x_648_);
v___x_650_ = v___x_644_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_array_632_);
lean_ctor_set(v_reuseFailAlloc_717_, 1, v___x_648_);
v___x_650_ = v_reuseFailAlloc_717_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v_snd_654_; lean_object* v_fst_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_716_; 
v___x_651_ = lean_unsigned_to_nat(256u);
v___x_652_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v___x_650_);
v___x_653_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_646_, v___x_651_, v___x_652_, v___x_650_);
v_snd_654_ = lean_ctor_get(v___x_653_, 1);
v_fst_655_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_716_ == 0)
{
v___x_657_ = v___x_653_;
v_isShared_658_ = v_isSharedCheck_716_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_snd_654_);
lean_inc(v_fst_655_);
lean_dec(v___x_653_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_716_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v_fst_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_714_; 
v_fst_659_ = lean_ctor_get(v_snd_654_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v_snd_654_);
if (v_isSharedCheck_714_ == 0)
{
lean_object* v_unused_715_; 
v_unused_715_ = lean_ctor_get(v_snd_654_, 1);
lean_dec(v_unused_715_);
v___x_661_ = v_snd_654_;
v_isShared_662_ = v_isSharedCheck_714_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_fst_659_);
lean_dec(v_snd_654_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_714_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___y_664_; uint8_t v___x_698_; 
v___x_698_ = lean_nat_dec_eq(v_fst_655_, v___x_652_);
if (v___x_698_ == 0)
{
lean_object* v___x_699_; lean_object* v___y_701_; uint8_t v___x_709_; 
lean_dec_ref(v___x_650_);
v___x_699_ = lean_nat_add(v___x_648_, v_fst_655_);
lean_dec(v_fst_655_);
v___x_709_ = lean_nat_dec_le(v___x_648_, v___x_652_);
if (v___x_709_ == 0)
{
v___y_701_ = v___x_648_;
goto v___jp_700_;
}
else
{
lean_dec(v___x_648_);
v___y_701_ = v___x_652_;
goto v___jp_700_;
}
v___jp_700_:
{
uint8_t v___x_702_; 
v___x_702_ = lean_nat_dec_le(v___x_699_, v___x_634_);
if (v___x_702_ == 0)
{
lean_object* v___x_704_; 
lean_dec(v___x_699_);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 1, v___x_634_);
lean_ctor_set(v___x_657_, 0, v___y_701_);
v___x_704_ = v___x_657_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v___y_701_);
lean_ctor_set(v_reuseFailAlloc_705_, 1, v___x_634_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
v___y_664_ = v___x_704_;
goto v___jp_663_;
}
}
else
{
lean_object* v___x_707_; 
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 1, v___x_699_);
lean_ctor_set(v___x_657_, 0, v___y_701_);
v___x_707_ = v___x_657_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v___y_701_);
lean_ctor_set(v_reuseFailAlloc_708_, 1, v___x_699_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
v___y_664_ = v___x_707_;
goto v___jp_663_;
}
}
}
}
else
{
lean_object* v___x_710_; lean_object* v___x_712_; 
lean_del_object(v___x_661_);
lean_dec(v_fst_659_);
lean_dec(v_fst_655_);
lean_dec(v___x_648_);
lean_dec_ref(v_array_632_);
v___x_710_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7));
if (v_isShared_658_ == 0)
{
lean_ctor_set_tag(v___x_657_, 1);
lean_ctor_set(v___x_657_, 1, v___x_710_);
lean_ctor_set(v___x_657_, 0, v___x_650_);
v___x_712_ = v___x_657_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v___x_650_);
lean_ctor_set(v_reuseFailAlloc_713_, 1, v___x_710_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
v___jp_663_:
{
lean_object* v_array_665_; lean_object* v_idx_666_; lean_object* v___x_667_; uint8_t v___x_668_; 
v_array_665_ = lean_ctor_get(v_fst_659_, 0);
v_idx_666_ = lean_ctor_get(v_fst_659_, 1);
v___x_667_ = lean_byte_array_size(v_array_665_);
v___x_668_ = lean_nat_dec_lt(v_idx_666_, v___x_667_);
if (v___x_668_ == 0)
{
lean_object* v___x_669_; lean_object* v___x_671_; 
lean_dec_ref(v___y_664_);
lean_dec_ref(v_array_632_);
v___x_669_ = lean_box(0);
if (v_isShared_662_ == 0)
{
lean_ctor_set_tag(v___x_661_, 1);
lean_ctor_set(v___x_661_, 1, v___x_669_);
v___x_671_ = v___x_661_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_fst_659_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v___x_669_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
else
{
uint8_t v___x_673_; uint8_t v_got_674_; uint8_t v___x_675_; 
v___x_673_ = 93;
v_got_674_ = lean_byte_array_fget(v_array_665_, v_idx_666_);
v___x_675_ = lean_uint8_dec_eq(v_got_674_, v___x_673_);
if (v___x_675_ == 0)
{
lean_object* v___x_676_; lean_object* v___x_678_; 
lean_dec_ref(v___y_664_);
lean_dec_ref(v_array_632_);
v___x_676_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__5));
if (v_isShared_662_ == 0)
{
lean_ctor_set_tag(v___x_661_, 1);
lean_ctor_set(v___x_661_, 1, v___x_676_);
v___x_678_ = v___x_661_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_fst_659_);
lean_ctor_set(v_reuseFailAlloc_679_, 1, v___x_676_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
else
{
lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_695_; 
lean_inc(v_idx_666_);
lean_inc_ref(v_array_665_);
lean_del_object(v___x_661_);
v_isSharedCheck_695_ = !lean_is_exclusive(v_fst_659_);
if (v_isSharedCheck_695_ == 0)
{
lean_object* v_unused_696_; lean_object* v_unused_697_; 
v_unused_696_ = lean_ctor_get(v_fst_659_, 1);
lean_dec(v_unused_696_);
v_unused_697_ = lean_ctor_get(v_fst_659_, 0);
lean_dec(v_unused_697_);
v___x_681_ = v_fst_659_;
v_isShared_682_ = v_isSharedCheck_695_;
goto v_resetjp_680_;
}
else
{
lean_dec(v_fst_659_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_695_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v_lower_683_; lean_object* v_upper_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_688_; 
v_lower_683_ = lean_ctor_get(v___y_664_, 0);
lean_inc(v_lower_683_);
v_upper_684_ = lean_ctor_get(v___y_664_, 1);
lean_inc(v_upper_684_);
lean_dec_ref(v___y_664_);
v___x_685_ = l_ByteArray_toByteSlice(v_array_632_, v_lower_683_, v_upper_684_);
v___x_686_ = lean_nat_add(v_idx_666_, v___x_647_);
lean_dec(v_idx_666_);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 1, v___x_686_);
v___x_688_ = v___x_681_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_array_665_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v___x_686_);
v___x_688_ = v_reuseFailAlloc_694_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_689_ = l_ByteSlice_toByteArray(v___x_685_);
v___x_690_ = lean_string_validate_utf8(v___x_689_);
if (v___x_690_ == 0)
{
lean_object* v___x_691_; lean_object* v___x_692_; 
lean_dec_ref(v___x_689_);
v___x_691_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme___closed__7);
v___x_692_ = l_panic___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__2(v___x_691_);
v___y_623_ = v___x_688_;
v___y_624_ = v___x_692_;
goto v___jp_622_;
}
else
{
lean_object* v___x_693_; 
v___x_693_ = lean_string_from_utf8_unchecked(v___x_689_);
v___y_623_ = v___x_688_;
v___y_624_ = v___x_693_;
goto v___jp_622_;
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
}
}
v___jp_622_:
{
lean_object* v___x_625_; 
v___x_625_ = lean_uv_pton_v6(v___y_624_);
if (lean_obj_tag(v___x_625_) == 1)
{
lean_object* v_val_626_; lean_object* v___x_627_; 
lean_dec_ref(v___y_624_);
v_val_626_ = lean_ctor_get(v___x_625_, 0);
lean_inc(v_val_626_);
lean_dec_ref_known(v___x_625_, 1);
v___x_627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_627_, 0, v___y_623_);
lean_ctor_set(v___x_627_, 1, v_val_626_);
return v___x_627_;
}
else
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
lean_dec(v___x_625_);
v___x_628_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__0));
v___x_629_ = lean_string_append(v___x_628_, v___y_624_);
lean_dec_ref(v___y_624_);
v___x_630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
v___x_631_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_631_, 0, v___y_623_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
return v___x_631_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg(){
_start:
{
lean_object* v___x_724_; 
v___x_724_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0));
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___boxed(lean_object* v___dummy_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg();
return v_res_726_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0(void){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg();
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0(lean_object* v_s_728_){
_start:
{
lean_object* v___x_729_; 
v___x_729_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___boxed(lean_object* v_s_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0(v_s_730_);
lean_dec_ref(v_s_730_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__3___redArg(lean_object* v_s_733_){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; uint8_t v___x_736_; 
v___x_734_ = lean_string_utf8_byte_size(v_s_733_);
v___x_735_ = lean_unsigned_to_nat(1u);
v___x_736_ = lean_nat_dec_le(v___x_735_, v___x_734_);
if (v___x_736_ == 0)
{
lean_object* v___x_737_; 
lean_dec_ref(v_s_733_);
v___x_737_ = lean_box(0);
return v___x_737_;
}
else
{
lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
v___x_738_ = ((lean_object*)(l_String_dropSuffix_x3f___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__3___redArg___closed__0));
v___x_739_ = lean_unsigned_to_nat(0u);
v___x_740_ = lean_nat_sub(v___x_734_, v___x_735_);
v___x_741_ = lean_string_memcmp(v_s_733_, v___x_738_, v___x_740_, v___x_739_, v___x_735_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; 
lean_dec(v___x_740_);
lean_dec_ref(v_s_733_);
v___x_742_ = lean_box(0);
return v___x_742_;
}
else
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
lean_inc_ref(v_s_733_);
v___x_743_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_743_, 0, v_s_733_);
lean_ctor_set(v___x_743_, 1, v___x_739_);
lean_ctor_set(v___x_743_, 2, v___x_734_);
v___x_744_ = l_String_Slice_pos_x21(v___x_743_, v___x_740_);
lean_dec(v___x_740_);
lean_dec_ref_known(v___x_743_, 3);
v___x_745_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_745_, 0, v_s_733_);
lean_ctor_set(v___x_745_, 1, v___x_739_);
lean_ctor_set(v___x_745_, 2, v___x_744_);
v___x_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
return v___x_746_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__3(lean_object* v_s_747_, lean_object* v_pat_748_){
_start:
{
lean_object* v___x_749_; 
v___x_749_ = l_String_dropSuffix_x3f___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__3___redArg(v_s_747_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__3___boxed(lean_object* v_s_750_, lean_object* v_pat_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l_String_dropSuffix_x3f___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__3(v_s_750_, v_pat_751_);
lean_dec_ref(v_pat_751_);
return v_res_752_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0(uint8_t v___y_753_){
_start:
{
uint8_t v___x_773_; uint8_t v___x_774_; 
v___x_773_ = 48;
v___x_774_ = lean_uint8_dec_le(v___x_773_, v___y_753_);
if (v___x_774_ == 0)
{
goto v___jp_768_;
}
else
{
uint8_t v___x_775_; uint8_t v___x_776_; 
v___x_775_ = 57;
v___x_776_ = lean_uint8_dec_le(v___y_753_, v___x_775_);
if (v___x_776_ == 0)
{
goto v___jp_768_;
}
else
{
return v___x_776_;
}
}
v___jp_754_:
{
uint8_t v___x_755_; uint8_t v___x_756_; 
v___x_755_ = 45;
v___x_756_ = lean_uint8_dec_eq(v___y_753_, v___x_755_);
if (v___x_756_ == 0)
{
uint8_t v___x_757_; uint8_t v___x_758_; 
v___x_757_ = 46;
v___x_758_ = lean_uint8_dec_eq(v___y_753_, v___x_757_);
if (v___x_758_ == 0)
{
uint8_t v___x_759_; uint8_t v___x_760_; 
v___x_759_ = 95;
v___x_760_ = lean_uint8_dec_eq(v___y_753_, v___x_759_);
if (v___x_760_ == 0)
{
uint8_t v___x_761_; uint8_t v___x_762_; 
v___x_761_ = 126;
v___x_762_ = lean_uint8_dec_eq(v___y_753_, v___x_761_);
return v___x_762_;
}
else
{
return v___x_760_;
}
}
else
{
return v___x_758_;
}
}
else
{
return v___x_756_;
}
}
v___jp_763_:
{
uint8_t v___x_764_; uint8_t v___x_765_; 
v___x_764_ = 65;
v___x_765_ = lean_uint8_dec_le(v___x_764_, v___y_753_);
if (v___x_765_ == 0)
{
goto v___jp_754_;
}
else
{
uint8_t v___x_766_; uint8_t v___x_767_; 
v___x_766_ = 90;
v___x_767_ = lean_uint8_dec_le(v___y_753_, v___x_766_);
if (v___x_767_ == 0)
{
goto v___jp_754_;
}
else
{
return v___x_767_;
}
}
}
v___jp_768_:
{
uint8_t v___x_769_; uint8_t v___x_770_; 
v___x_769_ = 97;
v___x_770_ = lean_uint8_dec_le(v___x_769_, v___y_753_);
if (v___x_770_ == 0)
{
goto v___jp_763_;
}
else
{
uint8_t v___x_771_; uint8_t v___x_772_; 
v___x_771_ = 122;
v___x_772_ = lean_uint8_dec_le(v___y_753_, v___x_771_);
if (v___x_772_ == 0)
{
goto v___jp_763_;
}
else
{
return v___x_772_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0___boxed(lean_object* v___y_777_){
_start:
{
uint8_t v___y_11674__boxed_778_; uint8_t v_res_779_; lean_object* v_r_780_; 
v___y_11674__boxed_778_ = lean_unbox(v___y_777_);
v_res_779_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__0(v___y_11674__boxed_778_);
v_r_780_ = lean_box(v_res_779_);
return v_r_780_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__1(uint8_t v___x_781_, uint8_t v_x_782_){
_start:
{
uint8_t v___x_804_; uint8_t v___x_805_; 
v___x_804_ = 48;
v___x_805_ = lean_uint8_dec_le(v___x_804_, v_x_782_);
if (v___x_805_ == 0)
{
goto v___jp_799_;
}
else
{
uint8_t v___x_806_; uint8_t v___x_807_; 
v___x_806_ = 57;
v___x_807_ = lean_uint8_dec_le(v_x_782_, v___x_806_);
if (v___x_807_ == 0)
{
goto v___jp_799_;
}
else
{
return v___x_781_;
}
}
v___jp_783_:
{
uint8_t v___x_784_; uint8_t v___x_785_; 
v___x_784_ = 45;
v___x_785_ = lean_uint8_dec_eq(v_x_782_, v___x_784_);
if (v___x_785_ == 0)
{
uint8_t v___x_786_; uint8_t v___x_787_; 
v___x_786_ = 46;
v___x_787_ = lean_uint8_dec_eq(v_x_782_, v___x_786_);
if (v___x_787_ == 0)
{
uint8_t v___x_788_; uint8_t v___x_789_; 
v___x_788_ = 95;
v___x_789_ = lean_uint8_dec_eq(v_x_782_, v___x_788_);
if (v___x_789_ == 0)
{
uint8_t v___x_790_; uint8_t v___x_791_; 
v___x_790_ = 126;
v___x_791_ = lean_uint8_dec_eq(v_x_782_, v___x_790_);
if (v___x_791_ == 0)
{
uint8_t v___x_792_; uint8_t v___x_793_; 
v___x_792_ = 37;
v___x_793_ = lean_uint8_dec_eq(v_x_782_, v___x_792_);
return v___x_793_;
}
else
{
return v___x_781_;
}
}
else
{
return v___x_781_;
}
}
else
{
return v___x_781_;
}
}
else
{
return v___x_781_;
}
}
v___jp_794_:
{
uint8_t v___x_795_; uint8_t v___x_796_; 
v___x_795_ = 65;
v___x_796_ = lean_uint8_dec_le(v___x_795_, v_x_782_);
if (v___x_796_ == 0)
{
goto v___jp_783_;
}
else
{
uint8_t v___x_797_; uint8_t v___x_798_; 
v___x_797_ = 90;
v___x_798_ = lean_uint8_dec_le(v_x_782_, v___x_797_);
if (v___x_798_ == 0)
{
goto v___jp_783_;
}
else
{
return v___x_781_;
}
}
}
v___jp_799_:
{
uint8_t v___x_800_; uint8_t v___x_801_; 
v___x_800_ = 97;
v___x_801_ = lean_uint8_dec_le(v___x_800_, v_x_782_);
if (v___x_801_ == 0)
{
goto v___jp_794_;
}
else
{
uint8_t v___x_802_; uint8_t v___x_803_; 
v___x_802_ = 122;
v___x_803_ = lean_uint8_dec_le(v_x_782_, v___x_802_);
if (v___x_803_ == 0)
{
goto v___jp_794_;
}
else
{
return v___x_781_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__1___boxed(lean_object* v___x_808_, lean_object* v_x_809_){
_start:
{
uint8_t v___x_11723__boxed_810_; uint8_t v_x_boxed_811_; uint8_t v_res_812_; lean_object* v_r_813_; 
v___x_11723__boxed_810_ = lean_unbox(v___x_808_);
v_x_boxed_811_ = lean_unbox(v_x_809_);
v_res_812_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___lam__1(v___x_11723__boxed_810_, v_x_boxed_811_);
v_r_813_ = lean_box(v_res_812_);
return v_r_813_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(lean_object* v_fst_814_, lean_object* v___y_815_, lean_object* v___x_816_, lean_object* v_a_817_, uint8_t v_b_818_){
_start:
{
if (lean_obj_tag(v_a_817_) == 0)
{
lean_object* v_currPos_819_; lean_object* v_searcher_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_835_; 
v_currPos_819_ = lean_ctor_get(v_a_817_, 0);
v_searcher_820_ = lean_ctor_get(v_a_817_, 1);
v_isSharedCheck_835_ = !lean_is_exclusive(v_a_817_);
if (v_isSharedCheck_835_ == 0)
{
v___x_822_ = v_a_817_;
v_isShared_823_ = v_isSharedCheck_835_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_searcher_820_);
lean_inc(v_currPos_819_);
lean_dec(v_a_817_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_835_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_824_; uint8_t v___x_825_; uint8_t v_decide_826_; 
v___x_824_ = lean_unsigned_to_nat(0u);
v___x_825_ = lean_nat_dec_eq(v_fst_814_, v___x_824_);
v_decide_826_ = lean_nat_dec_eq(v_searcher_820_, v___x_816_);
if (v_decide_826_ == 0)
{
uint32_t v___x_827_; uint32_t v___x_828_; uint8_t v___x_829_; 
v___x_827_ = 46;
v___x_828_ = lean_string_utf8_get_fast(v___y_815_, v_searcher_820_);
v___x_829_ = lean_uint32_dec_eq(v___x_828_, v___x_827_);
if (v___x_829_ == 0)
{
lean_object* v___x_830_; lean_object* v___x_832_; 
v___x_830_ = lean_string_utf8_next_fast(v___y_815_, v_searcher_820_);
lean_dec(v_searcher_820_);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 1, v___x_830_);
v___x_832_ = v___x_822_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_currPos_819_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v___x_830_);
v___x_832_ = v_reuseFailAlloc_834_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
v_a_817_ = v___x_832_;
goto _start;
}
}
else
{
lean_del_object(v___x_822_);
lean_dec(v_searcher_820_);
lean_dec(v_currPos_819_);
return v___x_825_;
}
}
else
{
lean_del_object(v___x_822_);
lean_dec(v_searcher_820_);
lean_dec(v_currPos_819_);
return v___x_825_;
}
}
}
else
{
return v_b_818_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg___boxed(lean_object* v_fst_836_, lean_object* v___y_837_, lean_object* v___x_838_, lean_object* v_a_839_, lean_object* v_b_840_){
_start:
{
uint8_t v_b_boxed_841_; uint8_t v_res_842_; lean_object* v_r_843_; 
v_b_boxed_841_ = lean_unbox(v_b_840_);
v_res_842_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(v_fst_836_, v___y_837_, v___x_838_, v_a_839_, v_b_boxed_841_);
lean_dec(v___x_838_);
lean_dec_ref(v___y_837_);
lean_dec(v_fst_836_);
v_r_843_ = lean_box(v_res_842_);
return v_r_843_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(uint8_t v___x_844_, lean_object* v___y_845_, lean_object* v___x_846_, lean_object* v___x_847_, lean_object* v_a_848_, uint8_t v_b_849_){
_start:
{
uint8_t v___y_851_; lean_object* v_it_852_; lean_object* v_startInclusive_853_; lean_object* v_endExclusive_854_; uint8_t v___y_859_; 
if (v___x_844_ == 0)
{
uint8_t v___x_885_; 
v___x_885_ = 1;
v___y_859_ = v___x_885_;
goto v___jp_858_;
}
else
{
uint8_t v___x_886_; 
v___x_886_ = 0;
v___y_859_ = v___x_886_;
goto v___jp_858_;
}
v___jp_850_:
{
lean_object* v___x_855_; uint8_t v___x_856_; 
v___x_855_ = lean_string_utf8_extract_fast(v___y_845_, v_startInclusive_853_, v_endExclusive_854_);
lean_dec(v_endExclusive_854_);
lean_dec(v_startInclusive_853_);
v___x_856_ = l_Std_Http_URI_isValidDomainLabel(v___x_855_);
if (v___x_856_ == 0)
{
lean_dec(v_it_852_);
lean_dec(v___x_847_);
return v___x_856_;
}
else
{
v_a_848_ = v_it_852_;
v_b_849_ = v___y_851_;
goto _start;
}
}
v___jp_858_:
{
if (lean_obj_tag(v_a_848_) == 0)
{
lean_object* v_currPos_860_; lean_object* v_searcher_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_884_; 
v_currPos_860_ = lean_ctor_get(v_a_848_, 0);
v_searcher_861_ = lean_ctor_get(v_a_848_, 1);
v_isSharedCheck_884_ = !lean_is_exclusive(v_a_848_);
if (v_isSharedCheck_884_ == 0)
{
v___x_863_ = v_a_848_;
v_isShared_864_ = v_isSharedCheck_884_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_searcher_861_);
lean_inc(v_currPos_860_);
lean_dec(v_a_848_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_884_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
uint8_t v_decide_865_; 
v_decide_865_ = lean_nat_dec_eq(v_searcher_861_, v___x_847_);
if (v_decide_865_ == 0)
{
uint32_t v___x_866_; uint32_t v___x_867_; uint8_t v___x_868_; 
v___x_866_ = 46;
v___x_867_ = lean_string_utf8_get_fast(v___y_845_, v_searcher_861_);
v___x_868_ = lean_uint32_dec_eq(v___x_867_, v___x_866_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; lean_object* v___x_871_; 
v___x_869_ = lean_string_utf8_next_fast(v___y_845_, v_searcher_861_);
lean_dec(v_searcher_861_);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 1, v___x_869_);
v___x_871_ = v___x_863_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_currPos_860_);
lean_ctor_set(v_reuseFailAlloc_873_, 1, v___x_869_);
v___x_871_ = v_reuseFailAlloc_873_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
v_a_848_ = v___x_871_;
goto _start;
}
}
else
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v_slice_877_; lean_object* v_nextIt_879_; 
v___x_874_ = lean_string_utf8_next_fast(v___y_845_, v_searcher_861_);
v___x_875_ = lean_nat_sub(v___x_874_, v_searcher_861_);
v___x_876_ = lean_nat_add(v_searcher_861_, v___x_875_);
lean_dec(v___x_875_);
v_slice_877_ = l_String_Slice_subslice_x21(v___x_846_, v_currPos_860_, v_searcher_861_);
lean_inc(v___x_876_);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 1, v___x_876_);
lean_ctor_set(v___x_863_, 0, v___x_876_);
v_nextIt_879_ = v___x_863_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v___x_876_);
lean_ctor_set(v_reuseFailAlloc_882_, 1, v___x_876_);
v_nextIt_879_ = v_reuseFailAlloc_882_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
lean_object* v_startInclusive_880_; lean_object* v_endExclusive_881_; 
v_startInclusive_880_ = lean_ctor_get(v_slice_877_, 0);
lean_inc(v_startInclusive_880_);
v_endExclusive_881_ = lean_ctor_get(v_slice_877_, 1);
lean_inc(v_endExclusive_881_);
lean_dec_ref(v_slice_877_);
v___y_851_ = v___y_859_;
v_it_852_ = v_nextIt_879_;
v_startInclusive_853_ = v_startInclusive_880_;
v_endExclusive_854_ = v_endExclusive_881_;
goto v___jp_850_;
}
}
}
else
{
lean_object* v___x_883_; 
lean_del_object(v___x_863_);
lean_dec(v_searcher_861_);
v___x_883_ = lean_box(1);
lean_inc(v___x_847_);
v___y_851_ = v___y_859_;
v_it_852_ = v___x_883_;
v_startInclusive_853_ = v_currPos_860_;
v_endExclusive_854_ = v___x_847_;
goto v___jp_850_;
}
}
}
else
{
lean_dec(v___x_847_);
return v_b_849_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg___boxed(lean_object* v___x_887_, lean_object* v___y_888_, lean_object* v___x_889_, lean_object* v___x_890_, lean_object* v_a_891_, lean_object* v_b_892_){
_start:
{
uint8_t v___x_11819__boxed_893_; uint8_t v_b_boxed_894_; uint8_t v_res_895_; lean_object* v_r_896_; 
v___x_11819__boxed_893_ = lean_unbox(v___x_887_);
v_b_boxed_894_ = lean_unbox(v_b_892_);
v_res_895_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(v___x_11819__boxed_893_, v___y_888_, v___x_889_, v___x_890_, v_a_891_, v_b_boxed_894_);
lean_dec_ref(v___x_889_);
lean_dec_ref(v___y_888_);
v_r_896_ = lean_box(v_res_895_);
return v_r_896_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(lean_object* v_config_905_, lean_object* v_a_906_){
_start:
{
lean_object* v___y_908_; lean_object* v___y_912_; lean_object* v___y_913_; lean_object* v___y_919_; lean_object* v___y_920_; lean_object* v___y_921_; lean_object* v___y_922_; uint8_t v___y_923_; uint8_t v___y_924_; lean_object* v___y_925_; lean_object* v___y_939_; lean_object* v___y_940_; lean_object* v___y_941_; uint8_t v___y_942_; lean_object* v___y_943_; lean_object* v___y_944_; lean_object* v___y_945_; lean_object* v_array_956_; lean_object* v_idx_957_; lean_object* v___f_958_; lean_object* v___y_960_; lean_object* v___y_961_; lean_object* v___y_962_; uint8_t v___y_963_; lean_object* v___y_964_; lean_object* v_lower_965_; lean_object* v_upper_966_; lean_object* v___y_991_; lean_object* v___y_992_; lean_object* v___y_993_; lean_object* v___y_994_; uint8_t v___y_995_; lean_object* v___y_996_; lean_object* v___y_997_; lean_object* v___y_998_; lean_object* v_pos_1001_; lean_object* v___x_1025_; uint8_t v___x_1026_; 
v_array_956_ = lean_ctor_get(v_a_906_, 0);
v_idx_957_ = lean_ctor_get(v_a_906_, 1);
v___f_958_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__3));
v___x_1025_ = lean_byte_array_size(v_array_956_);
v___x_1026_ = lean_nat_dec_lt(v_idx_957_, v___x_1025_);
if (v___x_1026_ == 0)
{
v_pos_1001_ = v_a_906_;
goto v___jp_1000_;
}
else
{
uint8_t v___x_1027_; uint8_t v___x_1028_; uint8_t v___x_1029_; 
v___x_1027_ = lean_byte_array_fget(v_array_956_, v_idx_957_);
v___x_1028_ = 91;
v___x_1029_ = lean_uint8_dec_eq(v___x_1027_, v___x_1028_);
if (v___x_1029_ == 0)
{
v_pos_1001_ = v_a_906_;
goto v___jp_1000_;
}
else
{
lean_object* v___x_1030_; 
v___x_1030_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6(v_a_906_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v_pos_1031_; lean_object* v_res_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1040_; 
v_pos_1031_ = lean_ctor_get(v___x_1030_, 0);
v_res_1032_ = lean_ctor_get(v___x_1030_, 1);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1034_ = v___x_1030_;
v_isShared_1035_ = v_isSharedCheck_1040_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_res_1032_);
lean_inc(v_pos_1031_);
lean_dec(v___x_1030_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1040_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1036_; lean_object* v___x_1038_; 
v___x_1036_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1036_, 0, v_res_1032_);
if (v_isShared_1035_ == 0)
{
lean_ctor_set(v___x_1034_, 1, v___x_1036_);
v___x_1038_ = v___x_1034_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_pos_1031_);
lean_ctor_set(v_reuseFailAlloc_1039_, 1, v___x_1036_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
else
{
lean_object* v_pos_1041_; lean_object* v_err_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1049_; 
v_pos_1041_ = lean_ctor_get(v___x_1030_, 0);
v_err_1042_ = lean_ctor_get(v___x_1030_, 1);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1044_ = v___x_1030_;
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_err_1042_);
lean_inc(v_pos_1041_);
lean_dec(v___x_1030_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1047_; 
if (v_isShared_1045_ == 0)
{
v___x_1047_ = v___x_1044_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_pos_1041_);
lean_ctor_set(v_reuseFailAlloc_1048_, 1, v_err_1042_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
}
v___jp_907_:
{
lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_909_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__1));
v___x_910_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_910_, 0, v___y_908_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
return v___x_910_;
}
v___jp_911_:
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_914_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__2));
v___x_915_ = lean_string_append(v___x_914_, v___y_913_);
lean_dec_ref(v___y_913_);
v___x_916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_916_, 0, v___x_915_);
v___x_917_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_917_, 0, v___y_912_);
lean_ctor_set(v___x_917_, 1, v___x_916_);
return v___x_917_;
}
v___jp_918_:
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; uint8_t v___x_929_; 
v___x_926_ = lean_string_utf8_byte_size(v___y_925_);
lean_inc(v___y_919_);
lean_inc_ref(v___y_925_);
v___x_927_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_927_, 0, v___y_925_);
lean_ctor_set(v___x_927_, 1, v___y_919_);
lean_ctor_set(v___x_927_, 2, v___x_926_);
v___x_928_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0);
v___x_929_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(v___y_924_, v___y_925_, v___x_927_, v___x_926_, v___x_928_, v___y_923_);
lean_dec_ref_known(v___x_927_, 3);
lean_dec_ref(v___y_925_);
if (v___x_929_ == 0)
{
lean_dec_ref(v___y_920_);
lean_dec(v___y_919_);
v___y_912_ = v___y_921_;
v___y_913_ = v___y_922_;
goto v___jp_911_;
}
else
{
uint8_t v___x_930_; 
lean_inc_ref(v___y_920_);
v___x_930_ = l_Std_Http_URI_endsInNumber(v___y_920_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; lean_object* v___x_932_; uint8_t v___x_933_; 
v___x_931_ = lean_string_length(v___y_920_);
v___x_932_ = lean_unsigned_to_nat(255u);
v___x_933_ = lean_nat_dec_le(v___x_931_, v___x_932_);
if (v___x_933_ == 0)
{
lean_dec_ref(v___y_920_);
lean_dec(v___y_919_);
v___y_912_ = v___y_921_;
v___y_913_ = v___y_922_;
goto v___jp_911_;
}
else
{
lean_object* v___x_934_; uint8_t v___x_935_; 
v___x_934_ = lean_string_utf8_byte_size(v___y_920_);
v___x_935_ = lean_nat_dec_eq(v___x_934_, v___y_919_);
lean_dec(v___y_919_);
if (v___x_935_ == 0)
{
lean_object* v___x_936_; lean_object* v___x_937_; 
lean_dec_ref(v___y_922_);
v___x_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_936_, 0, v___y_920_);
v___x_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_937_, 0, v___y_921_);
lean_ctor_set(v___x_937_, 1, v___x_936_);
return v___x_937_;
}
else
{
lean_dec_ref(v___y_920_);
v___y_912_ = v___y_921_;
v___y_913_ = v___y_922_;
goto v___jp_911_;
}
}
}
else
{
lean_dec_ref(v___y_920_);
lean_dec(v___y_919_);
v___y_912_ = v___y_921_;
v___y_913_ = v___y_922_;
goto v___jp_911_;
}
}
}
v___jp_938_:
{
lean_object* v___x_946_; lean_object* v___x_947_; uint8_t v___x_948_; 
v___x_946_ = lean_string_utf8_byte_size(v___y_945_);
v___x_947_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___closed__0);
v___x_948_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(v___y_939_, v___y_945_, v___x_946_, v___x_947_, v___y_942_);
lean_dec_ref(v___y_945_);
lean_dec(v___y_939_);
if (v___x_948_ == 0)
{
uint8_t v___x_949_; lean_object* v___x_950_; 
v___x_949_ = 1;
lean_inc_ref(v___y_941_);
v___x_950_ = l_String_dropSuffix_x3f___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__3___redArg(v___y_941_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_inc_ref(v___y_941_);
v___y_919_ = v___y_940_;
v___y_920_ = v___y_941_;
v___y_921_ = v___y_943_;
v___y_922_ = v___y_944_;
v___y_923_ = v___x_949_;
v___y_924_ = v___x_948_;
v___y_925_ = v___y_941_;
goto v___jp_918_;
}
else
{
lean_object* v_val_951_; lean_object* v_str_952_; lean_object* v_endExclusive_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v_val_951_ = lean_ctor_get(v___x_950_, 0);
lean_inc(v_val_951_);
lean_dec_ref_known(v___x_950_, 1);
v_str_952_ = lean_ctor_get(v_val_951_, 0);
lean_inc_ref(v_str_952_);
v_endExclusive_953_ = lean_ctor_get(v_val_951_, 2);
lean_inc(v_endExclusive_953_);
lean_dec(v_val_951_);
v___x_954_ = lean_unsigned_to_nat(0u);
v___x_955_ = lean_string_utf8_extract_fast(v_str_952_, v___x_954_, v_endExclusive_953_);
lean_dec(v_endExclusive_953_);
lean_dec_ref(v_str_952_);
v___y_919_ = v___y_940_;
v___y_920_ = v___y_941_;
v___y_921_ = v___y_943_;
v___y_922_ = v___y_944_;
v___y_923_ = v___x_949_;
v___y_924_ = v___x_948_;
v___y_925_ = v___x_955_;
goto v___jp_918_;
}
}
else
{
lean_dec_ref(v___y_941_);
lean_dec(v___y_940_);
v___y_912_ = v___y_943_;
v___y_913_ = v___y_944_;
goto v___jp_911_;
}
}
v___jp_959_:
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_967_ = l_ByteArray_toByteSlice(v___y_960_, v_lower_965_, v_upper_966_);
v___x_968_ = l_ByteSlice_toByteArray(v___x_967_);
v___x_969_ = l_Std_Http_URI_EncodedString_ofByteArray_x3f(v___f_958_, v___x_968_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_dec(v___y_962_);
lean_dec(v___y_961_);
v___y_908_ = v___y_964_;
goto v___jp_907_;
}
else
{
lean_object* v_val_970_; lean_object* v___x_971_; 
v_val_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_val_970_);
lean_dec_ref_known(v___x_969_, 1);
v___x_971_ = l_Std_Http_URI_EncodedString_decode___redArg(v_val_970_);
lean_dec(v_val_970_);
if (lean_obj_tag(v___x_971_) == 1)
{
lean_object* v_val_972_; lean_object* v___x_973_; 
v_val_972_ = lean_ctor_get(v___x_971_, 0);
lean_inc(v_val_972_);
lean_dec_ref_known(v___x_971_, 1);
v___x_973_ = lean_uv_pton_v4(v_val_972_);
if (lean_obj_tag(v___x_973_) == 1)
{
lean_object* v_val_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_982_; 
lean_dec(v_val_972_);
lean_dec(v___y_962_);
lean_dec(v___y_961_);
v_val_974_ = lean_ctor_get(v___x_973_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_982_ == 0)
{
v___x_976_ = v___x_973_;
v_isShared_977_ = v_isSharedCheck_982_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_val_974_);
lean_dec(v___x_973_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_982_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_979_; 
if (v_isShared_977_ == 0)
{
v___x_979_ = v___x_976_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_val_974_);
v___x_979_ = v_reuseFailAlloc_981_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
lean_object* v___x_980_; 
v___x_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_980_, 0, v___y_964_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
return v___x_980_;
}
}
}
else
{
lean_object* v___x_983_; lean_object* v___x_984_; 
lean_dec(v___x_973_);
lean_inc(v___y_962_);
lean_inc(v_val_972_);
v___x_983_ = l_String_mapAux___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme_spec__0(v_val_972_, v___y_962_);
lean_inc_ref(v___x_983_);
v___x_984_ = l_String_dropSuffix_x3f___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__3___redArg(v___x_983_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_inc_ref(v___x_983_);
v___y_939_ = v___y_961_;
v___y_940_ = v___y_962_;
v___y_941_ = v___x_983_;
v___y_942_ = v___y_963_;
v___y_943_ = v___y_964_;
v___y_944_ = v_val_972_;
v___y_945_ = v___x_983_;
goto v___jp_938_;
}
else
{
lean_object* v_val_985_; lean_object* v_str_986_; lean_object* v_endExclusive_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v_val_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_val_985_);
lean_dec_ref_known(v___x_984_, 1);
v_str_986_ = lean_ctor_get(v_val_985_, 0);
lean_inc_ref(v_str_986_);
v_endExclusive_987_ = lean_ctor_get(v_val_985_, 2);
lean_inc(v_endExclusive_987_);
lean_dec(v_val_985_);
v___x_988_ = lean_unsigned_to_nat(0u);
v___x_989_ = lean_string_utf8_extract_fast(v_str_986_, v___x_988_, v_endExclusive_987_);
lean_dec(v_endExclusive_987_);
lean_dec_ref(v_str_986_);
v___y_939_ = v___y_961_;
v___y_940_ = v___y_962_;
v___y_941_ = v___x_983_;
v___y_942_ = v___y_963_;
v___y_943_ = v___y_964_;
v___y_944_ = v_val_972_;
v___y_945_ = v___x_989_;
goto v___jp_938_;
}
}
}
else
{
lean_dec(v___x_971_);
lean_dec(v___y_962_);
lean_dec(v___y_961_);
v___y_908_ = v___y_964_;
goto v___jp_907_;
}
}
}
v___jp_990_:
{
uint8_t v___x_999_; 
v___x_999_ = lean_nat_dec_le(v___y_993_, v___y_996_);
if (v___x_999_ == 0)
{
lean_dec(v___y_993_);
v___y_960_ = v___y_991_;
v___y_961_ = v___y_992_;
v___y_962_ = v___y_994_;
v___y_963_ = v___y_995_;
v___y_964_ = v___y_997_;
v_lower_965_ = v___y_998_;
v_upper_966_ = v___y_996_;
goto v___jp_959_;
}
else
{
lean_dec(v___y_996_);
v___y_960_ = v___y_991_;
v___y_961_ = v___y_992_;
v___y_962_ = v___y_994_;
v___y_963_ = v___y_995_;
v___y_964_ = v___y_997_;
v_lower_965_ = v___y_998_;
v_upper_966_ = v___y_993_;
goto v___jp_959_;
}
}
v___jp_1000_:
{
lean_object* v_maxHostLength_1002_; uint8_t v___x_1003_; lean_object* v___f_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v_snd_1007_; lean_object* v_fst_1008_; lean_object* v_fst_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1023_; 
v_maxHostLength_1002_ = lean_ctor_get(v_config_905_, 1);
v___x_1003_ = 1;
v___f_1004_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___closed__4));
v___x_1005_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_pos_1001_);
v___x_1006_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1004_, v_maxHostLength_1002_, v___x_1005_, v_pos_1001_);
v_snd_1007_ = lean_ctor_get(v___x_1006_, 1);
lean_inc(v_snd_1007_);
v_fst_1008_ = lean_ctor_get(v___x_1006_, 0);
lean_inc(v_fst_1008_);
lean_dec_ref(v___x_1006_);
v_fst_1009_ = lean_ctor_get(v_snd_1007_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v_snd_1007_);
if (v_isSharedCheck_1023_ == 0)
{
lean_object* v_unused_1024_; 
v_unused_1024_ = lean_ctor_get(v_snd_1007_, 1);
lean_dec(v_unused_1024_);
v___x_1011_ = v_snd_1007_;
v_isShared_1012_ = v_isSharedCheck_1023_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_fst_1009_);
lean_dec(v_snd_1007_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1023_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
uint8_t v___x_1013_; 
v___x_1013_ = lean_nat_dec_eq(v_fst_1008_, v___x_1005_);
if (v___x_1013_ == 0)
{
lean_object* v_array_1014_; lean_object* v_idx_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; uint8_t v___x_1018_; 
lean_del_object(v___x_1011_);
v_array_1014_ = lean_ctor_get(v_pos_1001_, 0);
lean_inc_ref(v_array_1014_);
v_idx_1015_ = lean_ctor_get(v_pos_1001_, 1);
lean_inc(v_idx_1015_);
lean_dec_ref(v_pos_1001_);
v___x_1016_ = lean_nat_add(v_idx_1015_, v_fst_1008_);
v___x_1017_ = lean_byte_array_size(v_array_1014_);
v___x_1018_ = lean_nat_dec_le(v_idx_1015_, v___x_1005_);
if (v___x_1018_ == 0)
{
v___y_991_ = v_array_1014_;
v___y_992_ = v_fst_1008_;
v___y_993_ = v___x_1016_;
v___y_994_ = v___x_1005_;
v___y_995_ = v___x_1003_;
v___y_996_ = v___x_1017_;
v___y_997_ = v_fst_1009_;
v___y_998_ = v_idx_1015_;
goto v___jp_990_;
}
else
{
lean_dec(v_idx_1015_);
v___y_991_ = v_array_1014_;
v___y_992_ = v_fst_1008_;
v___y_993_ = v___x_1016_;
v___y_994_ = v___x_1005_;
v___y_995_ = v___x_1003_;
v___y_996_ = v___x_1017_;
v___y_997_ = v_fst_1009_;
v___y_998_ = v___x_1005_;
goto v___jp_990_;
}
}
else
{
lean_object* v___x_1019_; lean_object* v___x_1021_; 
lean_dec(v_fst_1009_);
lean_dec(v_fst_1008_);
v___x_1019_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseIPv6___closed__7));
if (v_isShared_1012_ == 0)
{
lean_ctor_set_tag(v___x_1011_, 1);
lean_ctor_set(v___x_1011_, 1, v___x_1019_);
lean_ctor_set(v___x_1011_, 0, v_pos_1001_);
v___x_1021_ = v___x_1011_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_pos_1001_);
lean_ctor_set(v_reuseFailAlloc_1022_, 1, v___x_1019_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost___boxed(lean_object* v_config_1050_, lean_object* v_a_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(v_config_1050_, v_a_1051_);
lean_dec_ref(v_config_1050_);
return v_res_1052_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1(lean_object* v_fst_1053_, lean_object* v___y_1054_, lean_object* v___x_1055_, lean_object* v___x_1056_, lean_object* v_inst_1057_, lean_object* v_R_1058_, lean_object* v_a_1059_, uint8_t v_b_1060_, lean_object* v_c_1061_){
_start:
{
uint8_t v___x_1062_; 
v___x_1062_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___redArg(v_fst_1053_, v___y_1054_, v___x_1056_, v_a_1059_, v_b_1060_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1___boxed(lean_object* v_fst_1063_, lean_object* v___y_1064_, lean_object* v___x_1065_, lean_object* v___x_1066_, lean_object* v_inst_1067_, lean_object* v_R_1068_, lean_object* v_a_1069_, lean_object* v_b_1070_, lean_object* v_c_1071_){
_start:
{
uint8_t v_b_boxed_1072_; uint8_t v_res_1073_; lean_object* v_r_1074_; 
v_b_boxed_1072_ = lean_unbox(v_b_1070_);
v_res_1073_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__1(v_fst_1063_, v___y_1064_, v___x_1065_, v___x_1066_, v_inst_1067_, v_R_1068_, v_a_1069_, v_b_boxed_1072_, v_c_1071_);
lean_dec(v___x_1066_);
lean_dec_ref(v___x_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v_fst_1063_);
v_r_1074_ = lean_box(v_res_1073_);
return v_r_1074_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2(uint8_t v___x_1075_, lean_object* v___y_1076_, lean_object* v___x_1077_, lean_object* v___x_1078_, lean_object* v_inst_1079_, lean_object* v_R_1080_, lean_object* v_a_1081_, uint8_t v_b_1082_, lean_object* v_c_1083_){
_start:
{
uint8_t v___x_1084_; 
v___x_1084_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___redArg(v___x_1075_, v___y_1076_, v___x_1077_, v___x_1078_, v_a_1081_, v_b_1082_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2___boxed(lean_object* v___x_1085_, lean_object* v___y_1086_, lean_object* v___x_1087_, lean_object* v___x_1088_, lean_object* v_inst_1089_, lean_object* v_R_1090_, lean_object* v_a_1091_, lean_object* v_b_1092_, lean_object* v_c_1093_){
_start:
{
uint8_t v___x_12212__boxed_1094_; uint8_t v_b_boxed_1095_; uint8_t v_res_1096_; lean_object* v_r_1097_; 
v___x_12212__boxed_1094_ = lean_unbox(v___x_1085_);
v_b_boxed_1095_ = lean_unbox(v_b_1092_);
v_res_1096_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__2(v___x_12212__boxed_1094_, v___y_1086_, v___x_1087_, v___x_1088_, v_inst_1089_, v_R_1090_, v_a_1091_, v_b_boxed_1095_, v_c_1093_);
lean_dec_ref(v___x_1087_);
lean_dec_ref(v___y_1086_);
v_r_1097_ = lean_box(v_res_1096_);
return v_r_1097_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(lean_object* v_config_1107_, lean_object* v_a_1108_){
_start:
{
lean_object* v___y_1110_; lean_object* v___y_1111_; lean_object* v_port_1112_; lean_object* v___y_1113_; lean_object* v___y_1117_; lean_object* v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1123_; lean_object* v___y_1126_; lean_object* v___y_1127_; uint8_t v_val_1128_; lean_object* v___y_1129_; lean_object* v___y_1137_; uint8_t v___y_1138_; lean_object* v___y_1139_; lean_object* v_pos_1140_; lean_object* v_array_1141_; lean_object* v_idx_1142_; lean_object* v_res_1143_; lean_object* v___y_1148_; lean_object* v___y_1149_; uint8_t v___y_1150_; lean_object* v___y_1151_; lean_object* v___y_1152_; lean_object* v___y_1153_; lean_object* v___y_1156_; lean_object* v___y_1157_; lean_object* v_pos_1158_; lean_object* v_pos_1161_; lean_object* v_res_1162_; lean_object* v_err_1227_; lean_object* v___x_1232_; 
lean_inc_ref(v_a_1108_);
v___x_1232_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseUserInfo(v_config_1107_, v_a_1108_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_object* v_pos_1233_; lean_object* v_res_1234_; lean_object* v_array_1235_; lean_object* v_idx_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1253_; 
v_pos_1233_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_pos_1233_);
v_res_1234_ = lean_ctor_get(v___x_1232_, 1);
lean_inc(v_res_1234_);
lean_dec_ref_known(v___x_1232_, 2);
v_array_1235_ = lean_ctor_get(v_pos_1233_, 0);
v_idx_1236_ = lean_ctor_get(v_pos_1233_, 1);
v_isSharedCheck_1253_ = !lean_is_exclusive(v_pos_1233_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1238_ = v_pos_1233_;
v_isShared_1239_ = v_isSharedCheck_1253_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_idx_1236_);
lean_inc(v_array_1235_);
lean_dec(v_pos_1233_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1253_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___x_1240_; uint8_t v___x_1241_; 
v___x_1240_ = lean_byte_array_size(v_array_1235_);
v___x_1241_ = lean_nat_dec_lt(v_idx_1236_, v___x_1240_);
if (v___x_1241_ == 0)
{
lean_object* v___x_1242_; 
lean_del_object(v___x_1238_);
lean_dec(v_idx_1236_);
lean_dec_ref(v_array_1235_);
lean_dec(v_res_1234_);
v___x_1242_ = lean_box(0);
v_err_1227_ = v___x_1242_;
goto v___jp_1226_;
}
else
{
uint8_t v___x_1243_; uint8_t v_got_1244_; uint8_t v___x_1245_; 
v___x_1243_ = 64;
v_got_1244_ = lean_byte_array_fget(v_array_1235_, v_idx_1236_);
v___x_1245_ = lean_uint8_dec_eq(v_got_1244_, v___x_1243_);
if (v___x_1245_ == 0)
{
lean_object* v___x_1246_; 
lean_del_object(v___x_1238_);
lean_dec(v_idx_1236_);
lean_dec_ref(v_array_1235_);
lean_dec(v_res_1234_);
v___x_1246_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__5));
v_err_1227_ = v___x_1246_;
goto v___jp_1226_;
}
else
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1250_; 
lean_dec_ref(v_a_1108_);
v___x_1247_ = lean_unsigned_to_nat(1u);
v___x_1248_ = lean_nat_add(v_idx_1236_, v___x_1247_);
lean_dec(v_idx_1236_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set(v___x_1238_, 1, v___x_1248_);
v___x_1250_ = v___x_1238_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_array_1235_);
lean_ctor_set(v_reuseFailAlloc_1252_, 1, v___x_1248_);
v___x_1250_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
lean_object* v___x_1251_; 
v___x_1251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1251_, 0, v_res_1234_);
v_pos_1161_ = v___x_1250_;
v_res_1162_ = v___x_1251_;
goto v___jp_1160_;
}
}
}
}
}
else
{
lean_object* v_err_1254_; 
v_err_1254_ = lean_ctor_get(v___x_1232_, 1);
lean_inc(v_err_1254_);
lean_dec_ref_known(v___x_1232_, 2);
v_err_1227_ = v_err_1254_;
goto v___jp_1226_;
}
v___jp_1109_:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1114_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1114_, 0, v___y_1111_);
lean_ctor_set(v___x_1114_, 1, v___y_1110_);
lean_ctor_set(v___x_1114_, 2, v_port_1112_);
v___x_1115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1115_, 0, v___y_1113_);
lean_ctor_set(v___x_1115_, 1, v___x_1114_);
return v___x_1115_;
}
v___jp_1116_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1118_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__1));
v___x_1119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___y_1117_);
lean_ctor_set(v___x_1119_, 1, v___x_1118_);
return v___x_1119_;
}
v___jp_1120_:
{
lean_object* v___x_1124_; 
v___x_1124_ = lean_box(1);
v___y_1110_ = v___y_1122_;
v___y_1111_ = v___y_1123_;
v_port_1112_ = v___x_1124_;
v___y_1113_ = v___y_1121_;
goto v___jp_1109_;
}
v___jp_1125_:
{
uint8_t v___x_1130_; uint8_t v___x_1131_; 
v___x_1130_ = 47;
v___x_1131_ = lean_uint8_dec_eq(v_val_1128_, v___x_1130_);
if (v___x_1131_ == 0)
{
uint8_t v___x_1132_; uint8_t v___x_1133_; 
v___x_1132_ = 63;
v___x_1133_ = lean_uint8_dec_eq(v_val_1128_, v___x_1132_);
if (v___x_1133_ == 0)
{
uint8_t v___x_1134_; uint8_t v___x_1135_; 
v___x_1134_ = 35;
v___x_1135_ = lean_uint8_dec_eq(v_val_1128_, v___x_1134_);
if (v___x_1135_ == 0)
{
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1127_);
v___y_1117_ = v___y_1126_;
goto v___jp_1116_;
}
else
{
v___y_1121_ = v___y_1126_;
v___y_1122_ = v___y_1127_;
v___y_1123_ = v___y_1129_;
goto v___jp_1120_;
}
}
else
{
v___y_1121_ = v___y_1126_;
v___y_1122_ = v___y_1127_;
v___y_1123_ = v___y_1129_;
goto v___jp_1120_;
}
}
else
{
v___y_1121_ = v___y_1126_;
v___y_1122_ = v___y_1127_;
v___y_1123_ = v___y_1129_;
goto v___jp_1120_;
}
}
v___jp_1136_:
{
lean_object* v___x_1144_; uint8_t v___x_1145_; 
v___x_1144_ = lean_byte_array_size(v_array_1141_);
v___x_1145_ = lean_nat_dec_lt(v_idx_1142_, v___x_1144_);
if (v___x_1145_ == 0)
{
lean_dec(v_idx_1142_);
lean_dec_ref(v_array_1141_);
if (v___y_1138_ == 0)
{
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1137_);
v___y_1117_ = v_pos_1140_;
goto v___jp_1116_;
}
else
{
v___y_1121_ = v_pos_1140_;
v___y_1122_ = v___y_1137_;
v___y_1123_ = v___y_1139_;
goto v___jp_1120_;
}
}
else
{
uint8_t v___x_1146_; 
v___x_1146_ = lean_byte_array_fget(v_array_1141_, v_idx_1142_);
lean_dec(v_idx_1142_);
lean_dec_ref(v_array_1141_);
v___y_1126_ = v_pos_1140_;
v___y_1127_ = v___y_1137_;
v_val_1128_ = v___x_1146_;
v___y_1129_ = v___y_1139_;
goto v___jp_1125_;
}
}
v___jp_1147_:
{
lean_object* v___x_1154_; 
v___x_1154_ = lean_box(0);
v___y_1137_ = v___y_1148_;
v___y_1138_ = v___y_1150_;
v___y_1139_ = v___y_1153_;
v_pos_1140_ = v___y_1149_;
v_array_1141_ = v___y_1151_;
v_idx_1142_ = v___y_1152_;
v_res_1143_ = v___x_1154_;
goto v___jp_1136_;
}
v___jp_1155_:
{
lean_object* v___x_1159_; 
v___x_1159_ = lean_box(0);
v___y_1110_ = v___y_1156_;
v___y_1111_ = v___y_1157_;
v_port_1112_ = v___x_1159_;
v___y_1113_ = v_pos_1158_;
goto v___jp_1109_;
}
v___jp_1160_:
{
lean_object* v___x_1163_; 
v___x_1163_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(v_config_1107_, v_pos_1161_);
if (lean_obj_tag(v___x_1163_) == 0)
{
lean_object* v_pos_1164_; lean_object* v_res_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1216_; 
v_pos_1164_ = lean_ctor_get(v___x_1163_, 0);
v_res_1165_ = lean_ctor_get(v___x_1163_, 1);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1163_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1167_ = v___x_1163_;
v_isShared_1168_ = v_isSharedCheck_1216_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_res_1165_);
lean_inc(v_pos_1164_);
lean_dec(v___x_1163_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1216_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v_array_1169_; lean_object* v_idx_1170_; lean_object* v___x_1171_; uint8_t v___x_1172_; 
v_array_1169_ = lean_ctor_get(v_pos_1164_, 0);
v_idx_1170_ = lean_ctor_get(v_pos_1164_, 1);
v___x_1171_ = lean_byte_array_size(v_array_1169_);
v___x_1172_ = lean_nat_dec_lt(v_idx_1170_, v___x_1171_);
if (v___x_1172_ == 0)
{
lean_del_object(v___x_1167_);
v___y_1156_ = v_res_1165_;
v___y_1157_ = v_res_1162_;
v_pos_1158_ = v_pos_1164_;
goto v___jp_1155_;
}
else
{
uint8_t v___x_1173_; uint8_t v___x_1174_; uint8_t v___x_1175_; 
v___x_1173_ = lean_byte_array_fget(v_array_1169_, v_idx_1170_);
v___x_1174_ = 58;
v___x_1175_ = lean_uint8_dec_eq(v___x_1173_, v___x_1174_);
if (v___x_1175_ == 0)
{
lean_del_object(v___x_1167_);
v___y_1156_ = v_res_1165_;
v___y_1157_ = v_res_1162_;
v_pos_1158_ = v_pos_1164_;
goto v___jp_1155_;
}
else
{
if (v___x_1172_ == 0)
{
lean_object* v___x_1176_; lean_object* v___x_1178_; 
lean_dec(v_res_1165_);
lean_dec(v_res_1162_);
v___x_1176_ = lean_box(0);
if (v_isShared_1168_ == 0)
{
lean_ctor_set_tag(v___x_1167_, 1);
lean_ctor_set(v___x_1167_, 1, v___x_1176_);
v___x_1178_ = v___x_1167_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v_pos_1164_);
lean_ctor_set(v_reuseFailAlloc_1179_, 1, v___x_1176_);
v___x_1178_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
return v___x_1178_;
}
}
else
{
if (v___x_1175_ == 0)
{
lean_object* v___x_1180_; lean_object* v___x_1182_; 
lean_dec(v_res_1165_);
lean_dec(v_res_1162_);
v___x_1180_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
if (v_isShared_1168_ == 0)
{
lean_ctor_set_tag(v___x_1167_, 1);
lean_ctor_set(v___x_1167_, 1, v___x_1180_);
v___x_1182_ = v___x_1167_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v_pos_1164_);
lean_ctor_set(v_reuseFailAlloc_1183_, 1, v___x_1180_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
else
{
lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1213_; 
lean_inc(v_idx_1170_);
lean_inc_ref(v_array_1169_);
lean_del_object(v___x_1167_);
v_isSharedCheck_1213_ = !lean_is_exclusive(v_pos_1164_);
if (v_isSharedCheck_1213_ == 0)
{
lean_object* v_unused_1214_; lean_object* v_unused_1215_; 
v_unused_1214_ = lean_ctor_get(v_pos_1164_, 1);
lean_dec(v_unused_1214_);
v_unused_1215_ = lean_ctor_get(v_pos_1164_, 0);
lean_dec(v_unused_1215_);
v___x_1185_ = v_pos_1164_;
v_isShared_1186_ = v_isSharedCheck_1213_;
goto v_resetjp_1184_;
}
else
{
lean_dec(v_pos_1164_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1213_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1190_; 
v___x_1187_ = lean_unsigned_to_nat(1u);
v___x_1188_ = lean_nat_add(v_idx_1170_, v___x_1187_);
lean_dec(v_idx_1170_);
lean_inc(v___x_1188_);
lean_inc_ref(v_array_1169_);
if (v_isShared_1186_ == 0)
{
lean_ctor_set(v___x_1185_, 1, v___x_1188_);
v___x_1190_ = v___x_1185_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_array_1169_);
lean_ctor_set(v_reuseFailAlloc_1212_, 1, v___x_1188_);
v___x_1190_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
uint8_t v___x_1191_; 
v___x_1191_ = lean_nat_dec_lt(v___x_1188_, v___x_1171_);
if (v___x_1191_ == 0)
{
lean_object* v___x_1192_; 
v___x_1192_ = lean_box(0);
v___y_1137_ = v_res_1165_;
v___y_1138_ = v___x_1175_;
v___y_1139_ = v_res_1162_;
v_pos_1140_ = v___x_1190_;
v_array_1141_ = v_array_1169_;
v_idx_1142_ = v___x_1188_;
v_res_1143_ = v___x_1192_;
goto v___jp_1136_;
}
else
{
uint8_t v___x_1193_; uint8_t v___x_1194_; uint8_t v___x_1195_; 
v___x_1193_ = lean_byte_array_fget(v_array_1169_, v___x_1188_);
v___x_1194_ = 48;
v___x_1195_ = lean_uint8_dec_le(v___x_1194_, v___x_1193_);
if (v___x_1195_ == 0)
{
v___y_1148_ = v_res_1165_;
v___y_1149_ = v___x_1190_;
v___y_1150_ = v___x_1175_;
v___y_1151_ = v_array_1169_;
v___y_1152_ = v___x_1188_;
v___y_1153_ = v_res_1162_;
goto v___jp_1147_;
}
else
{
uint8_t v___x_1196_; uint8_t v___x_1197_; 
v___x_1196_ = 57;
v___x_1197_ = lean_uint8_dec_le(v___x_1193_, v___x_1196_);
if (v___x_1197_ == 0)
{
v___y_1148_ = v_res_1165_;
v___y_1149_ = v___x_1190_;
v___y_1150_ = v___x_1175_;
v___y_1151_ = v_array_1169_;
v___y_1152_ = v___x_1188_;
v___y_1153_ = v_res_1162_;
goto v___jp_1147_;
}
else
{
lean_object* v___x_1198_; 
lean_dec(v___x_1188_);
lean_dec_ref(v_array_1169_);
v___x_1198_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(v___x_1190_);
if (lean_obj_tag(v___x_1198_) == 0)
{
lean_object* v_pos_1199_; lean_object* v_res_1200_; lean_object* v___x_1201_; uint16_t v___x_1202_; 
v_pos_1199_ = lean_ctor_get(v___x_1198_, 0);
lean_inc(v_pos_1199_);
v_res_1200_ = lean_ctor_get(v___x_1198_, 1);
lean_inc(v_res_1200_);
lean_dec_ref_known(v___x_1198_, 2);
v___x_1201_ = lean_alloc_ctor(2, 0, 2);
v___x_1202_ = lean_unbox(v_res_1200_);
lean_dec(v_res_1200_);
lean_ctor_set_uint16(v___x_1201_, 0, v___x_1202_);
v___y_1110_ = v_res_1165_;
v___y_1111_ = v_res_1162_;
v_port_1112_ = v___x_1201_;
v___y_1113_ = v_pos_1199_;
goto v___jp_1109_;
}
else
{
lean_object* v_pos_1203_; lean_object* v_err_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1211_; 
lean_dec(v_res_1165_);
lean_dec(v_res_1162_);
v_pos_1203_ = lean_ctor_get(v___x_1198_, 0);
v_err_1204_ = lean_ctor_get(v___x_1198_, 1);
v_isSharedCheck_1211_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1206_ = v___x_1198_;
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_err_1204_);
lean_inc(v_pos_1203_);
lean_dec(v___x_1198_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1209_; 
if (v_isShared_1207_ == 0)
{
v___x_1209_ = v___x_1206_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_pos_1203_);
lean_ctor_set(v_reuseFailAlloc_1210_, 1, v_err_1204_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
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
}
}
}
}
else
{
lean_object* v_pos_1217_; lean_object* v_err_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1225_; 
lean_dec(v_res_1162_);
v_pos_1217_ = lean_ctor_get(v___x_1163_, 0);
v_err_1218_ = lean_ctor_get(v___x_1163_, 1);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1163_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1163_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_err_1218_);
lean_inc(v_pos_1217_);
lean_dec(v___x_1163_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1223_; 
if (v_isShared_1221_ == 0)
{
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_pos_1217_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_err_1218_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
}
v___jp_1226_:
{
lean_object* v_idx_1228_; uint8_t v___x_1229_; 
v_idx_1228_ = lean_ctor_get(v_a_1108_, 1);
v___x_1229_ = lean_nat_dec_eq(v_idx_1228_, v_idx_1228_);
if (v___x_1229_ == 0)
{
lean_object* v___x_1230_; 
v___x_1230_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1230_, 0, v_a_1108_);
lean_ctor_set(v___x_1230_, 1, v_err_1227_);
return v___x_1230_;
}
else
{
lean_object* v___x_1231_; 
lean_dec(v_err_1227_);
v___x_1231_ = lean_box(0);
v_pos_1161_ = v_a_1108_;
v_res_1162_ = v___x_1231_;
goto v___jp_1160_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___boxed(lean_object* v_config_1255_, lean_object* v_a_1256_){
_start:
{
lean_object* v_res_1257_; 
v_res_1257_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(v_config_1255_, v_a_1256_);
lean_dec_ref(v_config_1255_);
return v_res_1257_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0(uint8_t v_c_1258_){
_start:
{
uint8_t v___x_1306_; uint8_t v___x_1307_; 
v___x_1306_ = 48;
v___x_1307_ = lean_uint8_dec_le(v___x_1306_, v_c_1258_);
if (v___x_1307_ == 0)
{
goto v___jp_1301_;
}
else
{
uint8_t v___x_1308_; uint8_t v___x_1309_; 
v___x_1308_ = 57;
v___x_1309_ = lean_uint8_dec_le(v_c_1258_, v___x_1308_);
if (v___x_1309_ == 0)
{
goto v___jp_1301_;
}
else
{
return v___x_1309_;
}
}
v___jp_1259_:
{
uint8_t v___x_1260_; uint8_t v___x_1261_; 
v___x_1260_ = 45;
v___x_1261_ = lean_uint8_dec_eq(v_c_1258_, v___x_1260_);
if (v___x_1261_ == 0)
{
uint8_t v___x_1262_; uint8_t v___x_1263_; 
v___x_1262_ = 46;
v___x_1263_ = lean_uint8_dec_eq(v_c_1258_, v___x_1262_);
if (v___x_1263_ == 0)
{
uint8_t v___x_1264_; uint8_t v___x_1265_; 
v___x_1264_ = 95;
v___x_1265_ = lean_uint8_dec_eq(v_c_1258_, v___x_1264_);
if (v___x_1265_ == 0)
{
uint8_t v___x_1266_; uint8_t v___x_1267_; 
v___x_1266_ = 126;
v___x_1267_ = lean_uint8_dec_eq(v_c_1258_, v___x_1266_);
if (v___x_1267_ == 0)
{
uint8_t v___x_1268_; uint8_t v___x_1269_; 
v___x_1268_ = 33;
v___x_1269_ = lean_uint8_dec_eq(v_c_1258_, v___x_1268_);
if (v___x_1269_ == 0)
{
uint8_t v___x_1270_; uint8_t v___x_1271_; 
v___x_1270_ = 36;
v___x_1271_ = lean_uint8_dec_eq(v_c_1258_, v___x_1270_);
if (v___x_1271_ == 0)
{
uint8_t v___x_1272_; uint8_t v___x_1273_; 
v___x_1272_ = 38;
v___x_1273_ = lean_uint8_dec_eq(v_c_1258_, v___x_1272_);
if (v___x_1273_ == 0)
{
uint8_t v___x_1274_; uint8_t v___x_1275_; 
v___x_1274_ = 39;
v___x_1275_ = lean_uint8_dec_eq(v_c_1258_, v___x_1274_);
if (v___x_1275_ == 0)
{
uint8_t v___x_1276_; uint8_t v___x_1277_; 
v___x_1276_ = 40;
v___x_1277_ = lean_uint8_dec_eq(v_c_1258_, v___x_1276_);
if (v___x_1277_ == 0)
{
uint8_t v___x_1278_; uint8_t v___x_1279_; 
v___x_1278_ = 41;
v___x_1279_ = lean_uint8_dec_eq(v_c_1258_, v___x_1278_);
if (v___x_1279_ == 0)
{
uint8_t v___x_1280_; uint8_t v___x_1281_; 
v___x_1280_ = 42;
v___x_1281_ = lean_uint8_dec_eq(v_c_1258_, v___x_1280_);
if (v___x_1281_ == 0)
{
uint8_t v___x_1282_; uint8_t v___x_1283_; 
v___x_1282_ = 43;
v___x_1283_ = lean_uint8_dec_eq(v_c_1258_, v___x_1282_);
if (v___x_1283_ == 0)
{
uint8_t v___x_1284_; uint8_t v___x_1285_; 
v___x_1284_ = 44;
v___x_1285_ = lean_uint8_dec_eq(v_c_1258_, v___x_1284_);
if (v___x_1285_ == 0)
{
uint8_t v___x_1286_; uint8_t v___x_1287_; 
v___x_1286_ = 59;
v___x_1287_ = lean_uint8_dec_eq(v_c_1258_, v___x_1286_);
if (v___x_1287_ == 0)
{
uint8_t v___x_1288_; uint8_t v___x_1289_; 
v___x_1288_ = 61;
v___x_1289_ = lean_uint8_dec_eq(v_c_1258_, v___x_1288_);
if (v___x_1289_ == 0)
{
uint8_t v___x_1290_; uint8_t v___x_1291_; 
v___x_1290_ = 58;
v___x_1291_ = lean_uint8_dec_eq(v_c_1258_, v___x_1290_);
if (v___x_1291_ == 0)
{
uint8_t v___x_1292_; uint8_t v___x_1293_; 
v___x_1292_ = 64;
v___x_1293_ = lean_uint8_dec_eq(v_c_1258_, v___x_1292_);
if (v___x_1293_ == 0)
{
uint8_t v___x_1294_; uint8_t v___x_1295_; 
v___x_1294_ = 37;
v___x_1295_ = lean_uint8_dec_eq(v_c_1258_, v___x_1294_);
return v___x_1295_;
}
else
{
return v___x_1293_;
}
}
else
{
return v___x_1291_;
}
}
else
{
return v___x_1289_;
}
}
else
{
return v___x_1287_;
}
}
else
{
return v___x_1285_;
}
}
else
{
return v___x_1283_;
}
}
else
{
return v___x_1281_;
}
}
else
{
return v___x_1279_;
}
}
else
{
return v___x_1277_;
}
}
else
{
return v___x_1275_;
}
}
else
{
return v___x_1273_;
}
}
else
{
return v___x_1271_;
}
}
else
{
return v___x_1269_;
}
}
else
{
return v___x_1267_;
}
}
else
{
return v___x_1265_;
}
}
else
{
return v___x_1263_;
}
}
else
{
return v___x_1261_;
}
}
v___jp_1296_:
{
uint8_t v___x_1297_; uint8_t v___x_1298_; 
v___x_1297_ = 65;
v___x_1298_ = lean_uint8_dec_le(v___x_1297_, v_c_1258_);
if (v___x_1298_ == 0)
{
goto v___jp_1259_;
}
else
{
uint8_t v___x_1299_; uint8_t v___x_1300_; 
v___x_1299_ = 90;
v___x_1300_ = lean_uint8_dec_le(v_c_1258_, v___x_1299_);
if (v___x_1300_ == 0)
{
goto v___jp_1259_;
}
else
{
return v___x_1300_;
}
}
}
v___jp_1301_:
{
uint8_t v___x_1302_; uint8_t v___x_1303_; 
v___x_1302_ = 97;
v___x_1303_ = lean_uint8_dec_le(v___x_1302_, v_c_1258_);
if (v___x_1303_ == 0)
{
goto v___jp_1296_;
}
else
{
uint8_t v___x_1304_; uint8_t v___x_1305_; 
v___x_1304_ = 122;
v___x_1305_ = lean_uint8_dec_le(v_c_1258_, v___x_1304_);
if (v___x_1305_ == 0)
{
goto v___jp_1296_;
}
else
{
return v___x_1305_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0___boxed(lean_object* v_c_1310_){
_start:
{
uint8_t v_c_boxed_1311_; uint8_t v_res_1312_; lean_object* v_r_1313_; 
v_c_boxed_1311_ = lean_unbox(v_c_1310_);
v_res_1312_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___lam__0(v_c_boxed_1311_);
v_r_1313_ = lean_box(v_res_1312_);
return v_r_1313_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(lean_object* v_config_1315_, lean_object* v_a_1316_){
_start:
{
lean_object* v_maxSegmentLength_1317_; lean_object* v___f_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v_snd_1321_; lean_object* v_fst_1322_; lean_object* v_fst_1323_; lean_object* v_array_1324_; lean_object* v_idx_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1342_; 
v_maxSegmentLength_1317_ = lean_ctor_get(v_config_1315_, 3);
v___f_1318_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___closed__0));
v___x_1319_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_1316_);
v___x_1320_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1318_, v_maxSegmentLength_1317_, v___x_1319_, v_a_1316_);
v_snd_1321_ = lean_ctor_get(v___x_1320_, 1);
lean_inc(v_snd_1321_);
v_fst_1322_ = lean_ctor_get(v___x_1320_, 0);
lean_inc(v_fst_1322_);
lean_dec_ref(v___x_1320_);
v_fst_1323_ = lean_ctor_get(v_snd_1321_, 0);
lean_inc(v_fst_1323_);
lean_dec(v_snd_1321_);
v_array_1324_ = lean_ctor_get(v_a_1316_, 0);
v_idx_1325_ = lean_ctor_get(v_a_1316_, 1);
v_isSharedCheck_1342_ = !lean_is_exclusive(v_a_1316_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1327_ = v_a_1316_;
v_isShared_1328_ = v_isSharedCheck_1342_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_idx_1325_);
lean_inc(v_array_1324_);
lean_dec(v_a_1316_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1342_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v_lower_1330_; lean_object* v_upper_1331_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___y_1339_; uint8_t v___x_1341_; 
v___x_1336_ = lean_nat_add(v_idx_1325_, v_fst_1322_);
lean_dec(v_fst_1322_);
v___x_1337_ = lean_byte_array_size(v_array_1324_);
v___x_1341_ = lean_nat_dec_le(v_idx_1325_, v___x_1319_);
if (v___x_1341_ == 0)
{
v___y_1339_ = v_idx_1325_;
goto v___jp_1338_;
}
else
{
lean_dec(v_idx_1325_);
v___y_1339_ = v___x_1319_;
goto v___jp_1338_;
}
v___jp_1329_:
{
lean_object* v___x_1332_; lean_object* v___x_1334_; 
v___x_1332_ = l_ByteArray_toByteSlice(v_array_1324_, v_lower_1330_, v_upper_1331_);
if (v_isShared_1328_ == 0)
{
lean_ctor_set(v___x_1327_, 1, v___x_1332_);
lean_ctor_set(v___x_1327_, 0, v_fst_1323_);
v___x_1334_ = v___x_1327_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_fst_1323_);
lean_ctor_set(v_reuseFailAlloc_1335_, 1, v___x_1332_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
return v___x_1334_;
}
}
v___jp_1338_:
{
uint8_t v___x_1340_; 
v___x_1340_ = lean_nat_dec_le(v___x_1336_, v___x_1337_);
if (v___x_1340_ == 0)
{
lean_dec(v___x_1336_);
v_lower_1330_ = v___y_1339_;
v_upper_1331_ = v___x_1337_;
goto v___jp_1329_;
}
else
{
v_lower_1330_ = v___y_1339_;
v_upper_1331_ = v___x_1336_;
goto v___jp_1329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment___boxed(lean_object* v_config_1343_, lean_object* v_a_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(v_config_1343_, v_a_1344_);
lean_dec_ref(v_config_1343_);
return v_res_1345_;
}
}
LEAN_EXPORT uint8_t l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(uint8_t v_c_1346_){
_start:
{
uint8_t v___x_1347_; uint8_t v___x_1348_; 
v___x_1347_ = 63;
v___x_1348_ = lean_uint8_dec_eq(v_c_1346_, v___x_1347_);
if (v___x_1348_ == 0)
{
uint8_t v___x_1349_; uint8_t v___x_1350_; 
v___x_1349_ = 35;
v___x_1350_ = lean_uint8_dec_eq(v_c_1346_, v___x_1349_);
return v___x_1350_;
}
else
{
return v___x_1348_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0___boxed(lean_object* v_c_1351_){
_start:
{
uint8_t v_c_boxed_1352_; uint8_t v_res_1353_; lean_object* v_r_1354_; 
v_c_boxed_1352_ = lean_unbox(v_c_1351_);
v_res_1353_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v_c_boxed_1352_);
v_r_1354_ = lean_box(v_res_1353_);
return v_r_1354_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(lean_object* v_config_1362_, lean_object* v_a_1363_, lean_object* v___y_1364_){
_start:
{
lean_object* v___y_1366_; lean_object* v___y_1367_; lean_object* v___y_1368_; lean_object* v___y_1372_; lean_object* v___y_1373_; lean_object* v___y_1374_; lean_object* v___y_1375_; lean_object* v_array_1389_; lean_object* v_idx_1390_; lean_object* v_fst_1391_; lean_object* v_snd_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1557_; 
v_array_1389_ = lean_ctor_get(v___y_1364_, 0);
v_idx_1390_ = lean_ctor_get(v___y_1364_, 1);
v_fst_1391_ = lean_ctor_get(v_a_1363_, 0);
v_snd_1392_ = lean_ctor_get(v_a_1363_, 1);
v_isSharedCheck_1557_ = !lean_is_exclusive(v_a_1363_);
if (v_isSharedCheck_1557_ == 0)
{
v___x_1394_ = v_a_1363_;
v_isShared_1395_ = v_isSharedCheck_1557_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_snd_1392_);
lean_inc(v_fst_1391_);
lean_dec(v_a_1363_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1557_;
goto v_resetjp_1393_;
}
v___jp_1365_:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1369_, 0, v___y_1367_);
lean_ctor_set(v___x_1369_, 1, v___y_1366_);
v___x_1370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1370_, 0, v___y_1368_);
lean_ctor_set(v___x_1370_, 1, v___x_1369_);
return v___x_1370_;
}
v___jp_1371_:
{
lean_object* v___x_1376_; uint8_t v___x_1377_; 
v___x_1376_ = lean_array_get_size(v___y_1372_);
v___x_1377_ = lean_nat_dec_le(v___y_1373_, v___x_1376_);
if (v___x_1377_ == 0)
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
lean_dec(v___y_1373_);
v___x_1378_ = l_ByteArray_empty;
v___x_1379_ = lean_array_push(v___y_1372_, v___x_1378_);
v___x_1380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
lean_ctor_set(v___x_1380_, 1, v___y_1374_);
v_a_1363_ = v___x_1380_;
v___y_1364_ = v___y_1375_;
goto _start;
}
else
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; 
lean_dec(v___y_1374_);
lean_dec_ref(v___y_1372_);
lean_dec_ref(v_config_1362_);
v___x_1382_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0));
v___x_1383_ = l_Nat_reprFast(v___y_1373_);
v___x_1384_ = lean_string_append(v___x_1382_, v___x_1383_);
lean_dec_ref(v___x_1383_);
v___x_1385_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_1386_ = lean_string_append(v___x_1384_, v___x_1385_);
v___x_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1387_, 0, v___x_1386_);
v___x_1388_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1388_, 0, v___y_1375_);
lean_ctor_set(v___x_1388_, 1, v___x_1387_);
return v___x_1388_;
}
}
v_resetjp_1393_:
{
lean_object* v___x_1396_; uint8_t v___x_1397_; 
v___x_1396_ = lean_byte_array_size(v_array_1389_);
v___x_1397_ = lean_nat_dec_lt(v_idx_1390_, v___x_1396_);
if (v___x_1397_ == 0)
{
lean_object* v___x_1399_; 
lean_dec_ref(v_config_1362_);
if (v_isShared_1395_ == 0)
{
v___x_1399_ = v___x_1394_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v_fst_1391_);
lean_ctor_set(v_reuseFailAlloc_1401_, 1, v_snd_1392_);
v___x_1399_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
lean_object* v___x_1400_; 
v___x_1400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___y_1364_);
lean_ctor_set(v___x_1400_, 1, v___x_1399_);
return v___x_1400_;
}
}
else
{
uint8_t v___x_1498_; uint8_t v___x_1548_; 
v___x_1498_ = lean_byte_array_fget(v_array_1389_, v_idx_1390_);
v___x_1548_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v___x_1498_);
if (v___x_1548_ == 0)
{
uint8_t v___x_1549_; uint8_t v___x_1550_; 
v___x_1549_ = 47;
v___x_1550_ = lean_uint8_dec_eq(v___x_1498_, v___x_1549_);
if (v___x_1550_ == 0)
{
uint8_t v___x_1551_; uint8_t v___x_1552_; 
v___x_1551_ = 48;
v___x_1552_ = lean_uint8_dec_le(v___x_1551_, v___x_1498_);
if (v___x_1552_ == 0)
{
goto v___jp_1543_;
}
else
{
uint8_t v___x_1553_; uint8_t v___x_1554_; 
v___x_1553_ = 57;
v___x_1554_ = lean_uint8_dec_le(v___x_1498_, v___x_1553_);
if (v___x_1554_ == 0)
{
goto v___jp_1543_;
}
else
{
goto v___jp_1402_;
}
}
}
else
{
goto v___jp_1402_;
}
}
else
{
lean_object* v___x_1555_; lean_object* v___x_1556_; 
lean_del_object(v___x_1394_);
lean_dec_ref(v_config_1362_);
v___x_1555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1555_, 0, v_fst_1391_);
lean_ctor_set(v___x_1555_, 1, v_snd_1392_);
v___x_1556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1556_, 0, v___y_1364_);
lean_ctor_set(v___x_1556_, 1, v___x_1555_);
return v___x_1556_;
}
v___jp_1402_:
{
lean_object* v_maxPathSegments_1403_; lean_object* v_maxTotalPathLength_1404_; lean_object* v___x_1405_; uint8_t v___x_1406_; 
v_maxPathSegments_1403_ = lean_ctor_get(v_config_1362_, 6);
v_maxTotalPathLength_1404_ = lean_ctor_get(v_config_1362_, 7);
v___x_1405_ = lean_array_get_size(v_fst_1391_);
v___x_1406_ = lean_nat_dec_le(v_maxPathSegments_1403_, v___x_1405_);
if (v___x_1406_ == 0)
{
lean_object* v___x_1407_; 
v___x_1407_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(v_config_1362_, v___y_1364_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v_pos_1408_; lean_object* v_res_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1481_; 
v_pos_1408_ = lean_ctor_get(v___x_1407_, 0);
v_res_1409_ = lean_ctor_get(v___x_1407_, 1);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1411_ = v___x_1407_;
v_isShared_1412_ = v_isSharedCheck_1481_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_res_1409_);
lean_inc(v_pos_1408_);
lean_dec(v___x_1407_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1481_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; 
lean_inc(v_res_1409_);
v___x_1413_ = l_ByteSlice_toByteArray(v_res_1409_);
v___x_1414_ = l_Std_Http_URI_EncodedSegment_ofByteArray_x3f(v___x_1413_);
if (lean_obj_tag(v___x_1414_) == 1)
{
lean_object* v_val_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1476_; 
v_val_1415_ = lean_ctor_get(v___x_1414_, 0);
v_isSharedCheck_1476_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1417_ = v___x_1414_;
v_isShared_1418_ = v_isSharedCheck_1476_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_val_1415_);
lean_dec(v___x_1414_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1476_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1419_; lean_object* v___x_1420_; uint8_t v___x_1421_; 
v___x_1419_ = l_ByteSlice_size(v_res_1409_);
lean_dec(v_res_1409_);
v___x_1420_ = lean_nat_add(v_snd_1392_, v___x_1419_);
lean_dec(v___x_1419_);
lean_dec(v_snd_1392_);
v___x_1421_ = lean_nat_dec_lt(v_maxTotalPathLength_1404_, v___x_1420_);
if (v___x_1421_ == 0)
{
lean_object* v_array_1422_; lean_object* v_idx_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; uint8_t v___x_1426_; 
v_array_1422_ = lean_ctor_get(v_pos_1408_, 0);
v_idx_1423_ = lean_ctor_get(v_pos_1408_, 1);
v___x_1424_ = lean_array_push(v_fst_1391_, v_val_1415_);
v___x_1425_ = lean_byte_array_size(v_array_1422_);
v___x_1426_ = lean_nat_dec_lt(v_idx_1423_, v___x_1425_);
if (v___x_1426_ == 0)
{
lean_del_object(v___x_1417_);
lean_del_object(v___x_1411_);
lean_del_object(v___x_1394_);
lean_dec_ref(v_config_1362_);
v___y_1366_ = v___x_1420_;
v___y_1367_ = v___x_1424_;
v___y_1368_ = v_pos_1408_;
goto v___jp_1365_;
}
else
{
uint8_t v___x_1427_; uint8_t v___x_1428_; uint8_t v___x_1429_; 
v___x_1427_ = lean_byte_array_fget(v_array_1422_, v_idx_1423_);
v___x_1428_ = 47;
v___x_1429_ = lean_uint8_dec_eq(v___x_1427_, v___x_1428_);
if (v___x_1429_ == 0)
{
lean_del_object(v___x_1417_);
lean_del_object(v___x_1411_);
lean_del_object(v___x_1394_);
lean_dec_ref(v_config_1362_);
v___y_1366_ = v___x_1420_;
v___y_1367_ = v___x_1424_;
v___y_1368_ = v_pos_1408_;
goto v___jp_1365_;
}
else
{
lean_object* v___x_1430_; lean_object* v___x_1431_; uint8_t v___x_1432_; 
v___x_1430_ = lean_unsigned_to_nat(1u);
v___x_1431_ = lean_nat_add(v___x_1420_, v___x_1430_);
lean_dec(v___x_1420_);
v___x_1432_ = lean_nat_dec_lt(v_maxTotalPathLength_1404_, v___x_1431_);
if (v___x_1432_ == 0)
{
lean_del_object(v___x_1417_);
if (v___x_1426_ == 0)
{
lean_object* v___x_1433_; lean_object* v___x_1435_; 
lean_dec(v___x_1431_);
lean_dec_ref(v___x_1424_);
lean_del_object(v___x_1394_);
lean_dec_ref(v_config_1362_);
v___x_1433_ = lean_box(0);
if (v_isShared_1412_ == 0)
{
lean_ctor_set_tag(v___x_1411_, 1);
lean_ctor_set(v___x_1411_, 1, v___x_1433_);
v___x_1435_ = v___x_1411_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_pos_1408_);
lean_ctor_set(v_reuseFailAlloc_1436_, 1, v___x_1433_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
else
{
lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1451_; 
lean_inc(v_idx_1423_);
lean_inc_ref(v_array_1422_);
lean_del_object(v___x_1411_);
v_isSharedCheck_1451_ = !lean_is_exclusive(v_pos_1408_);
if (v_isSharedCheck_1451_ == 0)
{
lean_object* v_unused_1452_; lean_object* v_unused_1453_; 
v_unused_1452_ = lean_ctor_get(v_pos_1408_, 1);
lean_dec(v_unused_1452_);
v_unused_1453_ = lean_ctor_get(v_pos_1408_, 0);
lean_dec(v_unused_1453_);
v___x_1438_ = v_pos_1408_;
v_isShared_1439_ = v_isSharedCheck_1451_;
goto v_resetjp_1437_;
}
else
{
lean_dec(v_pos_1408_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1451_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1440_; lean_object* v___x_1442_; 
v___x_1440_ = lean_nat_add(v_idx_1423_, v___x_1430_);
lean_dec(v_idx_1423_);
lean_inc(v___x_1440_);
lean_inc_ref(v_array_1422_);
if (v_isShared_1439_ == 0)
{
lean_ctor_set(v___x_1438_, 1, v___x_1440_);
v___x_1442_ = v___x_1438_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_array_1422_);
lean_ctor_set(v_reuseFailAlloc_1450_, 1, v___x_1440_);
v___x_1442_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
uint8_t v___x_1443_; 
v___x_1443_ = lean_nat_dec_lt(v___x_1440_, v___x_1425_);
if (v___x_1443_ == 0)
{
lean_dec(v___x_1440_);
lean_dec_ref(v_array_1422_);
lean_del_object(v___x_1394_);
lean_inc(v_maxPathSegments_1403_);
v___y_1372_ = v___x_1424_;
v___y_1373_ = v_maxPathSegments_1403_;
v___y_1374_ = v___x_1431_;
v___y_1375_ = v___x_1442_;
goto v___jp_1371_;
}
else
{
uint8_t v___x_1444_; uint8_t v___x_1445_; 
v___x_1444_ = lean_byte_array_fget(v_array_1422_, v___x_1440_);
lean_dec(v___x_1440_);
lean_dec_ref(v_array_1422_);
v___x_1445_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v___x_1444_);
if (v___x_1445_ == 0)
{
lean_object* v___x_1447_; 
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 1, v___x_1431_);
lean_ctor_set(v___x_1394_, 0, v___x_1424_);
v___x_1447_ = v___x_1394_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v___x_1424_);
lean_ctor_set(v_reuseFailAlloc_1449_, 1, v___x_1431_);
v___x_1447_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
v_a_1363_ = v___x_1447_;
v___y_1364_ = v___x_1442_;
goto _start;
}
}
else
{
lean_del_object(v___x_1394_);
lean_inc(v_maxPathSegments_1403_);
v___y_1372_ = v___x_1424_;
v___y_1373_ = v_maxPathSegments_1403_;
v___y_1374_ = v___x_1431_;
v___y_1375_ = v___x_1442_;
goto v___jp_1371_;
}
}
}
}
}
}
else
{
lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1460_; 
lean_inc(v_maxTotalPathLength_1404_);
lean_dec(v___x_1431_);
lean_dec_ref(v___x_1424_);
lean_del_object(v___x_1394_);
lean_dec_ref(v_config_1362_);
v___x_1454_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2));
v___x_1455_ = l_Nat_reprFast(v_maxTotalPathLength_1404_);
v___x_1456_ = lean_string_append(v___x_1454_, v___x_1455_);
lean_dec_ref(v___x_1455_);
v___x_1457_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3));
v___x_1458_ = lean_string_append(v___x_1456_, v___x_1457_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 0, v___x_1458_);
v___x_1460_ = v___x_1417_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v___x_1458_);
v___x_1460_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
lean_object* v___x_1462_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set_tag(v___x_1411_, 1);
lean_ctor_set(v___x_1411_, 1, v___x_1460_);
v___x_1462_ = v___x_1411_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_pos_1408_);
lean_ctor_set(v_reuseFailAlloc_1463_, 1, v___x_1460_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
}
}
}
else
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1471_; 
lean_inc(v_maxTotalPathLength_1404_);
lean_dec(v___x_1420_);
lean_dec(v_val_1415_);
lean_del_object(v___x_1394_);
lean_dec(v_fst_1391_);
lean_dec_ref(v_config_1362_);
v___x_1465_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2));
v___x_1466_ = l_Nat_reprFast(v_maxTotalPathLength_1404_);
v___x_1467_ = lean_string_append(v___x_1465_, v___x_1466_);
lean_dec_ref(v___x_1466_);
v___x_1468_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3));
v___x_1469_ = lean_string_append(v___x_1467_, v___x_1468_);
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 0, v___x_1469_);
v___x_1471_ = v___x_1417_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v___x_1469_);
v___x_1471_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
lean_object* v___x_1473_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set_tag(v___x_1411_, 1);
lean_ctor_set(v___x_1411_, 1, v___x_1471_);
v___x_1473_ = v___x_1411_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v_pos_1408_);
lean_ctor_set(v_reuseFailAlloc_1474_, 1, v___x_1471_);
v___x_1473_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
return v___x_1473_;
}
}
}
}
}
else
{
lean_object* v___x_1477_; lean_object* v___x_1479_; 
lean_dec(v___x_1414_);
lean_dec(v_res_1409_);
lean_del_object(v___x_1394_);
lean_dec(v_snd_1392_);
lean_dec(v_fst_1391_);
lean_dec_ref(v_config_1362_);
v___x_1477_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5));
if (v_isShared_1412_ == 0)
{
lean_ctor_set_tag(v___x_1411_, 1);
lean_ctor_set(v___x_1411_, 1, v___x_1477_);
v___x_1479_ = v___x_1411_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_pos_1408_);
lean_ctor_set(v_reuseFailAlloc_1480_, 1, v___x_1477_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
else
{
lean_object* v_pos_1482_; lean_object* v_err_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1490_; 
lean_del_object(v___x_1394_);
lean_dec(v_snd_1392_);
lean_dec(v_fst_1391_);
lean_dec_ref(v_config_1362_);
v_pos_1482_ = lean_ctor_get(v___x_1407_, 0);
v_err_1483_ = lean_ctor_get(v___x_1407_, 1);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1485_ = v___x_1407_;
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_err_1483_);
lean_inc(v_pos_1482_);
lean_dec(v___x_1407_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1488_; 
if (v_isShared_1486_ == 0)
{
v___x_1488_ = v___x_1485_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_pos_1482_);
lean_ctor_set(v_reuseFailAlloc_1489_, 1, v_err_1483_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
else
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
lean_inc(v_maxPathSegments_1403_);
lean_del_object(v___x_1394_);
lean_dec(v_snd_1392_);
lean_dec(v_fst_1391_);
lean_dec_ref(v_config_1362_);
v___x_1491_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0));
v___x_1492_ = l_Nat_reprFast(v_maxPathSegments_1403_);
v___x_1493_ = lean_string_append(v___x_1491_, v___x_1492_);
lean_dec_ref(v___x_1492_);
v___x_1494_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_1495_ = lean_string_append(v___x_1493_, v___x_1494_);
v___x_1496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1495_);
v___x_1497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1497_, 0, v___y_1364_);
lean_ctor_set(v___x_1497_, 1, v___x_1496_);
return v___x_1497_;
}
}
v___jp_1499_:
{
uint8_t v___x_1500_; uint8_t v___x_1501_; 
v___x_1500_ = 45;
v___x_1501_ = lean_uint8_dec_eq(v___x_1498_, v___x_1500_);
if (v___x_1501_ == 0)
{
uint8_t v___x_1502_; uint8_t v___x_1503_; 
v___x_1502_ = 46;
v___x_1503_ = lean_uint8_dec_eq(v___x_1498_, v___x_1502_);
if (v___x_1503_ == 0)
{
uint8_t v___x_1504_; uint8_t v___x_1505_; 
v___x_1504_ = 95;
v___x_1505_ = lean_uint8_dec_eq(v___x_1498_, v___x_1504_);
if (v___x_1505_ == 0)
{
uint8_t v___x_1506_; uint8_t v___x_1507_; 
v___x_1506_ = 126;
v___x_1507_ = lean_uint8_dec_eq(v___x_1498_, v___x_1506_);
if (v___x_1507_ == 0)
{
uint8_t v___x_1508_; uint8_t v___x_1509_; 
v___x_1508_ = 33;
v___x_1509_ = lean_uint8_dec_eq(v___x_1498_, v___x_1508_);
if (v___x_1509_ == 0)
{
uint8_t v___x_1510_; uint8_t v___x_1511_; 
v___x_1510_ = 36;
v___x_1511_ = lean_uint8_dec_eq(v___x_1498_, v___x_1510_);
if (v___x_1511_ == 0)
{
uint8_t v___x_1512_; uint8_t v___x_1513_; 
v___x_1512_ = 38;
v___x_1513_ = lean_uint8_dec_eq(v___x_1498_, v___x_1512_);
if (v___x_1513_ == 0)
{
uint8_t v___x_1514_; uint8_t v___x_1515_; 
v___x_1514_ = 39;
v___x_1515_ = lean_uint8_dec_eq(v___x_1498_, v___x_1514_);
if (v___x_1515_ == 0)
{
uint8_t v___x_1516_; uint8_t v___x_1517_; 
v___x_1516_ = 40;
v___x_1517_ = lean_uint8_dec_eq(v___x_1498_, v___x_1516_);
if (v___x_1517_ == 0)
{
uint8_t v___x_1518_; uint8_t v___x_1519_; 
v___x_1518_ = 41;
v___x_1519_ = lean_uint8_dec_eq(v___x_1498_, v___x_1518_);
if (v___x_1519_ == 0)
{
uint8_t v___x_1520_; uint8_t v___x_1521_; 
v___x_1520_ = 42;
v___x_1521_ = lean_uint8_dec_eq(v___x_1498_, v___x_1520_);
if (v___x_1521_ == 0)
{
uint8_t v___x_1522_; uint8_t v___x_1523_; 
v___x_1522_ = 43;
v___x_1523_ = lean_uint8_dec_eq(v___x_1498_, v___x_1522_);
if (v___x_1523_ == 0)
{
uint8_t v___x_1524_; uint8_t v___x_1525_; 
v___x_1524_ = 44;
v___x_1525_ = lean_uint8_dec_eq(v___x_1498_, v___x_1524_);
if (v___x_1525_ == 0)
{
uint8_t v___x_1526_; uint8_t v___x_1527_; 
v___x_1526_ = 59;
v___x_1527_ = lean_uint8_dec_eq(v___x_1498_, v___x_1526_);
if (v___x_1527_ == 0)
{
uint8_t v___x_1528_; uint8_t v___x_1529_; 
v___x_1528_ = 61;
v___x_1529_ = lean_uint8_dec_eq(v___x_1498_, v___x_1528_);
if (v___x_1529_ == 0)
{
uint8_t v___x_1530_; uint8_t v___x_1531_; 
v___x_1530_ = 58;
v___x_1531_ = lean_uint8_dec_eq(v___x_1498_, v___x_1530_);
if (v___x_1531_ == 0)
{
uint8_t v___x_1532_; uint8_t v___x_1533_; 
v___x_1532_ = 64;
v___x_1533_ = lean_uint8_dec_eq(v___x_1498_, v___x_1532_);
if (v___x_1533_ == 0)
{
uint8_t v___x_1534_; uint8_t v___x_1535_; 
v___x_1534_ = 37;
v___x_1535_ = lean_uint8_dec_eq(v___x_1498_, v___x_1534_);
if (v___x_1535_ == 0)
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
lean_del_object(v___x_1394_);
lean_dec_ref(v_config_1362_);
v___x_1536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1536_, 0, v_fst_1391_);
lean_ctor_set(v___x_1536_, 1, v_snd_1392_);
v___x_1537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1537_, 0, v___y_1364_);
lean_ctor_set(v___x_1537_, 1, v___x_1536_);
return v___x_1537_;
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
else
{
goto v___jp_1402_;
}
}
v___jp_1538_:
{
uint8_t v___x_1539_; uint8_t v___x_1540_; 
v___x_1539_ = 65;
v___x_1540_ = lean_uint8_dec_le(v___x_1539_, v___x_1498_);
if (v___x_1540_ == 0)
{
goto v___jp_1499_;
}
else
{
uint8_t v___x_1541_; uint8_t v___x_1542_; 
v___x_1541_ = 90;
v___x_1542_ = lean_uint8_dec_le(v___x_1498_, v___x_1541_);
if (v___x_1542_ == 0)
{
goto v___jp_1499_;
}
else
{
goto v___jp_1402_;
}
}
}
v___jp_1543_:
{
uint8_t v___x_1544_; uint8_t v___x_1545_; 
v___x_1544_ = 97;
v___x_1545_ = lean_uint8_dec_le(v___x_1544_, v___x_1498_);
if (v___x_1545_ == 0)
{
goto v___jp_1538_;
}
else
{
uint8_t v___x_1546_; uint8_t v___x_1547_; 
v___x_1546_ = 122;
v___x_1547_ = lean_uint8_dec_le(v___x_1498_, v___x_1546_);
if (v___x_1547_ == 0)
{
goto v___jp_1538_;
}
else
{
goto v___jp_1402_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg(lean_object* v_config_1558_, lean_object* v_a_1559_, lean_object* v___y_1560_){
_start:
{
lean_object* v___y_1562_; lean_object* v___y_1563_; lean_object* v___y_1564_; lean_object* v___y_1568_; lean_object* v___y_1569_; lean_object* v___y_1570_; lean_object* v___y_1571_; lean_object* v_array_1585_; lean_object* v_idx_1586_; lean_object* v_fst_1587_; lean_object* v_snd_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1753_; 
v_array_1585_ = lean_ctor_get(v___y_1560_, 0);
v_idx_1586_ = lean_ctor_get(v___y_1560_, 1);
v_fst_1587_ = lean_ctor_get(v_a_1559_, 0);
v_snd_1588_ = lean_ctor_get(v_a_1559_, 1);
v_isSharedCheck_1753_ = !lean_is_exclusive(v_a_1559_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1590_ = v_a_1559_;
v_isShared_1591_ = v_isSharedCheck_1753_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_snd_1588_);
lean_inc(v_fst_1587_);
lean_dec(v_a_1559_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1753_;
goto v_resetjp_1589_;
}
v___jp_1561_:
{
lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1565_, 0, v___y_1563_);
lean_ctor_set(v___x_1565_, 1, v___y_1562_);
v___x_1566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1566_, 0, v___y_1564_);
lean_ctor_set(v___x_1566_, 1, v___x_1565_);
return v___x_1566_;
}
v___jp_1567_:
{
lean_object* v___x_1572_; uint8_t v___x_1573_; 
v___x_1572_ = lean_array_get_size(v___y_1571_);
v___x_1573_ = lean_nat_dec_le(v___y_1570_, v___x_1572_);
if (v___x_1573_ == 0)
{
lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
lean_dec(v___y_1570_);
v___x_1574_ = l_ByteArray_empty;
v___x_1575_ = lean_array_push(v___y_1571_, v___x_1574_);
v___x_1576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1575_);
lean_ctor_set(v___x_1576_, 1, v___y_1568_);
v___x_1577_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(v_config_1558_, v___x_1576_, v___y_1569_);
return v___x_1577_;
}
else
{
lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; 
lean_dec_ref(v___y_1571_);
lean_dec(v___y_1568_);
lean_dec_ref(v_config_1558_);
v___x_1578_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0));
v___x_1579_ = l_Nat_reprFast(v___y_1570_);
v___x_1580_ = lean_string_append(v___x_1578_, v___x_1579_);
lean_dec_ref(v___x_1579_);
v___x_1581_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_1582_ = lean_string_append(v___x_1580_, v___x_1581_);
v___x_1583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1582_);
v___x_1584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1584_, 0, v___y_1569_);
lean_ctor_set(v___x_1584_, 1, v___x_1583_);
return v___x_1584_;
}
}
v_resetjp_1589_:
{
lean_object* v___x_1592_; uint8_t v___x_1593_; 
v___x_1592_ = lean_byte_array_size(v_array_1585_);
v___x_1593_ = lean_nat_dec_lt(v_idx_1586_, v___x_1592_);
if (v___x_1593_ == 0)
{
lean_object* v___x_1595_; 
lean_dec_ref(v_config_1558_);
if (v_isShared_1591_ == 0)
{
v___x_1595_ = v___x_1590_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_fst_1587_);
lean_ctor_set(v_reuseFailAlloc_1597_, 1, v_snd_1588_);
v___x_1595_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
lean_object* v___x_1596_; 
v___x_1596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1596_, 0, v___y_1560_);
lean_ctor_set(v___x_1596_, 1, v___x_1595_);
return v___x_1596_;
}
}
else
{
uint8_t v___x_1694_; uint8_t v___x_1744_; 
v___x_1694_ = lean_byte_array_fget(v_array_1585_, v_idx_1586_);
v___x_1744_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v___x_1694_);
if (v___x_1744_ == 0)
{
uint8_t v___x_1745_; uint8_t v___x_1746_; 
v___x_1745_ = 47;
v___x_1746_ = lean_uint8_dec_eq(v___x_1694_, v___x_1745_);
if (v___x_1746_ == 0)
{
uint8_t v___x_1747_; uint8_t v___x_1748_; 
v___x_1747_ = 48;
v___x_1748_ = lean_uint8_dec_le(v___x_1747_, v___x_1694_);
if (v___x_1748_ == 0)
{
goto v___jp_1739_;
}
else
{
uint8_t v___x_1749_; uint8_t v___x_1750_; 
v___x_1749_ = 57;
v___x_1750_ = lean_uint8_dec_le(v___x_1694_, v___x_1749_);
if (v___x_1750_ == 0)
{
goto v___jp_1739_;
}
else
{
goto v___jp_1598_;
}
}
}
else
{
goto v___jp_1598_;
}
}
else
{
lean_object* v___x_1751_; lean_object* v___x_1752_; 
lean_del_object(v___x_1590_);
lean_dec_ref(v_config_1558_);
v___x_1751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1751_, 0, v_fst_1587_);
lean_ctor_set(v___x_1751_, 1, v_snd_1588_);
v___x_1752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1752_, 0, v___y_1560_);
lean_ctor_set(v___x_1752_, 1, v___x_1751_);
return v___x_1752_;
}
v___jp_1598_:
{
lean_object* v_maxPathSegments_1599_; lean_object* v_maxTotalPathLength_1600_; lean_object* v___x_1601_; uint8_t v___x_1602_; 
v_maxPathSegments_1599_ = lean_ctor_get(v_config_1558_, 6);
v_maxTotalPathLength_1600_ = lean_ctor_get(v_config_1558_, 7);
v___x_1601_ = lean_array_get_size(v_fst_1587_);
v___x_1602_ = lean_nat_dec_le(v_maxPathSegments_1599_, v___x_1601_);
if (v___x_1602_ == 0)
{
lean_object* v___x_1603_; 
v___x_1603_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseSegment(v_config_1558_, v___y_1560_);
if (lean_obj_tag(v___x_1603_) == 0)
{
lean_object* v_pos_1604_; lean_object* v_res_1605_; lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1677_; 
v_pos_1604_ = lean_ctor_get(v___x_1603_, 0);
v_res_1605_ = lean_ctor_get(v___x_1603_, 1);
v_isSharedCheck_1677_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1677_ == 0)
{
v___x_1607_ = v___x_1603_;
v_isShared_1608_ = v_isSharedCheck_1677_;
goto v_resetjp_1606_;
}
else
{
lean_inc(v_res_1605_);
lean_inc(v_pos_1604_);
lean_dec(v___x_1603_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1677_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; 
lean_inc(v_res_1605_);
v___x_1609_ = l_ByteSlice_toByteArray(v_res_1605_);
v___x_1610_ = l_Std_Http_URI_EncodedSegment_ofByteArray_x3f(v___x_1609_);
if (lean_obj_tag(v___x_1610_) == 1)
{
lean_object* v_val_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1672_; 
v_val_1611_ = lean_ctor_get(v___x_1610_, 0);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1610_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1613_ = v___x_1610_;
v_isShared_1614_ = v_isSharedCheck_1672_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_val_1611_);
lean_dec(v___x_1610_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1672_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; uint8_t v___x_1617_; 
v___x_1615_ = l_ByteSlice_size(v_res_1605_);
lean_dec(v_res_1605_);
v___x_1616_ = lean_nat_add(v_snd_1588_, v___x_1615_);
lean_dec(v___x_1615_);
lean_dec(v_snd_1588_);
v___x_1617_ = lean_nat_dec_lt(v_maxTotalPathLength_1600_, v___x_1616_);
if (v___x_1617_ == 0)
{
lean_object* v_array_1618_; lean_object* v_idx_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; uint8_t v___x_1622_; 
v_array_1618_ = lean_ctor_get(v_pos_1604_, 0);
v_idx_1619_ = lean_ctor_get(v_pos_1604_, 1);
v___x_1620_ = lean_array_push(v_fst_1587_, v_val_1611_);
v___x_1621_ = lean_byte_array_size(v_array_1618_);
v___x_1622_ = lean_nat_dec_lt(v_idx_1619_, v___x_1621_);
if (v___x_1622_ == 0)
{
lean_del_object(v___x_1613_);
lean_del_object(v___x_1607_);
lean_del_object(v___x_1590_);
lean_dec_ref(v_config_1558_);
v___y_1562_ = v___x_1616_;
v___y_1563_ = v___x_1620_;
v___y_1564_ = v_pos_1604_;
goto v___jp_1561_;
}
else
{
uint8_t v___x_1623_; uint8_t v___x_1624_; uint8_t v___x_1625_; 
v___x_1623_ = lean_byte_array_fget(v_array_1618_, v_idx_1619_);
v___x_1624_ = 47;
v___x_1625_ = lean_uint8_dec_eq(v___x_1623_, v___x_1624_);
if (v___x_1625_ == 0)
{
lean_del_object(v___x_1613_);
lean_del_object(v___x_1607_);
lean_del_object(v___x_1590_);
lean_dec_ref(v_config_1558_);
v___y_1562_ = v___x_1616_;
v___y_1563_ = v___x_1620_;
v___y_1564_ = v_pos_1604_;
goto v___jp_1561_;
}
else
{
lean_object* v___x_1626_; lean_object* v___x_1627_; uint8_t v___x_1628_; 
v___x_1626_ = lean_unsigned_to_nat(1u);
v___x_1627_ = lean_nat_add(v___x_1616_, v___x_1626_);
lean_dec(v___x_1616_);
v___x_1628_ = lean_nat_dec_lt(v_maxTotalPathLength_1600_, v___x_1627_);
if (v___x_1628_ == 0)
{
lean_del_object(v___x_1613_);
if (v___x_1622_ == 0)
{
lean_object* v___x_1629_; lean_object* v___x_1631_; 
lean_dec(v___x_1627_);
lean_dec_ref(v___x_1620_);
lean_del_object(v___x_1590_);
lean_dec_ref(v_config_1558_);
v___x_1629_ = lean_box(0);
if (v_isShared_1608_ == 0)
{
lean_ctor_set_tag(v___x_1607_, 1);
lean_ctor_set(v___x_1607_, 1, v___x_1629_);
v___x_1631_ = v___x_1607_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_pos_1604_);
lean_ctor_set(v_reuseFailAlloc_1632_, 1, v___x_1629_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
else
{
lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1647_; 
lean_inc(v_idx_1619_);
lean_inc_ref(v_array_1618_);
lean_del_object(v___x_1607_);
v_isSharedCheck_1647_ = !lean_is_exclusive(v_pos_1604_);
if (v_isSharedCheck_1647_ == 0)
{
lean_object* v_unused_1648_; lean_object* v_unused_1649_; 
v_unused_1648_ = lean_ctor_get(v_pos_1604_, 1);
lean_dec(v_unused_1648_);
v_unused_1649_ = lean_ctor_get(v_pos_1604_, 0);
lean_dec(v_unused_1649_);
v___x_1634_ = v_pos_1604_;
v_isShared_1635_ = v_isSharedCheck_1647_;
goto v_resetjp_1633_;
}
else
{
lean_dec(v_pos_1604_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1647_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v___x_1636_; lean_object* v___x_1638_; 
v___x_1636_ = lean_nat_add(v_idx_1619_, v___x_1626_);
lean_dec(v_idx_1619_);
lean_inc(v___x_1636_);
lean_inc_ref(v_array_1618_);
if (v_isShared_1635_ == 0)
{
lean_ctor_set(v___x_1634_, 1, v___x_1636_);
v___x_1638_ = v___x_1634_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_array_1618_);
lean_ctor_set(v_reuseFailAlloc_1646_, 1, v___x_1636_);
v___x_1638_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
uint8_t v___x_1639_; 
v___x_1639_ = lean_nat_dec_lt(v___x_1636_, v___x_1621_);
if (v___x_1639_ == 0)
{
lean_dec(v___x_1636_);
lean_dec_ref(v_array_1618_);
lean_del_object(v___x_1590_);
lean_inc(v_maxPathSegments_1599_);
v___y_1568_ = v___x_1627_;
v___y_1569_ = v___x_1638_;
v___y_1570_ = v_maxPathSegments_1599_;
v___y_1571_ = v___x_1620_;
goto v___jp_1567_;
}
else
{
uint8_t v___x_1640_; uint8_t v___x_1641_; 
v___x_1640_ = lean_byte_array_fget(v_array_1618_, v___x_1636_);
lean_dec(v___x_1636_);
lean_dec_ref(v_array_1618_);
v___x_1641_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg___lam__0(v___x_1640_);
if (v___x_1641_ == 0)
{
lean_object* v___x_1643_; 
if (v_isShared_1591_ == 0)
{
lean_ctor_set(v___x_1590_, 1, v___x_1627_);
lean_ctor_set(v___x_1590_, 0, v___x_1620_);
v___x_1643_ = v___x_1590_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v___x_1620_);
lean_ctor_set(v_reuseFailAlloc_1645_, 1, v___x_1627_);
v___x_1643_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
lean_object* v___x_1644_; 
v___x_1644_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(v_config_1558_, v___x_1643_, v___x_1638_);
return v___x_1644_;
}
}
else
{
lean_del_object(v___x_1590_);
lean_inc(v_maxPathSegments_1599_);
v___y_1568_ = v___x_1627_;
v___y_1569_ = v___x_1638_;
v___y_1570_ = v_maxPathSegments_1599_;
v___y_1571_ = v___x_1620_;
goto v___jp_1567_;
}
}
}
}
}
}
else
{
lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1656_; 
lean_inc(v_maxTotalPathLength_1600_);
lean_dec(v___x_1627_);
lean_dec_ref(v___x_1620_);
lean_del_object(v___x_1590_);
lean_dec_ref(v_config_1558_);
v___x_1650_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2));
v___x_1651_ = l_Nat_reprFast(v_maxTotalPathLength_1600_);
v___x_1652_ = lean_string_append(v___x_1650_, v___x_1651_);
lean_dec_ref(v___x_1651_);
v___x_1653_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3));
v___x_1654_ = lean_string_append(v___x_1652_, v___x_1653_);
if (v_isShared_1614_ == 0)
{
lean_ctor_set(v___x_1613_, 0, v___x_1654_);
v___x_1656_ = v___x_1613_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v___x_1654_);
v___x_1656_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
lean_object* v___x_1658_; 
if (v_isShared_1608_ == 0)
{
lean_ctor_set_tag(v___x_1607_, 1);
lean_ctor_set(v___x_1607_, 1, v___x_1656_);
v___x_1658_ = v___x_1607_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_pos_1604_);
lean_ctor_set(v_reuseFailAlloc_1659_, 1, v___x_1656_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
}
}
}
else
{
lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1667_; 
lean_inc(v_maxTotalPathLength_1600_);
lean_dec(v___x_1616_);
lean_dec(v_val_1611_);
lean_del_object(v___x_1590_);
lean_dec(v_fst_1587_);
lean_dec_ref(v_config_1558_);
v___x_1661_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__2));
v___x_1662_ = l_Nat_reprFast(v_maxTotalPathLength_1600_);
v___x_1663_ = lean_string_append(v___x_1661_, v___x_1662_);
lean_dec_ref(v___x_1662_);
v___x_1664_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__3));
v___x_1665_ = lean_string_append(v___x_1663_, v___x_1664_);
if (v_isShared_1614_ == 0)
{
lean_ctor_set(v___x_1613_, 0, v___x_1665_);
v___x_1667_ = v___x_1613_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v___x_1665_);
v___x_1667_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
lean_object* v___x_1669_; 
if (v_isShared_1608_ == 0)
{
lean_ctor_set_tag(v___x_1607_, 1);
lean_ctor_set(v___x_1607_, 1, v___x_1667_);
v___x_1669_ = v___x_1607_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_pos_1604_);
lean_ctor_set(v_reuseFailAlloc_1670_, 1, v___x_1667_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
}
}
else
{
lean_object* v___x_1673_; lean_object* v___x_1675_; 
lean_dec(v___x_1610_);
lean_dec(v_res_1605_);
lean_del_object(v___x_1590_);
lean_dec(v_snd_1588_);
lean_dec(v_fst_1587_);
lean_dec_ref(v_config_1558_);
v___x_1673_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__5));
if (v_isShared_1608_ == 0)
{
lean_ctor_set_tag(v___x_1607_, 1);
lean_ctor_set(v___x_1607_, 1, v___x_1673_);
v___x_1675_ = v___x_1607_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_pos_1604_);
lean_ctor_set(v_reuseFailAlloc_1676_, 1, v___x_1673_);
v___x_1675_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
return v___x_1675_;
}
}
}
}
else
{
lean_object* v_pos_1678_; lean_object* v_err_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1686_; 
lean_del_object(v___x_1590_);
lean_dec(v_snd_1588_);
lean_dec(v_fst_1587_);
lean_dec_ref(v_config_1558_);
v_pos_1678_ = lean_ctor_get(v___x_1603_, 0);
v_err_1679_ = lean_ctor_get(v___x_1603_, 1);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1681_ = v___x_1603_;
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_err_1679_);
lean_inc(v_pos_1678_);
lean_dec(v___x_1603_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1684_; 
if (v_isShared_1682_ == 0)
{
v___x_1684_ = v___x_1681_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_pos_1678_);
lean_ctor_set(v_reuseFailAlloc_1685_, 1, v_err_1679_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
}
else
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
lean_inc(v_maxPathSegments_1599_);
lean_del_object(v___x_1590_);
lean_dec(v_snd_1588_);
lean_dec(v_fst_1587_);
lean_dec_ref(v_config_1558_);
v___x_1687_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__0));
v___x_1688_ = l_Nat_reprFast(v_maxPathSegments_1599_);
v___x_1689_ = lean_string_append(v___x_1687_, v___x_1688_);
lean_dec_ref(v___x_1688_);
v___x_1690_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_1691_ = lean_string_append(v___x_1689_, v___x_1690_);
v___x_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1691_);
v___x_1693_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1693_, 0, v___y_1560_);
lean_ctor_set(v___x_1693_, 1, v___x_1692_);
return v___x_1693_;
}
}
v___jp_1695_:
{
uint8_t v___x_1696_; uint8_t v___x_1697_; 
v___x_1696_ = 45;
v___x_1697_ = lean_uint8_dec_eq(v___x_1694_, v___x_1696_);
if (v___x_1697_ == 0)
{
uint8_t v___x_1698_; uint8_t v___x_1699_; 
v___x_1698_ = 46;
v___x_1699_ = lean_uint8_dec_eq(v___x_1694_, v___x_1698_);
if (v___x_1699_ == 0)
{
uint8_t v___x_1700_; uint8_t v___x_1701_; 
v___x_1700_ = 95;
v___x_1701_ = lean_uint8_dec_eq(v___x_1694_, v___x_1700_);
if (v___x_1701_ == 0)
{
uint8_t v___x_1702_; uint8_t v___x_1703_; 
v___x_1702_ = 126;
v___x_1703_ = lean_uint8_dec_eq(v___x_1694_, v___x_1702_);
if (v___x_1703_ == 0)
{
uint8_t v___x_1704_; uint8_t v___x_1705_; 
v___x_1704_ = 33;
v___x_1705_ = lean_uint8_dec_eq(v___x_1694_, v___x_1704_);
if (v___x_1705_ == 0)
{
uint8_t v___x_1706_; uint8_t v___x_1707_; 
v___x_1706_ = 36;
v___x_1707_ = lean_uint8_dec_eq(v___x_1694_, v___x_1706_);
if (v___x_1707_ == 0)
{
uint8_t v___x_1708_; uint8_t v___x_1709_; 
v___x_1708_ = 38;
v___x_1709_ = lean_uint8_dec_eq(v___x_1694_, v___x_1708_);
if (v___x_1709_ == 0)
{
uint8_t v___x_1710_; uint8_t v___x_1711_; 
v___x_1710_ = 39;
v___x_1711_ = lean_uint8_dec_eq(v___x_1694_, v___x_1710_);
if (v___x_1711_ == 0)
{
uint8_t v___x_1712_; uint8_t v___x_1713_; 
v___x_1712_ = 40;
v___x_1713_ = lean_uint8_dec_eq(v___x_1694_, v___x_1712_);
if (v___x_1713_ == 0)
{
uint8_t v___x_1714_; uint8_t v___x_1715_; 
v___x_1714_ = 41;
v___x_1715_ = lean_uint8_dec_eq(v___x_1694_, v___x_1714_);
if (v___x_1715_ == 0)
{
uint8_t v___x_1716_; uint8_t v___x_1717_; 
v___x_1716_ = 42;
v___x_1717_ = lean_uint8_dec_eq(v___x_1694_, v___x_1716_);
if (v___x_1717_ == 0)
{
uint8_t v___x_1718_; uint8_t v___x_1719_; 
v___x_1718_ = 43;
v___x_1719_ = lean_uint8_dec_eq(v___x_1694_, v___x_1718_);
if (v___x_1719_ == 0)
{
uint8_t v___x_1720_; uint8_t v___x_1721_; 
v___x_1720_ = 44;
v___x_1721_ = lean_uint8_dec_eq(v___x_1694_, v___x_1720_);
if (v___x_1721_ == 0)
{
uint8_t v___x_1722_; uint8_t v___x_1723_; 
v___x_1722_ = 59;
v___x_1723_ = lean_uint8_dec_eq(v___x_1694_, v___x_1722_);
if (v___x_1723_ == 0)
{
uint8_t v___x_1724_; uint8_t v___x_1725_; 
v___x_1724_ = 61;
v___x_1725_ = lean_uint8_dec_eq(v___x_1694_, v___x_1724_);
if (v___x_1725_ == 0)
{
uint8_t v___x_1726_; uint8_t v___x_1727_; 
v___x_1726_ = 58;
v___x_1727_ = lean_uint8_dec_eq(v___x_1694_, v___x_1726_);
if (v___x_1727_ == 0)
{
uint8_t v___x_1728_; uint8_t v___x_1729_; 
v___x_1728_ = 64;
v___x_1729_ = lean_uint8_dec_eq(v___x_1694_, v___x_1728_);
if (v___x_1729_ == 0)
{
uint8_t v___x_1730_; uint8_t v___x_1731_; 
v___x_1730_ = 37;
v___x_1731_ = lean_uint8_dec_eq(v___x_1694_, v___x_1730_);
if (v___x_1731_ == 0)
{
lean_object* v___x_1732_; lean_object* v___x_1733_; 
lean_del_object(v___x_1590_);
lean_dec_ref(v_config_1558_);
v___x_1732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1732_, 0, v_fst_1587_);
lean_ctor_set(v___x_1732_, 1, v_snd_1588_);
v___x_1733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1733_, 0, v___y_1560_);
lean_ctor_set(v___x_1733_, 1, v___x_1732_);
return v___x_1733_;
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
else
{
goto v___jp_1598_;
}
}
v___jp_1734_:
{
uint8_t v___x_1735_; uint8_t v___x_1736_; 
v___x_1735_ = 65;
v___x_1736_ = lean_uint8_dec_le(v___x_1735_, v___x_1694_);
if (v___x_1736_ == 0)
{
goto v___jp_1695_;
}
else
{
uint8_t v___x_1737_; uint8_t v___x_1738_; 
v___x_1737_ = 90;
v___x_1738_ = lean_uint8_dec_le(v___x_1694_, v___x_1737_);
if (v___x_1738_ == 0)
{
goto v___jp_1695_;
}
else
{
goto v___jp_1598_;
}
}
}
v___jp_1739_:
{
uint8_t v___x_1740_; uint8_t v___x_1741_; 
v___x_1740_ = 97;
v___x_1741_ = lean_uint8_dec_le(v___x_1740_, v___x_1694_);
if (v___x_1741_ == 0)
{
goto v___jp_1734_;
}
else
{
uint8_t v___x_1742_; uint8_t v___x_1743_; 
v___x_1742_ = 122;
v___x_1743_ = lean_uint8_dec_le(v___x_1694_, v___x_1742_);
if (v___x_1743_ == 0)
{
goto v___jp_1734_;
}
else
{
goto v___jp_1598_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parsePath(lean_object* v_config_1765_, uint8_t v_forceAbsolute_1766_, uint8_t v_allowEmpty_1767_, lean_object* v_a_1768_){
_start:
{
lean_object* v___y_1770_; lean_object* v___y_1774_; lean_object* v_array_1777_; lean_object* v_idx_1778_; uint8_t v_isAbsolute_1779_; lean_object* v___x_1780_; lean_object* v_segments_1781_; uint8_t v_isAbsolute_1783_; lean_object* v_totalLength_1784_; lean_object* v___y_1785_; lean_object* v_pos_1809_; lean_object* v_array_1810_; lean_object* v_idx_1811_; lean_object* v___y_1820_; uint8_t v___y_1824_; lean_object* v_pos_1825_; uint8_t v_res_1826_; uint8_t v___y_1828_; lean_object* v_pos_1829_; uint8_t v_res_1830_; uint8_t v___y_1838_; lean_object* v___y_1839_; uint8_t v___y_1840_; uint8_t v___y_1849_; lean_object* v_pos_1850_; uint8_t v_res_1851_; lean_object* v_pos_1853_; lean_object* v_array_1854_; lean_object* v_idx_1855_; uint8_t v_res_1856_; lean_object* v___x_1860_; uint8_t v___x_1861_; 
v_array_1777_ = lean_ctor_get(v_a_1768_, 0);
lean_inc_ref(v_array_1777_);
v_idx_1778_ = lean_ctor_get(v_a_1768_, 1);
lean_inc(v_idx_1778_);
v_isAbsolute_1779_ = 0;
v___x_1780_ = lean_unsigned_to_nat(0u);
v_segments_1781_ = ((lean_object*)(l_Std_Http_URI_Parser_parsePath___closed__4));
v___x_1860_ = lean_byte_array_size(v_array_1777_);
v___x_1861_ = lean_nat_dec_lt(v_idx_1778_, v___x_1860_);
if (v___x_1861_ == 0)
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v_isAbsolute_1779_;
goto v___jp_1852_;
}
else
{
uint8_t v___x_1862_; uint8_t v___x_1912_; uint8_t v___x_1913_; 
v___x_1862_ = lean_byte_array_fget(v_array_1777_, v_idx_1778_);
v___x_1912_ = 48;
v___x_1913_ = lean_uint8_dec_le(v___x_1912_, v___x_1862_);
if (v___x_1913_ == 0)
{
goto v___jp_1907_;
}
else
{
uint8_t v___x_1914_; uint8_t v___x_1915_; 
v___x_1914_ = 57;
v___x_1915_ = lean_uint8_dec_le(v___x_1862_, v___x_1914_);
if (v___x_1915_ == 0)
{
goto v___jp_1907_;
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1915_;
goto v___jp_1852_;
}
}
v___jp_1863_:
{
uint8_t v___x_1864_; uint8_t v___x_1865_; 
v___x_1864_ = 45;
v___x_1865_ = lean_uint8_dec_eq(v___x_1862_, v___x_1864_);
if (v___x_1865_ == 0)
{
uint8_t v___x_1866_; uint8_t v___x_1867_; 
v___x_1866_ = 46;
v___x_1867_ = lean_uint8_dec_eq(v___x_1862_, v___x_1866_);
if (v___x_1867_ == 0)
{
uint8_t v___x_1868_; uint8_t v___x_1869_; 
v___x_1868_ = 95;
v___x_1869_ = lean_uint8_dec_eq(v___x_1862_, v___x_1868_);
if (v___x_1869_ == 0)
{
uint8_t v___x_1870_; uint8_t v___x_1871_; 
v___x_1870_ = 126;
v___x_1871_ = lean_uint8_dec_eq(v___x_1862_, v___x_1870_);
if (v___x_1871_ == 0)
{
uint8_t v___x_1872_; uint8_t v___x_1873_; 
v___x_1872_ = 33;
v___x_1873_ = lean_uint8_dec_eq(v___x_1862_, v___x_1872_);
if (v___x_1873_ == 0)
{
uint8_t v___x_1874_; uint8_t v___x_1875_; 
v___x_1874_ = 36;
v___x_1875_ = lean_uint8_dec_eq(v___x_1862_, v___x_1874_);
if (v___x_1875_ == 0)
{
uint8_t v___x_1876_; uint8_t v___x_1877_; 
v___x_1876_ = 38;
v___x_1877_ = lean_uint8_dec_eq(v___x_1862_, v___x_1876_);
if (v___x_1877_ == 0)
{
uint8_t v___x_1878_; uint8_t v___x_1879_; 
v___x_1878_ = 39;
v___x_1879_ = lean_uint8_dec_eq(v___x_1862_, v___x_1878_);
if (v___x_1879_ == 0)
{
uint8_t v___x_1880_; uint8_t v___x_1881_; 
v___x_1880_ = 40;
v___x_1881_ = lean_uint8_dec_eq(v___x_1862_, v___x_1880_);
if (v___x_1881_ == 0)
{
uint8_t v___x_1882_; uint8_t v___x_1883_; 
v___x_1882_ = 41;
v___x_1883_ = lean_uint8_dec_eq(v___x_1862_, v___x_1882_);
if (v___x_1883_ == 0)
{
uint8_t v___x_1884_; uint8_t v___x_1885_; 
v___x_1884_ = 42;
v___x_1885_ = lean_uint8_dec_eq(v___x_1862_, v___x_1884_);
if (v___x_1885_ == 0)
{
uint8_t v___x_1886_; uint8_t v___x_1887_; 
v___x_1886_ = 43;
v___x_1887_ = lean_uint8_dec_eq(v___x_1862_, v___x_1886_);
if (v___x_1887_ == 0)
{
uint8_t v___x_1888_; uint8_t v___x_1889_; 
v___x_1888_ = 44;
v___x_1889_ = lean_uint8_dec_eq(v___x_1862_, v___x_1888_);
if (v___x_1889_ == 0)
{
uint8_t v___x_1890_; uint8_t v___x_1891_; 
v___x_1890_ = 59;
v___x_1891_ = lean_uint8_dec_eq(v___x_1862_, v___x_1890_);
if (v___x_1891_ == 0)
{
uint8_t v___x_1892_; uint8_t v___x_1893_; 
v___x_1892_ = 61;
v___x_1893_ = lean_uint8_dec_eq(v___x_1862_, v___x_1892_);
if (v___x_1893_ == 0)
{
uint8_t v___x_1894_; uint8_t v___x_1895_; 
v___x_1894_ = 58;
v___x_1895_ = lean_uint8_dec_eq(v___x_1862_, v___x_1894_);
if (v___x_1895_ == 0)
{
uint8_t v___x_1896_; uint8_t v___x_1897_; 
v___x_1896_ = 64;
v___x_1897_ = lean_uint8_dec_eq(v___x_1862_, v___x_1896_);
if (v___x_1897_ == 0)
{
uint8_t v___x_1898_; uint8_t v___x_1899_; 
v___x_1898_ = 37;
v___x_1899_ = lean_uint8_dec_eq(v___x_1862_, v___x_1898_);
if (v___x_1899_ == 0)
{
uint8_t v___x_1900_; uint8_t v___x_1901_; 
v___x_1900_ = 47;
v___x_1901_ = lean_uint8_dec_eq(v___x_1862_, v___x_1900_);
if (v___x_1901_ == 0)
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v_isAbsolute_1779_;
goto v___jp_1852_;
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1901_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1899_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1897_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1895_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1893_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1891_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1889_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1887_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1885_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1883_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1881_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1879_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1877_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1875_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1873_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1871_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1869_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1867_;
goto v___jp_1852_;
}
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1865_;
goto v___jp_1852_;
}
}
v___jp_1902_:
{
uint8_t v___x_1903_; uint8_t v___x_1904_; 
v___x_1903_ = 65;
v___x_1904_ = lean_uint8_dec_le(v___x_1903_, v___x_1862_);
if (v___x_1904_ == 0)
{
goto v___jp_1863_;
}
else
{
uint8_t v___x_1905_; uint8_t v___x_1906_; 
v___x_1905_ = 90;
v___x_1906_ = lean_uint8_dec_le(v___x_1862_, v___x_1905_);
if (v___x_1906_ == 0)
{
goto v___jp_1863_;
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1906_;
goto v___jp_1852_;
}
}
}
v___jp_1907_:
{
uint8_t v___x_1908_; uint8_t v___x_1909_; 
v___x_1908_ = 97;
v___x_1909_ = lean_uint8_dec_le(v___x_1908_, v___x_1862_);
if (v___x_1909_ == 0)
{
goto v___jp_1902_;
}
else
{
uint8_t v___x_1910_; uint8_t v___x_1911_; 
v___x_1910_ = 122;
v___x_1911_ = lean_uint8_dec_le(v___x_1862_, v___x_1910_);
if (v___x_1911_ == 0)
{
goto v___jp_1902_;
}
else
{
v_pos_1853_ = v_a_1768_;
v_array_1854_ = v_array_1777_;
v_idx_1855_ = v_idx_1778_;
v_res_1856_ = v___x_1911_;
goto v___jp_1852_;
}
}
}
}
v___jp_1769_:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; 
v___x_1771_ = ((lean_object*)(l_Std_Http_URI_Parser_parsePath___closed__1));
v___x_1772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1772_, 0, v___y_1770_);
lean_ctor_set(v___x_1772_, 1, v___x_1771_);
return v___x_1772_;
}
v___jp_1773_:
{
lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1775_ = ((lean_object*)(l_Std_Http_URI_Parser_parsePath___closed__3));
v___x_1776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1776_, 0, v___y_1774_);
lean_ctor_set(v___x_1776_, 1, v___x_1775_);
return v___x_1776_;
}
v___jp_1782_:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; 
v___x_1786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1786_, 0, v_segments_1781_);
lean_ctor_set(v___x_1786_, 1, v_totalLength_1784_);
v___x_1787_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg(v_config_1765_, v___x_1786_, v___y_1785_);
if (lean_obj_tag(v___x_1787_) == 0)
{
lean_object* v_res_1788_; lean_object* v_pos_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1798_; 
v_res_1788_ = lean_ctor_get(v___x_1787_, 1);
v_pos_1789_ = lean_ctor_get(v___x_1787_, 0);
v_isSharedCheck_1798_ = !lean_is_exclusive(v___x_1787_);
if (v_isSharedCheck_1798_ == 0)
{
v___x_1791_ = v___x_1787_;
v_isShared_1792_ = v_isSharedCheck_1798_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_res_1788_);
lean_inc(v_pos_1789_);
lean_dec(v___x_1787_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1798_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v_fst_1793_; lean_object* v___x_1794_; lean_object* v___x_1796_; 
v_fst_1793_ = lean_ctor_get(v_res_1788_, 0);
lean_inc(v_fst_1793_);
lean_dec(v_res_1788_);
v___x_1794_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1794_, 0, v_fst_1793_);
lean_ctor_set_uint8(v___x_1794_, sizeof(void*)*1, v_isAbsolute_1783_);
if (v_isShared_1792_ == 0)
{
lean_ctor_set(v___x_1791_, 1, v___x_1794_);
v___x_1796_ = v___x_1791_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1797_; 
v_reuseFailAlloc_1797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1797_, 0, v_pos_1789_);
lean_ctor_set(v_reuseFailAlloc_1797_, 1, v___x_1794_);
v___x_1796_ = v_reuseFailAlloc_1797_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
return v___x_1796_;
}
}
}
else
{
lean_object* v_pos_1799_; lean_object* v_err_1800_; lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1807_; 
v_pos_1799_ = lean_ctor_get(v___x_1787_, 0);
v_err_1800_ = lean_ctor_get(v___x_1787_, 1);
v_isSharedCheck_1807_ = !lean_is_exclusive(v___x_1787_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1802_ = v___x_1787_;
v_isShared_1803_ = v_isSharedCheck_1807_;
goto v_resetjp_1801_;
}
else
{
lean_inc(v_err_1800_);
lean_inc(v_pos_1799_);
lean_dec(v___x_1787_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1807_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
lean_object* v___x_1805_; 
if (v_isShared_1803_ == 0)
{
v___x_1805_ = v___x_1802_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v_pos_1799_);
lean_ctor_set(v_reuseFailAlloc_1806_, 1, v_err_1800_);
v___x_1805_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
return v___x_1805_;
}
}
}
}
v___jp_1808_:
{
lean_object* v___x_1812_; uint8_t v___x_1813_; 
v___x_1812_ = lean_byte_array_size(v_array_1810_);
v___x_1813_ = lean_nat_dec_lt(v_idx_1811_, v___x_1812_);
if (v___x_1813_ == 0)
{
lean_object* v___x_1814_; lean_object* v___x_1815_; 
lean_dec(v_idx_1811_);
lean_dec_ref(v_array_1810_);
lean_dec_ref(v_config_1765_);
v___x_1814_ = lean_box(0);
v___x_1815_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1815_, 0, v_pos_1809_);
lean_ctor_set(v___x_1815_, 1, v___x_1814_);
return v___x_1815_;
}
else
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
lean_dec_ref(v_pos_1809_);
v___x_1816_ = lean_unsigned_to_nat(1u);
v___x_1817_ = lean_nat_add(v_idx_1811_, v___x_1816_);
lean_dec(v_idx_1811_);
v___x_1818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1818_, 0, v_array_1810_);
lean_ctor_set(v___x_1818_, 1, v___x_1817_);
v_isAbsolute_1783_ = v___x_1813_;
v_totalLength_1784_ = v___x_1816_;
v___y_1785_ = v___x_1818_;
goto v___jp_1782_;
}
}
v___jp_1819_:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; 
v___x_1821_ = ((lean_object*)(l_Std_Http_URI_Parser_parsePath___closed__5));
v___x_1822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1822_, 0, v___y_1820_);
lean_ctor_set(v___x_1822_, 1, v___x_1821_);
return v___x_1822_;
}
v___jp_1823_:
{
if (v_allowEmpty_1767_ == 0)
{
v___y_1770_ = v_pos_1825_;
goto v___jp_1769_;
}
else
{
if (v_res_1826_ == 0)
{
if (v___y_1824_ == 0)
{
v___y_1820_ = v_pos_1825_;
goto v___jp_1819_;
}
else
{
v___y_1770_ = v_pos_1825_;
goto v___jp_1769_;
}
}
else
{
v___y_1820_ = v_pos_1825_;
goto v___jp_1819_;
}
}
}
v___jp_1827_:
{
if (v_res_1830_ == 0)
{
if (v_forceAbsolute_1766_ == 0)
{
v_isAbsolute_1783_ = v_isAbsolute_1779_;
v_totalLength_1784_ = v___x_1780_;
v___y_1785_ = v_pos_1829_;
goto v___jp_1782_;
}
else
{
lean_object* v_array_1831_; lean_object* v_idx_1832_; lean_object* v___x_1833_; uint8_t v___x_1834_; 
lean_dec_ref(v_config_1765_);
v_array_1831_ = lean_ctor_get(v_pos_1829_, 0);
v_idx_1832_ = lean_ctor_get(v_pos_1829_, 1);
v___x_1833_ = lean_byte_array_size(v_array_1831_);
v___x_1834_ = lean_nat_dec_lt(v_idx_1832_, v___x_1833_);
if (v___x_1834_ == 0)
{
v___y_1824_ = v___y_1828_;
v_pos_1825_ = v_pos_1829_;
v_res_1826_ = v_forceAbsolute_1766_;
goto v___jp_1823_;
}
else
{
v___y_1824_ = v___y_1828_;
v_pos_1825_ = v_pos_1829_;
v_res_1826_ = v_res_1830_;
goto v___jp_1823_;
}
}
}
else
{
lean_object* v_array_1835_; lean_object* v_idx_1836_; 
v_array_1835_ = lean_ctor_get(v_pos_1829_, 0);
lean_inc_ref(v_array_1835_);
v_idx_1836_ = lean_ctor_get(v_pos_1829_, 1);
lean_inc(v_idx_1836_);
v_pos_1809_ = v_pos_1829_;
v_array_1810_ = v_array_1835_;
v_idx_1811_ = v_idx_1836_;
goto v___jp_1808_;
}
}
v___jp_1837_:
{
lean_object* v_array_1841_; lean_object* v_idx_1842_; lean_object* v___x_1843_; uint8_t v___x_1844_; 
v_array_1841_ = lean_ctor_get(v___y_1839_, 0);
v_idx_1842_ = lean_ctor_get(v___y_1839_, 1);
v___x_1843_ = lean_byte_array_size(v_array_1841_);
v___x_1844_ = lean_nat_dec_lt(v_idx_1842_, v___x_1843_);
if (v___x_1844_ == 0)
{
v___y_1828_ = v___y_1838_;
v_pos_1829_ = v___y_1839_;
v_res_1830_ = v___y_1840_;
goto v___jp_1827_;
}
else
{
uint8_t v___x_1845_; uint8_t v___x_1846_; uint8_t v___x_1847_; 
v___x_1845_ = lean_byte_array_fget(v_array_1841_, v_idx_1842_);
v___x_1846_ = 47;
v___x_1847_ = lean_uint8_dec_eq(v___x_1845_, v___x_1846_);
if (v___x_1847_ == 0)
{
v___y_1828_ = v___y_1838_;
v_pos_1829_ = v___y_1839_;
v_res_1830_ = v___y_1840_;
goto v___jp_1827_;
}
else
{
lean_inc(v_idx_1842_);
lean_inc_ref(v_array_1841_);
v_pos_1809_ = v___y_1839_;
v_array_1810_ = v_array_1841_;
v_idx_1811_ = v_idx_1842_;
goto v___jp_1808_;
}
}
}
v___jp_1848_:
{
if (v_allowEmpty_1767_ == 0)
{
if (v_res_1851_ == 0)
{
if (v___y_1849_ == 0)
{
lean_dec_ref(v_config_1765_);
v___y_1774_ = v_pos_1850_;
goto v___jp_1773_;
}
else
{
v___y_1838_ = v___y_1849_;
v___y_1839_ = v_pos_1850_;
v___y_1840_ = v_res_1851_;
goto v___jp_1837_;
}
}
else
{
lean_dec_ref(v_config_1765_);
v___y_1774_ = v_pos_1850_;
goto v___jp_1773_;
}
}
else
{
v___y_1838_ = v___y_1849_;
v___y_1839_ = v_pos_1850_;
v___y_1840_ = v_isAbsolute_1779_;
goto v___jp_1837_;
}
}
v___jp_1852_:
{
lean_object* v___x_1857_; uint8_t v___x_1858_; 
v___x_1857_ = lean_byte_array_size(v_array_1854_);
lean_dec_ref(v_array_1854_);
v___x_1858_ = lean_nat_dec_lt(v_idx_1855_, v___x_1857_);
lean_dec(v_idx_1855_);
if (v___x_1858_ == 0)
{
uint8_t v___x_1859_; 
v___x_1859_ = 1;
v___y_1849_ = v_res_1856_;
v_pos_1850_ = v_pos_1853_;
v_res_1851_ = v___x_1859_;
goto v___jp_1848_;
}
else
{
v___y_1849_ = v_res_1856_;
v_pos_1850_ = v_pos_1853_;
v_res_1851_ = v_isAbsolute_1779_;
goto v___jp_1848_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parsePath___boxed(lean_object* v_config_1916_, lean_object* v_forceAbsolute_1917_, lean_object* v_allowEmpty_1918_, lean_object* v_a_1919_){
_start:
{
uint8_t v_forceAbsolute_boxed_1920_; uint8_t v_allowEmpty_boxed_1921_; lean_object* v_res_1922_; 
v_forceAbsolute_boxed_1920_ = lean_unbox(v_forceAbsolute_1917_);
v_allowEmpty_boxed_1921_ = lean_unbox(v_allowEmpty_1918_);
v_res_1922_ = l_Std_Http_URI_Parser_parsePath(v_config_1916_, v_forceAbsolute_boxed_1920_, v_allowEmpty_boxed_1921_, v_a_1919_);
return v_res_1922_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0(lean_object* v_config_1923_, lean_object* v_inst_1924_, lean_object* v_a_1925_, lean_object* v___y_1926_){
_start:
{
lean_object* v___x_1927_; 
v___x_1927_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0___redArg(v_config_1923_, v_a_1925_, v___y_1926_);
return v___x_1927_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0(lean_object* v_config_1928_, lean_object* v_inst_1929_, lean_object* v_a_1930_, lean_object* v___y_1931_){
_start:
{
lean_object* v___x_1932_; 
v___x_1932_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg(v_config_1928_, v_a_1930_, v___y_1931_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg(){
_start:
{
lean_object* v___x_1934_; 
v___x_1934_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0));
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg___boxed(lean_object* v___dummy_1935_){
_start:
{
lean_object* v_res_1936_; 
v_res_1936_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg();
return v_res_1936_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1937_; 
v___x_1937_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___redArg();
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0(lean_object* v_s_1938_){
_start:
{
lean_object* v___x_1939_; 
v___x_1939_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0);
return v___x_1939_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___boxed(lean_object* v_s_1940_){
_start:
{
lean_object* v_res_1941_; 
v_res_1941_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0(v_s_1940_);
lean_dec_ref(v_s_1940_);
return v_res_1941_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg(){
_start:
{
lean_object* v___x_1943_; 
v___x_1943_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost_spec__0___redArg___closed__0));
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg___boxed(lean_object* v___dummy_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg();
return v_res_1945_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1946_; 
v___x_1946_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___redArg();
return v___x_1946_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2(lean_object* v_s_1947_){
_start:
{
lean_object* v___x_1948_; 
v___x_1948_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0);
return v___x_1948_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___boxed(lean_object* v_s_1949_){
_start:
{
lean_object* v_res_1950_; 
v_res_1950_ = l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2(v_s_1949_);
lean_dec_ref(v_s_1949_);
return v_res_1950_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0(uint8_t v_c_1951_){
_start:
{
uint8_t v___x_2003_; uint8_t v___x_2004_; 
v___x_2003_ = 48;
v___x_2004_ = lean_uint8_dec_le(v___x_2003_, v_c_1951_);
if (v___x_2004_ == 0)
{
goto v___jp_1998_;
}
else
{
uint8_t v___x_2005_; uint8_t v___x_2006_; 
v___x_2005_ = 57;
v___x_2006_ = lean_uint8_dec_le(v_c_1951_, v___x_2005_);
if (v___x_2006_ == 0)
{
goto v___jp_1998_;
}
else
{
return v___x_2006_;
}
}
v___jp_1952_:
{
uint8_t v___x_1953_; uint8_t v___x_1954_; 
v___x_1953_ = 45;
v___x_1954_ = lean_uint8_dec_eq(v_c_1951_, v___x_1953_);
if (v___x_1954_ == 0)
{
uint8_t v___x_1955_; uint8_t v___x_1956_; 
v___x_1955_ = 46;
v___x_1956_ = lean_uint8_dec_eq(v_c_1951_, v___x_1955_);
if (v___x_1956_ == 0)
{
uint8_t v___x_1957_; uint8_t v___x_1958_; 
v___x_1957_ = 95;
v___x_1958_ = lean_uint8_dec_eq(v_c_1951_, v___x_1957_);
if (v___x_1958_ == 0)
{
uint8_t v___x_1959_; uint8_t v___x_1960_; 
v___x_1959_ = 126;
v___x_1960_ = lean_uint8_dec_eq(v_c_1951_, v___x_1959_);
if (v___x_1960_ == 0)
{
uint8_t v___x_1961_; uint8_t v___x_1962_; 
v___x_1961_ = 33;
v___x_1962_ = lean_uint8_dec_eq(v_c_1951_, v___x_1961_);
if (v___x_1962_ == 0)
{
uint8_t v___x_1963_; uint8_t v___x_1964_; 
v___x_1963_ = 36;
v___x_1964_ = lean_uint8_dec_eq(v_c_1951_, v___x_1963_);
if (v___x_1964_ == 0)
{
uint8_t v___x_1965_; uint8_t v___x_1966_; 
v___x_1965_ = 38;
v___x_1966_ = lean_uint8_dec_eq(v_c_1951_, v___x_1965_);
if (v___x_1966_ == 0)
{
uint8_t v___x_1967_; uint8_t v___x_1968_; 
v___x_1967_ = 39;
v___x_1968_ = lean_uint8_dec_eq(v_c_1951_, v___x_1967_);
if (v___x_1968_ == 0)
{
uint8_t v___x_1969_; uint8_t v___x_1970_; 
v___x_1969_ = 40;
v___x_1970_ = lean_uint8_dec_eq(v_c_1951_, v___x_1969_);
if (v___x_1970_ == 0)
{
uint8_t v___x_1971_; uint8_t v___x_1972_; 
v___x_1971_ = 41;
v___x_1972_ = lean_uint8_dec_eq(v_c_1951_, v___x_1971_);
if (v___x_1972_ == 0)
{
uint8_t v___x_1973_; uint8_t v___x_1974_; 
v___x_1973_ = 42;
v___x_1974_ = lean_uint8_dec_eq(v_c_1951_, v___x_1973_);
if (v___x_1974_ == 0)
{
uint8_t v___x_1975_; uint8_t v___x_1976_; 
v___x_1975_ = 43;
v___x_1976_ = lean_uint8_dec_eq(v_c_1951_, v___x_1975_);
if (v___x_1976_ == 0)
{
uint8_t v___x_1977_; uint8_t v___x_1978_; 
v___x_1977_ = 44;
v___x_1978_ = lean_uint8_dec_eq(v_c_1951_, v___x_1977_);
if (v___x_1978_ == 0)
{
uint8_t v___x_1979_; uint8_t v___x_1980_; 
v___x_1979_ = 59;
v___x_1980_ = lean_uint8_dec_eq(v_c_1951_, v___x_1979_);
if (v___x_1980_ == 0)
{
uint8_t v___x_1981_; uint8_t v___x_1982_; 
v___x_1981_ = 61;
v___x_1982_ = lean_uint8_dec_eq(v_c_1951_, v___x_1981_);
if (v___x_1982_ == 0)
{
uint8_t v___x_1983_; uint8_t v___x_1984_; 
v___x_1983_ = 58;
v___x_1984_ = lean_uint8_dec_eq(v_c_1951_, v___x_1983_);
if (v___x_1984_ == 0)
{
uint8_t v___x_1985_; uint8_t v___x_1986_; 
v___x_1985_ = 64;
v___x_1986_ = lean_uint8_dec_eq(v_c_1951_, v___x_1985_);
if (v___x_1986_ == 0)
{
uint8_t v___x_1987_; uint8_t v___x_1988_; 
v___x_1987_ = 47;
v___x_1988_ = lean_uint8_dec_eq(v_c_1951_, v___x_1987_);
if (v___x_1988_ == 0)
{
uint8_t v___x_1989_; uint8_t v___x_1990_; 
v___x_1989_ = 63;
v___x_1990_ = lean_uint8_dec_eq(v_c_1951_, v___x_1989_);
if (v___x_1990_ == 0)
{
uint8_t v___x_1991_; uint8_t v___x_1992_; 
v___x_1991_ = 37;
v___x_1992_ = lean_uint8_dec_eq(v_c_1951_, v___x_1991_);
return v___x_1992_;
}
else
{
return v___x_1990_;
}
}
else
{
return v___x_1988_;
}
}
else
{
return v___x_1986_;
}
}
else
{
return v___x_1984_;
}
}
else
{
return v___x_1982_;
}
}
else
{
return v___x_1980_;
}
}
else
{
return v___x_1978_;
}
}
else
{
return v___x_1976_;
}
}
else
{
return v___x_1974_;
}
}
else
{
return v___x_1972_;
}
}
else
{
return v___x_1970_;
}
}
else
{
return v___x_1968_;
}
}
else
{
return v___x_1966_;
}
}
else
{
return v___x_1964_;
}
}
else
{
return v___x_1962_;
}
}
else
{
return v___x_1960_;
}
}
else
{
return v___x_1958_;
}
}
else
{
return v___x_1956_;
}
}
else
{
return v___x_1954_;
}
}
v___jp_1993_:
{
uint8_t v___x_1994_; uint8_t v___x_1995_; 
v___x_1994_ = 65;
v___x_1995_ = lean_uint8_dec_le(v___x_1994_, v_c_1951_);
if (v___x_1995_ == 0)
{
goto v___jp_1952_;
}
else
{
uint8_t v___x_1996_; uint8_t v___x_1997_; 
v___x_1996_ = 90;
v___x_1997_ = lean_uint8_dec_le(v_c_1951_, v___x_1996_);
if (v___x_1997_ == 0)
{
goto v___jp_1952_;
}
else
{
return v___x_1997_;
}
}
}
v___jp_1998_:
{
uint8_t v___x_1999_; uint8_t v___x_2000_; 
v___x_1999_ = 97;
v___x_2000_ = lean_uint8_dec_le(v___x_1999_, v_c_1951_);
if (v___x_2000_ == 0)
{
goto v___jp_1993_;
}
else
{
uint8_t v___x_2001_; uint8_t v___x_2002_; 
v___x_2001_ = 122;
v___x_2002_ = lean_uint8_dec_le(v_c_1951_, v___x_2001_);
if (v___x_2002_ == 0)
{
goto v___jp_1993_;
}
else
{
return v___x_2002_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0___boxed(lean_object* v_c_2007_){
_start:
{
uint8_t v_c_boxed_2008_; uint8_t v_res_2009_; lean_object* v_r_2010_; 
v_c_boxed_2008_ = lean_unbox(v_c_2007_);
v_res_2009_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___lam__0(v_c_boxed_2008_);
v_r_2010_ = lean_box(v_res_2009_);
return v_r_2010_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(lean_object* v___x_2011_, lean_object* v___x_2012_, lean_object* v_a_2013_, lean_object* v_b_2014_){
_start:
{
lean_object* v_it_2016_; 
if (lean_obj_tag(v_a_2013_) == 0)
{
lean_object* v_currPos_2020_; lean_object* v_searcher_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2047_; 
v_currPos_2020_ = lean_ctor_get(v_a_2013_, 0);
v_searcher_2021_ = lean_ctor_get(v_a_2013_, 1);
v_isSharedCheck_2047_ = !lean_is_exclusive(v_a_2013_);
if (v_isSharedCheck_2047_ == 0)
{
v___x_2023_ = v_a_2013_;
v_isShared_2024_ = v_isSharedCheck_2047_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_searcher_2021_);
lean_inc(v_currPos_2020_);
lean_dec(v_a_2013_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2047_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v_str_2025_; lean_object* v_startInclusive_2026_; lean_object* v_endExclusive_2027_; lean_object* v___x_2028_; uint8_t v_decide_2029_; 
v_str_2025_ = lean_ctor_get(v___x_2011_, 0);
v_startInclusive_2026_ = lean_ctor_get(v___x_2011_, 1);
v_endExclusive_2027_ = lean_ctor_get(v___x_2011_, 2);
v___x_2028_ = lean_nat_sub(v_endExclusive_2027_, v_startInclusive_2026_);
v_decide_2029_ = lean_nat_dec_eq(v_searcher_2021_, v___x_2028_);
lean_dec(v___x_2028_);
if (v_decide_2029_ == 0)
{
uint32_t v___x_2030_; lean_object* v___x_2031_; uint32_t v___x_2032_; uint8_t v___x_2033_; 
v___x_2030_ = 38;
v___x_2031_ = lean_nat_add(v_startInclusive_2026_, v_searcher_2021_);
v___x_2032_ = lean_string_utf8_get_fast(v_str_2025_, v___x_2031_);
v___x_2033_ = lean_uint32_dec_eq(v___x_2032_, v___x_2030_);
if (v___x_2033_ == 0)
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2037_; 
lean_dec(v_searcher_2021_);
v___x_2034_ = lean_string_utf8_next_fast(v_str_2025_, v___x_2031_);
lean_dec(v___x_2031_);
v___x_2035_ = lean_nat_sub(v___x_2034_, v_startInclusive_2026_);
if (v_isShared_2024_ == 0)
{
lean_ctor_set(v___x_2023_, 1, v___x_2035_);
v___x_2037_ = v___x_2023_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_currPos_2020_);
lean_ctor_set(v_reuseFailAlloc_2039_, 1, v___x_2035_);
v___x_2037_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
v_a_2013_ = v___x_2037_;
goto _start;
}
}
else
{
lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v_nextIt_2044_; 
lean_dec(v_currPos_2020_);
v___x_2040_ = lean_string_utf8_next_fast(v_str_2025_, v___x_2031_);
v___x_2041_ = lean_nat_sub(v___x_2040_, v___x_2031_);
lean_dec(v___x_2031_);
v___x_2042_ = lean_nat_add(v_searcher_2021_, v___x_2041_);
lean_dec(v___x_2041_);
lean_dec(v_searcher_2021_);
lean_inc(v___x_2042_);
if (v_isShared_2024_ == 0)
{
lean_ctor_set(v___x_2023_, 1, v___x_2042_);
lean_ctor_set(v___x_2023_, 0, v___x_2042_);
v_nextIt_2044_ = v___x_2023_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v___x_2042_);
lean_ctor_set(v_reuseFailAlloc_2045_, 1, v___x_2042_);
v_nextIt_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
v_it_2016_ = v_nextIt_2044_;
goto v___jp_2015_;
}
}
}
else
{
lean_object* v___x_2046_; 
lean_del_object(v___x_2023_);
lean_dec(v_searcher_2021_);
lean_dec(v_currPos_2020_);
v___x_2046_ = lean_box(1);
v_it_2016_ = v___x_2046_;
goto v___jp_2015_;
}
}
}
else
{
return v_b_2014_;
}
v___jp_2015_:
{
lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___x_2017_ = lean_unsigned_to_nat(1u);
v___x_2018_ = lean_nat_add(v_b_2014_, v___x_2017_);
lean_dec(v_b_2014_);
v_a_2013_ = v_it_2016_;
v_b_2014_ = v___x_2018_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg___boxed(lean_object* v___x_2048_, lean_object* v___x_2049_, lean_object* v_a_2050_, lean_object* v_b_2051_){
_start:
{
lean_object* v_res_2052_; 
v_res_2052_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(v___x_2048_, v___x_2049_, v_a_2050_, v_b_2051_);
lean_dec(v___x_2049_);
lean_dec_ref(v___x_2048_);
return v_res_2052_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(lean_object* v___x_2053_, lean_object* v___x_2054_, lean_object* v___x_2055_, lean_object* v_a_2056_, lean_object* v_b_2057_){
_start:
{
lean_object* v_it_2059_; 
if (lean_obj_tag(v_a_2056_) == 0)
{
lean_object* v_currPos_2063_; lean_object* v_searcher_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2090_; 
v_currPos_2063_ = lean_ctor_get(v_a_2056_, 0);
v_searcher_2064_ = lean_ctor_get(v_a_2056_, 1);
v_isSharedCheck_2090_ = !lean_is_exclusive(v_a_2056_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2066_ = v_a_2056_;
v_isShared_2067_ = v_isSharedCheck_2090_;
goto v_resetjp_2065_;
}
else
{
lean_inc(v_searcher_2064_);
lean_inc(v_currPos_2063_);
lean_dec(v_a_2056_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2090_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v_str_2068_; lean_object* v_startInclusive_2069_; lean_object* v_endExclusive_2070_; lean_object* v___x_2071_; uint8_t v_decide_2072_; 
v_str_2068_ = lean_ctor_get(v___x_2054_, 0);
v_startInclusive_2069_ = lean_ctor_get(v___x_2054_, 1);
v_endExclusive_2070_ = lean_ctor_get(v___x_2054_, 2);
v___x_2071_ = lean_nat_sub(v_endExclusive_2070_, v_startInclusive_2069_);
v_decide_2072_ = lean_nat_dec_eq(v_searcher_2064_, v___x_2071_);
lean_dec(v___x_2071_);
if (v_decide_2072_ == 0)
{
lean_object* v___x_2073_; uint32_t v___x_2074_; uint32_t v___x_2075_; uint8_t v___x_2076_; 
v___x_2073_ = lean_nat_add(v_startInclusive_2069_, v_searcher_2064_);
v___x_2074_ = lean_string_utf8_get_fast(v_str_2068_, v___x_2073_);
v___x_2075_ = 38;
v___x_2076_ = lean_uint32_dec_eq(v___x_2074_, v___x_2075_);
if (v___x_2076_ == 0)
{
lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2080_; 
lean_dec(v_searcher_2064_);
v___x_2077_ = lean_string_utf8_next_fast(v_str_2068_, v___x_2073_);
lean_dec(v___x_2073_);
v___x_2078_ = lean_nat_sub(v___x_2077_, v_startInclusive_2069_);
if (v_isShared_2067_ == 0)
{
lean_ctor_set(v___x_2066_, 1, v___x_2078_);
v___x_2080_ = v___x_2066_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v_currPos_2063_);
lean_ctor_set(v_reuseFailAlloc_2082_, 1, v___x_2078_);
v___x_2080_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
lean_object* v___x_2081_; 
v___x_2081_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(v___x_2054_, v___x_2055_, v___x_2080_, v_b_2057_);
return v___x_2081_;
}
}
else
{
lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v_nextIt_2087_; 
lean_dec(v_currPos_2063_);
v___x_2083_ = lean_string_utf8_next_fast(v_str_2068_, v___x_2073_);
v___x_2084_ = lean_nat_sub(v___x_2083_, v___x_2073_);
lean_dec(v___x_2073_);
v___x_2085_ = lean_nat_add(v_searcher_2064_, v___x_2084_);
lean_dec(v___x_2084_);
lean_dec(v_searcher_2064_);
lean_inc(v___x_2085_);
if (v_isShared_2067_ == 0)
{
lean_ctor_set(v___x_2066_, 1, v___x_2085_);
lean_ctor_set(v___x_2066_, 0, v___x_2085_);
v_nextIt_2087_ = v___x_2066_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v___x_2085_);
lean_ctor_set(v_reuseFailAlloc_2088_, 1, v___x_2085_);
v_nextIt_2087_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
v_it_2059_ = v_nextIt_2087_;
goto v___jp_2058_;
}
}
}
else
{
lean_object* v___x_2089_; 
lean_del_object(v___x_2066_);
lean_dec(v_searcher_2064_);
lean_dec(v_currPos_2063_);
v___x_2089_ = lean_box(1);
v_it_2059_ = v___x_2089_;
goto v___jp_2058_;
}
}
}
else
{
return v_b_2057_;
}
v___jp_2058_:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2060_ = lean_unsigned_to_nat(1u);
v___x_2061_ = lean_nat_add(v_b_2057_, v___x_2060_);
lean_dec(v_b_2057_);
v___x_2062_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(v___x_2054_, v___x_2055_, v_it_2059_, v___x_2061_);
return v___x_2062_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg___boxed(lean_object* v___x_2091_, lean_object* v___x_2092_, lean_object* v___x_2093_, lean_object* v_a_2094_, lean_object* v_b_2095_){
_start:
{
lean_object* v_res_2096_; 
v_res_2096_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(v___x_2091_, v___x_2092_, v___x_2093_, v_a_2094_, v_b_2095_);
lean_dec(v___x_2093_);
lean_dec_ref(v___x_2092_);
lean_dec_ref(v___x_2091_);
return v_res_2096_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(lean_object* v_out_2097_, lean_object* v_a_2098_, lean_object* v_b_2099_){
_start:
{
if (lean_obj_tag(v_a_2098_) == 0)
{
lean_object* v_currPos_2100_; lean_object* v_searcher_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2140_; 
v_currPos_2100_ = lean_ctor_get(v_a_2098_, 0);
v_searcher_2101_ = lean_ctor_get(v_a_2098_, 1);
v_isSharedCheck_2140_ = !lean_is_exclusive(v_a_2098_);
if (v_isSharedCheck_2140_ == 0)
{
v___x_2103_ = v_a_2098_;
v_isShared_2104_ = v_isSharedCheck_2140_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_searcher_2101_);
lean_inc(v_currPos_2100_);
lean_dec(v_a_2098_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2140_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v_str_2105_; lean_object* v_startInclusive_2106_; lean_object* v_endExclusive_2107_; lean_object* v_it_2109_; lean_object* v_startInclusive_2110_; lean_object* v_endExclusive_2111_; lean_object* v___x_2118_; uint8_t v_decide_2119_; 
v_str_2105_ = lean_ctor_get(v_out_2097_, 0);
v_startInclusive_2106_ = lean_ctor_get(v_out_2097_, 1);
v_endExclusive_2107_ = lean_ctor_get(v_out_2097_, 2);
v___x_2118_ = lean_nat_sub(v_endExclusive_2107_, v_startInclusive_2106_);
v_decide_2119_ = lean_nat_dec_eq(v_searcher_2101_, v___x_2118_);
if (v_decide_2119_ == 0)
{
uint32_t v___x_2120_; lean_object* v___x_2121_; uint32_t v___x_2122_; uint8_t v___x_2123_; 
lean_dec(v___x_2118_);
v___x_2120_ = 61;
v___x_2121_ = lean_nat_add(v_startInclusive_2106_, v_searcher_2101_);
v___x_2122_ = lean_string_utf8_get_fast(v_str_2105_, v___x_2121_);
v___x_2123_ = lean_uint32_dec_eq(v___x_2122_, v___x_2120_);
if (v___x_2123_ == 0)
{
lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2127_; 
lean_dec(v_searcher_2101_);
v___x_2124_ = lean_string_utf8_next_fast(v_str_2105_, v___x_2121_);
lean_dec(v___x_2121_);
v___x_2125_ = lean_nat_sub(v___x_2124_, v_startInclusive_2106_);
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 1, v___x_2125_);
v___x_2127_ = v___x_2103_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v_currPos_2100_);
lean_ctor_set(v_reuseFailAlloc_2129_, 1, v___x_2125_);
v___x_2127_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
v_a_2098_ = v___x_2127_;
goto _start;
}
}
else
{
lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v_slice_2133_; lean_object* v_nextIt_2135_; 
v___x_2130_ = lean_string_utf8_next_fast(v_str_2105_, v___x_2121_);
v___x_2131_ = lean_nat_sub(v___x_2130_, v___x_2121_);
lean_dec(v___x_2121_);
v___x_2132_ = lean_nat_add(v_searcher_2101_, v___x_2131_);
lean_dec(v___x_2131_);
v_slice_2133_ = l_String_Slice_subslice_x21(v_out_2097_, v_currPos_2100_, v_searcher_2101_);
lean_inc(v___x_2132_);
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 1, v___x_2132_);
lean_ctor_set(v___x_2103_, 0, v___x_2132_);
v_nextIt_2135_ = v___x_2103_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v___x_2132_);
lean_ctor_set(v_reuseFailAlloc_2138_, 1, v___x_2132_);
v_nextIt_2135_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
lean_object* v_startInclusive_2136_; lean_object* v_endExclusive_2137_; 
v_startInclusive_2136_ = lean_ctor_get(v_slice_2133_, 0);
lean_inc(v_startInclusive_2136_);
v_endExclusive_2137_ = lean_ctor_get(v_slice_2133_, 1);
lean_inc(v_endExclusive_2137_);
lean_dec_ref(v_slice_2133_);
v_it_2109_ = v_nextIt_2135_;
v_startInclusive_2110_ = v_startInclusive_2136_;
v_endExclusive_2111_ = v_endExclusive_2137_;
goto v___jp_2108_;
}
}
}
else
{
lean_object* v___x_2139_; 
lean_del_object(v___x_2103_);
lean_dec(v_searcher_2101_);
v___x_2139_ = lean_box(1);
v_it_2109_ = v___x_2139_;
v_startInclusive_2110_ = v_currPos_2100_;
v_endExclusive_2111_ = v___x_2118_;
goto v___jp_2108_;
}
v___jp_2108_:
{
lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2112_ = lean_nat_add(v_startInclusive_2106_, v_startInclusive_2110_);
lean_dec(v_startInclusive_2110_);
v___x_2113_ = lean_nat_add(v_startInclusive_2106_, v_endExclusive_2111_);
lean_dec(v_endExclusive_2111_);
lean_inc_ref(v_str_2105_);
v___x_2114_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2114_, 0, v_str_2105_);
lean_ctor_set(v___x_2114_, 1, v___x_2112_);
lean_ctor_set(v___x_2114_, 2, v___x_2113_);
v___x_2115_ = l_String_Slice_toString(v___x_2114_);
lean_dec_ref_known(v___x_2114_, 3);
v___x_2116_ = lean_array_push(v_b_2099_, v___x_2115_);
v_a_2098_ = v_it_2109_;
v_b_2099_ = v___x_2116_;
goto _start;
}
}
}
else
{
return v_b_2099_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg___boxed(lean_object* v_out_2141_, lean_object* v_a_2142_, lean_object* v_b_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(v_out_2141_, v_a_2142_, v_b_2143_);
lean_dec_ref(v_out_2141_);
return v_res_2144_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(lean_object* v___x_2148_, lean_object* v___x_2149_, lean_object* v___x_2150_, lean_object* v_a_2151_, lean_object* v_b_2152_){
_start:
{
lean_object* v_it_2154_; lean_object* v_startInclusive_2155_; lean_object* v_endExclusive_2156_; 
if (lean_obj_tag(v_a_2151_) == 0)
{
lean_object* v_currPos_2181_; lean_object* v_searcher_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2211_; 
v_currPos_2181_ = lean_ctor_get(v_a_2151_, 0);
v_searcher_2182_ = lean_ctor_get(v_a_2151_, 1);
v_isSharedCheck_2211_ = !lean_is_exclusive(v_a_2151_);
if (v_isSharedCheck_2211_ == 0)
{
v___x_2184_ = v_a_2151_;
v_isShared_2185_ = v_isSharedCheck_2211_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_searcher_2182_);
lean_inc(v_currPos_2181_);
lean_dec(v_a_2151_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2211_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v_str_2186_; lean_object* v_startInclusive_2187_; lean_object* v_endExclusive_2188_; lean_object* v___x_2189_; uint8_t v_decide_2190_; 
v_str_2186_ = lean_ctor_get(v___x_2149_, 0);
v_startInclusive_2187_ = lean_ctor_get(v___x_2149_, 1);
v_endExclusive_2188_ = lean_ctor_get(v___x_2149_, 2);
v___x_2189_ = lean_nat_sub(v_endExclusive_2188_, v_startInclusive_2187_);
v_decide_2190_ = lean_nat_dec_eq(v_searcher_2182_, v___x_2189_);
lean_dec(v___x_2189_);
if (v_decide_2190_ == 0)
{
uint32_t v___x_2191_; lean_object* v___x_2192_; uint32_t v___x_2193_; uint8_t v___x_2194_; 
v___x_2191_ = 38;
v___x_2192_ = lean_nat_add(v_startInclusive_2187_, v_searcher_2182_);
v___x_2193_ = lean_string_utf8_get_fast(v_str_2186_, v___x_2192_);
v___x_2194_ = lean_uint32_dec_eq(v___x_2193_, v___x_2191_);
if (v___x_2194_ == 0)
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2198_; 
lean_dec(v_searcher_2182_);
v___x_2195_ = lean_string_utf8_next_fast(v_str_2186_, v___x_2192_);
lean_dec(v___x_2192_);
v___x_2196_ = lean_nat_sub(v___x_2195_, v_startInclusive_2187_);
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 1, v___x_2196_);
v___x_2198_ = v___x_2184_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v_currPos_2181_);
lean_ctor_set(v_reuseFailAlloc_2200_, 1, v___x_2196_);
v___x_2198_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
v_a_2151_ = v___x_2198_;
goto _start;
}
}
else
{
lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v_slice_2204_; lean_object* v_nextIt_2206_; 
v___x_2201_ = lean_string_utf8_next_fast(v_str_2186_, v___x_2192_);
v___x_2202_ = lean_nat_sub(v___x_2201_, v___x_2192_);
lean_dec(v___x_2192_);
v___x_2203_ = lean_nat_add(v_searcher_2182_, v___x_2202_);
lean_dec(v___x_2202_);
v_slice_2204_ = l_String_Slice_subslice_x21(v___x_2149_, v_currPos_2181_, v_searcher_2182_);
lean_inc(v___x_2203_);
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 1, v___x_2203_);
lean_ctor_set(v___x_2184_, 0, v___x_2203_);
v_nextIt_2206_ = v___x_2184_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v___x_2203_);
lean_ctor_set(v_reuseFailAlloc_2209_, 1, v___x_2203_);
v_nextIt_2206_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
lean_object* v_startInclusive_2207_; lean_object* v_endExclusive_2208_; 
v_startInclusive_2207_ = lean_ctor_get(v_slice_2204_, 0);
lean_inc(v_startInclusive_2207_);
v_endExclusive_2208_ = lean_ctor_get(v_slice_2204_, 1);
lean_inc(v_endExclusive_2208_);
lean_dec_ref(v_slice_2204_);
v_it_2154_ = v_nextIt_2206_;
v_startInclusive_2155_ = v_startInclusive_2207_;
v_endExclusive_2156_ = v_endExclusive_2208_;
goto v___jp_2153_;
}
}
}
else
{
lean_object* v___x_2210_; 
lean_del_object(v___x_2184_);
lean_dec(v_searcher_2182_);
v___x_2210_ = lean_box(1);
lean_inc(v___x_2150_);
v_it_2154_ = v___x_2210_;
v_startInclusive_2155_ = v_currPos_2181_;
v_endExclusive_2156_ = v___x_2150_;
goto v___jp_2153_;
}
}
}
else
{
lean_object* v___x_2212_; 
lean_dec(v___x_2150_);
lean_dec_ref(v___x_2148_);
v___x_2212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2212_, 0, v_b_2152_);
return v___x_2212_;
}
v___jp_2153_:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
lean_inc_ref(v___x_2148_);
v___x_2157_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2157_, 0, v___x_2148_);
lean_ctor_set(v___x_2157_, 1, v_startInclusive_2155_);
lean_ctor_set(v___x_2157_, 2, v_endExclusive_2156_);
v___x_2158_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0);
v___x_2159_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0));
v___x_2160_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(v___x_2157_, v___x_2158_, v___x_2159_);
lean_dec_ref_known(v___x_2157_, 3);
v___x_2161_ = lean_array_to_list(v___x_2160_);
if (lean_obj_tag(v___x_2161_) == 0)
{
v_a_2151_ = v_it_2154_;
goto _start;
}
else
{
lean_object* v_tail_2163_; 
v_tail_2163_ = lean_ctor_get(v___x_2161_, 1);
if (lean_obj_tag(v_tail_2163_) == 0)
{
lean_object* v_head_2164_; lean_object* v___x_2165_; 
v_head_2164_ = lean_ctor_get(v___x_2161_, 0);
lean_inc(v_head_2164_);
lean_dec_ref_known(v___x_2161_, 2);
v___x_2165_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v_head_2164_);
if (lean_obj_tag(v___x_2165_) == 0)
{
lean_object* v___x_2166_; 
lean_dec(v_it_2154_);
lean_dec_ref(v_b_2152_);
lean_dec(v___x_2150_);
lean_dec_ref(v___x_2148_);
v___x_2166_ = lean_box(0);
return v___x_2166_;
}
else
{
lean_object* v_val_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
v_val_2167_ = lean_ctor_get(v___x_2165_, 0);
lean_inc(v_val_2167_);
lean_dec_ref_known(v___x_2165_, 1);
v___x_2168_ = lean_box(0);
v___x_2169_ = l_Std_Http_URI_Query_insertEncoded(v_b_2152_, v_val_2167_, v___x_2168_);
v_a_2151_ = v_it_2154_;
v_b_2152_ = v___x_2169_;
goto _start;
}
}
else
{
lean_object* v_head_2171_; lean_object* v___x_2172_; 
lean_inc(v_tail_2163_);
v_head_2171_ = lean_ctor_get(v___x_2161_, 0);
lean_inc(v_head_2171_);
lean_dec_ref_known(v___x_2161_, 2);
v___x_2172_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v_head_2171_);
if (lean_obj_tag(v___x_2172_) == 0)
{
lean_object* v___x_2173_; 
lean_dec(v_tail_2163_);
lean_dec(v_it_2154_);
lean_dec_ref(v_b_2152_);
lean_dec(v___x_2150_);
lean_dec_ref(v___x_2148_);
v___x_2173_ = lean_box(0);
return v___x_2173_;
}
else
{
lean_object* v_val_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; 
v_val_2174_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_val_2174_);
lean_dec_ref_known(v___x_2172_, 1);
v___x_2175_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1));
v___x_2176_ = l_String_intercalate(v___x_2175_, v_tail_2163_);
v___x_2177_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v___x_2176_);
if (lean_obj_tag(v___x_2177_) == 0)
{
lean_object* v___x_2178_; 
lean_dec(v_val_2174_);
lean_dec(v_it_2154_);
lean_dec_ref(v_b_2152_);
lean_dec(v___x_2150_);
lean_dec_ref(v___x_2148_);
v___x_2178_ = lean_box(0);
return v___x_2178_;
}
else
{
lean_object* v___x_2179_; 
v___x_2179_ = l_Std_Http_URI_Query_insertEncoded(v_b_2152_, v_val_2174_, v___x_2177_);
v_a_2151_ = v_it_2154_;
v_b_2152_ = v___x_2179_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___boxed(lean_object* v___x_2213_, lean_object* v___x_2214_, lean_object* v___x_2215_, lean_object* v_a_2216_, lean_object* v_b_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2213_, v___x_2214_, v___x_2215_, v_a_2216_, v_b_2217_);
lean_dec_ref(v___x_2214_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(lean_object* v___x_2219_, lean_object* v___x_2220_, lean_object* v___x_2221_, lean_object* v_a_2222_, lean_object* v_b_2223_){
_start:
{
lean_object* v_it_2225_; lean_object* v_startInclusive_2226_; lean_object* v_endExclusive_2227_; 
if (lean_obj_tag(v_a_2222_) == 0)
{
lean_object* v_currPos_2252_; lean_object* v_searcher_2253_; lean_object* v___x_2255_; uint8_t v_isShared_2256_; uint8_t v_isSharedCheck_2282_; 
v_currPos_2252_ = lean_ctor_get(v_a_2222_, 0);
v_searcher_2253_ = lean_ctor_get(v_a_2222_, 1);
v_isSharedCheck_2282_ = !lean_is_exclusive(v_a_2222_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2255_ = v_a_2222_;
v_isShared_2256_ = v_isSharedCheck_2282_;
goto v_resetjp_2254_;
}
else
{
lean_inc(v_searcher_2253_);
lean_inc(v_currPos_2252_);
lean_dec(v_a_2222_);
v___x_2255_ = lean_box(0);
v_isShared_2256_ = v_isSharedCheck_2282_;
goto v_resetjp_2254_;
}
v_resetjp_2254_:
{
lean_object* v_str_2257_; lean_object* v_startInclusive_2258_; lean_object* v_endExclusive_2259_; lean_object* v___x_2260_; uint8_t v_decide_2261_; 
v_str_2257_ = lean_ctor_get(v___x_2220_, 0);
v_startInclusive_2258_ = lean_ctor_get(v___x_2220_, 1);
v_endExclusive_2259_ = lean_ctor_get(v___x_2220_, 2);
v___x_2260_ = lean_nat_sub(v_endExclusive_2259_, v_startInclusive_2258_);
v_decide_2261_ = lean_nat_dec_eq(v_searcher_2253_, v___x_2260_);
lean_dec(v___x_2260_);
if (v_decide_2261_ == 0)
{
lean_object* v___x_2262_; uint32_t v___x_2263_; uint32_t v___x_2264_; uint8_t v___x_2265_; 
v___x_2262_ = lean_nat_add(v_startInclusive_2258_, v_searcher_2253_);
v___x_2263_ = lean_string_utf8_get_fast(v_str_2257_, v___x_2262_);
v___x_2264_ = 38;
v___x_2265_ = lean_uint32_dec_eq(v___x_2263_, v___x_2264_);
if (v___x_2265_ == 0)
{
lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2269_; 
lean_dec(v_searcher_2253_);
v___x_2266_ = lean_string_utf8_next_fast(v_str_2257_, v___x_2262_);
lean_dec(v___x_2262_);
v___x_2267_ = lean_nat_sub(v___x_2266_, v_startInclusive_2258_);
if (v_isShared_2256_ == 0)
{
lean_ctor_set(v___x_2255_, 1, v___x_2267_);
v___x_2269_ = v___x_2255_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v_currPos_2252_);
lean_ctor_set(v_reuseFailAlloc_2271_, 1, v___x_2267_);
v___x_2269_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
lean_object* v___x_2270_; 
v___x_2270_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2219_, v___x_2220_, v___x_2221_, v___x_2269_, v_b_2223_);
return v___x_2270_;
}
}
else
{
lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v_slice_2275_; lean_object* v_nextIt_2277_; 
v___x_2272_ = lean_string_utf8_next_fast(v_str_2257_, v___x_2262_);
v___x_2273_ = lean_nat_sub(v___x_2272_, v___x_2262_);
lean_dec(v___x_2262_);
v___x_2274_ = lean_nat_add(v_searcher_2253_, v___x_2273_);
lean_dec(v___x_2273_);
v_slice_2275_ = l_String_Slice_subslice_x21(v___x_2220_, v_currPos_2252_, v_searcher_2253_);
lean_inc(v___x_2274_);
if (v_isShared_2256_ == 0)
{
lean_ctor_set(v___x_2255_, 1, v___x_2274_);
lean_ctor_set(v___x_2255_, 0, v___x_2274_);
v_nextIt_2277_ = v___x_2255_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v___x_2274_);
lean_ctor_set(v_reuseFailAlloc_2280_, 1, v___x_2274_);
v_nextIt_2277_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
lean_object* v_startInclusive_2278_; lean_object* v_endExclusive_2279_; 
v_startInclusive_2278_ = lean_ctor_get(v_slice_2275_, 0);
lean_inc(v_startInclusive_2278_);
v_endExclusive_2279_ = lean_ctor_get(v_slice_2275_, 1);
lean_inc(v_endExclusive_2279_);
lean_dec_ref(v_slice_2275_);
v_it_2225_ = v_nextIt_2277_;
v_startInclusive_2226_ = v_startInclusive_2278_;
v_endExclusive_2227_ = v_endExclusive_2279_;
goto v___jp_2224_;
}
}
}
else
{
lean_object* v___x_2281_; 
lean_del_object(v___x_2255_);
lean_dec(v_searcher_2253_);
v___x_2281_ = lean_box(1);
lean_inc(v___x_2221_);
v_it_2225_ = v___x_2281_;
v_startInclusive_2226_ = v_currPos_2252_;
v_endExclusive_2227_ = v___x_2221_;
goto v___jp_2224_;
}
}
}
else
{
lean_object* v___x_2283_; 
lean_dec(v___x_2221_);
lean_dec_ref(v___x_2219_);
v___x_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2283_, 0, v_b_2223_);
return v___x_2283_;
}
v___jp_2224_:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; 
lean_inc_ref(v___x_2219_);
v___x_2228_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2219_);
lean_ctor_set(v___x_2228_, 1, v_startInclusive_2226_);
lean_ctor_set(v___x_2228_, 2, v_endExclusive_2227_);
v___x_2229_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__2___closed__0);
v___x_2230_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__0));
v___x_2231_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(v___x_2228_, v___x_2229_, v___x_2230_);
lean_dec_ref_known(v___x_2228_, 3);
v___x_2232_ = lean_array_to_list(v___x_2231_);
if (lean_obj_tag(v___x_2232_) == 0)
{
lean_object* v___x_2233_; 
v___x_2233_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2219_, v___x_2220_, v___x_2221_, v_it_2225_, v_b_2223_);
return v___x_2233_;
}
else
{
lean_object* v_tail_2234_; 
v_tail_2234_ = lean_ctor_get(v___x_2232_, 1);
if (lean_obj_tag(v_tail_2234_) == 0)
{
lean_object* v_head_2235_; lean_object* v___x_2236_; 
v_head_2235_ = lean_ctor_get(v___x_2232_, 0);
lean_inc(v_head_2235_);
lean_dec_ref_known(v___x_2232_, 2);
v___x_2236_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v_head_2235_);
if (lean_obj_tag(v___x_2236_) == 0)
{
lean_object* v___x_2237_; 
lean_dec(v_it_2225_);
lean_dec_ref(v_b_2223_);
lean_dec(v___x_2221_);
lean_dec_ref(v___x_2219_);
v___x_2237_ = lean_box(0);
return v___x_2237_;
}
else
{
lean_object* v_val_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; 
v_val_2238_ = lean_ctor_get(v___x_2236_, 0);
lean_inc(v_val_2238_);
lean_dec_ref_known(v___x_2236_, 1);
v___x_2239_ = lean_box(0);
v___x_2240_ = l_Std_Http_URI_Query_insertEncoded(v_b_2223_, v_val_2238_, v___x_2239_);
v___x_2241_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2219_, v___x_2220_, v___x_2221_, v_it_2225_, v___x_2240_);
return v___x_2241_;
}
}
else
{
lean_object* v_head_2242_; lean_object* v___x_2243_; 
lean_inc(v_tail_2234_);
v_head_2242_ = lean_ctor_get(v___x_2232_, 0);
lean_inc(v_head_2242_);
lean_dec_ref_known(v___x_2232_, 2);
v___x_2243_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v_head_2242_);
if (lean_obj_tag(v___x_2243_) == 0)
{
lean_object* v___x_2244_; 
lean_dec(v_tail_2234_);
lean_dec(v_it_2225_);
lean_dec_ref(v_b_2223_);
lean_dec(v___x_2221_);
lean_dec_ref(v___x_2219_);
v___x_2244_ = lean_box(0);
return v___x_2244_;
}
else
{
lean_object* v_val_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v_val_2245_ = lean_ctor_get(v___x_2243_, 0);
lean_inc(v_val_2245_);
lean_dec_ref_known(v___x_2243_, 1);
v___x_2246_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg___closed__1));
v___x_2247_ = l_String_intercalate(v___x_2246_, v_tail_2234_);
v___x_2248_ = l_Std_Http_URI_EncodedQueryParam_fromString_x3f(v___x_2247_);
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_object* v___x_2249_; 
lean_dec(v_val_2245_);
lean_dec(v_it_2225_);
lean_dec_ref(v_b_2223_);
lean_dec(v___x_2221_);
lean_dec_ref(v___x_2219_);
v___x_2249_ = lean_box(0);
return v___x_2249_;
}
else
{
lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2250_ = l_Std_Http_URI_Query_insertEncoded(v_b_2223_, v_val_2245_, v___x_2248_);
v___x_2251_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2219_, v___x_2220_, v___x_2221_, v_it_2225_, v___x_2250_);
return v___x_2251_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg___boxed(lean_object* v___x_2284_, lean_object* v___x_2285_, lean_object* v___x_2286_, lean_object* v_a_2287_, lean_object* v_b_2288_){
_start:
{
lean_object* v_res_2289_; 
v_res_2289_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(v___x_2284_, v___x_2285_, v___x_2286_, v_a_2287_, v_b_2288_);
lean_dec_ref(v___x_2285_);
return v_res_2289_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(lean_object* v_config_2295_, lean_object* v_a_2296_){
_start:
{
lean_object* v_maxQueryLength_2297_; lean_object* v_maxQueryParams_2298_; lean_object* v___f_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v_snd_2302_; lean_object* v_fst_2303_; lean_object* v_fst_2304_; lean_object* v_array_2305_; lean_object* v_idx_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2356_; 
v_maxQueryLength_2297_ = lean_ctor_get(v_config_2295_, 4);
lean_inc(v_maxQueryLength_2297_);
v_maxQueryParams_2298_ = lean_ctor_get(v_config_2295_, 8);
lean_inc(v_maxQueryParams_2298_);
lean_dec_ref(v_config_2295_);
v___f_2299_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0));
v___x_2300_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_2296_);
v___x_2301_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2299_, v_maxQueryLength_2297_, v___x_2300_, v_a_2296_);
lean_dec(v_maxQueryLength_2297_);
v_snd_2302_ = lean_ctor_get(v___x_2301_, 1);
lean_inc(v_snd_2302_);
v_fst_2303_ = lean_ctor_get(v___x_2301_, 0);
lean_inc(v_fst_2303_);
lean_dec_ref(v___x_2301_);
v_fst_2304_ = lean_ctor_get(v_snd_2302_, 0);
lean_inc(v_fst_2304_);
lean_dec(v_snd_2302_);
v_array_2305_ = lean_ctor_get(v_a_2296_, 0);
v_idx_2306_ = lean_ctor_get(v_a_2296_, 1);
v_isSharedCheck_2356_ = !lean_is_exclusive(v_a_2296_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2308_ = v_a_2296_;
v_isShared_2309_ = v_isSharedCheck_2356_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_idx_2306_);
lean_inc(v_array_2305_);
lean_dec(v_a_2296_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2356_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
lean_object* v_lower_2311_; lean_object* v_upper_2312_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___y_2353_; uint8_t v___x_2355_; 
v___x_2350_ = lean_nat_add(v_idx_2306_, v_fst_2303_);
lean_dec(v_fst_2303_);
v___x_2351_ = lean_byte_array_size(v_array_2305_);
v___x_2355_ = lean_nat_dec_le(v_idx_2306_, v___x_2300_);
if (v___x_2355_ == 0)
{
v___y_2353_ = v_idx_2306_;
goto v___jp_2352_;
}
else
{
lean_dec(v_idx_2306_);
v___y_2353_ = v___x_2300_;
goto v___jp_2352_;
}
v___jp_2310_:
{
lean_object* v___x_2313_; lean_object* v___x_2314_; uint8_t v___x_2315_; 
v___x_2313_ = l_ByteArray_toByteSlice(v_array_2305_, v_lower_2311_, v_upper_2312_);
v___x_2314_ = l_ByteSlice_toByteArray(v___x_2313_);
v___x_2315_ = lean_string_validate_utf8(v___x_2314_);
if (v___x_2315_ == 0)
{
lean_object* v___x_2316_; lean_object* v___x_2318_; 
lean_dec_ref(v___x_2314_);
lean_dec(v_maxQueryParams_2298_);
v___x_2316_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2));
if (v_isShared_2309_ == 0)
{
lean_ctor_set_tag(v___x_2308_, 1);
lean_ctor_set(v___x_2308_, 1, v___x_2316_);
lean_ctor_set(v___x_2308_, 0, v_fst_2304_);
v___x_2318_ = v___x_2308_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_fst_2304_);
lean_ctor_set(v_reuseFailAlloc_2319_, 1, v___x_2316_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
else
{
lean_object* v___x_2320_; lean_object* v___x_2321_; uint8_t v___x_2322_; 
v___x_2320_ = lean_string_from_utf8_unchecked(v___x_2314_);
v___x_2321_ = lean_string_utf8_byte_size(v___x_2320_);
v___x_2322_ = lean_nat_dec_eq(v___x_2321_, v___x_2300_);
if (v___x_2322_ == 0)
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; uint8_t v___x_2326_; 
lean_inc_ref(v___x_2320_);
v___x_2323_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2320_);
lean_ctor_set(v___x_2323_, 1, v___x_2300_);
lean_ctor_set(v___x_2323_, 2, v___x_2321_);
v___x_2324_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__0___closed__0);
v___x_2325_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(v___x_2320_, v___x_2323_, v___x_2321_, v___x_2324_, v___x_2300_);
v___x_2326_ = lean_nat_dec_lt(v_maxQueryParams_2298_, v___x_2325_);
lean_dec(v___x_2325_);
if (v___x_2326_ == 0)
{
lean_object* v___x_2327_; lean_object* v___x_2328_; 
lean_dec(v_maxQueryParams_2298_);
v___x_2327_ = l_Std_Http_URI_Query_empty;
v___x_2328_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(v___x_2320_, v___x_2323_, v___x_2321_, v___x_2324_, v___x_2327_);
lean_dec_ref_known(v___x_2323_, 3);
if (lean_obj_tag(v___x_2328_) == 1)
{
lean_object* v_val_2329_; lean_object* v___x_2331_; 
v_val_2329_ = lean_ctor_get(v___x_2328_, 0);
lean_inc(v_val_2329_);
lean_dec_ref_known(v___x_2328_, 1);
if (v_isShared_2309_ == 0)
{
lean_ctor_set(v___x_2308_, 1, v_val_2329_);
lean_ctor_set(v___x_2308_, 0, v_fst_2304_);
v___x_2331_ = v___x_2308_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v_fst_2304_);
lean_ctor_set(v_reuseFailAlloc_2332_, 1, v_val_2329_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
return v___x_2331_;
}
}
else
{
lean_object* v___x_2333_; lean_object* v___x_2335_; 
lean_dec(v___x_2328_);
v___x_2333_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__2));
if (v_isShared_2309_ == 0)
{
lean_ctor_set_tag(v___x_2308_, 1);
lean_ctor_set(v___x_2308_, 1, v___x_2333_);
lean_ctor_set(v___x_2308_, 0, v_fst_2304_);
v___x_2335_ = v___x_2308_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_fst_2304_);
lean_ctor_set(v_reuseFailAlloc_2336_, 1, v___x_2333_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
else
{
lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2344_; 
lean_dec_ref_known(v___x_2323_, 3);
lean_dec_ref(v___x_2320_);
v___x_2337_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__3));
v___x_2338_ = l_Nat_reprFast(v_maxQueryParams_2298_);
v___x_2339_ = lean_string_append(v___x_2337_, v___x_2338_);
lean_dec_ref(v___x_2338_);
v___x_2340_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00Std_Http_URI_Parser_parsePath_spec__0_spec__0___redArg___closed__1));
v___x_2341_ = lean_string_append(v___x_2339_, v___x_2340_);
v___x_2342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2341_);
if (v_isShared_2309_ == 0)
{
lean_ctor_set_tag(v___x_2308_, 1);
lean_ctor_set(v___x_2308_, 1, v___x_2342_);
lean_ctor_set(v___x_2308_, 0, v_fst_2304_);
v___x_2344_ = v___x_2308_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_fst_2304_);
lean_ctor_set(v_reuseFailAlloc_2345_, 1, v___x_2342_);
v___x_2344_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
return v___x_2344_;
}
}
}
else
{
lean_object* v___x_2346_; lean_object* v___x_2348_; 
lean_dec_ref(v___x_2320_);
lean_dec(v_maxQueryParams_2298_);
v___x_2346_ = l_Std_Http_URI_Query_empty;
if (v_isShared_2309_ == 0)
{
lean_ctor_set(v___x_2308_, 1, v___x_2346_);
lean_ctor_set(v___x_2308_, 0, v_fst_2304_);
v___x_2348_ = v___x_2308_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_fst_2304_);
lean_ctor_set(v_reuseFailAlloc_2349_, 1, v___x_2346_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
}
v___jp_2352_:
{
uint8_t v___x_2354_; 
v___x_2354_ = lean_nat_dec_le(v___x_2350_, v___x_2351_);
if (v___x_2354_ == 0)
{
lean_dec(v___x_2350_);
v_lower_2311_ = v___y_2353_;
v_upper_2312_ = v___x_2351_;
goto v___jp_2310_;
}
else
{
v_lower_2311_ = v___y_2353_;
v_upper_2312_ = v___x_2350_;
goto v___jp_2310_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1(lean_object* v___x_2357_, lean_object* v___x_2358_, lean_object* v___x_2359_, lean_object* v_inst_2360_, lean_object* v_R_2361_, lean_object* v_a_2362_, lean_object* v_b_2363_, lean_object* v_c_2364_){
_start:
{
lean_object* v___x_2365_; 
v___x_2365_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___redArg(v___x_2357_, v___x_2358_, v___x_2359_, v_a_2362_, v_b_2363_);
return v___x_2365_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1___boxed(lean_object* v___x_2366_, lean_object* v___x_2367_, lean_object* v___x_2368_, lean_object* v_inst_2369_, lean_object* v_R_2370_, lean_object* v_a_2371_, lean_object* v_b_2372_, lean_object* v_c_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1(v___x_2366_, v___x_2367_, v___x_2368_, v_inst_2369_, v_R_2370_, v_a_2371_, v_b_2372_, v_c_2373_);
lean_dec(v___x_2368_);
lean_dec_ref(v___x_2367_);
lean_dec_ref(v___x_2366_);
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3(lean_object* v_out_2375_, lean_object* v_inst_2376_, lean_object* v_R_2377_, lean_object* v_a_2378_, lean_object* v_b_2379_){
_start:
{
lean_object* v___x_2380_; 
v___x_2380_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___redArg(v_out_2375_, v_a_2378_, v_b_2379_);
return v___x_2380_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3___boxed(lean_object* v_out_2381_, lean_object* v_inst_2382_, lean_object* v_R_2383_, lean_object* v_a_2384_, lean_object* v_b_2385_){
_start:
{
lean_object* v_res_2386_; 
v_res_2386_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__3(v_out_2381_, v_inst_2382_, v_R_2383_, v_a_2384_, v_b_2385_);
lean_dec_ref(v_out_2381_);
return v_res_2386_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4(lean_object* v___x_2387_, lean_object* v___x_2388_, lean_object* v___x_2389_, lean_object* v_inst_2390_, lean_object* v_R_2391_, lean_object* v_a_2392_, lean_object* v_b_2393_, lean_object* v_c_2394_){
_start:
{
lean_object* v___x_2395_; 
v___x_2395_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___redArg(v___x_2387_, v___x_2388_, v___x_2389_, v_a_2392_, v_b_2393_);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4___boxed(lean_object* v___x_2396_, lean_object* v___x_2397_, lean_object* v___x_2398_, lean_object* v_inst_2399_, lean_object* v_R_2400_, lean_object* v_a_2401_, lean_object* v_b_2402_, lean_object* v_c_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l_WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4(v___x_2396_, v___x_2397_, v___x_2398_, v_inst_2399_, v_R_2400_, v_a_2401_, v_b_2402_, v_c_2403_);
lean_dec_ref(v___x_2397_);
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1(lean_object* v___x_2405_, lean_object* v___x_2406_, lean_object* v___x_2407_, lean_object* v_inst_2408_, lean_object* v_R_2409_, lean_object* v_a_2410_, lean_object* v_b_2411_, lean_object* v_c_2412_){
_start:
{
lean_object* v___x_2413_; 
v___x_2413_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___redArg(v___x_2406_, v___x_2407_, v_a_2410_, v_b_2411_);
return v___x_2413_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1___boxed(lean_object* v___x_2414_, lean_object* v___x_2415_, lean_object* v___x_2416_, lean_object* v_inst_2417_, lean_object* v_R_2418_, lean_object* v_a_2419_, lean_object* v_b_2420_, lean_object* v_c_2421_){
_start:
{
lean_object* v_res_2422_; 
v_res_2422_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__1_spec__1(v___x_2414_, v___x_2415_, v___x_2416_, v_inst_2417_, v_R_2418_, v_a_2419_, v_b_2420_, v_c_2421_);
lean_dec(v___x_2416_);
lean_dec_ref(v___x_2415_);
lean_dec_ref(v___x_2414_);
return v_res_2422_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5(lean_object* v___x_2423_, lean_object* v___x_2424_, lean_object* v___x_2425_, lean_object* v_inst_2426_, lean_object* v_R_2427_, lean_object* v_a_2428_, lean_object* v_b_2429_, lean_object* v_c_2430_){
_start:
{
lean_object* v___x_2431_; 
v___x_2431_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___redArg(v___x_2423_, v___x_2424_, v___x_2425_, v_a_2428_, v_b_2429_);
return v___x_2431_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5___boxed(lean_object* v___x_2432_, lean_object* v___x_2433_, lean_object* v___x_2434_, lean_object* v_inst_2435_, lean_object* v_R_2436_, lean_object* v_a_2437_, lean_object* v_b_2438_, lean_object* v_c_2439_){
_start:
{
lean_object* v_res_2440_; 
v_res_2440_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery_spec__4_spec__5(v___x_2432_, v___x_2433_, v___x_2434_, v_inst_2435_, v_R_2436_, v_a_2437_, v_b_2438_, v_c_2439_);
lean_dec_ref(v___x_2433_);
return v_res_2440_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(lean_object* v_config_2444_, lean_object* v_a_2445_){
_start:
{
lean_object* v_maxFragmentLength_2446_; lean_object* v___f_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v_snd_2450_; lean_object* v_fst_2451_; lean_object* v_fst_2452_; lean_object* v_array_2453_; lean_object* v_idx_2454_; lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2478_; 
v_maxFragmentLength_2446_ = lean_ctor_get(v_config_2444_, 5);
v___f_2447_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery___closed__0));
v___x_2448_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_2445_);
v___x_2449_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2447_, v_maxFragmentLength_2446_, v___x_2448_, v_a_2445_);
v_snd_2450_ = lean_ctor_get(v___x_2449_, 1);
lean_inc(v_snd_2450_);
v_fst_2451_ = lean_ctor_get(v___x_2449_, 0);
lean_inc(v_fst_2451_);
lean_dec_ref(v___x_2449_);
v_fst_2452_ = lean_ctor_get(v_snd_2450_, 0);
lean_inc(v_fst_2452_);
lean_dec(v_snd_2450_);
v_array_2453_ = lean_ctor_get(v_a_2445_, 0);
v_idx_2454_ = lean_ctor_get(v_a_2445_, 1);
v_isSharedCheck_2478_ = !lean_is_exclusive(v_a_2445_);
if (v_isSharedCheck_2478_ == 0)
{
v___x_2456_ = v_a_2445_;
v_isShared_2457_ = v_isSharedCheck_2478_;
goto v_resetjp_2455_;
}
else
{
lean_inc(v_idx_2454_);
lean_inc(v_array_2453_);
lean_dec(v_a_2445_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2478_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
lean_object* v_lower_2459_; lean_object* v_upper_2460_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___y_2475_; uint8_t v___x_2477_; 
v___x_2472_ = lean_nat_add(v_idx_2454_, v_fst_2451_);
lean_dec(v_fst_2451_);
v___x_2473_ = lean_byte_array_size(v_array_2453_);
v___x_2477_ = lean_nat_dec_le(v_idx_2454_, v___x_2448_);
if (v___x_2477_ == 0)
{
v___y_2475_ = v_idx_2454_;
goto v___jp_2474_;
}
else
{
lean_dec(v_idx_2454_);
v___y_2475_ = v___x_2448_;
goto v___jp_2474_;
}
v___jp_2458_:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2461_ = l_ByteArray_toByteSlice(v_array_2453_, v_lower_2459_, v_upper_2460_);
v___x_2462_ = l_ByteSlice_toByteArray(v___x_2461_);
v___x_2463_ = l_Std_Http_URI_EncodedFragment_ofByteArray_x3f(v___x_2462_);
if (lean_obj_tag(v___x_2463_) == 1)
{
lean_object* v_val_2464_; lean_object* v___x_2466_; 
v_val_2464_ = lean_ctor_get(v___x_2463_, 0);
lean_inc(v_val_2464_);
lean_dec_ref_known(v___x_2463_, 1);
if (v_isShared_2457_ == 0)
{
lean_ctor_set(v___x_2456_, 1, v_val_2464_);
lean_ctor_set(v___x_2456_, 0, v_fst_2452_);
v___x_2466_ = v___x_2456_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v_fst_2452_);
lean_ctor_set(v_reuseFailAlloc_2467_, 1, v_val_2464_);
v___x_2466_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
return v___x_2466_;
}
}
else
{
lean_object* v___x_2468_; lean_object* v___x_2470_; 
lean_dec(v___x_2463_);
v___x_2468_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___closed__1));
if (v_isShared_2457_ == 0)
{
lean_ctor_set_tag(v___x_2456_, 1);
lean_ctor_set(v___x_2456_, 1, v___x_2468_);
lean_ctor_set(v___x_2456_, 0, v_fst_2452_);
v___x_2470_ = v___x_2456_;
goto v_reusejp_2469_;
}
else
{
lean_object* v_reuseFailAlloc_2471_; 
v_reuseFailAlloc_2471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2471_, 0, v_fst_2452_);
lean_ctor_set(v_reuseFailAlloc_2471_, 1, v___x_2468_);
v___x_2470_ = v_reuseFailAlloc_2471_;
goto v_reusejp_2469_;
}
v_reusejp_2469_:
{
return v___x_2470_;
}
}
}
v___jp_2474_:
{
uint8_t v___x_2476_; 
v___x_2476_ = lean_nat_dec_le(v___x_2472_, v___x_2473_);
if (v___x_2476_ == 0)
{
lean_dec(v___x_2472_);
v_lower_2459_ = v___y_2475_;
v_upper_2460_ = v___x_2473_;
goto v___jp_2458_;
}
else
{
v_lower_2459_ = v___y_2475_;
v_upper_2460_ = v___x_2472_;
goto v___jp_2458_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment___boxed(lean_object* v_config_2479_, lean_object* v_a_2480_){
_start:
{
lean_object* v_res_2481_; 
v_res_2481_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(v_config_2479_, v_a_2480_);
lean_dec_ref(v_config_2479_);
return v_res_2481_;
}
}
static lean_object* _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1(void){
_start:
{
lean_object* v___x_2483_; lean_object* v_utf8_2484_; 
v___x_2483_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__0));
v_utf8_2484_ = lean_string_to_utf8(v___x_2483_);
return v_utf8_2484_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(lean_object* v_config_2485_, lean_object* v_a_2486_){
_start:
{
lean_object* v_utf8_2487_; lean_object* v___x_2488_; 
v_utf8_2487_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1);
lean_inc_ref(v_a_2486_);
v___x_2488_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_2487_, v_a_2486_);
if (lean_obj_tag(v___x_2488_) == 0)
{
lean_object* v_pos_2489_; uint8_t v___x_2490_; lean_object* v_pos_2492_; lean_object* v_res_2493_; lean_object* v___x_2514_; 
lean_dec_ref(v_a_2486_);
v_pos_2489_ = lean_ctor_get(v___x_2488_, 0);
lean_inc_n(v_pos_2489_, 2);
lean_dec_ref_known(v___x_2488_, 2);
v___x_2490_ = 1;
v___x_2514_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(v_config_2485_, v_pos_2489_);
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_object* v_pos_2515_; lean_object* v_res_2516_; lean_object* v___x_2517_; 
lean_dec(v_pos_2489_);
v_pos_2515_ = lean_ctor_get(v___x_2514_, 0);
lean_inc(v_pos_2515_);
v_res_2516_ = lean_ctor_get(v___x_2514_, 1);
lean_inc(v_res_2516_);
lean_dec_ref_known(v___x_2514_, 2);
v___x_2517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2517_, 0, v_res_2516_);
v_pos_2492_ = v_pos_2515_;
v_res_2493_ = v___x_2517_;
goto v___jp_2491_;
}
else
{
lean_object* v_err_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2528_; 
v_err_2518_ = lean_ctor_get(v___x_2514_, 1);
v_isSharedCheck_2528_ = !lean_is_exclusive(v___x_2514_);
if (v_isSharedCheck_2528_ == 0)
{
lean_object* v_unused_2529_; 
v_unused_2529_ = lean_ctor_get(v___x_2514_, 0);
lean_dec(v_unused_2529_);
v___x_2520_ = v___x_2514_;
v_isShared_2521_ = v_isSharedCheck_2528_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_err_2518_);
lean_dec(v___x_2514_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2528_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v_idx_2522_; uint8_t v___x_2523_; 
v_idx_2522_ = lean_ctor_get(v_pos_2489_, 1);
v___x_2523_ = lean_nat_dec_eq(v_idx_2522_, v_idx_2522_);
if (v___x_2523_ == 0)
{
lean_object* v___x_2525_; 
lean_dec_ref(v_config_2485_);
if (v_isShared_2521_ == 0)
{
lean_ctor_set(v___x_2520_, 0, v_pos_2489_);
v___x_2525_ = v___x_2520_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_pos_2489_);
lean_ctor_set(v_reuseFailAlloc_2526_, 1, v_err_2518_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
else
{
lean_object* v___x_2527_; 
lean_del_object(v___x_2520_);
lean_dec(v_err_2518_);
v___x_2527_ = lean_box(0);
v_pos_2492_ = v_pos_2489_;
v_res_2493_ = v___x_2527_;
goto v___jp_2491_;
}
}
}
v___jp_2491_:
{
lean_object* v___x_2494_; 
v___x_2494_ = l_Std_Http_URI_Parser_parsePath(v_config_2485_, v___x_2490_, v___x_2490_, v_pos_2492_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_object* v_pos_2495_; lean_object* v_res_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2504_; 
v_pos_2495_ = lean_ctor_get(v___x_2494_, 0);
v_res_2496_ = lean_ctor_get(v___x_2494_, 1);
v_isSharedCheck_2504_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2504_ == 0)
{
v___x_2498_ = v___x_2494_;
v_isShared_2499_ = v_isSharedCheck_2504_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_res_2496_);
lean_inc(v_pos_2495_);
lean_dec(v___x_2494_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2504_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
lean_object* v___x_2500_; lean_object* v___x_2502_; 
v___x_2500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2500_, 0, v_res_2493_);
lean_ctor_set(v___x_2500_, 1, v_res_2496_);
if (v_isShared_2499_ == 0)
{
lean_ctor_set(v___x_2498_, 1, v___x_2500_);
v___x_2502_ = v___x_2498_;
goto v_reusejp_2501_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v_pos_2495_);
lean_ctor_set(v_reuseFailAlloc_2503_, 1, v___x_2500_);
v___x_2502_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2501_;
}
v_reusejp_2501_:
{
return v___x_2502_;
}
}
}
else
{
lean_object* v_pos_2505_; lean_object* v_err_2506_; lean_object* v___x_2508_; uint8_t v_isShared_2509_; uint8_t v_isSharedCheck_2513_; 
lean_dec(v_res_2493_);
v_pos_2505_ = lean_ctor_get(v___x_2494_, 0);
v_err_2506_ = lean_ctor_get(v___x_2494_, 1);
v_isSharedCheck_2513_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2513_ == 0)
{
v___x_2508_ = v___x_2494_;
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
else
{
lean_inc(v_err_2506_);
lean_inc(v_pos_2505_);
lean_dec(v___x_2494_);
v___x_2508_ = lean_box(0);
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
v_resetjp_2507_:
{
lean_object* v___x_2511_; 
if (v_isShared_2509_ == 0)
{
v___x_2511_ = v___x_2508_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v_pos_2505_);
lean_ctor_set(v_reuseFailAlloc_2512_, 1, v_err_2506_);
v___x_2511_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
return v___x_2511_;
}
}
}
}
}
else
{
lean_object* v_err_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2561_; 
v_err_2530_ = lean_ctor_get(v___x_2488_, 1);
v_isSharedCheck_2561_ = !lean_is_exclusive(v___x_2488_);
if (v_isSharedCheck_2561_ == 0)
{
lean_object* v_unused_2562_; 
v_unused_2562_ = lean_ctor_get(v___x_2488_, 0);
lean_dec(v_unused_2562_);
v___x_2532_ = v___x_2488_;
v_isShared_2533_ = v_isSharedCheck_2561_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_err_2530_);
lean_dec(v___x_2488_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2561_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v_idx_2534_; uint8_t v___x_2535_; 
v_idx_2534_ = lean_ctor_get(v_a_2486_, 1);
v___x_2535_ = lean_nat_dec_eq(v_idx_2534_, v_idx_2534_);
if (v___x_2535_ == 0)
{
lean_object* v___x_2537_; 
lean_dec_ref(v_config_2485_);
if (v_isShared_2533_ == 0)
{
lean_ctor_set(v___x_2532_, 0, v_a_2486_);
v___x_2537_ = v___x_2532_;
goto v_reusejp_2536_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v_a_2486_);
lean_ctor_set(v_reuseFailAlloc_2538_, 1, v_err_2530_);
v___x_2537_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2536_;
}
v_reusejp_2536_:
{
return v___x_2537_;
}
}
else
{
uint8_t v___x_2539_; lean_object* v___x_2540_; 
lean_del_object(v___x_2532_);
lean_dec(v_err_2530_);
v___x_2539_ = 0;
v___x_2540_ = l_Std_Http_URI_Parser_parsePath(v_config_2485_, v___x_2539_, v___x_2535_, v_a_2486_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_object* v_pos_2541_; lean_object* v_res_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2551_; 
v_pos_2541_ = lean_ctor_get(v___x_2540_, 0);
v_res_2542_ = lean_ctor_get(v___x_2540_, 1);
v_isSharedCheck_2551_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2551_ == 0)
{
v___x_2544_ = v___x_2540_;
v_isShared_2545_ = v_isSharedCheck_2551_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_res_2542_);
lean_inc(v_pos_2541_);
lean_dec(v___x_2540_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2551_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2549_; 
v___x_2546_ = lean_box(0);
v___x_2547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2547_, 0, v___x_2546_);
lean_ctor_set(v___x_2547_, 1, v_res_2542_);
if (v_isShared_2545_ == 0)
{
lean_ctor_set(v___x_2544_, 1, v___x_2547_);
v___x_2549_ = v___x_2544_;
goto v_reusejp_2548_;
}
else
{
lean_object* v_reuseFailAlloc_2550_; 
v_reuseFailAlloc_2550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2550_, 0, v_pos_2541_);
lean_ctor_set(v_reuseFailAlloc_2550_, 1, v___x_2547_);
v___x_2549_ = v_reuseFailAlloc_2550_;
goto v_reusejp_2548_;
}
v_reusejp_2548_:
{
return v___x_2549_;
}
}
}
else
{
lean_object* v_pos_2552_; lean_object* v_err_2553_; lean_object* v___x_2555_; uint8_t v_isShared_2556_; uint8_t v_isSharedCheck_2560_; 
v_pos_2552_ = lean_ctor_get(v___x_2540_, 0);
v_err_2553_ = lean_ctor_get(v___x_2540_, 1);
v_isSharedCheck_2560_ = !lean_is_exclusive(v___x_2540_);
if (v_isSharedCheck_2560_ == 0)
{
v___x_2555_ = v___x_2540_;
v_isShared_2556_ = v_isSharedCheck_2560_;
goto v_resetjp_2554_;
}
else
{
lean_inc(v_err_2553_);
lean_inc(v_pos_2552_);
lean_dec(v___x_2540_);
v___x_2555_ = lean_box(0);
v_isShared_2556_ = v_isSharedCheck_2560_;
goto v_resetjp_2554_;
}
v_resetjp_2554_:
{
lean_object* v___x_2558_; 
if (v_isShared_2556_ == 0)
{
v___x_2558_ = v___x_2555_;
goto v_reusejp_2557_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v_pos_2552_);
lean_ctor_set(v_reuseFailAlloc_2559_, 1, v_err_2553_);
v___x_2558_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2557_;
}
v_reusejp_2557_:
{
return v___x_2558_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseURI(lean_object* v_config_2569_, lean_object* v_a_2570_){
_start:
{
lean_object* v___x_2571_; 
v___x_2571_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_2569_, v_a_2570_);
if (lean_obj_tag(v___x_2571_) == 0)
{
lean_object* v_pos_2572_; lean_object* v_res_2573_; lean_object* v___x_2575_; uint8_t v_isShared_2576_; uint8_t v_isSharedCheck_2704_; 
v_pos_2572_ = lean_ctor_get(v___x_2571_, 0);
v_res_2573_ = lean_ctor_get(v___x_2571_, 1);
v_isSharedCheck_2704_ = !lean_is_exclusive(v___x_2571_);
if (v_isSharedCheck_2704_ == 0)
{
v___x_2575_ = v___x_2571_;
v_isShared_2576_ = v_isSharedCheck_2704_;
goto v_resetjp_2574_;
}
else
{
lean_inc(v_res_2573_);
lean_inc(v_pos_2572_);
lean_dec(v___x_2571_);
v___x_2575_ = lean_box(0);
v_isShared_2576_ = v_isSharedCheck_2704_;
goto v_resetjp_2574_;
}
v_resetjp_2574_:
{
lean_object* v_array_2577_; lean_object* v_idx_2578_; lean_object* v___x_2579_; uint8_t v___x_2580_; 
v_array_2577_ = lean_ctor_get(v_pos_2572_, 0);
v_idx_2578_ = lean_ctor_get(v_pos_2572_, 1);
v___x_2579_ = lean_byte_array_size(v_array_2577_);
v___x_2580_ = lean_nat_dec_lt(v_idx_2578_, v___x_2579_);
if (v___x_2580_ == 0)
{
lean_object* v___x_2581_; lean_object* v___x_2583_; 
lean_dec(v_res_2573_);
lean_dec_ref(v_config_2569_);
v___x_2581_ = lean_box(0);
if (v_isShared_2576_ == 0)
{
lean_ctor_set_tag(v___x_2575_, 1);
lean_ctor_set(v___x_2575_, 1, v___x_2581_);
v___x_2583_ = v___x_2575_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v_pos_2572_);
lean_ctor_set(v_reuseFailAlloc_2584_, 1, v___x_2581_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
else
{
uint8_t v___x_2585_; uint8_t v_got_2586_; uint8_t v___x_2587_; 
v___x_2585_ = 58;
v_got_2586_ = lean_byte_array_fget(v_array_2577_, v_idx_2578_);
v___x_2587_ = lean_uint8_dec_eq(v_got_2586_, v___x_2585_);
if (v___x_2587_ == 0)
{
lean_object* v___x_2588_; lean_object* v___x_2590_; 
lean_dec(v_res_2573_);
lean_dec_ref(v_config_2569_);
v___x_2588_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
if (v_isShared_2576_ == 0)
{
lean_ctor_set_tag(v___x_2575_, 1);
lean_ctor_set(v___x_2575_, 1, v___x_2588_);
v___x_2590_ = v___x_2575_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v_pos_2572_);
lean_ctor_set(v_reuseFailAlloc_2591_, 1, v___x_2588_);
v___x_2590_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
return v___x_2590_;
}
}
else
{
lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2701_; 
lean_inc(v_idx_2578_);
lean_inc_ref(v_array_2577_);
v_isSharedCheck_2701_ = !lean_is_exclusive(v_pos_2572_);
if (v_isSharedCheck_2701_ == 0)
{
lean_object* v_unused_2702_; lean_object* v_unused_2703_; 
v_unused_2702_ = lean_ctor_get(v_pos_2572_, 1);
lean_dec(v_unused_2702_);
v_unused_2703_ = lean_ctor_get(v_pos_2572_, 0);
lean_dec(v_unused_2703_);
v___x_2593_ = v_pos_2572_;
v_isShared_2594_ = v_isSharedCheck_2701_;
goto v_resetjp_2592_;
}
else
{
lean_dec(v_pos_2572_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2701_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2598_; 
v___x_2595_ = lean_unsigned_to_nat(1u);
v___x_2596_ = lean_nat_add(v_idx_2578_, v___x_2595_);
lean_dec(v_idx_2578_);
if (v_isShared_2594_ == 0)
{
lean_ctor_set(v___x_2593_, 1, v___x_2596_);
v___x_2598_ = v___x_2593_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v_array_2577_);
lean_ctor_set(v_reuseFailAlloc_2700_, 1, v___x_2596_);
v___x_2598_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
lean_object* v___x_2599_; 
lean_inc_ref(v_config_2569_);
v___x_2599_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(v_config_2569_, v___x_2598_);
if (lean_obj_tag(v___x_2599_) == 0)
{
lean_object* v_res_2600_; lean_object* v_pos_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2690_; 
v_res_2600_ = lean_ctor_get(v___x_2599_, 1);
v_pos_2601_ = lean_ctor_get(v___x_2599_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2599_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2603_ = v___x_2599_;
v_isShared_2604_ = v_isSharedCheck_2690_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_res_2600_);
lean_inc(v_pos_2601_);
lean_dec(v___x_2599_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2690_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v_fst_2605_; lean_object* v_snd_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2689_; 
v_fst_2605_ = lean_ctor_get(v_res_2600_, 0);
v_snd_2606_ = lean_ctor_get(v_res_2600_, 1);
v_isSharedCheck_2689_ = !lean_is_exclusive(v_res_2600_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2608_ = v_res_2600_;
v_isShared_2609_ = v_isSharedCheck_2689_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_snd_2606_);
lean_inc(v_fst_2605_);
lean_dec(v_res_2600_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2689_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v___y_2611_; lean_object* v_pos_2612_; lean_object* v_res_2613_; lean_object* v___y_2619_; lean_object* v_idx_2620_; lean_object* v_pos_2621_; lean_object* v_err_2622_; lean_object* v_pos_2630_; lean_object* v_array_2631_; lean_object* v_idx_2632_; lean_object* v_res_2633_; lean_object* v_array_2652_; lean_object* v_idx_2653_; lean_object* v_pos_2655_; lean_object* v_array_2656_; lean_object* v_idx_2657_; lean_object* v_err_2658_; lean_object* v___x_2662_; uint8_t v___x_2663_; 
v_array_2652_ = lean_ctor_get(v_pos_2601_, 0);
lean_inc_ref(v_array_2652_);
v_idx_2653_ = lean_ctor_get(v_pos_2601_, 1);
lean_inc(v_idx_2653_);
v___x_2662_ = lean_byte_array_size(v_array_2652_);
v___x_2663_ = lean_nat_dec_lt(v_idx_2653_, v___x_2662_);
if (v___x_2663_ == 0)
{
lean_object* v___x_2664_; 
v___x_2664_ = lean_box(0);
lean_inc(v_idx_2653_);
v_pos_2655_ = v_pos_2601_;
v_array_2656_ = v_array_2652_;
v_idx_2657_ = v_idx_2653_;
v_err_2658_ = v___x_2664_;
goto v___jp_2654_;
}
else
{
uint8_t v___x_2665_; uint8_t v_got_2666_; uint8_t v___x_2667_; 
v___x_2665_ = 63;
v_got_2666_ = lean_byte_array_fget(v_array_2652_, v_idx_2653_);
v___x_2667_ = lean_uint8_dec_eq(v_got_2666_, v___x_2665_);
if (v___x_2667_ == 0)
{
lean_object* v___x_2668_; 
v___x_2668_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__3));
lean_inc(v_idx_2653_);
v_pos_2655_ = v_pos_2601_;
v_array_2656_ = v_array_2652_;
v_idx_2657_ = v_idx_2653_;
v_err_2658_ = v___x_2668_;
goto v___jp_2654_;
}
else
{
lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2686_; 
v_isSharedCheck_2686_ = !lean_is_exclusive(v_pos_2601_);
if (v_isSharedCheck_2686_ == 0)
{
lean_object* v_unused_2687_; lean_object* v_unused_2688_; 
v_unused_2687_ = lean_ctor_get(v_pos_2601_, 1);
lean_dec(v_unused_2687_);
v_unused_2688_ = lean_ctor_get(v_pos_2601_, 0);
lean_dec(v_unused_2688_);
v___x_2670_ = v_pos_2601_;
v_isShared_2671_ = v_isSharedCheck_2686_;
goto v_resetjp_2669_;
}
else
{
lean_dec(v_pos_2601_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2686_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2672_; lean_object* v___x_2674_; 
v___x_2672_ = lean_nat_add(v_idx_2653_, v___x_2595_);
if (v_isShared_2671_ == 0)
{
lean_ctor_set(v___x_2670_, 1, v___x_2672_);
v___x_2674_ = v___x_2670_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2685_; 
v_reuseFailAlloc_2685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2685_, 0, v_array_2652_);
lean_ctor_set(v_reuseFailAlloc_2685_, 1, v___x_2672_);
v___x_2674_ = v_reuseFailAlloc_2685_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
lean_object* v___x_2675_; 
lean_inc_ref(v_config_2569_);
v___x_2675_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_2569_, v___x_2674_);
if (lean_obj_tag(v___x_2675_) == 0)
{
lean_object* v_pos_2676_; lean_object* v_res_2677_; lean_object* v_array_2678_; lean_object* v_idx_2679_; lean_object* v___x_2680_; 
lean_dec(v_idx_2653_);
v_pos_2676_ = lean_ctor_get(v___x_2675_, 0);
lean_inc(v_pos_2676_);
v_res_2677_ = lean_ctor_get(v___x_2675_, 1);
lean_inc(v_res_2677_);
lean_dec_ref_known(v___x_2675_, 2);
v_array_2678_ = lean_ctor_get(v_pos_2676_, 0);
lean_inc_ref(v_array_2678_);
v_idx_2679_ = lean_ctor_get(v_pos_2676_, 1);
lean_inc(v_idx_2679_);
v___x_2680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2680_, 0, v_res_2677_);
v_pos_2630_ = v_pos_2676_;
v_array_2631_ = v_array_2678_;
v_idx_2632_ = v_idx_2679_;
v_res_2633_ = v___x_2680_;
goto v___jp_2629_;
}
else
{
lean_object* v_pos_2681_; lean_object* v_err_2682_; lean_object* v_array_2683_; lean_object* v_idx_2684_; 
v_pos_2681_ = lean_ctor_get(v___x_2675_, 0);
lean_inc(v_pos_2681_);
v_err_2682_ = lean_ctor_get(v___x_2675_, 1);
lean_inc(v_err_2682_);
lean_dec_ref_known(v___x_2675_, 2);
v_array_2683_ = lean_ctor_get(v_pos_2681_, 0);
lean_inc_ref(v_array_2683_);
v_idx_2684_ = lean_ctor_get(v_pos_2681_, 1);
lean_inc(v_idx_2684_);
v_pos_2655_ = v_pos_2681_;
v_array_2656_ = v_array_2683_;
v_idx_2657_ = v_idx_2684_;
v_err_2658_ = v_err_2682_;
goto v___jp_2654_;
}
}
}
}
}
v___jp_2610_:
{
lean_object* v___x_2614_; lean_object* v___x_2616_; 
v___x_2614_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2614_, 0, v_res_2573_);
lean_ctor_set(v___x_2614_, 1, v_fst_2605_);
lean_ctor_set(v___x_2614_, 2, v_snd_2606_);
lean_ctor_set(v___x_2614_, 3, v___y_2611_);
lean_ctor_set(v___x_2614_, 4, v_res_2613_);
if (v_isShared_2604_ == 0)
{
lean_ctor_set(v___x_2603_, 1, v___x_2614_);
lean_ctor_set(v___x_2603_, 0, v_pos_2612_);
v___x_2616_ = v___x_2603_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_pos_2612_);
lean_ctor_set(v_reuseFailAlloc_2617_, 1, v___x_2614_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
v___jp_2618_:
{
lean_object* v_idx_2623_; uint8_t v___x_2624_; 
v_idx_2623_ = lean_ctor_get(v_pos_2621_, 1);
v___x_2624_ = lean_nat_dec_eq(v_idx_2620_, v_idx_2623_);
lean_dec(v_idx_2620_);
if (v___x_2624_ == 0)
{
lean_object* v___x_2626_; 
lean_dec(v___y_2619_);
lean_dec(v_snd_2606_);
lean_dec(v_fst_2605_);
lean_del_object(v___x_2603_);
lean_dec(v_res_2573_);
if (v_isShared_2576_ == 0)
{
lean_ctor_set_tag(v___x_2575_, 1);
lean_ctor_set(v___x_2575_, 1, v_err_2622_);
lean_ctor_set(v___x_2575_, 0, v_pos_2621_);
v___x_2626_ = v___x_2575_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2627_; 
v_reuseFailAlloc_2627_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2627_, 0, v_pos_2621_);
lean_ctor_set(v_reuseFailAlloc_2627_, 1, v_err_2622_);
v___x_2626_ = v_reuseFailAlloc_2627_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
return v___x_2626_;
}
}
else
{
lean_object* v___x_2628_; 
lean_dec(v_err_2622_);
lean_del_object(v___x_2575_);
v___x_2628_ = lean_box(0);
v___y_2611_ = v___y_2619_;
v_pos_2612_ = v_pos_2621_;
v_res_2613_ = v___x_2628_;
goto v___jp_2610_;
}
}
v___jp_2629_:
{
lean_object* v___x_2634_; uint8_t v___x_2635_; 
v___x_2634_ = lean_byte_array_size(v_array_2631_);
v___x_2635_ = lean_nat_dec_lt(v_idx_2632_, v___x_2634_);
if (v___x_2635_ == 0)
{
lean_object* v___x_2636_; 
lean_dec_ref(v_array_2631_);
lean_del_object(v___x_2608_);
lean_dec_ref(v_config_2569_);
v___x_2636_ = lean_box(0);
v___y_2619_ = v_res_2633_;
v_idx_2620_ = v_idx_2632_;
v_pos_2621_ = v_pos_2630_;
v_err_2622_ = v___x_2636_;
goto v___jp_2618_;
}
else
{
uint8_t v___x_2637_; uint8_t v_got_2638_; uint8_t v___x_2639_; 
v___x_2637_ = 35;
v_got_2638_ = lean_byte_array_fget(v_array_2631_, v_idx_2632_);
v___x_2639_ = lean_uint8_dec_eq(v_got_2638_, v___x_2637_);
if (v___x_2639_ == 0)
{
lean_object* v___x_2640_; 
lean_dec_ref(v_array_2631_);
lean_del_object(v___x_2608_);
lean_dec_ref(v_config_2569_);
v___x_2640_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__1));
v___y_2619_ = v_res_2633_;
v_idx_2620_ = v_idx_2632_;
v_pos_2621_ = v_pos_2630_;
v_err_2622_ = v___x_2640_;
goto v___jp_2618_;
}
else
{
lean_object* v___x_2641_; lean_object* v___x_2643_; 
lean_dec_ref(v_pos_2630_);
v___x_2641_ = lean_nat_add(v_idx_2632_, v___x_2595_);
if (v_isShared_2609_ == 0)
{
lean_ctor_set(v___x_2608_, 1, v___x_2641_);
lean_ctor_set(v___x_2608_, 0, v_array_2631_);
v___x_2643_ = v___x_2608_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v_array_2631_);
lean_ctor_set(v_reuseFailAlloc_2651_, 1, v___x_2641_);
v___x_2643_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
lean_object* v___x_2644_; 
v___x_2644_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(v_config_2569_, v___x_2643_);
lean_dec_ref(v_config_2569_);
if (lean_obj_tag(v___x_2644_) == 0)
{
lean_object* v_pos_2645_; lean_object* v_res_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; 
lean_dec(v_idx_2632_);
lean_del_object(v___x_2575_);
v_pos_2645_ = lean_ctor_get(v___x_2644_, 0);
lean_inc(v_pos_2645_);
v_res_2646_ = lean_ctor_get(v___x_2644_, 1);
lean_inc(v_res_2646_);
lean_dec_ref_known(v___x_2644_, 2);
v___x_2647_ = l_Std_Http_URI_EncodedString_decodeLossy___redArg(v_res_2646_);
lean_dec(v_res_2646_);
v___x_2648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2648_, 0, v___x_2647_);
v___y_2611_ = v_res_2633_;
v_pos_2612_ = v_pos_2645_;
v_res_2613_ = v___x_2648_;
goto v___jp_2610_;
}
else
{
lean_object* v_pos_2649_; lean_object* v_err_2650_; 
v_pos_2649_ = lean_ctor_get(v___x_2644_, 0);
lean_inc(v_pos_2649_);
v_err_2650_ = lean_ctor_get(v___x_2644_, 1);
lean_inc(v_err_2650_);
lean_dec_ref_known(v___x_2644_, 2);
v___y_2619_ = v_res_2633_;
v_idx_2620_ = v_idx_2632_;
v_pos_2621_ = v_pos_2649_;
v_err_2622_ = v_err_2650_;
goto v___jp_2618_;
}
}
}
}
}
v___jp_2654_:
{
uint8_t v___x_2659_; 
v___x_2659_ = lean_nat_dec_eq(v_idx_2653_, v_idx_2657_);
lean_dec(v_idx_2653_);
if (v___x_2659_ == 0)
{
lean_object* v___x_2660_; 
lean_dec(v_idx_2657_);
lean_dec_ref(v_array_2656_);
lean_del_object(v___x_2608_);
lean_dec(v_snd_2606_);
lean_dec(v_fst_2605_);
lean_del_object(v___x_2603_);
lean_del_object(v___x_2575_);
lean_dec(v_res_2573_);
lean_dec_ref(v_config_2569_);
v___x_2660_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2660_, 0, v_pos_2655_);
lean_ctor_set(v___x_2660_, 1, v_err_2658_);
return v___x_2660_;
}
else
{
lean_object* v___x_2661_; 
lean_dec(v_err_2658_);
v___x_2661_ = lean_box(0);
v_pos_2630_ = v_pos_2655_;
v_array_2631_ = v_array_2656_;
v_idx_2632_ = v_idx_2657_;
v_res_2633_ = v___x_2661_;
goto v___jp_2629_;
}
}
}
}
}
else
{
lean_object* v_pos_2691_; lean_object* v_err_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2699_; 
lean_del_object(v___x_2575_);
lean_dec(v_res_2573_);
lean_dec_ref(v_config_2569_);
v_pos_2691_ = lean_ctor_get(v___x_2599_, 0);
v_err_2692_ = lean_ctor_get(v___x_2599_, 1);
v_isSharedCheck_2699_ = !lean_is_exclusive(v___x_2599_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2694_ = v___x_2599_;
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_err_2692_);
lean_inc(v_pos_2691_);
lean_dec(v___x_2599_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v___x_2697_; 
if (v_isShared_2695_ == 0)
{
v___x_2697_ = v___x_2694_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v_pos_2691_);
lean_ctor_set(v_reuseFailAlloc_2698_, 1, v_err_2692_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
return v___x_2697_;
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
lean_object* v_pos_2705_; lean_object* v_err_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2713_; 
lean_dec_ref(v_config_2569_);
v_pos_2705_ = lean_ctor_get(v___x_2571_, 0);
v_err_2706_ = lean_ctor_get(v___x_2571_, 1);
v_isSharedCheck_2713_ = !lean_is_exclusive(v___x_2571_);
if (v_isSharedCheck_2713_ == 0)
{
v___x_2708_ = v___x_2571_;
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_err_2706_);
lean_inc(v_pos_2705_);
lean_dec(v___x_2571_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v___x_2711_; 
if (v_isShared_2709_ == 0)
{
v___x_2711_ = v___x_2708_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v_pos_2705_);
lean_ctor_set(v_reuseFailAlloc_2712_, 1, v_err_2706_);
v___x_2711_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
return v___x_2711_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk(lean_object* v_a_2717_){
_start:
{
lean_object* v_array_2718_; lean_object* v_idx_2719_; lean_object* v___x_2720_; uint8_t v___x_2721_; 
v_array_2718_ = lean_ctor_get(v_a_2717_, 0);
v_idx_2719_ = lean_ctor_get(v_a_2717_, 1);
v___x_2720_ = lean_byte_array_size(v_array_2718_);
v___x_2721_ = lean_nat_dec_lt(v_idx_2719_, v___x_2720_);
if (v___x_2721_ == 0)
{
lean_object* v___x_2722_; lean_object* v___x_2723_; 
v___x_2722_ = lean_box(0);
v___x_2723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2723_, 0, v_a_2717_);
lean_ctor_set(v___x_2723_, 1, v___x_2722_);
return v___x_2723_;
}
else
{
uint8_t v___x_2724_; uint8_t v_got_2725_; uint8_t v___x_2726_; 
v___x_2724_ = 42;
v_got_2725_ = lean_byte_array_fget(v_array_2718_, v_idx_2719_);
v___x_2726_ = lean_uint8_dec_eq(v_got_2725_, v___x_2724_);
if (v___x_2726_ == 0)
{
lean_object* v___x_2727_; lean_object* v___x_2728_; 
v___x_2727_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk___closed__1));
v___x_2728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2728_, 0, v_a_2717_);
lean_ctor_set(v___x_2728_, 1, v___x_2727_);
return v___x_2728_;
}
else
{
lean_object* v___x_2730_; uint8_t v_isShared_2731_; uint8_t v_isSharedCheck_2739_; 
lean_inc(v_idx_2719_);
lean_inc_ref(v_array_2718_);
v_isSharedCheck_2739_ = !lean_is_exclusive(v_a_2717_);
if (v_isSharedCheck_2739_ == 0)
{
lean_object* v_unused_2740_; lean_object* v_unused_2741_; 
v_unused_2740_ = lean_ctor_get(v_a_2717_, 1);
lean_dec(v_unused_2740_);
v_unused_2741_ = lean_ctor_get(v_a_2717_, 0);
lean_dec(v_unused_2741_);
v___x_2730_ = v_a_2717_;
v_isShared_2731_ = v_isSharedCheck_2739_;
goto v_resetjp_2729_;
}
else
{
lean_dec(v_a_2717_);
v___x_2730_ = lean_box(0);
v_isShared_2731_ = v_isSharedCheck_2739_;
goto v_resetjp_2729_;
}
v_resetjp_2729_:
{
lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2735_; 
v___x_2732_ = lean_unsigned_to_nat(1u);
v___x_2733_ = lean_nat_add(v_idx_2719_, v___x_2732_);
lean_dec(v_idx_2719_);
if (v_isShared_2731_ == 0)
{
lean_ctor_set(v___x_2730_, 1, v___x_2733_);
v___x_2735_ = v___x_2730_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2738_; 
v_reuseFailAlloc_2738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2738_, 0, v_array_2718_);
lean_ctor_set(v_reuseFailAlloc_2738_, 1, v___x_2733_);
v___x_2735_ = v_reuseFailAlloc_2738_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; 
v___x_2736_ = lean_box(3);
v___x_2737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2737_, 0, v___x_2735_);
lean_ctor_set(v___x_2737_, 1, v___x_2736_);
return v___x_2737_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin(lean_object* v_config_2745_, lean_object* v_a_2746_){
_start:
{
lean_object* v_array_2750_; lean_object* v_idx_2751_; lean_object* v___x_2752_; uint8_t v___x_2753_; 
v_array_2750_ = lean_ctor_get(v_a_2746_, 0);
v_idx_2751_ = lean_ctor_get(v_a_2746_, 1);
v___x_2752_ = lean_byte_array_size(v_array_2750_);
v___x_2753_ = lean_nat_dec_lt(v_idx_2751_, v___x_2752_);
if (v___x_2753_ == 0)
{
lean_dec_ref(v_config_2745_);
goto v___jp_2747_;
}
else
{
uint8_t v___x_2754_; uint8_t v___x_2755_; uint8_t v___x_2756_; 
v___x_2754_ = lean_byte_array_fget(v_array_2750_, v_idx_2751_);
v___x_2755_ = 47;
v___x_2756_ = lean_uint8_dec_eq(v___x_2754_, v___x_2755_);
if (v___x_2756_ == 0)
{
lean_dec_ref(v_config_2745_);
goto v___jp_2747_;
}
else
{
lean_object* v___x_2757_; 
lean_inc_ref(v_a_2746_);
lean_inc_ref(v_config_2745_);
v___x_2757_ = l_Std_Http_URI_Parser_parsePath(v_config_2745_, v___x_2756_, v___x_2756_, v_a_2746_);
if (lean_obj_tag(v___x_2757_) == 0)
{
lean_object* v_pos_2758_; lean_object* v_res_2759_; lean_object* v___x_2761_; uint8_t v_isShared_2762_; uint8_t v_isSharedCheck_2804_; 
v_pos_2758_ = lean_ctor_get(v___x_2757_, 0);
v_res_2759_ = lean_ctor_get(v___x_2757_, 1);
v_isSharedCheck_2804_ = !lean_is_exclusive(v___x_2757_);
if (v_isSharedCheck_2804_ == 0)
{
v___x_2761_ = v___x_2757_;
v_isShared_2762_ = v_isSharedCheck_2804_;
goto v_resetjp_2760_;
}
else
{
lean_inc(v_res_2759_);
lean_inc(v_pos_2758_);
lean_dec(v___x_2757_);
v___x_2761_ = lean_box(0);
v_isShared_2762_ = v_isSharedCheck_2804_;
goto v_resetjp_2760_;
}
v_resetjp_2760_:
{
lean_object* v_pos_2764_; lean_object* v_res_2765_; lean_object* v_array_2770_; lean_object* v_idx_2771_; lean_object* v_pos_2773_; lean_object* v_idx_2774_; lean_object* v_err_2775_; lean_object* v___x_2779_; uint8_t v___x_2780_; 
v_array_2770_ = lean_ctor_get(v_pos_2758_, 0);
v_idx_2771_ = lean_ctor_get(v_pos_2758_, 1);
lean_inc(v_idx_2771_);
v___x_2779_ = lean_byte_array_size(v_array_2770_);
v___x_2780_ = lean_nat_dec_lt(v_idx_2771_, v___x_2779_);
if (v___x_2780_ == 0)
{
lean_object* v___x_2781_; 
lean_dec_ref(v_config_2745_);
v___x_2781_ = lean_box(0);
lean_inc(v_idx_2771_);
v_pos_2773_ = v_pos_2758_;
v_idx_2774_ = v_idx_2771_;
v_err_2775_ = v___x_2781_;
goto v___jp_2772_;
}
else
{
uint8_t v___x_2782_; uint8_t v_got_2783_; uint8_t v___x_2784_; 
v___x_2782_ = 63;
v_got_2783_ = lean_byte_array_fget(v_array_2770_, v_idx_2771_);
v___x_2784_ = lean_uint8_dec_eq(v_got_2783_, v___x_2782_);
if (v___x_2784_ == 0)
{
lean_object* v___x_2785_; 
lean_dec_ref(v_config_2745_);
v___x_2785_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__3));
lean_inc(v_idx_2771_);
v_pos_2773_ = v_pos_2758_;
v_idx_2774_ = v_idx_2771_;
v_err_2775_ = v___x_2785_;
goto v___jp_2772_;
}
else
{
lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2801_; 
lean_inc_ref(v_array_2770_);
v_isSharedCheck_2801_ = !lean_is_exclusive(v_pos_2758_);
if (v_isSharedCheck_2801_ == 0)
{
lean_object* v_unused_2802_; lean_object* v_unused_2803_; 
v_unused_2802_ = lean_ctor_get(v_pos_2758_, 1);
lean_dec(v_unused_2802_);
v_unused_2803_ = lean_ctor_get(v_pos_2758_, 0);
lean_dec(v_unused_2803_);
v___x_2787_ = v_pos_2758_;
v_isShared_2788_ = v_isSharedCheck_2801_;
goto v_resetjp_2786_;
}
else
{
lean_dec(v_pos_2758_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2801_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2792_; 
v___x_2789_ = lean_unsigned_to_nat(1u);
v___x_2790_ = lean_nat_add(v_idx_2771_, v___x_2789_);
if (v_isShared_2788_ == 0)
{
lean_ctor_set(v___x_2787_, 1, v___x_2790_);
v___x_2792_ = v___x_2787_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v_array_2770_);
lean_ctor_set(v_reuseFailAlloc_2800_, 1, v___x_2790_);
v___x_2792_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
lean_object* v___x_2793_; 
v___x_2793_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_2745_, v___x_2792_);
if (lean_obj_tag(v___x_2793_) == 0)
{
lean_object* v_pos_2794_; lean_object* v_res_2795_; lean_object* v___x_2796_; 
lean_dec(v_idx_2771_);
lean_dec_ref(v_a_2746_);
v_pos_2794_ = lean_ctor_get(v___x_2793_, 0);
lean_inc(v_pos_2794_);
v_res_2795_ = lean_ctor_get(v___x_2793_, 1);
lean_inc(v_res_2795_);
lean_dec_ref_known(v___x_2793_, 2);
v___x_2796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2796_, 0, v_res_2795_);
v_pos_2764_ = v_pos_2794_;
v_res_2765_ = v___x_2796_;
goto v___jp_2763_;
}
else
{
lean_object* v_pos_2797_; lean_object* v_err_2798_; lean_object* v_idx_2799_; 
v_pos_2797_ = lean_ctor_get(v___x_2793_, 0);
lean_inc(v_pos_2797_);
v_err_2798_ = lean_ctor_get(v___x_2793_, 1);
lean_inc(v_err_2798_);
lean_dec_ref_known(v___x_2793_, 2);
v_idx_2799_ = lean_ctor_get(v_pos_2797_, 1);
lean_inc(v_idx_2799_);
v_pos_2773_ = v_pos_2797_;
v_idx_2774_ = v_idx_2799_;
v_err_2775_ = v_err_2798_;
goto v___jp_2772_;
}
}
}
}
}
v___jp_2763_:
{
lean_object* v___x_2766_; lean_object* v___x_2768_; 
v___x_2766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2766_, 0, v_res_2759_);
lean_ctor_set(v___x_2766_, 1, v_res_2765_);
if (v_isShared_2762_ == 0)
{
lean_ctor_set(v___x_2761_, 1, v___x_2766_);
lean_ctor_set(v___x_2761_, 0, v_pos_2764_);
v___x_2768_ = v___x_2761_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v_pos_2764_);
lean_ctor_set(v_reuseFailAlloc_2769_, 1, v___x_2766_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
v___jp_2772_:
{
uint8_t v___x_2776_; 
v___x_2776_ = lean_nat_dec_eq(v_idx_2771_, v_idx_2774_);
lean_dec(v_idx_2774_);
lean_dec(v_idx_2771_);
if (v___x_2776_ == 0)
{
lean_object* v___x_2777_; 
lean_dec_ref(v_pos_2773_);
lean_del_object(v___x_2761_);
lean_dec(v_res_2759_);
v___x_2777_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2777_, 0, v_a_2746_);
lean_ctor_set(v___x_2777_, 1, v_err_2775_);
return v___x_2777_;
}
else
{
lean_object* v___x_2778_; 
lean_dec(v_err_2775_);
lean_dec_ref(v_a_2746_);
v___x_2778_ = lean_box(0);
v_pos_2764_ = v_pos_2773_;
v_res_2765_ = v___x_2778_;
goto v___jp_2763_;
}
}
}
}
else
{
lean_object* v_err_2805_; lean_object* v___x_2807_; uint8_t v_isShared_2808_; uint8_t v_isSharedCheck_2812_; 
lean_dec_ref(v_config_2745_);
v_err_2805_ = lean_ctor_get(v___x_2757_, 1);
v_isSharedCheck_2812_ = !lean_is_exclusive(v___x_2757_);
if (v_isSharedCheck_2812_ == 0)
{
lean_object* v_unused_2813_; 
v_unused_2813_ = lean_ctor_get(v___x_2757_, 0);
lean_dec(v_unused_2813_);
v___x_2807_ = v___x_2757_;
v_isShared_2808_ = v_isSharedCheck_2812_;
goto v_resetjp_2806_;
}
else
{
lean_inc(v_err_2805_);
lean_dec(v___x_2757_);
v___x_2807_ = lean_box(0);
v_isShared_2808_ = v_isSharedCheck_2812_;
goto v_resetjp_2806_;
}
v_resetjp_2806_:
{
lean_object* v___x_2810_; 
if (v_isShared_2808_ == 0)
{
lean_ctor_set(v___x_2807_, 0, v_a_2746_);
v___x_2810_ = v___x_2807_;
goto v_reusejp_2809_;
}
else
{
lean_object* v_reuseFailAlloc_2811_; 
v_reuseFailAlloc_2811_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2811_, 0, v_a_2746_);
lean_ctor_set(v_reuseFailAlloc_2811_, 1, v_err_2805_);
v___x_2810_ = v_reuseFailAlloc_2811_;
goto v_reusejp_2809_;
}
v_reusejp_2809_:
{
return v___x_2810_;
}
}
}
}
}
v___jp_2747_:
{
lean_object* v___x_2748_; lean_object* v___x_2749_; 
v___x_2748_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin___closed__1));
v___x_2749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2749_, 0, v_a_2746_);
lean_ctor_set(v___x_2749_, 1, v___x_2748_);
return v___x_2749_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost(lean_object* v_scheme_2819_, lean_object* v_authority_2820_, lean_object* v_a_2821_){
_start:
{
lean_object* v___x_2828_; uint8_t v___x_2829_; 
v___x_2828_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__2));
v___x_2829_ = lean_string_dec_eq(v_scheme_2819_, v___x_2828_);
if (v___x_2829_ == 0)
{
lean_object* v___x_2830_; uint8_t v___x_2831_; 
v___x_2830_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__3));
v___x_2831_ = lean_string_dec_eq(v_scheme_2819_, v___x_2830_);
if (v___x_2831_ == 0)
{
goto v___jp_2822_;
}
else
{
goto v___jp_2825_;
}
}
else
{
goto v___jp_2825_;
}
v___jp_2822_:
{
lean_object* v___x_2823_; lean_object* v___x_2824_; 
v___x_2823_ = lean_box(0);
v___x_2824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2824_, 0, v_a_2821_);
lean_ctor_set(v___x_2824_, 1, v___x_2823_);
return v___x_2824_;
}
v___jp_2825_:
{
if (lean_obj_tag(v_authority_2820_) == 0)
{
lean_object* v___x_2826_; lean_object* v___x_2827_; 
v___x_2826_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__1));
v___x_2827_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2827_, 0, v_a_2821_);
lean_ctor_set(v___x_2827_, 1, v___x_2826_);
return v___x_2827_;
}
else
{
goto v___jp_2822_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___boxed(lean_object* v_scheme_2832_, lean_object* v_authority_2833_, lean_object* v_a_2834_){
_start:
{
lean_object* v_res_2835_; 
v_res_2835_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost(v_scheme_2832_, v_authority_2833_, v_a_2834_);
lean_dec(v_authority_2833_);
lean_dec_ref(v_scheme_2832_);
return v_res_2835_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteFromScheme(lean_object* v_config_2836_, lean_object* v_scheme_2837_, lean_object* v_a_2838_){
_start:
{
lean_object* v_array_2839_; lean_object* v_idx_2840_; lean_object* v___x_2841_; uint8_t v___x_2842_; 
v_array_2839_ = lean_ctor_get(v_a_2838_, 0);
v_idx_2840_ = lean_ctor_get(v_a_2838_, 1);
v___x_2841_ = lean_byte_array_size(v_array_2839_);
v___x_2842_ = lean_nat_dec_lt(v_idx_2840_, v___x_2841_);
if (v___x_2842_ == 0)
{
lean_object* v___x_2843_; lean_object* v___x_2844_; 
lean_dec_ref(v_scheme_2837_);
lean_dec_ref(v_config_2836_);
v___x_2843_ = lean_box(0);
v___x_2844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2844_, 0, v_a_2838_);
lean_ctor_set(v___x_2844_, 1, v___x_2843_);
return v___x_2844_;
}
else
{
uint8_t v___x_2845_; uint8_t v_got_2846_; uint8_t v___x_2847_; 
v___x_2845_ = 58;
v_got_2846_ = lean_byte_array_fget(v_array_2839_, v_idx_2840_);
v___x_2847_ = lean_uint8_dec_eq(v_got_2846_, v___x_2845_);
if (v___x_2847_ == 0)
{
lean_object* v___x_2848_; lean_object* v___x_2849_; 
lean_dec_ref(v_scheme_2837_);
lean_dec_ref(v_config_2836_);
v___x_2848_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
v___x_2849_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2849_, 0, v_a_2838_);
lean_ctor_set(v___x_2849_, 1, v___x_2848_);
return v___x_2849_;
}
else
{
lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2936_; 
lean_inc(v_idx_2840_);
lean_inc_ref(v_array_2839_);
v_isSharedCheck_2936_ = !lean_is_exclusive(v_a_2838_);
if (v_isSharedCheck_2936_ == 0)
{
lean_object* v_unused_2937_; lean_object* v_unused_2938_; 
v_unused_2937_ = lean_ctor_get(v_a_2838_, 1);
lean_dec(v_unused_2937_);
v_unused_2938_ = lean_ctor_get(v_a_2838_, 0);
lean_dec(v_unused_2938_);
v___x_2851_ = v_a_2838_;
v_isShared_2852_ = v_isSharedCheck_2936_;
goto v_resetjp_2850_;
}
else
{
lean_dec(v_a_2838_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2936_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2856_; 
v___x_2853_ = lean_unsigned_to_nat(1u);
v___x_2854_ = lean_nat_add(v_idx_2840_, v___x_2853_);
lean_dec(v_idx_2840_);
if (v_isShared_2852_ == 0)
{
lean_ctor_set(v___x_2851_, 1, v___x_2854_);
v___x_2856_ = v___x_2851_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v_array_2839_);
lean_ctor_set(v_reuseFailAlloc_2935_, 1, v___x_2854_);
v___x_2856_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
lean_object* v___x_2857_; 
lean_inc_ref(v_config_2836_);
v___x_2857_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(v_config_2836_, v___x_2856_);
if (lean_obj_tag(v___x_2857_) == 0)
{
lean_object* v_res_2858_; lean_object* v_pos_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2925_; 
v_res_2858_ = lean_ctor_get(v___x_2857_, 1);
v_pos_2859_ = lean_ctor_get(v___x_2857_, 0);
v_isSharedCheck_2925_ = !lean_is_exclusive(v___x_2857_);
if (v_isSharedCheck_2925_ == 0)
{
v___x_2861_ = v___x_2857_;
v_isShared_2862_ = v_isSharedCheck_2925_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_res_2858_);
lean_inc(v_pos_2859_);
lean_dec(v___x_2857_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2925_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v_fst_2863_; lean_object* v_snd_2864_; lean_object* v_pos_2866_; lean_object* v_res_2867_; lean_object* v_array_2890_; lean_object* v_idx_2891_; lean_object* v_pos_2893_; lean_object* v_idx_2894_; lean_object* v_err_2895_; lean_object* v___x_2901_; uint8_t v___x_2902_; 
v_fst_2863_ = lean_ctor_get(v_res_2858_, 0);
lean_inc(v_fst_2863_);
v_snd_2864_ = lean_ctor_get(v_res_2858_, 1);
lean_inc(v_snd_2864_);
lean_dec(v_res_2858_);
v_array_2890_ = lean_ctor_get(v_pos_2859_, 0);
v_idx_2891_ = lean_ctor_get(v_pos_2859_, 1);
lean_inc(v_idx_2891_);
v___x_2901_ = lean_byte_array_size(v_array_2890_);
v___x_2902_ = lean_nat_dec_lt(v_idx_2891_, v___x_2901_);
if (v___x_2902_ == 0)
{
lean_object* v___x_2903_; 
lean_dec_ref(v_config_2836_);
v___x_2903_ = lean_box(0);
lean_inc(v_idx_2891_);
v_pos_2893_ = v_pos_2859_;
v_idx_2894_ = v_idx_2891_;
v_err_2895_ = v___x_2903_;
goto v___jp_2892_;
}
else
{
uint8_t v___x_2904_; uint8_t v_got_2905_; uint8_t v___x_2906_; 
v___x_2904_ = 63;
v_got_2905_ = lean_byte_array_fget(v_array_2890_, v_idx_2891_);
v___x_2906_ = lean_uint8_dec_eq(v_got_2905_, v___x_2904_);
if (v___x_2906_ == 0)
{
lean_object* v___x_2907_; 
lean_dec_ref(v_config_2836_);
v___x_2907_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__3));
lean_inc(v_idx_2891_);
v_pos_2893_ = v_pos_2859_;
v_idx_2894_ = v_idx_2891_;
v_err_2895_ = v___x_2907_;
goto v___jp_2892_;
}
else
{
lean_object* v___x_2909_; uint8_t v_isShared_2910_; uint8_t v_isSharedCheck_2922_; 
lean_inc_ref(v_array_2890_);
v_isSharedCheck_2922_ = !lean_is_exclusive(v_pos_2859_);
if (v_isSharedCheck_2922_ == 0)
{
lean_object* v_unused_2923_; lean_object* v_unused_2924_; 
v_unused_2923_ = lean_ctor_get(v_pos_2859_, 1);
lean_dec(v_unused_2923_);
v_unused_2924_ = lean_ctor_get(v_pos_2859_, 0);
lean_dec(v_unused_2924_);
v___x_2909_ = v_pos_2859_;
v_isShared_2910_ = v_isSharedCheck_2922_;
goto v_resetjp_2908_;
}
else
{
lean_dec(v_pos_2859_);
v___x_2909_ = lean_box(0);
v_isShared_2910_ = v_isSharedCheck_2922_;
goto v_resetjp_2908_;
}
v_resetjp_2908_:
{
lean_object* v___x_2911_; lean_object* v___x_2913_; 
v___x_2911_ = lean_nat_add(v_idx_2891_, v___x_2853_);
if (v_isShared_2910_ == 0)
{
lean_ctor_set(v___x_2909_, 1, v___x_2911_);
v___x_2913_ = v___x_2909_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2921_; 
v_reuseFailAlloc_2921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2921_, 0, v_array_2890_);
lean_ctor_set(v_reuseFailAlloc_2921_, 1, v___x_2911_);
v___x_2913_ = v_reuseFailAlloc_2921_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
lean_object* v___x_2914_; 
v___x_2914_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_2836_, v___x_2913_);
if (lean_obj_tag(v___x_2914_) == 0)
{
lean_object* v_pos_2915_; lean_object* v_res_2916_; lean_object* v___x_2917_; 
lean_dec(v_idx_2891_);
lean_del_object(v___x_2861_);
v_pos_2915_ = lean_ctor_get(v___x_2914_, 0);
lean_inc(v_pos_2915_);
v_res_2916_ = lean_ctor_get(v___x_2914_, 1);
lean_inc(v_res_2916_);
lean_dec_ref_known(v___x_2914_, 2);
v___x_2917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2917_, 0, v_res_2916_);
v_pos_2866_ = v_pos_2915_;
v_res_2867_ = v___x_2917_;
goto v___jp_2865_;
}
else
{
lean_object* v_pos_2918_; lean_object* v_err_2919_; lean_object* v_idx_2920_; 
v_pos_2918_ = lean_ctor_get(v___x_2914_, 0);
lean_inc(v_pos_2918_);
v_err_2919_ = lean_ctor_get(v___x_2914_, 1);
lean_inc(v_err_2919_);
lean_dec_ref_known(v___x_2914_, 2);
v_idx_2920_ = lean_ctor_get(v_pos_2918_, 1);
lean_inc(v_idx_2920_);
v_pos_2893_ = v_pos_2918_;
v_idx_2894_ = v_idx_2920_;
v_err_2895_ = v_err_2919_;
goto v___jp_2892_;
}
}
}
}
}
v___jp_2865_:
{
lean_object* v___x_2868_; 
v___x_2868_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost(v_scheme_2837_, v_fst_2863_, v_pos_2866_);
if (lean_obj_tag(v___x_2868_) == 0)
{
lean_object* v_pos_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2879_; 
v_pos_2869_ = lean_ctor_get(v___x_2868_, 0);
v_isSharedCheck_2879_ = !lean_is_exclusive(v___x_2868_);
if (v_isSharedCheck_2879_ == 0)
{
lean_object* v_unused_2880_; 
v_unused_2880_ = lean_ctor_get(v___x_2868_, 1);
lean_dec(v_unused_2880_);
v___x_2871_ = v___x_2868_;
v_isShared_2872_ = v_isSharedCheck_2879_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_pos_2869_);
lean_dec(v___x_2868_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2879_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2877_; 
v___x_2873_ = lean_box(0);
v___x_2874_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2874_, 0, v_scheme_2837_);
lean_ctor_set(v___x_2874_, 1, v_fst_2863_);
lean_ctor_set(v___x_2874_, 2, v_snd_2864_);
lean_ctor_set(v___x_2874_, 3, v_res_2867_);
lean_ctor_set(v___x_2874_, 4, v___x_2873_);
v___x_2875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2875_, 0, v___x_2874_);
if (v_isShared_2872_ == 0)
{
lean_ctor_set(v___x_2871_, 1, v___x_2875_);
v___x_2877_ = v___x_2871_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v_pos_2869_);
lean_ctor_set(v_reuseFailAlloc_2878_, 1, v___x_2875_);
v___x_2877_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
return v___x_2877_;
}
}
}
else
{
lean_object* v_pos_2881_; lean_object* v_err_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2889_; 
lean_dec(v_res_2867_);
lean_dec(v_snd_2864_);
lean_dec(v_fst_2863_);
lean_dec_ref(v_scheme_2837_);
v_pos_2881_ = lean_ctor_get(v___x_2868_, 0);
v_err_2882_ = lean_ctor_get(v___x_2868_, 1);
v_isSharedCheck_2889_ = !lean_is_exclusive(v___x_2868_);
if (v_isSharedCheck_2889_ == 0)
{
v___x_2884_ = v___x_2868_;
v_isShared_2885_ = v_isSharedCheck_2889_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_err_2882_);
lean_inc(v_pos_2881_);
lean_dec(v___x_2868_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2889_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
lean_object* v___x_2887_; 
if (v_isShared_2885_ == 0)
{
v___x_2887_ = v___x_2884_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v_pos_2881_);
lean_ctor_set(v_reuseFailAlloc_2888_, 1, v_err_2882_);
v___x_2887_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
return v___x_2887_;
}
}
}
}
v___jp_2892_:
{
uint8_t v___x_2896_; 
v___x_2896_ = lean_nat_dec_eq(v_idx_2891_, v_idx_2894_);
lean_dec(v_idx_2894_);
lean_dec(v_idx_2891_);
if (v___x_2896_ == 0)
{
lean_object* v___x_2898_; 
lean_dec(v_snd_2864_);
lean_dec(v_fst_2863_);
lean_dec_ref(v_scheme_2837_);
if (v_isShared_2862_ == 0)
{
lean_ctor_set_tag(v___x_2861_, 1);
lean_ctor_set(v___x_2861_, 1, v_err_2895_);
lean_ctor_set(v___x_2861_, 0, v_pos_2893_);
v___x_2898_ = v___x_2861_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_pos_2893_);
lean_ctor_set(v_reuseFailAlloc_2899_, 1, v_err_2895_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
return v___x_2898_;
}
}
else
{
lean_object* v___x_2900_; 
lean_dec(v_err_2895_);
lean_del_object(v___x_2861_);
v___x_2900_ = lean_box(0);
v_pos_2866_ = v_pos_2893_;
v_res_2867_ = v___x_2900_;
goto v___jp_2865_;
}
}
}
}
else
{
lean_object* v_pos_2926_; lean_object* v_err_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2934_; 
lean_dec_ref(v_scheme_2837_);
lean_dec_ref(v_config_2836_);
v_pos_2926_ = lean_ctor_get(v___x_2857_, 0);
v_err_2927_ = lean_ctor_get(v___x_2857_, 1);
v_isSharedCheck_2934_ = !lean_is_exclusive(v___x_2857_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2929_ = v___x_2857_;
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_err_2927_);
lean_inc(v_pos_2926_);
lean_dec(v___x_2857_);
v___x_2929_ = lean_box(0);
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
v_resetjp_2928_:
{
lean_object* v___x_2932_; 
if (v_isShared_2930_ == 0)
{
v___x_2932_ = v___x_2929_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v_pos_2926_);
lean_ctor_set(v_reuseFailAlloc_2933_, 1, v_err_2927_);
v___x_2932_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
return v___x_2932_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp(lean_object* v_config_2945_, lean_object* v_a_2946_){
_start:
{
lean_object* v___x_2950_; 
lean_inc_ref(v_a_2946_);
v___x_2950_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_2945_, v_a_2946_);
if (lean_obj_tag(v___x_2950_) == 0)
{
lean_object* v_pos_2951_; lean_object* v_res_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_3066_; 
v_pos_2951_ = lean_ctor_get(v___x_2950_, 0);
v_res_2952_ = lean_ctor_get(v___x_2950_, 1);
v_isSharedCheck_3066_ = !lean_is_exclusive(v___x_2950_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_2954_ = v___x_2950_;
v_isShared_2955_ = v_isSharedCheck_3066_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_res_2952_);
lean_inc(v_pos_2951_);
lean_dec(v___x_2950_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_3066_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v___y_2957_; lean_object* v___y_2958_; lean_object* v_pos_2959_; lean_object* v_res_2960_; lean_object* v_idx_2984_; lean_object* v___y_2985_; lean_object* v___y_2986_; lean_object* v_pos_2987_; lean_object* v_idx_2988_; lean_object* v_err_2989_; lean_object* v___x_3060_; uint8_t v___x_3061_; 
v___x_3060_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__2));
v___x_3061_ = lean_string_dec_eq(v_res_2952_, v___x_3060_);
if (v___x_3061_ == 0)
{
lean_object* v___x_3062_; uint8_t v___x_3063_; 
v___x_3062_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost___closed__3));
v___x_3063_ = lean_string_dec_eq(v_res_2952_, v___x_3062_);
if (v___x_3063_ == 0)
{
lean_object* v___x_3064_; lean_object* v___x_3065_; 
lean_del_object(v___x_2954_);
lean_dec(v_res_2952_);
lean_dec(v_pos_2951_);
lean_dec_ref(v_config_2945_);
v___x_3064_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__3));
v___x_3065_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3065_, 0, v_a_2946_);
lean_ctor_set(v___x_3065_, 1, v___x_3064_);
return v___x_3065_;
}
else
{
goto v___jp_2995_;
}
}
else
{
goto v___jp_2995_;
}
v___jp_2956_:
{
lean_object* v___x_2961_; 
v___x_2961_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_requireHttpHost(v_res_2952_, v___y_2958_, v_pos_2959_);
if (lean_obj_tag(v___x_2961_) == 0)
{
lean_object* v_pos_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2972_; 
lean_dec_ref(v_a_2946_);
v_pos_2962_ = lean_ctor_get(v___x_2961_, 0);
v_isSharedCheck_2972_ = !lean_is_exclusive(v___x_2961_);
if (v_isSharedCheck_2972_ == 0)
{
lean_object* v_unused_2973_; 
v_unused_2973_ = lean_ctor_get(v___x_2961_, 1);
lean_dec(v_unused_2973_);
v___x_2964_ = v___x_2961_;
v_isShared_2965_ = v_isSharedCheck_2972_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_pos_2962_);
lean_dec(v___x_2961_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2972_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2970_; 
v___x_2966_ = lean_box(0);
v___x_2967_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2967_, 0, v_res_2952_);
lean_ctor_set(v___x_2967_, 1, v___y_2958_);
lean_ctor_set(v___x_2967_, 2, v___y_2957_);
lean_ctor_set(v___x_2967_, 3, v_res_2960_);
lean_ctor_set(v___x_2967_, 4, v___x_2966_);
v___x_2968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2968_, 0, v___x_2967_);
if (v_isShared_2965_ == 0)
{
lean_ctor_set(v___x_2964_, 1, v___x_2968_);
v___x_2970_ = v___x_2964_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v_pos_2962_);
lean_ctor_set(v_reuseFailAlloc_2971_, 1, v___x_2968_);
v___x_2970_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
return v___x_2970_;
}
}
}
else
{
lean_object* v_err_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2981_; 
lean_dec(v_res_2960_);
lean_dec(v___y_2958_);
lean_dec_ref(v___y_2957_);
lean_dec(v_res_2952_);
v_err_2974_ = lean_ctor_get(v___x_2961_, 1);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2961_);
if (v_isSharedCheck_2981_ == 0)
{
lean_object* v_unused_2982_; 
v_unused_2982_ = lean_ctor_get(v___x_2961_, 0);
lean_dec(v_unused_2982_);
v___x_2976_ = v___x_2961_;
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_err_2974_);
lean_dec(v___x_2961_);
v___x_2976_ = lean_box(0);
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
v_resetjp_2975_:
{
lean_object* v___x_2979_; 
if (v_isShared_2977_ == 0)
{
lean_ctor_set(v___x_2976_, 0, v_a_2946_);
v___x_2979_ = v___x_2976_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_a_2946_);
lean_ctor_set(v_reuseFailAlloc_2980_, 1, v_err_2974_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
return v___x_2979_;
}
}
}
}
v___jp_2983_:
{
uint8_t v___x_2990_; 
v___x_2990_ = lean_nat_dec_eq(v_idx_2984_, v_idx_2988_);
lean_dec(v_idx_2988_);
lean_dec(v_idx_2984_);
if (v___x_2990_ == 0)
{
lean_object* v___x_2992_; 
lean_dec_ref(v_pos_2987_);
lean_dec(v___y_2986_);
lean_dec_ref(v___y_2985_);
lean_dec(v_res_2952_);
if (v_isShared_2955_ == 0)
{
lean_ctor_set_tag(v___x_2954_, 1);
lean_ctor_set(v___x_2954_, 1, v_err_2989_);
lean_ctor_set(v___x_2954_, 0, v_a_2946_);
v___x_2992_ = v___x_2954_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v_a_2946_);
lean_ctor_set(v_reuseFailAlloc_2993_, 1, v_err_2989_);
v___x_2992_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
return v___x_2992_;
}
}
else
{
lean_object* v___x_2994_; 
lean_dec(v_err_2989_);
lean_del_object(v___x_2954_);
v___x_2994_ = lean_box(0);
v___y_2957_ = v___y_2985_;
v___y_2958_ = v___y_2986_;
v_pos_2959_ = v_pos_2987_;
v_res_2960_ = v___x_2994_;
goto v___jp_2956_;
}
}
v___jp_2995_:
{
lean_object* v_array_2996_; lean_object* v_idx_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3059_; 
v_array_2996_ = lean_ctor_get(v_pos_2951_, 0);
v_idx_2997_ = lean_ctor_get(v_pos_2951_, 1);
v_isSharedCheck_3059_ = !lean_is_exclusive(v_pos_2951_);
if (v_isSharedCheck_3059_ == 0)
{
v___x_2999_ = v_pos_2951_;
v_isShared_3000_ = v_isSharedCheck_3059_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_idx_2997_);
lean_inc(v_array_2996_);
lean_dec(v_pos_2951_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3059_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___x_3001_; uint8_t v___x_3002_; 
v___x_3001_ = lean_byte_array_size(v_array_2996_);
v___x_3002_ = lean_nat_dec_lt(v_idx_2997_, v___x_3001_);
if (v___x_3002_ == 0)
{
lean_object* v___x_3003_; lean_object* v___x_3004_; 
lean_del_object(v___x_2999_);
lean_dec(v_idx_2997_);
lean_dec_ref(v_array_2996_);
lean_del_object(v___x_2954_);
lean_dec(v_res_2952_);
lean_dec_ref(v_config_2945_);
v___x_3003_ = lean_box(0);
v___x_3004_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3004_, 0, v_a_2946_);
lean_ctor_set(v___x_3004_, 1, v___x_3003_);
return v___x_3004_;
}
else
{
uint8_t v___x_3005_; uint8_t v_got_3006_; uint8_t v___x_3007_; 
v___x_3005_ = 58;
v_got_3006_ = lean_byte_array_fget(v_array_2996_, v_idx_2997_);
v___x_3007_ = lean_uint8_dec_eq(v_got_3006_, v___x_3005_);
if (v___x_3007_ == 0)
{
lean_object* v___x_3008_; lean_object* v___x_3009_; 
lean_del_object(v___x_2999_);
lean_dec(v_idx_2997_);
lean_dec_ref(v_array_2996_);
lean_del_object(v___x_2954_);
lean_dec(v_res_2952_);
lean_dec_ref(v_config_2945_);
v___x_3008_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
v___x_3009_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3009_, 0, v_a_2946_);
lean_ctor_set(v___x_3009_, 1, v___x_3008_);
return v___x_3009_;
}
else
{
lean_object* v___x_3010_; lean_object* v___x_3011_; uint8_t v___x_3012_; 
v___x_3010_ = lean_unsigned_to_nat(1u);
v___x_3011_ = lean_nat_add(v_idx_2997_, v___x_3010_);
lean_dec(v_idx_2997_);
v___x_3012_ = lean_nat_dec_lt(v___x_3011_, v___x_3001_);
if (v___x_3012_ == 0)
{
lean_dec(v___x_3011_);
lean_del_object(v___x_2999_);
lean_dec_ref(v_array_2996_);
lean_del_object(v___x_2954_);
lean_dec(v_res_2952_);
lean_dec_ref(v_config_2945_);
goto v___jp_2947_;
}
else
{
uint8_t v___x_3013_; uint8_t v___x_3014_; uint8_t v___x_3015_; 
v___x_3013_ = lean_byte_array_fget(v_array_2996_, v___x_3011_);
v___x_3014_ = 47;
v___x_3015_ = lean_uint8_dec_eq(v___x_3013_, v___x_3014_);
if (v___x_3015_ == 0)
{
lean_dec(v___x_3011_);
lean_del_object(v___x_2999_);
lean_dec_ref(v_array_2996_);
lean_del_object(v___x_2954_);
lean_dec(v_res_2952_);
lean_dec_ref(v_config_2945_);
goto v___jp_2947_;
}
else
{
lean_object* v___x_3017_; 
if (v_isShared_3000_ == 0)
{
lean_ctor_set(v___x_2999_, 1, v___x_3011_);
v___x_3017_ = v___x_2999_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3058_; 
v_reuseFailAlloc_3058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3058_, 0, v_array_2996_);
lean_ctor_set(v_reuseFailAlloc_3058_, 1, v___x_3011_);
v___x_3017_ = v_reuseFailAlloc_3058_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
lean_object* v___x_3018_; 
lean_inc_ref(v_config_2945_);
v___x_3018_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(v_config_2945_, v___x_3017_);
if (lean_obj_tag(v___x_3018_) == 0)
{
lean_object* v_res_3019_; lean_object* v_pos_3020_; lean_object* v_fst_3021_; lean_object* v_snd_3022_; lean_object* v_array_3023_; lean_object* v_idx_3024_; lean_object* v___x_3025_; uint8_t v___x_3026_; 
v_res_3019_ = lean_ctor_get(v___x_3018_, 1);
lean_inc(v_res_3019_);
v_pos_3020_ = lean_ctor_get(v___x_3018_, 0);
lean_inc(v_pos_3020_);
lean_dec_ref_known(v___x_3018_, 2);
v_fst_3021_ = lean_ctor_get(v_res_3019_, 0);
lean_inc(v_fst_3021_);
v_snd_3022_ = lean_ctor_get(v_res_3019_, 1);
lean_inc(v_snd_3022_);
lean_dec(v_res_3019_);
v_array_3023_ = lean_ctor_get(v_pos_3020_, 0);
v_idx_3024_ = lean_ctor_get(v_pos_3020_, 1);
lean_inc(v_idx_3024_);
v___x_3025_ = lean_byte_array_size(v_array_3023_);
v___x_3026_ = lean_nat_dec_lt(v_idx_3024_, v___x_3025_);
if (v___x_3026_ == 0)
{
lean_object* v___x_3027_; 
lean_dec_ref(v_config_2945_);
v___x_3027_ = lean_box(0);
lean_inc(v_idx_3024_);
v_idx_2984_ = v_idx_3024_;
v___y_2985_ = v_snd_3022_;
v___y_2986_ = v_fst_3021_;
v_pos_2987_ = v_pos_3020_;
v_idx_2988_ = v_idx_3024_;
v_err_2989_ = v___x_3027_;
goto v___jp_2983_;
}
else
{
uint8_t v___x_3028_; uint8_t v_got_3029_; uint8_t v___x_3030_; 
v___x_3028_ = 63;
v_got_3029_ = lean_byte_array_fget(v_array_3023_, v_idx_3024_);
v___x_3030_ = lean_uint8_dec_eq(v_got_3029_, v___x_3028_);
if (v___x_3030_ == 0)
{
lean_object* v___x_3031_; 
lean_dec_ref(v_config_2945_);
v___x_3031_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__3));
lean_inc(v_idx_3024_);
v_idx_2984_ = v_idx_3024_;
v___y_2985_ = v_snd_3022_;
v___y_2986_ = v_fst_3021_;
v_pos_2987_ = v_pos_3020_;
v_idx_2988_ = v_idx_3024_;
v_err_2989_ = v___x_3031_;
goto v___jp_2983_;
}
else
{
lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3046_; 
lean_inc_ref(v_array_3023_);
v_isSharedCheck_3046_ = !lean_is_exclusive(v_pos_3020_);
if (v_isSharedCheck_3046_ == 0)
{
lean_object* v_unused_3047_; lean_object* v_unused_3048_; 
v_unused_3047_ = lean_ctor_get(v_pos_3020_, 1);
lean_dec(v_unused_3047_);
v_unused_3048_ = lean_ctor_get(v_pos_3020_, 0);
lean_dec(v_unused_3048_);
v___x_3033_ = v_pos_3020_;
v_isShared_3034_ = v_isSharedCheck_3046_;
goto v_resetjp_3032_;
}
else
{
lean_dec(v_pos_3020_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3046_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v___x_3035_; lean_object* v___x_3037_; 
v___x_3035_ = lean_nat_add(v_idx_3024_, v___x_3010_);
if (v_isShared_3034_ == 0)
{
lean_ctor_set(v___x_3033_, 1, v___x_3035_);
v___x_3037_ = v___x_3033_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_array_3023_);
lean_ctor_set(v_reuseFailAlloc_3045_, 1, v___x_3035_);
v___x_3037_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
lean_object* v___x_3038_; 
v___x_3038_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_2945_, v___x_3037_);
if (lean_obj_tag(v___x_3038_) == 0)
{
lean_object* v_pos_3039_; lean_object* v_res_3040_; lean_object* v___x_3041_; 
lean_dec(v_idx_3024_);
lean_del_object(v___x_2954_);
v_pos_3039_ = lean_ctor_get(v___x_3038_, 0);
lean_inc(v_pos_3039_);
v_res_3040_ = lean_ctor_get(v___x_3038_, 1);
lean_inc(v_res_3040_);
lean_dec_ref_known(v___x_3038_, 2);
v___x_3041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3041_, 0, v_res_3040_);
v___y_2957_ = v_snd_3022_;
v___y_2958_ = v_fst_3021_;
v_pos_2959_ = v_pos_3039_;
v_res_2960_ = v___x_3041_;
goto v___jp_2956_;
}
else
{
lean_object* v_pos_3042_; lean_object* v_err_3043_; lean_object* v_idx_3044_; 
v_pos_3042_ = lean_ctor_get(v___x_3038_, 0);
lean_inc(v_pos_3042_);
v_err_3043_ = lean_ctor_get(v___x_3038_, 1);
lean_inc(v_err_3043_);
lean_dec_ref_known(v___x_3038_, 2);
v_idx_3044_ = lean_ctor_get(v_pos_3042_, 1);
lean_inc(v_idx_3044_);
v_idx_2984_ = v_idx_3024_;
v___y_2985_ = v_snd_3022_;
v___y_2986_ = v_fst_3021_;
v_pos_2987_ = v_pos_3042_;
v_idx_2988_ = v_idx_3044_;
v_err_2989_ = v_err_3043_;
goto v___jp_2983_;
}
}
}
}
}
}
else
{
lean_object* v_err_3049_; lean_object* v___x_3051_; uint8_t v_isShared_3052_; uint8_t v_isSharedCheck_3056_; 
lean_del_object(v___x_2954_);
lean_dec(v_res_2952_);
lean_dec_ref(v_config_2945_);
v_err_3049_ = lean_ctor_get(v___x_3018_, 1);
v_isSharedCheck_3056_ = !lean_is_exclusive(v___x_3018_);
if (v_isSharedCheck_3056_ == 0)
{
lean_object* v_unused_3057_; 
v_unused_3057_ = lean_ctor_get(v___x_3018_, 0);
lean_dec(v_unused_3057_);
v___x_3051_ = v___x_3018_;
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
else
{
lean_inc(v_err_3049_);
lean_dec(v___x_3018_);
v___x_3051_ = lean_box(0);
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
v_resetjp_3050_:
{
lean_object* v___x_3054_; 
if (v_isShared_3052_ == 0)
{
lean_ctor_set(v___x_3051_, 0, v_a_2946_);
v___x_3054_ = v___x_3051_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3055_; 
v_reuseFailAlloc_3055_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3055_, 0, v_a_2946_);
lean_ctor_set(v_reuseFailAlloc_3055_, 1, v_err_3049_);
v___x_3054_ = v_reuseFailAlloc_3055_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
return v___x_3054_;
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
}
}
else
{
lean_object* v_err_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3074_; 
lean_dec_ref(v_config_2945_);
v_err_3067_ = lean_ctor_get(v___x_2950_, 1);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_2950_);
if (v_isSharedCheck_3074_ == 0)
{
lean_object* v_unused_3075_; 
v_unused_3075_ = lean_ctor_get(v___x_2950_, 0);
lean_dec(v_unused_3075_);
v___x_3069_ = v___x_2950_;
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_err_3067_);
lean_dec(v___x_2950_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v___x_3072_; 
if (v_isShared_3070_ == 0)
{
lean_ctor_set(v___x_3069_, 0, v_a_2946_);
v___x_3072_ = v___x_3069_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v_a_2946_);
lean_ctor_set(v_reuseFailAlloc_3073_, 1, v_err_3067_);
v___x_3072_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
return v___x_3072_;
}
}
}
v___jp_2947_:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; 
v___x_2948_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp___closed__1));
v___x_2949_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2949_, 0, v_a_2946_);
lean_ctor_set(v___x_2949_, 1, v___x_2948_);
return v___x_2949_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absolute(lean_object* v_config_3076_, lean_object* v_a_3077_){
_start:
{
lean_object* v___x_3078_; 
lean_inc_ref(v_a_3077_);
v___x_3078_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_3076_, v_a_3077_);
if (lean_obj_tag(v___x_3078_) == 0)
{
lean_object* v_pos_3079_; lean_object* v_res_3080_; lean_object* v___x_3081_; 
v_pos_3079_ = lean_ctor_get(v___x_3078_, 0);
lean_inc(v_pos_3079_);
v_res_3080_ = lean_ctor_get(v___x_3078_, 1);
lean_inc(v_res_3080_);
lean_dec_ref_known(v___x_3078_, 2);
v___x_3081_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteFromScheme(v_config_3076_, v_res_3080_, v_pos_3079_);
if (lean_obj_tag(v___x_3081_) == 0)
{
lean_dec_ref(v_a_3077_);
return v___x_3081_;
}
else
{
lean_object* v_err_3082_; lean_object* v___x_3084_; uint8_t v_isShared_3085_; uint8_t v_isSharedCheck_3089_; 
v_err_3082_ = lean_ctor_get(v___x_3081_, 1);
v_isSharedCheck_3089_ = !lean_is_exclusive(v___x_3081_);
if (v_isSharedCheck_3089_ == 0)
{
lean_object* v_unused_3090_; 
v_unused_3090_ = lean_ctor_get(v___x_3081_, 0);
lean_dec(v_unused_3090_);
v___x_3084_ = v___x_3081_;
v_isShared_3085_ = v_isSharedCheck_3089_;
goto v_resetjp_3083_;
}
else
{
lean_inc(v_err_3082_);
lean_dec(v___x_3081_);
v___x_3084_ = lean_box(0);
v_isShared_3085_ = v_isSharedCheck_3089_;
goto v_resetjp_3083_;
}
v_resetjp_3083_:
{
lean_object* v___x_3087_; 
if (v_isShared_3085_ == 0)
{
lean_ctor_set(v___x_3084_, 0, v_a_3077_);
v___x_3087_ = v___x_3084_;
goto v_reusejp_3086_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v_a_3077_);
lean_ctor_set(v_reuseFailAlloc_3088_, 1, v_err_3082_);
v___x_3087_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3086_;
}
v_reusejp_3086_:
{
return v___x_3087_;
}
}
}
}
else
{
lean_object* v_err_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3098_; 
lean_dec_ref(v_config_3076_);
v_err_3091_ = lean_ctor_get(v___x_3078_, 1);
v_isSharedCheck_3098_ = !lean_is_exclusive(v___x_3078_);
if (v_isSharedCheck_3098_ == 0)
{
lean_object* v_unused_3099_; 
v_unused_3099_ = lean_ctor_get(v___x_3078_, 0);
lean_dec(v_unused_3099_);
v___x_3093_ = v___x_3078_;
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_err_3091_);
lean_dec(v___x_3078_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
lean_object* v___x_3096_; 
if (v_isShared_3094_ == 0)
{
lean_ctor_set(v___x_3093_, 0, v_a_3077_);
v___x_3096_ = v___x_3093_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v_a_3077_);
lean_ctor_set(v_reuseFailAlloc_3097_, 1, v_err_3091_);
v___x_3096_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
return v___x_3096_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority(lean_object* v_config_3100_, lean_object* v_a_3101_){
_start:
{
lean_object* v___x_3102_; 
lean_inc_ref(v_a_3101_);
v___x_3102_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(v_config_3100_, v_a_3101_);
if (lean_obj_tag(v___x_3102_) == 0)
{
lean_object* v_pos_3103_; lean_object* v_res_3104_; lean_object* v___x_3106_; uint8_t v_isShared_3107_; uint8_t v_isSharedCheck_3156_; 
v_pos_3103_ = lean_ctor_get(v___x_3102_, 0);
v_res_3104_ = lean_ctor_get(v___x_3102_, 1);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3102_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3106_ = v___x_3102_;
v_isShared_3107_ = v_isSharedCheck_3156_;
goto v_resetjp_3105_;
}
else
{
lean_inc(v_res_3104_);
lean_inc(v_pos_3103_);
lean_dec(v___x_3102_);
v___x_3106_ = lean_box(0);
v_isShared_3107_ = v_isSharedCheck_3156_;
goto v_resetjp_3105_;
}
v_resetjp_3105_:
{
lean_object* v_array_3108_; lean_object* v_idx_3109_; lean_object* v___x_3111_; uint8_t v_isShared_3112_; uint8_t v_isSharedCheck_3155_; 
v_array_3108_ = lean_ctor_get(v_pos_3103_, 0);
v_idx_3109_ = lean_ctor_get(v_pos_3103_, 1);
v_isSharedCheck_3155_ = !lean_is_exclusive(v_pos_3103_);
if (v_isSharedCheck_3155_ == 0)
{
v___x_3111_ = v_pos_3103_;
v_isShared_3112_ = v_isSharedCheck_3155_;
goto v_resetjp_3110_;
}
else
{
lean_inc(v_idx_3109_);
lean_inc(v_array_3108_);
lean_dec(v_pos_3103_);
v___x_3111_ = lean_box(0);
v_isShared_3112_ = v_isSharedCheck_3155_;
goto v_resetjp_3110_;
}
v_resetjp_3110_:
{
lean_object* v___x_3113_; uint8_t v___x_3114_; 
v___x_3113_ = lean_byte_array_size(v_array_3108_);
v___x_3114_ = lean_nat_dec_lt(v_idx_3109_, v___x_3113_);
if (v___x_3114_ == 0)
{
lean_object* v___x_3115_; lean_object* v___x_3117_; 
lean_del_object(v___x_3111_);
lean_dec(v_idx_3109_);
lean_dec_ref(v_array_3108_);
lean_dec(v_res_3104_);
v___x_3115_ = lean_box(0);
if (v_isShared_3107_ == 0)
{
lean_ctor_set_tag(v___x_3106_, 1);
lean_ctor_set(v___x_3106_, 1, v___x_3115_);
lean_ctor_set(v___x_3106_, 0, v_a_3101_);
v___x_3117_ = v___x_3106_;
goto v_reusejp_3116_;
}
else
{
lean_object* v_reuseFailAlloc_3118_; 
v_reuseFailAlloc_3118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3118_, 0, v_a_3101_);
lean_ctor_set(v_reuseFailAlloc_3118_, 1, v___x_3115_);
v___x_3117_ = v_reuseFailAlloc_3118_;
goto v_reusejp_3116_;
}
v_reusejp_3116_:
{
return v___x_3117_;
}
}
else
{
uint8_t v___x_3119_; uint8_t v_got_3120_; uint8_t v___x_3121_; 
v___x_3119_ = 58;
v_got_3120_ = lean_byte_array_fget(v_array_3108_, v_idx_3109_);
v___x_3121_ = lean_uint8_dec_eq(v_got_3120_, v___x_3119_);
if (v___x_3121_ == 0)
{
lean_object* v___x_3122_; lean_object* v___x_3124_; 
lean_del_object(v___x_3111_);
lean_dec(v_idx_3109_);
lean_dec_ref(v_array_3108_);
lean_dec(v_res_3104_);
v___x_3122_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
if (v_isShared_3107_ == 0)
{
lean_ctor_set_tag(v___x_3106_, 1);
lean_ctor_set(v___x_3106_, 1, v___x_3122_);
lean_ctor_set(v___x_3106_, 0, v_a_3101_);
v___x_3124_ = v___x_3106_;
goto v_reusejp_3123_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v_a_3101_);
lean_ctor_set(v_reuseFailAlloc_3125_, 1, v___x_3122_);
v___x_3124_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3123_;
}
v_reusejp_3123_:
{
return v___x_3124_;
}
}
else
{
lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3129_; 
lean_del_object(v___x_3106_);
v___x_3126_ = lean_unsigned_to_nat(1u);
v___x_3127_ = lean_nat_add(v_idx_3109_, v___x_3126_);
lean_dec(v_idx_3109_);
if (v_isShared_3112_ == 0)
{
lean_ctor_set(v___x_3111_, 1, v___x_3127_);
v___x_3129_ = v___x_3111_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v_array_3108_);
lean_ctor_set(v_reuseFailAlloc_3154_, 1, v___x_3127_);
v___x_3129_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
lean_object* v___x_3130_; 
v___x_3130_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(v___x_3129_);
if (lean_obj_tag(v___x_3130_) == 0)
{
lean_object* v_pos_3131_; lean_object* v_res_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3144_; 
lean_dec_ref(v_a_3101_);
v_pos_3131_ = lean_ctor_get(v___x_3130_, 0);
v_res_3132_ = lean_ctor_get(v___x_3130_, 1);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3130_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3134_ = v___x_3130_;
v_isShared_3135_ = v_isSharedCheck_3144_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_res_3132_);
lean_inc(v_pos_3131_);
lean_dec(v___x_3130_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3144_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; uint16_t v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3142_; 
v___x_3136_ = lean_box(0);
v___x_3137_ = lean_alloc_ctor(2, 0, 2);
v___x_3138_ = lean_unbox(v_res_3132_);
lean_dec(v_res_3132_);
lean_ctor_set_uint16(v___x_3137_, 0, v___x_3138_);
v___x_3139_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3139_, 0, v___x_3136_);
lean_ctor_set(v___x_3139_, 1, v_res_3104_);
lean_ctor_set(v___x_3139_, 2, v___x_3137_);
v___x_3140_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3140_, 0, v___x_3139_);
if (v_isShared_3135_ == 0)
{
lean_ctor_set(v___x_3134_, 1, v___x_3140_);
v___x_3142_ = v___x_3134_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_pos_3131_);
lean_ctor_set(v_reuseFailAlloc_3143_, 1, v___x_3140_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
return v___x_3142_;
}
}
}
else
{
lean_object* v_err_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3152_; 
lean_dec(v_res_3104_);
v_err_3145_ = lean_ctor_get(v___x_3130_, 1);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3130_);
if (v_isSharedCheck_3152_ == 0)
{
lean_object* v_unused_3153_; 
v_unused_3153_ = lean_ctor_get(v___x_3130_, 0);
lean_dec(v_unused_3153_);
v___x_3147_ = v___x_3130_;
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_err_3145_);
lean_dec(v___x_3130_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3150_; 
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 0, v_a_3101_);
v___x_3150_ = v___x_3147_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v_a_3101_);
lean_ctor_set(v_reuseFailAlloc_3151_, 1, v_err_3145_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
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
lean_object* v_err_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3164_; 
v_err_3157_ = lean_ctor_get(v___x_3102_, 1);
v_isSharedCheck_3164_ = !lean_is_exclusive(v___x_3102_);
if (v_isSharedCheck_3164_ == 0)
{
lean_object* v_unused_3165_; 
v_unused_3165_ = lean_ctor_get(v___x_3102_, 0);
lean_dec(v_unused_3165_);
v___x_3159_ = v___x_3102_;
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_err_3157_);
lean_dec(v___x_3102_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v___x_3162_; 
if (v_isShared_3160_ == 0)
{
lean_ctor_set(v___x_3159_, 0, v_a_3101_);
v___x_3162_ = v___x_3159_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v_a_3101_);
lean_ctor_set(v_reuseFailAlloc_3163_, 1, v_err_3157_);
v___x_3162_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
return v___x_3162_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority___boxed(lean_object* v_config_3166_, lean_object* v_a_3167_){
_start:
{
lean_object* v_res_3168_; 
v_res_3168_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority(v_config_3166_, v_a_3167_);
lean_dec_ref(v_config_3166_);
return v_res_3168_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseRequestTarget(lean_object* v_config_3169_, lean_object* v_a_3170_){
_start:
{
lean_object* v___x_3171_; 
lean_inc_ref(v_a_3170_);
v___x_3171_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_asterisk(v_a_3170_);
if (lean_obj_tag(v___x_3171_) == 0)
{
lean_dec_ref(v_a_3170_);
lean_dec_ref(v_config_3169_);
return v___x_3171_;
}
else
{
lean_object* v_pos_3172_; lean_object* v_idx_3173_; lean_object* v_idx_3174_; uint8_t v___x_3175_; 
v_pos_3172_ = lean_ctor_get(v___x_3171_, 0);
v_idx_3173_ = lean_ctor_get(v_a_3170_, 1);
lean_inc(v_idx_3173_);
lean_dec_ref(v_a_3170_);
v_idx_3174_ = lean_ctor_get(v_pos_3172_, 1);
v___x_3175_ = lean_nat_dec_eq(v_idx_3173_, v_idx_3174_);
lean_dec(v_idx_3173_);
if (v___x_3175_ == 0)
{
lean_dec_ref(v_config_3169_);
return v___x_3171_;
}
else
{
lean_object* v___x_3176_; 
lean_inc(v_idx_3174_);
lean_inc(v_pos_3172_);
lean_dec_ref_known(v___x_3171_, 2);
lean_inc_ref(v_config_3169_);
v___x_3176_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_origin(v_config_3169_, v_pos_3172_);
if (lean_obj_tag(v___x_3176_) == 0)
{
lean_dec(v_idx_3174_);
lean_dec_ref(v_config_3169_);
return v___x_3176_;
}
else
{
lean_object* v_pos_3177_; lean_object* v_idx_3178_; uint8_t v___x_3179_; 
v_pos_3177_ = lean_ctor_get(v___x_3176_, 0);
v_idx_3178_ = lean_ctor_get(v_pos_3177_, 1);
v___x_3179_ = lean_nat_dec_eq(v_idx_3174_, v_idx_3178_);
lean_dec(v_idx_3174_);
if (v___x_3179_ == 0)
{
lean_dec_ref(v_config_3169_);
return v___x_3176_;
}
else
{
lean_object* v___x_3180_; 
lean_inc(v_idx_3178_);
lean_inc(v_pos_3177_);
lean_dec_ref_known(v___x_3176_, 2);
lean_inc_ref(v_config_3169_);
v___x_3180_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absoluteHttp(v_config_3169_, v_pos_3177_);
if (lean_obj_tag(v___x_3180_) == 0)
{
lean_dec(v_idx_3178_);
lean_dec_ref(v_config_3169_);
return v___x_3180_;
}
else
{
lean_object* v_pos_3181_; lean_object* v_idx_3182_; uint8_t v___x_3183_; 
v_pos_3181_ = lean_ctor_get(v___x_3180_, 0);
v_idx_3182_ = lean_ctor_get(v_pos_3181_, 1);
v___x_3183_ = lean_nat_dec_eq(v_idx_3178_, v_idx_3182_);
lean_dec(v_idx_3178_);
if (v___x_3183_ == 0)
{
lean_dec_ref(v_config_3169_);
return v___x_3180_;
}
else
{
lean_object* v___x_3184_; 
lean_inc(v_idx_3182_);
lean_inc(v_pos_3181_);
lean_dec_ref_known(v___x_3180_, 2);
v___x_3184_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_authority(v_config_3169_, v_pos_3181_);
if (lean_obj_tag(v___x_3184_) == 0)
{
lean_dec(v_idx_3182_);
lean_dec_ref(v_config_3169_);
return v___x_3184_;
}
else
{
lean_object* v_pos_3185_; lean_object* v_idx_3186_; uint8_t v___x_3187_; 
v_pos_3185_ = lean_ctor_get(v___x_3184_, 0);
v_idx_3186_ = lean_ctor_get(v_pos_3185_, 1);
v___x_3187_ = lean_nat_dec_eq(v_idx_3182_, v_idx_3186_);
lean_dec(v_idx_3182_);
if (v___x_3187_ == 0)
{
lean_dec_ref(v_config_3169_);
return v___x_3184_;
}
else
{
lean_object* v___x_3188_; 
lean_inc(v_pos_3185_);
lean_dec_ref_known(v___x_3184_, 2);
v___x_3188_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseRequestTarget_absolute(v_config_3169_, v_pos_3185_);
return v___x_3188_;
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
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(lean_object* v_config_3189_, lean_object* v_a_3190_){
_start:
{
lean_object* v___x_3191_; 
v___x_3191_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseFragment(v_config_3189_, v_a_3190_);
if (lean_obj_tag(v___x_3191_) == 0)
{
lean_object* v_pos_3192_; lean_object* v_res_3193_; lean_object* v___x_3195_; uint8_t v_isShared_3196_; uint8_t v_isSharedCheck_3201_; 
v_pos_3192_ = lean_ctor_get(v___x_3191_, 0);
v_res_3193_ = lean_ctor_get(v___x_3191_, 1);
v_isSharedCheck_3201_ = !lean_is_exclusive(v___x_3191_);
if (v_isSharedCheck_3201_ == 0)
{
v___x_3195_ = v___x_3191_;
v_isShared_3196_ = v_isSharedCheck_3201_;
goto v_resetjp_3194_;
}
else
{
lean_inc(v_res_3193_);
lean_inc(v_pos_3192_);
lean_dec(v___x_3191_);
v___x_3195_ = lean_box(0);
v_isShared_3196_ = v_isSharedCheck_3201_;
goto v_resetjp_3194_;
}
v_resetjp_3194_:
{
lean_object* v___x_3197_; lean_object* v___x_3199_; 
v___x_3197_ = l_Std_Http_URI_EncodedString_decodeLossy___redArg(v_res_3193_);
lean_dec(v_res_3193_);
if (v_isShared_3196_ == 0)
{
lean_ctor_set(v___x_3195_, 1, v___x_3197_);
v___x_3199_ = v___x_3195_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v_pos_3192_);
lean_ctor_set(v_reuseFailAlloc_3200_, 1, v___x_3197_);
v___x_3199_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
return v___x_3199_;
}
}
}
else
{
lean_object* v_pos_3202_; lean_object* v_err_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3210_; 
v_pos_3202_ = lean_ctor_get(v___x_3191_, 0);
v_err_3203_ = lean_ctor_get(v___x_3191_, 1);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3191_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3205_ = v___x_3191_;
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_err_3203_);
lean_inc(v_pos_3202_);
lean_dec(v___x_3191_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3208_; 
if (v_isShared_3206_ == 0)
{
v___x_3208_ = v___x_3205_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v_pos_3202_);
lean_ctor_set(v_reuseFailAlloc_3209_, 1, v_err_3203_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
return v___x_3208_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment___boxed(lean_object* v_config_3211_, lean_object* v_a_3212_){
_start:
{
lean_object* v_res_3213_; 
v_res_3213_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(v_config_3211_, v_a_3212_);
lean_dec_ref(v_config_3211_);
return v_res_3213_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_uri(lean_object* v_config_3214_, lean_object* v_scheme_3215_, lean_object* v_a_3216_){
_start:
{
lean_object* v___x_3217_; 
lean_inc_ref(v_config_3214_);
v___x_3217_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart(v_config_3214_, v_a_3216_);
if (lean_obj_tag(v___x_3217_) == 0)
{
lean_object* v_res_3218_; lean_object* v_pos_3219_; lean_object* v___x_3221_; uint8_t v_isShared_3222_; uint8_t v_isSharedCheck_3308_; 
v_res_3218_ = lean_ctor_get(v___x_3217_, 1);
v_pos_3219_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3308_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3308_ == 0)
{
v___x_3221_ = v___x_3217_;
v_isShared_3222_ = v_isSharedCheck_3308_;
goto v_resetjp_3220_;
}
else
{
lean_inc(v_res_3218_);
lean_inc(v_pos_3219_);
lean_dec(v___x_3217_);
v___x_3221_ = lean_box(0);
v_isShared_3222_ = v_isSharedCheck_3308_;
goto v_resetjp_3220_;
}
v_resetjp_3220_:
{
lean_object* v_fst_3223_; lean_object* v_snd_3224_; lean_object* v___x_3226_; uint8_t v_isShared_3227_; uint8_t v_isSharedCheck_3307_; 
v_fst_3223_ = lean_ctor_get(v_res_3218_, 0);
v_snd_3224_ = lean_ctor_get(v_res_3218_, 1);
v_isSharedCheck_3307_ = !lean_is_exclusive(v_res_3218_);
if (v_isSharedCheck_3307_ == 0)
{
v___x_3226_ = v_res_3218_;
v_isShared_3227_ = v_isSharedCheck_3307_;
goto v_resetjp_3225_;
}
else
{
lean_inc(v_snd_3224_);
lean_inc(v_fst_3223_);
lean_dec(v_res_3218_);
v___x_3226_ = lean_box(0);
v_isShared_3227_ = v_isSharedCheck_3307_;
goto v_resetjp_3225_;
}
v_resetjp_3225_:
{
lean_object* v___y_3229_; lean_object* v_pos_3230_; lean_object* v_res_3231_; lean_object* v___y_3238_; lean_object* v_idx_3239_; lean_object* v_pos_3240_; lean_object* v_err_3241_; lean_object* v_pos_3249_; lean_object* v_array_3250_; lean_object* v_idx_3251_; lean_object* v_res_3252_; lean_object* v_array_3269_; lean_object* v_idx_3270_; lean_object* v_pos_3272_; lean_object* v_array_3273_; lean_object* v_idx_3274_; lean_object* v_err_3275_; lean_object* v___x_3279_; uint8_t v___x_3280_; 
v_array_3269_ = lean_ctor_get(v_pos_3219_, 0);
lean_inc_ref(v_array_3269_);
v_idx_3270_ = lean_ctor_get(v_pos_3219_, 1);
lean_inc(v_idx_3270_);
v___x_3279_ = lean_byte_array_size(v_array_3269_);
v___x_3280_ = lean_nat_dec_lt(v_idx_3270_, v___x_3279_);
if (v___x_3280_ == 0)
{
lean_object* v___x_3281_; 
v___x_3281_ = lean_box(0);
lean_inc(v_idx_3270_);
v_pos_3272_ = v_pos_3219_;
v_array_3273_ = v_array_3269_;
v_idx_3274_ = v_idx_3270_;
v_err_3275_ = v___x_3281_;
goto v___jp_3271_;
}
else
{
uint8_t v___x_3282_; uint8_t v_got_3283_; uint8_t v___x_3284_; 
v___x_3282_ = 63;
v_got_3283_ = lean_byte_array_fget(v_array_3269_, v_idx_3270_);
v___x_3284_ = lean_uint8_dec_eq(v_got_3283_, v___x_3282_);
if (v___x_3284_ == 0)
{
lean_object* v___x_3285_; 
v___x_3285_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__3));
lean_inc(v_idx_3270_);
v_pos_3272_ = v_pos_3219_;
v_array_3273_ = v_array_3269_;
v_idx_3274_ = v_idx_3270_;
v_err_3275_ = v___x_3285_;
goto v___jp_3271_;
}
else
{
lean_object* v___x_3287_; uint8_t v_isShared_3288_; uint8_t v_isSharedCheck_3304_; 
v_isSharedCheck_3304_ = !lean_is_exclusive(v_pos_3219_);
if (v_isSharedCheck_3304_ == 0)
{
lean_object* v_unused_3305_; lean_object* v_unused_3306_; 
v_unused_3305_ = lean_ctor_get(v_pos_3219_, 1);
lean_dec(v_unused_3305_);
v_unused_3306_ = lean_ctor_get(v_pos_3219_, 0);
lean_dec(v_unused_3306_);
v___x_3287_ = v_pos_3219_;
v_isShared_3288_ = v_isSharedCheck_3304_;
goto v_resetjp_3286_;
}
else
{
lean_dec(v_pos_3219_);
v___x_3287_ = lean_box(0);
v_isShared_3288_ = v_isSharedCheck_3304_;
goto v_resetjp_3286_;
}
v_resetjp_3286_:
{
lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3292_; 
v___x_3289_ = lean_unsigned_to_nat(1u);
v___x_3290_ = lean_nat_add(v_idx_3270_, v___x_3289_);
if (v_isShared_3288_ == 0)
{
lean_ctor_set(v___x_3287_, 1, v___x_3290_);
v___x_3292_ = v___x_3287_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3303_; 
v_reuseFailAlloc_3303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3303_, 0, v_array_3269_);
lean_ctor_set(v_reuseFailAlloc_3303_, 1, v___x_3290_);
v___x_3292_ = v_reuseFailAlloc_3303_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
lean_object* v___x_3293_; 
lean_inc_ref(v_config_3214_);
v___x_3293_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_3214_, v___x_3292_);
if (lean_obj_tag(v___x_3293_) == 0)
{
lean_object* v_pos_3294_; lean_object* v_res_3295_; lean_object* v_array_3296_; lean_object* v_idx_3297_; lean_object* v___x_3298_; 
lean_dec(v_idx_3270_);
v_pos_3294_ = lean_ctor_get(v___x_3293_, 0);
lean_inc(v_pos_3294_);
v_res_3295_ = lean_ctor_get(v___x_3293_, 1);
lean_inc(v_res_3295_);
lean_dec_ref_known(v___x_3293_, 2);
v_array_3296_ = lean_ctor_get(v_pos_3294_, 0);
lean_inc_ref(v_array_3296_);
v_idx_3297_ = lean_ctor_get(v_pos_3294_, 1);
lean_inc(v_idx_3297_);
v___x_3298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3298_, 0, v_res_3295_);
v_pos_3249_ = v_pos_3294_;
v_array_3250_ = v_array_3296_;
v_idx_3251_ = v_idx_3297_;
v_res_3252_ = v___x_3298_;
goto v___jp_3248_;
}
else
{
lean_object* v_pos_3299_; lean_object* v_err_3300_; lean_object* v_array_3301_; lean_object* v_idx_3302_; 
v_pos_3299_ = lean_ctor_get(v___x_3293_, 0);
lean_inc(v_pos_3299_);
v_err_3300_ = lean_ctor_get(v___x_3293_, 1);
lean_inc(v_err_3300_);
lean_dec_ref_known(v___x_3293_, 2);
v_array_3301_ = lean_ctor_get(v_pos_3299_, 0);
lean_inc_ref(v_array_3301_);
v_idx_3302_ = lean_ctor_get(v_pos_3299_, 1);
lean_inc(v_idx_3302_);
v_pos_3272_ = v_pos_3299_;
v_array_3273_ = v_array_3301_;
v_idx_3274_ = v_idx_3302_;
v_err_3275_ = v_err_3300_;
goto v___jp_3271_;
}
}
}
}
}
v___jp_3228_:
{
lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3235_; 
v___x_3232_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3232_, 0, v_scheme_3215_);
lean_ctor_set(v___x_3232_, 1, v_fst_3223_);
lean_ctor_set(v___x_3232_, 2, v_snd_3224_);
lean_ctor_set(v___x_3232_, 3, v___y_3229_);
lean_ctor_set(v___x_3232_, 4, v_res_3231_);
v___x_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3232_);
if (v_isShared_3222_ == 0)
{
lean_ctor_set(v___x_3221_, 1, v___x_3233_);
lean_ctor_set(v___x_3221_, 0, v_pos_3230_);
v___x_3235_ = v___x_3221_;
goto v_reusejp_3234_;
}
else
{
lean_object* v_reuseFailAlloc_3236_; 
v_reuseFailAlloc_3236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3236_, 0, v_pos_3230_);
lean_ctor_set(v_reuseFailAlloc_3236_, 1, v___x_3233_);
v___x_3235_ = v_reuseFailAlloc_3236_;
goto v_reusejp_3234_;
}
v_reusejp_3234_:
{
return v___x_3235_;
}
}
v___jp_3237_:
{
lean_object* v_idx_3242_; uint8_t v___x_3243_; 
v_idx_3242_ = lean_ctor_get(v_pos_3240_, 1);
v___x_3243_ = lean_nat_dec_eq(v_idx_3239_, v_idx_3242_);
lean_dec(v_idx_3239_);
if (v___x_3243_ == 0)
{
lean_object* v___x_3245_; 
lean_dec(v___y_3238_);
lean_dec(v_snd_3224_);
lean_dec(v_fst_3223_);
lean_del_object(v___x_3221_);
lean_dec_ref(v_scheme_3215_);
if (v_isShared_3227_ == 0)
{
lean_ctor_set_tag(v___x_3226_, 1);
lean_ctor_set(v___x_3226_, 1, v_err_3241_);
lean_ctor_set(v___x_3226_, 0, v_pos_3240_);
v___x_3245_ = v___x_3226_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v_pos_3240_);
lean_ctor_set(v_reuseFailAlloc_3246_, 1, v_err_3241_);
v___x_3245_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
return v___x_3245_;
}
}
else
{
lean_object* v___x_3247_; 
lean_dec(v_err_3241_);
lean_del_object(v___x_3226_);
v___x_3247_ = lean_box(0);
v___y_3229_ = v___y_3238_;
v_pos_3230_ = v_pos_3240_;
v_res_3231_ = v___x_3247_;
goto v___jp_3228_;
}
}
v___jp_3248_:
{
lean_object* v___x_3253_; uint8_t v___x_3254_; 
v___x_3253_ = lean_byte_array_size(v_array_3250_);
v___x_3254_ = lean_nat_dec_lt(v_idx_3251_, v___x_3253_);
if (v___x_3254_ == 0)
{
lean_object* v___x_3255_; 
lean_dec_ref(v_array_3250_);
lean_dec_ref(v_config_3214_);
v___x_3255_ = lean_box(0);
v___y_3238_ = v_res_3252_;
v_idx_3239_ = v_idx_3251_;
v_pos_3240_ = v_pos_3249_;
v_err_3241_ = v___x_3255_;
goto v___jp_3237_;
}
else
{
uint8_t v___x_3256_; uint8_t v_got_3257_; uint8_t v___x_3258_; 
v___x_3256_ = 35;
v_got_3257_ = lean_byte_array_fget(v_array_3250_, v_idx_3251_);
v___x_3258_ = lean_uint8_dec_eq(v_got_3257_, v___x_3256_);
if (v___x_3258_ == 0)
{
lean_object* v___x_3259_; 
lean_dec_ref(v_array_3250_);
lean_dec_ref(v_config_3214_);
v___x_3259_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__1));
v___y_3238_ = v_res_3252_;
v_idx_3239_ = v_idx_3251_;
v_pos_3240_ = v_pos_3249_;
v_err_3241_ = v___x_3259_;
goto v___jp_3237_;
}
else
{
lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; 
lean_dec_ref(v_pos_3249_);
v___x_3260_ = lean_unsigned_to_nat(1u);
v___x_3261_ = lean_nat_add(v_idx_3251_, v___x_3260_);
v___x_3262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3262_, 0, v_array_3250_);
lean_ctor_set(v___x_3262_, 1, v___x_3261_);
v___x_3263_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(v_config_3214_, v___x_3262_);
lean_dec_ref(v_config_3214_);
if (lean_obj_tag(v___x_3263_) == 0)
{
lean_object* v_pos_3264_; lean_object* v_res_3265_; lean_object* v___x_3266_; 
lean_dec(v_idx_3251_);
lean_del_object(v___x_3226_);
v_pos_3264_ = lean_ctor_get(v___x_3263_, 0);
lean_inc(v_pos_3264_);
v_res_3265_ = lean_ctor_get(v___x_3263_, 1);
lean_inc(v_res_3265_);
lean_dec_ref_known(v___x_3263_, 2);
v___x_3266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3266_, 0, v_res_3265_);
v___y_3229_ = v_res_3252_;
v_pos_3230_ = v_pos_3264_;
v_res_3231_ = v___x_3266_;
goto v___jp_3228_;
}
else
{
lean_object* v_pos_3267_; lean_object* v_err_3268_; 
v_pos_3267_ = lean_ctor_get(v___x_3263_, 0);
lean_inc(v_pos_3267_);
v_err_3268_ = lean_ctor_get(v___x_3263_, 1);
lean_inc(v_err_3268_);
lean_dec_ref_known(v___x_3263_, 2);
v___y_3238_ = v_res_3252_;
v_idx_3239_ = v_idx_3251_;
v_pos_3240_ = v_pos_3267_;
v_err_3241_ = v_err_3268_;
goto v___jp_3237_;
}
}
}
}
v___jp_3271_:
{
uint8_t v___x_3276_; 
v___x_3276_ = lean_nat_dec_eq(v_idx_3270_, v_idx_3274_);
lean_dec(v_idx_3270_);
if (v___x_3276_ == 0)
{
lean_object* v___x_3277_; 
lean_dec(v_idx_3274_);
lean_dec_ref(v_array_3273_);
lean_del_object(v___x_3226_);
lean_dec(v_snd_3224_);
lean_dec(v_fst_3223_);
lean_del_object(v___x_3221_);
lean_dec_ref(v_scheme_3215_);
lean_dec_ref(v_config_3214_);
v___x_3277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3277_, 0, v_pos_3272_);
lean_ctor_set(v___x_3277_, 1, v_err_3275_);
return v___x_3277_;
}
else
{
lean_object* v___x_3278_; 
lean_dec(v_err_3275_);
v___x_3278_ = lean_box(0);
v_pos_3249_ = v_pos_3272_;
v_array_3250_ = v_array_3273_;
v_idx_3251_ = v_idx_3274_;
v_res_3252_ = v___x_3278_;
goto v___jp_3248_;
}
}
}
}
}
else
{
lean_object* v_pos_3309_; lean_object* v_err_3310_; lean_object* v___x_3312_; uint8_t v_isShared_3313_; uint8_t v_isSharedCheck_3317_; 
lean_dec_ref(v_scheme_3215_);
lean_dec_ref(v_config_3214_);
v_pos_3309_ = lean_ctor_get(v___x_3217_, 0);
v_err_3310_ = lean_ctor_get(v___x_3217_, 1);
v_isSharedCheck_3317_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3317_ == 0)
{
v___x_3312_ = v___x_3217_;
v_isShared_3313_ = v_isSharedCheck_3317_;
goto v_resetjp_3311_;
}
else
{
lean_inc(v_err_3310_);
lean_inc(v_pos_3309_);
lean_dec(v___x_3217_);
v___x_3312_ = lean_box(0);
v_isShared_3313_ = v_isSharedCheck_3317_;
goto v_resetjp_3311_;
}
v_resetjp_3311_:
{
lean_object* v___x_3315_; 
if (v_isShared_3313_ == 0)
{
v___x_3315_ = v___x_3312_;
goto v_reusejp_3314_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v_pos_3309_);
lean_ctor_set(v_reuseFailAlloc_3316_, 1, v_err_3310_);
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
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withAuthority(lean_object* v_config_3318_, lean_object* v_a_3319_){
_start:
{
lean_object* v___x_3320_; 
v___x_3320_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority(v_config_3318_, v_a_3319_);
if (lean_obj_tag(v___x_3320_) == 0)
{
lean_object* v_pos_3321_; lean_object* v_res_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3422_; 
v_pos_3321_ = lean_ctor_get(v___x_3320_, 0);
v_res_3322_ = lean_ctor_get(v___x_3320_, 1);
v_isSharedCheck_3422_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3422_ == 0)
{
v___x_3324_ = v___x_3320_;
v_isShared_3325_ = v_isSharedCheck_3422_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_res_3322_);
lean_inc(v_pos_3321_);
lean_dec(v___x_3320_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3422_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
uint8_t v___x_3326_; lean_object* v___x_3327_; 
v___x_3326_ = 1;
lean_inc_ref(v_config_3318_);
v___x_3327_ = l_Std_Http_URI_Parser_parsePath(v_config_3318_, v___x_3326_, v___x_3326_, v_pos_3321_);
if (lean_obj_tag(v___x_3327_) == 0)
{
lean_object* v_pos_3328_; lean_object* v_res_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3412_; 
v_pos_3328_ = lean_ctor_get(v___x_3327_, 0);
v_res_3329_ = lean_ctor_get(v___x_3327_, 1);
v_isSharedCheck_3412_ = !lean_is_exclusive(v___x_3327_);
if (v_isSharedCheck_3412_ == 0)
{
v___x_3331_ = v___x_3327_;
v_isShared_3332_ = v_isSharedCheck_3412_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_res_3329_);
lean_inc(v_pos_3328_);
lean_dec(v___x_3327_);
v___x_3331_ = lean_box(0);
v_isShared_3332_ = v_isSharedCheck_3412_;
goto v_resetjp_3330_;
}
v_resetjp_3330_:
{
lean_object* v___y_3334_; lean_object* v_pos_3335_; lean_object* v_res_3336_; lean_object* v___y_3343_; lean_object* v_idx_3344_; lean_object* v_pos_3345_; lean_object* v_err_3346_; lean_object* v_pos_3354_; lean_object* v_array_3355_; lean_object* v_idx_3356_; lean_object* v_res_3357_; lean_object* v_array_3374_; lean_object* v_idx_3375_; lean_object* v_pos_3377_; lean_object* v_array_3378_; lean_object* v_idx_3379_; lean_object* v_err_3380_; lean_object* v___x_3384_; uint8_t v___x_3385_; 
v_array_3374_ = lean_ctor_get(v_pos_3328_, 0);
lean_inc_ref(v_array_3374_);
v_idx_3375_ = lean_ctor_get(v_pos_3328_, 1);
lean_inc(v_idx_3375_);
v___x_3384_ = lean_byte_array_size(v_array_3374_);
v___x_3385_ = lean_nat_dec_lt(v_idx_3375_, v___x_3384_);
if (v___x_3385_ == 0)
{
lean_object* v___x_3386_; 
v___x_3386_ = lean_box(0);
lean_inc(v_idx_3375_);
v_pos_3377_ = v_pos_3328_;
v_array_3378_ = v_array_3374_;
v_idx_3379_ = v_idx_3375_;
v_err_3380_ = v___x_3386_;
goto v___jp_3376_;
}
else
{
uint8_t v___x_3387_; uint8_t v_got_3388_; uint8_t v___x_3389_; 
v___x_3387_ = 63;
v_got_3388_ = lean_byte_array_fget(v_array_3374_, v_idx_3375_);
v___x_3389_ = lean_uint8_dec_eq(v_got_3388_, v___x_3387_);
if (v___x_3389_ == 0)
{
lean_object* v___x_3390_; 
v___x_3390_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__3));
lean_inc(v_idx_3375_);
v_pos_3377_ = v_pos_3328_;
v_array_3378_ = v_array_3374_;
v_idx_3379_ = v_idx_3375_;
v_err_3380_ = v___x_3390_;
goto v___jp_3376_;
}
else
{
lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3409_; 
v_isSharedCheck_3409_ = !lean_is_exclusive(v_pos_3328_);
if (v_isSharedCheck_3409_ == 0)
{
lean_object* v_unused_3410_; lean_object* v_unused_3411_; 
v_unused_3410_ = lean_ctor_get(v_pos_3328_, 1);
lean_dec(v_unused_3410_);
v_unused_3411_ = lean_ctor_get(v_pos_3328_, 0);
lean_dec(v_unused_3411_);
v___x_3392_ = v_pos_3328_;
v_isShared_3393_ = v_isSharedCheck_3409_;
goto v_resetjp_3391_;
}
else
{
lean_dec(v_pos_3328_);
v___x_3392_ = lean_box(0);
v_isShared_3393_ = v_isSharedCheck_3409_;
goto v_resetjp_3391_;
}
v_resetjp_3391_:
{
lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3397_; 
v___x_3394_ = lean_unsigned_to_nat(1u);
v___x_3395_ = lean_nat_add(v_idx_3375_, v___x_3394_);
if (v_isShared_3393_ == 0)
{
lean_ctor_set(v___x_3392_, 1, v___x_3395_);
v___x_3397_ = v___x_3392_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v_array_3374_);
lean_ctor_set(v_reuseFailAlloc_3408_, 1, v___x_3395_);
v___x_3397_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
lean_object* v___x_3398_; 
lean_inc_ref(v_config_3318_);
v___x_3398_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_3318_, v___x_3397_);
if (lean_obj_tag(v___x_3398_) == 0)
{
lean_object* v_pos_3399_; lean_object* v_res_3400_; lean_object* v_array_3401_; lean_object* v_idx_3402_; lean_object* v___x_3403_; 
lean_dec(v_idx_3375_);
v_pos_3399_ = lean_ctor_get(v___x_3398_, 0);
lean_inc(v_pos_3399_);
v_res_3400_ = lean_ctor_get(v___x_3398_, 1);
lean_inc(v_res_3400_);
lean_dec_ref_known(v___x_3398_, 2);
v_array_3401_ = lean_ctor_get(v_pos_3399_, 0);
lean_inc_ref(v_array_3401_);
v_idx_3402_ = lean_ctor_get(v_pos_3399_, 1);
lean_inc(v_idx_3402_);
v___x_3403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3403_, 0, v_res_3400_);
v_pos_3354_ = v_pos_3399_;
v_array_3355_ = v_array_3401_;
v_idx_3356_ = v_idx_3402_;
v_res_3357_ = v___x_3403_;
goto v___jp_3353_;
}
else
{
lean_object* v_pos_3404_; lean_object* v_err_3405_; lean_object* v_array_3406_; lean_object* v_idx_3407_; 
v_pos_3404_ = lean_ctor_get(v___x_3398_, 0);
lean_inc(v_pos_3404_);
v_err_3405_ = lean_ctor_get(v___x_3398_, 1);
lean_inc(v_err_3405_);
lean_dec_ref_known(v___x_3398_, 2);
v_array_3406_ = lean_ctor_get(v_pos_3404_, 0);
lean_inc_ref(v_array_3406_);
v_idx_3407_ = lean_ctor_get(v_pos_3404_, 1);
lean_inc(v_idx_3407_);
v_pos_3377_ = v_pos_3404_;
v_array_3378_ = v_array_3406_;
v_idx_3379_ = v_idx_3407_;
v_err_3380_ = v_err_3405_;
goto v___jp_3376_;
}
}
}
}
}
v___jp_3333_:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3340_; 
v___x_3337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3337_, 0, v_res_3322_);
v___x_3338_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3338_, 0, v___x_3337_);
lean_ctor_set(v___x_3338_, 1, v_res_3329_);
lean_ctor_set(v___x_3338_, 2, v___y_3334_);
lean_ctor_set(v___x_3338_, 3, v_res_3336_);
if (v_isShared_3332_ == 0)
{
lean_ctor_set(v___x_3331_, 1, v___x_3338_);
lean_ctor_set(v___x_3331_, 0, v_pos_3335_);
v___x_3340_ = v___x_3331_;
goto v_reusejp_3339_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v_pos_3335_);
lean_ctor_set(v_reuseFailAlloc_3341_, 1, v___x_3338_);
v___x_3340_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3339_;
}
v_reusejp_3339_:
{
return v___x_3340_;
}
}
v___jp_3342_:
{
lean_object* v_idx_3347_; uint8_t v___x_3348_; 
v_idx_3347_ = lean_ctor_get(v_pos_3345_, 1);
v___x_3348_ = lean_nat_dec_eq(v_idx_3344_, v_idx_3347_);
lean_dec(v_idx_3344_);
if (v___x_3348_ == 0)
{
lean_object* v___x_3350_; 
lean_dec(v___y_3343_);
lean_del_object(v___x_3331_);
lean_dec(v_res_3329_);
lean_dec(v_res_3322_);
if (v_isShared_3325_ == 0)
{
lean_ctor_set_tag(v___x_3324_, 1);
lean_ctor_set(v___x_3324_, 1, v_err_3346_);
lean_ctor_set(v___x_3324_, 0, v_pos_3345_);
v___x_3350_ = v___x_3324_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v_pos_3345_);
lean_ctor_set(v_reuseFailAlloc_3351_, 1, v_err_3346_);
v___x_3350_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
return v___x_3350_;
}
}
else
{
lean_object* v___x_3352_; 
lean_dec(v_err_3346_);
lean_del_object(v___x_3324_);
v___x_3352_ = lean_box(0);
v___y_3334_ = v___y_3343_;
v_pos_3335_ = v_pos_3345_;
v_res_3336_ = v___x_3352_;
goto v___jp_3333_;
}
}
v___jp_3353_:
{
lean_object* v___x_3358_; uint8_t v___x_3359_; 
v___x_3358_ = lean_byte_array_size(v_array_3355_);
v___x_3359_ = lean_nat_dec_lt(v_idx_3356_, v___x_3358_);
if (v___x_3359_ == 0)
{
lean_object* v___x_3360_; 
lean_dec_ref(v_array_3355_);
lean_dec_ref(v_config_3318_);
v___x_3360_ = lean_box(0);
v___y_3343_ = v_res_3357_;
v_idx_3344_ = v_idx_3356_;
v_pos_3345_ = v_pos_3354_;
v_err_3346_ = v___x_3360_;
goto v___jp_3342_;
}
else
{
uint8_t v___x_3361_; uint8_t v_got_3362_; uint8_t v___x_3363_; 
v___x_3361_ = 35;
v_got_3362_ = lean_byte_array_fget(v_array_3355_, v_idx_3356_);
v___x_3363_ = lean_uint8_dec_eq(v_got_3362_, v___x_3361_);
if (v___x_3363_ == 0)
{
lean_object* v___x_3364_; 
lean_dec_ref(v_array_3355_);
lean_dec_ref(v_config_3318_);
v___x_3364_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__1));
v___y_3343_ = v_res_3357_;
v_idx_3344_ = v_idx_3356_;
v_pos_3345_ = v_pos_3354_;
v_err_3346_ = v___x_3364_;
goto v___jp_3342_;
}
else
{
lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
lean_dec_ref(v_pos_3354_);
v___x_3365_ = lean_unsigned_to_nat(1u);
v___x_3366_ = lean_nat_add(v_idx_3356_, v___x_3365_);
v___x_3367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3367_, 0, v_array_3355_);
lean_ctor_set(v___x_3367_, 1, v___x_3366_);
v___x_3368_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(v_config_3318_, v___x_3367_);
lean_dec_ref(v_config_3318_);
if (lean_obj_tag(v___x_3368_) == 0)
{
lean_object* v_pos_3369_; lean_object* v_res_3370_; lean_object* v___x_3371_; 
lean_dec(v_idx_3356_);
lean_del_object(v___x_3324_);
v_pos_3369_ = lean_ctor_get(v___x_3368_, 0);
lean_inc(v_pos_3369_);
v_res_3370_ = lean_ctor_get(v___x_3368_, 1);
lean_inc(v_res_3370_);
lean_dec_ref_known(v___x_3368_, 2);
v___x_3371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3371_, 0, v_res_3370_);
v___y_3334_ = v_res_3357_;
v_pos_3335_ = v_pos_3369_;
v_res_3336_ = v___x_3371_;
goto v___jp_3333_;
}
else
{
lean_object* v_pos_3372_; lean_object* v_err_3373_; 
v_pos_3372_ = lean_ctor_get(v___x_3368_, 0);
lean_inc(v_pos_3372_);
v_err_3373_ = lean_ctor_get(v___x_3368_, 1);
lean_inc(v_err_3373_);
lean_dec_ref_known(v___x_3368_, 2);
v___y_3343_ = v_res_3357_;
v_idx_3344_ = v_idx_3356_;
v_pos_3345_ = v_pos_3372_;
v_err_3346_ = v_err_3373_;
goto v___jp_3342_;
}
}
}
}
v___jp_3376_:
{
uint8_t v___x_3381_; 
v___x_3381_ = lean_nat_dec_eq(v_idx_3375_, v_idx_3379_);
lean_dec(v_idx_3375_);
if (v___x_3381_ == 0)
{
lean_object* v___x_3382_; 
lean_dec(v_idx_3379_);
lean_dec_ref(v_array_3378_);
lean_del_object(v___x_3331_);
lean_dec(v_res_3329_);
lean_del_object(v___x_3324_);
lean_dec(v_res_3322_);
lean_dec_ref(v_config_3318_);
v___x_3382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3382_, 0, v_pos_3377_);
lean_ctor_set(v___x_3382_, 1, v_err_3380_);
return v___x_3382_;
}
else
{
lean_object* v___x_3383_; 
lean_dec(v_err_3380_);
v___x_3383_ = lean_box(0);
v_pos_3354_ = v_pos_3377_;
v_array_3355_ = v_array_3378_;
v_idx_3356_ = v_idx_3379_;
v_res_3357_ = v___x_3383_;
goto v___jp_3353_;
}
}
}
}
else
{
lean_object* v_pos_3413_; lean_object* v_err_3414_; lean_object* v___x_3416_; uint8_t v_isShared_3417_; uint8_t v_isSharedCheck_3421_; 
lean_del_object(v___x_3324_);
lean_dec(v_res_3322_);
lean_dec_ref(v_config_3318_);
v_pos_3413_ = lean_ctor_get(v___x_3327_, 0);
v_err_3414_ = lean_ctor_get(v___x_3327_, 1);
v_isSharedCheck_3421_ = !lean_is_exclusive(v___x_3327_);
if (v_isSharedCheck_3421_ == 0)
{
v___x_3416_ = v___x_3327_;
v_isShared_3417_ = v_isSharedCheck_3421_;
goto v_resetjp_3415_;
}
else
{
lean_inc(v_err_3414_);
lean_inc(v_pos_3413_);
lean_dec(v___x_3327_);
v___x_3416_ = lean_box(0);
v_isShared_3417_ = v_isSharedCheck_3421_;
goto v_resetjp_3415_;
}
v_resetjp_3415_:
{
lean_object* v___x_3419_; 
if (v_isShared_3417_ == 0)
{
v___x_3419_ = v___x_3416_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v_pos_3413_);
lean_ctor_set(v_reuseFailAlloc_3420_, 1, v_err_3414_);
v___x_3419_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
return v___x_3419_;
}
}
}
}
}
else
{
lean_object* v_pos_3423_; lean_object* v_err_3424_; lean_object* v___x_3426_; uint8_t v_isShared_3427_; uint8_t v_isSharedCheck_3431_; 
lean_dec_ref(v_config_3318_);
v_pos_3423_ = lean_ctor_get(v___x_3320_, 0);
v_err_3424_ = lean_ctor_get(v___x_3320_, 1);
v_isSharedCheck_3431_ = !lean_is_exclusive(v___x_3320_);
if (v_isSharedCheck_3431_ == 0)
{
v___x_3426_ = v___x_3320_;
v_isShared_3427_ = v_isSharedCheck_3431_;
goto v_resetjp_3425_;
}
else
{
lean_inc(v_err_3424_);
lean_inc(v_pos_3423_);
lean_dec(v___x_3320_);
v___x_3426_ = lean_box(0);
v_isShared_3427_ = v_isSharedCheck_3431_;
goto v_resetjp_3425_;
}
v_resetjp_3425_:
{
lean_object* v___x_3429_; 
if (v_isShared_3427_ == 0)
{
v___x_3429_ = v___x_3426_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3430_; 
v_reuseFailAlloc_3430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3430_, 0, v_pos_3423_);
lean_ctor_set(v_reuseFailAlloc_3430_, 1, v_err_3424_);
v___x_3429_ = v_reuseFailAlloc_3430_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
return v___x_3429_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath_spec__0_spec__0(uint8_t v_a_3432_, lean_object* v_as_3433_, size_t v_i_3434_, size_t v_stop_3435_){
_start:
{
uint8_t v___x_3436_; 
v___x_3436_ = lean_usize_dec_eq(v_i_3434_, v_stop_3435_);
if (v___x_3436_ == 0)
{
lean_object* v___x_3437_; uint8_t v___x_3438_; uint8_t v___x_3439_; 
v___x_3437_ = lean_array_uget_borrowed(v_as_3433_, v_i_3434_);
v___x_3438_ = lean_unbox(v___x_3437_);
v___x_3439_ = lean_uint8_dec_eq(v_a_3432_, v___x_3438_);
if (v___x_3439_ == 0)
{
size_t v___x_3440_; size_t v___x_3441_; 
v___x_3440_ = ((size_t)1ULL);
v___x_3441_ = lean_usize_add(v_i_3434_, v___x_3440_);
v_i_3434_ = v___x_3441_;
goto _start;
}
else
{
return v___x_3439_;
}
}
else
{
uint8_t v___x_3443_; 
v___x_3443_ = 0;
return v___x_3443_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath_spec__0_spec__0___boxed(lean_object* v_a_3444_, lean_object* v_as_3445_, lean_object* v_i_3446_, lean_object* v_stop_3447_){
_start:
{
uint8_t v_a_boxed_3448_; size_t v_i_boxed_3449_; size_t v_stop_boxed_3450_; uint8_t v_res_3451_; lean_object* v_r_3452_; 
v_a_boxed_3448_ = lean_unbox(v_a_3444_);
v_i_boxed_3449_ = lean_unbox_usize(v_i_3446_);
lean_dec(v_i_3446_);
v_stop_boxed_3450_ = lean_unbox_usize(v_stop_3447_);
lean_dec(v_stop_3447_);
v_res_3451_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath_spec__0_spec__0(v_a_boxed_3448_, v_as_3445_, v_i_boxed_3449_, v_stop_boxed_3450_);
lean_dec_ref(v_as_3445_);
v_r_3452_ = lean_box(v_res_3451_);
return v_r_3452_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath_spec__0(lean_object* v_as_3453_, uint8_t v_a_3454_){
_start:
{
lean_object* v___x_3455_; lean_object* v___x_3456_; uint8_t v___x_3457_; 
v___x_3455_ = lean_unsigned_to_nat(0u);
v___x_3456_ = lean_array_get_size(v_as_3453_);
v___x_3457_ = lean_nat_dec_lt(v___x_3455_, v___x_3456_);
if (v___x_3457_ == 0)
{
return v___x_3457_;
}
else
{
size_t v___x_3458_; size_t v___x_3459_; uint8_t v___x_3460_; 
v___x_3458_ = ((size_t)0ULL);
v___x_3459_ = lean_usize_of_nat(v___x_3456_);
v___x_3460_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath_spec__0_spec__0(v_a_3454_, v_as_3453_, v___x_3458_, v___x_3459_);
return v___x_3460_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath_spec__0___boxed(lean_object* v_as_3461_, lean_object* v_a_3462_){
_start:
{
uint8_t v_a_boxed_3463_; uint8_t v_res_3464_; lean_object* v_r_3465_; 
v_a_boxed_3463_ = lean_unbox(v_a_3462_);
v_res_3464_ = l_Array_contains___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath_spec__0(v_as_3461_, v_a_boxed_3463_);
lean_dec_ref(v_as_3461_);
v_r_3465_ = lean_box(v_res_3464_);
return v_r_3465_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath(lean_object* v_config_3469_, lean_object* v_a_3470_){
_start:
{
uint8_t v___x_3471_; uint8_t v___x_3472_; lean_object* v___x_3473_; 
v___x_3471_ = 0;
v___x_3472_ = 1;
lean_inc_ref(v_config_3469_);
v___x_3473_ = l_Std_Http_URI_Parser_parsePath(v_config_3469_, v___x_3471_, v___x_3472_, v_a_3470_);
if (lean_obj_tag(v___x_3473_) == 0)
{
lean_object* v_pos_3474_; lean_object* v_res_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3566_; 
v_pos_3474_ = lean_ctor_get(v___x_3473_, 0);
v_res_3475_ = lean_ctor_get(v___x_3473_, 1);
v_isSharedCheck_3566_ = !lean_is_exclusive(v___x_3473_);
if (v_isSharedCheck_3566_ == 0)
{
v___x_3477_ = v___x_3473_;
v_isShared_3478_ = v_isSharedCheck_3566_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_res_3475_);
lean_inc(v_pos_3474_);
lean_dec(v___x_3473_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3566_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
lean_object* v___y_3480_; lean_object* v_pos_3481_; lean_object* v_res_3482_; lean_object* v___y_3489_; lean_object* v_idx_3490_; lean_object* v_pos_3491_; lean_object* v_err_3492_; lean_object* v_pos_3498_; lean_object* v_array_3499_; lean_object* v_idx_3500_; lean_object* v_res_3501_; lean_object* v_pos_3519_; lean_object* v_err_3520_; uint8_t v_absolute_3555_; 
v_absolute_3555_ = lean_ctor_get_uint8(v_res_3475_, sizeof(void*)*1);
if (v_absolute_3555_ == 0)
{
lean_object* v_segments_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; uint8_t v___x_3559_; 
v_segments_3556_ = lean_ctor_get(v_res_3475_, 0);
v___x_3557_ = lean_unsigned_to_nat(0u);
v___x_3558_ = lean_array_get_size(v_segments_3556_);
v___x_3559_ = lean_nat_dec_lt(v___x_3557_, v___x_3558_);
if (v___x_3559_ == 0)
{
goto v___jp_3534_;
}
else
{
lean_object* v___x_3560_; lean_object* v___x_3561_; uint8_t v___x_3562_; uint8_t v___x_3563_; 
v___x_3560_ = lean_array_fget_borrowed(v_segments_3556_, v___x_3557_);
lean_inc(v___x_3560_);
v___x_3561_ = lean_byte_array_data(v___x_3560_);
v___x_3562_ = 58;
v___x_3563_ = l_Array_contains___at___00__private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath_spec__0(v___x_3561_, v___x_3562_);
lean_dec_ref(v___x_3561_);
if (v___x_3563_ == 0)
{
goto v___jp_3534_;
}
else
{
lean_object* v___x_3564_; lean_object* v___x_3565_; 
lean_del_object(v___x_3477_);
lean_dec(v_res_3475_);
lean_dec_ref(v_config_3469_);
v___x_3564_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath___closed__1));
v___x_3565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3565_, 0, v_pos_3474_);
lean_ctor_set(v___x_3565_, 1, v___x_3564_);
return v___x_3565_;
}
}
}
else
{
goto v___jp_3534_;
}
v___jp_3479_:
{
lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3486_; 
v___x_3483_ = lean_box(0);
v___x_3484_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3484_, 0, v___x_3483_);
lean_ctor_set(v___x_3484_, 1, v_res_3475_);
lean_ctor_set(v___x_3484_, 2, v___y_3480_);
lean_ctor_set(v___x_3484_, 3, v_res_3482_);
if (v_isShared_3478_ == 0)
{
lean_ctor_set(v___x_3477_, 1, v___x_3484_);
lean_ctor_set(v___x_3477_, 0, v_pos_3481_);
v___x_3486_ = v___x_3477_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3487_; 
v_reuseFailAlloc_3487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3487_, 0, v_pos_3481_);
lean_ctor_set(v_reuseFailAlloc_3487_, 1, v___x_3484_);
v___x_3486_ = v_reuseFailAlloc_3487_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
return v___x_3486_;
}
}
v___jp_3488_:
{
lean_object* v_idx_3493_; uint8_t v___x_3494_; 
v_idx_3493_ = lean_ctor_get(v_pos_3491_, 1);
v___x_3494_ = lean_nat_dec_eq(v_idx_3490_, v_idx_3493_);
lean_dec(v_idx_3490_);
if (v___x_3494_ == 0)
{
lean_object* v___x_3495_; 
lean_dec(v___y_3489_);
lean_del_object(v___x_3477_);
lean_dec(v_res_3475_);
v___x_3495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3495_, 0, v_pos_3491_);
lean_ctor_set(v___x_3495_, 1, v_err_3492_);
return v___x_3495_;
}
else
{
lean_object* v___x_3496_; 
lean_dec(v_err_3492_);
v___x_3496_ = lean_box(0);
v___y_3480_ = v___y_3489_;
v_pos_3481_ = v_pos_3491_;
v_res_3482_ = v___x_3496_;
goto v___jp_3479_;
}
}
v___jp_3497_:
{
lean_object* v___x_3502_; uint8_t v___x_3503_; 
v___x_3502_ = lean_byte_array_size(v_array_3499_);
v___x_3503_ = lean_nat_dec_lt(v_idx_3500_, v___x_3502_);
if (v___x_3503_ == 0)
{
lean_object* v___x_3504_; 
lean_dec_ref(v_array_3499_);
lean_dec_ref(v_config_3469_);
v___x_3504_ = lean_box(0);
v___y_3489_ = v_res_3501_;
v_idx_3490_ = v_idx_3500_;
v_pos_3491_ = v_pos_3498_;
v_err_3492_ = v___x_3504_;
goto v___jp_3488_;
}
else
{
uint8_t v___x_3505_; uint8_t v_got_3506_; uint8_t v___x_3507_; 
v___x_3505_ = 35;
v_got_3506_ = lean_byte_array_fget(v_array_3499_, v_idx_3500_);
v___x_3507_ = lean_uint8_dec_eq(v_got_3506_, v___x_3505_);
if (v___x_3507_ == 0)
{
lean_object* v___x_3508_; 
lean_dec_ref(v_array_3499_);
lean_dec_ref(v_config_3469_);
v___x_3508_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__1));
v___y_3489_ = v_res_3501_;
v_idx_3490_ = v_idx_3500_;
v_pos_3491_ = v_pos_3498_;
v_err_3492_ = v___x_3508_;
goto v___jp_3488_;
}
else
{
lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; 
lean_dec_ref(v_pos_3498_);
v___x_3509_ = lean_unsigned_to_nat(1u);
v___x_3510_ = lean_nat_add(v_idx_3500_, v___x_3509_);
v___x_3511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3511_, 0, v_array_3499_);
lean_ctor_set(v___x_3511_, 1, v___x_3510_);
v___x_3512_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_fragment(v_config_3469_, v___x_3511_);
lean_dec_ref(v_config_3469_);
if (lean_obj_tag(v___x_3512_) == 0)
{
lean_object* v_pos_3513_; lean_object* v_res_3514_; lean_object* v___x_3515_; 
lean_dec(v_idx_3500_);
v_pos_3513_ = lean_ctor_get(v___x_3512_, 0);
lean_inc(v_pos_3513_);
v_res_3514_ = lean_ctor_get(v___x_3512_, 1);
lean_inc(v_res_3514_);
lean_dec_ref_known(v___x_3512_, 2);
v___x_3515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3515_, 0, v_res_3514_);
v___y_3480_ = v_res_3501_;
v_pos_3481_ = v_pos_3513_;
v_res_3482_ = v___x_3515_;
goto v___jp_3479_;
}
else
{
lean_object* v_pos_3516_; lean_object* v_err_3517_; 
v_pos_3516_ = lean_ctor_get(v___x_3512_, 0);
lean_inc(v_pos_3516_);
v_err_3517_ = lean_ctor_get(v___x_3512_, 1);
lean_inc(v_err_3517_);
lean_dec_ref_known(v___x_3512_, 2);
v___y_3489_ = v_res_3501_;
v_idx_3490_ = v_idx_3500_;
v_pos_3491_ = v_pos_3516_;
v_err_3492_ = v_err_3517_;
goto v___jp_3488_;
}
}
}
}
v___jp_3518_:
{
lean_object* v_idx_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3532_; 
v_idx_3521_ = lean_ctor_get(v_pos_3474_, 1);
v_isSharedCheck_3532_ = !lean_is_exclusive(v_pos_3474_);
if (v_isSharedCheck_3532_ == 0)
{
lean_object* v_unused_3533_; 
v_unused_3533_ = lean_ctor_get(v_pos_3474_, 0);
lean_dec(v_unused_3533_);
v___x_3523_ = v_pos_3474_;
v_isShared_3524_ = v_isSharedCheck_3532_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_idx_3521_);
lean_dec(v_pos_3474_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3532_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
lean_object* v_array_3525_; lean_object* v_idx_3526_; uint8_t v___x_3527_; 
v_array_3525_ = lean_ctor_get(v_pos_3519_, 0);
v_idx_3526_ = lean_ctor_get(v_pos_3519_, 1);
v___x_3527_ = lean_nat_dec_eq(v_idx_3521_, v_idx_3526_);
lean_dec(v_idx_3521_);
if (v___x_3527_ == 0)
{
lean_object* v___x_3529_; 
lean_del_object(v___x_3477_);
lean_dec(v_res_3475_);
lean_dec_ref(v_config_3469_);
if (v_isShared_3524_ == 0)
{
lean_ctor_set_tag(v___x_3523_, 1);
lean_ctor_set(v___x_3523_, 1, v_err_3520_);
lean_ctor_set(v___x_3523_, 0, v_pos_3519_);
v___x_3529_ = v___x_3523_;
goto v_reusejp_3528_;
}
else
{
lean_object* v_reuseFailAlloc_3530_; 
v_reuseFailAlloc_3530_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3530_, 0, v_pos_3519_);
lean_ctor_set(v_reuseFailAlloc_3530_, 1, v_err_3520_);
v___x_3529_ = v_reuseFailAlloc_3530_;
goto v_reusejp_3528_;
}
v_reusejp_3528_:
{
return v___x_3529_;
}
}
else
{
lean_object* v___x_3531_; 
lean_inc(v_idx_3526_);
lean_inc_ref(v_array_3525_);
lean_del_object(v___x_3523_);
lean_dec(v_err_3520_);
v___x_3531_ = lean_box(0);
v_pos_3498_ = v_pos_3519_;
v_array_3499_ = v_array_3525_;
v_idx_3500_ = v_idx_3526_;
v_res_3501_ = v___x_3531_;
goto v___jp_3497_;
}
}
}
v___jp_3534_:
{
lean_object* v_array_3535_; lean_object* v_idx_3536_; lean_object* v___x_3537_; uint8_t v___x_3538_; 
v_array_3535_ = lean_ctor_get(v_pos_3474_, 0);
v_idx_3536_ = lean_ctor_get(v_pos_3474_, 1);
v___x_3537_ = lean_byte_array_size(v_array_3535_);
v___x_3538_ = lean_nat_dec_lt(v_idx_3536_, v___x_3537_);
if (v___x_3538_ == 0)
{
lean_object* v___x_3539_; 
v___x_3539_ = lean_box(0);
lean_inc(v_pos_3474_);
v_pos_3519_ = v_pos_3474_;
v_err_3520_ = v___x_3539_;
goto v___jp_3518_;
}
else
{
uint8_t v___x_3540_; uint8_t v_got_3541_; uint8_t v___x_3542_; 
v___x_3540_ = 63;
v_got_3541_ = lean_byte_array_fget(v_array_3535_, v_idx_3536_);
v___x_3542_ = lean_uint8_dec_eq(v_got_3541_, v___x_3540_);
if (v___x_3542_ == 0)
{
lean_object* v___x_3543_; 
v___x_3543_ = ((lean_object*)(l_Std_Http_URI_Parser_parseURI___closed__3));
lean_inc(v_pos_3474_);
v_pos_3519_ = v_pos_3474_;
v_err_3520_ = v___x_3543_;
goto v___jp_3518_;
}
else
{
lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3544_ = lean_unsigned_to_nat(1u);
v___x_3545_ = lean_nat_add(v_idx_3536_, v___x_3544_);
lean_inc_ref(v_array_3535_);
v___x_3546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3546_, 0, v_array_3535_);
lean_ctor_set(v___x_3546_, 1, v___x_3545_);
lean_inc_ref(v_config_3469_);
v___x_3547_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseQuery(v_config_3469_, v___x_3546_);
if (lean_obj_tag(v___x_3547_) == 0)
{
lean_object* v_pos_3548_; lean_object* v_res_3549_; lean_object* v_array_3550_; lean_object* v_idx_3551_; lean_object* v___x_3552_; 
lean_dec(v_pos_3474_);
v_pos_3548_ = lean_ctor_get(v___x_3547_, 0);
lean_inc(v_pos_3548_);
v_res_3549_ = lean_ctor_get(v___x_3547_, 1);
lean_inc(v_res_3549_);
lean_dec_ref_known(v___x_3547_, 2);
v_array_3550_ = lean_ctor_get(v_pos_3548_, 0);
lean_inc_ref(v_array_3550_);
v_idx_3551_ = lean_ctor_get(v_pos_3548_, 1);
lean_inc(v_idx_3551_);
v___x_3552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3552_, 0, v_res_3549_);
v_pos_3498_ = v_pos_3548_;
v_array_3499_ = v_array_3550_;
v_idx_3500_ = v_idx_3551_;
v_res_3501_ = v___x_3552_;
goto v___jp_3497_;
}
else
{
lean_object* v_pos_3553_; lean_object* v_err_3554_; 
v_pos_3553_ = lean_ctor_get(v___x_3547_, 0);
lean_inc(v_pos_3553_);
v_err_3554_ = lean_ctor_get(v___x_3547_, 1);
lean_inc(v_err_3554_);
lean_dec_ref_known(v___x_3547_, 2);
v_pos_3519_ = v_pos_3553_;
v_err_3520_ = v_err_3554_;
goto v___jp_3518_;
}
}
}
}
}
}
else
{
lean_object* v_pos_3567_; lean_object* v_err_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3575_; 
lean_dec_ref(v_config_3469_);
v_pos_3567_ = lean_ctor_get(v___x_3473_, 0);
v_err_3568_ = lean_ctor_get(v___x_3473_, 1);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___x_3473_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3570_ = v___x_3473_;
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_err_3568_);
lean_inc(v_pos_3567_);
lean_dec(v___x_3473_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3573_; 
if (v_isShared_3571_ == 0)
{
v___x_3573_ = v___x_3570_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v_pos_3567_);
lean_ctor_set(v_reuseFailAlloc_3574_, 1, v_err_3568_);
v___x_3573_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
return v___x_3573_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseURIReference(lean_object* v_config_3576_, lean_object* v_a_3577_){
_start:
{
lean_object* v_err_3579_; lean_object* v___x_3626_; 
lean_inc_ref(v_a_3577_);
v___x_3626_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseScheme(v_config_3576_, v_a_3577_);
if (lean_obj_tag(v___x_3626_) == 0)
{
lean_object* v_pos_3627_; lean_object* v_res_3628_; lean_object* v_array_3629_; lean_object* v_idx_3630_; lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3647_; 
v_pos_3627_ = lean_ctor_get(v___x_3626_, 0);
lean_inc(v_pos_3627_);
v_res_3628_ = lean_ctor_get(v___x_3626_, 1);
lean_inc(v_res_3628_);
lean_dec_ref_known(v___x_3626_, 2);
v_array_3629_ = lean_ctor_get(v_pos_3627_, 0);
v_idx_3630_ = lean_ctor_get(v_pos_3627_, 1);
v_isSharedCheck_3647_ = !lean_is_exclusive(v_pos_3627_);
if (v_isSharedCheck_3647_ == 0)
{
v___x_3632_ = v_pos_3627_;
v_isShared_3633_ = v_isSharedCheck_3647_;
goto v_resetjp_3631_;
}
else
{
lean_inc(v_idx_3630_);
lean_inc(v_array_3629_);
lean_dec(v_pos_3627_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3647_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___x_3634_; uint8_t v___x_3635_; 
v___x_3634_ = lean_byte_array_size(v_array_3629_);
v___x_3635_ = lean_nat_dec_lt(v_idx_3630_, v___x_3634_);
if (v___x_3635_ == 0)
{
lean_object* v___x_3636_; 
lean_del_object(v___x_3632_);
lean_dec(v_idx_3630_);
lean_dec_ref(v_array_3629_);
lean_dec(v_res_3628_);
v___x_3636_ = lean_box(0);
v_err_3579_ = v___x_3636_;
goto v___jp_3578_;
}
else
{
uint8_t v___x_3637_; uint8_t v_got_3638_; uint8_t v___x_3639_; 
v___x_3637_ = 58;
v_got_3638_ = lean_byte_array_fget(v_array_3629_, v_idx_3630_);
v___x_3639_ = lean_uint8_dec_eq(v_got_3638_, v___x_3637_);
if (v___x_3639_ == 0)
{
lean_object* v___x_3640_; 
lean_del_object(v___x_3632_);
lean_dec(v_idx_3630_);
lean_dec_ref(v_array_3629_);
lean_dec(v_res_3628_);
v___x_3640_ = ((lean_object*)(l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseAuthority___closed__3));
v_err_3579_ = v___x_3640_;
goto v___jp_3578_;
}
else
{
lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3644_; 
lean_dec_ref(v_a_3577_);
v___x_3641_ = lean_unsigned_to_nat(1u);
v___x_3642_ = lean_nat_add(v_idx_3630_, v___x_3641_);
lean_dec(v_idx_3630_);
if (v_isShared_3633_ == 0)
{
lean_ctor_set(v___x_3632_, 1, v___x_3642_);
v___x_3644_ = v___x_3632_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3646_; 
v_reuseFailAlloc_3646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3646_, 0, v_array_3629_);
lean_ctor_set(v_reuseFailAlloc_3646_, 1, v___x_3642_);
v___x_3644_ = v_reuseFailAlloc_3646_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
lean_object* v___x_3645_; 
v___x_3645_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_uri(v_config_3576_, v_res_3628_, v___x_3644_);
return v___x_3645_;
}
}
}
}
}
else
{
lean_object* v_err_3648_; 
v_err_3648_ = lean_ctor_get(v___x_3626_, 1);
lean_inc(v_err_3648_);
lean_dec_ref_known(v___x_3626_, 2);
v_err_3579_ = v_err_3648_;
goto v___jp_3578_;
}
v___jp_3578_:
{
lean_object* v_idx_3580_; uint8_t v___x_3581_; 
v_idx_3580_ = lean_ctor_get(v_a_3577_, 1);
v___x_3581_ = lean_nat_dec_eq(v_idx_3580_, v_idx_3580_);
if (v___x_3581_ == 0)
{
lean_object* v___x_3582_; 
lean_dec_ref(v_config_3576_);
v___x_3582_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3582_, 0, v_a_3577_);
lean_ctor_set(v___x_3582_, 1, v_err_3579_);
return v___x_3582_;
}
else
{
lean_object* v_utf8_3583_; lean_object* v___x_3584_; 
lean_dec(v_err_3579_);
v_utf8_3583_ = lean_obj_once(&l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1, &l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1_once, _init_l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHierPart___closed__1);
lean_inc_ref(v_a_3577_);
v___x_3584_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v_utf8_3583_, v_a_3577_);
if (lean_obj_tag(v___x_3584_) == 0)
{
lean_object* v_pos_3585_; lean_object* v___x_3586_; 
lean_dec_ref(v_a_3577_);
v_pos_3585_ = lean_ctor_get(v___x_3584_, 0);
lean_inc(v_pos_3585_);
lean_dec_ref_known(v___x_3584_, 2);
v___x_3586_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withAuthority(v_config_3576_, v_pos_3585_);
if (lean_obj_tag(v___x_3586_) == 0)
{
lean_object* v_pos_3587_; lean_object* v_res_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3596_; 
v_pos_3587_ = lean_ctor_get(v___x_3586_, 0);
v_res_3588_ = lean_ctor_get(v___x_3586_, 1);
v_isSharedCheck_3596_ = !lean_is_exclusive(v___x_3586_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3590_ = v___x_3586_;
v_isShared_3591_ = v_isSharedCheck_3596_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_res_3588_);
lean_inc(v_pos_3587_);
lean_dec(v___x_3586_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3596_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3592_; lean_object* v___x_3594_; 
v___x_3592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3592_, 0, v_res_3588_);
if (v_isShared_3591_ == 0)
{
lean_ctor_set(v___x_3590_, 1, v___x_3592_);
v___x_3594_ = v___x_3590_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v_pos_3587_);
lean_ctor_set(v_reuseFailAlloc_3595_, 1, v___x_3592_);
v___x_3594_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
return v___x_3594_;
}
}
}
else
{
lean_object* v_pos_3597_; lean_object* v_err_3598_; lean_object* v___x_3600_; uint8_t v_isShared_3601_; uint8_t v_isSharedCheck_3605_; 
v_pos_3597_ = lean_ctor_get(v___x_3586_, 0);
v_err_3598_ = lean_ctor_get(v___x_3586_, 1);
v_isSharedCheck_3605_ = !lean_is_exclusive(v___x_3586_);
if (v_isSharedCheck_3605_ == 0)
{
v___x_3600_ = v___x_3586_;
v_isShared_3601_ = v_isSharedCheck_3605_;
goto v_resetjp_3599_;
}
else
{
lean_inc(v_err_3598_);
lean_inc(v_pos_3597_);
lean_dec(v___x_3586_);
v___x_3600_ = lean_box(0);
v_isShared_3601_ = v_isSharedCheck_3605_;
goto v_resetjp_3599_;
}
v_resetjp_3599_:
{
lean_object* v___x_3603_; 
if (v_isShared_3601_ == 0)
{
v___x_3603_ = v___x_3600_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v_pos_3597_);
lean_ctor_set(v_reuseFailAlloc_3604_, 1, v_err_3598_);
v___x_3603_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3602_;
}
v_reusejp_3602_:
{
return v___x_3603_;
}
}
}
}
else
{
lean_object* v___x_3606_; 
lean_dec_ref_known(v___x_3584_, 2);
v___x_3606_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseURIReference_withPath(v_config_3576_, v_a_3577_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v_pos_3607_; lean_object* v_res_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3616_; 
v_pos_3607_ = lean_ctor_get(v___x_3606_, 0);
v_res_3608_ = lean_ctor_get(v___x_3606_, 1);
v_isSharedCheck_3616_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3616_ == 0)
{
v___x_3610_ = v___x_3606_;
v_isShared_3611_ = v_isSharedCheck_3616_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_res_3608_);
lean_inc(v_pos_3607_);
lean_dec(v___x_3606_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3616_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
lean_object* v___x_3612_; lean_object* v___x_3614_; 
v___x_3612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3612_, 0, v_res_3608_);
if (v_isShared_3611_ == 0)
{
lean_ctor_set(v___x_3610_, 1, v___x_3612_);
v___x_3614_ = v___x_3610_;
goto v_reusejp_3613_;
}
else
{
lean_object* v_reuseFailAlloc_3615_; 
v_reuseFailAlloc_3615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3615_, 0, v_pos_3607_);
lean_ctor_set(v_reuseFailAlloc_3615_, 1, v___x_3612_);
v___x_3614_ = v_reuseFailAlloc_3615_;
goto v_reusejp_3613_;
}
v_reusejp_3613_:
{
return v___x_3614_;
}
}
}
else
{
lean_object* v_pos_3617_; lean_object* v_err_3618_; lean_object* v___x_3620_; uint8_t v_isShared_3621_; uint8_t v_isSharedCheck_3625_; 
v_pos_3617_ = lean_ctor_get(v___x_3606_, 0);
v_err_3618_ = lean_ctor_get(v___x_3606_, 1);
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3620_ = v___x_3606_;
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
else
{
lean_inc(v_err_3618_);
lean_inc(v_pos_3617_);
lean_dec(v___x_3606_);
v___x_3620_ = lean_box(0);
v_isShared_3621_ = v_isSharedCheck_3625_;
goto v_resetjp_3619_;
}
v_resetjp_3619_:
{
lean_object* v___x_3623_; 
if (v_isShared_3621_ == 0)
{
v___x_3623_ = v___x_3620_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v_pos_3617_);
lean_ctor_set(v_reuseFailAlloc_3624_, 1, v_err_3618_);
v___x_3623_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
return v___x_3623_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseHostHeader(lean_object* v_config_3655_, lean_object* v_a_3656_){
_start:
{
lean_object* v___x_3657_; 
v___x_3657_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parseHost(v_config_3655_, v_a_3656_);
if (lean_obj_tag(v___x_3657_) == 0)
{
lean_object* v_pos_3658_; lean_object* v_res_3659_; lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3728_; 
v_pos_3658_ = lean_ctor_get(v___x_3657_, 0);
v_res_3659_ = lean_ctor_get(v___x_3657_, 1);
v_isSharedCheck_3728_ = !lean_is_exclusive(v___x_3657_);
if (v_isSharedCheck_3728_ == 0)
{
v___x_3661_ = v___x_3657_;
v_isShared_3662_ = v_isSharedCheck_3728_;
goto v_resetjp_3660_;
}
else
{
lean_inc(v_res_3659_);
lean_inc(v_pos_3658_);
lean_dec(v___x_3657_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3728_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v_port_3664_; lean_object* v___y_3665_; lean_object* v_pos_3679_; lean_object* v_pos_3682_; lean_object* v_array_3683_; lean_object* v_idx_3684_; lean_object* v_array_3690_; lean_object* v_idx_3691_; lean_object* v___x_3692_; uint8_t v___x_3693_; 
v_array_3690_ = lean_ctor_get(v_pos_3658_, 0);
v_idx_3691_ = lean_ctor_get(v_pos_3658_, 1);
v___x_3692_ = lean_byte_array_size(v_array_3690_);
v___x_3693_ = lean_nat_dec_lt(v_idx_3691_, v___x_3692_);
if (v___x_3693_ == 0)
{
v_pos_3679_ = v_pos_3658_;
goto v___jp_3678_;
}
else
{
uint8_t v___x_3694_; uint8_t v___x_3695_; uint8_t v___x_3696_; 
v___x_3694_ = lean_byte_array_fget(v_array_3690_, v_idx_3691_);
v___x_3695_ = 58;
v___x_3696_ = lean_uint8_dec_eq(v___x_3694_, v___x_3695_);
if (v___x_3696_ == 0)
{
v_pos_3679_ = v_pos_3658_;
goto v___jp_3678_;
}
else
{
lean_object* v___x_3698_; uint8_t v_isShared_3699_; uint8_t v_isSharedCheck_3725_; 
lean_inc(v_idx_3691_);
lean_inc_ref(v_array_3690_);
v_isSharedCheck_3725_ = !lean_is_exclusive(v_pos_3658_);
if (v_isSharedCheck_3725_ == 0)
{
lean_object* v_unused_3726_; lean_object* v_unused_3727_; 
v_unused_3726_ = lean_ctor_get(v_pos_3658_, 1);
lean_dec(v_unused_3726_);
v_unused_3727_ = lean_ctor_get(v_pos_3658_, 0);
lean_dec(v_unused_3727_);
v___x_3698_ = v_pos_3658_;
v_isShared_3699_ = v_isSharedCheck_3725_;
goto v_resetjp_3697_;
}
else
{
lean_dec(v_pos_3658_);
v___x_3698_ = lean_box(0);
v_isShared_3699_ = v_isSharedCheck_3725_;
goto v_resetjp_3697_;
}
v_resetjp_3697_:
{
lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3703_; 
v___x_3700_ = lean_unsigned_to_nat(1u);
v___x_3701_ = lean_nat_add(v_idx_3691_, v___x_3700_);
lean_dec(v_idx_3691_);
lean_inc(v___x_3701_);
lean_inc_ref(v_array_3690_);
if (v_isShared_3699_ == 0)
{
lean_ctor_set(v___x_3698_, 1, v___x_3701_);
v___x_3703_ = v___x_3698_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_array_3690_);
lean_ctor_set(v_reuseFailAlloc_3724_, 1, v___x_3701_);
v___x_3703_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
uint8_t v___x_3704_; 
v___x_3704_ = lean_nat_dec_lt(v___x_3701_, v___x_3692_);
if (v___x_3704_ == 0)
{
v_pos_3682_ = v___x_3703_;
v_array_3683_ = v_array_3690_;
v_idx_3684_ = v___x_3701_;
goto v___jp_3681_;
}
else
{
uint8_t v___x_3705_; uint8_t v___x_3706_; uint8_t v___x_3707_; 
v___x_3705_ = lean_byte_array_fget(v_array_3690_, v___x_3701_);
v___x_3706_ = 48;
v___x_3707_ = lean_uint8_dec_le(v___x_3706_, v___x_3705_);
if (v___x_3707_ == 0)
{
v_pos_3682_ = v___x_3703_;
v_array_3683_ = v_array_3690_;
v_idx_3684_ = v___x_3701_;
goto v___jp_3681_;
}
else
{
uint8_t v___x_3708_; uint8_t v___x_3709_; 
v___x_3708_ = 57;
v___x_3709_ = lean_uint8_dec_le(v___x_3705_, v___x_3708_);
if (v___x_3709_ == 0)
{
v_pos_3682_ = v___x_3703_;
v_array_3683_ = v_array_3690_;
v_idx_3684_ = v___x_3701_;
goto v___jp_3681_;
}
else
{
lean_object* v___x_3710_; 
lean_dec(v___x_3701_);
lean_dec_ref(v_array_3690_);
v___x_3710_ = l___private_Std_Http_Data_URI_Parser_0__Std_Http_URI_Parser_parsePortNumber(v___x_3703_);
if (lean_obj_tag(v___x_3710_) == 0)
{
lean_object* v_pos_3711_; lean_object* v_res_3712_; lean_object* v___x_3713_; uint16_t v___x_3714_; 
v_pos_3711_ = lean_ctor_get(v___x_3710_, 0);
lean_inc(v_pos_3711_);
v_res_3712_ = lean_ctor_get(v___x_3710_, 1);
lean_inc(v_res_3712_);
lean_dec_ref_known(v___x_3710_, 2);
v___x_3713_ = lean_alloc_ctor(2, 0, 2);
v___x_3714_ = lean_unbox(v_res_3712_);
lean_dec(v_res_3712_);
lean_ctor_set_uint16(v___x_3713_, 0, v___x_3714_);
v_port_3664_ = v___x_3713_;
v___y_3665_ = v_pos_3711_;
goto v___jp_3663_;
}
else
{
lean_object* v_pos_3715_; lean_object* v_err_3716_; lean_object* v___x_3718_; uint8_t v_isShared_3719_; uint8_t v_isSharedCheck_3723_; 
lean_del_object(v___x_3661_);
lean_dec(v_res_3659_);
v_pos_3715_ = lean_ctor_get(v___x_3710_, 0);
v_err_3716_ = lean_ctor_get(v___x_3710_, 1);
v_isSharedCheck_3723_ = !lean_is_exclusive(v___x_3710_);
if (v_isSharedCheck_3723_ == 0)
{
v___x_3718_ = v___x_3710_;
v_isShared_3719_ = v_isSharedCheck_3723_;
goto v_resetjp_3717_;
}
else
{
lean_inc(v_err_3716_);
lean_inc(v_pos_3715_);
lean_dec(v___x_3710_);
v___x_3718_ = lean_box(0);
v_isShared_3719_ = v_isSharedCheck_3723_;
goto v_resetjp_3717_;
}
v_resetjp_3717_:
{
lean_object* v___x_3721_; 
if (v_isShared_3719_ == 0)
{
v___x_3721_ = v___x_3718_;
goto v_reusejp_3720_;
}
else
{
lean_object* v_reuseFailAlloc_3722_; 
v_reuseFailAlloc_3722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3722_, 0, v_pos_3715_);
lean_ctor_set(v_reuseFailAlloc_3722_, 1, v_err_3716_);
v___x_3721_ = v_reuseFailAlloc_3722_;
goto v_reusejp_3720_;
}
v_reusejp_3720_:
{
return v___x_3721_;
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
v___jp_3663_:
{
lean_object* v_array_3666_; lean_object* v_idx_3667_; lean_object* v___x_3668_; uint8_t v___x_3669_; 
v_array_3666_ = lean_ctor_get(v___y_3665_, 0);
v_idx_3667_ = lean_ctor_get(v___y_3665_, 1);
v___x_3668_ = lean_byte_array_size(v_array_3666_);
v___x_3669_ = lean_nat_dec_lt(v_idx_3667_, v___x_3668_);
if (v___x_3669_ == 0)
{
lean_object* v___x_3670_; lean_object* v___x_3672_; 
v___x_3670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3670_, 0, v_res_3659_);
lean_ctor_set(v___x_3670_, 1, v_port_3664_);
if (v_isShared_3662_ == 0)
{
lean_ctor_set(v___x_3661_, 1, v___x_3670_);
lean_ctor_set(v___x_3661_, 0, v___y_3665_);
v___x_3672_ = v___x_3661_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3673_; 
v_reuseFailAlloc_3673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3673_, 0, v___y_3665_);
lean_ctor_set(v_reuseFailAlloc_3673_, 1, v___x_3670_);
v___x_3672_ = v_reuseFailAlloc_3673_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
return v___x_3672_;
}
}
else
{
lean_object* v___x_3674_; lean_object* v___x_3676_; 
lean_dec(v_port_3664_);
lean_dec(v_res_3659_);
v___x_3674_ = ((lean_object*)(l_Std_Http_URI_Parser_parseHostHeader___closed__1));
if (v_isShared_3662_ == 0)
{
lean_ctor_set_tag(v___x_3661_, 1);
lean_ctor_set(v___x_3661_, 1, v___x_3674_);
lean_ctor_set(v___x_3661_, 0, v___y_3665_);
v___x_3676_ = v___x_3661_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v___y_3665_);
lean_ctor_set(v_reuseFailAlloc_3677_, 1, v___x_3674_);
v___x_3676_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
return v___x_3676_;
}
}
}
v___jp_3678_:
{
lean_object* v___x_3680_; 
v___x_3680_ = lean_box(0);
v_port_3664_ = v___x_3680_;
v___y_3665_ = v_pos_3679_;
goto v___jp_3663_;
}
v___jp_3681_:
{
lean_object* v___x_3685_; uint8_t v___x_3686_; 
v___x_3685_ = lean_byte_array_size(v_array_3683_);
lean_dec_ref(v_array_3683_);
v___x_3686_ = lean_nat_dec_lt(v_idx_3684_, v___x_3685_);
lean_dec(v_idx_3684_);
if (v___x_3686_ == 0)
{
lean_object* v___x_3687_; 
v___x_3687_ = lean_box(1);
v_port_3664_ = v___x_3687_;
v___y_3665_ = v_pos_3682_;
goto v___jp_3663_;
}
else
{
lean_object* v___x_3688_; lean_object* v___x_3689_; 
lean_del_object(v___x_3661_);
lean_dec(v_res_3659_);
v___x_3688_ = ((lean_object*)(l_Std_Http_URI_Parser_parseHostHeader___closed__3));
v___x_3689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3689_, 0, v_pos_3682_);
lean_ctor_set(v___x_3689_, 1, v___x_3688_);
return v___x_3689_;
}
}
}
}
else
{
lean_object* v_pos_3729_; lean_object* v_err_3730_; lean_object* v___x_3732_; uint8_t v_isShared_3733_; uint8_t v_isSharedCheck_3737_; 
v_pos_3729_ = lean_ctor_get(v___x_3657_, 0);
v_err_3730_ = lean_ctor_get(v___x_3657_, 1);
v_isSharedCheck_3737_ = !lean_is_exclusive(v___x_3657_);
if (v_isSharedCheck_3737_ == 0)
{
v___x_3732_ = v___x_3657_;
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
else
{
lean_inc(v_err_3730_);
lean_inc(v_pos_3729_);
lean_dec(v___x_3657_);
v___x_3732_ = lean_box(0);
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
v_resetjp_3731_:
{
lean_object* v___x_3735_; 
if (v_isShared_3733_ == 0)
{
v___x_3735_ = v___x_3732_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v_pos_3729_);
lean_ctor_set(v_reuseFailAlloc_3736_, 1, v_err_3730_);
v___x_3735_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
return v___x_3735_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_Parser_parseHostHeader___boxed(lean_object* v_config_3738_, lean_object* v_a_3739_){
_start:
{
lean_object* v_res_3740_; 
v_res_3740_ = l_Std_Http_URI_Parser_parseHostHeader(v_config_3738_, v_a_3739_);
lean_dec_ref(v_config_3738_);
return v_res_3740_;
}
}
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Parsec(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Parsec_ByteArray(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_URI_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data_URI_Config(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_URI_Parser(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec_ByteArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_URI_Parser(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* initialize_Std_Internal_Parsec(uint8_t builtin);
lean_object* initialize_Std_Internal_Parsec_ByteArray(uint8_t builtin);
lean_object* initialize_Std_Http_Data_URI_Basic(uint8_t builtin);
lean_object* initialize_Std_Http_Data_URI_Config(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_URI_Parser(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec_ByteArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_URI_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data_URI_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_URI_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_URI_Parser(builtin);
}
#ifdef __cplusplus
}
#endif
