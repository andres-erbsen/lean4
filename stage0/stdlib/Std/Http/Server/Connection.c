// Lean compiler output
// Module: Std.Http.Server.Connection
// Imports: public import Std.Async.TCP public import Std.Async.ContextAsync public import Std.Http.Transport public import Std.Http.Transport.Outbox public import Std.Http.Protocol.H1 public import Std.Http.Server.Config public import Std.Http.Server.Handler
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
lean_object* l_Std_Http_Internal_Outbox_takeError_x3f___redArg(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg(lean_object*);
lean_object* l_Std_Http_Protocol_H1_Message_Head_getSize(uint8_t, lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_instMonad___redArg();
lean_object* l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
lean_object* l_Std_Async_BaseAsync_lift___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Mutex_atomically___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Body_Stream_close(lean_object*);
lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Std_CloseableChannel_new___redArg(lean_object*);
lean_object* l_Std_Http_Body_mkStream();
lean_object* l_Std_Http_Protocol_H1_Machine_canContinue(uint8_t, lean_object*, lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Std_Channel_send___redArg(lean_object*, lean_object*);
lean_object* l_Std_Channel_recvSelector___redArg(lean_object*, lean_object*);
lean_object* l_Std_CancellationToken_selector(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_Async_Selectable_one___redArg(lean_object*);
lean_object* l_Std_Async_Selector_sleep(lean_object*);
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Async_BaseAsync_toRawBaseIO___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_task_bind(lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_ByteArray_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_ByteArray_mkIterator(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Std_Time_Duration_ofNanoseconds(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_get_current_time();
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_pullNextChunk(uint8_t, lean_object*);
lean_object* l_Std_Http_Body_Stream_send(lean_object*, lean_object*, uint8_t);
lean_object* l_Std_Http_Protocol_H1_Machine_closeWithError(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Header_Name_contentLength;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Std_Http_Header_Name_transferEncoding;
lean_object* l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_maybeSuppressOutgoingBody(uint8_t, lean_object*, lean_object*);
lean_object* l_Std_Http_Protocol_H1_Message_Head_setHeaders(uint8_t, lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* l_Std_Http_Protocol_H1_instEncodeV11Head(uint8_t);
uint8_t l_ByteArray_isEmpty(lean_object*);
uint8_t l_Std_Http_instBEqStatus_beq(lean_object*, lean_object*);
uint8_t l_Std_Http_instBEqMethod_beq(uint8_t, uint8_t);
lean_object* l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_reconcileOutgoingFraming(uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_rejectOutgoingFraming(uint8_t, lean_object*);
uint16_t l_Std_Http_Status_toCode(lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* l_Std_Http_Protocol_H1_Message_Head_headers(uint8_t, lean_object*);
uint8_t l_Std_Http_Protocol_H1_Writer_instBEqState_beq(lean_object*, lean_object*);
uint8_t lean_uint16_dec_le(uint16_t, uint16_t);
uint8_t lean_uint16_dec_lt(uint16_t, uint16_t);
uint8_t l_Std_Http_Protocol_H1_Message_Head_version(uint8_t, lean_object*);
uint8_t l_Std_Http_instBEqVersion_beq(uint8_t, uint8_t);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Time_TimeZone_ZoneRules_timezoneAt(lean_object*, lean_object*);
lean_object* l_Std_Time_PlainDateTime_ofWallTime(lean_object*);
lean_object* lean_mk_thunk(lean_object*);
lean_object* l_Std_Time_DateTime_toHTTPDateString(lean_object*);
lean_object* l_Std_Http_Header_Value_ofString_x21(lean_object*);
lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_Http_Internal_Outbox_idleFor_x3f___redArg(lean_object*);
extern lean_object* l_instInhabitedError;
lean_object* l_Std_Http_Body_Stream_interestSelector(lean_object*);
lean_object* l_Std_CancellationToken_getCancellationReason(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_Std_Http_Body_Stream_hasInterest(lean_object*);
lean_object* l_Std_Http_Protocol_H1_instEmptyCollectionHead(uint8_t);
lean_object* lean_mk_empty_byte_array(lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* l_Functor_discard(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Channel_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Http_Protocol_H1_Machine_step(uint8_t, lean_object*);
lean_object* l_Std_Http_Internal_Outbox_push___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* l_Std_Http_Internal_Outbox_new___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_Http_Config_toH1Config(lean_object*);
uint8_t l_Std_Http_Method_isSafe(uint8_t);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* lean_uv_ntop_v4(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_uv_ntop_v6(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Http_Server_instImpl___closed__0_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std_Http_Server_instImpl___closed__0_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__0_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
static const lean_string_object l_Std_Http_Server_instImpl___closed__1_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Http"};
static const lean_object* l_Std_Http_Server_instImpl___closed__1_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__1_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
static const lean_string_object l_Std_Http_Server_instImpl___closed__2_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Server"};
static const lean_object* l_Std_Http_Server_instImpl___closed__2_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__2_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
static const lean_string_object l_Std_Http_Server_instImpl___closed__3_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "RemoteAddr"};
static const lean_object* l_Std_Http_Server_instImpl___closed__3_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__3_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
static const lean_ctor_object l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Http_Server_instImpl___closed__0_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_0),((lean_object*)&l_Std_Http_Server_instImpl___closed__1_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(62, 74, 245, 198, 196, 207, 141, 173)}};
static const lean_ctor_object l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_1),((lean_object*)&l_Std_Http_Server_instImpl___closed__2_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(3, 137, 82, 156, 27, 230, 60, 168)}};
static const lean_ctor_object l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value_aux_2),((lean_object*)&l_Std_Http_Server_instImpl___closed__3_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value),LEAN_SCALAR_PTR_LITERAL(136, 13, 149, 223, 202, 48, 50, 45)}};
static const lean_object* l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
LEAN_EXPORT const lean_object* l_Std_Http_Server_instImpl_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8_ = (const lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
LEAN_EXPORT const lean_object* l_Std_Http_Server_instTypeNameRemoteAddr = (const lean_object*)&l_Std_Http_Server_instImpl___closed__4_00___x40_Std_Http_Server_Connection_3058719504____hygCtx___hyg_8__value;
static const lean_string_object l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__0_value;
static const lean_string_object l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__1_value;
static const lean_string_object l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]:"};
static const lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__2 = (const lean_object*)&l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Http_Server_instToStringRemoteAddr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Server_instToStringRemoteAddr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Server_instToStringRemoteAddr___closed__0 = (const lean_object*)&l_Std_Http_Server_instToStringRemoteAddr___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Http_Server_instToStringRemoteAddr = (const lean_object*)&l_Std_Http_Server_instToStringRemoteAddr___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bytes_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bytes_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_responseBody_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_responseBody_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bodyInterest_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bodyInterest_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_response_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_response_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_timeout_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_timeout_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_keepAliveTimeout_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_keepAliveTimeout_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_shutdown_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_shutdown_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_close_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_close_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__2_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__2_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__1_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__2_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__3 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__3_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__4 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__4_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__5 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__5_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__6 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__6_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__7 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__7_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1(uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__1_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__2_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__3 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__3_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__4 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__4_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__5 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__5_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__6 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__6_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__0_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__1_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__7 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__7_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__7_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__2_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__3_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__4_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__5_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__8 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__8_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__8_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__6_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__10;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__11;
static const lean_array_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__12 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__12_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__13;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__14;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate_spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__0;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "UTC"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__1_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__2_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_BaseAsync_lift___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__2_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftT___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__3 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__3_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__3_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__2_value)} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__4 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__4_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_EAsync_instMonadFinally___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__7 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__7_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__3_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__7_value)} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__8 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__8_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftTOfMonadLift___redArg___lam__0, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__8_value),((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__2_value)} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__9 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__9_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Invalid status line"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__0_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Invalid header"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__1_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Timeout"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__2_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Entity too large"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__3 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__3_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "URI too long"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__4 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__4_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Unsupported version"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__5 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__5_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Unsupported transfer coding"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__6 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__6_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unsupported method"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__7 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__7_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Invalid chunk"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__8 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__8_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Connection closed"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__9 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__9_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Bad message"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__10 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__10_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Too many headers"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__11 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__11_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Headers too large"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__12 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__12_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Other error: "};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__13 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__13_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 7}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__1_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__0_value;
static const lean_string_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "request header timeout"};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__1_value;
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__0_value;
static const lean_ctor_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__0_value)}};
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8(uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_needsWrittenOutput(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_needsWrittenOutput___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__22(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__23(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__23___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__24___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__0 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__0_value;
static const lean_closure_object l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_needsWrittenOutput___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__1 = (const lean_object*)&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0;
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1;
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2;
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3;
static const lean_array_object l_Std_Http_Server_serveConnection___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__4 = (const lean_object*)&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__4_value;
static const lean_array_object l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5 = (const lean_object*)&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5_value;
static const lean_ctor_object l_Std_Http_Server_serveConnection___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__6 = (const lean_object*)&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__6_value;
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7;
static lean_once_cell_t l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8;
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0(lean_object* v_addr_15_){
_start:
{
if (lean_obj_tag(v_addr_15_) == 0)
{
lean_object* v_addr_16_; lean_object* v_addr_17_; uint16_t v_port_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v_addr_16_ = lean_ctor_get(v_addr_15_, 0);
v_addr_17_ = lean_ctor_get(v_addr_16_, 0);
v_port_18_ = lean_ctor_get_uint16(v_addr_16_, sizeof(void*)*1);
v___x_19_ = lean_uv_ntop_v4(v_addr_17_);
v___x_20_ = ((lean_object*)(l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__0));
v___x_21_ = lean_string_append(v___x_19_, v___x_20_);
v___x_22_ = lean_uint16_to_nat(v_port_18_);
v___x_23_ = l_Nat_reprFast(v___x_22_);
v___x_24_ = lean_string_append(v___x_21_, v___x_23_);
lean_dec_ref(v___x_23_);
return v___x_24_;
}
else
{
lean_object* v_addr_25_; lean_object* v_addr_26_; uint16_t v_port_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v_addr_25_ = lean_ctor_get(v_addr_15_, 0);
v_addr_26_ = lean_ctor_get(v_addr_25_, 0);
v_port_27_ = lean_ctor_get_uint16(v_addr_25_, sizeof(void*)*1);
v___x_28_ = ((lean_object*)(l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__1));
v___x_29_ = lean_uv_ntop_v6(v_addr_26_);
v___x_30_ = lean_string_append(v___x_28_, v___x_29_);
lean_dec_ref(v___x_29_);
v___x_31_ = ((lean_object*)(l_Std_Http_Server_instToStringRemoteAddr___lam__0___closed__2));
v___x_32_ = lean_string_append(v___x_30_, v___x_31_);
v___x_33_ = lean_uint16_to_nat(v_port_27_);
v___x_34_ = l_Nat_reprFast(v___x_33_);
v___x_35_ = lean_string_append(v___x_32_, v___x_34_);
lean_dec_ref(v___x_34_);
return v___x_35_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_instToStringRemoteAddr___lam__0___boxed(lean_object* v_addr_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Std_Http_Server_instToStringRemoteAddr___lam__0(v_addr_36_);
lean_dec_ref(v_addr_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___redArg(lean_object* v_x_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lean_obj_tag_nat(v_x_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___redArg___boxed(lean_object* v_x_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___redArg(v_x_42_);
lean_dec(v_x_42_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl(lean_object* v_00_u03b2_44_, lean_object* v_x_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_obj_tag_nat(v_x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl___boxed(lean_object* v_00_u03b2_47_, lean_object* v_x_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorIdx___impl(v_00_u03b2_47_, v_x_48_);
lean_dec(v_x_48_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(lean_object* v_t_50_, lean_object* v_k_51_){
_start:
{
switch(lean_obj_tag(v_t_50_))
{
case 0:
{
lean_object* v_x_52_; lean_object* v___x_53_; 
v_x_52_ = lean_ctor_get(v_t_50_, 0);
lean_inc(v_x_52_);
lean_dec_ref_known(v_t_50_, 1);
v___x_53_ = lean_apply_1(v_k_51_, v_x_52_);
return v___x_53_;
}
case 1:
{
lean_object* v_x_54_; lean_object* v___x_55_; 
v_x_54_ = lean_ctor_get(v_t_50_, 0);
lean_inc(v_x_54_);
lean_dec_ref_known(v_t_50_, 1);
v___x_55_ = lean_apply_1(v_k_51_, v_x_54_);
return v___x_55_;
}
case 2:
{
uint8_t v_x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v_x_56_ = lean_ctor_get_uint8(v_t_50_, 0);
lean_dec_ref_known(v_t_50_, 0);
v___x_57_ = lean_box(v_x_56_);
v___x_58_ = lean_apply_1(v_k_51_, v___x_57_);
return v___x_58_;
}
case 3:
{
lean_object* v_x_59_; lean_object* v___x_60_; 
v_x_59_ = lean_ctor_get(v_t_50_, 0);
lean_inc_ref(v_x_59_);
lean_dec_ref_known(v_t_50_, 1);
v___x_60_ = lean_apply_1(v_k_51_, v_x_59_);
return v___x_60_;
}
default: 
{
lean_dec(v_t_50_);
return v_k_51_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim(lean_object* v_00_u03b2_61_, lean_object* v_motive_62_, lean_object* v_ctorIdx_63_, lean_object* v_t_64_, lean_object* v_h_65_, lean_object* v_k_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_64_, v_k_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___boxed(lean_object* v_00_u03b2_68_, lean_object* v_motive_69_, lean_object* v_ctorIdx_70_, lean_object* v_t_71_, lean_object* v_h_72_, lean_object* v_k_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim(v_00_u03b2_68_, v_motive_69_, v_ctorIdx_70_, v_t_71_, v_h_72_, v_k_73_);
lean_dec(v_ctorIdx_70_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bytes_elim___redArg(lean_object* v_t_75_, lean_object* v_bytes_76_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_75_, v_bytes_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bytes_elim(lean_object* v_00_u03b2_78_, lean_object* v_motive_79_, lean_object* v_t_80_, lean_object* v_h_81_, lean_object* v_bytes_82_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_80_, v_bytes_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_responseBody_elim___redArg(lean_object* v_t_84_, lean_object* v_responseBody_85_){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_84_, v_responseBody_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_responseBody_elim(lean_object* v_00_u03b2_87_, lean_object* v_motive_88_, lean_object* v_t_89_, lean_object* v_h_90_, lean_object* v_responseBody_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_89_, v_responseBody_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bodyInterest_elim___redArg(lean_object* v_t_93_, lean_object* v_bodyInterest_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_93_, v_bodyInterest_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_bodyInterest_elim(lean_object* v_00_u03b2_96_, lean_object* v_motive_97_, lean_object* v_t_98_, lean_object* v_h_99_, lean_object* v_bodyInterest_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_98_, v_bodyInterest_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_response_elim___redArg(lean_object* v_t_102_, lean_object* v_response_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_102_, v_response_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_response_elim(lean_object* v_00_u03b2_105_, lean_object* v_motive_106_, lean_object* v_t_107_, lean_object* v_h_108_, lean_object* v_response_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_107_, v_response_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_timeout_elim___redArg(lean_object* v_t_111_, lean_object* v_timeout_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_111_, v_timeout_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_timeout_elim(lean_object* v_00_u03b2_114_, lean_object* v_motive_115_, lean_object* v_t_116_, lean_object* v_h_117_, lean_object* v_timeout_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_116_, v_timeout_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_keepAliveTimeout_elim___redArg(lean_object* v_t_120_, lean_object* v_keepAliveTimeout_121_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_120_, v_keepAliveTimeout_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_keepAliveTimeout_elim(lean_object* v_00_u03b2_123_, lean_object* v_motive_124_, lean_object* v_t_125_, lean_object* v_h_126_, lean_object* v_keepAliveTimeout_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_125_, v_keepAliveTimeout_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_shutdown_elim___redArg(lean_object* v_t_129_, lean_object* v_shutdown_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_129_, v_shutdown_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_shutdown_elim(lean_object* v_00_u03b2_132_, lean_object* v_motive_133_, lean_object* v_t_134_, lean_object* v_h_135_, lean_object* v_shutdown_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_134_, v_shutdown_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_close_elim___redArg(lean_object* v_t_138_, lean_object* v_close_139_){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_138_, v_close_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_close_elim(lean_object* v_00_u03b2_141_, lean_object* v_motive_142_, lean_object* v_t_143_, lean_object* v_h_144_, lean_object* v_close_145_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_Recv_ctorElim___redArg(v_t_143_, v_close_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0(lean_object* v_x_155_){
_start:
{
if (lean_obj_tag(v_x_155_) == 0)
{
lean_object* v_a_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_167_; 
v_a_159_ = lean_ctor_get(v_x_155_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v_x_155_);
if (v_isSharedCheck_167_ == 0)
{
v___x_161_ = v_x_155_;
v_isShared_162_ = v_isSharedCheck_167_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_a_159_);
lean_dec(v_x_155_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_167_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v___x_164_; 
if (v_isShared_162_ == 0)
{
v___x_164_ = v___x_161_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_a_159_);
v___x_164_ = v_reuseFailAlloc_166_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
lean_object* v___x_165_; 
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
return v___x_165_;
}
}
}
else
{
lean_object* v_a_168_; 
v_a_168_ = lean_ctor_get(v_x_155_, 0);
lean_inc(v_a_168_);
lean_dec_ref_known(v_x_155_, 1);
if (lean_obj_tag(v_a_168_) == 1)
{
lean_object* v_val_169_; 
v_val_169_ = lean_ctor_get(v_a_168_, 0);
lean_inc(v_val_169_);
lean_dec_ref_known(v_a_168_, 1);
if (lean_obj_tag(v_val_169_) == 0)
{
lean_object* v___x_170_; 
v___x_170_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3));
return v___x_170_;
}
else
{
lean_dec(v_val_169_);
goto v___jp_157_;
}
}
else
{
lean_dec(v_a_168_);
goto v___jp_157_;
}
}
v___jp_157_:
{
lean_object* v___x_158_; 
v___x_158_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__1));
return v___x_158_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___boxed(lean_object* v_x_171_, lean_object* v___y_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0(v_x_171_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1(lean_object* v_x_178_){
_start:
{
if (lean_obj_tag(v_x_178_) == 0)
{
lean_object* v_a_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_188_; 
v_a_180_ = lean_ctor_get(v_x_178_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v_x_178_);
if (v_isSharedCheck_188_ == 0)
{
v___x_182_ = v_x_178_;
v_isShared_183_ = v_isSharedCheck_188_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_a_180_);
lean_dec(v_x_178_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_188_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_185_; 
if (v_isShared_183_ == 0)
{
v___x_185_ = v___x_182_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_a_180_);
v___x_185_ = v_reuseFailAlloc_187_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
lean_object* v___x_186_; 
v___x_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
return v___x_186_;
}
}
}
else
{
lean_object* v___x_189_; 
lean_dec_ref_known(v_x_178_, 1);
v___x_189_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___closed__1));
return v___x_189_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1___boxed(lean_object* v_x_190_, lean_object* v___y_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__1(v_x_190_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2(lean_object* v_inst_193_, lean_object* v_handler_194_, lean_object* v___f_195_, lean_object* v_x_196_){
_start:
{
if (lean_obj_tag(v_x_196_) == 0)
{
lean_object* v_a_198_; lean_object* v_onFailure_199_; lean_object* v___x_200_; uint8_t v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v_a_198_ = lean_ctor_get(v_x_196_, 0);
lean_inc(v_a_198_);
lean_dec_ref_known(v_x_196_, 1);
v_onFailure_199_ = lean_ctor_get(v_inst_193_, 2);
lean_inc_ref(v_onFailure_199_);
lean_dec_ref(v_inst_193_);
v___x_200_ = lean_unsigned_to_nat(0u);
v___x_201_ = 0;
v___x_202_ = lean_apply_3(v_onFailure_199_, v_handler_194_, v_a_198_, lean_box(0));
v___x_203_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_200_, v___x_201_, v___x_202_, v___f_195_);
return v___x_203_;
}
else
{
lean_object* v___x_204_; 
lean_dec_ref(v___f_195_);
lean_dec(v_handler_194_);
lean_dec_ref(v_inst_193_);
v___x_204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_204_, 0, v_x_196_);
return v___x_204_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2___boxed(lean_object* v_inst_205_, lean_object* v_handler_206_, lean_object* v___f_207_, lean_object* v_x_208_, lean_object* v___y_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2(v_inst_205_, v_handler_206_, v___f_207_, v_x_208_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3(lean_object* v_x_211_){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_213_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_213_, 0, v_x_211_);
v___x_214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
v___x_215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3___boxed(lean_object* v_x_216_, lean_object* v___y_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__3(v_x_216_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4(uint8_t v_x_219_){
_start:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_221_, 0, v_x_219_);
v___x_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
v___x_223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4___boxed(lean_object* v_x_224_, lean_object* v___y_225_){
_start:
{
uint8_t v_x_3730__boxed_226_; lean_object* v_res_227_; 
v_x_3730__boxed_226_ = lean_unbox(v_x_224_);
v_res_227_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__4(v_x_3730__boxed_226_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5(lean_object* v_x_228_){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_230_, 0, v_x_228_);
v___x_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
v___x_232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5___boxed(lean_object* v_x_233_, lean_object* v___y_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__5(v_x_233_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6(lean_object* v_x_236_){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_238_, 0, v_x_236_);
v___x_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_239_, 0, v___x_238_);
v___x_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6___boxed(lean_object* v_x_241_, lean_object* v___y_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__6(v_x_241_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7(lean_object* v_x_244_){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__0___closed__3));
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7___boxed(lean_object* v_x_247_, lean_object* v___y_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__7(v_x_247_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9(lean_object* v_x_254_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___closed__1));
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9___boxed(lean_object* v_x_257_, lean_object* v___y_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__9(v_x_257_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8(lean_object* v___f_260_, lean_object* v_response_261_, lean_object* v___x_262_, lean_object* v___f_263_, lean_object* v_requestBody_264_, lean_object* v___f_265_, lean_object* v_responseBody_266_, lean_object* v_inst_267_, lean_object* v___f_268_, lean_object* v_____r_269_, lean_object* v_selectables_270_){
_start:
{
lean_object* v_selectables_273_; lean_object* v_selectables_279_; lean_object* v_selectables_285_; 
if (lean_obj_tag(v_responseBody_266_) == 1)
{
lean_object* v_val_290_; lean_object* v_recvSelector_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v_selectables_294_; 
v_val_290_ = lean_ctor_get(v_responseBody_266_, 0);
lean_inc(v_val_290_);
lean_dec_ref_known(v_responseBody_266_, 1);
v_recvSelector_291_ = lean_ctor_get(v_inst_267_, 3);
lean_inc_ref(v_recvSelector_291_);
lean_dec_ref(v_inst_267_);
v___x_292_ = lean_apply_1(v_recvSelector_291_, v_val_290_);
v___x_293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set(v___x_293_, 1, v___f_268_);
v_selectables_294_ = lean_array_push(v_selectables_270_, v___x_293_);
v_selectables_285_ = v_selectables_294_;
goto v___jp_284_;
}
else
{
lean_dec_ref(v___f_268_);
lean_dec_ref(v_inst_267_);
lean_dec(v_responseBody_266_);
v_selectables_285_ = v_selectables_270_;
goto v___jp_284_;
}
v___jp_272_:
{
lean_object* v___x_274_; uint8_t v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_274_ = lean_unsigned_to_nat(0u);
v___x_275_ = 0;
v___x_276_ = l_Std_Async_Selectable_one___redArg(v_selectables_273_);
v___x_277_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_274_, v___x_275_, v___x_276_, v___f_260_);
return v___x_277_;
}
v___jp_278_:
{
if (lean_obj_tag(v_response_261_) == 1)
{
lean_object* v_val_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v_selectables_283_; 
v_val_280_ = lean_ctor_get(v_response_261_, 0);
lean_inc(v_val_280_);
lean_dec_ref_known(v_response_261_, 1);
v___x_281_ = l_Std_Channel_recvSelector___redArg(v___x_262_, v_val_280_);
v___x_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
lean_ctor_set(v___x_282_, 1, v___f_263_);
v_selectables_283_ = lean_array_push(v_selectables_279_, v___x_282_);
v_selectables_273_ = v_selectables_283_;
goto v___jp_272_;
}
else
{
lean_dec_ref(v___f_263_);
lean_dec_ref(v___x_262_);
lean_dec(v_response_261_);
v_selectables_273_ = v_selectables_279_;
goto v___jp_272_;
}
}
v___jp_284_:
{
if (lean_obj_tag(v_requestBody_264_) == 1)
{
lean_object* v_val_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v_selectables_289_; 
v_val_286_ = lean_ctor_get(v_requestBody_264_, 0);
lean_inc(v_val_286_);
lean_dec_ref_known(v_requestBody_264_, 1);
v___x_287_ = l_Std_Http_Body_Stream_interestSelector(v_val_286_);
v___x_288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_287_);
lean_ctor_set(v___x_288_, 1, v___f_265_);
v_selectables_289_ = lean_array_push(v_selectables_285_, v___x_288_);
v_selectables_279_ = v_selectables_289_;
goto v___jp_278_;
}
else
{
lean_dec_ref(v___f_265_);
lean_dec(v_requestBody_264_);
v_selectables_279_ = v_selectables_285_;
goto v___jp_278_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8___boxed(lean_object* v___f_295_, lean_object* v_response_296_, lean_object* v___x_297_, lean_object* v___f_298_, lean_object* v_requestBody_299_, lean_object* v___f_300_, lean_object* v_responseBody_301_, lean_object* v_inst_302_, lean_object* v___f_303_, lean_object* v_____r_304_, lean_object* v_selectables_305_, lean_object* v___y_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8(v___f_295_, v_response_296_, v___x_297_, v___f_298_, v_requestBody_299_, v___f_300_, v_responseBody_301_, v_inst_302_, v___f_303_, v_____r_304_, v_selectables_305_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10(lean_object* v_token_308_, lean_object* v___f_309_, lean_object* v_x_310_){
_start:
{
lean_object* v___x_312_; uint8_t v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_312_ = lean_unsigned_to_nat(0u);
v___x_313_ = 0;
v___x_314_ = l_Std_CancellationToken_getCancellationReason(v_token_308_);
v___x_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
v___x_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
v___x_317_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_312_, v___x_313_, v___x_316_, v___f_309_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10___boxed(lean_object* v_token_318_, lean_object* v___f_319_, lean_object* v_x_320_, lean_object* v___y_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10(v_token_318_, v___f_319_, v_x_320_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11(lean_object* v___f_323_, lean_object* v_selectables_324_, lean_object* v___f_325_, lean_object* v_x_326_){
_start:
{
if (lean_obj_tag(v_x_326_) == 0)
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_336_; 
lean_dec_ref(v___f_325_);
lean_dec_ref(v_selectables_324_);
lean_dec_ref(v___f_323_);
v_a_328_ = lean_ctor_get(v_x_326_, 0);
v_isSharedCheck_336_ = !lean_is_exclusive(v_x_326_);
if (v_isSharedCheck_336_ == 0)
{
v___x_330_ = v_x_326_;
v_isShared_331_ = v_isSharedCheck_336_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v_x_326_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_336_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_a_328_);
v___x_333_ = v_reuseFailAlloc_335_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
lean_object* v___x_334_; 
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
}
}
else
{
lean_object* v_a_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v_a_337_ = lean_ctor_get(v_x_326_, 0);
lean_inc(v_a_337_);
lean_dec_ref_known(v_x_326_, 1);
v___x_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_338_, 0, v_a_337_);
lean_ctor_set(v___x_338_, 1, v___f_323_);
v___x_339_ = lean_array_push(v_selectables_324_, v___x_338_);
v___x_340_ = lean_box(0);
v___x_341_ = lean_apply_3(v___f_325_, v___x_340_, v___x_339_, lean_box(0));
return v___x_341_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed(lean_object* v___f_342_, lean_object* v_selectables_343_, lean_object* v___f_344_, lean_object* v_x_345_, lean_object* v___y_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11(v___f_342_, v_selectables_343_, v___f_344_, v_x_345_);
return v_res_347_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_348_ = lean_unsigned_to_nat(1000000000u);
v___x_349_ = lean_nat_to_int(v___x_348_);
return v___x_349_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_unsigned_to_nat(1000u);
v___x_351_ = lean_nat_to_int(v___x_350_);
return v___x_351_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = lean_unsigned_to_nat(1000000u);
v___x_353_ = lean_nat_to_int(v___x_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12(lean_object* v_val_354_, lean_object* v___f_355_, lean_object* v_x_356_){
_start:
{
if (lean_obj_tag(v_x_356_) == 0)
{
lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_366_; 
lean_dec_ref(v___f_355_);
v_a_358_ = lean_ctor_get(v_x_356_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v_x_356_);
if (v_isSharedCheck_366_ == 0)
{
v___x_360_ = v_x_356_;
v_isShared_361_ = v_isSharedCheck_366_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v_x_356_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_366_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___x_363_; 
if (v_isShared_361_ == 0)
{
v___x_363_ = v___x_360_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_358_);
v___x_363_ = v_reuseFailAlloc_365_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
lean_object* v___x_364_; 
v___x_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
return v___x_364_;
}
}
}
else
{
lean_object* v_a_367_; lean_object* v_second_368_; lean_object* v_nano_369_; lean_object* v_second_370_; lean_object* v_nano_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v_nanos_376_; lean_object* v___x_377_; lean_object* v_nanos_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v_second_381_; lean_object* v_nano_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v_millis_387_; lean_object* v___x_388_; uint8_t v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v_a_367_ = lean_ctor_get(v_x_356_, 0);
lean_inc(v_a_367_);
lean_dec_ref_known(v_x_356_, 1);
v_second_368_ = lean_ctor_get(v_a_367_, 0);
lean_inc(v_second_368_);
v_nano_369_ = lean_ctor_get(v_a_367_, 1);
lean_inc(v_nano_369_);
lean_dec(v_a_367_);
v_second_370_ = lean_ctor_get(v_val_354_, 0);
v_nano_371_ = lean_ctor_get(v_val_354_, 1);
v___x_372_ = lean_int_neg(v_second_368_);
lean_dec(v_second_368_);
v___x_373_ = lean_int_neg(v_nano_369_);
lean_dec(v_nano_369_);
v___x_374_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0);
v___x_375_ = lean_int_mul(v_second_370_, v___x_374_);
v_nanos_376_ = lean_int_add(v___x_375_, v_nano_371_);
lean_dec(v___x_375_);
v___x_377_ = lean_int_mul(v___x_372_, v___x_374_);
lean_dec(v___x_372_);
v_nanos_378_ = lean_int_add(v___x_377_, v___x_373_);
lean_dec(v___x_373_);
lean_dec(v___x_377_);
v___x_379_ = lean_int_add(v_nanos_376_, v_nanos_378_);
lean_dec(v_nanos_378_);
lean_dec(v_nanos_376_);
v___x_380_ = l_Std_Time_Duration_ofNanoseconds(v___x_379_);
lean_dec(v___x_379_);
v_second_381_ = lean_ctor_get(v___x_380_, 0);
lean_inc(v_second_381_);
v_nano_382_ = lean_ctor_get(v___x_380_, 1);
lean_inc(v_nano_382_);
lean_dec_ref(v___x_380_);
v___x_383_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__1);
v___x_384_ = lean_int_mul(v_second_381_, v___x_383_);
lean_dec(v_second_381_);
v___x_385_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2);
v___x_386_ = lean_int_ediv(v_nano_382_, v___x_385_);
lean_dec(v_nano_382_);
v_millis_387_ = lean_int_add(v___x_384_, v___x_386_);
lean_dec(v___x_386_);
lean_dec(v___x_384_);
v___x_388_ = lean_unsigned_to_nat(0u);
v___x_389_ = 0;
v___x_390_ = l_Std_Async_Selector_sleep(v_millis_387_);
lean_dec(v_millis_387_);
v___x_391_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_388_, v___x_389_, v___x_390_, v___f_355_);
return v___x_391_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___boxed(lean_object* v_val_392_, lean_object* v___f_393_, lean_object* v_x_394_, lean_object* v___y_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12(v_val_392_, v___f_393_, v_x_394_);
lean_dec_ref(v_val_392_);
return v_res_396_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = l_instInhabitedError;
v___x_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(lean_object* v_inst_407_, lean_object* v_inst_408_, lean_object* v_inst_409_, lean_object* v_config_410_, lean_object* v_handler_411_, lean_object* v_sources_412_){
_start:
{
lean_object* v___y_415_; lean_object* v___y_416_; uint8_t v___y_417_; lean_object* v_val_418_; lean_object* v_socket_421_; lean_object* v_expect_422_; lean_object* v_response_423_; lean_object* v_responseBody_424_; lean_object* v_requestBody_425_; lean_object* v_timeout_426_; lean_object* v_keepAliveTimeout_427_; lean_object* v_headerTimeout_428_; lean_object* v_connectionContext_429_; lean_object* v___f_430_; lean_object* v___f_431_; lean_object* v___f_432_; lean_object* v___f_433_; lean_object* v___f_434_; lean_object* v___f_435_; lean_object* v___f_436_; lean_object* v___f_437_; lean_object* v___f_438_; lean_object* v___x_439_; lean_object* v___f_440_; lean_object* v___y_442_; lean_object* v___y_492_; 
v_socket_421_ = lean_ctor_get(v_sources_412_, 0);
lean_inc(v_socket_421_);
v_expect_422_ = lean_ctor_get(v_sources_412_, 1);
lean_inc(v_expect_422_);
v_response_423_ = lean_ctor_get(v_sources_412_, 2);
lean_inc_n(v_response_423_, 2);
v_responseBody_424_ = lean_ctor_get(v_sources_412_, 3);
lean_inc_n(v_responseBody_424_, 2);
v_requestBody_425_ = lean_ctor_get(v_sources_412_, 4);
lean_inc_n(v_requestBody_425_, 2);
v_timeout_426_ = lean_ctor_get(v_sources_412_, 5);
lean_inc(v_timeout_426_);
v_keepAliveTimeout_427_ = lean_ctor_get(v_sources_412_, 6);
lean_inc(v_keepAliveTimeout_427_);
v_headerTimeout_428_ = lean_ctor_get(v_sources_412_, 7);
lean_inc(v_headerTimeout_428_);
v_connectionContext_429_ = lean_ctor_get(v_sources_412_, 8);
lean_inc_ref(v_connectionContext_429_);
lean_dec_ref(v_sources_412_);
v___f_430_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__0));
v___f_431_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__1));
v___f_432_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_432_, 0, v_inst_408_);
lean_closure_set(v___f_432_, 1, v_handler_411_);
lean_closure_set(v___f_432_, 2, v___f_431_);
v___f_433_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__2));
v___f_434_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__3));
v___f_435_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__4));
v___f_436_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__5));
v___f_437_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__6));
v___f_438_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__7));
v___x_439_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___closed__8);
lean_inc_ref(v_inst_409_);
lean_inc_ref(v___f_432_);
v___f_440_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8___boxed), 12, 9);
lean_closure_set(v___f_440_, 0, v___f_432_);
lean_closure_set(v___f_440_, 1, v_response_423_);
lean_closure_set(v___f_440_, 2, v___x_439_);
lean_closure_set(v___f_440_, 3, v___f_433_);
lean_closure_set(v___f_440_, 4, v_requestBody_425_);
lean_closure_set(v___f_440_, 5, v___f_434_);
lean_closure_set(v___f_440_, 6, v_responseBody_424_);
lean_closure_set(v___f_440_, 7, v_inst_409_);
lean_closure_set(v___f_440_, 8, v___f_435_);
if (lean_obj_tag(v_expect_422_) == 0)
{
lean_object* v_defaultPayloadBytes_495_; 
v_defaultPayloadBytes_495_ = lean_ctor_get(v_config_410_, 8);
lean_inc(v_defaultPayloadBytes_495_);
v___y_492_ = v_defaultPayloadBytes_495_;
goto v___jp_491_;
}
else
{
lean_object* v_val_496_; 
v_val_496_ = lean_ctor_get(v_expect_422_, 0);
lean_inc(v_val_496_);
lean_dec_ref_known(v_expect_422_, 1);
v___y_492_ = v_val_496_;
goto v___jp_491_;
}
v___jp_414_:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_419_, 0, v_val_418_);
v___x_420_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___y_416_, v___y_417_, v___x_419_, v___y_415_);
return v___x_420_;
}
v___jp_441_:
{
lean_object* v_token_443_; lean_object* v___f_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v_selectables_449_; 
v_token_443_ = lean_ctor_get(v_connectionContext_429_, 1);
lean_inc_ref_n(v_token_443_, 2);
lean_dec_ref(v_connectionContext_429_);
v___f_444_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__10___boxed), 4, 2);
lean_closure_set(v___f_444_, 0, v_token_443_);
lean_closure_set(v___f_444_, 1, v___f_430_);
v___x_445_ = l_Std_CancellationToken_selector(v_token_443_);
v___x_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_445_);
lean_ctor_set(v___x_446_, 1, v___f_444_);
v___x_447_ = lean_unsigned_to_nat(1u);
v___x_448_ = lean_mk_empty_array_with_capacity(v___x_447_);
v_selectables_449_ = lean_array_push(v___x_448_, v___x_446_);
if (lean_obj_tag(v_socket_421_) == 1)
{
lean_object* v_val_450_; lean_object* v_recvSelector_451_; uint64_t v_expectedBytes_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v_selectables_456_; 
lean_dec_ref(v___f_432_);
lean_dec(v_requestBody_425_);
lean_dec(v_responseBody_424_);
lean_dec(v_response_423_);
lean_dec_ref(v_inst_409_);
v_val_450_ = lean_ctor_get(v_socket_421_, 0);
lean_inc(v_val_450_);
lean_dec_ref_known(v_socket_421_, 1);
v_recvSelector_451_ = lean_ctor_get(v_inst_407_, 2);
lean_inc_ref(v_recvSelector_451_);
lean_dec_ref(v_inst_407_);
v_expectedBytes_452_ = lean_uint64_of_nat(v___y_442_);
lean_dec(v___y_442_);
v___x_453_ = lean_box_uint64(v_expectedBytes_452_);
v___x_454_ = lean_apply_2(v_recvSelector_451_, v_val_450_, v___x_453_);
v___x_455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___f_436_);
v_selectables_456_ = lean_array_push(v_selectables_449_, v___x_455_);
if (lean_obj_tag(v_keepAliveTimeout_427_) == 0)
{
if (lean_obj_tag(v_headerTimeout_428_) == 1)
{
lean_object* v_val_457_; lean_object* v___f_458_; lean_object* v___f_459_; lean_object* v___x_460_; uint8_t v___x_461_; lean_object* v___x_462_; 
lean_dec(v_timeout_426_);
v_val_457_ = lean_ctor_get(v_headerTimeout_428_, 0);
lean_inc(v_val_457_);
lean_dec_ref_known(v_headerTimeout_428_, 1);
v___f_458_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed), 5, 3);
lean_closure_set(v___f_458_, 0, v___f_437_);
lean_closure_set(v___f_458_, 1, v_selectables_456_);
lean_closure_set(v___f_458_, 2, v___f_440_);
v___f_459_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___boxed), 4, 2);
lean_closure_set(v___f_459_, 0, v_val_457_);
lean_closure_set(v___f_459_, 1, v___f_458_);
v___x_460_ = lean_unsigned_to_nat(0u);
v___x_461_ = 0;
v___x_462_ = lean_get_current_time();
if (lean_obj_tag(v___x_462_) == 0)
{
lean_object* v_a_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_470_; 
v_a_463_ = lean_ctor_get(v___x_462_, 0);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_462_);
if (v_isSharedCheck_470_ == 0)
{
v___x_465_ = v___x_462_;
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_a_463_);
lean_dec(v___x_462_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_468_; 
if (v_isShared_466_ == 0)
{
lean_ctor_set_tag(v___x_465_, 1);
v___x_468_ = v___x_465_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_a_463_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
v___y_415_ = v___f_459_;
v___y_416_ = v___x_460_;
v___y_417_ = v___x_461_;
v_val_418_ = v___x_468_;
goto v___jp_414_;
}
}
}
else
{
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_478_; 
v_a_471_ = lean_ctor_get(v___x_462_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_462_);
if (v_isSharedCheck_478_ == 0)
{
v___x_473_ = v___x_462_;
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_462_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
lean_ctor_set_tag(v___x_473_, 0);
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_a_471_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
v___y_415_ = v___f_459_;
v___y_416_ = v___x_460_;
v___y_417_ = v___x_461_;
v_val_418_ = v___x_476_;
goto v___jp_414_;
}
}
}
}
else
{
lean_object* v___f_479_; lean_object* v___x_480_; uint8_t v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
lean_dec(v_headerTimeout_428_);
v___f_479_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed), 5, 3);
lean_closure_set(v___f_479_, 0, v___f_437_);
lean_closure_set(v___f_479_, 1, v_selectables_456_);
lean_closure_set(v___f_479_, 2, v___f_440_);
v___x_480_ = lean_unsigned_to_nat(0u);
v___x_481_ = 0;
v___x_482_ = l_Std_Async_Selector_sleep(v_timeout_426_);
lean_dec(v_timeout_426_);
v___x_483_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_480_, v___x_481_, v___x_482_, v___f_479_);
return v___x_483_;
}
}
else
{
lean_object* v___f_484_; uint8_t v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
lean_dec_ref_known(v_keepAliveTimeout_427_, 1);
lean_dec(v_headerTimeout_428_);
v___f_484_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__11___boxed), 5, 3);
lean_closure_set(v___f_484_, 0, v___f_438_);
lean_closure_set(v___f_484_, 1, v_selectables_456_);
lean_closure_set(v___f_484_, 2, v___f_440_);
v___x_485_ = 0;
v___x_486_ = lean_unsigned_to_nat(0u);
v___x_487_ = l_Std_Async_Selector_sleep(v_timeout_426_);
lean_dec(v_timeout_426_);
v___x_488_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_486_, v___x_485_, v___x_487_, v___f_484_);
return v___x_488_;
}
}
else
{
lean_object* v___x_489_; lean_object* v___x_490_; 
lean_dec(v___y_442_);
lean_dec_ref(v___f_440_);
lean_dec(v_headerTimeout_428_);
lean_dec(v_keepAliveTimeout_427_);
lean_dec(v_timeout_426_);
lean_dec(v_socket_421_);
lean_dec_ref(v_inst_407_);
v___x_489_ = lean_box(0);
v___x_490_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__8(v___f_432_, v_response_423_, v___x_439_, v___f_433_, v_requestBody_425_, v___f_434_, v_responseBody_424_, v_inst_409_, v___f_435_, v___x_489_, v_selectables_449_);
return v___x_490_;
}
}
v___jp_491_:
{
lean_object* v_maximumRecvSize_493_; uint8_t v___x_494_; 
v_maximumRecvSize_493_ = lean_ctor_get(v_config_410_, 7);
lean_inc(v_maximumRecvSize_493_);
lean_dec_ref(v_config_410_);
v___x_494_ = lean_nat_dec_le(v___y_492_, v_maximumRecvSize_493_);
if (v___x_494_ == 0)
{
lean_dec(v___y_492_);
v___y_442_ = v_maximumRecvSize_493_;
goto v___jp_441_;
}
else
{
lean_dec(v_maximumRecvSize_493_);
v___y_442_ = v___y_492_;
goto v___jp_441_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___boxed(lean_object* v_inst_497_, lean_object* v_inst_498_, lean_object* v_inst_499_, lean_object* v_config_500_, lean_object* v_handler_501_, lean_object* v_sources_502_, lean_object* v_a_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(v_inst_497_, v_inst_498_, v_inst_499_, v_config_500_, v_handler_501_, v_sources_502_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent(lean_object* v_00_u03b1_505_, lean_object* v_00_u03c3_506_, lean_object* v_00_u03b2_507_, lean_object* v_inst_508_, lean_object* v_inst_509_, lean_object* v_inst_510_, lean_object* v_config_511_, lean_object* v_handler_512_, lean_object* v_sources_513_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(v_inst_508_, v_inst_509_, v_inst_510_, v_config_511_, v_handler_512_, v_sources_513_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___boxed(lean_object* v_00_u03b1_516_, lean_object* v_00_u03c3_517_, lean_object* v_00_u03b2_518_, lean_object* v_inst_519_, lean_object* v_inst_520_, lean_object* v_inst_521_, lean_object* v_config_522_, lean_object* v_handler_523_, lean_object* v_sources_524_, lean_object* v_a_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent(v_00_u03b1_516_, v_00_u03c3_517_, v_00_u03b2_518_, v_inst_519_, v_inst_520_, v_inst_521_, v_config_522_, v_handler_523_, v_sources_524_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0(lean_object* v_machine_527_, lean_object* v_x_528_){
_start:
{
lean_object* v___y_531_; uint8_t v___y_532_; 
if (lean_obj_tag(v_x_528_) == 0)
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_545_; 
lean_dec_ref(v_machine_527_);
v_a_537_ = lean_ctor_get(v_x_528_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v_x_528_);
if (v_isSharedCheck_545_ == 0)
{
v___x_539_ = v_x_528_;
v_isShared_540_ = v_isSharedCheck_545_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v_x_528_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_545_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_a_537_);
v___x_542_ = v_reuseFailAlloc_544_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
lean_object* v___x_543_; 
v___x_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
return v___x_543_;
}
}
}
else
{
lean_object* v_a_546_; lean_object* v___y_548_; uint8_t v___x_554_; 
v_a_546_ = lean_ctor_get(v_x_528_, 0);
lean_inc(v_a_546_);
lean_dec_ref_known(v_x_528_, 1);
v___x_554_ = lean_unbox(v_a_546_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; 
v___x_555_ = lean_box(40);
v___y_548_ = v___x_555_;
goto v___jp_547_;
}
else
{
lean_object* v___x_556_; 
v___x_556_ = lean_box(0);
v___y_548_ = v___x_556_;
goto v___jp_547_;
}
v___jp_547_:
{
uint8_t v___x_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v___x_549_ = 0;
lean_inc(v___y_548_);
v___x_550_ = l_Std_Http_Protocol_H1_Machine_canContinue(v___x_549_, v_machine_527_, v___y_548_);
v___x_551_ = lean_unbox(v_a_546_);
lean_dec(v_a_546_);
if (v___x_551_ == 0)
{
uint8_t v___x_552_; 
v___x_552_ = 1;
v___y_531_ = v___x_550_;
v___y_532_ = v___x_552_;
goto v___jp_530_;
}
else
{
uint8_t v___x_553_; 
v___x_553_ = 0;
v___y_531_ = v___x_550_;
v___y_532_ = v___x_553_;
goto v___jp_530_;
}
}
}
v___jp_530_:
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_533_ = lean_box(v___y_532_);
v___x_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_534_, 0, v___y_531_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
v___x_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_535_, 0, v___x_534_);
v___x_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
return v___x_536_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0___boxed(lean_object* v_machine_557_, lean_object* v_x_558_, lean_object* v___y_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0(v_machine_557_, v_x_558_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1(uint8_t v___y_561_){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_563_ = lean_box(v___y_561_);
v___x_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
v___x_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1___boxed(lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
uint8_t v___y_1377__boxed_568_; lean_object* v_res_569_; 
v___y_1377__boxed_568_ = lean_unbox(v___y_566_);
v_res_569_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__1(v___y_1377__boxed_568_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__2(lean_object* v_x_570_){
_start:
{
if (lean_obj_tag(v_x_570_) == 0)
{
lean_object* v_a_571_; lean_object* v___x_572_; 
v_a_571_ = lean_ctor_get(v_x_570_, 0);
lean_inc(v_a_571_);
lean_dec_ref_known(v_x_570_, 1);
v___x_572_ = lean_task_pure(v_a_571_);
return v___x_572_;
}
else
{
lean_object* v_a_573_; 
v_a_573_ = lean_ctor_get(v_x_570_, 0);
lean_inc_ref(v_a_573_);
lean_dec_ref_known(v_x_570_, 1);
return v_a_573_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3(lean_object* v_a_574_, lean_object* v_x_575_){
_start:
{
if (lean_obj_tag(v_x_575_) == 0)
{
uint8_t v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
lean_dec_ref_known(v_x_575_, 1);
v___x_577_ = 0;
v___x_578_ = lean_box(0);
v___x_579_ = lean_box(v___x_577_);
v___x_580_ = l_Std_Channel_send___redArg(v_a_574_, v___x_579_);
lean_dec_ref(v___x_580_);
return v___x_578_;
}
else
{
lean_object* v_a_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v_a_581_ = lean_ctor_get(v_x_575_, 0);
lean_inc(v_a_581_);
lean_dec_ref_known(v_x_575_, 1);
v___x_582_ = lean_box(0);
v___x_583_ = l_Std_Channel_send___redArg(v_a_574_, v_a_581_);
lean_dec_ref(v___x_583_);
return v___x_582_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3___boxed(lean_object* v_a_584_, lean_object* v_x_585_, lean_object* v___y_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3(v_a_584_, v_x_585_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4(uint8_t v___x_588_, lean_object* v_x_589_){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_591_ = lean_box(v___x_588_);
v___x_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
v___x_593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_593_, 0, v___x_592_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4___boxed(lean_object* v___x_594_, lean_object* v_x_595_, lean_object* v___y_596_){
_start:
{
uint8_t v___x_1421__boxed_597_; lean_object* v_res_598_; 
v___x_1421__boxed_597_ = lean_unbox(v___x_594_);
v_res_598_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__4(v___x_1421__boxed_597_, v_x_595_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5(lean_object* v_connectionContext_599_, uint8_t v___x_600_, lean_object* v_a_601_, lean_object* v___f_602_, lean_object* v___f_603_, lean_object* v___x_604_, uint8_t v___x_605_, lean_object* v___f_606_, lean_object* v_x_607_){
_start:
{
if (lean_obj_tag(v_x_607_) == 0)
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_617_; 
lean_dec_ref(v___f_606_);
lean_dec(v___x_604_);
lean_dec_ref(v___f_603_);
lean_dec_ref(v___f_602_);
lean_dec_ref(v_a_601_);
lean_dec_ref(v_connectionContext_599_);
v_a_609_ = lean_ctor_get(v_x_607_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v_x_607_);
if (v_isSharedCheck_617_ == 0)
{
v___x_611_ = v_x_607_;
v_isShared_612_ = v_isSharedCheck_617_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v_x_607_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_617_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_614_; 
if (v_isShared_612_ == 0)
{
v___x_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_609_);
v___x_614_ = v_reuseFailAlloc_616_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
lean_object* v___x_615_; 
v___x_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
return v___x_615_;
}
}
}
else
{
lean_object* v_a_618_; lean_object* v_token_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
v_a_618_ = lean_ctor_get(v_x_607_, 0);
lean_inc(v_a_618_);
lean_dec_ref_known(v_x_607_, 1);
v_token_619_ = lean_ctor_get(v_connectionContext_599_, 1);
lean_inc_ref(v_token_619_);
lean_dec_ref(v_connectionContext_599_);
v___x_620_ = lean_box(v___x_600_);
v___x_621_ = l_Std_Channel_recvSelector___redArg(v___x_620_, v_a_601_);
v___x_622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_622_, 0, v___x_621_);
lean_ctor_set(v___x_622_, 1, v___f_602_);
v___x_623_ = l_Std_CancellationToken_selector(v_token_619_);
lean_inc_ref(v___f_603_);
v___x_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
lean_ctor_set(v___x_624_, 1, v___f_603_);
v___x_625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_625_, 0, v_a_618_);
lean_ctor_set(v___x_625_, 1, v___f_603_);
v___x_626_ = lean_unsigned_to_nat(3u);
v___x_627_ = lean_mk_empty_array_with_capacity(v___x_626_);
v___x_628_ = lean_array_push(v___x_627_, v___x_622_);
v___x_629_ = lean_array_push(v___x_628_, v___x_624_);
v___x_630_ = lean_array_push(v___x_629_, v___x_625_);
v___x_631_ = l_Std_Async_Selectable_one___redArg(v___x_630_);
v___x_632_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_604_, v___x_605_, v___x_631_, v___f_606_);
return v___x_632_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5___boxed(lean_object* v_connectionContext_633_, lean_object* v___x_634_, lean_object* v_a_635_, lean_object* v___f_636_, lean_object* v___f_637_, lean_object* v___x_638_, lean_object* v___x_639_, lean_object* v___f_640_, lean_object* v_x_641_, lean_object* v___y_642_){
_start:
{
uint8_t v___x_1436__boxed_643_; uint8_t v___x_1441__boxed_644_; lean_object* v_res_645_; 
v___x_1436__boxed_643_ = lean_unbox(v___x_634_);
v___x_1441__boxed_644_ = lean_unbox(v___x_639_);
v_res_645_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5(v_connectionContext_633_, v___x_1436__boxed_643_, v_a_635_, v___f_636_, v___f_637_, v___x_638_, v___x_1441__boxed_644_, v___f_640_, v_x_641_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6(lean_object* v_config_646_, lean_object* v___x_647_, uint8_t v___x_648_, lean_object* v___f_649_, lean_object* v_x_650_){
_start:
{
if (lean_obj_tag(v_x_650_) == 0)
{
lean_object* v_a_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_660_; 
lean_dec_ref(v___f_649_);
lean_dec(v___x_647_);
v_a_652_ = lean_ctor_get(v_x_650_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v_x_650_);
if (v_isSharedCheck_660_ == 0)
{
v___x_654_ = v_x_650_;
v_isShared_655_ = v_isSharedCheck_660_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_a_652_);
lean_dec(v_x_650_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_660_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_657_; 
if (v_isShared_655_ == 0)
{
v___x_657_ = v___x_654_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_a_652_);
v___x_657_ = v_reuseFailAlloc_659_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
lean_object* v___x_658_; 
v___x_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
return v___x_658_;
}
}
}
else
{
lean_object* v_lingeringTimeout_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
lean_dec_ref_known(v_x_650_, 1);
v_lingeringTimeout_661_ = lean_ctor_get(v_config_646_, 4);
v___x_662_ = l_Std_Async_Selector_sleep(v_lingeringTimeout_661_);
v___x_663_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_647_, v___x_648_, v___x_662_, v___f_649_);
return v___x_663_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6___boxed(lean_object* v_config_664_, lean_object* v___x_665_, lean_object* v___x_666_, lean_object* v___f_667_, lean_object* v_x_668_, lean_object* v___y_669_){
_start:
{
uint8_t v___x_1510__boxed_670_; lean_object* v_res_671_; 
v___x_1510__boxed_670_ = lean_unbox(v___x_666_);
v_res_671_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6(v_config_664_, v___x_665_, v___x_1510__boxed_670_, v___f_667_, v_x_668_);
lean_dec_ref(v_config_664_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7(lean_object* v_connectionContext_675_, uint8_t v___x_676_, lean_object* v_a_677_, lean_object* v___f_678_, lean_object* v___x_679_, lean_object* v___f_680_, lean_object* v_config_681_, lean_object* v___f_682_, lean_object* v_x_683_){
_start:
{
if (lean_obj_tag(v_x_683_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_693_; 
lean_dec_ref(v___f_682_);
lean_dec_ref(v_config_681_);
lean_dec_ref(v___f_680_);
lean_dec(v___x_679_);
lean_dec_ref(v___f_678_);
lean_dec_ref(v_a_677_);
lean_dec_ref(v_connectionContext_675_);
v_a_685_ = lean_ctor_get(v_x_683_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v_x_683_);
if (v_isSharedCheck_693_ == 0)
{
v___x_687_ = v_x_683_;
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v_x_683_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_692_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; 
v___x_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
return v___x_691_;
}
}
}
else
{
lean_object* v_a_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_711_; 
v_a_694_ = lean_ctor_get(v_x_683_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v_x_683_);
if (v_isSharedCheck_711_ == 0)
{
v___x_696_ = v_x_683_;
v_isShared_697_ = v_isSharedCheck_711_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_a_694_);
lean_dec(v_x_683_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_711_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
uint8_t v___x_698_; lean_object* v___f_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___f_702_; lean_object* v___x_703_; lean_object* v___f_704_; lean_object* v___x_705_; lean_object* v___x_707_; 
v___x_698_ = 0;
v___f_699_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___closed__0));
v___x_700_ = lean_box(v___x_676_);
v___x_701_ = lean_box(v___x_698_);
lean_inc_n(v___x_679_, 3);
v___f_702_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__5___boxed), 10, 8);
lean_closure_set(v___f_702_, 0, v_connectionContext_675_);
lean_closure_set(v___f_702_, 1, v___x_700_);
lean_closure_set(v___f_702_, 2, v_a_677_);
lean_closure_set(v___f_702_, 3, v___f_678_);
lean_closure_set(v___f_702_, 4, v___f_699_);
lean_closure_set(v___f_702_, 5, v___x_679_);
lean_closure_set(v___f_702_, 6, v___x_701_);
lean_closure_set(v___f_702_, 7, v___f_680_);
v___x_703_ = lean_box(v___x_698_);
v___f_704_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__6___boxed), 6, 4);
lean_closure_set(v___f_704_, 0, v_config_681_);
lean_closure_set(v___f_704_, 1, v___x_679_);
lean_closure_set(v___f_704_, 2, v___x_703_);
lean_closure_set(v___f_704_, 3, v___f_702_);
v___x_705_ = l_BaseIO_chainTask___redArg(v_a_694_, v___f_682_, v___x_679_, v___x_698_);
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 0, v___x_705_);
v___x_707_ = v___x_696_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v___x_705_);
v___x_707_ = v_reuseFailAlloc_710_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_708_, 0, v___x_707_);
v___x_709_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_679_, v___x_698_, v___x_708_, v___f_704_);
return v___x_709_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___boxed(lean_object* v_connectionContext_712_, lean_object* v___x_713_, lean_object* v_a_714_, lean_object* v___f_715_, lean_object* v___x_716_, lean_object* v___f_717_, lean_object* v_config_718_, lean_object* v___f_719_, lean_object* v_x_720_, lean_object* v___y_721_){
_start:
{
uint8_t v___x_1550__boxed_722_; lean_object* v_res_723_; 
v___x_1550__boxed_722_ = lean_unbox(v___x_713_);
v_res_723_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7(v_connectionContext_712_, v___x_1550__boxed_722_, v_a_714_, v___f_715_, v___x_716_, v___f_717_, v_config_718_, v___f_719_, v_x_720_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8(lean_object* v_inst_724_, lean_object* v_handler_725_, lean_object* v_head_726_, lean_object* v_connectionContext_727_, uint8_t v___x_728_, lean_object* v___f_729_, lean_object* v___f_730_, lean_object* v_config_731_, lean_object* v___f_732_, lean_object* v_x_733_){
_start:
{
if (lean_obj_tag(v_x_733_) == 0)
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_743_; 
lean_dec_ref(v___f_732_);
lean_dec_ref(v_config_731_);
lean_dec_ref(v___f_730_);
lean_dec_ref(v___f_729_);
lean_dec_ref(v_connectionContext_727_);
lean_dec_ref(v_head_726_);
lean_dec(v_handler_725_);
lean_dec_ref(v_inst_724_);
v_a_735_ = lean_ctor_get(v_x_733_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v_x_733_);
if (v_isSharedCheck_743_ == 0)
{
v___x_737_ = v_x_733_;
v_isShared_738_ = v_isSharedCheck_743_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v_x_733_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_743_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_a_735_);
v___x_740_ = v_reuseFailAlloc_742_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
lean_object* v___x_741_; 
v___x_741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
return v___x_741_;
}
}
}
else
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_764_; 
v_a_744_ = lean_ctor_get(v_x_733_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v_x_733_);
if (v_isSharedCheck_764_ == 0)
{
v___x_746_ = v_x_733_;
v_isShared_747_ = v_isSharedCheck_764_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v_x_733_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_764_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v_onContinue_748_; lean_object* v___f_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___f_753_; uint8_t v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; uint8_t v___x_757_; lean_object* v___x_758_; lean_object* v___x_760_; 
v_onContinue_748_ = lean_ctor_get(v_inst_724_, 3);
lean_inc_ref(v_onContinue_748_);
lean_dec_ref(v_inst_724_);
lean_inc(v_a_744_);
v___f_749_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_749_, 0, v_a_744_);
v___x_750_ = lean_apply_2(v_onContinue_748_, v_handler_725_, v_head_726_);
v___x_751_ = lean_unsigned_to_nat(0u);
v___x_752_ = lean_box(v___x_728_);
v___f_753_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__7___boxed), 10, 8);
lean_closure_set(v___f_753_, 0, v_connectionContext_727_);
lean_closure_set(v___f_753_, 1, v___x_752_);
lean_closure_set(v___f_753_, 2, v_a_744_);
lean_closure_set(v___f_753_, 3, v___f_729_);
lean_closure_set(v___f_753_, 4, v___x_751_);
lean_closure_set(v___f_753_, 5, v___f_730_);
lean_closure_set(v___f_753_, 6, v_config_731_);
lean_closure_set(v___f_753_, 7, v___f_749_);
v___x_754_ = 0;
v___x_755_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_755_, 0, lean_box(0));
lean_closure_set(v___x_755_, 1, v___x_750_);
v___x_756_ = lean_io_as_task(v___x_755_, v___x_751_);
v___x_757_ = 1;
v___x_758_ = lean_task_bind(v___x_756_, v___f_732_, v___x_751_, v___x_757_);
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 0, v___x_758_);
v___x_760_ = v___x_746_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v___x_758_);
v___x_760_ = v_reuseFailAlloc_763_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
v___x_762_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_751_, v___x_754_, v___x_761_, v___f_753_);
return v___x_762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8___boxed(lean_object* v_inst_765_, lean_object* v_handler_766_, lean_object* v_head_767_, lean_object* v_connectionContext_768_, lean_object* v___x_769_, lean_object* v___f_770_, lean_object* v___f_771_, lean_object* v_config_772_, lean_object* v___f_773_, lean_object* v_x_774_, lean_object* v___y_775_){
_start:
{
uint8_t v___x_1633__boxed_776_; lean_object* v_res_777_; 
v___x_1633__boxed_776_ = lean_unbox(v___x_769_);
v_res_777_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8(v_inst_765_, v_handler_766_, v_head_767_, v_connectionContext_768_, v___x_1633__boxed_776_, v___f_770_, v___f_771_, v_config_772_, v___f_773_, v_x_774_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(lean_object* v_inst_780_, lean_object* v_handler_781_, lean_object* v_machine_782_, lean_object* v_head_783_, lean_object* v_config_784_, lean_object* v_connectionContext_785_){
_start:
{
lean_object* v___f_787_; lean_object* v___f_788_; lean_object* v___f_789_; uint8_t v___x_790_; lean_object* v___x_791_; lean_object* v___f_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v___f_787_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_787_, 0, v_machine_782_);
v___f_788_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__0));
v___f_789_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___closed__1));
v___x_790_ = 0;
v___x_791_ = lean_box(v___x_790_);
v___f_792_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___lam__8___boxed), 11, 9);
lean_closure_set(v___f_792_, 0, v_inst_780_);
lean_closure_set(v___f_792_, 1, v_handler_781_);
lean_closure_set(v___f_792_, 2, v_head_783_);
lean_closure_set(v___f_792_, 3, v_connectionContext_785_);
lean_closure_set(v___f_792_, 4, v___x_791_);
lean_closure_set(v___f_792_, 5, v___f_788_);
lean_closure_set(v___f_792_, 6, v___f_787_);
lean_closure_set(v___f_792_, 7, v_config_784_);
lean_closure_set(v___f_792_, 8, v___f_789_);
v___x_793_ = lean_box(0);
v___x_794_ = lean_unsigned_to_nat(0u);
v___x_795_ = l_Std_CloseableChannel_new___redArg(v___x_793_);
v___x_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_796_, 0, v___x_795_);
v___x_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
v___x_798_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_794_, v___x_790_, v___x_797_, v___f_792_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg___boxed(lean_object* v_inst_799_, lean_object* v_handler_800_, lean_object* v_machine_801_, lean_object* v_head_802_, lean_object* v_config_803_, lean_object* v_connectionContext_804_, lean_object* v_a_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(v_inst_799_, v_handler_800_, v_machine_801_, v_head_802_, v_config_803_, v_connectionContext_804_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent(lean_object* v_00_u03c3_807_, lean_object* v_inst_808_, lean_object* v_handler_809_, lean_object* v_machine_810_, lean_object* v_head_811_, lean_object* v_config_812_, lean_object* v_connectionContext_813_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(v_inst_808_, v_handler_809_, v_machine_810_, v_head_811_, v_config_812_, v_connectionContext_813_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___boxed(lean_object* v_00_u03c3_816_, lean_object* v_inst_817_, lean_object* v_handler_818_, lean_object* v_machine_819_, lean_object* v_head_820_, lean_object* v_config_821_, lean_object* v_connectionContext_822_, lean_object* v_a_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent(v_00_u03c3_816_, v_inst_817_, v_handler_818_, v_machine_819_, v_head_820_, v_config_821_, v_connectionContext_822_);
return v_res_824_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0(lean_object* v_x_825_){
_start:
{
lean_object* v_fst_826_; lean_object* v___x_827_; uint8_t v___x_828_; 
v_fst_826_ = lean_ctor_get(v_x_825_, 0);
v___x_827_ = l_Std_Http_Header_Name_contentLength;
v___x_828_ = lean_string_dec_eq(v_fst_826_, v___x_827_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; uint8_t v___x_830_; 
v___x_829_ = l_Std_Http_Header_Name_transferEncoding;
v___x_830_ = lean_string_dec_eq(v_fst_826_, v___x_829_);
return v___x_830_;
}
else
{
return v___x_828_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0___boxed(lean_object* v_x_831_){
_start:
{
uint8_t v_res_832_; lean_object* v_r_833_; 
v_res_832_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__0(v_x_831_);
lean_dec_ref(v_x_831_);
v_r_833_ = lean_box(v_res_832_);
return v_r_833_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1(lean_object* v___y_834_, lean_object* v_____r_835_){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_837_ = lean_box(0);
v___x_838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_838_, 0, v___y_834_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
v___x_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
v___x_840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed(lean_object* v___y_841_, lean_object* v_____r_842_, lean_object* v___y_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1(v___y_841_, v_____r_842_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2(lean_object* v___f_845_, lean_object* v_x_846_){
_start:
{
if (lean_obj_tag(v_x_846_) == 0)
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_856_; 
lean_dec_ref(v___f_845_);
v_a_848_ = lean_ctor_get(v_x_846_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v_x_846_);
if (v_isSharedCheck_856_ == 0)
{
v___x_850_ = v_x_846_;
v_isShared_851_ = v_isSharedCheck_856_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v_x_846_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_856_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_855_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
lean_object* v___x_854_; 
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
return v___x_854_;
}
}
}
else
{
lean_object* v_a_857_; lean_object* v___x_858_; 
v_a_857_ = lean_ctor_get(v_x_846_, 0);
lean_inc(v_a_857_);
lean_dec_ref_known(v_x_846_, 1);
v___x_858_ = lean_apply_2(v___f_845_, v_a_857_, lean_box(0));
return v___x_858_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed(lean_object* v___f_859_, lean_object* v_x_860_, lean_object* v___y_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2(v___f_859_, v_x_860_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3(lean_object* v_close_863_, lean_object* v_body_864_, lean_object* v___f_865_, lean_object* v___f_866_, lean_object* v_x_867_){
_start:
{
if (lean_obj_tag(v_x_867_) == 0)
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_877_; 
lean_dec_ref(v___f_866_);
lean_dec_ref(v___f_865_);
lean_dec(v_body_864_);
lean_dec_ref(v_close_863_);
v_a_869_ = lean_ctor_get(v_x_867_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v_x_867_);
if (v_isSharedCheck_877_ == 0)
{
v___x_871_ = v_x_867_;
v_isShared_872_ = v_isSharedCheck_877_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v_x_867_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_877_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_874_; 
if (v_isShared_872_ == 0)
{
v___x_874_ = v___x_871_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_a_869_);
v___x_874_ = v_reuseFailAlloc_876_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
lean_object* v___x_875_; 
v___x_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_875_, 0, v___x_874_);
return v___x_875_;
}
}
}
else
{
lean_object* v_a_878_; uint8_t v___x_879_; 
v_a_878_ = lean_ctor_get(v_x_867_, 0);
lean_inc(v_a_878_);
lean_dec_ref_known(v_x_867_, 1);
v___x_879_ = lean_unbox(v_a_878_);
if (v___x_879_ == 0)
{
lean_object* v___x_880_; lean_object* v___x_881_; uint8_t v___x_882_; lean_object* v___x_883_; 
lean_dec_ref(v___f_866_);
v___x_880_ = lean_unsigned_to_nat(0u);
v___x_881_ = lean_apply_2(v_close_863_, v_body_864_, lean_box(0));
v___x_882_ = lean_unbox(v_a_878_);
lean_dec(v_a_878_);
v___x_883_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_880_, v___x_882_, v___x_881_, v___f_865_);
return v___x_883_;
}
else
{
lean_object* v___x_884_; lean_object* v___x_885_; 
lean_dec(v_a_878_);
lean_dec_ref(v___f_865_);
lean_dec(v_body_864_);
lean_dec_ref(v_close_863_);
v___x_884_ = lean_box(0);
v___x_885_ = lean_apply_2(v___f_866_, v___x_884_, lean_box(0));
return v___x_885_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3___boxed(lean_object* v_close_886_, lean_object* v_body_887_, lean_object* v___f_888_, lean_object* v___f_889_, lean_object* v_x_890_, lean_object* v___y_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3(v_close_886_, v_body_887_, v___f_888_, v___f_889_, v_x_890_);
return v_res_892_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4(lean_object* v___x_893_, lean_object* v_x_894_){
_start:
{
lean_object* v_fst_895_; uint8_t v___x_896_; 
v_fst_895_ = lean_ctor_get(v_x_894_, 0);
v___x_896_ = lean_string_dec_eq(v_fst_895_, v___x_893_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed(lean_object* v___x_897_, lean_object* v_x_898_){
_start:
{
uint8_t v_res_899_; lean_object* v_r_900_; 
v_res_899_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4(v___x_897_, v_x_898_);
lean_dec_ref(v_x_898_);
lean_dec_ref(v___x_897_);
v_r_900_ = lean_box(v_res_899_);
return v_r_900_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__5(lean_object* v___x_901_, lean_object* v_x1_902_, lean_object* v_x2_903_){
_start:
{
lean_object* v_fst_904_; uint8_t v___x_905_; 
v_fst_904_ = lean_ctor_get(v_x2_903_, 0);
v___x_905_ = lean_string_dec_eq(v_fst_904_, v___x_901_);
if (v___x_905_ == 0)
{
lean_object* v___x_906_; 
v___x_906_ = lean_array_push(v_x1_902_, v_x2_903_);
return v___x_906_;
}
else
{
lean_dec_ref(v_x2_903_);
return v_x1_902_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__5___boxed(lean_object* v___x_907_, lean_object* v_x1_908_, lean_object* v_x2_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__5(v___x_907_, v_x1_908_, v_x2_909_);
lean_dec_ref(v___x_907_);
return v_res_910_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__10(void){
_start:
{
lean_object* v___x_930_; lean_object* v___f_931_; 
v___x_930_ = l_Std_Http_Header_Name_transferEncoding;
v___f_931_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed), 2, 1);
lean_closure_set(v___f_931_, 0, v___x_930_);
return v___f_931_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__11(void){
_start:
{
lean_object* v___x_932_; lean_object* v___f_933_; 
v___x_932_ = l_Std_Http_Header_Name_transferEncoding;
v___f_933_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_933_, 0, v___x_932_);
return v___f_933_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__13(void){
_start:
{
lean_object* v___x_936_; lean_object* v___f_937_; 
v___x_936_ = l_Std_Http_Header_Name_contentLength;
v___f_937_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__4___boxed), 2, 1);
lean_closure_set(v___f_937_, 0, v___x_936_);
return v___f_937_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__14(void){
_start:
{
lean_object* v___x_938_; lean_object* v___f_939_; 
v___x_938_ = l_Std_Http_Header_Name_contentLength;
v___f_939_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_939_, 0, v___x_938_);
return v___f_939_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8(lean_object* v_body_940_, lean_object* v_close_941_, lean_object* v_isClosed_942_, lean_object* v_line_943_, lean_object* v___f_944_, lean_object* v_machine_945_, lean_object* v_x_946_){
_start:
{
lean_object* v___y_949_; uint8_t v_omitBody_950_; lean_object* v___y_963_; uint8_t v___y_967_; uint8_t v___y_968_; lean_object* v_reader_969_; lean_object* v_userData_970_; lean_object* v_outputData_971_; lean_object* v_state_972_; lean_object* v_knownSize_973_; uint8_t v_userClosedBody_974_; uint8_t v_omitBody_975_; lean_object* v_userDataBytes_976_; lean_object* v_config_977_; lean_object* v_events_978_; lean_object* v_error_979_; lean_object* v_date_980_; uint8_t v_keepAlive_981_; uint8_t v_pullBodyStalled_982_; uint8_t v___y_1019_; uint8_t v___y_1020_; lean_object* v_val_1021_; lean_object* v___y_1038_; uint8_t v___y_1039_; lean_object* v___y_1040_; uint8_t v___y_1041_; uint8_t v___y_1042_; lean_object* v___y_1043_; lean_object* v___y_1044_; lean_object* v___y_1045_; lean_object* v___y_1046_; uint8_t v___y_1047_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___y_1051_; lean_object* v___y_1052_; uint8_t v___y_1053_; uint8_t v___y_1054_; lean_object* v___y_1055_; uint8_t v___y_1056_; uint8_t v___y_1058_; lean_object* v___y_1059_; lean_object* v___y_1060_; uint8_t v___y_1061_; lean_object* v___y_1062_; lean_object* v___y_1063_; lean_object* v___y_1064_; lean_object* v___y_1065_; lean_object* v___y_1066_; lean_object* v___y_1067_; lean_object* v___y_1068_; uint8_t v___y_1069_; uint8_t v___y_1070_; lean_object* v___y_1071_; uint8_t v___y_1072_; lean_object* v___y_1073_; uint8_t v___y_1077_; lean_object* v___y_1078_; lean_object* v___y_1079_; uint8_t v___y_1080_; uint8_t v___y_1081_; lean_object* v___y_1082_; lean_object* v___y_1083_; lean_object* v___y_1084_; lean_object* v___y_1085_; lean_object* v___y_1086_; lean_object* v___y_1087_; lean_object* v___y_1088_; lean_object* v___y_1089_; uint8_t v___y_1090_; uint8_t v___y_1091_; lean_object* v___y_1092_; uint8_t v___y_1093_; lean_object* v___y_1094_; uint8_t v___y_1113_; lean_object* v___y_1114_; lean_object* v___y_1115_; uint8_t v___y_1116_; uint8_t v___y_1117_; lean_object* v___y_1118_; lean_object* v___y_1119_; lean_object* v___y_1120_; lean_object* v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1123_; lean_object* v___y_1124_; uint8_t v___y_1125_; lean_object* v___y_1126_; uint8_t v___y_1127_; lean_object* v___y_1128_; uint8_t v___y_1129_; lean_object* v___y_1130_; lean_object* v___y_1144_; lean_object* v___y_1145_; uint8_t v___y_1146_; lean_object* v___y_1147_; uint8_t v___y_1148_; uint8_t v___y_1149_; lean_object* v___y_1150_; lean_object* v___y_1151_; lean_object* v___y_1152_; lean_object* v___y_1153_; lean_object* v___y_1154_; uint8_t v___y_1155_; lean_object* v___y_1156_; lean_object* v___y_1157_; lean_object* v___y_1158_; lean_object* v___y_1159_; uint8_t v___y_1160_; lean_object* v___y_1161_; uint8_t v___y_1162_; uint8_t v___y_1163_; lean_object* v___y_1164_; uint8_t v___y_1165_; lean_object* v___y_1180_; uint8_t v___y_1181_; lean_object* v___y_1182_; uint8_t v___y_1183_; uint8_t v___y_1184_; lean_object* v___y_1185_; lean_object* v___y_1186_; lean_object* v___y_1187_; uint8_t v___y_1188_; lean_object* v___y_1189_; lean_object* v___y_1190_; lean_object* v___y_1191_; lean_object* v___y_1192_; uint8_t v___y_1193_; lean_object* v___y_1194_; uint8_t v___y_1195_; uint8_t v___y_1196_; lean_object* v___y_1197_; uint8_t v___y_1198_; lean_object* v___y_1199_; lean_object* v___y_1208_; uint8_t v___y_1209_; lean_object* v___y_1210_; uint8_t v___y_1211_; uint8_t v___y_1212_; lean_object* v___y_1213_; lean_object* v___y_1214_; lean_object* v___y_1215_; uint8_t v___y_1216_; lean_object* v___y_1217_; lean_object* v___y_1218_; lean_object* v___y_1219_; lean_object* v___y_1220_; lean_object* v___y_1221_; uint8_t v___y_1222_; uint8_t v___y_1223_; lean_object* v___y_1224_; uint8_t v___y_1225_; uint8_t v___y_1226_; lean_object* v___y_1229_; uint8_t v___y_1230_; lean_object* v___y_1231_; uint8_t v___y_1232_; uint8_t v___y_1233_; uint8_t v___y_1234_; lean_object* v___y_1235_; lean_object* v___y_1236_; lean_object* v___y_1237_; uint8_t v___y_1238_; lean_object* v___y_1239_; lean_object* v___y_1240_; lean_object* v___y_1241_; lean_object* v___y_1242_; uint8_t v___y_1243_; lean_object* v___y_1244_; uint8_t v___y_1245_; lean_object* v___y_1246_; uint8_t v___y_1247_; lean_object* v___y_1262_; lean_object* v_reader_1263_; lean_object* v_userData_1264_; lean_object* v_outputData_1265_; lean_object* v_state_1266_; lean_object* v_knownSize_1267_; lean_object* v_messageHead_1268_; uint8_t v_sentMessage_1269_; uint8_t v_userClosedBody_1270_; uint8_t v_omitBody_1271_; lean_object* v_userDataBytes_1272_; lean_object* v_config_1273_; lean_object* v_events_1274_; lean_object* v_error_1275_; lean_object* v_date_1276_; uint8_t v_keepAlive_1277_; uint8_t v_pullBodyStalled_1278_; 
if (lean_obj_tag(v_x_946_) == 0)
{
lean_object* v_a_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1314_; 
lean_dec_ref(v_machine_945_);
lean_dec_ref(v___f_944_);
lean_dec_ref(v_line_943_);
lean_dec_ref(v_isClosed_942_);
lean_dec_ref(v_close_941_);
lean_dec(v_body_940_);
v_a_1306_ = lean_ctor_get(v_x_946_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v_x_946_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1308_ = v_x_946_;
v_isShared_1309_ = v_isSharedCheck_1314_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_a_1306_);
lean_dec(v_x_946_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1314_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1311_; 
if (v_isShared_1309_ == 0)
{
v___x_1311_ = v___x_1308_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_a_1306_);
v___x_1311_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
lean_object* v___x_1312_; 
v___x_1312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1311_);
return v___x_1312_;
}
}
}
else
{
lean_object* v_a_1315_; 
v_a_1315_ = lean_ctor_get(v_x_946_, 0);
lean_inc(v_a_1315_);
lean_dec_ref_known(v_x_946_, 1);
if (lean_obj_tag(v_a_1315_) == 1)
{
lean_object* v_writer_1316_; lean_object* v_reader_1317_; lean_object* v_config_1318_; lean_object* v_events_1319_; lean_object* v_error_1320_; lean_object* v_date_1321_; uint8_t v_keepAlive_1322_; uint8_t v_pullBodyStalled_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1346_; 
v_writer_1316_ = lean_ctor_get(v_machine_945_, 1);
v_reader_1317_ = lean_ctor_get(v_machine_945_, 0);
v_config_1318_ = lean_ctor_get(v_machine_945_, 2);
v_events_1319_ = lean_ctor_get(v_machine_945_, 3);
v_error_1320_ = lean_ctor_get(v_machine_945_, 4);
v_date_1321_ = lean_ctor_get(v_machine_945_, 5);
v_keepAlive_1322_ = lean_ctor_get_uint8(v_machine_945_, sizeof(void*)*6);
v_pullBodyStalled_1323_ = lean_ctor_get_uint8(v_machine_945_, sizeof(void*)*6 + 1);
v_isSharedCheck_1346_ = !lean_is_exclusive(v_machine_945_);
if (v_isSharedCheck_1346_ == 0)
{
v___x_1325_ = v_machine_945_;
v_isShared_1326_ = v_isSharedCheck_1346_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_date_1321_);
lean_inc(v_error_1320_);
lean_inc(v_events_1319_);
lean_inc(v_config_1318_);
lean_inc(v_writer_1316_);
lean_inc(v_reader_1317_);
lean_dec(v_machine_945_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1346_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v_userData_1327_; lean_object* v_outputData_1328_; lean_object* v_state_1329_; lean_object* v_messageHead_1330_; uint8_t v_sentMessage_1331_; uint8_t v_userClosedBody_1332_; uint8_t v_omitBody_1333_; lean_object* v_userDataBytes_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1344_; 
v_userData_1327_ = lean_ctor_get(v_writer_1316_, 0);
v_outputData_1328_ = lean_ctor_get(v_writer_1316_, 1);
v_state_1329_ = lean_ctor_get(v_writer_1316_, 2);
v_messageHead_1330_ = lean_ctor_get(v_writer_1316_, 4);
v_sentMessage_1331_ = lean_ctor_get_uint8(v_writer_1316_, sizeof(void*)*6);
v_userClosedBody_1332_ = lean_ctor_get_uint8(v_writer_1316_, sizeof(void*)*6 + 1);
v_omitBody_1333_ = lean_ctor_get_uint8(v_writer_1316_, sizeof(void*)*6 + 2);
v_userDataBytes_1334_ = lean_ctor_get(v_writer_1316_, 5);
v_isSharedCheck_1344_ = !lean_is_exclusive(v_writer_1316_);
if (v_isSharedCheck_1344_ == 0)
{
lean_object* v_unused_1345_; 
v_unused_1345_ = lean_ctor_get(v_writer_1316_, 3);
lean_dec(v_unused_1345_);
v___x_1336_ = v_writer_1316_;
v_isShared_1337_ = v_isSharedCheck_1344_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_userDataBytes_1334_);
lean_inc(v_messageHead_1330_);
lean_inc(v_state_1329_);
lean_inc(v_outputData_1328_);
lean_inc(v_userData_1327_);
lean_dec(v_writer_1316_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1344_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1339_; 
lean_inc(v_userDataBytes_1334_);
lean_inc(v_messageHead_1330_);
lean_inc_ref(v_a_1315_);
lean_inc(v_state_1329_);
lean_inc_ref(v_outputData_1328_);
lean_inc_ref(v_userData_1327_);
if (v_isShared_1337_ == 0)
{
lean_ctor_set(v___x_1336_, 3, v_a_1315_);
v___x_1339_ = v___x_1336_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_userData_1327_);
lean_ctor_set(v_reuseFailAlloc_1343_, 1, v_outputData_1328_);
lean_ctor_set(v_reuseFailAlloc_1343_, 2, v_state_1329_);
lean_ctor_set(v_reuseFailAlloc_1343_, 3, v_a_1315_);
lean_ctor_set(v_reuseFailAlloc_1343_, 4, v_messageHead_1330_);
lean_ctor_set(v_reuseFailAlloc_1343_, 5, v_userDataBytes_1334_);
lean_ctor_set_uint8(v_reuseFailAlloc_1343_, sizeof(void*)*6, v_sentMessage_1331_);
lean_ctor_set_uint8(v_reuseFailAlloc_1343_, sizeof(void*)*6 + 1, v_userClosedBody_1332_);
lean_ctor_set_uint8(v_reuseFailAlloc_1343_, sizeof(void*)*6 + 2, v_omitBody_1333_);
v___x_1339_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
lean_object* v___x_1341_; 
lean_inc(v_date_1321_);
lean_inc(v_error_1320_);
lean_inc_ref(v_events_1319_);
lean_inc_ref(v_config_1318_);
lean_inc_ref(v_reader_1317_);
if (v_isShared_1326_ == 0)
{
lean_ctor_set(v___x_1325_, 1, v___x_1339_);
v___x_1341_ = v___x_1325_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_reader_1317_);
lean_ctor_set(v_reuseFailAlloc_1342_, 1, v___x_1339_);
lean_ctor_set(v_reuseFailAlloc_1342_, 2, v_config_1318_);
lean_ctor_set(v_reuseFailAlloc_1342_, 3, v_events_1319_);
lean_ctor_set(v_reuseFailAlloc_1342_, 4, v_error_1320_);
lean_ctor_set(v_reuseFailAlloc_1342_, 5, v_date_1321_);
lean_ctor_set_uint8(v_reuseFailAlloc_1342_, sizeof(void*)*6, v_keepAlive_1322_);
lean_ctor_set_uint8(v_reuseFailAlloc_1342_, sizeof(void*)*6 + 1, v_pullBodyStalled_1323_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
v___y_1262_ = v___x_1341_;
v_reader_1263_ = v_reader_1317_;
v_userData_1264_ = v_userData_1327_;
v_outputData_1265_ = v_outputData_1328_;
v_state_1266_ = v_state_1329_;
v_knownSize_1267_ = v_a_1315_;
v_messageHead_1268_ = v_messageHead_1330_;
v_sentMessage_1269_ = v_sentMessage_1331_;
v_userClosedBody_1270_ = v_userClosedBody_1332_;
v_omitBody_1271_ = v_omitBody_1333_;
v_userDataBytes_1272_ = v_userDataBytes_1334_;
v_config_1273_ = v_config_1318_;
v_events_1274_ = v_events_1319_;
v_error_1275_ = v_error_1320_;
v_date_1276_ = v_date_1321_;
v_keepAlive_1277_ = v_keepAlive_1322_;
v_pullBodyStalled_1278_ = v_pullBodyStalled_1323_;
goto v___jp_1261_;
}
}
}
}
}
else
{
lean_object* v_writer_1347_; lean_object* v_reader_1348_; lean_object* v_config_1349_; lean_object* v_events_1350_; lean_object* v_error_1351_; lean_object* v_date_1352_; uint8_t v_keepAlive_1353_; uint8_t v_pullBodyStalled_1354_; lean_object* v_userData_1355_; lean_object* v_outputData_1356_; lean_object* v_state_1357_; lean_object* v_knownSize_1358_; lean_object* v_messageHead_1359_; uint8_t v_sentMessage_1360_; uint8_t v_userClosedBody_1361_; uint8_t v_omitBody_1362_; lean_object* v_userDataBytes_1363_; 
lean_dec(v_a_1315_);
v_writer_1347_ = lean_ctor_get(v_machine_945_, 1);
v_reader_1348_ = lean_ctor_get(v_machine_945_, 0);
lean_inc_ref(v_reader_1348_);
v_config_1349_ = lean_ctor_get(v_machine_945_, 2);
lean_inc_ref(v_config_1349_);
v_events_1350_ = lean_ctor_get(v_machine_945_, 3);
lean_inc_ref(v_events_1350_);
v_error_1351_ = lean_ctor_get(v_machine_945_, 4);
lean_inc(v_error_1351_);
v_date_1352_ = lean_ctor_get(v_machine_945_, 5);
lean_inc(v_date_1352_);
v_keepAlive_1353_ = lean_ctor_get_uint8(v_machine_945_, sizeof(void*)*6);
v_pullBodyStalled_1354_ = lean_ctor_get_uint8(v_machine_945_, sizeof(void*)*6 + 1);
v_userData_1355_ = lean_ctor_get(v_writer_1347_, 0);
lean_inc_ref(v_userData_1355_);
v_outputData_1356_ = lean_ctor_get(v_writer_1347_, 1);
lean_inc_ref(v_outputData_1356_);
v_state_1357_ = lean_ctor_get(v_writer_1347_, 2);
lean_inc(v_state_1357_);
v_knownSize_1358_ = lean_ctor_get(v_writer_1347_, 3);
lean_inc(v_knownSize_1358_);
v_messageHead_1359_ = lean_ctor_get(v_writer_1347_, 4);
lean_inc(v_messageHead_1359_);
v_sentMessage_1360_ = lean_ctor_get_uint8(v_writer_1347_, sizeof(void*)*6);
v_userClosedBody_1361_ = lean_ctor_get_uint8(v_writer_1347_, sizeof(void*)*6 + 1);
v_omitBody_1362_ = lean_ctor_get_uint8(v_writer_1347_, sizeof(void*)*6 + 2);
v_userDataBytes_1363_ = lean_ctor_get(v_writer_1347_, 5);
lean_inc(v_userDataBytes_1363_);
v___y_1262_ = v_machine_945_;
v_reader_1263_ = v_reader_1348_;
v_userData_1264_ = v_userData_1355_;
v_outputData_1265_ = v_outputData_1356_;
v_state_1266_ = v_state_1357_;
v_knownSize_1267_ = v_knownSize_1358_;
v_messageHead_1268_ = v_messageHead_1359_;
v_sentMessage_1269_ = v_sentMessage_1360_;
v_userClosedBody_1270_ = v_userClosedBody_1361_;
v_omitBody_1271_ = v_omitBody_1362_;
v_userDataBytes_1272_ = v_userDataBytes_1363_;
v_config_1273_ = v_config_1349_;
v_events_1274_ = v_events_1350_;
v_error_1275_ = v_error_1351_;
v_date_1276_ = v_date_1352_;
v_keepAlive_1277_ = v_keepAlive_1353_;
v_pullBodyStalled_1278_ = v_pullBodyStalled_1354_;
goto v___jp_1261_;
}
}
v___jp_948_:
{
if (v_omitBody_950_ == 0)
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; 
lean_dec_ref(v_isClosed_942_);
lean_dec_ref(v_close_941_);
v___x_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_951_, 0, v_body_940_);
v___x_952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_952_, 0, v___y_949_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
v___x_953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
v___x_954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_954_, 0, v___x_953_);
return v___x_954_;
}
else
{
lean_object* v___f_955_; lean_object* v___f_956_; lean_object* v___f_957_; lean_object* v___x_958_; uint8_t v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v___f_955_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_955_, 0, v___y_949_);
lean_inc_ref(v___f_955_);
v___f_956_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_956_, 0, v___f_955_);
lean_inc(v_body_940_);
v___f_957_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3___boxed), 6, 4);
lean_closure_set(v___f_957_, 0, v_close_941_);
lean_closure_set(v___f_957_, 1, v_body_940_);
lean_closure_set(v___f_957_, 2, v___f_956_);
lean_closure_set(v___f_957_, 3, v___f_955_);
v___x_958_ = lean_unsigned_to_nat(0u);
v___x_959_ = 0;
v___x_960_ = lean_apply_2(v_isClosed_942_, v_body_940_, lean_box(0));
v___x_961_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_958_, v___x_959_, v___x_960_, v___f_957_);
return v___x_961_;
}
}
v___jp_962_:
{
lean_object* v_writer_964_; uint8_t v_omitBody_965_; 
v_writer_964_ = lean_ctor_get(v___y_963_, 1);
v_omitBody_965_ = lean_ctor_get_uint8(v_writer_964_, sizeof(void*)*6 + 2);
v___y_949_ = v___y_963_;
v_omitBody_950_ = v_omitBody_965_;
goto v___jp_948_;
}
v___jp_966_:
{
lean_object* v___x_983_; lean_object* v_machine_984_; lean_object* v_machine_985_; lean_object* v_writer_986_; lean_object* v_reader_987_; lean_object* v_config_988_; lean_object* v_events_989_; lean_object* v_error_990_; lean_object* v_date_991_; uint8_t v_keepAlive_992_; uint8_t v_pullBodyStalled_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1017_; 
lean_inc_ref(v_line_943_);
v___x_983_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_983_, 0, v_userData_970_);
lean_ctor_set(v___x_983_, 1, v_outputData_971_);
lean_ctor_set(v___x_983_, 2, v_state_972_);
lean_ctor_set(v___x_983_, 3, v_knownSize_973_);
lean_ctor_set(v___x_983_, 4, v_line_943_);
lean_ctor_set(v___x_983_, 5, v_userDataBytes_976_);
lean_ctor_set_uint8(v___x_983_, sizeof(void*)*6, v___y_968_);
lean_ctor_set_uint8(v___x_983_, sizeof(void*)*6 + 1, v_userClosedBody_974_);
lean_ctor_set_uint8(v___x_983_, sizeof(void*)*6 + 2, v_omitBody_975_);
v_machine_984_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_machine_984_, 0, v_reader_969_);
lean_ctor_set(v_machine_984_, 1, v___x_983_);
lean_ctor_set(v_machine_984_, 2, v_config_977_);
lean_ctor_set(v_machine_984_, 3, v_events_978_);
lean_ctor_set(v_machine_984_, 4, v_error_979_);
lean_ctor_set(v_machine_984_, 5, v_date_980_);
lean_ctor_set_uint8(v_machine_984_, sizeof(void*)*6, v_keepAlive_981_);
lean_ctor_set_uint8(v_machine_984_, sizeof(void*)*6 + 1, v_pullBodyStalled_982_);
v_machine_985_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_maybeSuppressOutgoingBody(v___y_967_, v_machine_984_, v_line_943_);
lean_dec_ref(v_line_943_);
v_writer_986_ = lean_ctor_get(v_machine_985_, 1);
v_reader_987_ = lean_ctor_get(v_machine_985_, 0);
v_config_988_ = lean_ctor_get(v_machine_985_, 2);
v_events_989_ = lean_ctor_get(v_machine_985_, 3);
v_error_990_ = lean_ctor_get(v_machine_985_, 4);
v_date_991_ = lean_ctor_get(v_machine_985_, 5);
v_keepAlive_992_ = lean_ctor_get_uint8(v_machine_985_, sizeof(void*)*6);
v_pullBodyStalled_993_ = lean_ctor_get_uint8(v_machine_985_, sizeof(void*)*6 + 1);
v_isSharedCheck_1017_ = !lean_is_exclusive(v_machine_985_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_995_ = v_machine_985_;
v_isShared_996_ = v_isSharedCheck_1017_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_date_991_);
lean_inc(v_error_990_);
lean_inc(v_events_989_);
lean_inc(v_config_988_);
lean_inc(v_writer_986_);
lean_inc(v_reader_987_);
lean_dec(v_machine_985_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1017_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v_userData_997_; lean_object* v_outputData_998_; lean_object* v_knownSize_999_; lean_object* v_messageHead_1000_; uint8_t v_sentMessage_1001_; uint8_t v_userClosedBody_1002_; uint8_t v_omitBody_1003_; lean_object* v_userDataBytes_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1015_; 
v_userData_997_ = lean_ctor_get(v_writer_986_, 0);
v_outputData_998_ = lean_ctor_get(v_writer_986_, 1);
v_knownSize_999_ = lean_ctor_get(v_writer_986_, 3);
v_messageHead_1000_ = lean_ctor_get(v_writer_986_, 4);
v_sentMessage_1001_ = lean_ctor_get_uint8(v_writer_986_, sizeof(void*)*6);
v_userClosedBody_1002_ = lean_ctor_get_uint8(v_writer_986_, sizeof(void*)*6 + 1);
v_omitBody_1003_ = lean_ctor_get_uint8(v_writer_986_, sizeof(void*)*6 + 2);
v_userDataBytes_1004_ = lean_ctor_get(v_writer_986_, 5);
v_isSharedCheck_1015_ = !lean_is_exclusive(v_writer_986_);
if (v_isSharedCheck_1015_ == 0)
{
lean_object* v_unused_1016_; 
v_unused_1016_ = lean_ctor_get(v_writer_986_, 2);
lean_dec(v_unused_1016_);
v___x_1006_ = v_writer_986_;
v_isShared_1007_ = v_isSharedCheck_1015_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_userDataBytes_1004_);
lean_inc(v_messageHead_1000_);
lean_inc(v_knownSize_999_);
lean_inc(v_outputData_998_);
lean_inc(v_userData_997_);
lean_dec(v_writer_986_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1015_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1008_; lean_object* v___x_1010_; 
v___x_1008_ = lean_box(2);
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 2, v___x_1008_);
v___x_1010_ = v___x_1006_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_userData_997_);
lean_ctor_set(v_reuseFailAlloc_1014_, 1, v_outputData_998_);
lean_ctor_set(v_reuseFailAlloc_1014_, 2, v___x_1008_);
lean_ctor_set(v_reuseFailAlloc_1014_, 3, v_knownSize_999_);
lean_ctor_set(v_reuseFailAlloc_1014_, 4, v_messageHead_1000_);
lean_ctor_set(v_reuseFailAlloc_1014_, 5, v_userDataBytes_1004_);
lean_ctor_set_uint8(v_reuseFailAlloc_1014_, sizeof(void*)*6, v_sentMessage_1001_);
lean_ctor_set_uint8(v_reuseFailAlloc_1014_, sizeof(void*)*6 + 1, v_userClosedBody_1002_);
lean_ctor_set_uint8(v_reuseFailAlloc_1014_, sizeof(void*)*6 + 2, v_omitBody_1003_);
v___x_1010_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
lean_object* v___x_1012_; 
if (v_isShared_996_ == 0)
{
lean_ctor_set(v___x_995_, 1, v___x_1010_);
v___x_1012_ = v___x_995_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_reader_987_);
lean_ctor_set(v_reuseFailAlloc_1013_, 1, v___x_1010_);
lean_ctor_set(v_reuseFailAlloc_1013_, 2, v_config_988_);
lean_ctor_set(v_reuseFailAlloc_1013_, 3, v_events_989_);
lean_ctor_set(v_reuseFailAlloc_1013_, 4, v_error_990_);
lean_ctor_set(v_reuseFailAlloc_1013_, 5, v_date_991_);
lean_ctor_set_uint8(v_reuseFailAlloc_1013_, sizeof(void*)*6, v_keepAlive_992_);
lean_ctor_set_uint8(v_reuseFailAlloc_1013_, sizeof(void*)*6 + 1, v_pullBodyStalled_993_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
v___y_949_ = v___x_1012_;
v_omitBody_950_ = v_omitBody_1003_;
goto v___jp_948_;
}
}
}
}
}
v___jp_1018_:
{
lean_object* v_writer_1022_; lean_object* v_reader_1023_; lean_object* v_config_1024_; lean_object* v_events_1025_; lean_object* v_error_1026_; lean_object* v_date_1027_; uint8_t v_keepAlive_1028_; uint8_t v_pullBodyStalled_1029_; lean_object* v_userData_1030_; lean_object* v_outputData_1031_; lean_object* v_state_1032_; lean_object* v_knownSize_1033_; uint8_t v_userClosedBody_1034_; uint8_t v_omitBody_1035_; lean_object* v_userDataBytes_1036_; 
v_writer_1022_ = lean_ctor_get(v_val_1021_, 1);
lean_inc_ref(v_writer_1022_);
v_reader_1023_ = lean_ctor_get(v_val_1021_, 0);
lean_inc_ref(v_reader_1023_);
v_config_1024_ = lean_ctor_get(v_val_1021_, 2);
lean_inc_ref(v_config_1024_);
v_events_1025_ = lean_ctor_get(v_val_1021_, 3);
lean_inc_ref(v_events_1025_);
v_error_1026_ = lean_ctor_get(v_val_1021_, 4);
lean_inc(v_error_1026_);
v_date_1027_ = lean_ctor_get(v_val_1021_, 5);
lean_inc(v_date_1027_);
v_keepAlive_1028_ = lean_ctor_get_uint8(v_val_1021_, sizeof(void*)*6);
v_pullBodyStalled_1029_ = lean_ctor_get_uint8(v_val_1021_, sizeof(void*)*6 + 1);
lean_dec_ref(v_val_1021_);
v_userData_1030_ = lean_ctor_get(v_writer_1022_, 0);
lean_inc_ref(v_userData_1030_);
v_outputData_1031_ = lean_ctor_get(v_writer_1022_, 1);
lean_inc_ref(v_outputData_1031_);
v_state_1032_ = lean_ctor_get(v_writer_1022_, 2);
lean_inc(v_state_1032_);
v_knownSize_1033_ = lean_ctor_get(v_writer_1022_, 3);
lean_inc(v_knownSize_1033_);
v_userClosedBody_1034_ = lean_ctor_get_uint8(v_writer_1022_, sizeof(void*)*6 + 1);
v_omitBody_1035_ = lean_ctor_get_uint8(v_writer_1022_, sizeof(void*)*6 + 2);
v_userDataBytes_1036_ = lean_ctor_get(v_writer_1022_, 5);
lean_inc(v_userDataBytes_1036_);
lean_dec_ref(v_writer_1022_);
v___y_967_ = v___y_1019_;
v___y_968_ = v___y_1020_;
v_reader_969_ = v_reader_1023_;
v_userData_970_ = v_userData_1030_;
v_outputData_971_ = v_outputData_1031_;
v_state_972_ = v_state_1032_;
v_knownSize_973_ = v_knownSize_1033_;
v_userClosedBody_974_ = v_userClosedBody_1034_;
v_omitBody_975_ = v_omitBody_1035_;
v_userDataBytes_976_ = v_userDataBytes_1036_;
v_config_977_ = v_config_1024_;
v_events_978_ = v_events_1025_;
v_error_979_ = v_error_1026_;
v_date_980_ = v_date_1027_;
v_keepAlive_981_ = v_keepAlive_1028_;
v_pullBodyStalled_982_ = v_pullBodyStalled_1029_;
goto v___jp_966_;
}
v___jp_1037_:
{
lean_dec(v___y_1050_);
if (lean_obj_tag(v___y_1044_) == 0)
{
lean_dec_ref(v___y_1055_);
lean_dec(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec(v___y_1045_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1040_);
lean_dec_ref(v___y_1038_);
v___y_1019_ = v___y_1047_;
v___y_1020_ = v___y_1041_;
v_val_1021_ = v___y_1046_;
goto v___jp_1018_;
}
else
{
lean_dec_ref(v___y_1046_);
v___y_967_ = v___y_1047_;
v___y_968_ = v___y_1041_;
v_reader_969_ = v___y_1040_;
v_userData_970_ = v___y_1055_;
v_outputData_971_ = v___y_1049_;
v_state_972_ = v___y_1052_;
v_knownSize_973_ = v___y_1044_;
v_userClosedBody_974_ = v___y_1053_;
v_omitBody_975_ = v___y_1042_;
v_userDataBytes_976_ = v___y_1043_;
v_config_977_ = v___y_1048_;
v_events_978_ = v___y_1038_;
v_error_979_ = v___y_1051_;
v_date_980_ = v___y_1045_;
v_keepAlive_981_ = v___y_1056_;
v_pullBodyStalled_982_ = v___y_1054_;
goto v___jp_966_;
}
}
v___jp_1057_:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1074_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_1074_, 0, v___y_1071_);
lean_ctor_set(v___x_1074_, 1, v___y_1073_);
lean_ctor_set(v___x_1074_, 2, v___y_1068_);
lean_ctor_set(v___x_1074_, 3, v___y_1062_);
lean_ctor_set(v___x_1074_, 4, v___y_1066_);
lean_ctor_set(v___x_1074_, 5, v___y_1063_);
lean_ctor_set_uint8(v___x_1074_, sizeof(void*)*6, v___y_1058_);
lean_ctor_set_uint8(v___x_1074_, sizeof(void*)*6 + 1, v___y_1069_);
lean_ctor_set_uint8(v___x_1074_, sizeof(void*)*6 + 2, v___y_1061_);
v___x_1075_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v___x_1075_, 0, v___y_1060_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
lean_ctor_set(v___x_1075_, 2, v___y_1065_);
lean_ctor_set(v___x_1075_, 3, v___y_1059_);
lean_ctor_set(v___x_1075_, 4, v___y_1067_);
lean_ctor_set(v___x_1075_, 5, v___y_1064_);
lean_ctor_set_uint8(v___x_1075_, sizeof(void*)*6, v___y_1072_);
lean_ctor_set_uint8(v___x_1075_, sizeof(void*)*6 + 1, v___y_1070_);
v___y_949_ = v___x_1075_;
v_omitBody_950_ = v___y_1061_;
goto v___jp_948_;
}
v___jp_1076_:
{
lean_object* v_message_1095_; lean_object* v___x_1096_; lean_object* v___x_2544__overap_1097_; lean_object* v___x_1098_; uint8_t v___x_1099_; 
v_message_1095_ = l_Std_Http_Protocol_H1_Message_Head_setHeaders(v___y_1080_, v_line_943_, v___y_1094_);
v___x_1096_ = l_ByteArray_empty;
v___x_2544__overap_1097_ = l_Std_Http_Protocol_H1_instEncodeV11Head(v___y_1080_);
v___x_1098_ = lean_apply_2(v___x_2544__overap_1097_, v___x_1096_, v_message_1095_);
v___x_1099_ = l_ByteArray_isEmpty(v___x_1098_);
if (v___x_1099_ == 0)
{
lean_object* v_data_1100_; lean_object* v_size_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1111_; 
v_data_1100_ = lean_ctor_get(v___y_1086_, 0);
v_size_1101_ = lean_ctor_get(v___y_1086_, 1);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___y_1086_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1103_ = v___y_1086_;
v_isShared_1104_ = v_isSharedCheck_1111_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_size_1101_);
lean_inc(v_data_1100_);
lean_dec(v___y_1086_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1111_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1109_; 
lean_inc_ref(v___x_1098_);
v___x_1105_ = lean_array_push(v_data_1100_, v___x_1098_);
v___x_1106_ = lean_byte_array_size(v___x_1098_);
lean_dec_ref(v___x_1098_);
v___x_1107_ = lean_nat_add(v_size_1101_, v___x_1106_);
lean_dec(v_size_1101_);
if (v_isShared_1104_ == 0)
{
lean_ctor_set(v___x_1103_, 1, v___x_1107_);
lean_ctor_set(v___x_1103_, 0, v___x_1105_);
v___x_1109_ = v___x_1103_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1105_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v___x_1107_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
v___y_1058_ = v___y_1077_;
v___y_1059_ = v___y_1078_;
v___y_1060_ = v___y_1079_;
v___y_1061_ = v___y_1081_;
v___y_1062_ = v___y_1082_;
v___y_1063_ = v___y_1083_;
v___y_1064_ = v___y_1084_;
v___y_1065_ = v___y_1085_;
v___y_1066_ = v___y_1087_;
v___y_1067_ = v___y_1088_;
v___y_1068_ = v___y_1089_;
v___y_1069_ = v___y_1090_;
v___y_1070_ = v___y_1091_;
v___y_1071_ = v___y_1092_;
v___y_1072_ = v___y_1093_;
v___y_1073_ = v___x_1109_;
goto v___jp_1057_;
}
}
}
else
{
lean_dec_ref(v___x_1098_);
v___y_1058_ = v___y_1077_;
v___y_1059_ = v___y_1078_;
v___y_1060_ = v___y_1079_;
v___y_1061_ = v___y_1081_;
v___y_1062_ = v___y_1082_;
v___y_1063_ = v___y_1083_;
v___y_1064_ = v___y_1084_;
v___y_1065_ = v___y_1085_;
v___y_1066_ = v___y_1087_;
v___y_1067_ = v___y_1088_;
v___y_1068_ = v___y_1089_;
v___y_1069_ = v___y_1090_;
v___y_1070_ = v___y_1091_;
v___y_1071_ = v___y_1092_;
v___y_1072_ = v___y_1093_;
v___y_1073_ = v___y_1086_;
goto v___jp_1057_;
}
}
v___jp_1112_:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; uint8_t v___x_1134_; 
v___x_1131_ = lean_unsigned_to_nat(0u);
v___x_1132_ = lean_array_get_size(v___y_1130_);
v___x_1133_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9));
v___x_1134_ = lean_nat_dec_lt(v___x_1131_, v___x_1132_);
if (v___x_1134_ == 0)
{
v___y_1077_ = v___y_1113_;
v___y_1078_ = v___y_1114_;
v___y_1079_ = v___y_1115_;
v___y_1080_ = v___y_1116_;
v___y_1081_ = v___y_1117_;
v___y_1082_ = v___y_1118_;
v___y_1083_ = v___y_1119_;
v___y_1084_ = v___y_1120_;
v___y_1085_ = v___y_1121_;
v___y_1086_ = v___y_1122_;
v___y_1087_ = v___y_1123_;
v___y_1088_ = v___y_1124_;
v___y_1089_ = v___y_1126_;
v___y_1090_ = v___y_1125_;
v___y_1091_ = v___y_1127_;
v___y_1092_ = v___y_1128_;
v___y_1093_ = v___y_1129_;
v___y_1094_ = v___y_1130_;
goto v___jp_1076_;
}
else
{
lean_object* v___f_1135_; size_t v___x_1136_; size_t v___x_1137_; lean_object* v___x_1138_; uint8_t v___x_1139_; 
v___f_1135_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__10, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__10_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__10);
v___x_1136_ = ((size_t)0ULL);
v___x_1137_ = lean_usize_of_nat(v___x_1132_);
lean_inc_ref(v___y_1130_);
v___x_1138_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_1133_, v___f_1135_, v___y_1130_, v___x_1136_, v___x_1137_);
v___x_1139_ = lean_unbox(v___x_1138_);
lean_dec(v___x_1138_);
if (v___x_1139_ == 0)
{
v___y_1077_ = v___y_1113_;
v___y_1078_ = v___y_1114_;
v___y_1079_ = v___y_1115_;
v___y_1080_ = v___y_1116_;
v___y_1081_ = v___y_1117_;
v___y_1082_ = v___y_1118_;
v___y_1083_ = v___y_1119_;
v___y_1084_ = v___y_1120_;
v___y_1085_ = v___y_1121_;
v___y_1086_ = v___y_1122_;
v___y_1087_ = v___y_1123_;
v___y_1088_ = v___y_1124_;
v___y_1089_ = v___y_1126_;
v___y_1090_ = v___y_1125_;
v___y_1091_ = v___y_1127_;
v___y_1092_ = v___y_1128_;
v___y_1093_ = v___y_1129_;
v___y_1094_ = v___y_1130_;
goto v___jp_1076_;
}
else
{
lean_object* v___f_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___f_1140_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__11);
v___x_1141_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__12));
v___x_1142_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1133_, v___f_1140_, v___y_1130_, v___x_1136_, v___x_1137_, v___x_1141_);
v___y_1077_ = v___y_1113_;
v___y_1078_ = v___y_1114_;
v___y_1079_ = v___y_1115_;
v___y_1080_ = v___y_1116_;
v___y_1081_ = v___y_1117_;
v___y_1082_ = v___y_1118_;
v___y_1083_ = v___y_1119_;
v___y_1084_ = v___y_1120_;
v___y_1085_ = v___y_1121_;
v___y_1086_ = v___y_1122_;
v___y_1087_ = v___y_1123_;
v___y_1088_ = v___y_1124_;
v___y_1089_ = v___y_1126_;
v___y_1090_ = v___y_1125_;
v___y_1091_ = v___y_1127_;
v___y_1092_ = v___y_1128_;
v___y_1093_ = v___y_1129_;
v___y_1094_ = v___x_1142_;
goto v___jp_1076_;
}
}
}
v___jp_1143_:
{
lean_object* v___x_1166_; uint8_t v___x_1167_; 
v___x_1166_ = lean_unsigned_to_nat(204u);
v___x_1167_ = lean_nat_dec_eq(v___y_1151_, v___x_1166_);
if (v___x_1167_ == 0)
{
lean_object* v___x_1168_; uint8_t v___x_1169_; 
v___x_1168_ = lean_unsigned_to_nat(304u);
v___x_1169_ = lean_nat_dec_eq(v___y_1151_, v___x_1168_);
lean_dec(v___y_1151_);
if (v___x_1169_ == 0)
{
lean_object* v___x_1170_; uint8_t v___x_1171_; 
v___x_1170_ = lean_box(9);
v___x_1171_ = l_Std_Http_instBEqStatus_beq(v___y_1144_, v___x_1170_);
lean_dec(v___y_1144_);
if (v___x_1171_ == 0)
{
lean_object* v_messageHead_1172_; uint8_t v_method_1173_; uint8_t v___x_1174_; uint8_t v___x_1175_; 
v_messageHead_1172_ = lean_ctor_get(v___y_1147_, 2);
v_method_1173_ = lean_ctor_get_uint8(v_messageHead_1172_, sizeof(void*)*2);
v___x_1174_ = 9;
v___x_1175_ = l_Std_Http_instBEqMethod_beq(v_method_1173_, v___x_1174_);
if (v___x_1175_ == 0)
{
lean_object* v___x_1176_; 
lean_dec_ref(v___y_1164_);
lean_dec(v___y_1161_);
lean_dec(v___y_1159_);
lean_dec_ref(v___y_1158_);
lean_dec(v___y_1157_);
lean_dec_ref(v___y_1156_);
lean_dec(v___y_1154_);
lean_dec(v___y_1150_);
lean_dec_ref(v___y_1147_);
lean_dec_ref(v___y_1145_);
lean_inc_ref(v___y_1153_);
v___x_1176_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_reconcileOutgoingFraming(v___y_1155_, v___y_1153_, v___y_1152_, v___y_1163_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v___x_1177_; 
lean_dec_ref(v_line_943_);
v___x_1177_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_rejectOutgoingFraming(v___y_1155_, v___y_1153_);
v___y_963_ = v___x_1177_;
goto v___jp_962_;
}
else
{
lean_object* v_val_1178_; 
lean_dec_ref(v___y_1153_);
v_val_1178_ = lean_ctor_get(v___x_1176_, 0);
lean_inc(v_val_1178_);
lean_dec_ref_known(v___x_1176_, 1);
v___y_1019_ = v___y_1155_;
v___y_1020_ = v___y_1148_;
v_val_1021_ = v_val_1178_;
goto v___jp_1018_;
}
}
else
{
v___y_1038_ = v___y_1145_;
v___y_1039_ = v___y_1146_;
v___y_1040_ = v___y_1147_;
v___y_1041_ = v___y_1148_;
v___y_1042_ = v___y_1149_;
v___y_1043_ = v___y_1150_;
v___y_1044_ = v___y_1152_;
v___y_1045_ = v___y_1154_;
v___y_1046_ = v___y_1153_;
v___y_1047_ = v___y_1155_;
v___y_1048_ = v___y_1156_;
v___y_1049_ = v___y_1158_;
v___y_1050_ = v___y_1157_;
v___y_1051_ = v___y_1159_;
v___y_1052_ = v___y_1161_;
v___y_1053_ = v___y_1160_;
v___y_1054_ = v___y_1162_;
v___y_1055_ = v___y_1164_;
v___y_1056_ = v___y_1165_;
goto v___jp_1037_;
}
}
else
{
v___y_1038_ = v___y_1145_;
v___y_1039_ = v___y_1146_;
v___y_1040_ = v___y_1147_;
v___y_1041_ = v___y_1148_;
v___y_1042_ = v___y_1149_;
v___y_1043_ = v___y_1150_;
v___y_1044_ = v___y_1152_;
v___y_1045_ = v___y_1154_;
v___y_1046_ = v___y_1153_;
v___y_1047_ = v___y_1155_;
v___y_1048_ = v___y_1156_;
v___y_1049_ = v___y_1158_;
v___y_1050_ = v___y_1157_;
v___y_1051_ = v___y_1159_;
v___y_1052_ = v___y_1161_;
v___y_1053_ = v___y_1160_;
v___y_1054_ = v___y_1162_;
v___y_1055_ = v___y_1164_;
v___y_1056_ = v___y_1165_;
goto v___jp_1037_;
}
}
else
{
lean_dec(v___y_1144_);
v___y_1038_ = v___y_1145_;
v___y_1039_ = v___y_1146_;
v___y_1040_ = v___y_1147_;
v___y_1041_ = v___y_1148_;
v___y_1042_ = v___y_1149_;
v___y_1043_ = v___y_1150_;
v___y_1044_ = v___y_1152_;
v___y_1045_ = v___y_1154_;
v___y_1046_ = v___y_1153_;
v___y_1047_ = v___y_1155_;
v___y_1048_ = v___y_1156_;
v___y_1049_ = v___y_1158_;
v___y_1050_ = v___y_1157_;
v___y_1051_ = v___y_1159_;
v___y_1052_ = v___y_1161_;
v___y_1053_ = v___y_1160_;
v___y_1054_ = v___y_1162_;
v___y_1055_ = v___y_1164_;
v___y_1056_ = v___y_1165_;
goto v___jp_1037_;
}
}
else
{
lean_dec(v___y_1151_);
lean_dec(v___y_1144_);
v___y_1038_ = v___y_1145_;
v___y_1039_ = v___y_1146_;
v___y_1040_ = v___y_1147_;
v___y_1041_ = v___y_1148_;
v___y_1042_ = v___y_1149_;
v___y_1043_ = v___y_1150_;
v___y_1044_ = v___y_1152_;
v___y_1045_ = v___y_1154_;
v___y_1046_ = v___y_1153_;
v___y_1047_ = v___y_1155_;
v___y_1048_ = v___y_1156_;
v___y_1049_ = v___y_1158_;
v___y_1050_ = v___y_1157_;
v___y_1051_ = v___y_1159_;
v___y_1052_ = v___y_1161_;
v___y_1053_ = v___y_1160_;
v___y_1054_ = v___y_1162_;
v___y_1055_ = v___y_1164_;
v___y_1056_ = v___y_1165_;
goto v___jp_1037_;
}
}
v___jp_1179_:
{
lean_object* v_status_1200_; uint16_t v___x_1201_; lean_object* v_code_1202_; lean_object* v___x_1203_; uint8_t v___x_1204_; 
v_status_1200_ = lean_ctor_get(v_line_943_, 0);
v___x_1201_ = l_Std_Http_Status_toCode(v_status_1200_);
v_code_1202_ = lean_uint16_to_nat(v___x_1201_);
v___x_1203_ = lean_unsigned_to_nat(100u);
v___x_1204_ = lean_nat_dec_le(v___x_1203_, v_code_1202_);
if (v___x_1204_ == 0)
{
lean_inc(v_status_1200_);
v___y_1144_ = v_status_1200_;
v___y_1145_ = v___y_1180_;
v___y_1146_ = v___y_1181_;
v___y_1147_ = v___y_1182_;
v___y_1148_ = v___y_1183_;
v___y_1149_ = v___y_1184_;
v___y_1150_ = v___y_1185_;
v___y_1151_ = v_code_1202_;
v___y_1152_ = v___y_1199_;
v___y_1153_ = v___y_1187_;
v___y_1154_ = v___y_1186_;
v___y_1155_ = v___y_1188_;
v___y_1156_ = v___y_1189_;
v___y_1157_ = v___y_1191_;
v___y_1158_ = v___y_1190_;
v___y_1159_ = v___y_1192_;
v___y_1160_ = v___y_1193_;
v___y_1161_ = v___y_1194_;
v___y_1162_ = v___y_1195_;
v___y_1163_ = v___y_1196_;
v___y_1164_ = v___y_1197_;
v___y_1165_ = v___y_1198_;
goto v___jp_1143_;
}
else
{
lean_object* v___x_1205_; uint8_t v___x_1206_; 
v___x_1205_ = lean_unsigned_to_nat(200u);
v___x_1206_ = lean_nat_dec_lt(v_code_1202_, v___x_1205_);
if (v___x_1206_ == 0)
{
lean_inc(v_status_1200_);
v___y_1144_ = v_status_1200_;
v___y_1145_ = v___y_1180_;
v___y_1146_ = v___y_1181_;
v___y_1147_ = v___y_1182_;
v___y_1148_ = v___y_1183_;
v___y_1149_ = v___y_1184_;
v___y_1150_ = v___y_1185_;
v___y_1151_ = v_code_1202_;
v___y_1152_ = v___y_1199_;
v___y_1153_ = v___y_1187_;
v___y_1154_ = v___y_1186_;
v___y_1155_ = v___y_1188_;
v___y_1156_ = v___y_1189_;
v___y_1157_ = v___y_1191_;
v___y_1158_ = v___y_1190_;
v___y_1159_ = v___y_1192_;
v___y_1160_ = v___y_1193_;
v___y_1161_ = v___y_1194_;
v___y_1162_ = v___y_1195_;
v___y_1163_ = v___y_1196_;
v___y_1164_ = v___y_1197_;
v___y_1165_ = v___y_1198_;
goto v___jp_1143_;
}
else
{
v___y_1038_ = v___y_1180_;
v___y_1039_ = v___y_1181_;
v___y_1040_ = v___y_1182_;
v___y_1041_ = v___y_1183_;
v___y_1042_ = v___y_1184_;
v___y_1043_ = v___y_1185_;
v___y_1044_ = v___y_1199_;
v___y_1045_ = v___y_1186_;
v___y_1046_ = v___y_1187_;
v___y_1047_ = v___y_1188_;
v___y_1048_ = v___y_1189_;
v___y_1049_ = v___y_1190_;
v___y_1050_ = v___y_1191_;
v___y_1051_ = v___y_1192_;
v___y_1052_ = v___y_1194_;
v___y_1053_ = v___y_1193_;
v___y_1054_ = v___y_1195_;
v___y_1055_ = v___y_1197_;
v___y_1056_ = v___y_1198_;
goto v___jp_1037_;
}
}
}
v___jp_1207_:
{
lean_object* v___x_1227_; 
v___x_1227_ = lean_box(0);
v___y_1180_ = v___y_1208_;
v___y_1181_ = v___y_1209_;
v___y_1182_ = v___y_1210_;
v___y_1183_ = v___y_1211_;
v___y_1184_ = v___y_1212_;
v___y_1185_ = v___y_1213_;
v___y_1186_ = v___y_1214_;
v___y_1187_ = v___y_1215_;
v___y_1188_ = v___y_1216_;
v___y_1189_ = v___y_1217_;
v___y_1190_ = v___y_1218_;
v___y_1191_ = v___y_1219_;
v___y_1192_ = v___y_1220_;
v___y_1193_ = v___y_1222_;
v___y_1194_ = v___y_1221_;
v___y_1195_ = v___y_1223_;
v___y_1196_ = v___y_1226_;
v___y_1197_ = v___y_1224_;
v___y_1198_ = v___y_1225_;
v___y_1199_ = v___x_1227_;
goto v___jp_1179_;
}
v___jp_1228_:
{
uint8_t v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; uint8_t v___x_1253_; 
v___x_1248_ = 1;
v___x_1249_ = l_Std_Http_Protocol_H1_Message_Head_headers(v___x_1248_, v_line_943_);
v___x_1250_ = lean_unsigned_to_nat(0u);
v___x_1251_ = lean_array_get_size(v___x_1249_);
v___x_1252_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9));
v___x_1253_ = lean_nat_dec_lt(v___x_1250_, v___x_1251_);
if (v___x_1253_ == 0)
{
lean_dec_ref(v___x_1249_);
lean_dec_ref(v___f_944_);
v___y_1208_ = v___y_1229_;
v___y_1209_ = v___y_1230_;
v___y_1210_ = v___y_1231_;
v___y_1211_ = v___y_1233_;
v___y_1212_ = v___y_1234_;
v___y_1213_ = v___y_1235_;
v___y_1214_ = v___y_1236_;
v___y_1215_ = v___y_1237_;
v___y_1216_ = v___y_1238_;
v___y_1217_ = v___y_1239_;
v___y_1218_ = v___y_1240_;
v___y_1219_ = v___y_1241_;
v___y_1220_ = v___y_1242_;
v___y_1221_ = v___y_1244_;
v___y_1222_ = v___y_1243_;
v___y_1223_ = v___y_1245_;
v___y_1224_ = v___y_1246_;
v___y_1225_ = v___y_1247_;
v___y_1226_ = v___x_1253_;
goto v___jp_1207_;
}
else
{
size_t v___x_1254_; size_t v___x_1255_; lean_object* v___x_1256_; uint8_t v___x_1257_; 
v___x_1254_ = ((size_t)0ULL);
v___x_1255_ = lean_usize_of_nat(v___x_1251_);
v___x_1256_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_1252_, v___f_944_, v___x_1249_, v___x_1254_, v___x_1255_);
v___x_1257_ = lean_unbox(v___x_1256_);
if (v___x_1257_ == 0)
{
uint8_t v___x_1258_; 
v___x_1258_ = lean_unbox(v___x_1256_);
lean_dec(v___x_1256_);
v___y_1208_ = v___y_1229_;
v___y_1209_ = v___y_1230_;
v___y_1210_ = v___y_1231_;
v___y_1211_ = v___y_1233_;
v___y_1212_ = v___y_1234_;
v___y_1213_ = v___y_1235_;
v___y_1214_ = v___y_1236_;
v___y_1215_ = v___y_1237_;
v___y_1216_ = v___y_1238_;
v___y_1217_ = v___y_1239_;
v___y_1218_ = v___y_1240_;
v___y_1219_ = v___y_1241_;
v___y_1220_ = v___y_1242_;
v___y_1221_ = v___y_1244_;
v___y_1222_ = v___y_1243_;
v___y_1223_ = v___y_1245_;
v___y_1224_ = v___y_1246_;
v___y_1225_ = v___y_1247_;
v___y_1226_ = v___x_1258_;
goto v___jp_1207_;
}
else
{
lean_object* v___x_1259_; uint8_t v___x_1260_; 
v___x_1259_ = l_Std_Http_Protocol_H1_Message_Head_getSize(v___x_1248_, v_line_943_, v___y_1232_);
v___x_1260_ = lean_unbox(v___x_1256_);
lean_dec(v___x_1256_);
v___y_1180_ = v___y_1229_;
v___y_1181_ = v___y_1230_;
v___y_1182_ = v___y_1231_;
v___y_1183_ = v___y_1233_;
v___y_1184_ = v___y_1234_;
v___y_1185_ = v___y_1235_;
v___y_1186_ = v___y_1236_;
v___y_1187_ = v___y_1237_;
v___y_1188_ = v___y_1238_;
v___y_1189_ = v___y_1239_;
v___y_1190_ = v___y_1240_;
v___y_1191_ = v___y_1241_;
v___y_1192_ = v___y_1242_;
v___y_1193_ = v___y_1243_;
v___y_1194_ = v___y_1244_;
v___y_1195_ = v___y_1245_;
v___y_1196_ = v___x_1260_;
v___y_1197_ = v___y_1246_;
v___y_1198_ = v___y_1247_;
v___y_1199_ = v___x_1259_;
goto v___jp_1179_;
}
}
}
v___jp_1261_:
{
lean_object* v___x_1279_; uint8_t v___x_1280_; 
v___x_1279_ = lean_box(1);
v___x_1280_ = l_Std_Http_Protocol_H1_Writer_instBEqState_beq(v_state_1266_, v___x_1279_);
if (v___x_1280_ == 0)
{
lean_dec(v_date_1276_);
lean_dec(v_error_1275_);
lean_dec_ref(v_events_1274_);
lean_dec_ref(v_config_1273_);
lean_dec(v_userDataBytes_1272_);
lean_dec(v_messageHead_1268_);
lean_dec(v_knownSize_1267_);
lean_dec(v_state_1266_);
lean_dec_ref(v_outputData_1265_);
lean_dec_ref(v_userData_1264_);
lean_dec_ref(v_reader_1263_);
lean_dec_ref(v___f_944_);
lean_dec_ref(v_line_943_);
v___y_949_ = v___y_1262_;
v_omitBody_950_ = v_omitBody_1271_;
goto v___jp_948_;
}
else
{
if (v_sentMessage_1269_ == 0)
{
lean_object* v_status_1281_; uint8_t v___x_1282_; uint16_t v___x_1283_; uint16_t v___x_1284_; uint8_t v___x_1285_; 
v_status_1281_ = lean_ctor_get(v_line_943_, 0);
v___x_1282_ = 0;
v___x_1283_ = 100;
v___x_1284_ = l_Std_Http_Status_toCode(v_status_1281_);
v___x_1285_ = lean_uint16_dec_le(v___x_1283_, v___x_1284_);
if (v___x_1285_ == 0)
{
lean_dec(v_knownSize_1267_);
v___y_1229_ = v_events_1274_;
v___y_1230_ = v_sentMessage_1269_;
v___y_1231_ = v_reader_1263_;
v___y_1232_ = v___x_1285_;
v___y_1233_ = v___x_1280_;
v___y_1234_ = v_omitBody_1271_;
v___y_1235_ = v_userDataBytes_1272_;
v___y_1236_ = v_date_1276_;
v___y_1237_ = v___y_1262_;
v___y_1238_ = v___x_1282_;
v___y_1239_ = v_config_1273_;
v___y_1240_ = v_outputData_1265_;
v___y_1241_ = v_messageHead_1268_;
v___y_1242_ = v_error_1275_;
v___y_1243_ = v_userClosedBody_1270_;
v___y_1244_ = v_state_1266_;
v___y_1245_ = v_pullBodyStalled_1278_;
v___y_1246_ = v_userData_1264_;
v___y_1247_ = v_keepAlive_1277_;
goto v___jp_1228_;
}
else
{
uint16_t v___x_1286_; uint8_t v___x_1287_; 
v___x_1286_ = 200;
v___x_1287_ = lean_uint16_dec_lt(v___x_1284_, v___x_1286_);
if (v___x_1287_ == 0)
{
lean_dec(v_knownSize_1267_);
v___y_1229_ = v_events_1274_;
v___y_1230_ = v_sentMessage_1269_;
v___y_1231_ = v_reader_1263_;
v___y_1232_ = v___x_1287_;
v___y_1233_ = v___x_1280_;
v___y_1234_ = v_omitBody_1271_;
v___y_1235_ = v_userDataBytes_1272_;
v___y_1236_ = v_date_1276_;
v___y_1237_ = v___y_1262_;
v___y_1238_ = v___x_1282_;
v___y_1239_ = v_config_1273_;
v___y_1240_ = v_outputData_1265_;
v___y_1241_ = v_messageHead_1268_;
v___y_1242_ = v_error_1275_;
v___y_1243_ = v_userClosedBody_1270_;
v___y_1244_ = v_state_1266_;
v___y_1245_ = v_pullBodyStalled_1278_;
v___y_1246_ = v_userData_1264_;
v___y_1247_ = v_keepAlive_1277_;
goto v___jp_1228_;
}
else
{
lean_object* v_messageHead_1288_; uint8_t v___x_1289_; uint8_t v___x_1290_; uint8_t v___x_1291_; 
lean_dec_ref(v___f_944_);
v_messageHead_1288_ = lean_ctor_get(v_reader_1263_, 2);
v___x_1289_ = l_Std_Http_Protocol_H1_Message_Head_version(v___x_1282_, v_messageHead_1288_);
v___x_1290_ = 1;
v___x_1291_ = l_Std_Http_instBEqVersion_beq(v___x_1289_, v___x_1290_);
if (v___x_1291_ == 0)
{
lean_dec(v_date_1276_);
lean_dec(v_error_1275_);
lean_dec_ref(v_events_1274_);
lean_dec_ref(v_config_1273_);
lean_dec(v_userDataBytes_1272_);
lean_dec(v_messageHead_1268_);
lean_dec(v_knownSize_1267_);
lean_dec(v_state_1266_);
lean_dec_ref(v_outputData_1265_);
lean_dec_ref(v_userData_1264_);
lean_dec_ref(v_reader_1263_);
lean_dec_ref(v_line_943_);
v___y_963_ = v___y_1262_;
goto v___jp_962_;
}
else
{
uint8_t v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; uint8_t v___x_1297_; 
lean_dec_ref(v___y_1262_);
v___x_1292_ = 1;
v___x_1293_ = l_Std_Http_Protocol_H1_Message_Head_headers(v___x_1292_, v_line_943_);
v___x_1294_ = lean_unsigned_to_nat(0u);
v___x_1295_ = lean_array_get_size(v___x_1293_);
v___x_1296_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9));
v___x_1297_ = lean_nat_dec_lt(v___x_1294_, v___x_1295_);
if (v___x_1297_ == 0)
{
v___y_1113_ = v_sentMessage_1269_;
v___y_1114_ = v_events_1274_;
v___y_1115_ = v_reader_1263_;
v___y_1116_ = v___x_1292_;
v___y_1117_ = v_omitBody_1271_;
v___y_1118_ = v_knownSize_1267_;
v___y_1119_ = v_userDataBytes_1272_;
v___y_1120_ = v_date_1276_;
v___y_1121_ = v_config_1273_;
v___y_1122_ = v_outputData_1265_;
v___y_1123_ = v_messageHead_1268_;
v___y_1124_ = v_error_1275_;
v___y_1125_ = v_userClosedBody_1270_;
v___y_1126_ = v_state_1266_;
v___y_1127_ = v_pullBodyStalled_1278_;
v___y_1128_ = v_userData_1264_;
v___y_1129_ = v_keepAlive_1277_;
v___y_1130_ = v___x_1293_;
goto v___jp_1112_;
}
else
{
lean_object* v___f_1298_; size_t v___x_1299_; size_t v___x_1300_; lean_object* v___x_1301_; uint8_t v___x_1302_; 
v___f_1298_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__13, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__13_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__13);
v___x_1299_ = ((size_t)0ULL);
v___x_1300_ = lean_usize_of_nat(v___x_1295_);
lean_inc_ref(v___x_1293_);
v___x_1301_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_1296_, v___f_1298_, v___x_1293_, v___x_1299_, v___x_1300_);
v___x_1302_ = lean_unbox(v___x_1301_);
lean_dec(v___x_1301_);
if (v___x_1302_ == 0)
{
v___y_1113_ = v_sentMessage_1269_;
v___y_1114_ = v_events_1274_;
v___y_1115_ = v_reader_1263_;
v___y_1116_ = v___x_1292_;
v___y_1117_ = v_omitBody_1271_;
v___y_1118_ = v_knownSize_1267_;
v___y_1119_ = v_userDataBytes_1272_;
v___y_1120_ = v_date_1276_;
v___y_1121_ = v_config_1273_;
v___y_1122_ = v_outputData_1265_;
v___y_1123_ = v_messageHead_1268_;
v___y_1124_ = v_error_1275_;
v___y_1125_ = v_userClosedBody_1270_;
v___y_1126_ = v_state_1266_;
v___y_1127_ = v_pullBodyStalled_1278_;
v___y_1128_ = v_userData_1264_;
v___y_1129_ = v_keepAlive_1277_;
v___y_1130_ = v___x_1293_;
goto v___jp_1112_;
}
else
{
lean_object* v___f_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___f_1303_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__14, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__14_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__14);
v___x_1304_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__12));
v___x_1305_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1296_, v___f_1303_, v___x_1293_, v___x_1299_, v___x_1300_, v___x_1304_);
v___y_1113_ = v_sentMessage_1269_;
v___y_1114_ = v_events_1274_;
v___y_1115_ = v_reader_1263_;
v___y_1116_ = v___x_1292_;
v___y_1117_ = v_omitBody_1271_;
v___y_1118_ = v_knownSize_1267_;
v___y_1119_ = v_userDataBytes_1272_;
v___y_1120_ = v_date_1276_;
v___y_1121_ = v_config_1273_;
v___y_1122_ = v_outputData_1265_;
v___y_1123_ = v_messageHead_1268_;
v___y_1124_ = v_error_1275_;
v___y_1125_ = v_userClosedBody_1270_;
v___y_1126_ = v_state_1266_;
v___y_1127_ = v_pullBodyStalled_1278_;
v___y_1128_ = v_userData_1264_;
v___y_1129_ = v_keepAlive_1277_;
v___y_1130_ = v___x_1305_;
goto v___jp_1112_;
}
}
}
}
}
}
else
{
lean_dec(v_date_1276_);
lean_dec(v_error_1275_);
lean_dec_ref(v_events_1274_);
lean_dec_ref(v_config_1273_);
lean_dec(v_userDataBytes_1272_);
lean_dec(v_messageHead_1268_);
lean_dec(v_knownSize_1267_);
lean_dec(v_state_1266_);
lean_dec_ref(v_outputData_1265_);
lean_dec_ref(v_userData_1264_);
lean_dec_ref(v_reader_1263_);
lean_dec_ref(v___f_944_);
lean_dec_ref(v_line_943_);
v___y_949_ = v___y_1262_;
v_omitBody_950_ = v_omitBody_1271_;
goto v___jp_948_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___boxed(lean_object* v_body_1364_, lean_object* v_close_1365_, lean_object* v_isClosed_1366_, lean_object* v_line_1367_, lean_object* v___f_1368_, lean_object* v_machine_1369_, lean_object* v_x_1370_, lean_object* v___y_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8(v_body_1364_, v_close_1365_, v_isClosed_1366_, v_line_1367_, v___f_1368_, v_machine_1369_, v_x_1370_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(lean_object* v_inst_1374_, lean_object* v_machine_1375_, lean_object* v_res_1376_){
_start:
{
lean_object* v_close_1378_; lean_object* v_isClosed_1379_; lean_object* v_getKnownSize_1380_; lean_object* v_line_1381_; lean_object* v_body_1382_; lean_object* v___f_1383_; lean_object* v___f_1384_; lean_object* v___x_1385_; uint8_t v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; 
v_close_1378_ = lean_ctor_get(v_inst_1374_, 1);
lean_inc_ref(v_close_1378_);
v_isClosed_1379_ = lean_ctor_get(v_inst_1374_, 2);
lean_inc_ref(v_isClosed_1379_);
v_getKnownSize_1380_ = lean_ctor_get(v_inst_1374_, 5);
lean_inc_ref(v_getKnownSize_1380_);
lean_dec_ref(v_inst_1374_);
v_line_1381_ = lean_ctor_get(v_res_1376_, 0);
lean_inc_ref(v_line_1381_);
v_body_1382_ = lean_ctor_get(v_res_1376_, 1);
lean_inc_n(v_body_1382_, 2);
lean_dec_ref(v_res_1376_);
v___f_1383_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___closed__0));
v___f_1384_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___boxed), 8, 6);
lean_closure_set(v___f_1384_, 0, v_body_1382_);
lean_closure_set(v___f_1384_, 1, v_close_1378_);
lean_closure_set(v___f_1384_, 2, v_isClosed_1379_);
lean_closure_set(v___f_1384_, 3, v_line_1381_);
lean_closure_set(v___f_1384_, 4, v___f_1383_);
lean_closure_set(v___f_1384_, 5, v_machine_1375_);
v___x_1385_ = lean_unsigned_to_nat(0u);
v___x_1386_ = 0;
v___x_1387_ = lean_apply_2(v_getKnownSize_1380_, v_body_1382_, lean_box(0));
v___x_1388_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1385_, v___x_1386_, v___x_1387_, v___f_1384_);
return v___x_1388_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___boxed(lean_object* v_inst_1389_, lean_object* v_machine_1390_, lean_object* v_res_1391_, lean_object* v_a_1392_){
_start:
{
lean_object* v_res_1393_; 
v_res_1393_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(v_inst_1389_, v_machine_1390_, v_res_1391_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse(lean_object* v_00_u03b2_1394_, lean_object* v_inst_1395_, lean_object* v_machine_1396_, lean_object* v_res_1397_){
_start:
{
lean_object* v___x_1399_; 
v___x_1399_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(v_inst_1395_, v_machine_1396_, v_res_1397_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___boxed(lean_object* v_00_u03b2_1400_, lean_object* v_inst_1401_, lean_object* v_machine_1402_, lean_object* v_res_1403_, lean_object* v_a_1404_){
_start:
{
lean_object* v_res_1405_; 
v_res_1405_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse(v_00_u03b2_1400_, v_inst_1401_, v_machine_1402_, v_res_1403_);
return v_res_1405_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate_spec__0(lean_object* v_x_1406_, lean_object* v_x_1407_){
_start:
{
if (lean_obj_tag(v_x_1406_) == 0)
{
if (lean_obj_tag(v_x_1407_) == 0)
{
uint8_t v___x_1408_; 
v___x_1408_ = 1;
return v___x_1408_;
}
else
{
uint8_t v___x_1409_; 
v___x_1409_ = 0;
return v___x_1409_;
}
}
else
{
if (lean_obj_tag(v_x_1407_) == 0)
{
uint8_t v___x_1410_; 
v___x_1410_ = 0;
return v___x_1410_;
}
else
{
lean_object* v_val_1411_; lean_object* v_val_1412_; uint8_t v___x_1413_; 
v_val_1411_ = lean_ctor_get(v_x_1406_, 0);
v_val_1412_ = lean_ctor_get(v_x_1407_, 0);
v___x_1413_ = lean_int_dec_eq(v_val_1411_, v_val_1412_);
return v___x_1413_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate_spec__0___boxed(lean_object* v_x_1414_, lean_object* v_x_1415_){
_start:
{
uint8_t v_res_1416_; lean_object* v_r_1417_; 
v_res_1416_ = l_instBEqOption_beq___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate_spec__0(v_x_1414_, v_x_1415_);
lean_dec(v_x_1415_);
lean_dec(v_x_1414_);
v_r_1417_ = lean_box(v_res_1416_);
return v_r_1417_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate_spec__2(lean_object* v_a_1418_){
_start:
{
lean_object* v___x_1419_; 
v___x_1419_ = lean_nat_to_int(v_a_1418_);
return v___x_1419_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate_spec__3(lean_object* v_a_1420_){
_start:
{
lean_object* v___x_1421_; 
v___x_1421_ = l_Rat_ofInt(v_a_1420_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___lam__0(lean_object* v_tz_1422_, lean_object* v___x_1423_, lean_object* v_second_1424_, lean_object* v_nano_1425_, lean_object* v_x_1426_){
_start:
{
lean_object* v_offset_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v_nanos_1431_; lean_object* v___x_1432_; lean_object* v_nanos_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; 
v_offset_1427_ = lean_ctor_get(v_tz_1422_, 0);
v___x_1428_ = lean_nat_to_int(v___x_1423_);
v___x_1429_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0);
v___x_1430_ = lean_int_mul(v_second_1424_, v___x_1429_);
v_nanos_1431_ = lean_int_add(v___x_1430_, v_nano_1425_);
lean_dec(v___x_1430_);
v___x_1432_ = lean_int_mul(v_offset_1427_, v___x_1429_);
v_nanos_1433_ = lean_int_add(v___x_1432_, v___x_1428_);
lean_dec(v___x_1428_);
lean_dec(v___x_1432_);
v___x_1434_ = lean_int_add(v_nanos_1431_, v_nanos_1433_);
lean_dec(v_nanos_1433_);
lean_dec(v_nanos_1431_);
v___x_1435_ = l_Std_Time_Duration_ofNanoseconds(v___x_1434_);
lean_dec(v___x_1434_);
v___x_1436_ = l_Std_Time_PlainDateTime_ofWallTime(v___x_1435_);
return v___x_1436_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___lam__0___boxed(lean_object* v_tz_1437_, lean_object* v___x_1438_, lean_object* v_second_1439_, lean_object* v_nano_1440_, lean_object* v_x_1441_){
_start:
{
lean_object* v_res_1442_; 
v_res_1442_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___lam__0(v_tz_1437_, v___x_1438_, v_second_1439_, v_nano_1440_, v_x_1441_);
lean_dec(v_nano_1440_);
lean_dec(v_second_1439_);
lean_dec_ref(v_tz_1437_);
return v_res_1442_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__0(void){
_start:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1443_ = lean_unsigned_to_nat(0u);
v___x_1444_ = lean_nat_to_int(v___x_1443_);
return v___x_1444_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__3(void){
_start:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; 
v___x_1448_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__2));
v___x_1449_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__0);
v___x_1450_ = l_Std_Time_TimeZone_ZoneRules_fixedOffsetZone(v___x_1449_, v___x_1448_, v___x_1448_);
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg(lean_object* v_config_1451_, lean_object* v_state_1452_){
_start:
{
uint8_t v_generateDate_1454_; 
v_generateDate_1454_ = lean_ctor_get_uint8(v_config_1451_, sizeof(void*)*25 + 1);
if (v_generateDate_1454_ == 0)
{
lean_object* v___x_1455_; 
v___x_1455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1455_, 0, v_state_1452_);
return v___x_1455_;
}
else
{
lean_object* v___x_1456_; 
v___x_1456_ = lean_get_current_time();
if (lean_obj_tag(v___x_1456_) == 0)
{
lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1524_; 
v_a_1457_ = lean_ctor_get(v___x_1456_, 0);
v_isSharedCheck_1524_ = !lean_is_exclusive(v___x_1456_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1459_ = v___x_1456_;
v_isShared_1460_ = v_isSharedCheck_1524_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___x_1456_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1524_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v_second_1461_; lean_object* v_nano_1462_; lean_object* v_machine_1463_; lean_object* v_requestStream_1464_; lean_object* v_keepAliveTimeout_1465_; lean_object* v_currentTimeout_1466_; lean_object* v_headerTimeout_1467_; lean_object* v_response_1468_; lean_object* v_respStream_1469_; uint8_t v_requiresData_1470_; lean_object* v_expectData_1471_; uint8_t v_handlerDispatched_1472_; lean_object* v_pendingHead_1473_; lean_object* v_dateSecond_1474_; lean_object* v___x_1475_; uint8_t v___x_1476_; 
v_second_1461_ = lean_ctor_get(v_a_1457_, 0);
v_nano_1462_ = lean_ctor_get(v_a_1457_, 1);
v_machine_1463_ = lean_ctor_get(v_state_1452_, 0);
lean_inc_ref(v_machine_1463_);
v_requestStream_1464_ = lean_ctor_get(v_state_1452_, 1);
v_keepAliveTimeout_1465_ = lean_ctor_get(v_state_1452_, 2);
v_currentTimeout_1466_ = lean_ctor_get(v_state_1452_, 3);
v_headerTimeout_1467_ = lean_ctor_get(v_state_1452_, 4);
v_response_1468_ = lean_ctor_get(v_state_1452_, 5);
v_respStream_1469_ = lean_ctor_get(v_state_1452_, 6);
v_requiresData_1470_ = lean_ctor_get_uint8(v_state_1452_, sizeof(void*)*10);
v_expectData_1471_ = lean_ctor_get(v_state_1452_, 7);
v_handlerDispatched_1472_ = lean_ctor_get_uint8(v_state_1452_, sizeof(void*)*10 + 1);
v_pendingHead_1473_ = lean_ctor_get(v_state_1452_, 8);
v_dateSecond_1474_ = lean_ctor_get(v_state_1452_, 9);
lean_inc(v_second_1461_);
v___x_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1475_, 0, v_second_1461_);
v___x_1476_ = l_instBEqOption_beq___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate_spec__0(v_dateSecond_1474_, v___x_1475_);
if (v___x_1476_ == 0)
{
lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1510_; 
lean_inc(v_pendingHead_1473_);
lean_inc(v_expectData_1471_);
lean_inc(v_respStream_1469_);
lean_inc_ref(v_response_1468_);
lean_inc(v_headerTimeout_1467_);
lean_inc(v_currentTimeout_1466_);
lean_inc(v_keepAliveTimeout_1465_);
lean_inc_ref(v_requestStream_1464_);
v_isSharedCheck_1510_ = !lean_is_exclusive(v_state_1452_);
if (v_isSharedCheck_1510_ == 0)
{
lean_object* v_unused_1511_; lean_object* v_unused_1512_; lean_object* v_unused_1513_; lean_object* v_unused_1514_; lean_object* v_unused_1515_; lean_object* v_unused_1516_; lean_object* v_unused_1517_; lean_object* v_unused_1518_; lean_object* v_unused_1519_; lean_object* v_unused_1520_; 
v_unused_1511_ = lean_ctor_get(v_state_1452_, 9);
lean_dec(v_unused_1511_);
v_unused_1512_ = lean_ctor_get(v_state_1452_, 8);
lean_dec(v_unused_1512_);
v_unused_1513_ = lean_ctor_get(v_state_1452_, 7);
lean_dec(v_unused_1513_);
v_unused_1514_ = lean_ctor_get(v_state_1452_, 6);
lean_dec(v_unused_1514_);
v_unused_1515_ = lean_ctor_get(v_state_1452_, 5);
lean_dec(v_unused_1515_);
v_unused_1516_ = lean_ctor_get(v_state_1452_, 4);
lean_dec(v_unused_1516_);
v_unused_1517_ = lean_ctor_get(v_state_1452_, 3);
lean_dec(v_unused_1517_);
v_unused_1518_ = lean_ctor_get(v_state_1452_, 2);
lean_dec(v_unused_1518_);
v_unused_1519_ = lean_ctor_get(v_state_1452_, 1);
lean_dec(v_unused_1519_);
v_unused_1520_ = lean_ctor_get(v_state_1452_, 0);
lean_dec(v_unused_1520_);
v___x_1478_ = v_state_1452_;
v_isShared_1479_ = v_isSharedCheck_1510_;
goto v_resetjp_1477_;
}
else
{
lean_dec(v_state_1452_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1510_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v_reader_1482_; lean_object* v_writer_1483_; lean_object* v_config_1484_; lean_object* v_events_1485_; lean_object* v_error_1486_; uint8_t v_keepAlive_1487_; uint8_t v_pullBodyStalled_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1508_; 
v___x_1480_ = lean_unsigned_to_nat(0u);
v___x_1481_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__3, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__3_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__3);
v_reader_1482_ = lean_ctor_get(v_machine_1463_, 0);
v_writer_1483_ = lean_ctor_get(v_machine_1463_, 1);
v_config_1484_ = lean_ctor_get(v_machine_1463_, 2);
v_events_1485_ = lean_ctor_get(v_machine_1463_, 3);
v_error_1486_ = lean_ctor_get(v_machine_1463_, 4);
v_keepAlive_1487_ = lean_ctor_get_uint8(v_machine_1463_, sizeof(void*)*6);
v_pullBodyStalled_1488_ = lean_ctor_get_uint8(v_machine_1463_, sizeof(void*)*6 + 1);
v_isSharedCheck_1508_ = !lean_is_exclusive(v_machine_1463_);
if (v_isSharedCheck_1508_ == 0)
{
lean_object* v_unused_1509_; 
v_unused_1509_ = lean_ctor_get(v_machine_1463_, 5);
lean_dec(v_unused_1509_);
v___x_1490_ = v_machine_1463_;
v_isShared_1491_ = v_isSharedCheck_1508_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_error_1486_);
lean_inc(v_events_1485_);
lean_inc(v_config_1484_);
lean_inc(v_writer_1483_);
lean_inc(v_reader_1482_);
lean_dec(v_machine_1463_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1508_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v_tz_1492_; lean_object* v___f_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1500_; 
v_tz_1492_ = l_Std_Time_TimeZone_ZoneRules_timezoneAt(v___x_1481_, v_a_1457_);
lean_inc(v_nano_1462_);
lean_inc(v_second_1461_);
lean_inc_ref(v_tz_1492_);
v___f_1493_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1493_, 0, v_tz_1492_);
lean_closure_set(v___f_1493_, 1, v___x_1480_);
lean_closure_set(v___f_1493_, 2, v_second_1461_);
lean_closure_set(v___f_1493_, 3, v_nano_1462_);
v___x_1494_ = lean_mk_thunk(v___f_1493_);
v___x_1495_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1495_, 0, v___x_1494_);
lean_ctor_set(v___x_1495_, 1, v_a_1457_);
lean_ctor_set(v___x_1495_, 2, v___x_1481_);
lean_ctor_set(v___x_1495_, 3, v_tz_1492_);
v___x_1496_ = l_Std_Time_DateTime_toHTTPDateString(v___x_1495_);
v___x_1497_ = l_Std_Http_Header_Value_ofString_x21(v___x_1496_);
v___x_1498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1497_);
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 5, v___x_1498_);
v___x_1500_ = v___x_1490_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v_reader_1482_);
lean_ctor_set(v_reuseFailAlloc_1507_, 1, v_writer_1483_);
lean_ctor_set(v_reuseFailAlloc_1507_, 2, v_config_1484_);
lean_ctor_set(v_reuseFailAlloc_1507_, 3, v_events_1485_);
lean_ctor_set(v_reuseFailAlloc_1507_, 4, v_error_1486_);
lean_ctor_set(v_reuseFailAlloc_1507_, 5, v___x_1498_);
lean_ctor_set_uint8(v_reuseFailAlloc_1507_, sizeof(void*)*6, v_keepAlive_1487_);
lean_ctor_set_uint8(v_reuseFailAlloc_1507_, sizeof(void*)*6 + 1, v_pullBodyStalled_1488_);
v___x_1500_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
lean_object* v___x_1502_; 
if (v_isShared_1479_ == 0)
{
lean_ctor_set(v___x_1478_, 9, v___x_1475_);
lean_ctor_set(v___x_1478_, 0, v___x_1500_);
v___x_1502_ = v___x_1478_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v___x_1500_);
lean_ctor_set(v_reuseFailAlloc_1506_, 1, v_requestStream_1464_);
lean_ctor_set(v_reuseFailAlloc_1506_, 2, v_keepAliveTimeout_1465_);
lean_ctor_set(v_reuseFailAlloc_1506_, 3, v_currentTimeout_1466_);
lean_ctor_set(v_reuseFailAlloc_1506_, 4, v_headerTimeout_1467_);
lean_ctor_set(v_reuseFailAlloc_1506_, 5, v_response_1468_);
lean_ctor_set(v_reuseFailAlloc_1506_, 6, v_respStream_1469_);
lean_ctor_set(v_reuseFailAlloc_1506_, 7, v_expectData_1471_);
lean_ctor_set(v_reuseFailAlloc_1506_, 8, v_pendingHead_1473_);
lean_ctor_set(v_reuseFailAlloc_1506_, 9, v___x_1475_);
lean_ctor_set_uint8(v_reuseFailAlloc_1506_, sizeof(void*)*10, v_requiresData_1470_);
lean_ctor_set_uint8(v_reuseFailAlloc_1506_, sizeof(void*)*10 + 1, v_handlerDispatched_1472_);
v___x_1502_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
lean_object* v___x_1504_; 
if (v_isShared_1460_ == 0)
{
lean_ctor_set(v___x_1459_, 0, v___x_1502_);
v___x_1504_ = v___x_1459_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v___x_1502_);
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
}
}
else
{
lean_object* v___x_1522_; 
lean_dec_ref_known(v___x_1475_, 1);
lean_dec_ref(v_machine_1463_);
lean_dec(v_a_1457_);
if (v_isShared_1460_ == 0)
{
lean_ctor_set(v___x_1459_, 0, v_state_1452_);
v___x_1522_ = v___x_1459_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v_state_1452_);
v___x_1522_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
return v___x_1522_;
}
}
}
}
else
{
lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1532_; 
lean_dec_ref(v_state_1452_);
v_a_1525_ = lean_ctor_get(v___x_1456_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1456_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1527_ = v___x_1456_;
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1456_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1530_; 
if (v_isShared_1528_ == 0)
{
v___x_1530_ = v___x_1527_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_a_1525_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___boxed(lean_object* v_config_1533_, lean_object* v_state_1534_, lean_object* v_a_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg(v_config_1533_, v_state_1534_);
lean_dec_ref(v_config_1533_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate(lean_object* v_00_u03b2_1537_, lean_object* v_config_1538_, lean_object* v_state_1539_){
_start:
{
lean_object* v___x_1541_; 
v___x_1541_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg(v_config_1538_, v_state_1539_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___boxed(lean_object* v_00_u03b2_1542_, lean_object* v_config_1543_, lean_object* v_state_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate(v_00_u03b2_1542_, v_config_1543_, v_state_1544_);
lean_dec_ref(v_config_1543_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate_spec__1(lean_object* v_a_1547_){
_start:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1548_ = lean_nat_to_int(v_a_1547_);
v___x_1549_ = l_Rat_ofInt(v___x_1548_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0(lean_object* v_____do__lift_1550_, lean_object* v___y_1551_){
_start:
{
uint8_t v_closed_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v_closed_1553_ = lean_ctor_get_uint8(v_____do__lift_1550_, sizeof(void*)*6);
v___x_1554_ = lean_box(v_closed_1553_);
v___x_1555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1554_);
v___x_1556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1555_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0___boxed(lean_object* v_____do__lift_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__0(v_____do__lift_1557_, v___y_1558_);
lean_dec(v___y_1558_);
lean_dec_ref(v_____do__lift_1557_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3(lean_object* v___x_1561_, lean_object* v_x_1562_){
_start:
{
if (lean_obj_tag(v_x_1562_) == 0)
{
lean_object* v_a_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1572_; 
lean_dec_ref(v___x_1561_);
v_a_1564_ = lean_ctor_get(v_x_1562_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v_x_1562_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1566_ = v_x_1562_;
v_isShared_1567_ = v_isSharedCheck_1572_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_a_1564_);
lean_dec(v_x_1562_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1572_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1569_; 
if (v_isShared_1567_ == 0)
{
v___x_1569_ = v___x_1566_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1564_);
v___x_1569_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
lean_object* v___x_1570_; 
v___x_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1569_);
return v___x_1570_;
}
}
}
else
{
lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1581_; 
v_isSharedCheck_1581_ = !lean_is_exclusive(v_x_1562_);
if (v_isSharedCheck_1581_ == 0)
{
lean_object* v_unused_1582_; 
v_unused_1582_ = lean_ctor_get(v_x_1562_, 0);
lean_dec(v_unused_1582_);
v___x_1574_ = v_x_1562_;
v_isShared_1575_ = v_isSharedCheck_1581_;
goto v_resetjp_1573_;
}
else
{
lean_dec(v_x_1562_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1581_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1576_; lean_object* v___x_1578_; 
v___x_1576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1561_);
if (v_isShared_1575_ == 0)
{
lean_ctor_set(v___x_1574_, 0, v___x_1576_);
v___x_1578_ = v___x_1574_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v___x_1576_);
v___x_1578_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
lean_object* v___x_1579_; 
v___x_1579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1578_);
return v___x_1579_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3___boxed(lean_object* v___x_1583_, lean_object* v_x_1584_, lean_object* v___y_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3(v___x_1583_, v_x_1584_);
return v_res_1586_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1(lean_object* v___x_1591_, lean_object* v___y_1592_){
_start:
{
lean_object* v___x_1594_; lean_object* v_pendingProducer_1595_; lean_object* v_pendingConsumer_1596_; lean_object* v_interestWaiter_1597_; uint8_t v_closed_1598_; lean_object* v_pendingIncompleteChunk_1599_; lean_object* v_closeError_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1609_; 
v___x_1594_ = lean_st_ref_take(v___y_1592_);
v_pendingProducer_1595_ = lean_ctor_get(v___x_1594_, 0);
v_pendingConsumer_1596_ = lean_ctor_get(v___x_1594_, 1);
v_interestWaiter_1597_ = lean_ctor_get(v___x_1594_, 2);
v_closed_1598_ = lean_ctor_get_uint8(v___x_1594_, sizeof(void*)*6);
v_pendingIncompleteChunk_1599_ = lean_ctor_get(v___x_1594_, 4);
v_closeError_1600_ = lean_ctor_get(v___x_1594_, 5);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1594_);
if (v_isSharedCheck_1609_ == 0)
{
lean_object* v_unused_1610_; 
v_unused_1610_ = lean_ctor_get(v___x_1594_, 3);
lean_dec(v_unused_1610_);
v___x_1602_ = v___x_1594_;
v_isShared_1603_ = v_isSharedCheck_1609_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_closeError_1600_);
lean_inc(v_pendingIncompleteChunk_1599_);
lean_inc(v_interestWaiter_1597_);
lean_inc(v_pendingConsumer_1596_);
lean_inc(v_pendingProducer_1595_);
lean_dec(v___x_1594_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1609_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1605_; 
if (v_isShared_1603_ == 0)
{
lean_ctor_set(v___x_1602_, 3, v___x_1591_);
v___x_1605_ = v___x_1602_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v_pendingProducer_1595_);
lean_ctor_set(v_reuseFailAlloc_1608_, 1, v_pendingConsumer_1596_);
lean_ctor_set(v_reuseFailAlloc_1608_, 2, v_interestWaiter_1597_);
lean_ctor_set(v_reuseFailAlloc_1608_, 3, v___x_1591_);
lean_ctor_set(v_reuseFailAlloc_1608_, 4, v_pendingIncompleteChunk_1599_);
lean_ctor_set(v_reuseFailAlloc_1608_, 5, v_closeError_1600_);
lean_ctor_set_uint8(v_reuseFailAlloc_1608_, sizeof(void*)*6, v_closed_1598_);
v___x_1605_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1606_ = lean_st_ref_put(v___y_1592_, v___x_1605_);
v___x_1607_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__1));
return v___x_1607_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___boxed(lean_object* v___x_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_){
_start:
{
lean_object* v_res_1614_; 
v_res_1614_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1(v___x_1611_, v___y_1612_);
lean_dec(v___y_1612_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2(lean_object* v_machine_1615_, lean_object* v_requestStream_1616_, lean_object* v_keepAliveTimeout_1617_, lean_object* v_currentTimeout_1618_, lean_object* v_headerTimeout_1619_, lean_object* v_response_1620_, lean_object* v_respStream_1621_, lean_object* v_expectData_1622_, uint8_t v_handlerDispatched_1623_, lean_object* v_dateSecond_1624_, lean_object* v_____r_1625_){
_start:
{
uint8_t v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1627_ = 0;
v___x_1628_ = lean_box(0);
v___x_1629_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_1629_, 0, v_machine_1615_);
lean_ctor_set(v___x_1629_, 1, v_requestStream_1616_);
lean_ctor_set(v___x_1629_, 2, v_keepAliveTimeout_1617_);
lean_ctor_set(v___x_1629_, 3, v_currentTimeout_1618_);
lean_ctor_set(v___x_1629_, 4, v_headerTimeout_1619_);
lean_ctor_set(v___x_1629_, 5, v_response_1620_);
lean_ctor_set(v___x_1629_, 6, v_respStream_1621_);
lean_ctor_set(v___x_1629_, 7, v_expectData_1622_);
lean_ctor_set(v___x_1629_, 8, v___x_1628_);
lean_ctor_set(v___x_1629_, 9, v_dateSecond_1624_);
lean_ctor_set_uint8(v___x_1629_, sizeof(void*)*10, v___x_1627_);
lean_ctor_set_uint8(v___x_1629_, sizeof(void*)*10 + 1, v_handlerDispatched_1623_);
v___x_1630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1629_);
v___x_1631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1630_);
v___x_1632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1631_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___boxed(lean_object* v_machine_1633_, lean_object* v_requestStream_1634_, lean_object* v_keepAliveTimeout_1635_, lean_object* v_currentTimeout_1636_, lean_object* v_headerTimeout_1637_, lean_object* v_response_1638_, lean_object* v_respStream_1639_, lean_object* v_expectData_1640_, lean_object* v_handlerDispatched_1641_, lean_object* v_dateSecond_1642_, lean_object* v_____r_1643_, lean_object* v___y_1644_){
_start:
{
uint8_t v_handlerDispatched_boxed_1645_; lean_object* v_res_1646_; 
v_handlerDispatched_boxed_1645_ = lean_unbox(v_handlerDispatched_1641_);
v_res_1646_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2(v_machine_1633_, v_requestStream_1634_, v_keepAliveTimeout_1635_, v_currentTimeout_1636_, v_headerTimeout_1637_, v_response_1638_, v_respStream_1639_, v_expectData_1640_, v_handlerDispatched_boxed_1645_, v_dateSecond_1642_, v_____r_1643_);
return v_res_1646_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4(lean_object* v___f_1647_, lean_object* v_x_1648_){
_start:
{
if (lean_obj_tag(v_x_1648_) == 0)
{
lean_object* v_a_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1658_; 
lean_dec_ref(v___f_1647_);
v_a_1650_ = lean_ctor_get(v_x_1648_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v_x_1648_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1652_ = v_x_1648_;
v_isShared_1653_ = v_isSharedCheck_1658_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_a_1650_);
lean_dec(v_x_1648_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1658_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
lean_object* v___x_1655_; 
if (v_isShared_1653_ == 0)
{
v___x_1655_ = v___x_1652_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_a_1650_);
v___x_1655_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
lean_object* v___x_1656_; 
v___x_1656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1655_);
return v___x_1656_;
}
}
}
else
{
lean_object* v_a_1659_; lean_object* v___x_1660_; 
v_a_1659_ = lean_ctor_get(v_x_1648_, 0);
lean_inc(v_a_1659_);
lean_dec_ref_known(v_x_1648_, 1);
v___x_1660_ = lean_apply_2(v___f_1647_, v_a_1659_, lean_box(0));
return v___x_1660_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed(lean_object* v___f_1661_, lean_object* v_x_1662_, lean_object* v___y_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4(v___f_1661_, v_x_1662_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5(lean_object* v_requestStream_1665_, lean_object* v___f_1666_, lean_object* v___f_1667_, lean_object* v_x_1668_){
_start:
{
if (lean_obj_tag(v_x_1668_) == 0)
{
lean_object* v_a_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1678_; 
lean_dec_ref(v___f_1667_);
lean_dec_ref(v___f_1666_);
lean_dec_ref(v_requestStream_1665_);
v_a_1670_ = lean_ctor_get(v_x_1668_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v_x_1668_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1672_ = v_x_1668_;
v_isShared_1673_ = v_isSharedCheck_1678_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_a_1670_);
lean_dec(v_x_1668_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1678_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v___x_1675_; 
if (v_isShared_1673_ == 0)
{
v___x_1675_ = v___x_1672_;
goto v_reusejp_1674_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_a_1670_);
v___x_1675_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1674_;
}
v_reusejp_1674_:
{
lean_object* v___x_1676_; 
v___x_1676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1676_, 0, v___x_1675_);
return v___x_1676_;
}
}
}
else
{
lean_object* v_a_1679_; uint8_t v___x_1680_; 
v_a_1679_ = lean_ctor_get(v_x_1668_, 0);
lean_inc(v_a_1679_);
lean_dec_ref_known(v_x_1668_, 1);
v___x_1680_ = lean_unbox(v_a_1679_);
if (v___x_1680_ == 0)
{
lean_object* v___x_1681_; lean_object* v___x_1682_; uint8_t v___x_1683_; lean_object* v___x_1684_; 
lean_dec_ref(v___f_1667_);
v___x_1681_ = lean_unsigned_to_nat(0u);
v___x_1682_ = l_Std_Http_Body_Stream_close(v_requestStream_1665_);
v___x_1683_ = lean_unbox(v_a_1679_);
lean_dec(v_a_1679_);
v___x_1684_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1681_, v___x_1683_, v___x_1682_, v___f_1666_);
return v___x_1684_;
}
else
{
lean_object* v___x_1685_; lean_object* v___x_1686_; 
lean_dec(v_a_1679_);
lean_dec_ref(v___f_1666_);
lean_dec_ref(v_requestStream_1665_);
v___x_1685_ = lean_box(0);
v___x_1686_ = lean_apply_2(v___f_1667_, v___x_1685_, lean_box(0));
return v___x_1686_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed(lean_object* v_requestStream_1687_, lean_object* v___f_1688_, lean_object* v___f_1689_, lean_object* v_x_1690_, lean_object* v___y_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5(v_requestStream_1687_, v___f_1688_, v___f_1689_, v_x_1690_);
return v_res_1692_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0(void){
_start:
{
lean_object* v___x_1693_; 
v___x_1693_ = l_Std_Async_EAsync_instMonad___redArg();
return v___x_1693_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1(void){
_start:
{
lean_object* v___x_1694_; 
v___x_1694_ = l_Std_Async_EAsync_instMonadLiftBaseAsync___redArg();
return v___x_1694_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5(void){
_start:
{
lean_object* v___x_1700_; lean_object* v___f_1701_; lean_object* v___f_1702_; 
v___x_1700_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1);
v___f_1701_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__4));
v___f_1702_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1702_, 0, v___f_1701_);
lean_closure_set(v___f_1702_, 1, v___x_1700_);
return v___f_1702_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10(void){
_start:
{
lean_object* v___x_1711_; lean_object* v___f_1712_; lean_object* v___f_1713_; 
v___x_1711_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__1);
v___f_1712_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__9));
v___f_1713_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1713_, 0, v___f_1712_);
lean_closure_set(v___f_1713_, 1, v___x_1711_);
return v___f_1713_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11(void){
_start:
{
lean_object* v___f_1714_; lean_object* v___x_1715_; 
v___f_1714_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__10);
v___x_1715_ = lean_alloc_closure((void*)(l_StateRefT_x27_get___boxed), 5, 4);
lean_closure_set(v___x_1715_, 0, lean_box(0));
lean_closure_set(v___x_1715_, 1, lean_box(0));
lean_closure_set(v___x_1715_, 2, lean_box(0));
lean_closure_set(v___x_1715_, 3, v___f_1714_);
return v___x_1715_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6(lean_object* v___y_1716_, lean_object* v___f_1717_, lean_object* v_x_1718_){
_start:
{
if (lean_obj_tag(v_x_1718_) == 0)
{
lean_object* v_a_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1728_; 
lean_dec_ref(v___f_1717_);
lean_dec_ref(v___y_1716_);
v_a_1720_ = lean_ctor_get(v_x_1718_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v_x_1718_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1722_ = v_x_1718_;
v_isShared_1723_ = v_isSharedCheck_1728_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_a_1720_);
lean_dec(v_x_1718_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1728_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1725_; 
if (v_isShared_1723_ == 0)
{
v___x_1725_ = v___x_1722_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_a_1720_);
v___x_1725_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
lean_object* v___x_1726_; 
v___x_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1725_);
return v___x_1726_;
}
}
}
else
{
lean_object* v_machine_1729_; lean_object* v_requestStream_1730_; lean_object* v_keepAliveTimeout_1731_; lean_object* v_currentTimeout_1732_; lean_object* v_headerTimeout_1733_; lean_object* v_response_1734_; lean_object* v_respStream_1735_; lean_object* v_expectData_1736_; uint8_t v_handlerDispatched_1737_; lean_object* v_dateSecond_1738_; lean_object* v___x_1739_; lean_object* v___f_1740_; lean_object* v___f_1741_; lean_object* v___f_1742_; lean_object* v___x_1743_; uint8_t v___x_1744_; lean_object* v___x_1745_; lean_object* v___f_1746_; lean_object* v___f_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_4909__overap_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
lean_dec_ref_known(v_x_1718_, 1);
v_machine_1729_ = lean_ctor_get(v___y_1716_, 0);
lean_inc_ref(v_machine_1729_);
v_requestStream_1730_ = lean_ctor_get(v___y_1716_, 1);
lean_inc_ref_n(v_requestStream_1730_, 3);
v_keepAliveTimeout_1731_ = lean_ctor_get(v___y_1716_, 2);
lean_inc(v_keepAliveTimeout_1731_);
v_currentTimeout_1732_ = lean_ctor_get(v___y_1716_, 3);
lean_inc(v_currentTimeout_1732_);
v_headerTimeout_1733_ = lean_ctor_get(v___y_1716_, 4);
lean_inc(v_headerTimeout_1733_);
v_response_1734_ = lean_ctor_get(v___y_1716_, 5);
lean_inc_ref(v_response_1734_);
v_respStream_1735_ = lean_ctor_get(v___y_1716_, 6);
lean_inc(v_respStream_1735_);
v_expectData_1736_ = lean_ctor_get(v___y_1716_, 7);
lean_inc(v_expectData_1736_);
v_handlerDispatched_1737_ = lean_ctor_get_uint8(v___y_1716_, sizeof(void*)*10 + 1);
v_dateSecond_1738_ = lean_ctor_get(v___y_1716_, 9);
lean_inc(v_dateSecond_1738_);
lean_dec_ref(v___y_1716_);
v___x_1739_ = lean_box(v_handlerDispatched_1737_);
v___f_1740_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__2___boxed), 12, 10);
lean_closure_set(v___f_1740_, 0, v_machine_1729_);
lean_closure_set(v___f_1740_, 1, v_requestStream_1730_);
lean_closure_set(v___f_1740_, 2, v_keepAliveTimeout_1731_);
lean_closure_set(v___f_1740_, 3, v_currentTimeout_1732_);
lean_closure_set(v___f_1740_, 4, v_headerTimeout_1733_);
lean_closure_set(v___f_1740_, 5, v_response_1734_);
lean_closure_set(v___f_1740_, 6, v_respStream_1735_);
lean_closure_set(v___f_1740_, 7, v_expectData_1736_);
lean_closure_set(v___f_1740_, 8, v___x_1739_);
lean_closure_set(v___f_1740_, 9, v_dateSecond_1738_);
lean_inc_ref(v___f_1740_);
v___f_1741_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_1741_, 0, v___f_1740_);
v___f_1742_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed), 5, 3);
lean_closure_set(v___f_1742_, 0, v_requestStream_1730_);
lean_closure_set(v___f_1742_, 1, v___f_1741_);
lean_closure_set(v___f_1742_, 2, v___f_1740_);
v___x_1743_ = lean_unsigned_to_nat(0u);
v___x_1744_ = 0;
v___x_1745_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_1746_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_1747_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_1748_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_1749_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_1749_, 0, lean_box(0));
lean_closure_set(v___x_1749_, 1, lean_box(0));
lean_closure_set(v___x_1749_, 2, v___x_1745_);
lean_closure_set(v___x_1749_, 3, lean_box(0));
lean_closure_set(v___x_1749_, 4, lean_box(0));
lean_closure_set(v___x_1749_, 5, v___x_1748_);
lean_closure_set(v___x_1749_, 6, v___f_1717_);
v___x_4909__overap_1750_ = l_Std_Mutex_atomically___redArg(v___x_1745_, v___f_1746_, v___f_1747_, v_requestStream_1730_, v___x_1749_);
v___x_1751_ = lean_apply_1(v___x_4909__overap_1750_, lean_box(0));
v___x_1752_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1743_, v___x_1744_, v___x_1751_, v___f_1742_);
return v___x_1752_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___boxed(lean_object* v___y_1753_, lean_object* v___f_1754_, lean_object* v_x_1755_, lean_object* v___y_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6(v___y_1753_, v___f_1754_, v_x_1755_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7(lean_object* v___y_1758_, lean_object* v_x_1759_){
_start:
{
if (lean_obj_tag(v_x_1759_) == 0)
{
lean_object* v_a_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1769_; 
lean_dec_ref(v___y_1758_);
v_a_1761_ = lean_ctor_get(v_x_1759_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v_x_1759_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1763_ = v_x_1759_;
v_isShared_1764_ = v_isSharedCheck_1769_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_a_1761_);
lean_dec(v_x_1759_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1769_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1766_; 
if (v_isShared_1764_ == 0)
{
v___x_1766_ = v___x_1763_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_a_1761_);
v___x_1766_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
lean_object* v___x_1767_; 
v___x_1767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1766_);
return v___x_1767_;
}
}
}
else
{
lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1778_; 
v_isSharedCheck_1778_ = !lean_is_exclusive(v_x_1759_);
if (v_isSharedCheck_1778_ == 0)
{
lean_object* v_unused_1779_; 
v_unused_1779_ = lean_ctor_get(v_x_1759_, 0);
lean_dec(v_unused_1779_);
v___x_1771_ = v_x_1759_;
v_isShared_1772_ = v_isSharedCheck_1778_;
goto v_resetjp_1770_;
}
else
{
lean_dec(v_x_1759_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1778_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1773_; lean_object* v___x_1775_; 
v___x_1773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1773_, 0, v___y_1758_);
if (v_isShared_1772_ == 0)
{
lean_ctor_set(v___x_1771_, 0, v___x_1773_);
v___x_1775_ = v___x_1771_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v___x_1773_);
v___x_1775_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
lean_object* v___x_1776_; 
v___x_1776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1776_, 0, v___x_1775_);
return v___x_1776_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___boxed(lean_object* v___y_1780_, lean_object* v_x_1781_, lean_object* v___y_1782_){
_start:
{
lean_object* v_res_1783_; 
v_res_1783_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7(v___y_1780_, v_x_1781_);
return v_res_1783_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8(lean_object* v_requestStream_1784_, lean_object* v___f_1785_, lean_object* v___y_1786_, lean_object* v_x_1787_){
_start:
{
if (lean_obj_tag(v_x_1787_) == 0)
{
lean_object* v_a_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1797_; 
lean_dec_ref(v___y_1786_);
lean_dec_ref(v___f_1785_);
lean_dec_ref(v_requestStream_1784_);
v_a_1789_ = lean_ctor_get(v_x_1787_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v_x_1787_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1791_ = v_x_1787_;
v_isShared_1792_ = v_isSharedCheck_1797_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_a_1789_);
lean_dec(v_x_1787_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1797_;
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
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v_a_1789_);
v___x_1794_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
lean_object* v___x_1795_; 
v___x_1795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1794_);
return v___x_1795_;
}
}
}
else
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1812_; 
v_a_1798_ = lean_ctor_get(v_x_1787_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v_x_1787_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1800_ = v_x_1787_;
v_isShared_1801_ = v_isSharedCheck_1812_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v_x_1787_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1812_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
uint8_t v___x_1802_; 
v___x_1802_ = lean_unbox(v_a_1798_);
if (v___x_1802_ == 0)
{
lean_object* v___x_1803_; lean_object* v___x_1804_; uint8_t v___x_1805_; lean_object* v___x_1806_; 
lean_del_object(v___x_1800_);
lean_dec_ref(v___y_1786_);
v___x_1803_ = lean_unsigned_to_nat(0u);
v___x_1804_ = l_Std_Http_Body_Stream_close(v_requestStream_1784_);
v___x_1805_ = lean_unbox(v_a_1798_);
lean_dec(v_a_1798_);
v___x_1806_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1803_, v___x_1805_, v___x_1804_, v___f_1785_);
return v___x_1806_;
}
else
{
lean_object* v___x_1807_; lean_object* v___x_1809_; 
lean_dec(v_a_1798_);
lean_dec_ref(v___f_1785_);
lean_dec_ref(v_requestStream_1784_);
v___x_1807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1807_, 0, v___y_1786_);
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 0, v___x_1807_);
v___x_1809_ = v___x_1800_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v___x_1807_);
v___x_1809_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
lean_object* v___x_1810_; 
v___x_1810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1809_);
return v___x_1810_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8___boxed(lean_object* v_requestStream_1813_, lean_object* v___f_1814_, lean_object* v___y_1815_, lean_object* v_x_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v_res_1818_; 
v_res_1818_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8(v_requestStream_1813_, v___f_1814_, v___y_1815_, v_x_1816_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9(lean_object* v_config_1819_, lean_object* v_machine_1820_, lean_object* v_a_1821_, uint8_t v_requiresData_1822_, lean_object* v_expectData_1823_, lean_object* v_pendingHead_1824_, lean_object* v_dateSecond_1825_, lean_object* v_x_1826_){
_start:
{
if (lean_obj_tag(v_x_1826_) == 0)
{
lean_object* v_a_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1836_; 
lean_dec(v_dateSecond_1825_);
lean_dec(v_pendingHead_1824_);
lean_dec(v_expectData_1823_);
lean_dec_ref(v_a_1821_);
lean_dec_ref(v_machine_1820_);
v_a_1828_ = lean_ctor_get(v_x_1826_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v_x_1826_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1830_ = v_x_1826_;
v_isShared_1831_ = v_isSharedCheck_1836_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_a_1828_);
lean_dec(v_x_1826_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1836_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1833_; 
if (v_isShared_1831_ == 0)
{
v___x_1833_ = v___x_1830_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_a_1828_);
v___x_1833_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
lean_object* v___x_1834_; 
v___x_1834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1834_, 0, v___x_1833_);
return v___x_1834_;
}
}
}
else
{
lean_object* v_a_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1851_; 
v_a_1837_ = lean_ctor_get(v_x_1826_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v_x_1826_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1839_ = v_x_1826_;
v_isShared_1840_ = v_isSharedCheck_1851_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_a_1837_);
lean_dec(v_x_1826_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1851_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v_keepAliveTimeout_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; uint8_t v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1848_; 
v_keepAliveTimeout_1841_ = lean_ctor_get(v_config_1819_, 5);
lean_inc_n(v_keepAliveTimeout_1841_, 2);
v___x_1842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1842_, 0, v_keepAliveTimeout_1841_);
v___x_1843_ = lean_box(0);
v___x_1844_ = 0;
v___x_1845_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_1845_, 0, v_machine_1820_);
lean_ctor_set(v___x_1845_, 1, v_a_1821_);
lean_ctor_set(v___x_1845_, 2, v___x_1842_);
lean_ctor_set(v___x_1845_, 3, v_keepAliveTimeout_1841_);
lean_ctor_set(v___x_1845_, 4, v___x_1843_);
lean_ctor_set(v___x_1845_, 5, v_a_1837_);
lean_ctor_set(v___x_1845_, 6, v___x_1843_);
lean_ctor_set(v___x_1845_, 7, v_expectData_1823_);
lean_ctor_set(v___x_1845_, 8, v_pendingHead_1824_);
lean_ctor_set(v___x_1845_, 9, v_dateSecond_1825_);
lean_ctor_set_uint8(v___x_1845_, sizeof(void*)*10, v_requiresData_1822_);
lean_ctor_set_uint8(v___x_1845_, sizeof(void*)*10 + 1, v___x_1844_);
v___x_1846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1845_);
if (v_isShared_1840_ == 0)
{
lean_ctor_set(v___x_1839_, 0, v___x_1846_);
v___x_1848_ = v___x_1839_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v___x_1846_);
v___x_1848_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
lean_object* v___x_1849_; 
v___x_1849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1848_);
return v___x_1849_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9___boxed(lean_object* v_config_1852_, lean_object* v_machine_1853_, lean_object* v_a_1854_, lean_object* v_requiresData_1855_, lean_object* v_expectData_1856_, lean_object* v_pendingHead_1857_, lean_object* v_dateSecond_1858_, lean_object* v_x_1859_, lean_object* v___y_1860_){
_start:
{
uint8_t v_requiresData_boxed_1861_; lean_object* v_res_1862_; 
v_requiresData_boxed_1861_ = lean_unbox(v_requiresData_1855_);
v_res_1862_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9(v_config_1852_, v_machine_1853_, v_a_1854_, v_requiresData_boxed_1861_, v_expectData_1856_, v_pendingHead_1857_, v_dateSecond_1858_, v_x_1859_);
lean_dec_ref(v_config_1852_);
return v_res_1862_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10(lean_object* v_config_1863_, lean_object* v_machine_1864_, uint8_t v_requiresData_1865_, lean_object* v_expectData_1866_, lean_object* v_pendingHead_1867_, lean_object* v_dateSecond_1868_, lean_object* v_x_1869_){
_start:
{
if (lean_obj_tag(v_x_1869_) == 0)
{
lean_object* v_a_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1879_; 
lean_dec(v_dateSecond_1868_);
lean_dec(v_pendingHead_1867_);
lean_dec(v_expectData_1866_);
lean_dec_ref(v_machine_1864_);
lean_dec_ref(v_config_1863_);
v_a_1871_ = lean_ctor_get(v_x_1869_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v_x_1869_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1873_ = v_x_1869_;
v_isShared_1874_ = v_isSharedCheck_1879_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_a_1871_);
lean_dec(v_x_1869_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1879_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1876_; 
if (v_isShared_1874_ == 0)
{
v___x_1876_ = v___x_1873_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v_a_1871_);
v___x_1876_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
lean_object* v___x_1877_; 
v___x_1877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1877_, 0, v___x_1876_);
return v___x_1877_;
}
}
}
else
{
lean_object* v_a_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1895_; 
v_a_1880_ = lean_ctor_get(v_x_1869_, 0);
v_isSharedCheck_1895_ = !lean_is_exclusive(v_x_1869_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1882_ = v_x_1869_;
v_isShared_1883_ = v_isSharedCheck_1895_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_a_1880_);
lean_dec(v_x_1869_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1895_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1884_; lean_object* v___f_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; uint8_t v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1891_; 
v___x_1884_ = lean_box(v_requiresData_1865_);
v___f_1885_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__9___boxed), 9, 7);
lean_closure_set(v___f_1885_, 0, v_config_1863_);
lean_closure_set(v___f_1885_, 1, v_machine_1864_);
lean_closure_set(v___f_1885_, 2, v_a_1880_);
lean_closure_set(v___f_1885_, 3, v___x_1884_);
lean_closure_set(v___f_1885_, 4, v_expectData_1866_);
lean_closure_set(v___f_1885_, 5, v_pendingHead_1867_);
lean_closure_set(v___f_1885_, 6, v_dateSecond_1868_);
v___x_1886_ = lean_box(0);
v___x_1887_ = lean_unsigned_to_nat(0u);
v___x_1888_ = 0;
v___x_1889_ = l_Std_CloseableChannel_new___redArg(v___x_1886_);
if (v_isShared_1883_ == 0)
{
lean_ctor_set(v___x_1882_, 0, v___x_1889_);
v___x_1891_ = v___x_1882_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v___x_1889_);
v___x_1891_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; 
v___x_1892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1891_);
v___x_1893_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1887_, v___x_1888_, v___x_1892_, v___f_1885_);
return v___x_1893_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10___boxed(lean_object* v_config_1896_, lean_object* v_machine_1897_, lean_object* v_requiresData_1898_, lean_object* v_expectData_1899_, lean_object* v_pendingHead_1900_, lean_object* v_dateSecond_1901_, lean_object* v_x_1902_, lean_object* v___y_1903_){
_start:
{
uint8_t v_requiresData_boxed_1904_; lean_object* v_res_1905_; 
v_requiresData_boxed_1904_ = lean_unbox(v_requiresData_1898_);
v_res_1905_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10(v_config_1896_, v_machine_1897_, v_requiresData_boxed_1904_, v_expectData_1899_, v_pendingHead_1900_, v_dateSecond_1901_, v_x_1902_);
return v_res_1905_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11(lean_object* v___f_1906_, lean_object* v_____r_1907_){
_start:
{
lean_object* v___x_1909_; uint8_t v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1909_ = lean_unsigned_to_nat(0u);
v___x_1910_ = 0;
v___x_1911_ = l_Std_Http_Body_mkStream();
v___x_1912_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1909_, v___x_1910_, v___x_1911_, v___f_1906_);
return v___x_1912_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11___boxed(lean_object* v___f_1913_, lean_object* v_____r_1914_, lean_object* v___y_1915_){
_start:
{
lean_object* v_res_1916_; 
v_res_1916_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11(v___f_1913_, v_____r_1914_);
return v_res_1916_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13(lean_object* v_close_1917_, lean_object* v_val_1918_, lean_object* v___f_1919_, lean_object* v___f_1920_, lean_object* v_x_1921_){
_start:
{
if (lean_obj_tag(v_x_1921_) == 0)
{
lean_object* v_a_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1931_; 
lean_dec_ref(v___f_1920_);
lean_dec_ref(v___f_1919_);
lean_dec(v_val_1918_);
lean_dec_ref(v_close_1917_);
v_a_1923_ = lean_ctor_get(v_x_1921_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v_x_1921_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1925_ = v_x_1921_;
v_isShared_1926_ = v_isSharedCheck_1931_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_a_1923_);
lean_dec(v_x_1921_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1931_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v___x_1928_; 
if (v_isShared_1926_ == 0)
{
v___x_1928_ = v___x_1925_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_a_1923_);
v___x_1928_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
lean_object* v___x_1929_; 
v___x_1929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1928_);
return v___x_1929_;
}
}
}
else
{
lean_object* v_a_1932_; uint8_t v___x_1933_; 
v_a_1932_ = lean_ctor_get(v_x_1921_, 0);
lean_inc(v_a_1932_);
lean_dec_ref_known(v_x_1921_, 1);
v___x_1933_ = lean_unbox(v_a_1932_);
if (v___x_1933_ == 0)
{
lean_object* v___x_1934_; lean_object* v___x_1935_; uint8_t v___x_1936_; lean_object* v___x_1937_; 
lean_dec_ref(v___f_1920_);
v___x_1934_ = lean_unsigned_to_nat(0u);
v___x_1935_ = lean_apply_2(v_close_1917_, v_val_1918_, lean_box(0));
v___x_1936_ = lean_unbox(v_a_1932_);
lean_dec(v_a_1932_);
v___x_1937_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1934_, v___x_1936_, v___x_1935_, v___f_1919_);
return v___x_1937_;
}
else
{
lean_object* v___x_1938_; lean_object* v___x_1939_; 
lean_dec(v_a_1932_);
lean_dec_ref(v___f_1919_);
lean_dec(v_val_1918_);
lean_dec_ref(v_close_1917_);
v___x_1938_ = lean_box(0);
v___x_1939_ = lean_apply_2(v___f_1920_, v___x_1938_, lean_box(0));
return v___x_1939_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13___boxed(lean_object* v_close_1940_, lean_object* v_val_1941_, lean_object* v___f_1942_, lean_object* v___f_1943_, lean_object* v_x_1944_, lean_object* v___y_1945_){
_start:
{
lean_object* v_res_1946_; 
v_res_1946_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13(v_close_1940_, v_val_1941_, v___f_1942_, v___f_1943_, v_x_1944_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12(lean_object* v_respStream_1947_, lean_object* v_inst_1948_, lean_object* v___f_1949_, lean_object* v___f_1950_, lean_object* v_____r_1951_){
_start:
{
if (lean_obj_tag(v_respStream_1947_) == 1)
{
lean_object* v_val_1953_; lean_object* v_close_1954_; lean_object* v_isClosed_1955_; lean_object* v___f_1956_; lean_object* v___x_1957_; uint8_t v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; 
v_val_1953_ = lean_ctor_get(v_respStream_1947_, 0);
lean_inc_n(v_val_1953_, 2);
lean_dec_ref_known(v_respStream_1947_, 1);
v_close_1954_ = lean_ctor_get(v_inst_1948_, 1);
lean_inc_ref(v_close_1954_);
v_isClosed_1955_ = lean_ctor_get(v_inst_1948_, 2);
lean_inc_ref(v_isClosed_1955_);
lean_dec_ref(v_inst_1948_);
v___f_1956_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__13___boxed), 6, 4);
lean_closure_set(v___f_1956_, 0, v_close_1954_);
lean_closure_set(v___f_1956_, 1, v_val_1953_);
lean_closure_set(v___f_1956_, 2, v___f_1949_);
lean_closure_set(v___f_1956_, 3, v___f_1950_);
v___x_1957_ = lean_unsigned_to_nat(0u);
v___x_1958_ = 0;
v___x_1959_ = lean_apply_2(v_isClosed_1955_, v_val_1953_, lean_box(0));
v___x_1960_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_1957_, v___x_1958_, v___x_1959_, v___f_1956_);
return v___x_1960_;
}
else
{
lean_object* v___x_1961_; lean_object* v___x_1962_; 
lean_dec_ref(v___f_1949_);
lean_dec_ref(v_inst_1948_);
lean_dec(v_respStream_1947_);
v___x_1961_ = lean_box(0);
v___x_1962_ = lean_apply_2(v___f_1950_, v___x_1961_, lean_box(0));
return v___x_1962_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12___boxed(lean_object* v_respStream_1963_, lean_object* v_inst_1964_, lean_object* v___f_1965_, lean_object* v___f_1966_, lean_object* v_____r_1967_, lean_object* v___y_1968_){
_start:
{
lean_object* v_res_1969_; 
v_res_1969_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12(v_respStream_1963_, v_inst_1964_, v___f_1965_, v___f_1966_, v_____r_1967_);
return v_res_1969_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16(lean_object* v_requestStream_1970_, lean_object* v_keepAliveTimeout_1971_, lean_object* v_currentTimeout_1972_, lean_object* v_headerTimeout_1973_, lean_object* v_response_1974_, lean_object* v_respStream_1975_, uint8_t v_requiresData_1976_, lean_object* v_expectData_1977_, uint8_t v_handlerDispatched_1978_, lean_object* v_pendingHead_1979_, lean_object* v_dateSecond_1980_, lean_object* v_x_1981_){
_start:
{
if (lean_obj_tag(v_x_1981_) == 0)
{
lean_object* v_a_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_1991_; 
lean_dec(v_dateSecond_1980_);
lean_dec(v_pendingHead_1979_);
lean_dec(v_expectData_1977_);
lean_dec(v_respStream_1975_);
lean_dec_ref(v_response_1974_);
lean_dec(v_headerTimeout_1973_);
lean_dec(v_currentTimeout_1972_);
lean_dec(v_keepAliveTimeout_1971_);
lean_dec_ref(v_requestStream_1970_);
v_a_1983_ = lean_ctor_get(v_x_1981_, 0);
v_isSharedCheck_1991_ = !lean_is_exclusive(v_x_1981_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1985_ = v_x_1981_;
v_isShared_1986_ = v_isSharedCheck_1991_;
goto v_resetjp_1984_;
}
else
{
lean_inc(v_a_1983_);
lean_dec(v_x_1981_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_1991_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v___x_1988_; 
if (v_isShared_1986_ == 0)
{
v___x_1988_ = v___x_1985_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v_a_1983_);
v___x_1988_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
lean_object* v___x_1989_; 
v___x_1989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1989_, 0, v___x_1988_);
return v___x_1989_;
}
}
}
else
{
lean_object* v_a_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2013_; 
v_a_1992_ = lean_ctor_get(v_x_1981_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v_x_1981_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_1994_ = v_x_1981_;
v_isShared_1995_ = v_isSharedCheck_2013_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_a_1992_);
lean_dec(v_x_1981_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2013_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v_snd_1996_; uint8_t v___x_1997_; 
v_snd_1996_ = lean_ctor_get(v_a_1992_, 1);
v___x_1997_ = lean_unbox(v_snd_1996_);
if (v___x_1997_ == 0)
{
lean_object* v_fst_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2002_; 
v_fst_1998_ = lean_ctor_get(v_a_1992_, 0);
lean_inc(v_fst_1998_);
lean_dec(v_a_1992_);
v___x_1999_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_1999_, 0, v_fst_1998_);
lean_ctor_set(v___x_1999_, 1, v_requestStream_1970_);
lean_ctor_set(v___x_1999_, 2, v_keepAliveTimeout_1971_);
lean_ctor_set(v___x_1999_, 3, v_currentTimeout_1972_);
lean_ctor_set(v___x_1999_, 4, v_headerTimeout_1973_);
lean_ctor_set(v___x_1999_, 5, v_response_1974_);
lean_ctor_set(v___x_1999_, 6, v_respStream_1975_);
lean_ctor_set(v___x_1999_, 7, v_expectData_1977_);
lean_ctor_set(v___x_1999_, 8, v_pendingHead_1979_);
lean_ctor_set(v___x_1999_, 9, v_dateSecond_1980_);
lean_ctor_set_uint8(v___x_1999_, sizeof(void*)*10, v_requiresData_1976_);
lean_ctor_set_uint8(v___x_1999_, sizeof(void*)*10 + 1, v_handlerDispatched_1978_);
v___x_2000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2000_, 0, v___x_1999_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 0, v___x_2000_);
v___x_2002_ = v___x_1994_;
goto v_reusejp_2001_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v___x_2000_);
v___x_2002_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2001_;
}
v_reusejp_2001_:
{
lean_object* v___x_2003_; 
v___x_2003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2003_, 0, v___x_2002_);
return v___x_2003_;
}
}
else
{
lean_object* v_fst_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2010_; 
lean_dec(v_pendingHead_1979_);
v_fst_2005_ = lean_ctor_get(v_a_1992_, 0);
lean_inc(v_fst_2005_);
lean_dec(v_a_1992_);
v___x_2006_ = lean_box(0);
v___x_2007_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_2007_, 0, v_fst_2005_);
lean_ctor_set(v___x_2007_, 1, v_requestStream_1970_);
lean_ctor_set(v___x_2007_, 2, v_keepAliveTimeout_1971_);
lean_ctor_set(v___x_2007_, 3, v_currentTimeout_1972_);
lean_ctor_set(v___x_2007_, 4, v_headerTimeout_1973_);
lean_ctor_set(v___x_2007_, 5, v_response_1974_);
lean_ctor_set(v___x_2007_, 6, v_respStream_1975_);
lean_ctor_set(v___x_2007_, 7, v_expectData_1977_);
lean_ctor_set(v___x_2007_, 8, v___x_2006_);
lean_ctor_set(v___x_2007_, 9, v_dateSecond_1980_);
lean_ctor_set_uint8(v___x_2007_, sizeof(void*)*10, v_requiresData_1976_);
lean_ctor_set_uint8(v___x_2007_, sizeof(void*)*10 + 1, v_handlerDispatched_1978_);
v___x_2008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2008_, 0, v___x_2007_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 0, v___x_2008_);
v___x_2010_ = v___x_1994_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v___x_2008_);
v___x_2010_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
lean_object* v___x_2011_; 
v___x_2011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2011_, 0, v___x_2010_);
return v___x_2011_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16___boxed(lean_object* v_requestStream_2014_, lean_object* v_keepAliveTimeout_2015_, lean_object* v_currentTimeout_2016_, lean_object* v_headerTimeout_2017_, lean_object* v_response_2018_, lean_object* v_respStream_2019_, lean_object* v_requiresData_2020_, lean_object* v_expectData_2021_, lean_object* v_handlerDispatched_2022_, lean_object* v_pendingHead_2023_, lean_object* v_dateSecond_2024_, lean_object* v_x_2025_, lean_object* v___y_2026_){
_start:
{
uint8_t v_requiresData_boxed_2027_; uint8_t v_handlerDispatched_boxed_2028_; lean_object* v_res_2029_; 
v_requiresData_boxed_2027_ = lean_unbox(v_requiresData_2020_);
v_handlerDispatched_boxed_2028_ = lean_unbox(v_handlerDispatched_2022_);
v_res_2029_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16(v_requestStream_2014_, v_keepAliveTimeout_2015_, v_currentTimeout_2016_, v_headerTimeout_2017_, v_response_2018_, v_respStream_2019_, v_requiresData_boxed_2027_, v_expectData_2021_, v_handlerDispatched_boxed_2028_, v_pendingHead_2023_, v_dateSecond_2024_, v_x_2025_);
return v_res_2029_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14(lean_object* v_config_2044_, lean_object* v_inst_2045_, lean_object* v___f_2046_, lean_object* v_handler_2047_, lean_object* v___f_2048_, lean_object* v_inst_2049_, lean_object* v___f_2050_, lean_object* v_connectionContext_2051_, lean_object* v_a_2052_, lean_object* v_x_2053_, lean_object* v___y_2054_){
_start:
{
switch(lean_obj_tag(v_a_2052_))
{
case 0:
{
lean_object* v_head_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2100_; 
lean_dec_ref(v_connectionContext_2051_);
lean_dec_ref(v___f_2050_);
lean_dec_ref(v_inst_2049_);
lean_dec_ref(v___f_2048_);
lean_dec(v_handler_2047_);
lean_dec_ref(v___f_2046_);
lean_dec_ref(v_inst_2045_);
v_head_2056_ = lean_ctor_get(v_a_2052_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v_a_2052_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2058_ = v_a_2052_;
v_isShared_2059_ = v_isSharedCheck_2100_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_head_2056_);
lean_dec(v_a_2052_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2100_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v_machine_2060_; lean_object* v_requestStream_2061_; lean_object* v_response_2062_; lean_object* v_respStream_2063_; uint8_t v_requiresData_2064_; lean_object* v_expectData_2065_; uint8_t v_handlerDispatched_2066_; lean_object* v_dateSecond_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2095_; 
v_machine_2060_ = lean_ctor_get(v___y_2054_, 0);
v_requestStream_2061_ = lean_ctor_get(v___y_2054_, 1);
v_response_2062_ = lean_ctor_get(v___y_2054_, 5);
v_respStream_2063_ = lean_ctor_get(v___y_2054_, 6);
v_requiresData_2064_ = lean_ctor_get_uint8(v___y_2054_, sizeof(void*)*10);
v_expectData_2065_ = lean_ctor_get(v___y_2054_, 7);
v_handlerDispatched_2066_ = lean_ctor_get_uint8(v___y_2054_, sizeof(void*)*10 + 1);
v_dateSecond_2067_ = lean_ctor_get(v___y_2054_, 9);
v_isSharedCheck_2095_ = !lean_is_exclusive(v___y_2054_);
if (v_isSharedCheck_2095_ == 0)
{
lean_object* v_unused_2096_; lean_object* v_unused_2097_; lean_object* v_unused_2098_; lean_object* v_unused_2099_; 
v_unused_2096_ = lean_ctor_get(v___y_2054_, 8);
lean_dec(v_unused_2096_);
v_unused_2097_ = lean_ctor_get(v___y_2054_, 4);
lean_dec(v_unused_2097_);
v_unused_2098_ = lean_ctor_get(v___y_2054_, 3);
lean_dec(v_unused_2098_);
v_unused_2099_ = lean_ctor_get(v___y_2054_, 2);
lean_dec(v_unused_2099_);
v___x_2069_ = v___y_2054_;
v_isShared_2070_ = v_isSharedCheck_2095_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_dateSecond_2067_);
lean_inc(v_expectData_2065_);
lean_inc(v_respStream_2063_);
lean_inc(v_response_2062_);
lean_inc(v_requestStream_2061_);
lean_inc(v_machine_2060_);
lean_dec(v___y_2054_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2095_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v_lingeringTimeout_2071_; lean_object* v___x_2072_; lean_object* v___x_2074_; 
v_lingeringTimeout_2071_ = lean_ctor_get(v_config_2044_, 4);
lean_inc(v_lingeringTimeout_2071_);
lean_dec_ref(v_config_2044_);
v___x_2072_ = lean_box(0);
lean_inc(v_head_2056_);
if (v_isShared_2059_ == 0)
{
lean_ctor_set_tag(v___x_2058_, 1);
v___x_2074_ = v___x_2058_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v_head_2056_);
v___x_2074_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
lean_object* v___x_2076_; 
lean_inc_ref(v_requestStream_2061_);
if (v_isShared_2070_ == 0)
{
lean_ctor_set(v___x_2069_, 8, v___x_2074_);
lean_ctor_set(v___x_2069_, 4, v___x_2072_);
lean_ctor_set(v___x_2069_, 3, v_lingeringTimeout_2071_);
lean_ctor_set(v___x_2069_, 2, v___x_2072_);
v___x_2076_ = v___x_2069_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v_machine_2060_);
lean_ctor_set(v_reuseFailAlloc_2093_, 1, v_requestStream_2061_);
lean_ctor_set(v_reuseFailAlloc_2093_, 2, v___x_2072_);
lean_ctor_set(v_reuseFailAlloc_2093_, 3, v_lingeringTimeout_2071_);
lean_ctor_set(v_reuseFailAlloc_2093_, 4, v___x_2072_);
lean_ctor_set(v_reuseFailAlloc_2093_, 5, v_response_2062_);
lean_ctor_set(v_reuseFailAlloc_2093_, 6, v_respStream_2063_);
lean_ctor_set(v_reuseFailAlloc_2093_, 7, v_expectData_2065_);
lean_ctor_set(v_reuseFailAlloc_2093_, 8, v___x_2074_);
lean_ctor_set(v_reuseFailAlloc_2093_, 9, v_dateSecond_2067_);
lean_ctor_set_uint8(v_reuseFailAlloc_2093_, sizeof(void*)*10, v_requiresData_2064_);
lean_ctor_set_uint8(v_reuseFailAlloc_2093_, sizeof(void*)*10 + 1, v_handlerDispatched_2066_);
v___x_2076_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
uint8_t v___x_2077_; uint8_t v___x_2078_; lean_object* v___x_2079_; 
v___x_2077_ = 0;
v___x_2078_ = 1;
v___x_2079_ = l_Std_Http_Protocol_H1_Message_Head_getSize(v___x_2077_, v_head_2056_, v___x_2078_);
lean_dec(v_head_2056_);
if (lean_obj_tag(v___x_2079_) == 1)
{
lean_object* v___f_2080_; lean_object* v___f_2081_; lean_object* v___x_2082_; uint8_t v___x_2083_; lean_object* v___x_2084_; lean_object* v___f_2085_; lean_object* v___f_2086_; lean_object* v___x_5100__overap_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; 
v___f_2080_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2080_, 0, v___x_2076_);
v___f_2081_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2081_, 0, v___x_2079_);
v___x_2082_ = lean_unsigned_to_nat(0u);
v___x_2083_ = 0;
v___x_2084_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2085_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2086_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_5100__overap_2087_ = l_Std_Mutex_atomically___redArg(v___x_2084_, v___f_2085_, v___f_2086_, v_requestStream_2061_, v___f_2081_);
v___x_2088_ = lean_apply_1(v___x_5100__overap_2087_, lean_box(0));
v___x_2089_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2082_, v___x_2083_, v___x_2088_, v___f_2080_);
return v___x_2089_;
}
else
{
lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; 
lean_dec(v___x_2079_);
lean_dec_ref(v_requestStream_2061_);
v___x_2090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2076_);
v___x_2091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2090_);
v___x_2092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2091_);
return v___x_2092_;
}
}
}
}
}
}
case 1:
{
lean_object* v_size_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2129_; 
lean_dec_ref(v_connectionContext_2051_);
lean_dec_ref(v___f_2050_);
lean_dec_ref(v_inst_2049_);
lean_dec_ref(v___f_2048_);
lean_dec(v_handler_2047_);
lean_dec_ref(v___f_2046_);
lean_dec_ref(v_inst_2045_);
lean_dec_ref(v_config_2044_);
v_size_2101_ = lean_ctor_get(v_a_2052_, 0);
v_isSharedCheck_2129_ = !lean_is_exclusive(v_a_2052_);
if (v_isSharedCheck_2129_ == 0)
{
v___x_2103_ = v_a_2052_;
v_isShared_2104_ = v_isSharedCheck_2129_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_size_2101_);
lean_dec(v_a_2052_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2129_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v_machine_2105_; lean_object* v_requestStream_2106_; lean_object* v_keepAliveTimeout_2107_; lean_object* v_currentTimeout_2108_; lean_object* v_headerTimeout_2109_; lean_object* v_response_2110_; lean_object* v_respStream_2111_; uint8_t v_handlerDispatched_2112_; lean_object* v_pendingHead_2113_; lean_object* v_dateSecond_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2127_; 
v_machine_2105_ = lean_ctor_get(v___y_2054_, 0);
v_requestStream_2106_ = lean_ctor_get(v___y_2054_, 1);
v_keepAliveTimeout_2107_ = lean_ctor_get(v___y_2054_, 2);
v_currentTimeout_2108_ = lean_ctor_get(v___y_2054_, 3);
v_headerTimeout_2109_ = lean_ctor_get(v___y_2054_, 4);
v_response_2110_ = lean_ctor_get(v___y_2054_, 5);
v_respStream_2111_ = lean_ctor_get(v___y_2054_, 6);
v_handlerDispatched_2112_ = lean_ctor_get_uint8(v___y_2054_, sizeof(void*)*10 + 1);
v_pendingHead_2113_ = lean_ctor_get(v___y_2054_, 8);
v_dateSecond_2114_ = lean_ctor_get(v___y_2054_, 9);
v_isSharedCheck_2127_ = !lean_is_exclusive(v___y_2054_);
if (v_isSharedCheck_2127_ == 0)
{
lean_object* v_unused_2128_; 
v_unused_2128_ = lean_ctor_get(v___y_2054_, 7);
lean_dec(v_unused_2128_);
v___x_2116_ = v___y_2054_;
v_isShared_2117_ = v_isSharedCheck_2127_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_dateSecond_2114_);
lean_inc(v_pendingHead_2113_);
lean_inc(v_respStream_2111_);
lean_inc(v_response_2110_);
lean_inc(v_headerTimeout_2109_);
lean_inc(v_currentTimeout_2108_);
lean_inc(v_keepAliveTimeout_2107_);
lean_inc(v_requestStream_2106_);
lean_inc(v_machine_2105_);
lean_dec(v___y_2054_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2127_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
uint8_t v___x_2118_; lean_object* v___x_2120_; 
v___x_2118_ = 1;
if (v_isShared_2117_ == 0)
{
lean_ctor_set(v___x_2116_, 7, v_size_2101_);
v___x_2120_ = v___x_2116_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v_machine_2105_);
lean_ctor_set(v_reuseFailAlloc_2126_, 1, v_requestStream_2106_);
lean_ctor_set(v_reuseFailAlloc_2126_, 2, v_keepAliveTimeout_2107_);
lean_ctor_set(v_reuseFailAlloc_2126_, 3, v_currentTimeout_2108_);
lean_ctor_set(v_reuseFailAlloc_2126_, 4, v_headerTimeout_2109_);
lean_ctor_set(v_reuseFailAlloc_2126_, 5, v_response_2110_);
lean_ctor_set(v_reuseFailAlloc_2126_, 6, v_respStream_2111_);
lean_ctor_set(v_reuseFailAlloc_2126_, 7, v_size_2101_);
lean_ctor_set(v_reuseFailAlloc_2126_, 8, v_pendingHead_2113_);
lean_ctor_set(v_reuseFailAlloc_2126_, 9, v_dateSecond_2114_);
lean_ctor_set_uint8(v_reuseFailAlloc_2126_, sizeof(void*)*10 + 1, v_handlerDispatched_2112_);
v___x_2120_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
lean_object* v___x_2122_; 
lean_ctor_set_uint8(v___x_2120_, sizeof(void*)*10, v___x_2118_);
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 0, v___x_2120_);
v___x_2122_ = v___x_2103_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v___x_2120_);
v___x_2122_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2122_);
v___x_2124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2123_);
return v___x_2124_;
}
}
}
}
}
case 2:
{
lean_object* v_err_2130_; lean_object* v_onFailure_2131_; lean_object* v___f_2132_; lean_object* v___y_2134_; 
lean_dec_ref(v_connectionContext_2051_);
lean_dec_ref(v___f_2050_);
lean_dec_ref(v_inst_2049_);
lean_dec_ref(v___f_2048_);
lean_dec_ref(v_config_2044_);
v_err_2130_ = lean_ctor_get(v_a_2052_, 0);
lean_inc(v_err_2130_);
lean_dec_ref_known(v_a_2052_, 1);
v_onFailure_2131_ = lean_ctor_get(v_inst_2045_, 2);
lean_inc_ref(v_onFailure_2131_);
lean_dec_ref(v_inst_2045_);
v___f_2132_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___boxed), 4, 2);
lean_closure_set(v___f_2132_, 0, v___y_2054_);
lean_closure_set(v___f_2132_, 1, v___f_2046_);
switch(lean_obj_tag(v_err_2130_))
{
case 0:
{
lean_object* v___x_2140_; 
v___x_2140_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__0));
v___y_2134_ = v___x_2140_;
goto v___jp_2133_;
}
case 1:
{
lean_object* v___x_2141_; 
v___x_2141_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__1));
v___y_2134_ = v___x_2141_;
goto v___jp_2133_;
}
case 2:
{
lean_object* v___x_2142_; 
v___x_2142_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__2));
v___y_2134_ = v___x_2142_;
goto v___jp_2133_;
}
case 3:
{
lean_object* v___x_2143_; 
v___x_2143_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__3));
v___y_2134_ = v___x_2143_;
goto v___jp_2133_;
}
case 4:
{
lean_object* v___x_2144_; 
v___x_2144_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__4));
v___y_2134_ = v___x_2144_;
goto v___jp_2133_;
}
case 5:
{
lean_object* v___x_2145_; 
v___x_2145_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__5));
v___y_2134_ = v___x_2145_;
goto v___jp_2133_;
}
case 6:
{
lean_object* v___x_2146_; 
v___x_2146_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__6));
v___y_2134_ = v___x_2146_;
goto v___jp_2133_;
}
case 7:
{
lean_object* v___x_2147_; 
v___x_2147_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__7));
v___y_2134_ = v___x_2147_;
goto v___jp_2133_;
}
case 8:
{
lean_object* v___x_2148_; 
v___x_2148_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__8));
v___y_2134_ = v___x_2148_;
goto v___jp_2133_;
}
case 9:
{
lean_object* v___x_2149_; 
v___x_2149_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__9));
v___y_2134_ = v___x_2149_;
goto v___jp_2133_;
}
case 10:
{
lean_object* v___x_2150_; 
v___x_2150_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__10));
v___y_2134_ = v___x_2150_;
goto v___jp_2133_;
}
case 11:
{
lean_object* v___x_2151_; 
v___x_2151_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__11));
v___y_2134_ = v___x_2151_;
goto v___jp_2133_;
}
case 12:
{
lean_object* v___x_2152_; 
v___x_2152_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__12));
v___y_2134_ = v___x_2152_;
goto v___jp_2133_;
}
default: 
{
lean_object* v_message_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
v_message_2153_ = lean_ctor_get(v_err_2130_, 0);
lean_inc_ref(v_message_2153_);
lean_dec_ref_known(v_err_2130_, 1);
v___x_2154_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___closed__13));
v___x_2155_ = lean_string_append(v___x_2154_, v_message_2153_);
lean_dec_ref(v_message_2153_);
v___y_2134_ = v___x_2155_;
goto v___jp_2133_;
}
}
v___jp_2133_:
{
lean_object* v___x_2135_; lean_object* v___x_2136_; uint8_t v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2135_ = lean_mk_io_user_error(v___y_2134_);
v___x_2136_ = lean_unsigned_to_nat(0u);
v___x_2137_ = 0;
v___x_2138_ = lean_apply_3(v_onFailure_2131_, v_handler_2047_, v___x_2135_, lean_box(0));
v___x_2139_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2136_, v___x_2137_, v___x_2138_, v___f_2132_);
return v___x_2139_;
}
}
case 4:
{
lean_object* v_requestStream_2156_; lean_object* v___f_2157_; lean_object* v___f_2158_; lean_object* v___x_2159_; uint8_t v___x_2160_; lean_object* v___x_2161_; lean_object* v___f_2162_; lean_object* v___f_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_5159__overap_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
lean_dec_ref(v_connectionContext_2051_);
lean_dec_ref(v___f_2050_);
lean_dec_ref(v_inst_2049_);
lean_dec(v_handler_2047_);
lean_dec_ref(v___f_2046_);
lean_dec_ref(v_inst_2045_);
lean_dec_ref(v_config_2044_);
v_requestStream_2156_ = lean_ctor_get(v___y_2054_, 1);
lean_inc_ref_n(v_requestStream_2156_, 2);
lean_inc_ref(v___y_2054_);
v___f_2157_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__7___boxed), 3, 1);
lean_closure_set(v___f_2157_, 0, v___y_2054_);
v___f_2158_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_2158_, 0, v_requestStream_2156_);
lean_closure_set(v___f_2158_, 1, v___f_2157_);
lean_closure_set(v___f_2158_, 2, v___y_2054_);
v___x_2159_ = lean_unsigned_to_nat(0u);
v___x_2160_ = 0;
v___x_2161_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2162_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2163_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_2164_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_2165_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2165_, 0, lean_box(0));
lean_closure_set(v___x_2165_, 1, lean_box(0));
lean_closure_set(v___x_2165_, 2, v___x_2161_);
lean_closure_set(v___x_2165_, 3, lean_box(0));
lean_closure_set(v___x_2165_, 4, lean_box(0));
lean_closure_set(v___x_2165_, 5, v___x_2164_);
lean_closure_set(v___x_2165_, 6, v___f_2048_);
v___x_5159__overap_2166_ = l_Std_Mutex_atomically___redArg(v___x_2161_, v___f_2162_, v___f_2163_, v_requestStream_2156_, v___x_2165_);
v___x_2167_ = lean_apply_1(v___x_5159__overap_2166_, lean_box(0));
v___x_2168_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2159_, v___x_2160_, v___x_2167_, v___f_2158_);
return v___x_2168_;
}
case 6:
{
lean_object* v_machine_2169_; lean_object* v_requestStream_2170_; lean_object* v_respStream_2171_; uint8_t v_requiresData_2172_; lean_object* v_expectData_2173_; lean_object* v_pendingHead_2174_; lean_object* v_dateSecond_2175_; lean_object* v___x_2176_; lean_object* v___f_2177_; lean_object* v___f_2178_; lean_object* v___f_2179_; lean_object* v___f_2180_; lean_object* v___f_2181_; lean_object* v___f_2182_; lean_object* v___x_2183_; uint8_t v___x_2184_; lean_object* v___x_2185_; lean_object* v___f_2186_; lean_object* v___f_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_5184__overap_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
lean_dec_ref(v_connectionContext_2051_);
lean_dec_ref(v___f_2048_);
lean_dec(v_handler_2047_);
lean_dec_ref(v___f_2046_);
lean_dec_ref(v_inst_2045_);
v_machine_2169_ = lean_ctor_get(v___y_2054_, 0);
lean_inc_ref(v_machine_2169_);
v_requestStream_2170_ = lean_ctor_get(v___y_2054_, 1);
lean_inc_ref_n(v_requestStream_2170_, 2);
v_respStream_2171_ = lean_ctor_get(v___y_2054_, 6);
lean_inc(v_respStream_2171_);
v_requiresData_2172_ = lean_ctor_get_uint8(v___y_2054_, sizeof(void*)*10);
v_expectData_2173_ = lean_ctor_get(v___y_2054_, 7);
lean_inc(v_expectData_2173_);
v_pendingHead_2174_ = lean_ctor_get(v___y_2054_, 8);
lean_inc(v_pendingHead_2174_);
v_dateSecond_2175_ = lean_ctor_get(v___y_2054_, 9);
lean_inc(v_dateSecond_2175_);
lean_dec_ref(v___y_2054_);
v___x_2176_ = lean_box(v_requiresData_2172_);
v___f_2177_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__10___boxed), 8, 6);
lean_closure_set(v___f_2177_, 0, v_config_2044_);
lean_closure_set(v___f_2177_, 1, v_machine_2169_);
lean_closure_set(v___f_2177_, 2, v___x_2176_);
lean_closure_set(v___f_2177_, 3, v_expectData_2173_);
lean_closure_set(v___f_2177_, 4, v_pendingHead_2174_);
lean_closure_set(v___f_2177_, 5, v_dateSecond_2175_);
v___f_2178_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__11___boxed), 3, 1);
lean_closure_set(v___f_2178_, 0, v___f_2177_);
lean_inc_ref(v___f_2178_);
v___f_2179_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2179_, 0, v___f_2178_);
v___f_2180_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__12___boxed), 6, 4);
lean_closure_set(v___f_2180_, 0, v_respStream_2171_);
lean_closure_set(v___f_2180_, 1, v_inst_2049_);
lean_closure_set(v___f_2180_, 2, v___f_2179_);
lean_closure_set(v___f_2180_, 3, v___f_2178_);
lean_inc_ref(v___f_2180_);
v___f_2181_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_2181_, 0, v___f_2180_);
v___f_2182_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__5___boxed), 5, 3);
lean_closure_set(v___f_2182_, 0, v_requestStream_2170_);
lean_closure_set(v___f_2182_, 1, v___f_2181_);
lean_closure_set(v___f_2182_, 2, v___f_2180_);
v___x_2183_ = lean_unsigned_to_nat(0u);
v___x_2184_ = 0;
v___x_2185_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2186_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2187_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_2188_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_2189_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2189_, 0, lean_box(0));
lean_closure_set(v___x_2189_, 1, lean_box(0));
lean_closure_set(v___x_2189_, 2, v___x_2185_);
lean_closure_set(v___x_2189_, 3, lean_box(0));
lean_closure_set(v___x_2189_, 4, lean_box(0));
lean_closure_set(v___x_2189_, 5, v___x_2188_);
lean_closure_set(v___x_2189_, 6, v___f_2050_);
v___x_5184__overap_2190_ = l_Std_Mutex_atomically___redArg(v___x_2185_, v___f_2186_, v___f_2187_, v_requestStream_2170_, v___x_2189_);
v___x_2191_ = lean_apply_1(v___x_5184__overap_2190_, lean_box(0));
v___x_2192_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2183_, v___x_2184_, v___x_2191_, v___f_2182_);
return v___x_2192_;
}
case 7:
{
lean_object* v_pendingHead_2193_; 
lean_dec_ref(v___f_2050_);
lean_dec_ref(v_inst_2049_);
lean_dec_ref(v___f_2048_);
lean_dec_ref(v___f_2046_);
v_pendingHead_2193_ = lean_ctor_get(v___y_2054_, 8);
if (lean_obj_tag(v_pendingHead_2193_) == 1)
{
lean_object* v_machine_2194_; lean_object* v_requestStream_2195_; lean_object* v_keepAliveTimeout_2196_; lean_object* v_currentTimeout_2197_; lean_object* v_headerTimeout_2198_; lean_object* v_response_2199_; lean_object* v_respStream_2200_; uint8_t v_requiresData_2201_; lean_object* v_expectData_2202_; uint8_t v_handlerDispatched_2203_; lean_object* v_dateSecond_2204_; lean_object* v_val_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___f_2208_; lean_object* v___x_2209_; uint8_t v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
lean_inc_ref(v_pendingHead_2193_);
v_machine_2194_ = lean_ctor_get(v___y_2054_, 0);
lean_inc_ref(v_machine_2194_);
v_requestStream_2195_ = lean_ctor_get(v___y_2054_, 1);
lean_inc_ref(v_requestStream_2195_);
v_keepAliveTimeout_2196_ = lean_ctor_get(v___y_2054_, 2);
lean_inc(v_keepAliveTimeout_2196_);
v_currentTimeout_2197_ = lean_ctor_get(v___y_2054_, 3);
lean_inc(v_currentTimeout_2197_);
v_headerTimeout_2198_ = lean_ctor_get(v___y_2054_, 4);
lean_inc(v_headerTimeout_2198_);
v_response_2199_ = lean_ctor_get(v___y_2054_, 5);
lean_inc_ref(v_response_2199_);
v_respStream_2200_ = lean_ctor_get(v___y_2054_, 6);
lean_inc(v_respStream_2200_);
v_requiresData_2201_ = lean_ctor_get_uint8(v___y_2054_, sizeof(void*)*10);
v_expectData_2202_ = lean_ctor_get(v___y_2054_, 7);
lean_inc(v_expectData_2202_);
v_handlerDispatched_2203_ = lean_ctor_get_uint8(v___y_2054_, sizeof(void*)*10 + 1);
v_dateSecond_2204_ = lean_ctor_get(v___y_2054_, 9);
lean_inc(v_dateSecond_2204_);
lean_dec_ref(v___y_2054_);
v_val_2205_ = lean_ctor_get(v_pendingHead_2193_, 0);
lean_inc(v_val_2205_);
v___x_2206_ = lean_box(v_requiresData_2201_);
v___x_2207_ = lean_box(v_handlerDispatched_2203_);
v___f_2208_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__16___boxed), 13, 11);
lean_closure_set(v___f_2208_, 0, v_requestStream_2195_);
lean_closure_set(v___f_2208_, 1, v_keepAliveTimeout_2196_);
lean_closure_set(v___f_2208_, 2, v_currentTimeout_2197_);
lean_closure_set(v___f_2208_, 3, v_headerTimeout_2198_);
lean_closure_set(v___f_2208_, 4, v_response_2199_);
lean_closure_set(v___f_2208_, 5, v_respStream_2200_);
lean_closure_set(v___f_2208_, 6, v___x_2206_);
lean_closure_set(v___f_2208_, 7, v_expectData_2202_);
lean_closure_set(v___f_2208_, 8, v___x_2207_);
lean_closure_set(v___f_2208_, 9, v_pendingHead_2193_);
lean_closure_set(v___f_2208_, 10, v_dateSecond_2204_);
v___x_2209_ = lean_unsigned_to_nat(0u);
v___x_2210_ = 0;
v___x_2211_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleContinueEvent___redArg(v_inst_2045_, v_handler_2047_, v_machine_2194_, v_val_2205_, v_config_2044_, v_connectionContext_2051_);
v___x_2212_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2209_, v___x_2210_, v___x_2211_, v___f_2208_);
return v___x_2212_;
}
else
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; 
lean_dec_ref(v_connectionContext_2051_);
lean_dec(v_handler_2047_);
lean_dec_ref(v_inst_2045_);
lean_dec_ref(v_config_2044_);
v___x_2213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2213_, 0, v___y_2054_);
v___x_2214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2213_);
v___x_2215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2215_, 0, v___x_2214_);
return v___x_2215_;
}
}
default: 
{
lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; 
lean_dec(v_a_2052_);
lean_dec_ref(v_connectionContext_2051_);
lean_dec_ref(v___f_2050_);
lean_dec_ref(v_inst_2049_);
lean_dec_ref(v___f_2048_);
lean_dec(v_handler_2047_);
lean_dec_ref(v___f_2046_);
lean_dec_ref(v_inst_2045_);
lean_dec_ref(v_config_2044_);
v___x_2216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2216_, 0, v___y_2054_);
v___x_2217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2217_, 0, v___x_2216_);
v___x_2218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2217_);
return v___x_2218_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___boxed(lean_object* v_config_2219_, lean_object* v_inst_2220_, lean_object* v___f_2221_, lean_object* v_handler_2222_, lean_object* v___f_2223_, lean_object* v_inst_2224_, lean_object* v___f_2225_, lean_object* v_connectionContext_2226_, lean_object* v_a_2227_, lean_object* v_x_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_){
_start:
{
lean_object* v_res_2231_; 
v_res_2231_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14(v_config_2219_, v_inst_2220_, v___f_2221_, v_handler_2222_, v___f_2223_, v_inst_2224_, v___f_2225_, v_connectionContext_2226_, v_a_2227_, v_x_2228_, v___y_2229_);
return v_res_2231_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15(lean_object* v_x_2232_){
_start:
{
lean_object* v___x_2234_; 
v___x_2234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2234_, 0, v_x_2232_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15___boxed(lean_object* v_x_2235_, lean_object* v___y_2236_){
_start:
{
lean_object* v_res_2237_; 
v_res_2237_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__15(v_x_2235_);
return v_res_2237_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(lean_object* v_inst_2240_, lean_object* v_inst_2241_, lean_object* v_handler_2242_, lean_object* v_config_2243_, lean_object* v_connectionContext_2244_, lean_object* v_events_2245_, lean_object* v_state_2246_){
_start:
{
lean_object* v___f_2248_; lean_object* v___f_2249_; lean_object* v___f_2250_; lean_object* v___x_2251_; size_t v_sz_2252_; size_t v___x_2253_; lean_object* v___x_2254_; uint8_t v___x_2255_; lean_object* v___x_4104__overap_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___f_2248_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___f_2249_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__14___boxed), 12, 8);
lean_closure_set(v___f_2249_, 0, v_config_2243_);
lean_closure_set(v___f_2249_, 1, v_inst_2240_);
lean_closure_set(v___f_2249_, 2, v___f_2248_);
lean_closure_set(v___f_2249_, 3, v_handler_2242_);
lean_closure_set(v___f_2249_, 4, v___f_2248_);
lean_closure_set(v___f_2249_, 5, v_inst_2241_);
lean_closure_set(v___f_2249_, 6, v___f_2248_);
lean_closure_set(v___f_2249_, 7, v_connectionContext_2244_);
v___f_2250_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__1));
v___x_2251_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v_sz_2252_ = lean_array_size(v_events_2245_);
v___x_2253_ = ((size_t)0ULL);
v___x_2254_ = lean_unsigned_to_nat(0u);
v___x_2255_ = 0;
v___x_4104__overap_2256_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2251_, v_events_2245_, v___f_2249_, v_sz_2252_, v___x_2253_, v_state_2246_);
v___x_2257_ = lean_apply_1(v___x_4104__overap_2256_, lean_box(0));
v___x_2258_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2254_, v___x_2255_, v___x_2257_, v___f_2250_);
return v___x_2258_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___boxed(lean_object* v_inst_2259_, lean_object* v_inst_2260_, lean_object* v_handler_2261_, lean_object* v_config_2262_, lean_object* v_connectionContext_2263_, lean_object* v_events_2264_, lean_object* v_state_2265_, lean_object* v_a_2266_){
_start:
{
lean_object* v_res_2267_; 
v_res_2267_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(v_inst_2259_, v_inst_2260_, v_handler_2261_, v_config_2262_, v_connectionContext_2263_, v_events_2264_, v_state_2265_);
return v_res_2267_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events(lean_object* v_00_u03c3_2268_, lean_object* v_00_u03b2_2269_, lean_object* v_inst_2270_, lean_object* v_inst_2271_, lean_object* v_handler_2272_, lean_object* v_config_2273_, lean_object* v_connectionContext_2274_, lean_object* v_events_2275_, lean_object* v_state_2276_){
_start:
{
lean_object* v___x_2278_; 
v___x_2278_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(v_inst_2270_, v_inst_2271_, v_handler_2272_, v_config_2273_, v_connectionContext_2274_, v_events_2275_, v_state_2276_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___boxed(lean_object* v_00_u03c3_2279_, lean_object* v_00_u03b2_2280_, lean_object* v_inst_2281_, lean_object* v_inst_2282_, lean_object* v_handler_2283_, lean_object* v_config_2284_, lean_object* v_connectionContext_2285_, lean_object* v_events_2286_, lean_object* v_state_2287_, lean_object* v_a_2288_){
_start:
{
lean_object* v_res_2289_; 
v_res_2289_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events(v_00_u03c3_2279_, v_00_u03b2_2280_, v_inst_2281_, v_inst_2282_, v_handler_2283_, v_config_2284_, v_connectionContext_2285_, v_events_2286_, v_state_2287_);
return v_res_2289_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__0(lean_object* v_x_2290_){
_start:
{
if (lean_obj_tag(v_x_2290_) == 0)
{
lean_object* v_a_2291_; lean_object* v___x_2292_; 
v_a_2291_ = lean_ctor_get(v_x_2290_, 0);
lean_inc(v_a_2291_);
lean_dec_ref_known(v_x_2290_, 1);
v___x_2292_ = lean_task_pure(v_a_2291_);
return v___x_2292_;
}
else
{
lean_object* v_a_2293_; 
v_a_2293_ = lean_ctor_get(v_x_2290_, 0);
lean_inc_ref(v_a_2293_);
lean_dec_ref_known(v_x_2290_, 1);
return v_a_2293_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1(lean_object* v_machine_2294_, lean_object* v_requestStream_2295_, lean_object* v_keepAliveTimeout_2296_, lean_object* v_currentTimeout_2297_, lean_object* v_headerTimeout_2298_, lean_object* v_response_2299_, lean_object* v_respStream_2300_, uint8_t v_requiresData_2301_, lean_object* v_expectData_2302_, lean_object* v_dateSecond_2303_, lean_object* v_x_2304_){
_start:
{
if (lean_obj_tag(v_x_2304_) == 0)
{
lean_object* v_a_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2314_; 
lean_dec(v_dateSecond_2303_);
lean_dec(v_expectData_2302_);
lean_dec(v_respStream_2300_);
lean_dec_ref(v_response_2299_);
lean_dec(v_headerTimeout_2298_);
lean_dec(v_currentTimeout_2297_);
lean_dec(v_keepAliveTimeout_2296_);
lean_dec_ref(v_requestStream_2295_);
lean_dec_ref(v_machine_2294_);
v_a_2306_ = lean_ctor_get(v_x_2304_, 0);
v_isSharedCheck_2314_ = !lean_is_exclusive(v_x_2304_);
if (v_isSharedCheck_2314_ == 0)
{
v___x_2308_ = v_x_2304_;
v_isShared_2309_ = v_isSharedCheck_2314_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_a_2306_);
lean_dec(v_x_2304_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2314_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
lean_object* v___x_2311_; 
if (v_isShared_2309_ == 0)
{
v___x_2311_ = v___x_2308_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v_a_2306_);
v___x_2311_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
lean_object* v___x_2312_; 
v___x_2312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2311_);
return v___x_2312_;
}
}
}
else
{
lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2325_; 
v_isSharedCheck_2325_ = !lean_is_exclusive(v_x_2304_);
if (v_isSharedCheck_2325_ == 0)
{
lean_object* v_unused_2326_; 
v_unused_2326_ = lean_ctor_get(v_x_2304_, 0);
lean_dec(v_unused_2326_);
v___x_2316_ = v_x_2304_;
v_isShared_2317_ = v_isSharedCheck_2325_;
goto v_resetjp_2315_;
}
else
{
lean_dec(v_x_2304_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2325_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
uint8_t v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2322_; 
v___x_2318_ = 1;
v___x_2319_ = lean_box(0);
v___x_2320_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_2320_, 0, v_machine_2294_);
lean_ctor_set(v___x_2320_, 1, v_requestStream_2295_);
lean_ctor_set(v___x_2320_, 2, v_keepAliveTimeout_2296_);
lean_ctor_set(v___x_2320_, 3, v_currentTimeout_2297_);
lean_ctor_set(v___x_2320_, 4, v_headerTimeout_2298_);
lean_ctor_set(v___x_2320_, 5, v_response_2299_);
lean_ctor_set(v___x_2320_, 6, v_respStream_2300_);
lean_ctor_set(v___x_2320_, 7, v_expectData_2302_);
lean_ctor_set(v___x_2320_, 8, v___x_2319_);
lean_ctor_set(v___x_2320_, 9, v_dateSecond_2303_);
lean_ctor_set_uint8(v___x_2320_, sizeof(void*)*10, v_requiresData_2301_);
lean_ctor_set_uint8(v___x_2320_, sizeof(void*)*10 + 1, v___x_2318_);
if (v_isShared_2317_ == 0)
{
lean_ctor_set(v___x_2316_, 0, v___x_2320_);
v___x_2322_ = v___x_2316_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v___x_2320_);
v___x_2322_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
lean_object* v___x_2323_; 
v___x_2323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2322_);
return v___x_2323_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1___boxed(lean_object* v_machine_2327_, lean_object* v_requestStream_2328_, lean_object* v_keepAliveTimeout_2329_, lean_object* v_currentTimeout_2330_, lean_object* v_headerTimeout_2331_, lean_object* v_response_2332_, lean_object* v_respStream_2333_, lean_object* v_requiresData_2334_, lean_object* v_expectData_2335_, lean_object* v_dateSecond_2336_, lean_object* v_x_2337_, lean_object* v___y_2338_){
_start:
{
uint8_t v_requiresData_boxed_2339_; lean_object* v_res_2340_; 
v_requiresData_boxed_2339_ = lean_unbox(v_requiresData_2334_);
v_res_2340_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1(v_machine_2327_, v_requestStream_2328_, v_keepAliveTimeout_2329_, v_currentTimeout_2330_, v_headerTimeout_2331_, v_response_2332_, v_respStream_2333_, v_requiresData_boxed_2339_, v_expectData_2335_, v_dateSecond_2336_, v_x_2337_);
return v_res_2340_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2(lean_object* v_toFunctor_2341_, lean_object* v_response_2342_, lean_object* v___x_2343_, lean_object* v___f_2344_, lean_object* v_x_2345_){
_start:
{
if (lean_obj_tag(v_x_2345_) == 0)
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2355_; 
lean_dec_ref(v___f_2344_);
lean_dec(v___x_2343_);
lean_dec_ref(v_response_2342_);
lean_dec_ref(v_toFunctor_2341_);
v_a_2347_ = lean_ctor_get(v_x_2345_, 0);
v_isSharedCheck_2355_ = !lean_is_exclusive(v_x_2345_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2349_ = v_x_2345_;
v_isShared_2350_ = v_isSharedCheck_2355_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v_x_2345_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2355_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2352_; 
if (v_isShared_2350_ == 0)
{
v___x_2352_ = v___x_2349_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_a_2347_);
v___x_2352_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
lean_object* v___x_2353_; 
v___x_2353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2352_);
return v___x_2353_;
}
}
}
else
{
lean_object* v_a_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2370_; 
v_a_2356_ = lean_ctor_get(v_x_2345_, 0);
v_isSharedCheck_2370_ = !lean_is_exclusive(v_x_2345_);
if (v_isSharedCheck_2370_ == 0)
{
v___x_2358_ = v_x_2345_;
v_isShared_2359_ = v_isSharedCheck_2370_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_a_2356_);
lean_dec(v_x_2345_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2370_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; uint8_t v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2366_; 
v___x_2360_ = lean_alloc_closure((void*)(l_Functor_discard), 4, 3);
lean_closure_set(v___x_2360_, 0, lean_box(0));
lean_closure_set(v___x_2360_, 1, lean_box(0));
lean_closure_set(v___x_2360_, 2, v_toFunctor_2341_);
v___x_2361_ = lean_alloc_closure((void*)(l_Std_Channel_send___boxed), 4, 2);
lean_closure_set(v___x_2361_, 0, lean_box(0));
lean_closure_set(v___x_2361_, 1, v_response_2342_);
v___x_2362_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_2362_, 0, lean_box(0));
lean_closure_set(v___x_2362_, 1, lean_box(0));
lean_closure_set(v___x_2362_, 2, lean_box(0));
lean_closure_set(v___x_2362_, 3, v___x_2360_);
lean_closure_set(v___x_2362_, 4, v___x_2361_);
v___x_2363_ = 0;
lean_inc(v___x_2343_);
v___x_2364_ = l_BaseIO_chainTask___redArg(v_a_2356_, v___x_2362_, v___x_2343_, v___x_2363_);
if (v_isShared_2359_ == 0)
{
lean_ctor_set(v___x_2358_, 0, v___x_2364_);
v___x_2366_ = v___x_2358_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v___x_2364_);
v___x_2366_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; 
v___x_2367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2366_);
v___x_2368_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2343_, v___x_2363_, v___x_2367_, v___f_2344_);
return v___x_2368_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2___boxed(lean_object* v_toFunctor_2371_, lean_object* v_response_2372_, lean_object* v___x_2373_, lean_object* v___f_2374_, lean_object* v_x_2375_, lean_object* v___y_2376_){
_start:
{
lean_object* v_res_2377_; 
v_res_2377_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2(v_toFunctor_2371_, v_response_2372_, v___x_2373_, v___f_2374_, v_x_2375_);
return v_res_2377_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(lean_object* v_inst_2379_, lean_object* v_handler_2380_, lean_object* v_extensions_2381_, lean_object* v_connectionContext_2382_, lean_object* v_state_2383_){
_start:
{
lean_object* v___x_2385_; lean_object* v_toApplicative_2386_; lean_object* v_pendingHead_2387_; 
v___x_2385_ = l_instMonadBaseIO;
v_toApplicative_2386_ = lean_ctor_get(v___x_2385_, 0);
v_pendingHead_2387_ = lean_ctor_get(v_state_2383_, 8);
lean_inc(v_pendingHead_2387_);
if (lean_obj_tag(v_pendingHead_2387_) == 1)
{
lean_object* v_toFunctor_2388_; lean_object* v_machine_2389_; lean_object* v_requestStream_2390_; lean_object* v_keepAliveTimeout_2391_; lean_object* v_currentTimeout_2392_; lean_object* v_headerTimeout_2393_; lean_object* v_response_2394_; lean_object* v_respStream_2395_; uint8_t v_requiresData_2396_; lean_object* v_expectData_2397_; lean_object* v_dateSecond_2398_; lean_object* v_val_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2421_; 
v_toFunctor_2388_ = lean_ctor_get(v_toApplicative_2386_, 0);
v_machine_2389_ = lean_ctor_get(v_state_2383_, 0);
lean_inc_ref(v_machine_2389_);
v_requestStream_2390_ = lean_ctor_get(v_state_2383_, 1);
lean_inc_ref(v_requestStream_2390_);
v_keepAliveTimeout_2391_ = lean_ctor_get(v_state_2383_, 2);
lean_inc(v_keepAliveTimeout_2391_);
v_currentTimeout_2392_ = lean_ctor_get(v_state_2383_, 3);
lean_inc(v_currentTimeout_2392_);
v_headerTimeout_2393_ = lean_ctor_get(v_state_2383_, 4);
lean_inc(v_headerTimeout_2393_);
v_response_2394_ = lean_ctor_get(v_state_2383_, 5);
lean_inc_ref(v_response_2394_);
v_respStream_2395_ = lean_ctor_get(v_state_2383_, 6);
lean_inc(v_respStream_2395_);
v_requiresData_2396_ = lean_ctor_get_uint8(v_state_2383_, sizeof(void*)*10);
v_expectData_2397_ = lean_ctor_get(v_state_2383_, 7);
lean_inc(v_expectData_2397_);
v_dateSecond_2398_ = lean_ctor_get(v_state_2383_, 9);
lean_inc(v_dateSecond_2398_);
lean_dec_ref(v_state_2383_);
v_val_2399_ = lean_ctor_get(v_pendingHead_2387_, 0);
v_isSharedCheck_2421_ = !lean_is_exclusive(v_pendingHead_2387_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2401_ = v_pendingHead_2387_;
v_isShared_2402_ = v_isSharedCheck_2421_;
goto v_resetjp_2400_;
}
else
{
lean_inc(v_val_2399_);
lean_dec(v_pendingHead_2387_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2421_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
lean_object* v_onRequest_2403_; lean_object* v___f_2404_; lean_object* v___x_2405_; lean_object* v___f_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___f_2410_; uint8_t v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; uint8_t v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2417_; 
v_onRequest_2403_ = lean_ctor_get(v_inst_2379_, 1);
lean_inc_ref(v_onRequest_2403_);
lean_dec_ref(v_inst_2379_);
v___f_2404_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___closed__0));
v___x_2405_ = lean_box(v_requiresData_2396_);
lean_inc_ref(v_response_2394_);
lean_inc_ref(v_requestStream_2390_);
v___f_2406_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__1___boxed), 12, 10);
lean_closure_set(v___f_2406_, 0, v_machine_2389_);
lean_closure_set(v___f_2406_, 1, v_requestStream_2390_);
lean_closure_set(v___f_2406_, 2, v_keepAliveTimeout_2391_);
lean_closure_set(v___f_2406_, 3, v_currentTimeout_2392_);
lean_closure_set(v___f_2406_, 4, v_headerTimeout_2393_);
lean_closure_set(v___f_2406_, 5, v_response_2394_);
lean_closure_set(v___f_2406_, 6, v_respStream_2395_);
lean_closure_set(v___f_2406_, 7, v___x_2405_);
lean_closure_set(v___f_2406_, 8, v_expectData_2397_);
lean_closure_set(v___f_2406_, 9, v_dateSecond_2398_);
v___x_2407_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2407_, 0, v_val_2399_);
lean_ctor_set(v___x_2407_, 1, v_requestStream_2390_);
lean_ctor_set(v___x_2407_, 2, v_extensions_2381_);
v___x_2408_ = lean_apply_3(v_onRequest_2403_, v_handler_2380_, v___x_2407_, v_connectionContext_2382_);
v___x_2409_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_toFunctor_2388_);
v___f_2410_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_2410_, 0, v_toFunctor_2388_);
lean_closure_set(v___f_2410_, 1, v_response_2394_);
lean_closure_set(v___f_2410_, 2, v___x_2409_);
lean_closure_set(v___f_2410_, 3, v___f_2406_);
v___x_2411_ = 0;
v___x_2412_ = lean_alloc_closure((void*)(l_Std_Async_BaseAsync_toRawBaseIO___boxed), 3, 2);
lean_closure_set(v___x_2412_, 0, lean_box(0));
lean_closure_set(v___x_2412_, 1, v___x_2408_);
v___x_2413_ = lean_io_as_task(v___x_2412_, v___x_2409_);
v___x_2414_ = 1;
v___x_2415_ = lean_task_bind(v___x_2413_, v___f_2404_, v___x_2409_, v___x_2414_);
if (v_isShared_2402_ == 0)
{
lean_ctor_set(v___x_2401_, 0, v___x_2415_);
v___x_2417_ = v___x_2401_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v___x_2415_);
v___x_2417_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; 
v___x_2418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2418_, 0, v___x_2417_);
v___x_2419_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2409_, v___x_2411_, v___x_2418_, v___f_2410_);
return v___x_2419_;
}
}
}
else
{
lean_object* v___x_2422_; lean_object* v___x_2423_; 
lean_dec(v_pendingHead_2387_);
lean_dec_ref(v_connectionContext_2382_);
lean_dec(v_extensions_2381_);
lean_dec(v_handler_2380_);
lean_dec_ref(v_inst_2379_);
v___x_2422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2422_, 0, v_state_2383_);
v___x_2423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2423_, 0, v___x_2422_);
return v___x_2423_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg___boxed(lean_object* v_inst_2424_, lean_object* v_handler_2425_, lean_object* v_extensions_2426_, lean_object* v_connectionContext_2427_, lean_object* v_state_2428_, lean_object* v_a_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_inst_2424_, v_handler_2425_, v_extensions_2426_, v_connectionContext_2427_, v_state_2428_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest(lean_object* v_00_u03c3_2431_, lean_object* v_inst_2432_, lean_object* v_handler_2433_, lean_object* v_extensions_2434_, lean_object* v_connectionContext_2435_, lean_object* v_state_2436_){
_start:
{
lean_object* v___x_2438_; 
v___x_2438_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_inst_2432_, v_handler_2433_, v_extensions_2434_, v_connectionContext_2435_, v_state_2436_);
return v___x_2438_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___boxed(lean_object* v_00_u03c3_2439_, lean_object* v_inst_2440_, lean_object* v_handler_2441_, lean_object* v_extensions_2442_, lean_object* v_connectionContext_2443_, lean_object* v_state_2444_, lean_object* v_a_2445_){
_start:
{
lean_object* v_res_2446_; 
v_res_2446_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest(v_00_u03c3_2439_, v_inst_2440_, v_handler_2441_, v_extensions_2442_, v_connectionContext_2443_, v_state_2444_);
return v_res_2446_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0(lean_object* v_machine_2447_, lean_object* v_____r_2448_){
_start:
{
lean_object* v_writer_2450_; lean_object* v_reader_2451_; lean_object* v_config_2452_; lean_object* v_events_2453_; lean_object* v_error_2454_; lean_object* v_date_2455_; uint8_t v_keepAlive_2456_; uint8_t v_pullBodyStalled_2457_; lean_object* v___x_2459_; uint8_t v_isShared_2460_; uint8_t v_isSharedCheck_2484_; 
v_writer_2450_ = lean_ctor_get(v_machine_2447_, 1);
v_reader_2451_ = lean_ctor_get(v_machine_2447_, 0);
v_config_2452_ = lean_ctor_get(v_machine_2447_, 2);
v_events_2453_ = lean_ctor_get(v_machine_2447_, 3);
v_error_2454_ = lean_ctor_get(v_machine_2447_, 4);
v_date_2455_ = lean_ctor_get(v_machine_2447_, 5);
v_keepAlive_2456_ = lean_ctor_get_uint8(v_machine_2447_, sizeof(void*)*6);
v_pullBodyStalled_2457_ = lean_ctor_get_uint8(v_machine_2447_, sizeof(void*)*6 + 1);
v_isSharedCheck_2484_ = !lean_is_exclusive(v_machine_2447_);
if (v_isSharedCheck_2484_ == 0)
{
v___x_2459_ = v_machine_2447_;
v_isShared_2460_ = v_isSharedCheck_2484_;
goto v_resetjp_2458_;
}
else
{
lean_inc(v_date_2455_);
lean_inc(v_error_2454_);
lean_inc(v_events_2453_);
lean_inc(v_config_2452_);
lean_inc(v_writer_2450_);
lean_inc(v_reader_2451_);
lean_dec(v_machine_2447_);
v___x_2459_ = lean_box(0);
v_isShared_2460_ = v_isSharedCheck_2484_;
goto v_resetjp_2458_;
}
v_resetjp_2458_:
{
lean_object* v_userData_2461_; lean_object* v_outputData_2462_; lean_object* v_state_2463_; lean_object* v_knownSize_2464_; lean_object* v_messageHead_2465_; uint8_t v_sentMessage_2466_; uint8_t v_omitBody_2467_; lean_object* v_userDataBytes_2468_; lean_object* v___x_2470_; uint8_t v_isShared_2471_; uint8_t v_isSharedCheck_2483_; 
v_userData_2461_ = lean_ctor_get(v_writer_2450_, 0);
v_outputData_2462_ = lean_ctor_get(v_writer_2450_, 1);
v_state_2463_ = lean_ctor_get(v_writer_2450_, 2);
v_knownSize_2464_ = lean_ctor_get(v_writer_2450_, 3);
v_messageHead_2465_ = lean_ctor_get(v_writer_2450_, 4);
v_sentMessage_2466_ = lean_ctor_get_uint8(v_writer_2450_, sizeof(void*)*6);
v_omitBody_2467_ = lean_ctor_get_uint8(v_writer_2450_, sizeof(void*)*6 + 2);
v_userDataBytes_2468_ = lean_ctor_get(v_writer_2450_, 5);
v_isSharedCheck_2483_ = !lean_is_exclusive(v_writer_2450_);
if (v_isSharedCheck_2483_ == 0)
{
v___x_2470_ = v_writer_2450_;
v_isShared_2471_ = v_isSharedCheck_2483_;
goto v_resetjp_2469_;
}
else
{
lean_inc(v_userDataBytes_2468_);
lean_inc(v_messageHead_2465_);
lean_inc(v_knownSize_2464_);
lean_inc(v_state_2463_);
lean_inc(v_outputData_2462_);
lean_inc(v_userData_2461_);
lean_dec(v_writer_2450_);
v___x_2470_ = lean_box(0);
v_isShared_2471_ = v_isSharedCheck_2483_;
goto v_resetjp_2469_;
}
v_resetjp_2469_:
{
uint8_t v___x_2472_; lean_object* v___x_2474_; 
v___x_2472_ = 1;
if (v_isShared_2471_ == 0)
{
v___x_2474_ = v___x_2470_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v_userData_2461_);
lean_ctor_set(v_reuseFailAlloc_2482_, 1, v_outputData_2462_);
lean_ctor_set(v_reuseFailAlloc_2482_, 2, v_state_2463_);
lean_ctor_set(v_reuseFailAlloc_2482_, 3, v_knownSize_2464_);
lean_ctor_set(v_reuseFailAlloc_2482_, 4, v_messageHead_2465_);
lean_ctor_set(v_reuseFailAlloc_2482_, 5, v_userDataBytes_2468_);
lean_ctor_set_uint8(v_reuseFailAlloc_2482_, sizeof(void*)*6, v_sentMessage_2466_);
lean_ctor_set_uint8(v_reuseFailAlloc_2482_, sizeof(void*)*6 + 2, v_omitBody_2467_);
v___x_2474_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
lean_object* v___x_2476_; 
lean_ctor_set_uint8(v___x_2474_, sizeof(void*)*6 + 1, v___x_2472_);
if (v_isShared_2460_ == 0)
{
lean_ctor_set(v___x_2459_, 1, v___x_2474_);
v___x_2476_ = v___x_2459_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_reader_2451_);
lean_ctor_set(v_reuseFailAlloc_2481_, 1, v___x_2474_);
lean_ctor_set(v_reuseFailAlloc_2481_, 2, v_config_2452_);
lean_ctor_set(v_reuseFailAlloc_2481_, 3, v_events_2453_);
lean_ctor_set(v_reuseFailAlloc_2481_, 4, v_error_2454_);
lean_ctor_set(v_reuseFailAlloc_2481_, 5, v_date_2455_);
lean_ctor_set_uint8(v_reuseFailAlloc_2481_, sizeof(void*)*6, v_keepAlive_2456_);
lean_ctor_set_uint8(v_reuseFailAlloc_2481_, sizeof(void*)*6 + 1, v_pullBodyStalled_2457_);
v___x_2476_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; 
v___x_2477_ = lean_box(0);
v___x_2478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2478_, 0, v___x_2476_);
lean_ctor_set(v___x_2478_, 1, v___x_2477_);
v___x_2479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2479_, 0, v___x_2478_);
v___x_2480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2480_, 0, v___x_2479_);
return v___x_2480_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0___boxed(lean_object* v_machine_2485_, lean_object* v_____r_2486_, lean_object* v___y_2487_){
_start:
{
lean_object* v_res_2488_; 
v_res_2488_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0(v_machine_2485_, v_____r_2486_);
return v_res_2488_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3(lean_object* v_x1_2489_, lean_object* v_x2_2490_){
_start:
{
lean_object* v_data_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; 
v_data_2491_ = lean_ctor_get(v_x2_2490_, 0);
v___x_2492_ = lean_byte_array_size(v_data_2491_);
v___x_2493_ = lean_nat_add(v_x1_2489_, v___x_2492_);
return v___x_2493_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3___boxed(lean_object* v_x1_2494_, lean_object* v_x2_2495_){
_start:
{
lean_object* v_res_2496_; 
v_res_2496_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__3(v_x1_2494_, v_x2_2495_);
lean_dec_ref(v_x2_2495_);
lean_dec(v_x1_2494_);
return v_res_2496_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1(lean_object* v_body_2497_, lean_object* v_machine_2498_, lean_object* v_isClosed_2499_, lean_object* v___f_2500_, lean_object* v___f_2501_, lean_object* v_x_2502_){
_start:
{
lean_object* v___y_2505_; 
if (lean_obj_tag(v_x_2502_) == 0)
{
lean_object* v_a_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2518_; 
lean_dec_ref(v___f_2501_);
lean_dec_ref(v___f_2500_);
lean_dec_ref(v_isClosed_2499_);
lean_dec_ref(v_machine_2498_);
lean_dec(v_body_2497_);
v_a_2510_ = lean_ctor_get(v_x_2502_, 0);
v_isSharedCheck_2518_ = !lean_is_exclusive(v_x_2502_);
if (v_isSharedCheck_2518_ == 0)
{
v___x_2512_ = v_x_2502_;
v_isShared_2513_ = v_isSharedCheck_2518_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_a_2510_);
lean_dec(v_x_2502_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2518_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v___x_2515_; 
if (v_isShared_2513_ == 0)
{
v___x_2515_ = v___x_2512_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2517_; 
v_reuseFailAlloc_2517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2517_, 0, v_a_2510_);
v___x_2515_ = v_reuseFailAlloc_2517_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
lean_object* v___x_2516_; 
v___x_2516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2516_, 0, v___x_2515_);
return v___x_2516_;
}
}
}
else
{
lean_object* v_a_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2581_; 
v_a_2519_ = lean_ctor_get(v_x_2502_, 0);
v_isSharedCheck_2581_ = !lean_is_exclusive(v_x_2502_);
if (v_isSharedCheck_2581_ == 0)
{
v___x_2521_ = v_x_2502_;
v_isShared_2522_ = v_isSharedCheck_2581_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_a_2519_);
lean_dec(v_x_2502_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2581_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
if (lean_obj_tag(v_a_2519_) == 0)
{
lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2526_; 
lean_dec_ref(v___f_2501_);
lean_dec_ref(v___f_2500_);
lean_dec_ref(v_isClosed_2499_);
v___x_2523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2523_, 0, v_body_2497_);
v___x_2524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2524_, 0, v_machine_2498_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
if (v_isShared_2522_ == 0)
{
lean_ctor_set(v___x_2521_, 0, v___x_2524_);
v___x_2526_ = v___x_2521_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v___x_2524_);
v___x_2526_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
lean_object* v___x_2527_; 
v___x_2527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2527_, 0, v___x_2526_);
return v___x_2527_;
}
}
else
{
lean_object* v_val_2529_; 
lean_del_object(v___x_2521_);
v_val_2529_ = lean_ctor_get(v_a_2519_, 0);
lean_inc(v_val_2529_);
lean_dec_ref_known(v_a_2519_, 1);
if (lean_obj_tag(v_val_2529_) == 0)
{
lean_object* v___x_2530_; uint8_t v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; 
lean_dec_ref(v___f_2501_);
lean_dec_ref(v_machine_2498_);
v___x_2530_ = lean_unsigned_to_nat(0u);
v___x_2531_ = 0;
v___x_2532_ = lean_apply_2(v_isClosed_2499_, v_body_2497_, lean_box(0));
v___x_2533_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2530_, v___x_2531_, v___x_2532_, v___f_2500_);
return v___x_2533_;
}
else
{
lean_object* v_val_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; uint8_t v___x_2540_; 
lean_dec_ref(v___f_2500_);
lean_dec_ref(v_isClosed_2499_);
v_val_2534_ = lean_ctor_get(v_val_2529_, 0);
lean_inc(v_val_2534_);
lean_dec_ref_known(v_val_2529_, 1);
v___x_2535_ = lean_unsigned_to_nat(1u);
v___x_2536_ = lean_mk_empty_array_with_capacity(v___x_2535_);
v___x_2537_ = lean_array_push(v___x_2536_, v_val_2534_);
v___x_2538_ = lean_array_get_size(v___x_2537_);
v___x_2539_ = lean_unsigned_to_nat(0u);
v___x_2540_ = lean_nat_dec_eq(v___x_2538_, v___x_2539_);
if (v___x_2540_ == 0)
{
lean_object* v_reader_2541_; lean_object* v_writer_2542_; lean_object* v_config_2543_; lean_object* v_events_2544_; lean_object* v_error_2545_; lean_object* v_date_2546_; uint8_t v_keepAlive_2547_; uint8_t v_pullBodyStalled_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2580_; 
v_reader_2541_ = lean_ctor_get(v_machine_2498_, 0);
v_writer_2542_ = lean_ctor_get(v_machine_2498_, 1);
v_config_2543_ = lean_ctor_get(v_machine_2498_, 2);
v_events_2544_ = lean_ctor_get(v_machine_2498_, 3);
v_error_2545_ = lean_ctor_get(v_machine_2498_, 4);
v_date_2546_ = lean_ctor_get(v_machine_2498_, 5);
v_keepAlive_2547_ = lean_ctor_get_uint8(v_machine_2498_, sizeof(void*)*6);
v_pullBodyStalled_2548_ = lean_ctor_get_uint8(v_machine_2498_, sizeof(void*)*6 + 1);
v_isSharedCheck_2580_ = !lean_is_exclusive(v_machine_2498_);
if (v_isSharedCheck_2580_ == 0)
{
v___x_2550_ = v_machine_2498_;
v_isShared_2551_ = v_isSharedCheck_2580_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_date_2546_);
lean_inc(v_error_2545_);
lean_inc(v_events_2544_);
lean_inc(v_config_2543_);
lean_inc(v_writer_2542_);
lean_inc(v_reader_2541_);
lean_dec(v_machine_2498_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2580_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v___y_2553_; lean_object* v___x_2575_; uint8_t v___x_2576_; 
v___x_2575_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9));
v___x_2576_ = lean_nat_dec_lt(v___x_2539_, v___x_2538_);
if (v___x_2576_ == 0)
{
lean_dec_ref(v___f_2501_);
v___y_2553_ = v___x_2539_;
goto v___jp_2552_;
}
else
{
size_t v___x_2577_; size_t v___x_2578_; lean_object* v___x_2579_; 
v___x_2577_ = ((size_t)0ULL);
v___x_2578_ = lean_usize_of_nat(v___x_2538_);
lean_inc_ref(v___x_2537_);
v___x_2579_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2575_, v___f_2501_, v___x_2537_, v___x_2577_, v___x_2578_, v___x_2539_);
v___y_2553_ = v___x_2579_;
goto v___jp_2552_;
}
v___jp_2552_:
{
lean_object* v_userData_2554_; lean_object* v_outputData_2555_; lean_object* v_state_2556_; lean_object* v_knownSize_2557_; lean_object* v_messageHead_2558_; uint8_t v_sentMessage_2559_; uint8_t v_userClosedBody_2560_; uint8_t v_omitBody_2561_; lean_object* v_userDataBytes_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2574_; 
v_userData_2554_ = lean_ctor_get(v_writer_2542_, 0);
v_outputData_2555_ = lean_ctor_get(v_writer_2542_, 1);
v_state_2556_ = lean_ctor_get(v_writer_2542_, 2);
v_knownSize_2557_ = lean_ctor_get(v_writer_2542_, 3);
v_messageHead_2558_ = lean_ctor_get(v_writer_2542_, 4);
v_sentMessage_2559_ = lean_ctor_get_uint8(v_writer_2542_, sizeof(void*)*6);
v_userClosedBody_2560_ = lean_ctor_get_uint8(v_writer_2542_, sizeof(void*)*6 + 1);
v_omitBody_2561_ = lean_ctor_get_uint8(v_writer_2542_, sizeof(void*)*6 + 2);
v_userDataBytes_2562_ = lean_ctor_get(v_writer_2542_, 5);
v_isSharedCheck_2574_ = !lean_is_exclusive(v_writer_2542_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2564_ = v_writer_2542_;
v_isShared_2565_ = v_isSharedCheck_2574_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_userDataBytes_2562_);
lean_inc(v_messageHead_2558_);
lean_inc(v_knownSize_2557_);
lean_inc(v_state_2556_);
lean_inc(v_outputData_2555_);
lean_inc(v_userData_2554_);
lean_dec(v_writer_2542_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2574_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2569_; 
v___x_2566_ = l_Array_append___redArg(v_userData_2554_, v___x_2537_);
lean_dec_ref(v___x_2537_);
v___x_2567_ = lean_nat_add(v_userDataBytes_2562_, v___y_2553_);
lean_dec(v___y_2553_);
lean_dec(v_userDataBytes_2562_);
if (v_isShared_2565_ == 0)
{
lean_ctor_set(v___x_2564_, 5, v___x_2567_);
lean_ctor_set(v___x_2564_, 0, v___x_2566_);
v___x_2569_ = v___x_2564_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v___x_2566_);
lean_ctor_set(v_reuseFailAlloc_2573_, 1, v_outputData_2555_);
lean_ctor_set(v_reuseFailAlloc_2573_, 2, v_state_2556_);
lean_ctor_set(v_reuseFailAlloc_2573_, 3, v_knownSize_2557_);
lean_ctor_set(v_reuseFailAlloc_2573_, 4, v_messageHead_2558_);
lean_ctor_set(v_reuseFailAlloc_2573_, 5, v___x_2567_);
lean_ctor_set_uint8(v_reuseFailAlloc_2573_, sizeof(void*)*6, v_sentMessage_2559_);
lean_ctor_set_uint8(v_reuseFailAlloc_2573_, sizeof(void*)*6 + 1, v_userClosedBody_2560_);
lean_ctor_set_uint8(v_reuseFailAlloc_2573_, sizeof(void*)*6 + 2, v_omitBody_2561_);
v___x_2569_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
lean_object* v___x_2571_; 
if (v_isShared_2551_ == 0)
{
lean_ctor_set(v___x_2550_, 1, v___x_2569_);
v___x_2571_ = v___x_2550_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v_reader_2541_);
lean_ctor_set(v_reuseFailAlloc_2572_, 1, v___x_2569_);
lean_ctor_set(v_reuseFailAlloc_2572_, 2, v_config_2543_);
lean_ctor_set(v_reuseFailAlloc_2572_, 3, v_events_2544_);
lean_ctor_set(v_reuseFailAlloc_2572_, 4, v_error_2545_);
lean_ctor_set(v_reuseFailAlloc_2572_, 5, v_date_2546_);
lean_ctor_set_uint8(v_reuseFailAlloc_2572_, sizeof(void*)*6, v_keepAlive_2547_);
lean_ctor_set_uint8(v_reuseFailAlloc_2572_, sizeof(void*)*6 + 1, v_pullBodyStalled_2548_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
v___y_2505_ = v___x_2571_;
goto v___jp_2504_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_2537_);
lean_dec_ref(v___f_2501_);
v___y_2505_ = v_machine_2498_;
goto v___jp_2504_;
}
}
}
}
}
v___jp_2504_:
{
lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2506_, 0, v_body_2497_);
v___x_2507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2507_, 0, v___y_2505_);
lean_ctor_set(v___x_2507_, 1, v___x_2506_);
v___x_2508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2508_, 0, v___x_2507_);
v___x_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2509_, 0, v___x_2508_);
return v___x_2509_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1___boxed(lean_object* v_body_2582_, lean_object* v_machine_2583_, lean_object* v_isClosed_2584_, lean_object* v___f_2585_, lean_object* v___f_2586_, lean_object* v_x_2587_, lean_object* v___y_2588_){
_start:
{
lean_object* v_res_2589_; 
v_res_2589_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1(v_body_2582_, v_machine_2583_, v_isClosed_2584_, v___f_2585_, v___f_2586_, v_x_2587_);
return v_res_2589_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(lean_object* v_inst_2591_, lean_object* v_machine_2592_, lean_object* v_body_2593_){
_start:
{
lean_object* v_close_2595_; lean_object* v_isClosed_2596_; lean_object* v_tryRecv_2597_; lean_object* v___f_2598_; lean_object* v___f_2599_; lean_object* v___f_2600_; lean_object* v___f_2601_; lean_object* v___f_2602_; lean_object* v___x_2603_; uint8_t v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; 
v_close_2595_ = lean_ctor_get(v_inst_2591_, 1);
lean_inc_ref(v_close_2595_);
v_isClosed_2596_ = lean_ctor_get(v_inst_2591_, 2);
lean_inc_ref(v_isClosed_2596_);
v_tryRecv_2597_ = lean_ctor_get(v_inst_2591_, 4);
lean_inc_ref(v_tryRecv_2597_);
lean_dec_ref(v_inst_2591_);
lean_inc_ref(v_machine_2592_);
v___f_2598_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2598_, 0, v_machine_2592_);
lean_inc_ref(v___f_2598_);
v___f_2599_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2599_, 0, v___f_2598_);
lean_inc_n(v_body_2593_, 2);
v___f_2600_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__3___boxed), 6, 4);
lean_closure_set(v___f_2600_, 0, v_close_2595_);
lean_closure_set(v___f_2600_, 1, v_body_2593_);
lean_closure_set(v___f_2600_, 2, v___f_2599_);
lean_closure_set(v___f_2600_, 3, v___f_2598_);
v___f_2601_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0));
v___f_2602_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2602_, 0, v_body_2593_);
lean_closure_set(v___f_2602_, 1, v_machine_2592_);
lean_closure_set(v___f_2602_, 2, v_isClosed_2596_);
lean_closure_set(v___f_2602_, 3, v___f_2600_);
lean_closure_set(v___f_2602_, 4, v___f_2601_);
v___x_2603_ = lean_unsigned_to_nat(0u);
v___x_2604_ = 0;
v___x_2605_ = lean_apply_2(v_tryRecv_2597_, v_body_2593_, lean_box(0));
v___x_2606_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2603_, v___x_2604_, v___x_2605_, v___f_2602_);
return v___x_2606_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___boxed(lean_object* v_inst_2607_, lean_object* v_machine_2608_, lean_object* v_body_2609_, lean_object* v_a_2610_){
_start:
{
lean_object* v_res_2611_; 
v_res_2611_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_2607_, v_machine_2608_, v_body_2609_);
return v_res_2611_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody(lean_object* v_00_u03b2_2612_, lean_object* v_inst_2613_, lean_object* v_machine_2614_, lean_object* v_body_2615_){
_start:
{
lean_object* v___x_2617_; 
v___x_2617_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_2613_, v_machine_2614_, v_body_2615_);
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___boxed(lean_object* v_00_u03b2_2618_, lean_object* v_inst_2619_, lean_object* v_machine_2620_, lean_object* v_body_2621_, lean_object* v_a_2622_){
_start:
{
lean_object* v_res_2623_; 
v_res_2623_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody(v_00_u03b2_2618_, v_inst_2619_, v_machine_2620_, v_body_2621_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(lean_object* v_val_2630_, lean_object* v_____r_2631_, lean_object* v_st_2632_){
_start:
{
lean_object* v_machine_2634_; lean_object* v_requestStream_2635_; lean_object* v_keepAliveTimeout_2636_; lean_object* v_currentTimeout_2637_; lean_object* v_headerTimeout_2638_; lean_object* v_response_2639_; lean_object* v_respStream_2640_; uint8_t v_requiresData_2641_; lean_object* v_expectData_2642_; uint8_t v_handlerDispatched_2643_; lean_object* v_pendingHead_2644_; lean_object* v_dateSecond_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2726_; 
v_machine_2634_ = lean_ctor_get(v_st_2632_, 0);
v_requestStream_2635_ = lean_ctor_get(v_st_2632_, 1);
v_keepAliveTimeout_2636_ = lean_ctor_get(v_st_2632_, 2);
v_currentTimeout_2637_ = lean_ctor_get(v_st_2632_, 3);
v_headerTimeout_2638_ = lean_ctor_get(v_st_2632_, 4);
v_response_2639_ = lean_ctor_get(v_st_2632_, 5);
v_respStream_2640_ = lean_ctor_get(v_st_2632_, 6);
v_requiresData_2641_ = lean_ctor_get_uint8(v_st_2632_, sizeof(void*)*10);
v_expectData_2642_ = lean_ctor_get(v_st_2632_, 7);
v_handlerDispatched_2643_ = lean_ctor_get_uint8(v_st_2632_, sizeof(void*)*10 + 1);
v_pendingHead_2644_ = lean_ctor_get(v_st_2632_, 8);
v_dateSecond_2645_ = lean_ctor_get(v_st_2632_, 9);
v_isSharedCheck_2726_ = !lean_is_exclusive(v_st_2632_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2647_ = v_st_2632_;
v_isShared_2648_ = v_isSharedCheck_2726_;
goto v_resetjp_2646_;
}
else
{
lean_inc(v_dateSecond_2645_);
lean_inc(v_pendingHead_2644_);
lean_inc(v_expectData_2642_);
lean_inc(v_respStream_2640_);
lean_inc(v_response_2639_);
lean_inc(v_headerTimeout_2638_);
lean_inc(v_currentTimeout_2637_);
lean_inc(v_keepAliveTimeout_2636_);
lean_inc(v_requestStream_2635_);
lean_inc(v_machine_2634_);
lean_dec(v_st_2632_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2726_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v___y_2650_; lean_object* v_reader_2659_; lean_object* v_state_2660_; 
v_reader_2659_ = lean_ctor_get(v_machine_2634_, 0);
lean_inc_ref(v_reader_2659_);
v_state_2660_ = lean_ctor_get(v_reader_2659_, 0);
lean_inc(v_state_2660_);
if (lean_obj_tag(v_state_2660_) == 6)
{
lean_dec_ref(v_reader_2659_);
lean_dec_ref(v_val_2630_);
v___y_2650_ = v_machine_2634_;
goto v___jp_2649_;
}
else
{
if (lean_obj_tag(v_state_2660_) == 7)
{
lean_dec_ref_known(v_state_2660_, 1);
lean_dec_ref(v_reader_2659_);
lean_dec_ref(v_val_2630_);
v___y_2650_ = v_machine_2634_;
goto v___jp_2649_;
}
else
{
lean_object* v_input_2661_; lean_object* v_writer_2662_; lean_object* v_config_2663_; lean_object* v_events_2664_; lean_object* v_error_2665_; lean_object* v_date_2666_; uint8_t v_keepAlive_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2724_; 
v_input_2661_ = lean_ctor_get(v_reader_2659_, 1);
lean_inc_ref(v_input_2661_);
v_writer_2662_ = lean_ctor_get(v_machine_2634_, 1);
v_config_2663_ = lean_ctor_get(v_machine_2634_, 2);
v_events_2664_ = lean_ctor_get(v_machine_2634_, 3);
v_error_2665_ = lean_ctor_get(v_machine_2634_, 4);
v_date_2666_ = lean_ctor_get(v_machine_2634_, 5);
v_keepAlive_2667_ = lean_ctor_get_uint8(v_machine_2634_, sizeof(void*)*6);
v_isSharedCheck_2724_ = !lean_is_exclusive(v_machine_2634_);
if (v_isSharedCheck_2724_ == 0)
{
lean_object* v_unused_2725_; 
v_unused_2725_ = lean_ctor_get(v_machine_2634_, 0);
lean_dec(v_unused_2725_);
v___x_2669_ = v_machine_2634_;
v_isShared_2670_ = v_isSharedCheck_2724_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_date_2666_);
lean_inc(v_error_2665_);
lean_inc(v_events_2664_);
lean_inc(v_config_2663_);
lean_inc(v_writer_2662_);
lean_dec(v_machine_2634_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2724_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
lean_object* v_messageHead_2671_; lean_object* v_messageCount_2672_; lean_object* v_bodyBytesRead_2673_; lean_object* v_headerBytesRead_2674_; uint8_t v_noMoreInput_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2721_; 
v_messageHead_2671_ = lean_ctor_get(v_reader_2659_, 2);
v_messageCount_2672_ = lean_ctor_get(v_reader_2659_, 3);
v_bodyBytesRead_2673_ = lean_ctor_get(v_reader_2659_, 4);
v_headerBytesRead_2674_ = lean_ctor_get(v_reader_2659_, 5);
v_noMoreInput_2675_ = lean_ctor_get_uint8(v_reader_2659_, sizeof(void*)*6);
v_isSharedCheck_2721_ = !lean_is_exclusive(v_reader_2659_);
if (v_isSharedCheck_2721_ == 0)
{
lean_object* v_unused_2722_; lean_object* v_unused_2723_; 
v_unused_2722_ = lean_ctor_get(v_reader_2659_, 1);
lean_dec(v_unused_2722_);
v_unused_2723_ = lean_ctor_get(v_reader_2659_, 0);
lean_dec(v_unused_2723_);
v___x_2677_ = v_reader_2659_;
v_isShared_2678_ = v_isSharedCheck_2721_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_headerBytesRead_2674_);
lean_inc(v_bodyBytesRead_2673_);
lean_inc(v_messageCount_2672_);
lean_inc(v_messageHead_2671_);
lean_dec(v_reader_2659_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2721_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v_array_2679_; lean_object* v_idx_2680_; uint8_t v___x_2681_; lean_object* v___y_2683_; lean_object* v___x_2712_; uint8_t v___x_2713_; 
v_array_2679_ = lean_ctor_get(v_input_2661_, 0);
lean_inc_ref(v_array_2679_);
v_idx_2680_ = lean_ctor_get(v_input_2661_, 1);
lean_inc(v_idx_2680_);
lean_dec_ref(v_input_2661_);
v___x_2681_ = 0;
v___x_2712_ = lean_byte_array_size(v_array_2679_);
v___x_2713_ = lean_nat_dec_le(v___x_2712_, v_idx_2680_);
if (v___x_2713_ == 0)
{
lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; 
v___x_2714_ = l_ByteArray_extract(v_array_2679_, v_idx_2680_, v___x_2712_);
lean_dec_ref(v_array_2679_);
v___x_2715_ = lean_unsigned_to_nat(0u);
v___x_2716_ = lean_byte_array_size(v___x_2714_);
v___x_2717_ = lean_byte_array_size(v_val_2630_);
v___x_2718_ = lean_byte_array_copy_slice(v_val_2630_, v___x_2715_, v___x_2714_, v___x_2716_, v___x_2717_, v___x_2713_);
lean_dec_ref(v_val_2630_);
v___x_2719_ = l_ByteArray_mkIterator(v___x_2718_);
v___y_2683_ = v___x_2719_;
goto v___jp_2682_;
}
else
{
lean_object* v___x_2720_; 
lean_dec(v_idx_2680_);
lean_dec_ref(v_array_2679_);
v___x_2720_ = l_ByteArray_mkIterator(v_val_2630_);
v___y_2683_ = v___x_2720_;
goto v___jp_2682_;
}
v___jp_2682_:
{
lean_object* v_maxHeaderBytes_2684_; lean_object* v_maxStartLineLength_2685_; lean_object* v_maxChunkLineLength_2686_; lean_object* v_maxBodySize_2687_; lean_object* v_array_2688_; lean_object* v_idx_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; uint8_t v___x_2695_; 
v_maxHeaderBytes_2684_ = lean_ctor_get(v_config_2663_, 2);
v_maxStartLineLength_2685_ = lean_ctor_get(v_config_2663_, 5);
v_maxChunkLineLength_2686_ = lean_ctor_get(v_config_2663_, 13);
v_maxBodySize_2687_ = lean_ctor_get(v_config_2663_, 15);
v_array_2688_ = lean_ctor_get(v___y_2683_, 0);
v_idx_2689_ = lean_ctor_get(v___y_2683_, 1);
v___x_2690_ = lean_nat_add(v_maxBodySize_2687_, v_maxHeaderBytes_2684_);
v___x_2691_ = lean_nat_add(v___x_2690_, v_maxStartLineLength_2685_);
lean_dec(v___x_2690_);
v___x_2692_ = lean_nat_add(v___x_2691_, v_maxChunkLineLength_2686_);
lean_dec(v___x_2691_);
v___x_2693_ = lean_byte_array_size(v_array_2688_);
v___x_2694_ = lean_nat_sub(v___x_2693_, v_idx_2689_);
v___x_2695_ = lean_nat_dec_lt(v___x_2692_, v___x_2694_);
lean_dec(v___x_2694_);
lean_dec(v___x_2692_);
if (v___x_2695_ == 0)
{
lean_object* v___x_2697_; 
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 1, v___y_2683_);
v___x_2697_ = v___x_2677_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_state_2660_);
lean_ctor_set(v_reuseFailAlloc_2701_, 1, v___y_2683_);
lean_ctor_set(v_reuseFailAlloc_2701_, 2, v_messageHead_2671_);
lean_ctor_set(v_reuseFailAlloc_2701_, 3, v_messageCount_2672_);
lean_ctor_set(v_reuseFailAlloc_2701_, 4, v_bodyBytesRead_2673_);
lean_ctor_set(v_reuseFailAlloc_2701_, 5, v_headerBytesRead_2674_);
lean_ctor_set_uint8(v_reuseFailAlloc_2701_, sizeof(void*)*6, v_noMoreInput_2675_);
v___x_2697_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
lean_object* v_machine_2699_; 
if (v_isShared_2670_ == 0)
{
lean_ctor_set(v___x_2669_, 0, v___x_2697_);
v_machine_2699_ = v___x_2669_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v___x_2697_);
lean_ctor_set(v_reuseFailAlloc_2700_, 1, v_writer_2662_);
lean_ctor_set(v_reuseFailAlloc_2700_, 2, v_config_2663_);
lean_ctor_set(v_reuseFailAlloc_2700_, 3, v_events_2664_);
lean_ctor_set(v_reuseFailAlloc_2700_, 4, v_error_2665_);
lean_ctor_set(v_reuseFailAlloc_2700_, 5, v_date_2666_);
lean_ctor_set_uint8(v_reuseFailAlloc_2700_, sizeof(void*)*6, v_keepAlive_2667_);
v_machine_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
lean_ctor_set_uint8(v_machine_2699_, sizeof(void*)*6 + 1, v___x_2681_);
v___y_2650_ = v_machine_2699_;
goto v___jp_2649_;
}
}
}
else
{
lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2706_; 
lean_dec(v_error_2665_);
lean_dec(v_state_2660_);
v___x_2702_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__0));
v___x_2703_ = lean_array_push(v_events_2664_, v___x_2702_);
v___x_2704_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__1));
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 1, v___y_2683_);
lean_ctor_set(v___x_2677_, 0, v___x_2704_);
v___x_2706_ = v___x_2677_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2711_; 
v_reuseFailAlloc_2711_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_2711_, 0, v___x_2704_);
lean_ctor_set(v_reuseFailAlloc_2711_, 1, v___y_2683_);
lean_ctor_set(v_reuseFailAlloc_2711_, 2, v_messageHead_2671_);
lean_ctor_set(v_reuseFailAlloc_2711_, 3, v_messageCount_2672_);
lean_ctor_set(v_reuseFailAlloc_2711_, 4, v_bodyBytesRead_2673_);
lean_ctor_set(v_reuseFailAlloc_2711_, 5, v_headerBytesRead_2674_);
lean_ctor_set_uint8(v_reuseFailAlloc_2711_, sizeof(void*)*6, v_noMoreInput_2675_);
v___x_2706_ = v_reuseFailAlloc_2711_;
goto v_reusejp_2705_;
}
v_reusejp_2705_:
{
lean_object* v___x_2707_; lean_object* v___x_2709_; 
v___x_2707_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___closed__2));
if (v_isShared_2670_ == 0)
{
lean_ctor_set(v___x_2669_, 4, v___x_2707_);
lean_ctor_set(v___x_2669_, 3, v___x_2703_);
lean_ctor_set(v___x_2669_, 0, v___x_2706_);
v___x_2709_ = v___x_2669_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v___x_2706_);
lean_ctor_set(v_reuseFailAlloc_2710_, 1, v_writer_2662_);
lean_ctor_set(v_reuseFailAlloc_2710_, 2, v_config_2663_);
lean_ctor_set(v_reuseFailAlloc_2710_, 3, v___x_2703_);
lean_ctor_set(v_reuseFailAlloc_2710_, 4, v___x_2707_);
lean_ctor_set(v_reuseFailAlloc_2710_, 5, v_date_2666_);
lean_ctor_set_uint8(v_reuseFailAlloc_2710_, sizeof(void*)*6, v_keepAlive_2667_);
v___x_2709_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
lean_ctor_set_uint8(v___x_2709_, sizeof(void*)*6 + 1, v___x_2681_);
v___y_2650_ = v___x_2709_;
goto v___jp_2649_;
}
}
}
}
}
}
}
}
v___jp_2649_:
{
lean_object* v___x_2652_; 
if (v_isShared_2648_ == 0)
{
lean_ctor_set(v___x_2647_, 0, v___y_2650_);
v___x_2652_ = v___x_2647_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v___y_2650_);
lean_ctor_set(v_reuseFailAlloc_2658_, 1, v_requestStream_2635_);
lean_ctor_set(v_reuseFailAlloc_2658_, 2, v_keepAliveTimeout_2636_);
lean_ctor_set(v_reuseFailAlloc_2658_, 3, v_currentTimeout_2637_);
lean_ctor_set(v_reuseFailAlloc_2658_, 4, v_headerTimeout_2638_);
lean_ctor_set(v_reuseFailAlloc_2658_, 5, v_response_2639_);
lean_ctor_set(v_reuseFailAlloc_2658_, 6, v_respStream_2640_);
lean_ctor_set(v_reuseFailAlloc_2658_, 7, v_expectData_2642_);
lean_ctor_set(v_reuseFailAlloc_2658_, 8, v_pendingHead_2644_);
lean_ctor_set(v_reuseFailAlloc_2658_, 9, v_dateSecond_2645_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, sizeof(void*)*10, v_requiresData_2641_);
lean_ctor_set_uint8(v_reuseFailAlloc_2658_, sizeof(void*)*10 + 1, v_handlerDispatched_2643_);
v___x_2652_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
uint8_t v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2653_ = 0;
v___x_2654_ = lean_box(v___x_2653_);
v___x_2655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2655_, 0, v___x_2652_);
lean_ctor_set(v___x_2655_, 1, v___x_2654_);
v___x_2656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2655_);
v___x_2657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2656_);
return v___x_2657_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___boxed(lean_object* v_val_2727_, lean_object* v_____r_2728_, lean_object* v_st_2729_, lean_object* v___y_2730_){
_start:
{
lean_object* v_res_2731_; 
v_res_2731_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(v_val_2727_, v_____r_2728_, v_st_2729_);
return v_res_2731_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1(lean_object* v_config_2732_, lean_object* v_machine_2733_, lean_object* v_requestStream_2734_, lean_object* v_currentTimeout_2735_, lean_object* v_response_2736_, lean_object* v_respStream_2737_, uint8_t v_requiresData_2738_, lean_object* v_expectData_2739_, uint8_t v_handlerDispatched_2740_, lean_object* v_pendingHead_2741_, lean_object* v_dateSecond_2742_, lean_object* v___f_2743_, lean_object* v_x_2744_){
_start:
{
if (lean_obj_tag(v_x_2744_) == 0)
{
lean_object* v_a_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2754_; 
lean_dec_ref(v___f_2743_);
lean_dec(v_dateSecond_2742_);
lean_dec(v_pendingHead_2741_);
lean_dec(v_expectData_2739_);
lean_dec(v_respStream_2737_);
lean_dec_ref(v_response_2736_);
lean_dec(v_currentTimeout_2735_);
lean_dec_ref(v_requestStream_2734_);
lean_dec_ref(v_machine_2733_);
v_a_2746_ = lean_ctor_get(v_x_2744_, 0);
v_isSharedCheck_2754_ = !lean_is_exclusive(v_x_2744_);
if (v_isSharedCheck_2754_ == 0)
{
v___x_2748_ = v_x_2744_;
v_isShared_2749_ = v_isSharedCheck_2754_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_a_2746_);
lean_dec(v_x_2744_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2754_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2751_; 
if (v_isShared_2749_ == 0)
{
v___x_2751_ = v___x_2748_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v_a_2746_);
v___x_2751_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
lean_object* v___x_2752_; 
v___x_2752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2752_, 0, v___x_2751_);
return v___x_2752_;
}
}
}
else
{
lean_object* v_a_2755_; lean_object* v_headerTimeout_2756_; lean_object* v_second_2757_; lean_object* v_nano_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v_second_2762_; lean_object* v_nano_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v_nanos_2767_; lean_object* v___x_2768_; lean_object* v_nanos_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; 
v_a_2755_ = lean_ctor_get(v_x_2744_, 0);
lean_inc(v_a_2755_);
lean_dec_ref_known(v_x_2744_, 1);
v_headerTimeout_2756_ = lean_ctor_get(v_config_2732_, 6);
v_second_2757_ = lean_ctor_get(v_a_2755_, 0);
lean_inc(v_second_2757_);
v_nano_2758_ = lean_ctor_get(v_a_2755_, 1);
lean_inc(v_nano_2758_);
lean_dec(v_a_2755_);
v___x_2759_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__2);
v___x_2760_ = lean_int_mul(v_headerTimeout_2756_, v___x_2759_);
v___x_2761_ = l_Std_Time_Duration_ofNanoseconds(v___x_2760_);
lean_dec(v___x_2760_);
v_second_2762_ = lean_ctor_get(v___x_2761_, 0);
lean_inc(v_second_2762_);
v_nano_2763_ = lean_ctor_get(v___x_2761_, 1);
lean_inc(v_nano_2763_);
lean_dec_ref(v___x_2761_);
v___x_2764_ = lean_box(0);
v___x_2765_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg___lam__12___closed__0);
v___x_2766_ = lean_int_mul(v_second_2757_, v___x_2765_);
lean_dec(v_second_2757_);
v_nanos_2767_ = lean_int_add(v___x_2766_, v_nano_2758_);
lean_dec(v_nano_2758_);
lean_dec(v___x_2766_);
v___x_2768_ = lean_int_mul(v_second_2762_, v___x_2765_);
lean_dec(v_second_2762_);
v_nanos_2769_ = lean_int_add(v___x_2768_, v_nano_2763_);
lean_dec(v_nano_2763_);
lean_dec(v___x_2768_);
v___x_2770_ = lean_int_add(v_nanos_2767_, v_nanos_2769_);
lean_dec(v_nanos_2769_);
lean_dec(v_nanos_2767_);
v___x_2771_ = l_Std_Time_Duration_ofNanoseconds(v___x_2770_);
lean_dec(v___x_2770_);
v___x_2772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2771_);
v___x_2773_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_2773_, 0, v_machine_2733_);
lean_ctor_set(v___x_2773_, 1, v_requestStream_2734_);
lean_ctor_set(v___x_2773_, 2, v___x_2764_);
lean_ctor_set(v___x_2773_, 3, v_currentTimeout_2735_);
lean_ctor_set(v___x_2773_, 4, v___x_2772_);
lean_ctor_set(v___x_2773_, 5, v_response_2736_);
lean_ctor_set(v___x_2773_, 6, v_respStream_2737_);
lean_ctor_set(v___x_2773_, 7, v_expectData_2739_);
lean_ctor_set(v___x_2773_, 8, v_pendingHead_2741_);
lean_ctor_set(v___x_2773_, 9, v_dateSecond_2742_);
lean_ctor_set_uint8(v___x_2773_, sizeof(void*)*10, v_requiresData_2738_);
lean_ctor_set_uint8(v___x_2773_, sizeof(void*)*10 + 1, v_handlerDispatched_2740_);
v___x_2774_ = lean_box(0);
v___x_2775_ = lean_apply_3(v___f_2743_, v___x_2774_, v___x_2773_, lean_box(0));
return v___x_2775_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1___boxed(lean_object* v_config_2776_, lean_object* v_machine_2777_, lean_object* v_requestStream_2778_, lean_object* v_currentTimeout_2779_, lean_object* v_response_2780_, lean_object* v_respStream_2781_, lean_object* v_requiresData_2782_, lean_object* v_expectData_2783_, lean_object* v_handlerDispatched_2784_, lean_object* v_pendingHead_2785_, lean_object* v_dateSecond_2786_, lean_object* v___f_2787_, lean_object* v_x_2788_, lean_object* v___y_2789_){
_start:
{
uint8_t v_requiresData_boxed_2790_; uint8_t v_handlerDispatched_boxed_2791_; lean_object* v_res_2792_; 
v_requiresData_boxed_2790_ = lean_unbox(v_requiresData_2782_);
v_handlerDispatched_boxed_2791_ = lean_unbox(v_handlerDispatched_2784_);
v_res_2792_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1(v_config_2776_, v_machine_2777_, v_requestStream_2778_, v_currentTimeout_2779_, v_response_2780_, v_respStream_2781_, v_requiresData_boxed_2790_, v_expectData_2783_, v_handlerDispatched_boxed_2791_, v_pendingHead_2785_, v_dateSecond_2786_, v___f_2787_, v_x_2788_);
lean_dec_ref(v_config_2776_);
return v_res_2792_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(lean_object* v_machine_2793_, lean_object* v_requestStream_2794_, lean_object* v_keepAliveTimeout_2795_, lean_object* v_currentTimeout_2796_, lean_object* v_headerTimeout_2797_, lean_object* v_response_2798_, uint8_t v_requiresData_2799_, lean_object* v_expectData_2800_, uint8_t v_handlerDispatched_2801_, lean_object* v_pendingHead_2802_, lean_object* v_dateSecond_2803_, lean_object* v_____r_2804_){
_start:
{
lean_object* v_writer_2806_; lean_object* v_reader_2807_; lean_object* v_config_2808_; lean_object* v_events_2809_; lean_object* v_error_2810_; lean_object* v_date_2811_; uint8_t v_keepAlive_2812_; uint8_t v_pullBodyStalled_2813_; lean_object* v___x_2815_; uint8_t v_isShared_2816_; uint8_t v_isSharedCheck_2843_; 
v_writer_2806_ = lean_ctor_get(v_machine_2793_, 1);
v_reader_2807_ = lean_ctor_get(v_machine_2793_, 0);
v_config_2808_ = lean_ctor_get(v_machine_2793_, 2);
v_events_2809_ = lean_ctor_get(v_machine_2793_, 3);
v_error_2810_ = lean_ctor_get(v_machine_2793_, 4);
v_date_2811_ = lean_ctor_get(v_machine_2793_, 5);
v_keepAlive_2812_ = lean_ctor_get_uint8(v_machine_2793_, sizeof(void*)*6);
v_pullBodyStalled_2813_ = lean_ctor_get_uint8(v_machine_2793_, sizeof(void*)*6 + 1);
v_isSharedCheck_2843_ = !lean_is_exclusive(v_machine_2793_);
if (v_isSharedCheck_2843_ == 0)
{
v___x_2815_ = v_machine_2793_;
v_isShared_2816_ = v_isSharedCheck_2843_;
goto v_resetjp_2814_;
}
else
{
lean_inc(v_date_2811_);
lean_inc(v_error_2810_);
lean_inc(v_events_2809_);
lean_inc(v_config_2808_);
lean_inc(v_writer_2806_);
lean_inc(v_reader_2807_);
lean_dec(v_machine_2793_);
v___x_2815_ = lean_box(0);
v_isShared_2816_ = v_isSharedCheck_2843_;
goto v_resetjp_2814_;
}
v_resetjp_2814_:
{
lean_object* v_userData_2817_; lean_object* v_outputData_2818_; lean_object* v_state_2819_; lean_object* v_knownSize_2820_; lean_object* v_messageHead_2821_; uint8_t v_sentMessage_2822_; uint8_t v_omitBody_2823_; lean_object* v_userDataBytes_2824_; lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2842_; 
v_userData_2817_ = lean_ctor_get(v_writer_2806_, 0);
v_outputData_2818_ = lean_ctor_get(v_writer_2806_, 1);
v_state_2819_ = lean_ctor_get(v_writer_2806_, 2);
v_knownSize_2820_ = lean_ctor_get(v_writer_2806_, 3);
v_messageHead_2821_ = lean_ctor_get(v_writer_2806_, 4);
v_sentMessage_2822_ = lean_ctor_get_uint8(v_writer_2806_, sizeof(void*)*6);
v_omitBody_2823_ = lean_ctor_get_uint8(v_writer_2806_, sizeof(void*)*6 + 2);
v_userDataBytes_2824_ = lean_ctor_get(v_writer_2806_, 5);
v_isSharedCheck_2842_ = !lean_is_exclusive(v_writer_2806_);
if (v_isSharedCheck_2842_ == 0)
{
v___x_2826_ = v_writer_2806_;
v_isShared_2827_ = v_isSharedCheck_2842_;
goto v_resetjp_2825_;
}
else
{
lean_inc(v_userDataBytes_2824_);
lean_inc(v_messageHead_2821_);
lean_inc(v_knownSize_2820_);
lean_inc(v_state_2819_);
lean_inc(v_outputData_2818_);
lean_inc(v_userData_2817_);
lean_dec(v_writer_2806_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2842_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
uint8_t v___x_2828_; lean_object* v___x_2830_; 
v___x_2828_ = 1;
if (v_isShared_2827_ == 0)
{
v___x_2830_ = v___x_2826_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v_userData_2817_);
lean_ctor_set(v_reuseFailAlloc_2841_, 1, v_outputData_2818_);
lean_ctor_set(v_reuseFailAlloc_2841_, 2, v_state_2819_);
lean_ctor_set(v_reuseFailAlloc_2841_, 3, v_knownSize_2820_);
lean_ctor_set(v_reuseFailAlloc_2841_, 4, v_messageHead_2821_);
lean_ctor_set(v_reuseFailAlloc_2841_, 5, v_userDataBytes_2824_);
lean_ctor_set_uint8(v_reuseFailAlloc_2841_, sizeof(void*)*6, v_sentMessage_2822_);
lean_ctor_set_uint8(v_reuseFailAlloc_2841_, sizeof(void*)*6 + 2, v_omitBody_2823_);
v___x_2830_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
lean_object* v___x_2832_; 
lean_ctor_set_uint8(v___x_2830_, sizeof(void*)*6 + 1, v___x_2828_);
if (v_isShared_2816_ == 0)
{
lean_ctor_set(v___x_2815_, 1, v___x_2830_);
v___x_2832_ = v___x_2815_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_reader_2807_);
lean_ctor_set(v_reuseFailAlloc_2840_, 1, v___x_2830_);
lean_ctor_set(v_reuseFailAlloc_2840_, 2, v_config_2808_);
lean_ctor_set(v_reuseFailAlloc_2840_, 3, v_events_2809_);
lean_ctor_set(v_reuseFailAlloc_2840_, 4, v_error_2810_);
lean_ctor_set(v_reuseFailAlloc_2840_, 5, v_date_2811_);
lean_ctor_set_uint8(v_reuseFailAlloc_2840_, sizeof(void*)*6, v_keepAlive_2812_);
lean_ctor_set_uint8(v_reuseFailAlloc_2840_, sizeof(void*)*6 + 1, v_pullBodyStalled_2813_);
v___x_2832_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
lean_object* v___x_2833_; lean_object* v___x_2834_; uint8_t v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2833_ = lean_box(0);
v___x_2834_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_2834_, 0, v___x_2832_);
lean_ctor_set(v___x_2834_, 1, v_requestStream_2794_);
lean_ctor_set(v___x_2834_, 2, v_keepAliveTimeout_2795_);
lean_ctor_set(v___x_2834_, 3, v_currentTimeout_2796_);
lean_ctor_set(v___x_2834_, 4, v_headerTimeout_2797_);
lean_ctor_set(v___x_2834_, 5, v_response_2798_);
lean_ctor_set(v___x_2834_, 6, v___x_2833_);
lean_ctor_set(v___x_2834_, 7, v_expectData_2800_);
lean_ctor_set(v___x_2834_, 8, v_pendingHead_2802_);
lean_ctor_set(v___x_2834_, 9, v_dateSecond_2803_);
lean_ctor_set_uint8(v___x_2834_, sizeof(void*)*10, v_requiresData_2799_);
lean_ctor_set_uint8(v___x_2834_, sizeof(void*)*10 + 1, v_handlerDispatched_2801_);
v___x_2835_ = 0;
v___x_2836_ = lean_box(v___x_2835_);
v___x_2837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2837_, 0, v___x_2834_);
lean_ctor_set(v___x_2837_, 1, v___x_2836_);
v___x_2838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2838_, 0, v___x_2837_);
v___x_2839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2838_);
return v___x_2839_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2___boxed(lean_object* v_machine_2844_, lean_object* v_requestStream_2845_, lean_object* v_keepAliveTimeout_2846_, lean_object* v_currentTimeout_2847_, lean_object* v_headerTimeout_2848_, lean_object* v_response_2849_, lean_object* v_requiresData_2850_, lean_object* v_expectData_2851_, lean_object* v_handlerDispatched_2852_, lean_object* v_pendingHead_2853_, lean_object* v_dateSecond_2854_, lean_object* v_____r_2855_, lean_object* v___y_2856_){
_start:
{
uint8_t v_requiresData_boxed_2857_; uint8_t v_handlerDispatched_boxed_2858_; lean_object* v_res_2859_; 
v_requiresData_boxed_2857_ = lean_unbox(v_requiresData_2850_);
v_handlerDispatched_boxed_2858_ = lean_unbox(v_handlerDispatched_2852_);
v_res_2859_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(v_machine_2844_, v_requestStream_2845_, v_keepAliveTimeout_2846_, v_currentTimeout_2847_, v_headerTimeout_2848_, v_response_2849_, v_requiresData_boxed_2857_, v_expectData_2851_, v_handlerDispatched_boxed_2858_, v_pendingHead_2853_, v_dateSecond_2854_, v_____r_2855_);
return v_res_2859_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3(lean_object* v___f_2860_, lean_object* v_x_2861_){
_start:
{
if (lean_obj_tag(v_x_2861_) == 0)
{
lean_object* v_a_2863_; lean_object* v___x_2865_; uint8_t v_isShared_2866_; uint8_t v_isSharedCheck_2871_; 
lean_dec_ref(v___f_2860_);
v_a_2863_ = lean_ctor_get(v_x_2861_, 0);
v_isSharedCheck_2871_ = !lean_is_exclusive(v_x_2861_);
if (v_isSharedCheck_2871_ == 0)
{
v___x_2865_ = v_x_2861_;
v_isShared_2866_ = v_isSharedCheck_2871_;
goto v_resetjp_2864_;
}
else
{
lean_inc(v_a_2863_);
lean_dec(v_x_2861_);
v___x_2865_ = lean_box(0);
v_isShared_2866_ = v_isSharedCheck_2871_;
goto v_resetjp_2864_;
}
v_resetjp_2864_:
{
lean_object* v___x_2868_; 
if (v_isShared_2866_ == 0)
{
v___x_2868_ = v___x_2865_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v_a_2863_);
v___x_2868_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
lean_object* v___x_2869_; 
v___x_2869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2869_, 0, v___x_2868_);
return v___x_2869_;
}
}
}
else
{
lean_object* v_a_2872_; lean_object* v___x_2873_; 
v_a_2872_ = lean_ctor_get(v_x_2861_, 0);
lean_inc(v_a_2872_);
lean_dec_ref_known(v_x_2861_, 1);
v___x_2873_ = lean_apply_2(v___f_2860_, v_a_2872_, lean_box(0));
return v___x_2873_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed(lean_object* v___f_2874_, lean_object* v_x_2875_, lean_object* v___y_2876_){
_start:
{
lean_object* v_res_2877_; 
v_res_2877_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3(v___f_2874_, v_x_2875_);
return v_res_2877_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4(lean_object* v_close_2878_, lean_object* v_val_2879_, lean_object* v___f_2880_, lean_object* v___f_2881_, lean_object* v_x_2882_){
_start:
{
if (lean_obj_tag(v_x_2882_) == 0)
{
lean_object* v_a_2884_; lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2892_; 
lean_dec_ref(v___f_2881_);
lean_dec_ref(v___f_2880_);
lean_dec(v_val_2879_);
lean_dec_ref(v_close_2878_);
v_a_2884_ = lean_ctor_get(v_x_2882_, 0);
v_isSharedCheck_2892_ = !lean_is_exclusive(v_x_2882_);
if (v_isSharedCheck_2892_ == 0)
{
v___x_2886_ = v_x_2882_;
v_isShared_2887_ = v_isSharedCheck_2892_;
goto v_resetjp_2885_;
}
else
{
lean_inc(v_a_2884_);
lean_dec(v_x_2882_);
v___x_2886_ = lean_box(0);
v_isShared_2887_ = v_isSharedCheck_2892_;
goto v_resetjp_2885_;
}
v_resetjp_2885_:
{
lean_object* v___x_2889_; 
if (v_isShared_2887_ == 0)
{
v___x_2889_ = v___x_2886_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v_a_2884_);
v___x_2889_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2888_;
}
v_reusejp_2888_:
{
lean_object* v___x_2890_; 
v___x_2890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2890_, 0, v___x_2889_);
return v___x_2890_;
}
}
}
else
{
lean_object* v_a_2893_; uint8_t v___x_2894_; 
v_a_2893_ = lean_ctor_get(v_x_2882_, 0);
lean_inc(v_a_2893_);
lean_dec_ref_known(v_x_2882_, 1);
v___x_2894_ = lean_unbox(v_a_2893_);
if (v___x_2894_ == 0)
{
lean_object* v___x_2895_; lean_object* v___x_2896_; uint8_t v___x_2897_; lean_object* v___x_2898_; 
lean_dec_ref(v___f_2881_);
v___x_2895_ = lean_unsigned_to_nat(0u);
v___x_2896_ = lean_apply_2(v_close_2878_, v_val_2879_, lean_box(0));
v___x_2897_ = lean_unbox(v_a_2893_);
lean_dec(v_a_2893_);
v___x_2898_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2895_, v___x_2897_, v___x_2896_, v___f_2880_);
return v___x_2898_;
}
else
{
lean_object* v___x_2899_; lean_object* v___x_2900_; 
lean_dec(v_a_2893_);
lean_dec_ref(v___f_2880_);
lean_dec(v_val_2879_);
lean_dec_ref(v_close_2878_);
v___x_2899_ = lean_box(0);
v___x_2900_ = lean_apply_2(v___f_2881_, v___x_2899_, lean_box(0));
return v___x_2900_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4___boxed(lean_object* v_close_2901_, lean_object* v_val_2902_, lean_object* v___f_2903_, lean_object* v___f_2904_, lean_object* v_x_2905_, lean_object* v___y_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4(v_close_2901_, v_val_2902_, v___f_2903_, v___f_2904_, v_x_2905_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7(lean_object* v_inst_2908_, lean_object* v_handler_2909_, lean_object* v_x_2910_){
_start:
{
if (lean_obj_tag(v_x_2910_) == 0)
{
lean_object* v_a_2912_; lean_object* v_onFailure_2913_; lean_object* v___x_2914_; 
v_a_2912_ = lean_ctor_get(v_x_2910_, 0);
lean_inc(v_a_2912_);
lean_dec_ref_known(v_x_2910_, 1);
v_onFailure_2913_ = lean_ctor_get(v_inst_2908_, 2);
lean_inc_ref(v_onFailure_2913_);
lean_dec_ref(v_inst_2908_);
v___x_2914_ = lean_apply_3(v_onFailure_2913_, v_handler_2909_, v_a_2912_, lean_box(0));
return v___x_2914_;
}
else
{
lean_object* v___x_2915_; 
lean_dec(v_handler_2909_);
lean_dec_ref(v_inst_2908_);
v___x_2915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2915_, 0, v_x_2910_);
return v___x_2915_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7___boxed(lean_object* v_inst_2916_, lean_object* v_handler_2917_, lean_object* v_x_2918_, lean_object* v___y_2919_){
_start:
{
lean_object* v_res_2920_; 
v_res_2920_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7(v_inst_2916_, v_handler_2917_, v_x_2918_);
return v_res_2920_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(lean_object* v_st_2921_, lean_object* v_____r_2922_){
_start:
{
uint8_t v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; 
v___x_2924_ = 0;
v___x_2925_ = lean_box(v___x_2924_);
v___x_2926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2926_, 0, v_st_2921_);
lean_ctor_set(v___x_2926_, 1, v___x_2925_);
v___x_2927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2927_, 0, v___x_2926_);
v___x_2928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2928_, 0, v___x_2927_);
return v___x_2928_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5___boxed(lean_object* v_st_2929_, lean_object* v_____r_2930_, lean_object* v___y_2931_){
_start:
{
lean_object* v_res_2932_; 
v_res_2932_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(v_st_2929_, v_____r_2930_);
return v_res_2932_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8(lean_object* v_requestStream_2933_, lean_object* v___f_2934_, lean_object* v___f_2935_, lean_object* v_x_2936_){
_start:
{
if (lean_obj_tag(v_x_2936_) == 0)
{
lean_object* v_a_2938_; lean_object* v___x_2940_; uint8_t v_isShared_2941_; uint8_t v_isSharedCheck_2946_; 
lean_dec_ref(v___f_2935_);
lean_dec_ref(v___f_2934_);
lean_dec_ref(v_requestStream_2933_);
v_a_2938_ = lean_ctor_get(v_x_2936_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v_x_2936_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2940_ = v_x_2936_;
v_isShared_2941_ = v_isSharedCheck_2946_;
goto v_resetjp_2939_;
}
else
{
lean_inc(v_a_2938_);
lean_dec(v_x_2936_);
v___x_2940_ = lean_box(0);
v_isShared_2941_ = v_isSharedCheck_2946_;
goto v_resetjp_2939_;
}
v_resetjp_2939_:
{
lean_object* v___x_2943_; 
if (v_isShared_2941_ == 0)
{
v___x_2943_ = v___x_2940_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v_a_2938_);
v___x_2943_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
lean_object* v___x_2944_; 
v___x_2944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2943_);
return v___x_2944_;
}
}
}
else
{
lean_object* v_a_2947_; uint8_t v___x_2948_; 
v_a_2947_ = lean_ctor_get(v_x_2936_, 0);
lean_inc(v_a_2947_);
lean_dec_ref_known(v_x_2936_, 1);
v___x_2948_ = lean_unbox(v_a_2947_);
if (v___x_2948_ == 0)
{
lean_object* v___x_2949_; lean_object* v___x_2950_; uint8_t v___x_2951_; lean_object* v___x_2952_; 
lean_dec_ref(v___f_2935_);
v___x_2949_ = lean_unsigned_to_nat(0u);
v___x_2950_ = l_Std_Http_Body_Stream_close(v_requestStream_2933_);
v___x_2951_ = lean_unbox(v_a_2947_);
lean_dec(v_a_2947_);
v___x_2952_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2949_, v___x_2951_, v___x_2950_, v___f_2934_);
return v___x_2952_;
}
else
{
lean_object* v___x_2953_; lean_object* v___x_2954_; 
lean_dec(v_a_2947_);
lean_dec_ref(v___f_2934_);
lean_dec_ref(v_requestStream_2933_);
v___x_2953_ = lean_box(0);
v___x_2954_ = lean_apply_2(v___f_2935_, v___x_2953_, lean_box(0));
return v___x_2954_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8___boxed(lean_object* v_requestStream_2955_, lean_object* v___f_2956_, lean_object* v___f_2957_, lean_object* v_x_2958_, lean_object* v___y_2959_){
_start:
{
lean_object* v_res_2960_; 
v_res_2960_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8(v_requestStream_2955_, v___f_2956_, v___f_2957_, v_x_2958_);
return v_res_2960_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6(uint8_t v_final_2961_, lean_object* v___f_2962_, lean_object* v___f_2963_, lean_object* v_requestStream_2964_, lean_object* v___f_2965_, lean_object* v_x_2966_){
_start:
{
if (lean_obj_tag(v_x_2966_) == 0)
{
lean_object* v_a_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2976_; 
lean_dec_ref(v___f_2965_);
lean_dec_ref(v_requestStream_2964_);
lean_dec_ref(v___f_2963_);
lean_dec_ref(v___f_2962_);
v_a_2968_ = lean_ctor_get(v_x_2966_, 0);
v_isSharedCheck_2976_ = !lean_is_exclusive(v_x_2966_);
if (v_isSharedCheck_2976_ == 0)
{
v___x_2970_ = v_x_2966_;
v_isShared_2971_ = v_isSharedCheck_2976_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_a_2968_);
lean_dec(v_x_2966_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2976_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2973_; 
if (v_isShared_2971_ == 0)
{
v___x_2973_ = v___x_2970_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v_a_2968_);
v___x_2973_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
lean_object* v___x_2974_; 
v___x_2974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2973_);
return v___x_2974_;
}
}
}
else
{
lean_dec_ref_known(v_x_2966_, 1);
if (v_final_2961_ == 0)
{
lean_object* v___x_2977_; lean_object* v___x_2978_; 
lean_dec_ref(v___f_2965_);
lean_dec_ref(v_requestStream_2964_);
lean_dec_ref(v___f_2963_);
v___x_2977_ = lean_box(0);
v___x_2978_ = lean_apply_2(v___f_2962_, v___x_2977_, lean_box(0));
return v___x_2978_;
}
else
{
lean_object* v___x_2979_; uint8_t v___x_2980_; lean_object* v___x_2981_; lean_object* v___f_2982_; lean_object* v___f_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_7029__overap_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; 
lean_dec_ref(v___f_2962_);
v___x_2979_ = lean_unsigned_to_nat(0u);
v___x_2980_ = 0;
v___x_2981_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_2982_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_2983_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_2984_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_2985_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_2985_, 0, lean_box(0));
lean_closure_set(v___x_2985_, 1, lean_box(0));
lean_closure_set(v___x_2985_, 2, v___x_2981_);
lean_closure_set(v___x_2985_, 3, lean_box(0));
lean_closure_set(v___x_2985_, 4, lean_box(0));
lean_closure_set(v___x_2985_, 5, v___x_2984_);
lean_closure_set(v___x_2985_, 6, v___f_2963_);
v___x_7029__overap_2986_ = l_Std_Mutex_atomically___redArg(v___x_2981_, v___f_2982_, v___f_2983_, v_requestStream_2964_, v___x_2985_);
v___x_2987_ = lean_apply_1(v___x_7029__overap_2986_, lean_box(0));
v___x_2988_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_2979_, v___x_2980_, v___x_2987_, v___f_2965_);
return v___x_2988_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6___boxed(lean_object* v_final_2989_, lean_object* v___f_2990_, lean_object* v___f_2991_, lean_object* v_requestStream_2992_, lean_object* v___f_2993_, lean_object* v_x_2994_, lean_object* v___y_2995_){
_start:
{
uint8_t v_final_boxed_2996_; lean_object* v_res_2997_; 
v_final_boxed_2996_ = lean_unbox(v_final_2989_);
v_res_2997_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6(v_final_boxed_2996_, v___f_2990_, v___f_2991_, v_requestStream_2992_, v___f_2993_, v_x_2994_);
return v_res_2997_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9(lean_object* v_state_2998_, lean_object* v_x_2999_){
_start:
{
if (lean_obj_tag(v_x_2999_) == 0)
{
lean_object* v_a_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3009_; 
lean_dec_ref(v_state_2998_);
v_a_3001_ = lean_ctor_get(v_x_2999_, 0);
v_isSharedCheck_3009_ = !lean_is_exclusive(v_x_2999_);
if (v_isSharedCheck_3009_ == 0)
{
v___x_3003_ = v_x_2999_;
v_isShared_3004_ = v_isSharedCheck_3009_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_a_3001_);
lean_dec(v_x_2999_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3009_;
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
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v_a_3001_);
v___x_3006_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
lean_object* v___x_3007_; 
v___x_3007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3007_, 0, v___x_3006_);
return v___x_3007_;
}
}
}
else
{
lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3040_; 
v_isSharedCheck_3040_ = !lean_is_exclusive(v_x_2999_);
if (v_isSharedCheck_3040_ == 0)
{
lean_object* v_unused_3041_; 
v_unused_3041_ = lean_ctor_get(v_x_2999_, 0);
lean_dec(v_unused_3041_);
v___x_3011_ = v_x_2999_;
v_isShared_3012_ = v_isSharedCheck_3040_;
goto v_resetjp_3010_;
}
else
{
lean_dec(v_x_2999_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3040_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v_machine_3013_; lean_object* v_requestStream_3014_; lean_object* v_keepAliveTimeout_3015_; lean_object* v_currentTimeout_3016_; lean_object* v_headerTimeout_3017_; lean_object* v_response_3018_; lean_object* v_respStream_3019_; uint8_t v_requiresData_3020_; lean_object* v_expectData_3021_; lean_object* v_pendingHead_3022_; lean_object* v_dateSecond_3023_; lean_object* v___x_3025_; uint8_t v_isShared_3026_; uint8_t v_isSharedCheck_3039_; 
v_machine_3013_ = lean_ctor_get(v_state_2998_, 0);
v_requestStream_3014_ = lean_ctor_get(v_state_2998_, 1);
v_keepAliveTimeout_3015_ = lean_ctor_get(v_state_2998_, 2);
v_currentTimeout_3016_ = lean_ctor_get(v_state_2998_, 3);
v_headerTimeout_3017_ = lean_ctor_get(v_state_2998_, 4);
v_response_3018_ = lean_ctor_get(v_state_2998_, 5);
v_respStream_3019_ = lean_ctor_get(v_state_2998_, 6);
v_requiresData_3020_ = lean_ctor_get_uint8(v_state_2998_, sizeof(void*)*10);
v_expectData_3021_ = lean_ctor_get(v_state_2998_, 7);
v_pendingHead_3022_ = lean_ctor_get(v_state_2998_, 8);
v_dateSecond_3023_ = lean_ctor_get(v_state_2998_, 9);
v_isSharedCheck_3039_ = !lean_is_exclusive(v_state_2998_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_3025_ = v_state_2998_;
v_isShared_3026_ = v_isSharedCheck_3039_;
goto v_resetjp_3024_;
}
else
{
lean_inc(v_dateSecond_3023_);
lean_inc(v_pendingHead_3022_);
lean_inc(v_expectData_3021_);
lean_inc(v_respStream_3019_);
lean_inc(v_response_3018_);
lean_inc(v_headerTimeout_3017_);
lean_inc(v_currentTimeout_3016_);
lean_inc(v_keepAliveTimeout_3015_);
lean_inc(v_requestStream_3014_);
lean_inc(v_machine_3013_);
lean_dec(v_state_2998_);
v___x_3025_ = lean_box(0);
v_isShared_3026_ = v_isSharedCheck_3039_;
goto v_resetjp_3024_;
}
v_resetjp_3024_:
{
lean_object* v___x_3027_; lean_object* v___x_3028_; uint8_t v___x_3029_; lean_object* v___x_3031_; 
v___x_3027_ = lean_box(52);
v___x_3028_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_3013_, v___x_3027_);
v___x_3029_ = 0;
if (v_isShared_3026_ == 0)
{
lean_ctor_set(v___x_3025_, 0, v___x_3028_);
v___x_3031_ = v___x_3025_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v___x_3028_);
lean_ctor_set(v_reuseFailAlloc_3038_, 1, v_requestStream_3014_);
lean_ctor_set(v_reuseFailAlloc_3038_, 2, v_keepAliveTimeout_3015_);
lean_ctor_set(v_reuseFailAlloc_3038_, 3, v_currentTimeout_3016_);
lean_ctor_set(v_reuseFailAlloc_3038_, 4, v_headerTimeout_3017_);
lean_ctor_set(v_reuseFailAlloc_3038_, 5, v_response_3018_);
lean_ctor_set(v_reuseFailAlloc_3038_, 6, v_respStream_3019_);
lean_ctor_set(v_reuseFailAlloc_3038_, 7, v_expectData_3021_);
lean_ctor_set(v_reuseFailAlloc_3038_, 8, v_pendingHead_3022_);
lean_ctor_set(v_reuseFailAlloc_3038_, 9, v_dateSecond_3023_);
lean_ctor_set_uint8(v_reuseFailAlloc_3038_, sizeof(void*)*10, v_requiresData_3020_);
v___x_3031_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3035_; 
lean_ctor_set_uint8(v___x_3031_, sizeof(void*)*10 + 1, v___x_3029_);
v___x_3032_ = lean_box(v___x_3029_);
v___x_3033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3033_, 0, v___x_3031_);
lean_ctor_set(v___x_3033_, 1, v___x_3032_);
if (v_isShared_3012_ == 0)
{
lean_ctor_set(v___x_3011_, 0, v___x_3033_);
v___x_3035_ = v___x_3011_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v___x_3033_);
v___x_3035_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
lean_object* v___x_3036_; 
v___x_3036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3036_, 0, v___x_3035_);
return v___x_3036_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9___boxed(lean_object* v_state_3042_, lean_object* v_x_3043_, lean_object* v___y_3044_){
_start:
{
lean_object* v_res_3045_; 
v_res_3045_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9(v_state_3042_, v_x_3043_);
return v_res_3045_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10(lean_object* v_machine_3046_, lean_object* v_requestStream_3047_, lean_object* v_keepAliveTimeout_3048_, lean_object* v_currentTimeout_3049_, lean_object* v_headerTimeout_3050_, lean_object* v_response_3051_, lean_object* v_respStream_3052_, uint8_t v_requiresData_3053_, lean_object* v_expectData_3054_, lean_object* v_pendingHead_3055_, lean_object* v_dateSecond_3056_, lean_object* v_____r_3057_){
_start:
{
uint8_t v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; 
v___x_3059_ = 0;
v___x_3060_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_3060_, 0, v_machine_3046_);
lean_ctor_set(v___x_3060_, 1, v_requestStream_3047_);
lean_ctor_set(v___x_3060_, 2, v_keepAliveTimeout_3048_);
lean_ctor_set(v___x_3060_, 3, v_currentTimeout_3049_);
lean_ctor_set(v___x_3060_, 4, v_headerTimeout_3050_);
lean_ctor_set(v___x_3060_, 5, v_response_3051_);
lean_ctor_set(v___x_3060_, 6, v_respStream_3052_);
lean_ctor_set(v___x_3060_, 7, v_expectData_3054_);
lean_ctor_set(v___x_3060_, 8, v_pendingHead_3055_);
lean_ctor_set(v___x_3060_, 9, v_dateSecond_3056_);
lean_ctor_set_uint8(v___x_3060_, sizeof(void*)*10, v_requiresData_3053_);
lean_ctor_set_uint8(v___x_3060_, sizeof(void*)*10 + 1, v___x_3059_);
v___x_3061_ = lean_box(v___x_3059_);
v___x_3062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3062_, 0, v___x_3060_);
lean_ctor_set(v___x_3062_, 1, v___x_3061_);
v___x_3063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3062_);
v___x_3064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3064_, 0, v___x_3063_);
return v___x_3064_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10___boxed(lean_object* v_machine_3065_, lean_object* v_requestStream_3066_, lean_object* v_keepAliveTimeout_3067_, lean_object* v_currentTimeout_3068_, lean_object* v_headerTimeout_3069_, lean_object* v_response_3070_, lean_object* v_respStream_3071_, lean_object* v_requiresData_3072_, lean_object* v_expectData_3073_, lean_object* v_pendingHead_3074_, lean_object* v_dateSecond_3075_, lean_object* v_____r_3076_, lean_object* v___y_3077_){
_start:
{
uint8_t v_requiresData_boxed_3078_; lean_object* v_res_3079_; 
v_requiresData_boxed_3078_ = lean_unbox(v_requiresData_3072_);
v_res_3079_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10(v_machine_3065_, v_requestStream_3066_, v_keepAliveTimeout_3067_, v_currentTimeout_3068_, v_headerTimeout_3069_, v_response_3070_, v_respStream_3071_, v_requiresData_boxed_3078_, v_expectData_3073_, v_pendingHead_3074_, v_dateSecond_3075_, v_____r_3076_);
return v_res_3079_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12(lean_object* v_close_3080_, lean_object* v_body_3081_, lean_object* v___f_3082_, lean_object* v___f_3083_, lean_object* v_x_3084_){
_start:
{
if (lean_obj_tag(v_x_3084_) == 0)
{
lean_object* v_a_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3094_; 
lean_dec_ref(v___f_3083_);
lean_dec_ref(v___f_3082_);
lean_dec(v_body_3081_);
lean_dec_ref(v_close_3080_);
v_a_3086_ = lean_ctor_get(v_x_3084_, 0);
v_isSharedCheck_3094_ = !lean_is_exclusive(v_x_3084_);
if (v_isSharedCheck_3094_ == 0)
{
v___x_3088_ = v_x_3084_;
v_isShared_3089_ = v_isSharedCheck_3094_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_a_3086_);
lean_dec(v_x_3084_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3094_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3091_; 
if (v_isShared_3089_ == 0)
{
v___x_3091_ = v___x_3088_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3093_; 
v_reuseFailAlloc_3093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3093_, 0, v_a_3086_);
v___x_3091_ = v_reuseFailAlloc_3093_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
lean_object* v___x_3092_; 
v___x_3092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3092_, 0, v___x_3091_);
return v___x_3092_;
}
}
}
else
{
lean_object* v_a_3095_; uint8_t v___x_3096_; 
v_a_3095_ = lean_ctor_get(v_x_3084_, 0);
lean_inc(v_a_3095_);
lean_dec_ref_known(v_x_3084_, 1);
v___x_3096_ = lean_unbox(v_a_3095_);
if (v___x_3096_ == 0)
{
lean_object* v___x_3097_; lean_object* v___x_3098_; uint8_t v___x_3099_; lean_object* v___x_3100_; 
lean_dec_ref(v___f_3083_);
v___x_3097_ = lean_unsigned_to_nat(0u);
v___x_3098_ = lean_apply_2(v_close_3080_, v_body_3081_, lean_box(0));
v___x_3099_ = lean_unbox(v_a_3095_);
lean_dec(v_a_3095_);
v___x_3100_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3097_, v___x_3099_, v___x_3098_, v___f_3082_);
return v___x_3100_;
}
else
{
lean_object* v___x_3101_; lean_object* v___x_3102_; 
lean_dec(v_a_3095_);
lean_dec_ref(v___f_3082_);
lean_dec(v_body_3081_);
lean_dec_ref(v_close_3080_);
v___x_3101_ = lean_box(0);
v___x_3102_ = lean_apply_2(v___f_3083_, v___x_3101_, lean_box(0));
return v___x_3102_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12___boxed(lean_object* v_close_3103_, lean_object* v_body_3104_, lean_object* v___f_3105_, lean_object* v___f_3106_, lean_object* v_x_3107_, lean_object* v___y_3108_){
_start:
{
lean_object* v_res_3109_; 
v_res_3109_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12(v_close_3103_, v_body_3104_, v___f_3105_, v___f_3106_, v_x_3107_);
return v_res_3109_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11(uint8_t v___x_3110_, lean_object* v_x_3111_){
_start:
{
if (lean_obj_tag(v_x_3111_) == 0)
{
lean_object* v_a_3113_; lean_object* v___x_3115_; uint8_t v_isShared_3116_; uint8_t v_isSharedCheck_3121_; 
v_a_3113_ = lean_ctor_get(v_x_3111_, 0);
v_isSharedCheck_3121_ = !lean_is_exclusive(v_x_3111_);
if (v_isSharedCheck_3121_ == 0)
{
v___x_3115_ = v_x_3111_;
v_isShared_3116_ = v_isSharedCheck_3121_;
goto v_resetjp_3114_;
}
else
{
lean_inc(v_a_3113_);
lean_dec(v_x_3111_);
v___x_3115_ = lean_box(0);
v_isShared_3116_ = v_isSharedCheck_3121_;
goto v_resetjp_3114_;
}
v_resetjp_3114_:
{
lean_object* v___x_3118_; 
if (v_isShared_3116_ == 0)
{
v___x_3118_ = v___x_3115_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v_a_3113_);
v___x_3118_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
lean_object* v___x_3119_; 
v___x_3119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
return v___x_3119_;
}
}
}
else
{
lean_object* v_a_3122_; lean_object* v___x_3124_; uint8_t v_isShared_3125_; uint8_t v_isSharedCheck_3141_; 
v_a_3122_ = lean_ctor_get(v_x_3111_, 0);
v_isSharedCheck_3141_ = !lean_is_exclusive(v_x_3111_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3124_ = v_x_3111_;
v_isShared_3125_ = v_isSharedCheck_3141_;
goto v_resetjp_3123_;
}
else
{
lean_inc(v_a_3122_);
lean_dec(v_x_3111_);
v___x_3124_ = lean_box(0);
v_isShared_3125_ = v_isSharedCheck_3141_;
goto v_resetjp_3123_;
}
v_resetjp_3123_:
{
lean_object* v_fst_3126_; lean_object* v_snd_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3140_; 
v_fst_3126_ = lean_ctor_get(v_a_3122_, 0);
v_snd_3127_ = lean_ctor_get(v_a_3122_, 1);
v_isSharedCheck_3140_ = !lean_is_exclusive(v_a_3122_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3129_ = v_a_3122_;
v_isShared_3130_ = v_isSharedCheck_3140_;
goto v_resetjp_3128_;
}
else
{
lean_inc(v_snd_3127_);
lean_inc(v_fst_3126_);
lean_dec(v_a_3122_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3140_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
lean_object* v___x_3131_; lean_object* v___x_3133_; 
v___x_3131_ = lean_box(v___x_3110_);
if (v_isShared_3130_ == 0)
{
lean_ctor_set(v___x_3129_, 1, v___x_3131_);
lean_ctor_set(v___x_3129_, 0, v_snd_3127_);
v___x_3133_ = v___x_3129_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_snd_3127_);
lean_ctor_set(v_reuseFailAlloc_3139_, 1, v___x_3131_);
v___x_3133_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
lean_object* v___x_3134_; lean_object* v___x_3136_; 
v___x_3134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3134_, 0, v_fst_3126_);
lean_ctor_set(v___x_3134_, 1, v___x_3133_);
if (v_isShared_3125_ == 0)
{
lean_ctor_set(v___x_3124_, 0, v___x_3134_);
v___x_3136_ = v___x_3124_;
goto v_reusejp_3135_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v___x_3134_);
v___x_3136_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3135_;
}
v_reusejp_3135_:
{
lean_object* v___x_3137_; 
v___x_3137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3136_);
return v___x_3137_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11___boxed(lean_object* v___x_3142_, lean_object* v_x_3143_, lean_object* v___y_3144_){
_start:
{
uint8_t v___x_7861__boxed_3145_; lean_object* v_res_3146_; 
v___x_7861__boxed_3145_ = lean_unbox(v___x_3142_);
v_res_3146_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__11(v___x_7861__boxed_3145_, v_x_3143_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13(lean_object* v_requestStream_3147_, lean_object* v_keepAliveTimeout_3148_, lean_object* v_currentTimeout_3149_, lean_object* v_headerTimeout_3150_, lean_object* v_response_3151_, uint8_t v_requiresData_3152_, lean_object* v_expectData_3153_, uint8_t v___x_3154_, lean_object* v_pendingHead_3155_, lean_object* v_dateSecond_3156_, lean_object* v_____x_3157_){
_start:
{
lean_object* v_snd_3159_; lean_object* v_fst_3160_; lean_object* v_fst_3161_; lean_object* v_snd_3162_; lean_object* v___x_3164_; uint8_t v_isShared_3165_; uint8_t v_isSharedCheck_3172_; 
v_snd_3159_ = lean_ctor_get(v_____x_3157_, 1);
lean_inc(v_snd_3159_);
v_fst_3160_ = lean_ctor_get(v_____x_3157_, 0);
lean_inc(v_fst_3160_);
lean_dec_ref(v_____x_3157_);
v_fst_3161_ = lean_ctor_get(v_snd_3159_, 0);
v_snd_3162_ = lean_ctor_get(v_snd_3159_, 1);
v_isSharedCheck_3172_ = !lean_is_exclusive(v_snd_3159_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3164_ = v_snd_3159_;
v_isShared_3165_ = v_isSharedCheck_3172_;
goto v_resetjp_3163_;
}
else
{
lean_inc(v_snd_3162_);
lean_inc(v_fst_3161_);
lean_dec(v_snd_3159_);
v___x_3164_ = lean_box(0);
v_isShared_3165_ = v_isSharedCheck_3172_;
goto v_resetjp_3163_;
}
v_resetjp_3163_:
{
lean_object* v___x_3166_; lean_object* v___x_3168_; 
v___x_3166_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_3166_, 0, v_fst_3160_);
lean_ctor_set(v___x_3166_, 1, v_requestStream_3147_);
lean_ctor_set(v___x_3166_, 2, v_keepAliveTimeout_3148_);
lean_ctor_set(v___x_3166_, 3, v_currentTimeout_3149_);
lean_ctor_set(v___x_3166_, 4, v_headerTimeout_3150_);
lean_ctor_set(v___x_3166_, 5, v_response_3151_);
lean_ctor_set(v___x_3166_, 6, v_fst_3161_);
lean_ctor_set(v___x_3166_, 7, v_expectData_3153_);
lean_ctor_set(v___x_3166_, 8, v_pendingHead_3155_);
lean_ctor_set(v___x_3166_, 9, v_dateSecond_3156_);
lean_ctor_set_uint8(v___x_3166_, sizeof(void*)*10, v_requiresData_3152_);
lean_ctor_set_uint8(v___x_3166_, sizeof(void*)*10 + 1, v___x_3154_);
if (v_isShared_3165_ == 0)
{
lean_ctor_set(v___x_3164_, 0, v___x_3166_);
v___x_3168_ = v___x_3164_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v___x_3166_);
lean_ctor_set(v_reuseFailAlloc_3171_, 1, v_snd_3162_);
v___x_3168_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
lean_object* v___x_3169_; lean_object* v___x_3170_; 
v___x_3169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3169_, 0, v___x_3168_);
v___x_3170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3170_, 0, v___x_3169_);
return v___x_3170_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13___boxed(lean_object* v_requestStream_3173_, lean_object* v_keepAliveTimeout_3174_, lean_object* v_currentTimeout_3175_, lean_object* v_headerTimeout_3176_, lean_object* v_response_3177_, lean_object* v_requiresData_3178_, lean_object* v_expectData_3179_, lean_object* v___x_3180_, lean_object* v_pendingHead_3181_, lean_object* v_dateSecond_3182_, lean_object* v_____x_3183_, lean_object* v___y_3184_){
_start:
{
uint8_t v_requiresData_boxed_3185_; uint8_t v___x_7928__boxed_3186_; lean_object* v_res_3187_; 
v_requiresData_boxed_3185_ = lean_unbox(v_requiresData_3178_);
v___x_7928__boxed_3186_ = lean_unbox(v___x_3180_);
v_res_3187_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13(v_requestStream_3173_, v_keepAliveTimeout_3174_, v_currentTimeout_3175_, v_headerTimeout_3176_, v_response_3177_, v_requiresData_boxed_3185_, v_expectData_3179_, v___x_7928__boxed_3186_, v_pendingHead_3181_, v_dateSecond_3182_, v_____x_3183_);
return v_res_3187_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14(lean_object* v___f_3188_, lean_object* v_x_3189_){
_start:
{
if (lean_obj_tag(v_x_3189_) == 0)
{
lean_object* v_a_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3199_; 
lean_dec_ref(v___f_3188_);
v_a_3191_ = lean_ctor_get(v_x_3189_, 0);
v_isSharedCheck_3199_ = !lean_is_exclusive(v_x_3189_);
if (v_isSharedCheck_3199_ == 0)
{
v___x_3193_ = v_x_3189_;
v_isShared_3194_ = v_isSharedCheck_3199_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_a_3191_);
lean_dec(v_x_3189_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3199_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3196_; 
if (v_isShared_3194_ == 0)
{
v___x_3196_ = v___x_3193_;
goto v_reusejp_3195_;
}
else
{
lean_object* v_reuseFailAlloc_3198_; 
v_reuseFailAlloc_3198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3198_, 0, v_a_3191_);
v___x_3196_ = v_reuseFailAlloc_3198_;
goto v_reusejp_3195_;
}
v_reusejp_3195_:
{
lean_object* v___x_3197_; 
v___x_3197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3197_, 0, v___x_3196_);
return v___x_3197_;
}
}
}
else
{
lean_object* v_a_3200_; lean_object* v___x_3201_; 
v_a_3200_ = lean_ctor_get(v_x_3189_, 0);
lean_inc(v_a_3200_);
lean_dec_ref_known(v_x_3189_, 1);
v___x_3201_ = lean_apply_2(v___f_3188_, v_a_3200_, lean_box(0));
return v___x_3201_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14___boxed(lean_object* v___f_3202_, lean_object* v_x_3203_, lean_object* v___y_3204_){
_start:
{
lean_object* v_res_3205_; 
v_res_3205_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14(v___f_3202_, v_x_3203_);
return v_res_3205_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16(lean_object* v_snd_3206_, uint8_t v___x_3207_, lean_object* v_fst_3208_, lean_object* v_x_3209_){
_start:
{
if (lean_obj_tag(v_x_3209_) == 0)
{
lean_object* v_a_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3219_; 
lean_dec_ref(v_fst_3208_);
lean_dec(v_snd_3206_);
v_a_3211_ = lean_ctor_get(v_x_3209_, 0);
v_isSharedCheck_3219_ = !lean_is_exclusive(v_x_3209_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3213_ = v_x_3209_;
v_isShared_3214_ = v_isSharedCheck_3219_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_a_3211_);
lean_dec(v_x_3209_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3219_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v___x_3216_; 
if (v_isShared_3214_ == 0)
{
v___x_3216_ = v___x_3213_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_a_3211_);
v___x_3216_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
lean_object* v___x_3217_; 
v___x_3217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3217_, 0, v___x_3216_);
return v___x_3217_;
}
}
}
else
{
lean_object* v___x_3221_; uint8_t v_isShared_3222_; uint8_t v_isSharedCheck_3230_; 
v_isSharedCheck_3230_ = !lean_is_exclusive(v_x_3209_);
if (v_isSharedCheck_3230_ == 0)
{
lean_object* v_unused_3231_; 
v_unused_3231_ = lean_ctor_get(v_x_3209_, 0);
lean_dec(v_unused_3231_);
v___x_3221_ = v_x_3209_;
v_isShared_3222_ = v_isSharedCheck_3230_;
goto v_resetjp_3220_;
}
else
{
lean_dec(v_x_3209_);
v___x_3221_ = lean_box(0);
v_isShared_3222_ = v_isSharedCheck_3230_;
goto v_resetjp_3220_;
}
v_resetjp_3220_:
{
lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3227_; 
v___x_3223_ = lean_box(v___x_3207_);
v___x_3224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3224_, 0, v_snd_3206_);
lean_ctor_set(v___x_3224_, 1, v___x_3223_);
v___x_3225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3225_, 0, v_fst_3208_);
lean_ctor_set(v___x_3225_, 1, v___x_3224_);
if (v_isShared_3222_ == 0)
{
lean_ctor_set(v___x_3221_, 0, v___x_3225_);
v___x_3227_ = v___x_3221_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v___x_3225_);
v___x_3227_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
lean_object* v___x_3228_; 
v___x_3228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3228_, 0, v___x_3227_);
return v___x_3228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16___boxed(lean_object* v_snd_3232_, lean_object* v___x_3233_, lean_object* v_fst_3234_, lean_object* v_x_3235_, lean_object* v___y_3236_){
_start:
{
uint8_t v___x_7997__boxed_3237_; lean_object* v_res_3238_; 
v___x_7997__boxed_3237_ = lean_unbox(v___x_3233_);
v_res_3238_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16(v_snd_3232_, v___x_7997__boxed_3237_, v_fst_3234_, v_x_3235_);
return v_res_3238_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15(lean_object* v_inst_3239_, lean_object* v_handler_3240_, uint8_t v___x_3241_, lean_object* v___f_3242_, lean_object* v_x_3243_){
_start:
{
if (lean_obj_tag(v_x_3243_) == 0)
{
lean_object* v_a_3245_; lean_object* v_onFailure_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; 
v_a_3245_ = lean_ctor_get(v_x_3243_, 0);
lean_inc(v_a_3245_);
lean_dec_ref_known(v_x_3243_, 1);
v_onFailure_3246_ = lean_ctor_get(v_inst_3239_, 2);
lean_inc_ref(v_onFailure_3246_);
lean_dec_ref(v_inst_3239_);
v___x_3247_ = lean_unsigned_to_nat(0u);
v___x_3248_ = lean_apply_3(v_onFailure_3246_, v_handler_3240_, v_a_3245_, lean_box(0));
v___x_3249_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3247_, v___x_3241_, v___x_3248_, v___f_3242_);
return v___x_3249_;
}
else
{
lean_object* v___x_3250_; 
lean_dec_ref(v___f_3242_);
lean_dec(v_handler_3240_);
lean_dec_ref(v_inst_3239_);
v___x_3250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3250_, 0, v_x_3243_);
return v___x_3250_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15___boxed(lean_object* v_inst_3251_, lean_object* v_handler_3252_, lean_object* v___x_3253_, lean_object* v___f_3254_, lean_object* v_x_3255_, lean_object* v___y_3256_){
_start:
{
uint8_t v___x_8055__boxed_3257_; lean_object* v_res_3258_; 
v___x_8055__boxed_3257_ = lean_unbox(v___x_3253_);
v_res_3258_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15(v_inst_3251_, v_handler_3252_, v___x_8055__boxed_3257_, v___f_3254_, v_x_3255_);
return v_res_3258_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17(uint8_t v___x_3259_, lean_object* v___f_3260_, uint8_t v___x_3261_, lean_object* v_inst_3262_, lean_object* v_handler_3263_, lean_object* v_inst_3264_, lean_object* v___f_3265_, lean_object* v___f_3266_, lean_object* v_x_3267_){
_start:
{
if (lean_obj_tag(v_x_3267_) == 0)
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3277_; 
lean_dec_ref(v___f_3266_);
lean_dec_ref(v___f_3265_);
lean_dec_ref(v_inst_3264_);
lean_dec(v_handler_3263_);
lean_dec_ref(v_inst_3262_);
lean_dec_ref(v___f_3260_);
v_a_3269_ = lean_ctor_get(v_x_3267_, 0);
v_isSharedCheck_3277_ = !lean_is_exclusive(v_x_3267_);
if (v_isSharedCheck_3277_ == 0)
{
v___x_3271_ = v_x_3267_;
v_isShared_3272_ = v_isSharedCheck_3277_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v_x_3267_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3277_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3274_; 
if (v_isShared_3272_ == 0)
{
v___x_3274_ = v___x_3271_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v_a_3269_);
v___x_3274_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
lean_object* v___x_3275_; 
v___x_3275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3274_);
return v___x_3275_;
}
}
}
else
{
lean_object* v_a_3278_; lean_object* v___x_3280_; uint8_t v_isShared_3281_; uint8_t v_isSharedCheck_3311_; 
v_a_3278_ = lean_ctor_get(v_x_3267_, 0);
v_isSharedCheck_3311_ = !lean_is_exclusive(v_x_3267_);
if (v_isSharedCheck_3311_ == 0)
{
v___x_3280_ = v_x_3267_;
v_isShared_3281_ = v_isSharedCheck_3311_;
goto v_resetjp_3279_;
}
else
{
lean_inc(v_a_3278_);
lean_dec(v_x_3267_);
v___x_3280_ = lean_box(0);
v_isShared_3281_ = v_isSharedCheck_3311_;
goto v_resetjp_3279_;
}
v_resetjp_3279_:
{
lean_object* v_snd_3282_; 
v_snd_3282_ = lean_ctor_get(v_a_3278_, 1);
lean_inc(v_snd_3282_);
if (lean_obj_tag(v_snd_3282_) == 0)
{
lean_object* v_fst_3283_; lean_object* v___x_3285_; uint8_t v_isShared_3286_; uint8_t v_isSharedCheck_3298_; 
lean_dec_ref(v___f_3266_);
lean_dec_ref(v___f_3265_);
lean_dec_ref(v_inst_3264_);
lean_dec(v_handler_3263_);
lean_dec_ref(v_inst_3262_);
v_fst_3283_ = lean_ctor_get(v_a_3278_, 0);
v_isSharedCheck_3298_ = !lean_is_exclusive(v_a_3278_);
if (v_isSharedCheck_3298_ == 0)
{
lean_object* v_unused_3299_; 
v_unused_3299_ = lean_ctor_get(v_a_3278_, 1);
lean_dec(v_unused_3299_);
v___x_3285_ = v_a_3278_;
v_isShared_3286_ = v_isSharedCheck_3298_;
goto v_resetjp_3284_;
}
else
{
lean_inc(v_fst_3283_);
lean_dec(v_a_3278_);
v___x_3285_ = lean_box(0);
v_isShared_3286_ = v_isSharedCheck_3298_;
goto v_resetjp_3284_;
}
v_resetjp_3284_:
{
lean_object* v___x_3287_; lean_object* v___x_3289_; 
v___x_3287_ = lean_box(v___x_3259_);
if (v_isShared_3286_ == 0)
{
lean_ctor_set(v___x_3285_, 1, v___x_3287_);
lean_ctor_set(v___x_3285_, 0, v_snd_3282_);
v___x_3289_ = v___x_3285_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v_snd_3282_);
lean_ctor_set(v_reuseFailAlloc_3297_, 1, v___x_3287_);
v___x_3289_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3293_; 
v___x_3290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3290_, 0, v_fst_3283_);
lean_ctor_set(v___x_3290_, 1, v___x_3289_);
v___x_3291_ = lean_unsigned_to_nat(0u);
if (v_isShared_3281_ == 0)
{
lean_ctor_set(v___x_3280_, 0, v___x_3290_);
v___x_3293_ = v___x_3280_;
goto v_reusejp_3292_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v___x_3290_);
v___x_3293_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3292_;
}
v_reusejp_3292_:
{
lean_object* v___x_3294_; lean_object* v___x_3295_; 
v___x_3294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3294_, 0, v___x_3293_);
v___x_3295_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3291_, v___x_3259_, v___x_3294_, v___f_3260_);
return v___x_3295_;
}
}
}
}
else
{
lean_object* v_fst_3300_; lean_object* v_val_3301_; lean_object* v___x_3302_; lean_object* v___f_3303_; lean_object* v___x_3304_; lean_object* v___f_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; 
lean_del_object(v___x_3280_);
lean_dec_ref(v___f_3260_);
v_fst_3300_ = lean_ctor_get(v_a_3278_, 0);
lean_inc_n(v_fst_3300_, 2);
lean_dec(v_a_3278_);
v_val_3301_ = lean_ctor_get(v_snd_3282_, 0);
lean_inc(v_val_3301_);
v___x_3302_ = lean_box(v___x_3261_);
v___f_3303_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__16___boxed), 5, 3);
lean_closure_set(v___f_3303_, 0, v_snd_3282_);
lean_closure_set(v___f_3303_, 1, v___x_3302_);
lean_closure_set(v___f_3303_, 2, v_fst_3300_);
v___x_3304_ = lean_box(v___x_3259_);
v___f_3305_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__15___boxed), 6, 4);
lean_closure_set(v___f_3305_, 0, v_inst_3262_);
lean_closure_set(v___f_3305_, 1, v_handler_3263_);
lean_closure_set(v___f_3305_, 2, v___x_3304_);
lean_closure_set(v___f_3305_, 3, v___f_3303_);
v___x_3306_ = lean_unsigned_to_nat(0u);
v___x_3307_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg(v_inst_3264_, v_fst_3300_, v_val_3301_);
v___x_3308_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3306_, v___x_3259_, v___x_3307_, v___f_3265_);
v___x_3309_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3306_, v___x_3259_, v___x_3308_, v___f_3305_);
v___x_3310_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3306_, v___x_3259_, v___x_3309_, v___f_3266_);
return v___x_3310_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17___boxed(lean_object* v___x_3312_, lean_object* v___f_3313_, lean_object* v___x_3314_, lean_object* v_inst_3315_, lean_object* v_handler_3316_, lean_object* v_inst_3317_, lean_object* v___f_3318_, lean_object* v___f_3319_, lean_object* v_x_3320_, lean_object* v___y_3321_){
_start:
{
uint8_t v___x_8080__boxed_3322_; uint8_t v___x_8082__boxed_3323_; lean_object* v_res_3324_; 
v___x_8080__boxed_3322_ = lean_unbox(v___x_3312_);
v___x_8082__boxed_3323_ = lean_unbox(v___x_3314_);
v_res_3324_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17(v___x_8080__boxed_3322_, v___f_3313_, v___x_8082__boxed_3323_, v_inst_3315_, v_handler_3316_, v_inst_3317_, v___f_3318_, v___f_3319_, v_x_3320_);
return v_res_3324_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18(uint8_t v___x_3325_, uint8_t v___x_3326_, lean_object* v_inst_3327_, lean_object* v_handler_3328_, lean_object* v_inst_3329_, lean_object* v___f_3330_, lean_object* v_a_3331_, lean_object* v_x_3332_){
_start:
{
if (lean_obj_tag(v_x_3332_) == 0)
{
lean_object* v_a_3334_; lean_object* v___x_3336_; uint8_t v_isShared_3337_; uint8_t v_isSharedCheck_3342_; 
lean_dec_ref(v_a_3331_);
lean_dec_ref(v___f_3330_);
lean_dec_ref(v_inst_3329_);
lean_dec(v_handler_3328_);
lean_dec_ref(v_inst_3327_);
v_a_3334_ = lean_ctor_get(v_x_3332_, 0);
v_isSharedCheck_3342_ = !lean_is_exclusive(v_x_3332_);
if (v_isSharedCheck_3342_ == 0)
{
v___x_3336_ = v_x_3332_;
v_isShared_3337_ = v_isSharedCheck_3342_;
goto v_resetjp_3335_;
}
else
{
lean_inc(v_a_3334_);
lean_dec(v_x_3332_);
v___x_3336_ = lean_box(0);
v_isShared_3337_ = v_isSharedCheck_3342_;
goto v_resetjp_3335_;
}
v_resetjp_3335_:
{
lean_object* v___x_3339_; 
if (v_isShared_3337_ == 0)
{
v___x_3339_ = v___x_3336_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v_a_3334_);
v___x_3339_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
lean_object* v___x_3340_; 
v___x_3340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3339_);
return v___x_3340_;
}
}
}
else
{
lean_object* v_a_3343_; lean_object* v_machine_3344_; lean_object* v_requestStream_3345_; lean_object* v_keepAliveTimeout_3346_; lean_object* v_currentTimeout_3347_; lean_object* v_headerTimeout_3348_; lean_object* v_response_3349_; uint8_t v_requiresData_3350_; lean_object* v_expectData_3351_; lean_object* v_pendingHead_3352_; lean_object* v_dateSecond_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___f_3356_; lean_object* v___f_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___f_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; 
v_a_3343_ = lean_ctor_get(v_x_3332_, 0);
lean_inc(v_a_3343_);
lean_dec_ref_known(v_x_3332_, 1);
v_machine_3344_ = lean_ctor_get(v_a_3343_, 0);
lean_inc_ref(v_machine_3344_);
v_requestStream_3345_ = lean_ctor_get(v_a_3343_, 1);
lean_inc_ref(v_requestStream_3345_);
v_keepAliveTimeout_3346_ = lean_ctor_get(v_a_3343_, 2);
lean_inc(v_keepAliveTimeout_3346_);
v_currentTimeout_3347_ = lean_ctor_get(v_a_3343_, 3);
lean_inc(v_currentTimeout_3347_);
v_headerTimeout_3348_ = lean_ctor_get(v_a_3343_, 4);
lean_inc(v_headerTimeout_3348_);
v_response_3349_ = lean_ctor_get(v_a_3343_, 5);
lean_inc_ref(v_response_3349_);
v_requiresData_3350_ = lean_ctor_get_uint8(v_a_3343_, sizeof(void*)*10);
v_expectData_3351_ = lean_ctor_get(v_a_3343_, 7);
lean_inc(v_expectData_3351_);
v_pendingHead_3352_ = lean_ctor_get(v_a_3343_, 8);
lean_inc(v_pendingHead_3352_);
v_dateSecond_3353_ = lean_ctor_get(v_a_3343_, 9);
lean_inc(v_dateSecond_3353_);
lean_dec(v_a_3343_);
v___x_3354_ = lean_box(v_requiresData_3350_);
v___x_3355_ = lean_box(v___x_3325_);
v___f_3356_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__13___boxed), 12, 10);
lean_closure_set(v___f_3356_, 0, v_requestStream_3345_);
lean_closure_set(v___f_3356_, 1, v_keepAliveTimeout_3346_);
lean_closure_set(v___f_3356_, 2, v_currentTimeout_3347_);
lean_closure_set(v___f_3356_, 3, v_headerTimeout_3348_);
lean_closure_set(v___f_3356_, 4, v_response_3349_);
lean_closure_set(v___f_3356_, 5, v___x_3354_);
lean_closure_set(v___f_3356_, 6, v_expectData_3351_);
lean_closure_set(v___f_3356_, 7, v___x_3355_);
lean_closure_set(v___f_3356_, 8, v_pendingHead_3352_);
lean_closure_set(v___f_3356_, 9, v_dateSecond_3353_);
v___f_3357_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__14___boxed), 3, 1);
lean_closure_set(v___f_3357_, 0, v___f_3356_);
v___x_3358_ = lean_box(v___x_3325_);
v___x_3359_ = lean_box(v___x_3326_);
lean_inc_ref(v_inst_3329_);
lean_inc_ref(v___f_3357_);
v___f_3360_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__17___boxed), 10, 8);
lean_closure_set(v___f_3360_, 0, v___x_3358_);
lean_closure_set(v___f_3360_, 1, v___f_3357_);
lean_closure_set(v___f_3360_, 2, v___x_3359_);
lean_closure_set(v___f_3360_, 3, v_inst_3327_);
lean_closure_set(v___f_3360_, 4, v_handler_3328_);
lean_closure_set(v___f_3360_, 5, v_inst_3329_);
lean_closure_set(v___f_3360_, 6, v___f_3330_);
lean_closure_set(v___f_3360_, 7, v___f_3357_);
v___x_3361_ = lean_unsigned_to_nat(0u);
v___x_3362_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg(v_inst_3329_, v_machine_3344_, v_a_3331_);
v___x_3363_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3361_, v___x_3325_, v___x_3362_, v___f_3360_);
return v___x_3363_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18___boxed(lean_object* v___x_3364_, lean_object* v___x_3365_, lean_object* v_inst_3366_, lean_object* v_handler_3367_, lean_object* v_inst_3368_, lean_object* v___f_3369_, lean_object* v_a_3370_, lean_object* v_x_3371_, lean_object* v___y_3372_){
_start:
{
uint8_t v___x_8193__boxed_3373_; uint8_t v___x_8194__boxed_3374_; lean_object* v_res_3375_; 
v___x_8193__boxed_3373_ = lean_unbox(v___x_3364_);
v___x_8194__boxed_3374_ = lean_unbox(v___x_3365_);
v_res_3375_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18(v___x_8193__boxed_3373_, v___x_8194__boxed_3374_, v_inst_3366_, v_handler_3367_, v_inst_3368_, v___f_3369_, v_a_3370_, v_x_3371_);
return v_res_3375_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__19(lean_object* v_state_3376_, lean_object* v_x_3377_){
_start:
{
if (lean_obj_tag(v_x_3377_) == 0)
{
lean_object* v_a_3379_; lean_object* v___x_3381_; uint8_t v_isShared_3382_; uint8_t v_isSharedCheck_3387_; 
lean_dec_ref(v_state_3376_);
v_a_3379_ = lean_ctor_get(v_x_3377_, 0);
v_isSharedCheck_3387_ = !lean_is_exclusive(v_x_3377_);
if (v_isSharedCheck_3387_ == 0)
{
v___x_3381_ = v_x_3377_;
v_isShared_3382_ = v_isSharedCheck_3387_;
goto v_resetjp_3380_;
}
else
{
lean_inc(v_a_3379_);
lean_dec(v_x_3377_);
v___x_3381_ = lean_box(0);
v_isShared_3382_ = v_isSharedCheck_3387_;
goto v_resetjp_3380_;
}
v_resetjp_3380_:
{
lean_object* v___x_3384_; 
if (v_isShared_3382_ == 0)
{
v___x_3384_ = v___x_3381_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3386_; 
v_reuseFailAlloc_3386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3386_, 0, v_a_3379_);
v___x_3384_ = v_reuseFailAlloc_3386_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
lean_object* v___x_3385_; 
v___x_3385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3385_, 0, v___x_3384_);
return v___x_3385_;
}
}
}
else
{
lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3418_; 
v_isSharedCheck_3418_ = !lean_is_exclusive(v_x_3377_);
if (v_isSharedCheck_3418_ == 0)
{
lean_object* v_unused_3419_; 
v_unused_3419_ = lean_ctor_get(v_x_3377_, 0);
lean_dec(v_unused_3419_);
v___x_3389_ = v_x_3377_;
v_isShared_3390_ = v_isSharedCheck_3418_;
goto v_resetjp_3388_;
}
else
{
lean_dec(v_x_3377_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3418_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v_machine_3391_; lean_object* v_requestStream_3392_; lean_object* v_keepAliveTimeout_3393_; lean_object* v_currentTimeout_3394_; lean_object* v_headerTimeout_3395_; lean_object* v_response_3396_; lean_object* v_respStream_3397_; uint8_t v_requiresData_3398_; lean_object* v_expectData_3399_; lean_object* v_pendingHead_3400_; lean_object* v_dateSecond_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3417_; 
v_machine_3391_ = lean_ctor_get(v_state_3376_, 0);
v_requestStream_3392_ = lean_ctor_get(v_state_3376_, 1);
v_keepAliveTimeout_3393_ = lean_ctor_get(v_state_3376_, 2);
v_currentTimeout_3394_ = lean_ctor_get(v_state_3376_, 3);
v_headerTimeout_3395_ = lean_ctor_get(v_state_3376_, 4);
v_response_3396_ = lean_ctor_get(v_state_3376_, 5);
v_respStream_3397_ = lean_ctor_get(v_state_3376_, 6);
v_requiresData_3398_ = lean_ctor_get_uint8(v_state_3376_, sizeof(void*)*10);
v_expectData_3399_ = lean_ctor_get(v_state_3376_, 7);
v_pendingHead_3400_ = lean_ctor_get(v_state_3376_, 8);
v_dateSecond_3401_ = lean_ctor_get(v_state_3376_, 9);
v_isSharedCheck_3417_ = !lean_is_exclusive(v_state_3376_);
if (v_isSharedCheck_3417_ == 0)
{
v___x_3403_ = v_state_3376_;
v_isShared_3404_ = v_isSharedCheck_3417_;
goto v_resetjp_3402_;
}
else
{
lean_inc(v_dateSecond_3401_);
lean_inc(v_pendingHead_3400_);
lean_inc(v_expectData_3399_);
lean_inc(v_respStream_3397_);
lean_inc(v_response_3396_);
lean_inc(v_headerTimeout_3395_);
lean_inc(v_currentTimeout_3394_);
lean_inc(v_keepAliveTimeout_3393_);
lean_inc(v_requestStream_3392_);
lean_inc(v_machine_3391_);
lean_dec(v_state_3376_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3417_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v___x_3405_; lean_object* v___x_3406_; uint8_t v___x_3407_; lean_object* v___x_3409_; 
v___x_3405_ = lean_box(31);
v___x_3406_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_3391_, v___x_3405_);
v___x_3407_ = 0;
if (v_isShared_3404_ == 0)
{
lean_ctor_set(v___x_3403_, 0, v___x_3406_);
v___x_3409_ = v___x_3403_;
goto v_reusejp_3408_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v___x_3406_);
lean_ctor_set(v_reuseFailAlloc_3416_, 1, v_requestStream_3392_);
lean_ctor_set(v_reuseFailAlloc_3416_, 2, v_keepAliveTimeout_3393_);
lean_ctor_set(v_reuseFailAlloc_3416_, 3, v_currentTimeout_3394_);
lean_ctor_set(v_reuseFailAlloc_3416_, 4, v_headerTimeout_3395_);
lean_ctor_set(v_reuseFailAlloc_3416_, 5, v_response_3396_);
lean_ctor_set(v_reuseFailAlloc_3416_, 6, v_respStream_3397_);
lean_ctor_set(v_reuseFailAlloc_3416_, 7, v_expectData_3399_);
lean_ctor_set(v_reuseFailAlloc_3416_, 8, v_pendingHead_3400_);
lean_ctor_set(v_reuseFailAlloc_3416_, 9, v_dateSecond_3401_);
lean_ctor_set_uint8(v_reuseFailAlloc_3416_, sizeof(void*)*10, v_requiresData_3398_);
v___x_3409_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3408_;
}
v_reusejp_3408_:
{
lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3413_; 
lean_ctor_set_uint8(v___x_3409_, sizeof(void*)*10 + 1, v___x_3407_);
v___x_3410_ = lean_box(v___x_3407_);
v___x_3411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3411_, 0, v___x_3409_);
lean_ctor_set(v___x_3411_, 1, v___x_3410_);
if (v_isShared_3390_ == 0)
{
lean_ctor_set(v___x_3389_, 0, v___x_3411_);
v___x_3413_ = v___x_3389_;
goto v_reusejp_3412_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v___x_3411_);
v___x_3413_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3412_;
}
v_reusejp_3412_:
{
lean_object* v___x_3414_; 
v___x_3414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3414_, 0, v___x_3413_);
return v___x_3414_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__19___boxed(lean_object* v_state_3420_, lean_object* v_x_3421_, lean_object* v___y_3422_){
_start:
{
lean_object* v_res_3423_; 
v_res_3423_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__19(v_state_3420_, v_x_3421_);
return v_res_3423_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2(void){
_start:
{
lean_object* v___x_3428_; lean_object* v___x_3429_; 
v___x_3428_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__1));
v___x_3429_ = lean_mk_io_user_error(v___x_3428_);
return v___x_3429_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(lean_object* v_inst_3430_, lean_object* v_inst_3431_, lean_object* v_handler_3432_, lean_object* v_config_3433_, lean_object* v_event_3434_, lean_object* v_state_3435_){
_start:
{
switch(lean_obj_tag(v_event_3434_))
{
case 0:
{
lean_object* v_x_3443_; lean_object* v___x_3445_; uint8_t v_isShared_3446_; uint8_t v_isSharedCheck_3551_; 
lean_dec(v_handler_3432_);
lean_dec_ref(v_inst_3431_);
lean_dec_ref(v_inst_3430_);
v_x_3443_ = lean_ctor_get(v_event_3434_, 0);
v_isSharedCheck_3551_ = !lean_is_exclusive(v_event_3434_);
if (v_isSharedCheck_3551_ == 0)
{
v___x_3445_ = v_event_3434_;
v_isShared_3446_ = v_isSharedCheck_3551_;
goto v_resetjp_3444_;
}
else
{
lean_inc(v_x_3443_);
lean_dec(v_event_3434_);
v___x_3445_ = lean_box(0);
v_isShared_3446_ = v_isSharedCheck_3551_;
goto v_resetjp_3444_;
}
v_resetjp_3444_:
{
if (lean_obj_tag(v_x_3443_) == 0)
{
lean_object* v_machine_3447_; lean_object* v_reader_3448_; lean_object* v_requestStream_3449_; lean_object* v_keepAliveTimeout_3450_; lean_object* v_currentTimeout_3451_; lean_object* v_headerTimeout_3452_; lean_object* v_response_3453_; lean_object* v_respStream_3454_; uint8_t v_requiresData_3455_; lean_object* v_expectData_3456_; uint8_t v_handlerDispatched_3457_; lean_object* v_pendingHead_3458_; lean_object* v_dateSecond_3459_; lean_object* v___x_3461_; uint8_t v_isShared_3462_; uint8_t v_isSharedCheck_3501_; 
lean_dec_ref(v_config_3433_);
v_machine_3447_ = lean_ctor_get(v_state_3435_, 0);
lean_inc_ref(v_machine_3447_);
v_reader_3448_ = lean_ctor_get(v_machine_3447_, 0);
lean_inc_ref(v_reader_3448_);
v_requestStream_3449_ = lean_ctor_get(v_state_3435_, 1);
v_keepAliveTimeout_3450_ = lean_ctor_get(v_state_3435_, 2);
v_currentTimeout_3451_ = lean_ctor_get(v_state_3435_, 3);
v_headerTimeout_3452_ = lean_ctor_get(v_state_3435_, 4);
v_response_3453_ = lean_ctor_get(v_state_3435_, 5);
v_respStream_3454_ = lean_ctor_get(v_state_3435_, 6);
v_requiresData_3455_ = lean_ctor_get_uint8(v_state_3435_, sizeof(void*)*10);
v_expectData_3456_ = lean_ctor_get(v_state_3435_, 7);
v_handlerDispatched_3457_ = lean_ctor_get_uint8(v_state_3435_, sizeof(void*)*10 + 1);
v_pendingHead_3458_ = lean_ctor_get(v_state_3435_, 8);
v_dateSecond_3459_ = lean_ctor_get(v_state_3435_, 9);
v_isSharedCheck_3501_ = !lean_is_exclusive(v_state_3435_);
if (v_isSharedCheck_3501_ == 0)
{
lean_object* v_unused_3502_; 
v_unused_3502_ = lean_ctor_get(v_state_3435_, 0);
lean_dec(v_unused_3502_);
v___x_3461_ = v_state_3435_;
v_isShared_3462_ = v_isSharedCheck_3501_;
goto v_resetjp_3460_;
}
else
{
lean_inc(v_dateSecond_3459_);
lean_inc(v_pendingHead_3458_);
lean_inc(v_expectData_3456_);
lean_inc(v_respStream_3454_);
lean_inc(v_response_3453_);
lean_inc(v_headerTimeout_3452_);
lean_inc(v_currentTimeout_3451_);
lean_inc(v_keepAliveTimeout_3450_);
lean_inc(v_requestStream_3449_);
lean_dec(v_state_3435_);
v___x_3461_ = lean_box(0);
v_isShared_3462_ = v_isSharedCheck_3501_;
goto v_resetjp_3460_;
}
v_resetjp_3460_:
{
lean_object* v_writer_3463_; lean_object* v_config_3464_; lean_object* v_events_3465_; lean_object* v_error_3466_; lean_object* v_date_3467_; uint8_t v_keepAlive_3468_; lean_object* v___x_3470_; uint8_t v_isShared_3471_; uint8_t v_isSharedCheck_3499_; 
v_writer_3463_ = lean_ctor_get(v_machine_3447_, 1);
v_config_3464_ = lean_ctor_get(v_machine_3447_, 2);
v_events_3465_ = lean_ctor_get(v_machine_3447_, 3);
v_error_3466_ = lean_ctor_get(v_machine_3447_, 4);
v_date_3467_ = lean_ctor_get(v_machine_3447_, 5);
v_keepAlive_3468_ = lean_ctor_get_uint8(v_machine_3447_, sizeof(void*)*6);
v_isSharedCheck_3499_ = !lean_is_exclusive(v_machine_3447_);
if (v_isSharedCheck_3499_ == 0)
{
lean_object* v_unused_3500_; 
v_unused_3500_ = lean_ctor_get(v_machine_3447_, 0);
lean_dec(v_unused_3500_);
v___x_3470_ = v_machine_3447_;
v_isShared_3471_ = v_isSharedCheck_3499_;
goto v_resetjp_3469_;
}
else
{
lean_inc(v_date_3467_);
lean_inc(v_error_3466_);
lean_inc(v_events_3465_);
lean_inc(v_config_3464_);
lean_inc(v_writer_3463_);
lean_dec(v_machine_3447_);
v___x_3470_ = lean_box(0);
v_isShared_3471_ = v_isSharedCheck_3499_;
goto v_resetjp_3469_;
}
v_resetjp_3469_:
{
lean_object* v_state_3472_; lean_object* v_input_3473_; lean_object* v_messageHead_3474_; lean_object* v_messageCount_3475_; lean_object* v_bodyBytesRead_3476_; lean_object* v_headerBytesRead_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3498_; 
v_state_3472_ = lean_ctor_get(v_reader_3448_, 0);
v_input_3473_ = lean_ctor_get(v_reader_3448_, 1);
v_messageHead_3474_ = lean_ctor_get(v_reader_3448_, 2);
v_messageCount_3475_ = lean_ctor_get(v_reader_3448_, 3);
v_bodyBytesRead_3476_ = lean_ctor_get(v_reader_3448_, 4);
v_headerBytesRead_3477_ = lean_ctor_get(v_reader_3448_, 5);
v_isSharedCheck_3498_ = !lean_is_exclusive(v_reader_3448_);
if (v_isSharedCheck_3498_ == 0)
{
v___x_3479_ = v_reader_3448_;
v_isShared_3480_ = v_isSharedCheck_3498_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_headerBytesRead_3477_);
lean_inc(v_bodyBytesRead_3476_);
lean_inc(v_messageCount_3475_);
lean_inc(v_messageHead_3474_);
lean_inc(v_input_3473_);
lean_inc(v_state_3472_);
lean_dec(v_reader_3448_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3498_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
uint8_t v___x_3481_; lean_object* v___x_3483_; 
v___x_3481_ = 1;
if (v_isShared_3480_ == 0)
{
v___x_3483_ = v___x_3479_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3497_; 
v_reuseFailAlloc_3497_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_3497_, 0, v_state_3472_);
lean_ctor_set(v_reuseFailAlloc_3497_, 1, v_input_3473_);
lean_ctor_set(v_reuseFailAlloc_3497_, 2, v_messageHead_3474_);
lean_ctor_set(v_reuseFailAlloc_3497_, 3, v_messageCount_3475_);
lean_ctor_set(v_reuseFailAlloc_3497_, 4, v_bodyBytesRead_3476_);
lean_ctor_set(v_reuseFailAlloc_3497_, 5, v_headerBytesRead_3477_);
v___x_3483_ = v_reuseFailAlloc_3497_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
uint8_t v___x_3484_; lean_object* v___x_3486_; 
lean_ctor_set_uint8(v___x_3483_, sizeof(void*)*6, v___x_3481_);
v___x_3484_ = 0;
if (v_isShared_3471_ == 0)
{
lean_ctor_set(v___x_3470_, 0, v___x_3483_);
v___x_3486_ = v___x_3470_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v___x_3483_);
lean_ctor_set(v_reuseFailAlloc_3496_, 1, v_writer_3463_);
lean_ctor_set(v_reuseFailAlloc_3496_, 2, v_config_3464_);
lean_ctor_set(v_reuseFailAlloc_3496_, 3, v_events_3465_);
lean_ctor_set(v_reuseFailAlloc_3496_, 4, v_error_3466_);
lean_ctor_set(v_reuseFailAlloc_3496_, 5, v_date_3467_);
lean_ctor_set_uint8(v_reuseFailAlloc_3496_, sizeof(void*)*6, v_keepAlive_3468_);
v___x_3486_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
lean_object* v___x_3488_; 
lean_ctor_set_uint8(v___x_3486_, sizeof(void*)*6 + 1, v___x_3484_);
if (v_isShared_3462_ == 0)
{
lean_ctor_set(v___x_3461_, 0, v___x_3486_);
v___x_3488_ = v___x_3461_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v___x_3486_);
lean_ctor_set(v_reuseFailAlloc_3495_, 1, v_requestStream_3449_);
lean_ctor_set(v_reuseFailAlloc_3495_, 2, v_keepAliveTimeout_3450_);
lean_ctor_set(v_reuseFailAlloc_3495_, 3, v_currentTimeout_3451_);
lean_ctor_set(v_reuseFailAlloc_3495_, 4, v_headerTimeout_3452_);
lean_ctor_set(v_reuseFailAlloc_3495_, 5, v_response_3453_);
lean_ctor_set(v_reuseFailAlloc_3495_, 6, v_respStream_3454_);
lean_ctor_set(v_reuseFailAlloc_3495_, 7, v_expectData_3456_);
lean_ctor_set(v_reuseFailAlloc_3495_, 8, v_pendingHead_3458_);
lean_ctor_set(v_reuseFailAlloc_3495_, 9, v_dateSecond_3459_);
lean_ctor_set_uint8(v_reuseFailAlloc_3495_, sizeof(void*)*10, v_requiresData_3455_);
lean_ctor_set_uint8(v_reuseFailAlloc_3495_, sizeof(void*)*10 + 1, v_handlerDispatched_3457_);
v___x_3488_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3492_; 
v___x_3489_ = lean_box(v___x_3484_);
v___x_3490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3490_, 0, v___x_3488_);
lean_ctor_set(v___x_3490_, 1, v___x_3489_);
if (v_isShared_3446_ == 0)
{
lean_ctor_set_tag(v___x_3445_, 1);
lean_ctor_set(v___x_3445_, 0, v___x_3490_);
v___x_3492_ = v___x_3445_;
goto v_reusejp_3491_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v___x_3490_);
v___x_3492_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3491_;
}
v_reusejp_3491_:
{
lean_object* v___x_3493_; 
v___x_3493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3493_, 0, v___x_3492_);
return v___x_3493_;
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
lean_object* v_val_3503_; lean_object* v_machine_3504_; lean_object* v_requestStream_3505_; lean_object* v_keepAliveTimeout_3506_; lean_object* v_currentTimeout_3507_; lean_object* v_response_3508_; lean_object* v_respStream_3509_; uint8_t v_requiresData_3510_; lean_object* v_expectData_3511_; uint8_t v_handlerDispatched_3512_; lean_object* v_pendingHead_3513_; lean_object* v_dateSecond_3514_; lean_object* v___f_3515_; 
lean_del_object(v___x_3445_);
v_val_3503_ = lean_ctor_get(v_x_3443_, 0);
lean_inc_n(v_val_3503_, 2);
lean_dec_ref_known(v_x_3443_, 1);
v_machine_3504_ = lean_ctor_get(v_state_3435_, 0);
v_requestStream_3505_ = lean_ctor_get(v_state_3435_, 1);
v_keepAliveTimeout_3506_ = lean_ctor_get(v_state_3435_, 2);
lean_inc(v_keepAliveTimeout_3506_);
v_currentTimeout_3507_ = lean_ctor_get(v_state_3435_, 3);
v_response_3508_ = lean_ctor_get(v_state_3435_, 5);
v_respStream_3509_ = lean_ctor_get(v_state_3435_, 6);
v_requiresData_3510_ = lean_ctor_get_uint8(v_state_3435_, sizeof(void*)*10);
v_expectData_3511_ = lean_ctor_get(v_state_3435_, 7);
v_handlerDispatched_3512_ = lean_ctor_get_uint8(v_state_3435_, sizeof(void*)*10 + 1);
v_pendingHead_3513_ = lean_ctor_get(v_state_3435_, 8);
v_dateSecond_3514_ = lean_ctor_get(v_state_3435_, 9);
v___f_3515_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3515_, 0, v_val_3503_);
if (lean_obj_tag(v_keepAliveTimeout_3506_) == 0)
{
lean_object* v___x_3516_; lean_object* v___x_3517_; 
lean_dec_ref(v___f_3515_);
lean_dec_ref(v_config_3433_);
v___x_3516_ = lean_box(0);
v___x_3517_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__0(v_val_3503_, v___x_3516_, v_state_3435_);
return v___x_3517_;
}
else
{
lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3549_; 
lean_inc(v_dateSecond_3514_);
lean_inc(v_pendingHead_3513_);
lean_inc(v_expectData_3511_);
lean_inc(v_respStream_3509_);
lean_inc_ref(v_response_3508_);
lean_inc(v_currentTimeout_3507_);
lean_inc_ref(v_requestStream_3505_);
lean_inc_ref(v_machine_3504_);
lean_dec(v_val_3503_);
lean_dec_ref(v_state_3435_);
v_isSharedCheck_3549_ = !lean_is_exclusive(v_keepAliveTimeout_3506_);
if (v_isSharedCheck_3549_ == 0)
{
lean_object* v_unused_3550_; 
v_unused_3550_ = lean_ctor_get(v_keepAliveTimeout_3506_, 0);
lean_dec(v_unused_3550_);
v___x_3519_ = v_keepAliveTimeout_3506_;
v_isShared_3520_ = v_isSharedCheck_3549_;
goto v_resetjp_3518_;
}
else
{
lean_dec(v_keepAliveTimeout_3506_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3549_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___f_3523_; lean_object* v___x_3524_; uint8_t v___x_3525_; lean_object* v_val_3527_; lean_object* v___x_3532_; 
v___x_3521_ = lean_box(v_requiresData_3510_);
v___x_3522_ = lean_box(v_handlerDispatched_3512_);
v___f_3523_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__1___boxed), 14, 12);
lean_closure_set(v___f_3523_, 0, v_config_3433_);
lean_closure_set(v___f_3523_, 1, v_machine_3504_);
lean_closure_set(v___f_3523_, 2, v_requestStream_3505_);
lean_closure_set(v___f_3523_, 3, v_currentTimeout_3507_);
lean_closure_set(v___f_3523_, 4, v_response_3508_);
lean_closure_set(v___f_3523_, 5, v_respStream_3509_);
lean_closure_set(v___f_3523_, 6, v___x_3521_);
lean_closure_set(v___f_3523_, 7, v_expectData_3511_);
lean_closure_set(v___f_3523_, 8, v___x_3522_);
lean_closure_set(v___f_3523_, 9, v_pendingHead_3513_);
lean_closure_set(v___f_3523_, 10, v_dateSecond_3514_);
lean_closure_set(v___f_3523_, 11, v___f_3515_);
v___x_3524_ = lean_unsigned_to_nat(0u);
v___x_3525_ = 0;
v___x_3532_ = lean_get_current_time();
if (lean_obj_tag(v___x_3532_) == 0)
{
lean_object* v_a_3533_; lean_object* v___x_3535_; uint8_t v_isShared_3536_; uint8_t v_isSharedCheck_3540_; 
v_a_3533_ = lean_ctor_get(v___x_3532_, 0);
v_isSharedCheck_3540_ = !lean_is_exclusive(v___x_3532_);
if (v_isSharedCheck_3540_ == 0)
{
v___x_3535_ = v___x_3532_;
v_isShared_3536_ = v_isSharedCheck_3540_;
goto v_resetjp_3534_;
}
else
{
lean_inc(v_a_3533_);
lean_dec(v___x_3532_);
v___x_3535_ = lean_box(0);
v_isShared_3536_ = v_isSharedCheck_3540_;
goto v_resetjp_3534_;
}
v_resetjp_3534_:
{
lean_object* v___x_3538_; 
if (v_isShared_3536_ == 0)
{
lean_ctor_set_tag(v___x_3535_, 1);
v___x_3538_ = v___x_3535_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v_a_3533_);
v___x_3538_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
v_val_3527_ = v___x_3538_;
goto v___jp_3526_;
}
}
}
else
{
lean_object* v_a_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3548_; 
v_a_3541_ = lean_ctor_get(v___x_3532_, 0);
v_isSharedCheck_3548_ = !lean_is_exclusive(v___x_3532_);
if (v_isSharedCheck_3548_ == 0)
{
v___x_3543_ = v___x_3532_;
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_a_3541_);
lean_dec(v___x_3532_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
lean_object* v___x_3546_; 
if (v_isShared_3544_ == 0)
{
lean_ctor_set_tag(v___x_3543_, 0);
v___x_3546_ = v___x_3543_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v_a_3541_);
v___x_3546_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
v_val_3527_ = v___x_3546_;
goto v___jp_3526_;
}
}
}
v___jp_3526_:
{
lean_object* v___x_3529_; 
if (v_isShared_3520_ == 0)
{
lean_ctor_set_tag(v___x_3519_, 0);
lean_ctor_set(v___x_3519_, 0, v_val_3527_);
v___x_3529_ = v___x_3519_;
goto v_reusejp_3528_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v_val_3527_);
v___x_3529_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3528_;
}
v_reusejp_3528_:
{
lean_object* v___x_3530_; 
v___x_3530_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3524_, v___x_3525_, v___x_3529_, v___f_3523_);
return v___x_3530_;
}
}
}
}
}
}
}
case 1:
{
lean_object* v_x_3552_; lean_object* v___x_3554_; uint8_t v_isShared_3555_; uint8_t v_isSharedCheck_3664_; 
lean_dec_ref(v_config_3433_);
lean_dec(v_handler_3432_);
lean_dec_ref(v_inst_3430_);
v_x_3552_ = lean_ctor_get(v_event_3434_, 0);
v_isSharedCheck_3664_ = !lean_is_exclusive(v_event_3434_);
if (v_isSharedCheck_3664_ == 0)
{
v___x_3554_ = v_event_3434_;
v_isShared_3555_ = v_isSharedCheck_3664_;
goto v_resetjp_3553_;
}
else
{
lean_inc(v_x_3552_);
lean_dec(v_event_3434_);
v___x_3554_ = lean_box(0);
v_isShared_3555_ = v_isSharedCheck_3664_;
goto v_resetjp_3553_;
}
v_resetjp_3553_:
{
if (lean_obj_tag(v_x_3552_) == 0)
{
lean_object* v_machine_3556_; lean_object* v_requestStream_3557_; lean_object* v_keepAliveTimeout_3558_; lean_object* v_currentTimeout_3559_; lean_object* v_headerTimeout_3560_; lean_object* v_response_3561_; lean_object* v_respStream_3562_; uint8_t v_requiresData_3563_; lean_object* v_expectData_3564_; uint8_t v_handlerDispatched_3565_; lean_object* v_pendingHead_3566_; lean_object* v_dateSecond_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___f_3570_; 
lean_del_object(v___x_3554_);
v_machine_3556_ = lean_ctor_get(v_state_3435_, 0);
lean_inc_ref_n(v_machine_3556_, 2);
v_requestStream_3557_ = lean_ctor_get(v_state_3435_, 1);
lean_inc_ref_n(v_requestStream_3557_, 2);
v_keepAliveTimeout_3558_ = lean_ctor_get(v_state_3435_, 2);
lean_inc_n(v_keepAliveTimeout_3558_, 2);
v_currentTimeout_3559_ = lean_ctor_get(v_state_3435_, 3);
lean_inc_n(v_currentTimeout_3559_, 2);
v_headerTimeout_3560_ = lean_ctor_get(v_state_3435_, 4);
lean_inc_n(v_headerTimeout_3560_, 2);
v_response_3561_ = lean_ctor_get(v_state_3435_, 5);
lean_inc_ref_n(v_response_3561_, 2);
v_respStream_3562_ = lean_ctor_get(v_state_3435_, 6);
lean_inc(v_respStream_3562_);
v_requiresData_3563_ = lean_ctor_get_uint8(v_state_3435_, sizeof(void*)*10);
v_expectData_3564_ = lean_ctor_get(v_state_3435_, 7);
lean_inc_n(v_expectData_3564_, 2);
v_handlerDispatched_3565_ = lean_ctor_get_uint8(v_state_3435_, sizeof(void*)*10 + 1);
v_pendingHead_3566_ = lean_ctor_get(v_state_3435_, 8);
lean_inc_n(v_pendingHead_3566_, 2);
v_dateSecond_3567_ = lean_ctor_get(v_state_3435_, 9);
lean_inc_n(v_dateSecond_3567_, 2);
lean_dec_ref(v_state_3435_);
v___x_3568_ = lean_box(v_requiresData_3563_);
v___x_3569_ = lean_box(v_handlerDispatched_3565_);
v___f_3570_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2___boxed), 13, 11);
lean_closure_set(v___f_3570_, 0, v_machine_3556_);
lean_closure_set(v___f_3570_, 1, v_requestStream_3557_);
lean_closure_set(v___f_3570_, 2, v_keepAliveTimeout_3558_);
lean_closure_set(v___f_3570_, 3, v_currentTimeout_3559_);
lean_closure_set(v___f_3570_, 4, v_headerTimeout_3560_);
lean_closure_set(v___f_3570_, 5, v_response_3561_);
lean_closure_set(v___f_3570_, 6, v___x_3568_);
lean_closure_set(v___f_3570_, 7, v_expectData_3564_);
lean_closure_set(v___f_3570_, 8, v___x_3569_);
lean_closure_set(v___f_3570_, 9, v_pendingHead_3566_);
lean_closure_set(v___f_3570_, 10, v_dateSecond_3567_);
if (lean_obj_tag(v_respStream_3562_) == 1)
{
lean_object* v_val_3571_; lean_object* v_close_3572_; lean_object* v_isClosed_3573_; lean_object* v___f_3574_; lean_object* v___f_3575_; lean_object* v___x_3576_; uint8_t v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; 
lean_dec(v_dateSecond_3567_);
lean_dec(v_pendingHead_3566_);
lean_dec(v_expectData_3564_);
lean_dec_ref(v_response_3561_);
lean_dec(v_headerTimeout_3560_);
lean_dec(v_currentTimeout_3559_);
lean_dec(v_keepAliveTimeout_3558_);
lean_dec_ref(v_requestStream_3557_);
lean_dec_ref(v_machine_3556_);
v_val_3571_ = lean_ctor_get(v_respStream_3562_, 0);
lean_inc_n(v_val_3571_, 2);
lean_dec_ref_known(v_respStream_3562_, 1);
v_close_3572_ = lean_ctor_get(v_inst_3431_, 1);
lean_inc_ref(v_close_3572_);
v_isClosed_3573_ = lean_ctor_get(v_inst_3431_, 2);
lean_inc_ref(v_isClosed_3573_);
lean_dec_ref(v_inst_3431_);
lean_inc_ref(v___f_3570_);
v___f_3574_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3574_, 0, v___f_3570_);
v___f_3575_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_3575_, 0, v_close_3572_);
lean_closure_set(v___f_3575_, 1, v_val_3571_);
lean_closure_set(v___f_3575_, 2, v___f_3574_);
lean_closure_set(v___f_3575_, 3, v___f_3570_);
v___x_3576_ = lean_unsigned_to_nat(0u);
v___x_3577_ = 0;
v___x_3578_ = lean_apply_2(v_isClosed_3573_, v_val_3571_, lean_box(0));
v___x_3579_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3576_, v___x_3577_, v___x_3578_, v___f_3575_);
return v___x_3579_;
}
else
{
lean_object* v___x_3580_; lean_object* v___x_3581_; 
lean_dec_ref(v___f_3570_);
lean_dec(v_respStream_3562_);
lean_dec_ref(v_inst_3431_);
v___x_3580_ = lean_box(0);
v___x_3581_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__2(v_machine_3556_, v_requestStream_3557_, v_keepAliveTimeout_3558_, v_currentTimeout_3559_, v_headerTimeout_3560_, v_response_3561_, v_requiresData_3563_, v_expectData_3564_, v_handlerDispatched_3565_, v_pendingHead_3566_, v_dateSecond_3567_, v___x_3580_);
return v___x_3581_;
}
}
else
{
lean_object* v_val_3582_; lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3663_; 
lean_dec_ref(v_inst_3431_);
v_val_3582_ = lean_ctor_get(v_x_3552_, 0);
v_isSharedCheck_3663_ = !lean_is_exclusive(v_x_3552_);
if (v_isSharedCheck_3663_ == 0)
{
v___x_3584_ = v_x_3552_;
v_isShared_3585_ = v_isSharedCheck_3663_;
goto v_resetjp_3583_;
}
else
{
lean_inc(v_val_3582_);
lean_dec(v_x_3552_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3663_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
lean_object* v_machine_3586_; lean_object* v_requestStream_3587_; lean_object* v_keepAliveTimeout_3588_; lean_object* v_currentTimeout_3589_; lean_object* v_headerTimeout_3590_; lean_object* v_response_3591_; lean_object* v_respStream_3592_; uint8_t v_requiresData_3593_; lean_object* v_expectData_3594_; uint8_t v_handlerDispatched_3595_; lean_object* v_pendingHead_3596_; lean_object* v_dateSecond_3597_; lean_object* v___x_3599_; uint8_t v_isShared_3600_; uint8_t v_isSharedCheck_3662_; 
v_machine_3586_ = lean_ctor_get(v_state_3435_, 0);
v_requestStream_3587_ = lean_ctor_get(v_state_3435_, 1);
v_keepAliveTimeout_3588_ = lean_ctor_get(v_state_3435_, 2);
v_currentTimeout_3589_ = lean_ctor_get(v_state_3435_, 3);
v_headerTimeout_3590_ = lean_ctor_get(v_state_3435_, 4);
v_response_3591_ = lean_ctor_get(v_state_3435_, 5);
v_respStream_3592_ = lean_ctor_get(v_state_3435_, 6);
v_requiresData_3593_ = lean_ctor_get_uint8(v_state_3435_, sizeof(void*)*10);
v_expectData_3594_ = lean_ctor_get(v_state_3435_, 7);
v_handlerDispatched_3595_ = lean_ctor_get_uint8(v_state_3435_, sizeof(void*)*10 + 1);
v_pendingHead_3596_ = lean_ctor_get(v_state_3435_, 8);
v_dateSecond_3597_ = lean_ctor_get(v_state_3435_, 9);
v_isSharedCheck_3662_ = !lean_is_exclusive(v_state_3435_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3599_ = v_state_3435_;
v_isShared_3600_ = v_isSharedCheck_3662_;
goto v_resetjp_3598_;
}
else
{
lean_inc(v_dateSecond_3597_);
lean_inc(v_pendingHead_3596_);
lean_inc(v_expectData_3594_);
lean_inc(v_respStream_3592_);
lean_inc(v_response_3591_);
lean_inc(v_headerTimeout_3590_);
lean_inc(v_currentTimeout_3589_);
lean_inc(v_keepAliveTimeout_3588_);
lean_inc(v_requestStream_3587_);
lean_inc(v_machine_3586_);
lean_dec(v_state_3435_);
v___x_3599_ = lean_box(0);
v_isShared_3600_ = v_isSharedCheck_3662_;
goto v_resetjp_3598_;
}
v_resetjp_3598_:
{
lean_object* v___y_3602_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; uint8_t v___x_3620_; 
v___x_3615_ = lean_unsigned_to_nat(1u);
v___x_3616_ = lean_mk_empty_array_with_capacity(v___x_3615_);
v___x_3617_ = lean_array_push(v___x_3616_, v_val_3582_);
v___x_3618_ = lean_array_get_size(v___x_3617_);
v___x_3619_ = lean_unsigned_to_nat(0u);
v___x_3620_ = lean_nat_dec_eq(v___x_3618_, v___x_3619_);
if (v___x_3620_ == 0)
{
lean_object* v_reader_3621_; lean_object* v_writer_3622_; lean_object* v_config_3623_; lean_object* v_events_3624_; lean_object* v_error_3625_; lean_object* v_date_3626_; uint8_t v_keepAlive_3627_; uint8_t v_pullBodyStalled_3628_; lean_object* v___x_3630_; uint8_t v_isShared_3631_; uint8_t v_isSharedCheck_3661_; 
v_reader_3621_ = lean_ctor_get(v_machine_3586_, 0);
v_writer_3622_ = lean_ctor_get(v_machine_3586_, 1);
v_config_3623_ = lean_ctor_get(v_machine_3586_, 2);
v_events_3624_ = lean_ctor_get(v_machine_3586_, 3);
v_error_3625_ = lean_ctor_get(v_machine_3586_, 4);
v_date_3626_ = lean_ctor_get(v_machine_3586_, 5);
v_keepAlive_3627_ = lean_ctor_get_uint8(v_machine_3586_, sizeof(void*)*6);
v_pullBodyStalled_3628_ = lean_ctor_get_uint8(v_machine_3586_, sizeof(void*)*6 + 1);
v_isSharedCheck_3661_ = !lean_is_exclusive(v_machine_3586_);
if (v_isSharedCheck_3661_ == 0)
{
v___x_3630_ = v_machine_3586_;
v_isShared_3631_ = v_isSharedCheck_3661_;
goto v_resetjp_3629_;
}
else
{
lean_inc(v_date_3626_);
lean_inc(v_error_3625_);
lean_inc(v_events_3624_);
lean_inc(v_config_3623_);
lean_inc(v_writer_3622_);
lean_inc(v_reader_3621_);
lean_dec(v_machine_3586_);
v___x_3630_ = lean_box(0);
v_isShared_3631_ = v_isSharedCheck_3661_;
goto v_resetjp_3629_;
}
v_resetjp_3629_:
{
lean_object* v___y_3633_; lean_object* v___x_3655_; uint8_t v___x_3656_; 
v___x_3655_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9));
v___x_3656_ = lean_nat_dec_lt(v___x_3619_, v___x_3618_);
if (v___x_3656_ == 0)
{
v___y_3633_ = v___x_3619_;
goto v___jp_3632_;
}
else
{
lean_object* v___f_3657_; size_t v___x_3658_; size_t v___x_3659_; lean_object* v___x_3660_; 
v___f_3657_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_tryDrainBody___redArg___closed__0));
v___x_3658_ = ((size_t)0ULL);
v___x_3659_ = lean_usize_of_nat(v___x_3618_);
lean_inc_ref(v___x_3617_);
v___x_3660_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3655_, v___f_3657_, v___x_3617_, v___x_3658_, v___x_3659_, v___x_3619_);
v___y_3633_ = v___x_3660_;
goto v___jp_3632_;
}
v___jp_3632_:
{
lean_object* v_userData_3634_; lean_object* v_outputData_3635_; lean_object* v_state_3636_; lean_object* v_knownSize_3637_; lean_object* v_messageHead_3638_; uint8_t v_sentMessage_3639_; uint8_t v_userClosedBody_3640_; uint8_t v_omitBody_3641_; lean_object* v_userDataBytes_3642_; lean_object* v___x_3644_; uint8_t v_isShared_3645_; uint8_t v_isSharedCheck_3654_; 
v_userData_3634_ = lean_ctor_get(v_writer_3622_, 0);
v_outputData_3635_ = lean_ctor_get(v_writer_3622_, 1);
v_state_3636_ = lean_ctor_get(v_writer_3622_, 2);
v_knownSize_3637_ = lean_ctor_get(v_writer_3622_, 3);
v_messageHead_3638_ = lean_ctor_get(v_writer_3622_, 4);
v_sentMessage_3639_ = lean_ctor_get_uint8(v_writer_3622_, sizeof(void*)*6);
v_userClosedBody_3640_ = lean_ctor_get_uint8(v_writer_3622_, sizeof(void*)*6 + 1);
v_omitBody_3641_ = lean_ctor_get_uint8(v_writer_3622_, sizeof(void*)*6 + 2);
v_userDataBytes_3642_ = lean_ctor_get(v_writer_3622_, 5);
v_isSharedCheck_3654_ = !lean_is_exclusive(v_writer_3622_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3644_ = v_writer_3622_;
v_isShared_3645_ = v_isSharedCheck_3654_;
goto v_resetjp_3643_;
}
else
{
lean_inc(v_userDataBytes_3642_);
lean_inc(v_messageHead_3638_);
lean_inc(v_knownSize_3637_);
lean_inc(v_state_3636_);
lean_inc(v_outputData_3635_);
lean_inc(v_userData_3634_);
lean_dec(v_writer_3622_);
v___x_3644_ = lean_box(0);
v_isShared_3645_ = v_isSharedCheck_3654_;
goto v_resetjp_3643_;
}
v_resetjp_3643_:
{
lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3649_; 
v___x_3646_ = l_Array_append___redArg(v_userData_3634_, v___x_3617_);
lean_dec_ref(v___x_3617_);
v___x_3647_ = lean_nat_add(v_userDataBytes_3642_, v___y_3633_);
lean_dec(v___y_3633_);
lean_dec(v_userDataBytes_3642_);
if (v_isShared_3645_ == 0)
{
lean_ctor_set(v___x_3644_, 5, v___x_3647_);
lean_ctor_set(v___x_3644_, 0, v___x_3646_);
v___x_3649_ = v___x_3644_;
goto v_reusejp_3648_;
}
else
{
lean_object* v_reuseFailAlloc_3653_; 
v_reuseFailAlloc_3653_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3653_, 0, v___x_3646_);
lean_ctor_set(v_reuseFailAlloc_3653_, 1, v_outputData_3635_);
lean_ctor_set(v_reuseFailAlloc_3653_, 2, v_state_3636_);
lean_ctor_set(v_reuseFailAlloc_3653_, 3, v_knownSize_3637_);
lean_ctor_set(v_reuseFailAlloc_3653_, 4, v_messageHead_3638_);
lean_ctor_set(v_reuseFailAlloc_3653_, 5, v___x_3647_);
lean_ctor_set_uint8(v_reuseFailAlloc_3653_, sizeof(void*)*6, v_sentMessage_3639_);
lean_ctor_set_uint8(v_reuseFailAlloc_3653_, sizeof(void*)*6 + 1, v_userClosedBody_3640_);
lean_ctor_set_uint8(v_reuseFailAlloc_3653_, sizeof(void*)*6 + 2, v_omitBody_3641_);
v___x_3649_ = v_reuseFailAlloc_3653_;
goto v_reusejp_3648_;
}
v_reusejp_3648_:
{
lean_object* v___x_3651_; 
if (v_isShared_3631_ == 0)
{
lean_ctor_set(v___x_3630_, 1, v___x_3649_);
v___x_3651_ = v___x_3630_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v_reader_3621_);
lean_ctor_set(v_reuseFailAlloc_3652_, 1, v___x_3649_);
lean_ctor_set(v_reuseFailAlloc_3652_, 2, v_config_3623_);
lean_ctor_set(v_reuseFailAlloc_3652_, 3, v_events_3624_);
lean_ctor_set(v_reuseFailAlloc_3652_, 4, v_error_3625_);
lean_ctor_set(v_reuseFailAlloc_3652_, 5, v_date_3626_);
lean_ctor_set_uint8(v_reuseFailAlloc_3652_, sizeof(void*)*6, v_keepAlive_3627_);
lean_ctor_set_uint8(v_reuseFailAlloc_3652_, sizeof(void*)*6 + 1, v_pullBodyStalled_3628_);
v___x_3651_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
v___y_3602_ = v___x_3651_;
goto v___jp_3601_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_3617_);
v___y_3602_ = v_machine_3586_;
goto v___jp_3601_;
}
v___jp_3601_:
{
lean_object* v___x_3604_; 
if (v_isShared_3600_ == 0)
{
lean_ctor_set(v___x_3599_, 0, v___y_3602_);
v___x_3604_ = v___x_3599_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v___y_3602_);
lean_ctor_set(v_reuseFailAlloc_3614_, 1, v_requestStream_3587_);
lean_ctor_set(v_reuseFailAlloc_3614_, 2, v_keepAliveTimeout_3588_);
lean_ctor_set(v_reuseFailAlloc_3614_, 3, v_currentTimeout_3589_);
lean_ctor_set(v_reuseFailAlloc_3614_, 4, v_headerTimeout_3590_);
lean_ctor_set(v_reuseFailAlloc_3614_, 5, v_response_3591_);
lean_ctor_set(v_reuseFailAlloc_3614_, 6, v_respStream_3592_);
lean_ctor_set(v_reuseFailAlloc_3614_, 7, v_expectData_3594_);
lean_ctor_set(v_reuseFailAlloc_3614_, 8, v_pendingHead_3596_);
lean_ctor_set(v_reuseFailAlloc_3614_, 9, v_dateSecond_3597_);
lean_ctor_set_uint8(v_reuseFailAlloc_3614_, sizeof(void*)*10, v_requiresData_3593_);
lean_ctor_set_uint8(v_reuseFailAlloc_3614_, sizeof(void*)*10 + 1, v_handlerDispatched_3595_);
v___x_3604_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
uint8_t v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3609_; 
v___x_3605_ = 0;
v___x_3606_ = lean_box(v___x_3605_);
v___x_3607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3607_, 0, v___x_3604_);
lean_ctor_set(v___x_3607_, 1, v___x_3606_);
if (v_isShared_3585_ == 0)
{
lean_ctor_set(v___x_3584_, 0, v___x_3607_);
v___x_3609_ = v___x_3584_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3613_; 
v_reuseFailAlloc_3613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3613_, 0, v___x_3607_);
v___x_3609_ = v_reuseFailAlloc_3613_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
lean_object* v___x_3611_; 
if (v_isShared_3555_ == 0)
{
lean_ctor_set_tag(v___x_3554_, 0);
lean_ctor_set(v___x_3554_, 0, v___x_3609_);
v___x_3611_ = v___x_3554_;
goto v_reusejp_3610_;
}
else
{
lean_object* v_reuseFailAlloc_3612_; 
v_reuseFailAlloc_3612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3612_, 0, v___x_3609_);
v___x_3611_ = v_reuseFailAlloc_3612_;
goto v_reusejp_3610_;
}
v_reusejp_3610_:
{
return v___x_3611_;
}
}
}
}
}
}
}
}
}
case 2:
{
uint8_t v_x_3665_; 
lean_dec_ref(v_config_3433_);
lean_dec_ref(v_inst_3431_);
v_x_3665_ = lean_ctor_get_uint8(v_event_3434_, 0);
lean_dec_ref_known(v_event_3434_, 0);
if (v_x_3665_ == 0)
{
lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; 
lean_dec(v_handler_3432_);
lean_dec_ref(v_inst_3430_);
v___x_3666_ = lean_box(v_x_3665_);
v___x_3667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3667_, 0, v_state_3435_);
lean_ctor_set(v___x_3667_, 1, v___x_3666_);
v___x_3668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3668_, 0, v___x_3667_);
v___x_3669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3669_, 0, v___x_3668_);
return v___x_3669_;
}
else
{
lean_object* v_machine_3670_; lean_object* v_requestStream_3671_; lean_object* v_keepAliveTimeout_3672_; lean_object* v_currentTimeout_3673_; lean_object* v_headerTimeout_3674_; lean_object* v_response_3675_; lean_object* v_respStream_3676_; uint8_t v_requiresData_3677_; lean_object* v_expectData_3678_; uint8_t v_handlerDispatched_3679_; lean_object* v_pendingHead_3680_; lean_object* v_dateSecond_3681_; lean_object* v___x_3683_; uint8_t v_isShared_3684_; uint8_t v_isSharedCheck_3730_; 
v_machine_3670_ = lean_ctor_get(v_state_3435_, 0);
v_requestStream_3671_ = lean_ctor_get(v_state_3435_, 1);
v_keepAliveTimeout_3672_ = lean_ctor_get(v_state_3435_, 2);
v_currentTimeout_3673_ = lean_ctor_get(v_state_3435_, 3);
v_headerTimeout_3674_ = lean_ctor_get(v_state_3435_, 4);
v_response_3675_ = lean_ctor_get(v_state_3435_, 5);
v_respStream_3676_ = lean_ctor_get(v_state_3435_, 6);
v_requiresData_3677_ = lean_ctor_get_uint8(v_state_3435_, sizeof(void*)*10);
v_expectData_3678_ = lean_ctor_get(v_state_3435_, 7);
v_handlerDispatched_3679_ = lean_ctor_get_uint8(v_state_3435_, sizeof(void*)*10 + 1);
v_pendingHead_3680_ = lean_ctor_get(v_state_3435_, 8);
v_dateSecond_3681_ = lean_ctor_get(v_state_3435_, 9);
v_isSharedCheck_3730_ = !lean_is_exclusive(v_state_3435_);
if (v_isSharedCheck_3730_ == 0)
{
v___x_3683_ = v_state_3435_;
v_isShared_3684_ = v_isSharedCheck_3730_;
goto v_resetjp_3682_;
}
else
{
lean_inc(v_dateSecond_3681_);
lean_inc(v_pendingHead_3680_);
lean_inc(v_expectData_3678_);
lean_inc(v_respStream_3676_);
lean_inc(v_response_3675_);
lean_inc(v_headerTimeout_3674_);
lean_inc(v_currentTimeout_3673_);
lean_inc(v_keepAliveTimeout_3672_);
lean_inc(v_requestStream_3671_);
lean_inc(v_machine_3670_);
lean_dec(v_state_3435_);
v___x_3683_ = lean_box(0);
v_isShared_3684_ = v_isSharedCheck_3730_;
goto v_resetjp_3682_;
}
v_resetjp_3682_:
{
uint8_t v___x_3685_; lean_object* v___x_3686_; lean_object* v_fst_3687_; lean_object* v_snd_3688_; lean_object* v_reader_3689_; lean_object* v_writer_3690_; lean_object* v_config_3691_; lean_object* v_events_3692_; lean_object* v_error_3693_; lean_object* v_date_3694_; uint8_t v_keepAlive_3695_; lean_object* v___x_3697_; uint8_t v_isShared_3698_; uint8_t v_isSharedCheck_3729_; 
v___x_3685_ = 0;
v___x_3686_ = l___private_Std_Http_Protocol_H1_0__Std_Http_Protocol_H1_Machine_pullNextChunk(v___x_3685_, v_machine_3670_);
v_fst_3687_ = lean_ctor_get(v___x_3686_, 0);
lean_inc(v_fst_3687_);
v_snd_3688_ = lean_ctor_get(v___x_3686_, 1);
lean_inc(v_snd_3688_);
lean_dec_ref(v___x_3686_);
v_reader_3689_ = lean_ctor_get(v_fst_3687_, 0);
v_writer_3690_ = lean_ctor_get(v_fst_3687_, 1);
v_config_3691_ = lean_ctor_get(v_fst_3687_, 2);
v_events_3692_ = lean_ctor_get(v_fst_3687_, 3);
v_error_3693_ = lean_ctor_get(v_fst_3687_, 4);
v_date_3694_ = lean_ctor_get(v_fst_3687_, 5);
v_keepAlive_3695_ = lean_ctor_get_uint8(v_fst_3687_, sizeof(void*)*6);
v_isSharedCheck_3729_ = !lean_is_exclusive(v_fst_3687_);
if (v_isSharedCheck_3729_ == 0)
{
v___x_3697_ = v_fst_3687_;
v_isShared_3698_ = v_isSharedCheck_3729_;
goto v_resetjp_3696_;
}
else
{
lean_inc(v_date_3694_);
lean_inc(v_error_3693_);
lean_inc(v_events_3692_);
lean_inc(v_config_3691_);
lean_inc(v_writer_3690_);
lean_inc(v_reader_3689_);
lean_dec(v_fst_3687_);
v___x_3697_ = lean_box(0);
v_isShared_3698_ = v_isSharedCheck_3729_;
goto v_resetjp_3696_;
}
v_resetjp_3696_:
{
lean_object* v___f_3699_; lean_object* v___f_3700_; uint8_t v___y_3702_; 
v___f_3699_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___f_3700_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__7___boxed), 4, 2);
lean_closure_set(v___f_3700_, 0, v_inst_3430_);
lean_closure_set(v___f_3700_, 1, v_handler_3432_);
if (lean_obj_tag(v_snd_3688_) == 0)
{
uint8_t v_sentMessage_3725_; 
v_sentMessage_3725_ = lean_ctor_get_uint8(v_writer_3690_, sizeof(void*)*6);
if (v_sentMessage_3725_ == 0)
{
lean_object* v_state_3726_; 
v_state_3726_ = lean_ctor_get(v_reader_3689_, 0);
if (lean_obj_tag(v_state_3726_) == 2)
{
v___y_3702_ = v_x_3665_;
goto v___jp_3701_;
}
else
{
v___y_3702_ = v_sentMessage_3725_;
goto v___jp_3701_;
}
}
else
{
uint8_t v___x_3727_; 
v___x_3727_ = 0;
v___y_3702_ = v___x_3727_;
goto v___jp_3701_;
}
}
else
{
uint8_t v___x_3728_; 
v___x_3728_ = 0;
v___y_3702_ = v___x_3728_;
goto v___jp_3701_;
}
v___jp_3701_:
{
lean_object* v___x_3704_; 
if (v_isShared_3698_ == 0)
{
v___x_3704_ = v___x_3697_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_reader_3689_);
lean_ctor_set(v_reuseFailAlloc_3724_, 1, v_writer_3690_);
lean_ctor_set(v_reuseFailAlloc_3724_, 2, v_config_3691_);
lean_ctor_set(v_reuseFailAlloc_3724_, 3, v_events_3692_);
lean_ctor_set(v_reuseFailAlloc_3724_, 4, v_error_3693_);
lean_ctor_set(v_reuseFailAlloc_3724_, 5, v_date_3694_);
lean_ctor_set_uint8(v_reuseFailAlloc_3724_, sizeof(void*)*6, v_keepAlive_3695_);
v___x_3704_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
lean_object* v_st_3706_; 
lean_ctor_set_uint8(v___x_3704_, sizeof(void*)*6 + 1, v___y_3702_);
lean_inc_ref(v_requestStream_3671_);
if (v_isShared_3684_ == 0)
{
lean_ctor_set(v___x_3683_, 0, v___x_3704_);
v_st_3706_ = v___x_3683_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3723_; 
v_reuseFailAlloc_3723_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_3723_, 0, v___x_3704_);
lean_ctor_set(v_reuseFailAlloc_3723_, 1, v_requestStream_3671_);
lean_ctor_set(v_reuseFailAlloc_3723_, 2, v_keepAliveTimeout_3672_);
lean_ctor_set(v_reuseFailAlloc_3723_, 3, v_currentTimeout_3673_);
lean_ctor_set(v_reuseFailAlloc_3723_, 4, v_headerTimeout_3674_);
lean_ctor_set(v_reuseFailAlloc_3723_, 5, v_response_3675_);
lean_ctor_set(v_reuseFailAlloc_3723_, 6, v_respStream_3676_);
lean_ctor_set(v_reuseFailAlloc_3723_, 7, v_expectData_3678_);
lean_ctor_set(v_reuseFailAlloc_3723_, 8, v_pendingHead_3680_);
lean_ctor_set(v_reuseFailAlloc_3723_, 9, v_dateSecond_3681_);
lean_ctor_set_uint8(v_reuseFailAlloc_3723_, sizeof(void*)*10, v_requiresData_3677_);
lean_ctor_set_uint8(v_reuseFailAlloc_3723_, sizeof(void*)*10 + 1, v_handlerDispatched_3679_);
v_st_3706_ = v_reuseFailAlloc_3723_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
lean_object* v___f_3707_; 
lean_inc_ref(v_st_3706_);
v___f_3707_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3707_, 0, v_st_3706_);
if (lean_obj_tag(v_snd_3688_) == 1)
{
lean_object* v_val_3708_; uint8_t v_final_3709_; uint8_t v_incomplete_3710_; lean_object* v_chunk_3711_; lean_object* v___f_3712_; lean_object* v___f_3713_; lean_object* v___x_3714_; lean_object* v___f_3715_; lean_object* v___x_3716_; uint8_t v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; 
lean_dec_ref(v_st_3706_);
v_val_3708_ = lean_ctor_get(v_snd_3688_, 0);
lean_inc(v_val_3708_);
lean_dec_ref_known(v_snd_3688_, 1);
v_final_3709_ = lean_ctor_get_uint8(v_val_3708_, sizeof(void*)*1);
v_incomplete_3710_ = lean_ctor_get_uint8(v_val_3708_, sizeof(void*)*1 + 1);
v_chunk_3711_ = lean_ctor_get(v_val_3708_, 0);
lean_inc_ref(v_chunk_3711_);
lean_dec(v_val_3708_);
lean_inc_ref_n(v___f_3707_, 2);
v___f_3712_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3712_, 0, v___f_3707_);
lean_inc_ref_n(v_requestStream_3671_, 2);
v___f_3713_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_3713_, 0, v_requestStream_3671_);
lean_closure_set(v___f_3713_, 1, v___f_3712_);
lean_closure_set(v___f_3713_, 2, v___f_3707_);
v___x_3714_ = lean_box(v_final_3709_);
v___f_3715_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__6___boxed), 7, 5);
lean_closure_set(v___f_3715_, 0, v___x_3714_);
lean_closure_set(v___f_3715_, 1, v___f_3707_);
lean_closure_set(v___f_3715_, 2, v___f_3699_);
lean_closure_set(v___f_3715_, 3, v_requestStream_3671_);
lean_closure_set(v___f_3715_, 4, v___f_3713_);
v___x_3716_ = lean_unsigned_to_nat(0u);
v___x_3717_ = 0;
v___x_3718_ = l_Std_Http_Body_Stream_send(v_requestStream_3671_, v_chunk_3711_, v_incomplete_3710_);
v___x_3719_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3716_, v___x_3717_, v___x_3718_, v___f_3700_);
v___x_3720_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3716_, v___x_3717_, v___x_3719_, v___f_3715_);
return v___x_3720_;
}
else
{
lean_object* v___x_3721_; lean_object* v___x_3722_; 
lean_dec_ref(v___f_3707_);
lean_dec_ref(v___f_3700_);
lean_dec(v_snd_3688_);
lean_dec_ref(v_requestStream_3671_);
v___x_3721_ = lean_box(0);
v___x_3722_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__5(v_st_3706_, v___x_3721_);
return v___x_3722_;
}
}
}
}
}
}
}
}
case 3:
{
lean_object* v_x_3731_; lean_object* v___x_3733_; uint8_t v_isShared_3734_; uint8_t v_isSharedCheck_3794_; 
v_x_3731_ = lean_ctor_get(v_event_3434_, 0);
v_isSharedCheck_3794_ = !lean_is_exclusive(v_event_3434_);
if (v_isSharedCheck_3794_ == 0)
{
v___x_3733_ = v_event_3434_;
v_isShared_3734_ = v_isSharedCheck_3794_;
goto v_resetjp_3732_;
}
else
{
lean_inc(v_x_3731_);
lean_dec(v_event_3434_);
v___x_3733_ = lean_box(0);
v_isShared_3734_ = v_isSharedCheck_3794_;
goto v_resetjp_3732_;
}
v_resetjp_3732_:
{
if (lean_obj_tag(v_x_3731_) == 0)
{
lean_object* v_a_3735_; lean_object* v_onFailure_3736_; lean_object* v___f_3737_; lean_object* v___x_3738_; uint8_t v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; 
lean_del_object(v___x_3733_);
lean_dec_ref(v_config_3433_);
lean_dec_ref(v_inst_3431_);
v_a_3735_ = lean_ctor_get(v_x_3731_, 0);
lean_inc(v_a_3735_);
lean_dec_ref_known(v_x_3731_, 1);
v_onFailure_3736_ = lean_ctor_get(v_inst_3430_, 2);
lean_inc_ref(v_onFailure_3736_);
lean_dec_ref(v_inst_3430_);
v___f_3737_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__9___boxed), 3, 1);
lean_closure_set(v___f_3737_, 0, v_state_3435_);
v___x_3738_ = lean_unsigned_to_nat(0u);
v___x_3739_ = 0;
v___x_3740_ = lean_apply_3(v_onFailure_3736_, v_handler_3432_, v_a_3735_, lean_box(0));
v___x_3741_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3738_, v___x_3739_, v___x_3740_, v___f_3737_);
return v___x_3741_;
}
else
{
lean_object* v_machine_3742_; lean_object* v_reader_3743_; lean_object* v_state_3744_; 
v_machine_3742_ = lean_ctor_get(v_state_3435_, 0);
v_reader_3743_ = lean_ctor_get(v_machine_3742_, 0);
v_state_3744_ = lean_ctor_get(v_reader_3743_, 0);
if (lean_obj_tag(v_state_3744_) == 7)
{
lean_object* v_a_3745_; lean_object* v_requestStream_3746_; lean_object* v_keepAliveTimeout_3747_; lean_object* v_currentTimeout_3748_; lean_object* v_headerTimeout_3749_; lean_object* v_response_3750_; lean_object* v_respStream_3751_; uint8_t v_requiresData_3752_; lean_object* v_expectData_3753_; lean_object* v_pendingHead_3754_; lean_object* v_dateSecond_3755_; lean_object* v_close_3756_; lean_object* v_isClosed_3757_; lean_object* v_body_3758_; lean_object* v___x_3759_; lean_object* v___f_3760_; lean_object* v___f_3761_; lean_object* v___f_3762_; lean_object* v___x_3763_; uint8_t v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; 
lean_inc_ref(v_machine_3742_);
lean_del_object(v___x_3733_);
lean_dec_ref(v_config_3433_);
lean_dec(v_handler_3432_);
lean_dec_ref(v_inst_3430_);
v_a_3745_ = lean_ctor_get(v_x_3731_, 0);
lean_inc(v_a_3745_);
lean_dec_ref_known(v_x_3731_, 1);
v_requestStream_3746_ = lean_ctor_get(v_state_3435_, 1);
lean_inc_ref(v_requestStream_3746_);
v_keepAliveTimeout_3747_ = lean_ctor_get(v_state_3435_, 2);
lean_inc(v_keepAliveTimeout_3747_);
v_currentTimeout_3748_ = lean_ctor_get(v_state_3435_, 3);
lean_inc(v_currentTimeout_3748_);
v_headerTimeout_3749_ = lean_ctor_get(v_state_3435_, 4);
lean_inc(v_headerTimeout_3749_);
v_response_3750_ = lean_ctor_get(v_state_3435_, 5);
lean_inc_ref(v_response_3750_);
v_respStream_3751_ = lean_ctor_get(v_state_3435_, 6);
lean_inc(v_respStream_3751_);
v_requiresData_3752_ = lean_ctor_get_uint8(v_state_3435_, sizeof(void*)*10);
v_expectData_3753_ = lean_ctor_get(v_state_3435_, 7);
lean_inc(v_expectData_3753_);
v_pendingHead_3754_ = lean_ctor_get(v_state_3435_, 8);
lean_inc(v_pendingHead_3754_);
v_dateSecond_3755_ = lean_ctor_get(v_state_3435_, 9);
lean_inc(v_dateSecond_3755_);
lean_dec_ref(v_state_3435_);
v_close_3756_ = lean_ctor_get(v_inst_3431_, 1);
lean_inc_ref(v_close_3756_);
v_isClosed_3757_ = lean_ctor_get(v_inst_3431_, 2);
lean_inc_ref(v_isClosed_3757_);
lean_dec_ref(v_inst_3431_);
v_body_3758_ = lean_ctor_get(v_a_3745_, 1);
lean_inc_n(v_body_3758_, 2);
lean_dec(v_a_3745_);
v___x_3759_ = lean_box(v_requiresData_3752_);
v___f_3760_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__10___boxed), 13, 11);
lean_closure_set(v___f_3760_, 0, v_machine_3742_);
lean_closure_set(v___f_3760_, 1, v_requestStream_3746_);
lean_closure_set(v___f_3760_, 2, v_keepAliveTimeout_3747_);
lean_closure_set(v___f_3760_, 3, v_currentTimeout_3748_);
lean_closure_set(v___f_3760_, 4, v_headerTimeout_3749_);
lean_closure_set(v___f_3760_, 5, v_response_3750_);
lean_closure_set(v___f_3760_, 6, v_respStream_3751_);
lean_closure_set(v___f_3760_, 7, v___x_3759_);
lean_closure_set(v___f_3760_, 8, v_expectData_3753_);
lean_closure_set(v___f_3760_, 9, v_pendingHead_3754_);
lean_closure_set(v___f_3760_, 10, v_dateSecond_3755_);
lean_inc_ref(v___f_3760_);
v___f_3761_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3761_, 0, v___f_3760_);
v___f_3762_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__12___boxed), 6, 4);
lean_closure_set(v___f_3762_, 0, v_close_3756_);
lean_closure_set(v___f_3762_, 1, v_body_3758_);
lean_closure_set(v___f_3762_, 2, v___f_3761_);
lean_closure_set(v___f_3762_, 3, v___f_3760_);
v___x_3763_ = lean_unsigned_to_nat(0u);
v___x_3764_ = 0;
v___x_3765_ = lean_apply_2(v_isClosed_3757_, v_body_3758_, lean_box(0));
v___x_3766_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3763_, v___x_3764_, v___x_3765_, v___f_3762_);
return v___x_3766_;
}
else
{
lean_object* v_a_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3793_; 
v_a_3767_ = lean_ctor_get(v_x_3731_, 0);
v_isSharedCheck_3793_ = !lean_is_exclusive(v_x_3731_);
if (v_isSharedCheck_3793_ == 0)
{
v___x_3769_ = v_x_3731_;
v_isShared_3770_ = v_isSharedCheck_3793_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_a_3767_);
lean_dec(v_x_3731_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3793_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
uint8_t v___x_3771_; lean_object* v___f_3772_; uint8_t v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___f_3776_; lean_object* v___x_3777_; lean_object* v_val_3779_; lean_object* v___x_3784_; 
v___x_3771_ = 0;
v___f_3772_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__0));
v___x_3773_ = 1;
v___x_3774_ = lean_box(v___x_3771_);
v___x_3775_ = lean_box(v___x_3773_);
v___f_3776_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__18___boxed), 9, 7);
lean_closure_set(v___f_3776_, 0, v___x_3774_);
lean_closure_set(v___f_3776_, 1, v___x_3775_);
lean_closure_set(v___f_3776_, 2, v_inst_3430_);
lean_closure_set(v___f_3776_, 3, v_handler_3432_);
lean_closure_set(v___f_3776_, 4, v_inst_3431_);
lean_closure_set(v___f_3776_, 5, v___f_3772_);
lean_closure_set(v___f_3776_, 6, v_a_3767_);
v___x_3777_ = lean_unsigned_to_nat(0u);
v___x_3784_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg(v_config_3433_, v_state_3435_);
lean_dec_ref(v_config_3433_);
if (lean_obj_tag(v___x_3784_) == 0)
{
lean_object* v_a_3785_; lean_object* v___x_3787_; 
v_a_3785_ = lean_ctor_get(v___x_3784_, 0);
lean_inc(v_a_3785_);
lean_dec_ref_known(v___x_3784_, 1);
if (v_isShared_3770_ == 0)
{
lean_ctor_set(v___x_3769_, 0, v_a_3785_);
v___x_3787_ = v___x_3769_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3788_; 
v_reuseFailAlloc_3788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3788_, 0, v_a_3785_);
v___x_3787_ = v_reuseFailAlloc_3788_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
v_val_3779_ = v___x_3787_;
goto v___jp_3778_;
}
}
else
{
lean_object* v_a_3789_; lean_object* v___x_3791_; 
v_a_3789_ = lean_ctor_get(v___x_3784_, 0);
lean_inc(v_a_3789_);
lean_dec_ref_known(v___x_3784_, 1);
if (v_isShared_3770_ == 0)
{
lean_ctor_set_tag(v___x_3769_, 0);
lean_ctor_set(v___x_3769_, 0, v_a_3789_);
v___x_3791_ = v___x_3769_;
goto v_reusejp_3790_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v_a_3789_);
v___x_3791_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3790_;
}
v_reusejp_3790_:
{
v_val_3779_ = v___x_3791_;
goto v___jp_3778_;
}
}
v___jp_3778_:
{
lean_object* v___x_3781_; 
if (v_isShared_3734_ == 0)
{
lean_ctor_set_tag(v___x_3733_, 0);
lean_ctor_set(v___x_3733_, 0, v_val_3779_);
v___x_3781_ = v___x_3733_;
goto v_reusejp_3780_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v_val_3779_);
v___x_3781_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3780_;
}
v_reusejp_3780_:
{
lean_object* v___x_3782_; 
v___x_3782_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3777_, v___x_3771_, v___x_3781_, v___f_3776_);
return v___x_3782_;
}
}
}
}
}
}
}
case 4:
{
lean_object* v_onFailure_3795_; lean_object* v___f_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; uint8_t v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; 
lean_dec_ref(v_config_3433_);
lean_dec_ref(v_inst_3431_);
v_onFailure_3795_ = lean_ctor_get(v_inst_3430_, 2);
lean_inc_ref(v_onFailure_3795_);
lean_dec_ref(v_inst_3430_);
v___f_3796_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___lam__19___boxed), 3, 1);
lean_closure_set(v___f_3796_, 0, v_state_3435_);
v___x_3797_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___closed__2);
v___x_3798_ = lean_unsigned_to_nat(0u);
v___x_3799_ = 0;
v___x_3800_ = lean_apply_3(v_onFailure_3795_, v_handler_3432_, v___x_3797_, lean_box(0));
v___x_3801_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3798_, v___x_3799_, v___x_3800_, v___f_3796_);
return v___x_3801_;
}
case 6:
{
lean_object* v_machine_3802_; lean_object* v_requestStream_3803_; lean_object* v_keepAliveTimeout_3804_; lean_object* v_currentTimeout_3805_; lean_object* v_headerTimeout_3806_; lean_object* v_response_3807_; lean_object* v_respStream_3808_; uint8_t v_requiresData_3809_; lean_object* v_expectData_3810_; lean_object* v_pendingHead_3811_; lean_object* v_dateSecond_3812_; lean_object* v___x_3814_; uint8_t v_isShared_3815_; uint8_t v_isSharedCheck_3826_; 
lean_dec_ref(v_config_3433_);
lean_dec(v_handler_3432_);
lean_dec_ref(v_inst_3431_);
lean_dec_ref(v_inst_3430_);
v_machine_3802_ = lean_ctor_get(v_state_3435_, 0);
v_requestStream_3803_ = lean_ctor_get(v_state_3435_, 1);
v_keepAliveTimeout_3804_ = lean_ctor_get(v_state_3435_, 2);
v_currentTimeout_3805_ = lean_ctor_get(v_state_3435_, 3);
v_headerTimeout_3806_ = lean_ctor_get(v_state_3435_, 4);
v_response_3807_ = lean_ctor_get(v_state_3435_, 5);
v_respStream_3808_ = lean_ctor_get(v_state_3435_, 6);
v_requiresData_3809_ = lean_ctor_get_uint8(v_state_3435_, sizeof(void*)*10);
v_expectData_3810_ = lean_ctor_get(v_state_3435_, 7);
v_pendingHead_3811_ = lean_ctor_get(v_state_3435_, 8);
v_dateSecond_3812_ = lean_ctor_get(v_state_3435_, 9);
v_isSharedCheck_3826_ = !lean_is_exclusive(v_state_3435_);
if (v_isSharedCheck_3826_ == 0)
{
v___x_3814_ = v_state_3435_;
v_isShared_3815_ = v_isSharedCheck_3826_;
goto v_resetjp_3813_;
}
else
{
lean_inc(v_dateSecond_3812_);
lean_inc(v_pendingHead_3811_);
lean_inc(v_expectData_3810_);
lean_inc(v_respStream_3808_);
lean_inc(v_response_3807_);
lean_inc(v_headerTimeout_3806_);
lean_inc(v_currentTimeout_3805_);
lean_inc(v_keepAliveTimeout_3804_);
lean_inc(v_requestStream_3803_);
lean_inc(v_machine_3802_);
lean_dec(v_state_3435_);
v___x_3814_ = lean_box(0);
v_isShared_3815_ = v_isSharedCheck_3826_;
goto v_resetjp_3813_;
}
v_resetjp_3813_:
{
lean_object* v___x_3816_; lean_object* v___x_3817_; uint8_t v___x_3818_; lean_object* v___x_3820_; 
v___x_3816_ = lean_box(55);
v___x_3817_ = l_Std_Http_Protocol_H1_Machine_closeWithError(v_machine_3802_, v___x_3816_);
v___x_3818_ = 0;
if (v_isShared_3815_ == 0)
{
lean_ctor_set(v___x_3814_, 0, v___x_3817_);
v___x_3820_ = v___x_3814_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3825_; 
v_reuseFailAlloc_3825_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_3825_, 0, v___x_3817_);
lean_ctor_set(v_reuseFailAlloc_3825_, 1, v_requestStream_3803_);
lean_ctor_set(v_reuseFailAlloc_3825_, 2, v_keepAliveTimeout_3804_);
lean_ctor_set(v_reuseFailAlloc_3825_, 3, v_currentTimeout_3805_);
lean_ctor_set(v_reuseFailAlloc_3825_, 4, v_headerTimeout_3806_);
lean_ctor_set(v_reuseFailAlloc_3825_, 5, v_response_3807_);
lean_ctor_set(v_reuseFailAlloc_3825_, 6, v_respStream_3808_);
lean_ctor_set(v_reuseFailAlloc_3825_, 7, v_expectData_3810_);
lean_ctor_set(v_reuseFailAlloc_3825_, 8, v_pendingHead_3811_);
lean_ctor_set(v_reuseFailAlloc_3825_, 9, v_dateSecond_3812_);
lean_ctor_set_uint8(v_reuseFailAlloc_3825_, sizeof(void*)*10, v_requiresData_3809_);
v___x_3820_ = v_reuseFailAlloc_3825_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; 
lean_ctor_set_uint8(v___x_3820_, sizeof(void*)*10 + 1, v___x_3818_);
v___x_3821_ = lean_box(v___x_3818_);
v___x_3822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3822_, 0, v___x_3820_);
lean_ctor_set(v___x_3822_, 1, v___x_3821_);
v___x_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3823_, 0, v___x_3822_);
v___x_3824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3824_, 0, v___x_3823_);
return v___x_3824_;
}
}
}
default: 
{
lean_dec(v_event_3434_);
lean_dec_ref(v_config_3433_);
lean_dec(v_handler_3432_);
lean_dec_ref(v_inst_3431_);
lean_dec_ref(v_inst_3430_);
goto v___jp_3437_;
}
}
v___jp_3437_:
{
uint8_t v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; 
v___x_3438_ = 1;
v___x_3439_ = lean_box(v___x_3438_);
v___x_3440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3440_, 0, v_state_3435_);
lean_ctor_set(v___x_3440_, 1, v___x_3439_);
v___x_3441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3441_, 0, v___x_3440_);
v___x_3442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3442_, 0, v___x_3441_);
return v___x_3442_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg___boxed(lean_object* v_inst_3827_, lean_object* v_inst_3828_, lean_object* v_handler_3829_, lean_object* v_config_3830_, lean_object* v_event_3831_, lean_object* v_state_3832_, lean_object* v_a_3833_){
_start:
{
lean_object* v_res_3834_; 
v_res_3834_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_inst_3827_, v_inst_3828_, v_handler_3829_, v_config_3830_, v_event_3831_, v_state_3832_);
return v_res_3834_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent(lean_object* v_00_u03c3_3835_, lean_object* v_00_u03b2_3836_, lean_object* v_inst_3837_, lean_object* v_inst_3838_, lean_object* v_handler_3839_, lean_object* v_config_3840_, lean_object* v_event_3841_, lean_object* v_state_3842_){
_start:
{
lean_object* v___x_3844_; 
v___x_3844_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_inst_3837_, v_inst_3838_, v_handler_3839_, v_config_3840_, v_event_3841_, v_state_3842_);
return v___x_3844_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___boxed(lean_object* v_00_u03c3_3845_, lean_object* v_00_u03b2_3846_, lean_object* v_inst_3847_, lean_object* v_inst_3848_, lean_object* v_handler_3849_, lean_object* v_config_3850_, lean_object* v_event_3851_, lean_object* v_state_3852_, lean_object* v_a_3853_){
_start:
{
lean_object* v_res_3854_; 
v_res_3854_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent(v_00_u03c3_3845_, v_00_u03b2_3846_, v_inst_3847_, v_inst_3848_, v_handler_3849_, v_config_3850_, v_event_3851_, v_state_3852_);
return v_res_3854_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0(lean_object* v_connectionContext_3855_, uint8_t v_handlerDispatched_3856_, lean_object* v_headerTimeout_3857_, lean_object* v_currentTimeout_3858_, lean_object* v_respStream_3859_, lean_object* v_expectData_3860_, lean_object* v_keepAliveTimeout_3861_, lean_object* v_response_3862_, lean_object* v_socket_3863_, uint8_t v_requiresData_3864_, uint8_t v_sentMessage_3865_, lean_object* v_reader_3866_, uint8_t v_requestBodyInterested_3867_, lean_object* v_requestBody_3868_){
_start:
{
lean_object* v___y_3871_; lean_object* v___y_3872_; lean_object* v___y_3873_; lean_object* v___y_3874_; lean_object* v___y_3875_; lean_object* v___y_3876_; lean_object* v___y_3877_; lean_object* v___y_3882_; 
if (v_requiresData_3864_ == 0)
{
if (v_handlerDispatched_3856_ == 0)
{
goto v___jp_3885_;
}
else
{
if (lean_obj_tag(v_respStream_3859_) == 0)
{
if (v_sentMessage_3865_ == 0)
{
lean_object* v_state_3889_; 
v_state_3889_ = lean_ctor_get(v_reader_3866_, 0);
if (lean_obj_tag(v_state_3889_) == 2)
{
if (v_requestBodyInterested_3867_ == 0)
{
lean_dec(v_socket_3863_);
goto v___jp_3887_;
}
else
{
goto v___jp_3885_;
}
}
else
{
lean_dec(v_socket_3863_);
goto v___jp_3887_;
}
}
else
{
goto v___jp_3885_;
}
}
else
{
goto v___jp_3885_;
}
}
}
else
{
goto v___jp_3885_;
}
v___jp_3870_:
{
lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; 
v___x_3878_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3878_, 0, v___y_3871_);
lean_ctor_set(v___x_3878_, 1, v___y_3875_);
lean_ctor_set(v___x_3878_, 2, v___y_3877_);
lean_ctor_set(v___x_3878_, 3, v___y_3874_);
lean_ctor_set(v___x_3878_, 4, v_requestBody_3868_);
lean_ctor_set(v___x_3878_, 5, v___y_3873_);
lean_ctor_set(v___x_3878_, 6, v___y_3876_);
lean_ctor_set(v___x_3878_, 7, v___y_3872_);
lean_ctor_set(v___x_3878_, 8, v_connectionContext_3855_);
v___x_3879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3879_, 0, v___x_3878_);
v___x_3880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3879_);
return v___x_3880_;
}
v___jp_3881_:
{
if (v_handlerDispatched_3856_ == 0)
{
lean_object* v___x_3883_; 
lean_dec_ref(v_response_3862_);
v___x_3883_ = lean_box(0);
v___y_3871_ = v___y_3882_;
v___y_3872_ = v_headerTimeout_3857_;
v___y_3873_ = v_currentTimeout_3858_;
v___y_3874_ = v_respStream_3859_;
v___y_3875_ = v_expectData_3860_;
v___y_3876_ = v_keepAliveTimeout_3861_;
v___y_3877_ = v___x_3883_;
goto v___jp_3870_;
}
else
{
lean_object* v___x_3884_; 
v___x_3884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3884_, 0, v_response_3862_);
v___y_3871_ = v___y_3882_;
v___y_3872_ = v_headerTimeout_3857_;
v___y_3873_ = v_currentTimeout_3858_;
v___y_3874_ = v_respStream_3859_;
v___y_3875_ = v_expectData_3860_;
v___y_3876_ = v_keepAliveTimeout_3861_;
v___y_3877_ = v___x_3884_;
goto v___jp_3870_;
}
}
v___jp_3885_:
{
lean_object* v___x_3886_; 
v___x_3886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3886_, 0, v_socket_3863_);
v___y_3882_ = v___x_3886_;
goto v___jp_3881_;
}
v___jp_3887_:
{
lean_object* v___x_3888_; 
v___x_3888_ = lean_box(0);
v___y_3882_ = v___x_3888_;
goto v___jp_3881_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0___boxed(lean_object* v_connectionContext_3890_, lean_object* v_handlerDispatched_3891_, lean_object* v_headerTimeout_3892_, lean_object* v_currentTimeout_3893_, lean_object* v_respStream_3894_, lean_object* v_expectData_3895_, lean_object* v_keepAliveTimeout_3896_, lean_object* v_response_3897_, lean_object* v_socket_3898_, lean_object* v_requiresData_3899_, lean_object* v_sentMessage_3900_, lean_object* v_reader_3901_, lean_object* v_requestBodyInterested_3902_, lean_object* v_requestBody_3903_, lean_object* v___y_3904_){
_start:
{
uint8_t v_handlerDispatched_boxed_3905_; uint8_t v_requiresData_boxed_3906_; uint8_t v_sentMessage_boxed_3907_; uint8_t v_requestBodyInterested_boxed_3908_; lean_object* v_res_3909_; 
v_handlerDispatched_boxed_3905_ = lean_unbox(v_handlerDispatched_3891_);
v_requiresData_boxed_3906_ = lean_unbox(v_requiresData_3899_);
v_sentMessage_boxed_3907_ = lean_unbox(v_sentMessage_3900_);
v_requestBodyInterested_boxed_3908_ = lean_unbox(v_requestBodyInterested_3902_);
v_res_3909_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0(v_connectionContext_3890_, v_handlerDispatched_boxed_3905_, v_headerTimeout_3892_, v_currentTimeout_3893_, v_respStream_3894_, v_expectData_3895_, v_keepAliveTimeout_3896_, v_response_3897_, v_socket_3898_, v_requiresData_boxed_3906_, v_sentMessage_boxed_3907_, v_reader_3901_, v_requestBodyInterested_boxed_3908_, v_requestBody_3903_);
lean_dec_ref(v_reader_3901_);
return v_res_3909_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1(lean_object* v___f_3910_, lean_object* v_x_3911_){
_start:
{
if (lean_obj_tag(v_x_3911_) == 0)
{
lean_object* v_a_3913_; lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3921_; 
lean_dec_ref(v___f_3910_);
v_a_3913_ = lean_ctor_get(v_x_3911_, 0);
v_isSharedCheck_3921_ = !lean_is_exclusive(v_x_3911_);
if (v_isSharedCheck_3921_ == 0)
{
v___x_3915_ = v_x_3911_;
v_isShared_3916_ = v_isSharedCheck_3921_;
goto v_resetjp_3914_;
}
else
{
lean_inc(v_a_3913_);
lean_dec(v_x_3911_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3921_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
lean_object* v___x_3918_; 
if (v_isShared_3916_ == 0)
{
v___x_3918_ = v___x_3915_;
goto v_reusejp_3917_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v_a_3913_);
v___x_3918_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3917_;
}
v_reusejp_3917_:
{
lean_object* v___x_3919_; 
v___x_3919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3919_, 0, v___x_3918_);
return v___x_3919_;
}
}
}
else
{
lean_object* v_a_3922_; lean_object* v___x_3923_; 
v_a_3922_ = lean_ctor_get(v_x_3911_, 0);
lean_inc(v_a_3922_);
lean_dec_ref_known(v_x_3911_, 1);
v___x_3923_ = lean_apply_2(v___f_3910_, v_a_3922_, lean_box(0));
return v___x_3923_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1___boxed(lean_object* v___f_3924_, lean_object* v_x_3925_, lean_object* v___y_3926_){
_start:
{
lean_object* v_res_3927_; 
v_res_3927_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1(v___f_3924_, v_x_3925_);
return v_res_3927_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3(lean_object* v_connectionContext_3932_, uint8_t v_handlerDispatched_3933_, lean_object* v_headerTimeout_3934_, lean_object* v_currentTimeout_3935_, lean_object* v_respStream_3936_, lean_object* v_expectData_3937_, lean_object* v_keepAliveTimeout_3938_, lean_object* v_response_3939_, lean_object* v_socket_3940_, uint8_t v_requiresData_3941_, uint8_t v_sentMessage_3942_, lean_object* v_reader_3943_, uint8_t v_pullBodyStalled_3944_, uint8_t v_requestBodyOpen_3945_, lean_object* v_requestStream_3946_, uint8_t v_requestBodyInterested_3947_){
_start:
{
lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___f_3953_; lean_object* v___f_3954_; uint8_t v___y_3956_; 
v___x_3949_ = lean_box(v_handlerDispatched_3933_);
v___x_3950_ = lean_box(v_requiresData_3941_);
v___x_3951_ = lean_box(v_sentMessage_3942_);
v___x_3952_ = lean_box(v_requestBodyInterested_3947_);
lean_inc_ref(v_reader_3943_);
v___f_3953_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__0___boxed), 15, 13);
lean_closure_set(v___f_3953_, 0, v_connectionContext_3932_);
lean_closure_set(v___f_3953_, 1, v___x_3949_);
lean_closure_set(v___f_3953_, 2, v_headerTimeout_3934_);
lean_closure_set(v___f_3953_, 3, v_currentTimeout_3935_);
lean_closure_set(v___f_3953_, 4, v_respStream_3936_);
lean_closure_set(v___f_3953_, 5, v_expectData_3937_);
lean_closure_set(v___f_3953_, 6, v_keepAliveTimeout_3938_);
lean_closure_set(v___f_3953_, 7, v_response_3939_);
lean_closure_set(v___f_3953_, 8, v_socket_3940_);
lean_closure_set(v___f_3953_, 9, v___x_3950_);
lean_closure_set(v___f_3953_, 10, v___x_3951_);
lean_closure_set(v___f_3953_, 11, v_reader_3943_);
lean_closure_set(v___f_3953_, 12, v___x_3952_);
v___f_3954_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3954_, 0, v___f_3953_);
if (v_sentMessage_3942_ == 0)
{
lean_object* v_state_3960_; 
v_state_3960_ = lean_ctor_get(v_reader_3943_, 0);
lean_inc(v_state_3960_);
lean_dec_ref(v_reader_3943_);
if (lean_obj_tag(v_state_3960_) == 2)
{
lean_object* v___x_3962_; uint8_t v_isShared_3963_; uint8_t v_isSharedCheck_3971_; 
v_isSharedCheck_3971_ = !lean_is_exclusive(v_state_3960_);
if (v_isSharedCheck_3971_ == 0)
{
lean_object* v_unused_3972_; 
v_unused_3972_ = lean_ctor_get(v_state_3960_, 0);
lean_dec(v_unused_3972_);
v___x_3962_ = v_state_3960_;
v_isShared_3963_ = v_isSharedCheck_3971_;
goto v_resetjp_3961_;
}
else
{
lean_dec(v_state_3960_);
v___x_3962_ = lean_box(0);
v_isShared_3963_ = v_isSharedCheck_3971_;
goto v_resetjp_3961_;
}
v_resetjp_3961_:
{
if (v_pullBodyStalled_3944_ == 0)
{
if (v_requestBodyOpen_3945_ == 0)
{
lean_del_object(v___x_3962_);
lean_dec_ref(v_requestStream_3946_);
v___y_3956_ = v_requestBodyOpen_3945_;
goto v___jp_3955_;
}
else
{
lean_object* v___x_3965_; 
if (v_isShared_3963_ == 0)
{
lean_ctor_set_tag(v___x_3962_, 1);
lean_ctor_set(v___x_3962_, 0, v_requestStream_3946_);
v___x_3965_ = v___x_3962_;
goto v_reusejp_3964_;
}
else
{
lean_object* v_reuseFailAlloc_3970_; 
v_reuseFailAlloc_3970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3970_, 0, v_requestStream_3946_);
v___x_3965_ = v_reuseFailAlloc_3970_;
goto v_reusejp_3964_;
}
v_reusejp_3964_:
{
lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; 
v___x_3966_ = lean_unsigned_to_nat(0u);
v___x_3967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3967_, 0, v___x_3965_);
v___x_3968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3968_, 0, v___x_3967_);
v___x_3969_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3966_, v_pullBodyStalled_3944_, v___x_3968_, v___f_3954_);
return v___x_3969_;
}
}
}
else
{
lean_del_object(v___x_3962_);
lean_dec_ref(v_requestStream_3946_);
v___y_3956_ = v_sentMessage_3942_;
goto v___jp_3955_;
}
}
}
else
{
lean_dec(v_state_3960_);
lean_dec_ref(v_requestStream_3946_);
v___y_3956_ = v_sentMessage_3942_;
goto v___jp_3955_;
}
}
else
{
uint8_t v___x_3973_; 
lean_dec_ref(v_requestStream_3946_);
lean_dec_ref(v_reader_3943_);
v___x_3973_ = 0;
v___y_3956_ = v___x_3973_;
goto v___jp_3955_;
}
v___jp_3955_:
{
lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; 
v___x_3957_ = lean_unsigned_to_nat(0u);
v___x_3958_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___closed__1));
v___x_3959_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_3957_, v___y_3956_, v___x_3958_, v___f_3954_);
return v___x_3959_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_connectionContext_3974_ = _args[0];
lean_object* v_handlerDispatched_3975_ = _args[1];
lean_object* v_headerTimeout_3976_ = _args[2];
lean_object* v_currentTimeout_3977_ = _args[3];
lean_object* v_respStream_3978_ = _args[4];
lean_object* v_expectData_3979_ = _args[5];
lean_object* v_keepAliveTimeout_3980_ = _args[6];
lean_object* v_response_3981_ = _args[7];
lean_object* v_socket_3982_ = _args[8];
lean_object* v_requiresData_3983_ = _args[9];
lean_object* v_sentMessage_3984_ = _args[10];
lean_object* v_reader_3985_ = _args[11];
lean_object* v_pullBodyStalled_3986_ = _args[12];
lean_object* v_requestBodyOpen_3987_ = _args[13];
lean_object* v_requestStream_3988_ = _args[14];
lean_object* v_requestBodyInterested_3989_ = _args[15];
lean_object* v___y_3990_ = _args[16];
_start:
{
uint8_t v_handlerDispatched_boxed_3991_; uint8_t v_requiresData_boxed_3992_; uint8_t v_sentMessage_boxed_3993_; uint8_t v_pullBodyStalled_boxed_3994_; uint8_t v_requestBodyOpen_boxed_3995_; uint8_t v_requestBodyInterested_boxed_3996_; lean_object* v_res_3997_; 
v_handlerDispatched_boxed_3991_ = lean_unbox(v_handlerDispatched_3975_);
v_requiresData_boxed_3992_ = lean_unbox(v_requiresData_3983_);
v_sentMessage_boxed_3993_ = lean_unbox(v_sentMessage_3984_);
v_pullBodyStalled_boxed_3994_ = lean_unbox(v_pullBodyStalled_3986_);
v_requestBodyOpen_boxed_3995_ = lean_unbox(v_requestBodyOpen_3987_);
v_requestBodyInterested_boxed_3996_ = lean_unbox(v_requestBodyInterested_3989_);
v_res_3997_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3(v_connectionContext_3974_, v_handlerDispatched_boxed_3991_, v_headerTimeout_3976_, v_currentTimeout_3977_, v_respStream_3978_, v_expectData_3979_, v_keepAliveTimeout_3980_, v_response_3981_, v_socket_3982_, v_requiresData_boxed_3992_, v_sentMessage_boxed_3993_, v_reader_3985_, v_pullBodyStalled_boxed_3994_, v_requestBodyOpen_boxed_3995_, v_requestStream_3988_, v_requestBodyInterested_boxed_3996_);
return v_res_3997_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2(lean_object* v___f_3998_, lean_object* v_x_3999_){
_start:
{
if (lean_obj_tag(v_x_3999_) == 0)
{
lean_object* v_a_4001_; lean_object* v___x_4003_; uint8_t v_isShared_4004_; uint8_t v_isSharedCheck_4009_; 
lean_dec_ref(v___f_3998_);
v_a_4001_ = lean_ctor_get(v_x_3999_, 0);
v_isSharedCheck_4009_ = !lean_is_exclusive(v_x_3999_);
if (v_isSharedCheck_4009_ == 0)
{
v___x_4003_ = v_x_3999_;
v_isShared_4004_ = v_isSharedCheck_4009_;
goto v_resetjp_4002_;
}
else
{
lean_inc(v_a_4001_);
lean_dec(v_x_3999_);
v___x_4003_ = lean_box(0);
v_isShared_4004_ = v_isSharedCheck_4009_;
goto v_resetjp_4002_;
}
v_resetjp_4002_:
{
lean_object* v___x_4006_; 
if (v_isShared_4004_ == 0)
{
v___x_4006_ = v___x_4003_;
goto v_reusejp_4005_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v_a_4001_);
v___x_4006_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4005_;
}
v_reusejp_4005_:
{
lean_object* v___x_4007_; 
v___x_4007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4007_, 0, v___x_4006_);
return v___x_4007_;
}
}
}
else
{
lean_object* v_a_4010_; lean_object* v___x_4011_; 
v_a_4010_ = lean_ctor_get(v_x_3999_, 0);
lean_inc(v_a_4010_);
lean_dec_ref_known(v_x_3999_, 1);
v___x_4011_ = lean_apply_2(v___f_3998_, v_a_4010_, lean_box(0));
return v___x_4011_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed(lean_object* v___f_4012_, lean_object* v_x_4013_, lean_object* v___y_4014_){
_start:
{
lean_object* v_res_4015_; 
v_res_4015_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2(v___f_4012_, v_x_4013_);
return v_res_4015_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5(lean_object* v_connectionContext_4016_, uint8_t v_handlerDispatched_4017_, lean_object* v_headerTimeout_4018_, lean_object* v_currentTimeout_4019_, lean_object* v_respStream_4020_, lean_object* v_expectData_4021_, lean_object* v_keepAliveTimeout_4022_, lean_object* v_response_4023_, lean_object* v_socket_4024_, uint8_t v_requiresData_4025_, uint8_t v_sentMessage_4026_, lean_object* v_reader_4027_, uint8_t v_pullBodyStalled_4028_, lean_object* v_requestStream_4029_, uint8_t v_requestBodyOpen_4030_){
_start:
{
lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___f_4037_; lean_object* v___f_4038_; uint8_t v___y_4040_; 
v___x_4032_ = lean_box(v_handlerDispatched_4017_);
v___x_4033_ = lean_box(v_requiresData_4025_);
v___x_4034_ = lean_box(v_sentMessage_4026_);
v___x_4035_ = lean_box(v_pullBodyStalled_4028_);
v___x_4036_ = lean_box(v_requestBodyOpen_4030_);
lean_inc_ref(v_requestStream_4029_);
lean_inc_ref(v_reader_4027_);
v___f_4037_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__3___boxed), 17, 15);
lean_closure_set(v___f_4037_, 0, v_connectionContext_4016_);
lean_closure_set(v___f_4037_, 1, v___x_4032_);
lean_closure_set(v___f_4037_, 2, v_headerTimeout_4018_);
lean_closure_set(v___f_4037_, 3, v_currentTimeout_4019_);
lean_closure_set(v___f_4037_, 4, v_respStream_4020_);
lean_closure_set(v___f_4037_, 5, v_expectData_4021_);
lean_closure_set(v___f_4037_, 6, v_keepAliveTimeout_4022_);
lean_closure_set(v___f_4037_, 7, v_response_4023_);
lean_closure_set(v___f_4037_, 8, v_socket_4024_);
lean_closure_set(v___f_4037_, 9, v___x_4033_);
lean_closure_set(v___f_4037_, 10, v___x_4034_);
lean_closure_set(v___f_4037_, 11, v_reader_4027_);
lean_closure_set(v___f_4037_, 12, v___x_4035_);
lean_closure_set(v___f_4037_, 13, v___x_4036_);
lean_closure_set(v___f_4037_, 14, v_requestStream_4029_);
v___f_4038_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4038_, 0, v___f_4037_);
if (v_sentMessage_4026_ == 0)
{
lean_object* v_state_4046_; 
v_state_4046_ = lean_ctor_get(v_reader_4027_, 0);
lean_inc(v_state_4046_);
lean_dec_ref(v_reader_4027_);
if (lean_obj_tag(v_state_4046_) == 2)
{
lean_dec_ref_known(v_state_4046_, 1);
if (v_requestBodyOpen_4030_ == 0)
{
lean_dec_ref(v_requestStream_4029_);
v___y_4040_ = v_requestBodyOpen_4030_;
goto v___jp_4039_;
}
else
{
lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; 
v___x_4047_ = lean_unsigned_to_nat(0u);
v___x_4048_ = l_Std_Http_Body_Stream_hasInterest(v_requestStream_4029_);
v___x_4049_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4047_, v_sentMessage_4026_, v___x_4048_, v___f_4038_);
return v___x_4049_;
}
}
else
{
lean_dec(v_state_4046_);
lean_dec_ref(v_requestStream_4029_);
v___y_4040_ = v_sentMessage_4026_;
goto v___jp_4039_;
}
}
else
{
uint8_t v___x_4050_; 
lean_dec_ref(v_requestStream_4029_);
lean_dec_ref(v_reader_4027_);
v___x_4050_ = 0;
v___y_4040_ = v___x_4050_;
goto v___jp_4039_;
}
v___jp_4039_:
{
lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; 
v___x_4041_ = lean_unsigned_to_nat(0u);
v___x_4042_ = lean_box(v___y_4040_);
v___x_4043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4043_, 0, v___x_4042_);
v___x_4044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4044_, 0, v___x_4043_);
v___x_4045_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4041_, v___y_4040_, v___x_4044_, v___f_4038_);
return v___x_4045_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___boxed(lean_object* v_connectionContext_4051_, lean_object* v_handlerDispatched_4052_, lean_object* v_headerTimeout_4053_, lean_object* v_currentTimeout_4054_, lean_object* v_respStream_4055_, lean_object* v_expectData_4056_, lean_object* v_keepAliveTimeout_4057_, lean_object* v_response_4058_, lean_object* v_socket_4059_, lean_object* v_requiresData_4060_, lean_object* v_sentMessage_4061_, lean_object* v_reader_4062_, lean_object* v_pullBodyStalled_4063_, lean_object* v_requestStream_4064_, lean_object* v_requestBodyOpen_4065_, lean_object* v___y_4066_){
_start:
{
uint8_t v_handlerDispatched_boxed_4067_; uint8_t v_requiresData_boxed_4068_; uint8_t v_sentMessage_boxed_4069_; uint8_t v_pullBodyStalled_boxed_4070_; uint8_t v_requestBodyOpen_boxed_4071_; lean_object* v_res_4072_; 
v_handlerDispatched_boxed_4067_ = lean_unbox(v_handlerDispatched_4052_);
v_requiresData_boxed_4068_ = lean_unbox(v_requiresData_4060_);
v_sentMessage_boxed_4069_ = lean_unbox(v_sentMessage_4061_);
v_pullBodyStalled_boxed_4070_ = lean_unbox(v_pullBodyStalled_4063_);
v_requestBodyOpen_boxed_4071_ = lean_unbox(v_requestBodyOpen_4065_);
v_res_4072_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5(v_connectionContext_4051_, v_handlerDispatched_boxed_4067_, v_headerTimeout_4053_, v_currentTimeout_4054_, v_respStream_4055_, v_expectData_4056_, v_keepAliveTimeout_4057_, v_response_4058_, v_socket_4059_, v_requiresData_boxed_4068_, v_sentMessage_boxed_4069_, v_reader_4062_, v_pullBodyStalled_boxed_4070_, v_requestStream_4064_, v_requestBodyOpen_boxed_4071_);
return v_res_4072_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8(uint8_t v_sentMessage_4073_, lean_object* v___f_4074_, uint8_t v___x_4075_, lean_object* v_x_4076_){
_start:
{
uint8_t v___y_4079_; 
if (lean_obj_tag(v_x_4076_) == 0)
{
lean_object* v_a_4085_; lean_object* v___x_4087_; uint8_t v_isShared_4088_; uint8_t v_isSharedCheck_4093_; 
lean_dec_ref(v___f_4074_);
v_a_4085_ = lean_ctor_get(v_x_4076_, 0);
v_isSharedCheck_4093_ = !lean_is_exclusive(v_x_4076_);
if (v_isSharedCheck_4093_ == 0)
{
v___x_4087_ = v_x_4076_;
v_isShared_4088_ = v_isSharedCheck_4093_;
goto v_resetjp_4086_;
}
else
{
lean_inc(v_a_4085_);
lean_dec(v_x_4076_);
v___x_4087_ = lean_box(0);
v_isShared_4088_ = v_isSharedCheck_4093_;
goto v_resetjp_4086_;
}
v_resetjp_4086_:
{
lean_object* v___x_4090_; 
if (v_isShared_4088_ == 0)
{
v___x_4090_ = v___x_4087_;
goto v_reusejp_4089_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v_a_4085_);
v___x_4090_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4089_;
}
v_reusejp_4089_:
{
lean_object* v___x_4091_; 
v___x_4091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4091_, 0, v___x_4090_);
return v___x_4091_;
}
}
}
else
{
lean_object* v_a_4094_; uint8_t v___x_4095_; 
v_a_4094_ = lean_ctor_get(v_x_4076_, 0);
lean_inc(v_a_4094_);
lean_dec_ref_known(v_x_4076_, 1);
v___x_4095_ = lean_unbox(v_a_4094_);
lean_dec(v_a_4094_);
if (v___x_4095_ == 0)
{
v___y_4079_ = v___x_4075_;
goto v___jp_4078_;
}
else
{
v___y_4079_ = v_sentMessage_4073_;
goto v___jp_4078_;
}
}
v___jp_4078_:
{
lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; 
v___x_4080_ = lean_unsigned_to_nat(0u);
v___x_4081_ = lean_box(v___y_4079_);
v___x_4082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4082_, 0, v___x_4081_);
v___x_4083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4083_, 0, v___x_4082_);
v___x_4084_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4080_, v_sentMessage_4073_, v___x_4083_, v___f_4074_);
return v___x_4084_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8___boxed(lean_object* v_sentMessage_4096_, lean_object* v___f_4097_, lean_object* v___x_4098_, lean_object* v_x_4099_, lean_object* v___y_4100_){
_start:
{
uint8_t v_sentMessage_boxed_4101_; uint8_t v___x_2885__boxed_4102_; lean_object* v_res_4103_; 
v_sentMessage_boxed_4101_ = lean_unbox(v_sentMessage_4096_);
v___x_2885__boxed_4102_ = lean_unbox(v___x_4098_);
v_res_4103_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8(v_sentMessage_boxed_4101_, v___f_4097_, v___x_2885__boxed_4102_, v_x_4099_);
return v_res_4103_;
}
}
static lean_object* _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0(void){
_start:
{
lean_object* v___f_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; 
v___f_4104_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
v___x_4105_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_4106_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___x_4107_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_4107_, 0, lean_box(0));
lean_closure_set(v___x_4107_, 1, lean_box(0));
lean_closure_set(v___x_4107_, 2, v___x_4106_);
lean_closure_set(v___x_4107_, 3, lean_box(0));
lean_closure_set(v___x_4107_, 4, lean_box(0));
lean_closure_set(v___x_4107_, 5, v___x_4105_);
lean_closure_set(v___x_4107_, 6, v___f_4104_);
return v___x_4107_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(lean_object* v_socket_4108_, lean_object* v_connectionContext_4109_, lean_object* v_state_4110_){
_start:
{
lean_object* v_machine_4112_; lean_object* v_writer_4113_; lean_object* v_requestStream_4114_; lean_object* v_keepAliveTimeout_4115_; lean_object* v_currentTimeout_4116_; lean_object* v_headerTimeout_4117_; lean_object* v_response_4118_; lean_object* v_respStream_4119_; uint8_t v_requiresData_4120_; lean_object* v_expectData_4121_; uint8_t v_handlerDispatched_4122_; lean_object* v_reader_4123_; uint8_t v_pullBodyStalled_4124_; uint8_t v_sentMessage_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___f_4130_; lean_object* v___f_4131_; uint8_t v___y_4133_; 
v_machine_4112_ = lean_ctor_get(v_state_4110_, 0);
lean_inc_ref(v_machine_4112_);
v_writer_4113_ = lean_ctor_get(v_machine_4112_, 1);
lean_inc_ref(v_writer_4113_);
v_requestStream_4114_ = lean_ctor_get(v_state_4110_, 1);
lean_inc_ref_n(v_requestStream_4114_, 2);
v_keepAliveTimeout_4115_ = lean_ctor_get(v_state_4110_, 2);
lean_inc(v_keepAliveTimeout_4115_);
v_currentTimeout_4116_ = lean_ctor_get(v_state_4110_, 3);
lean_inc(v_currentTimeout_4116_);
v_headerTimeout_4117_ = lean_ctor_get(v_state_4110_, 4);
lean_inc(v_headerTimeout_4117_);
v_response_4118_ = lean_ctor_get(v_state_4110_, 5);
lean_inc_ref(v_response_4118_);
v_respStream_4119_ = lean_ctor_get(v_state_4110_, 6);
lean_inc(v_respStream_4119_);
v_requiresData_4120_ = lean_ctor_get_uint8(v_state_4110_, sizeof(void*)*10);
v_expectData_4121_ = lean_ctor_get(v_state_4110_, 7);
lean_inc(v_expectData_4121_);
v_handlerDispatched_4122_ = lean_ctor_get_uint8(v_state_4110_, sizeof(void*)*10 + 1);
lean_dec_ref(v_state_4110_);
v_reader_4123_ = lean_ctor_get(v_machine_4112_, 0);
lean_inc_ref_n(v_reader_4123_, 2);
v_pullBodyStalled_4124_ = lean_ctor_get_uint8(v_machine_4112_, sizeof(void*)*6 + 1);
lean_dec_ref(v_machine_4112_);
v_sentMessage_4125_ = lean_ctor_get_uint8(v_writer_4113_, sizeof(void*)*6);
lean_dec_ref(v_writer_4113_);
v___x_4126_ = lean_box(v_handlerDispatched_4122_);
v___x_4127_ = lean_box(v_requiresData_4120_);
v___x_4128_ = lean_box(v_sentMessage_4125_);
v___x_4129_ = lean_box(v_pullBodyStalled_4124_);
v___f_4130_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__5___boxed), 16, 14);
lean_closure_set(v___f_4130_, 0, v_connectionContext_4109_);
lean_closure_set(v___f_4130_, 1, v___x_4126_);
lean_closure_set(v___f_4130_, 2, v_headerTimeout_4117_);
lean_closure_set(v___f_4130_, 3, v_currentTimeout_4116_);
lean_closure_set(v___f_4130_, 4, v_respStream_4119_);
lean_closure_set(v___f_4130_, 5, v_expectData_4121_);
lean_closure_set(v___f_4130_, 6, v_keepAliveTimeout_4115_);
lean_closure_set(v___f_4130_, 7, v_response_4118_);
lean_closure_set(v___f_4130_, 8, v_socket_4108_);
lean_closure_set(v___f_4130_, 9, v___x_4127_);
lean_closure_set(v___f_4130_, 10, v___x_4128_);
lean_closure_set(v___f_4130_, 11, v_reader_4123_);
lean_closure_set(v___f_4130_, 12, v___x_4129_);
lean_closure_set(v___f_4130_, 13, v_requestStream_4114_);
v___f_4131_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4131_, 0, v___f_4130_);
if (v_sentMessage_4125_ == 0)
{
lean_object* v_state_4139_; 
v_state_4139_ = lean_ctor_get(v_reader_4123_, 0);
lean_inc(v_state_4139_);
lean_dec_ref(v_reader_4123_);
if (lean_obj_tag(v_state_4139_) == 2)
{
uint8_t v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___f_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___f_4146_; lean_object* v___f_4147_; lean_object* v___x_4148_; lean_object* v___x_2535__overap_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; 
lean_dec_ref_known(v_state_4139_, 1);
v___x_4140_ = 1;
v___x_4141_ = lean_box(v_sentMessage_4125_);
v___x_4142_ = lean_box(v___x_4140_);
v___f_4143_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___lam__8___boxed), 5, 3);
lean_closure_set(v___f_4143_, 0, v___x_4141_);
lean_closure_set(v___f_4143_, 1, v___f_4131_);
lean_closure_set(v___f_4143_, 2, v___x_4142_);
v___x_4144_ = lean_unsigned_to_nat(0u);
v___x_4145_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_4146_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_4147_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_4148_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___closed__0);
v___x_2535__overap_4149_ = l_Std_Mutex_atomically___redArg(v___x_4145_, v___f_4146_, v___f_4147_, v_requestStream_4114_, v___x_4148_);
v___x_4150_ = lean_apply_1(v___x_2535__overap_4149_, lean_box(0));
v___x_4151_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4144_, v_sentMessage_4125_, v___x_4150_, v___f_4143_);
return v___x_4151_;
}
else
{
lean_dec(v_state_4139_);
lean_dec_ref(v_requestStream_4114_);
v___y_4133_ = v_sentMessage_4125_;
goto v___jp_4132_;
}
}
else
{
uint8_t v___x_4152_; 
lean_dec_ref(v_reader_4123_);
lean_dec_ref(v_requestStream_4114_);
v___x_4152_ = 0;
v___y_4133_ = v___x_4152_;
goto v___jp_4132_;
}
v___jp_4132_:
{
lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; 
v___x_4134_ = lean_unsigned_to_nat(0u);
v___x_4135_ = lean_box(v___y_4133_);
v___x_4136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4136_, 0, v___x_4135_);
v___x_4137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4137_, 0, v___x_4136_);
v___x_4138_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4134_, v___y_4133_, v___x_4137_, v___f_4131_);
return v___x_4138_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg___boxed(lean_object* v_socket_4153_, lean_object* v_connectionContext_4154_, lean_object* v_state_4155_, lean_object* v_a_4156_){
_start:
{
lean_object* v_res_4157_; 
v_res_4157_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_4153_, v_connectionContext_4154_, v_state_4155_);
return v_res_4157_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources(lean_object* v_00_u03b1_4158_, lean_object* v_00_u03b2_4159_, lean_object* v_inst_4160_, lean_object* v_socket_4161_, lean_object* v_connectionContext_4162_, lean_object* v_state_4163_){
_start:
{
lean_object* v___x_4165_; 
v___x_4165_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_4161_, v_connectionContext_4162_, v_state_4163_);
return v___x_4165_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___boxed(lean_object* v_00_u03b1_4166_, lean_object* v_00_u03b2_4167_, lean_object* v_inst_4168_, lean_object* v_socket_4169_, lean_object* v_connectionContext_4170_, lean_object* v_state_4171_, lean_object* v_a_4172_){
_start:
{
lean_object* v_res_4173_; 
v_res_4173_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources(v_00_u03b1_4166_, v_00_u03b2_4167_, v_inst_4168_, v_socket_4169_, v_connectionContext_4170_, v_state_4171_);
lean_dec_ref(v_inst_4168_);
return v_res_4173_;
}
}
LEAN_EXPORT uint8_t l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_needsWrittenOutput(lean_object* v_x_4174_){
_start:
{
switch(lean_obj_tag(v_x_4174_))
{
case 0:
{
lean_object* v_head_4175_; uint8_t v_method_4176_; uint8_t v___x_4177_; 
v_head_4175_ = lean_ctor_get(v_x_4174_, 0);
v_method_4176_ = lean_ctor_get_uint8(v_head_4175_, sizeof(void*)*2);
v___x_4177_ = l_Std_Http_Method_isSafe(v_method_4176_);
if (v___x_4177_ == 0)
{
uint8_t v___x_4178_; 
v___x_4178_ = 1;
return v___x_4178_;
}
else
{
uint8_t v___x_4179_; 
v___x_4179_ = 0;
return v___x_4179_;
}
}
case 7:
{
uint8_t v___x_4180_; 
v___x_4180_ = 1;
return v___x_4180_;
}
default: 
{
uint8_t v___x_4181_; 
v___x_4181_ = 0;
return v___x_4181_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_needsWrittenOutput___boxed(lean_object* v_x_4182_){
_start:
{
uint8_t v_res_4183_; lean_object* v_r_4184_; 
v_res_4183_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_needsWrittenOutput(v_x_4182_);
lean_dec(v_x_4182_);
v_r_4184_ = lean_box(v_res_4183_);
return v_r_4184_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg___lam__0(lean_object* v_inst_4185_, lean_object* v_handler_4186_, lean_object* v_x_4187_){
_start:
{
if (lean_obj_tag(v_x_4187_) == 0)
{
lean_object* v_a_4189_; lean_object* v___x_4191_; uint8_t v_isShared_4192_; uint8_t v_isSharedCheck_4197_; 
lean_dec(v_handler_4186_);
lean_dec_ref(v_inst_4185_);
v_a_4189_ = lean_ctor_get(v_x_4187_, 0);
v_isSharedCheck_4197_ = !lean_is_exclusive(v_x_4187_);
if (v_isSharedCheck_4197_ == 0)
{
v___x_4191_ = v_x_4187_;
v_isShared_4192_ = v_isSharedCheck_4197_;
goto v_resetjp_4190_;
}
else
{
lean_inc(v_a_4189_);
lean_dec(v_x_4187_);
v___x_4191_ = lean_box(0);
v_isShared_4192_ = v_isSharedCheck_4197_;
goto v_resetjp_4190_;
}
v_resetjp_4190_:
{
lean_object* v___x_4194_; 
if (v_isShared_4192_ == 0)
{
v___x_4194_ = v___x_4191_;
goto v_reusejp_4193_;
}
else
{
lean_object* v_reuseFailAlloc_4196_; 
v_reuseFailAlloc_4196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4196_, 0, v_a_4189_);
v___x_4194_ = v_reuseFailAlloc_4196_;
goto v_reusejp_4193_;
}
v_reusejp_4193_:
{
lean_object* v___x_4195_; 
v___x_4195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4195_, 0, v___x_4194_);
return v___x_4195_;
}
}
}
else
{
lean_object* v_a_4198_; 
v_a_4198_ = lean_ctor_get(v_x_4187_, 0);
lean_inc(v_a_4198_);
lean_dec_ref_known(v_x_4187_, 1);
if (lean_obj_tag(v_a_4198_) == 1)
{
lean_object* v_val_4199_; lean_object* v_onFailure_4200_; lean_object* v___x_4201_; 
v_val_4199_ = lean_ctor_get(v_a_4198_, 0);
lean_inc(v_val_4199_);
lean_dec_ref_known(v_a_4198_, 1);
v_onFailure_4200_ = lean_ctor_get(v_inst_4185_, 2);
lean_inc_ref(v_onFailure_4200_);
lean_dec_ref(v_inst_4185_);
v___x_4201_ = lean_apply_3(v_onFailure_4200_, v_handler_4186_, v_val_4199_, lean_box(0));
return v___x_4201_;
}
else
{
lean_object* v___x_4202_; 
lean_dec(v_a_4198_);
lean_dec(v_handler_4186_);
lean_dec_ref(v_inst_4185_);
v___x_4202_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__1___closed__1));
return v___x_4202_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg___lam__0___boxed(lean_object* v_inst_4203_, lean_object* v_handler_4204_, lean_object* v_x_4205_, lean_object* v___y_4206_){
_start:
{
lean_object* v_res_4207_; 
v_res_4207_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg___lam__0(v_inst_4203_, v_handler_4204_, v_x_4205_);
return v_res_4207_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg(lean_object* v_inst_4208_, lean_object* v_handler_4209_, lean_object* v_outbox_4210_){
_start:
{
lean_object* v___f_4212_; lean_object* v___x_4213_; uint8_t v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; 
v___f_4212_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4212_, 0, v_inst_4208_);
lean_closure_set(v___f_4212_, 1, v_handler_4209_);
v___x_4213_ = lean_unsigned_to_nat(0u);
v___x_4214_ = 0;
v___x_4215_ = l_Std_Http_Internal_Outbox_takeError_x3f___redArg(v_outbox_4210_);
v___x_4216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4216_, 0, v___x_4215_);
v___x_4217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4217_, 0, v___x_4216_);
v___x_4218_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4213_, v___x_4214_, v___x_4217_, v___f_4212_);
return v___x_4218_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg___boxed(lean_object* v_inst_4219_, lean_object* v_handler_4220_, lean_object* v_outbox_4221_, lean_object* v_a_4222_){
_start:
{
lean_object* v_res_4223_; 
v_res_4223_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg(v_inst_4219_, v_handler_4220_, v_outbox_4221_);
lean_dec_ref(v_outbox_4221_);
return v_res_4223_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure(lean_object* v_00_u03c3_4224_, lean_object* v_00_u03b1_4225_, lean_object* v_inst_4226_, lean_object* v_handler_4227_, lean_object* v_outbox_4228_){
_start:
{
lean_object* v___x_4230_; 
v___x_4230_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg(v_inst_4226_, v_handler_4227_, v_outbox_4228_);
return v___x_4230_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___boxed(lean_object* v_00_u03c3_4231_, lean_object* v_00_u03b1_4232_, lean_object* v_inst_4233_, lean_object* v_handler_4234_, lean_object* v_outbox_4235_, lean_object* v_a_4236_){
_start:
{
lean_object* v_res_4237_; 
v_res_4237_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure(v_00_u03c3_4231_, v_00_u03b1_4232_, v_inst_4233_, v_handler_4234_, v_outbox_4235_);
lean_dec_ref(v_outbox_4235_);
return v_res_4237_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0(lean_object* v_x_4238_){
_start:
{
if (lean_obj_tag(v_x_4238_) == 0)
{
lean_object* v_a_4240_; lean_object* v___x_4242_; uint8_t v_isShared_4243_; uint8_t v_isSharedCheck_4248_; 
v_a_4240_ = lean_ctor_get(v_x_4238_, 0);
v_isSharedCheck_4248_ = !lean_is_exclusive(v_x_4238_);
if (v_isSharedCheck_4248_ == 0)
{
v___x_4242_ = v_x_4238_;
v_isShared_4243_ = v_isSharedCheck_4248_;
goto v_resetjp_4241_;
}
else
{
lean_inc(v_a_4240_);
lean_dec(v_x_4238_);
v___x_4242_ = lean_box(0);
v_isShared_4243_ = v_isSharedCheck_4248_;
goto v_resetjp_4241_;
}
v_resetjp_4241_:
{
lean_object* v___x_4245_; 
if (v_isShared_4243_ == 0)
{
v___x_4245_ = v___x_4242_;
goto v_reusejp_4244_;
}
else
{
lean_object* v_reuseFailAlloc_4247_; 
v_reuseFailAlloc_4247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4247_, 0, v_a_4240_);
v___x_4245_ = v_reuseFailAlloc_4247_;
goto v_reusejp_4244_;
}
v_reusejp_4244_:
{
lean_object* v___x_4246_; 
v___x_4246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4246_, 0, v___x_4245_);
return v___x_4246_;
}
}
}
else
{
lean_object* v_a_4249_; lean_object* v___x_4251_; uint8_t v_isShared_4252_; uint8_t v_isSharedCheck_4267_; 
v_a_4249_ = lean_ctor_get(v_x_4238_, 0);
v_isSharedCheck_4267_ = !lean_is_exclusive(v_x_4238_);
if (v_isSharedCheck_4267_ == 0)
{
v___x_4251_ = v_x_4238_;
v_isShared_4252_ = v_isSharedCheck_4267_;
goto v_resetjp_4250_;
}
else
{
lean_inc(v_a_4249_);
lean_dec(v_x_4238_);
v___x_4251_ = lean_box(0);
v_isShared_4252_ = v_isSharedCheck_4267_;
goto v_resetjp_4250_;
}
v_resetjp_4250_:
{
lean_object* v_snd_4253_; uint8_t v___x_4254_; 
v_snd_4253_ = lean_ctor_get(v_a_4249_, 1);
v___x_4254_ = lean_unbox(v_snd_4253_);
if (v___x_4254_ == 0)
{
lean_object* v_fst_4255_; lean_object* v___x_4256_; lean_object* v___x_4258_; 
v_fst_4255_ = lean_ctor_get(v_a_4249_, 0);
lean_inc(v_fst_4255_);
lean_dec(v_a_4249_);
v___x_4256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4256_, 0, v_fst_4255_);
if (v_isShared_4252_ == 0)
{
lean_ctor_set(v___x_4251_, 0, v___x_4256_);
v___x_4258_ = v___x_4251_;
goto v_reusejp_4257_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v___x_4256_);
v___x_4258_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4257_;
}
v_reusejp_4257_:
{
lean_object* v___x_4259_; 
v___x_4259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4259_, 0, v___x_4258_);
return v___x_4259_;
}
}
else
{
lean_object* v_fst_4261_; lean_object* v___x_4262_; lean_object* v___x_4264_; 
v_fst_4261_ = lean_ctor_get(v_a_4249_, 0);
lean_inc(v_fst_4261_);
lean_dec(v_a_4249_);
v___x_4262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4262_, 0, v_fst_4261_);
if (v_isShared_4252_ == 0)
{
lean_ctor_set(v___x_4251_, 0, v___x_4262_);
v___x_4264_ = v___x_4251_;
goto v_reusejp_4263_;
}
else
{
lean_object* v_reuseFailAlloc_4266_; 
v_reuseFailAlloc_4266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4266_, 0, v___x_4262_);
v___x_4264_ = v_reuseFailAlloc_4266_;
goto v_reusejp_4263_;
}
v_reusejp_4263_:
{
lean_object* v___x_4265_; 
v___x_4265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4265_, 0, v___x_4264_);
return v___x_4265_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0___boxed(lean_object* v_x_4268_, lean_object* v___y_4269_){
_start:
{
lean_object* v_res_4270_; 
v_res_4270_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__0(v_x_4268_);
return v_res_4270_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2(lean_object* v_inst_4271_, lean_object* v_socket_4272_, lean_object* v_x_4273_){
_start:
{
lean_object* v_val_4276_; 
if (lean_obj_tag(v_x_4273_) == 0)
{
lean_object* v___x_4278_; 
lean_dec(v_socket_4272_);
lean_dec_ref(v_inst_4271_);
v___x_4278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4278_, 0, v_x_4273_);
return v___x_4278_;
}
else
{
lean_object* v___x_4280_; uint8_t v_isShared_4281_; uint8_t v_isSharedCheck_4292_; 
v_isSharedCheck_4292_ = !lean_is_exclusive(v_x_4273_);
if (v_isSharedCheck_4292_ == 0)
{
lean_object* v_unused_4293_; 
v_unused_4293_ = lean_ctor_get(v_x_4273_, 0);
lean_dec(v_unused_4293_);
v___x_4280_ = v_x_4273_;
v_isShared_4281_ = v_isSharedCheck_4292_;
goto v_resetjp_4279_;
}
else
{
lean_dec(v_x_4273_);
v___x_4280_ = lean_box(0);
v_isShared_4281_ = v_isSharedCheck_4292_;
goto v_resetjp_4279_;
}
v_resetjp_4279_:
{
lean_object* v_close_4282_; lean_object* v___x_4283_; 
v_close_4282_ = lean_ctor_get(v_inst_4271_, 3);
lean_inc_ref(v_close_4282_);
lean_dec_ref(v_inst_4271_);
v___x_4283_ = lean_apply_2(v_close_4282_, v_socket_4272_, lean_box(0));
if (lean_obj_tag(v___x_4283_) == 0)
{
lean_object* v_a_4284_; lean_object* v___x_4286_; 
v_a_4284_ = lean_ctor_get(v___x_4283_, 0);
lean_inc(v_a_4284_);
lean_dec_ref_known(v___x_4283_, 1);
if (v_isShared_4281_ == 0)
{
lean_ctor_set(v___x_4280_, 0, v_a_4284_);
v___x_4286_ = v___x_4280_;
goto v_reusejp_4285_;
}
else
{
lean_object* v_reuseFailAlloc_4287_; 
v_reuseFailAlloc_4287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4287_, 0, v_a_4284_);
v___x_4286_ = v_reuseFailAlloc_4287_;
goto v_reusejp_4285_;
}
v_reusejp_4285_:
{
v_val_4276_ = v___x_4286_;
goto v___jp_4275_;
}
}
else
{
lean_object* v_a_4288_; lean_object* v___x_4290_; 
v_a_4288_ = lean_ctor_get(v___x_4283_, 0);
lean_inc(v_a_4288_);
lean_dec_ref_known(v___x_4283_, 1);
if (v_isShared_4281_ == 0)
{
lean_ctor_set_tag(v___x_4280_, 0);
lean_ctor_set(v___x_4280_, 0, v_a_4288_);
v___x_4290_ = v___x_4280_;
goto v_reusejp_4289_;
}
else
{
lean_object* v_reuseFailAlloc_4291_; 
v_reuseFailAlloc_4291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4291_, 0, v_a_4288_);
v___x_4290_ = v_reuseFailAlloc_4291_;
goto v_reusejp_4289_;
}
v_reusejp_4289_:
{
v_val_4276_ = v___x_4290_;
goto v___jp_4275_;
}
}
}
}
v___jp_4275_:
{
lean_object* v___x_4277_; 
v___x_4277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4277_, 0, v_val_4276_);
return v___x_4277_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2___boxed(lean_object* v_inst_4294_, lean_object* v_socket_4295_, lean_object* v_x_4296_, lean_object* v___y_4297_){
_start:
{
lean_object* v_res_4298_; 
v_res_4298_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2(v_inst_4294_, v_socket_4295_, v_x_4296_);
return v_res_4298_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(lean_object* v_h_4299_, lean_object* v_responseBodyInstance_4300_, lean_object* v_handler_4301_, lean_object* v_config_4302_, lean_object* v_a_4303_, uint8_t v___x_4304_, lean_object* v___f_4305_, lean_object* v_____r_4306_, lean_object* v_state_4307_){
_start:
{
lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; 
v___x_4309_ = lean_unsigned_to_nat(0u);
v___x_4310_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handleRecvEvent___redArg(v_h_4299_, v_responseBodyInstance_4300_, v_handler_4301_, v_config_4302_, v_a_4303_, v_state_4307_);
v___x_4311_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4309_, v___x_4304_, v___x_4310_, v___f_4305_);
return v___x_4311_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3___boxed(lean_object* v_h_4312_, lean_object* v_responseBodyInstance_4313_, lean_object* v_handler_4314_, lean_object* v_config_4315_, lean_object* v_a_4316_, lean_object* v___x_4317_, lean_object* v___f_4318_, lean_object* v_____r_4319_, lean_object* v_state_4320_, lean_object* v___y_4321_){
_start:
{
uint8_t v___x_7483__boxed_4322_; lean_object* v_res_4323_; 
v___x_7483__boxed_4322_ = lean_unbox(v___x_4317_);
v_res_4323_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(v_h_4312_, v_responseBodyInstance_4313_, v_handler_4314_, v_config_4315_, v_a_4316_, v___x_7483__boxed_4322_, v___f_4318_, v_____r_4319_, v_state_4320_);
return v_res_4323_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1(lean_object* v_a_4324_, uint8_t v___x_4325_, lean_object* v___f_4326_, lean_object* v_keepAliveTimeout_4327_, lean_object* v___f_4328_, lean_object* v___x_4329_, lean_object* v_machine_4330_, lean_object* v_requestStream_4331_, lean_object* v_keepAliveTimeout_4332_, lean_object* v_headerTimeout_4333_, lean_object* v_response_4334_, lean_object* v_respStream_4335_, lean_object* v_expectData_4336_, uint8_t v_handlerDispatched_4337_, lean_object* v_pendingHead_4338_, lean_object* v_dateSecond_4339_, lean_object* v_x_4340_){
_start:
{
if (lean_obj_tag(v_x_4340_) == 0)
{
lean_object* v_a_4342_; lean_object* v___x_4344_; uint8_t v_isShared_4345_; uint8_t v_isSharedCheck_4350_; 
lean_dec(v_dateSecond_4339_);
lean_dec(v_pendingHead_4338_);
lean_dec(v_expectData_4336_);
lean_dec(v_respStream_4335_);
lean_dec_ref(v_response_4334_);
lean_dec(v_headerTimeout_4333_);
lean_dec(v_keepAliveTimeout_4332_);
lean_dec_ref(v_requestStream_4331_);
lean_dec_ref(v_machine_4330_);
lean_dec_ref(v___x_4329_);
lean_dec_ref(v___f_4328_);
lean_dec_ref(v___f_4326_);
v_a_4342_ = lean_ctor_get(v_x_4340_, 0);
v_isSharedCheck_4350_ = !lean_is_exclusive(v_x_4340_);
if (v_isSharedCheck_4350_ == 0)
{
v___x_4344_ = v_x_4340_;
v_isShared_4345_ = v_isSharedCheck_4350_;
goto v_resetjp_4343_;
}
else
{
lean_inc(v_a_4342_);
lean_dec(v_x_4340_);
v___x_4344_ = lean_box(0);
v_isShared_4345_ = v_isSharedCheck_4350_;
goto v_resetjp_4343_;
}
v_resetjp_4343_:
{
lean_object* v___x_4347_; 
if (v_isShared_4345_ == 0)
{
v___x_4347_ = v___x_4344_;
goto v_reusejp_4346_;
}
else
{
lean_object* v_reuseFailAlloc_4349_; 
v_reuseFailAlloc_4349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4349_, 0, v_a_4342_);
v___x_4347_ = v_reuseFailAlloc_4349_;
goto v_reusejp_4346_;
}
v_reusejp_4346_:
{
lean_object* v___x_4348_; 
v___x_4348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4348_, 0, v___x_4347_);
return v___x_4348_;
}
}
}
else
{
lean_object* v_a_4351_; lean_object* v___x_4353_; uint8_t v_isShared_4354_; uint8_t v_isSharedCheck_4377_; 
v_a_4351_ = lean_ctor_get(v_x_4340_, 0);
v_isSharedCheck_4377_ = !lean_is_exclusive(v_x_4340_);
if (v_isSharedCheck_4377_ == 0)
{
v___x_4353_ = v_x_4340_;
v_isShared_4354_ = v_isSharedCheck_4377_;
goto v_resetjp_4352_;
}
else
{
lean_inc(v_a_4351_);
lean_dec(v_x_4340_);
v___x_4353_ = lean_box(0);
v_isShared_4354_ = v_isSharedCheck_4377_;
goto v_resetjp_4352_;
}
v_resetjp_4352_:
{
if (lean_obj_tag(v_a_4351_) == 0)
{
lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; 
lean_del_object(v___x_4353_);
lean_dec(v_dateSecond_4339_);
lean_dec(v_pendingHead_4338_);
lean_dec(v_expectData_4336_);
lean_dec(v_respStream_4335_);
lean_dec_ref(v_response_4334_);
lean_dec(v_headerTimeout_4333_);
lean_dec(v_keepAliveTimeout_4332_);
lean_dec_ref(v_requestStream_4331_);
lean_dec_ref(v_machine_4330_);
lean_dec_ref(v___x_4329_);
lean_dec_ref(v___f_4328_);
v___x_4355_ = lean_unsigned_to_nat(0u);
v___x_4356_ = l_Std_Http_Internal_Outbox_awaitIdle___redArg(v_a_4324_);
v___x_4357_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4355_, v___x_4325_, v___x_4356_, v___f_4326_);
return v___x_4357_;
}
else
{
lean_object* v_val_4358_; lean_object* v___x_4360_; uint8_t v_isShared_4361_; uint8_t v_isSharedCheck_4376_; 
lean_dec_ref(v___f_4326_);
v_val_4358_ = lean_ctor_get(v_a_4351_, 0);
v_isSharedCheck_4376_ = !lean_is_exclusive(v_a_4351_);
if (v_isSharedCheck_4376_ == 0)
{
v___x_4360_ = v_a_4351_;
v_isShared_4361_ = v_isSharedCheck_4376_;
goto v_resetjp_4359_;
}
else
{
lean_inc(v_val_4358_);
lean_dec(v_a_4351_);
v___x_4360_ = lean_box(0);
v_isShared_4361_ = v_isSharedCheck_4376_;
goto v_resetjp_4359_;
}
v_resetjp_4359_:
{
lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; uint8_t v___x_4365_; 
v___x_4362_ = lean_nat_to_int(v_val_4358_);
v___x_4363_ = lean_int_sub(v_keepAliveTimeout_4327_, v___x_4362_);
lean_dec(v___x_4362_);
v___x_4364_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg___closed__0);
v___x_4365_ = lean_int_dec_lt(v___x_4364_, v___x_4363_);
if (v___x_4365_ == 0)
{
lean_object* v___x_4366_; lean_object* v___x_4367_; 
lean_dec(v___x_4363_);
lean_del_object(v___x_4360_);
lean_del_object(v___x_4353_);
lean_dec(v_dateSecond_4339_);
lean_dec(v_pendingHead_4338_);
lean_dec(v_expectData_4336_);
lean_dec(v_respStream_4335_);
lean_dec_ref(v_response_4334_);
lean_dec(v_headerTimeout_4333_);
lean_dec(v_keepAliveTimeout_4332_);
lean_dec_ref(v_requestStream_4331_);
lean_dec_ref(v_machine_4330_);
v___x_4366_ = lean_box(0);
v___x_4367_ = lean_apply_3(v___f_4328_, v___x_4366_, v___x_4329_, lean_box(0));
return v___x_4367_;
}
else
{
lean_object* v___x_4368_; lean_object* v___x_4370_; 
lean_dec_ref(v___x_4329_);
lean_dec_ref(v___f_4328_);
v___x_4368_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_4368_, 0, v_machine_4330_);
lean_ctor_set(v___x_4368_, 1, v_requestStream_4331_);
lean_ctor_set(v___x_4368_, 2, v_keepAliveTimeout_4332_);
lean_ctor_set(v___x_4368_, 3, v___x_4363_);
lean_ctor_set(v___x_4368_, 4, v_headerTimeout_4333_);
lean_ctor_set(v___x_4368_, 5, v_response_4334_);
lean_ctor_set(v___x_4368_, 6, v_respStream_4335_);
lean_ctor_set(v___x_4368_, 7, v_expectData_4336_);
lean_ctor_set(v___x_4368_, 8, v_pendingHead_4338_);
lean_ctor_set(v___x_4368_, 9, v_dateSecond_4339_);
lean_ctor_set_uint8(v___x_4368_, sizeof(void*)*10, v___x_4325_);
lean_ctor_set_uint8(v___x_4368_, sizeof(void*)*10 + 1, v_handlerDispatched_4337_);
if (v_isShared_4361_ == 0)
{
lean_ctor_set(v___x_4360_, 0, v___x_4368_);
v___x_4370_ = v___x_4360_;
goto v_reusejp_4369_;
}
else
{
lean_object* v_reuseFailAlloc_4375_; 
v_reuseFailAlloc_4375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4375_, 0, v___x_4368_);
v___x_4370_ = v_reuseFailAlloc_4375_;
goto v_reusejp_4369_;
}
v_reusejp_4369_:
{
lean_object* v___x_4372_; 
if (v_isShared_4354_ == 0)
{
lean_ctor_set(v___x_4353_, 0, v___x_4370_);
v___x_4372_ = v___x_4353_;
goto v_reusejp_4371_;
}
else
{
lean_object* v_reuseFailAlloc_4374_; 
v_reuseFailAlloc_4374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4374_, 0, v___x_4370_);
v___x_4372_ = v_reuseFailAlloc_4374_;
goto v_reusejp_4371_;
}
v_reusejp_4371_:
{
lean_object* v___x_4373_; 
v___x_4373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4373_, 0, v___x_4372_);
return v___x_4373_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1___boxed(lean_object** _args){
lean_object* v_a_4378_ = _args[0];
lean_object* v___x_4379_ = _args[1];
lean_object* v___f_4380_ = _args[2];
lean_object* v_keepAliveTimeout_4381_ = _args[3];
lean_object* v___f_4382_ = _args[4];
lean_object* v___x_4383_ = _args[5];
lean_object* v_machine_4384_ = _args[6];
lean_object* v_requestStream_4385_ = _args[7];
lean_object* v_keepAliveTimeout_4386_ = _args[8];
lean_object* v_headerTimeout_4387_ = _args[9];
lean_object* v_response_4388_ = _args[10];
lean_object* v_respStream_4389_ = _args[11];
lean_object* v_expectData_4390_ = _args[12];
lean_object* v_handlerDispatched_4391_ = _args[13];
lean_object* v_pendingHead_4392_ = _args[14];
lean_object* v_dateSecond_4393_ = _args[15];
lean_object* v_x_4394_ = _args[16];
lean_object* v___y_4395_ = _args[17];
_start:
{
uint8_t v___x_7506__boxed_4396_; uint8_t v_handlerDispatched_boxed_4397_; lean_object* v_res_4398_; 
v___x_7506__boxed_4396_ = lean_unbox(v___x_4379_);
v_handlerDispatched_boxed_4397_ = lean_unbox(v_handlerDispatched_4391_);
v_res_4398_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1(v_a_4378_, v___x_7506__boxed_4396_, v___f_4380_, v_keepAliveTimeout_4381_, v___f_4382_, v___x_4383_, v_machine_4384_, v_requestStream_4385_, v_keepAliveTimeout_4386_, v_headerTimeout_4387_, v_response_4388_, v_respStream_4389_, v_expectData_4390_, v_handlerDispatched_boxed_4397_, v_pendingHead_4392_, v_dateSecond_4393_, v_x_4394_);
lean_dec(v_keepAliveTimeout_4381_);
lean_dec_ref(v_a_4378_);
return v_res_4398_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4(lean_object* v_h_4399_, lean_object* v_responseBodyInstance_4400_, lean_object* v_handler_4401_, lean_object* v_config_4402_, uint8_t v___x_4403_, lean_object* v___f_4404_, lean_object* v_a_4405_, lean_object* v___f_4406_, lean_object* v_keepAliveTimeout_4407_, lean_object* v___x_4408_, lean_object* v_machine_4409_, lean_object* v_requestStream_4410_, lean_object* v_keepAliveTimeout_4411_, lean_object* v_headerTimeout_4412_, lean_object* v_response_4413_, lean_object* v_respStream_4414_, lean_object* v_expectData_4415_, uint8_t v_handlerDispatched_4416_, lean_object* v_pendingHead_4417_, lean_object* v_dateSecond_4418_, lean_object* v_x_4419_){
_start:
{
if (lean_obj_tag(v_x_4419_) == 0)
{
lean_object* v_a_4421_; lean_object* v___x_4423_; uint8_t v_isShared_4424_; uint8_t v_isSharedCheck_4429_; 
lean_dec(v_dateSecond_4418_);
lean_dec(v_pendingHead_4417_);
lean_dec(v_expectData_4415_);
lean_dec(v_respStream_4414_);
lean_dec_ref(v_response_4413_);
lean_dec(v_headerTimeout_4412_);
lean_dec(v_keepAliveTimeout_4411_);
lean_dec_ref(v_requestStream_4410_);
lean_dec_ref(v_machine_4409_);
lean_dec_ref(v___x_4408_);
lean_dec(v_keepAliveTimeout_4407_);
lean_dec_ref(v___f_4406_);
lean_dec_ref(v_a_4405_);
lean_dec_ref(v___f_4404_);
lean_dec_ref(v_config_4402_);
lean_dec(v_handler_4401_);
lean_dec_ref(v_responseBodyInstance_4400_);
lean_dec_ref(v_h_4399_);
v_a_4421_ = lean_ctor_get(v_x_4419_, 0);
v_isSharedCheck_4429_ = !lean_is_exclusive(v_x_4419_);
if (v_isSharedCheck_4429_ == 0)
{
v___x_4423_ = v_x_4419_;
v_isShared_4424_ = v_isSharedCheck_4429_;
goto v_resetjp_4422_;
}
else
{
lean_inc(v_a_4421_);
lean_dec(v_x_4419_);
v___x_4423_ = lean_box(0);
v_isShared_4424_ = v_isSharedCheck_4429_;
goto v_resetjp_4422_;
}
v_resetjp_4422_:
{
lean_object* v___x_4426_; 
if (v_isShared_4424_ == 0)
{
v___x_4426_ = v___x_4423_;
goto v_reusejp_4425_;
}
else
{
lean_object* v_reuseFailAlloc_4428_; 
v_reuseFailAlloc_4428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4428_, 0, v_a_4421_);
v___x_4426_ = v_reuseFailAlloc_4428_;
goto v_reusejp_4425_;
}
v_reusejp_4425_:
{
lean_object* v___x_4427_; 
v___x_4427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4427_, 0, v___x_4426_);
return v___x_4427_;
}
}
}
else
{
lean_object* v_a_4430_; lean_object* v___x_4432_; uint8_t v_isShared_4433_; uint8_t v_isSharedCheck_4448_; 
v_a_4430_ = lean_ctor_get(v_x_4419_, 0);
v_isSharedCheck_4448_ = !lean_is_exclusive(v_x_4419_);
if (v_isSharedCheck_4448_ == 0)
{
v___x_4432_ = v_x_4419_;
v_isShared_4433_ = v_isSharedCheck_4448_;
goto v_resetjp_4431_;
}
else
{
lean_inc(v_a_4430_);
lean_dec(v_x_4419_);
v___x_4432_ = lean_box(0);
v_isShared_4433_ = v_isSharedCheck_4448_;
goto v_resetjp_4431_;
}
v_resetjp_4431_:
{
lean_object* v___x_4434_; lean_object* v___f_4435_; 
v___x_4434_ = lean_box(v___x_4403_);
lean_inc_ref(v___f_4404_);
lean_inc(v_a_4430_);
lean_inc_ref(v_config_4402_);
lean_inc(v_handler_4401_);
lean_inc_ref(v_responseBodyInstance_4400_);
lean_inc_ref(v_h_4399_);
v___f_4435_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3___boxed), 10, 7);
lean_closure_set(v___f_4435_, 0, v_h_4399_);
lean_closure_set(v___f_4435_, 1, v_responseBodyInstance_4400_);
lean_closure_set(v___f_4435_, 2, v_handler_4401_);
lean_closure_set(v___f_4435_, 3, v_config_4402_);
lean_closure_set(v___f_4435_, 4, v_a_4430_);
lean_closure_set(v___f_4435_, 5, v___x_4434_);
lean_closure_set(v___f_4435_, 6, v___f_4404_);
if (lean_obj_tag(v_a_4430_) == 5)
{
lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___f_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4442_; 
lean_dec_ref(v___f_4404_);
lean_dec_ref(v_config_4402_);
lean_dec(v_handler_4401_);
lean_dec_ref(v_responseBodyInstance_4400_);
lean_dec_ref(v_h_4399_);
v___x_4436_ = lean_box(v___x_4403_);
v___x_4437_ = lean_box(v_handlerDispatched_4416_);
lean_inc_ref(v_a_4405_);
v___f_4438_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__1___boxed), 18, 16);
lean_closure_set(v___f_4438_, 0, v_a_4405_);
lean_closure_set(v___f_4438_, 1, v___x_4436_);
lean_closure_set(v___f_4438_, 2, v___f_4406_);
lean_closure_set(v___f_4438_, 3, v_keepAliveTimeout_4407_);
lean_closure_set(v___f_4438_, 4, v___f_4435_);
lean_closure_set(v___f_4438_, 5, v___x_4408_);
lean_closure_set(v___f_4438_, 6, v_machine_4409_);
lean_closure_set(v___f_4438_, 7, v_requestStream_4410_);
lean_closure_set(v___f_4438_, 8, v_keepAliveTimeout_4411_);
lean_closure_set(v___f_4438_, 9, v_headerTimeout_4412_);
lean_closure_set(v___f_4438_, 10, v_response_4413_);
lean_closure_set(v___f_4438_, 11, v_respStream_4414_);
lean_closure_set(v___f_4438_, 12, v_expectData_4415_);
lean_closure_set(v___f_4438_, 13, v___x_4437_);
lean_closure_set(v___f_4438_, 14, v_pendingHead_4417_);
lean_closure_set(v___f_4438_, 15, v_dateSecond_4418_);
v___x_4439_ = lean_unsigned_to_nat(0u);
v___x_4440_ = l_Std_Http_Internal_Outbox_idleFor_x3f___redArg(v_a_4405_);
lean_dec_ref(v_a_4405_);
if (v_isShared_4433_ == 0)
{
lean_ctor_set(v___x_4432_, 0, v___x_4440_);
v___x_4442_ = v___x_4432_;
goto v_reusejp_4441_;
}
else
{
lean_object* v_reuseFailAlloc_4445_; 
v_reuseFailAlloc_4445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4445_, 0, v___x_4440_);
v___x_4442_ = v_reuseFailAlloc_4445_;
goto v_reusejp_4441_;
}
v_reusejp_4441_:
{
lean_object* v___x_4443_; lean_object* v___x_4444_; 
v___x_4443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4443_, 0, v___x_4442_);
v___x_4444_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4439_, v___x_4403_, v___x_4443_, v___f_4438_);
return v___x_4444_;
}
}
else
{
lean_object* v___x_4446_; lean_object* v___x_4447_; 
lean_dec_ref(v___f_4435_);
lean_del_object(v___x_4432_);
lean_dec(v_dateSecond_4418_);
lean_dec(v_pendingHead_4417_);
lean_dec(v_expectData_4415_);
lean_dec(v_respStream_4414_);
lean_dec_ref(v_response_4413_);
lean_dec(v_headerTimeout_4412_);
lean_dec(v_keepAliveTimeout_4411_);
lean_dec_ref(v_requestStream_4410_);
lean_dec_ref(v_machine_4409_);
lean_dec(v_keepAliveTimeout_4407_);
lean_dec_ref(v___f_4406_);
lean_dec_ref(v_a_4405_);
v___x_4446_ = lean_box(0);
v___x_4447_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__3(v_h_4399_, v_responseBodyInstance_4400_, v_handler_4401_, v_config_4402_, v_a_4430_, v___x_4403_, v___f_4404_, v___x_4446_, v___x_4408_);
return v___x_4447_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_h_4449_ = _args[0];
lean_object* v_responseBodyInstance_4450_ = _args[1];
lean_object* v_handler_4451_ = _args[2];
lean_object* v_config_4452_ = _args[3];
lean_object* v___x_4453_ = _args[4];
lean_object* v___f_4454_ = _args[5];
lean_object* v_a_4455_ = _args[6];
lean_object* v___f_4456_ = _args[7];
lean_object* v_keepAliveTimeout_4457_ = _args[8];
lean_object* v___x_4458_ = _args[9];
lean_object* v_machine_4459_ = _args[10];
lean_object* v_requestStream_4460_ = _args[11];
lean_object* v_keepAliveTimeout_4461_ = _args[12];
lean_object* v_headerTimeout_4462_ = _args[13];
lean_object* v_response_4463_ = _args[14];
lean_object* v_respStream_4464_ = _args[15];
lean_object* v_expectData_4465_ = _args[16];
lean_object* v_handlerDispatched_4466_ = _args[17];
lean_object* v_pendingHead_4467_ = _args[18];
lean_object* v_dateSecond_4468_ = _args[19];
lean_object* v_x_4469_ = _args[20];
lean_object* v___y_4470_ = _args[21];
_start:
{
uint8_t v___x_7599__boxed_4471_; uint8_t v_handlerDispatched_boxed_4472_; lean_object* v_res_4473_; 
v___x_7599__boxed_4471_ = lean_unbox(v___x_4453_);
v_handlerDispatched_boxed_4472_ = lean_unbox(v_handlerDispatched_4466_);
v_res_4473_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4(v_h_4449_, v_responseBodyInstance_4450_, v_handler_4451_, v_config_4452_, v___x_7599__boxed_4471_, v___f_4454_, v_a_4455_, v___f_4456_, v_keepAliveTimeout_4457_, v___x_4458_, v_machine_4459_, v_requestStream_4460_, v_keepAliveTimeout_4461_, v_headerTimeout_4462_, v_response_4463_, v_respStream_4464_, v_expectData_4465_, v_handlerDispatched_boxed_4472_, v_pendingHead_4467_, v_dateSecond_4468_, v_x_4469_);
return v_res_4473_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5(lean_object* v_inst_4474_, lean_object* v_h_4475_, lean_object* v_responseBodyInstance_4476_, lean_object* v_config_4477_, lean_object* v_handler_4478_, uint8_t v___x_4479_, lean_object* v___f_4480_, lean_object* v_x_4481_){
_start:
{
if (lean_obj_tag(v_x_4481_) == 0)
{
lean_object* v_a_4483_; lean_object* v___x_4485_; uint8_t v_isShared_4486_; uint8_t v_isSharedCheck_4491_; 
lean_dec_ref(v___f_4480_);
lean_dec(v_handler_4478_);
lean_dec_ref(v_config_4477_);
lean_dec_ref(v_responseBodyInstance_4476_);
lean_dec_ref(v_h_4475_);
lean_dec_ref(v_inst_4474_);
v_a_4483_ = lean_ctor_get(v_x_4481_, 0);
v_isSharedCheck_4491_ = !lean_is_exclusive(v_x_4481_);
if (v_isSharedCheck_4491_ == 0)
{
v___x_4485_ = v_x_4481_;
v_isShared_4486_ = v_isSharedCheck_4491_;
goto v_resetjp_4484_;
}
else
{
lean_inc(v_a_4483_);
lean_dec(v_x_4481_);
v___x_4485_ = lean_box(0);
v_isShared_4486_ = v_isSharedCheck_4491_;
goto v_resetjp_4484_;
}
v_resetjp_4484_:
{
lean_object* v___x_4488_; 
if (v_isShared_4486_ == 0)
{
v___x_4488_ = v___x_4485_;
goto v_reusejp_4487_;
}
else
{
lean_object* v_reuseFailAlloc_4490_; 
v_reuseFailAlloc_4490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4490_, 0, v_a_4483_);
v___x_4488_ = v_reuseFailAlloc_4490_;
goto v_reusejp_4487_;
}
v_reusejp_4487_:
{
lean_object* v___x_4489_; 
v___x_4489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4489_, 0, v___x_4488_);
return v___x_4489_;
}
}
}
else
{
lean_object* v_a_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; 
v_a_4492_ = lean_ctor_get(v_x_4481_, 0);
lean_inc(v_a_4492_);
lean_dec_ref_known(v_x_4481_, 1);
v___x_4493_ = lean_unsigned_to_nat(0u);
v___x_4494_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_pollNextEvent___redArg(v_inst_4474_, v_h_4475_, v_responseBodyInstance_4476_, v_config_4477_, v_handler_4478_, v_a_4492_);
v___x_4495_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4493_, v___x_4479_, v___x_4494_, v___f_4480_);
return v___x_4495_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed(lean_object* v_inst_4496_, lean_object* v_h_4497_, lean_object* v_responseBodyInstance_4498_, lean_object* v_config_4499_, lean_object* v_handler_4500_, lean_object* v___x_4501_, lean_object* v___f_4502_, lean_object* v_x_4503_, lean_object* v___y_4504_){
_start:
{
uint8_t v___x_7677__boxed_4505_; lean_object* v_res_4506_; 
v___x_7677__boxed_4505_ = lean_unbox(v___x_4501_);
v_res_4506_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5(v_inst_4496_, v_h_4497_, v_responseBodyInstance_4498_, v_config_4499_, v_handler_4500_, v___x_7677__boxed_4505_, v___f_4502_, v_x_4503_);
return v_res_4506_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6(uint8_t v___x_4507_, lean_object* v_h_4508_, lean_object* v_responseBodyInstance_4509_, lean_object* v_handler_4510_, lean_object* v_config_4511_, lean_object* v___f_4512_, lean_object* v_a_4513_, lean_object* v_keepAliveTimeout_4514_, lean_object* v_inst_4515_, lean_object* v_socket_4516_, lean_object* v_connectionContext_4517_, lean_object* v_x_4518_){
_start:
{
if (lean_obj_tag(v_x_4518_) == 0)
{
lean_object* v_a_4520_; lean_object* v___x_4522_; uint8_t v_isShared_4523_; uint8_t v_isSharedCheck_4528_; 
lean_dec_ref(v_connectionContext_4517_);
lean_dec(v_socket_4516_);
lean_dec_ref(v_inst_4515_);
lean_dec(v_keepAliveTimeout_4514_);
lean_dec_ref(v_a_4513_);
lean_dec_ref(v___f_4512_);
lean_dec_ref(v_config_4511_);
lean_dec(v_handler_4510_);
lean_dec_ref(v_responseBodyInstance_4509_);
lean_dec_ref(v_h_4508_);
v_a_4520_ = lean_ctor_get(v_x_4518_, 0);
v_isSharedCheck_4528_ = !lean_is_exclusive(v_x_4518_);
if (v_isSharedCheck_4528_ == 0)
{
v___x_4522_ = v_x_4518_;
v_isShared_4523_ = v_isSharedCheck_4528_;
goto v_resetjp_4521_;
}
else
{
lean_inc(v_a_4520_);
lean_dec(v_x_4518_);
v___x_4522_ = lean_box(0);
v_isShared_4523_ = v_isSharedCheck_4528_;
goto v_resetjp_4521_;
}
v_resetjp_4521_:
{
lean_object* v___x_4525_; 
if (v_isShared_4523_ == 0)
{
v___x_4525_ = v___x_4522_;
goto v_reusejp_4524_;
}
else
{
lean_object* v_reuseFailAlloc_4527_; 
v_reuseFailAlloc_4527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4527_, 0, v_a_4520_);
v___x_4525_ = v_reuseFailAlloc_4527_;
goto v_reusejp_4524_;
}
v_reusejp_4524_:
{
lean_object* v___x_4526_; 
v___x_4526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4526_, 0, v___x_4525_);
return v___x_4526_;
}
}
}
else
{
lean_object* v_a_4529_; lean_object* v___x_4531_; uint8_t v_isShared_4532_; uint8_t v_isSharedCheck_4566_; 
v_a_4529_ = lean_ctor_get(v_x_4518_, 0);
v_isSharedCheck_4566_ = !lean_is_exclusive(v_x_4518_);
if (v_isSharedCheck_4566_ == 0)
{
v___x_4531_ = v_x_4518_;
v_isShared_4532_ = v_isSharedCheck_4566_;
goto v_resetjp_4530_;
}
else
{
lean_inc(v_a_4529_);
lean_dec(v_x_4518_);
v___x_4531_ = lean_box(0);
v_isShared_4532_ = v_isSharedCheck_4566_;
goto v_resetjp_4530_;
}
v_resetjp_4530_:
{
lean_object* v_machine_4539_; lean_object* v_requestStream_4540_; lean_object* v_keepAliveTimeout_4541_; lean_object* v_currentTimeout_4542_; lean_object* v_headerTimeout_4543_; lean_object* v_response_4544_; lean_object* v_respStream_4545_; uint8_t v_requiresData_4546_; lean_object* v_expectData_4547_; uint8_t v_handlerDispatched_4548_; lean_object* v_pendingHead_4549_; lean_object* v_dateSecond_4550_; 
v_machine_4539_ = lean_ctor_get(v_a_4529_, 0);
v_requestStream_4540_ = lean_ctor_get(v_a_4529_, 1);
v_keepAliveTimeout_4541_ = lean_ctor_get(v_a_4529_, 2);
v_currentTimeout_4542_ = lean_ctor_get(v_a_4529_, 3);
v_headerTimeout_4543_ = lean_ctor_get(v_a_4529_, 4);
v_response_4544_ = lean_ctor_get(v_a_4529_, 5);
v_respStream_4545_ = lean_ctor_get(v_a_4529_, 6);
v_requiresData_4546_ = lean_ctor_get_uint8(v_a_4529_, sizeof(void*)*10);
v_expectData_4547_ = lean_ctor_get(v_a_4529_, 7);
v_handlerDispatched_4548_ = lean_ctor_get_uint8(v_a_4529_, sizeof(void*)*10 + 1);
v_pendingHead_4549_ = lean_ctor_get(v_a_4529_, 8);
v_dateSecond_4550_ = lean_ctor_get(v_a_4529_, 9);
if (v_requiresData_4546_ == 0)
{
if (v_handlerDispatched_4548_ == 0)
{
if (lean_obj_tag(v_respStream_4545_) == 0)
{
lean_object* v_writer_4562_; uint8_t v_sentMessage_4563_; 
v_writer_4562_ = lean_ctor_get(v_machine_4539_, 1);
v_sentMessage_4563_ = lean_ctor_get_uint8(v_writer_4562_, sizeof(void*)*6);
if (v_sentMessage_4563_ == 0)
{
lean_object* v_reader_4564_; lean_object* v_state_4565_; 
v_reader_4564_ = lean_ctor_get(v_machine_4539_, 0);
v_state_4565_ = lean_ctor_get(v_reader_4564_, 0);
if (lean_obj_tag(v_state_4565_) == 2)
{
lean_inc(v_respStream_4545_);
lean_inc(v_dateSecond_4550_);
lean_inc(v_pendingHead_4549_);
lean_inc(v_expectData_4547_);
lean_inc_ref(v_response_4544_);
lean_inc(v_headerTimeout_4543_);
lean_inc(v_currentTimeout_4542_);
lean_inc(v_keepAliveTimeout_4541_);
lean_inc_ref(v_requestStream_4540_);
lean_inc_ref(v_machine_4539_);
lean_del_object(v___x_4531_);
lean_dec(v_a_4529_);
goto v___jp_4551_;
}
else
{
lean_dec_ref(v_connectionContext_4517_);
lean_dec(v_socket_4516_);
lean_dec_ref(v_inst_4515_);
lean_dec(v_keepAliveTimeout_4514_);
lean_dec_ref(v_a_4513_);
lean_dec_ref(v___f_4512_);
lean_dec_ref(v_config_4511_);
lean_dec(v_handler_4510_);
lean_dec_ref(v_responseBodyInstance_4509_);
lean_dec_ref(v_h_4508_);
goto v___jp_4533_;
}
}
else
{
lean_dec_ref(v_connectionContext_4517_);
lean_dec(v_socket_4516_);
lean_dec_ref(v_inst_4515_);
lean_dec(v_keepAliveTimeout_4514_);
lean_dec_ref(v_a_4513_);
lean_dec_ref(v___f_4512_);
lean_dec_ref(v_config_4511_);
lean_dec(v_handler_4510_);
lean_dec_ref(v_responseBodyInstance_4509_);
lean_dec_ref(v_h_4508_);
goto v___jp_4533_;
}
}
else
{
lean_inc_ref(v_respStream_4545_);
lean_inc(v_dateSecond_4550_);
lean_inc(v_pendingHead_4549_);
lean_inc(v_expectData_4547_);
lean_inc_ref(v_response_4544_);
lean_inc(v_headerTimeout_4543_);
lean_inc(v_currentTimeout_4542_);
lean_inc(v_keepAliveTimeout_4541_);
lean_inc_ref(v_requestStream_4540_);
lean_inc_ref(v_machine_4539_);
lean_del_object(v___x_4531_);
lean_dec(v_a_4529_);
goto v___jp_4551_;
}
}
else
{
lean_inc(v_dateSecond_4550_);
lean_inc(v_pendingHead_4549_);
lean_inc(v_expectData_4547_);
lean_inc(v_respStream_4545_);
lean_inc_ref(v_response_4544_);
lean_inc(v_headerTimeout_4543_);
lean_inc(v_currentTimeout_4542_);
lean_inc(v_keepAliveTimeout_4541_);
lean_inc_ref(v_requestStream_4540_);
lean_inc_ref(v_machine_4539_);
lean_del_object(v___x_4531_);
lean_dec(v_a_4529_);
goto v___jp_4551_;
}
}
else
{
lean_inc(v_dateSecond_4550_);
lean_inc(v_pendingHead_4549_);
lean_inc(v_expectData_4547_);
lean_inc(v_respStream_4545_);
lean_inc_ref(v_response_4544_);
lean_inc(v_headerTimeout_4543_);
lean_inc(v_currentTimeout_4542_);
lean_inc(v_keepAliveTimeout_4541_);
lean_inc_ref(v_requestStream_4540_);
lean_inc_ref(v_machine_4539_);
lean_del_object(v___x_4531_);
lean_dec(v_a_4529_);
goto v___jp_4551_;
}
v___jp_4533_:
{
lean_object* v___x_4534_; lean_object* v___x_4536_; 
v___x_4534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4534_, 0, v_a_4529_);
if (v_isShared_4532_ == 0)
{
lean_ctor_set(v___x_4531_, 0, v___x_4534_);
v___x_4536_ = v___x_4531_;
goto v_reusejp_4535_;
}
else
{
lean_object* v_reuseFailAlloc_4538_; 
v_reuseFailAlloc_4538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4538_, 0, v___x_4534_);
v___x_4536_ = v_reuseFailAlloc_4538_;
goto v_reusejp_4535_;
}
v_reusejp_4535_:
{
lean_object* v___x_4537_; 
v___x_4537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4537_, 0, v___x_4536_);
return v___x_4537_;
}
}
v___jp_4551_:
{
lean_object* v___x_4552_; lean_object* v___f_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___f_4556_; lean_object* v___x_4557_; lean_object* v___f_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; 
lean_inc(v_dateSecond_4550_);
lean_inc(v_pendingHead_4549_);
lean_inc(v_expectData_4547_);
lean_inc(v_respStream_4545_);
lean_inc_ref(v_response_4544_);
lean_inc(v_headerTimeout_4543_);
lean_inc(v_keepAliveTimeout_4541_);
lean_inc_ref(v_requestStream_4540_);
lean_inc_ref(v_machine_4539_);
v___x_4552_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_4552_, 0, v_machine_4539_);
lean_ctor_set(v___x_4552_, 1, v_requestStream_4540_);
lean_ctor_set(v___x_4552_, 2, v_keepAliveTimeout_4541_);
lean_ctor_set(v___x_4552_, 3, v_currentTimeout_4542_);
lean_ctor_set(v___x_4552_, 4, v_headerTimeout_4543_);
lean_ctor_set(v___x_4552_, 5, v_response_4544_);
lean_ctor_set(v___x_4552_, 6, v_respStream_4545_);
lean_ctor_set(v___x_4552_, 7, v_expectData_4547_);
lean_ctor_set(v___x_4552_, 8, v_pendingHead_4549_);
lean_ctor_set(v___x_4552_, 9, v_dateSecond_4550_);
lean_ctor_set_uint8(v___x_4552_, sizeof(void*)*10, v___x_4507_);
lean_ctor_set_uint8(v___x_4552_, sizeof(void*)*10 + 1, v_handlerDispatched_4548_);
lean_inc_ref_n(v___x_4552_, 2);
v___f_4553_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4553_, 0, v___x_4552_);
v___x_4554_ = lean_box(v___x_4507_);
v___x_4555_ = lean_box(v_handlerDispatched_4548_);
lean_inc_ref(v_config_4511_);
lean_inc(v_handler_4510_);
lean_inc_ref(v_responseBodyInstance_4509_);
lean_inc_ref(v_h_4508_);
v___f_4556_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__4___boxed), 22, 20);
lean_closure_set(v___f_4556_, 0, v_h_4508_);
lean_closure_set(v___f_4556_, 1, v_responseBodyInstance_4509_);
lean_closure_set(v___f_4556_, 2, v_handler_4510_);
lean_closure_set(v___f_4556_, 3, v_config_4511_);
lean_closure_set(v___f_4556_, 4, v___x_4554_);
lean_closure_set(v___f_4556_, 5, v___f_4512_);
lean_closure_set(v___f_4556_, 6, v_a_4513_);
lean_closure_set(v___f_4556_, 7, v___f_4553_);
lean_closure_set(v___f_4556_, 8, v_keepAliveTimeout_4514_);
lean_closure_set(v___f_4556_, 9, v___x_4552_);
lean_closure_set(v___f_4556_, 10, v_machine_4539_);
lean_closure_set(v___f_4556_, 11, v_requestStream_4540_);
lean_closure_set(v___f_4556_, 12, v_keepAliveTimeout_4541_);
lean_closure_set(v___f_4556_, 13, v_headerTimeout_4543_);
lean_closure_set(v___f_4556_, 14, v_response_4544_);
lean_closure_set(v___f_4556_, 15, v_respStream_4545_);
lean_closure_set(v___f_4556_, 16, v_expectData_4547_);
lean_closure_set(v___f_4556_, 17, v___x_4555_);
lean_closure_set(v___f_4556_, 18, v_pendingHead_4549_);
lean_closure_set(v___f_4556_, 19, v_dateSecond_4550_);
v___x_4557_ = lean_box(v___x_4507_);
v___f_4558_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4558_, 0, v_inst_4515_);
lean_closure_set(v___f_4558_, 1, v_h_4508_);
lean_closure_set(v___f_4558_, 2, v_responseBodyInstance_4509_);
lean_closure_set(v___f_4558_, 3, v_config_4511_);
lean_closure_set(v___f_4558_, 4, v_handler_4510_);
lean_closure_set(v___f_4558_, 5, v___x_4557_);
lean_closure_set(v___f_4558_, 6, v___f_4556_);
v___x_4559_ = lean_unsigned_to_nat(0u);
v___x_4560_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_buildPollSources___redArg(v_socket_4516_, v_connectionContext_4517_, v___x_4552_);
v___x_4561_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4559_, v___x_4507_, v___x_4560_, v___f_4558_);
return v___x_4561_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6___boxed(lean_object* v___x_4567_, lean_object* v_h_4568_, lean_object* v_responseBodyInstance_4569_, lean_object* v_handler_4570_, lean_object* v_config_4571_, lean_object* v___f_4572_, lean_object* v_a_4573_, lean_object* v_keepAliveTimeout_4574_, lean_object* v_inst_4575_, lean_object* v_socket_4576_, lean_object* v_connectionContext_4577_, lean_object* v_x_4578_, lean_object* v___y_4579_){
_start:
{
uint8_t v___x_7717__boxed_4580_; lean_object* v_res_4581_; 
v___x_7717__boxed_4580_ = lean_unbox(v___x_4567_);
v_res_4581_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6(v___x_7717__boxed_4580_, v_h_4568_, v_responseBodyInstance_4569_, v_handler_4570_, v_config_4571_, v___f_4572_, v_a_4573_, v_keepAliveTimeout_4574_, v_inst_4575_, v_socket_4576_, v_connectionContext_4577_, v_x_4578_);
return v_res_4581_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7(lean_object* v_h_4582_, lean_object* v_handler_4583_, lean_object* v_extensions_4584_, lean_object* v_connectionContext_4585_, uint8_t v___x_4586_, lean_object* v___f_4587_, lean_object* v_x_4588_){
_start:
{
if (lean_obj_tag(v_x_4588_) == 0)
{
lean_object* v_a_4590_; lean_object* v___x_4592_; uint8_t v_isShared_4593_; uint8_t v_isSharedCheck_4598_; 
lean_dec_ref(v___f_4587_);
lean_dec_ref(v_connectionContext_4585_);
lean_dec(v_extensions_4584_);
lean_dec(v_handler_4583_);
lean_dec_ref(v_h_4582_);
v_a_4590_ = lean_ctor_get(v_x_4588_, 0);
v_isSharedCheck_4598_ = !lean_is_exclusive(v_x_4588_);
if (v_isSharedCheck_4598_ == 0)
{
v___x_4592_ = v_x_4588_;
v_isShared_4593_ = v_isSharedCheck_4598_;
goto v_resetjp_4591_;
}
else
{
lean_inc(v_a_4590_);
lean_dec(v_x_4588_);
v___x_4592_ = lean_box(0);
v_isShared_4593_ = v_isSharedCheck_4598_;
goto v_resetjp_4591_;
}
v_resetjp_4591_:
{
lean_object* v___x_4595_; 
if (v_isShared_4593_ == 0)
{
v___x_4595_ = v___x_4592_;
goto v_reusejp_4594_;
}
else
{
lean_object* v_reuseFailAlloc_4597_; 
v_reuseFailAlloc_4597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4597_, 0, v_a_4590_);
v___x_4595_ = v_reuseFailAlloc_4597_;
goto v_reusejp_4594_;
}
v_reusejp_4594_:
{
lean_object* v___x_4596_; 
v___x_4596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4596_, 0, v___x_4595_);
return v___x_4596_;
}
}
}
else
{
lean_object* v_a_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; 
v_a_4599_ = lean_ctor_get(v_x_4588_, 0);
lean_inc(v_a_4599_);
lean_dec_ref_known(v_x_4588_, 1);
v___x_4600_ = lean_unsigned_to_nat(0u);
v___x_4601_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_dispatchPendingRequest___redArg(v_h_4582_, v_handler_4583_, v_extensions_4584_, v_connectionContext_4585_, v_a_4599_);
v___x_4602_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4600_, v___x_4586_, v___x_4601_, v___f_4587_);
return v___x_4602_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7___boxed(lean_object* v_h_4603_, lean_object* v_handler_4604_, lean_object* v_extensions_4605_, lean_object* v_connectionContext_4606_, lean_object* v___x_4607_, lean_object* v___f_4608_, lean_object* v_x_4609_, lean_object* v___y_4610_){
_start:
{
uint8_t v___x_7799__boxed_4611_; lean_object* v_res_4612_; 
v___x_7799__boxed_4611_ = lean_unbox(v___x_4607_);
v_res_4612_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7(v_h_4603_, v_handler_4604_, v_extensions_4605_, v_connectionContext_4606_, v___x_7799__boxed_4611_, v___f_4608_, v_x_4609_);
return v_res_4612_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8(lean_object* v___x_4613_, lean_object* v_x_4614_){
_start:
{
if (lean_obj_tag(v_x_4614_) == 0)
{
lean_object* v_a_4616_; lean_object* v___x_4618_; uint8_t v_isShared_4619_; uint8_t v_isSharedCheck_4624_; 
lean_dec_ref(v___x_4613_);
v_a_4616_ = lean_ctor_get(v_x_4614_, 0);
v_isSharedCheck_4624_ = !lean_is_exclusive(v_x_4614_);
if (v_isSharedCheck_4624_ == 0)
{
v___x_4618_ = v_x_4614_;
v_isShared_4619_ = v_isSharedCheck_4624_;
goto v_resetjp_4617_;
}
else
{
lean_inc(v_a_4616_);
lean_dec(v_x_4614_);
v___x_4618_ = lean_box(0);
v_isShared_4619_ = v_isSharedCheck_4624_;
goto v_resetjp_4617_;
}
v_resetjp_4617_:
{
lean_object* v___x_4621_; 
if (v_isShared_4619_ == 0)
{
v___x_4621_ = v___x_4618_;
goto v_reusejp_4620_;
}
else
{
lean_object* v_reuseFailAlloc_4623_; 
v_reuseFailAlloc_4623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4623_, 0, v_a_4616_);
v___x_4621_ = v_reuseFailAlloc_4623_;
goto v_reusejp_4620_;
}
v_reusejp_4620_:
{
lean_object* v___x_4622_; 
v___x_4622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4622_, 0, v___x_4621_);
return v___x_4622_;
}
}
}
else
{
lean_object* v___x_4626_; uint8_t v_isShared_4627_; uint8_t v_isSharedCheck_4633_; 
v_isSharedCheck_4633_ = !lean_is_exclusive(v_x_4614_);
if (v_isSharedCheck_4633_ == 0)
{
lean_object* v_unused_4634_; 
v_unused_4634_ = lean_ctor_get(v_x_4614_, 0);
lean_dec(v_unused_4634_);
v___x_4626_ = v_x_4614_;
v_isShared_4627_ = v_isSharedCheck_4633_;
goto v_resetjp_4625_;
}
else
{
lean_dec(v_x_4614_);
v___x_4626_ = lean_box(0);
v_isShared_4627_ = v_isSharedCheck_4633_;
goto v_resetjp_4625_;
}
v_resetjp_4625_:
{
lean_object* v___x_4628_; lean_object* v___x_4630_; 
v___x_4628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4628_, 0, v___x_4613_);
if (v_isShared_4627_ == 0)
{
lean_ctor_set(v___x_4626_, 0, v___x_4628_);
v___x_4630_ = v___x_4626_;
goto v_reusejp_4629_;
}
else
{
lean_object* v_reuseFailAlloc_4632_; 
v_reuseFailAlloc_4632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4632_, 0, v___x_4628_);
v___x_4630_ = v_reuseFailAlloc_4632_;
goto v_reusejp_4629_;
}
v_reusejp_4629_:
{
lean_object* v___x_4631_; 
v___x_4631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4631_, 0, v___x_4630_);
return v___x_4631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8___boxed(lean_object* v___x_4635_, lean_object* v_x_4636_, lean_object* v___y_4637_){
_start:
{
lean_object* v_res_4638_; 
v_res_4638_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8(v___x_4635_, v_x_4636_);
return v_res_4638_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9(lean_object* v_h_4639_, lean_object* v_responseBodyInstance_4640_, lean_object* v_handler_4641_, lean_object* v_config_4642_, lean_object* v_connectionContext_4643_, lean_object* v_events_4644_, lean_object* v___x_4645_, uint8_t v___x_4646_, lean_object* v___f_4647_, lean_object* v_____r_4648_){
_start:
{
lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; 
v___x_4650_ = lean_unsigned_to_nat(0u);
v___x_4651_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg(v_h_4639_, v_responseBodyInstance_4640_, v_handler_4641_, v_config_4642_, v_connectionContext_4643_, v_events_4644_, v___x_4645_);
v___x_4652_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4650_, v___x_4646_, v___x_4651_, v___f_4647_);
return v___x_4652_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9___boxed(lean_object* v_h_4653_, lean_object* v_responseBodyInstance_4654_, lean_object* v_handler_4655_, lean_object* v_config_4656_, lean_object* v_connectionContext_4657_, lean_object* v_events_4658_, lean_object* v___x_4659_, lean_object* v___x_4660_, lean_object* v___f_4661_, lean_object* v_____r_4662_, lean_object* v___y_4663_){
_start:
{
uint8_t v___x_7886__boxed_4664_; lean_object* v_res_4665_; 
v___x_7886__boxed_4664_ = lean_unbox(v___x_4660_);
v_res_4665_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9(v_h_4653_, v_responseBodyInstance_4654_, v_handler_4655_, v_config_4656_, v_connectionContext_4657_, v_events_4658_, v___x_4659_, v___x_7886__boxed_4664_, v___f_4661_, v_____r_4662_);
return v_res_4665_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11(lean_object* v_h_4666_, lean_object* v_handler_4667_, lean_object* v_a_4668_, lean_object* v___f_4669_, lean_object* v___f_4670_, lean_object* v_x_4671_){
_start:
{
if (lean_obj_tag(v_x_4671_) == 0)
{
lean_object* v_a_4673_; lean_object* v___x_4675_; uint8_t v_isShared_4676_; uint8_t v_isSharedCheck_4681_; 
lean_dec_ref(v___f_4670_);
lean_dec_ref(v___f_4669_);
lean_dec(v_handler_4667_);
lean_dec_ref(v_h_4666_);
v_a_4673_ = lean_ctor_get(v_x_4671_, 0);
v_isSharedCheck_4681_ = !lean_is_exclusive(v_x_4671_);
if (v_isSharedCheck_4681_ == 0)
{
v___x_4675_ = v_x_4671_;
v_isShared_4676_ = v_isSharedCheck_4681_;
goto v_resetjp_4674_;
}
else
{
lean_inc(v_a_4673_);
lean_dec(v_x_4671_);
v___x_4675_ = lean_box(0);
v_isShared_4676_ = v_isSharedCheck_4681_;
goto v_resetjp_4674_;
}
v_resetjp_4674_:
{
lean_object* v___x_4678_; 
if (v_isShared_4676_ == 0)
{
v___x_4678_ = v___x_4675_;
goto v_reusejp_4677_;
}
else
{
lean_object* v_reuseFailAlloc_4680_; 
v_reuseFailAlloc_4680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4680_, 0, v_a_4673_);
v___x_4678_ = v_reuseFailAlloc_4680_;
goto v_reusejp_4677_;
}
v_reusejp_4677_:
{
lean_object* v___x_4679_; 
v___x_4679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4679_, 0, v___x_4678_);
return v___x_4679_;
}
}
}
else
{
lean_object* v_a_4682_; uint8_t v___x_4683_; 
v_a_4682_ = lean_ctor_get(v_x_4671_, 0);
lean_inc(v_a_4682_);
lean_dec_ref_known(v_x_4671_, 1);
v___x_4683_ = lean_unbox(v_a_4682_);
if (v___x_4683_ == 0)
{
lean_object* v___x_4684_; lean_object* v___x_4685_; uint8_t v___x_4686_; lean_object* v___x_4687_; 
lean_dec_ref(v___f_4670_);
v___x_4684_ = lean_unsigned_to_nat(0u);
v___x_4685_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg(v_h_4666_, v_handler_4667_, v_a_4668_);
v___x_4686_ = lean_unbox(v_a_4682_);
lean_dec(v_a_4682_);
v___x_4687_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4684_, v___x_4686_, v___x_4685_, v___f_4669_);
return v___x_4687_;
}
else
{
lean_object* v___x_4688_; lean_object* v___x_4689_; 
lean_dec(v_a_4682_);
lean_dec_ref(v___f_4669_);
lean_dec(v_handler_4667_);
lean_dec_ref(v_h_4666_);
v___x_4688_ = lean_box(0);
v___x_4689_ = lean_apply_2(v___f_4670_, v___x_4688_, lean_box(0));
return v___x_4689_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11___boxed(lean_object* v_h_4690_, lean_object* v_handler_4691_, lean_object* v_a_4692_, lean_object* v___f_4693_, lean_object* v___f_4694_, lean_object* v_x_4695_, lean_object* v___y_4696_){
_start:
{
lean_object* v_res_4697_; 
v_res_4697_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11(v_h_4690_, v_handler_4691_, v_a_4692_, v___f_4693_, v___f_4694_, v_x_4695_);
lean_dec_ref(v_a_4692_);
return v_res_4697_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10(lean_object* v_h_4698_, lean_object* v_handler_4699_, lean_object* v_a_4700_, lean_object* v___f_4701_, lean_object* v___f_4702_, lean_object* v_events_4703_, lean_object* v___f_4704_, uint8_t v___x_4705_, lean_object* v___f_4706_, lean_object* v_x_4707_){
_start:
{
if (lean_obj_tag(v_x_4707_) == 0)
{
lean_object* v_a_4712_; lean_object* v___x_4714_; uint8_t v_isShared_4715_; uint8_t v_isSharedCheck_4720_; 
lean_dec_ref(v___f_4706_);
lean_dec_ref(v___f_4704_);
lean_dec_ref(v_events_4703_);
lean_dec_ref(v___f_4702_);
lean_dec_ref(v___f_4701_);
lean_dec_ref(v_a_4700_);
lean_dec(v_handler_4699_);
lean_dec_ref(v_h_4698_);
v_a_4712_ = lean_ctor_get(v_x_4707_, 0);
v_isSharedCheck_4720_ = !lean_is_exclusive(v_x_4707_);
if (v_isSharedCheck_4720_ == 0)
{
v___x_4714_ = v_x_4707_;
v_isShared_4715_ = v_isSharedCheck_4720_;
goto v_resetjp_4713_;
}
else
{
lean_inc(v_a_4712_);
lean_dec(v_x_4707_);
v___x_4714_ = lean_box(0);
v_isShared_4715_ = v_isSharedCheck_4720_;
goto v_resetjp_4713_;
}
v_resetjp_4713_:
{
lean_object* v___x_4717_; 
if (v_isShared_4715_ == 0)
{
v___x_4717_ = v___x_4714_;
goto v_reusejp_4716_;
}
else
{
lean_object* v_reuseFailAlloc_4719_; 
v_reuseFailAlloc_4719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4719_, 0, v_a_4712_);
v___x_4717_ = v_reuseFailAlloc_4719_;
goto v_reusejp_4716_;
}
v_reusejp_4716_:
{
lean_object* v___x_4718_; 
v___x_4718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4718_, 0, v___x_4717_);
return v___x_4718_;
}
}
}
else
{
lean_object* v_a_4721_; uint8_t v___x_4722_; 
v_a_4721_ = lean_ctor_get(v_x_4707_, 0);
lean_inc(v_a_4721_);
lean_dec_ref_known(v_x_4707_, 1);
v___x_4722_ = lean_unbox(v_a_4721_);
if (v___x_4722_ == 0)
{
lean_object* v___x_4723_; lean_object* v___x_4724_; uint8_t v___x_4725_; lean_object* v___x_4726_; 
lean_dec_ref(v___f_4706_);
lean_dec_ref(v___f_4704_);
lean_dec_ref(v_events_4703_);
lean_dec_ref(v___f_4702_);
v___x_4723_ = lean_unsigned_to_nat(0u);
v___x_4724_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg(v_h_4698_, v_handler_4699_, v_a_4700_);
lean_dec_ref(v_a_4700_);
v___x_4725_ = lean_unbox(v_a_4721_);
lean_dec(v_a_4721_);
v___x_4726_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4723_, v___x_4725_, v___x_4724_, v___f_4701_);
return v___x_4726_;
}
else
{
lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; uint8_t v___x_4730_; 
lean_dec(v_a_4721_);
lean_dec_ref(v___f_4701_);
lean_dec(v_handler_4699_);
lean_dec_ref(v_h_4698_);
v___x_4727_ = lean_unsigned_to_nat(0u);
v___x_4728_ = lean_array_get_size(v_events_4703_);
v___x_4729_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_applyResponse___redArg___lam__8___closed__9));
v___x_4730_ = lean_nat_dec_lt(v___x_4727_, v___x_4728_);
if (v___x_4730_ == 0)
{
lean_dec_ref(v___f_4706_);
lean_dec_ref(v___f_4704_);
lean_dec_ref(v_events_4703_);
lean_dec_ref(v_a_4700_);
goto v___jp_4709_;
}
else
{
if (v___x_4730_ == 0)
{
lean_dec_ref(v___f_4706_);
lean_dec_ref(v___f_4704_);
lean_dec_ref(v_events_4703_);
lean_dec_ref(v_a_4700_);
goto v___jp_4709_;
}
else
{
size_t v___x_4731_; size_t v___x_4732_; lean_object* v___x_4733_; uint8_t v___x_4734_; 
v___x_4731_ = ((size_t)0ULL);
v___x_4732_ = lean_usize_of_nat(v___x_4728_);
v___x_4733_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_4729_, v___f_4704_, v_events_4703_, v___x_4731_, v___x_4732_);
v___x_4734_ = lean_unbox(v___x_4733_);
lean_dec(v___x_4733_);
if (v___x_4734_ == 0)
{
lean_dec_ref(v___f_4706_);
lean_dec_ref(v_a_4700_);
goto v___jp_4709_;
}
else
{
lean_object* v___x_4735_; lean_object* v___x_4736_; 
lean_dec_ref(v___f_4702_);
v___x_4735_ = l_Std_Http_Internal_Outbox_awaitWritten___redArg(v_a_4700_);
v___x_4736_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4727_, v___x_4705_, v___x_4735_, v___f_4706_);
return v___x_4736_;
}
}
}
}
}
v___jp_4709_:
{
lean_object* v___x_4710_; lean_object* v___x_4711_; 
v___x_4710_ = lean_box(0);
v___x_4711_ = lean_apply_2(v___f_4702_, v___x_4710_, lean_box(0));
return v___x_4711_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10___boxed(lean_object* v_h_4737_, lean_object* v_handler_4738_, lean_object* v_a_4739_, lean_object* v___f_4740_, lean_object* v___f_4741_, lean_object* v_events_4742_, lean_object* v___f_4743_, lean_object* v___x_4744_, lean_object* v___f_4745_, lean_object* v_x_4746_, lean_object* v___y_4747_){
_start:
{
uint8_t v___x_7978__boxed_4748_; lean_object* v_res_4749_; 
v___x_7978__boxed_4748_ = lean_unbox(v___x_4744_);
v_res_4749_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10(v_h_4737_, v_handler_4738_, v_a_4739_, v___f_4740_, v___f_4741_, v_events_4742_, v___f_4743_, v___x_7978__boxed_4748_, v___f_4745_, v_x_4746_);
return v_res_4749_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12(uint8_t v___x_4750_, lean_object* v_h_4751_, lean_object* v_responseBodyInstance_4752_, lean_object* v_handler_4753_, lean_object* v_config_4754_, lean_object* v_connectionContext_4755_, uint8_t v___x_4756_, lean_object* v___f_4757_, lean_object* v_a_4758_, lean_object* v___f_4759_, lean_object* v_inst_4760_, lean_object* v_x_4761_){
_start:
{
if (lean_obj_tag(v_x_4761_) == 0)
{
lean_object* v_a_4763_; lean_object* v___x_4765_; uint8_t v_isShared_4766_; uint8_t v_isSharedCheck_4771_; 
lean_dec_ref(v_inst_4760_);
lean_dec_ref(v___f_4759_);
lean_dec_ref(v_a_4758_);
lean_dec_ref(v___f_4757_);
lean_dec_ref(v_connectionContext_4755_);
lean_dec_ref(v_config_4754_);
lean_dec(v_handler_4753_);
lean_dec_ref(v_responseBodyInstance_4752_);
lean_dec_ref(v_h_4751_);
v_a_4763_ = lean_ctor_get(v_x_4761_, 0);
v_isSharedCheck_4771_ = !lean_is_exclusive(v_x_4761_);
if (v_isSharedCheck_4771_ == 0)
{
v___x_4765_ = v_x_4761_;
v_isShared_4766_ = v_isSharedCheck_4771_;
goto v_resetjp_4764_;
}
else
{
lean_inc(v_a_4763_);
lean_dec(v_x_4761_);
v___x_4765_ = lean_box(0);
v_isShared_4766_ = v_isSharedCheck_4771_;
goto v_resetjp_4764_;
}
v_resetjp_4764_:
{
lean_object* v___x_4768_; 
if (v_isShared_4766_ == 0)
{
v___x_4768_ = v___x_4765_;
goto v_reusejp_4767_;
}
else
{
lean_object* v_reuseFailAlloc_4770_; 
v_reuseFailAlloc_4770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4770_, 0, v_a_4763_);
v___x_4768_ = v_reuseFailAlloc_4770_;
goto v_reusejp_4767_;
}
v_reusejp_4767_:
{
lean_object* v___x_4769_; 
v___x_4769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4769_, 0, v___x_4768_);
return v___x_4769_;
}
}
}
else
{
lean_object* v_a_4772_; lean_object* v_machine_4773_; lean_object* v_requestStream_4774_; lean_object* v_keepAliveTimeout_4775_; lean_object* v_currentTimeout_4776_; lean_object* v_headerTimeout_4777_; lean_object* v_response_4778_; lean_object* v_respStream_4779_; uint8_t v_requiresData_4780_; lean_object* v_expectData_4781_; uint8_t v_handlerDispatched_4782_; lean_object* v_pendingHead_4783_; lean_object* v_dateSecond_4784_; lean_object* v___x_4786_; uint8_t v_isShared_4787_; uint8_t v_isSharedCheck_4806_; 
v_a_4772_ = lean_ctor_get(v_x_4761_, 0);
lean_inc(v_a_4772_);
lean_dec_ref_known(v_x_4761_, 1);
v_machine_4773_ = lean_ctor_get(v_a_4772_, 0);
v_requestStream_4774_ = lean_ctor_get(v_a_4772_, 1);
v_keepAliveTimeout_4775_ = lean_ctor_get(v_a_4772_, 2);
v_currentTimeout_4776_ = lean_ctor_get(v_a_4772_, 3);
v_headerTimeout_4777_ = lean_ctor_get(v_a_4772_, 4);
v_response_4778_ = lean_ctor_get(v_a_4772_, 5);
v_respStream_4779_ = lean_ctor_get(v_a_4772_, 6);
v_requiresData_4780_ = lean_ctor_get_uint8(v_a_4772_, sizeof(void*)*10);
v_expectData_4781_ = lean_ctor_get(v_a_4772_, 7);
v_handlerDispatched_4782_ = lean_ctor_get_uint8(v_a_4772_, sizeof(void*)*10 + 1);
v_pendingHead_4783_ = lean_ctor_get(v_a_4772_, 8);
v_dateSecond_4784_ = lean_ctor_get(v_a_4772_, 9);
v_isSharedCheck_4806_ = !lean_is_exclusive(v_a_4772_);
if (v_isSharedCheck_4806_ == 0)
{
v___x_4786_ = v_a_4772_;
v_isShared_4787_ = v_isSharedCheck_4806_;
goto v_resetjp_4785_;
}
else
{
lean_inc(v_dateSecond_4784_);
lean_inc(v_pendingHead_4783_);
lean_inc(v_expectData_4781_);
lean_inc(v_respStream_4779_);
lean_inc(v_response_4778_);
lean_inc(v_headerTimeout_4777_);
lean_inc(v_currentTimeout_4776_);
lean_inc(v_keepAliveTimeout_4775_);
lean_inc(v_requestStream_4774_);
lean_inc(v_machine_4773_);
lean_dec(v_a_4772_);
v___x_4786_ = lean_box(0);
v_isShared_4787_ = v_isSharedCheck_4806_;
goto v_resetjp_4785_;
}
v_resetjp_4785_:
{
lean_object* v___x_4788_; lean_object* v_snd_4789_; lean_object* v_fst_4790_; lean_object* v_events_4791_; lean_object* v_output_4792_; lean_object* v___x_4794_; 
v___x_4788_ = l_Std_Http_Protocol_H1_Machine_step(v___x_4750_, v_machine_4773_);
v_snd_4789_ = lean_ctor_get(v___x_4788_, 1);
lean_inc(v_snd_4789_);
v_fst_4790_ = lean_ctor_get(v___x_4788_, 0);
lean_inc(v_fst_4790_);
lean_dec_ref(v___x_4788_);
v_events_4791_ = lean_ctor_get(v_snd_4789_, 0);
lean_inc_ref(v_events_4791_);
v_output_4792_ = lean_ctor_get(v_snd_4789_, 1);
lean_inc_ref(v_output_4792_);
lean_dec(v_snd_4789_);
if (v_isShared_4787_ == 0)
{
lean_ctor_set(v___x_4786_, 0, v_fst_4790_);
v___x_4794_ = v___x_4786_;
goto v_reusejp_4793_;
}
else
{
lean_object* v_reuseFailAlloc_4805_; 
v_reuseFailAlloc_4805_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v_reuseFailAlloc_4805_, 0, v_fst_4790_);
lean_ctor_set(v_reuseFailAlloc_4805_, 1, v_requestStream_4774_);
lean_ctor_set(v_reuseFailAlloc_4805_, 2, v_keepAliveTimeout_4775_);
lean_ctor_set(v_reuseFailAlloc_4805_, 3, v_currentTimeout_4776_);
lean_ctor_set(v_reuseFailAlloc_4805_, 4, v_headerTimeout_4777_);
lean_ctor_set(v_reuseFailAlloc_4805_, 5, v_response_4778_);
lean_ctor_set(v_reuseFailAlloc_4805_, 6, v_respStream_4779_);
lean_ctor_set(v_reuseFailAlloc_4805_, 7, v_expectData_4781_);
lean_ctor_set(v_reuseFailAlloc_4805_, 8, v_pendingHead_4783_);
lean_ctor_set(v_reuseFailAlloc_4805_, 9, v_dateSecond_4784_);
lean_ctor_set_uint8(v_reuseFailAlloc_4805_, sizeof(void*)*10, v_requiresData_4780_);
lean_ctor_set_uint8(v_reuseFailAlloc_4805_, sizeof(void*)*10 + 1, v_handlerDispatched_4782_);
v___x_4794_ = v_reuseFailAlloc_4805_;
goto v_reusejp_4793_;
}
v_reusejp_4793_:
{
lean_object* v___f_4795_; lean_object* v___x_4796_; lean_object* v___f_4797_; lean_object* v___f_4798_; lean_object* v___x_4799_; lean_object* v___f_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; 
lean_inc_ref(v___x_4794_);
v___f_4795_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_4795_, 0, v___x_4794_);
v___x_4796_ = lean_box(v___x_4756_);
lean_inc_ref(v_events_4791_);
lean_inc_n(v_handler_4753_, 2);
lean_inc_ref_n(v_h_4751_, 2);
v___f_4797_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__9___boxed), 11, 9);
lean_closure_set(v___f_4797_, 0, v_h_4751_);
lean_closure_set(v___f_4797_, 1, v_responseBodyInstance_4752_);
lean_closure_set(v___f_4797_, 2, v_handler_4753_);
lean_closure_set(v___f_4797_, 3, v_config_4754_);
lean_closure_set(v___f_4797_, 4, v_connectionContext_4755_);
lean_closure_set(v___f_4797_, 5, v_events_4791_);
lean_closure_set(v___f_4797_, 6, v___x_4794_);
lean_closure_set(v___f_4797_, 7, v___x_4796_);
lean_closure_set(v___f_4797_, 8, v___f_4757_);
lean_inc_ref(v___f_4797_);
lean_inc_ref(v___f_4795_);
lean_inc_ref_n(v_a_4758_, 2);
v___f_4798_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__11___boxed), 7, 5);
lean_closure_set(v___f_4798_, 0, v_h_4751_);
lean_closure_set(v___f_4798_, 1, v_handler_4753_);
lean_closure_set(v___f_4798_, 2, v_a_4758_);
lean_closure_set(v___f_4798_, 3, v___f_4795_);
lean_closure_set(v___f_4798_, 4, v___f_4797_);
v___x_4799_ = lean_box(v___x_4756_);
v___f_4800_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__10___boxed), 11, 9);
lean_closure_set(v___f_4800_, 0, v_h_4751_);
lean_closure_set(v___f_4800_, 1, v_handler_4753_);
lean_closure_set(v___f_4800_, 2, v_a_4758_);
lean_closure_set(v___f_4800_, 3, v___f_4795_);
lean_closure_set(v___f_4800_, 4, v___f_4797_);
lean_closure_set(v___f_4800_, 5, v_events_4791_);
lean_closure_set(v___f_4800_, 6, v___f_4759_);
lean_closure_set(v___f_4800_, 7, v___x_4799_);
lean_closure_set(v___f_4800_, 8, v___f_4798_);
v___x_4801_ = lean_unsigned_to_nat(65536u);
v___x_4802_ = lean_unsigned_to_nat(0u);
v___x_4803_ = l_Std_Http_Internal_Outbox_push___redArg(v_inst_4760_, v_a_4758_, v_output_4792_, v___x_4801_);
v___x_4804_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4802_, v___x_4756_, v___x_4803_, v___f_4800_);
return v___x_4804_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12___boxed(lean_object* v___x_4807_, lean_object* v_h_4808_, lean_object* v_responseBodyInstance_4809_, lean_object* v_handler_4810_, lean_object* v_config_4811_, lean_object* v_connectionContext_4812_, lean_object* v___x_4813_, lean_object* v___f_4814_, lean_object* v_a_4815_, lean_object* v___f_4816_, lean_object* v_inst_4817_, lean_object* v_x_4818_, lean_object* v___y_4819_){
_start:
{
uint8_t v___x_8063__boxed_4820_; uint8_t v___x_8064__boxed_4821_; lean_object* v_res_4822_; 
v___x_8063__boxed_4820_ = lean_unbox(v___x_4807_);
v___x_8064__boxed_4821_ = lean_unbox(v___x_4813_);
v_res_4822_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12(v___x_8063__boxed_4820_, v_h_4808_, v_responseBodyInstance_4809_, v_handler_4810_, v_config_4811_, v_connectionContext_4812_, v___x_8064__boxed_4821_, v___f_4814_, v_a_4815_, v___f_4816_, v_inst_4817_, v_x_4818_);
return v_res_4822_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13(lean_object* v_h_4823_, lean_object* v_responseBodyInstance_4824_, lean_object* v_handler_4825_, lean_object* v_config_4826_, lean_object* v_connectionContext_4827_, uint8_t v___x_4828_, lean_object* v___f_4829_, lean_object* v_a_4830_, lean_object* v___f_4831_, lean_object* v_inst_4832_, lean_object* v_x_4833_, lean_object* v_____s_4834_){
_start:
{
lean_object* v_machine_4836_; lean_object* v_reader_4837_; lean_object* v_writer_4838_; lean_object* v_state_4839_; uint8_t v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; lean_object* v___f_4843_; lean_object* v___y_4845_; lean_object* v_val_4846_; 
v_machine_4836_ = lean_ctor_get(v_____s_4834_, 0);
v_reader_4837_ = lean_ctor_get(v_machine_4836_, 0);
v_writer_4838_ = lean_ctor_get(v_machine_4836_, 1);
v_state_4839_ = lean_ctor_get(v_reader_4837_, 0);
v___x_4840_ = 0;
v___x_4841_ = lean_box(v___x_4840_);
v___x_4842_ = lean_box(v___x_4828_);
lean_inc_ref(v_config_4826_);
v___f_4843_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__12___boxed), 13, 11);
lean_closure_set(v___f_4843_, 0, v___x_4841_);
lean_closure_set(v___f_4843_, 1, v_h_4823_);
lean_closure_set(v___f_4843_, 2, v_responseBodyInstance_4824_);
lean_closure_set(v___f_4843_, 3, v_handler_4825_);
lean_closure_set(v___f_4843_, 4, v_config_4826_);
lean_closure_set(v___f_4843_, 5, v_connectionContext_4827_);
lean_closure_set(v___f_4843_, 6, v___x_4842_);
lean_closure_set(v___f_4843_, 7, v___f_4829_);
lean_closure_set(v___f_4843_, 8, v_a_4830_);
lean_closure_set(v___f_4843_, 9, v___f_4831_);
lean_closure_set(v___f_4843_, 10, v_inst_4832_);
if (lean_obj_tag(v_state_4839_) == 6)
{
lean_object* v_state_4868_; 
v_state_4868_ = lean_ctor_get(v_writer_4838_, 2);
if (lean_obj_tag(v_state_4868_) == 7)
{
lean_object* v_outputData_4869_; lean_object* v_size_4870_; lean_object* v___x_4871_; uint8_t v___x_4872_; 
v_outputData_4869_ = lean_ctor_get(v_writer_4838_, 1);
v_size_4870_ = lean_ctor_get(v_outputData_4869_, 1);
v___x_4871_ = lean_unsigned_to_nat(0u);
v___x_4872_ = lean_nat_dec_eq(v_size_4870_, v___x_4871_);
if (v___x_4872_ == 0)
{
goto v___jp_4849_;
}
else
{
lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; 
lean_dec_ref(v___f_4843_);
lean_dec_ref(v_config_4826_);
v___x_4873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4873_, 0, v_____s_4834_);
v___x_4874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4874_, 0, v___x_4873_);
v___x_4875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4875_, 0, v___x_4874_);
return v___x_4875_;
}
}
else
{
goto v___jp_4849_;
}
}
else
{
goto v___jp_4849_;
}
v___jp_4844_:
{
lean_object* v___x_4847_; lean_object* v___x_4848_; 
v___x_4847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4847_, 0, v_val_4846_);
v___x_4848_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___y_4845_, v___x_4828_, v___x_4847_, v___f_4843_);
return v___x_4848_;
}
v___jp_4849_:
{
lean_object* v___x_4850_; lean_object* v___x_4851_; 
v___x_4850_ = lean_unsigned_to_nat(0u);
v___x_4851_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_refreshDate___redArg(v_config_4826_, v_____s_4834_);
lean_dec_ref(v_config_4826_);
if (lean_obj_tag(v___x_4851_) == 0)
{
lean_object* v_a_4852_; lean_object* v___x_4854_; uint8_t v_isShared_4855_; uint8_t v_isSharedCheck_4859_; 
v_a_4852_ = lean_ctor_get(v___x_4851_, 0);
v_isSharedCheck_4859_ = !lean_is_exclusive(v___x_4851_);
if (v_isSharedCheck_4859_ == 0)
{
v___x_4854_ = v___x_4851_;
v_isShared_4855_ = v_isSharedCheck_4859_;
goto v_resetjp_4853_;
}
else
{
lean_inc(v_a_4852_);
lean_dec(v___x_4851_);
v___x_4854_ = lean_box(0);
v_isShared_4855_ = v_isSharedCheck_4859_;
goto v_resetjp_4853_;
}
v_resetjp_4853_:
{
lean_object* v___x_4857_; 
if (v_isShared_4855_ == 0)
{
lean_ctor_set_tag(v___x_4854_, 1);
v___x_4857_ = v___x_4854_;
goto v_reusejp_4856_;
}
else
{
lean_object* v_reuseFailAlloc_4858_; 
v_reuseFailAlloc_4858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4858_, 0, v_a_4852_);
v___x_4857_ = v_reuseFailAlloc_4858_;
goto v_reusejp_4856_;
}
v_reusejp_4856_:
{
v___y_4845_ = v___x_4850_;
v_val_4846_ = v___x_4857_;
goto v___jp_4844_;
}
}
}
else
{
lean_object* v_a_4860_; lean_object* v___x_4862_; uint8_t v_isShared_4863_; uint8_t v_isSharedCheck_4867_; 
v_a_4860_ = lean_ctor_get(v___x_4851_, 0);
v_isSharedCheck_4867_ = !lean_is_exclusive(v___x_4851_);
if (v_isSharedCheck_4867_ == 0)
{
v___x_4862_ = v___x_4851_;
v_isShared_4863_ = v_isSharedCheck_4867_;
goto v_resetjp_4861_;
}
else
{
lean_inc(v_a_4860_);
lean_dec(v___x_4851_);
v___x_4862_ = lean_box(0);
v_isShared_4863_ = v_isSharedCheck_4867_;
goto v_resetjp_4861_;
}
v_resetjp_4861_:
{
lean_object* v___x_4865_; 
if (v_isShared_4863_ == 0)
{
lean_ctor_set_tag(v___x_4862_, 0);
v___x_4865_ = v___x_4862_;
goto v_reusejp_4864_;
}
else
{
lean_object* v_reuseFailAlloc_4866_; 
v_reuseFailAlloc_4866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4866_, 0, v_a_4860_);
v___x_4865_ = v_reuseFailAlloc_4866_;
goto v_reusejp_4864_;
}
v_reusejp_4864_:
{
v___y_4845_ = v___x_4850_;
v_val_4846_ = v___x_4865_;
goto v___jp_4844_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13___boxed(lean_object* v_h_4876_, lean_object* v_responseBodyInstance_4877_, lean_object* v_handler_4878_, lean_object* v_config_4879_, lean_object* v_connectionContext_4880_, lean_object* v___x_4881_, lean_object* v___f_4882_, lean_object* v_a_4883_, lean_object* v___f_4884_, lean_object* v_inst_4885_, lean_object* v_x_4886_, lean_object* v_____s_4887_, lean_object* v___y_4888_){
_start:
{
uint8_t v___x_8147__boxed_4889_; lean_object* v_res_4890_; 
v___x_8147__boxed_4889_ = lean_unbox(v___x_4881_);
v_res_4890_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13(v_h_4876_, v_responseBodyInstance_4877_, v_handler_4878_, v_config_4879_, v_connectionContext_4880_, v___x_8147__boxed_4889_, v___f_4882_, v_a_4883_, v___f_4884_, v_inst_4885_, v_x_4886_, v_____s_4887_);
return v_res_4890_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(lean_object* v_h_4891_, lean_object* v_handler_4892_, lean_object* v_a_4893_, uint8_t v___x_4894_, lean_object* v___f_4895_, lean_object* v_x_4896_){
_start:
{
if (lean_obj_tag(v_x_4896_) == 0)
{
lean_object* v___x_4898_; 
lean_dec_ref(v___f_4895_);
lean_dec(v_handler_4892_);
lean_dec_ref(v_h_4891_);
v___x_4898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4898_, 0, v_x_4896_);
return v___x_4898_;
}
else
{
lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; 
lean_dec_ref_known(v_x_4896_, 1);
v___x_4899_ = lean_unsigned_to_nat(0u);
v___x_4900_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_reportWriteFailure___redArg(v_h_4891_, v_handler_4892_, v_a_4893_);
v___x_4901_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4899_, v___x_4894_, v___x_4900_, v___f_4895_);
return v___x_4901_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14___boxed(lean_object* v_h_4902_, lean_object* v_handler_4903_, lean_object* v_a_4904_, lean_object* v___x_4905_, lean_object* v___f_4906_, lean_object* v_x_4907_, lean_object* v___y_4908_){
_start:
{
uint8_t v___x_8238__boxed_4909_; lean_object* v_res_4910_; 
v___x_8238__boxed_4909_ = lean_unbox(v___x_4905_);
v_res_4910_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14(v_h_4902_, v_handler_4903_, v_a_4904_, v___x_8238__boxed_4909_, v___f_4906_, v_x_4907_);
lean_dec_ref(v_a_4904_);
return v_res_4910_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15(lean_object* v_a_4911_, uint8_t v___x_4912_, lean_object* v___f_4913_, lean_object* v_____r_4914_){
_start:
{
lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; 
v___x_4916_ = lean_unsigned_to_nat(0u);
v___x_4917_ = l_Std_Http_Internal_Outbox_awaitIdle___redArg(v_a_4911_);
v___x_4918_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4916_, v___x_4912_, v___x_4917_, v___f_4913_);
return v___x_4918_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed(lean_object* v_a_4919_, lean_object* v___x_4920_, lean_object* v___f_4921_, lean_object* v_____r_4922_, lean_object* v___y_4923_){
_start:
{
uint8_t v___x_8263__boxed_4924_; lean_object* v_res_4925_; 
v___x_8263__boxed_4924_ = lean_unbox(v___x_4920_);
v_res_4925_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15(v_a_4919_, v___x_8263__boxed_4924_, v___f_4921_, v_____r_4922_);
lean_dec_ref(v_a_4919_);
return v_res_4925_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16(lean_object* v___f_4926_, lean_object* v_x_4927_){
_start:
{
if (lean_obj_tag(v_x_4927_) == 0)
{
lean_object* v___x_4929_; 
lean_dec_ref(v___f_4926_);
v___x_4929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4929_, 0, v_x_4927_);
return v___x_4929_;
}
else
{
lean_object* v_a_4930_; lean_object* v___x_4931_; 
v_a_4930_ = lean_ctor_get(v_x_4927_, 0);
lean_inc(v_a_4930_);
lean_dec_ref_known(v_x_4927_, 1);
v___x_4931_ = lean_apply_2(v___f_4926_, v_a_4930_, lean_box(0));
return v___x_4931_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed(lean_object* v___f_4932_, lean_object* v_x_4933_, lean_object* v___y_4934_){
_start:
{
lean_object* v_res_4935_; 
v_res_4935_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16(v___f_4932_, v_x_4933_);
return v_res_4935_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17(lean_object* v_close_4936_, lean_object* v_val_4937_, uint8_t v___x_4938_, lean_object* v___f_4939_, lean_object* v___f_4940_, lean_object* v_x_4941_){
_start:
{
if (lean_obj_tag(v_x_4941_) == 0)
{
lean_object* v_a_4943_; lean_object* v___x_4945_; uint8_t v_isShared_4946_; uint8_t v_isSharedCheck_4951_; 
lean_dec_ref(v___f_4940_);
lean_dec_ref(v___f_4939_);
lean_dec(v_val_4937_);
lean_dec_ref(v_close_4936_);
v_a_4943_ = lean_ctor_get(v_x_4941_, 0);
v_isSharedCheck_4951_ = !lean_is_exclusive(v_x_4941_);
if (v_isSharedCheck_4951_ == 0)
{
v___x_4945_ = v_x_4941_;
v_isShared_4946_ = v_isSharedCheck_4951_;
goto v_resetjp_4944_;
}
else
{
lean_inc(v_a_4943_);
lean_dec(v_x_4941_);
v___x_4945_ = lean_box(0);
v_isShared_4946_ = v_isSharedCheck_4951_;
goto v_resetjp_4944_;
}
v_resetjp_4944_:
{
lean_object* v___x_4948_; 
if (v_isShared_4946_ == 0)
{
v___x_4948_ = v___x_4945_;
goto v_reusejp_4947_;
}
else
{
lean_object* v_reuseFailAlloc_4950_; 
v_reuseFailAlloc_4950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4950_, 0, v_a_4943_);
v___x_4948_ = v_reuseFailAlloc_4950_;
goto v_reusejp_4947_;
}
v_reusejp_4947_:
{
lean_object* v___x_4949_; 
v___x_4949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4949_, 0, v___x_4948_);
return v___x_4949_;
}
}
}
else
{
lean_object* v_a_4952_; uint8_t v___x_4953_; 
v_a_4952_ = lean_ctor_get(v_x_4941_, 0);
lean_inc(v_a_4952_);
lean_dec_ref_known(v_x_4941_, 1);
v___x_4953_ = lean_unbox(v_a_4952_);
lean_dec(v_a_4952_);
if (v___x_4953_ == 0)
{
lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; 
lean_dec_ref(v___f_4940_);
v___x_4954_ = lean_unsigned_to_nat(0u);
v___x_4955_ = lean_apply_2(v_close_4936_, v_val_4937_, lean_box(0));
v___x_4956_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4954_, v___x_4938_, v___x_4955_, v___f_4939_);
return v___x_4956_;
}
else
{
lean_object* v___x_4957_; lean_object* v___x_4958_; 
lean_dec_ref(v___f_4939_);
lean_dec(v_val_4937_);
lean_dec_ref(v_close_4936_);
v___x_4957_ = lean_box(0);
v___x_4958_ = lean_apply_2(v___f_4940_, v___x_4957_, lean_box(0));
return v___x_4958_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17___boxed(lean_object* v_close_4959_, lean_object* v_val_4960_, lean_object* v___x_4961_, lean_object* v___f_4962_, lean_object* v___f_4963_, lean_object* v_x_4964_, lean_object* v___y_4965_){
_start:
{
uint8_t v___x_8300__boxed_4966_; lean_object* v_res_4967_; 
v___x_8300__boxed_4966_ = lean_unbox(v___x_4961_);
v_res_4967_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17(v_close_4959_, v_val_4960_, v___x_8300__boxed_4966_, v___f_4962_, v___f_4963_, v_x_4964_);
return v_res_4967_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18(lean_object* v_respStream_4968_, lean_object* v_responseBodyInstance_4969_, uint8_t v___x_4970_, lean_object* v___f_4971_, lean_object* v___f_4972_, lean_object* v_____r_4973_){
_start:
{
if (lean_obj_tag(v_respStream_4968_) == 1)
{
lean_object* v_val_4975_; lean_object* v_close_4976_; lean_object* v_isClosed_4977_; lean_object* v___x_4978_; lean_object* v___f_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; 
v_val_4975_ = lean_ctor_get(v_respStream_4968_, 0);
lean_inc_n(v_val_4975_, 2);
lean_dec_ref_known(v_respStream_4968_, 1);
v_close_4976_ = lean_ctor_get(v_responseBodyInstance_4969_, 1);
lean_inc_ref(v_close_4976_);
v_isClosed_4977_ = lean_ctor_get(v_responseBodyInstance_4969_, 2);
lean_inc_ref(v_isClosed_4977_);
lean_dec_ref(v_responseBodyInstance_4969_);
v___x_4978_ = lean_box(v___x_4970_);
v___f_4979_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__17___boxed), 7, 5);
lean_closure_set(v___f_4979_, 0, v_close_4976_);
lean_closure_set(v___f_4979_, 1, v_val_4975_);
lean_closure_set(v___f_4979_, 2, v___x_4978_);
lean_closure_set(v___f_4979_, 3, v___f_4971_);
lean_closure_set(v___f_4979_, 4, v___f_4972_);
v___x_4980_ = lean_unsigned_to_nat(0u);
v___x_4981_ = lean_apply_2(v_isClosed_4977_, v_val_4975_, lean_box(0));
v___x_4982_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_4980_, v___x_4970_, v___x_4981_, v___f_4979_);
return v___x_4982_;
}
else
{
lean_object* v___x_4983_; lean_object* v___x_4984_; 
lean_dec_ref(v___f_4971_);
lean_dec_ref(v_responseBodyInstance_4969_);
lean_dec(v_respStream_4968_);
v___x_4983_ = lean_box(0);
v___x_4984_ = lean_apply_2(v___f_4972_, v___x_4983_, lean_box(0));
return v___x_4984_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18___boxed(lean_object* v_respStream_4985_, lean_object* v_responseBodyInstance_4986_, lean_object* v___x_4987_, lean_object* v___f_4988_, lean_object* v___f_4989_, lean_object* v_____r_4990_, lean_object* v___y_4991_){
_start:
{
uint8_t v___x_8349__boxed_4992_; lean_object* v_res_4993_; 
v___x_8349__boxed_4992_ = lean_unbox(v___x_4987_);
v_res_4993_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18(v_respStream_4985_, v_responseBodyInstance_4986_, v___x_8349__boxed_4992_, v___f_4988_, v___f_4989_, v_____r_4990_);
return v_res_4993_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20(lean_object* v_requestStream_4994_, uint8_t v___x_4995_, lean_object* v___f_4996_, lean_object* v___f_4997_, lean_object* v_x_4998_){
_start:
{
if (lean_obj_tag(v_x_4998_) == 0)
{
lean_object* v_a_5000_; lean_object* v___x_5002_; uint8_t v_isShared_5003_; uint8_t v_isSharedCheck_5008_; 
lean_dec_ref(v___f_4997_);
lean_dec_ref(v___f_4996_);
lean_dec_ref(v_requestStream_4994_);
v_a_5000_ = lean_ctor_get(v_x_4998_, 0);
v_isSharedCheck_5008_ = !lean_is_exclusive(v_x_4998_);
if (v_isSharedCheck_5008_ == 0)
{
v___x_5002_ = v_x_4998_;
v_isShared_5003_ = v_isSharedCheck_5008_;
goto v_resetjp_5001_;
}
else
{
lean_inc(v_a_5000_);
lean_dec(v_x_4998_);
v___x_5002_ = lean_box(0);
v_isShared_5003_ = v_isSharedCheck_5008_;
goto v_resetjp_5001_;
}
v_resetjp_5001_:
{
lean_object* v___x_5005_; 
if (v_isShared_5003_ == 0)
{
v___x_5005_ = v___x_5002_;
goto v_reusejp_5004_;
}
else
{
lean_object* v_reuseFailAlloc_5007_; 
v_reuseFailAlloc_5007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5007_, 0, v_a_5000_);
v___x_5005_ = v_reuseFailAlloc_5007_;
goto v_reusejp_5004_;
}
v_reusejp_5004_:
{
lean_object* v___x_5006_; 
v___x_5006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5006_, 0, v___x_5005_);
return v___x_5006_;
}
}
}
else
{
lean_object* v_a_5009_; uint8_t v___x_5010_; 
v_a_5009_ = lean_ctor_get(v_x_4998_, 0);
lean_inc(v_a_5009_);
lean_dec_ref_known(v_x_4998_, 1);
v___x_5010_ = lean_unbox(v_a_5009_);
lean_dec(v_a_5009_);
if (v___x_5010_ == 0)
{
lean_object* v___x_5011_; lean_object* v___x_5012_; lean_object* v___x_5013_; 
lean_dec_ref(v___f_4997_);
v___x_5011_ = lean_unsigned_to_nat(0u);
v___x_5012_ = l_Std_Http_Body_Stream_close(v_requestStream_4994_);
v___x_5013_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5011_, v___x_4995_, v___x_5012_, v___f_4996_);
return v___x_5013_;
}
else
{
lean_object* v___x_5014_; lean_object* v___x_5015_; 
lean_dec_ref(v___f_4996_);
lean_dec_ref(v_requestStream_4994_);
v___x_5014_ = lean_box(0);
v___x_5015_ = lean_apply_2(v___f_4997_, v___x_5014_, lean_box(0));
return v___x_5015_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20___boxed(lean_object* v_requestStream_5016_, lean_object* v___x_5017_, lean_object* v___f_5018_, lean_object* v___f_5019_, lean_object* v_x_5020_, lean_object* v___y_5021_){
_start:
{
uint8_t v___x_8380__boxed_5022_; lean_object* v_res_5023_; 
v___x_8380__boxed_5022_ = lean_unbox(v___x_5017_);
v_res_5023_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20(v_requestStream_5016_, v___x_8380__boxed_5022_, v___f_5018_, v___f_5019_, v_x_5020_);
return v_res_5023_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19(lean_object* v_responseBodyInstance_5024_, uint8_t v___x_5025_, lean_object* v___f_5026_, lean_object* v___f_5027_, lean_object* v___f_5028_, lean_object* v_x_5029_){
_start:
{
if (lean_obj_tag(v_x_5029_) == 0)
{
lean_object* v_a_5031_; lean_object* v___x_5033_; uint8_t v_isShared_5034_; uint8_t v_isSharedCheck_5039_; 
lean_dec_ref(v___f_5028_);
lean_dec_ref(v___f_5027_);
lean_dec_ref(v___f_5026_);
lean_dec_ref(v_responseBodyInstance_5024_);
v_a_5031_ = lean_ctor_get(v_x_5029_, 0);
v_isSharedCheck_5039_ = !lean_is_exclusive(v_x_5029_);
if (v_isSharedCheck_5039_ == 0)
{
v___x_5033_ = v_x_5029_;
v_isShared_5034_ = v_isSharedCheck_5039_;
goto v_resetjp_5032_;
}
else
{
lean_inc(v_a_5031_);
lean_dec(v_x_5029_);
v___x_5033_ = lean_box(0);
v_isShared_5034_ = v_isSharedCheck_5039_;
goto v_resetjp_5032_;
}
v_resetjp_5032_:
{
lean_object* v___x_5036_; 
if (v_isShared_5034_ == 0)
{
v___x_5036_ = v___x_5033_;
goto v_reusejp_5035_;
}
else
{
lean_object* v_reuseFailAlloc_5038_; 
v_reuseFailAlloc_5038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5038_, 0, v_a_5031_);
v___x_5036_ = v_reuseFailAlloc_5038_;
goto v_reusejp_5035_;
}
v_reusejp_5035_:
{
lean_object* v___x_5037_; 
v___x_5037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5037_, 0, v___x_5036_);
return v___x_5037_;
}
}
}
else
{
lean_object* v_a_5040_; lean_object* v_requestStream_5041_; lean_object* v_respStream_5042_; lean_object* v___x_5043_; lean_object* v___f_5044_; lean_object* v___f_5045_; lean_object* v___x_5046_; lean_object* v___f_5047_; lean_object* v___x_5048_; lean_object* v___x_5049_; lean_object* v___f_5050_; lean_object* v___f_5051_; lean_object* v___x_5052_; lean_object* v___x_5053_; lean_object* v___x_7258__overap_5054_; lean_object* v___x_5055_; lean_object* v___x_5056_; 
v_a_5040_ = lean_ctor_get(v_x_5029_, 0);
lean_inc(v_a_5040_);
lean_dec_ref_known(v_x_5029_, 1);
v_requestStream_5041_ = lean_ctor_get(v_a_5040_, 1);
lean_inc_ref_n(v_requestStream_5041_, 2);
v_respStream_5042_ = lean_ctor_get(v_a_5040_, 6);
lean_inc(v_respStream_5042_);
lean_dec(v_a_5040_);
v___x_5043_ = lean_box(v___x_5025_);
v___f_5044_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__18___boxed), 7, 5);
lean_closure_set(v___f_5044_, 0, v_respStream_5042_);
lean_closure_set(v___f_5044_, 1, v_responseBodyInstance_5024_);
lean_closure_set(v___f_5044_, 2, v___x_5043_);
lean_closure_set(v___f_5044_, 3, v___f_5026_);
lean_closure_set(v___f_5044_, 4, v___f_5027_);
lean_inc_ref(v___f_5044_);
v___f_5045_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed), 3, 1);
lean_closure_set(v___f_5045_, 0, v___f_5044_);
v___x_5046_ = lean_box(v___x_5025_);
v___f_5047_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__20___boxed), 6, 4);
lean_closure_set(v___f_5047_, 0, v_requestStream_5041_);
lean_closure_set(v___f_5047_, 1, v___x_5046_);
lean_closure_set(v___f_5047_, 2, v___f_5045_);
lean_closure_set(v___f_5047_, 3, v___f_5044_);
v___x_5048_ = lean_unsigned_to_nat(0u);
v___x_5049_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__0);
v___f_5050_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__5);
v___f_5051_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__6));
v___x_5052_ = lean_obj_once(&l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11, &l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11_once, _init_l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___lam__6___closed__11);
v___x_5053_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_5053_, 0, lean_box(0));
lean_closure_set(v___x_5053_, 1, lean_box(0));
lean_closure_set(v___x_5053_, 2, v___x_5049_);
lean_closure_set(v___x_5053_, 3, lean_box(0));
lean_closure_set(v___x_5053_, 4, lean_box(0));
lean_closure_set(v___x_5053_, 5, v___x_5052_);
lean_closure_set(v___x_5053_, 6, v___f_5028_);
v___x_7258__overap_5054_ = l_Std_Mutex_atomically___redArg(v___x_5049_, v___f_5050_, v___f_5051_, v_requestStream_5041_, v___x_5053_);
v___x_5055_ = lean_apply_1(v___x_7258__overap_5054_, lean_box(0));
v___x_5056_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5048_, v___x_5025_, v___x_5055_, v___f_5047_);
return v___x_5056_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19___boxed(lean_object* v_responseBodyInstance_5057_, lean_object* v___x_5058_, lean_object* v___f_5059_, lean_object* v___f_5060_, lean_object* v___f_5061_, lean_object* v_x_5062_, lean_object* v___y_5063_){
_start:
{
uint8_t v___x_8450__boxed_5064_; lean_object* v_res_5065_; 
v___x_8450__boxed_5064_ = lean_unbox(v___x_5058_);
v_res_5065_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19(v_responseBodyInstance_5057_, v___x_8450__boxed_5064_, v___f_5059_, v___f_5060_, v___f_5061_, v_x_5062_);
return v_res_5065_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__21(lean_object* v_a_5066_, lean_object* v_x_5067_){
_start:
{
if (lean_obj_tag(v_x_5067_) == 0)
{
lean_object* v_a_5069_; lean_object* v___x_5071_; uint8_t v_isShared_5072_; uint8_t v_isSharedCheck_5077_; 
v_a_5069_ = lean_ctor_get(v_x_5067_, 0);
v_isSharedCheck_5077_ = !lean_is_exclusive(v_x_5067_);
if (v_isSharedCheck_5077_ == 0)
{
v___x_5071_ = v_x_5067_;
v_isShared_5072_ = v_isSharedCheck_5077_;
goto v_resetjp_5070_;
}
else
{
lean_inc(v_a_5069_);
lean_dec(v_x_5067_);
v___x_5071_ = lean_box(0);
v_isShared_5072_ = v_isSharedCheck_5077_;
goto v_resetjp_5070_;
}
v_resetjp_5070_:
{
lean_object* v___x_5074_; 
if (v_isShared_5072_ == 0)
{
v___x_5074_ = v___x_5071_;
goto v_reusejp_5073_;
}
else
{
lean_object* v_reuseFailAlloc_5076_; 
v_reuseFailAlloc_5076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5076_, 0, v_a_5069_);
v___x_5074_ = v_reuseFailAlloc_5076_;
goto v_reusejp_5073_;
}
v_reusejp_5073_:
{
lean_object* v___x_5075_; 
v___x_5075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5075_, 0, v___x_5074_);
return v___x_5075_;
}
}
}
else
{
lean_object* v___x_5078_; lean_object* v___x_5079_; 
lean_dec_ref_known(v_x_5067_, 1);
v___x_5078_ = l_IO_Promise_result_x21___redArg(v_a_5066_);
v___x_5079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5079_, 0, v___x_5078_);
return v___x_5079_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__21___boxed(lean_object* v_a_5080_, lean_object* v_x_5081_, lean_object* v___y_5082_){
_start:
{
lean_object* v_res_5083_; 
v_res_5083_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__21(v_a_5080_, v_x_5081_);
lean_dec(v_a_5080_);
return v_res_5083_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__22(lean_object* v___f_5084_, lean_object* v___x_5085_, lean_object* v___x_5086_, uint8_t v___x_5087_, lean_object* v_x_5088_){
_start:
{
if (lean_obj_tag(v_x_5088_) == 0)
{
lean_object* v_a_5090_; lean_object* v___x_5092_; uint8_t v_isShared_5093_; uint8_t v_isSharedCheck_5098_; 
lean_dec_ref(v___x_5086_);
lean_dec(v___x_5085_);
lean_dec_ref(v___f_5084_);
v_a_5090_ = lean_ctor_get(v_x_5088_, 0);
v_isSharedCheck_5098_ = !lean_is_exclusive(v_x_5088_);
if (v_isSharedCheck_5098_ == 0)
{
v___x_5092_ = v_x_5088_;
v_isShared_5093_ = v_isSharedCheck_5098_;
goto v_resetjp_5091_;
}
else
{
lean_inc(v_a_5090_);
lean_dec(v_x_5088_);
v___x_5092_ = lean_box(0);
v_isShared_5093_ = v_isSharedCheck_5098_;
goto v_resetjp_5091_;
}
v_resetjp_5091_:
{
lean_object* v___x_5095_; 
if (v_isShared_5093_ == 0)
{
v___x_5095_ = v___x_5092_;
goto v_reusejp_5094_;
}
else
{
lean_object* v_reuseFailAlloc_5097_; 
v_reuseFailAlloc_5097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5097_, 0, v_a_5090_);
v___x_5095_ = v_reuseFailAlloc_5097_;
goto v_reusejp_5094_;
}
v_reusejp_5094_:
{
lean_object* v___x_5096_; 
v___x_5096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5096_, 0, v___x_5095_);
return v___x_5096_;
}
}
}
else
{
lean_object* v_a_5099_; lean_object* v___x_5101_; uint8_t v_isShared_5102_; uint8_t v_isSharedCheck_5110_; 
v_a_5099_ = lean_ctor_get(v_x_5088_, 0);
v_isSharedCheck_5110_ = !lean_is_exclusive(v_x_5088_);
if (v_isSharedCheck_5110_ == 0)
{
v___x_5101_ = v_x_5088_;
v_isShared_5102_ = v_isSharedCheck_5110_;
goto v_resetjp_5100_;
}
else
{
lean_inc(v_a_5099_);
lean_dec(v_x_5088_);
v___x_5101_ = lean_box(0);
v_isShared_5102_ = v_isSharedCheck_5110_;
goto v_resetjp_5100_;
}
v_resetjp_5100_:
{
lean_object* v___f_5103_; lean_object* v___x_5104_; lean_object* v___x_5106_; 
lean_inc(v_a_5099_);
v___f_5103_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__21___boxed), 3, 1);
lean_closure_set(v___f_5103_, 0, v_a_5099_);
lean_inc(v___x_5085_);
v___x_5104_ = l___private_Std_Async_Basic_0__Std_Async_EAsync_forIn_loop(lean_box(0), lean_box(0), v___f_5084_, v___x_5085_, v_a_5099_, v___x_5086_);
if (v_isShared_5102_ == 0)
{
lean_ctor_set(v___x_5101_, 0, v___x_5104_);
v___x_5106_ = v___x_5101_;
goto v_reusejp_5105_;
}
else
{
lean_object* v_reuseFailAlloc_5109_; 
v_reuseFailAlloc_5109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5109_, 0, v___x_5104_);
v___x_5106_ = v_reuseFailAlloc_5109_;
goto v_reusejp_5105_;
}
v_reusejp_5105_:
{
lean_object* v___x_5107_; lean_object* v___x_5108_; 
v___x_5107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5107_, 0, v___x_5106_);
v___x_5108_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5085_, v___x_5087_, v___x_5107_, v___f_5103_);
return v___x_5108_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__22___boxed(lean_object* v___f_5111_, lean_object* v___x_5112_, lean_object* v___x_5113_, lean_object* v___x_5114_, lean_object* v_x_5115_, lean_object* v___y_5116_){
_start:
{
uint8_t v___x_8557__boxed_5117_; lean_object* v_res_5118_; 
v___x_8557__boxed_5117_ = lean_unbox(v___x_5114_);
v_res_5118_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__22(v___f_5111_, v___x_5112_, v___x_5113_, v___x_8557__boxed_5117_, v_x_5115_);
return v_res_5118_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__23(uint8_t v___x_5119_, lean_object* v_h_5120_, lean_object* v_responseBodyInstance_5121_, lean_object* v_handler_5122_, lean_object* v_config_5123_, lean_object* v___f_5124_, lean_object* v_keepAliveTimeout_5125_, lean_object* v_inst_5126_, lean_object* v_socket_5127_, lean_object* v_connectionContext_5128_, lean_object* v_extensions_5129_, lean_object* v___f_5130_, lean_object* v___f_5131_, lean_object* v___f_5132_, lean_object* v___x_5133_, lean_object* v_x_5134_){
_start:
{
if (lean_obj_tag(v_x_5134_) == 0)
{
lean_object* v_a_5136_; lean_object* v___x_5138_; uint8_t v_isShared_5139_; uint8_t v_isSharedCheck_5144_; 
lean_dec_ref(v___x_5133_);
lean_dec_ref(v___f_5132_);
lean_dec_ref(v___f_5131_);
lean_dec_ref(v___f_5130_);
lean_dec(v_extensions_5129_);
lean_dec_ref(v_connectionContext_5128_);
lean_dec(v_socket_5127_);
lean_dec_ref(v_inst_5126_);
lean_dec(v_keepAliveTimeout_5125_);
lean_dec_ref(v___f_5124_);
lean_dec_ref(v_config_5123_);
lean_dec(v_handler_5122_);
lean_dec_ref(v_responseBodyInstance_5121_);
lean_dec_ref(v_h_5120_);
v_a_5136_ = lean_ctor_get(v_x_5134_, 0);
v_isSharedCheck_5144_ = !lean_is_exclusive(v_x_5134_);
if (v_isSharedCheck_5144_ == 0)
{
v___x_5138_ = v_x_5134_;
v_isShared_5139_ = v_isSharedCheck_5144_;
goto v_resetjp_5137_;
}
else
{
lean_inc(v_a_5136_);
lean_dec(v_x_5134_);
v___x_5138_ = lean_box(0);
v_isShared_5139_ = v_isSharedCheck_5144_;
goto v_resetjp_5137_;
}
v_resetjp_5137_:
{
lean_object* v___x_5141_; 
if (v_isShared_5139_ == 0)
{
v___x_5141_ = v___x_5138_;
goto v_reusejp_5140_;
}
else
{
lean_object* v_reuseFailAlloc_5143_; 
v_reuseFailAlloc_5143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5143_, 0, v_a_5136_);
v___x_5141_ = v_reuseFailAlloc_5143_;
goto v_reusejp_5140_;
}
v_reusejp_5140_:
{
lean_object* v___x_5142_; 
v___x_5142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5142_, 0, v___x_5141_);
return v___x_5142_;
}
}
}
else
{
lean_object* v_a_5145_; lean_object* v___x_5147_; uint8_t v_isShared_5148_; uint8_t v_isSharedCheck_5172_; 
v_a_5145_ = lean_ctor_get(v_x_5134_, 0);
v_isSharedCheck_5172_ = !lean_is_exclusive(v_x_5134_);
if (v_isSharedCheck_5172_ == 0)
{
v___x_5147_ = v_x_5134_;
v_isShared_5148_ = v_isSharedCheck_5172_;
goto v_resetjp_5146_;
}
else
{
lean_inc(v_a_5145_);
lean_dec(v_x_5134_);
v___x_5147_ = lean_box(0);
v_isShared_5148_ = v_isSharedCheck_5172_;
goto v_resetjp_5146_;
}
v_resetjp_5146_:
{
lean_object* v___x_5149_; lean_object* v___f_5150_; lean_object* v___x_5151_; lean_object* v___f_5152_; lean_object* v___x_5153_; lean_object* v___f_5154_; lean_object* v___x_5155_; lean_object* v___f_5156_; lean_object* v___x_5157_; lean_object* v___f_5158_; lean_object* v___f_5159_; lean_object* v___x_5160_; lean_object* v___f_5161_; lean_object* v___x_5162_; lean_object* v___x_5163_; lean_object* v___f_5164_; lean_object* v___x_5165_; lean_object* v___x_5167_; 
v___x_5149_ = lean_box(v___x_5119_);
lean_inc_ref_n(v_connectionContext_5128_, 2);
lean_inc_ref(v_inst_5126_);
lean_inc_n(v_a_5145_, 3);
lean_inc_ref(v_config_5123_);
lean_inc_n(v_handler_5122_, 3);
lean_inc_ref_n(v_responseBodyInstance_5121_, 2);
lean_inc_ref_n(v_h_5120_, 3);
v___f_5150_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__6___boxed), 13, 11);
lean_closure_set(v___f_5150_, 0, v___x_5149_);
lean_closure_set(v___f_5150_, 1, v_h_5120_);
lean_closure_set(v___f_5150_, 2, v_responseBodyInstance_5121_);
lean_closure_set(v___f_5150_, 3, v_handler_5122_);
lean_closure_set(v___f_5150_, 4, v_config_5123_);
lean_closure_set(v___f_5150_, 5, v___f_5124_);
lean_closure_set(v___f_5150_, 6, v_a_5145_);
lean_closure_set(v___f_5150_, 7, v_keepAliveTimeout_5125_);
lean_closure_set(v___f_5150_, 8, v_inst_5126_);
lean_closure_set(v___f_5150_, 9, v_socket_5127_);
lean_closure_set(v___f_5150_, 10, v_connectionContext_5128_);
v___x_5151_ = lean_box(v___x_5119_);
v___f_5152_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__7___boxed), 8, 6);
lean_closure_set(v___f_5152_, 0, v_h_5120_);
lean_closure_set(v___f_5152_, 1, v_handler_5122_);
lean_closure_set(v___f_5152_, 2, v_extensions_5129_);
lean_closure_set(v___f_5152_, 3, v_connectionContext_5128_);
lean_closure_set(v___f_5152_, 4, v___x_5151_);
lean_closure_set(v___f_5152_, 5, v___f_5150_);
v___x_5153_ = lean_box(v___x_5119_);
v___f_5154_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__13___boxed), 13, 10);
lean_closure_set(v___f_5154_, 0, v_h_5120_);
lean_closure_set(v___f_5154_, 1, v_responseBodyInstance_5121_);
lean_closure_set(v___f_5154_, 2, v_handler_5122_);
lean_closure_set(v___f_5154_, 3, v_config_5123_);
lean_closure_set(v___f_5154_, 4, v_connectionContext_5128_);
lean_closure_set(v___f_5154_, 5, v___x_5153_);
lean_closure_set(v___f_5154_, 6, v___f_5152_);
lean_closure_set(v___f_5154_, 7, v_a_5145_);
lean_closure_set(v___f_5154_, 8, v___f_5130_);
lean_closure_set(v___f_5154_, 9, v_inst_5126_);
v___x_5155_ = lean_box(v___x_5119_);
v___f_5156_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__14___boxed), 7, 5);
lean_closure_set(v___f_5156_, 0, v_h_5120_);
lean_closure_set(v___f_5156_, 1, v_handler_5122_);
lean_closure_set(v___f_5156_, 2, v_a_5145_);
lean_closure_set(v___f_5156_, 3, v___x_5155_);
lean_closure_set(v___f_5156_, 4, v___f_5131_);
v___x_5157_ = lean_box(v___x_5119_);
v___f_5158_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__15___boxed), 5, 3);
lean_closure_set(v___f_5158_, 0, v_a_5145_);
lean_closure_set(v___f_5158_, 1, v___x_5157_);
lean_closure_set(v___f_5158_, 2, v___f_5156_);
lean_inc_ref(v___f_5158_);
v___f_5159_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__16___boxed), 3, 1);
lean_closure_set(v___f_5159_, 0, v___f_5158_);
v___x_5160_ = lean_box(v___x_5119_);
v___f_5161_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__19___boxed), 7, 5);
lean_closure_set(v___f_5161_, 0, v_responseBodyInstance_5121_);
lean_closure_set(v___f_5161_, 1, v___x_5160_);
lean_closure_set(v___f_5161_, 2, v___f_5159_);
lean_closure_set(v___f_5161_, 3, v___f_5158_);
lean_closure_set(v___f_5161_, 4, v___f_5132_);
v___x_5162_ = lean_unsigned_to_nat(0u);
v___x_5163_ = lean_box(v___x_5119_);
v___f_5164_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__22___boxed), 6, 4);
lean_closure_set(v___f_5164_, 0, v___f_5154_);
lean_closure_set(v___f_5164_, 1, v___x_5162_);
lean_closure_set(v___f_5164_, 2, v___x_5133_);
lean_closure_set(v___f_5164_, 3, v___x_5163_);
v___x_5165_ = lean_io_promise_new();
if (v_isShared_5148_ == 0)
{
lean_ctor_set(v___x_5147_, 0, v___x_5165_);
v___x_5167_ = v___x_5147_;
goto v_reusejp_5166_;
}
else
{
lean_object* v_reuseFailAlloc_5171_; 
v_reuseFailAlloc_5171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5171_, 0, v___x_5165_);
v___x_5167_ = v_reuseFailAlloc_5171_;
goto v_reusejp_5166_;
}
v_reusejp_5166_:
{
lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; 
v___x_5168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5168_, 0, v___x_5167_);
v___x_5169_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5162_, v___x_5119_, v___x_5168_, v___f_5164_);
v___x_5170_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5162_, v___x_5119_, v___x_5169_, v___f_5161_);
return v___x_5170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__23___boxed(lean_object** _args){
lean_object* v___x_5173_ = _args[0];
lean_object* v_h_5174_ = _args[1];
lean_object* v_responseBodyInstance_5175_ = _args[2];
lean_object* v_handler_5176_ = _args[3];
lean_object* v_config_5177_ = _args[4];
lean_object* v___f_5178_ = _args[5];
lean_object* v_keepAliveTimeout_5179_ = _args[6];
lean_object* v_inst_5180_ = _args[7];
lean_object* v_socket_5181_ = _args[8];
lean_object* v_connectionContext_5182_ = _args[9];
lean_object* v_extensions_5183_ = _args[10];
lean_object* v___f_5184_ = _args[11];
lean_object* v___f_5185_ = _args[12];
lean_object* v___f_5186_ = _args[13];
lean_object* v___x_5187_ = _args[14];
lean_object* v_x_5188_ = _args[15];
lean_object* v___y_5189_ = _args[16];
_start:
{
uint8_t v___x_8614__boxed_5190_; lean_object* v_res_5191_; 
v___x_8614__boxed_5190_ = lean_unbox(v___x_5173_);
v_res_5191_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__23(v___x_8614__boxed_5190_, v_h_5174_, v_responseBodyInstance_5175_, v_handler_5176_, v_config_5177_, v___f_5178_, v_keepAliveTimeout_5179_, v_inst_5180_, v_socket_5181_, v_connectionContext_5182_, v_extensions_5183_, v___f_5184_, v___f_5185_, v___f_5186_, v___x_5187_, v_x_5188_);
return v_res_5191_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__24(lean_object* v_config_5192_, lean_object* v_machine_5193_, lean_object* v_a_5194_, lean_object* v___x_5195_, lean_object* v_h_5196_, lean_object* v_responseBodyInstance_5197_, lean_object* v_handler_5198_, lean_object* v___f_5199_, lean_object* v_inst_5200_, lean_object* v_socket_5201_, lean_object* v_connectionContext_5202_, lean_object* v_extensions_5203_, lean_object* v___f_5204_, lean_object* v___f_5205_, lean_object* v___f_5206_, lean_object* v_x_5207_){
_start:
{
if (lean_obj_tag(v_x_5207_) == 0)
{
lean_object* v_a_5209_; lean_object* v___x_5211_; uint8_t v_isShared_5212_; uint8_t v_isSharedCheck_5217_; 
lean_dec_ref(v___f_5206_);
lean_dec_ref(v___f_5205_);
lean_dec_ref(v___f_5204_);
lean_dec(v_extensions_5203_);
lean_dec_ref(v_connectionContext_5202_);
lean_dec(v_socket_5201_);
lean_dec_ref(v_inst_5200_);
lean_dec_ref(v___f_5199_);
lean_dec(v_handler_5198_);
lean_dec_ref(v_responseBodyInstance_5197_);
lean_dec_ref(v_h_5196_);
lean_dec(v___x_5195_);
lean_dec_ref(v_a_5194_);
lean_dec_ref(v_machine_5193_);
lean_dec_ref(v_config_5192_);
v_a_5209_ = lean_ctor_get(v_x_5207_, 0);
v_isSharedCheck_5217_ = !lean_is_exclusive(v_x_5207_);
if (v_isSharedCheck_5217_ == 0)
{
v___x_5211_ = v_x_5207_;
v_isShared_5212_ = v_isSharedCheck_5217_;
goto v_resetjp_5210_;
}
else
{
lean_inc(v_a_5209_);
lean_dec(v_x_5207_);
v___x_5211_ = lean_box(0);
v_isShared_5212_ = v_isSharedCheck_5217_;
goto v_resetjp_5210_;
}
v_resetjp_5210_:
{
lean_object* v___x_5214_; 
if (v_isShared_5212_ == 0)
{
v___x_5214_ = v___x_5211_;
goto v_reusejp_5213_;
}
else
{
lean_object* v_reuseFailAlloc_5216_; 
v_reuseFailAlloc_5216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5216_, 0, v_a_5209_);
v___x_5214_ = v_reuseFailAlloc_5216_;
goto v_reusejp_5213_;
}
v_reusejp_5213_:
{
lean_object* v___x_5215_; 
v___x_5215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5215_, 0, v___x_5214_);
return v___x_5215_;
}
}
}
else
{
lean_object* v_a_5218_; lean_object* v___x_5220_; uint8_t v_isShared_5221_; uint8_t v_isSharedCheck_5236_; 
v_a_5218_ = lean_ctor_get(v_x_5207_, 0);
v_isSharedCheck_5236_ = !lean_is_exclusive(v_x_5207_);
if (v_isSharedCheck_5236_ == 0)
{
v___x_5220_ = v_x_5207_;
v_isShared_5221_ = v_isSharedCheck_5236_;
goto v_resetjp_5219_;
}
else
{
lean_inc(v_a_5218_);
lean_dec(v_x_5207_);
v___x_5220_ = lean_box(0);
v_isShared_5221_ = v_isSharedCheck_5236_;
goto v_resetjp_5219_;
}
v_resetjp_5219_:
{
lean_object* v_keepAliveTimeout_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; uint8_t v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___f_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5232_; 
v_keepAliveTimeout_5222_ = lean_ctor_get(v_config_5192_, 5);
lean_inc_n(v_keepAliveTimeout_5222_, 3);
v___x_5223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5223_, 0, v_keepAliveTimeout_5222_);
v___x_5224_ = lean_box(0);
v___x_5225_ = 0;
v___x_5226_ = lean_alloc_ctor(0, 10, 2);
lean_ctor_set(v___x_5226_, 0, v_machine_5193_);
lean_ctor_set(v___x_5226_, 1, v_a_5194_);
lean_ctor_set(v___x_5226_, 2, v___x_5223_);
lean_ctor_set(v___x_5226_, 3, v_keepAliveTimeout_5222_);
lean_ctor_set(v___x_5226_, 4, v___x_5224_);
lean_ctor_set(v___x_5226_, 5, v_a_5218_);
lean_ctor_set(v___x_5226_, 6, v___x_5224_);
lean_ctor_set(v___x_5226_, 7, v___x_5195_);
lean_ctor_set(v___x_5226_, 8, v___x_5224_);
lean_ctor_set(v___x_5226_, 9, v___x_5224_);
lean_ctor_set_uint8(v___x_5226_, sizeof(void*)*10, v___x_5225_);
lean_ctor_set_uint8(v___x_5226_, sizeof(void*)*10 + 1, v___x_5225_);
v___x_5227_ = lean_box(v___x_5225_);
lean_inc(v_socket_5201_);
v___f_5228_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__23___boxed), 17, 15);
lean_closure_set(v___f_5228_, 0, v___x_5227_);
lean_closure_set(v___f_5228_, 1, v_h_5196_);
lean_closure_set(v___f_5228_, 2, v_responseBodyInstance_5197_);
lean_closure_set(v___f_5228_, 3, v_handler_5198_);
lean_closure_set(v___f_5228_, 4, v_config_5192_);
lean_closure_set(v___f_5228_, 5, v___f_5199_);
lean_closure_set(v___f_5228_, 6, v_keepAliveTimeout_5222_);
lean_closure_set(v___f_5228_, 7, v_inst_5200_);
lean_closure_set(v___f_5228_, 8, v_socket_5201_);
lean_closure_set(v___f_5228_, 9, v_connectionContext_5202_);
lean_closure_set(v___f_5228_, 10, v_extensions_5203_);
lean_closure_set(v___f_5228_, 11, v___f_5204_);
lean_closure_set(v___f_5228_, 12, v___f_5205_);
lean_closure_set(v___f_5228_, 13, v___f_5206_);
lean_closure_set(v___f_5228_, 14, v___x_5226_);
v___x_5229_ = lean_unsigned_to_nat(0u);
v___x_5230_ = l_Std_Http_Internal_Outbox_new___redArg(v_socket_5201_);
if (v_isShared_5221_ == 0)
{
lean_ctor_set(v___x_5220_, 0, v___x_5230_);
v___x_5232_ = v___x_5220_;
goto v_reusejp_5231_;
}
else
{
lean_object* v_reuseFailAlloc_5235_; 
v_reuseFailAlloc_5235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5235_, 0, v___x_5230_);
v___x_5232_ = v_reuseFailAlloc_5235_;
goto v_reusejp_5231_;
}
v_reusejp_5231_:
{
lean_object* v___x_5233_; lean_object* v___x_5234_; 
v___x_5233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5233_, 0, v___x_5232_);
v___x_5234_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5229_, v___x_5225_, v___x_5233_, v___f_5228_);
return v___x_5234_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__24___boxed(lean_object** _args){
lean_object* v_config_5237_ = _args[0];
lean_object* v_machine_5238_ = _args[1];
lean_object* v_a_5239_ = _args[2];
lean_object* v___x_5240_ = _args[3];
lean_object* v_h_5241_ = _args[4];
lean_object* v_responseBodyInstance_5242_ = _args[5];
lean_object* v_handler_5243_ = _args[6];
lean_object* v___f_5244_ = _args[7];
lean_object* v_inst_5245_ = _args[8];
lean_object* v_socket_5246_ = _args[9];
lean_object* v_connectionContext_5247_ = _args[10];
lean_object* v_extensions_5248_ = _args[11];
lean_object* v___f_5249_ = _args[12];
lean_object* v___f_5250_ = _args[13];
lean_object* v___f_5251_ = _args[14];
lean_object* v_x_5252_ = _args[15];
lean_object* v___y_5253_ = _args[16];
_start:
{
lean_object* v_res_5254_; 
v_res_5254_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__24(v_config_5237_, v_machine_5238_, v_a_5239_, v___x_5240_, v_h_5241_, v_responseBodyInstance_5242_, v_handler_5243_, v___f_5244_, v_inst_5245_, v_socket_5246_, v_connectionContext_5247_, v_extensions_5248_, v___f_5249_, v___f_5250_, v___f_5251_, v_x_5252_);
return v_res_5254_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__25(lean_object* v_config_5255_, lean_object* v_machine_5256_, lean_object* v_h_5257_, lean_object* v_responseBodyInstance_5258_, lean_object* v_handler_5259_, lean_object* v___f_5260_, lean_object* v_inst_5261_, lean_object* v_socket_5262_, lean_object* v_connectionContext_5263_, lean_object* v_extensions_5264_, lean_object* v___f_5265_, lean_object* v___f_5266_, lean_object* v___f_5267_, lean_object* v_x_5268_){
_start:
{
if (lean_obj_tag(v_x_5268_) == 0)
{
lean_object* v_a_5270_; lean_object* v___x_5272_; uint8_t v_isShared_5273_; uint8_t v_isSharedCheck_5278_; 
lean_dec_ref(v___f_5267_);
lean_dec_ref(v___f_5266_);
lean_dec_ref(v___f_5265_);
lean_dec(v_extensions_5264_);
lean_dec_ref(v_connectionContext_5263_);
lean_dec(v_socket_5262_);
lean_dec_ref(v_inst_5261_);
lean_dec_ref(v___f_5260_);
lean_dec(v_handler_5259_);
lean_dec_ref(v_responseBodyInstance_5258_);
lean_dec_ref(v_h_5257_);
lean_dec_ref(v_machine_5256_);
lean_dec_ref(v_config_5255_);
v_a_5270_ = lean_ctor_get(v_x_5268_, 0);
v_isSharedCheck_5278_ = !lean_is_exclusive(v_x_5268_);
if (v_isSharedCheck_5278_ == 0)
{
v___x_5272_ = v_x_5268_;
v_isShared_5273_ = v_isSharedCheck_5278_;
goto v_resetjp_5271_;
}
else
{
lean_inc(v_a_5270_);
lean_dec(v_x_5268_);
v___x_5272_ = lean_box(0);
v_isShared_5273_ = v_isSharedCheck_5278_;
goto v_resetjp_5271_;
}
v_resetjp_5271_:
{
lean_object* v___x_5275_; 
if (v_isShared_5273_ == 0)
{
v___x_5275_ = v___x_5272_;
goto v_reusejp_5274_;
}
else
{
lean_object* v_reuseFailAlloc_5277_; 
v_reuseFailAlloc_5277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5277_, 0, v_a_5270_);
v___x_5275_ = v_reuseFailAlloc_5277_;
goto v_reusejp_5274_;
}
v_reusejp_5274_:
{
lean_object* v___x_5276_; 
v___x_5276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5276_, 0, v___x_5275_);
return v___x_5276_;
}
}
}
else
{
lean_object* v_a_5279_; lean_object* v___x_5281_; uint8_t v_isShared_5282_; uint8_t v_isSharedCheck_5293_; 
v_a_5279_ = lean_ctor_get(v_x_5268_, 0);
v_isSharedCheck_5293_ = !lean_is_exclusive(v_x_5268_);
if (v_isSharedCheck_5293_ == 0)
{
v___x_5281_ = v_x_5268_;
v_isShared_5282_ = v_isSharedCheck_5293_;
goto v_resetjp_5280_;
}
else
{
lean_inc(v_a_5279_);
lean_dec(v_x_5268_);
v___x_5281_ = lean_box(0);
v_isShared_5282_ = v_isSharedCheck_5293_;
goto v_resetjp_5280_;
}
v_resetjp_5280_:
{
lean_object* v___x_5283_; lean_object* v___f_5284_; lean_object* v___x_5285_; uint8_t v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5289_; 
v___x_5283_ = lean_box(0);
v___f_5284_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__24___boxed), 17, 15);
lean_closure_set(v___f_5284_, 0, v_config_5255_);
lean_closure_set(v___f_5284_, 1, v_machine_5256_);
lean_closure_set(v___f_5284_, 2, v_a_5279_);
lean_closure_set(v___f_5284_, 3, v___x_5283_);
lean_closure_set(v___f_5284_, 4, v_h_5257_);
lean_closure_set(v___f_5284_, 5, v_responseBodyInstance_5258_);
lean_closure_set(v___f_5284_, 6, v_handler_5259_);
lean_closure_set(v___f_5284_, 7, v___f_5260_);
lean_closure_set(v___f_5284_, 8, v_inst_5261_);
lean_closure_set(v___f_5284_, 9, v_socket_5262_);
lean_closure_set(v___f_5284_, 10, v_connectionContext_5263_);
lean_closure_set(v___f_5284_, 11, v_extensions_5264_);
lean_closure_set(v___f_5284_, 12, v___f_5265_);
lean_closure_set(v___f_5284_, 13, v___f_5266_);
lean_closure_set(v___f_5284_, 14, v___f_5267_);
v___x_5285_ = lean_unsigned_to_nat(0u);
v___x_5286_ = 0;
v___x_5287_ = l_Std_CloseableChannel_new___redArg(v___x_5283_);
if (v_isShared_5282_ == 0)
{
lean_ctor_set(v___x_5281_, 0, v___x_5287_);
v___x_5289_ = v___x_5281_;
goto v_reusejp_5288_;
}
else
{
lean_object* v_reuseFailAlloc_5292_; 
v_reuseFailAlloc_5292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5292_, 0, v___x_5287_);
v___x_5289_ = v_reuseFailAlloc_5292_;
goto v_reusejp_5288_;
}
v_reusejp_5288_:
{
lean_object* v___x_5290_; lean_object* v___x_5291_; 
v___x_5290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5290_, 0, v___x_5289_);
v___x_5291_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5285_, v___x_5286_, v___x_5290_, v___f_5284_);
return v___x_5291_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__25___boxed(lean_object* v_config_5294_, lean_object* v_machine_5295_, lean_object* v_h_5296_, lean_object* v_responseBodyInstance_5297_, lean_object* v_handler_5298_, lean_object* v___f_5299_, lean_object* v_inst_5300_, lean_object* v_socket_5301_, lean_object* v_connectionContext_5302_, lean_object* v_extensions_5303_, lean_object* v___f_5304_, lean_object* v___f_5305_, lean_object* v___f_5306_, lean_object* v_x_5307_, lean_object* v___y_5308_){
_start:
{
lean_object* v_res_5309_; 
v_res_5309_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__25(v_config_5294_, v_machine_5295_, v_h_5296_, v_responseBodyInstance_5297_, v_handler_5298_, v___f_5299_, v_inst_5300_, v_socket_5301_, v_connectionContext_5302_, v_extensions_5303_, v___f_5304_, v___f_5305_, v___f_5306_, v_x_5307_);
return v_res_5309_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(lean_object* v_inst_5312_, lean_object* v_h_5313_, lean_object* v_connection_5314_, lean_object* v_config_5315_, lean_object* v_connectionContext_5316_, lean_object* v_handler_5317_){
_start:
{
lean_object* v_responseBodyInstance_5319_; lean_object* v_socket_5320_; lean_object* v_machine_5321_; lean_object* v_extensions_5322_; lean_object* v___f_5323_; lean_object* v___f_5324_; lean_object* v___f_5325_; lean_object* v___f_5326_; lean_object* v___f_5327_; lean_object* v___x_5328_; uint8_t v___x_5329_; lean_object* v___x_5330_; lean_object* v___x_5331_; 
v_responseBodyInstance_5319_ = lean_ctor_get(v_h_5313_, 0);
lean_inc_ref(v_responseBodyInstance_5319_);
v_socket_5320_ = lean_ctor_get(v_connection_5314_, 0);
lean_inc_n(v_socket_5320_, 2);
v_machine_5321_ = lean_ctor_get(v_connection_5314_, 1);
lean_inc_ref(v_machine_5321_);
v_extensions_5322_ = lean_ctor_get(v_connection_5314_, 2);
lean_inc(v_extensions_5322_);
lean_dec_ref(v_connection_5314_);
v___f_5323_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__0));
v___f_5324_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___closed__1));
v___f_5325_ = ((lean_object*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_processH1Events___redArg___closed__0));
lean_inc_ref(v_inst_5312_);
v___f_5326_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5326_, 0, v_inst_5312_);
lean_closure_set(v___f_5326_, 1, v_socket_5320_);
v___f_5327_ = lean_alloc_closure((void*)(l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___lam__25___boxed), 15, 13);
lean_closure_set(v___f_5327_, 0, v_config_5315_);
lean_closure_set(v___f_5327_, 1, v_machine_5321_);
lean_closure_set(v___f_5327_, 2, v_h_5313_);
lean_closure_set(v___f_5327_, 3, v_responseBodyInstance_5319_);
lean_closure_set(v___f_5327_, 4, v_handler_5317_);
lean_closure_set(v___f_5327_, 5, v___f_5323_);
lean_closure_set(v___f_5327_, 6, v_inst_5312_);
lean_closure_set(v___f_5327_, 7, v_socket_5320_);
lean_closure_set(v___f_5327_, 8, v_connectionContext_5316_);
lean_closure_set(v___f_5327_, 9, v_extensions_5322_);
lean_closure_set(v___f_5327_, 10, v___f_5324_);
lean_closure_set(v___f_5327_, 11, v___f_5326_);
lean_closure_set(v___f_5327_, 12, v___f_5325_);
v___x_5328_ = lean_unsigned_to_nat(0u);
v___x_5329_ = 0;
v___x_5330_ = l_Std_Http_Body_mkStream();
v___x_5331_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5328_, v___x_5329_, v___x_5330_, v___f_5327_);
return v___x_5331_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg___boxed(lean_object* v_inst_5332_, lean_object* v_h_5333_, lean_object* v_connection_5334_, lean_object* v_config_5335_, lean_object* v_connectionContext_5336_, lean_object* v_handler_5337_, lean_object* v_a_5338_){
_start:
{
lean_object* v_res_5339_; 
v_res_5339_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_5332_, v_h_5333_, v_connection_5334_, v_config_5335_, v_connectionContext_5336_, v_handler_5337_);
return v_res_5339_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle(lean_object* v_00_u03b1_5340_, lean_object* v_00_u03c3_5341_, lean_object* v_inst_5342_, lean_object* v_h_5343_, lean_object* v_connection_5344_, lean_object* v_config_5345_, lean_object* v_connectionContext_5346_, lean_object* v_handler_5347_){
_start:
{
lean_object* v___x_5349_; 
v___x_5349_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_5342_, v_h_5343_, v_connection_5344_, v_config_5345_, v_connectionContext_5346_, v_handler_5347_);
return v___x_5349_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___boxed(lean_object* v_00_u03b1_5350_, lean_object* v_00_u03c3_5351_, lean_object* v_inst_5352_, lean_object* v_h_5353_, lean_object* v_connection_5354_, lean_object* v_config_5355_, lean_object* v_connectionContext_5356_, lean_object* v_handler_5357_, lean_object* v_a_5358_){
_start:
{
lean_object* v_res_5359_; 
v_res_5359_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle(v_00_u03b1_5350_, v_00_u03c3_5351_, v_inst_5352_, v_h_5353_, v_connection_5354_, v_config_5355_, v_connectionContext_5356_, v_handler_5357_);
return v_res_5359_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0(void){
_start:
{
uint8_t v___x_5360_; lean_object* v___x_5361_; 
v___x_5360_ = 0;
v___x_5361_ = l_Std_Http_Protocol_H1_instEmptyCollectionHead(v___x_5360_);
return v___x_5361_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5362_; lean_object* v___x_5363_; 
v___x_5362_ = lean_unsigned_to_nat(4096u);
v___x_5363_ = lean_mk_empty_byte_array(v___x_5362_);
return v___x_5363_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_5364_; lean_object* v___x_5365_; 
v___x_5364_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__1);
v___x_5365_ = l_ByteArray_mkIterator(v___x_5364_);
return v___x_5365_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3(void){
_start:
{
uint8_t v___x_5366_; lean_object* v___x_5367_; lean_object* v___x_5368_; lean_object* v___x_5369_; lean_object* v___x_5370_; lean_object* v___x_5371_; 
v___x_5366_ = 0;
v___x_5367_ = lean_unsigned_to_nat(0u);
v___x_5368_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__0);
v___x_5369_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__2);
v___x_5370_ = lean_box(0);
v___x_5371_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_5371_, 0, v___x_5370_);
lean_ctor_set(v___x_5371_, 1, v___x_5369_);
lean_ctor_set(v___x_5371_, 2, v___x_5368_);
lean_ctor_set(v___x_5371_, 3, v___x_5367_);
lean_ctor_set(v___x_5371_, 4, v___x_5367_);
lean_ctor_set(v___x_5371_, 5, v___x_5367_);
lean_ctor_set_uint8(v___x_5371_, sizeof(void*)*6, v___x_5366_);
return v___x_5371_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7(void){
_start:
{
uint8_t v___x_5379_; lean_object* v___x_5380_; 
v___x_5379_ = 1;
v___x_5380_ = l_Std_Http_Protocol_H1_instEmptyCollectionHead(v___x_5379_);
return v___x_5380_;
}
}
static lean_object* _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_5381_; uint8_t v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; 
v___x_5381_ = lean_unsigned_to_nat(0u);
v___x_5382_ = 0;
v___x_5383_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__7);
v___x_5384_ = lean_box(0);
v___x_5385_ = lean_box(0);
v___x_5386_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__6));
v___x_5387_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__4));
v___x_5388_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_5388_, 0, v___x_5387_);
lean_ctor_set(v___x_5388_, 1, v___x_5386_);
lean_ctor_set(v___x_5388_, 2, v___x_5385_);
lean_ctor_set(v___x_5388_, 3, v___x_5384_);
lean_ctor_set(v___x_5388_, 4, v___x_5383_);
lean_ctor_set(v___x_5388_, 5, v___x_5381_);
lean_ctor_set_uint8(v___x_5388_, sizeof(void*)*6, v___x_5382_);
lean_ctor_set_uint8(v___x_5388_, sizeof(void*)*6 + 1, v___x_5382_);
lean_ctor_set_uint8(v___x_5388_, sizeof(void*)*6 + 2, v___x_5382_);
return v___x_5388_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0(lean_object* v_config_5389_, lean_object* v_client_5390_, lean_object* v_extensions_5391_, lean_object* v_inst_5392_, lean_object* v_inst_5393_, lean_object* v_handler_5394_, lean_object* v_x_5395_){
_start:
{
if (lean_obj_tag(v_x_5395_) == 0)
{
lean_object* v_a_5397_; lean_object* v___x_5399_; uint8_t v_isShared_5400_; uint8_t v_isSharedCheck_5405_; 
lean_dec(v_handler_5394_);
lean_dec_ref(v_inst_5393_);
lean_dec_ref(v_inst_5392_);
lean_dec(v_extensions_5391_);
lean_dec(v_client_5390_);
lean_dec_ref(v_config_5389_);
v_a_5397_ = lean_ctor_get(v_x_5395_, 0);
v_isSharedCheck_5405_ = !lean_is_exclusive(v_x_5395_);
if (v_isSharedCheck_5405_ == 0)
{
v___x_5399_ = v_x_5395_;
v_isShared_5400_ = v_isSharedCheck_5405_;
goto v_resetjp_5398_;
}
else
{
lean_inc(v_a_5397_);
lean_dec(v_x_5395_);
v___x_5399_ = lean_box(0);
v_isShared_5400_ = v_isSharedCheck_5405_;
goto v_resetjp_5398_;
}
v_resetjp_5398_:
{
lean_object* v___x_5402_; 
if (v_isShared_5400_ == 0)
{
v___x_5402_ = v___x_5399_;
goto v_reusejp_5401_;
}
else
{
lean_object* v_reuseFailAlloc_5404_; 
v_reuseFailAlloc_5404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5404_, 0, v_a_5397_);
v___x_5402_ = v_reuseFailAlloc_5404_;
goto v_reusejp_5401_;
}
v_reusejp_5401_:
{
lean_object* v___x_5403_; 
v___x_5403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5403_, 0, v___x_5402_);
return v___x_5403_;
}
}
}
else
{
lean_object* v_a_5406_; uint8_t v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; uint8_t v_enableKeepAlive_5413_; lean_object* v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; 
v_a_5406_ = lean_ctor_get(v_x_5395_, 0);
lean_inc(v_a_5406_);
lean_dec_ref_known(v_x_5395_, 1);
v___x_5407_ = 0;
v___x_5408_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__3);
v___x_5409_ = ((lean_object*)(l_Std_Http_Server_serveConnection___redArg___lam__0___closed__5));
v___x_5410_ = lean_box(0);
v___x_5411_ = lean_obj_once(&l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8, &l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8_once, _init_l_Std_Http_Server_serveConnection___redArg___lam__0___closed__8);
v___x_5412_ = l_Std_Http_Config_toH1Config(v_config_5389_);
v_enableKeepAlive_5413_ = lean_ctor_get_uint8(v___x_5412_, sizeof(void*)*19);
v___x_5414_ = lean_alloc_ctor(0, 6, 2);
lean_ctor_set(v___x_5414_, 0, v___x_5408_);
lean_ctor_set(v___x_5414_, 1, v___x_5411_);
lean_ctor_set(v___x_5414_, 2, v___x_5412_);
lean_ctor_set(v___x_5414_, 3, v___x_5409_);
lean_ctor_set(v___x_5414_, 4, v___x_5410_);
lean_ctor_set(v___x_5414_, 5, v___x_5410_);
lean_ctor_set_uint8(v___x_5414_, sizeof(void*)*6, v_enableKeepAlive_5413_);
lean_ctor_set_uint8(v___x_5414_, sizeof(void*)*6 + 1, v___x_5407_);
v___x_5415_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5415_, 0, v_client_5390_);
lean_ctor_set(v___x_5415_, 1, v___x_5414_);
lean_ctor_set(v___x_5415_, 2, v_extensions_5391_);
v___x_5416_ = l___private_Std_Http_Server_Connection_0__Std_Http_Server_Connection_handle___redArg(v_inst_5392_, v_inst_5393_, v___x_5415_, v_config_5389_, v_a_5406_, v_handler_5394_);
return v___x_5416_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___lam__0___boxed(lean_object* v_config_5417_, lean_object* v_client_5418_, lean_object* v_extensions_5419_, lean_object* v_inst_5420_, lean_object* v_inst_5421_, lean_object* v_handler_5422_, lean_object* v_x_5423_, lean_object* v___y_5424_){
_start:
{
lean_object* v_res_5425_; 
v_res_5425_ = l_Std_Http_Server_serveConnection___redArg___lam__0(v_config_5417_, v_client_5418_, v_extensions_5419_, v_inst_5420_, v_inst_5421_, v_handler_5422_, v_x_5423_);
return v_res_5425_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg(lean_object* v_inst_5426_, lean_object* v_inst_5427_, lean_object* v_client_5428_, lean_object* v_handler_5429_, lean_object* v_config_5430_, lean_object* v_extensions_5431_, lean_object* v_a_5432_){
_start:
{
lean_object* v___f_5434_; lean_object* v___x_5435_; uint8_t v___x_5436_; lean_object* v___x_5437_; lean_object* v___x_5438_; lean_object* v___x_5439_; 
v___f_5434_ = lean_alloc_closure((void*)(l_Std_Http_Server_serveConnection___redArg___lam__0___boxed), 8, 6);
lean_closure_set(v___f_5434_, 0, v_config_5430_);
lean_closure_set(v___f_5434_, 1, v_client_5428_);
lean_closure_set(v___f_5434_, 2, v_extensions_5431_);
lean_closure_set(v___f_5434_, 3, v_inst_5426_);
lean_closure_set(v___f_5434_, 4, v_inst_5427_);
lean_closure_set(v___f_5434_, 5, v_handler_5429_);
v___x_5435_ = lean_unsigned_to_nat(0u);
v___x_5436_ = 0;
lean_inc_ref(v_a_5432_);
v___x_5437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5437_, 0, v_a_5432_);
v___x_5438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5438_, 0, v___x_5437_);
v___x_5439_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_5435_, v___x_5436_, v___x_5438_, v___f_5434_);
return v___x_5439_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___redArg___boxed(lean_object* v_inst_5440_, lean_object* v_inst_5441_, lean_object* v_client_5442_, lean_object* v_handler_5443_, lean_object* v_config_5444_, lean_object* v_extensions_5445_, lean_object* v_a_5446_, lean_object* v_a_5447_){
_start:
{
lean_object* v_res_5448_; 
v_res_5448_ = l_Std_Http_Server_serveConnection___redArg(v_inst_5440_, v_inst_5441_, v_client_5442_, v_handler_5443_, v_config_5444_, v_extensions_5445_, v_a_5446_);
lean_dec_ref(v_a_5446_);
return v_res_5448_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection(lean_object* v_t_5449_, lean_object* v_00_u03c3_5450_, lean_object* v_inst_5451_, lean_object* v_inst_5452_, lean_object* v_client_5453_, lean_object* v_handler_5454_, lean_object* v_config_5455_, lean_object* v_extensions_5456_, lean_object* v_a_5457_){
_start:
{
lean_object* v___x_5459_; 
v___x_5459_ = l_Std_Http_Server_serveConnection___redArg(v_inst_5451_, v_inst_5452_, v_client_5453_, v_handler_5454_, v_config_5455_, v_extensions_5456_, v_a_5457_);
return v___x_5459_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Server_serveConnection___boxed(lean_object* v_t_5460_, lean_object* v_00_u03c3_5461_, lean_object* v_inst_5462_, lean_object* v_inst_5463_, lean_object* v_client_5464_, lean_object* v_handler_5465_, lean_object* v_config_5466_, lean_object* v_extensions_5467_, lean_object* v_a_5468_, lean_object* v_a_5469_){
_start:
{
lean_object* v_res_5470_; 
v_res_5470_ = l_Std_Http_Server_serveConnection(v_t_5460_, v_00_u03c3_5461_, v_inst_5462_, v_inst_5463_, v_client_5464_, v_handler_5465_, v_config_5466_, v_extensions_5467_, v_a_5468_);
lean_dec_ref(v_a_5468_);
return v_res_5470_;
}
}
lean_object* runtime_initialize_Std_Async_TCP(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_ContextAsync(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Transport(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Transport_Outbox(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Protocol_H1(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Server_Config(uint8_t builtin);
lean_object* runtime_initialize_Std_Http_Server_Handler(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Server_Connection(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Async_TCP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_ContextAsync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Transport_Outbox(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Protocol_H1(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Server_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Server_Handler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Server_Connection(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Async_TCP(uint8_t builtin);
lean_object* initialize_Std_Async_ContextAsync(uint8_t builtin);
lean_object* initialize_Std_Http_Transport(uint8_t builtin);
lean_object* initialize_Std_Http_Transport_Outbox(uint8_t builtin);
lean_object* initialize_Std_Http_Protocol_H1(uint8_t builtin);
lean_object* initialize_Std_Http_Server_Config(uint8_t builtin);
lean_object* initialize_Std_Http_Server_Handler(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Server_Connection(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Async_TCP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_ContextAsync(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Transport_Outbox(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Protocol_H1(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Server_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Http_Server_Handler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Server_Connection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Server_Connection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Server_Connection(builtin);
}
#ifdef __cplusplus
}
#endif
