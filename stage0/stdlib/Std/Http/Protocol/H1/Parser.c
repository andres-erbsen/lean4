// Lean compiler output
// Module: Std.Http.Protocol.H1.Parser
// Imports: public import Std.Internal.Parsec public import Std.Http.Data public import Std.Internal.Parsec.ByteArray public import Std.Http.Protocol.H1.Config import Init.Data.String.Lossy
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
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint32_t lean_uint8_to_uint32(uint8_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_skipBytes(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_String_toListImpl(lean_object*);
uint16_t lean_uint16_of_nat(lean_object*);
lean_object* l_Std_Http_Status_ofCode(lean_object*, uint16_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ByteArray_toByteSlice(lean_object*, lean_object*, lean_object*);
lean_object* l_ByteSlice_toByteArray(lean_object*);
lean_object* l___private_Init_Data_String_Lossy_0__String_fromUTF8Lossy_go(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Headers_empty;
uint8_t lean_uint8_sub(uint8_t, uint8_t);
uint8_t lean_uint8_add(uint8_t, uint8_t);
lean_object* l_Char_quote(uint32_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
extern lean_object* l_ByteArray_empty;
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* l_ByteSlice_size(lean_object*);
extern lean_object* l_Std_Http_Method_all;
size_t lean_array_size(lean_object*);
lean_object* l_ByteArray_Iterator_remainingBytes(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_byteslice_beq(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Std_Http_Chunk_ExtensionValue_ofString_x3f(lean_object*);
lean_object* l_Std_Http_Chunk_ExtensionName_ofString_x3f(lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_take(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Std_Http_Version_ofNumber_x3f(lean_object*, lean_object*);
lean_object* l_Std_Http_URI_Parser_parseRequestTarget(lean_object*, lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFieldVChar(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFieldVChar___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isQdText(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isQdText___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isOwsByte(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isOwsByte___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_optionalUnlessEof___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_optionalUnlessEof(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "too many items: "};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg___closed__0_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " > "};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "expected value but got none"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__0_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected at least one char"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__1_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\r\n"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__0_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf(lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "too many leading empty lines"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___closed__0_value)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '32'"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp(lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid space sequence"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1_value;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isOwsByte___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hexDigit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "invalid hex digit "};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hexDigit___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hexDigit___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hexDigit(lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "chunk size too large"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__1_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected hex digit"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__2_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__3 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex(lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "HTTP/"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__0_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__1;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "digit expected"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__2_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__3 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__3_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '46'"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__4 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__4_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__4_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__5 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__5_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersion(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ACL"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "BASELINE-CONTROL"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "BIND"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "CHECKIN"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "CHECKOUT"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "CONNECT"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "COPY"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "DELETE"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GET"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HEAD"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "LABEL"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__10_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LINK"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LOCK"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "MERGE"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__13_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MKACTIVITY"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__14_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "MKCALENDAR"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__15_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "MKCOL"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__16_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "MKREDIRECTREF"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__17_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MKWORKSPACE"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__18_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "MOVE"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__19_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "OPTIONS"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__20_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ORDERPATCH"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__21_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PATCH"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__22_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "POST"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__23_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "PRI"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__24_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "PROPFIND"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__25 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__25_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "PROPPATCH"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__26 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__26_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "PUT"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__27 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__27_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "QUERY"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__28_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "REBIND"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__29 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__29_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "REPORT"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__30 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__30_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "SEARCH"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__31 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__31_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "TRACE"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__32 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__32_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UNBIND"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__33 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__33_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UNCHECKOUT"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__34 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__34_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UNLINK"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__35 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__35_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UNLOCK"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__36 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__36_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UPDATE"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__37 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__37_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "UPDATEREDIRECTREF"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__38 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__38_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "VERSION-CONTROL"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__39 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__39_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods___closed__0;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods___closed__1;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "invalid method"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__1_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "unrecognized method"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__2_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__3 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__3_value;
static lean_once_cell_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__4;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__0_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "uri too long"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__1_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "expected end of input"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0(lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*9 + 0, .m_other = 9, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(253) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(256) << 1) | 1)),((lean_object*)(((size_t)(8192) << 1) | 1)),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)(((size_t)(128) << 1) | 1)),((lean_object*)(((size_t)(8192) << 1) | 1)),((lean_object*)(((size_t)(100) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___closed__0_value;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___closed__0_value)} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Protocol_H1_parseRequestLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "unsupported HTTP version"};
static const lean_object* l_Std_Http_Protocol_H1_parseRequestLine___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_parseRequestLine___closed__0_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_parseRequestLine___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Protocol_H1_parseRequestLine___closed__0_value)}};
static const lean_object* l_Std_Http_Protocol_H1_parseRequestLine___closed__1 = (const lean_object*)&l_Std_Http_Protocol_H1_parseRequestLine___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseRequestLine(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseRequestLine___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseRequestLineRawVersion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseRequestLineRawVersion___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__1(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__0(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__0_value;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__1_value;
static const lean_closure_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__2_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '58'"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__3 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__3_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__3_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__4 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__4_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_Protocol_H1_parseSingleHeader_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_Protocol_H1_parseSingleHeader_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Protocol_H1_parseSingleHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1))}};
static const lean_object* l_Std_Http_Protocol_H1_parseSingleHeader___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_parseSingleHeader___closed__0_value;
static const lean_ctor_object l_Std_Http_Protocol_H1_parseSingleHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* l_Std_Http_Protocol_H1_parseSingleHeader___closed__1 = (const lean_object*)&l_Std_Http_Protocol_H1_parseSingleHeader___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseSingleHeader(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseSingleHeader___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '92'"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__1_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "invalid quoted-pair byte: "};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair(lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "quoted-string too long"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__1_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "invalid qdtext byte: "};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '34'"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "invalid extension value"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__1_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '61'"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__2_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__3 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__3_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid extension name"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__4 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__4_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__4_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__5 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__5_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "expected: '59'"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__6 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__6_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__6_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__7 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__7_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSize___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSize___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSize(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_complete_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_complete_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_incomplete_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_incomplete_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkPartial(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseFixedSizeData(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseFixedSizeData___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSizedData(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSizedData___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "content-length"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__0_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "transfer-encoding"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__1_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "host"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__2_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "connection"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__3 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__3_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "te"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__4 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__4_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "upgrade"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__5 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__5_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trailer"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__6 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__6_value;
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___boxed(lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "expect"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__0_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "authorization"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__1_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "max-forwards"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__2 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__2_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "cache-control"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__3 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__3_value;
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "content-encoding"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__4 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__4_value;
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___boxed(lean_object*);
static const lean_string_object l_Std_Http_Protocol_H1_parseTrailerHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "forbidden trailer field: "};
static const lean_object* l_Std_Http_Protocol_H1_parseTrailerHeader___closed__0 = (const lean_object*)&l_Std_Http_Protocol_H1_parseTrailerHeader___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseTrailerHeader(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseTrailerHeader___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseTrailers(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isReasonPhraseByte(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isReasonPhraseByte___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseReasonPhrase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseReasonPhrase___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode_spec__0___boxed(lean_object*);
static const lean_string_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "invalid status code"};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___closed__0 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___closed__0_value)}};
static const lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___closed__1 = (const lean_object*)&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseStatusLine(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseStatusLine___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseStatusLineRawVersion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseStatusLineRawVersion___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFieldVChar(uint8_t v_c_1_){
_start:
{
uint32_t v___x_2_; uint32_t v___x_10_; uint8_t v___x_11_; 
v___x_2_ = lean_uint8_to_uint32(v_c_1_);
v___x_10_ = 33;
v___x_11_ = lean_uint32_dec_le(v___x_10_, v___x_2_);
if (v___x_11_ == 0)
{
goto v___jp_3_;
}
else
{
uint32_t v___x_12_; uint8_t v___x_13_; 
v___x_12_ = 126;
v___x_13_ = lean_uint32_dec_le(v___x_2_, v___x_12_);
if (v___x_13_ == 0)
{
goto v___jp_3_;
}
else
{
return v___x_13_;
}
}
v___jp_3_:
{
uint32_t v___x_4_; uint8_t v___x_5_; 
v___x_4_ = 128;
v___x_5_ = lean_uint32_dec_le(v___x_4_, v___x_2_);
if (v___x_5_ == 0)
{
uint32_t v___x_6_; uint8_t v___x_7_; 
v___x_6_ = 32;
v___x_7_ = lean_uint32_dec_eq(v___x_2_, v___x_6_);
if (v___x_7_ == 0)
{
uint32_t v___x_8_; uint8_t v___x_9_; 
v___x_8_ = 9;
v___x_9_ = lean_uint32_dec_eq(v___x_2_, v___x_8_);
return v___x_9_;
}
else
{
return v___x_7_;
}
}
else
{
return v___x_5_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFieldVChar___boxed(lean_object* v_c_14_){
_start:
{
uint8_t v_c_boxed_15_; uint8_t v_res_16_; lean_object* v_r_17_; 
v_c_boxed_15_ = lean_unbox(v_c_14_);
v_res_16_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFieldVChar(v_c_boxed_15_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isQdText(uint8_t v_c_18_){
_start:
{
uint32_t v___x_19_; uint32_t v___x_25_; uint8_t v___x_26_; 
v___x_19_ = lean_uint8_to_uint32(v_c_18_);
v___x_25_ = 9;
v___x_26_ = lean_uint32_dec_eq(v___x_19_, v___x_25_);
if (v___x_26_ == 0)
{
uint32_t v___x_27_; uint8_t v___x_28_; 
v___x_27_ = 32;
v___x_28_ = lean_uint32_dec_eq(v___x_19_, v___x_27_);
if (v___x_28_ == 0)
{
uint32_t v___x_29_; uint8_t v___x_30_; 
v___x_29_ = 33;
v___x_30_ = lean_uint32_dec_eq(v___x_19_, v___x_29_);
if (v___x_30_ == 0)
{
uint32_t v___x_31_; uint8_t v___x_32_; 
v___x_31_ = 35;
v___x_32_ = lean_uint32_dec_le(v___x_31_, v___x_19_);
if (v___x_32_ == 0)
{
goto v___jp_20_;
}
else
{
uint32_t v___x_33_; uint8_t v___x_34_; 
v___x_33_ = 91;
v___x_34_ = lean_uint32_dec_le(v___x_19_, v___x_33_);
if (v___x_34_ == 0)
{
goto v___jp_20_;
}
else
{
return v___x_34_;
}
}
}
else
{
return v___x_30_;
}
}
else
{
return v___x_28_;
}
}
else
{
return v___x_26_;
}
v___jp_20_:
{
uint32_t v___x_21_; uint8_t v___x_22_; 
v___x_21_ = 93;
v___x_22_ = lean_uint32_dec_le(v___x_21_, v___x_19_);
if (v___x_22_ == 0)
{
return v___x_22_;
}
else
{
uint32_t v___x_23_; uint8_t v___x_24_; 
v___x_23_ = 126;
v___x_24_ = lean_uint32_dec_le(v___x_19_, v___x_23_);
return v___x_24_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isQdText___boxed(lean_object* v_c_35_){
_start:
{
uint8_t v_c_boxed_36_; uint8_t v_res_37_; lean_object* v_r_38_; 
v_c_boxed_36_ = lean_unbox(v_c_35_);
v_res_37_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isQdText(v_c_boxed_36_);
v_r_38_ = lean_box(v_res_37_);
return v_r_38_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isOwsByte(uint8_t v_c_39_){
_start:
{
uint32_t v___x_40_; uint32_t v___x_41_; uint8_t v___x_42_; 
v___x_40_ = lean_uint8_to_uint32(v_c_39_);
v___x_41_ = 32;
v___x_42_ = lean_uint32_dec_eq(v___x_40_, v___x_41_);
if (v___x_42_ == 0)
{
uint32_t v___x_43_; uint8_t v___x_44_; 
v___x_43_ = 9;
v___x_44_ = lean_uint32_dec_eq(v___x_40_, v___x_43_);
return v___x_44_;
}
else
{
return v___x_42_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isOwsByte___boxed(lean_object* v_c_45_){
_start:
{
uint8_t v_c_boxed_46_; uint8_t v_res_47_; lean_object* v_r_48_; 
v_c_boxed_46_ = lean_unbox(v_c_45_);
v_res_47_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isOwsByte(v_c_boxed_46_);
v_r_48_ = lean_box(v_res_47_);
return v_r_48_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_optionalUnlessEof___redArg(lean_object* v_p_49_, lean_object* v_it_50_){
_start:
{
lean_object* v___x_51_; 
lean_inc_ref(v_it_50_);
v___x_51_ = lean_apply_1(v_p_49_, v_it_50_);
if (lean_obj_tag(v___x_51_) == 0)
{
lean_object* v_pos_52_; lean_object* v_res_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_61_; 
lean_dec_ref(v_it_50_);
v_pos_52_ = lean_ctor_get(v___x_51_, 0);
v_res_53_ = lean_ctor_get(v___x_51_, 1);
v_isSharedCheck_61_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_61_ == 0)
{
v___x_55_ = v___x_51_;
v_isShared_56_ = v_isSharedCheck_61_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_res_53_);
lean_inc(v_pos_52_);
lean_dec(v___x_51_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_61_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___x_57_; lean_object* v___x_59_; 
v___x_57_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_57_, 0, v_res_53_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 1, v___x_57_);
v___x_59_ = v___x_55_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_pos_52_);
lean_ctor_set(v_reuseFailAlloc_60_, 1, v___x_57_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
else
{
lean_object* v_err_62_; 
v_err_62_ = lean_ctor_get(v___x_51_, 1);
lean_inc(v_err_62_);
if (lean_obj_tag(v_err_62_) == 0)
{
lean_object* v_pos_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_70_; 
lean_dec_ref(v_it_50_);
v_pos_63_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_70_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_70_ == 0)
{
lean_object* v_unused_71_; 
v_unused_71_ = lean_ctor_get(v___x_51_, 1);
lean_dec(v_unused_71_);
v___x_65_ = v___x_51_;
v_isShared_66_ = v_isSharedCheck_70_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_pos_63_);
lean_dec(v___x_51_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_70_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_68_; 
if (v_isShared_66_ == 0)
{
v___x_68_ = v___x_65_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v_pos_63_);
lean_ctor_set(v_reuseFailAlloc_69_, 1, v_err_62_);
v___x_68_ = v_reuseFailAlloc_69_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
return v___x_68_;
}
}
}
else
{
lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_79_; 
lean_dec(v_err_62_);
v_isSharedCheck_79_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_79_ == 0)
{
lean_object* v_unused_80_; lean_object* v_unused_81_; 
v_unused_80_ = lean_ctor_get(v___x_51_, 1);
lean_dec(v_unused_80_);
v_unused_81_ = lean_ctor_get(v___x_51_, 0);
lean_dec(v_unused_81_);
v___x_73_ = v___x_51_;
v_isShared_74_ = v_isSharedCheck_79_;
goto v_resetjp_72_;
}
else
{
lean_dec(v___x_51_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_79_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___x_75_; lean_object* v___x_77_; 
v___x_75_ = lean_box(0);
if (v_isShared_74_ == 0)
{
lean_ctor_set_tag(v___x_73_, 0);
lean_ctor_set(v___x_73_, 1, v___x_75_);
lean_ctor_set(v___x_73_, 0, v_it_50_);
v___x_77_ = v___x_73_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v_it_50_);
lean_ctor_set(v_reuseFailAlloc_78_, 1, v___x_75_);
v___x_77_ = v_reuseFailAlloc_78_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
return v___x_77_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_optionalUnlessEof(lean_object* v_00_u03b1_82_, lean_object* v_p_83_, lean_object* v_it_84_){
_start:
{
lean_object* v___x_85_; 
lean_inc_ref(v_it_84_);
v___x_85_ = lean_apply_1(v_p_83_, v_it_84_);
if (lean_obj_tag(v___x_85_) == 0)
{
lean_object* v_pos_86_; lean_object* v_res_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_95_; 
lean_dec_ref(v_it_84_);
v_pos_86_ = lean_ctor_get(v___x_85_, 0);
v_res_87_ = lean_ctor_get(v___x_85_, 1);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_95_ == 0)
{
v___x_89_ = v___x_85_;
v_isShared_90_ = v_isSharedCheck_95_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_res_87_);
lean_inc(v_pos_86_);
lean_dec(v___x_85_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_95_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
lean_object* v___x_91_; lean_object* v___x_93_; 
v___x_91_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_91_, 0, v_res_87_);
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 1, v___x_91_);
v___x_93_ = v___x_89_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v_pos_86_);
lean_ctor_set(v_reuseFailAlloc_94_, 1, v___x_91_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
else
{
lean_object* v_err_96_; 
v_err_96_ = lean_ctor_get(v___x_85_, 1);
lean_inc(v_err_96_);
if (lean_obj_tag(v_err_96_) == 0)
{
lean_object* v_pos_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_104_; 
lean_dec_ref(v_it_84_);
v_pos_97_ = lean_ctor_get(v___x_85_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_104_ == 0)
{
lean_object* v_unused_105_; 
v_unused_105_ = lean_ctor_get(v___x_85_, 1);
lean_dec(v_unused_105_);
v___x_99_ = v___x_85_;
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_pos_97_);
lean_dec(v___x_85_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_104_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v___x_102_; 
if (v_isShared_100_ == 0)
{
v___x_102_ = v___x_99_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_pos_97_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v_err_96_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
else
{
lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_113_; 
lean_dec(v_err_96_);
v_isSharedCheck_113_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_113_ == 0)
{
lean_object* v_unused_114_; lean_object* v_unused_115_; 
v_unused_114_ = lean_ctor_get(v___x_85_, 1);
lean_dec(v_unused_114_);
v_unused_115_ = lean_ctor_get(v___x_85_, 0);
lean_dec(v_unused_115_);
v___x_107_ = v___x_85_;
v_isShared_108_ = v_isSharedCheck_113_;
goto v_resetjp_106_;
}
else
{
lean_dec(v___x_85_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_113_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v___x_109_; lean_object* v___x_111_; 
v___x_109_ = lean_box(0);
if (v_isShared_108_ == 0)
{
lean_ctor_set_tag(v___x_107_, 0);
lean_ctor_set(v___x_107_, 1, v___x_109_);
lean_ctor_set(v___x_107_, 0, v_it_84_);
v___x_111_ = v___x_107_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v_it_84_);
lean_ctor_set(v_reuseFailAlloc_112_, 1, v___x_109_);
v___x_111_ = v_reuseFailAlloc_112_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
return v___x_111_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg(lean_object* v_parser_118_, lean_object* v_maxCount_119_, lean_object* v_acc_120_, lean_object* v_a_121_){
_start:
{
lean_object* v___x_122_; 
lean_inc_ref(v_parser_118_);
lean_inc_ref(v_a_121_);
v___x_122_ = lean_apply_1(v_parser_118_, v_a_121_);
if (lean_obj_tag(v___x_122_) == 0)
{
lean_object* v_res_123_; 
v_res_123_ = lean_ctor_get(v___x_122_, 1);
lean_inc(v_res_123_);
if (lean_obj_tag(v_res_123_) == 0)
{
lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
lean_dec(v_maxCount_119_);
lean_dec_ref(v_parser_118_);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_130_ == 0)
{
lean_object* v_unused_131_; lean_object* v_unused_132_; 
v_unused_131_ = lean_ctor_get(v___x_122_, 1);
lean_dec(v_unused_131_);
v_unused_132_ = lean_ctor_get(v___x_122_, 0);
lean_dec(v_unused_132_);
v___x_125_ = v___x_122_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_dec(v___x_122_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 1, v_acc_120_);
lean_ctor_set(v___x_125_, 0, v_a_121_);
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_121_);
lean_ctor_set(v_reuseFailAlloc_129_, 1, v_acc_120_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
else
{
lean_object* v_pos_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_161_; 
lean_dec_ref(v_a_121_);
v_pos_133_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_161_ == 0)
{
lean_object* v_unused_162_; 
v_unused_162_ = lean_ctor_get(v___x_122_, 1);
lean_dec(v_unused_162_);
v___x_135_ = v___x_122_;
v_isShared_136_ = v_isSharedCheck_161_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_pos_133_);
lean_dec(v___x_122_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_161_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v_val_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_160_; 
v_val_137_ = lean_ctor_get(v_res_123_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v_res_123_);
if (v_isSharedCheck_160_ == 0)
{
v___x_139_ = v_res_123_;
v_isShared_140_ = v_isSharedCheck_160_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_val_137_);
lean_dec(v_res_123_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_160_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_141_ = lean_array_get_size(v_acc_120_);
v___x_142_ = lean_unsigned_to_nat(1u);
v___x_143_ = lean_nat_add(v___x_141_, v___x_142_);
v___x_144_ = lean_nat_dec_lt(v_maxCount_119_, v___x_143_);
if (v___x_144_ == 0)
{
lean_object* v___x_145_; 
lean_dec(v___x_143_);
lean_del_object(v___x_139_);
lean_del_object(v___x_135_);
v___x_145_ = lean_array_push(v_acc_120_, v_val_137_);
v_acc_120_ = v___x_145_;
v_a_121_ = v_pos_133_;
goto _start;
}
else
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_155_; 
lean_dec(v_val_137_);
lean_dec_ref(v_acc_120_);
lean_dec_ref(v_parser_118_);
v___x_147_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg___closed__0));
v___x_148_ = l_Nat_reprFast(v___x_143_);
v___x_149_ = lean_string_append(v___x_147_, v___x_148_);
lean_dec_ref(v___x_148_);
v___x_150_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg___closed__1));
v___x_151_ = lean_string_append(v___x_149_, v___x_150_);
v___x_152_ = l_Nat_reprFast(v_maxCount_119_);
v___x_153_ = lean_string_append(v___x_151_, v___x_152_);
lean_dec_ref(v___x_152_);
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 0, v___x_153_);
v___x_155_ = v___x_139_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_153_);
v___x_155_ = v_reuseFailAlloc_159_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
lean_object* v___x_157_; 
if (v_isShared_136_ == 0)
{
lean_ctor_set_tag(v___x_135_, 1);
lean_ctor_set(v___x_135_, 1, v___x_155_);
v___x_157_ = v___x_135_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_pos_133_);
lean_ctor_set(v_reuseFailAlloc_158_, 1, v___x_155_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
}
}
}
}
}
else
{
lean_object* v_err_163_; 
lean_dec(v_maxCount_119_);
lean_dec_ref(v_parser_118_);
v_err_163_ = lean_ctor_get(v___x_122_, 1);
lean_inc(v_err_163_);
if (lean_obj_tag(v_err_163_) == 0)
{
lean_object* v_pos_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
lean_dec_ref(v_a_121_);
lean_dec_ref(v_acc_120_);
v_pos_164_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_171_ == 0)
{
lean_object* v_unused_172_; 
v_unused_172_ = lean_ctor_get(v___x_122_, 1);
lean_dec(v_unused_172_);
v___x_166_ = v___x_122_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_pos_164_);
lean_dec(v___x_122_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_pos_164_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v_err_163_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
else
{
lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_179_; 
lean_dec(v_err_163_);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_179_ == 0)
{
lean_object* v_unused_180_; lean_object* v_unused_181_; 
v_unused_180_ = lean_ctor_get(v___x_122_, 1);
lean_dec(v_unused_180_);
v_unused_181_ = lean_ctor_get(v___x_122_, 0);
lean_dec(v_unused_181_);
v___x_174_ = v___x_122_;
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
else
{
lean_dec(v___x_122_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_177_; 
if (v_isShared_175_ == 0)
{
lean_ctor_set_tag(v___x_174_, 0);
lean_ctor_set(v___x_174_, 1, v_acc_120_);
lean_ctor_set(v___x_174_, 0, v_a_121_);
v___x_177_ = v___x_174_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_a_121_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v_acc_120_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go(lean_object* v_00_u03b1_182_, lean_object* v_parser_183_, lean_object* v_maxCount_184_, lean_object* v_acc_185_, lean_object* v_a_186_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg(v_parser_183_, v_maxCount_184_, v_acc_185_, v_a_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go_match__1_splitter___redArg(lean_object* v_____do__lift_188_, lean_object* v_h__1_189_, lean_object* v_h__2_190_){
_start:
{
if (lean_obj_tag(v_____do__lift_188_) == 0)
{
lean_object* v___x_191_; lean_object* v___x_192_; 
lean_dec(v_h__2_190_);
v___x_191_ = lean_box(0);
v___x_192_ = lean_apply_1(v_h__1_189_, v___x_191_);
return v___x_192_;
}
else
{
lean_object* v_val_193_; lean_object* v___x_194_; 
lean_dec(v_h__1_189_);
v_val_193_ = lean_ctor_get(v_____do__lift_188_, 0);
lean_inc(v_val_193_);
lean_dec_ref_known(v_____do__lift_188_, 1);
v___x_194_ = lean_apply_1(v_h__2_190_, v_val_193_);
return v___x_194_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go_match__1_splitter(lean_object* v_00_u03b1_195_, lean_object* v_motive_196_, lean_object* v_____do__lift_197_, lean_object* v_h__1_198_, lean_object* v_h__2_199_){
_start:
{
if (lean_obj_tag(v_____do__lift_197_) == 0)
{
lean_object* v___x_200_; lean_object* v___x_201_; 
lean_dec(v_h__2_199_);
v___x_200_ = lean_box(0);
v___x_201_ = lean_apply_1(v_h__1_198_, v___x_200_);
return v___x_201_;
}
else
{
lean_object* v_val_202_; lean_object* v___x_203_; 
lean_dec(v_h__1_198_);
v_val_202_ = lean_ctor_get(v_____do__lift_197_, 0);
lean_inc(v_val_202_);
lean_dec_ref_known(v_____do__lift_197_, 1);
v___x_203_ = lean_apply_1(v_h__2_199_, v_val_202_);
return v___x_203_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg(lean_object* v_parser_206_, lean_object* v_maxCount_207_, lean_object* v_a_208_){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; 
v___x_209_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg___closed__0));
v___x_210_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems_go___redArg(v_parser_206_, v_maxCount_207_, v___x_209_, v_a_208_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems(lean_object* v_00_u03b1_211_, lean_object* v_parser_212_, lean_object* v_maxCount_213_, lean_object* v_a_214_){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg(v_parser_212_, v_maxCount_213_, v_a_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(lean_object* v_x_219_, lean_object* v_a_220_){
_start:
{
if (lean_obj_tag(v_x_219_) == 1)
{
lean_object* v_val_221_; lean_object* v___x_222_; 
v_val_221_ = lean_ctor_get(v_x_219_, 0);
lean_inc(v_val_221_);
v___x_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_222_, 0, v_a_220_);
lean_ctor_set(v___x_222_, 1, v_val_221_);
return v___x_222_;
}
else
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___closed__1));
v___x_224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_224_, 0, v_a_220_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
return v___x_224_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg___boxed(lean_object* v_x_225_, lean_object* v_a_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(v_x_225_, v_a_226_);
lean_dec(v_x_225_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption(lean_object* v_00_u03b1_228_, lean_object* v_x_229_, lean_object* v_a_230_){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(v_x_229_, v_a_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___boxed(lean_object* v_00_u03b1_232_, lean_object* v_x_233_, lean_object* v_a_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption(v_00_u03b1_232_, v_x_233_, v_a_234_);
lean_dec(v_x_233_);
return v_res_235_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___lam__0(uint8_t v_c_236_){
_start:
{
uint32_t v___x_237_; uint32_t v___x_248_; uint8_t v___x_249_; 
v___x_237_ = lean_uint8_to_uint32(v_c_236_);
v___x_248_ = 33;
v___x_249_ = lean_uint32_dec_eq(v___x_237_, v___x_248_);
if (v___x_249_ == 0)
{
uint32_t v___x_250_; uint8_t v___x_251_; 
v___x_250_ = 35;
v___x_251_ = lean_uint32_dec_eq(v___x_237_, v___x_250_);
if (v___x_251_ == 0)
{
uint32_t v___x_252_; uint8_t v___x_253_; 
v___x_252_ = 36;
v___x_253_ = lean_uint32_dec_eq(v___x_237_, v___x_252_);
if (v___x_253_ == 0)
{
uint32_t v___x_254_; uint8_t v___x_255_; 
v___x_254_ = 37;
v___x_255_ = lean_uint32_dec_eq(v___x_237_, v___x_254_);
if (v___x_255_ == 0)
{
uint32_t v___x_256_; uint8_t v___x_257_; 
v___x_256_ = 38;
v___x_257_ = lean_uint32_dec_eq(v___x_237_, v___x_256_);
if (v___x_257_ == 0)
{
uint32_t v___x_258_; uint8_t v___x_259_; 
v___x_258_ = 39;
v___x_259_ = lean_uint32_dec_eq(v___x_237_, v___x_258_);
if (v___x_259_ == 0)
{
uint32_t v___x_260_; uint8_t v___x_261_; 
v___x_260_ = 42;
v___x_261_ = lean_uint32_dec_eq(v___x_237_, v___x_260_);
if (v___x_261_ == 0)
{
uint32_t v___x_262_; uint8_t v___x_263_; 
v___x_262_ = 43;
v___x_263_ = lean_uint32_dec_eq(v___x_237_, v___x_262_);
if (v___x_263_ == 0)
{
uint32_t v___x_264_; uint8_t v___x_265_; 
v___x_264_ = 45;
v___x_265_ = lean_uint32_dec_eq(v___x_237_, v___x_264_);
if (v___x_265_ == 0)
{
uint32_t v___x_266_; uint8_t v___x_267_; 
v___x_266_ = 46;
v___x_267_ = lean_uint32_dec_eq(v___x_237_, v___x_266_);
if (v___x_267_ == 0)
{
uint32_t v___x_268_; uint8_t v___x_269_; 
v___x_268_ = 94;
v___x_269_ = lean_uint32_dec_eq(v___x_237_, v___x_268_);
if (v___x_269_ == 0)
{
uint32_t v___x_270_; uint8_t v___x_271_; 
v___x_270_ = 95;
v___x_271_ = lean_uint32_dec_eq(v___x_237_, v___x_270_);
if (v___x_271_ == 0)
{
uint32_t v___x_272_; uint8_t v___x_273_; 
v___x_272_ = 96;
v___x_273_ = lean_uint32_dec_eq(v___x_237_, v___x_272_);
if (v___x_273_ == 0)
{
uint32_t v___x_274_; uint8_t v___x_275_; 
v___x_274_ = 124;
v___x_275_ = lean_uint32_dec_eq(v___x_237_, v___x_274_);
if (v___x_275_ == 0)
{
uint32_t v___x_276_; uint8_t v___x_277_; 
v___x_276_ = 126;
v___x_277_ = lean_uint32_dec_eq(v___x_237_, v___x_276_);
if (v___x_277_ == 0)
{
uint32_t v___x_278_; uint8_t v___x_279_; 
v___x_278_ = 48;
v___x_279_ = lean_uint32_dec_le(v___x_278_, v___x_237_);
if (v___x_279_ == 0)
{
goto v___jp_243_;
}
else
{
uint32_t v___x_280_; uint8_t v___x_281_; 
v___x_280_ = 57;
v___x_281_ = lean_uint32_dec_le(v___x_237_, v___x_280_);
if (v___x_281_ == 0)
{
goto v___jp_243_;
}
else
{
return v___x_281_;
}
}
}
else
{
return v___x_277_;
}
}
else
{
return v___x_275_;
}
}
else
{
return v___x_273_;
}
}
else
{
return v___x_271_;
}
}
else
{
return v___x_269_;
}
}
else
{
return v___x_267_;
}
}
else
{
return v___x_265_;
}
}
else
{
return v___x_263_;
}
}
else
{
return v___x_261_;
}
}
else
{
return v___x_259_;
}
}
else
{
return v___x_257_;
}
}
else
{
return v___x_255_;
}
}
else
{
return v___x_253_;
}
}
else
{
return v___x_251_;
}
}
else
{
return v___x_249_;
}
v___jp_238_:
{
uint32_t v___x_239_; uint8_t v___x_240_; 
v___x_239_ = 97;
v___x_240_ = lean_uint32_dec_le(v___x_239_, v___x_237_);
if (v___x_240_ == 0)
{
return v___x_240_;
}
else
{
uint32_t v___x_241_; uint8_t v___x_242_; 
v___x_241_ = 122;
v___x_242_ = lean_uint32_dec_le(v___x_237_, v___x_241_);
return v___x_242_;
}
}
v___jp_243_:
{
uint32_t v___x_244_; uint8_t v___x_245_; 
v___x_244_ = 65;
v___x_245_ = lean_uint32_dec_le(v___x_244_, v___x_237_);
if (v___x_245_ == 0)
{
goto v___jp_238_;
}
else
{
uint32_t v___x_246_; uint8_t v___x_247_; 
v___x_246_ = 90;
v___x_247_ = lean_uint32_dec_le(v___x_237_, v___x_246_);
if (v___x_247_ == 0)
{
goto v___jp_238_;
}
else
{
return v___x_247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___lam__0___boxed(lean_object* v_c_282_){
_start:
{
uint8_t v_c_boxed_283_; uint8_t v_res_284_; lean_object* v_r_285_; 
v_c_boxed_283_ = lean_unbox(v_c_282_);
v_res_284_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___lam__0(v_c_boxed_283_);
v_r_285_ = lean_box(v_res_284_);
return v_r_285_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken(lean_object* v_limit_290_, lean_object* v_a_291_){
_start:
{
lean_object* v___f_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v_snd_295_; lean_object* v_snd_296_; uint8_t v___x_297_; 
v___f_292_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__0));
v___x_293_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_291_);
v___x_294_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_292_, v_limit_290_, v___x_293_, v_a_291_);
v_snd_295_ = lean_ctor_get(v___x_294_, 1);
lean_inc(v_snd_295_);
v_snd_296_ = lean_ctor_get(v_snd_295_, 1);
v___x_297_ = lean_unbox(v_snd_296_);
if (v___x_297_ == 0)
{
lean_object* v_fst_298_; lean_object* v_fst_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_327_; 
v_fst_298_ = lean_ctor_get(v___x_294_, 0);
lean_inc(v_fst_298_);
lean_dec_ref(v___x_294_);
v_fst_299_ = lean_ctor_get(v_snd_295_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v_snd_295_);
if (v_isSharedCheck_327_ == 0)
{
lean_object* v_unused_328_; 
v_unused_328_ = lean_ctor_get(v_snd_295_, 1);
lean_dec(v_unused_328_);
v___x_301_ = v_snd_295_;
v_isShared_302_ = v_isSharedCheck_327_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_fst_299_);
lean_dec(v_snd_295_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_327_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
uint8_t v___x_303_; 
v___x_303_ = lean_nat_dec_eq(v_fst_298_, v___x_293_);
if (v___x_303_ == 0)
{
lean_object* v_array_304_; lean_object* v_idx_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_322_; 
lean_del_object(v___x_301_);
v_array_304_ = lean_ctor_get(v_a_291_, 0);
v_idx_305_ = lean_ctor_get(v_a_291_, 1);
v_isSharedCheck_322_ = !lean_is_exclusive(v_a_291_);
if (v_isSharedCheck_322_ == 0)
{
v___x_307_ = v_a_291_;
v_isShared_308_ = v_isSharedCheck_322_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_idx_305_);
lean_inc(v_array_304_);
lean_dec(v_a_291_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_322_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v_lower_310_; lean_object* v_upper_311_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___y_319_; uint8_t v___x_321_; 
v___x_316_ = lean_nat_add(v_idx_305_, v_fst_298_);
lean_dec(v_fst_298_);
v___x_317_ = lean_byte_array_size(v_array_304_);
v___x_321_ = lean_nat_dec_le(v_idx_305_, v___x_293_);
if (v___x_321_ == 0)
{
v___y_319_ = v_idx_305_;
goto v___jp_318_;
}
else
{
lean_dec(v_idx_305_);
v___y_319_ = v___x_293_;
goto v___jp_318_;
}
v___jp_309_:
{
lean_object* v___x_312_; lean_object* v___x_314_; 
v___x_312_ = l_ByteArray_toByteSlice(v_array_304_, v_lower_310_, v_upper_311_);
if (v_isShared_308_ == 0)
{
lean_ctor_set(v___x_307_, 1, v___x_312_);
lean_ctor_set(v___x_307_, 0, v_fst_299_);
v___x_314_ = v___x_307_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_fst_299_);
lean_ctor_set(v_reuseFailAlloc_315_, 1, v___x_312_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
v___jp_318_:
{
uint8_t v___x_320_; 
v___x_320_ = lean_nat_dec_le(v___x_316_, v___x_317_);
if (v___x_320_ == 0)
{
lean_dec(v___x_316_);
v_lower_310_ = v___y_319_;
v_upper_311_ = v___x_317_;
goto v___jp_309_;
}
else
{
v_lower_310_ = v___y_319_;
v_upper_311_ = v___x_316_;
goto v___jp_309_;
}
}
}
}
else
{
lean_object* v___x_323_; lean_object* v___x_325_; 
lean_dec(v_fst_299_);
lean_dec(v_fst_298_);
v___x_323_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__2));
if (v_isShared_302_ == 0)
{
lean_ctor_set_tag(v___x_301_, 1);
lean_ctor_set(v___x_301_, 1, v___x_323_);
lean_ctor_set(v___x_301_, 0, v_a_291_);
v___x_325_ = v___x_301_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_a_291_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v___x_323_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
}
else
{
lean_object* v_fst_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_337_; 
lean_dec_ref(v___x_294_);
lean_dec_ref(v_a_291_);
v_fst_329_ = lean_ctor_get(v_snd_295_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v_snd_295_);
if (v_isSharedCheck_337_ == 0)
{
lean_object* v_unused_338_; 
v_unused_338_ = lean_ctor_get(v_snd_295_, 1);
lean_dec(v_unused_338_);
v___x_331_ = v_snd_295_;
v_isShared_332_ = v_isSharedCheck_337_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_fst_329_);
lean_dec(v_snd_295_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_337_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_333_; lean_object* v___x_335_; 
v___x_333_ = lean_box(0);
if (v_isShared_332_ == 0)
{
lean_ctor_set_tag(v___x_331_, 1);
lean_ctor_set(v___x_331_, 1, v___x_333_);
v___x_335_ = v___x_331_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_fst_329_);
lean_ctor_set(v_reuseFailAlloc_336_, 1, v___x_333_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___boxed(lean_object* v_limit_339_, lean_object* v_a_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken(v_limit_339_, v_a_340_);
lean_dec(v_limit_339_);
return v_res_341_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__0));
v___x_344_ = lean_string_to_utf8(v___x_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf(lean_object* v_a_345_){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_347_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_346_, v_a_345_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg(lean_object* v_limits_351_, lean_object* v_a_352_, lean_object* v___y_353_){
_start:
{
lean_object* v_array_354_; lean_object* v_idx_355_; lean_object* v___x_356_; uint8_t v___x_357_; 
v_array_354_ = lean_ctor_get(v___y_353_, 0);
v_idx_355_ = lean_ctor_get(v___y_353_, 1);
v___x_356_ = lean_byte_array_size(v_array_354_);
v___x_357_ = lean_nat_dec_lt(v_idx_355_, v___x_356_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; 
v___x_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_358_, 0, v___y_353_);
lean_ctor_set(v___x_358_, 1, v_a_352_);
return v___x_358_;
}
else
{
uint8_t v___x_359_; uint8_t v___x_360_; uint8_t v___x_361_; 
v___x_359_ = lean_byte_array_fget(v_array_354_, v_idx_355_);
v___x_360_ = 13;
v___x_361_ = lean_uint8_dec_eq(v___x_359_, v___x_360_);
if (v___x_361_ == 0)
{
lean_object* v___x_362_; 
v___x_362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_362_, 0, v___y_353_);
lean_ctor_set(v___x_362_, 1, v_a_352_);
return v___x_362_;
}
else
{
lean_object* v_maxLeadingEmptyLines_363_; uint8_t v___x_364_; 
v_maxLeadingEmptyLines_363_ = lean_ctor_get(v_limits_351_, 9);
v___x_364_ = lean_nat_dec_le(v_maxLeadingEmptyLines_363_, v_a_352_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_366_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_365_, v___y_353_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v_pos_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v_pos_367_ = lean_ctor_get(v___x_366_, 0);
lean_inc(v_pos_367_);
lean_dec_ref_known(v___x_366_, 2);
v___x_368_ = lean_unsigned_to_nat(1u);
v___x_369_ = lean_nat_add(v_a_352_, v___x_368_);
lean_dec(v_a_352_);
v_a_352_ = v___x_369_;
v___y_353_ = v_pos_367_;
goto _start;
}
else
{
lean_object* v_pos_371_; lean_object* v_err_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_379_; 
lean_dec(v_a_352_);
v_pos_371_ = lean_ctor_get(v___x_366_, 0);
v_err_372_ = lean_ctor_get(v___x_366_, 1);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_366_);
if (v_isSharedCheck_379_ == 0)
{
v___x_374_ = v___x_366_;
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_err_372_);
lean_inc(v_pos_371_);
lean_dec(v___x_366_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_375_ == 0)
{
v___x_377_ = v___x_374_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_pos_371_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v_err_372_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
}
else
{
lean_object* v___x_380_; lean_object* v___x_381_; 
lean_dec(v_a_352_);
v___x_380_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___closed__1));
v___x_381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_381_, 0, v___y_353_);
lean_ctor_set(v___x_381_, 1, v___x_380_);
return v___x_381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg___boxed(lean_object* v_limits_382_, lean_object* v_a_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg(v_limits_382_, v_a_383_, v___y_384_);
lean_dec_ref(v_limits_382_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines(lean_object* v_limits_386_, lean_object* v_a_387_){
_start:
{
lean_object* v_count_388_; lean_object* v___x_389_; 
v_count_388_ = lean_unsigned_to_nat(0u);
v___x_389_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg(v_limits_386_, v_count_388_, v_a_387_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v_pos_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_398_; 
v_pos_390_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_398_ == 0)
{
lean_object* v_unused_399_; 
v_unused_399_ = lean_ctor_get(v___x_389_, 1);
lean_dec(v_unused_399_);
v___x_392_ = v___x_389_;
v_isShared_393_ = v_isSharedCheck_398_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_pos_390_);
lean_dec(v___x_389_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_398_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v___x_396_; 
v___x_394_ = lean_box(0);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 1, v___x_394_);
v___x_396_ = v___x_392_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_pos_390_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v___x_394_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
else
{
lean_object* v_pos_400_; lean_object* v_err_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_408_; 
v_pos_400_ = lean_ctor_get(v___x_389_, 0);
v_err_401_ = lean_ctor_get(v___x_389_, 1);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_408_ == 0)
{
v___x_403_ = v___x_389_;
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_err_401_);
lean_inc(v_pos_400_);
lean_dec(v___x_389_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_pos_400_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_err_401_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines___boxed(lean_object* v_limits_409_, lean_object* v_a_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines(v_limits_409_, v_a_410_);
lean_dec_ref(v_limits_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0(lean_object* v_limits_412_, lean_object* v_inst_413_, lean_object* v_a_414_, lean_object* v___y_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___redArg(v_limits_412_, v_a_414_, v___y_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0___boxed(lean_object* v_limits_417_, lean_object* v_inst_418_, lean_object* v_a_419_, lean_object* v___y_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines_spec__0(v_limits_417_, v_inst_418_, v_a_419_, v___y_420_);
lean_dec_ref(v_limits_417_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp(lean_object* v_a_425_){
_start:
{
lean_object* v_array_426_; lean_object* v_idx_427_; lean_object* v___x_428_; uint8_t v___x_429_; 
v_array_426_ = lean_ctor_get(v_a_425_, 0);
v_idx_427_ = lean_ctor_get(v_a_425_, 1);
v___x_428_ = lean_byte_array_size(v_array_426_);
v___x_429_ = lean_nat_dec_lt(v_idx_427_, v___x_428_);
if (v___x_429_ == 0)
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = lean_box(0);
v___x_431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_431_, 0, v_a_425_);
lean_ctor_set(v___x_431_, 1, v___x_430_);
return v___x_431_;
}
else
{
uint8_t v___x_432_; uint8_t v_got_433_; uint8_t v___x_434_; 
v___x_432_ = 32;
v_got_433_ = lean_byte_array_fget(v_array_426_, v_idx_427_);
v___x_434_ = lean_uint8_dec_eq(v_got_433_, v___x_432_);
if (v___x_434_ == 0)
{
lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_435_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1));
v___x_436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_436_, 0, v_a_425_);
lean_ctor_set(v___x_436_, 1, v___x_435_);
return v___x_436_;
}
else
{
lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_447_; 
lean_inc(v_idx_427_);
lean_inc_ref(v_array_426_);
v_isSharedCheck_447_ = !lean_is_exclusive(v_a_425_);
if (v_isSharedCheck_447_ == 0)
{
lean_object* v_unused_448_; lean_object* v_unused_449_; 
v_unused_448_ = lean_ctor_get(v_a_425_, 1);
lean_dec(v_unused_448_);
v_unused_449_ = lean_ctor_get(v_a_425_, 0);
lean_dec(v_unused_449_);
v___x_438_ = v_a_425_;
v_isShared_439_ = v_isSharedCheck_447_;
goto v_resetjp_437_;
}
else
{
lean_dec(v_a_425_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_447_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_443_; 
v___x_440_ = lean_unsigned_to_nat(1u);
v___x_441_ = lean_nat_add(v_idx_427_, v___x_440_);
lean_dec(v_idx_427_);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 1, v___x_441_);
v___x_443_ = v___x_438_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_array_426_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v___x_441_);
v___x_443_ = v_reuseFailAlloc_446_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = lean_box(0);
v___x_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_445_, 0, v___x_443_);
lean_ctor_set(v___x_445_, 1, v___x_444_);
return v___x_445_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows(lean_object* v_limits_454_, lean_object* v_a_455_){
_start:
{
lean_object* v_pos_457_; lean_object* v_pos_461_; lean_object* v_maxSpaceSequence_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v_snd_468_; lean_object* v_snd_469_; uint8_t v___x_470_; 
v_maxSpaceSequence_464_ = lean_ctor_get(v_limits_454_, 8);
v___x_465_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__2));
v___x_466_ = lean_unsigned_to_nat(0u);
v___x_467_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___x_465_, v_maxSpaceSequence_464_, v___x_466_, v_a_455_);
v_snd_468_ = lean_ctor_get(v___x_467_, 1);
lean_inc(v_snd_468_);
lean_dec_ref(v___x_467_);
v_snd_469_ = lean_ctor_get(v_snd_468_, 1);
v___x_470_ = lean_unbox(v_snd_469_);
if (v___x_470_ == 0)
{
lean_object* v_fst_471_; lean_object* v_array_472_; lean_object* v_idx_473_; lean_object* v___x_474_; uint8_t v___x_475_; 
v_fst_471_ = lean_ctor_get(v_snd_468_, 0);
lean_inc(v_fst_471_);
lean_dec(v_snd_468_);
v_array_472_ = lean_ctor_get(v_fst_471_, 0);
v_idx_473_ = lean_ctor_get(v_fst_471_, 1);
v___x_474_ = lean_byte_array_size(v_array_472_);
v___x_475_ = lean_nat_dec_lt(v_idx_473_, v___x_474_);
if (v___x_475_ == 0)
{
v_pos_457_ = v_fst_471_;
goto v___jp_456_;
}
else
{
uint8_t v___x_476_; uint32_t v___x_477_; uint32_t v___x_478_; uint8_t v___x_479_; 
v___x_476_ = lean_byte_array_fget(v_array_472_, v_idx_473_);
v___x_477_ = lean_uint8_to_uint32(v___x_476_);
v___x_478_ = 32;
v___x_479_ = lean_uint32_dec_eq(v___x_477_, v___x_478_);
if (v___x_479_ == 0)
{
uint32_t v___x_480_; uint8_t v___x_481_; 
v___x_480_ = 9;
v___x_481_ = lean_uint32_dec_eq(v___x_477_, v___x_480_);
if (v___x_481_ == 0)
{
v_pos_457_ = v_fst_471_;
goto v___jp_456_;
}
else
{
v_pos_461_ = v_fst_471_;
goto v___jp_460_;
}
}
else
{
v_pos_461_ = v_fst_471_;
goto v___jp_460_;
}
}
}
else
{
lean_object* v_fst_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_490_; 
v_fst_482_ = lean_ctor_get(v_snd_468_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v_snd_468_);
if (v_isSharedCheck_490_ == 0)
{
lean_object* v_unused_491_; 
v_unused_491_ = lean_ctor_get(v_snd_468_, 1);
lean_dec(v_unused_491_);
v___x_484_ = v_snd_468_;
v_isShared_485_ = v_isSharedCheck_490_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_fst_482_);
lean_dec(v_snd_468_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_490_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_486_; lean_object* v___x_488_; 
v___x_486_ = lean_box(0);
if (v_isShared_485_ == 0)
{
lean_ctor_set_tag(v___x_484_, 1);
lean_ctor_set(v___x_484_, 1, v___x_486_);
v___x_488_ = v___x_484_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_fst_482_);
lean_ctor_set(v_reuseFailAlloc_489_, 1, v___x_486_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
v___jp_456_:
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = lean_box(0);
v___x_459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_459_, 0, v_pos_457_);
lean_ctor_set(v___x_459_, 1, v___x_458_);
return v___x_459_;
}
v___jp_460_:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1));
v___x_463_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_463_, 0, v_pos_461_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
return v___x_463_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___boxed(lean_object* v_limits_492_, lean_object* v_a_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows(v_limits_492_, v_a_493_);
lean_dec_ref(v_limits_492_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hexDigit(lean_object* v_a_496_){
_start:
{
lean_object* v_array_497_; lean_object* v_idx_498_; lean_object* v___x_499_; uint8_t v___x_500_; 
v_array_497_ = lean_ctor_get(v_a_496_, 0);
v_idx_498_ = lean_ctor_get(v_a_496_, 1);
v___x_499_ = lean_byte_array_size(v_array_497_);
v___x_500_ = lean_nat_dec_lt(v_idx_498_, v___x_499_);
if (v___x_500_ == 0)
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = lean_box(0);
v___x_502_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_502_, 0, v_a_496_);
lean_ctor_set(v___x_502_, 1, v___x_501_);
return v___x_502_;
}
else
{
lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_558_; 
lean_inc(v_idx_498_);
lean_inc_ref(v_array_497_);
v_isSharedCheck_558_ = !lean_is_exclusive(v_a_496_);
if (v_isSharedCheck_558_ == 0)
{
lean_object* v_unused_559_; lean_object* v_unused_560_; 
v_unused_559_ = lean_ctor_get(v_a_496_, 1);
lean_dec(v_unused_559_);
v_unused_560_ = lean_ctor_get(v_a_496_, 0);
lean_dec(v_unused_560_);
v___x_504_ = v_a_496_;
v_isShared_505_ = v_isSharedCheck_558_;
goto v_resetjp_503_;
}
else
{
lean_dec(v_a_496_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_558_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
uint8_t v_c_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v_it_x27_510_; 
v_c_506_ = lean_byte_array_fget(v_array_497_, v_idx_498_);
v___x_507_ = lean_unsigned_to_nat(1u);
v___x_508_ = lean_nat_add(v_idx_498_, v___x_507_);
lean_dec(v_idx_498_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 1, v___x_508_);
v_it_x27_510_ = v___x_504_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_array_497_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v___x_508_);
v_it_x27_510_ = v_reuseFailAlloc_557_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
uint8_t v___x_553_; uint8_t v___x_554_; 
v___x_553_ = 48;
v___x_554_ = lean_uint8_dec_le(v___x_553_, v_c_506_);
if (v___x_554_ == 0)
{
goto v___jp_548_;
}
else
{
uint8_t v___x_555_; uint8_t v___x_556_; 
v___x_555_ = 57;
v___x_556_ = lean_uint8_dec_le(v_c_506_, v___x_555_);
if (v___x_556_ == 0)
{
goto v___jp_548_;
}
else
{
goto v___jp_528_;
}
}
v___jp_511_:
{
uint8_t v___x_512_; uint8_t v___x_513_; uint8_t v___x_514_; uint8_t v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_512_ = 97;
v___x_513_ = lean_uint8_sub(v_c_506_, v___x_512_);
v___x_514_ = 10;
v___x_515_ = lean_uint8_add(v___x_513_, v___x_514_);
v___x_516_ = lean_box(v___x_515_);
v___x_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_517_, 0, v_it_x27_510_);
lean_ctor_set(v___x_517_, 1, v___x_516_);
return v___x_517_;
}
v___jp_518_:
{
uint8_t v___x_519_; uint8_t v___x_520_; 
v___x_519_ = 65;
v___x_520_ = lean_uint8_dec_le(v___x_519_, v_c_506_);
if (v___x_520_ == 0)
{
goto v___jp_511_;
}
else
{
uint8_t v___x_521_; uint8_t v___x_522_; 
v___x_521_ = 70;
v___x_522_ = lean_uint8_dec_le(v_c_506_, v___x_521_);
if (v___x_522_ == 0)
{
goto v___jp_511_;
}
else
{
uint8_t v___x_523_; uint8_t v___x_524_; uint8_t v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_523_ = lean_uint8_sub(v_c_506_, v___x_519_);
v___x_524_ = 10;
v___x_525_ = lean_uint8_add(v___x_523_, v___x_524_);
v___x_526_ = lean_box(v___x_525_);
v___x_527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_527_, 0, v_it_x27_510_);
lean_ctor_set(v___x_527_, 1, v___x_526_);
return v___x_527_;
}
}
}
v___jp_528_:
{
uint8_t v___x_529_; uint8_t v___x_530_; 
v___x_529_ = 48;
v___x_530_ = lean_uint8_dec_le(v___x_529_, v_c_506_);
if (v___x_530_ == 0)
{
goto v___jp_518_;
}
else
{
uint8_t v___x_531_; uint8_t v___x_532_; 
v___x_531_ = 57;
v___x_532_ = lean_uint8_dec_le(v_c_506_, v___x_531_);
if (v___x_532_ == 0)
{
goto v___jp_518_;
}
else
{
uint8_t v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_533_ = lean_uint8_sub(v_c_506_, v___x_529_);
v___x_534_ = lean_box(v___x_533_);
v___x_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_535_, 0, v_it_x27_510_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
return v___x_535_;
}
}
}
v___jp_536_:
{
lean_object* v___x_537_; uint32_t v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_537_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hexDigit___closed__0));
v___x_538_ = lean_uint8_to_uint32(v_c_506_);
v___x_539_ = l_Char_quote(v___x_538_);
v___x_540_ = lean_string_append(v___x_537_, v___x_539_);
lean_dec_ref(v___x_539_);
v___x_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
v___x_542_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_542_, 0, v_it_x27_510_);
lean_ctor_set(v___x_542_, 1, v___x_541_);
return v___x_542_;
}
v___jp_543_:
{
uint8_t v___x_544_; uint8_t v___x_545_; 
v___x_544_ = 65;
v___x_545_ = lean_uint8_dec_le(v___x_544_, v_c_506_);
if (v___x_545_ == 0)
{
goto v___jp_536_;
}
else
{
uint8_t v___x_546_; uint8_t v___x_547_; 
v___x_546_ = 70;
v___x_547_ = lean_uint8_dec_le(v_c_506_, v___x_546_);
if (v___x_547_ == 0)
{
goto v___jp_536_;
}
else
{
goto v___jp_528_;
}
}
}
v___jp_548_:
{
uint8_t v___x_549_; uint8_t v___x_550_; 
v___x_549_ = 97;
v___x_550_ = lean_uint8_dec_le(v___x_549_, v_c_506_);
if (v___x_550_ == 0)
{
goto v___jp_543_;
}
else
{
uint8_t v___x_551_; uint8_t v___x_552_; 
v___x_551_ = 102;
v___x_552_ = lean_uint8_dec_le(v_c_506_, v___x_551_);
if (v___x_552_ == 0)
{
goto v___jp_543_;
}
else
{
goto v___jp_528_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go(lean_object* v_acc_567_, lean_object* v_count_568_, lean_object* v_a_569_){
_start:
{
lean_object* v___x_570_; 
lean_inc_ref(v_a_569_);
v___x_570_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hexDigit(v_a_569_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v_pos_571_; lean_object* v_res_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_589_; 
lean_dec_ref(v_a_569_);
v_pos_571_ = lean_ctor_get(v___x_570_, 0);
v_res_572_ = lean_ctor_get(v___x_570_, 1);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_589_ == 0)
{
v___x_574_ = v___x_570_;
v_isShared_575_ = v_isSharedCheck_589_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_res_572_);
lean_inc(v_pos_571_);
lean_dec(v___x_570_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_589_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_576_ = lean_unsigned_to_nat(16u);
v___x_577_ = lean_unsigned_to_nat(1u);
v___x_578_ = lean_nat_add(v_count_568_, v___x_577_);
lean_dec(v_count_568_);
v___x_579_ = lean_nat_dec_lt(v___x_576_, v___x_578_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; uint8_t v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
lean_del_object(v___x_574_);
v___x_580_ = lean_nat_mul(v_acc_567_, v___x_576_);
lean_dec(v_acc_567_);
v___x_581_ = lean_unbox(v_res_572_);
lean_dec(v_res_572_);
v___x_582_ = lean_uint8_to_nat(v___x_581_);
v___x_583_ = lean_nat_add(v___x_580_, v___x_582_);
lean_dec(v___x_580_);
v_acc_567_ = v___x_583_;
v_count_568_ = v___x_578_;
v_a_569_ = v_pos_571_;
goto _start;
}
else
{
lean_object* v___x_585_; lean_object* v___x_587_; 
lean_dec(v___x_578_);
lean_dec(v_res_572_);
lean_dec(v_acc_567_);
v___x_585_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__1));
if (v_isShared_575_ == 0)
{
lean_ctor_set_tag(v___x_574_, 1);
lean_ctor_set(v___x_574_, 1, v___x_585_);
v___x_587_ = v___x_574_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_pos_571_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v___x_585_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
else
{
lean_object* v_err_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_615_; 
v_err_590_ = lean_ctor_get(v___x_570_, 1);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_615_ == 0)
{
lean_object* v_unused_616_; 
v_unused_616_ = lean_ctor_get(v___x_570_, 0);
lean_dec(v_unused_616_);
v___x_592_ = v___x_570_;
v_isShared_593_ = v_isSharedCheck_615_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_err_590_);
lean_dec(v___x_570_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_615_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v_array_594_; lean_object* v_idx_595_; uint8_t v___x_596_; 
v_array_594_ = lean_ctor_get(v_a_569_, 0);
v_idx_595_ = lean_ctor_get(v_a_569_, 1);
v___x_596_ = lean_nat_dec_eq(v_idx_595_, v_idx_595_);
if (v___x_596_ == 0)
{
lean_object* v___x_598_; 
lean_dec(v_count_568_);
lean_dec(v_acc_567_);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 0, v_a_569_);
v___x_598_ = v___x_592_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_a_569_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v_err_590_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
else
{
lean_object* v___x_600_; uint8_t v___x_601_; 
lean_dec(v_err_590_);
v___x_600_ = lean_unsigned_to_nat(0u);
v___x_601_ = lean_nat_dec_eq(v_count_568_, v___x_600_);
lean_dec(v_count_568_);
if (v___x_601_ == 0)
{
lean_object* v___x_603_; 
if (v_isShared_593_ == 0)
{
lean_ctor_set_tag(v___x_592_, 0);
lean_ctor_set(v___x_592_, 1, v_acc_567_);
lean_ctor_set(v___x_592_, 0, v_a_569_);
v___x_603_ = v___x_592_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_a_569_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v_acc_567_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
else
{
lean_object* v___x_605_; uint8_t v___x_606_; 
lean_dec(v_acc_567_);
v___x_605_ = lean_byte_array_size(v_array_594_);
v___x_606_ = lean_nat_dec_lt(v_idx_595_, v___x_605_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; lean_object* v___x_609_; 
v___x_607_ = lean_box(0);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 1, v___x_607_);
lean_ctor_set(v___x_592_, 0, v_a_569_);
v___x_609_ = v___x_592_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_a_569_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v___x_607_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
else
{
lean_object* v___x_611_; lean_object* v___x_613_; 
v___x_611_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go___closed__3));
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 1, v___x_611_);
lean_ctor_set(v___x_592_, 0, v_a_569_);
v___x_613_ = v___x_592_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_a_569_);
lean_ctor_set(v_reuseFailAlloc_614_, 1, v___x_611_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go_match__1_splitter___redArg(lean_object* v_____do__lift_617_, lean_object* v_h__1_618_, lean_object* v_h__2_619_){
_start:
{
if (lean_obj_tag(v_____do__lift_617_) == 0)
{
lean_object* v___x_620_; lean_object* v___x_621_; 
lean_dec(v_h__1_618_);
v___x_620_ = lean_box(0);
v___x_621_ = lean_apply_1(v_h__2_619_, v___x_620_);
return v___x_621_;
}
else
{
lean_object* v_val_622_; lean_object* v___x_623_; 
lean_dec(v_h__2_619_);
v_val_622_ = lean_ctor_get(v_____do__lift_617_, 0);
lean_inc(v_val_622_);
lean_dec_ref_known(v_____do__lift_617_, 1);
v___x_623_ = lean_apply_1(v_h__1_618_, v_val_622_);
return v___x_623_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go_match__1_splitter(lean_object* v_motive_624_, lean_object* v_____do__lift_625_, lean_object* v_h__1_626_, lean_object* v_h__2_627_){
_start:
{
if (lean_obj_tag(v_____do__lift_625_) == 0)
{
lean_object* v___x_628_; lean_object* v___x_629_; 
lean_dec(v_h__1_626_);
v___x_628_ = lean_box(0);
v___x_629_ = lean_apply_1(v_h__2_627_, v___x_628_);
return v___x_629_;
}
else
{
lean_object* v_val_630_; lean_object* v___x_631_; 
lean_dec(v_h__2_627_);
v_val_630_ = lean_ctor_get(v_____do__lift_625_, 0);
lean_inc(v_val_630_);
lean_dec_ref_known(v_____do__lift_625_, 1);
v___x_631_ = lean_apply_1(v_h__1_626_, v_val_630_);
return v___x_631_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex(lean_object* v_a_632_){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_633_ = lean_unsigned_to_nat(0u);
v___x_634_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex_go(v___x_633_, v___x_633_, v_a_632_);
return v___x_634_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__1(void){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__0));
v___x_637_ = lean_string_to_utf8(v___x_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber(lean_object* v_a_644_){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__1);
v___x_646_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_645_, v_a_644_);
if (lean_obj_tag(v___x_646_) == 0)
{
lean_object* v_pos_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_708_; 
v_pos_647_ = lean_ctor_get(v___x_646_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_646_);
if (v_isSharedCheck_708_ == 0)
{
lean_object* v_unused_709_; 
v_unused_709_ = lean_ctor_get(v___x_646_, 1);
lean_dec(v_unused_709_);
v___x_649_ = v___x_646_;
v_isShared_650_ = v_isSharedCheck_708_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_pos_647_);
lean_dec(v___x_646_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_708_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v_array_656_; lean_object* v_idx_657_; lean_object* v___x_658_; uint8_t v___x_659_; 
v_array_656_ = lean_ctor_get(v_pos_647_, 0);
v_idx_657_ = lean_ctor_get(v_pos_647_, 1);
v___x_658_ = lean_byte_array_size(v_array_656_);
v___x_659_ = lean_nat_dec_lt(v_idx_657_, v___x_658_);
if (v___x_659_ == 0)
{
lean_object* v___x_660_; lean_object* v___x_661_; 
lean_del_object(v___x_649_);
v___x_660_ = lean_box(0);
v___x_661_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_661_, 0, v_pos_647_);
lean_ctor_set(v___x_661_, 1, v___x_660_);
return v___x_661_;
}
else
{
uint8_t v_c_662_; uint8_t v___x_663_; uint8_t v___x_664_; 
v_c_662_ = lean_byte_array_fget(v_array_656_, v_idx_657_);
v___x_663_ = 48;
v___x_664_ = lean_uint8_dec_le(v___x_663_, v_c_662_);
if (v___x_664_ == 0)
{
goto v___jp_651_;
}
else
{
uint8_t v___x_665_; uint8_t v___x_666_; 
v___x_665_ = 57;
v___x_666_ = lean_uint8_dec_le(v_c_662_, v___x_665_);
if (v___x_666_ == 0)
{
goto v___jp_651_;
}
else
{
lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_705_; 
lean_inc(v_idx_657_);
lean_inc_ref(v_array_656_);
lean_del_object(v___x_649_);
v_isSharedCheck_705_ = !lean_is_exclusive(v_pos_647_);
if (v_isSharedCheck_705_ == 0)
{
lean_object* v_unused_706_; lean_object* v_unused_707_; 
v_unused_706_ = lean_ctor_get(v_pos_647_, 1);
lean_dec(v_unused_706_);
v_unused_707_ = lean_ctor_get(v_pos_647_, 0);
lean_dec(v_unused_707_);
v___x_668_ = v_pos_647_;
v_isShared_669_ = v_isSharedCheck_705_;
goto v_resetjp_667_;
}
else
{
lean_dec(v_pos_647_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_705_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v_it_x27_673_; 
v___x_670_ = lean_unsigned_to_nat(1u);
v___x_671_ = lean_nat_add(v_idx_657_, v___x_670_);
lean_dec(v_idx_657_);
lean_inc(v___x_671_);
lean_inc_ref(v_array_656_);
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 1, v___x_671_);
v_it_x27_673_ = v___x_668_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_array_656_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v___x_671_);
v_it_x27_673_ = v_reuseFailAlloc_704_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
uint8_t v___x_674_; 
v___x_674_ = lean_nat_dec_lt(v___x_671_, v___x_658_);
if (v___x_674_ == 0)
{
lean_object* v___x_675_; lean_object* v___x_676_; 
lean_dec(v___x_671_);
lean_dec_ref(v_array_656_);
v___x_675_ = lean_box(0);
v___x_676_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_676_, 0, v_it_x27_673_);
lean_ctor_set(v___x_676_, 1, v___x_675_);
return v___x_676_;
}
else
{
uint8_t v___x_677_; uint8_t v_got_678_; uint8_t v___x_679_; 
v___x_677_ = 46;
v_got_678_ = lean_byte_array_fget(v_array_656_, v___x_671_);
v___x_679_ = lean_uint8_dec_eq(v_got_678_, v___x_677_);
if (v___x_679_ == 0)
{
lean_object* v___x_680_; lean_object* v___x_681_; 
lean_dec(v___x_671_);
lean_dec_ref(v_array_656_);
v___x_680_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__5));
v___x_681_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_681_, 0, v_it_x27_673_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
return v___x_681_;
}
else
{
lean_object* v___x_682_; lean_object* v___x_683_; uint8_t v___x_687_; 
lean_dec_ref(v_it_x27_673_);
v___x_682_ = lean_nat_add(v___x_671_, v___x_670_);
lean_dec(v___x_671_);
lean_inc(v___x_682_);
lean_inc_ref(v_array_656_);
v___x_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_683_, 0, v_array_656_);
lean_ctor_set(v___x_683_, 1, v___x_682_);
v___x_687_ = lean_nat_dec_lt(v___x_682_, v___x_658_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; 
lean_dec(v___x_682_);
lean_dec_ref(v_array_656_);
v___x_688_ = lean_box(0);
v___x_689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_683_);
lean_ctor_set(v___x_689_, 1, v___x_688_);
return v___x_689_;
}
else
{
uint8_t v_c_690_; uint8_t v___x_691_; 
v_c_690_ = lean_byte_array_fget(v_array_656_, v___x_682_);
v___x_691_ = lean_uint8_dec_le(v___x_663_, v_c_690_);
if (v___x_691_ == 0)
{
lean_dec(v___x_682_);
lean_dec_ref(v_array_656_);
goto v___jp_684_;
}
else
{
uint8_t v___x_692_; 
v___x_692_ = lean_uint8_dec_le(v_c_690_, v___x_665_);
if (v___x_692_ == 0)
{
lean_dec(v___x_682_);
lean_dec_ref(v_array_656_);
goto v___jp_684_;
}
else
{
lean_object* v___x_693_; uint32_t v___x_694_; lean_object* v___x_695_; lean_object* v_it_x27_696_; uint32_t v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
lean_dec_ref_known(v___x_683_, 2);
v___x_693_ = lean_unsigned_to_nat(48u);
v___x_694_ = lean_uint8_to_uint32(v_c_662_);
v___x_695_ = lean_nat_add(v___x_682_, v___x_670_);
lean_dec(v___x_682_);
v_it_x27_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_696_, 0, v_array_656_);
lean_ctor_set(v_it_x27_696_, 1, v___x_695_);
v___x_697_ = lean_uint8_to_uint32(v_c_690_);
v___x_698_ = lean_uint32_to_nat(v___x_694_);
v___x_699_ = lean_nat_sub(v___x_698_, v___x_693_);
lean_dec(v___x_698_);
v___x_700_ = lean_uint32_to_nat(v___x_697_);
v___x_701_ = lean_nat_sub(v___x_700_, v___x_693_);
lean_dec(v___x_700_);
v___x_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_702_, 0, v___x_699_);
lean_ctor_set(v___x_702_, 1, v___x_701_);
v___x_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_703_, 0, v_it_x27_696_);
lean_ctor_set(v___x_703_, 1, v___x_702_);
return v___x_703_;
}
}
}
v___jp_684_:
{
lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_685_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__3));
v___x_686_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_686_, 0, v___x_683_);
lean_ctor_set(v___x_686_, 1, v___x_685_);
return v___x_686_;
}
}
}
}
}
}
}
}
v___jp_651_:
{
lean_object* v___x_652_; lean_object* v___x_654_; 
v___x_652_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__3));
if (v_isShared_650_ == 0)
{
lean_ctor_set_tag(v___x_649_, 1);
lean_ctor_set(v___x_649_, 1, v___x_652_);
v___x_654_ = v___x_649_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_pos_647_);
lean_ctor_set(v_reuseFailAlloc_655_, 1, v___x_652_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
}
}
else
{
lean_object* v_pos_710_; lean_object* v_err_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_718_; 
v_pos_710_ = lean_ctor_get(v___x_646_, 0);
v_err_711_ = lean_ctor_get(v___x_646_, 1);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_646_);
if (v_isSharedCheck_718_ == 0)
{
v___x_713_ = v___x_646_;
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_err_711_);
lean_inc(v_pos_710_);
lean_dec(v___x_646_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_716_; 
if (v_isShared_714_ == 0)
{
v___x_716_ = v___x_713_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_pos_710_);
lean_ctor_set(v_reuseFailAlloc_717_, 1, v_err_711_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersion(lean_object* v_a_719_){
_start:
{
lean_object* v___x_720_; 
v___x_720_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber(v_a_719_);
if (lean_obj_tag(v___x_720_) == 0)
{
lean_object* v_res_721_; lean_object* v_pos_722_; lean_object* v_fst_723_; lean_object* v_snd_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v_res_721_ = lean_ctor_get(v___x_720_, 1);
lean_inc(v_res_721_);
v_pos_722_ = lean_ctor_get(v___x_720_, 0);
lean_inc(v_pos_722_);
lean_dec_ref_known(v___x_720_, 2);
v_fst_723_ = lean_ctor_get(v_res_721_, 0);
lean_inc(v_fst_723_);
v_snd_724_ = lean_ctor_get(v_res_721_, 1);
lean_inc(v_snd_724_);
lean_dec(v_res_721_);
v___x_725_ = l_Std_Http_Version_ofNumber_x3f(v_fst_723_, v_snd_724_);
lean_dec(v_snd_724_);
lean_dec(v_fst_723_);
v___x_726_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(v___x_725_, v_pos_722_);
lean_dec(v___x_725_);
return v___x_726_;
}
else
{
lean_object* v_pos_727_; lean_object* v_err_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_735_; 
v_pos_727_ = lean_ctor_get(v___x_720_, 0);
v_err_728_ = lean_ctor_get(v___x_720_, 1);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_720_);
if (v_isSharedCheck_735_ == 0)
{
v___x_730_ = v___x_720_;
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_err_728_);
lean_inc(v_pos_727_);
lean_dec(v___x_720_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_pos_727_);
lean_ctor_set(v_reuseFailAlloc_734_, 1, v_err_728_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0(size_t v_sz_776_, size_t v_i_777_, lean_object* v_bs_778_){
_start:
{
uint8_t v___x_779_; 
v___x_779_ = lean_usize_dec_lt(v_i_777_, v_sz_776_);
if (v___x_779_ == 0)
{
return v_bs_778_;
}
else
{
lean_object* v_v_780_; lean_object* v___x_781_; lean_object* v_bs_x27_782_; lean_object* v___y_784_; uint8_t v___x_793_; 
v_v_780_ = lean_array_uget(v_bs_778_, v_i_777_);
v___x_781_ = lean_unsigned_to_nat(0u);
v_bs_x27_782_ = lean_array_uset(v_bs_778_, v_i_777_, v___x_781_);
v___x_793_ = lean_unbox(v_v_780_);
switch(v___x_793_)
{
case 0:
{
lean_object* v___x_794_; 
v___x_794_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__0));
v___y_784_ = v___x_794_;
goto v___jp_783_;
}
case 1:
{
lean_object* v___x_795_; 
v___x_795_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__1));
v___y_784_ = v___x_795_;
goto v___jp_783_;
}
case 2:
{
lean_object* v___x_796_; 
v___x_796_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__2));
v___y_784_ = v___x_796_;
goto v___jp_783_;
}
case 3:
{
lean_object* v___x_797_; 
v___x_797_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__3));
v___y_784_ = v___x_797_;
goto v___jp_783_;
}
case 4:
{
lean_object* v___x_798_; 
v___x_798_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__4));
v___y_784_ = v___x_798_;
goto v___jp_783_;
}
case 5:
{
lean_object* v___x_799_; 
v___x_799_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__5));
v___y_784_ = v___x_799_;
goto v___jp_783_;
}
case 6:
{
lean_object* v___x_800_; 
v___x_800_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__6));
v___y_784_ = v___x_800_;
goto v___jp_783_;
}
case 7:
{
lean_object* v___x_801_; 
v___x_801_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__7));
v___y_784_ = v___x_801_;
goto v___jp_783_;
}
case 8:
{
lean_object* v___x_802_; 
v___x_802_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__8));
v___y_784_ = v___x_802_;
goto v___jp_783_;
}
case 9:
{
lean_object* v___x_803_; 
v___x_803_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__9));
v___y_784_ = v___x_803_;
goto v___jp_783_;
}
case 10:
{
lean_object* v___x_804_; 
v___x_804_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__10));
v___y_784_ = v___x_804_;
goto v___jp_783_;
}
case 11:
{
lean_object* v___x_805_; 
v___x_805_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__11));
v___y_784_ = v___x_805_;
goto v___jp_783_;
}
case 12:
{
lean_object* v___x_806_; 
v___x_806_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__12));
v___y_784_ = v___x_806_;
goto v___jp_783_;
}
case 13:
{
lean_object* v___x_807_; 
v___x_807_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__13));
v___y_784_ = v___x_807_;
goto v___jp_783_;
}
case 14:
{
lean_object* v___x_808_; 
v___x_808_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__14));
v___y_784_ = v___x_808_;
goto v___jp_783_;
}
case 15:
{
lean_object* v___x_809_; 
v___x_809_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__15));
v___y_784_ = v___x_809_;
goto v___jp_783_;
}
case 16:
{
lean_object* v___x_810_; 
v___x_810_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__16));
v___y_784_ = v___x_810_;
goto v___jp_783_;
}
case 17:
{
lean_object* v___x_811_; 
v___x_811_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__17));
v___y_784_ = v___x_811_;
goto v___jp_783_;
}
case 18:
{
lean_object* v___x_812_; 
v___x_812_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__18));
v___y_784_ = v___x_812_;
goto v___jp_783_;
}
case 19:
{
lean_object* v___x_813_; 
v___x_813_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__19));
v___y_784_ = v___x_813_;
goto v___jp_783_;
}
case 20:
{
lean_object* v___x_814_; 
v___x_814_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__20));
v___y_784_ = v___x_814_;
goto v___jp_783_;
}
case 21:
{
lean_object* v___x_815_; 
v___x_815_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__21));
v___y_784_ = v___x_815_;
goto v___jp_783_;
}
case 22:
{
lean_object* v___x_816_; 
v___x_816_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__22));
v___y_784_ = v___x_816_;
goto v___jp_783_;
}
case 23:
{
lean_object* v___x_817_; 
v___x_817_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__23));
v___y_784_ = v___x_817_;
goto v___jp_783_;
}
case 24:
{
lean_object* v___x_818_; 
v___x_818_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__24));
v___y_784_ = v___x_818_;
goto v___jp_783_;
}
case 25:
{
lean_object* v___x_819_; 
v___x_819_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__25));
v___y_784_ = v___x_819_;
goto v___jp_783_;
}
case 26:
{
lean_object* v___x_820_; 
v___x_820_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__26));
v___y_784_ = v___x_820_;
goto v___jp_783_;
}
case 27:
{
lean_object* v___x_821_; 
v___x_821_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__27));
v___y_784_ = v___x_821_;
goto v___jp_783_;
}
case 28:
{
lean_object* v___x_822_; 
v___x_822_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__28));
v___y_784_ = v___x_822_;
goto v___jp_783_;
}
case 29:
{
lean_object* v___x_823_; 
v___x_823_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__29));
v___y_784_ = v___x_823_;
goto v___jp_783_;
}
case 30:
{
lean_object* v___x_824_; 
v___x_824_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__30));
v___y_784_ = v___x_824_;
goto v___jp_783_;
}
case 31:
{
lean_object* v___x_825_; 
v___x_825_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__31));
v___y_784_ = v___x_825_;
goto v___jp_783_;
}
case 32:
{
lean_object* v___x_826_; 
v___x_826_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__32));
v___y_784_ = v___x_826_;
goto v___jp_783_;
}
case 33:
{
lean_object* v___x_827_; 
v___x_827_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__33));
v___y_784_ = v___x_827_;
goto v___jp_783_;
}
case 34:
{
lean_object* v___x_828_; 
v___x_828_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__34));
v___y_784_ = v___x_828_;
goto v___jp_783_;
}
case 35:
{
lean_object* v___x_829_; 
v___x_829_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__35));
v___y_784_ = v___x_829_;
goto v___jp_783_;
}
case 36:
{
lean_object* v___x_830_; 
v___x_830_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__36));
v___y_784_ = v___x_830_;
goto v___jp_783_;
}
case 37:
{
lean_object* v___x_831_; 
v___x_831_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__37));
v___y_784_ = v___x_831_;
goto v___jp_783_;
}
case 38:
{
lean_object* v___x_832_; 
v___x_832_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__38));
v___y_784_ = v___x_832_;
goto v___jp_783_;
}
default: 
{
lean_object* v___x_833_; 
v___x_833_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___closed__39));
v___y_784_ = v___x_833_;
goto v___jp_783_;
}
}
v___jp_783_:
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; size_t v___x_789_; size_t v___x_790_; lean_object* v___x_791_; 
lean_inc_ref(v___y_784_);
v___x_785_ = lean_string_to_utf8(v___y_784_);
v___x_786_ = lean_byte_array_size(v___x_785_);
v___x_787_ = l_ByteArray_toByteSlice(v___x_785_, v___x_781_, v___x_786_);
v___x_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_788_, 0, v___x_787_);
lean_ctor_set(v___x_788_, 1, v_v_780_);
v___x_789_ = ((size_t)1ULL);
v___x_790_ = lean_usize_add(v_i_777_, v___x_789_);
v___x_791_ = lean_array_uset(v_bs_x27_782_, v_i_777_, v___x_788_);
v_i_777_ = v___x_790_;
v_bs_778_ = v___x_791_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0___boxed(lean_object* v_sz_834_, lean_object* v_i_835_, lean_object* v_bs_836_){
_start:
{
size_t v_sz_boxed_837_; size_t v_i_boxed_838_; lean_object* v_res_839_; 
v_sz_boxed_837_ = lean_unbox_usize(v_sz_834_);
lean_dec(v_sz_834_);
v_i_boxed_838_ = lean_unbox_usize(v_i_835_);
lean_dec(v_i_835_);
v_res_839_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0(v_sz_boxed_837_, v_i_boxed_838_, v_bs_836_);
return v_res_839_;
}
}
static size_t _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods___closed__0(void){
_start:
{
lean_object* v___x_840_; size_t v_sz_841_; 
v___x_840_ = l_Std_Http_Method_all;
v_sz_841_ = lean_array_size(v___x_840_);
return v_sz_841_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods___closed__1(void){
_start:
{
lean_object* v___x_842_; size_t v___x_843_; size_t v_sz_844_; lean_object* v___x_845_; 
v___x_842_ = l_Std_Http_Method_all;
v___x_843_ = ((size_t)0ULL);
v_sz_844_ = lean_usize_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods___closed__0, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods___closed__0_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods___closed__0);
v___x_845_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods_spec__0(v_sz_844_, v___x_843_, v___x_842_);
return v___x_845_;
}
}
static lean_object* _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods(void){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods___closed__1);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0(lean_object* v___x_850_, lean_object* v_as_851_, size_t v_sz_852_, size_t v_i_853_, lean_object* v_b_854_){
_start:
{
lean_object* v_a_856_; uint8_t v___x_860_; 
v___x_860_ = lean_usize_dec_lt(v_i_853_, v_sz_852_);
if (v___x_860_ == 0)
{
lean_inc_ref(v_b_854_);
return v_b_854_;
}
else
{
lean_object* v_a_861_; lean_object* v_fst_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; uint8_t v___x_867_; 
v_a_861_ = lean_array_uget_borrowed(v_as_851_, v_i_853_);
v_fst_862_ = lean_ctor_get(v_a_861_, 0);
v___x_863_ = lean_box(0);
v___x_864_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___closed__0));
v___x_865_ = l_ByteSlice_size(v_fst_862_);
v___x_866_ = l_ByteSlice_size(v___x_850_);
v___x_867_ = lean_nat_dec_eq(v___x_865_, v___x_866_);
lean_dec(v___x_866_);
lean_dec(v___x_865_);
if (v___x_867_ == 0)
{
v_a_856_ = v___x_864_;
goto v___jp_855_;
}
else
{
uint8_t v___x_868_; 
v___x_868_ = lean_byteslice_beq(v_fst_862_, v___x_850_);
if (v___x_868_ == 0)
{
v_a_856_ = v___x_864_;
goto v___jp_855_;
}
else
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
lean_inc(v_a_861_);
v___x_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_869_, 0, v_a_861_);
v___x_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_870_, 0, v___x_869_);
v___x_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_871_, 0, v___x_870_);
lean_ctor_set(v___x_871_, 1, v___x_863_);
return v___x_871_;
}
}
}
v___jp_855_:
{
size_t v___x_857_; size_t v___x_858_; 
v___x_857_ = ((size_t)1ULL);
v___x_858_ = lean_usize_add(v_i_853_, v___x_857_);
v_i_853_ = v___x_858_;
v_b_854_ = v_a_856_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___boxed(lean_object* v___x_872_, lean_object* v_as_873_, lean_object* v_sz_874_, lean_object* v_i_875_, lean_object* v_b_876_){
_start:
{
size_t v_sz_boxed_877_; size_t v_i_boxed_878_; lean_object* v_res_879_; 
v_sz_boxed_877_ = lean_unbox_usize(v_sz_874_);
lean_dec(v_sz_874_);
v_i_boxed_878_ = lean_unbox_usize(v_i_875_);
lean_dec(v_i_875_);
v_res_879_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0(v___x_872_, v_as_873_, v_sz_boxed_877_, v_i_boxed_878_, v_b_876_);
lean_dec_ref(v_b_876_);
lean_dec_ref(v_as_873_);
lean_dec_ref(v___x_872_);
return v_res_879_;
}
}
static size_t _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__4(void){
_start:
{
lean_object* v___x_886_; size_t v_sz_887_; 
v___x_886_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods;
v_sz_887_ = lean_array_size(v___x_886_);
return v_sz_887_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod(lean_object* v_a_888_){
_start:
{
lean_object* v___f_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v_snd_893_; lean_object* v_fst_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_1006_; 
v___f_889_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__0));
v___x_890_ = lean_unsigned_to_nat(64u);
v___x_891_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_888_);
v___x_892_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_889_, v___x_890_, v___x_891_, v_a_888_);
v_snd_893_ = lean_ctor_get(v___x_892_, 1);
v_fst_894_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_896_ = v___x_892_;
v_isShared_897_ = v_isSharedCheck_1006_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_snd_893_);
lean_inc(v_fst_894_);
lean_dec(v___x_892_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_1006_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v_fst_898_; lean_object* v_snd_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_1005_; 
v_fst_898_ = lean_ctor_get(v_snd_893_, 0);
v_snd_899_ = lean_ctor_get(v_snd_893_, 1);
v_isSharedCheck_1005_ = !lean_is_exclusive(v_snd_893_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_901_ = v_snd_893_;
v_isShared_902_ = v_isSharedCheck_1005_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_snd_899_);
lean_inc(v_fst_898_);
lean_dec(v_snd_893_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_1005_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
uint32_t v___y_914_; uint32_t v___y_920_; uint8_t v___x_970_; 
v___x_970_ = lean_unbox(v_snd_899_);
lean_dec(v_snd_899_);
if (v___x_970_ == 0)
{
uint8_t v___x_971_; 
v___x_971_ = lean_nat_dec_eq(v_fst_894_, v___x_891_);
if (v___x_971_ == 0)
{
lean_object* v_array_972_; lean_object* v_idx_973_; lean_object* v_lower_975_; lean_object* v_upper_976_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___y_998_; uint8_t v___x_1000_; 
v_array_972_ = lean_ctor_get(v_a_888_, 0);
lean_inc_ref(v_array_972_);
v_idx_973_ = lean_ctor_get(v_a_888_, 1);
lean_inc(v_idx_973_);
lean_dec_ref(v_a_888_);
v___x_995_ = lean_nat_add(v_idx_973_, v_fst_894_);
lean_dec(v_fst_894_);
v___x_996_ = lean_byte_array_size(v_array_972_);
v___x_1000_ = lean_nat_dec_le(v_idx_973_, v___x_891_);
if (v___x_1000_ == 0)
{
v___y_998_ = v_idx_973_;
goto v___jp_997_;
}
else
{
lean_dec(v_idx_973_);
v___y_998_ = v___x_891_;
goto v___jp_997_;
}
v___jp_974_:
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; size_t v_sz_980_; size_t v___x_981_; lean_object* v___x_982_; lean_object* v_fst_983_; 
v___x_977_ = l_ByteArray_toByteSlice(v_array_972_, v_lower_975_, v_upper_976_);
v___x_978_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods;
v___x_979_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0___closed__0));
v_sz_980_ = lean_usize_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__4, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__4_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__4);
v___x_981_ = ((size_t)0ULL);
v___x_982_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod_spec__0(v___x_977_, v___x_978_, v_sz_980_, v___x_981_, v___x_979_);
lean_dec_ref(v___x_977_);
v_fst_983_ = lean_ctor_get(v___x_982_, 0);
lean_inc(v_fst_983_);
lean_dec_ref(v___x_982_);
if (lean_obj_tag(v_fst_983_) == 0)
{
goto v___jp_925_;
}
else
{
lean_object* v_val_984_; 
v_val_984_ = lean_ctor_get(v_fst_983_, 0);
lean_inc(v_val_984_);
lean_dec_ref_known(v_fst_983_, 1);
if (lean_obj_tag(v_val_984_) == 0)
{
goto v___jp_925_;
}
else
{
lean_object* v_val_985_; lean_object* v_snd_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_993_; 
lean_del_object(v___x_901_);
lean_del_object(v___x_896_);
v_val_985_ = lean_ctor_get(v_val_984_, 0);
lean_inc(v_val_985_);
lean_dec_ref_known(v_val_984_, 1);
v_snd_986_ = lean_ctor_get(v_val_985_, 1);
v_isSharedCheck_993_ = !lean_is_exclusive(v_val_985_);
if (v_isSharedCheck_993_ == 0)
{
lean_object* v_unused_994_; 
v_unused_994_ = lean_ctor_get(v_val_985_, 0);
lean_dec(v_unused_994_);
v___x_988_ = v_val_985_;
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_snd_986_);
lean_dec(v_val_985_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_991_; 
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 0, v_fst_898_);
v___x_991_ = v___x_988_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_fst_898_);
lean_ctor_set(v_reuseFailAlloc_992_, 1, v_snd_986_);
v___x_991_ = v_reuseFailAlloc_992_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
return v___x_991_;
}
}
}
}
}
v___jp_997_:
{
uint8_t v___x_999_; 
v___x_999_ = lean_nat_dec_le(v___x_995_, v___x_996_);
if (v___x_999_ == 0)
{
lean_dec(v___x_995_);
v_lower_975_ = v___y_998_;
v_upper_976_ = v___x_996_;
goto v___jp_974_;
}
else
{
v_lower_975_ = v___y_998_;
v_upper_976_ = v___x_995_;
goto v___jp_974_;
}
}
}
else
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
lean_del_object(v___x_901_);
lean_dec(v_fst_898_);
lean_del_object(v___x_896_);
lean_dec(v_fst_894_);
v___x_1001_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__2));
v___x_1002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1002_, 0, v_a_888_);
lean_ctor_set(v___x_1002_, 1, v___x_1001_);
return v___x_1002_;
}
}
else
{
lean_object* v___x_1003_; lean_object* v___x_1004_; 
lean_del_object(v___x_901_);
lean_del_object(v___x_896_);
lean_dec(v_fst_894_);
lean_dec_ref(v_a_888_);
v___x_1003_ = lean_box(0);
v___x_1004_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1004_, 0, v_fst_898_);
lean_ctor_set(v___x_1004_, 1, v___x_1003_);
return v___x_1004_;
}
v___jp_903_:
{
lean_object* v___x_904_; lean_object* v___x_906_; 
v___x_904_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__1));
if (v_isShared_902_ == 0)
{
lean_ctor_set_tag(v___x_901_, 1);
lean_ctor_set(v___x_901_, 1, v___x_904_);
v___x_906_ = v___x_901_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_fst_898_);
lean_ctor_set(v_reuseFailAlloc_907_, 1, v___x_904_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
v___jp_908_:
{
lean_object* v___x_909_; lean_object* v___x_911_; 
v___x_909_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod___closed__3));
if (v_isShared_897_ == 0)
{
lean_ctor_set_tag(v___x_896_, 1);
lean_ctor_set(v___x_896_, 1, v___x_909_);
lean_ctor_set(v___x_896_, 0, v_fst_898_);
v___x_911_ = v___x_896_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_fst_898_);
lean_ctor_set(v_reuseFailAlloc_912_, 1, v___x_909_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
v___jp_913_:
{
uint32_t v___x_915_; uint8_t v___x_916_; 
v___x_915_ = 97;
v___x_916_ = lean_uint32_dec_le(v___x_915_, v___y_914_);
if (v___x_916_ == 0)
{
lean_del_object(v___x_896_);
goto v___jp_903_;
}
else
{
uint32_t v___x_917_; uint8_t v___x_918_; 
v___x_917_ = 122;
v___x_918_ = lean_uint32_dec_le(v___y_914_, v___x_917_);
if (v___x_918_ == 0)
{
lean_del_object(v___x_896_);
goto v___jp_903_;
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
}
v___jp_919_:
{
uint32_t v___x_921_; uint8_t v___x_922_; 
v___x_921_ = 65;
v___x_922_ = lean_uint32_dec_le(v___x_921_, v___y_920_);
if (v___x_922_ == 0)
{
v___y_914_ = v___y_920_;
goto v___jp_913_;
}
else
{
uint32_t v___x_923_; uint8_t v___x_924_; 
v___x_923_ = 90;
v___x_924_ = lean_uint32_dec_le(v___y_920_, v___x_923_);
if (v___x_924_ == 0)
{
v___y_914_ = v___y_920_;
goto v___jp_913_;
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
}
v___jp_925_:
{
lean_object* v_array_926_; lean_object* v_idx_927_; lean_object* v___x_928_; uint8_t v___x_929_; 
v_array_926_ = lean_ctor_get(v_fst_898_, 0);
v_idx_927_ = lean_ctor_get(v_fst_898_, 1);
v___x_928_ = lean_byte_array_size(v_array_926_);
v___x_929_ = lean_nat_dec_lt(v_idx_927_, v___x_928_);
if (v___x_929_ == 0)
{
lean_object* v___x_930_; lean_object* v___x_931_; 
lean_del_object(v___x_901_);
lean_del_object(v___x_896_);
v___x_930_ = lean_box(0);
v___x_931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_931_, 0, v_fst_898_);
lean_ctor_set(v___x_931_, 1, v___x_930_);
return v___x_931_;
}
else
{
uint8_t v___x_932_; uint8_t v___x_933_; uint8_t v___x_934_; 
v___x_932_ = lean_byte_array_fget(v_array_926_, v_idx_927_);
v___x_933_ = 32;
v___x_934_ = lean_uint8_dec_eq(v___x_932_, v___x_933_);
if (v___x_934_ == 0)
{
uint32_t v___x_935_; uint32_t v___x_936_; uint8_t v___x_937_; 
v___x_935_ = lean_uint8_to_uint32(v___x_932_);
v___x_936_ = 33;
v___x_937_ = lean_uint32_dec_eq(v___x_935_, v___x_936_);
if (v___x_937_ == 0)
{
uint32_t v___x_938_; uint8_t v___x_939_; 
v___x_938_ = 35;
v___x_939_ = lean_uint32_dec_eq(v___x_935_, v___x_938_);
if (v___x_939_ == 0)
{
uint32_t v___x_940_; uint8_t v___x_941_; 
v___x_940_ = 36;
v___x_941_ = lean_uint32_dec_eq(v___x_935_, v___x_940_);
if (v___x_941_ == 0)
{
uint32_t v___x_942_; uint8_t v___x_943_; 
v___x_942_ = 37;
v___x_943_ = lean_uint32_dec_eq(v___x_935_, v___x_942_);
if (v___x_943_ == 0)
{
uint32_t v___x_944_; uint8_t v___x_945_; 
v___x_944_ = 38;
v___x_945_ = lean_uint32_dec_eq(v___x_935_, v___x_944_);
if (v___x_945_ == 0)
{
uint32_t v___x_946_; uint8_t v___x_947_; 
v___x_946_ = 39;
v___x_947_ = lean_uint32_dec_eq(v___x_935_, v___x_946_);
if (v___x_947_ == 0)
{
uint32_t v___x_948_; uint8_t v___x_949_; 
v___x_948_ = 42;
v___x_949_ = lean_uint32_dec_eq(v___x_935_, v___x_948_);
if (v___x_949_ == 0)
{
uint32_t v___x_950_; uint8_t v___x_951_; 
v___x_950_ = 43;
v___x_951_ = lean_uint32_dec_eq(v___x_935_, v___x_950_);
if (v___x_951_ == 0)
{
uint32_t v___x_952_; uint8_t v___x_953_; 
v___x_952_ = 45;
v___x_953_ = lean_uint32_dec_eq(v___x_935_, v___x_952_);
if (v___x_953_ == 0)
{
uint32_t v___x_954_; uint8_t v___x_955_; 
v___x_954_ = 46;
v___x_955_ = lean_uint32_dec_eq(v___x_935_, v___x_954_);
if (v___x_955_ == 0)
{
uint32_t v___x_956_; uint8_t v___x_957_; 
v___x_956_ = 94;
v___x_957_ = lean_uint32_dec_eq(v___x_935_, v___x_956_);
if (v___x_957_ == 0)
{
uint32_t v___x_958_; uint8_t v___x_959_; 
v___x_958_ = 95;
v___x_959_ = lean_uint32_dec_eq(v___x_935_, v___x_958_);
if (v___x_959_ == 0)
{
uint32_t v___x_960_; uint8_t v___x_961_; 
v___x_960_ = 96;
v___x_961_ = lean_uint32_dec_eq(v___x_935_, v___x_960_);
if (v___x_961_ == 0)
{
uint32_t v___x_962_; uint8_t v___x_963_; 
v___x_962_ = 124;
v___x_963_ = lean_uint32_dec_eq(v___x_935_, v___x_962_);
if (v___x_963_ == 0)
{
uint32_t v___x_964_; uint8_t v___x_965_; 
v___x_964_ = 126;
v___x_965_ = lean_uint32_dec_eq(v___x_935_, v___x_964_);
if (v___x_965_ == 0)
{
uint32_t v___x_966_; uint8_t v___x_967_; 
v___x_966_ = 48;
v___x_967_ = lean_uint32_dec_le(v___x_966_, v___x_935_);
if (v___x_967_ == 0)
{
v___y_920_ = v___x_935_;
goto v___jp_919_;
}
else
{
uint32_t v___x_968_; uint8_t v___x_969_; 
v___x_968_ = 57;
v___x_969_ = lean_uint32_dec_le(v___x_935_, v___x_968_);
if (v___x_969_ == 0)
{
v___y_920_ = v___x_935_;
goto v___jp_919_;
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
else
{
lean_del_object(v___x_901_);
goto v___jp_908_;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___lam__0(uint8_t v_b_1007_){
_start:
{
uint8_t v___x_1008_; uint8_t v___x_1009_; 
v___x_1008_ = 32;
v___x_1009_ = lean_uint8_dec_eq(v_b_1007_, v___x_1008_);
if (v___x_1009_ == 0)
{
uint8_t v___x_1010_; 
v___x_1010_ = 1;
return v___x_1010_;
}
else
{
uint8_t v___x_1011_; 
v___x_1011_ = 0;
return v___x_1011_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___lam__0___boxed(lean_object* v_b_1012_){
_start:
{
uint8_t v_b_boxed_1013_; uint8_t v_res_1014_; lean_object* v_r_1015_; 
v_b_boxed_1013_ = lean_unbox(v_b_1012_);
v_res_1014_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___lam__0(v_b_boxed_1013_);
v_r_1015_ = lean_box(v_res_1014_);
return v_r_1015_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI(lean_object* v_limits_1020_, lean_object* v_a_1021_){
_start:
{
lean_object* v___y_1023_; lean_object* v___y_1024_; lean_object* v_maxUriLength_1027_; lean_object* v___f_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v_snd_1031_; lean_object* v_snd_1032_; uint8_t v___x_1033_; 
v_maxUriLength_1027_ = lean_ctor_get(v_limits_1020_, 4);
v___f_1028_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__0));
v___x_1029_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_1021_);
v___x_1030_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1028_, v_maxUriLength_1027_, v___x_1029_, v_a_1021_);
v_snd_1031_ = lean_ctor_get(v___x_1030_, 1);
lean_inc(v_snd_1031_);
v_snd_1032_ = lean_ctor_get(v_snd_1031_, 1);
v___x_1033_ = lean_unbox(v_snd_1032_);
if (v___x_1033_ == 0)
{
lean_object* v_fst_1034_; lean_object* v_fst_1035_; lean_object* v_array_1036_; lean_object* v_idx_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1064_; 
v_fst_1034_ = lean_ctor_get(v___x_1030_, 0);
lean_inc(v_fst_1034_);
lean_dec_ref(v___x_1030_);
v_fst_1035_ = lean_ctor_get(v_snd_1031_, 0);
lean_inc(v_fst_1035_);
lean_dec(v_snd_1031_);
v_array_1036_ = lean_ctor_get(v_a_1021_, 0);
v_idx_1037_ = lean_ctor_get(v_a_1021_, 1);
v_isSharedCheck_1064_ = !lean_is_exclusive(v_a_1021_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1039_ = v_a_1021_;
v_isShared_1040_ = v_isSharedCheck_1064_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_idx_1037_);
lean_inc(v_array_1036_);
lean_dec(v_a_1021_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1064_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v_lower_1042_; lean_object* v_upper_1043_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___y_1061_; uint8_t v___x_1063_; 
v___x_1058_ = lean_nat_add(v_idx_1037_, v_fst_1034_);
lean_dec(v_fst_1034_);
v___x_1059_ = lean_byte_array_size(v_array_1036_);
v___x_1063_ = lean_nat_dec_le(v_idx_1037_, v___x_1029_);
if (v___x_1063_ == 0)
{
v___y_1061_ = v_idx_1037_;
goto v___jp_1060_;
}
else
{
lean_dec(v_idx_1037_);
v___y_1061_ = v___x_1029_;
goto v___jp_1060_;
}
v___jp_1041_:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; uint8_t v___x_1046_; 
v___x_1044_ = l_ByteArray_toByteSlice(v_array_1036_, v_lower_1042_, v_upper_1043_);
v___x_1045_ = l_ByteSlice_size(v___x_1044_);
v___x_1046_ = lean_nat_dec_eq(v___x_1045_, v_maxUriLength_1027_);
lean_dec(v___x_1045_);
if (v___x_1046_ == 0)
{
lean_del_object(v___x_1039_);
v___y_1023_ = v___x_1044_;
v___y_1024_ = v_fst_1035_;
goto v___jp_1022_;
}
else
{
lean_object* v_array_1047_; lean_object* v_idx_1048_; lean_object* v___x_1049_; uint8_t v___x_1050_; 
v_array_1047_ = lean_ctor_get(v_fst_1035_, 0);
v_idx_1048_ = lean_ctor_get(v_fst_1035_, 1);
v___x_1049_ = lean_byte_array_size(v_array_1047_);
v___x_1050_ = lean_nat_dec_lt(v_idx_1048_, v___x_1049_);
if (v___x_1050_ == 0)
{
lean_del_object(v___x_1039_);
v___y_1023_ = v___x_1044_;
v___y_1024_ = v_fst_1035_;
goto v___jp_1022_;
}
else
{
uint8_t v___x_1051_; uint8_t v___x_1052_; uint8_t v___x_1053_; 
v___x_1051_ = lean_byte_array_fget(v_array_1047_, v_idx_1048_);
v___x_1052_ = 32;
v___x_1053_ = lean_uint8_dec_eq(v___x_1051_, v___x_1052_);
if (v___x_1053_ == 0)
{
lean_object* v___x_1054_; lean_object* v___x_1056_; 
lean_dec_ref(v___x_1044_);
v___x_1054_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___closed__2));
if (v_isShared_1040_ == 0)
{
lean_ctor_set_tag(v___x_1039_, 1);
lean_ctor_set(v___x_1039_, 1, v___x_1054_);
lean_ctor_set(v___x_1039_, 0, v_fst_1035_);
v___x_1056_ = v___x_1039_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_fst_1035_);
lean_ctor_set(v_reuseFailAlloc_1057_, 1, v___x_1054_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
else
{
lean_del_object(v___x_1039_);
v___y_1023_ = v___x_1044_;
v___y_1024_ = v_fst_1035_;
goto v___jp_1022_;
}
}
}
}
v___jp_1060_:
{
uint8_t v___x_1062_; 
v___x_1062_ = lean_nat_dec_le(v___x_1058_, v___x_1059_);
if (v___x_1062_ == 0)
{
lean_dec(v___x_1058_);
v_lower_1042_ = v___y_1061_;
v_upper_1043_ = v___x_1059_;
goto v___jp_1041_;
}
else
{
v_lower_1042_ = v___y_1061_;
v_upper_1043_ = v___x_1058_;
goto v___jp_1041_;
}
}
}
}
else
{
lean_object* v_fst_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1073_; 
lean_dec_ref(v___x_1030_);
lean_dec_ref(v_a_1021_);
v_fst_1065_ = lean_ctor_get(v_snd_1031_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v_snd_1031_);
if (v_isSharedCheck_1073_ == 0)
{
lean_object* v_unused_1074_; 
v_unused_1074_ = lean_ctor_get(v_snd_1031_, 1);
lean_dec(v_unused_1074_);
v___x_1067_ = v_snd_1031_;
v_isShared_1068_ = v_isSharedCheck_1073_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_fst_1065_);
lean_dec(v_snd_1031_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1073_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1069_; lean_object* v___x_1071_; 
v___x_1069_ = lean_box(0);
if (v_isShared_1068_ == 0)
{
lean_ctor_set_tag(v___x_1067_, 1);
lean_ctor_set(v___x_1067_, 1, v___x_1069_);
v___x_1071_ = v___x_1067_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_fst_1065_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v___x_1069_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
return v___x_1071_;
}
}
}
v___jp_1022_:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = l_ByteSlice_toByteArray(v___y_1023_);
v___x_1026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___y_1024_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
return v___x_1026_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI___boxed(lean_object* v_limits_1075_, lean_object* v_a_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI(v_limits_1075_, v_a_1076_);
lean_dec_ref(v_limits_1075_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0(lean_object* v___x_1081_, lean_object* v___y_1082_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Std_Http_URI_Parser_parseRequestTarget(v___x_1081_, v___y_1082_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_pos_1084_; lean_object* v_array_1085_; lean_object* v_idx_1086_; lean_object* v___x_1087_; uint8_t v___x_1088_; 
v_pos_1084_ = lean_ctor_get(v___x_1083_, 0);
v_array_1085_ = lean_ctor_get(v_pos_1084_, 0);
v_idx_1086_ = lean_ctor_get(v_pos_1084_, 1);
v___x_1087_ = lean_byte_array_size(v_array_1085_);
v___x_1088_ = lean_nat_dec_lt(v_idx_1086_, v___x_1087_);
if (v___x_1088_ == 0)
{
return v___x_1083_;
}
else
{
lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1096_; 
lean_inc(v_pos_1084_);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1096_ == 0)
{
lean_object* v_unused_1097_; lean_object* v_unused_1098_; 
v_unused_1097_ = lean_ctor_get(v___x_1083_, 1);
lean_dec(v_unused_1097_);
v_unused_1098_ = lean_ctor_get(v___x_1083_, 0);
lean_dec(v_unused_1098_);
v___x_1090_ = v___x_1083_;
v_isShared_1091_ = v_isSharedCheck_1096_;
goto v_resetjp_1089_;
}
else
{
lean_dec(v___x_1083_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1096_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1092_; lean_object* v___x_1094_; 
v___x_1092_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___lam__0___closed__1));
if (v_isShared_1091_ == 0)
{
lean_ctor_set_tag(v___x_1090_, 1);
lean_ctor_set(v___x_1090_, 1, v___x_1092_);
v___x_1094_ = v___x_1090_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_pos_1084_);
lean_ctor_set(v_reuseFailAlloc_1095_, 1, v___x_1092_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
}
else
{
return v___x_1083_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody(lean_object* v_limits_1109_, lean_object* v_a_1110_){
_start:
{
lean_object* v___x_1111_; 
v___x_1111_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseURI(v_limits_1109_, v_a_1110_);
if (lean_obj_tag(v___x_1111_) == 0)
{
lean_object* v_pos_1112_; lean_object* v_res_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1190_; 
v_pos_1112_ = lean_ctor_get(v___x_1111_, 0);
v_res_1113_ = lean_ctor_get(v___x_1111_, 1);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1115_ = v___x_1111_;
v_isShared_1116_ = v_isSharedCheck_1190_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_res_1113_);
lean_inc(v_pos_1112_);
lean_dec(v___x_1111_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1190_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v_array_1117_; lean_object* v_idx_1118_; lean_object* v___x_1119_; uint8_t v___x_1120_; 
v_array_1117_ = lean_ctor_get(v_pos_1112_, 0);
v_idx_1118_ = lean_ctor_get(v_pos_1112_, 1);
v___x_1119_ = lean_byte_array_size(v_array_1117_);
v___x_1120_ = lean_nat_dec_lt(v_idx_1118_, v___x_1119_);
if (v___x_1120_ == 0)
{
lean_object* v___x_1121_; lean_object* v___x_1123_; 
lean_dec(v_res_1113_);
v___x_1121_ = lean_box(0);
if (v_isShared_1116_ == 0)
{
lean_ctor_set_tag(v___x_1115_, 1);
lean_ctor_set(v___x_1115_, 1, v___x_1121_);
v___x_1123_ = v___x_1115_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_pos_1112_);
lean_ctor_set(v_reuseFailAlloc_1124_, 1, v___x_1121_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
else
{
uint8_t v___x_1125_; uint8_t v_got_1126_; uint8_t v___x_1127_; 
v___x_1125_ = 32;
v_got_1126_ = lean_byte_array_fget(v_array_1117_, v_idx_1118_);
v___x_1127_ = lean_uint8_dec_eq(v_got_1126_, v___x_1125_);
if (v___x_1127_ == 0)
{
lean_object* v___x_1128_; lean_object* v___x_1130_; 
lean_dec(v_res_1113_);
v___x_1128_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1));
if (v_isShared_1116_ == 0)
{
lean_ctor_set_tag(v___x_1115_, 1);
lean_ctor_set(v___x_1115_, 1, v___x_1128_);
v___x_1130_ = v___x_1115_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_pos_1112_);
lean_ctor_set(v_reuseFailAlloc_1131_, 1, v___x_1128_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
else
{
lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1187_; 
lean_inc(v_idx_1118_);
lean_inc_ref(v_array_1117_);
v_isSharedCheck_1187_ = !lean_is_exclusive(v_pos_1112_);
if (v_isSharedCheck_1187_ == 0)
{
lean_object* v_unused_1188_; lean_object* v_unused_1189_; 
v_unused_1188_ = lean_ctor_get(v_pos_1112_, 1);
lean_dec(v_unused_1188_);
v_unused_1189_ = lean_ctor_get(v_pos_1112_, 0);
lean_dec(v_unused_1189_);
v___x_1133_ = v_pos_1112_;
v_isShared_1134_ = v_isSharedCheck_1187_;
goto v_resetjp_1132_;
}
else
{
lean_dec(v_pos_1112_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1187_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1135_ = lean_unsigned_to_nat(1u);
v___x_1136_ = lean_nat_add(v_idx_1118_, v___x_1135_);
lean_dec(v_idx_1118_);
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 1, v___x_1136_);
v___x_1138_ = v___x_1133_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v_array_1117_);
lean_ctor_set(v_reuseFailAlloc_1186_, 1, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
lean_object* v___f_1139_; lean_object* v___x_1140_; 
v___f_1139_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___closed__1));
v___x_1140_ = l_Std_Internal_Parsec_ByteArray_Parser_run___redArg(v___f_1139_, v_res_1113_);
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v_a_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1151_; 
v_a_1141_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1151_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1143_ = v___x_1140_;
v_isShared_1144_ = v_isSharedCheck_1151_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_a_1141_);
lean_dec(v___x_1140_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1151_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1146_; 
if (v_isShared_1144_ == 0)
{
lean_ctor_set_tag(v___x_1143_, 1);
v___x_1146_ = v___x_1143_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v_a_1141_);
v___x_1146_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
lean_object* v___x_1148_; 
if (v_isShared_1116_ == 0)
{
lean_ctor_set_tag(v___x_1115_, 1);
lean_ctor_set(v___x_1115_, 1, v___x_1146_);
lean_ctor_set(v___x_1115_, 0, v___x_1138_);
v___x_1148_ = v___x_1115_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v___x_1138_);
lean_ctor_set(v_reuseFailAlloc_1149_, 1, v___x_1146_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
}
}
else
{
lean_object* v_a_1152_; lean_object* v___x_1153_; 
lean_del_object(v___x_1115_);
v_a_1152_ = lean_ctor_get(v___x_1140_, 0);
lean_inc(v_a_1152_);
lean_dec_ref_known(v___x_1140_, 1);
v___x_1153_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber(v___x_1138_);
if (lean_obj_tag(v___x_1153_) == 0)
{
lean_object* v_pos_1154_; lean_object* v_res_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v_pos_1154_ = lean_ctor_get(v___x_1153_, 0);
lean_inc(v_pos_1154_);
v_res_1155_ = lean_ctor_get(v___x_1153_, 1);
lean_inc(v_res_1155_);
lean_dec_ref_known(v___x_1153_, 2);
v___x_1156_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_1157_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_1156_, v_pos_1154_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v_pos_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1166_; 
v_pos_1158_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1166_ == 0)
{
lean_object* v_unused_1167_; 
v_unused_1167_ = lean_ctor_get(v___x_1157_, 1);
lean_dec(v_unused_1167_);
v___x_1160_ = v___x_1157_;
v_isShared_1161_ = v_isSharedCheck_1166_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_pos_1158_);
lean_dec(v___x_1157_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1166_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1162_; lean_object* v___x_1164_; 
v___x_1162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1162_, 0, v_a_1152_);
lean_ctor_set(v___x_1162_, 1, v_res_1155_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 1, v___x_1162_);
v___x_1164_ = v___x_1160_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_pos_1158_);
lean_ctor_set(v_reuseFailAlloc_1165_, 1, v___x_1162_);
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
lean_object* v_pos_1168_; lean_object* v_err_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1176_; 
lean_dec(v_res_1155_);
lean_dec(v_a_1152_);
v_pos_1168_ = lean_ctor_get(v___x_1157_, 0);
v_err_1169_ = lean_ctor_get(v___x_1157_, 1);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1171_ = v___x_1157_;
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_err_1169_);
lean_inc(v_pos_1168_);
lean_dec(v___x_1157_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1174_; 
if (v_isShared_1172_ == 0)
{
v___x_1174_ = v___x_1171_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_pos_1168_);
lean_ctor_set(v_reuseFailAlloc_1175_, 1, v_err_1169_);
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
else
{
lean_object* v_pos_1177_; lean_object* v_err_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1185_; 
lean_dec(v_a_1152_);
v_pos_1177_ = lean_ctor_get(v___x_1153_, 0);
v_err_1178_ = lean_ctor_get(v___x_1153_, 1);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1180_ = v___x_1153_;
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_err_1178_);
lean_inc(v_pos_1177_);
lean_dec(v___x_1153_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1183_; 
if (v_isShared_1181_ == 0)
{
v___x_1183_ = v___x_1180_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_pos_1177_);
lean_ctor_set(v_reuseFailAlloc_1184_, 1, v_err_1178_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
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
lean_object* v_pos_1191_; lean_object* v_err_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
v_pos_1191_ = lean_ctor_get(v___x_1111_, 0);
v_err_1192_ = lean_ctor_get(v___x_1111_, 1);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1111_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_err_1192_);
lean_inc(v_pos_1191_);
lean_dec(v___x_1111_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_pos_1191_);
lean_ctor_set(v_reuseFailAlloc_1198_, 1, v_err_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody___boxed(lean_object* v_limits_1200_, lean_object* v_a_1201_){
_start:
{
lean_object* v_res_1202_; 
v_res_1202_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody(v_limits_1200_, v_a_1201_);
lean_dec_ref(v_limits_1200_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseRequestLine(lean_object* v_limits_1206_, lean_object* v_a_1207_){
_start:
{
lean_object* v___x_1208_; 
v___x_1208_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines(v_limits_1206_, v_a_1207_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_pos_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1299_; 
v_pos_1209_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1299_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1299_ == 0)
{
lean_object* v_unused_1300_; 
v_unused_1300_ = lean_ctor_get(v___x_1208_, 1);
lean_dec(v_unused_1300_);
v___x_1211_ = v___x_1208_;
v_isShared_1212_ = v_isSharedCheck_1299_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_pos_1209_);
lean_dec(v___x_1208_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1299_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1213_; 
v___x_1213_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod(v_pos_1209_);
if (lean_obj_tag(v___x_1213_) == 0)
{
lean_object* v_pos_1214_; lean_object* v_res_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1289_; 
v_pos_1214_ = lean_ctor_get(v___x_1213_, 0);
v_res_1215_ = lean_ctor_get(v___x_1213_, 1);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1217_ = v___x_1213_;
v_isShared_1218_ = v_isSharedCheck_1289_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_res_1215_);
lean_inc(v_pos_1214_);
lean_dec(v___x_1213_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1289_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v_array_1219_; lean_object* v_idx_1220_; lean_object* v___x_1221_; uint8_t v___x_1222_; 
v_array_1219_ = lean_ctor_get(v_pos_1214_, 0);
v_idx_1220_ = lean_ctor_get(v_pos_1214_, 1);
v___x_1221_ = lean_byte_array_size(v_array_1219_);
v___x_1222_ = lean_nat_dec_lt(v_idx_1220_, v___x_1221_);
if (v___x_1222_ == 0)
{
lean_object* v___x_1223_; lean_object* v___x_1225_; 
lean_dec(v_res_1215_);
lean_del_object(v___x_1211_);
v___x_1223_ = lean_box(0);
if (v_isShared_1218_ == 0)
{
lean_ctor_set_tag(v___x_1217_, 1);
lean_ctor_set(v___x_1217_, 1, v___x_1223_);
v___x_1225_ = v___x_1217_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_pos_1214_);
lean_ctor_set(v_reuseFailAlloc_1226_, 1, v___x_1223_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
else
{
uint8_t v___x_1227_; uint8_t v_got_1228_; uint8_t v___x_1229_; 
v___x_1227_ = 32;
v_got_1228_ = lean_byte_array_fget(v_array_1219_, v_idx_1220_);
v___x_1229_ = lean_uint8_dec_eq(v_got_1228_, v___x_1227_);
if (v___x_1229_ == 0)
{
lean_object* v___x_1230_; lean_object* v___x_1232_; 
lean_dec(v_res_1215_);
lean_del_object(v___x_1211_);
v___x_1230_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1));
if (v_isShared_1218_ == 0)
{
lean_ctor_set_tag(v___x_1217_, 1);
lean_ctor_set(v___x_1217_, 1, v___x_1230_);
v___x_1232_ = v___x_1217_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_pos_1214_);
lean_ctor_set(v_reuseFailAlloc_1233_, 1, v___x_1230_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
else
{
lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1286_; 
lean_inc(v_idx_1220_);
lean_inc_ref(v_array_1219_);
v_isSharedCheck_1286_ = !lean_is_exclusive(v_pos_1214_);
if (v_isSharedCheck_1286_ == 0)
{
lean_object* v_unused_1287_; lean_object* v_unused_1288_; 
v_unused_1287_ = lean_ctor_get(v_pos_1214_, 1);
lean_dec(v_unused_1287_);
v_unused_1288_ = lean_ctor_get(v_pos_1214_, 0);
lean_dec(v_unused_1288_);
v___x_1235_ = v_pos_1214_;
v_isShared_1236_ = v_isSharedCheck_1286_;
goto v_resetjp_1234_;
}
else
{
lean_dec(v_pos_1214_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1286_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1240_; 
v___x_1237_ = lean_unsigned_to_nat(1u);
v___x_1238_ = lean_nat_add(v_idx_1220_, v___x_1237_);
lean_dec(v_idx_1220_);
if (v_isShared_1236_ == 0)
{
lean_ctor_set(v___x_1235_, 1, v___x_1238_);
v___x_1240_ = v___x_1235_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v_array_1219_);
lean_ctor_set(v_reuseFailAlloc_1285_, 1, v___x_1238_);
v___x_1240_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
lean_object* v___x_1241_; 
v___x_1241_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody(v_limits_1206_, v___x_1240_);
if (lean_obj_tag(v___x_1241_) == 0)
{
lean_object* v_pos_1242_; lean_object* v_res_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1275_; 
v_pos_1242_ = lean_ctor_get(v___x_1241_, 0);
v_res_1243_ = lean_ctor_get(v___x_1241_, 1);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1245_ = v___x_1241_;
v_isShared_1246_ = v_isSharedCheck_1275_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_res_1243_);
lean_inc(v_pos_1242_);
lean_dec(v___x_1241_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1275_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v_snd_1252_; lean_object* v_fst_1253_; lean_object* v_fst_1254_; lean_object* v_snd_1255_; uint8_t v___x_1256_; 
v_snd_1252_ = lean_ctor_get(v_res_1243_, 1);
lean_inc(v_snd_1252_);
v_fst_1253_ = lean_ctor_get(v_res_1243_, 0);
lean_inc(v_fst_1253_);
lean_dec(v_res_1243_);
v_fst_1254_ = lean_ctor_get(v_snd_1252_, 0);
lean_inc(v_fst_1254_);
v_snd_1255_ = lean_ctor_get(v_snd_1252_, 1);
lean_inc(v_snd_1255_);
lean_dec(v_snd_1252_);
v___x_1256_ = lean_nat_dec_eq(v_fst_1254_, v___x_1237_);
lean_dec(v_fst_1254_);
if (v___x_1256_ == 0)
{
lean_del_object(v___x_1211_);
goto v___jp_1257_;
}
else
{
uint8_t v___x_1267_; 
v___x_1267_ = lean_nat_dec_le(v___x_1237_, v_snd_1255_);
if (v___x_1267_ == 0)
{
lean_del_object(v___x_1211_);
goto v___jp_1257_;
}
else
{
uint8_t v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; uint8_t v___x_1271_; lean_object* v___x_1273_; 
lean_dec(v_snd_1255_);
lean_del_object(v___x_1245_);
lean_del_object(v___x_1217_);
v___x_1268_ = 1;
v___x_1269_ = l_Std_Http_Headers_empty;
v___x_1270_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_1270_, 0, v_fst_1253_);
lean_ctor_set(v___x_1270_, 1, v___x_1269_);
v___x_1271_ = lean_unbox(v_res_1215_);
lean_dec(v_res_1215_);
lean_ctor_set_uint8(v___x_1270_, sizeof(void*)*2, v___x_1271_);
lean_ctor_set_uint8(v___x_1270_, sizeof(void*)*2 + 1, v___x_1268_);
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 1, v___x_1270_);
lean_ctor_set(v___x_1211_, 0, v_pos_1242_);
v___x_1273_ = v___x_1211_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_pos_1242_);
lean_ctor_set(v_reuseFailAlloc_1274_, 1, v___x_1270_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
v___jp_1247_:
{
lean_object* v___x_1248_; lean_object* v___x_1250_; 
v___x_1248_ = ((lean_object*)(l_Std_Http_Protocol_H1_parseRequestLine___closed__1));
if (v_isShared_1246_ == 0)
{
lean_ctor_set_tag(v___x_1245_, 1);
lean_ctor_set(v___x_1245_, 1, v___x_1248_);
v___x_1250_ = v___x_1245_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_pos_1242_);
lean_ctor_set(v_reuseFailAlloc_1251_, 1, v___x_1248_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
return v___x_1250_;
}
}
v___jp_1257_:
{
if (v___x_1256_ == 0)
{
lean_dec(v_snd_1255_);
lean_dec(v_fst_1253_);
lean_del_object(v___x_1217_);
lean_dec(v_res_1215_);
goto v___jp_1247_;
}
else
{
lean_object* v___x_1258_; uint8_t v___x_1259_; 
v___x_1258_ = lean_unsigned_to_nat(0u);
v___x_1259_ = lean_nat_dec_eq(v_snd_1255_, v___x_1258_);
lean_dec(v_snd_1255_);
if (v___x_1259_ == 0)
{
lean_dec(v_fst_1253_);
lean_del_object(v___x_1217_);
lean_dec(v_res_1215_);
goto v___jp_1247_;
}
else
{
uint8_t v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; uint8_t v___x_1263_; lean_object* v___x_1265_; 
lean_del_object(v___x_1245_);
v___x_1260_ = 0;
v___x_1261_ = l_Std_Http_Headers_empty;
v___x_1262_ = lean_alloc_ctor(0, 2, 2);
lean_ctor_set(v___x_1262_, 0, v_fst_1253_);
lean_ctor_set(v___x_1262_, 1, v___x_1261_);
v___x_1263_ = lean_unbox(v_res_1215_);
lean_dec(v_res_1215_);
lean_ctor_set_uint8(v___x_1262_, sizeof(void*)*2, v___x_1263_);
lean_ctor_set_uint8(v___x_1262_, sizeof(void*)*2 + 1, v___x_1260_);
if (v_isShared_1218_ == 0)
{
lean_ctor_set(v___x_1217_, 1, v___x_1262_);
lean_ctor_set(v___x_1217_, 0, v_pos_1242_);
v___x_1265_ = v___x_1217_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_pos_1242_);
lean_ctor_set(v_reuseFailAlloc_1266_, 1, v___x_1262_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
return v___x_1265_;
}
}
}
}
}
}
else
{
lean_object* v_pos_1276_; lean_object* v_err_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1284_; 
lean_del_object(v___x_1217_);
lean_dec(v_res_1215_);
lean_del_object(v___x_1211_);
v_pos_1276_ = lean_ctor_get(v___x_1241_, 0);
v_err_1277_ = lean_ctor_get(v___x_1241_, 1);
v_isSharedCheck_1284_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1279_ = v___x_1241_;
v_isShared_1280_ = v_isSharedCheck_1284_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_err_1277_);
lean_inc(v_pos_1276_);
lean_dec(v___x_1241_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1284_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1282_; 
if (v_isShared_1280_ == 0)
{
v___x_1282_ = v___x_1279_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v_pos_1276_);
lean_ctor_set(v_reuseFailAlloc_1283_, 1, v_err_1277_);
v___x_1282_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
return v___x_1282_;
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
lean_object* v_pos_1290_; lean_object* v_err_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1298_; 
lean_del_object(v___x_1211_);
v_pos_1290_ = lean_ctor_get(v___x_1213_, 0);
v_err_1291_ = lean_ctor_get(v___x_1213_, 1);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1293_ = v___x_1213_;
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_err_1291_);
lean_inc(v_pos_1290_);
lean_dec(v___x_1213_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1296_; 
if (v_isShared_1294_ == 0)
{
v___x_1296_ = v___x_1293_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_pos_1290_);
lean_ctor_set(v_reuseFailAlloc_1297_, 1, v_err_1291_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
}
else
{
lean_object* v_pos_1301_; lean_object* v_err_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1309_; 
v_pos_1301_ = lean_ctor_get(v___x_1208_, 0);
v_err_1302_ = lean_ctor_get(v___x_1208_, 1);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1304_ = v___x_1208_;
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_err_1302_);
lean_inc(v_pos_1301_);
lean_dec(v___x_1208_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1307_; 
if (v_isShared_1305_ == 0)
{
v___x_1307_ = v___x_1304_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_pos_1301_);
lean_ctor_set(v_reuseFailAlloc_1308_, 1, v_err_1302_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseRequestLine___boxed(lean_object* v_limits_1310_, lean_object* v_a_1311_){
_start:
{
lean_object* v_res_1312_; 
v_res_1312_ = l_Std_Http_Protocol_H1_parseRequestLine(v_limits_1310_, v_a_1311_);
lean_dec_ref(v_limits_1310_);
return v_res_1312_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseRequestLineRawVersion(lean_object* v_limits_1313_, lean_object* v_a_1314_){
_start:
{
lean_object* v___x_1315_; 
v___x_1315_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_skipLeadingRequestEmptyLines(v_limits_1313_, v_a_1314_);
if (lean_obj_tag(v___x_1315_) == 0)
{
lean_object* v_pos_1316_; lean_object* v___x_1317_; 
v_pos_1316_ = lean_ctor_get(v___x_1315_, 0);
lean_inc(v_pos_1316_);
lean_dec_ref_known(v___x_1315_, 2);
v___x_1317_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseMethod(v_pos_1316_);
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_object* v_pos_1318_; lean_object* v_res_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1393_; 
v_pos_1318_ = lean_ctor_get(v___x_1317_, 0);
v_res_1319_ = lean_ctor_get(v___x_1317_, 1);
v_isSharedCheck_1393_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1393_ == 0)
{
v___x_1321_ = v___x_1317_;
v_isShared_1322_ = v_isSharedCheck_1393_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_res_1319_);
lean_inc(v_pos_1318_);
lean_dec(v___x_1317_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1393_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v_array_1323_; lean_object* v_idx_1324_; lean_object* v___x_1325_; uint8_t v___x_1326_; 
v_array_1323_ = lean_ctor_get(v_pos_1318_, 0);
v_idx_1324_ = lean_ctor_get(v_pos_1318_, 1);
v___x_1325_ = lean_byte_array_size(v_array_1323_);
v___x_1326_ = lean_nat_dec_lt(v_idx_1324_, v___x_1325_);
if (v___x_1326_ == 0)
{
lean_object* v___x_1327_; lean_object* v___x_1329_; 
lean_dec(v_res_1319_);
v___x_1327_ = lean_box(0);
if (v_isShared_1322_ == 0)
{
lean_ctor_set_tag(v___x_1321_, 1);
lean_ctor_set(v___x_1321_, 1, v___x_1327_);
v___x_1329_ = v___x_1321_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v_pos_1318_);
lean_ctor_set(v_reuseFailAlloc_1330_, 1, v___x_1327_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
}
}
else
{
uint8_t v___x_1331_; uint8_t v_got_1332_; uint8_t v___x_1333_; 
v___x_1331_ = 32;
v_got_1332_ = lean_byte_array_fget(v_array_1323_, v_idx_1324_);
v___x_1333_ = lean_uint8_dec_eq(v_got_1332_, v___x_1331_);
if (v___x_1333_ == 0)
{
lean_object* v___x_1334_; lean_object* v___x_1336_; 
lean_dec(v_res_1319_);
v___x_1334_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1));
if (v_isShared_1322_ == 0)
{
lean_ctor_set_tag(v___x_1321_, 1);
lean_ctor_set(v___x_1321_, 1, v___x_1334_);
v___x_1336_ = v___x_1321_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v_pos_1318_);
lean_ctor_set(v_reuseFailAlloc_1337_, 1, v___x_1334_);
v___x_1336_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
return v___x_1336_;
}
}
else
{
lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1390_; 
lean_inc(v_idx_1324_);
lean_inc_ref(v_array_1323_);
lean_del_object(v___x_1321_);
v_isSharedCheck_1390_ = !lean_is_exclusive(v_pos_1318_);
if (v_isSharedCheck_1390_ == 0)
{
lean_object* v_unused_1391_; lean_object* v_unused_1392_; 
v_unused_1391_ = lean_ctor_get(v_pos_1318_, 1);
lean_dec(v_unused_1391_);
v_unused_1392_ = lean_ctor_get(v_pos_1318_, 0);
lean_dec(v_unused_1392_);
v___x_1339_ = v_pos_1318_;
v_isShared_1340_ = v_isSharedCheck_1390_;
goto v_resetjp_1338_;
}
else
{
lean_dec(v_pos_1318_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1390_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1344_; 
v___x_1341_ = lean_unsigned_to_nat(1u);
v___x_1342_ = lean_nat_add(v_idx_1324_, v___x_1341_);
lean_dec(v_idx_1324_);
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 1, v___x_1342_);
v___x_1344_ = v___x_1339_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_array_1323_);
lean_ctor_set(v_reuseFailAlloc_1389_, 1, v___x_1342_);
v___x_1344_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
lean_object* v___x_1345_; 
v___x_1345_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseRequestLineBody(v_limits_1313_, v___x_1344_);
if (lean_obj_tag(v___x_1345_) == 0)
{
lean_object* v_res_1346_; lean_object* v_snd_1347_; lean_object* v_pos_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1378_; 
v_res_1346_ = lean_ctor_get(v___x_1345_, 1);
lean_inc(v_res_1346_);
v_snd_1347_ = lean_ctor_get(v_res_1346_, 1);
lean_inc(v_snd_1347_);
v_pos_1348_ = lean_ctor_get(v___x_1345_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v___x_1345_);
if (v_isSharedCheck_1378_ == 0)
{
lean_object* v_unused_1379_; 
v_unused_1379_ = lean_ctor_get(v___x_1345_, 1);
lean_dec(v_unused_1379_);
v___x_1350_ = v___x_1345_;
v_isShared_1351_ = v_isSharedCheck_1378_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_pos_1348_);
lean_dec(v___x_1345_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1378_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v_fst_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1376_; 
v_fst_1352_ = lean_ctor_get(v_res_1346_, 0);
v_isSharedCheck_1376_ = !lean_is_exclusive(v_res_1346_);
if (v_isSharedCheck_1376_ == 0)
{
lean_object* v_unused_1377_; 
v_unused_1377_ = lean_ctor_get(v_res_1346_, 1);
lean_dec(v_unused_1377_);
v___x_1354_ = v_res_1346_;
v_isShared_1355_ = v_isSharedCheck_1376_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_fst_1352_);
lean_dec(v_res_1346_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1376_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v_fst_1356_; lean_object* v_snd_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1375_; 
v_fst_1356_ = lean_ctor_get(v_snd_1347_, 0);
v_snd_1357_ = lean_ctor_get(v_snd_1347_, 1);
v_isSharedCheck_1375_ = !lean_is_exclusive(v_snd_1347_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1359_ = v_snd_1347_;
v_isShared_1360_ = v_isSharedCheck_1375_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_snd_1357_);
lean_inc(v_fst_1356_);
lean_dec(v_snd_1347_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1375_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___y_1362_; uint8_t v___x_1373_; 
v___x_1373_ = lean_nat_dec_eq(v_fst_1356_, v___x_1341_);
if (v___x_1373_ == 0)
{
v___y_1362_ = v_snd_1357_;
goto v___jp_1361_;
}
else
{
uint8_t v___x_1374_; 
v___x_1374_ = lean_nat_dec_le(v_snd_1357_, v___x_1341_);
if (v___x_1374_ == 0)
{
lean_dec(v_snd_1357_);
v___y_1362_ = v___x_1341_;
goto v___jp_1361_;
}
else
{
v___y_1362_ = v_snd_1357_;
goto v___jp_1361_;
}
}
v___jp_1361_:
{
lean_object* v___x_1363_; lean_object* v___x_1365_; 
v___x_1363_ = l_Std_Http_Version_ofNumber_x3f(v_fst_1356_, v___y_1362_);
lean_dec(v___y_1362_);
lean_dec(v_fst_1356_);
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 1, v___x_1363_);
lean_ctor_set(v___x_1359_, 0, v_fst_1352_);
v___x_1365_ = v___x_1359_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_fst_1352_);
lean_ctor_set(v_reuseFailAlloc_1372_, 1, v___x_1363_);
v___x_1365_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
lean_object* v___x_1367_; 
if (v_isShared_1355_ == 0)
{
lean_ctor_set(v___x_1354_, 1, v___x_1365_);
lean_ctor_set(v___x_1354_, 0, v_res_1319_);
v___x_1367_ = v___x_1354_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_res_1319_);
lean_ctor_set(v_reuseFailAlloc_1371_, 1, v___x_1365_);
v___x_1367_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
lean_object* v___x_1369_; 
if (v_isShared_1351_ == 0)
{
lean_ctor_set(v___x_1350_, 1, v___x_1367_);
v___x_1369_ = v___x_1350_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_pos_1348_);
lean_ctor_set(v_reuseFailAlloc_1370_, 1, v___x_1367_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
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
lean_object* v_pos_1380_; lean_object* v_err_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_dec(v_res_1319_);
v_pos_1380_ = lean_ctor_get(v___x_1345_, 0);
v_err_1381_ = lean_ctor_get(v___x_1345_, 1);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1345_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1345_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_err_1381_);
lean_inc(v_pos_1380_);
lean_dec(v___x_1345_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_pos_1380_);
lean_ctor_set(v_reuseFailAlloc_1387_, 1, v_err_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
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
lean_object* v_pos_1394_; lean_object* v_err_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1402_; 
v_pos_1394_ = lean_ctor_get(v___x_1317_, 0);
v_err_1395_ = lean_ctor_get(v___x_1317_, 1);
v_isSharedCheck_1402_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1397_ = v___x_1317_;
v_isShared_1398_ = v_isSharedCheck_1402_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_err_1395_);
lean_inc(v_pos_1394_);
lean_dec(v___x_1317_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1402_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v___x_1400_; 
if (v_isShared_1398_ == 0)
{
v___x_1400_ = v___x_1397_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v_pos_1394_);
lean_ctor_set(v_reuseFailAlloc_1401_, 1, v_err_1395_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
}
else
{
lean_object* v_pos_1403_; lean_object* v_err_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1411_; 
v_pos_1403_ = lean_ctor_get(v___x_1315_, 0);
v_err_1404_ = lean_ctor_get(v___x_1315_, 1);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1406_ = v___x_1315_;
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_err_1404_);
lean_inc(v_pos_1403_);
lean_dec(v___x_1315_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1407_ == 0)
{
v___x_1409_ = v___x_1406_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_pos_1403_);
lean_ctor_set(v_reuseFailAlloc_1410_, 1, v_err_1404_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseRequestLineRawVersion___boxed(lean_object* v_limits_1412_, lean_object* v_a_1413_){
_start:
{
lean_object* v_res_1414_; 
v_res_1414_ = l_Std_Http_Protocol_H1_parseRequestLineRawVersion(v_limits_1412_, v_a_1413_);
lean_dec_ref(v_limits_1412_);
return v_res_1414_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__1(uint8_t v___y_1415_){
_start:
{
uint32_t v___x_1416_; uint32_t v___x_1424_; uint8_t v___x_1425_; 
v___x_1416_ = lean_uint8_to_uint32(v___y_1415_);
v___x_1424_ = 33;
v___x_1425_ = lean_uint32_dec_le(v___x_1424_, v___x_1416_);
if (v___x_1425_ == 0)
{
goto v___jp_1417_;
}
else
{
uint32_t v___x_1426_; uint8_t v___x_1427_; 
v___x_1426_ = 126;
v___x_1427_ = lean_uint32_dec_le(v___x_1416_, v___x_1426_);
if (v___x_1427_ == 0)
{
goto v___jp_1417_;
}
else
{
return v___x_1427_;
}
}
v___jp_1417_:
{
uint32_t v___x_1418_; uint8_t v___x_1419_; 
v___x_1418_ = 128;
v___x_1419_ = lean_uint32_dec_le(v___x_1418_, v___x_1416_);
if (v___x_1419_ == 0)
{
uint32_t v___x_1420_; uint8_t v___x_1421_; 
v___x_1420_ = 32;
v___x_1421_ = lean_uint32_dec_eq(v___x_1416_, v___x_1420_);
if (v___x_1421_ == 0)
{
uint32_t v___x_1422_; uint8_t v___x_1423_; 
v___x_1422_ = 9;
v___x_1423_ = lean_uint32_dec_eq(v___x_1416_, v___x_1422_);
return v___x_1423_;
}
else
{
return v___x_1421_;
}
}
else
{
return v___x_1419_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__1___boxed(lean_object* v___y_1428_){
_start:
{
uint8_t v___y_3635__boxed_1429_; uint8_t v_res_1430_; lean_object* v_r_1431_; 
v___y_3635__boxed_1429_ = lean_unbox(v___y_1428_);
v_res_1430_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__1(v___y_3635__boxed_1429_);
v_r_1431_ = lean_box(v_res_1430_);
return v_r_1431_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__0(uint8_t v___y_1432_){
_start:
{
uint32_t v___x_1433_; uint32_t v___x_1434_; uint8_t v___x_1435_; 
v___x_1433_ = lean_uint8_to_uint32(v___y_1432_);
v___x_1434_ = 32;
v___x_1435_ = lean_uint32_dec_eq(v___x_1433_, v___x_1434_);
if (v___x_1435_ == 0)
{
uint32_t v___x_1436_; uint8_t v___x_1437_; 
v___x_1436_ = 9;
v___x_1437_ = lean_uint32_dec_eq(v___x_1433_, v___x_1436_);
return v___x_1437_;
}
else
{
return v___x_1435_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__0___boxed(lean_object* v___y_1438_){
_start:
{
uint8_t v___y_3662__boxed_1439_; uint8_t v_res_1440_; lean_object* v_r_1441_; 
v___y_3662__boxed_1439_ = lean_unbox(v___y_1438_);
v_res_1440_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___lam__0(v___y_3662__boxed_1439_);
v_r_1441_ = lean_box(v_res_1440_);
return v_r_1441_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine_spec__0(lean_object* v_s_1442_, lean_object* v_pos_1443_){
_start:
{
lean_object* v_str_1444_; lean_object* v_startInclusive_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; uint8_t v_decide_1449_; 
v_str_1444_ = lean_ctor_get(v_s_1442_, 0);
v_startInclusive_1445_ = lean_ctor_get(v_s_1442_, 1);
v___x_1446_ = lean_nat_add(v_startInclusive_1445_, v_pos_1443_);
v___x_1447_ = lean_nat_sub(v___x_1446_, v_startInclusive_1445_);
v___x_1448_ = lean_unsigned_to_nat(0u);
v_decide_1449_ = lean_nat_dec_eq(v___x_1447_, v___x_1448_);
if (v_decide_1449_ == 0)
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1458_; uint32_t v___x_1459_; uint32_t v___x_1460_; uint8_t v___x_1461_; 
lean_inc(v_startInclusive_1445_);
lean_inc_ref(v_str_1444_);
v___x_1450_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1450_, 0, v_str_1444_);
lean_ctor_set(v___x_1450_, 1, v_startInclusive_1445_);
lean_ctor_set(v___x_1450_, 2, v___x_1446_);
v___x_1451_ = lean_unsigned_to_nat(1u);
v___x_1452_ = lean_nat_sub(v___x_1447_, v___x_1451_);
lean_dec(v___x_1447_);
v___x_1453_ = l_String_Slice_posLE(v___x_1450_, v___x_1452_);
lean_dec_ref_known(v___x_1450_, 3);
v___x_1458_ = lean_nat_add(v_startInclusive_1445_, v___x_1453_);
v___x_1459_ = lean_string_utf8_get_fast(v_str_1444_, v___x_1458_);
lean_dec(v___x_1458_);
v___x_1460_ = 32;
v___x_1461_ = lean_uint32_dec_eq(v___x_1459_, v___x_1460_);
if (v___x_1461_ == 0)
{
uint32_t v___x_1462_; uint8_t v___x_1463_; 
v___x_1462_ = 9;
v___x_1463_ = lean_uint32_dec_eq(v___x_1459_, v___x_1462_);
if (v___x_1463_ == 0)
{
uint32_t v___x_1464_; uint8_t v___x_1465_; 
v___x_1464_ = 13;
v___x_1465_ = lean_uint32_dec_eq(v___x_1459_, v___x_1464_);
if (v___x_1465_ == 0)
{
uint32_t v___x_1466_; uint8_t v___x_1467_; 
v___x_1466_ = 10;
v___x_1467_ = lean_uint32_dec_eq(v___x_1459_, v___x_1466_);
if (v___x_1467_ == 0)
{
lean_dec(v___x_1453_);
return v_pos_1443_;
}
else
{
goto v___jp_1454_;
}
}
else
{
goto v___jp_1454_;
}
}
else
{
goto v___jp_1454_;
}
}
else
{
goto v___jp_1454_;
}
v___jp_1454_:
{
lean_object* v___x_1455_; uint8_t v___x_1456_; 
v___x_1455_ = lean_nat_add(v___x_1453_, v___x_1451_);
v___x_1456_ = lean_nat_dec_le(v___x_1455_, v_pos_1443_);
lean_dec(v___x_1455_);
if (v___x_1456_ == 0)
{
lean_dec(v___x_1453_);
return v_pos_1443_;
}
else
{
lean_dec(v_pos_1443_);
v_pos_1443_ = v___x_1453_;
goto _start;
}
}
}
else
{
lean_dec(v___x_1447_);
lean_dec(v___x_1446_);
return v_pos_1443_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine_spec__0___boxed(lean_object* v_s_1468_, lean_object* v_pos_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine_spec__0(v_s_1468_, v_pos_1469_);
lean_dec_ref(v_s_1468_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine(lean_object* v_limits_1477_, lean_object* v_a_1478_){
_start:
{
lean_object* v_pos_1480_; lean_object* v_pos_1484_; lean_object* v_maxHeaderNameLength_1487_; lean_object* v_maxHeaderValueLength_1488_; lean_object* v_maxSpaceSequence_1489_; lean_object* v___f_1490_; lean_object* v___x_1491_; lean_object* v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1495_; lean_object* v___y_1506_; lean_object* v___y_1507_; lean_object* v___y_1508_; lean_object* v___y_1527_; lean_object* v_pos_1528_; lean_object* v_res_1529_; lean_object* v___x_1535_; lean_object* v_snd_1536_; lean_object* v_snd_1537_; uint8_t v___x_1538_; 
v_maxHeaderNameLength_1487_ = lean_ctor_get(v_limits_1477_, 6);
v_maxHeaderValueLength_1488_ = lean_ctor_get(v_limits_1477_, 7);
v_maxSpaceSequence_1489_ = lean_ctor_get(v_limits_1477_, 8);
v___f_1490_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__0));
v___x_1491_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_1478_);
v___x_1535_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1490_, v_maxHeaderNameLength_1487_, v___x_1491_, v_a_1478_);
v_snd_1536_ = lean_ctor_get(v___x_1535_, 1);
lean_inc(v_snd_1536_);
v_snd_1537_ = lean_ctor_get(v_snd_1536_, 1);
v___x_1538_ = lean_unbox(v_snd_1537_);
if (v___x_1538_ == 0)
{
lean_object* v_fst_1539_; lean_object* v_fst_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1698_; 
v_fst_1539_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_fst_1539_);
lean_dec_ref(v___x_1535_);
v_fst_1540_ = lean_ctor_get(v_snd_1536_, 0);
v_isSharedCheck_1698_ = !lean_is_exclusive(v_snd_1536_);
if (v_isSharedCheck_1698_ == 0)
{
lean_object* v_unused_1699_; 
v_unused_1699_ = lean_ctor_get(v_snd_1536_, 1);
lean_dec(v_unused_1699_);
v___x_1542_ = v_snd_1536_;
v_isShared_1543_ = v_isSharedCheck_1698_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_fst_1540_);
lean_dec(v_snd_1536_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1698_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
uint8_t v___x_1544_; 
v___x_1544_ = lean_nat_dec_eq(v_fst_1539_, v___x_1491_);
if (v___x_1544_ == 0)
{
lean_object* v_array_1545_; lean_object* v_idx_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1693_; 
v_array_1545_ = lean_ctor_get(v_a_1478_, 0);
v_idx_1546_ = lean_ctor_get(v_a_1478_, 1);
v_isSharedCheck_1693_ = !lean_is_exclusive(v_a_1478_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1548_ = v_a_1478_;
v_isShared_1549_ = v_isSharedCheck_1693_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_idx_1546_);
lean_inc(v_array_1545_);
lean_dec(v_a_1478_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1693_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___f_1550_; lean_object* v___f_1551_; lean_object* v___y_1553_; lean_object* v_pos_1554_; lean_object* v_res_1555_; lean_object* v___y_1582_; lean_object* v___y_1583_; lean_object* v___y_1584_; lean_object* v_lower_1585_; lean_object* v_upper_1586_; lean_object* v___y_1590_; lean_object* v___y_1591_; lean_object* v___y_1592_; lean_object* v___y_1593_; lean_object* v___y_1594_; lean_object* v___y_1595_; lean_object* v___y_1598_; lean_object* v_pos_1599_; lean_object* v___y_1626_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___y_1684_; uint8_t v___x_1692_; 
v___f_1550_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__1));
v___f_1551_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__2));
v___x_1681_ = lean_nat_add(v_idx_1546_, v_fst_1539_);
lean_dec(v_fst_1539_);
v___x_1682_ = lean_byte_array_size(v_array_1545_);
v___x_1692_ = lean_nat_dec_le(v_idx_1546_, v___x_1491_);
if (v___x_1692_ == 0)
{
v___y_1684_ = v_idx_1546_;
goto v___jp_1683_;
}
else
{
lean_dec(v_idx_1546_);
v___y_1684_ = v___x_1491_;
goto v___jp_1683_;
}
v___jp_1552_:
{
lean_object* v___x_1556_; lean_object* v_snd_1557_; lean_object* v_snd_1558_; uint8_t v___x_1559_; 
v___x_1556_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1551_, v_maxSpaceSequence_1489_, v___x_1491_, v_pos_1554_);
v_snd_1557_ = lean_ctor_get(v___x_1556_, 1);
lean_inc(v_snd_1557_);
lean_dec_ref(v___x_1556_);
v_snd_1558_ = lean_ctor_get(v_snd_1557_, 1);
v___x_1559_ = lean_unbox(v_snd_1558_);
if (v___x_1559_ == 0)
{
lean_object* v_fst_1560_; lean_object* v_array_1561_; lean_object* v_idx_1562_; lean_object* v___x_1563_; uint8_t v___x_1564_; 
v_fst_1560_ = lean_ctor_get(v_snd_1557_, 0);
lean_inc(v_fst_1560_);
lean_dec(v_snd_1557_);
v_array_1561_ = lean_ctor_get(v_fst_1560_, 0);
v_idx_1562_ = lean_ctor_get(v_fst_1560_, 1);
v___x_1563_ = lean_byte_array_size(v_array_1561_);
v___x_1564_ = lean_nat_dec_lt(v_idx_1562_, v___x_1563_);
if (v___x_1564_ == 0)
{
v___y_1527_ = v___y_1553_;
v_pos_1528_ = v_fst_1560_;
v_res_1529_ = v_res_1555_;
goto v___jp_1526_;
}
else
{
uint8_t v___x_1565_; uint32_t v___x_1566_; uint32_t v___x_1567_; uint8_t v___x_1568_; 
v___x_1565_ = lean_byte_array_fget(v_array_1561_, v_idx_1562_);
v___x_1566_ = lean_uint8_to_uint32(v___x_1565_);
v___x_1567_ = 32;
v___x_1568_ = lean_uint32_dec_eq(v___x_1566_, v___x_1567_);
if (v___x_1568_ == 0)
{
uint32_t v___x_1569_; uint8_t v___x_1570_; 
v___x_1569_ = 9;
v___x_1570_ = lean_uint32_dec_eq(v___x_1566_, v___x_1569_);
if (v___x_1570_ == 0)
{
v___y_1527_ = v___y_1553_;
v_pos_1528_ = v_fst_1560_;
v_res_1529_ = v_res_1555_;
goto v___jp_1526_;
}
else
{
lean_dec(v_res_1555_);
lean_dec_ref(v___y_1553_);
v_pos_1480_ = v_fst_1560_;
goto v___jp_1479_;
}
}
else
{
lean_dec(v_res_1555_);
lean_dec_ref(v___y_1553_);
v_pos_1480_ = v_fst_1560_;
goto v___jp_1479_;
}
}
}
else
{
lean_object* v_fst_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1579_; 
lean_dec(v_res_1555_);
lean_dec_ref(v___y_1553_);
v_fst_1571_ = lean_ctor_get(v_snd_1557_, 0);
v_isSharedCheck_1579_ = !lean_is_exclusive(v_snd_1557_);
if (v_isSharedCheck_1579_ == 0)
{
lean_object* v_unused_1580_; 
v_unused_1580_ = lean_ctor_get(v_snd_1557_, 1);
lean_dec(v_unused_1580_);
v___x_1573_ = v_snd_1557_;
v_isShared_1574_ = v_isSharedCheck_1579_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_fst_1571_);
lean_dec(v_snd_1557_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1579_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v___x_1575_; lean_object* v___x_1577_; 
v___x_1575_ = lean_box(0);
if (v_isShared_1574_ == 0)
{
lean_ctor_set_tag(v___x_1573_, 1);
lean_ctor_set(v___x_1573_, 1, v___x_1575_);
v___x_1577_ = v___x_1573_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v_fst_1571_);
lean_ctor_set(v_reuseFailAlloc_1578_, 1, v___x_1575_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
}
}
v___jp_1581_:
{
lean_object* v___x_1587_; lean_object* v___x_1588_; 
v___x_1587_ = l_ByteArray_toByteSlice(v___y_1582_, v_lower_1585_, v_upper_1586_);
v___x_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1588_, 0, v___x_1587_);
v___y_1553_ = v___y_1584_;
v_pos_1554_ = v___y_1583_;
v_res_1555_ = v___x_1588_;
goto v___jp_1552_;
}
v___jp_1589_:
{
uint8_t v___x_1596_; 
v___x_1596_ = lean_nat_dec_le(v___y_1590_, v___y_1591_);
if (v___x_1596_ == 0)
{
lean_dec(v___y_1590_);
v___y_1582_ = v___y_1592_;
v___y_1583_ = v___y_1593_;
v___y_1584_ = v___y_1594_;
v_lower_1585_ = v___y_1595_;
v_upper_1586_ = v___y_1591_;
goto v___jp_1581_;
}
else
{
lean_dec(v___y_1591_);
v___y_1582_ = v___y_1592_;
v___y_1583_ = v___y_1593_;
v___y_1584_ = v___y_1594_;
v_lower_1585_ = v___y_1595_;
v_upper_1586_ = v___y_1590_;
goto v___jp_1581_;
}
}
v___jp_1597_:
{
lean_object* v___x_1600_; lean_object* v_snd_1601_; lean_object* v_snd_1602_; uint8_t v___x_1603_; 
lean_inc_ref(v_pos_1599_);
v___x_1600_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1550_, v_maxHeaderValueLength_1488_, v___x_1491_, v_pos_1599_);
v_snd_1601_ = lean_ctor_get(v___x_1600_, 1);
lean_inc(v_snd_1601_);
v_snd_1602_ = lean_ctor_get(v_snd_1601_, 1);
v___x_1603_ = lean_unbox(v_snd_1602_);
if (v___x_1603_ == 0)
{
lean_object* v_fst_1604_; lean_object* v_fst_1605_; lean_object* v_array_1606_; lean_object* v_idx_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; uint8_t v___x_1610_; 
v_fst_1604_ = lean_ctor_get(v___x_1600_, 0);
lean_inc(v_fst_1604_);
lean_dec_ref(v___x_1600_);
v_fst_1605_ = lean_ctor_get(v_snd_1601_, 0);
lean_inc(v_fst_1605_);
lean_dec(v_snd_1601_);
v_array_1606_ = lean_ctor_get(v_pos_1599_, 0);
lean_inc_ref(v_array_1606_);
v_idx_1607_ = lean_ctor_get(v_pos_1599_, 1);
lean_inc(v_idx_1607_);
lean_dec_ref(v_pos_1599_);
v___x_1608_ = lean_nat_add(v_idx_1607_, v_fst_1604_);
lean_dec(v_fst_1604_);
v___x_1609_ = lean_byte_array_size(v_array_1606_);
v___x_1610_ = lean_nat_dec_le(v_idx_1607_, v___x_1491_);
if (v___x_1610_ == 0)
{
v___y_1590_ = v___x_1608_;
v___y_1591_ = v___x_1609_;
v___y_1592_ = v_array_1606_;
v___y_1593_ = v_fst_1605_;
v___y_1594_ = v___y_1598_;
v___y_1595_ = v_idx_1607_;
goto v___jp_1589_;
}
else
{
lean_dec(v_idx_1607_);
v___y_1590_ = v___x_1608_;
v___y_1591_ = v___x_1609_;
v___y_1592_ = v_array_1606_;
v___y_1593_ = v_fst_1605_;
v___y_1594_ = v___y_1598_;
v___y_1595_ = v___x_1491_;
goto v___jp_1589_;
}
}
else
{
lean_object* v_fst_1611_; lean_object* v_idx_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1623_; 
lean_dec_ref(v___x_1600_);
v_fst_1611_ = lean_ctor_get(v_snd_1601_, 0);
lean_inc(v_fst_1611_);
lean_dec(v_snd_1601_);
v_idx_1612_ = lean_ctor_get(v_pos_1599_, 1);
v_isSharedCheck_1623_ = !lean_is_exclusive(v_pos_1599_);
if (v_isSharedCheck_1623_ == 0)
{
lean_object* v_unused_1624_; 
v_unused_1624_ = lean_ctor_get(v_pos_1599_, 0);
lean_dec(v_unused_1624_);
v___x_1614_ = v_pos_1599_;
v_isShared_1615_ = v_isSharedCheck_1623_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_idx_1612_);
lean_dec(v_pos_1599_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1623_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v_idx_1616_; uint8_t v___x_1617_; 
v_idx_1616_ = lean_ctor_get(v_fst_1611_, 1);
v___x_1617_ = lean_nat_dec_eq(v_idx_1612_, v_idx_1616_);
lean_dec(v_idx_1612_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1618_; lean_object* v___x_1620_; 
lean_dec_ref(v___y_1598_);
v___x_1618_ = lean_box(0);
if (v_isShared_1615_ == 0)
{
lean_ctor_set_tag(v___x_1614_, 1);
lean_ctor_set(v___x_1614_, 1, v___x_1618_);
lean_ctor_set(v___x_1614_, 0, v_fst_1611_);
v___x_1620_ = v___x_1614_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_fst_1611_);
lean_ctor_set(v_reuseFailAlloc_1621_, 1, v___x_1618_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
return v___x_1620_;
}
}
else
{
lean_object* v___x_1622_; 
lean_del_object(v___x_1614_);
v___x_1622_ = lean_box(0);
v___y_1553_ = v___y_1598_;
v_pos_1554_ = v_fst_1611_;
v_res_1555_ = v___x_1622_;
goto v___jp_1552_;
}
}
}
}
v___jp_1625_:
{
lean_object* v_array_1627_; lean_object* v_idx_1628_; lean_object* v___x_1629_; uint8_t v___x_1630_; 
v_array_1627_ = lean_ctor_get(v_fst_1540_, 0);
v_idx_1628_ = lean_ctor_get(v_fst_1540_, 1);
v___x_1629_ = lean_byte_array_size(v_array_1627_);
v___x_1630_ = lean_nat_dec_lt(v_idx_1628_, v___x_1629_);
if (v___x_1630_ == 0)
{
lean_object* v___x_1631_; lean_object* v___x_1633_; 
lean_dec_ref(v___y_1626_);
lean_dec_ref(v_array_1545_);
v___x_1631_ = lean_box(0);
if (v_isShared_1549_ == 0)
{
lean_ctor_set_tag(v___x_1548_, 1);
lean_ctor_set(v___x_1548_, 1, v___x_1631_);
lean_ctor_set(v___x_1548_, 0, v_fst_1540_);
v___x_1633_ = v___x_1548_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_fst_1540_);
lean_ctor_set(v_reuseFailAlloc_1634_, 1, v___x_1631_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
else
{
uint8_t v___x_1635_; uint8_t v_got_1636_; uint8_t v___x_1637_; 
v___x_1635_ = 58;
v_got_1636_ = lean_byte_array_fget(v_array_1627_, v_idx_1628_);
v___x_1637_ = lean_uint8_dec_eq(v_got_1636_, v___x_1635_);
if (v___x_1637_ == 0)
{
lean_object* v___x_1638_; lean_object* v___x_1640_; 
lean_dec_ref(v___y_1626_);
lean_dec_ref(v_array_1545_);
v___x_1638_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__4));
if (v_isShared_1549_ == 0)
{
lean_ctor_set_tag(v___x_1548_, 1);
lean_ctor_set(v___x_1548_, 1, v___x_1638_);
lean_ctor_set(v___x_1548_, 0, v_fst_1540_);
v___x_1640_ = v___x_1548_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v_fst_1540_);
lean_ctor_set(v_reuseFailAlloc_1641_, 1, v___x_1638_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
else
{
lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1678_; 
lean_inc(v_idx_1628_);
lean_inc_ref(v_array_1627_);
lean_del_object(v___x_1548_);
v_isSharedCheck_1678_ = !lean_is_exclusive(v_fst_1540_);
if (v_isSharedCheck_1678_ == 0)
{
lean_object* v_unused_1679_; lean_object* v_unused_1680_; 
v_unused_1679_ = lean_ctor_get(v_fst_1540_, 1);
lean_dec(v_unused_1679_);
v_unused_1680_ = lean_ctor_get(v_fst_1540_, 0);
lean_dec(v_unused_1680_);
v___x_1643_ = v_fst_1540_;
v_isShared_1644_ = v_isSharedCheck_1678_;
goto v_resetjp_1642_;
}
else
{
lean_dec(v_fst_1540_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1678_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1648_; 
v___x_1645_ = lean_unsigned_to_nat(1u);
v___x_1646_ = lean_nat_add(v_idx_1628_, v___x_1645_);
lean_dec(v_idx_1628_);
if (v_isShared_1644_ == 0)
{
lean_ctor_set(v___x_1643_, 1, v___x_1646_);
v___x_1648_ = v___x_1643_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_array_1627_);
lean_ctor_set(v_reuseFailAlloc_1677_, 1, v___x_1646_);
v___x_1648_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
lean_object* v___x_1649_; lean_object* v_snd_1650_; lean_object* v_snd_1651_; uint8_t v___x_1652_; 
v___x_1649_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_1551_, v_maxSpaceSequence_1489_, v___x_1491_, v___x_1648_);
v_snd_1650_ = lean_ctor_get(v___x_1649_, 1);
lean_inc(v_snd_1650_);
lean_dec_ref(v___x_1649_);
v_snd_1651_ = lean_ctor_get(v_snd_1650_, 1);
v___x_1652_ = lean_unbox(v_snd_1651_);
if (v___x_1652_ == 0)
{
lean_object* v_fst_1653_; lean_object* v_array_1654_; lean_object* v_idx_1655_; lean_object* v_lower_1656_; lean_object* v_upper_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; uint8_t v___x_1660_; 
v_fst_1653_ = lean_ctor_get(v_snd_1650_, 0);
lean_inc(v_fst_1653_);
lean_dec(v_snd_1650_);
v_array_1654_ = lean_ctor_get(v_fst_1653_, 0);
v_idx_1655_ = lean_ctor_get(v_fst_1653_, 1);
v_lower_1656_ = lean_ctor_get(v___y_1626_, 0);
lean_inc(v_lower_1656_);
v_upper_1657_ = lean_ctor_get(v___y_1626_, 1);
lean_inc(v_upper_1657_);
lean_dec_ref(v___y_1626_);
v___x_1658_ = l_ByteArray_toByteSlice(v_array_1545_, v_lower_1656_, v_upper_1657_);
v___x_1659_ = lean_byte_array_size(v_array_1654_);
v___x_1660_ = lean_nat_dec_lt(v_idx_1655_, v___x_1659_);
if (v___x_1660_ == 0)
{
v___y_1598_ = v___x_1658_;
v_pos_1599_ = v_fst_1653_;
goto v___jp_1597_;
}
else
{
uint8_t v___x_1661_; uint32_t v___x_1662_; uint32_t v___x_1663_; uint8_t v___x_1664_; 
v___x_1661_ = lean_byte_array_fget(v_array_1654_, v_idx_1655_);
v___x_1662_ = lean_uint8_to_uint32(v___x_1661_);
v___x_1663_ = 32;
v___x_1664_ = lean_uint32_dec_eq(v___x_1662_, v___x_1663_);
if (v___x_1664_ == 0)
{
uint32_t v___x_1665_; uint8_t v___x_1666_; 
v___x_1665_ = 9;
v___x_1666_ = lean_uint32_dec_eq(v___x_1662_, v___x_1665_);
if (v___x_1666_ == 0)
{
v___y_1598_ = v___x_1658_;
v_pos_1599_ = v_fst_1653_;
goto v___jp_1597_;
}
else
{
lean_dec_ref(v___x_1658_);
v_pos_1484_ = v_fst_1653_;
goto v___jp_1483_;
}
}
else
{
lean_dec_ref(v___x_1658_);
v_pos_1484_ = v_fst_1653_;
goto v___jp_1483_;
}
}
}
else
{
lean_object* v_fst_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1675_; 
lean_dec_ref(v___y_1626_);
lean_dec_ref(v_array_1545_);
v_fst_1667_ = lean_ctor_get(v_snd_1650_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v_snd_1650_);
if (v_isSharedCheck_1675_ == 0)
{
lean_object* v_unused_1676_; 
v_unused_1676_ = lean_ctor_get(v_snd_1650_, 1);
lean_dec(v_unused_1676_);
v___x_1669_ = v_snd_1650_;
v_isShared_1670_ = v_isSharedCheck_1675_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_fst_1667_);
lean_dec(v_snd_1650_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1675_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1671_; lean_object* v___x_1673_; 
v___x_1671_ = lean_box(0);
if (v_isShared_1670_ == 0)
{
lean_ctor_set_tag(v___x_1669_, 1);
lean_ctor_set(v___x_1669_, 1, v___x_1671_);
v___x_1673_ = v___x_1669_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_fst_1667_);
lean_ctor_set(v_reuseFailAlloc_1674_, 1, v___x_1671_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
}
}
}
}
}
v___jp_1683_:
{
uint8_t v___x_1685_; 
v___x_1685_ = lean_nat_dec_le(v___x_1681_, v___x_1682_);
if (v___x_1685_ == 0)
{
lean_object* v___x_1687_; 
lean_dec(v___x_1681_);
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 1, v___x_1682_);
lean_ctor_set(v___x_1542_, 0, v___y_1684_);
v___x_1687_ = v___x_1542_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v___y_1684_);
lean_ctor_set(v_reuseFailAlloc_1688_, 1, v___x_1682_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
v___y_1626_ = v___x_1687_;
goto v___jp_1625_;
}
}
else
{
lean_object* v___x_1690_; 
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 1, v___x_1681_);
lean_ctor_set(v___x_1542_, 0, v___y_1684_);
v___x_1690_ = v___x_1542_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v___y_1684_);
lean_ctor_set(v_reuseFailAlloc_1691_, 1, v___x_1681_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
v___y_1626_ = v___x_1690_;
goto v___jp_1625_;
}
}
}
}
}
else
{
lean_object* v___x_1694_; lean_object* v___x_1696_; 
lean_dec(v_fst_1540_);
lean_dec(v_fst_1539_);
v___x_1694_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__2));
if (v_isShared_1543_ == 0)
{
lean_ctor_set_tag(v___x_1542_, 1);
lean_ctor_set(v___x_1542_, 1, v___x_1694_);
lean_ctor_set(v___x_1542_, 0, v_a_1478_);
v___x_1696_ = v___x_1542_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v_a_1478_);
lean_ctor_set(v_reuseFailAlloc_1697_, 1, v___x_1694_);
v___x_1696_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
return v___x_1696_;
}
}
}
}
else
{
lean_object* v_fst_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1708_; 
lean_dec_ref(v___x_1535_);
lean_dec_ref(v_a_1478_);
v_fst_1700_ = lean_ctor_get(v_snd_1536_, 0);
v_isSharedCheck_1708_ = !lean_is_exclusive(v_snd_1536_);
if (v_isSharedCheck_1708_ == 0)
{
lean_object* v_unused_1709_; 
v_unused_1709_ = lean_ctor_get(v_snd_1536_, 1);
lean_dec(v_unused_1709_);
v___x_1702_ = v_snd_1536_;
v_isShared_1703_ = v_isSharedCheck_1708_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_fst_1700_);
lean_dec(v_snd_1536_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1708_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1704_; lean_object* v___x_1706_; 
v___x_1704_ = lean_box(0);
if (v_isShared_1703_ == 0)
{
lean_ctor_set_tag(v___x_1702_, 1);
lean_ctor_set(v___x_1702_, 1, v___x_1704_);
v___x_1706_ = v___x_1702_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v_fst_1700_);
lean_ctor_set(v_reuseFailAlloc_1707_, 1, v___x_1704_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
return v___x_1706_;
}
}
}
v___jp_1479_:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1481_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1));
v___x_1482_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1482_, 0, v_pos_1480_);
lean_ctor_set(v___x_1482_, 1, v___x_1481_);
return v___x_1482_;
}
v___jp_1483_:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___x_1485_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1));
v___x_1486_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1486_, 0, v_pos_1484_);
lean_ctor_set(v___x_1486_, 1, v___x_1485_);
return v___x_1486_;
}
v___jp_1492_:
{
lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
v___x_1496_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__0));
v___x_1497_ = l___private_Init_Data_String_Lossy_0__String_fromUTF8Lossy_go(v___y_1495_, v___x_1491_, v___x_1496_);
lean_dec_ref(v___y_1495_);
v___x_1498_ = lean_string_utf8_byte_size(v___x_1497_);
lean_inc_ref(v___x_1497_);
v___x_1499_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1497_);
lean_ctor_set(v___x_1499_, 1, v___x_1491_);
lean_ctor_set(v___x_1499_, 2, v___x_1498_);
v___x_1500_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine_spec__0(v___x_1499_, v___x_1498_);
lean_dec_ref_known(v___x_1499_, 3);
v___x_1501_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1497_);
lean_ctor_set(v___x_1501_, 1, v___x_1491_);
lean_ctor_set(v___x_1501_, 2, v___x_1500_);
v___x_1502_ = l_String_Slice_toString(v___x_1501_);
lean_dec_ref_known(v___x_1501_, 3);
v___x_1503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1503_, 0, v___y_1494_);
lean_ctor_set(v___x_1503_, 1, v___x_1502_);
v___x_1504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1504_, 0, v___y_1493_);
lean_ctor_set(v___x_1504_, 1, v___x_1503_);
return v___x_1504_;
}
v___jp_1505_:
{
lean_object* v___x_1509_; 
v___x_1509_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(v___y_1508_, v___y_1507_);
lean_dec(v___y_1508_);
if (lean_obj_tag(v___x_1509_) == 0)
{
if (lean_obj_tag(v___y_1506_) == 0)
{
lean_object* v_pos_1510_; lean_object* v_res_1511_; lean_object* v___x_1512_; 
v_pos_1510_ = lean_ctor_get(v___x_1509_, 0);
lean_inc(v_pos_1510_);
v_res_1511_ = lean_ctor_get(v___x_1509_, 1);
lean_inc(v_res_1511_);
lean_dec_ref_known(v___x_1509_, 2);
v___x_1512_ = l_ByteArray_empty;
v___y_1493_ = v_pos_1510_;
v___y_1494_ = v_res_1511_;
v___y_1495_ = v___x_1512_;
goto v___jp_1492_;
}
else
{
lean_object* v_pos_1513_; lean_object* v_res_1514_; lean_object* v_val_1515_; lean_object* v___x_1516_; 
v_pos_1513_ = lean_ctor_get(v___x_1509_, 0);
lean_inc(v_pos_1513_);
v_res_1514_ = lean_ctor_get(v___x_1509_, 1);
lean_inc(v_res_1514_);
lean_dec_ref_known(v___x_1509_, 2);
v_val_1515_ = lean_ctor_get(v___y_1506_, 0);
lean_inc(v_val_1515_);
lean_dec_ref_known(v___y_1506_, 1);
v___x_1516_ = l_ByteSlice_toByteArray(v_val_1515_);
v___y_1493_ = v_pos_1513_;
v___y_1494_ = v_res_1514_;
v___y_1495_ = v___x_1516_;
goto v___jp_1492_;
}
}
else
{
lean_object* v_pos_1517_; lean_object* v_err_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1525_; 
lean_dec(v___y_1506_);
v_pos_1517_ = lean_ctor_get(v___x_1509_, 0);
v_err_1518_ = lean_ctor_get(v___x_1509_, 1);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1520_ = v___x_1509_;
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_err_1518_);
lean_inc(v_pos_1517_);
lean_dec(v___x_1509_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v___x_1523_; 
if (v_isShared_1521_ == 0)
{
v___x_1523_ = v___x_1520_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v_pos_1517_);
lean_ctor_set(v_reuseFailAlloc_1524_, 1, v_err_1518_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
}
v___jp_1526_:
{
lean_object* v___x_1530_; uint8_t v___x_1531_; 
v___x_1530_ = l_ByteSlice_toByteArray(v___y_1527_);
v___x_1531_ = lean_string_validate_utf8(v___x_1530_);
if (v___x_1531_ == 0)
{
lean_object* v___x_1532_; 
lean_dec_ref(v___x_1530_);
v___x_1532_ = lean_box(0);
v___y_1506_ = v_res_1529_;
v___y_1507_ = v_pos_1528_;
v___y_1508_ = v___x_1532_;
goto v___jp_1505_;
}
else
{
lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___x_1533_ = lean_string_from_utf8_unchecked(v___x_1530_);
v___x_1534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1533_);
v___y_1506_ = v_res_1529_;
v___y_1507_ = v_pos_1528_;
v___y_1508_ = v___x_1534_;
goto v___jp_1505_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___boxed(lean_object* v_limits_1710_, lean_object* v_a_1711_){
_start:
{
lean_object* v_res_1712_; 
v_res_1712_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine(v_limits_1710_, v_a_1711_);
lean_dec_ref(v_limits_1710_);
return v_res_1712_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Std_Http_Protocol_H1_parseSingleHeader_spec__0(lean_object* v_x_1713_, lean_object* v_x_1714_){
_start:
{
if (lean_obj_tag(v_x_1713_) == 0)
{
if (lean_obj_tag(v_x_1714_) == 0)
{
uint8_t v___x_1715_; 
v___x_1715_ = 1;
return v___x_1715_;
}
else
{
uint8_t v___x_1716_; 
v___x_1716_ = 0;
return v___x_1716_;
}
}
else
{
if (lean_obj_tag(v_x_1714_) == 0)
{
uint8_t v___x_1717_; 
v___x_1717_ = 0;
return v___x_1717_;
}
else
{
lean_object* v_val_1718_; lean_object* v_val_1719_; uint8_t v___x_1720_; uint8_t v___x_1721_; uint8_t v___x_1722_; 
v_val_1718_ = lean_ctor_get(v_x_1713_, 0);
v_val_1719_ = lean_ctor_get(v_x_1714_, 0);
v___x_1720_ = lean_unbox(v_val_1718_);
v___x_1721_ = lean_unbox(v_val_1719_);
v___x_1722_ = lean_uint8_dec_eq(v___x_1720_, v___x_1721_);
return v___x_1722_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Std_Http_Protocol_H1_parseSingleHeader_spec__0___boxed(lean_object* v_x_1723_, lean_object* v_x_1724_){
_start:
{
uint8_t v_res_1725_; lean_object* v_r_1726_; 
v_res_1725_ = l_instBEqOption_beq___at___00Std_Http_Protocol_H1_parseSingleHeader_spec__0(v_x_1723_, v_x_1724_);
lean_dec(v_x_1724_);
lean_dec(v_x_1723_);
v_r_1726_ = lean_box(v_res_1725_);
return v_r_1726_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseSingleHeader(lean_object* v_limits_1733_, lean_object* v_a_1734_){
_start:
{
lean_object* v___y_1736_; lean_object* v_pos_1759_; lean_object* v_res_1760_; lean_object* v_array_1798_; lean_object* v_idx_1799_; lean_object* v___x_1800_; uint8_t v___x_1801_; 
v_array_1798_ = lean_ctor_get(v_a_1734_, 0);
v_idx_1799_ = lean_ctor_get(v_a_1734_, 1);
v___x_1800_ = lean_byte_array_size(v_array_1798_);
v___x_1801_ = lean_nat_dec_lt(v_idx_1799_, v___x_1800_);
if (v___x_1801_ == 0)
{
lean_object* v___x_1802_; 
v___x_1802_ = lean_box(0);
v_pos_1759_ = v_a_1734_;
v_res_1760_ = v___x_1802_;
goto v___jp_1758_;
}
else
{
uint8_t v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1803_ = lean_byte_array_fget(v_array_1798_, v_idx_1799_);
v___x_1804_ = lean_box(v___x_1803_);
v___x_1805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1805_, 0, v___x_1804_);
v_pos_1759_ = v_a_1734_;
v_res_1760_ = v___x_1805_;
goto v___jp_1758_;
}
v___jp_1735_:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; 
v___x_1737_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_1738_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_1737_, v___y_1736_);
if (lean_obj_tag(v___x_1738_) == 0)
{
lean_object* v_pos_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1747_; 
v_pos_1739_ = lean_ctor_get(v___x_1738_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1738_);
if (v_isSharedCheck_1747_ == 0)
{
lean_object* v_unused_1748_; 
v_unused_1748_ = lean_ctor_get(v___x_1738_, 1);
lean_dec(v_unused_1748_);
v___x_1741_ = v___x_1738_;
v_isShared_1742_ = v_isSharedCheck_1747_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_pos_1739_);
lean_dec(v___x_1738_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1747_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v___x_1743_; lean_object* v___x_1745_; 
v___x_1743_ = lean_box(0);
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 1, v___x_1743_);
v___x_1745_ = v___x_1741_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_pos_1739_);
lean_ctor_set(v_reuseFailAlloc_1746_, 1, v___x_1743_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
}
}
}
else
{
lean_object* v_pos_1749_; lean_object* v_err_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
v_pos_1749_ = lean_ctor_get(v___x_1738_, 0);
v_err_1750_ = lean_ctor_get(v___x_1738_, 1);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1738_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1738_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_err_1750_);
lean_inc(v_pos_1749_);
lean_dec(v___x_1738_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_pos_1749_);
lean_ctor_set(v_reuseFailAlloc_1756_, 1, v_err_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
v___jp_1758_:
{
lean_object* v___x_1761_; uint8_t v___x_1762_; 
v___x_1761_ = ((lean_object*)(l_Std_Http_Protocol_H1_parseSingleHeader___closed__0));
v___x_1762_ = l_instBEqOption_beq___at___00Std_Http_Protocol_H1_parseSingleHeader_spec__0(v_res_1760_, v___x_1761_);
if (v___x_1762_ == 0)
{
lean_object* v___x_1763_; uint8_t v___x_1764_; 
v___x_1763_ = ((lean_object*)(l_Std_Http_Protocol_H1_parseSingleHeader___closed__1));
v___x_1764_ = l_instBEqOption_beq___at___00Std_Http_Protocol_H1_parseSingleHeader_spec__0(v_res_1760_, v___x_1763_);
lean_dec(v_res_1760_);
if (v___x_1764_ == 0)
{
lean_object* v___x_1765_; 
v___x_1765_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine(v_limits_1733_, v_pos_1759_);
if (lean_obj_tag(v___x_1765_) == 0)
{
lean_object* v_pos_1766_; lean_object* v_res_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v_pos_1766_ = lean_ctor_get(v___x_1765_, 0);
lean_inc(v_pos_1766_);
v_res_1767_ = lean_ctor_get(v___x_1765_, 1);
lean_inc(v_res_1767_);
lean_dec_ref_known(v___x_1765_, 2);
v___x_1768_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_1769_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_1768_, v_pos_1766_);
if (lean_obj_tag(v___x_1769_) == 0)
{
lean_object* v_pos_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1778_; 
v_pos_1770_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1778_ == 0)
{
lean_object* v_unused_1779_; 
v_unused_1779_ = lean_ctor_get(v___x_1769_, 1);
lean_dec(v_unused_1779_);
v___x_1772_ = v___x_1769_;
v_isShared_1773_ = v_isSharedCheck_1778_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_pos_1770_);
lean_dec(v___x_1769_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1778_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1774_; lean_object* v___x_1776_; 
v___x_1774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1774_, 0, v_res_1767_);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 1, v___x_1774_);
v___x_1776_ = v___x_1772_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_pos_1770_);
lean_ctor_set(v_reuseFailAlloc_1777_, 1, v___x_1774_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
else
{
lean_object* v_pos_1780_; lean_object* v_err_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1788_; 
lean_dec(v_res_1767_);
v_pos_1780_ = lean_ctor_get(v___x_1769_, 0);
v_err_1781_ = lean_ctor_get(v___x_1769_, 1);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1783_ = v___x_1769_;
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_err_1781_);
lean_inc(v_pos_1780_);
lean_dec(v___x_1769_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1786_; 
if (v_isShared_1784_ == 0)
{
v___x_1786_ = v___x_1783_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_pos_1780_);
lean_ctor_set(v_reuseFailAlloc_1787_, 1, v_err_1781_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
}
else
{
lean_object* v_pos_1789_; lean_object* v_err_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1797_; 
v_pos_1789_ = lean_ctor_get(v___x_1765_, 0);
v_err_1790_ = lean_ctor_get(v___x_1765_, 1);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1765_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1792_ = v___x_1765_;
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_err_1790_);
lean_inc(v_pos_1789_);
lean_dec(v___x_1765_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1797_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v___x_1795_; 
if (v_isShared_1793_ == 0)
{
v___x_1795_ = v___x_1792_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_pos_1789_);
lean_ctor_set(v_reuseFailAlloc_1796_, 1, v_err_1790_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
}
else
{
v___y_1736_ = v_pos_1759_;
goto v___jp_1735_;
}
}
else
{
lean_dec(v_res_1760_);
v___y_1736_ = v_pos_1759_;
goto v___jp_1735_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseSingleHeader___boxed(lean_object* v_limits_1806_, lean_object* v_a_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l_Std_Http_Protocol_H1_parseSingleHeader(v_limits_1806_, v_a_1807_);
lean_dec_ref(v_limits_1806_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair(lean_object* v_a_1813_){
_start:
{
lean_object* v_array_1814_; lean_object* v_idx_1815_; lean_object* v___x_1816_; uint8_t v___x_1817_; 
v_array_1814_ = lean_ctor_get(v_a_1813_, 0);
v_idx_1815_ = lean_ctor_get(v_a_1813_, 1);
v___x_1816_ = lean_byte_array_size(v_array_1814_);
v___x_1817_ = lean_nat_dec_lt(v_idx_1815_, v___x_1816_);
if (v___x_1817_ == 0)
{
lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1818_ = lean_box(0);
v___x_1819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1819_, 0, v_a_1813_);
lean_ctor_set(v___x_1819_, 1, v___x_1818_);
return v___x_1819_;
}
else
{
uint8_t v___x_1820_; uint8_t v_got_1821_; uint8_t v___x_1822_; 
v___x_1820_ = 92;
v_got_1821_ = lean_byte_array_fget(v_array_1814_, v_idx_1815_);
v___x_1822_ = lean_uint8_dec_eq(v_got_1821_, v___x_1820_);
if (v___x_1822_ == 0)
{
lean_object* v___x_1823_; lean_object* v___x_1824_; 
v___x_1823_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__1));
v___x_1824_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1824_, 0, v_a_1813_);
lean_ctor_set(v___x_1824_, 1, v___x_1823_);
return v___x_1824_;
}
else
{
lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1858_; 
lean_inc(v_idx_1815_);
lean_inc_ref(v_array_1814_);
v_isSharedCheck_1858_ = !lean_is_exclusive(v_a_1813_);
if (v_isSharedCheck_1858_ == 0)
{
lean_object* v_unused_1859_; lean_object* v_unused_1860_; 
v_unused_1859_ = lean_ctor_get(v_a_1813_, 1);
lean_dec(v_unused_1859_);
v_unused_1860_ = lean_ctor_get(v_a_1813_, 0);
lean_dec(v_unused_1860_);
v___x_1826_ = v_a_1813_;
v_isShared_1827_ = v_isSharedCheck_1858_;
goto v_resetjp_1825_;
}
else
{
lean_dec(v_a_1813_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1858_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; uint8_t v___x_1830_; 
v___x_1828_ = lean_unsigned_to_nat(1u);
v___x_1829_ = lean_nat_add(v_idx_1815_, v___x_1828_);
lean_dec(v_idx_1815_);
v___x_1830_ = lean_nat_dec_lt(v___x_1829_, v___x_1816_);
if (v___x_1830_ == 0)
{
lean_object* v___x_1832_; 
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 1, v___x_1829_);
v___x_1832_ = v___x_1826_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_array_1814_);
lean_ctor_set(v_reuseFailAlloc_1835_, 1, v___x_1829_);
v___x_1832_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1833_ = lean_box(0);
v___x_1834_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1834_, 0, v___x_1832_);
lean_ctor_set(v___x_1834_, 1, v___x_1833_);
return v___x_1834_;
}
}
else
{
uint8_t v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1839_; 
v___x_1836_ = lean_byte_array_fget(v_array_1814_, v___x_1829_);
v___x_1837_ = lean_nat_add(v___x_1829_, v___x_1828_);
lean_dec(v___x_1829_);
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 1, v___x_1837_);
v___x_1839_ = v___x_1826_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v_array_1814_);
lean_ctor_set(v_reuseFailAlloc_1857_, 1, v___x_1837_);
v___x_1839_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
lean_object* v___x_1840_; lean_object* v___x_1841_; uint32_t v___x_1842_; uint32_t v___x_1849_; uint8_t v___x_1850_; 
v___x_1840_ = lean_box(v___x_1836_);
lean_inc_ref(v___x_1839_);
v___x_1841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1839_);
lean_ctor_set(v___x_1841_, 1, v___x_1840_);
v___x_1842_ = lean_uint8_to_uint32(v___x_1836_);
v___x_1849_ = 9;
v___x_1850_ = lean_uint32_dec_eq(v___x_1842_, v___x_1849_);
if (v___x_1850_ == 0)
{
uint32_t v___x_1851_; uint8_t v___x_1852_; 
v___x_1851_ = 32;
v___x_1852_ = lean_uint32_dec_eq(v___x_1842_, v___x_1851_);
if (v___x_1852_ == 0)
{
uint32_t v___x_1853_; uint8_t v___x_1854_; 
v___x_1853_ = 33;
v___x_1854_ = lean_uint32_dec_le(v___x_1853_, v___x_1842_);
if (v___x_1854_ == 0)
{
lean_dec_ref_known(v___x_1841_, 2);
goto v___jp_1843_;
}
else
{
uint32_t v___x_1855_; uint8_t v___x_1856_; 
v___x_1855_ = 126;
v___x_1856_ = lean_uint32_dec_le(v___x_1842_, v___x_1855_);
if (v___x_1856_ == 0)
{
lean_dec_ref_known(v___x_1841_, 2);
goto v___jp_1843_;
}
else
{
lean_dec_ref(v___x_1839_);
return v___x_1841_;
}
}
}
else
{
lean_dec_ref(v___x_1839_);
return v___x_1841_;
}
}
else
{
lean_dec_ref(v___x_1839_);
return v___x_1841_;
}
v___jp_1843_:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v___x_1844_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__2));
v___x_1845_ = l_Char_quote(v___x_1842_);
v___x_1846_ = lean_string_append(v___x_1844_, v___x_1845_);
lean_dec_ref(v___x_1845_);
v___x_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
v___x_1848_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1839_);
lean_ctor_set(v___x_1848_, 1, v___x_1847_);
return v___x_1848_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop(lean_object* v_maxLength_1865_, lean_object* v_buf_1866_, lean_object* v_length_1867_, lean_object* v_a_1868_){
_start:
{
lean_object* v_array_1869_; lean_object* v_idx_1870_; lean_object* v___x_1871_; uint8_t v___x_1872_; 
v_array_1869_ = lean_ctor_get(v_a_1868_, 0);
v_idx_1870_ = lean_ctor_get(v_a_1868_, 1);
v___x_1871_ = lean_byte_array_size(v_array_1869_);
v___x_1872_ = lean_nat_dec_lt(v_idx_1870_, v___x_1871_);
if (v___x_1872_ == 0)
{
lean_object* v___x_1873_; lean_object* v___x_1874_; 
lean_dec(v_length_1867_);
lean_dec_ref(v_buf_1866_);
v___x_1873_ = lean_box(0);
v___x_1874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1874_, 0, v_a_1868_);
lean_ctor_set(v___x_1874_, 1, v___x_1873_);
return v___x_1874_;
}
else
{
lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1947_; 
lean_inc(v_idx_1870_);
lean_inc_ref(v_array_1869_);
v_isSharedCheck_1947_ = !lean_is_exclusive(v_a_1868_);
if (v_isSharedCheck_1947_ == 0)
{
lean_object* v_unused_1948_; lean_object* v_unused_1949_; 
v_unused_1948_ = lean_ctor_get(v_a_1868_, 1);
lean_dec(v_unused_1948_);
v_unused_1949_ = lean_ctor_get(v_a_1868_, 0);
lean_dec(v_unused_1949_);
v___x_1876_ = v_a_1868_;
v_isShared_1877_ = v_isSharedCheck_1947_;
goto v_resetjp_1875_;
}
else
{
lean_dec(v_a_1868_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1947_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
uint8_t v_c_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v_it_x27_1882_; 
v_c_1878_ = lean_byte_array_fget(v_array_1869_, v_idx_1870_);
v___x_1879_ = lean_unsigned_to_nat(1u);
v___x_1880_ = lean_nat_add(v_idx_1870_, v___x_1879_);
lean_dec(v_idx_1870_);
lean_inc(v___x_1880_);
lean_inc_ref(v_array_1869_);
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 1, v___x_1880_);
v_it_x27_1882_ = v___x_1876_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v_array_1869_);
lean_ctor_set(v_reuseFailAlloc_1946_, 1, v___x_1880_);
v_it_x27_1882_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
uint8_t v___x_1897_; uint8_t v___x_1898_; 
v___x_1897_ = 34;
v___x_1898_ = lean_uint8_dec_eq(v_c_1878_, v___x_1897_);
if (v___x_1898_ == 0)
{
uint8_t v___x_1899_; uint8_t v___x_1900_; 
v___x_1899_ = 92;
v___x_1900_ = lean_uint8_dec_eq(v_c_1878_, v___x_1899_);
if (v___x_1900_ == 0)
{
uint32_t v___x_1901_; uint32_t v___x_1907_; uint8_t v___x_1908_; 
lean_dec(v___x_1880_);
lean_dec_ref(v_array_1869_);
v___x_1901_ = lean_uint8_to_uint32(v_c_1878_);
v___x_1907_ = 9;
v___x_1908_ = lean_uint32_dec_eq(v___x_1901_, v___x_1907_);
if (v___x_1908_ == 0)
{
uint32_t v___x_1909_; uint8_t v___x_1910_; 
v___x_1909_ = 32;
v___x_1910_ = lean_uint32_dec_eq(v___x_1901_, v___x_1909_);
if (v___x_1910_ == 0)
{
uint32_t v___x_1911_; uint8_t v___x_1912_; 
v___x_1911_ = 33;
v___x_1912_ = lean_uint32_dec_eq(v___x_1901_, v___x_1911_);
if (v___x_1912_ == 0)
{
uint32_t v___x_1913_; uint8_t v___x_1914_; 
v___x_1913_ = 35;
v___x_1914_ = lean_uint32_dec_le(v___x_1913_, v___x_1901_);
if (v___x_1914_ == 0)
{
goto v___jp_1902_;
}
else
{
uint32_t v___x_1915_; uint8_t v___x_1916_; 
v___x_1915_ = 91;
v___x_1916_ = lean_uint32_dec_le(v___x_1901_, v___x_1915_);
if (v___x_1916_ == 0)
{
goto v___jp_1902_;
}
else
{
goto v___jp_1883_;
}
}
}
else
{
goto v___jp_1883_;
}
}
else
{
goto v___jp_1883_;
}
}
else
{
goto v___jp_1883_;
}
v___jp_1902_:
{
uint32_t v___x_1903_; uint8_t v___x_1904_; 
v___x_1903_ = 93;
v___x_1904_ = lean_uint32_dec_le(v___x_1903_, v___x_1901_);
if (v___x_1904_ == 0)
{
lean_dec(v_length_1867_);
lean_dec_ref(v_buf_1866_);
goto v___jp_1890_;
}
else
{
uint32_t v___x_1905_; uint8_t v___x_1906_; 
v___x_1905_ = 126;
v___x_1906_ = lean_uint32_dec_le(v___x_1901_, v___x_1905_);
if (v___x_1906_ == 0)
{
lean_dec(v_length_1867_);
lean_dec_ref(v_buf_1866_);
goto v___jp_1890_;
}
else
{
goto v___jp_1883_;
}
}
}
}
else
{
uint8_t v___x_1917_; 
v___x_1917_ = lean_nat_dec_lt(v___x_1880_, v___x_1871_);
if (v___x_1917_ == 0)
{
lean_object* v___x_1918_; lean_object* v___x_1919_; 
lean_dec(v___x_1880_);
lean_dec_ref(v_array_1869_);
lean_dec(v_length_1867_);
lean_dec_ref(v_buf_1866_);
v___x_1918_ = lean_box(0);
v___x_1919_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1919_, 0, v_it_x27_1882_);
lean_ctor_set(v___x_1919_, 1, v___x_1918_);
return v___x_1919_;
}
else
{
uint8_t v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; uint32_t v___x_1930_; uint32_t v___x_1937_; uint8_t v___x_1938_; 
lean_dec_ref(v_it_x27_1882_);
v___x_1920_ = lean_byte_array_fget(v_array_1869_, v___x_1880_);
v___x_1921_ = lean_nat_add(v___x_1880_, v___x_1879_);
lean_dec(v___x_1880_);
v___x_1922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1922_, 0, v_array_1869_);
lean_ctor_set(v___x_1922_, 1, v___x_1921_);
v___x_1930_ = lean_uint8_to_uint32(v___x_1920_);
v___x_1937_ = 9;
v___x_1938_ = lean_uint32_dec_eq(v___x_1930_, v___x_1937_);
if (v___x_1938_ == 0)
{
uint32_t v___x_1939_; uint8_t v___x_1940_; 
v___x_1939_ = 32;
v___x_1940_ = lean_uint32_dec_eq(v___x_1930_, v___x_1939_);
if (v___x_1940_ == 0)
{
uint32_t v___x_1941_; uint8_t v___x_1942_; 
v___x_1941_ = 33;
v___x_1942_ = lean_uint32_dec_le(v___x_1941_, v___x_1930_);
if (v___x_1942_ == 0)
{
lean_dec(v_length_1867_);
lean_dec_ref(v_buf_1866_);
goto v___jp_1931_;
}
else
{
uint32_t v___x_1943_; uint8_t v___x_1944_; 
v___x_1943_ = 126;
v___x_1944_ = lean_uint32_dec_le(v___x_1930_, v___x_1943_);
if (v___x_1944_ == 0)
{
lean_dec(v_length_1867_);
lean_dec_ref(v_buf_1866_);
goto v___jp_1931_;
}
else
{
goto v___jp_1923_;
}
}
}
else
{
goto v___jp_1923_;
}
}
else
{
goto v___jp_1923_;
}
v___jp_1923_:
{
lean_object* v___x_1924_; uint8_t v___x_1925_; 
v___x_1924_ = lean_nat_add(v_length_1867_, v___x_1879_);
lean_dec(v_length_1867_);
v___x_1925_ = lean_nat_dec_lt(v_maxLength_1865_, v___x_1924_);
if (v___x_1925_ == 0)
{
lean_object* v___x_1926_; 
v___x_1926_ = lean_byte_array_push(v_buf_1866_, v___x_1920_);
v_buf_1866_ = v___x_1926_;
v_length_1867_ = v___x_1924_;
v_a_1868_ = v___x_1922_;
goto _start;
}
else
{
lean_object* v___x_1928_; lean_object* v___x_1929_; 
lean_dec(v___x_1924_);
lean_dec_ref(v_buf_1866_);
v___x_1928_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__1));
v___x_1929_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1922_);
lean_ctor_set(v___x_1929_, 1, v___x_1928_);
return v___x_1929_;
}
}
v___jp_1931_:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; 
v___x_1932_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedPair___closed__2));
v___x_1933_ = l_Char_quote(v___x_1930_);
v___x_1934_ = lean_string_append(v___x_1932_, v___x_1933_);
lean_dec_ref(v___x_1933_);
v___x_1935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1935_, 0, v___x_1934_);
v___x_1936_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1936_, 0, v___x_1922_);
lean_ctor_set(v___x_1936_, 1, v___x_1935_);
return v___x_1936_;
}
}
}
}
else
{
lean_object* v___x_1945_; 
lean_dec(v___x_1880_);
lean_dec_ref(v_array_1869_);
lean_dec(v_length_1867_);
v___x_1945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1945_, 0, v_it_x27_1882_);
lean_ctor_set(v___x_1945_, 1, v_buf_1866_);
return v___x_1945_;
}
v___jp_1883_:
{
lean_object* v___x_1884_; uint8_t v___x_1885_; 
v___x_1884_ = lean_nat_add(v_length_1867_, v___x_1879_);
lean_dec(v_length_1867_);
v___x_1885_ = lean_nat_dec_lt(v_maxLength_1865_, v___x_1884_);
if (v___x_1885_ == 0)
{
lean_object* v___x_1886_; 
v___x_1886_ = lean_byte_array_push(v_buf_1866_, v_c_1878_);
v_buf_1866_ = v___x_1886_;
v_length_1867_ = v___x_1884_;
v_a_1868_ = v_it_x27_1882_;
goto _start;
}
else
{
lean_object* v___x_1888_; lean_object* v___x_1889_; 
lean_dec(v___x_1884_);
lean_dec_ref(v_buf_1866_);
v___x_1888_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__1));
v___x_1889_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1889_, 0, v_it_x27_1882_);
lean_ctor_set(v___x_1889_, 1, v___x_1888_);
return v___x_1889_;
}
}
v___jp_1890_:
{
lean_object* v___x_1891_; uint32_t v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1891_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___closed__2));
v___x_1892_ = lean_uint8_to_uint32(v_c_1878_);
v___x_1893_ = l_Char_quote(v___x_1892_);
v___x_1894_ = lean_string_append(v___x_1891_, v___x_1893_);
lean_dec_ref(v___x_1893_);
v___x_1895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1894_);
v___x_1896_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1896_, 0, v_it_x27_1882_);
lean_ctor_set(v___x_1896_, 1, v___x_1895_);
return v___x_1896_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop___boxed(lean_object* v_maxLength_1950_, lean_object* v_buf_1951_, lean_object* v_length_1952_, lean_object* v_a_1953_){
_start:
{
lean_object* v_res_1954_; 
v_res_1954_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop(v_maxLength_1950_, v_buf_1951_, v_length_1952_, v_a_1953_);
lean_dec(v_maxLength_1950_);
return v_res_1954_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString(lean_object* v_maxLength_1958_, lean_object* v_a_1959_){
_start:
{
lean_object* v_array_1960_; lean_object* v_idx_1961_; lean_object* v___x_1962_; uint8_t v___x_1963_; 
v_array_1960_ = lean_ctor_get(v_a_1959_, 0);
v_idx_1961_ = lean_ctor_get(v_a_1959_, 1);
v___x_1962_ = lean_byte_array_size(v_array_1960_);
v___x_1963_ = lean_nat_dec_lt(v_idx_1961_, v___x_1962_);
if (v___x_1963_ == 0)
{
lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1964_ = lean_box(0);
v___x_1965_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1965_, 0, v_a_1959_);
lean_ctor_set(v___x_1965_, 1, v___x_1964_);
return v___x_1965_;
}
else
{
uint8_t v___x_1966_; uint8_t v_got_1967_; uint8_t v___x_1968_; 
v___x_1966_ = 34;
v_got_1967_ = lean_byte_array_fget(v_array_1960_, v_idx_1961_);
v___x_1968_ = lean_uint8_dec_eq(v_got_1967_, v___x_1966_);
if (v___x_1968_ == 0)
{
lean_object* v___x_1969_; lean_object* v___x_1970_; 
v___x_1969_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___closed__1));
v___x_1970_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1970_, 0, v_a_1959_);
lean_ctor_set(v___x_1970_, 1, v___x_1969_);
return v___x_1970_;
}
else
{
lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_1999_; 
lean_inc(v_idx_1961_);
lean_inc_ref(v_array_1960_);
v_isSharedCheck_1999_ = !lean_is_exclusive(v_a_1959_);
if (v_isSharedCheck_1999_ == 0)
{
lean_object* v_unused_2000_; lean_object* v_unused_2001_; 
v_unused_2000_ = lean_ctor_get(v_a_1959_, 1);
lean_dec(v_unused_2000_);
v_unused_2001_ = lean_ctor_get(v_a_1959_, 0);
lean_dec(v_unused_2001_);
v___x_1972_ = v_a_1959_;
v_isShared_1973_ = v_isSharedCheck_1999_;
goto v_resetjp_1971_;
}
else
{
lean_dec(v_a_1959_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_1999_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1977_; 
v___x_1974_ = lean_unsigned_to_nat(1u);
v___x_1975_ = lean_nat_add(v_idx_1961_, v___x_1974_);
lean_dec(v_idx_1961_);
if (v_isShared_1973_ == 0)
{
lean_ctor_set(v___x_1972_, 1, v___x_1975_);
v___x_1977_ = v___x_1972_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v_array_1960_);
lean_ctor_set(v_reuseFailAlloc_1998_, 1, v___x_1975_);
v___x_1977_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1978_ = l_ByteArray_empty;
v___x_1979_ = lean_unsigned_to_nat(0u);
v___x_1980_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString_loop(v_maxLength_1958_, v___x_1978_, v___x_1979_, v___x_1977_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_pos_1981_; lean_object* v_res_1982_; uint8_t v___x_1983_; 
v_pos_1981_ = lean_ctor_get(v___x_1980_, 0);
lean_inc(v_pos_1981_);
v_res_1982_ = lean_ctor_get(v___x_1980_, 1);
lean_inc(v_res_1982_);
lean_dec_ref_known(v___x_1980_, 2);
v___x_1983_ = lean_string_validate_utf8(v_res_1982_);
if (v___x_1983_ == 0)
{
lean_object* v___x_1984_; lean_object* v___x_1985_; 
lean_dec(v_res_1982_);
v___x_1984_ = lean_box(0);
v___x_1985_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(v___x_1984_, v_pos_1981_);
return v___x_1985_;
}
else
{
lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
v___x_1986_ = lean_string_from_utf8_unchecked(v_res_1982_);
v___x_1987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1987_, 0, v___x_1986_);
v___x_1988_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(v___x_1987_, v_pos_1981_);
lean_dec_ref_known(v___x_1987_, 1);
return v___x_1988_;
}
}
else
{
lean_object* v_pos_1989_; lean_object* v_err_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_1997_; 
v_pos_1989_ = lean_ctor_get(v___x_1980_, 0);
v_err_1990_ = lean_ctor_get(v___x_1980_, 1);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1992_ = v___x_1980_;
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_err_1990_);
lean_inc(v_pos_1989_);
lean_dec(v___x_1980_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1995_; 
if (v_isShared_1993_ == 0)
{
v___x_1995_ = v___x_1992_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_pos_1989_);
lean_ctor_set(v_reuseFailAlloc_1996_, 1, v_err_1990_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString___boxed(lean_object* v_maxLength_2002_, lean_object* v_a_2003_){
_start:
{
lean_object* v_res_2004_; 
v_res_2004_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString(v_maxLength_2002_, v_a_2003_);
lean_dec(v_maxLength_2002_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___lam__2(lean_object* v___f_2005_, lean_object* v_maxSpaceSequence_2006_, lean_object* v_x_2007_, lean_object* v___y_2008_){
_start:
{
lean_object* v_pos_2010_; lean_object* v_pos_2014_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v_snd_2019_; lean_object* v_snd_2020_; uint8_t v___x_2021_; 
v___x_2017_ = lean_unsigned_to_nat(0u);
v___x_2018_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2005_, v_maxSpaceSequence_2006_, v___x_2017_, v___y_2008_);
v_snd_2019_ = lean_ctor_get(v___x_2018_, 1);
lean_inc(v_snd_2019_);
lean_dec_ref(v___x_2018_);
v_snd_2020_ = lean_ctor_get(v_snd_2019_, 1);
v___x_2021_ = lean_unbox(v_snd_2020_);
if (v___x_2021_ == 0)
{
lean_object* v_fst_2022_; lean_object* v_array_2023_; lean_object* v_idx_2024_; lean_object* v___x_2025_; uint8_t v___x_2026_; 
v_fst_2022_ = lean_ctor_get(v_snd_2019_, 0);
lean_inc(v_fst_2022_);
lean_dec(v_snd_2019_);
v_array_2023_ = lean_ctor_get(v_fst_2022_, 0);
v_idx_2024_ = lean_ctor_get(v_fst_2022_, 1);
v___x_2025_ = lean_byte_array_size(v_array_2023_);
v___x_2026_ = lean_nat_dec_lt(v_idx_2024_, v___x_2025_);
if (v___x_2026_ == 0)
{
v_pos_2010_ = v_fst_2022_;
goto v___jp_2009_;
}
else
{
uint8_t v___x_2027_; uint32_t v___x_2028_; uint32_t v___x_2029_; uint8_t v___x_2030_; 
v___x_2027_ = lean_byte_array_fget(v_array_2023_, v_idx_2024_);
v___x_2028_ = lean_uint8_to_uint32(v___x_2027_);
v___x_2029_ = 32;
v___x_2030_ = lean_uint32_dec_eq(v___x_2028_, v___x_2029_);
if (v___x_2030_ == 0)
{
uint32_t v___x_2031_; uint8_t v___x_2032_; 
v___x_2031_ = 9;
v___x_2032_ = lean_uint32_dec_eq(v___x_2028_, v___x_2031_);
if (v___x_2032_ == 0)
{
v_pos_2010_ = v_fst_2022_;
goto v___jp_2009_;
}
else
{
v_pos_2014_ = v_fst_2022_;
goto v___jp_2013_;
}
}
else
{
v_pos_2014_ = v_fst_2022_;
goto v___jp_2013_;
}
}
}
else
{
lean_object* v_fst_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2041_; 
v_fst_2033_ = lean_ctor_get(v_snd_2019_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v_snd_2019_);
if (v_isSharedCheck_2041_ == 0)
{
lean_object* v_unused_2042_; 
v_unused_2042_ = lean_ctor_get(v_snd_2019_, 1);
lean_dec(v_unused_2042_);
v___x_2035_ = v_snd_2019_;
v_isShared_2036_ = v_isSharedCheck_2041_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_fst_2033_);
lean_dec(v_snd_2019_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2041_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2037_; lean_object* v___x_2039_; 
v___x_2037_ = lean_box(0);
if (v_isShared_2036_ == 0)
{
lean_ctor_set_tag(v___x_2035_, 1);
lean_ctor_set(v___x_2035_, 1, v___x_2037_);
v___x_2039_ = v___x_2035_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v_fst_2033_);
lean_ctor_set(v_reuseFailAlloc_2040_, 1, v___x_2037_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
return v___x_2039_;
}
}
}
v___jp_2009_:
{
lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___x_2011_ = lean_box(0);
v___x_2012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2012_, 0, v_pos_2010_);
lean_ctor_set(v___x_2012_, 1, v___x_2011_);
return v___x_2012_;
}
v___jp_2013_:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2015_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1));
v___x_2016_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2016_, 0, v_pos_2014_);
lean_ctor_set(v___x_2016_, 1, v___x_2015_);
return v___x_2016_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___lam__2___boxed(lean_object* v___f_2043_, lean_object* v_maxSpaceSequence_2044_, lean_object* v_x_2045_, lean_object* v___y_2046_){
_start:
{
lean_object* v_res_2047_; 
v_res_2047_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___lam__2(v___f_2043_, v_maxSpaceSequence_2044_, v_x_2045_, v___y_2046_);
lean_dec(v_maxSpaceSequence_2044_);
return v_res_2047_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt(lean_object* v_limits_2060_, lean_object* v_a_2061_){
_start:
{
lean_object* v_pos_2063_; lean_object* v_pos_2067_; lean_object* v___y_2071_; lean_object* v_pos_2072_; lean_object* v___y_2077_; lean_object* v_pos_2078_; lean_object* v_res_2079_; lean_object* v___y_2086_; lean_object* v_pos_2087_; lean_object* v_res_2088_; lean_object* v___y_2102_; lean_object* v___y_2103_; lean_object* v___y_2104_; lean_object* v_lower_2105_; lean_object* v_upper_2106_; lean_object* v___y_2114_; lean_object* v___y_2115_; lean_object* v___y_2116_; lean_object* v___y_2117_; lean_object* v___y_2118_; lean_object* v___y_2119_; lean_object* v_pos_2122_; lean_object* v_pos_2126_; lean_object* v_maxSpaceSequence_2129_; lean_object* v_maxChunkExtNameLength_2130_; lean_object* v_maxChunkExtValueLength_2131_; lean_object* v___f_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v_snd_2135_; lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2427_; 
v_maxSpaceSequence_2129_ = lean_ctor_get(v_limits_2060_, 8);
v_maxChunkExtNameLength_2130_ = lean_ctor_get(v_limits_2060_, 11);
v_maxChunkExtValueLength_2131_ = lean_ctor_get(v_limits_2060_, 12);
v___f_2132_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__2));
v___x_2133_ = lean_unsigned_to_nat(0u);
v___x_2134_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2132_, v_maxSpaceSequence_2129_, v___x_2133_, v_a_2061_);
v_snd_2135_ = lean_ctor_get(v___x_2134_, 1);
v_isSharedCheck_2427_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2427_ == 0)
{
lean_object* v_unused_2428_; 
v_unused_2428_ = lean_ctor_get(v___x_2134_, 0);
lean_dec(v_unused_2428_);
v___x_2137_ = v___x_2134_;
v_isShared_2138_ = v_isSharedCheck_2427_;
goto v_resetjp_2136_;
}
else
{
lean_inc(v_snd_2135_);
lean_dec(v___x_2134_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2427_;
goto v_resetjp_2136_;
}
v___jp_2062_:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; 
v___x_2064_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1));
v___x_2065_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2065_, 0, v_pos_2063_);
lean_ctor_set(v___x_2065_, 1, v___x_2064_);
return v___x_2065_;
}
v___jp_2066_:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2068_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1));
v___x_2069_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2069_, 0, v_pos_2067_);
lean_ctor_set(v___x_2069_, 1, v___x_2068_);
return v___x_2069_;
}
v___jp_2070_:
{
lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2073_ = lean_box(0);
v___x_2074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2074_, 0, v___y_2071_);
lean_ctor_set(v___x_2074_, 1, v___x_2073_);
v___x_2075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2075_, 0, v_pos_2072_);
lean_ctor_set(v___x_2075_, 1, v___x_2074_);
return v___x_2075_;
}
v___jp_2076_:
{
lean_object* v___x_2080_; 
v___x_2080_ = l_Std_Http_Chunk_ExtensionValue_ofString_x3f(v_res_2079_);
if (lean_obj_tag(v___x_2080_) == 1)
{
lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2081_, 0, v___y_2077_);
lean_ctor_set(v___x_2081_, 1, v___x_2080_);
v___x_2082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2082_, 0, v_pos_2078_);
lean_ctor_set(v___x_2082_, 1, v___x_2081_);
return v___x_2082_;
}
else
{
lean_object* v___x_2083_; lean_object* v___x_2084_; 
lean_dec(v___x_2080_);
lean_dec_ref(v___y_2077_);
v___x_2083_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__1));
v___x_2084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2084_, 0, v_pos_2078_);
lean_ctor_set(v___x_2084_, 1, v___x_2083_);
return v___x_2084_;
}
}
v___jp_2085_:
{
lean_object* v___x_2089_; 
v___x_2089_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(v_res_2088_, v_pos_2087_);
lean_dec(v_res_2088_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v_pos_2090_; lean_object* v_res_2091_; 
v_pos_2090_ = lean_ctor_get(v___x_2089_, 0);
lean_inc(v_pos_2090_);
v_res_2091_ = lean_ctor_get(v___x_2089_, 1);
lean_inc(v_res_2091_);
lean_dec_ref_known(v___x_2089_, 2);
v___y_2077_ = v___y_2086_;
v_pos_2078_ = v_pos_2090_;
v_res_2079_ = v_res_2091_;
goto v___jp_2076_;
}
else
{
lean_object* v_pos_2092_; lean_object* v_err_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
lean_dec_ref(v___y_2086_);
v_pos_2092_ = lean_ctor_get(v___x_2089_, 0);
v_err_2093_ = lean_ctor_get(v___x_2089_, 1);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2095_ = v___x_2089_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_err_2093_);
lean_inc(v_pos_2092_);
lean_dec(v___x_2089_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_pos_2092_);
lean_ctor_set(v_reuseFailAlloc_2099_, 1, v_err_2093_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
}
v___jp_2101_:
{
lean_object* v___x_2107_; lean_object* v___x_2108_; uint8_t v___x_2109_; 
v___x_2107_ = l_ByteArray_toByteSlice(v___y_2103_, v_lower_2105_, v_upper_2106_);
v___x_2108_ = l_ByteSlice_toByteArray(v___x_2107_);
v___x_2109_ = lean_string_validate_utf8(v___x_2108_);
if (v___x_2109_ == 0)
{
lean_object* v___x_2110_; 
lean_dec_ref(v___x_2108_);
v___x_2110_ = lean_box(0);
v___y_2086_ = v___y_2104_;
v_pos_2087_ = v___y_2102_;
v_res_2088_ = v___x_2110_;
goto v___jp_2085_;
}
else
{
lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2111_ = lean_string_from_utf8_unchecked(v___x_2108_);
v___x_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2111_);
v___y_2086_ = v___y_2104_;
v_pos_2087_ = v___y_2102_;
v_res_2088_ = v___x_2112_;
goto v___jp_2085_;
}
}
v___jp_2113_:
{
uint8_t v___x_2120_; 
v___x_2120_ = lean_nat_dec_le(v___y_2115_, v___y_2114_);
if (v___x_2120_ == 0)
{
lean_dec(v___y_2115_);
v___y_2102_ = v___y_2116_;
v___y_2103_ = v___y_2117_;
v___y_2104_ = v___y_2118_;
v_lower_2105_ = v___y_2119_;
v_upper_2106_ = v___y_2114_;
goto v___jp_2101_;
}
else
{
lean_dec(v___y_2114_);
v___y_2102_ = v___y_2116_;
v___y_2103_ = v___y_2117_;
v___y_2104_ = v___y_2118_;
v_lower_2105_ = v___y_2119_;
v_upper_2106_ = v___y_2115_;
goto v___jp_2101_;
}
}
v___jp_2121_:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2123_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1));
v___x_2124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2124_, 0, v_pos_2122_);
lean_ctor_set(v___x_2124_, 1, v___x_2123_);
return v___x_2124_;
}
v___jp_2125_:
{
lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2127_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_ows___closed__1));
v___x_2128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2128_, 0, v_pos_2126_);
lean_ctor_set(v___x_2128_, 1, v___x_2127_);
return v___x_2128_;
}
v_resetjp_2136_:
{
lean_object* v_snd_2139_; uint8_t v___x_2140_; 
v_snd_2139_ = lean_ctor_get(v_snd_2135_, 1);
v___x_2140_ = lean_unbox(v_snd_2139_);
if (v___x_2140_ == 0)
{
lean_object* v_fst_2141_; lean_object* v___x_2143_; uint8_t v_isShared_2144_; uint8_t v_isSharedCheck_2415_; 
v_fst_2141_ = lean_ctor_get(v_snd_2135_, 0);
v_isSharedCheck_2415_ = !lean_is_exclusive(v_snd_2135_);
if (v_isSharedCheck_2415_ == 0)
{
lean_object* v_unused_2416_; 
v_unused_2416_ = lean_ctor_get(v_snd_2135_, 1);
lean_dec(v_unused_2416_);
v___x_2143_ = v_snd_2135_;
v_isShared_2144_ = v_isSharedCheck_2415_;
goto v_resetjp_2142_;
}
else
{
lean_inc(v_fst_2141_);
lean_dec(v_snd_2135_);
v___x_2143_ = lean_box(0);
v_isShared_2144_ = v_isSharedCheck_2415_;
goto v_resetjp_2142_;
}
v_resetjp_2142_:
{
lean_object* v_array_2145_; lean_object* v_idx_2146_; lean_object* v___f_2147_; lean_object* v___y_2149_; lean_object* v_pos_2150_; lean_object* v___y_2187_; lean_object* v___y_2188_; lean_object* v_pos_2189_; lean_object* v_array_2190_; lean_object* v_idx_2191_; lean_object* v_pos_2247_; lean_object* v_res_2248_; lean_object* v___y_2312_; lean_object* v___y_2313_; lean_object* v_lower_2314_; lean_object* v_upper_2315_; lean_object* v___y_2323_; lean_object* v___y_2324_; lean_object* v___y_2325_; lean_object* v___y_2326_; lean_object* v___y_2327_; lean_object* v_pos_2330_; lean_object* v_pos_2363_; lean_object* v___x_2407_; uint8_t v___x_2408_; 
v_array_2145_ = lean_ctor_get(v_fst_2141_, 0);
v_idx_2146_ = lean_ctor_get(v_fst_2141_, 1);
v___f_2147_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__0));
v___x_2407_ = lean_byte_array_size(v_array_2145_);
v___x_2408_ = lean_nat_dec_lt(v_idx_2146_, v___x_2407_);
if (v___x_2408_ == 0)
{
lean_inc(v_idx_2146_);
lean_inc_ref(v_array_2145_);
v_pos_2363_ = v_fst_2141_;
goto v___jp_2362_;
}
else
{
uint8_t v___x_2409_; uint32_t v___x_2410_; uint32_t v___x_2411_; uint8_t v___x_2412_; 
v___x_2409_ = lean_byte_array_fget(v_array_2145_, v_idx_2146_);
v___x_2410_ = lean_uint8_to_uint32(v___x_2409_);
v___x_2411_ = 32;
v___x_2412_ = lean_uint32_dec_eq(v___x_2410_, v___x_2411_);
if (v___x_2412_ == 0)
{
uint32_t v___x_2413_; uint8_t v___x_2414_; 
v___x_2413_ = 9;
v___x_2414_ = lean_uint32_dec_eq(v___x_2410_, v___x_2413_);
if (v___x_2414_ == 0)
{
lean_inc(v_idx_2146_);
lean_inc_ref(v_array_2145_);
v_pos_2363_ = v_fst_2141_;
goto v___jp_2362_;
}
else
{
lean_del_object(v___x_2143_);
lean_del_object(v___x_2137_);
v_pos_2063_ = v_fst_2141_;
goto v___jp_2062_;
}
}
else
{
lean_del_object(v___x_2143_);
lean_del_object(v___x_2137_);
v_pos_2063_ = v_fst_2141_;
goto v___jp_2062_;
}
}
v___jp_2148_:
{
lean_object* v___x_2151_; 
lean_inc_ref(v_pos_2150_);
v___x_2151_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseQuotedString(v_maxChunkExtValueLength_2131_, v_pos_2150_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v_pos_2152_; lean_object* v_res_2153_; 
lean_dec_ref(v_pos_2150_);
v_pos_2152_ = lean_ctor_get(v___x_2151_, 0);
lean_inc(v_pos_2152_);
v_res_2153_ = lean_ctor_get(v___x_2151_, 1);
lean_inc(v_res_2153_);
lean_dec_ref_known(v___x_2151_, 2);
v___y_2077_ = v___y_2149_;
v_pos_2078_ = v_pos_2152_;
v_res_2079_ = v_res_2153_;
goto v___jp_2076_;
}
else
{
lean_object* v_pos_2154_; lean_object* v_err_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2185_; 
v_pos_2154_ = lean_ctor_get(v___x_2151_, 0);
v_err_2155_ = lean_ctor_get(v___x_2151_, 1);
v_isSharedCheck_2185_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2185_ == 0)
{
v___x_2157_ = v___x_2151_;
v_isShared_2158_ = v_isSharedCheck_2185_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_err_2155_);
lean_inc(v_pos_2154_);
lean_dec(v___x_2151_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2185_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v_idx_2159_; lean_object* v_array_2160_; lean_object* v_idx_2161_; uint8_t v___x_2162_; 
v_idx_2159_ = lean_ctor_get(v_pos_2150_, 1);
lean_inc(v_idx_2159_);
lean_dec_ref(v_pos_2150_);
v_array_2160_ = lean_ctor_get(v_pos_2154_, 0);
v_idx_2161_ = lean_ctor_get(v_pos_2154_, 1);
v___x_2162_ = lean_nat_dec_eq(v_idx_2159_, v_idx_2161_);
lean_dec(v_idx_2159_);
if (v___x_2162_ == 0)
{
lean_object* v___x_2164_; 
lean_dec_ref(v___y_2149_);
if (v_isShared_2158_ == 0)
{
v___x_2164_ = v___x_2157_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_pos_2154_);
lean_ctor_set(v_reuseFailAlloc_2165_, 1, v_err_2155_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
else
{
lean_object* v___x_2166_; lean_object* v_snd_2167_; lean_object* v_snd_2168_; uint8_t v___x_2169_; 
lean_dec(v_err_2155_);
lean_inc(v_pos_2154_);
v___x_2166_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2147_, v_maxChunkExtValueLength_2131_, v___x_2133_, v_pos_2154_);
v_snd_2167_ = lean_ctor_get(v___x_2166_, 1);
lean_inc(v_snd_2167_);
v_snd_2168_ = lean_ctor_get(v_snd_2167_, 1);
v___x_2169_ = lean_unbox(v_snd_2168_);
if (v___x_2169_ == 0)
{
lean_object* v_fst_2170_; lean_object* v_fst_2171_; uint8_t v___x_2172_; 
v_fst_2170_ = lean_ctor_get(v___x_2166_, 0);
lean_inc(v_fst_2170_);
lean_dec_ref(v___x_2166_);
v_fst_2171_ = lean_ctor_get(v_snd_2167_, 0);
lean_inc(v_fst_2171_);
lean_dec(v_snd_2167_);
v___x_2172_ = lean_nat_dec_eq(v_fst_2170_, v___x_2133_);
if (v___x_2172_ == 0)
{
lean_object* v___x_2173_; lean_object* v___x_2174_; uint8_t v___x_2175_; 
lean_inc(v_idx_2161_);
lean_inc_ref(v_array_2160_);
lean_del_object(v___x_2157_);
lean_dec(v_pos_2154_);
v___x_2173_ = lean_nat_add(v_idx_2161_, v_fst_2170_);
lean_dec(v_fst_2170_);
v___x_2174_ = lean_byte_array_size(v_array_2160_);
v___x_2175_ = lean_nat_dec_le(v_idx_2161_, v___x_2133_);
if (v___x_2175_ == 0)
{
v___y_2114_ = v___x_2174_;
v___y_2115_ = v___x_2173_;
v___y_2116_ = v_fst_2171_;
v___y_2117_ = v_array_2160_;
v___y_2118_ = v___y_2149_;
v___y_2119_ = v_idx_2161_;
goto v___jp_2113_;
}
else
{
lean_dec(v_idx_2161_);
v___y_2114_ = v___x_2174_;
v___y_2115_ = v___x_2173_;
v___y_2116_ = v_fst_2171_;
v___y_2117_ = v_array_2160_;
v___y_2118_ = v___y_2149_;
v___y_2119_ = v___x_2133_;
goto v___jp_2113_;
}
}
else
{
lean_object* v___x_2176_; lean_object* v___x_2178_; 
lean_dec(v_fst_2171_);
lean_dec(v_fst_2170_);
lean_dec_ref(v___y_2149_);
v___x_2176_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__2));
if (v_isShared_2158_ == 0)
{
lean_ctor_set(v___x_2157_, 1, v___x_2176_);
v___x_2178_ = v___x_2157_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v_pos_2154_);
lean_ctor_set(v_reuseFailAlloc_2179_, 1, v___x_2176_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
}
else
{
lean_object* v_fst_2180_; lean_object* v___x_2181_; lean_object* v___x_2183_; 
lean_dec_ref(v___x_2166_);
lean_dec(v_pos_2154_);
lean_dec_ref(v___y_2149_);
v_fst_2180_ = lean_ctor_get(v_snd_2167_, 0);
lean_inc(v_fst_2180_);
lean_dec(v_snd_2167_);
v___x_2181_ = lean_box(0);
if (v_isShared_2158_ == 0)
{
lean_ctor_set(v___x_2157_, 1, v___x_2181_);
lean_ctor_set(v___x_2157_, 0, v_fst_2180_);
v___x_2183_ = v___x_2157_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v_fst_2180_);
lean_ctor_set(v_reuseFailAlloc_2184_, 1, v___x_2181_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
}
}
}
}
v___jp_2186_:
{
lean_object* v___x_2192_; uint8_t v___x_2193_; 
v___x_2192_ = lean_byte_array_size(v_array_2190_);
v___x_2193_ = lean_nat_dec_lt(v_idx_2191_, v___x_2192_);
if (v___x_2193_ == 0)
{
lean_object* v___x_2194_; lean_object* v___x_2196_; 
lean_dec(v_idx_2191_);
lean_dec_ref(v_array_2190_);
lean_dec_ref(v___y_2188_);
v___x_2194_ = lean_box(0);
if (v_isShared_2144_ == 0)
{
lean_ctor_set_tag(v___x_2143_, 1);
lean_ctor_set(v___x_2143_, 1, v___x_2194_);
lean_ctor_set(v___x_2143_, 0, v_pos_2189_);
v___x_2196_ = v___x_2143_;
goto v_reusejp_2195_;
}
else
{
lean_object* v_reuseFailAlloc_2197_; 
v_reuseFailAlloc_2197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2197_, 0, v_pos_2189_);
lean_ctor_set(v_reuseFailAlloc_2197_, 1, v___x_2194_);
v___x_2196_ = v_reuseFailAlloc_2197_;
goto v_reusejp_2195_;
}
v_reusejp_2195_:
{
return v___x_2196_;
}
}
else
{
uint8_t v___x_2198_; uint8_t v_got_2199_; uint8_t v___x_2200_; 
v___x_2198_ = 61;
v_got_2199_ = lean_byte_array_fget(v_array_2190_, v_idx_2191_);
v___x_2200_ = lean_uint8_dec_eq(v_got_2199_, v___x_2198_);
if (v___x_2200_ == 0)
{
lean_object* v___x_2201_; lean_object* v___x_2203_; 
lean_dec(v_idx_2191_);
lean_dec_ref(v_array_2190_);
lean_dec_ref(v___y_2188_);
v___x_2201_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__3));
if (v_isShared_2144_ == 0)
{
lean_ctor_set_tag(v___x_2143_, 1);
lean_ctor_set(v___x_2143_, 1, v___x_2201_);
lean_ctor_set(v___x_2143_, 0, v_pos_2189_);
v___x_2203_ = v___x_2143_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_pos_2189_);
lean_ctor_set(v_reuseFailAlloc_2204_, 1, v___x_2201_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
else
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2208_; 
lean_dec_ref(v_pos_2189_);
v___x_2205_ = lean_unsigned_to_nat(1u);
v___x_2206_ = lean_nat_add(v_idx_2191_, v___x_2205_);
lean_dec(v_idx_2191_);
if (v_isShared_2144_ == 0)
{
lean_ctor_set(v___x_2143_, 1, v___x_2206_);
lean_ctor_set(v___x_2143_, 0, v_array_2190_);
v___x_2208_ = v___x_2143_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v_array_2190_);
lean_ctor_set(v_reuseFailAlloc_2245_, 1, v___x_2206_);
v___x_2208_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
lean_object* v___x_2209_; 
v___x_2209_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___lam__2(v___f_2132_, v_maxSpaceSequence_2129_, v___y_2187_, v___x_2208_);
if (lean_obj_tag(v___x_2209_) == 0)
{
lean_object* v_pos_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2234_; 
v_pos_2210_ = lean_ctor_get(v___x_2209_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2234_ == 0)
{
lean_object* v_unused_2235_; 
v_unused_2235_ = lean_ctor_get(v___x_2209_, 1);
lean_dec(v_unused_2235_);
v___x_2212_ = v___x_2209_;
v_isShared_2213_ = v_isSharedCheck_2234_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_pos_2210_);
lean_dec(v___x_2209_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2234_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
lean_object* v___x_2214_; lean_object* v_snd_2215_; lean_object* v_snd_2216_; uint8_t v___x_2217_; 
v___x_2214_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2132_, v_maxSpaceSequence_2129_, v___x_2133_, v_pos_2210_);
v_snd_2215_ = lean_ctor_get(v___x_2214_, 1);
lean_inc(v_snd_2215_);
lean_dec_ref(v___x_2214_);
v_snd_2216_ = lean_ctor_get(v_snd_2215_, 1);
v___x_2217_ = lean_unbox(v_snd_2216_);
if (v___x_2217_ == 0)
{
lean_object* v_fst_2218_; lean_object* v_array_2219_; lean_object* v_idx_2220_; lean_object* v___x_2221_; uint8_t v___x_2222_; 
lean_del_object(v___x_2212_);
v_fst_2218_ = lean_ctor_get(v_snd_2215_, 0);
lean_inc(v_fst_2218_);
lean_dec(v_snd_2215_);
v_array_2219_ = lean_ctor_get(v_fst_2218_, 0);
v_idx_2220_ = lean_ctor_get(v_fst_2218_, 1);
v___x_2221_ = lean_byte_array_size(v_array_2219_);
v___x_2222_ = lean_nat_dec_lt(v_idx_2220_, v___x_2221_);
if (v___x_2222_ == 0)
{
v___y_2149_ = v___y_2188_;
v_pos_2150_ = v_fst_2218_;
goto v___jp_2148_;
}
else
{
uint8_t v___x_2223_; uint32_t v___x_2224_; uint32_t v___x_2225_; uint8_t v___x_2226_; 
v___x_2223_ = lean_byte_array_fget(v_array_2219_, v_idx_2220_);
v___x_2224_ = lean_uint8_to_uint32(v___x_2223_);
v___x_2225_ = 32;
v___x_2226_ = lean_uint32_dec_eq(v___x_2224_, v___x_2225_);
if (v___x_2226_ == 0)
{
uint32_t v___x_2227_; uint8_t v___x_2228_; 
v___x_2227_ = 9;
v___x_2228_ = lean_uint32_dec_eq(v___x_2224_, v___x_2227_);
if (v___x_2228_ == 0)
{
v___y_2149_ = v___y_2188_;
v_pos_2150_ = v_fst_2218_;
goto v___jp_2148_;
}
else
{
lean_dec_ref(v___y_2188_);
v_pos_2122_ = v_fst_2218_;
goto v___jp_2121_;
}
}
else
{
lean_dec_ref(v___y_2188_);
v_pos_2122_ = v_fst_2218_;
goto v___jp_2121_;
}
}
}
else
{
lean_object* v_fst_2229_; lean_object* v___x_2230_; lean_object* v___x_2232_; 
lean_dec_ref(v___y_2188_);
v_fst_2229_ = lean_ctor_get(v_snd_2215_, 0);
lean_inc(v_fst_2229_);
lean_dec(v_snd_2215_);
v___x_2230_ = lean_box(0);
if (v_isShared_2213_ == 0)
{
lean_ctor_set_tag(v___x_2212_, 1);
lean_ctor_set(v___x_2212_, 1, v___x_2230_);
lean_ctor_set(v___x_2212_, 0, v_fst_2229_);
v___x_2232_ = v___x_2212_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_fst_2229_);
lean_ctor_set(v_reuseFailAlloc_2233_, 1, v___x_2230_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
}
}
else
{
lean_object* v_pos_2236_; lean_object* v_err_2237_; lean_object* v___x_2239_; uint8_t v_isShared_2240_; uint8_t v_isSharedCheck_2244_; 
lean_dec_ref(v___y_2188_);
v_pos_2236_ = lean_ctor_get(v___x_2209_, 0);
v_err_2237_ = lean_ctor_get(v___x_2209_, 1);
v_isSharedCheck_2244_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2239_ = v___x_2209_;
v_isShared_2240_ = v_isSharedCheck_2244_;
goto v_resetjp_2238_;
}
else
{
lean_inc(v_err_2237_);
lean_inc(v_pos_2236_);
lean_dec(v___x_2209_);
v___x_2239_ = lean_box(0);
v_isShared_2240_ = v_isSharedCheck_2244_;
goto v_resetjp_2238_;
}
v_resetjp_2238_:
{
lean_object* v___x_2242_; 
if (v_isShared_2240_ == 0)
{
v___x_2242_ = v___x_2239_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v_pos_2236_);
lean_ctor_set(v_reuseFailAlloc_2243_, 1, v_err_2237_);
v___x_2242_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
return v___x_2242_;
}
}
}
}
}
}
}
v___jp_2246_:
{
lean_object* v___x_2249_; 
v___x_2249_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_liftOption___redArg(v_res_2248_, v_pos_2247_);
lean_dec(v_res_2248_);
if (lean_obj_tag(v___x_2249_) == 0)
{
lean_object* v_pos_2250_; lean_object* v_res_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; 
v_pos_2250_ = lean_ctor_get(v___x_2249_, 0);
lean_inc(v_pos_2250_);
v_res_2251_ = lean_ctor_get(v___x_2249_, 1);
lean_inc(v_res_2251_);
lean_dec_ref_known(v___x_2249_, 2);
v___x_2252_ = lean_box(0);
v___x_2253_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___lam__2(v___f_2132_, v_maxSpaceSequence_2129_, v___x_2252_, v_pos_2250_);
if (lean_obj_tag(v___x_2253_) == 0)
{
lean_object* v_pos_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2291_; 
v_pos_2254_ = lean_ctor_get(v___x_2253_, 0);
v_isSharedCheck_2291_ = !lean_is_exclusive(v___x_2253_);
if (v_isSharedCheck_2291_ == 0)
{
lean_object* v_unused_2292_; 
v_unused_2292_ = lean_ctor_get(v___x_2253_, 1);
lean_dec(v_unused_2292_);
v___x_2256_ = v___x_2253_;
v_isShared_2257_ = v_isSharedCheck_2291_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_pos_2254_);
lean_dec(v___x_2253_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2291_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v___x_2258_; 
v___x_2258_ = l_Std_Http_Chunk_ExtensionName_ofString_x3f(v_res_2251_);
if (lean_obj_tag(v___x_2258_) == 1)
{
lean_object* v_val_2259_; lean_object* v_array_2260_; lean_object* v_idx_2261_; lean_object* v___x_2262_; uint8_t v___x_2263_; 
v_val_2259_ = lean_ctor_get(v___x_2258_, 0);
lean_inc(v_val_2259_);
lean_dec_ref_known(v___x_2258_, 1);
v_array_2260_ = lean_ctor_get(v_pos_2254_, 0);
v_idx_2261_ = lean_ctor_get(v_pos_2254_, 1);
v___x_2262_ = lean_byte_array_size(v_array_2260_);
v___x_2263_ = lean_nat_dec_lt(v_idx_2261_, v___x_2262_);
if (v___x_2263_ == 0)
{
lean_del_object(v___x_2256_);
lean_del_object(v___x_2143_);
v___y_2071_ = v_val_2259_;
v_pos_2072_ = v_pos_2254_;
goto v___jp_2070_;
}
else
{
uint8_t v___x_2264_; uint8_t v___x_2265_; uint8_t v___x_2266_; 
v___x_2264_ = lean_byte_array_fget(v_array_2260_, v_idx_2261_);
v___x_2265_ = 61;
v___x_2266_ = lean_uint8_dec_eq(v___x_2264_, v___x_2265_);
if (v___x_2266_ == 0)
{
lean_del_object(v___x_2256_);
lean_del_object(v___x_2143_);
v___y_2071_ = v_val_2259_;
v_pos_2072_ = v_pos_2254_;
goto v___jp_2070_;
}
else
{
lean_object* v___x_2267_; lean_object* v_snd_2268_; lean_object* v_snd_2269_; uint8_t v___x_2270_; 
v___x_2267_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2132_, v_maxSpaceSequence_2129_, v___x_2133_, v_pos_2254_);
v_snd_2268_ = lean_ctor_get(v___x_2267_, 1);
lean_inc(v_snd_2268_);
lean_dec_ref(v___x_2267_);
v_snd_2269_ = lean_ctor_get(v_snd_2268_, 1);
v___x_2270_ = lean_unbox(v_snd_2269_);
if (v___x_2270_ == 0)
{
lean_object* v_fst_2271_; lean_object* v_array_2272_; lean_object* v_idx_2273_; lean_object* v___x_2274_; uint8_t v___x_2275_; 
lean_del_object(v___x_2256_);
v_fst_2271_ = lean_ctor_get(v_snd_2268_, 0);
lean_inc(v_fst_2271_);
lean_dec(v_snd_2268_);
v_array_2272_ = lean_ctor_get(v_fst_2271_, 0);
v_idx_2273_ = lean_ctor_get(v_fst_2271_, 1);
v___x_2274_ = lean_byte_array_size(v_array_2272_);
v___x_2275_ = lean_nat_dec_lt(v_idx_2273_, v___x_2274_);
if (v___x_2275_ == 0)
{
lean_inc(v_idx_2273_);
lean_inc_ref(v_array_2272_);
v___y_2187_ = v___x_2252_;
v___y_2188_ = v_val_2259_;
v_pos_2189_ = v_fst_2271_;
v_array_2190_ = v_array_2272_;
v_idx_2191_ = v_idx_2273_;
goto v___jp_2186_;
}
else
{
uint8_t v___x_2276_; uint32_t v___x_2277_; uint32_t v___x_2278_; uint8_t v___x_2279_; 
v___x_2276_ = lean_byte_array_fget(v_array_2272_, v_idx_2273_);
v___x_2277_ = lean_uint8_to_uint32(v___x_2276_);
v___x_2278_ = 32;
v___x_2279_ = lean_uint32_dec_eq(v___x_2277_, v___x_2278_);
if (v___x_2279_ == 0)
{
uint32_t v___x_2280_; uint8_t v___x_2281_; 
v___x_2280_ = 9;
v___x_2281_ = lean_uint32_dec_eq(v___x_2277_, v___x_2280_);
if (v___x_2281_ == 0)
{
lean_inc(v_idx_2273_);
lean_inc_ref(v_array_2272_);
v___y_2187_ = v___x_2252_;
v___y_2188_ = v_val_2259_;
v_pos_2189_ = v_fst_2271_;
v_array_2190_ = v_array_2272_;
v_idx_2191_ = v_idx_2273_;
goto v___jp_2186_;
}
else
{
lean_dec(v_val_2259_);
lean_del_object(v___x_2143_);
v_pos_2126_ = v_fst_2271_;
goto v___jp_2125_;
}
}
else
{
lean_dec(v_val_2259_);
lean_del_object(v___x_2143_);
v_pos_2126_ = v_fst_2271_;
goto v___jp_2125_;
}
}
}
else
{
lean_object* v_fst_2282_; lean_object* v___x_2283_; lean_object* v___x_2285_; 
lean_dec(v_val_2259_);
lean_del_object(v___x_2143_);
v_fst_2282_ = lean_ctor_get(v_snd_2268_, 0);
lean_inc(v_fst_2282_);
lean_dec(v_snd_2268_);
v___x_2283_ = lean_box(0);
if (v_isShared_2257_ == 0)
{
lean_ctor_set_tag(v___x_2256_, 1);
lean_ctor_set(v___x_2256_, 1, v___x_2283_);
lean_ctor_set(v___x_2256_, 0, v_fst_2282_);
v___x_2285_ = v___x_2256_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_fst_2282_);
lean_ctor_set(v_reuseFailAlloc_2286_, 1, v___x_2283_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
return v___x_2285_;
}
}
}
}
}
else
{
lean_object* v___x_2287_; lean_object* v___x_2289_; 
lean_dec(v___x_2258_);
lean_del_object(v___x_2143_);
v___x_2287_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__5));
if (v_isShared_2257_ == 0)
{
lean_ctor_set_tag(v___x_2256_, 1);
lean_ctor_set(v___x_2256_, 1, v___x_2287_);
v___x_2289_ = v___x_2256_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v_pos_2254_);
lean_ctor_set(v_reuseFailAlloc_2290_, 1, v___x_2287_);
v___x_2289_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
return v___x_2289_;
}
}
}
}
else
{
lean_object* v_pos_2293_; lean_object* v_err_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2301_; 
lean_dec(v_res_2251_);
lean_del_object(v___x_2143_);
v_pos_2293_ = lean_ctor_get(v___x_2253_, 0);
v_err_2294_ = lean_ctor_get(v___x_2253_, 1);
v_isSharedCheck_2301_ = !lean_is_exclusive(v___x_2253_);
if (v_isSharedCheck_2301_ == 0)
{
v___x_2296_ = v___x_2253_;
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_err_2294_);
lean_inc(v_pos_2293_);
lean_dec(v___x_2253_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v___x_2299_; 
if (v_isShared_2297_ == 0)
{
v___x_2299_ = v___x_2296_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v_pos_2293_);
lean_ctor_set(v_reuseFailAlloc_2300_, 1, v_err_2294_);
v___x_2299_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
return v___x_2299_;
}
}
}
}
else
{
lean_object* v_pos_2302_; lean_object* v_err_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2310_; 
lean_del_object(v___x_2143_);
v_pos_2302_ = lean_ctor_get(v___x_2249_, 0);
v_err_2303_ = lean_ctor_get(v___x_2249_, 1);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2249_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2305_ = v___x_2249_;
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_err_2303_);
lean_inc(v_pos_2302_);
lean_dec(v___x_2249_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2310_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2308_; 
if (v_isShared_2306_ == 0)
{
v___x_2308_ = v___x_2305_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_pos_2302_);
lean_ctor_set(v_reuseFailAlloc_2309_, 1, v_err_2303_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
}
v___jp_2311_:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; uint8_t v___x_2318_; 
v___x_2316_ = l_ByteArray_toByteSlice(v___y_2313_, v_lower_2314_, v_upper_2315_);
v___x_2317_ = l_ByteSlice_toByteArray(v___x_2316_);
v___x_2318_ = lean_string_validate_utf8(v___x_2317_);
if (v___x_2318_ == 0)
{
lean_object* v___x_2319_; 
lean_dec_ref(v___x_2317_);
v___x_2319_ = lean_box(0);
v_pos_2247_ = v___y_2312_;
v_res_2248_ = v___x_2319_;
goto v___jp_2246_;
}
else
{
lean_object* v___x_2320_; lean_object* v___x_2321_; 
v___x_2320_ = lean_string_from_utf8_unchecked(v___x_2317_);
v___x_2321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2321_, 0, v___x_2320_);
v_pos_2247_ = v___y_2312_;
v_res_2248_ = v___x_2321_;
goto v___jp_2246_;
}
}
v___jp_2322_:
{
uint8_t v___x_2328_; 
v___x_2328_ = lean_nat_dec_le(v___y_2325_, v___y_2324_);
if (v___x_2328_ == 0)
{
lean_dec(v___y_2325_);
v___y_2312_ = v___y_2323_;
v___y_2313_ = v___y_2326_;
v_lower_2314_ = v___y_2327_;
v_upper_2315_ = v___y_2324_;
goto v___jp_2311_;
}
else
{
lean_dec(v___y_2324_);
v___y_2312_ = v___y_2323_;
v___y_2313_ = v___y_2326_;
v_lower_2314_ = v___y_2327_;
v_upper_2315_ = v___y_2325_;
goto v___jp_2311_;
}
}
v___jp_2329_:
{
lean_object* v___x_2331_; lean_object* v_snd_2332_; lean_object* v_snd_2333_; uint8_t v___x_2334_; 
lean_inc_ref(v_pos_2330_);
v___x_2331_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2147_, v_maxChunkExtNameLength_2130_, v___x_2133_, v_pos_2330_);
v_snd_2332_ = lean_ctor_get(v___x_2331_, 1);
lean_inc(v_snd_2332_);
v_snd_2333_ = lean_ctor_get(v_snd_2332_, 1);
v___x_2334_ = lean_unbox(v_snd_2333_);
if (v___x_2334_ == 0)
{
lean_object* v_fst_2335_; lean_object* v_fst_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2350_; 
v_fst_2335_ = lean_ctor_get(v___x_2331_, 0);
lean_inc(v_fst_2335_);
lean_dec_ref(v___x_2331_);
v_fst_2336_ = lean_ctor_get(v_snd_2332_, 0);
v_isSharedCheck_2350_ = !lean_is_exclusive(v_snd_2332_);
if (v_isSharedCheck_2350_ == 0)
{
lean_object* v_unused_2351_; 
v_unused_2351_ = lean_ctor_get(v_snd_2332_, 1);
lean_dec(v_unused_2351_);
v___x_2338_ = v_snd_2332_;
v_isShared_2339_ = v_isSharedCheck_2350_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_fst_2336_);
lean_dec(v_snd_2332_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2350_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
uint8_t v___x_2340_; 
v___x_2340_ = lean_nat_dec_eq(v_fst_2335_, v___x_2133_);
if (v___x_2340_ == 0)
{
lean_object* v_array_2341_; lean_object* v_idx_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; uint8_t v___x_2345_; 
lean_del_object(v___x_2338_);
v_array_2341_ = lean_ctor_get(v_pos_2330_, 0);
lean_inc_ref(v_array_2341_);
v_idx_2342_ = lean_ctor_get(v_pos_2330_, 1);
lean_inc(v_idx_2342_);
lean_dec_ref(v_pos_2330_);
v___x_2343_ = lean_nat_add(v_idx_2342_, v_fst_2335_);
lean_dec(v_fst_2335_);
v___x_2344_ = lean_byte_array_size(v_array_2341_);
v___x_2345_ = lean_nat_dec_le(v_idx_2342_, v___x_2133_);
if (v___x_2345_ == 0)
{
v___y_2323_ = v_fst_2336_;
v___y_2324_ = v___x_2344_;
v___y_2325_ = v___x_2343_;
v___y_2326_ = v_array_2341_;
v___y_2327_ = v_idx_2342_;
goto v___jp_2322_;
}
else
{
lean_dec(v_idx_2342_);
v___y_2323_ = v_fst_2336_;
v___y_2324_ = v___x_2344_;
v___y_2325_ = v___x_2343_;
v___y_2326_ = v_array_2341_;
v___y_2327_ = v___x_2133_;
goto v___jp_2322_;
}
}
else
{
lean_object* v___x_2346_; lean_object* v___x_2348_; 
lean_dec(v_fst_2336_);
lean_dec(v_fst_2335_);
lean_del_object(v___x_2143_);
v___x_2346_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseToken___closed__2));
if (v_isShared_2339_ == 0)
{
lean_ctor_set_tag(v___x_2338_, 1);
lean_ctor_set(v___x_2338_, 1, v___x_2346_);
lean_ctor_set(v___x_2338_, 0, v_pos_2330_);
v___x_2348_ = v___x_2338_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_pos_2330_);
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
else
{
lean_object* v_fst_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2360_; 
lean_dec_ref(v___x_2331_);
lean_dec_ref(v_pos_2330_);
lean_del_object(v___x_2143_);
v_fst_2352_ = lean_ctor_get(v_snd_2332_, 0);
v_isSharedCheck_2360_ = !lean_is_exclusive(v_snd_2332_);
if (v_isSharedCheck_2360_ == 0)
{
lean_object* v_unused_2361_; 
v_unused_2361_ = lean_ctor_get(v_snd_2332_, 1);
lean_dec(v_unused_2361_);
v___x_2354_ = v_snd_2332_;
v_isShared_2355_ = v_isSharedCheck_2360_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_fst_2352_);
lean_dec(v_snd_2332_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2360_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2356_; lean_object* v___x_2358_; 
v___x_2356_ = lean_box(0);
if (v_isShared_2355_ == 0)
{
lean_ctor_set_tag(v___x_2354_, 1);
lean_ctor_set(v___x_2354_, 1, v___x_2356_);
v___x_2358_ = v___x_2354_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v_fst_2352_);
lean_ctor_set(v_reuseFailAlloc_2359_, 1, v___x_2356_);
v___x_2358_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
return v___x_2358_;
}
}
}
}
v___jp_2362_:
{
lean_object* v___x_2364_; uint8_t v___x_2365_; 
v___x_2364_ = lean_byte_array_size(v_array_2145_);
v___x_2365_ = lean_nat_dec_lt(v_idx_2146_, v___x_2364_);
if (v___x_2365_ == 0)
{
lean_object* v___x_2366_; lean_object* v___x_2368_; 
lean_dec(v_idx_2146_);
lean_dec_ref(v_array_2145_);
lean_del_object(v___x_2143_);
v___x_2366_ = lean_box(0);
if (v_isShared_2138_ == 0)
{
lean_ctor_set_tag(v___x_2137_, 1);
lean_ctor_set(v___x_2137_, 1, v___x_2366_);
lean_ctor_set(v___x_2137_, 0, v_pos_2363_);
v___x_2368_ = v___x_2137_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v_pos_2363_);
lean_ctor_set(v_reuseFailAlloc_2369_, 1, v___x_2366_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
return v___x_2368_;
}
}
else
{
uint8_t v___x_2370_; uint8_t v_got_2371_; uint8_t v___x_2372_; 
v___x_2370_ = 59;
v_got_2371_ = lean_byte_array_fget(v_array_2145_, v_idx_2146_);
v___x_2372_ = lean_uint8_dec_eq(v_got_2371_, v___x_2370_);
if (v___x_2372_ == 0)
{
lean_object* v___x_2373_; lean_object* v___x_2375_; 
lean_dec(v_idx_2146_);
lean_dec_ref(v_array_2145_);
lean_del_object(v___x_2143_);
v___x_2373_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___closed__7));
if (v_isShared_2138_ == 0)
{
lean_ctor_set_tag(v___x_2137_, 1);
lean_ctor_set(v___x_2137_, 1, v___x_2373_);
lean_ctor_set(v___x_2137_, 0, v_pos_2363_);
v___x_2375_ = v___x_2137_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_pos_2363_);
lean_ctor_set(v_reuseFailAlloc_2376_, 1, v___x_2373_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
else
{
lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2380_; 
lean_dec_ref(v_pos_2363_);
v___x_2377_ = lean_unsigned_to_nat(1u);
v___x_2378_ = lean_nat_add(v_idx_2146_, v___x_2377_);
lean_dec(v_idx_2146_);
if (v_isShared_2138_ == 0)
{
lean_ctor_set(v___x_2137_, 1, v___x_2378_);
lean_ctor_set(v___x_2137_, 0, v_array_2145_);
v___x_2380_ = v___x_2137_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v_array_2145_);
lean_ctor_set(v_reuseFailAlloc_2406_, 1, v___x_2378_);
v___x_2380_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
lean_object* v___x_2381_; lean_object* v_snd_2382_; lean_object* v_snd_2383_; uint8_t v___x_2384_; 
v___x_2381_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2132_, v_maxSpaceSequence_2129_, v___x_2133_, v___x_2380_);
v_snd_2382_ = lean_ctor_get(v___x_2381_, 1);
lean_inc(v_snd_2382_);
lean_dec_ref(v___x_2381_);
v_snd_2383_ = lean_ctor_get(v_snd_2382_, 1);
v___x_2384_ = lean_unbox(v_snd_2383_);
if (v___x_2384_ == 0)
{
lean_object* v_fst_2385_; lean_object* v_array_2386_; lean_object* v_idx_2387_; lean_object* v___x_2388_; uint8_t v___x_2389_; 
v_fst_2385_ = lean_ctor_get(v_snd_2382_, 0);
lean_inc(v_fst_2385_);
lean_dec(v_snd_2382_);
v_array_2386_ = lean_ctor_get(v_fst_2385_, 0);
v_idx_2387_ = lean_ctor_get(v_fst_2385_, 1);
v___x_2388_ = lean_byte_array_size(v_array_2386_);
v___x_2389_ = lean_nat_dec_lt(v_idx_2387_, v___x_2388_);
if (v___x_2389_ == 0)
{
v_pos_2330_ = v_fst_2385_;
goto v___jp_2329_;
}
else
{
uint8_t v___x_2390_; uint32_t v___x_2391_; uint32_t v___x_2392_; uint8_t v___x_2393_; 
v___x_2390_ = lean_byte_array_fget(v_array_2386_, v_idx_2387_);
v___x_2391_ = lean_uint8_to_uint32(v___x_2390_);
v___x_2392_ = 32;
v___x_2393_ = lean_uint32_dec_eq(v___x_2391_, v___x_2392_);
if (v___x_2393_ == 0)
{
uint32_t v___x_2394_; uint8_t v___x_2395_; 
v___x_2394_ = 9;
v___x_2395_ = lean_uint32_dec_eq(v___x_2391_, v___x_2394_);
if (v___x_2395_ == 0)
{
v_pos_2330_ = v_fst_2385_;
goto v___jp_2329_;
}
else
{
lean_del_object(v___x_2143_);
v_pos_2067_ = v_fst_2385_;
goto v___jp_2066_;
}
}
else
{
lean_del_object(v___x_2143_);
v_pos_2067_ = v_fst_2385_;
goto v___jp_2066_;
}
}
}
else
{
lean_object* v_fst_2396_; lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2404_; 
lean_del_object(v___x_2143_);
v_fst_2396_ = lean_ctor_get(v_snd_2382_, 0);
v_isSharedCheck_2404_ = !lean_is_exclusive(v_snd_2382_);
if (v_isSharedCheck_2404_ == 0)
{
lean_object* v_unused_2405_; 
v_unused_2405_ = lean_ctor_get(v_snd_2382_, 1);
lean_dec(v_unused_2405_);
v___x_2398_ = v_snd_2382_;
v_isShared_2399_ = v_isSharedCheck_2404_;
goto v_resetjp_2397_;
}
else
{
lean_inc(v_fst_2396_);
lean_dec(v_snd_2382_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2404_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
lean_object* v___x_2400_; lean_object* v___x_2402_; 
v___x_2400_ = lean_box(0);
if (v_isShared_2399_ == 0)
{
lean_ctor_set_tag(v___x_2398_, 1);
lean_ctor_set(v___x_2398_, 1, v___x_2400_);
v___x_2402_ = v___x_2398_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2403_, 0, v_fst_2396_);
lean_ctor_set(v_reuseFailAlloc_2403_, 1, v___x_2400_);
v___x_2402_ = v_reuseFailAlloc_2403_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
return v___x_2402_;
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
lean_object* v_fst_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2425_; 
lean_del_object(v___x_2137_);
v_fst_2417_ = lean_ctor_get(v_snd_2135_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v_snd_2135_);
if (v_isSharedCheck_2425_ == 0)
{
lean_object* v_unused_2426_; 
v_unused_2426_ = lean_ctor_get(v_snd_2135_, 1);
lean_dec(v_unused_2426_);
v___x_2419_ = v_snd_2135_;
v_isShared_2420_ = v_isSharedCheck_2425_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_fst_2417_);
lean_dec(v_snd_2135_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2425_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2421_; lean_object* v___x_2423_; 
v___x_2421_ = lean_box(0);
if (v_isShared_2420_ == 0)
{
lean_ctor_set_tag(v___x_2419_, 1);
lean_ctor_set(v___x_2419_, 1, v___x_2421_);
v___x_2423_ = v___x_2419_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_fst_2417_);
lean_ctor_set(v_reuseFailAlloc_2424_, 1, v___x_2421_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt___boxed(lean_object* v_limits_2429_, lean_object* v_a_2430_){
_start:
{
lean_object* v_res_2431_; 
v_res_2431_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt(v_limits_2429_, v_a_2430_);
lean_dec_ref(v_limits_2429_);
return v_res_2431_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSize___lam__0(lean_object* v_limits_2432_, lean_object* v___y_2433_){
_start:
{
lean_object* v___x_2434_; 
v___x_2434_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseChunkExt(v_limits_2432_, v___y_2433_);
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_object* v_pos_2435_; lean_object* v_res_2436_; lean_object* v___x_2438_; uint8_t v_isShared_2439_; uint8_t v_isSharedCheck_2444_; 
v_pos_2435_ = lean_ctor_get(v___x_2434_, 0);
v_res_2436_ = lean_ctor_get(v___x_2434_, 1);
v_isSharedCheck_2444_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2438_ = v___x_2434_;
v_isShared_2439_ = v_isSharedCheck_2444_;
goto v_resetjp_2437_;
}
else
{
lean_inc(v_res_2436_);
lean_inc(v_pos_2435_);
lean_dec(v___x_2434_);
v___x_2438_ = lean_box(0);
v_isShared_2439_ = v_isSharedCheck_2444_;
goto v_resetjp_2437_;
}
v_resetjp_2437_:
{
lean_object* v___x_2440_; lean_object* v___x_2442_; 
v___x_2440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2440_, 0, v_res_2436_);
if (v_isShared_2439_ == 0)
{
lean_ctor_set(v___x_2438_, 1, v___x_2440_);
v___x_2442_ = v___x_2438_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v_pos_2435_);
lean_ctor_set(v_reuseFailAlloc_2443_, 1, v___x_2440_);
v___x_2442_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
return v___x_2442_;
}
}
}
else
{
lean_object* v_pos_2445_; lean_object* v_err_2446_; lean_object* v___x_2448_; uint8_t v_isShared_2449_; uint8_t v_isSharedCheck_2453_; 
v_pos_2445_ = lean_ctor_get(v___x_2434_, 0);
v_err_2446_ = lean_ctor_get(v___x_2434_, 1);
v_isSharedCheck_2453_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2453_ == 0)
{
v___x_2448_ = v___x_2434_;
v_isShared_2449_ = v_isSharedCheck_2453_;
goto v_resetjp_2447_;
}
else
{
lean_inc(v_err_2446_);
lean_inc(v_pos_2445_);
lean_dec(v___x_2434_);
v___x_2448_ = lean_box(0);
v_isShared_2449_ = v_isSharedCheck_2453_;
goto v_resetjp_2447_;
}
v_resetjp_2447_:
{
lean_object* v___x_2451_; 
if (v_isShared_2449_ == 0)
{
v___x_2451_ = v___x_2448_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2452_; 
v_reuseFailAlloc_2452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2452_, 0, v_pos_2445_);
lean_ctor_set(v_reuseFailAlloc_2452_, 1, v_err_2446_);
v___x_2451_ = v_reuseFailAlloc_2452_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
return v___x_2451_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSize___lam__0___boxed(lean_object* v_limits_2454_, lean_object* v___y_2455_){
_start:
{
lean_object* v_res_2456_; 
v_res_2456_ = l_Std_Http_Protocol_H1_parseChunkSize___lam__0(v_limits_2454_, v___y_2455_);
lean_dec_ref(v_limits_2454_);
return v_res_2456_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSize(lean_object* v_limits_2457_, lean_object* v_a_2458_){
_start:
{
lean_object* v___x_2459_; 
v___x_2459_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_hex(v_a_2458_);
if (lean_obj_tag(v___x_2459_) == 0)
{
lean_object* v_pos_2460_; lean_object* v_res_2461_; lean_object* v_maxChunkExtensions_2462_; lean_object* v___f_2463_; lean_object* v___x_2464_; 
v_pos_2460_ = lean_ctor_get(v___x_2459_, 0);
lean_inc(v_pos_2460_);
v_res_2461_ = lean_ctor_get(v___x_2459_, 1);
lean_inc(v_res_2461_);
lean_dec_ref_known(v___x_2459_, 2);
v_maxChunkExtensions_2462_ = lean_ctor_get(v_limits_2457_, 10);
lean_inc(v_maxChunkExtensions_2462_);
v___f_2463_ = lean_alloc_closure((void*)(l_Std_Http_Protocol_H1_parseChunkSize___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2463_, 0, v_limits_2457_);
v___x_2464_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg(v___f_2463_, v_maxChunkExtensions_2462_, v_pos_2460_);
if (lean_obj_tag(v___x_2464_) == 0)
{
lean_object* v_pos_2465_; lean_object* v_res_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; 
v_pos_2465_ = lean_ctor_get(v___x_2464_, 0);
lean_inc(v_pos_2465_);
v_res_2466_ = lean_ctor_get(v___x_2464_, 1);
lean_inc(v_res_2466_);
lean_dec_ref_known(v___x_2464_, 2);
v___x_2467_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_2468_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_2467_, v_pos_2465_);
if (lean_obj_tag(v___x_2468_) == 0)
{
lean_object* v_pos_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2477_; 
v_pos_2469_ = lean_ctor_get(v___x_2468_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2468_);
if (v_isSharedCheck_2477_ == 0)
{
lean_object* v_unused_2478_; 
v_unused_2478_ = lean_ctor_get(v___x_2468_, 1);
lean_dec(v_unused_2478_);
v___x_2471_ = v___x_2468_;
v_isShared_2472_ = v_isSharedCheck_2477_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_pos_2469_);
lean_dec(v___x_2468_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2477_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2473_; lean_object* v___x_2475_; 
v___x_2473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2473_, 0, v_res_2461_);
lean_ctor_set(v___x_2473_, 1, v_res_2466_);
if (v_isShared_2472_ == 0)
{
lean_ctor_set(v___x_2471_, 1, v___x_2473_);
v___x_2475_ = v___x_2471_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_pos_2469_);
lean_ctor_set(v_reuseFailAlloc_2476_, 1, v___x_2473_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
else
{
lean_object* v_pos_2479_; lean_object* v_err_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2487_; 
lean_dec(v_res_2466_);
lean_dec(v_res_2461_);
v_pos_2479_ = lean_ctor_get(v___x_2468_, 0);
v_err_2480_ = lean_ctor_get(v___x_2468_, 1);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2468_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2482_ = v___x_2468_;
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_err_2480_);
lean_inc(v_pos_2479_);
lean_dec(v___x_2468_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2485_; 
if (v_isShared_2483_ == 0)
{
v___x_2485_ = v___x_2482_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_pos_2479_);
lean_ctor_set(v_reuseFailAlloc_2486_, 1, v_err_2480_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
}
else
{
lean_object* v_pos_2488_; lean_object* v_err_2489_; lean_object* v___x_2491_; uint8_t v_isShared_2492_; uint8_t v_isSharedCheck_2496_; 
lean_dec(v_res_2461_);
v_pos_2488_ = lean_ctor_get(v___x_2464_, 0);
v_err_2489_ = lean_ctor_get(v___x_2464_, 1);
v_isSharedCheck_2496_ = !lean_is_exclusive(v___x_2464_);
if (v_isSharedCheck_2496_ == 0)
{
v___x_2491_ = v___x_2464_;
v_isShared_2492_ = v_isSharedCheck_2496_;
goto v_resetjp_2490_;
}
else
{
lean_inc(v_err_2489_);
lean_inc(v_pos_2488_);
lean_dec(v___x_2464_);
v___x_2491_ = lean_box(0);
v_isShared_2492_ = v_isSharedCheck_2496_;
goto v_resetjp_2490_;
}
v_resetjp_2490_:
{
lean_object* v___x_2494_; 
if (v_isShared_2492_ == 0)
{
v___x_2494_ = v___x_2491_;
goto v_reusejp_2493_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v_pos_2488_);
lean_ctor_set(v_reuseFailAlloc_2495_, 1, v_err_2489_);
v___x_2494_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2493_;
}
v_reusejp_2493_:
{
return v___x_2494_;
}
}
}
}
else
{
lean_object* v_pos_2497_; lean_object* v_err_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2505_; 
lean_dec_ref(v_limits_2457_);
v_pos_2497_ = lean_ctor_get(v___x_2459_, 0);
v_err_2498_ = lean_ctor_get(v___x_2459_, 1);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2459_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2500_ = v___x_2459_;
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_err_2498_);
lean_inc(v_pos_2497_);
lean_dec(v___x_2459_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2503_; 
if (v_isShared_2501_ == 0)
{
v___x_2503_ = v___x_2500_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_pos_2497_);
lean_ctor_set(v_reuseFailAlloc_2504_, 1, v_err_2498_);
v___x_2503_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
return v___x_2503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorIdx___impl(lean_object* v_x_2506_){
_start:
{
lean_object* v___x_2507_; 
v___x_2507_ = lean_obj_tag_nat(v_x_2506_);
return v___x_2507_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorIdx___impl___boxed(lean_object* v_x_2508_){
_start:
{
lean_object* v_res_2509_; 
v_res_2509_ = l_Std_Http_Protocol_H1_TakeResult_ctorIdx___impl(v_x_2508_);
lean_dec_ref(v_x_2508_);
return v_res_2509_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorElim___redArg(lean_object* v_t_2510_, lean_object* v_k_2511_){
_start:
{
if (lean_obj_tag(v_t_2510_) == 0)
{
lean_object* v_data_2512_; lean_object* v___x_2513_; 
v_data_2512_ = lean_ctor_get(v_t_2510_, 0);
lean_inc_ref(v_data_2512_);
lean_dec_ref_known(v_t_2510_, 1);
v___x_2513_ = lean_apply_1(v_k_2511_, v_data_2512_);
return v___x_2513_;
}
else
{
lean_object* v_data_2514_; lean_object* v_remaining_2515_; lean_object* v___x_2516_; 
v_data_2514_ = lean_ctor_get(v_t_2510_, 0);
lean_inc_ref(v_data_2514_);
v_remaining_2515_ = lean_ctor_get(v_t_2510_, 1);
lean_inc(v_remaining_2515_);
lean_dec_ref_known(v_t_2510_, 2);
v___x_2516_ = lean_apply_2(v_k_2511_, v_data_2514_, v_remaining_2515_);
return v___x_2516_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorElim(lean_object* v_motive_2517_, lean_object* v_ctorIdx_2518_, lean_object* v_t_2519_, lean_object* v_h_2520_, lean_object* v_k_2521_){
_start:
{
lean_object* v___x_2522_; 
v___x_2522_ = l_Std_Http_Protocol_H1_TakeResult_ctorElim___redArg(v_t_2519_, v_k_2521_);
return v___x_2522_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_ctorElim___boxed(lean_object* v_motive_2523_, lean_object* v_ctorIdx_2524_, lean_object* v_t_2525_, lean_object* v_h_2526_, lean_object* v_k_2527_){
_start:
{
lean_object* v_res_2528_; 
v_res_2528_ = l_Std_Http_Protocol_H1_TakeResult_ctorElim(v_motive_2523_, v_ctorIdx_2524_, v_t_2525_, v_h_2526_, v_k_2527_);
lean_dec(v_ctorIdx_2524_);
return v_res_2528_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_complete_elim___redArg(lean_object* v_t_2529_, lean_object* v_complete_2530_){
_start:
{
lean_object* v___x_2531_; 
v___x_2531_ = l_Std_Http_Protocol_H1_TakeResult_ctorElim___redArg(v_t_2529_, v_complete_2530_);
return v___x_2531_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_complete_elim(lean_object* v_motive_2532_, lean_object* v_t_2533_, lean_object* v_h_2534_, lean_object* v_complete_2535_){
_start:
{
lean_object* v___x_2536_; 
v___x_2536_ = l_Std_Http_Protocol_H1_TakeResult_ctorElim___redArg(v_t_2533_, v_complete_2535_);
return v___x_2536_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_incomplete_elim___redArg(lean_object* v_t_2537_, lean_object* v_incomplete_2538_){
_start:
{
lean_object* v___x_2539_; 
v___x_2539_ = l_Std_Http_Protocol_H1_TakeResult_ctorElim___redArg(v_t_2537_, v_incomplete_2538_);
return v___x_2539_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_TakeResult_incomplete_elim(lean_object* v_motive_2540_, lean_object* v_t_2541_, lean_object* v_h_2542_, lean_object* v_incomplete_2543_){
_start:
{
lean_object* v___x_2544_; 
v___x_2544_ = l_Std_Http_Protocol_H1_TakeResult_ctorElim___redArg(v_t_2541_, v_incomplete_2543_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkPartial(lean_object* v_limits_2545_, lean_object* v_a_2546_){
_start:
{
lean_object* v___x_2547_; 
v___x_2547_ = l_Std_Http_Protocol_H1_parseChunkSize(v_limits_2545_, v_a_2546_);
if (lean_obj_tag(v___x_2547_) == 0)
{
lean_object* v_res_2548_; lean_object* v_pos_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2589_; 
v_res_2548_ = lean_ctor_get(v___x_2547_, 1);
v_pos_2549_ = lean_ctor_get(v___x_2547_, 0);
v_isSharedCheck_2589_ = !lean_is_exclusive(v___x_2547_);
if (v_isSharedCheck_2589_ == 0)
{
v___x_2551_ = v___x_2547_;
v_isShared_2552_ = v_isSharedCheck_2589_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_res_2548_);
lean_inc(v_pos_2549_);
lean_dec(v___x_2547_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2589_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
lean_object* v_fst_2553_; lean_object* v_snd_2554_; lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2588_; 
v_fst_2553_ = lean_ctor_get(v_res_2548_, 0);
v_snd_2554_ = lean_ctor_get(v_res_2548_, 1);
v_isSharedCheck_2588_ = !lean_is_exclusive(v_res_2548_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2556_ = v_res_2548_;
v_isShared_2557_ = v_isSharedCheck_2588_;
goto v_resetjp_2555_;
}
else
{
lean_inc(v_snd_2554_);
lean_inc(v_fst_2553_);
lean_dec(v_res_2548_);
v___x_2556_ = lean_box(0);
v_isShared_2557_ = v_isSharedCheck_2588_;
goto v_resetjp_2555_;
}
v_resetjp_2555_:
{
lean_object* v___x_2558_; uint8_t v___x_2559_; 
v___x_2558_ = lean_unsigned_to_nat(0u);
v___x_2559_ = lean_nat_dec_eq(v_fst_2553_, v___x_2558_);
if (v___x_2559_ == 0)
{
lean_object* v___x_2560_; 
lean_del_object(v___x_2551_);
v___x_2560_ = l_Std_Internal_Parsec_ByteArray_take(v_fst_2553_, v_pos_2549_);
if (lean_obj_tag(v___x_2560_) == 0)
{
lean_object* v_pos_2561_; lean_object* v_res_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2574_; 
v_pos_2561_ = lean_ctor_get(v___x_2560_, 0);
v_res_2562_ = lean_ctor_get(v___x_2560_, 1);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2560_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2564_ = v___x_2560_;
v_isShared_2565_ = v_isSharedCheck_2574_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_res_2562_);
lean_inc(v_pos_2561_);
lean_dec(v___x_2560_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2574_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
if (v_isShared_2557_ == 0)
{
lean_ctor_set(v___x_2556_, 1, v_res_2562_);
lean_ctor_set(v___x_2556_, 0, v_snd_2554_);
v___x_2567_ = v___x_2556_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_snd_2554_);
lean_ctor_set(v_reuseFailAlloc_2573_, 1, v_res_2562_);
v___x_2567_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2571_; 
v___x_2568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2568_, 0, v_fst_2553_);
lean_ctor_set(v___x_2568_, 1, v___x_2567_);
v___x_2569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2568_);
if (v_isShared_2565_ == 0)
{
lean_ctor_set(v___x_2564_, 1, v___x_2569_);
v___x_2571_ = v___x_2564_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v_pos_2561_);
lean_ctor_set(v_reuseFailAlloc_2572_, 1, v___x_2569_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
return v___x_2571_;
}
}
}
}
else
{
lean_object* v_pos_2575_; lean_object* v_err_2576_; lean_object* v___x_2578_; uint8_t v_isShared_2579_; uint8_t v_isSharedCheck_2583_; 
lean_del_object(v___x_2556_);
lean_dec(v_snd_2554_);
lean_dec(v_fst_2553_);
v_pos_2575_ = lean_ctor_get(v___x_2560_, 0);
v_err_2576_ = lean_ctor_get(v___x_2560_, 1);
v_isSharedCheck_2583_ = !lean_is_exclusive(v___x_2560_);
if (v_isSharedCheck_2583_ == 0)
{
v___x_2578_ = v___x_2560_;
v_isShared_2579_ = v_isSharedCheck_2583_;
goto v_resetjp_2577_;
}
else
{
lean_inc(v_err_2576_);
lean_inc(v_pos_2575_);
lean_dec(v___x_2560_);
v___x_2578_ = lean_box(0);
v_isShared_2579_ = v_isSharedCheck_2583_;
goto v_resetjp_2577_;
}
v_resetjp_2577_:
{
lean_object* v___x_2581_; 
if (v_isShared_2579_ == 0)
{
v___x_2581_ = v___x_2578_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v_pos_2575_);
lean_ctor_set(v_reuseFailAlloc_2582_, 1, v_err_2576_);
v___x_2581_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
return v___x_2581_;
}
}
}
}
else
{
lean_object* v___x_2584_; lean_object* v___x_2586_; 
lean_del_object(v___x_2556_);
lean_dec(v_snd_2554_);
lean_dec(v_fst_2553_);
v___x_2584_ = lean_box(0);
if (v_isShared_2552_ == 0)
{
lean_ctor_set(v___x_2551_, 1, v___x_2584_);
v___x_2586_ = v___x_2551_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v_pos_2549_);
lean_ctor_set(v_reuseFailAlloc_2587_, 1, v___x_2584_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
}
}
else
{
lean_object* v_pos_2590_; lean_object* v_err_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2598_; 
v_pos_2590_ = lean_ctor_get(v___x_2547_, 0);
v_err_2591_ = lean_ctor_get(v___x_2547_, 1);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2547_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2593_ = v___x_2547_;
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_err_2591_);
lean_inc(v_pos_2590_);
lean_dec(v___x_2547_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2596_; 
if (v_isShared_2594_ == 0)
{
v___x_2596_ = v___x_2593_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v_pos_2590_);
lean_ctor_set(v_reuseFailAlloc_2597_, 1, v_err_2591_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseFixedSizeData(lean_object* v_size_2599_, lean_object* v_it_2600_){
_start:
{
lean_object* v___x_2601_; lean_object* v___x_2602_; uint8_t v___x_2603_; 
v___x_2601_ = l_ByteArray_Iterator_remainingBytes(v_it_2600_);
v___x_2602_ = lean_unsigned_to_nat(0u);
v___x_2603_ = lean_nat_dec_eq(v___x_2601_, v___x_2602_);
if (v___x_2603_ == 0)
{
uint8_t v___x_2604_; 
v___x_2604_ = lean_nat_dec_lt(v___x_2601_, v_size_2599_);
if (v___x_2604_ == 0)
{
lean_object* v_array_2605_; lean_object* v_idx_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2625_; 
lean_dec(v___x_2601_);
v_array_2605_ = lean_ctor_get(v_it_2600_, 0);
v_idx_2606_ = lean_ctor_get(v_it_2600_, 1);
v_isSharedCheck_2625_ = !lean_is_exclusive(v_it_2600_);
if (v_isSharedCheck_2625_ == 0)
{
v___x_2608_ = v_it_2600_;
v_isShared_2609_ = v_isSharedCheck_2625_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_idx_2606_);
lean_inc(v_array_2605_);
lean_dec(v_it_2600_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2625_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v___x_2610_; lean_object* v___x_2612_; 
v___x_2610_ = lean_nat_add(v_idx_2606_, v_size_2599_);
lean_inc(v___x_2610_);
lean_inc_ref(v_array_2605_);
if (v_isShared_2609_ == 0)
{
lean_ctor_set(v___x_2608_, 1, v___x_2610_);
v___x_2612_ = v___x_2608_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v_array_2605_);
lean_ctor_set(v_reuseFailAlloc_2624_, 1, v___x_2610_);
v___x_2612_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
lean_object* v_lower_2614_; lean_object* v_upper_2615_; lean_object* v___x_2619_; lean_object* v___y_2621_; uint8_t v___x_2623_; 
v___x_2619_ = lean_byte_array_size(v_array_2605_);
v___x_2623_ = lean_nat_dec_le(v_idx_2606_, v___x_2602_);
if (v___x_2623_ == 0)
{
v___y_2621_ = v_idx_2606_;
goto v___jp_2620_;
}
else
{
lean_dec(v_idx_2606_);
v___y_2621_ = v___x_2602_;
goto v___jp_2620_;
}
v___jp_2613_:
{
lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2616_ = l_ByteArray_toByteSlice(v_array_2605_, v_lower_2614_, v_upper_2615_);
v___x_2617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2617_, 0, v___x_2616_);
v___x_2618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2612_);
lean_ctor_set(v___x_2618_, 1, v___x_2617_);
return v___x_2618_;
}
v___jp_2620_:
{
uint8_t v___x_2622_; 
v___x_2622_ = lean_nat_dec_le(v___x_2610_, v___x_2619_);
if (v___x_2622_ == 0)
{
lean_dec(v___x_2610_);
v_lower_2614_ = v___y_2621_;
v_upper_2615_ = v___x_2619_;
goto v___jp_2613_;
}
else
{
v_lower_2614_ = v___y_2621_;
v_upper_2615_ = v___x_2610_;
goto v___jp_2613_;
}
}
}
}
}
else
{
lean_object* v_array_2626_; lean_object* v_idx_2627_; lean_object* v___x_2629_; uint8_t v_isShared_2630_; uint8_t v_isSharedCheck_2647_; 
v_array_2626_ = lean_ctor_get(v_it_2600_, 0);
v_idx_2627_ = lean_ctor_get(v_it_2600_, 1);
v_isSharedCheck_2647_ = !lean_is_exclusive(v_it_2600_);
if (v_isSharedCheck_2647_ == 0)
{
v___x_2629_ = v_it_2600_;
v_isShared_2630_ = v_isSharedCheck_2647_;
goto v_resetjp_2628_;
}
else
{
lean_inc(v_idx_2627_);
lean_inc(v_array_2626_);
lean_dec(v_it_2600_);
v___x_2629_ = lean_box(0);
v_isShared_2630_ = v_isSharedCheck_2647_;
goto v_resetjp_2628_;
}
v_resetjp_2628_:
{
lean_object* v___x_2631_; lean_object* v___x_2633_; 
v___x_2631_ = lean_nat_add(v_idx_2627_, v___x_2601_);
lean_inc(v___x_2631_);
lean_inc_ref(v_array_2626_);
if (v_isShared_2630_ == 0)
{
lean_ctor_set(v___x_2629_, 1, v___x_2631_);
v___x_2633_ = v___x_2629_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_array_2626_);
lean_ctor_set(v_reuseFailAlloc_2646_, 1, v___x_2631_);
v___x_2633_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
lean_object* v_lower_2635_; lean_object* v_upper_2636_; lean_object* v___x_2641_; lean_object* v___y_2643_; uint8_t v___x_2645_; 
v___x_2641_ = lean_byte_array_size(v_array_2626_);
v___x_2645_ = lean_nat_dec_le(v_idx_2627_, v___x_2602_);
if (v___x_2645_ == 0)
{
v___y_2643_ = v_idx_2627_;
goto v___jp_2642_;
}
else
{
lean_dec(v_idx_2627_);
v___y_2643_ = v___x_2602_;
goto v___jp_2642_;
}
v___jp_2634_:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
v___x_2637_ = l_ByteArray_toByteSlice(v_array_2626_, v_lower_2635_, v_upper_2636_);
v___x_2638_ = lean_nat_sub(v_size_2599_, v___x_2601_);
lean_dec(v___x_2601_);
v___x_2639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2639_, 0, v___x_2637_);
lean_ctor_set(v___x_2639_, 1, v___x_2638_);
v___x_2640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2633_);
lean_ctor_set(v___x_2640_, 1, v___x_2639_);
return v___x_2640_;
}
v___jp_2642_:
{
uint8_t v___x_2644_; 
v___x_2644_ = lean_nat_dec_le(v___x_2631_, v___x_2641_);
if (v___x_2644_ == 0)
{
lean_dec(v___x_2631_);
v_lower_2635_ = v___y_2643_;
v_upper_2636_ = v___x_2641_;
goto v___jp_2634_;
}
else
{
v_lower_2635_ = v___y_2643_;
v_upper_2636_ = v___x_2631_;
goto v___jp_2634_;
}
}
}
}
}
}
else
{
lean_object* v___x_2648_; lean_object* v___x_2649_; 
lean_dec(v___x_2601_);
v___x_2648_ = lean_box(0);
v___x_2649_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2649_, 0, v_it_2600_);
lean_ctor_set(v___x_2649_, 1, v___x_2648_);
return v___x_2649_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseFixedSizeData___boxed(lean_object* v_size_2650_, lean_object* v_it_2651_){
_start:
{
lean_object* v_res_2652_; 
v_res_2652_ = l_Std_Http_Protocol_H1_parseFixedSizeData(v_size_2650_, v_it_2651_);
lean_dec(v_size_2650_);
return v_res_2652_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSizedData(lean_object* v_size_2653_, lean_object* v_a_2654_){
_start:
{
lean_object* v___x_2655_; 
v___x_2655_ = l_Std_Http_Protocol_H1_parseFixedSizeData(v_size_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2655_) == 0)
{
lean_object* v_res_2656_; 
v_res_2656_ = lean_ctor_get(v___x_2655_, 1);
if (lean_obj_tag(v_res_2656_) == 0)
{
lean_object* v_pos_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; 
lean_inc_ref(v_res_2656_);
v_pos_2657_ = lean_ctor_get(v___x_2655_, 0);
lean_inc(v_pos_2657_);
lean_dec_ref_known(v___x_2655_, 2);
v___x_2658_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_2659_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_2658_, v_pos_2657_);
if (lean_obj_tag(v___x_2659_) == 0)
{
lean_object* v_pos_2660_; lean_object* v___x_2662_; uint8_t v_isShared_2663_; uint8_t v_isSharedCheck_2667_; 
v_pos_2660_ = lean_ctor_get(v___x_2659_, 0);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2667_ == 0)
{
lean_object* v_unused_2668_; 
v_unused_2668_ = lean_ctor_get(v___x_2659_, 1);
lean_dec(v_unused_2668_);
v___x_2662_ = v___x_2659_;
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
else
{
lean_inc(v_pos_2660_);
lean_dec(v___x_2659_);
v___x_2662_ = lean_box(0);
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
v_resetjp_2661_:
{
lean_object* v___x_2665_; 
if (v_isShared_2663_ == 0)
{
lean_ctor_set(v___x_2662_, 1, v_res_2656_);
v___x_2665_ = v___x_2662_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v_pos_2660_);
lean_ctor_set(v_reuseFailAlloc_2666_, 1, v_res_2656_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
return v___x_2665_;
}
}
}
else
{
lean_object* v_pos_2669_; lean_object* v_err_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2677_; 
lean_dec_ref_known(v_res_2656_, 1);
v_pos_2669_ = lean_ctor_get(v___x_2659_, 0);
v_err_2670_ = lean_ctor_get(v___x_2659_, 1);
v_isSharedCheck_2677_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2677_ == 0)
{
v___x_2672_ = v___x_2659_;
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_err_2670_);
lean_inc(v_pos_2669_);
lean_dec(v___x_2659_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___x_2675_; 
if (v_isShared_2673_ == 0)
{
v___x_2675_ = v___x_2672_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v_pos_2669_);
lean_ctor_set(v_reuseFailAlloc_2676_, 1, v_err_2670_);
v___x_2675_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
return v___x_2675_;
}
}
}
}
else
{
return v___x_2655_;
}
}
else
{
return v___x_2655_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseChunkSizedData___boxed(lean_object* v_size_2678_, lean_object* v_a_2679_){
_start:
{
lean_object* v_res_2680_; 
v_res_2680_ = l_Std_Http_Protocol_H1_parseChunkSizedData(v_size_2678_, v_a_2679_);
lean_dec(v_size_2678_);
return v_res_2680_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField_spec__0(lean_object* v_s_2681_, lean_object* v_p_2682_){
_start:
{
lean_object* v___y_2684_; lean_object* v___y_2685_; uint32_t v___y_2689_; lean_object* v___x_2701_; uint8_t v_decide_2702_; 
v___x_2701_ = lean_string_utf8_byte_size(v_s_2681_);
v_decide_2702_ = lean_nat_dec_eq(v_p_2682_, v___x_2701_);
if (v_decide_2702_ == 0)
{
uint32_t v___x_2703_; uint32_t v___x_2704_; uint8_t v___x_2705_; 
v___x_2703_ = lean_string_utf8_get_fast(v_s_2681_, v_p_2682_);
v___x_2704_ = 65;
v___x_2705_ = lean_uint32_dec_le(v___x_2704_, v___x_2703_);
if (v___x_2705_ == 0)
{
v___y_2689_ = v___x_2703_;
goto v___jp_2688_;
}
else
{
uint32_t v___x_2706_; uint8_t v___x_2707_; 
v___x_2706_ = 90;
v___x_2707_ = lean_uint32_dec_le(v___x_2703_, v___x_2706_);
if (v___x_2707_ == 0)
{
v___y_2689_ = v___x_2703_;
goto v___jp_2688_;
}
else
{
uint32_t v___x_2708_; uint32_t v___x_2709_; 
v___x_2708_ = 32;
v___x_2709_ = lean_uint32_add(v___x_2703_, v___x_2708_);
v___y_2689_ = v___x_2709_;
goto v___jp_2688_;
}
}
}
else
{
lean_dec(v_p_2682_);
return v_s_2681_;
}
v___jp_2683_:
{
lean_object* v___x_2686_; 
v___x_2686_ = lean_nat_add(v_p_2682_, v___y_2685_);
lean_dec(v_p_2682_);
v_s_2681_ = v___y_2684_;
v_p_2682_ = v___x_2686_;
goto _start;
}
v___jp_2688_:
{
lean_object* v___x_2690_; uint32_t v___x_2691_; uint8_t v___x_2692_; 
lean_inc(v_p_2682_);
v___x_2690_ = lean_string_utf8_set(v_s_2681_, v_p_2682_, v___y_2689_);
v___x_2691_ = 127;
v___x_2692_ = lean_uint32_dec_le(v___y_2689_, v___x_2691_);
if (v___x_2692_ == 0)
{
uint32_t v___x_2693_; uint8_t v___x_2694_; 
v___x_2693_ = 2047;
v___x_2694_ = lean_uint32_dec_le(v___y_2689_, v___x_2693_);
if (v___x_2694_ == 0)
{
uint32_t v___x_2695_; uint8_t v___x_2696_; 
v___x_2695_ = 65535;
v___x_2696_ = lean_uint32_dec_le(v___y_2689_, v___x_2695_);
if (v___x_2696_ == 0)
{
lean_object* v___x_2697_; 
v___x_2697_ = lean_unsigned_to_nat(4u);
v___y_2684_ = v___x_2690_;
v___y_2685_ = v___x_2697_;
goto v___jp_2683_;
}
else
{
lean_object* v___x_2698_; 
v___x_2698_ = lean_unsigned_to_nat(3u);
v___y_2684_ = v___x_2690_;
v___y_2685_ = v___x_2698_;
goto v___jp_2683_;
}
}
else
{
lean_object* v___x_2699_; 
v___x_2699_ = lean_unsigned_to_nat(2u);
v___y_2684_ = v___x_2690_;
v___y_2685_ = v___x_2699_;
goto v___jp_2683_;
}
}
else
{
lean_object* v___x_2700_; 
v___x_2700_ = lean_unsigned_to_nat(1u);
v___y_2684_ = v___x_2690_;
v___y_2685_ = v___x_2700_;
goto v___jp_2683_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField(lean_object* v_name_2717_){
_start:
{
lean_object* v___x_2718_; lean_object* v_n_2719_; lean_object* v___x_2720_; uint8_t v___x_2721_; 
v___x_2718_ = lean_unsigned_to_nat(0u);
v_n_2719_ = l_String_mapAux___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField_spec__0(v_name_2717_, v___x_2718_);
v___x_2720_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__0));
v___x_2721_ = lean_string_dec_eq(v_n_2719_, v___x_2720_);
if (v___x_2721_ == 0)
{
lean_object* v___x_2722_; uint8_t v___x_2723_; 
v___x_2722_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__1));
v___x_2723_ = lean_string_dec_eq(v_n_2719_, v___x_2722_);
if (v___x_2723_ == 0)
{
lean_object* v___x_2724_; uint8_t v___x_2725_; 
v___x_2724_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__2));
v___x_2725_ = lean_string_dec_eq(v_n_2719_, v___x_2724_);
if (v___x_2725_ == 0)
{
lean_object* v___x_2726_; uint8_t v___x_2727_; 
v___x_2726_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__3));
v___x_2727_ = lean_string_dec_eq(v_n_2719_, v___x_2726_);
if (v___x_2727_ == 0)
{
lean_object* v___x_2728_; uint8_t v___x_2729_; 
v___x_2728_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__4));
v___x_2729_ = lean_string_dec_eq(v_n_2719_, v___x_2728_);
if (v___x_2729_ == 0)
{
lean_object* v___x_2730_; uint8_t v___x_2731_; 
v___x_2730_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__5));
v___x_2731_ = lean_string_dec_eq(v_n_2719_, v___x_2730_);
if (v___x_2731_ == 0)
{
lean_object* v___x_2732_; uint8_t v___x_2733_; 
v___x_2732_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___closed__6));
v___x_2733_ = lean_string_dec_eq(v_n_2719_, v___x_2732_);
lean_dec_ref(v_n_2719_);
return v___x_2733_;
}
else
{
lean_dec_ref(v_n_2719_);
return v___x_2731_;
}
}
else
{
lean_dec_ref(v_n_2719_);
return v___x_2729_;
}
}
else
{
lean_dec_ref(v_n_2719_);
return v___x_2727_;
}
}
else
{
lean_dec_ref(v_n_2719_);
return v___x_2725_;
}
}
else
{
lean_dec_ref(v_n_2719_);
return v___x_2723_;
}
}
else
{
lean_dec_ref(v_n_2719_);
return v___x_2721_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField___boxed(lean_object* v_name_2734_){
_start:
{
uint8_t v_res_2735_; lean_object* v_r_2736_; 
v_res_2735_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField(v_name_2734_);
v_r_2736_ = lean_box(v_res_2735_);
return v_r_2736_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField(lean_object* v_name_2742_){
_start:
{
lean_object* v___x_2743_; lean_object* v_n_2744_; uint8_t v___x_2745_; 
v___x_2743_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_name_2742_);
v_n_2744_ = l_String_mapAux___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField_spec__0(v_name_2742_, v___x_2743_);
v___x_2745_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField(v_name_2742_);
if (v___x_2745_ == 0)
{
lean_object* v___x_2746_; uint8_t v___x_2747_; 
v___x_2746_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__0));
v___x_2747_ = lean_string_dec_eq(v_n_2744_, v___x_2746_);
if (v___x_2747_ == 0)
{
lean_object* v___x_2748_; uint8_t v___x_2749_; 
v___x_2748_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__1));
v___x_2749_ = lean_string_dec_eq(v_n_2744_, v___x_2748_);
if (v___x_2749_ == 0)
{
lean_object* v___x_2750_; uint8_t v___x_2751_; 
v___x_2750_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__2));
v___x_2751_ = lean_string_dec_eq(v_n_2744_, v___x_2750_);
if (v___x_2751_ == 0)
{
lean_object* v___x_2752_; uint8_t v___x_2753_; 
v___x_2752_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__3));
v___x_2753_ = lean_string_dec_eq(v_n_2744_, v___x_2752_);
if (v___x_2753_ == 0)
{
lean_object* v___x_2754_; uint8_t v___x_2755_; 
v___x_2754_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___closed__4));
v___x_2755_ = lean_string_dec_eq(v_n_2744_, v___x_2754_);
lean_dec_ref(v_n_2744_);
return v___x_2755_;
}
else
{
lean_dec_ref(v_n_2744_);
return v___x_2753_;
}
}
else
{
lean_dec_ref(v_n_2744_);
return v___x_2751_;
}
}
else
{
lean_dec_ref(v_n_2744_);
return v___x_2749_;
}
}
else
{
lean_dec_ref(v_n_2744_);
return v___x_2747_;
}
}
else
{
lean_dec_ref(v_n_2744_);
return v___x_2745_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField___boxed(lean_object* v_name_2756_){
_start:
{
uint8_t v_res_2757_; lean_object* v_r_2758_; 
v_res_2757_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField(v_name_2756_);
v_r_2758_ = lean_box(v_res_2757_);
return v_r_2758_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseTrailerHeader(lean_object* v_limits_2760_, uint8_t v_strict_2761_, lean_object* v_a_2762_){
_start:
{
lean_object* v___x_2763_; 
v___x_2763_ = l_Std_Http_Protocol_H1_parseSingleHeader(v_limits_2760_, v_a_2762_);
if (lean_obj_tag(v___x_2763_) == 0)
{
lean_object* v_res_2764_; 
v_res_2764_ = lean_ctor_get(v___x_2763_, 1);
lean_inc(v_res_2764_);
if (lean_obj_tag(v_res_2764_) == 1)
{
lean_object* v_val_2765_; lean_object* v___x_2767_; uint8_t v_isShared_2768_; uint8_t v_isSharedCheck_2787_; 
v_val_2765_ = lean_ctor_get(v_res_2764_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v_res_2764_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2767_ = v_res_2764_;
v_isShared_2768_ = v_isSharedCheck_2787_;
goto v_resetjp_2766_;
}
else
{
lean_inc(v_val_2765_);
lean_dec(v_res_2764_);
v___x_2767_ = lean_box(0);
v_isShared_2768_ = v_isSharedCheck_2787_;
goto v_resetjp_2766_;
}
v_resetjp_2766_:
{
lean_object* v_pos_2769_; lean_object* v_fst_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2785_; 
v_pos_2769_ = lean_ctor_get(v___x_2763_, 0);
v_fst_2770_ = lean_ctor_get(v_val_2765_, 0);
v_isSharedCheck_2785_ = !lean_is_exclusive(v_val_2765_);
if (v_isSharedCheck_2785_ == 0)
{
lean_object* v_unused_2786_; 
v_unused_2786_ = lean_ctor_get(v_val_2765_, 1);
lean_dec(v_unused_2786_);
v___x_2772_ = v_val_2765_;
v_isShared_2773_ = v_isSharedCheck_2785_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_fst_2770_);
lean_dec(v_val_2765_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2785_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
uint8_t v___x_2783_; 
lean_inc(v_fst_2770_);
v___x_2783_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isFramingTrailerField(v_fst_2770_);
if (v___x_2783_ == 0)
{
if (v_strict_2761_ == 0)
{
lean_del_object(v___x_2772_);
lean_dec(v_fst_2770_);
lean_del_object(v___x_2767_);
return v___x_2763_;
}
else
{
uint8_t v___x_2784_; 
lean_inc(v_fst_2770_);
v___x_2784_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isForbiddenTrailerField(v_fst_2770_);
if (v___x_2784_ == 0)
{
lean_del_object(v___x_2772_);
lean_dec(v_fst_2770_);
lean_del_object(v___x_2767_);
return v___x_2763_;
}
else
{
lean_inc(v_pos_2769_);
lean_dec_ref_known(v___x_2763_, 2);
goto v___jp_2774_;
}
}
}
else
{
lean_inc(v_pos_2769_);
lean_dec_ref_known(v___x_2763_, 2);
goto v___jp_2774_;
}
v___jp_2774_:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2778_; 
v___x_2775_ = ((lean_object*)(l_Std_Http_Protocol_H1_parseTrailerHeader___closed__0));
v___x_2776_ = lean_string_append(v___x_2775_, v_fst_2770_);
lean_dec(v_fst_2770_);
if (v_isShared_2768_ == 0)
{
lean_ctor_set(v___x_2767_, 0, v___x_2776_);
v___x_2778_ = v___x_2767_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v___x_2776_);
v___x_2778_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
lean_object* v___x_2780_; 
if (v_isShared_2773_ == 0)
{
lean_ctor_set_tag(v___x_2772_, 1);
lean_ctor_set(v___x_2772_, 1, v___x_2778_);
lean_ctor_set(v___x_2772_, 0, v_pos_2769_);
v___x_2780_ = v___x_2772_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v_pos_2769_);
lean_ctor_set(v_reuseFailAlloc_2781_, 1, v___x_2778_);
v___x_2780_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
return v___x_2780_;
}
}
}
}
}
}
else
{
lean_dec(v_res_2764_);
return v___x_2763_;
}
}
else
{
return v___x_2763_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseTrailerHeader___boxed(lean_object* v_limits_2788_, lean_object* v_strict_2789_, lean_object* v_a_2790_){
_start:
{
uint8_t v_strict_boxed_2791_; lean_object* v_res_2792_; 
v_strict_boxed_2791_ = lean_unbox(v_strict_2789_);
v_res_2792_ = l_Std_Http_Protocol_H1_parseTrailerHeader(v_limits_2788_, v_strict_boxed_2791_, v_a_2790_);
lean_dec_ref(v_limits_2788_);
return v_res_2792_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseTrailers(lean_object* v_limits_2793_, lean_object* v_a_2794_){
_start:
{
lean_object* v_maxTrailerHeaders_2795_; uint8_t v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; 
v_maxTrailerHeaders_2795_ = lean_ctor_get(v_limits_2793_, 17);
lean_inc(v_maxTrailerHeaders_2795_);
v___x_2796_ = 1;
v___x_2797_ = lean_box(v___x_2796_);
v___x_2798_ = lean_alloc_closure((void*)(l_Std_Http_Protocol_H1_parseTrailerHeader___boxed), 3, 2);
lean_closure_set(v___x_2798_, 0, v_limits_2793_);
lean_closure_set(v___x_2798_, 1, v___x_2797_);
v___x_2799_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_manyItems___redArg(v___x_2798_, v_maxTrailerHeaders_2795_, v_a_2794_);
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_object* v_pos_2800_; lean_object* v_res_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; 
v_pos_2800_ = lean_ctor_get(v___x_2799_, 0);
lean_inc(v_pos_2800_);
v_res_2801_ = lean_ctor_get(v___x_2799_, 1);
lean_inc(v_res_2801_);
lean_dec_ref_known(v___x_2799_, 2);
v___x_2802_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_2803_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_2802_, v_pos_2800_);
if (lean_obj_tag(v___x_2803_) == 0)
{
lean_object* v_pos_2804_; lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2811_; 
v_pos_2804_ = lean_ctor_get(v___x_2803_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2803_);
if (v_isSharedCheck_2811_ == 0)
{
lean_object* v_unused_2812_; 
v_unused_2812_ = lean_ctor_get(v___x_2803_, 1);
lean_dec(v_unused_2812_);
v___x_2806_ = v___x_2803_;
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
else
{
lean_inc(v_pos_2804_);
lean_dec(v___x_2803_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v___x_2809_; 
if (v_isShared_2807_ == 0)
{
lean_ctor_set(v___x_2806_, 1, v_res_2801_);
v___x_2809_ = v___x_2806_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v_pos_2804_);
lean_ctor_set(v_reuseFailAlloc_2810_, 1, v_res_2801_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
}
}
}
else
{
lean_object* v_pos_2813_; lean_object* v_err_2814_; lean_object* v___x_2816_; uint8_t v_isShared_2817_; uint8_t v_isSharedCheck_2821_; 
lean_dec(v_res_2801_);
v_pos_2813_ = lean_ctor_get(v___x_2803_, 0);
v_err_2814_ = lean_ctor_get(v___x_2803_, 1);
v_isSharedCheck_2821_ = !lean_is_exclusive(v___x_2803_);
if (v_isSharedCheck_2821_ == 0)
{
v___x_2816_ = v___x_2803_;
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
else
{
lean_inc(v_err_2814_);
lean_inc(v_pos_2813_);
lean_dec(v___x_2803_);
v___x_2816_ = lean_box(0);
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
v_resetjp_2815_:
{
lean_object* v___x_2819_; 
if (v_isShared_2817_ == 0)
{
v___x_2819_ = v___x_2816_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v_pos_2813_);
lean_ctor_set(v_reuseFailAlloc_2820_, 1, v_err_2814_);
v___x_2819_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
return v___x_2819_;
}
}
}
}
else
{
return v___x_2799_;
}
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isReasonPhraseByte(uint8_t v_c_2822_){
_start:
{
uint32_t v___x_2823_; uint32_t v___x_2831_; uint8_t v___x_2832_; 
v___x_2823_ = lean_uint8_to_uint32(v_c_2822_);
v___x_2831_ = 33;
v___x_2832_ = lean_uint32_dec_le(v___x_2831_, v___x_2823_);
if (v___x_2832_ == 0)
{
goto v___jp_2824_;
}
else
{
uint32_t v___x_2833_; uint8_t v___x_2834_; 
v___x_2833_ = 126;
v___x_2834_ = lean_uint32_dec_le(v___x_2823_, v___x_2833_);
if (v___x_2834_ == 0)
{
goto v___jp_2824_;
}
else
{
return v___x_2834_;
}
}
v___jp_2824_:
{
uint32_t v___x_2825_; uint8_t v___x_2826_; 
v___x_2825_ = 128;
v___x_2826_ = lean_uint32_dec_le(v___x_2825_, v___x_2823_);
if (v___x_2826_ == 0)
{
uint32_t v___x_2827_; uint8_t v___x_2828_; 
v___x_2827_ = 32;
v___x_2828_ = lean_uint32_dec_eq(v___x_2823_, v___x_2827_);
if (v___x_2828_ == 0)
{
uint32_t v___x_2829_; uint8_t v___x_2830_; 
v___x_2829_ = 9;
v___x_2830_ = lean_uint32_dec_eq(v___x_2823_, v___x_2829_);
return v___x_2830_;
}
else
{
return v___x_2828_;
}
}
else
{
return v___x_2826_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isReasonPhraseByte___boxed(lean_object* v_c_2835_){
_start:
{
uint8_t v_c_boxed_2836_; uint8_t v_res_2837_; lean_object* v_r_2838_; 
v_c_boxed_2836_ = lean_unbox(v_c_2835_);
v_res_2837_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_isReasonPhraseByte(v_c_boxed_2836_);
v_r_2838_ = lean_box(v_res_2837_);
return v_r_2838_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseReasonPhrase(lean_object* v_limits_2839_, lean_object* v_a_2840_){
_start:
{
lean_object* v_maxReasonPhraseLength_2841_; lean_object* v___f_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v_snd_2845_; lean_object* v_snd_2846_; uint8_t v___x_2847_; 
v_maxReasonPhraseLength_2841_ = lean_ctor_get(v_limits_2839_, 16);
v___f_2842_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__1));
v___x_2843_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_a_2840_);
v___x_2844_ = l___private_Std_Internal_Parsec_ByteArray_0__Std_Internal_Parsec_ByteArray_scanWhileUpTo(v___f_2842_, v_maxReasonPhraseLength_2841_, v___x_2843_, v_a_2840_);
v_snd_2845_ = lean_ctor_get(v___x_2844_, 1);
lean_inc(v_snd_2845_);
v_snd_2846_ = lean_ctor_get(v_snd_2845_, 1);
v___x_2847_ = lean_unbox(v_snd_2846_);
if (v___x_2847_ == 0)
{
lean_object* v_fst_2848_; lean_object* v_fst_2849_; lean_object* v_array_2850_; lean_object* v_idx_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2871_; 
v_fst_2848_ = lean_ctor_get(v___x_2844_, 0);
lean_inc(v_fst_2848_);
lean_dec_ref(v___x_2844_);
v_fst_2849_ = lean_ctor_get(v_snd_2845_, 0);
lean_inc(v_fst_2849_);
lean_dec(v_snd_2845_);
v_array_2850_ = lean_ctor_get(v_a_2840_, 0);
v_idx_2851_ = lean_ctor_get(v_a_2840_, 1);
v_isSharedCheck_2871_ = !lean_is_exclusive(v_a_2840_);
if (v_isSharedCheck_2871_ == 0)
{
v___x_2853_ = v_a_2840_;
v_isShared_2854_ = v_isSharedCheck_2871_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_idx_2851_);
lean_inc(v_array_2850_);
lean_dec(v_a_2840_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2871_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v_lower_2856_; lean_object* v_upper_2857_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___y_2868_; uint8_t v___x_2870_; 
v___x_2865_ = lean_nat_add(v_idx_2851_, v_fst_2848_);
lean_dec(v_fst_2848_);
v___x_2866_ = lean_byte_array_size(v_array_2850_);
v___x_2870_ = lean_nat_dec_le(v_idx_2851_, v___x_2843_);
if (v___x_2870_ == 0)
{
v___y_2868_ = v_idx_2851_;
goto v___jp_2867_;
}
else
{
lean_dec(v_idx_2851_);
v___y_2868_ = v___x_2843_;
goto v___jp_2867_;
}
v___jp_2855_:
{
lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2863_; 
v___x_2858_ = l_ByteArray_toByteSlice(v_array_2850_, v_lower_2856_, v_upper_2857_);
v___x_2859_ = l_ByteSlice_toByteArray(v___x_2858_);
v___x_2860_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__0));
v___x_2861_ = l___private_Init_Data_String_Lossy_0__String_fromUTF8Lossy_go(v___x_2859_, v___x_2843_, v___x_2860_);
lean_dec_ref(v___x_2859_);
if (v_isShared_2854_ == 0)
{
lean_ctor_set(v___x_2853_, 1, v___x_2861_);
lean_ctor_set(v___x_2853_, 0, v_fst_2849_);
v___x_2863_ = v___x_2853_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2864_; 
v_reuseFailAlloc_2864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2864_, 0, v_fst_2849_);
lean_ctor_set(v_reuseFailAlloc_2864_, 1, v___x_2861_);
v___x_2863_ = v_reuseFailAlloc_2864_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
return v___x_2863_;
}
}
v___jp_2867_:
{
uint8_t v___x_2869_; 
v___x_2869_ = lean_nat_dec_le(v___x_2865_, v___x_2866_);
if (v___x_2869_ == 0)
{
lean_dec(v___x_2865_);
v_lower_2856_ = v___y_2868_;
v_upper_2857_ = v___x_2866_;
goto v___jp_2855_;
}
else
{
v_lower_2856_ = v___y_2868_;
v_upper_2857_ = v___x_2865_;
goto v___jp_2855_;
}
}
}
}
else
{
lean_object* v_fst_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2880_; 
lean_dec_ref(v___x_2844_);
lean_dec_ref(v_a_2840_);
v_fst_2872_ = lean_ctor_get(v_snd_2845_, 0);
v_isSharedCheck_2880_ = !lean_is_exclusive(v_snd_2845_);
if (v_isSharedCheck_2880_ == 0)
{
lean_object* v_unused_2881_; 
v_unused_2881_ = lean_ctor_get(v_snd_2845_, 1);
lean_dec(v_unused_2881_);
v___x_2874_ = v_snd_2845_;
v_isShared_2875_ = v_isSharedCheck_2880_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_fst_2872_);
lean_dec(v_snd_2845_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2880_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2876_; lean_object* v___x_2878_; 
v___x_2876_ = lean_box(0);
if (v_isShared_2875_ == 0)
{
lean_ctor_set_tag(v___x_2874_, 1);
lean_ctor_set(v___x_2874_, 1, v___x_2876_);
v___x_2878_ = v___x_2874_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v_fst_2872_);
lean_ctor_set(v_reuseFailAlloc_2879_, 1, v___x_2876_);
v___x_2878_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
return v___x_2878_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseReasonPhrase___boxed(lean_object* v_limits_2882_, lean_object* v_a_2883_){
_start:
{
lean_object* v_res_2884_; 
v_res_2884_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseReasonPhrase(v_limits_2882_, v_a_2883_);
lean_dec_ref(v_limits_2882_);
return v_res_2884_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode_spec__0(lean_object* v_x_2885_){
_start:
{
if (lean_obj_tag(v_x_2885_) == 0)
{
uint8_t v___x_2886_; 
v___x_2886_ = 1;
return v___x_2886_;
}
else
{
lean_object* v_head_2887_; lean_object* v_tail_2888_; uint32_t v___x_2894_; uint32_t v___x_2895_; uint8_t v___x_2896_; 
v_head_2887_ = lean_ctor_get(v_x_2885_, 0);
v_tail_2888_ = lean_ctor_get(v_x_2885_, 1);
v___x_2894_ = 9;
v___x_2895_ = lean_unbox_uint32(v_head_2887_);
v___x_2896_ = lean_uint32_dec_eq(v___x_2895_, v___x_2894_);
if (v___x_2896_ == 0)
{
uint32_t v___x_2897_; uint32_t v___x_2898_; uint8_t v___x_2899_; 
v___x_2897_ = 32;
v___x_2898_ = lean_unbox_uint32(v_head_2887_);
v___x_2899_ = lean_uint32_dec_eq(v___x_2898_, v___x_2897_);
if (v___x_2899_ == 0)
{
uint32_t v___x_2900_; uint32_t v___x_2901_; uint8_t v___x_2902_; 
v___x_2900_ = 33;
v___x_2901_ = lean_unbox_uint32(v_head_2887_);
v___x_2902_ = lean_uint32_dec_le(v___x_2900_, v___x_2901_);
if (v___x_2902_ == 0)
{
goto v___jp_2889_;
}
else
{
uint32_t v___x_2903_; uint32_t v___x_2904_; uint8_t v___x_2905_; 
v___x_2903_ = 126;
v___x_2904_ = lean_unbox_uint32(v_head_2887_);
v___x_2905_ = lean_uint32_dec_le(v___x_2904_, v___x_2903_);
if (v___x_2905_ == 0)
{
goto v___jp_2889_;
}
else
{
v_x_2885_ = v_tail_2888_;
goto _start;
}
}
}
else
{
v_x_2885_ = v_tail_2888_;
goto _start;
}
}
else
{
v_x_2885_ = v_tail_2888_;
goto _start;
}
v___jp_2889_:
{
uint32_t v___x_2890_; uint32_t v___x_2891_; uint8_t v___x_2892_; 
v___x_2890_ = 128;
v___x_2891_ = lean_unbox_uint32(v_head_2887_);
v___x_2892_ = lean_uint32_dec_le(v___x_2890_, v___x_2891_);
if (v___x_2892_ == 0)
{
return v___x_2892_;
}
else
{
v_x_2885_ = v_tail_2888_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode_spec__0___boxed(lean_object* v_x_2909_){
_start:
{
uint8_t v_res_2910_; lean_object* v_r_2911_; 
v_res_2910_ = l_List_all___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode_spec__0(v_x_2909_);
lean_dec(v_x_2909_);
v_r_2911_ = lean_box(v_res_2910_);
return v_r_2911_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode(lean_object* v_limits_2915_, lean_object* v_a_2916_){
_start:
{
lean_object* v___y_2921_; lean_object* v_array_2924_; lean_object* v_idx_2925_; lean_object* v___x_2926_; uint8_t v___x_2927_; 
v_array_2924_ = lean_ctor_get(v_a_2916_, 0);
v_idx_2925_ = lean_ctor_get(v_a_2916_, 1);
v___x_2926_ = lean_byte_array_size(v_array_2924_);
v___x_2927_ = lean_nat_dec_lt(v_idx_2925_, v___x_2926_);
if (v___x_2927_ == 0)
{
lean_object* v___x_2928_; lean_object* v___x_2929_; 
v___x_2928_ = lean_box(0);
v___x_2929_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2929_, 0, v_a_2916_);
lean_ctor_set(v___x_2929_, 1, v___x_2928_);
return v___x_2929_;
}
else
{
uint8_t v_c_2930_; uint8_t v___x_2931_; uint8_t v___x_2932_; 
v_c_2930_ = lean_byte_array_fget(v_array_2924_, v_idx_2925_);
v___x_2931_ = 48;
v___x_2932_ = lean_uint8_dec_le(v___x_2931_, v_c_2930_);
if (v___x_2932_ == 0)
{
goto v___jp_2917_;
}
else
{
uint8_t v___x_2933_; uint8_t v___x_2934_; 
v___x_2933_ = 57;
v___x_2934_ = lean_uint8_dec_le(v_c_2930_, v___x_2933_);
if (v___x_2934_ == 0)
{
goto v___jp_2917_;
}
else
{
lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_3031_; 
lean_inc(v_idx_2925_);
lean_inc_ref(v_array_2924_);
v_isSharedCheck_3031_ = !lean_is_exclusive(v_a_2916_);
if (v_isSharedCheck_3031_ == 0)
{
lean_object* v_unused_3032_; lean_object* v_unused_3033_; 
v_unused_3032_ = lean_ctor_get(v_a_2916_, 1);
lean_dec(v_unused_3032_);
v_unused_3033_ = lean_ctor_get(v_a_2916_, 0);
lean_dec(v_unused_3033_);
v___x_2936_ = v_a_2916_;
v_isShared_2937_ = v_isSharedCheck_3031_;
goto v_resetjp_2935_;
}
else
{
lean_dec(v_a_2916_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_3031_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v_it_x27_2941_; 
v___x_2938_ = lean_unsigned_to_nat(1u);
v___x_2939_ = lean_nat_add(v_idx_2925_, v___x_2938_);
lean_dec(v_idx_2925_);
lean_inc(v___x_2939_);
lean_inc_ref(v_array_2924_);
if (v_isShared_2937_ == 0)
{
lean_ctor_set(v___x_2936_, 1, v___x_2939_);
v_it_x27_2941_ = v___x_2936_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_array_2924_);
lean_ctor_set(v_reuseFailAlloc_3030_, 1, v___x_2939_);
v_it_x27_2941_ = v_reuseFailAlloc_3030_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
uint8_t v___x_2945_; 
v___x_2945_ = lean_nat_dec_lt(v___x_2939_, v___x_2926_);
if (v___x_2945_ == 0)
{
lean_object* v___x_2946_; lean_object* v___x_2947_; 
lean_dec(v___x_2939_);
lean_dec_ref(v_array_2924_);
v___x_2946_ = lean_box(0);
v___x_2947_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2947_, 0, v_it_x27_2941_);
lean_ctor_set(v___x_2947_, 1, v___x_2946_);
return v___x_2947_;
}
else
{
uint8_t v_c_2948_; uint8_t v___x_2949_; 
v_c_2948_ = lean_byte_array_fget(v_array_2924_, v___x_2939_);
v___x_2949_ = lean_uint8_dec_le(v___x_2931_, v_c_2948_);
if (v___x_2949_ == 0)
{
lean_dec(v___x_2939_);
lean_dec_ref(v_array_2924_);
goto v___jp_2942_;
}
else
{
uint8_t v___x_2950_; 
v___x_2950_ = lean_uint8_dec_le(v_c_2948_, v___x_2933_);
if (v___x_2950_ == 0)
{
lean_dec(v___x_2939_);
lean_dec_ref(v_array_2924_);
goto v___jp_2942_;
}
else
{
lean_object* v___x_2951_; lean_object* v_it_x27_2952_; uint8_t v___x_2956_; 
lean_dec_ref(v_it_x27_2941_);
v___x_2951_ = lean_nat_add(v___x_2939_, v___x_2938_);
lean_dec(v___x_2939_);
lean_inc(v___x_2951_);
lean_inc_ref(v_array_2924_);
v_it_x27_2952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_2952_, 0, v_array_2924_);
lean_ctor_set(v_it_x27_2952_, 1, v___x_2951_);
v___x_2956_ = lean_nat_dec_lt(v___x_2951_, v___x_2926_);
if (v___x_2956_ == 0)
{
lean_object* v___x_2957_; lean_object* v___x_2958_; 
lean_dec(v___x_2951_);
lean_dec_ref(v_array_2924_);
v___x_2957_ = lean_box(0);
v___x_2958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2958_, 0, v_it_x27_2952_);
lean_ctor_set(v___x_2958_, 1, v___x_2957_);
return v___x_2958_;
}
else
{
uint8_t v_c_2959_; uint8_t v___x_2960_; 
v_c_2959_ = lean_byte_array_fget(v_array_2924_, v___x_2951_);
v___x_2960_ = lean_uint8_dec_le(v___x_2931_, v_c_2959_);
if (v___x_2960_ == 0)
{
lean_dec(v___x_2951_);
lean_dec_ref(v_array_2924_);
goto v___jp_2953_;
}
else
{
uint8_t v___x_2961_; 
v___x_2961_ = lean_uint8_dec_le(v_c_2959_, v___x_2933_);
if (v___x_2961_ == 0)
{
lean_dec(v___x_2951_);
lean_dec_ref(v_array_2924_);
goto v___jp_2953_;
}
else
{
lean_object* v___x_2962_; uint32_t v___x_2963_; uint32_t v___x_2964_; lean_object* v___x_2965_; lean_object* v_it_x27_2966_; uint32_t v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v_pos_3010_; lean_object* v_idx_3011_; lean_object* v_err_3012_; uint8_t v___x_3016_; 
lean_dec_ref_known(v_it_x27_2952_, 2);
v___x_2962_ = lean_unsigned_to_nat(48u);
v___x_2963_ = lean_uint8_to_uint32(v_c_2930_);
v___x_2964_ = lean_uint8_to_uint32(v_c_2948_);
v___x_2965_ = lean_nat_add(v___x_2951_, v___x_2938_);
lean_dec(v___x_2951_);
lean_inc(v___x_2965_);
lean_inc_ref(v_array_2924_);
v_it_x27_2966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_it_x27_2966_, 0, v_array_2924_);
lean_ctor_set(v_it_x27_2966_, 1, v___x_2965_);
v___x_2967_ = lean_uint8_to_uint32(v_c_2959_);
v___x_2968_ = lean_uint32_to_nat(v___x_2963_);
v___x_2969_ = lean_nat_sub(v___x_2968_, v___x_2962_);
lean_dec(v___x_2968_);
v___x_2970_ = lean_unsigned_to_nat(100u);
v___x_2971_ = lean_nat_mul(v___x_2969_, v___x_2970_);
lean_dec(v___x_2969_);
v___x_2972_ = lean_uint32_to_nat(v___x_2964_);
v___x_2973_ = lean_nat_sub(v___x_2972_, v___x_2962_);
lean_dec(v___x_2972_);
v___x_2974_ = lean_unsigned_to_nat(10u);
v___x_2975_ = lean_nat_mul(v___x_2973_, v___x_2974_);
lean_dec(v___x_2973_);
v___x_2976_ = lean_nat_add(v___x_2971_, v___x_2975_);
lean_dec(v___x_2975_);
lean_dec(v___x_2971_);
v___x_2977_ = lean_uint32_to_nat(v___x_2967_);
v___x_2978_ = lean_nat_sub(v___x_2977_, v___x_2962_);
lean_dec(v___x_2977_);
v___x_2979_ = lean_nat_add(v___x_2976_, v___x_2978_);
lean_dec(v___x_2978_);
lean_dec(v___x_2976_);
v___x_3016_ = lean_nat_dec_lt(v___x_2965_, v___x_2926_);
if (v___x_3016_ == 0)
{
lean_object* v___x_3017_; 
lean_dec_ref(v_array_2924_);
v___x_3017_ = lean_box(0);
lean_inc(v___x_2965_);
v_pos_3010_ = v_it_x27_2966_;
v_idx_3011_ = v___x_2965_;
v_err_3012_ = v___x_3017_;
goto v___jp_3009_;
}
else
{
uint8_t v___x_3018_; uint8_t v_got_3019_; uint8_t v___x_3020_; 
v___x_3018_ = 32;
v_got_3019_ = lean_byte_array_fget(v_array_2924_, v___x_2965_);
v___x_3020_ = lean_uint8_dec_eq(v_got_3019_, v___x_3018_);
if (v___x_3020_ == 0)
{
lean_object* v___x_3021_; 
lean_dec_ref(v_array_2924_);
v___x_3021_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1));
lean_inc(v___x_2965_);
v_pos_3010_ = v_it_x27_2966_;
v_idx_3011_ = v___x_2965_;
v_err_3012_ = v___x_3021_;
goto v___jp_3009_;
}
else
{
lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; 
lean_dec_ref_known(v_it_x27_2966_, 2);
v___x_3022_ = lean_nat_add(v___x_2965_, v___x_2938_);
v___x_3023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3023_, 0, v_array_2924_);
lean_ctor_set(v___x_3023_, 1, v___x_3022_);
v___x_3024_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseReasonPhrase(v_limits_2915_, v___x_3023_);
if (lean_obj_tag(v___x_3024_) == 0)
{
lean_object* v_pos_3025_; lean_object* v_res_3026_; 
lean_dec(v___x_2965_);
v_pos_3025_ = lean_ctor_get(v___x_3024_, 0);
lean_inc(v_pos_3025_);
v_res_3026_ = lean_ctor_get(v___x_3024_, 1);
lean_inc(v_res_3026_);
lean_dec_ref_known(v___x_3024_, 2);
v___y_2981_ = v_pos_3025_;
v___y_2982_ = v_res_3026_;
goto v___jp_2980_;
}
else
{
lean_object* v_pos_3027_; lean_object* v___x_3028_; lean_object* v_idx_3029_; 
v_pos_3027_ = lean_ctor_get(v___x_3024_, 0);
lean_inc(v_pos_3027_);
lean_dec_ref_known(v___x_3024_, 2);
v___x_3028_ = lean_box(0);
v_idx_3029_ = lean_ctor_get(v_pos_3027_, 1);
lean_inc(v_idx_3029_);
v_pos_3010_ = v_pos_3027_;
v_idx_3011_ = v_idx_3029_;
v_err_3012_ = v___x_3028_;
goto v___jp_3009_;
}
}
}
v___jp_2980_:
{
lean_object* v___x_2983_; lean_object* v___x_2984_; 
v___x_2983_ = lean_obj_once(&l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1, &l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1_once, _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_crlf___closed__1);
v___x_2984_ = l_Std_Internal_Parsec_ByteArray_skipBytes(v___x_2983_, v___y_2981_);
if (lean_obj_tag(v___x_2984_) == 0)
{
lean_object* v_pos_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_2998_; 
v_pos_2985_ = lean_ctor_get(v___x_2984_, 0);
v_isSharedCheck_2998_ = !lean_is_exclusive(v___x_2984_);
if (v_isSharedCheck_2998_ == 0)
{
lean_object* v_unused_2999_; 
v_unused_2999_ = lean_ctor_get(v___x_2984_, 1);
lean_dec(v_unused_2999_);
v___x_2987_ = v___x_2984_;
v_isShared_2988_ = v_isSharedCheck_2998_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_pos_2985_);
lean_dec(v___x_2984_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_2998_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2989_; uint8_t v___x_2990_; 
lean_inc_ref(v___y_2982_);
v___x_2989_ = l_String_toListImpl(v___y_2982_);
v___x_2990_ = l_List_all___at___00__private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode_spec__0(v___x_2989_);
lean_dec(v___x_2989_);
if (v___x_2990_ == 0)
{
lean_del_object(v___x_2987_);
lean_dec_ref(v___y_2982_);
lean_dec(v___x_2979_);
v___y_2921_ = v_pos_2985_;
goto v___jp_2920_;
}
else
{
lean_object* v___x_2991_; uint16_t v___x_2992_; lean_object* v___x_2993_; 
v___x_2991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2991_, 0, v___y_2982_);
v___x_2992_ = lean_uint16_of_nat(v___x_2979_);
lean_dec(v___x_2979_);
v___x_2993_ = l_Std_Http_Status_ofCode(v___x_2991_, v___x_2992_);
if (lean_obj_tag(v___x_2993_) == 1)
{
lean_object* v_val_2994_; lean_object* v___x_2996_; 
v_val_2994_ = lean_ctor_get(v___x_2993_, 0);
lean_inc(v_val_2994_);
lean_dec_ref_known(v___x_2993_, 1);
if (v_isShared_2988_ == 0)
{
lean_ctor_set(v___x_2987_, 1, v_val_2994_);
v___x_2996_ = v___x_2987_;
goto v_reusejp_2995_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v_pos_2985_);
lean_ctor_set(v_reuseFailAlloc_2997_, 1, v_val_2994_);
v___x_2996_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2995_;
}
v_reusejp_2995_:
{
return v___x_2996_;
}
}
else
{
lean_dec(v___x_2993_);
lean_del_object(v___x_2987_);
v___y_2921_ = v_pos_2985_;
goto v___jp_2920_;
}
}
}
}
else
{
lean_object* v_pos_3000_; lean_object* v_err_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3008_; 
lean_dec_ref(v___y_2982_);
lean_dec(v___x_2979_);
v_pos_3000_ = lean_ctor_get(v___x_2984_, 0);
v_err_3001_ = lean_ctor_get(v___x_2984_, 1);
v_isSharedCheck_3008_ = !lean_is_exclusive(v___x_2984_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_3003_ = v___x_2984_;
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_err_3001_);
lean_inc(v_pos_3000_);
lean_dec(v___x_2984_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3008_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3006_; 
if (v_isShared_3004_ == 0)
{
v___x_3006_ = v___x_3003_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v_pos_3000_);
lean_ctor_set(v_reuseFailAlloc_3007_, 1, v_err_3001_);
v___x_3006_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
return v___x_3006_;
}
}
}
}
v___jp_3009_:
{
uint8_t v___x_3013_; 
v___x_3013_ = lean_nat_dec_eq(v___x_2965_, v_idx_3011_);
lean_dec(v_idx_3011_);
lean_dec(v___x_2965_);
if (v___x_3013_ == 0)
{
lean_object* v___x_3014_; 
lean_dec(v___x_2979_);
lean_inc(v_err_3012_);
v___x_3014_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3014_, 0, v_pos_3010_);
lean_ctor_set(v___x_3014_, 1, v_err_3012_);
return v___x_3014_;
}
else
{
lean_object* v___x_3015_; 
v___x_3015_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseFieldLine___closed__0));
v___y_2981_ = v_pos_3010_;
v___y_2982_ = v___x_3015_;
goto v___jp_2980_;
}
}
}
}
}
v___jp_2953_:
{
lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___x_2954_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__3));
v___x_2955_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2955_, 0, v_it_x27_2952_);
lean_ctor_set(v___x_2955_, 1, v___x_2954_);
return v___x_2955_;
}
}
}
}
v___jp_2942_:
{
lean_object* v___x_2943_; lean_object* v___x_2944_; 
v___x_2943_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__3));
v___x_2944_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2944_, 0, v_it_x27_2941_);
lean_ctor_set(v___x_2944_, 1, v___x_2943_);
return v___x_2944_;
}
}
}
}
}
}
v___jp_2917_:
{
lean_object* v___x_2918_; lean_object* v___x_2919_; 
v___x_2918_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber___closed__3));
v___x_2919_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2919_, 0, v_a_2916_);
lean_ctor_set(v___x_2919_, 1, v___x_2918_);
return v___x_2919_;
}
v___jp_2920_:
{
lean_object* v___x_2922_; lean_object* v___x_2923_; 
v___x_2922_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___closed__1));
v___x_2923_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2923_, 0, v___y_2921_);
lean_ctor_set(v___x_2923_, 1, v___x_2922_);
return v___x_2923_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode___boxed(lean_object* v_limits_3034_, lean_object* v_a_3035_){
_start:
{
lean_object* v_res_3036_; 
v_res_3036_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode(v_limits_3034_, v_a_3035_);
lean_dec_ref(v_limits_3034_);
return v_res_3036_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseStatusLine(lean_object* v_limits_3037_, lean_object* v_a_3038_){
_start:
{
lean_object* v___x_3039_; 
v___x_3039_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber(v_a_3038_);
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_object* v_pos_3040_; lean_object* v_res_3041_; lean_object* v___x_3043_; uint8_t v_isShared_3044_; uint8_t v_isSharedCheck_3115_; 
v_pos_3040_ = lean_ctor_get(v___x_3039_, 0);
v_res_3041_ = lean_ctor_get(v___x_3039_, 1);
v_isSharedCheck_3115_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3115_ == 0)
{
v___x_3043_ = v___x_3039_;
v_isShared_3044_ = v_isSharedCheck_3115_;
goto v_resetjp_3042_;
}
else
{
lean_inc(v_res_3041_);
lean_inc(v_pos_3040_);
lean_dec(v___x_3039_);
v___x_3043_ = lean_box(0);
v_isShared_3044_ = v_isSharedCheck_3115_;
goto v_resetjp_3042_;
}
v_resetjp_3042_:
{
lean_object* v_array_3045_; lean_object* v_idx_3046_; lean_object* v___x_3047_; uint8_t v___x_3048_; 
v_array_3045_ = lean_ctor_get(v_pos_3040_, 0);
v_idx_3046_ = lean_ctor_get(v_pos_3040_, 1);
v___x_3047_ = lean_byte_array_size(v_array_3045_);
v___x_3048_ = lean_nat_dec_lt(v_idx_3046_, v___x_3047_);
if (v___x_3048_ == 0)
{
lean_object* v___x_3049_; lean_object* v___x_3051_; 
lean_dec(v_res_3041_);
v___x_3049_ = lean_box(0);
if (v_isShared_3044_ == 0)
{
lean_ctor_set_tag(v___x_3043_, 1);
lean_ctor_set(v___x_3043_, 1, v___x_3049_);
v___x_3051_ = v___x_3043_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_pos_3040_);
lean_ctor_set(v_reuseFailAlloc_3052_, 1, v___x_3049_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
return v___x_3051_;
}
}
else
{
uint8_t v___x_3053_; uint8_t v_got_3054_; uint8_t v___x_3055_; 
v___x_3053_ = 32;
v_got_3054_ = lean_byte_array_fget(v_array_3045_, v_idx_3046_);
v___x_3055_ = lean_uint8_dec_eq(v_got_3054_, v___x_3053_);
if (v___x_3055_ == 0)
{
lean_object* v___x_3056_; lean_object* v___x_3058_; 
lean_dec(v_res_3041_);
v___x_3056_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1));
if (v_isShared_3044_ == 0)
{
lean_ctor_set_tag(v___x_3043_, 1);
lean_ctor_set(v___x_3043_, 1, v___x_3056_);
v___x_3058_ = v___x_3043_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v_pos_3040_);
lean_ctor_set(v_reuseFailAlloc_3059_, 1, v___x_3056_);
v___x_3058_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
return v___x_3058_;
}
}
else
{
lean_object* v___x_3061_; uint8_t v_isShared_3062_; uint8_t v_isSharedCheck_3112_; 
lean_inc(v_idx_3046_);
lean_inc_ref(v_array_3045_);
v_isSharedCheck_3112_ = !lean_is_exclusive(v_pos_3040_);
if (v_isSharedCheck_3112_ == 0)
{
lean_object* v_unused_3113_; lean_object* v_unused_3114_; 
v_unused_3113_ = lean_ctor_get(v_pos_3040_, 1);
lean_dec(v_unused_3113_);
v_unused_3114_ = lean_ctor_get(v_pos_3040_, 0);
lean_dec(v_unused_3114_);
v___x_3061_ = v_pos_3040_;
v_isShared_3062_ = v_isSharedCheck_3112_;
goto v_resetjp_3060_;
}
else
{
lean_dec(v_pos_3040_);
v___x_3061_ = lean_box(0);
v_isShared_3062_ = v_isSharedCheck_3112_;
goto v_resetjp_3060_;
}
v_resetjp_3060_:
{
lean_object* v_fst_3063_; lean_object* v_snd_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3111_; 
v_fst_3063_ = lean_ctor_get(v_res_3041_, 0);
v_snd_3064_ = lean_ctor_get(v_res_3041_, 1);
v_isSharedCheck_3111_ = !lean_is_exclusive(v_res_3041_);
if (v_isSharedCheck_3111_ == 0)
{
v___x_3066_ = v_res_3041_;
v_isShared_3067_ = v_isSharedCheck_3111_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_snd_3064_);
lean_inc(v_fst_3063_);
lean_dec(v_res_3041_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3111_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3071_; 
v___x_3068_ = lean_unsigned_to_nat(1u);
v___x_3069_ = lean_nat_add(v_idx_3046_, v___x_3068_);
lean_dec(v_idx_3046_);
if (v_isShared_3062_ == 0)
{
lean_ctor_set(v___x_3061_, 1, v___x_3069_);
v___x_3071_ = v___x_3061_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v_array_3045_);
lean_ctor_set(v_reuseFailAlloc_3110_, 1, v___x_3069_);
v___x_3071_ = v_reuseFailAlloc_3110_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
lean_object* v___x_3072_; 
v___x_3072_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode(v_limits_3037_, v___x_3071_);
if (lean_obj_tag(v___x_3072_) == 0)
{
lean_object* v_pos_3073_; lean_object* v_res_3074_; lean_object* v___x_3076_; uint8_t v_isShared_3077_; uint8_t v_isSharedCheck_3100_; 
v_pos_3073_ = lean_ctor_get(v___x_3072_, 0);
v_res_3074_ = lean_ctor_get(v___x_3072_, 1);
v_isSharedCheck_3100_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3076_ = v___x_3072_;
v_isShared_3077_ = v_isSharedCheck_3100_;
goto v_resetjp_3075_;
}
else
{
lean_inc(v_res_3074_);
lean_inc(v_pos_3073_);
lean_dec(v___x_3072_);
v___x_3076_ = lean_box(0);
v_isShared_3077_ = v_isSharedCheck_3100_;
goto v_resetjp_3075_;
}
v_resetjp_3075_:
{
uint8_t v___x_3083_; 
v___x_3083_ = lean_nat_dec_eq(v_fst_3063_, v___x_3068_);
lean_dec(v_fst_3063_);
if (v___x_3083_ == 0)
{
lean_del_object(v___x_3066_);
goto v___jp_3084_;
}
else
{
uint8_t v___x_3093_; 
v___x_3093_ = lean_nat_dec_le(v___x_3068_, v_snd_3064_);
if (v___x_3093_ == 0)
{
lean_del_object(v___x_3066_);
goto v___jp_3084_;
}
else
{
uint8_t v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3098_; 
lean_del_object(v___x_3076_);
lean_dec(v_snd_3064_);
lean_del_object(v___x_3043_);
v___x_3094_ = 1;
v___x_3095_ = l_Std_Http_Headers_empty;
v___x_3096_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3096_, 0, v_res_3074_);
lean_ctor_set(v___x_3096_, 1, v___x_3095_);
lean_ctor_set_uint8(v___x_3096_, sizeof(void*)*2, v___x_3094_);
if (v_isShared_3067_ == 0)
{
lean_ctor_set(v___x_3066_, 1, v___x_3096_);
lean_ctor_set(v___x_3066_, 0, v_pos_3073_);
v___x_3098_ = v___x_3066_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v_pos_3073_);
lean_ctor_set(v_reuseFailAlloc_3099_, 1, v___x_3096_);
v___x_3098_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
return v___x_3098_;
}
}
}
v___jp_3078_:
{
lean_object* v___x_3079_; lean_object* v___x_3081_; 
v___x_3079_ = ((lean_object*)(l_Std_Http_Protocol_H1_parseRequestLine___closed__1));
if (v_isShared_3077_ == 0)
{
lean_ctor_set_tag(v___x_3076_, 1);
lean_ctor_set(v___x_3076_, 1, v___x_3079_);
v___x_3081_ = v___x_3076_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_pos_3073_);
lean_ctor_set(v_reuseFailAlloc_3082_, 1, v___x_3079_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
v___jp_3084_:
{
if (v___x_3083_ == 0)
{
lean_dec(v_res_3074_);
lean_dec(v_snd_3064_);
lean_del_object(v___x_3043_);
goto v___jp_3078_;
}
else
{
lean_object* v___x_3085_; uint8_t v___x_3086_; 
v___x_3085_ = lean_unsigned_to_nat(0u);
v___x_3086_ = lean_nat_dec_eq(v_snd_3064_, v___x_3085_);
lean_dec(v_snd_3064_);
if (v___x_3086_ == 0)
{
lean_dec(v_res_3074_);
lean_del_object(v___x_3043_);
goto v___jp_3078_;
}
else
{
uint8_t v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3091_; 
lean_del_object(v___x_3076_);
v___x_3087_ = 0;
v___x_3088_ = l_Std_Http_Headers_empty;
v___x_3089_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3089_, 0, v_res_3074_);
lean_ctor_set(v___x_3089_, 1, v___x_3088_);
lean_ctor_set_uint8(v___x_3089_, sizeof(void*)*2, v___x_3087_);
if (v_isShared_3044_ == 0)
{
lean_ctor_set(v___x_3043_, 1, v___x_3089_);
lean_ctor_set(v___x_3043_, 0, v_pos_3073_);
v___x_3091_ = v___x_3043_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_pos_3073_);
lean_ctor_set(v_reuseFailAlloc_3092_, 1, v___x_3089_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
}
}
}
}
else
{
lean_object* v_pos_3101_; lean_object* v_err_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3109_; 
lean_del_object(v___x_3066_);
lean_dec(v_snd_3064_);
lean_dec(v_fst_3063_);
lean_del_object(v___x_3043_);
v_pos_3101_ = lean_ctor_get(v___x_3072_, 0);
v_err_3102_ = lean_ctor_get(v___x_3072_, 1);
v_isSharedCheck_3109_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3109_ == 0)
{
v___x_3104_ = v___x_3072_;
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_err_3102_);
lean_inc(v_pos_3101_);
lean_dec(v___x_3072_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3107_; 
if (v_isShared_3105_ == 0)
{
v___x_3107_ = v___x_3104_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v_pos_3101_);
lean_ctor_set(v_reuseFailAlloc_3108_, 1, v_err_3102_);
v___x_3107_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
return v___x_3107_;
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
lean_object* v_pos_3116_; lean_object* v_err_3117_; lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3124_; 
v_pos_3116_ = lean_ctor_get(v___x_3039_, 0);
v_err_3117_ = lean_ctor_get(v___x_3039_, 1);
v_isSharedCheck_3124_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3119_ = v___x_3039_;
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
else
{
lean_inc(v_err_3117_);
lean_inc(v_pos_3116_);
lean_dec(v___x_3039_);
v___x_3119_ = lean_box(0);
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
v_resetjp_3118_:
{
lean_object* v___x_3122_; 
if (v_isShared_3120_ == 0)
{
v___x_3122_ = v___x_3119_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v_pos_3116_);
lean_ctor_set(v_reuseFailAlloc_3123_, 1, v_err_3117_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseStatusLine___boxed(lean_object* v_limits_3125_, lean_object* v_a_3126_){
_start:
{
lean_object* v_res_3127_; 
v_res_3127_ = l_Std_Http_Protocol_H1_parseStatusLine(v_limits_3125_, v_a_3126_);
lean_dec_ref(v_limits_3125_);
return v_res_3127_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseStatusLineRawVersion(lean_object* v_limits_3128_, lean_object* v_a_3129_){
_start:
{
lean_object* v___x_3130_; 
v___x_3130_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseHttpVersionNumber(v_a_3129_);
if (lean_obj_tag(v___x_3130_) == 0)
{
lean_object* v_pos_3131_; lean_object* v_res_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3195_; 
v_pos_3131_ = lean_ctor_get(v___x_3130_, 0);
v_res_3132_ = lean_ctor_get(v___x_3130_, 1);
v_isSharedCheck_3195_ = !lean_is_exclusive(v___x_3130_);
if (v_isSharedCheck_3195_ == 0)
{
v___x_3134_ = v___x_3130_;
v_isShared_3135_ = v_isSharedCheck_3195_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_res_3132_);
lean_inc(v_pos_3131_);
lean_dec(v___x_3130_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3195_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v_array_3136_; lean_object* v_idx_3137_; lean_object* v___x_3138_; uint8_t v___x_3139_; 
v_array_3136_ = lean_ctor_get(v_pos_3131_, 0);
v_idx_3137_ = lean_ctor_get(v_pos_3131_, 1);
v___x_3138_ = lean_byte_array_size(v_array_3136_);
v___x_3139_ = lean_nat_dec_lt(v_idx_3137_, v___x_3138_);
if (v___x_3139_ == 0)
{
lean_object* v___x_3140_; lean_object* v___x_3142_; 
lean_dec(v_res_3132_);
v___x_3140_ = lean_box(0);
if (v_isShared_3135_ == 0)
{
lean_ctor_set_tag(v___x_3134_, 1);
lean_ctor_set(v___x_3134_, 1, v___x_3140_);
v___x_3142_ = v___x_3134_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(1, 2, 0);
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
else
{
uint8_t v___x_3144_; uint8_t v_got_3145_; uint8_t v___x_3146_; 
v___x_3144_ = 32;
v_got_3145_ = lean_byte_array_fget(v_array_3136_, v_idx_3137_);
v___x_3146_ = lean_uint8_dec_eq(v_got_3145_, v___x_3144_);
if (v___x_3146_ == 0)
{
lean_object* v___x_3147_; lean_object* v___x_3149_; 
lean_dec(v_res_3132_);
v___x_3147_ = ((lean_object*)(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_sp___closed__1));
if (v_isShared_3135_ == 0)
{
lean_ctor_set_tag(v___x_3134_, 1);
lean_ctor_set(v___x_3134_, 1, v___x_3147_);
v___x_3149_ = v___x_3134_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v_pos_3131_);
lean_ctor_set(v_reuseFailAlloc_3150_, 1, v___x_3147_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
else
{
lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3192_; 
lean_inc(v_idx_3137_);
lean_inc_ref(v_array_3136_);
lean_del_object(v___x_3134_);
v_isSharedCheck_3192_ = !lean_is_exclusive(v_pos_3131_);
if (v_isSharedCheck_3192_ == 0)
{
lean_object* v_unused_3193_; lean_object* v_unused_3194_; 
v_unused_3193_ = lean_ctor_get(v_pos_3131_, 1);
lean_dec(v_unused_3193_);
v_unused_3194_ = lean_ctor_get(v_pos_3131_, 0);
lean_dec(v_unused_3194_);
v___x_3152_ = v_pos_3131_;
v_isShared_3153_ = v_isSharedCheck_3192_;
goto v_resetjp_3151_;
}
else
{
lean_dec(v_pos_3131_);
v___x_3152_ = lean_box(0);
v_isShared_3153_ = v_isSharedCheck_3192_;
goto v_resetjp_3151_;
}
v_resetjp_3151_:
{
lean_object* v_fst_3154_; lean_object* v_snd_3155_; lean_object* v___x_3157_; uint8_t v_isShared_3158_; uint8_t v_isSharedCheck_3191_; 
v_fst_3154_ = lean_ctor_get(v_res_3132_, 0);
v_snd_3155_ = lean_ctor_get(v_res_3132_, 1);
v_isSharedCheck_3191_ = !lean_is_exclusive(v_res_3132_);
if (v_isSharedCheck_3191_ == 0)
{
v___x_3157_ = v_res_3132_;
v_isShared_3158_ = v_isSharedCheck_3191_;
goto v_resetjp_3156_;
}
else
{
lean_inc(v_snd_3155_);
lean_inc(v_fst_3154_);
lean_dec(v_res_3132_);
v___x_3157_ = lean_box(0);
v_isShared_3158_ = v_isSharedCheck_3191_;
goto v_resetjp_3156_;
}
v_resetjp_3156_:
{
lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3162_; 
v___x_3159_ = lean_unsigned_to_nat(1u);
v___x_3160_ = lean_nat_add(v_idx_3137_, v___x_3159_);
lean_dec(v_idx_3137_);
if (v_isShared_3153_ == 0)
{
lean_ctor_set(v___x_3152_, 1, v___x_3160_);
v___x_3162_ = v___x_3152_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3190_; 
v_reuseFailAlloc_3190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3190_, 0, v_array_3136_);
lean_ctor_set(v_reuseFailAlloc_3190_, 1, v___x_3160_);
v___x_3162_ = v_reuseFailAlloc_3190_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
lean_object* v___x_3163_; 
v___x_3163_ = l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_parseStatusCode(v_limits_3128_, v___x_3162_);
if (lean_obj_tag(v___x_3163_) == 0)
{
lean_object* v_pos_3164_; lean_object* v_res_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3180_; 
v_pos_3164_ = lean_ctor_get(v___x_3163_, 0);
v_res_3165_ = lean_ctor_get(v___x_3163_, 1);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3163_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3167_ = v___x_3163_;
v_isShared_3168_ = v_isSharedCheck_3180_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_res_3165_);
lean_inc(v_pos_3164_);
lean_dec(v___x_3163_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3180_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
lean_object* v___y_3170_; uint8_t v___x_3178_; 
v___x_3178_ = lean_nat_dec_eq(v_fst_3154_, v___x_3159_);
if (v___x_3178_ == 0)
{
v___y_3170_ = v_snd_3155_;
goto v___jp_3169_;
}
else
{
uint8_t v___x_3179_; 
v___x_3179_ = lean_nat_dec_le(v_snd_3155_, v___x_3159_);
if (v___x_3179_ == 0)
{
lean_dec(v_snd_3155_);
v___y_3170_ = v___x_3159_;
goto v___jp_3169_;
}
else
{
v___y_3170_ = v_snd_3155_;
goto v___jp_3169_;
}
}
v___jp_3169_:
{
lean_object* v___x_3171_; lean_object* v___x_3173_; 
v___x_3171_ = l_Std_Http_Version_ofNumber_x3f(v_fst_3154_, v___y_3170_);
lean_dec(v___y_3170_);
lean_dec(v_fst_3154_);
if (v_isShared_3158_ == 0)
{
lean_ctor_set(v___x_3157_, 1, v___x_3171_);
lean_ctor_set(v___x_3157_, 0, v_res_3165_);
v___x_3173_ = v___x_3157_;
goto v_reusejp_3172_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v_res_3165_);
lean_ctor_set(v_reuseFailAlloc_3177_, 1, v___x_3171_);
v___x_3173_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3172_;
}
v_reusejp_3172_:
{
lean_object* v___x_3175_; 
if (v_isShared_3168_ == 0)
{
lean_ctor_set(v___x_3167_, 1, v___x_3173_);
v___x_3175_ = v___x_3167_;
goto v_reusejp_3174_;
}
else
{
lean_object* v_reuseFailAlloc_3176_; 
v_reuseFailAlloc_3176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3176_, 0, v_pos_3164_);
lean_ctor_set(v_reuseFailAlloc_3176_, 1, v___x_3173_);
v___x_3175_ = v_reuseFailAlloc_3176_;
goto v_reusejp_3174_;
}
v_reusejp_3174_:
{
return v___x_3175_;
}
}
}
}
}
else
{
lean_object* v_pos_3181_; lean_object* v_err_3182_; lean_object* v___x_3184_; uint8_t v_isShared_3185_; uint8_t v_isSharedCheck_3189_; 
lean_del_object(v___x_3157_);
lean_dec(v_snd_3155_);
lean_dec(v_fst_3154_);
v_pos_3181_ = lean_ctor_get(v___x_3163_, 0);
v_err_3182_ = lean_ctor_get(v___x_3163_, 1);
v_isSharedCheck_3189_ = !lean_is_exclusive(v___x_3163_);
if (v_isSharedCheck_3189_ == 0)
{
v___x_3184_ = v___x_3163_;
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
else
{
lean_inc(v_err_3182_);
lean_inc(v_pos_3181_);
lean_dec(v___x_3163_);
v___x_3184_ = lean_box(0);
v_isShared_3185_ = v_isSharedCheck_3189_;
goto v_resetjp_3183_;
}
v_resetjp_3183_:
{
lean_object* v___x_3187_; 
if (v_isShared_3185_ == 0)
{
v___x_3187_ = v___x_3184_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3188_; 
v_reuseFailAlloc_3188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3188_, 0, v_pos_3181_);
lean_ctor_set(v_reuseFailAlloc_3188_, 1, v_err_3182_);
v___x_3187_ = v_reuseFailAlloc_3188_;
goto v_reusejp_3186_;
}
v_reusejp_3186_:
{
return v___x_3187_;
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
lean_object* v_pos_3196_; lean_object* v_err_3197_; lean_object* v___x_3199_; uint8_t v_isShared_3200_; uint8_t v_isSharedCheck_3204_; 
v_pos_3196_ = lean_ctor_get(v___x_3130_, 0);
v_err_3197_ = lean_ctor_get(v___x_3130_, 1);
v_isSharedCheck_3204_ = !lean_is_exclusive(v___x_3130_);
if (v_isSharedCheck_3204_ == 0)
{
v___x_3199_ = v___x_3130_;
v_isShared_3200_ = v_isSharedCheck_3204_;
goto v_resetjp_3198_;
}
else
{
lean_inc(v_err_3197_);
lean_inc(v_pos_3196_);
lean_dec(v___x_3130_);
v___x_3199_ = lean_box(0);
v_isShared_3200_ = v_isSharedCheck_3204_;
goto v_resetjp_3198_;
}
v_resetjp_3198_:
{
lean_object* v___x_3202_; 
if (v_isShared_3200_ == 0)
{
v___x_3202_ = v___x_3199_;
goto v_reusejp_3201_;
}
else
{
lean_object* v_reuseFailAlloc_3203_; 
v_reuseFailAlloc_3203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3203_, 0, v_pos_3196_);
lean_ctor_set(v_reuseFailAlloc_3203_, 1, v_err_3197_);
v___x_3202_ = v_reuseFailAlloc_3203_;
goto v_reusejp_3201_;
}
v_reusejp_3201_:
{
return v___x_3202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Protocol_H1_parseStatusLineRawVersion___boxed(lean_object* v_limits_3205_, lean_object* v_a_3206_){
_start:
{
lean_object* v_res_3207_; 
v_res_3207_ = l_Std_Http_Protocol_H1_parseStatusLineRawVersion(v_limits_3205_, v_a_3206_);
lean_dec_ref(v_limits_3205_);
return v_res_3207_;
}
}
lean_object* runtime_initialize_Std_Internal_Parsec(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Data(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Parsec_ByteArray(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Protocol_H1_Config(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Lossy(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Protocol_H1_Parser(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec_ByteArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Protocol_H1_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Lossy(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods = _init_l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods();
lean_mark_persistent(l___private_Std_Http_Protocol_H1_Parser_0__Std_Http_Protocol_H1_knownMethods);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Protocol_H1_Parser(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Internal_Parsec(uint8_t builtin);
lean_object* initialize_Std_Http_Data(uint8_t builtin);
lean_object* initialize_Std_Internal_Parsec_ByteArray(uint8_t builtin);
lean_object* initialize_Std_Http_Protocol_H1_Config(uint8_t builtin);
lean_object* initialize_Init_Data_String_Lossy(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Protocol_H1_Parser(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Internal_Parsec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Data(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec_ByteArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Protocol_H1_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Lossy(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Protocol_H1_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Protocol_H1_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Protocol_H1_Parser(builtin);
}
#ifdef __cplusplus
}
#endif
