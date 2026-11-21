// Lean compiler output
// Module: Std.Http.Data.URI.Encoding
// Imports: import Init.Grind import Init.While import Init.Data.SInt.Lemmas import Init.Data.UInt.Lemmas import Init.Data.UInt.Bitwise import Init.Data.Array.Lemmas public import Init.Data.String.Basic import Init.Data.String.Lossy public import Std.Http.Internal.Char
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
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
extern lean_object* l_ByteArray_empty;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
uint8_t lean_uint8_sub(uint8_t, uint8_t);
uint8_t lean_uint8_add(uint8_t, uint8_t);
uint8_t lean_uint8_shift_left(uint8_t, uint8_t);
uint8_t lean_string_validate_utf8(lean_object*);
uint8_t lean_uint8_shift_right(uint8_t, uint8_t);
uint8_t lean_uint8_dec_lt(uint8_t, uint8_t);
uint8_t lean_uint8_land(uint8_t, uint8_t);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_byte_array_uget(lean_object*, size_t);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_byte_array_data(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_ByteArray_decEq___boxed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_byte_array_mk(lean_object*);
uint64_t lean_byte_array_hash(lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_ByteArray_hash___boxed(lean_object*);
lean_object* l___private_Init_Data_String_Lossy_0__String_fromUTF8Lossy_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_isEncodedChar(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_isEncodedChar___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_isEncodedQueryChar(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_isEncodedQueryChar___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableIsAllowedEncodedChars___lam__0(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__0 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__0_value;
static const lean_closure_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__1 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__1_value;
static const lean_closure_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__2 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__2_value;
static const lean_closure_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__3 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__3_value;
static const lean_closure_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__4 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__4_value;
static const lean_closure_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__5 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__5_value;
static const lean_closure_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__6 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__6_value;
static const lean_ctor_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__0_value),((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__1_value)}};
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__7 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__7_value;
static const lean_ctor_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__7_value),((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__2_value),((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__3_value),((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__4_value),((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__5_value)}};
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__8 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__8_value;
static const lean_ctor_object l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__8_value),((lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__6_value)}};
static const lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__9 = (const lean_object*)&l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__9_value;
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableIsAllowedEncodedChars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars___lam__0(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_isValidPercentEncoding_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_isValidPercentEncoding_loop___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_isValidPercentEncoding(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_isValidPercentEncoding___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_hexDigit(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_hexDigit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_hexDigitToUInt8_x3f(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_hexDigitToUInt8_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__ByteArray_push_match__1_splitter___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__ByteArray_push_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__ByteArray_push_match__1_splitter(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__ByteArray_push_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__List_toByteArray_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__List_toByteArray_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_empty___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_empty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_empty(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_empty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instInhabited___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedString_encode_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedString_encode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_encode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Std.Http.Data.URI.Encoding"};
static const lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__0_value;
static const lean_string_object l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Std.Http.URI.EncodedString.ofByteArray!"};
static const lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__1 = (const lean_object*)&l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__1_value;
static const lean_string_object l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid encoded string"};
static const lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__2 = (const lean_object*)&l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__2_value;
static lean_once_cell_t l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__3;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_ofString_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_ofString_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_new___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_new(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString___redArg___lam__0(lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedString_instToString___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedString_instToString___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedString_instToString___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedString_instToString___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decode___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decode___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decode___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_EncodedString_decodeLossy___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Http_URI_EncodedString_decodeLossy___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedString_decodeLossy___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decodeLossy___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decodeLossy___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decodeLossy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decodeLossy___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedString_instRepr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedString_instRepr___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedString_instBEq___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ByteArray_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedString_instBEq___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedString_instBEq___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instBEq___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instBEq___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instBEq(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instBEq___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedString_instHashable___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ByteArray_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedString_instHashable___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedString_instHashable___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instHashable___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instHashable___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instHashable(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instHashable___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_empty___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_empty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_empty(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_empty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_instInhabited___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_ofByteArray_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Std.Http.URI.EncodedQueryString.ofByteArray!"};
static const lean_object* l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__0_value;
static const lean_string_object l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "invalid encoded query string"};
static const lean_object* l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__1 = (const lean_object*)&l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__1_value;
static lean_once_cell_t l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__2;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_ofByteArray_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_ofString_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_ofString_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_new___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_new(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedQueryString_encode_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedQueryString_encode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_encode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_toString___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_toString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_toString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_decode___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_decode___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_decode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_decode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringEncodedQueryString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprEncodedQueryString___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprEncodedQueryString___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprEncodedQueryString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprEncodedQueryString___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqEncodedQueryString___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqEncodedQueryString___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqEncodedQueryString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqEncodedQueryString___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableEncodedQueryString___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableEncodedQueryString___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableEncodedQueryString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableEncodedQueryString___boxed(lean_object*);
static const lean_sarray_object l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_sarray_object) + 1, .m_other = 1, .m_tag = 248}, .m_size = 1, .m_capacity = 1, .m_data = {0}};
static const lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__1;
static const lean_sarray_object l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_sarray_object) + 1, .m_other = 1, .m_tag = 248}, .m_size = 1, .m_capacity = 1, .m_data = {1}};
static const lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__2 = (const lean_object*)&l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__3;
LEAN_EXPORT uint64_t l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___closed__0 = (const lean_object*)&l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg();
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedSegment_encode___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_encode___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedSegment_encode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedSegment_encode___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedSegment_encode___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedSegment_encode___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_encode(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_ofByteArray_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_ofByteArray_x21(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_decode(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_decode___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedFragment_encode___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_encode___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedFragment_encode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedFragment_encode___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedFragment_encode___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedFragment_encode___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_encode(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_ofByteArray_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_ofByteArray_x21(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_decode(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_decode___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedUserInfo_encode___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_encode___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedUserInfo_encode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedUserInfo_encode___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedUserInfo_encode___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedUserInfo_encode___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_encode(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_ofByteArray_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_ofByteArray_x21(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_decode(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_decode___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedQueryParam_encode___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_encode___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedQueryParam_encode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedQueryParam_encode___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedQueryParam_encode___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedQueryParam_encode___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_encode(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedQueryParam_ofByteArray_x3f___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_ofByteArray_x3f___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_URI_EncodedQueryParam_ofByteArray_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_URI_EncodedQueryParam_ofByteArray_x3f___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_URI_EncodedQueryParam_ofByteArray_x3f___closed__0 = (const lean_object*)&l_Std_Http_URI_EncodedQueryParam_ofByteArray_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_ofByteArray_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_ofByteArray_x21(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_fromString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_decode(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_decode___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_URI_isEncodedChar(lean_object* v_rule_1_, uint8_t v_c_2_){
_start:
{
uint8_t v___x_16_; uint8_t v___x_17_; 
v___x_16_ = 128;
v___x_17_ = lean_uint8_dec_lt(v_c_2_, v___x_16_);
if (v___x_17_ == 0)
{
lean_dec_ref(v_rule_1_);
return v___x_17_;
}
else
{
lean_object* v___x_18_; lean_object* v___x_19_; uint8_t v___x_20_; 
v___x_18_ = lean_box(v_c_2_);
v___x_19_ = lean_apply_1(v_rule_1_, v___x_18_);
v___x_20_ = lean_unbox(v___x_19_);
if (v___x_20_ == 0)
{
uint8_t v___x_21_; uint8_t v___x_22_; 
v___x_21_ = 48;
v___x_22_ = lean_uint8_dec_le(v___x_21_, v_c_2_);
if (v___x_22_ == 0)
{
goto v___jp_11_;
}
else
{
uint8_t v___x_23_; uint8_t v___x_24_; 
v___x_23_ = 57;
v___x_24_ = lean_uint8_dec_le(v_c_2_, v___x_23_);
if (v___x_24_ == 0)
{
goto v___jp_11_;
}
else
{
return v___x_24_;
}
}
}
else
{
uint8_t v___x_25_; 
v___x_25_ = lean_unbox(v___x_19_);
return v___x_25_;
}
}
v___jp_3_:
{
uint8_t v___x_4_; uint8_t v___x_5_; 
v___x_4_ = 37;
v___x_5_ = lean_uint8_dec_eq(v_c_2_, v___x_4_);
return v___x_5_;
}
v___jp_6_:
{
uint8_t v___x_7_; uint8_t v___x_8_; 
v___x_7_ = 65;
v___x_8_ = lean_uint8_dec_le(v___x_7_, v_c_2_);
if (v___x_8_ == 0)
{
goto v___jp_3_;
}
else
{
uint8_t v___x_9_; uint8_t v___x_10_; 
v___x_9_ = 70;
v___x_10_ = lean_uint8_dec_le(v_c_2_, v___x_9_);
if (v___x_10_ == 0)
{
goto v___jp_3_;
}
else
{
return v___x_10_;
}
}
}
v___jp_11_:
{
uint8_t v___x_12_; uint8_t v___x_13_; 
v___x_12_ = 97;
v___x_13_ = lean_uint8_dec_le(v___x_12_, v_c_2_);
if (v___x_13_ == 0)
{
goto v___jp_6_;
}
else
{
uint8_t v___x_14_; uint8_t v___x_15_; 
v___x_14_ = 102;
v___x_15_ = lean_uint8_dec_le(v_c_2_, v___x_14_);
if (v___x_15_ == 0)
{
goto v___jp_6_;
}
else
{
return v___x_15_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_isEncodedChar___boxed(lean_object* v_rule_26_, lean_object* v_c_27_){
_start:
{
uint8_t v_c_boxed_28_; uint8_t v_res_29_; lean_object* v_r_30_; 
v_c_boxed_28_ = lean_unbox(v_c_27_);
v_res_29_ = l_Std_Http_URI_isEncodedChar(v_rule_26_, v_c_boxed_28_);
v_r_30_ = lean_box(v_res_29_);
return v_r_30_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_isEncodedQueryChar(lean_object* v_rule_31_, uint8_t v_c_32_){
_start:
{
uint8_t v___x_33_; 
v___x_33_ = l_Std_Http_URI_isEncodedChar(v_rule_31_, v_c_32_);
if (v___x_33_ == 0)
{
uint8_t v___x_34_; uint8_t v___x_35_; 
v___x_34_ = 43;
v___x_35_ = lean_uint8_dec_eq(v_c_32_, v___x_34_);
return v___x_35_;
}
else
{
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_isEncodedQueryChar___boxed(lean_object* v_rule_36_, lean_object* v_c_37_){
_start:
{
uint8_t v_c_boxed_38_; uint8_t v_res_39_; lean_object* v_r_40_; 
v_c_boxed_38_ = lean_unbox(v_c_37_);
v_res_39_ = l_Std_Http_URI_isEncodedQueryChar(v_rule_36_, v_c_boxed_38_);
v_r_40_ = lean_box(v_res_39_);
return v_r_40_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableIsAllowedEncodedChars___lam__0(lean_object* v_r_41_, uint8_t v___x_42_, uint8_t v_v_43_){
_start:
{
uint8_t v___x_44_; 
v___x_44_ = l_Std_Http_URI_isEncodedChar(v_r_41_, v_v_43_);
if (v___x_44_ == 0)
{
return v___x_42_;
}
else
{
uint8_t v___x_45_; 
v___x_45_ = 0;
return v___x_45_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___lam__0___boxed(lean_object* v_r_46_, lean_object* v___x_47_, lean_object* v_v_48_){
_start:
{
uint8_t v___x_61__boxed_49_; uint8_t v_v_boxed_50_; uint8_t v_res_51_; lean_object* v_r_52_; 
v___x_61__boxed_49_ = lean_unbox(v___x_47_);
v_v_boxed_50_ = lean_unbox(v_v_48_);
v_res_51_ = l_Std_Http_URI_instDecidableIsAllowedEncodedChars___lam__0(v_r_46_, v___x_61__boxed_49_, v_v_boxed_50_);
v_r_52_ = lean_box(v_res_51_);
return v_r_52_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableIsAllowedEncodedChars(lean_object* v_r_72_, lean_object* v_s_73_){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; uint8_t v___x_78_; 
v___x_74_ = lean_byte_array_data(v_s_73_);
v___x_75_ = lean_unsigned_to_nat(0u);
v___x_76_ = lean_array_get_size(v___x_74_);
v___x_77_ = ((lean_object*)(l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__9));
v___x_78_ = lean_nat_dec_lt(v___x_75_, v___x_76_);
if (v___x_78_ == 0)
{
uint8_t v___x_79_; 
lean_dec_ref(v___x_74_);
lean_dec_ref(v_r_72_);
v___x_79_ = 1;
return v___x_79_;
}
else
{
if (v___x_78_ == 0)
{
lean_dec_ref(v___x_74_);
lean_dec_ref(v_r_72_);
return v___x_78_;
}
else
{
lean_object* v___x_80_; lean_object* v___f_81_; size_t v___x_82_; size_t v___x_83_; lean_object* v___x_84_; uint8_t v___x_85_; 
v___x_80_ = lean_box(v___x_78_);
v___f_81_ = lean_alloc_closure((void*)(l_Std_Http_URI_instDecidableIsAllowedEncodedChars___lam__0___boxed), 3, 2);
lean_closure_set(v___f_81_, 0, v_r_72_);
lean_closure_set(v___f_81_, 1, v___x_80_);
v___x_82_ = ((size_t)0ULL);
v___x_83_ = lean_usize_of_nat(v___x_76_);
v___x_84_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_77_, v___f_81_, v___x_74_, v___x_82_, v___x_83_);
v___x_85_ = lean_unbox(v___x_84_);
lean_dec(v___x_84_);
if (v___x_85_ == 0)
{
return v___x_78_;
}
else
{
uint8_t v___x_86_; 
v___x_86_ = 0;
return v___x_86_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedChars___boxed(lean_object* v_r_87_, lean_object* v_s_88_){
_start:
{
uint8_t v_res_89_; lean_object* v_r_90_; 
v_res_89_ = l_Std_Http_URI_instDecidableIsAllowedEncodedChars(v_r_87_, v_s_88_);
v_r_90_ = lean_box(v_res_89_);
return v_r_90_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars___lam__0(lean_object* v_r_91_, uint8_t v___x_92_, uint8_t v_v_93_){
_start:
{
uint8_t v___x_94_; 
v___x_94_ = l_Std_Http_URI_isEncodedQueryChar(v_r_91_, v_v_93_);
if (v___x_94_ == 0)
{
return v___x_92_;
}
else
{
uint8_t v___x_95_; 
v___x_95_ = 0;
return v___x_95_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars___lam__0___boxed(lean_object* v_r_96_, lean_object* v___x_97_, lean_object* v_v_98_){
_start:
{
uint8_t v___x_61__boxed_99_; uint8_t v_v_boxed_100_; uint8_t v_res_101_; lean_object* v_r_102_; 
v___x_61__boxed_99_ = lean_unbox(v___x_97_);
v_v_boxed_100_ = lean_unbox(v_v_98_);
v_res_101_ = l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars___lam__0(v_r_96_, v___x_61__boxed_99_, v_v_boxed_100_);
v_r_102_ = lean_box(v_res_101_);
return v_r_102_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars(lean_object* v_r_103_, lean_object* v_s_104_){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_105_ = lean_byte_array_data(v_s_104_);
v___x_106_ = lean_unsigned_to_nat(0u);
v___x_107_ = lean_array_get_size(v___x_105_);
v___x_108_ = ((lean_object*)(l_Std_Http_URI_instDecidableIsAllowedEncodedChars___closed__9));
v___x_109_ = lean_nat_dec_lt(v___x_106_, v___x_107_);
if (v___x_109_ == 0)
{
uint8_t v___x_110_; 
lean_dec_ref(v___x_105_);
lean_dec_ref(v_r_103_);
v___x_110_ = 1;
return v___x_110_;
}
else
{
if (v___x_109_ == 0)
{
lean_dec_ref(v___x_105_);
lean_dec_ref(v_r_103_);
return v___x_109_;
}
else
{
lean_object* v___x_111_; lean_object* v___f_112_; size_t v___x_113_; size_t v___x_114_; lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_111_ = lean_box(v___x_109_);
v___f_112_ = lean_alloc_closure((void*)(l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars___lam__0___boxed), 3, 2);
lean_closure_set(v___f_112_, 0, v_r_103_);
lean_closure_set(v___f_112_, 1, v___x_111_);
v___x_113_ = ((size_t)0ULL);
v___x_114_ = lean_usize_of_nat(v___x_107_);
v___x_115_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_108_, v___f_112_, v___x_105_, v___x_113_, v___x_114_);
v___x_116_ = lean_unbox(v___x_115_);
lean_dec(v___x_115_);
if (v___x_116_ == 0)
{
return v___x_109_;
}
else
{
uint8_t v___x_117_; 
v___x_117_ = 0;
return v___x_117_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars___boxed(lean_object* v_r_118_, lean_object* v_s_119_){
_start:
{
uint8_t v_res_120_; lean_object* v_r_121_; 
v_res_120_ = l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars(v_r_118_, v_s_119_);
v_r_121_ = lean_box(v_res_120_);
return v_r_121_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_isValidPercentEncoding_loop(lean_object* v_ba_122_, lean_object* v_i_123_){
_start:
{
lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_128_ = lean_byte_array_size(v_ba_122_);
v___x_129_ = lean_nat_dec_lt(v_i_123_, v___x_128_);
if (v___x_129_ == 0)
{
uint8_t v___x_130_; 
lean_dec(v_i_123_);
v___x_130_ = 1;
return v___x_130_;
}
else
{
uint8_t v_c_131_; uint8_t v___x_132_; uint8_t v___x_133_; 
v_c_131_ = lean_byte_array_fget(v_ba_122_, v_i_123_);
v___x_132_ = 37;
v___x_133_ = lean_uint8_dec_eq(v_c_131_, v___x_132_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_unsigned_to_nat(1u);
v___x_135_ = lean_nat_add(v_i_123_, v___x_134_);
lean_dec(v_i_123_);
v_i_123_ = v___x_135_;
goto _start;
}
else
{
lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; 
v___x_137_ = lean_unsigned_to_nat(2u);
v___x_138_ = lean_nat_add(v_i_123_, v___x_137_);
v___x_139_ = lean_nat_dec_lt(v___x_138_, v___x_128_);
if (v___x_139_ == 0)
{
lean_dec(v___x_138_);
lean_dec(v_i_123_);
return v___x_139_;
}
else
{
lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v_d1_142_; uint8_t v_d2_143_; uint8_t v___x_169_; uint8_t v___x_170_; 
v___x_140_ = lean_unsigned_to_nat(1u);
v___x_141_ = lean_nat_add(v_i_123_, v___x_140_);
v_d1_142_ = lean_byte_array_fget(v_ba_122_, v___x_141_);
lean_dec(v___x_141_);
v_d2_143_ = lean_byte_array_fget(v_ba_122_, v___x_138_);
lean_dec(v___x_138_);
v___x_169_ = 48;
v___x_170_ = lean_uint8_dec_le(v___x_169_, v_d1_142_);
if (v___x_170_ == 0)
{
goto v___jp_164_;
}
else
{
uint8_t v___x_171_; uint8_t v___x_172_; 
v___x_171_ = 57;
v___x_172_ = lean_uint8_dec_le(v_d1_142_, v___x_171_);
if (v___x_172_ == 0)
{
goto v___jp_164_;
}
else
{
goto v___jp_154_;
}
}
v___jp_144_:
{
uint8_t v___x_145_; uint8_t v___x_146_; 
v___x_145_ = 65;
v___x_146_ = lean_uint8_dec_le(v___x_145_, v_d2_143_);
if (v___x_146_ == 0)
{
lean_dec(v_i_123_);
return v___x_146_;
}
else
{
uint8_t v___x_147_; uint8_t v___x_148_; 
v___x_147_ = 70;
v___x_148_ = lean_uint8_dec_le(v_d2_143_, v___x_147_);
if (v___x_148_ == 0)
{
lean_dec(v_i_123_);
return v___x_148_;
}
else
{
goto v___jp_124_;
}
}
}
v___jp_149_:
{
uint8_t v___x_150_; uint8_t v___x_151_; 
v___x_150_ = 97;
v___x_151_ = lean_uint8_dec_le(v___x_150_, v_d2_143_);
if (v___x_151_ == 0)
{
goto v___jp_144_;
}
else
{
uint8_t v___x_152_; uint8_t v___x_153_; 
v___x_152_ = 102;
v___x_153_ = lean_uint8_dec_le(v_d2_143_, v___x_152_);
if (v___x_153_ == 0)
{
goto v___jp_144_;
}
else
{
goto v___jp_124_;
}
}
}
v___jp_154_:
{
uint8_t v___x_155_; uint8_t v___x_156_; 
v___x_155_ = 48;
v___x_156_ = lean_uint8_dec_le(v___x_155_, v_d2_143_);
if (v___x_156_ == 0)
{
goto v___jp_149_;
}
else
{
uint8_t v___x_157_; uint8_t v___x_158_; 
v___x_157_ = 57;
v___x_158_ = lean_uint8_dec_le(v_d2_143_, v___x_157_);
if (v___x_158_ == 0)
{
goto v___jp_149_;
}
else
{
goto v___jp_124_;
}
}
}
v___jp_159_:
{
uint8_t v___x_160_; uint8_t v___x_161_; 
v___x_160_ = 65;
v___x_161_ = lean_uint8_dec_le(v___x_160_, v_d1_142_);
if (v___x_161_ == 0)
{
lean_dec(v_i_123_);
return v___x_161_;
}
else
{
uint8_t v___x_162_; uint8_t v___x_163_; 
v___x_162_ = 70;
v___x_163_ = lean_uint8_dec_le(v_d1_142_, v___x_162_);
if (v___x_163_ == 0)
{
lean_dec(v_i_123_);
return v___x_163_;
}
else
{
goto v___jp_154_;
}
}
}
v___jp_164_:
{
uint8_t v___x_165_; uint8_t v___x_166_; 
v___x_165_ = 97;
v___x_166_ = lean_uint8_dec_le(v___x_165_, v_d1_142_);
if (v___x_166_ == 0)
{
goto v___jp_159_;
}
else
{
uint8_t v___x_167_; uint8_t v___x_168_; 
v___x_167_ = 102;
v___x_168_ = lean_uint8_dec_le(v_d1_142_, v___x_167_);
if (v___x_168_ == 0)
{
goto v___jp_159_;
}
else
{
goto v___jp_154_;
}
}
}
}
}
}
v___jp_124_:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_unsigned_to_nat(3u);
v___x_126_ = lean_nat_add(v_i_123_, v___x_125_);
lean_dec(v_i_123_);
v_i_123_ = v___x_126_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_isValidPercentEncoding_loop___boxed(lean_object* v_ba_173_, lean_object* v_i_174_){
_start:
{
uint8_t v_res_175_; lean_object* v_r_176_; 
v_res_175_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_isValidPercentEncoding_loop(v_ba_173_, v_i_174_);
lean_dec_ref(v_ba_173_);
v_r_176_ = lean_box(v_res_175_);
return v_r_176_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_isValidPercentEncoding(lean_object* v_ba_177_){
_start:
{
lean_object* v___x_178_; uint8_t v___x_179_; 
v___x_178_ = lean_unsigned_to_nat(0u);
v___x_179_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_isValidPercentEncoding_loop(v_ba_177_, v___x_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_isValidPercentEncoding___boxed(lean_object* v_ba_180_){
_start:
{
uint8_t v_res_181_; lean_object* v_r_182_; 
v_res_181_ = l_Std_Http_URI_isValidPercentEncoding(v_ba_180_);
lean_dec_ref(v_ba_180_);
v_r_182_ = lean_box(v_res_181_);
return v_r_182_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_hexDigit(uint8_t v_n_183_){
_start:
{
uint8_t v___x_184_; uint8_t v___x_185_; 
v___x_184_ = 10;
v___x_185_ = lean_uint8_dec_lt(v_n_183_, v___x_184_);
if (v___x_185_ == 0)
{
uint8_t v___x_186_; uint8_t v___x_187_; uint8_t v___x_188_; 
v___x_186_ = lean_uint8_sub(v_n_183_, v___x_184_);
v___x_187_ = 65;
v___x_188_ = lean_uint8_add(v___x_186_, v___x_187_);
return v___x_188_;
}
else
{
uint8_t v___x_189_; uint8_t v___x_190_; 
v___x_189_ = 48;
v___x_190_ = lean_uint8_add(v_n_183_, v___x_189_);
return v___x_190_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_hexDigit___boxed(lean_object* v_n_191_){
_start:
{
uint8_t v_n_boxed_192_; uint8_t v_res_193_; lean_object* v_r_194_; 
v_n_boxed_192_ = lean_unbox(v_n_191_);
v_res_193_ = l_Std_Http_URI_hexDigit(v_n_boxed_192_);
v_r_194_ = lean_box(v_res_193_);
return v_r_194_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_hexDigitToUInt8_x3f(uint8_t v_c_195_){
_start:
{
uint8_t v___x_218_; uint8_t v___x_219_; 
v___x_218_ = 48;
v___x_219_ = lean_uint8_dec_le(v___x_218_, v_c_195_);
if (v___x_219_ == 0)
{
goto v___jp_208_;
}
else
{
uint8_t v___x_220_; uint8_t v___x_221_; 
v___x_220_ = 57;
v___x_221_ = lean_uint8_dec_le(v_c_195_, v___x_220_);
if (v___x_221_ == 0)
{
goto v___jp_208_;
}
else
{
uint8_t v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_222_ = lean_uint8_sub(v_c_195_, v___x_218_);
v___x_223_ = lean_box(v___x_222_);
v___x_224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
return v___x_224_;
}
}
v___jp_196_:
{
uint8_t v___x_197_; uint8_t v___x_198_; 
v___x_197_ = 65;
v___x_198_ = lean_uint8_dec_le(v___x_197_, v_c_195_);
if (v___x_198_ == 0)
{
lean_object* v___x_199_; 
v___x_199_ = lean_box(0);
return v___x_199_;
}
else
{
uint8_t v___x_200_; uint8_t v___x_201_; 
v___x_200_ = 70;
v___x_201_ = lean_uint8_dec_le(v_c_195_, v___x_200_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; 
v___x_202_ = lean_box(0);
return v___x_202_;
}
else
{
uint8_t v___x_203_; uint8_t v___x_204_; uint8_t v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_203_ = lean_uint8_sub(v_c_195_, v___x_197_);
v___x_204_ = 10;
v___x_205_ = lean_uint8_add(v___x_203_, v___x_204_);
v___x_206_ = lean_box(v___x_205_);
v___x_207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
return v___x_207_;
}
}
}
v___jp_208_:
{
uint8_t v___x_209_; uint8_t v___x_210_; 
v___x_209_ = 97;
v___x_210_ = lean_uint8_dec_le(v___x_209_, v_c_195_);
if (v___x_210_ == 0)
{
goto v___jp_196_;
}
else
{
uint8_t v___x_211_; uint8_t v___x_212_; 
v___x_211_ = 102;
v___x_212_ = lean_uint8_dec_le(v_c_195_, v___x_211_);
if (v___x_212_ == 0)
{
goto v___jp_196_;
}
else
{
uint8_t v___x_213_; uint8_t v___x_214_; uint8_t v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_213_ = lean_uint8_sub(v_c_195_, v___x_209_);
v___x_214_ = 10;
v___x_215_ = lean_uint8_add(v___x_213_, v___x_214_);
v___x_216_ = lean_box(v___x_215_);
v___x_217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
return v___x_217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_hexDigitToUInt8_x3f___boxed(lean_object* v_c_225_){
_start:
{
uint8_t v_c_boxed_226_; lean_object* v_res_227_; 
v_c_boxed_226_ = lean_unbox(v_c_225_);
v_res_227_ = l_Std_Http_URI_hexDigitToUInt8_x3f(v_c_boxed_226_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__ByteArray_push_match__1_splitter___redArg(lean_object* v_x_228_, uint8_t v_x_229_, lean_object* v_h__1_230_){
_start:
{
lean_object* v_data_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v_data_231_ = lean_byte_array_data(v_x_228_);
v___x_232_ = lean_box(v_x_229_);
v___x_233_ = lean_apply_2(v_h__1_230_, v_data_231_, v___x_232_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__ByteArray_push_match__1_splitter___redArg___boxed(lean_object* v_x_234_, lean_object* v_x_235_, lean_object* v_h__1_236_){
_start:
{
uint8_t v_x_17__boxed_237_; lean_object* v_res_238_; 
v_x_17__boxed_237_ = lean_unbox(v_x_235_);
v_res_238_ = l___private_Std_Http_Data_URI_Encoding_0__ByteArray_push_match__1_splitter___redArg(v_x_234_, v_x_17__boxed_237_, v_h__1_236_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__ByteArray_push_match__1_splitter(lean_object* v_motive_239_, lean_object* v_x_240_, uint8_t v_x_241_, lean_object* v_h__1_242_){
_start:
{
lean_object* v_data_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v_data_243_ = lean_byte_array_data(v_x_240_);
v___x_244_ = lean_box(v_x_241_);
v___x_245_ = lean_apply_2(v_h__1_242_, v_data_243_, v___x_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__ByteArray_push_match__1_splitter___boxed(lean_object* v_motive_246_, lean_object* v_x_247_, lean_object* v_x_248_, lean_object* v_h__1_249_){
_start:
{
uint8_t v_x_29__boxed_250_; lean_object* v_res_251_; 
v_x_29__boxed_250_ = lean_unbox(v_x_248_);
v_res_251_ = l___private_Std_Http_Data_URI_Encoding_0__ByteArray_push_match__1_splitter(v_motive_246_, v_x_247_, v_x_29__boxed_250_, v_h__1_249_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__List_toByteArray_match__1_splitter___redArg(lean_object* v_x_252_, lean_object* v_x_253_, lean_object* v_h__1_254_, lean_object* v_h__2_255_){
_start:
{
if (lean_obj_tag(v_x_252_) == 0)
{
lean_object* v___x_256_; 
lean_dec(v_h__2_255_);
v___x_256_ = lean_apply_1(v_h__1_254_, v_x_253_);
return v___x_256_;
}
else
{
lean_object* v_head_257_; lean_object* v_tail_258_; lean_object* v___x_259_; 
lean_dec(v_h__1_254_);
v_head_257_ = lean_ctor_get(v_x_252_, 0);
lean_inc(v_head_257_);
v_tail_258_ = lean_ctor_get(v_x_252_, 1);
lean_inc(v_tail_258_);
lean_dec_ref_known(v_x_252_, 2);
v___x_259_ = lean_apply_3(v_h__2_255_, v_head_257_, v_tail_258_, v_x_253_);
return v___x_259_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__List_toByteArray_match__1_splitter(lean_object* v_motive_260_, lean_object* v_x_261_, lean_object* v_x_262_, lean_object* v_h__1_263_, lean_object* v_h__2_264_){
_start:
{
if (lean_obj_tag(v_x_261_) == 0)
{
lean_object* v___x_265_; 
lean_dec(v_h__2_264_);
v___x_265_ = lean_apply_1(v_h__1_263_, v_x_262_);
return v___x_265_;
}
else
{
lean_object* v_head_266_; lean_object* v_tail_267_; lean_object* v___x_268_; 
lean_dec(v_h__1_263_);
v_head_266_ = lean_ctor_get(v_x_261_, 0);
lean_inc(v_head_266_);
v_tail_267_ = lean_ctor_get(v_x_261_, 1);
lean_inc(v_tail_267_);
lean_dec_ref_known(v_x_261_, 2);
v___x_268_ = lean_apply_3(v_h__2_264_, v_head_266_, v_tail_267_, v_x_262_);
return v___x_268_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_empty___redArg(){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = l_ByteArray_empty;
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_empty___redArg___boxed(lean_object* v___dummy_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_Std_Http_URI_EncodedString_empty___redArg();
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_empty(lean_object* v_r_273_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l_ByteArray_empty;
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_empty___boxed(lean_object* v_r_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Std_Http_URI_EncodedString_empty(v_r_275_);
lean_dec_ref(v_r_275_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instInhabited___redArg(){
_start:
{
lean_object* v___x_278_; 
v___x_278_ = l_ByteArray_empty;
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instInhabited___redArg___boxed(lean_object* v___dummy_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Std_Http_URI_EncodedString_instInhabited___redArg();
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instInhabited(lean_object* v_r_281_){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = l_ByteArray_empty;
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instInhabited___boxed(lean_object* v_r_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Std_Http_URI_EncodedString_instInhabited(v_r_283_);
lean_dec_ref(v_r_283_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push___redArg(lean_object* v_s_285_, uint8_t v_c_286_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = lean_byte_array_push(v_s_285_, v_c_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push___redArg___boxed(lean_object* v_s_288_, lean_object* v_c_289_){
_start:
{
uint8_t v_c_boxed_290_; lean_object* v_res_291_; 
v_c_boxed_290_ = lean_unbox(v_c_289_);
v_res_291_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push___redArg(v_s_288_, v_c_boxed_290_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push(lean_object* v_r_292_, lean_object* v_s_293_, uint8_t v_c_294_, lean_object* v_h_295_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = lean_byte_array_push(v_s_293_, v_c_294_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push___boxed(lean_object* v_r_297_, lean_object* v_s_298_, lean_object* v_c_299_, lean_object* v_h_300_){
_start:
{
uint8_t v_c_boxed_301_; lean_object* v_res_302_; 
v_c_boxed_301_ = lean_unbox(v_c_299_);
v_res_302_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_push(v_r_297_, v_s_298_, v_c_boxed_301_, v_h_300_);
lean_dec_ref(v_r_297_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___redArg(uint8_t v_b_303_, lean_object* v_s_304_){
_start:
{
uint8_t v___x_305_; lean_object* v___x_306_; uint8_t v___x_307_; uint8_t v___x_308_; uint8_t v___x_309_; lean_object* v___x_310_; uint8_t v___x_311_; uint8_t v___x_312_; uint8_t v___x_313_; lean_object* v_ba_314_; 
v___x_305_ = 37;
v___x_306_ = lean_byte_array_push(v_s_304_, v___x_305_);
v___x_307_ = 4;
v___x_308_ = lean_uint8_shift_right(v_b_303_, v___x_307_);
v___x_309_ = l_Std_Http_URI_hexDigit(v___x_308_);
v___x_310_ = lean_byte_array_push(v___x_306_, v___x_309_);
v___x_311_ = 15;
v___x_312_ = lean_uint8_land(v_b_303_, v___x_311_);
v___x_313_ = l_Std_Http_URI_hexDigit(v___x_312_);
v_ba_314_ = lean_byte_array_push(v___x_310_, v___x_313_);
return v_ba_314_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___redArg___boxed(lean_object* v_b_315_, lean_object* v_s_316_){
_start:
{
uint8_t v_b_boxed_317_; lean_object* v_res_318_; 
v_b_boxed_317_ = lean_unbox(v_b_315_);
v_res_318_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___redArg(v_b_boxed_317_, v_s_316_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex(lean_object* v_r_319_, uint8_t v_b_320_, lean_object* v_s_321_){
_start:
{
lean_object* v___x_322_; 
v___x_322_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___redArg(v_b_320_, v_s_321_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___boxed(lean_object* v_r_323_, lean_object* v_b_324_, lean_object* v_s_325_){
_start:
{
uint8_t v_b_boxed_326_; lean_object* v_res_327_; 
v_b_boxed_326_ = lean_unbox(v_b_324_);
v_res_327_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex(v_r_323_, v_b_boxed_326_, v_s_325_);
lean_dec_ref(v_r_323_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedString_encode_spec__0(lean_object* v_r_328_, lean_object* v_as_329_, size_t v_i_330_, size_t v_stop_331_, lean_object* v_b_332_){
_start:
{
lean_object* v___y_334_; uint8_t v___x_338_; 
v___x_338_ = lean_usize_dec_eq(v_i_330_, v_stop_331_);
if (v___x_338_ == 0)
{
uint8_t v___x_339_; uint8_t v___x_340_; uint8_t v___x_341_; 
v___x_339_ = lean_byte_array_uget(v_as_329_, v_i_330_);
v___x_340_ = 128;
v___x_341_ = lean_uint8_dec_lt(v___x_339_, v___x_340_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; 
v___x_342_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___redArg(v___x_339_, v_b_332_);
v___y_334_ = v___x_342_;
goto v___jp_333_;
}
else
{
lean_object* v___x_343_; lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_343_ = lean_box(v___x_339_);
lean_inc_ref(v_r_328_);
v___x_344_ = lean_apply_1(v_r_328_, v___x_343_);
v___x_345_ = lean_unbox(v___x_344_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; 
v___x_346_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_byteToHex___redArg(v___x_339_, v_b_332_);
v___y_334_ = v___x_346_;
goto v___jp_333_;
}
else
{
lean_object* v___x_347_; 
v___x_347_ = lean_byte_array_push(v_b_332_, v___x_339_);
v___y_334_ = v___x_347_;
goto v___jp_333_;
}
}
}
else
{
lean_dec_ref(v_r_328_);
return v_b_332_;
}
v___jp_333_:
{
size_t v___x_335_; size_t v___x_336_; 
v___x_335_ = ((size_t)1ULL);
v___x_336_ = lean_usize_add(v_i_330_, v___x_335_);
v_i_330_ = v___x_336_;
v_b_332_ = v___y_334_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedString_encode_spec__0___boxed(lean_object* v_r_348_, lean_object* v_as_349_, lean_object* v_i_350_, lean_object* v_stop_351_, lean_object* v_b_352_){
_start:
{
size_t v_i_boxed_353_; size_t v_stop_boxed_354_; lean_object* v_res_355_; 
v_i_boxed_353_ = lean_unbox_usize(v_i_350_);
lean_dec(v_i_350_);
v_stop_boxed_354_ = lean_unbox_usize(v_stop_351_);
lean_dec(v_stop_351_);
v_res_355_ = l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedString_encode_spec__0(v_r_348_, v_as_349_, v_i_boxed_353_, v_stop_boxed_354_, v_b_352_);
lean_dec_ref(v_as_349_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_encode(lean_object* v_r_356_, lean_object* v_s_357_){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; uint8_t v___x_362_; 
v___x_358_ = l_ByteArray_empty;
v___x_359_ = lean_string_to_utf8(v_s_357_);
v___x_360_ = lean_unsigned_to_nat(0u);
v___x_361_ = lean_byte_array_size(v___x_359_);
v___x_362_ = lean_nat_dec_lt(v___x_360_, v___x_361_);
if (v___x_362_ == 0)
{
lean_dec_ref(v___x_359_);
lean_dec_ref(v_r_356_);
return v___x_358_;
}
else
{
size_t v___x_363_; size_t v___x_364_; lean_object* v___x_365_; 
v___x_363_ = ((size_t)0ULL);
v___x_364_ = lean_usize_of_nat(v___x_361_);
v___x_365_ = l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedString_encode_spec__0(v_r_356_, v___x_359_, v___x_363_, v___x_364_, v___x_358_);
lean_dec_ref(v___x_359_);
return v___x_365_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x3f(lean_object* v_r_366_, lean_object* v_ba_367_){
_start:
{
uint8_t v___x_368_; 
lean_inc_ref(v_ba_367_);
v___x_368_ = l_Std_Http_URI_instDecidableIsAllowedEncodedChars(v_r_366_, v_ba_367_);
if (v___x_368_ == 0)
{
lean_object* v___x_369_; 
lean_dec_ref(v_ba_367_);
v___x_369_ = lean_box(0);
return v___x_369_;
}
else
{
uint8_t v___x_370_; 
v___x_370_ = l_Std_Http_URI_isValidPercentEncoding(v_ba_367_);
if (v___x_370_ == 0)
{
lean_object* v___x_371_; 
lean_dec_ref(v_ba_367_);
v___x_371_ = lean_box(0);
return v___x_371_;
}
else
{
lean_object* v___x_372_; 
v___x_372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_372_, 0, v_ba_367_);
return v___x_372_;
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0___redArg(lean_object* v_msg_373_){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_374_ = l_ByteArray_empty;
v___x_375_ = lean_panic_fn_borrowed(v___x_374_, v_msg_373_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0(lean_object* v_r_376_, lean_object* v_msg_377_){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0___redArg(v_msg_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0___boxed(lean_object* v_r_379_, lean_object* v_msg_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0(v_r_379_, v_msg_380_);
lean_dec_ref(v_r_379_);
return v_res_381_;
}
}
static lean_object* _init_l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__3(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_385_ = ((lean_object*)(l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__2));
v___x_386_ = lean_unsigned_to_nat(12u);
v___x_387_ = lean_unsigned_to_nat(329u);
v___x_388_ = ((lean_object*)(l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__1));
v___x_389_ = ((lean_object*)(l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__0));
v___x_390_ = l_mkPanicMessageWithDecl(v___x_389_, v___x_388_, v___x_387_, v___x_386_, v___x_385_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_ofByteArray_x21(lean_object* v_r_391_, lean_object* v_ba_392_){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = l_Std_Http_URI_EncodedString_ofByteArray_x3f(v_r_391_, v_ba_392_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_obj_once(&l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__3, &l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__3_once, _init_l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__3);
v___x_395_ = l_panic___at___00Std_Http_URI_EncodedString_ofByteArray_x21_spec__0___redArg(v___x_394_);
return v___x_395_;
}
else
{
lean_object* v_val_396_; 
v_val_396_ = lean_ctor_get(v___x_393_, 0);
lean_inc(v_val_396_);
lean_dec_ref_known(v___x_393_, 1);
return v_val_396_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_ofString_x3f(lean_object* v_r_397_, lean_object* v_s_398_){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_399_ = lean_string_to_utf8(v_s_398_);
v___x_400_ = l_Std_Http_URI_EncodedString_ofByteArray_x3f(v_r_397_, v___x_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_ofString_x21(lean_object* v_r_401_, lean_object* v_s_402_){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_403_ = lean_string_to_utf8(v_s_402_);
v___x_404_ = l_Std_Http_URI_EncodedString_ofByteArray_x21(v_r_401_, v___x_403_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_new___redArg(lean_object* v_ba_405_){
_start:
{
lean_inc_ref(v_ba_405_);
return v_ba_405_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_new___redArg___boxed(lean_object* v_ba_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Std_Http_URI_EncodedString_new___redArg(v_ba_406_);
lean_dec_ref(v_ba_406_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_new(lean_object* v_r_408_, lean_object* v_ba_409_, lean_object* v_valid_410_, lean_object* v___validEncoding_411_){
_start:
{
lean_inc_ref(v_ba_409_);
return v_ba_409_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_new___boxed(lean_object* v_r_412_, lean_object* v_ba_413_, lean_object* v_valid_414_, lean_object* v___validEncoding_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Std_Http_URI_EncodedString_new(v_r_412_, v_ba_413_, v_valid_414_, v___validEncoding_415_);
lean_dec_ref(v_ba_413_);
lean_dec_ref(v_r_412_);
return v_res_416_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString___redArg___lam__0(lean_object* v_es_417_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = lean_string_from_utf8_unchecked(v_es_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString___redArg(){
_start:
{
lean_object* v___f_421_; 
v___f_421_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instToString___redArg___closed__0));
return v___f_421_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString___redArg___boxed(lean_object* v___dummy_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Std_Http_URI_EncodedString_instToString___redArg();
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString(lean_object* v_r_424_){
_start:
{
lean_object* v___f_425_; 
v___f_425_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instToString___redArg___closed__0));
return v___f_425_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instToString___boxed(lean_object* v_r_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Std_Http_URI_EncodedString_instToString(v_r_426_);
lean_dec_ref(v_r_426_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes_spec__0___redArg(lean_object* v_len_428_, lean_object* v_rawBytes_429_, lean_object* v_a_430_){
_start:
{
lean_object* v_fst_431_; lean_object* v_snd_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_490_; 
v_fst_431_ = lean_ctor_get(v_a_430_, 0);
v_snd_432_ = lean_ctor_get(v_a_430_, 1);
v_isSharedCheck_490_ = !lean_is_exclusive(v_a_430_);
if (v_isSharedCheck_490_ == 0)
{
v___x_434_ = v_a_430_;
v_isShared_435_ = v_isSharedCheck_490_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_snd_432_);
lean_inc(v_fst_431_);
lean_dec(v_a_430_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_490_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
uint8_t v___x_436_; 
v___x_436_ = lean_nat_dec_lt(v_snd_432_, v_len_428_);
if (v___x_436_ == 0)
{
lean_object* v___x_438_; 
if (v_isShared_435_ == 0)
{
v___x_438_ = v___x_434_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_fst_431_);
lean_ctor_set(v_reuseFailAlloc_439_, 1, v_snd_432_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
else
{
uint8_t v_percent_440_; uint8_t v___x_441_; uint8_t v___x_450_; 
v_percent_440_ = 37;
v___x_441_ = lean_byte_array_fget(v_rawBytes_429_, v_snd_432_);
v___x_450_ = lean_uint8_dec_eq(v___x_441_, v_percent_440_);
if (v___x_450_ == 0)
{
goto v___jp_442_;
}
else
{
lean_object* v___x_451_; lean_object* v___x_452_; uint8_t v___x_453_; 
v___x_451_ = lean_unsigned_to_nat(1u);
v___x_452_ = lean_nat_add(v_snd_432_, v___x_451_);
v___x_453_ = lean_nat_dec_lt(v___x_452_, v_len_428_);
if (v___x_453_ == 0)
{
lean_dec(v___x_452_);
goto v___jp_442_;
}
else
{
uint8_t v___x_454_; lean_object* v___x_455_; 
lean_del_object(v___x_434_);
v___x_454_ = lean_byte_array_fget(v_rawBytes_429_, v___x_452_);
lean_dec(v___x_452_);
v___x_455_ = l_Std_Http_URI_hexDigitToUInt8_x3f(v___x_454_);
if (lean_obj_tag(v___x_455_) == 1)
{
lean_object* v_val_456_; lean_object* v___x_457_; lean_object* v___x_458_; uint8_t v___x_459_; 
v_val_456_ = lean_ctor_get(v___x_455_, 0);
lean_inc(v_val_456_);
lean_dec_ref_known(v___x_455_, 1);
v___x_457_ = lean_unsigned_to_nat(2u);
v___x_458_ = lean_nat_add(v_snd_432_, v___x_457_);
v___x_459_ = lean_nat_dec_lt(v___x_458_, v_len_428_);
if (v___x_459_ == 0)
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
lean_dec(v_val_456_);
lean_dec(v_snd_432_);
v___x_460_ = lean_byte_array_push(v_fst_431_, v___x_441_);
v___x_461_ = lean_byte_array_push(v___x_460_, v___x_454_);
v___x_462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
lean_ctor_set(v___x_462_, 1, v___x_458_);
v_a_430_ = v___x_462_;
goto _start;
}
else
{
uint8_t v___x_464_; lean_object* v___x_465_; 
v___x_464_ = lean_byte_array_fget(v_rawBytes_429_, v___x_458_);
lean_dec(v___x_458_);
v___x_465_ = l_Std_Http_URI_hexDigitToUInt8_x3f(v___x_464_);
if (lean_obj_tag(v___x_465_) == 1)
{
lean_object* v_val_466_; uint8_t v___x_467_; uint8_t v___x_468_; uint8_t v___x_469_; uint8_t v___x_470_; uint8_t v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v_val_466_ = lean_ctor_get(v___x_465_, 0);
lean_inc(v_val_466_);
lean_dec_ref_known(v___x_465_, 1);
v___x_467_ = 4;
v___x_468_ = lean_unbox(v_val_456_);
lean_dec(v_val_456_);
v___x_469_ = lean_uint8_shift_left(v___x_468_, v___x_467_);
v___x_470_ = lean_unbox(v_val_466_);
lean_dec(v_val_466_);
v___x_471_ = lean_uint8_add(v___x_469_, v___x_470_);
v___x_472_ = lean_byte_array_push(v_fst_431_, v___x_471_);
v___x_473_ = lean_unsigned_to_nat(3u);
v___x_474_ = lean_nat_add(v_snd_432_, v___x_473_);
lean_dec(v_snd_432_);
v___x_475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_475_, 0, v___x_472_);
lean_ctor_set(v___x_475_, 1, v___x_474_);
v_a_430_ = v___x_475_;
goto _start;
}
else
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
lean_dec(v___x_465_);
lean_dec(v_val_456_);
v___x_477_ = lean_byte_array_push(v_fst_431_, v___x_441_);
v___x_478_ = lean_byte_array_push(v___x_477_, v___x_454_);
v___x_479_ = lean_byte_array_push(v___x_478_, v___x_464_);
v___x_480_ = lean_unsigned_to_nat(3u);
v___x_481_ = lean_nat_add(v_snd_432_, v___x_480_);
lean_dec(v_snd_432_);
v___x_482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_482_, 0, v___x_479_);
lean_ctor_set(v___x_482_, 1, v___x_481_);
v_a_430_ = v___x_482_;
goto _start;
}
}
}
else
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
lean_dec(v___x_455_);
v___x_484_ = lean_byte_array_push(v_fst_431_, v___x_441_);
v___x_485_ = lean_byte_array_push(v___x_484_, v___x_454_);
v___x_486_ = lean_unsigned_to_nat(2u);
v___x_487_ = lean_nat_add(v_snd_432_, v___x_486_);
lean_dec(v_snd_432_);
v___x_488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_488_, 0, v___x_485_);
lean_ctor_set(v___x_488_, 1, v___x_487_);
v_a_430_ = v___x_488_;
goto _start;
}
}
}
v___jp_442_:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_447_; 
v___x_443_ = lean_byte_array_push(v_fst_431_, v___x_441_);
v___x_444_ = lean_unsigned_to_nat(1u);
v___x_445_ = lean_nat_add(v_snd_432_, v___x_444_);
lean_dec(v_snd_432_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 1, v___x_445_);
lean_ctor_set(v___x_434_, 0, v___x_443_);
v___x_447_ = v___x_434_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_443_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v___x_445_);
v___x_447_ = v_reuseFailAlloc_449_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
v_a_430_ = v___x_447_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes_spec__0___redArg___boxed(lean_object* v_len_491_, lean_object* v_rawBytes_492_, lean_object* v_a_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes_spec__0___redArg(v_len_491_, v_rawBytes_492_, v_a_493_);
lean_dec_ref(v_rawBytes_492_);
lean_dec(v_len_491_);
return v_res_494_;
}
}
static lean_object* _init_l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg___closed__0(void){
_start:
{
lean_object* v_i_495_; lean_object* v_decoded_496_; lean_object* v___x_497_; 
v_i_495_ = lean_unsigned_to_nat(0u);
v_decoded_496_ = l_ByteArray_empty;
v___x_497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_497_, 0, v_decoded_496_);
lean_ctor_set(v___x_497_, 1, v_i_495_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg(lean_object* v_es_498_){
_start:
{
lean_object* v_len_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v_fst_502_; 
v_len_499_ = lean_byte_array_size(v_es_498_);
v___x_500_ = lean_obj_once(&l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg___closed__0, &l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg___closed__0_once, _init_l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg___closed__0);
v___x_501_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes_spec__0___redArg(v_len_499_, v_es_498_, v___x_500_);
v_fst_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_fst_502_);
lean_dec_ref(v___x_501_);
return v_fst_502_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg___boxed(lean_object* v_es_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg(v_es_503_);
lean_dec_ref(v_es_503_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes(lean_object* v_r_505_, lean_object* v_es_506_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg(v_es_506_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___boxed(lean_object* v_r_508_, lean_object* v_es_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes(v_r_508_, v_es_509_);
lean_dec_ref(v_es_509_);
lean_dec_ref(v_r_508_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes_spec__0(lean_object* v_len_511_, lean_object* v_rawBytes_512_, lean_object* v_inst_513_, lean_object* v_a_514_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes_spec__0___redArg(v_len_511_, v_rawBytes_512_, v_a_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes_spec__0___boxed(lean_object* v_len_516_, lean_object* v_rawBytes_517_, lean_object* v_inst_518_, lean_object* v_a_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l___private_Init_While_0__repeatM_erased___at___00__private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes_spec__0(v_len_516_, v_rawBytes_517_, v_inst_518_, v_a_519_);
lean_dec_ref(v_rawBytes_517_);
lean_dec(v_len_516_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decode___redArg(lean_object* v_es_521_){
_start:
{
lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_522_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg(v_es_521_);
v___x_523_ = lean_string_validate_utf8(v___x_522_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; 
lean_dec(v___x_522_);
v___x_524_ = lean_box(0);
return v___x_524_;
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_525_ = lean_string_from_utf8_unchecked(v___x_522_);
v___x_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
return v___x_526_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decode___redArg___boxed(lean_object* v_es_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Std_Http_URI_EncodedString_decode___redArg(v_es_527_);
lean_dec_ref(v_es_527_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decode(lean_object* v_r_529_, lean_object* v_es_530_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = l_Std_Http_URI_EncodedString_decode___redArg(v_es_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decode___boxed(lean_object* v_r_532_, lean_object* v_es_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Std_Http_URI_EncodedString_decode(v_r_532_, v_es_533_);
lean_dec_ref(v_es_533_);
lean_dec_ref(v_r_532_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decodeLossy___redArg(lean_object* v_es_536_){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_537_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg(v_es_536_);
v___x_538_ = lean_unsigned_to_nat(0u);
v___x_539_ = ((lean_object*)(l_Std_Http_URI_EncodedString_decodeLossy___redArg___closed__0));
v___x_540_ = l___private_Init_Data_String_Lossy_0__String_fromUTF8Lossy_go(v___x_537_, v___x_538_, v___x_539_);
lean_dec(v___x_537_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decodeLossy___redArg___boxed(lean_object* v_es_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Std_Http_URI_EncodedString_decodeLossy___redArg(v_es_541_);
lean_dec_ref(v_es_541_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decodeLossy(lean_object* v_r_543_, lean_object* v_es_544_){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = l_Std_Http_URI_EncodedString_decodeLossy___redArg(v_es_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_decodeLossy___boxed(lean_object* v_r_546_, lean_object* v_es_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l_Std_Http_URI_EncodedString_decodeLossy(v_r_546_, v_es_547_);
lean_dec_ref(v_es_547_);
lean_dec_ref(v_r_546_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0(lean_object* v_es_549_, lean_object* v_n_550_){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_551_ = lean_string_from_utf8_unchecked(v_es_549_);
v___x_552_ = l_String_quote(v___x_551_);
v___x_553_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_553_, 0, v___x_552_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0___boxed(lean_object* v_es_554_, lean_object* v_n_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Std_Http_URI_EncodedString_instRepr___redArg___lam__0(v_es_554_, v_n_555_);
lean_dec(v_n_555_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg(){
_start:
{
lean_object* v___f_559_; 
v___f_559_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instRepr___redArg___closed__0));
return v___f_559_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___redArg___boxed(lean_object* v___dummy_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l_Std_Http_URI_EncodedString_instRepr___redArg();
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr(lean_object* v_r_562_){
_start:
{
lean_object* v___f_563_; 
v___f_563_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instRepr___redArg___closed__0));
return v___f_563_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instRepr___boxed(lean_object* v_r_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_Std_Http_URI_EncodedString_instRepr(v_r_564_);
lean_dec_ref(v_r_564_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instBEq___redArg(){
_start:
{
lean_object* v___f_568_; 
v___f_568_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instBEq___redArg___closed__0));
return v___f_568_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instBEq___redArg___boxed(lean_object* v___dummy_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Std_Http_URI_EncodedString_instBEq___redArg();
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instBEq(lean_object* v_r_571_){
_start:
{
lean_object* v___f_572_; 
v___f_572_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instBEq___redArg___closed__0));
return v___f_572_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instBEq___boxed(lean_object* v_r_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_Std_Http_URI_EncodedString_instBEq(v_r_573_);
lean_dec_ref(v_r_573_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instHashable___redArg(){
_start:
{
lean_object* v___f_577_; 
v___f_577_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instHashable___redArg___closed__0));
return v___f_577_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instHashable___redArg___boxed(lean_object* v___dummy_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Std_Http_URI_EncodedString_instHashable___redArg();
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instHashable(lean_object* v_r_580_){
_start:
{
lean_object* v___f_581_; 
v___f_581_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instHashable___redArg___closed__0));
return v___f_581_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedString_instHashable___boxed(lean_object* v_r_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Std_Http_URI_EncodedString_instHashable(v_r_582_);
lean_dec_ref(v_r_582_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_empty___redArg(){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = l_ByteArray_empty;
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_empty___redArg___boxed(lean_object* v___dummy_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Std_Http_URI_EncodedQueryString_empty___redArg();
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_empty(lean_object* v_r_588_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = l_ByteArray_empty;
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_empty___boxed(lean_object* v_r_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Std_Http_URI_EncodedQueryString_empty(v_r_590_);
lean_dec_ref(v_r_590_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_instInhabited___redArg(){
_start:
{
lean_object* v___x_593_; 
v___x_593_ = l_ByteArray_empty;
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_instInhabited___redArg___boxed(lean_object* v___dummy_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = l_Std_Http_URI_EncodedQueryString_instInhabited___redArg();
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_instInhabited(lean_object* v_r_596_){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = l_ByteArray_empty;
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_instInhabited___boxed(lean_object* v_r_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Std_Http_URI_EncodedQueryString_instInhabited(v_r_598_);
lean_dec_ref(v_r_598_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push___redArg(lean_object* v_s_600_, uint8_t v_c_601_){
_start:
{
lean_object* v___x_602_; 
v___x_602_ = lean_byte_array_push(v_s_600_, v_c_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push___redArg___boxed(lean_object* v_s_603_, lean_object* v_c_604_){
_start:
{
uint8_t v_c_boxed_605_; lean_object* v_res_606_; 
v_c_boxed_605_ = lean_unbox(v_c_604_);
v_res_606_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push___redArg(v_s_603_, v_c_boxed_605_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push(lean_object* v_r_607_, lean_object* v_s_608_, uint8_t v_c_609_, lean_object* v_h_610_){
_start:
{
lean_object* v___x_611_; 
v___x_611_ = lean_byte_array_push(v_s_608_, v_c_609_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push___boxed(lean_object* v_r_612_, lean_object* v_s_613_, lean_object* v_c_614_, lean_object* v_h_615_){
_start:
{
uint8_t v_c_boxed_616_; lean_object* v_res_617_; 
v_c_boxed_616_ = lean_unbox(v_c_614_);
v_res_617_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_push(v_r_612_, v_s_613_, v_c_boxed_616_, v_h_615_);
lean_dec_ref(v_r_612_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_ofByteArray_x3f(lean_object* v_ba_618_, lean_object* v_r_619_){
_start:
{
uint8_t v___x_620_; 
lean_inc_ref(v_ba_618_);
v___x_620_ = l_Std_Http_URI_instDecidableIsAllowedEncodedQueryChars(v_r_619_, v_ba_618_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; 
lean_dec_ref(v_ba_618_);
v___x_621_ = lean_box(0);
return v___x_621_;
}
else
{
uint8_t v___x_622_; 
v___x_622_ = l_Std_Http_URI_isValidPercentEncoding(v_ba_618_);
if (v___x_622_ == 0)
{
lean_object* v___x_623_; 
lean_dec_ref(v_ba_618_);
v___x_623_ = lean_box(0);
return v___x_623_;
}
else
{
lean_object* v___x_624_; 
v___x_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_624_, 0, v_ba_618_);
return v___x_624_;
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0___redArg(lean_object* v_msg_625_){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = l_ByteArray_empty;
v___x_627_ = lean_panic_fn_borrowed(v___x_626_, v_msg_625_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0(lean_object* v_r_628_, lean_object* v_msg_629_){
_start:
{
lean_object* v___x_630_; 
v___x_630_ = l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0___redArg(v_msg_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0___boxed(lean_object* v_r_631_, lean_object* v_msg_632_){
_start:
{
lean_object* v_res_633_; 
v_res_633_ = l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0(v_r_631_, v_msg_632_);
lean_dec_ref(v_r_631_);
return v_res_633_;
}
}
static lean_object* _init_l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__2(void){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_636_ = ((lean_object*)(l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__1));
v___x_637_ = lean_unsigned_to_nat(12u);
v___x_638_ = lean_unsigned_to_nat(461u);
v___x_639_ = ((lean_object*)(l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__0));
v___x_640_ = ((lean_object*)(l_Std_Http_URI_EncodedString_ofByteArray_x21___closed__0));
v___x_641_ = l_mkPanicMessageWithDecl(v___x_640_, v___x_639_, v___x_638_, v___x_637_, v___x_636_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_ofByteArray_x21(lean_object* v_ba_642_, lean_object* v_r_643_){
_start:
{
lean_object* v___x_644_; 
v___x_644_ = l_Std_Http_URI_EncodedQueryString_ofByteArray_x3f(v_ba_642_, v_r_643_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = lean_obj_once(&l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__2, &l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__2_once, _init_l_Std_Http_URI_EncodedQueryString_ofByteArray_x21___closed__2);
v___x_646_ = l_panic___at___00Std_Http_URI_EncodedQueryString_ofByteArray_x21_spec__0___redArg(v___x_645_);
return v___x_646_;
}
else
{
lean_object* v_val_647_; 
v_val_647_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_val_647_);
lean_dec_ref_known(v___x_644_, 1);
return v_val_647_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_ofString_x3f(lean_object* v_s_648_, lean_object* v_r_649_){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = lean_string_to_utf8(v_s_648_);
v___x_651_ = l_Std_Http_URI_EncodedQueryString_ofByteArray_x3f(v___x_650_, v_r_649_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_ofString_x21(lean_object* v_s_652_, lean_object* v_r_653_){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_654_ = lean_string_to_utf8(v_s_652_);
v___x_655_ = l_Std_Http_URI_EncodedQueryString_ofByteArray_x21(v___x_654_, v_r_653_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_new___redArg(lean_object* v_ba_656_){
_start:
{
lean_inc_ref(v_ba_656_);
return v_ba_656_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_new___redArg___boxed(lean_object* v_ba_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_Std_Http_URI_EncodedQueryString_new___redArg(v_ba_657_);
lean_dec_ref(v_ba_657_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_new(lean_object* v_r_659_, lean_object* v_ba_660_, lean_object* v_valid_661_, lean_object* v___validEncoding_662_){
_start:
{
lean_inc_ref(v_ba_660_);
return v_ba_660_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_new___boxed(lean_object* v_r_663_, lean_object* v_ba_664_, lean_object* v_valid_665_, lean_object* v___validEncoding_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l_Std_Http_URI_EncodedQueryString_new(v_r_663_, v_ba_664_, v_valid_665_, v___validEncoding_666_);
lean_dec_ref(v_ba_664_);
lean_dec_ref(v_r_663_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___redArg(uint8_t v_b_668_, lean_object* v_s_669_){
_start:
{
uint8_t v___x_670_; lean_object* v___x_671_; uint8_t v___x_672_; uint8_t v___x_673_; uint8_t v___x_674_; lean_object* v___x_675_; uint8_t v___x_676_; uint8_t v___x_677_; uint8_t v___x_678_; lean_object* v_ba_679_; 
v___x_670_ = 37;
v___x_671_ = lean_byte_array_push(v_s_669_, v___x_670_);
v___x_672_ = 4;
v___x_673_ = lean_uint8_shift_right(v_b_668_, v___x_672_);
v___x_674_ = l_Std_Http_URI_hexDigit(v___x_673_);
v___x_675_ = lean_byte_array_push(v___x_671_, v___x_674_);
v___x_676_ = 15;
v___x_677_ = lean_uint8_land(v_b_668_, v___x_676_);
v___x_678_ = l_Std_Http_URI_hexDigit(v___x_677_);
v_ba_679_ = lean_byte_array_push(v___x_675_, v___x_678_);
return v_ba_679_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___redArg___boxed(lean_object* v_b_680_, lean_object* v_s_681_){
_start:
{
uint8_t v_b_boxed_682_; lean_object* v_res_683_; 
v_b_boxed_682_ = lean_unbox(v_b_680_);
v_res_683_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___redArg(v_b_boxed_682_, v_s_681_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex(lean_object* v_r_684_, uint8_t v_b_685_, lean_object* v_s_686_){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___redArg(v_b_685_, v_s_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___boxed(lean_object* v_r_688_, lean_object* v_b_689_, lean_object* v_s_690_){
_start:
{
uint8_t v_b_boxed_691_; lean_object* v_res_692_; 
v_b_boxed_691_ = lean_unbox(v_b_689_);
v_res_692_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex(v_r_688_, v_b_boxed_691_, v_s_690_);
lean_dec_ref(v_r_688_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedQueryString_encode_spec__0(lean_object* v_r_693_, lean_object* v_as_694_, size_t v_i_695_, size_t v_stop_696_, lean_object* v_b_697_){
_start:
{
lean_object* v___y_699_; uint8_t v___x_703_; 
v___x_703_ = lean_usize_dec_eq(v_i_695_, v_stop_696_);
if (v___x_703_ == 0)
{
uint8_t v___x_704_; uint8_t v___x_705_; uint8_t v___x_711_; 
v___x_704_ = lean_byte_array_uget(v_as_694_, v_i_695_);
v___x_705_ = 43;
v___x_711_ = lean_uint8_dec_eq(v___x_704_, v___x_705_);
if (v___x_711_ == 0)
{
uint8_t v___x_712_; uint8_t v___x_713_; 
v___x_712_ = 128;
v___x_713_ = lean_uint8_dec_lt(v___x_704_, v___x_712_);
if (v___x_713_ == 0)
{
goto v___jp_706_;
}
else
{
lean_object* v___x_714_; lean_object* v___x_715_; uint8_t v___x_716_; 
v___x_714_ = lean_box(v___x_704_);
lean_inc_ref(v_r_693_);
v___x_715_ = lean_apply_1(v_r_693_, v___x_714_);
v___x_716_ = lean_unbox(v___x_715_);
if (v___x_716_ == 0)
{
goto v___jp_706_;
}
else
{
lean_object* v___x_717_; 
v___x_717_ = lean_byte_array_push(v_b_697_, v___x_704_);
v___y_699_ = v___x_717_;
goto v___jp_698_;
}
}
}
else
{
lean_object* v___x_718_; 
v___x_718_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___redArg(v___x_704_, v_b_697_);
v___y_699_ = v___x_718_;
goto v___jp_698_;
}
v___jp_706_:
{
uint8_t v___x_707_; uint8_t v___x_708_; 
v___x_707_ = 32;
v___x_708_ = lean_uint8_dec_eq(v___x_704_, v___x_707_);
if (v___x_708_ == 0)
{
lean_object* v___x_709_; 
v___x_709_ = l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedQueryString_byteToHex___redArg(v___x_704_, v_b_697_);
v___y_699_ = v___x_709_;
goto v___jp_698_;
}
else
{
lean_object* v___x_710_; 
v___x_710_ = lean_byte_array_push(v_b_697_, v___x_705_);
v___y_699_ = v___x_710_;
goto v___jp_698_;
}
}
}
else
{
lean_dec_ref(v_r_693_);
return v_b_697_;
}
v___jp_698_:
{
size_t v___x_700_; size_t v___x_701_; 
v___x_700_ = ((size_t)1ULL);
v___x_701_ = lean_usize_add(v_i_695_, v___x_700_);
v_i_695_ = v___x_701_;
v_b_697_ = v___y_699_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedQueryString_encode_spec__0___boxed(lean_object* v_r_719_, lean_object* v_as_720_, lean_object* v_i_721_, lean_object* v_stop_722_, lean_object* v_b_723_){
_start:
{
size_t v_i_boxed_724_; size_t v_stop_boxed_725_; lean_object* v_res_726_; 
v_i_boxed_724_ = lean_unbox_usize(v_i_721_);
lean_dec(v_i_721_);
v_stop_boxed_725_ = lean_unbox_usize(v_stop_722_);
lean_dec(v_stop_722_);
v_res_726_ = l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedQueryString_encode_spec__0(v_r_719_, v_as_720_, v_i_boxed_724_, v_stop_boxed_725_, v_b_723_);
lean_dec_ref(v_as_720_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_encode(lean_object* v_s_727_, lean_object* v_r_728_){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; uint8_t v___x_733_; 
v___x_729_ = l_ByteArray_empty;
v___x_730_ = lean_string_to_utf8(v_s_727_);
v___x_731_ = lean_unsigned_to_nat(0u);
v___x_732_ = lean_byte_array_size(v___x_730_);
v___x_733_ = lean_nat_dec_lt(v___x_731_, v___x_732_);
if (v___x_733_ == 0)
{
lean_dec_ref(v___x_730_);
lean_dec_ref(v_r_728_);
return v___x_729_;
}
else
{
size_t v___x_734_; size_t v___x_735_; lean_object* v___x_736_; 
v___x_734_ = ((size_t)0ULL);
v___x_735_ = lean_usize_of_nat(v___x_732_);
v___x_736_ = l_ByteArray_foldlMUnsafe_fold___at___00Std_Http_URI_EncodedQueryString_encode_spec__0(v_r_728_, v___x_730_, v___x_734_, v___x_735_, v___x_729_);
lean_dec_ref(v___x_730_);
return v___x_736_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_toString___redArg(lean_object* v_es_737_){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = lean_string_from_utf8_unchecked(v_es_737_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_toString(lean_object* v_r_739_, lean_object* v_es_740_){
_start:
{
lean_object* v___x_741_; 
v___x_741_ = lean_string_from_utf8_unchecked(v_es_740_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_toString___boxed(lean_object* v_r_742_, lean_object* v_es_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_Std_Http_URI_EncodedQueryString_toString(v_r_742_, v_es_743_);
lean_dec_ref(v_r_742_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___redArg(lean_object* v_len_745_, lean_object* v_rawBytes_746_, lean_object* v_a_747_){
_start:
{
lean_object* v_fst_748_; lean_object* v_snd_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_815_; 
v_fst_748_ = lean_ctor_get(v_a_747_, 0);
v_snd_749_ = lean_ctor_get(v_a_747_, 1);
v_isSharedCheck_815_ = !lean_is_exclusive(v_a_747_);
if (v_isSharedCheck_815_ == 0)
{
v___x_751_ = v_a_747_;
v_isShared_752_ = v_isSharedCheck_815_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_snd_749_);
lean_inc(v_fst_748_);
lean_dec(v_a_747_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_815_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
uint8_t v___x_753_; 
v___x_753_ = lean_nat_dec_lt(v_snd_749_, v_len_745_);
if (v___x_753_ == 0)
{
lean_object* v___x_755_; 
if (v_isShared_752_ == 0)
{
v___x_755_ = v___x_751_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_fst_748_);
lean_ctor_set(v_reuseFailAlloc_756_, 1, v_snd_749_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
else
{
uint8_t v_plus_757_; uint8_t v___x_758_; uint8_t v___x_767_; 
v_plus_757_ = 43;
v___x_758_ = lean_byte_array_fget(v_rawBytes_746_, v_snd_749_);
v___x_767_ = lean_uint8_dec_eq(v___x_758_, v_plus_757_);
if (v___x_767_ == 0)
{
uint8_t v_percent_768_; uint8_t v___x_769_; 
v_percent_768_ = 37;
v___x_769_ = lean_uint8_dec_eq(v___x_758_, v_percent_768_);
if (v___x_769_ == 0)
{
goto v___jp_759_;
}
else
{
lean_object* v___x_770_; lean_object* v___x_771_; uint8_t v___x_772_; 
v___x_770_ = lean_unsigned_to_nat(1u);
v___x_771_ = lean_nat_add(v_snd_749_, v___x_770_);
v___x_772_ = lean_nat_dec_lt(v___x_771_, v_len_745_);
if (v___x_772_ == 0)
{
lean_dec(v___x_771_);
goto v___jp_759_;
}
else
{
uint8_t v___x_773_; lean_object* v___x_774_; 
lean_del_object(v___x_751_);
v___x_773_ = lean_byte_array_fget(v_rawBytes_746_, v___x_771_);
lean_dec(v___x_771_);
v___x_774_ = l_Std_Http_URI_hexDigitToUInt8_x3f(v___x_773_);
if (lean_obj_tag(v___x_774_) == 1)
{
lean_object* v_val_775_; lean_object* v___x_776_; lean_object* v___x_777_; uint8_t v___x_778_; 
v_val_775_ = lean_ctor_get(v___x_774_, 0);
lean_inc(v_val_775_);
lean_dec_ref_known(v___x_774_, 1);
v___x_776_ = lean_unsigned_to_nat(2u);
v___x_777_ = lean_nat_add(v_snd_749_, v___x_776_);
v___x_778_ = lean_nat_dec_lt(v___x_777_, v_len_745_);
if (v___x_778_ == 0)
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
lean_dec(v_val_775_);
lean_dec(v_snd_749_);
v___x_779_ = lean_byte_array_push(v_fst_748_, v___x_758_);
v___x_780_ = lean_byte_array_push(v___x_779_, v___x_773_);
v___x_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_781_, 0, v___x_780_);
lean_ctor_set(v___x_781_, 1, v___x_777_);
v_a_747_ = v___x_781_;
goto _start;
}
else
{
uint8_t v___x_783_; lean_object* v___x_784_; 
v___x_783_ = lean_byte_array_fget(v_rawBytes_746_, v___x_777_);
lean_dec(v___x_777_);
v___x_784_ = l_Std_Http_URI_hexDigitToUInt8_x3f(v___x_783_);
if (lean_obj_tag(v___x_784_) == 1)
{
lean_object* v_val_785_; uint8_t v___x_786_; uint8_t v___x_787_; uint8_t v___x_788_; uint8_t v___x_789_; uint8_t v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v_val_785_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_val_785_);
lean_dec_ref_known(v___x_784_, 1);
v___x_786_ = 4;
v___x_787_ = lean_unbox(v_val_775_);
lean_dec(v_val_775_);
v___x_788_ = lean_uint8_shift_left(v___x_787_, v___x_786_);
v___x_789_ = lean_unbox(v_val_785_);
lean_dec(v_val_785_);
v___x_790_ = lean_uint8_add(v___x_788_, v___x_789_);
v___x_791_ = lean_byte_array_push(v_fst_748_, v___x_790_);
v___x_792_ = lean_unsigned_to_nat(3u);
v___x_793_ = lean_nat_add(v_snd_749_, v___x_792_);
lean_dec(v_snd_749_);
v___x_794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_794_, 0, v___x_791_);
lean_ctor_set(v___x_794_, 1, v___x_793_);
v_a_747_ = v___x_794_;
goto _start;
}
else
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
lean_dec(v___x_784_);
lean_dec(v_val_775_);
v___x_796_ = lean_byte_array_push(v_fst_748_, v___x_758_);
v___x_797_ = lean_byte_array_push(v___x_796_, v___x_773_);
v___x_798_ = lean_byte_array_push(v___x_797_, v___x_783_);
v___x_799_ = lean_unsigned_to_nat(3u);
v___x_800_ = lean_nat_add(v_snd_749_, v___x_799_);
lean_dec(v_snd_749_);
v___x_801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_801_, 0, v___x_798_);
lean_ctor_set(v___x_801_, 1, v___x_800_);
v_a_747_ = v___x_801_;
goto _start;
}
}
}
else
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
lean_dec(v___x_774_);
v___x_803_ = lean_byte_array_push(v_fst_748_, v___x_758_);
v___x_804_ = lean_byte_array_push(v___x_803_, v___x_773_);
v___x_805_ = lean_unsigned_to_nat(2u);
v___x_806_ = lean_nat_add(v_snd_749_, v___x_805_);
lean_dec(v_snd_749_);
v___x_807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_804_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
v_a_747_ = v___x_807_;
goto _start;
}
}
}
}
else
{
uint8_t v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
lean_del_object(v___x_751_);
v___x_809_ = 32;
v___x_810_ = lean_byte_array_push(v_fst_748_, v___x_809_);
v___x_811_ = lean_unsigned_to_nat(1u);
v___x_812_ = lean_nat_add(v_snd_749_, v___x_811_);
lean_dec(v_snd_749_);
v___x_813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_810_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
v_a_747_ = v___x_813_;
goto _start;
}
v___jp_759_:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_764_; 
v___x_760_ = lean_byte_array_push(v_fst_748_, v___x_758_);
v___x_761_ = lean_unsigned_to_nat(1u);
v___x_762_ = lean_nat_add(v_snd_749_, v___x_761_);
lean_dec(v_snd_749_);
if (v_isShared_752_ == 0)
{
lean_ctor_set(v___x_751_, 1, v___x_762_);
lean_ctor_set(v___x_751_, 0, v___x_760_);
v___x_764_ = v___x_751_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v___x_760_);
lean_ctor_set(v_reuseFailAlloc_766_, 1, v___x_762_);
v___x_764_ = v_reuseFailAlloc_766_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
v_a_747_ = v___x_764_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___redArg___boxed(lean_object* v_len_816_, lean_object* v_rawBytes_817_, lean_object* v_a_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___redArg(v_len_816_, v_rawBytes_817_, v_a_818_);
lean_dec_ref(v_rawBytes_817_);
lean_dec(v_len_816_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_decode___redArg(lean_object* v_es_820_){
_start:
{
lean_object* v_len_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v_fst_824_; uint8_t v___x_825_; 
v_len_821_ = lean_byte_array_size(v_es_820_);
v___x_822_ = lean_obj_once(&l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg___closed__0, &l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg___closed__0_once, _init_l___private_Std_Http_Data_URI_Encoding_0__Std_Http_URI_EncodedString_decodeBytes___redArg___closed__0);
v___x_823_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___redArg(v_len_821_, v_es_820_, v___x_822_);
v_fst_824_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_fst_824_);
lean_dec_ref(v___x_823_);
v___x_825_ = lean_string_validate_utf8(v_fst_824_);
if (v___x_825_ == 0)
{
lean_object* v___x_826_; 
lean_dec(v_fst_824_);
v___x_826_ = lean_box(0);
return v___x_826_;
}
else
{
lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_827_ = lean_string_from_utf8_unchecked(v_fst_824_);
v___x_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
return v___x_828_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_decode___redArg___boxed(lean_object* v_es_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_Std_Http_URI_EncodedQueryString_decode___redArg(v_es_829_);
lean_dec_ref(v_es_829_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_decode(lean_object* v_r_831_, lean_object* v_es_832_){
_start:
{
lean_object* v___x_833_; 
v___x_833_ = l_Std_Http_URI_EncodedQueryString_decode___redArg(v_es_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryString_decode___boxed(lean_object* v_r_834_, lean_object* v_es_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l_Std_Http_URI_EncodedQueryString_decode(v_r_834_, v_es_835_);
lean_dec_ref(v_es_835_);
lean_dec_ref(v_r_834_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0(lean_object* v_len_837_, lean_object* v_rawBytes_838_, lean_object* v_inst_839_, lean_object* v_a_840_){
_start:
{
lean_object* v___x_841_; 
v___x_841_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___redArg(v_len_837_, v_rawBytes_838_, v_a_840_);
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0___boxed(lean_object* v_len_842_, lean_object* v_rawBytes_843_, lean_object* v_inst_844_, lean_object* v_a_845_){
_start:
{
lean_object* v_res_846_; 
v_res_846_ = l___private_Init_While_0__repeatM_erased___at___00Std_Http_URI_EncodedQueryString_decode_spec__0(v_len_842_, v_rawBytes_843_, v_inst_844_, v_a_845_);
lean_dec_ref(v_rawBytes_843_);
lean_dec(v_len_842_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instToStringEncodedQueryString(lean_object* v_r_847_){
_start:
{
lean_object* v___x_848_; 
v___x_848_ = lean_alloc_closure((void*)(l_Std_Http_URI_EncodedQueryString_toString___boxed), 2, 1);
lean_closure_set(v___x_848_, 0, v_r_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprEncodedQueryString___redArg(){
_start:
{
lean_object* v___f_850_; 
v___f_850_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instRepr___redArg___closed__0));
return v___f_850_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprEncodedQueryString___redArg___boxed(lean_object* v___dummy_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Std_Http_URI_instReprEncodedQueryString___redArg();
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprEncodedQueryString(lean_object* v_r_853_){
_start:
{
lean_object* v___f_854_; 
v___f_854_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instRepr___redArg___closed__0));
return v___f_854_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instReprEncodedQueryString___boxed(lean_object* v_r_855_){
_start:
{
lean_object* v_res_856_; 
v_res_856_ = l_Std_Http_URI_instReprEncodedQueryString(v_r_855_);
lean_dec_ref(v_r_855_);
return v_res_856_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqEncodedQueryString___redArg(){
_start:
{
lean_object* v___f_858_; 
v___f_858_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instBEq___redArg___closed__0));
return v___f_858_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqEncodedQueryString___redArg___boxed(lean_object* v___dummy_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l_Std_Http_URI_instBEqEncodedQueryString___redArg();
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqEncodedQueryString(lean_object* v_r_861_){
_start:
{
lean_object* v___f_862_; 
v___f_862_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instBEq___redArg___closed__0));
return v___f_862_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instBEqEncodedQueryString___boxed(lean_object* v_r_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l_Std_Http_URI_instBEqEncodedQueryString(v_r_863_);
lean_dec_ref(v_r_863_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableEncodedQueryString___redArg(){
_start:
{
lean_object* v___f_866_; 
v___f_866_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instHashable___redArg___closed__0));
return v___f_866_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableEncodedQueryString___redArg___boxed(lean_object* v___dummy_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_Std_Http_URI_instHashableEncodedQueryString___redArg();
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableEncodedQueryString(lean_object* v_r_869_){
_start:
{
lean_object* v___f_870_; 
v___f_870_ = ((lean_object*)(l_Std_Http_URI_EncodedString_instHashable___redArg___closed__0));
return v___f_870_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableEncodedQueryString___boxed(lean_object* v_r_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Std_Http_URI_instHashableEncodedQueryString(v_r_871_);
lean_dec_ref(v_r_871_);
return v_res_872_;
}
}
static uint64_t _init_l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_879_; uint64_t v___x_880_; 
v___x_879_ = ((lean_object*)(l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__0));
v___x_880_ = lean_byte_array_hash(v___x_879_);
return v___x_880_;
}
}
static lean_object* _init_l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = ((lean_object*)(l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__2));
v___x_888_ = lean_byte_array_size(v___x_887_);
return v___x_888_;
}
}
LEAN_EXPORT uint64_t l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0(lean_object* v_x_889_){
_start:
{
if (lean_obj_tag(v_x_889_) == 0)
{
uint64_t v___x_890_; 
v___x_890_ = lean_uint64_once(&l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__1, &l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__1_once, _init_l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__1);
return v___x_890_;
}
else
{
lean_object* v_val_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; uint8_t v___x_896_; lean_object* v___x_897_; uint64_t v___x_898_; 
v_val_891_ = lean_ctor_get(v_x_889_, 0);
v___x_892_ = ((lean_object*)(l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__2));
v___x_893_ = lean_unsigned_to_nat(0u);
v___x_894_ = lean_obj_once(&l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__3, &l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__3_once, _init_l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___closed__3);
v___x_895_ = lean_byte_array_size(v_val_891_);
v___x_896_ = 0;
v___x_897_ = lean_byte_array_copy_slice(v_val_891_, v___x_893_, v___x_892_, v___x_894_, v___x_895_, v___x_896_);
v___x_898_ = lean_byte_array_hash(v___x_897_);
lean_dec_ref(v___x_897_);
return v___x_898_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0___boxed(lean_object* v_x_899_){
_start:
{
uint64_t v_res_900_; lean_object* v_r_901_; 
v_res_900_ = l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___lam__0(v_x_899_);
lean_dec(v_x_899_);
v_r_901_ = lean_box_uint64(v_res_900_);
return v_r_901_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg(){
_start:
{
lean_object* v___f_904_; 
v___f_904_ = ((lean_object*)(l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___closed__0));
return v___f_904_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___boxed(lean_object* v___dummy_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg();
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString(lean_object* v_r_907_){
_start:
{
lean_object* v___f_908_; 
v___f_908_ = ((lean_object*)(l_Std_Http_URI_instHashableOptionEncodedQueryString___redArg___closed__0));
return v___f_908_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_instHashableOptionEncodedQueryString___boxed(lean_object* v_r_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = l_Std_Http_URI_instHashableOptionEncodedQueryString(v_r_909_);
lean_dec_ref(v_r_909_);
return v_res_910_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedSegment_encode___lam__0(uint8_t v___y_911_){
_start:
{
uint8_t v___x_957_; uint8_t v___x_958_; 
v___x_957_ = 48;
v___x_958_ = lean_uint8_dec_le(v___x_957_, v___y_911_);
if (v___x_958_ == 0)
{
goto v___jp_952_;
}
else
{
uint8_t v___x_959_; uint8_t v___x_960_; 
v___x_959_ = 57;
v___x_960_ = lean_uint8_dec_le(v___y_911_, v___x_959_);
if (v___x_960_ == 0)
{
goto v___jp_952_;
}
else
{
return v___x_960_;
}
}
v___jp_912_:
{
uint8_t v___x_913_; uint8_t v___x_914_; 
v___x_913_ = 45;
v___x_914_ = lean_uint8_dec_eq(v___y_911_, v___x_913_);
if (v___x_914_ == 0)
{
uint8_t v___x_915_; uint8_t v___x_916_; 
v___x_915_ = 46;
v___x_916_ = lean_uint8_dec_eq(v___y_911_, v___x_915_);
if (v___x_916_ == 0)
{
uint8_t v___x_917_; uint8_t v___x_918_; 
v___x_917_ = 95;
v___x_918_ = lean_uint8_dec_eq(v___y_911_, v___x_917_);
if (v___x_918_ == 0)
{
uint8_t v___x_919_; uint8_t v___x_920_; 
v___x_919_ = 126;
v___x_920_ = lean_uint8_dec_eq(v___y_911_, v___x_919_);
if (v___x_920_ == 0)
{
uint8_t v___x_921_; uint8_t v___x_922_; 
v___x_921_ = 33;
v___x_922_ = lean_uint8_dec_eq(v___y_911_, v___x_921_);
if (v___x_922_ == 0)
{
uint8_t v___x_923_; uint8_t v___x_924_; 
v___x_923_ = 36;
v___x_924_ = lean_uint8_dec_eq(v___y_911_, v___x_923_);
if (v___x_924_ == 0)
{
uint8_t v___x_925_; uint8_t v___x_926_; 
v___x_925_ = 38;
v___x_926_ = lean_uint8_dec_eq(v___y_911_, v___x_925_);
if (v___x_926_ == 0)
{
uint8_t v___x_927_; uint8_t v___x_928_; 
v___x_927_ = 39;
v___x_928_ = lean_uint8_dec_eq(v___y_911_, v___x_927_);
if (v___x_928_ == 0)
{
uint8_t v___x_929_; uint8_t v___x_930_; 
v___x_929_ = 40;
v___x_930_ = lean_uint8_dec_eq(v___y_911_, v___x_929_);
if (v___x_930_ == 0)
{
uint8_t v___x_931_; uint8_t v___x_932_; 
v___x_931_ = 41;
v___x_932_ = lean_uint8_dec_eq(v___y_911_, v___x_931_);
if (v___x_932_ == 0)
{
uint8_t v___x_933_; uint8_t v___x_934_; 
v___x_933_ = 42;
v___x_934_ = lean_uint8_dec_eq(v___y_911_, v___x_933_);
if (v___x_934_ == 0)
{
uint8_t v___x_935_; uint8_t v___x_936_; 
v___x_935_ = 43;
v___x_936_ = lean_uint8_dec_eq(v___y_911_, v___x_935_);
if (v___x_936_ == 0)
{
uint8_t v___x_937_; uint8_t v___x_938_; 
v___x_937_ = 44;
v___x_938_ = lean_uint8_dec_eq(v___y_911_, v___x_937_);
if (v___x_938_ == 0)
{
uint8_t v___x_939_; uint8_t v___x_940_; 
v___x_939_ = 59;
v___x_940_ = lean_uint8_dec_eq(v___y_911_, v___x_939_);
if (v___x_940_ == 0)
{
uint8_t v___x_941_; uint8_t v___x_942_; 
v___x_941_ = 61;
v___x_942_ = lean_uint8_dec_eq(v___y_911_, v___x_941_);
if (v___x_942_ == 0)
{
uint8_t v___x_943_; uint8_t v___x_944_; 
v___x_943_ = 58;
v___x_944_ = lean_uint8_dec_eq(v___y_911_, v___x_943_);
if (v___x_944_ == 0)
{
uint8_t v___x_945_; uint8_t v___x_946_; 
v___x_945_ = 64;
v___x_946_ = lean_uint8_dec_eq(v___y_911_, v___x_945_);
return v___x_946_;
}
else
{
return v___x_944_;
}
}
else
{
return v___x_942_;
}
}
else
{
return v___x_940_;
}
}
else
{
return v___x_938_;
}
}
else
{
return v___x_936_;
}
}
else
{
return v___x_934_;
}
}
else
{
return v___x_932_;
}
}
else
{
return v___x_930_;
}
}
else
{
return v___x_928_;
}
}
else
{
return v___x_926_;
}
}
else
{
return v___x_924_;
}
}
else
{
return v___x_922_;
}
}
else
{
return v___x_920_;
}
}
else
{
return v___x_918_;
}
}
else
{
return v___x_916_;
}
}
else
{
return v___x_914_;
}
}
v___jp_947_:
{
uint8_t v___x_948_; uint8_t v___x_949_; 
v___x_948_ = 65;
v___x_949_ = lean_uint8_dec_le(v___x_948_, v___y_911_);
if (v___x_949_ == 0)
{
goto v___jp_912_;
}
else
{
uint8_t v___x_950_; uint8_t v___x_951_; 
v___x_950_ = 90;
v___x_951_ = lean_uint8_dec_le(v___y_911_, v___x_950_);
if (v___x_951_ == 0)
{
goto v___jp_912_;
}
else
{
return v___x_951_;
}
}
}
v___jp_952_:
{
uint8_t v___x_953_; uint8_t v___x_954_; 
v___x_953_ = 97;
v___x_954_ = lean_uint8_dec_le(v___x_953_, v___y_911_);
if (v___x_954_ == 0)
{
goto v___jp_947_;
}
else
{
uint8_t v___x_955_; uint8_t v___x_956_; 
v___x_955_ = 122;
v___x_956_ = lean_uint8_dec_le(v___y_911_, v___x_955_);
if (v___x_956_ == 0)
{
goto v___jp_947_;
}
else
{
return v___x_956_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_encode___lam__0___boxed(lean_object* v___y_961_){
_start:
{
uint8_t v___y_265__boxed_962_; uint8_t v_res_963_; lean_object* v_r_964_; 
v___y_265__boxed_962_ = lean_unbox(v___y_961_);
v_res_963_ = l_Std_Http_URI_EncodedSegment_encode___lam__0(v___y_265__boxed_962_);
v_r_964_ = lean_box(v_res_963_);
return v_r_964_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_encode(lean_object* v_s_966_){
_start:
{
lean_object* v___f_967_; lean_object* v___x_968_; 
v___f_967_ = ((lean_object*)(l_Std_Http_URI_EncodedSegment_encode___closed__0));
v___x_968_ = l_Std_Http_URI_EncodedString_encode(v___f_967_, v_s_966_);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_ofByteArray_x3f(lean_object* v_ba_969_){
_start:
{
lean_object* v___f_970_; lean_object* v___x_971_; 
v___f_970_ = ((lean_object*)(l_Std_Http_URI_EncodedSegment_encode___closed__0));
v___x_971_ = l_Std_Http_URI_EncodedString_ofByteArray_x3f(v___f_970_, v_ba_969_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_ofByteArray_x21(lean_object* v_ba_972_){
_start:
{
lean_object* v___f_973_; lean_object* v___x_974_; 
v___f_973_ = ((lean_object*)(l_Std_Http_URI_EncodedSegment_encode___closed__0));
v___x_974_ = l_Std_Http_URI_EncodedString_ofByteArray_x21(v___f_973_, v_ba_972_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_decode(lean_object* v_segment_975_){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = l_Std_Http_URI_EncodedString_decode___redArg(v_segment_975_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedSegment_decode___boxed(lean_object* v_segment_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l_Std_Http_URI_EncodedSegment_decode(v_segment_977_);
lean_dec_ref(v_segment_977_);
return v_res_978_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedFragment_encode___lam__0(uint8_t v___y_979_){
_start:
{
uint8_t v___x_1029_; uint8_t v___x_1030_; 
v___x_1029_ = 48;
v___x_1030_ = lean_uint8_dec_le(v___x_1029_, v___y_979_);
if (v___x_1030_ == 0)
{
goto v___jp_1024_;
}
else
{
uint8_t v___x_1031_; uint8_t v___x_1032_; 
v___x_1031_ = 57;
v___x_1032_ = lean_uint8_dec_le(v___y_979_, v___x_1031_);
if (v___x_1032_ == 0)
{
goto v___jp_1024_;
}
else
{
return v___x_1032_;
}
}
v___jp_980_:
{
uint8_t v___x_981_; uint8_t v___x_982_; 
v___x_981_ = 45;
v___x_982_ = lean_uint8_dec_eq(v___y_979_, v___x_981_);
if (v___x_982_ == 0)
{
uint8_t v___x_983_; uint8_t v___x_984_; 
v___x_983_ = 46;
v___x_984_ = lean_uint8_dec_eq(v___y_979_, v___x_983_);
if (v___x_984_ == 0)
{
uint8_t v___x_985_; uint8_t v___x_986_; 
v___x_985_ = 95;
v___x_986_ = lean_uint8_dec_eq(v___y_979_, v___x_985_);
if (v___x_986_ == 0)
{
uint8_t v___x_987_; uint8_t v___x_988_; 
v___x_987_ = 126;
v___x_988_ = lean_uint8_dec_eq(v___y_979_, v___x_987_);
if (v___x_988_ == 0)
{
uint8_t v___x_989_; uint8_t v___x_990_; 
v___x_989_ = 33;
v___x_990_ = lean_uint8_dec_eq(v___y_979_, v___x_989_);
if (v___x_990_ == 0)
{
uint8_t v___x_991_; uint8_t v___x_992_; 
v___x_991_ = 36;
v___x_992_ = lean_uint8_dec_eq(v___y_979_, v___x_991_);
if (v___x_992_ == 0)
{
uint8_t v___x_993_; uint8_t v___x_994_; 
v___x_993_ = 38;
v___x_994_ = lean_uint8_dec_eq(v___y_979_, v___x_993_);
if (v___x_994_ == 0)
{
uint8_t v___x_995_; uint8_t v___x_996_; 
v___x_995_ = 39;
v___x_996_ = lean_uint8_dec_eq(v___y_979_, v___x_995_);
if (v___x_996_ == 0)
{
uint8_t v___x_997_; uint8_t v___x_998_; 
v___x_997_ = 40;
v___x_998_ = lean_uint8_dec_eq(v___y_979_, v___x_997_);
if (v___x_998_ == 0)
{
uint8_t v___x_999_; uint8_t v___x_1000_; 
v___x_999_ = 41;
v___x_1000_ = lean_uint8_dec_eq(v___y_979_, v___x_999_);
if (v___x_1000_ == 0)
{
uint8_t v___x_1001_; uint8_t v___x_1002_; 
v___x_1001_ = 42;
v___x_1002_ = lean_uint8_dec_eq(v___y_979_, v___x_1001_);
if (v___x_1002_ == 0)
{
uint8_t v___x_1003_; uint8_t v___x_1004_; 
v___x_1003_ = 43;
v___x_1004_ = lean_uint8_dec_eq(v___y_979_, v___x_1003_);
if (v___x_1004_ == 0)
{
uint8_t v___x_1005_; uint8_t v___x_1006_; 
v___x_1005_ = 44;
v___x_1006_ = lean_uint8_dec_eq(v___y_979_, v___x_1005_);
if (v___x_1006_ == 0)
{
uint8_t v___x_1007_; uint8_t v___x_1008_; 
v___x_1007_ = 59;
v___x_1008_ = lean_uint8_dec_eq(v___y_979_, v___x_1007_);
if (v___x_1008_ == 0)
{
uint8_t v___x_1009_; uint8_t v___x_1010_; 
v___x_1009_ = 61;
v___x_1010_ = lean_uint8_dec_eq(v___y_979_, v___x_1009_);
if (v___x_1010_ == 0)
{
uint8_t v___x_1011_; uint8_t v___x_1012_; 
v___x_1011_ = 58;
v___x_1012_ = lean_uint8_dec_eq(v___y_979_, v___x_1011_);
if (v___x_1012_ == 0)
{
uint8_t v___x_1013_; uint8_t v___x_1014_; 
v___x_1013_ = 64;
v___x_1014_ = lean_uint8_dec_eq(v___y_979_, v___x_1013_);
if (v___x_1014_ == 0)
{
uint8_t v___x_1015_; uint8_t v___x_1016_; 
v___x_1015_ = 47;
v___x_1016_ = lean_uint8_dec_eq(v___y_979_, v___x_1015_);
if (v___x_1016_ == 0)
{
uint8_t v___x_1017_; uint8_t v___x_1018_; 
v___x_1017_ = 63;
v___x_1018_ = lean_uint8_dec_eq(v___y_979_, v___x_1017_);
return v___x_1018_;
}
else
{
return v___x_1016_;
}
}
else
{
return v___x_1014_;
}
}
else
{
return v___x_1012_;
}
}
else
{
return v___x_1010_;
}
}
else
{
return v___x_1008_;
}
}
else
{
return v___x_1006_;
}
}
else
{
return v___x_1004_;
}
}
else
{
return v___x_1002_;
}
}
else
{
return v___x_1000_;
}
}
else
{
return v___x_998_;
}
}
else
{
return v___x_996_;
}
}
else
{
return v___x_994_;
}
}
else
{
return v___x_992_;
}
}
else
{
return v___x_990_;
}
}
else
{
return v___x_988_;
}
}
else
{
return v___x_986_;
}
}
else
{
return v___x_984_;
}
}
else
{
return v___x_982_;
}
}
v___jp_1019_:
{
uint8_t v___x_1020_; uint8_t v___x_1021_; 
v___x_1020_ = 65;
v___x_1021_ = lean_uint8_dec_le(v___x_1020_, v___y_979_);
if (v___x_1021_ == 0)
{
goto v___jp_980_;
}
else
{
uint8_t v___x_1022_; uint8_t v___x_1023_; 
v___x_1022_ = 90;
v___x_1023_ = lean_uint8_dec_le(v___y_979_, v___x_1022_);
if (v___x_1023_ == 0)
{
goto v___jp_980_;
}
else
{
return v___x_1023_;
}
}
}
v___jp_1024_:
{
uint8_t v___x_1025_; uint8_t v___x_1026_; 
v___x_1025_ = 97;
v___x_1026_ = lean_uint8_dec_le(v___x_1025_, v___y_979_);
if (v___x_1026_ == 0)
{
goto v___jp_1019_;
}
else
{
uint8_t v___x_1027_; uint8_t v___x_1028_; 
v___x_1027_ = 122;
v___x_1028_ = lean_uint8_dec_le(v___y_979_, v___x_1027_);
if (v___x_1028_ == 0)
{
goto v___jp_1019_;
}
else
{
return v___x_1028_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_encode___lam__0___boxed(lean_object* v___y_1033_){
_start:
{
uint8_t v___y_289__boxed_1034_; uint8_t v_res_1035_; lean_object* v_r_1036_; 
v___y_289__boxed_1034_ = lean_unbox(v___y_1033_);
v_res_1035_ = l_Std_Http_URI_EncodedFragment_encode___lam__0(v___y_289__boxed_1034_);
v_r_1036_ = lean_box(v_res_1035_);
return v_r_1036_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_encode(lean_object* v_s_1038_){
_start:
{
lean_object* v___f_1039_; lean_object* v___x_1040_; 
v___f_1039_ = ((lean_object*)(l_Std_Http_URI_EncodedFragment_encode___closed__0));
v___x_1040_ = l_Std_Http_URI_EncodedString_encode(v___f_1039_, v_s_1038_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_ofByteArray_x3f(lean_object* v_ba_1041_){
_start:
{
lean_object* v___f_1042_; lean_object* v___x_1043_; 
v___f_1042_ = ((lean_object*)(l_Std_Http_URI_EncodedFragment_encode___closed__0));
v___x_1043_ = l_Std_Http_URI_EncodedString_ofByteArray_x3f(v___f_1042_, v_ba_1041_);
return v___x_1043_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_ofByteArray_x21(lean_object* v_ba_1044_){
_start:
{
lean_object* v___f_1045_; lean_object* v___x_1046_; 
v___f_1045_ = ((lean_object*)(l_Std_Http_URI_EncodedFragment_encode___closed__0));
v___x_1046_ = l_Std_Http_URI_EncodedString_ofByteArray_x21(v___f_1045_, v_ba_1044_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_decode(lean_object* v_fragment_1047_){
_start:
{
lean_object* v___x_1048_; 
v___x_1048_ = l_Std_Http_URI_EncodedString_decode___redArg(v_fragment_1047_);
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedFragment_decode___boxed(lean_object* v_fragment_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l_Std_Http_URI_EncodedFragment_decode(v_fragment_1049_);
lean_dec_ref(v_fragment_1049_);
return v_res_1050_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedUserInfo_encode___lam__0(uint8_t v___y_1051_){
_start:
{
uint8_t v___x_1095_; uint8_t v___x_1096_; 
v___x_1095_ = 48;
v___x_1096_ = lean_uint8_dec_le(v___x_1095_, v___y_1051_);
if (v___x_1096_ == 0)
{
goto v___jp_1090_;
}
else
{
uint8_t v___x_1097_; uint8_t v___x_1098_; 
v___x_1097_ = 57;
v___x_1098_ = lean_uint8_dec_le(v___y_1051_, v___x_1097_);
if (v___x_1098_ == 0)
{
goto v___jp_1090_;
}
else
{
return v___x_1098_;
}
}
v___jp_1052_:
{
uint8_t v___x_1053_; uint8_t v___x_1054_; 
v___x_1053_ = 45;
v___x_1054_ = lean_uint8_dec_eq(v___y_1051_, v___x_1053_);
if (v___x_1054_ == 0)
{
uint8_t v___x_1055_; uint8_t v___x_1056_; 
v___x_1055_ = 46;
v___x_1056_ = lean_uint8_dec_eq(v___y_1051_, v___x_1055_);
if (v___x_1056_ == 0)
{
uint8_t v___x_1057_; uint8_t v___x_1058_; 
v___x_1057_ = 95;
v___x_1058_ = lean_uint8_dec_eq(v___y_1051_, v___x_1057_);
if (v___x_1058_ == 0)
{
uint8_t v___x_1059_; uint8_t v___x_1060_; 
v___x_1059_ = 126;
v___x_1060_ = lean_uint8_dec_eq(v___y_1051_, v___x_1059_);
if (v___x_1060_ == 0)
{
uint8_t v___x_1061_; uint8_t v___x_1062_; 
v___x_1061_ = 33;
v___x_1062_ = lean_uint8_dec_eq(v___y_1051_, v___x_1061_);
if (v___x_1062_ == 0)
{
uint8_t v___x_1063_; uint8_t v___x_1064_; 
v___x_1063_ = 36;
v___x_1064_ = lean_uint8_dec_eq(v___y_1051_, v___x_1063_);
if (v___x_1064_ == 0)
{
uint8_t v___x_1065_; uint8_t v___x_1066_; 
v___x_1065_ = 38;
v___x_1066_ = lean_uint8_dec_eq(v___y_1051_, v___x_1065_);
if (v___x_1066_ == 0)
{
uint8_t v___x_1067_; uint8_t v___x_1068_; 
v___x_1067_ = 39;
v___x_1068_ = lean_uint8_dec_eq(v___y_1051_, v___x_1067_);
if (v___x_1068_ == 0)
{
uint8_t v___x_1069_; uint8_t v___x_1070_; 
v___x_1069_ = 40;
v___x_1070_ = lean_uint8_dec_eq(v___y_1051_, v___x_1069_);
if (v___x_1070_ == 0)
{
uint8_t v___x_1071_; uint8_t v___x_1072_; 
v___x_1071_ = 41;
v___x_1072_ = lean_uint8_dec_eq(v___y_1051_, v___x_1071_);
if (v___x_1072_ == 0)
{
uint8_t v___x_1073_; uint8_t v___x_1074_; 
v___x_1073_ = 42;
v___x_1074_ = lean_uint8_dec_eq(v___y_1051_, v___x_1073_);
if (v___x_1074_ == 0)
{
uint8_t v___x_1075_; uint8_t v___x_1076_; 
v___x_1075_ = 43;
v___x_1076_ = lean_uint8_dec_eq(v___y_1051_, v___x_1075_);
if (v___x_1076_ == 0)
{
uint8_t v___x_1077_; uint8_t v___x_1078_; 
v___x_1077_ = 44;
v___x_1078_ = lean_uint8_dec_eq(v___y_1051_, v___x_1077_);
if (v___x_1078_ == 0)
{
uint8_t v___x_1079_; uint8_t v___x_1080_; 
v___x_1079_ = 59;
v___x_1080_ = lean_uint8_dec_eq(v___y_1051_, v___x_1079_);
if (v___x_1080_ == 0)
{
uint8_t v___x_1081_; uint8_t v___x_1082_; 
v___x_1081_ = 61;
v___x_1082_ = lean_uint8_dec_eq(v___y_1051_, v___x_1081_);
if (v___x_1082_ == 0)
{
uint8_t v___x_1083_; uint8_t v___x_1084_; 
v___x_1083_ = 58;
v___x_1084_ = lean_uint8_dec_eq(v___y_1051_, v___x_1083_);
return v___x_1084_;
}
else
{
return v___x_1082_;
}
}
else
{
return v___x_1080_;
}
}
else
{
return v___x_1078_;
}
}
else
{
return v___x_1076_;
}
}
else
{
return v___x_1074_;
}
}
else
{
return v___x_1072_;
}
}
else
{
return v___x_1070_;
}
}
else
{
return v___x_1068_;
}
}
else
{
return v___x_1066_;
}
}
else
{
return v___x_1064_;
}
}
else
{
return v___x_1062_;
}
}
else
{
return v___x_1060_;
}
}
else
{
return v___x_1058_;
}
}
else
{
return v___x_1056_;
}
}
else
{
return v___x_1054_;
}
}
v___jp_1085_:
{
uint8_t v___x_1086_; uint8_t v___x_1087_; 
v___x_1086_ = 65;
v___x_1087_ = lean_uint8_dec_le(v___x_1086_, v___y_1051_);
if (v___x_1087_ == 0)
{
goto v___jp_1052_;
}
else
{
uint8_t v___x_1088_; uint8_t v___x_1089_; 
v___x_1088_ = 90;
v___x_1089_ = lean_uint8_dec_le(v___y_1051_, v___x_1088_);
if (v___x_1089_ == 0)
{
goto v___jp_1052_;
}
else
{
return v___x_1089_;
}
}
}
v___jp_1090_:
{
uint8_t v___x_1091_; uint8_t v___x_1092_; 
v___x_1091_ = 97;
v___x_1092_ = lean_uint8_dec_le(v___x_1091_, v___y_1051_);
if (v___x_1092_ == 0)
{
goto v___jp_1085_;
}
else
{
uint8_t v___x_1093_; uint8_t v___x_1094_; 
v___x_1093_ = 122;
v___x_1094_ = lean_uint8_dec_le(v___y_1051_, v___x_1093_);
if (v___x_1094_ == 0)
{
goto v___jp_1085_;
}
else
{
return v___x_1094_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_encode___lam__0___boxed(lean_object* v___y_1099_){
_start:
{
uint8_t v___y_253__boxed_1100_; uint8_t v_res_1101_; lean_object* v_r_1102_; 
v___y_253__boxed_1100_ = lean_unbox(v___y_1099_);
v_res_1101_ = l_Std_Http_URI_EncodedUserInfo_encode___lam__0(v___y_253__boxed_1100_);
v_r_1102_ = lean_box(v_res_1101_);
return v_r_1102_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_encode(lean_object* v_s_1104_){
_start:
{
lean_object* v___f_1105_; lean_object* v___x_1106_; 
v___f_1105_ = ((lean_object*)(l_Std_Http_URI_EncodedUserInfo_encode___closed__0));
v___x_1106_ = l_Std_Http_URI_EncodedString_encode(v___f_1105_, v_s_1104_);
return v___x_1106_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_ofByteArray_x3f(lean_object* v_ba_1107_){
_start:
{
lean_object* v___f_1108_; lean_object* v___x_1109_; 
v___f_1108_ = ((lean_object*)(l_Std_Http_URI_EncodedUserInfo_encode___closed__0));
v___x_1109_ = l_Std_Http_URI_EncodedString_ofByteArray_x3f(v___f_1108_, v_ba_1107_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_ofByteArray_x21(lean_object* v_ba_1110_){
_start:
{
lean_object* v___f_1111_; lean_object* v___x_1112_; 
v___f_1111_ = ((lean_object*)(l_Std_Http_URI_EncodedUserInfo_encode___closed__0));
v___x_1112_ = l_Std_Http_URI_EncodedString_ofByteArray_x21(v___f_1111_, v_ba_1110_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_decode(lean_object* v_userInfo_1113_){
_start:
{
lean_object* v___x_1114_; 
v___x_1114_ = l_Std_Http_URI_EncodedString_decode___redArg(v_userInfo_1113_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedUserInfo_decode___boxed(lean_object* v_userInfo_1115_){
_start:
{
lean_object* v_res_1116_; 
v_res_1116_ = l_Std_Http_URI_EncodedUserInfo_decode(v_userInfo_1115_);
lean_dec_ref(v_userInfo_1115_);
return v_res_1116_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedQueryParam_encode___lam__0(uint8_t v___y_1117_){
_start:
{
uint8_t v___x_1174_; uint8_t v___x_1175_; 
v___x_1174_ = 48;
v___x_1175_ = lean_uint8_dec_le(v___x_1174_, v___y_1117_);
if (v___x_1175_ == 0)
{
goto v___jp_1169_;
}
else
{
uint8_t v___x_1176_; uint8_t v___x_1177_; 
v___x_1176_ = 57;
v___x_1177_ = lean_uint8_dec_le(v___y_1117_, v___x_1176_);
if (v___x_1177_ == 0)
{
goto v___jp_1169_;
}
else
{
goto v___jp_1118_;
}
}
v___jp_1118_:
{
uint8_t v___x_1119_; uint8_t v___x_1120_; 
v___x_1119_ = 38;
v___x_1120_ = lean_uint8_dec_eq(v___y_1117_, v___x_1119_);
if (v___x_1120_ == 0)
{
uint8_t v___x_1121_; uint8_t v___x_1122_; 
v___x_1121_ = 61;
v___x_1122_ = lean_uint8_dec_eq(v___y_1117_, v___x_1121_);
if (v___x_1122_ == 0)
{
uint8_t v___x_1123_; 
v___x_1123_ = 1;
return v___x_1123_;
}
else
{
return v___x_1120_;
}
}
else
{
uint8_t v___x_1124_; 
v___x_1124_ = 0;
return v___x_1124_;
}
}
v___jp_1125_:
{
uint8_t v___x_1126_; uint8_t v___x_1127_; 
v___x_1126_ = 45;
v___x_1127_ = lean_uint8_dec_eq(v___y_1117_, v___x_1126_);
if (v___x_1127_ == 0)
{
uint8_t v___x_1128_; uint8_t v___x_1129_; 
v___x_1128_ = 46;
v___x_1129_ = lean_uint8_dec_eq(v___y_1117_, v___x_1128_);
if (v___x_1129_ == 0)
{
uint8_t v___x_1130_; uint8_t v___x_1131_; 
v___x_1130_ = 95;
v___x_1131_ = lean_uint8_dec_eq(v___y_1117_, v___x_1130_);
if (v___x_1131_ == 0)
{
uint8_t v___x_1132_; uint8_t v___x_1133_; 
v___x_1132_ = 126;
v___x_1133_ = lean_uint8_dec_eq(v___y_1117_, v___x_1132_);
if (v___x_1133_ == 0)
{
uint8_t v___x_1134_; uint8_t v___x_1135_; 
v___x_1134_ = 33;
v___x_1135_ = lean_uint8_dec_eq(v___y_1117_, v___x_1134_);
if (v___x_1135_ == 0)
{
uint8_t v___x_1136_; uint8_t v___x_1137_; 
v___x_1136_ = 36;
v___x_1137_ = lean_uint8_dec_eq(v___y_1117_, v___x_1136_);
if (v___x_1137_ == 0)
{
uint8_t v___x_1138_; uint8_t v___x_1139_; 
v___x_1138_ = 38;
v___x_1139_ = lean_uint8_dec_eq(v___y_1117_, v___x_1138_);
if (v___x_1139_ == 0)
{
uint8_t v___x_1140_; uint8_t v___x_1141_; 
v___x_1140_ = 39;
v___x_1141_ = lean_uint8_dec_eq(v___y_1117_, v___x_1140_);
if (v___x_1141_ == 0)
{
uint8_t v___x_1142_; uint8_t v___x_1143_; 
v___x_1142_ = 40;
v___x_1143_ = lean_uint8_dec_eq(v___y_1117_, v___x_1142_);
if (v___x_1143_ == 0)
{
uint8_t v___x_1144_; uint8_t v___x_1145_; 
v___x_1144_ = 41;
v___x_1145_ = lean_uint8_dec_eq(v___y_1117_, v___x_1144_);
if (v___x_1145_ == 0)
{
uint8_t v___x_1146_; uint8_t v___x_1147_; 
v___x_1146_ = 42;
v___x_1147_ = lean_uint8_dec_eq(v___y_1117_, v___x_1146_);
if (v___x_1147_ == 0)
{
uint8_t v___x_1148_; uint8_t v___x_1149_; 
v___x_1148_ = 43;
v___x_1149_ = lean_uint8_dec_eq(v___y_1117_, v___x_1148_);
if (v___x_1149_ == 0)
{
uint8_t v___x_1150_; uint8_t v___x_1151_; 
v___x_1150_ = 44;
v___x_1151_ = lean_uint8_dec_eq(v___y_1117_, v___x_1150_);
if (v___x_1151_ == 0)
{
uint8_t v___x_1152_; uint8_t v___x_1153_; 
v___x_1152_ = 59;
v___x_1153_ = lean_uint8_dec_eq(v___y_1117_, v___x_1152_);
if (v___x_1153_ == 0)
{
uint8_t v___x_1154_; uint8_t v___x_1155_; 
v___x_1154_ = 61;
v___x_1155_ = lean_uint8_dec_eq(v___y_1117_, v___x_1154_);
if (v___x_1155_ == 0)
{
uint8_t v___x_1156_; uint8_t v___x_1157_; 
v___x_1156_ = 58;
v___x_1157_ = lean_uint8_dec_eq(v___y_1117_, v___x_1156_);
if (v___x_1157_ == 0)
{
uint8_t v___x_1158_; uint8_t v___x_1159_; 
v___x_1158_ = 64;
v___x_1159_ = lean_uint8_dec_eq(v___y_1117_, v___x_1158_);
if (v___x_1159_ == 0)
{
uint8_t v___x_1160_; uint8_t v___x_1161_; 
v___x_1160_ = 47;
v___x_1161_ = lean_uint8_dec_eq(v___y_1117_, v___x_1160_);
if (v___x_1161_ == 0)
{
uint8_t v___x_1162_; uint8_t v___x_1163_; 
v___x_1162_ = 63;
v___x_1163_ = lean_uint8_dec_eq(v___y_1117_, v___x_1162_);
if (v___x_1163_ == 0)
{
return v___x_1163_;
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
else
{
goto v___jp_1118_;
}
}
v___jp_1164_:
{
uint8_t v___x_1165_; uint8_t v___x_1166_; 
v___x_1165_ = 65;
v___x_1166_ = lean_uint8_dec_le(v___x_1165_, v___y_1117_);
if (v___x_1166_ == 0)
{
goto v___jp_1125_;
}
else
{
uint8_t v___x_1167_; uint8_t v___x_1168_; 
v___x_1167_ = 90;
v___x_1168_ = lean_uint8_dec_le(v___y_1117_, v___x_1167_);
if (v___x_1168_ == 0)
{
goto v___jp_1125_;
}
else
{
goto v___jp_1118_;
}
}
}
v___jp_1169_:
{
uint8_t v___x_1170_; uint8_t v___x_1171_; 
v___x_1170_ = 97;
v___x_1171_ = lean_uint8_dec_le(v___x_1170_, v___y_1117_);
if (v___x_1171_ == 0)
{
goto v___jp_1164_;
}
else
{
uint8_t v___x_1172_; uint8_t v___x_1173_; 
v___x_1172_ = 122;
v___x_1173_ = lean_uint8_dec_le(v___y_1117_, v___x_1172_);
if (v___x_1173_ == 0)
{
goto v___jp_1164_;
}
else
{
goto v___jp_1118_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_encode___lam__0___boxed(lean_object* v___y_1178_){
_start:
{
uint8_t v___y_625__boxed_1179_; uint8_t v_res_1180_; lean_object* v_r_1181_; 
v___y_625__boxed_1179_ = lean_unbox(v___y_1178_);
v_res_1180_ = l_Std_Http_URI_EncodedQueryParam_encode___lam__0(v___y_625__boxed_1179_);
v_r_1181_ = lean_box(v_res_1180_);
return v_r_1181_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_encode(lean_object* v_s_1183_){
_start:
{
lean_object* v___f_1184_; lean_object* v_encoded_1185_; 
v___f_1184_ = ((lean_object*)(l_Std_Http_URI_EncodedQueryParam_encode___closed__0));
v_encoded_1185_ = l_Std_Http_URI_EncodedQueryString_encode(v_s_1183_, v___f_1184_);
return v_encoded_1185_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_URI_EncodedQueryParam_ofByteArray_x3f___lam__0(uint8_t v___y_1186_){
_start:
{
uint8_t v___x_1241_; uint8_t v___x_1242_; 
v___x_1241_ = 48;
v___x_1242_ = lean_uint8_dec_le(v___x_1241_, v___y_1186_);
if (v___x_1242_ == 0)
{
goto v___jp_1236_;
}
else
{
uint8_t v___x_1243_; uint8_t v___x_1244_; 
v___x_1243_ = 57;
v___x_1244_ = lean_uint8_dec_le(v___y_1186_, v___x_1243_);
if (v___x_1244_ == 0)
{
goto v___jp_1236_;
}
else
{
goto v___jp_1187_;
}
}
v___jp_1187_:
{
uint8_t v___x_1188_; uint8_t v___x_1189_; 
v___x_1188_ = 38;
v___x_1189_ = lean_uint8_dec_eq(v___y_1186_, v___x_1188_);
if (v___x_1189_ == 0)
{
uint8_t v___x_1190_; 
v___x_1190_ = 1;
return v___x_1190_;
}
else
{
uint8_t v___x_1191_; 
v___x_1191_ = 0;
return v___x_1191_;
}
}
v___jp_1192_:
{
uint8_t v___x_1193_; uint8_t v___x_1194_; 
v___x_1193_ = 45;
v___x_1194_ = lean_uint8_dec_eq(v___y_1186_, v___x_1193_);
if (v___x_1194_ == 0)
{
uint8_t v___x_1195_; uint8_t v___x_1196_; 
v___x_1195_ = 46;
v___x_1196_ = lean_uint8_dec_eq(v___y_1186_, v___x_1195_);
if (v___x_1196_ == 0)
{
uint8_t v___x_1197_; uint8_t v___x_1198_; 
v___x_1197_ = 95;
v___x_1198_ = lean_uint8_dec_eq(v___y_1186_, v___x_1197_);
if (v___x_1198_ == 0)
{
uint8_t v___x_1199_; uint8_t v___x_1200_; 
v___x_1199_ = 126;
v___x_1200_ = lean_uint8_dec_eq(v___y_1186_, v___x_1199_);
if (v___x_1200_ == 0)
{
uint8_t v___x_1201_; uint8_t v___x_1202_; 
v___x_1201_ = 33;
v___x_1202_ = lean_uint8_dec_eq(v___y_1186_, v___x_1201_);
if (v___x_1202_ == 0)
{
uint8_t v___x_1203_; uint8_t v___x_1204_; 
v___x_1203_ = 36;
v___x_1204_ = lean_uint8_dec_eq(v___y_1186_, v___x_1203_);
if (v___x_1204_ == 0)
{
uint8_t v___x_1205_; uint8_t v___x_1206_; 
v___x_1205_ = 38;
v___x_1206_ = lean_uint8_dec_eq(v___y_1186_, v___x_1205_);
if (v___x_1206_ == 0)
{
uint8_t v___x_1207_; uint8_t v___x_1208_; 
v___x_1207_ = 39;
v___x_1208_ = lean_uint8_dec_eq(v___y_1186_, v___x_1207_);
if (v___x_1208_ == 0)
{
uint8_t v___x_1209_; uint8_t v___x_1210_; 
v___x_1209_ = 40;
v___x_1210_ = lean_uint8_dec_eq(v___y_1186_, v___x_1209_);
if (v___x_1210_ == 0)
{
uint8_t v___x_1211_; uint8_t v___x_1212_; 
v___x_1211_ = 41;
v___x_1212_ = lean_uint8_dec_eq(v___y_1186_, v___x_1211_);
if (v___x_1212_ == 0)
{
uint8_t v___x_1213_; uint8_t v___x_1214_; 
v___x_1213_ = 42;
v___x_1214_ = lean_uint8_dec_eq(v___y_1186_, v___x_1213_);
if (v___x_1214_ == 0)
{
uint8_t v___x_1215_; uint8_t v___x_1216_; 
v___x_1215_ = 43;
v___x_1216_ = lean_uint8_dec_eq(v___y_1186_, v___x_1215_);
if (v___x_1216_ == 0)
{
uint8_t v___x_1217_; uint8_t v___x_1218_; 
v___x_1217_ = 44;
v___x_1218_ = lean_uint8_dec_eq(v___y_1186_, v___x_1217_);
if (v___x_1218_ == 0)
{
uint8_t v___x_1219_; uint8_t v___x_1220_; 
v___x_1219_ = 59;
v___x_1220_ = lean_uint8_dec_eq(v___y_1186_, v___x_1219_);
if (v___x_1220_ == 0)
{
uint8_t v___x_1221_; uint8_t v___x_1222_; 
v___x_1221_ = 61;
v___x_1222_ = lean_uint8_dec_eq(v___y_1186_, v___x_1221_);
if (v___x_1222_ == 0)
{
uint8_t v___x_1223_; uint8_t v___x_1224_; 
v___x_1223_ = 58;
v___x_1224_ = lean_uint8_dec_eq(v___y_1186_, v___x_1223_);
if (v___x_1224_ == 0)
{
uint8_t v___x_1225_; uint8_t v___x_1226_; 
v___x_1225_ = 64;
v___x_1226_ = lean_uint8_dec_eq(v___y_1186_, v___x_1225_);
if (v___x_1226_ == 0)
{
uint8_t v___x_1227_; uint8_t v___x_1228_; 
v___x_1227_ = 47;
v___x_1228_ = lean_uint8_dec_eq(v___y_1186_, v___x_1227_);
if (v___x_1228_ == 0)
{
uint8_t v___x_1229_; uint8_t v___x_1230_; 
v___x_1229_ = 63;
v___x_1230_ = lean_uint8_dec_eq(v___y_1186_, v___x_1229_);
if (v___x_1230_ == 0)
{
return v___x_1230_;
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
else
{
goto v___jp_1187_;
}
}
v___jp_1231_:
{
uint8_t v___x_1232_; uint8_t v___x_1233_; 
v___x_1232_ = 65;
v___x_1233_ = lean_uint8_dec_le(v___x_1232_, v___y_1186_);
if (v___x_1233_ == 0)
{
goto v___jp_1192_;
}
else
{
uint8_t v___x_1234_; uint8_t v___x_1235_; 
v___x_1234_ = 90;
v___x_1235_ = lean_uint8_dec_le(v___y_1186_, v___x_1234_);
if (v___x_1235_ == 0)
{
goto v___jp_1192_;
}
else
{
goto v___jp_1187_;
}
}
}
v___jp_1236_:
{
uint8_t v___x_1237_; uint8_t v___x_1238_; 
v___x_1237_ = 97;
v___x_1238_ = lean_uint8_dec_le(v___x_1237_, v___y_1186_);
if (v___x_1238_ == 0)
{
goto v___jp_1231_;
}
else
{
uint8_t v___x_1239_; uint8_t v___x_1240_; 
v___x_1239_ = 122;
v___x_1240_ = lean_uint8_dec_le(v___y_1186_, v___x_1239_);
if (v___x_1240_ == 0)
{
goto v___jp_1231_;
}
else
{
goto v___jp_1187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_ofByteArray_x3f___lam__0___boxed(lean_object* v___y_1245_){
_start:
{
uint8_t v___y_322__boxed_1246_; uint8_t v_res_1247_; lean_object* v_r_1248_; 
v___y_322__boxed_1246_ = lean_unbox(v___y_1245_);
v_res_1247_ = l_Std_Http_URI_EncodedQueryParam_ofByteArray_x3f___lam__0(v___y_322__boxed_1246_);
v_r_1248_ = lean_box(v_res_1247_);
return v_r_1248_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_ofByteArray_x3f(lean_object* v_ba_1250_){
_start:
{
lean_object* v___f_1251_; lean_object* v___x_1252_; 
v___f_1251_ = ((lean_object*)(l_Std_Http_URI_EncodedQueryParam_ofByteArray_x3f___closed__0));
v___x_1252_ = l_Std_Http_URI_EncodedQueryString_ofByteArray_x3f(v_ba_1250_, v___f_1251_);
return v___x_1252_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_ofByteArray_x21(lean_object* v_ba_1253_){
_start:
{
lean_object* v___f_1254_; lean_object* v___x_1255_; 
v___f_1254_ = ((lean_object*)(l_Std_Http_URI_EncodedQueryParam_ofByteArray_x3f___closed__0));
v___x_1255_ = l_Std_Http_URI_EncodedQueryString_ofByteArray_x21(v_ba_1253_, v___f_1254_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_fromString_x3f(lean_object* v_s_1256_){
_start:
{
lean_object* v___f_1257_; lean_object* v___x_1258_; 
v___f_1257_ = ((lean_object*)(l_Std_Http_URI_EncodedQueryParam_ofByteArray_x3f___closed__0));
v___x_1258_ = l_Std_Http_URI_EncodedQueryString_ofString_x3f(v_s_1256_, v___f_1257_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_decode(lean_object* v_param_1259_){
_start:
{
lean_object* v___x_1260_; 
v___x_1260_ = l_Std_Http_URI_EncodedQueryString_decode___redArg(v_param_1259_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_URI_EncodedQueryParam_decode___boxed(lean_object* v_param_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Std_Http_URI_EncodedQueryParam_decode(v_param_1261_);
lean_dec_ref(v_param_1261_);
return v_res_1262_;
}
}
lean_object* runtime_initialize_Init_Grind(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_SInt_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Bitwise(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Lossy(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Internal_Char(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Data_URI_Encoding(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_SInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Bitwise(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Lossy(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Internal_Char(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Data_URI_Encoding(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Data_SInt_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Bitwise(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Lossy(uint8_t builtin);
lean_object* initialize_Std_Http_Internal_Char(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Data_URI_Encoding(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_SInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Bitwise(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Lossy(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Internal_Char(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Data_URI_Encoding(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Data_URI_Encoding(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Data_URI_Encoding(builtin);
}
#ifdef __cplusplus
}
#endif
