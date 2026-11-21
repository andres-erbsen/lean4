// Lean compiler output
// Module: Std.Http.Transport.Outbox
// Imports: public import Std.Http.Transport
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_io_promise_new();
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_io_mono_ms_now();
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_io_promise_resolve(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
static const lean_ctor_object l_Std_Http_Internal_Outbox_new___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 8, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Http_Internal_Outbox_new___redArg___closed__0 = (const lean_object*)&l_Std_Http_Internal_Outbox_new___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_new___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_new___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0(lean_object*, lean_object*);
static const lean_array_object l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued___closed__0 = (const lean_object*)&l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued___closed__0_value;
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Internal_Outbox_send___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Internal_Outbox_send___redArg___closed__0 = (const lean_object*)&l_Std_Http_Internal_Outbox_send___redArg___closed__0_value;
static const lean_ctor_object l_Std_Http_Internal_Outbox_send___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_Std_Http_Internal_Outbox_send___redArg___closed__0_value)}};
static const lean_object* l_Std_Http_Internal_Outbox_send___redArg___closed__1 = (const lean_object*)&l_Std_Http_Internal_Outbox_send___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_send___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_send___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_send(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Outbox_writing___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_writing___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Outbox_writing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_writing___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idle_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idle_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idle_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idle_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0___boxed(lean_object*);
static const lean_ctor_object l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1___closed__0 = (const lean_object*)&l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Internal_Outbox_awaitIdle___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___closed__0 = (const lean_object*)&l_Std_Http_Internal_Outbox_awaitIdle___redArg___closed__0_value;
static const lean_closure_object l_Std_Http_Internal_Outbox_awaitIdle___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Http_Internal_Outbox_awaitIdle___redArg___closed__0_value)} };
static const lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___closed__1 = (const lean_object*)&l_Std_Http_Internal_Outbox_awaitIdle___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idleFor_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idleFor_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idleFor_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idleFor_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Outbox_failed___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_failed___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Http_Internal_Outbox_failed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_failed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Http_Internal_Outbox_awaitWritten___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___closed__0 = (const lean_object*)&l_Std_Http_Internal_Outbox_awaitWritten___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_takeError_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_takeError_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_takeError_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_takeError_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Http_Internal_Outbox_push___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Http_Internal_Outbox_push___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Http_Internal_Outbox_push___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Http_Internal_Outbox_push___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Http_Internal_Outbox_push___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Std_Http_Internal_Outbox_push___redArg___lam__0___closed__1 = (const lean_object*)&l_Std_Http_Internal_Outbox_push___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_new___redArg(lean_object* v_socket_6_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = ((lean_object*)(l_Std_Http_Internal_Outbox_new___redArg___closed__0));
v___x_9_ = lean_st_mk_ref(v___x_8_);
v___x_10_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_10_, 0, v_socket_6_);
lean_ctor_set(v___x_10_, 1, v___x_9_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_new___redArg___boxed(lean_object* v_socket_11_, lean_object* v_a_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_Std_Http_Internal_Outbox_new___redArg(v_socket_11_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_new(lean_object* v_00_u03b1_14_, lean_object* v_socket_15_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Std_Http_Internal_Outbox_new___redArg(v_socket_15_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_new___boxed(lean_object* v_00_u03b1_18_, lean_object* v_socket_19_, lean_object* v_a_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Std_Http_Internal_Outbox_new(v_00_u03b1_18_, v_socket_19_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0_spec__0(lean_object* v_as_22_, size_t v_i_23_, size_t v_stop_24_, lean_object* v_b_25_){
_start:
{
uint8_t v___x_26_; 
v___x_26_ = lean_usize_dec_eq(v_i_23_, v_stop_24_);
if (v___x_26_ == 0)
{
size_t v___x_27_; size_t v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_27_ = ((size_t)1ULL);
v___x_28_ = lean_usize_sub(v_i_23_, v___x_27_);
v___x_29_ = lean_array_uget_borrowed(v_as_22_, v___x_28_);
v___x_30_ = l_Array_append___redArg(v_b_25_, v___x_29_);
v_i_23_ = v___x_28_;
v_b_25_ = v___x_30_;
goto _start;
}
else
{
return v_b_25_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0_spec__0___boxed(lean_object* v_as_32_, lean_object* v_i_33_, lean_object* v_stop_34_, lean_object* v_b_35_){
_start:
{
size_t v_i_boxed_36_; size_t v_stop_boxed_37_; lean_object* v_res_38_; 
v_i_boxed_36_ = lean_unbox_usize(v_i_33_);
lean_dec(v_i_33_);
v_stop_boxed_37_ = lean_unbox_usize(v_stop_34_);
lean_dec(v_stop_34_);
v_res_38_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0_spec__0(v_as_32_, v_i_boxed_36_, v_stop_boxed_37_, v_b_35_);
lean_dec_ref(v_as_32_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0(lean_object* v_init_39_, lean_object* v_l_40_){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; uint8_t v___x_44_; 
v___x_41_ = lean_array_mk(v_l_40_);
v___x_42_ = lean_array_get_size(v___x_41_);
v___x_43_ = lean_unsigned_to_nat(0u);
v___x_44_ = lean_nat_dec_lt(v___x_43_, v___x_42_);
if (v___x_44_ == 0)
{
lean_dec_ref(v___x_41_);
return v_init_39_;
}
else
{
size_t v___x_45_; size_t v___x_46_; lean_object* v___x_47_; 
v___x_45_ = lean_usize_of_nat(v___x_42_);
v___x_46_ = ((size_t)0ULL);
v___x_47_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0_spec__0(v___x_41_, v___x_45_, v___x_46_, v_init_39_);
lean_dec_ref(v___x_41_);
return v___x_47_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued(lean_object* v_x_50_){
_start:
{
lean_object* v_batches_52_; 
if (lean_obj_tag(v_x_50_) == 1)
{
lean_object* v_tail_55_; 
v_tail_55_ = lean_ctor_get(v_x_50_, 1);
if (lean_obj_tag(v_tail_55_) == 0)
{
lean_object* v_head_56_; 
v_head_56_ = lean_ctor_get(v_x_50_, 0);
lean_inc(v_head_56_);
lean_dec_ref_known(v_x_50_, 2);
return v_head_56_;
}
else
{
v_batches_52_ = v_x_50_;
goto v___jp_51_;
}
}
else
{
v_batches_52_ = v_x_50_;
goto v___jp_51_;
}
v___jp_51_:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = ((lean_object*)(l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued___closed__0));
v___x_54_ = l_List_foldrTR___at___00__private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued_spec__0(v___x_53_, v_batches_52_);
return v___x_54_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg___lam__0(lean_object* v_inst_57_, lean_object* v_outbox_58_, lean_object* v_state_59_, lean_object* v_result_60_){
_start:
{
lean_object* v___y_63_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v_fst_72_; lean_object* v_snd_73_; 
v___x_69_ = lean_io_mono_ms_now();
v___x_70_ = lean_st_ref_take(v_state_59_);
if (lean_obj_tag(v_result_60_) == 0)
{
lean_object* v_a_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_107_; 
lean_dec(v___x_69_);
v_a_81_ = lean_ctor_get(v_result_60_, 0);
v_isSharedCheck_107_ = !lean_is_exclusive(v_result_60_);
if (v_isSharedCheck_107_ == 0)
{
v___x_83_ = v_result_60_;
v_isShared_84_ = v_isSharedCheck_107_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_a_81_);
lean_dec(v_result_60_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_107_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v_idle_85_; lean_object* v_idleSince_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_103_; 
v_idle_85_ = lean_ctor_get(v___x_70_, 3);
v_idleSince_86_ = lean_ctor_get(v___x_70_, 4);
v_isSharedCheck_103_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_103_ == 0)
{
lean_object* v_unused_104_; lean_object* v_unused_105_; lean_object* v_unused_106_; 
v_unused_104_ = lean_ctor_get(v___x_70_, 2);
lean_dec(v_unused_104_);
v_unused_105_ = lean_ctor_get(v___x_70_, 1);
lean_dec(v_unused_105_);
v_unused_106_ = lean_ctor_get(v___x_70_, 0);
lean_dec(v_unused_106_);
v___x_88_ = v___x_70_;
v_isShared_89_ = v_isSharedCheck_103_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_idleSince_86_);
lean_inc(v_idle_85_);
lean_dec(v___x_70_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_103_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; uint8_t v___x_95_; lean_object* v___x_97_; 
v___x_90_ = lean_unsigned_to_nat(0u);
v___x_91_ = ((lean_object*)(l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued___closed__0));
v___x_92_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
lean_ctor_set(v___x_92_, 1, v_idle_85_);
v___x_93_ = lean_box(0);
v___x_94_ = 0;
v___x_95_ = 1;
if (v_isShared_84_ == 0)
{
lean_ctor_set_tag(v___x_83_, 1);
v___x_97_ = v___x_83_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_a_81_);
v___x_97_ = v_reuseFailAlloc_102_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
lean_object* v___x_98_; lean_object* v___x_100_; 
v___x_98_ = lean_box(0);
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 3, v___x_98_);
lean_ctor_set(v___x_88_, 2, v___x_97_);
lean_ctor_set(v___x_88_, 1, v___x_90_);
lean_ctor_set(v___x_88_, 0, v___x_93_);
v___x_100_ = v___x_88_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v___x_93_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v___x_90_);
lean_ctor_set(v_reuseFailAlloc_101_, 2, v___x_97_);
lean_ctor_set(v_reuseFailAlloc_101_, 3, v___x_98_);
lean_ctor_set(v_reuseFailAlloc_101_, 4, v_idleSince_86_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
lean_ctor_set_uint8(v___x_100_, sizeof(void*)*5, v___x_94_);
lean_ctor_set_uint8(v___x_100_, sizeof(void*)*5 + 1, v___x_95_);
v_fst_72_ = v___x_92_;
v_snd_73_ = v___x_100_;
goto v___jp_71_;
}
}
}
}
}
else
{
lean_object* v_queued_108_; lean_object* v_queuedBytes_109_; uint8_t v_writing_110_; uint8_t v_failed_111_; lean_object* v_error_112_; lean_object* v_idle_113_; lean_object* v_idleSince_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_134_; 
lean_dec_ref_known(v_result_60_, 1);
v_queued_108_ = lean_ctor_get(v___x_70_, 0);
v_queuedBytes_109_ = lean_ctor_get(v___x_70_, 1);
v_writing_110_ = lean_ctor_get_uint8(v___x_70_, sizeof(void*)*5);
v_failed_111_ = lean_ctor_get_uint8(v___x_70_, sizeof(void*)*5 + 1);
v_error_112_ = lean_ctor_get(v___x_70_, 2);
v_idle_113_ = lean_ctor_get(v___x_70_, 3);
v_idleSince_114_ = lean_ctor_get(v___x_70_, 4);
v_isSharedCheck_134_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_134_ == 0)
{
v___x_116_ = v___x_70_;
v_isShared_117_ = v_isSharedCheck_134_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_idleSince_114_);
lean_inc(v_idle_113_);
lean_inc(v_error_112_);
lean_inc(v_queuedBytes_109_);
lean_inc(v_queued_108_);
lean_dec(v___x_70_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_134_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
uint8_t v___x_118_; 
v___x_118_ = l_List_isEmpty___redArg(v_queued_108_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_125_; 
lean_dec(v_queuedBytes_109_);
lean_dec(v___x_69_);
v___x_119_ = l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued(v_queued_108_);
v___x_120_ = lean_box(0);
v___x_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_119_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
v___x_122_ = lean_box(0);
v___x_123_ = lean_unsigned_to_nat(0u);
if (v_isShared_117_ == 0)
{
lean_ctor_set(v___x_116_, 1, v___x_123_);
lean_ctor_set(v___x_116_, 0, v___x_122_);
v___x_125_ = v___x_116_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___x_122_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v___x_123_);
lean_ctor_set(v_reuseFailAlloc_126_, 2, v_error_112_);
lean_ctor_set(v_reuseFailAlloc_126_, 3, v_idle_113_);
lean_ctor_set(v_reuseFailAlloc_126_, 4, v_idleSince_114_);
lean_ctor_set_uint8(v_reuseFailAlloc_126_, sizeof(void*)*5, v_writing_110_);
lean_ctor_set_uint8(v_reuseFailAlloc_126_, sizeof(void*)*5 + 1, v_failed_111_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
v_fst_72_ = v___x_121_;
v_snd_73_ = v___x_125_;
goto v___jp_71_;
}
}
else
{
lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; lean_object* v___x_130_; lean_object* v___x_132_; 
lean_dec(v_idleSince_114_);
v___x_127_ = ((lean_object*)(l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_joinQueued___closed__0));
v___x_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set(v___x_128_, 1, v_idle_113_);
v___x_129_ = 0;
v___x_130_ = lean_box(0);
if (v_isShared_117_ == 0)
{
lean_ctor_set(v___x_116_, 4, v___x_69_);
lean_ctor_set(v___x_116_, 3, v___x_130_);
v___x_132_ = v___x_116_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v_queued_108_);
lean_ctor_set(v_reuseFailAlloc_133_, 1, v_queuedBytes_109_);
lean_ctor_set(v_reuseFailAlloc_133_, 2, v_error_112_);
lean_ctor_set(v_reuseFailAlloc_133_, 3, v___x_130_);
lean_ctor_set(v_reuseFailAlloc_133_, 4, v___x_69_);
lean_ctor_set_uint8(v_reuseFailAlloc_133_, sizeof(void*)*5 + 1, v_failed_111_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
lean_ctor_set_uint8(v___x_132_, sizeof(void*)*5, v___x_129_);
v_fst_72_ = v___x_128_;
v_snd_73_ = v___x_132_;
goto v___jp_71_;
}
}
}
}
v___jp_62_:
{
lean_object* v___x_64_; lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_64_ = lean_array_get_size(v___y_63_);
v___x_65_ = lean_unsigned_to_nat(0u);
v___x_66_ = lean_nat_dec_eq(v___x_64_, v___x_65_);
if (v___x_66_ == 0)
{
lean_object* v___x_67_; 
v___x_67_ = l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg(v_inst_57_, v_outbox_58_, v___y_63_);
return v___x_67_;
}
else
{
lean_object* v___x_68_; 
lean_dec_ref(v___y_63_);
lean_dec_ref(v_outbox_58_);
lean_dec_ref(v_inst_57_);
v___x_68_ = lean_box(0);
return v___x_68_;
}
}
v___jp_71_:
{
lean_object* v___x_74_; lean_object* v_snd_75_; 
v___x_74_ = lean_st_ref_put(v_state_59_, v_snd_73_);
v_snd_75_ = lean_ctor_get(v_fst_72_, 1);
if (lean_obj_tag(v_snd_75_) == 1)
{
lean_object* v_fst_76_; lean_object* v_val_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
lean_inc_ref(v_snd_75_);
v_fst_76_ = lean_ctor_get(v_fst_72_, 0);
lean_inc(v_fst_76_);
lean_dec_ref(v_fst_72_);
v_val_77_ = lean_ctor_get(v_snd_75_, 0);
lean_inc(v_val_77_);
lean_dec_ref_known(v_snd_75_, 1);
v___x_78_ = lean_box(0);
v___x_79_ = lean_io_promise_resolve(v___x_78_, v_val_77_);
lean_dec(v_val_77_);
v___y_63_ = v_fst_76_;
goto v___jp_62_;
}
else
{
lean_object* v_fst_80_; 
v_fst_80_ = lean_ctor_get(v_fst_72_, 0);
lean_inc(v_fst_80_);
lean_dec_ref(v_fst_72_);
v___y_63_ = v_fst_80_;
goto v___jp_62_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg___lam__0___boxed(lean_object* v_inst_135_, lean_object* v_outbox_136_, lean_object* v_state_137_, lean_object* v_result_138_, lean_object* v___y_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg___lam__0(v_inst_135_, v_outbox_136_, v_state_137_, v_result_138_);
lean_dec(v_state_137_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg(lean_object* v_inst_141_, lean_object* v_outbox_142_, lean_object* v_data_143_){
_start:
{
lean_object* v_sendAll_145_; lean_object* v_socket_146_; lean_object* v_state_147_; lean_object* v___f_148_; lean_object* v_val_150_; lean_object* v___x_154_; 
v_sendAll_145_ = lean_ctor_get(v_inst_141_, 1);
lean_inc_ref(v_sendAll_145_);
v_socket_146_ = lean_ctor_get(v_outbox_142_, 0);
lean_inc(v_socket_146_);
v_state_147_ = lean_ctor_get(v_outbox_142_, 1);
lean_inc(v_state_147_);
v___f_148_ = lean_alloc_closure((void*)(l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_148_, 0, v_inst_141_);
lean_closure_set(v___f_148_, 1, v_outbox_142_);
lean_closure_set(v___f_148_, 2, v_state_147_);
v___x_154_ = lean_apply_3(v_sendAll_145_, v_socket_146_, v_data_143_, lean_box(0));
if (lean_obj_tag(v___x_154_) == 0)
{
lean_object* v_a_155_; lean_object* v___x_156_; 
v_a_155_ = lean_ctor_get(v___x_154_, 0);
lean_inc(v_a_155_);
lean_dec_ref_known(v___x_154_, 1);
v___x_156_ = lean_task_pure(v_a_155_);
v_val_150_ = v___x_156_;
goto v___jp_149_;
}
else
{
lean_object* v_a_157_; 
v_a_157_ = lean_ctor_get(v___x_154_, 0);
lean_inc_ref(v_a_157_);
lean_dec_ref_known(v___x_154_, 1);
v_val_150_ = v_a_157_;
goto v___jp_149_;
}
v___jp_149_:
{
lean_object* v___x_151_; uint8_t v___x_152_; lean_object* v___x_153_; 
v___x_151_ = lean_unsigned_to_nat(0u);
v___x_152_ = 1;
v___x_153_ = l_BaseIO_chainTask___redArg(v_val_150_, v___f_148_, v___x_151_, v___x_152_);
return v___x_153_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg___boxed(lean_object* v_inst_158_, lean_object* v_outbox_159_, lean_object* v_data_160_, lean_object* v_a_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg(v_inst_158_, v_outbox_159_, v_data_160_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write(lean_object* v_00_u03b1_163_, lean_object* v_inst_164_, lean_object* v_outbox_165_, lean_object* v_data_166_){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg(v_inst_164_, v_outbox_165_, v_data_166_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___boxed(lean_object* v_00_u03b1_169_, lean_object* v_inst_170_, lean_object* v_outbox_171_, lean_object* v_data_172_, lean_object* v_a_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write(v_00_u03b1_169_, v_inst_170_, v_outbox_171_, v_data_172_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_send___redArg(lean_object* v_inst_181_, lean_object* v_outbox_182_, lean_object* v_buffer_183_){
_start:
{
lean_object* v_data_185_; lean_object* v_size_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_251_; 
v_data_185_ = lean_ctor_get(v_buffer_183_, 0);
v_size_186_ = lean_ctor_get(v_buffer_183_, 1);
v_isSharedCheck_251_ = !lean_is_exclusive(v_buffer_183_);
if (v_isSharedCheck_251_ == 0)
{
v___x_188_ = v_buffer_183_;
v_isShared_189_ = v_isSharedCheck_251_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_size_186_);
lean_inc(v_data_185_);
lean_dec(v_buffer_183_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_251_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_190_; uint8_t v___x_191_; 
v___x_190_ = lean_unsigned_to_nat(0u);
v___x_191_ = lean_nat_dec_eq(v_size_186_, v___x_190_);
if (v___x_191_ == 0)
{
lean_object* v_state_192_; lean_object* v___x_193_; lean_object* v_fst_195_; lean_object* v_snd_196_; uint8_t v_failed_206_; 
v_state_192_ = lean_ctor_get(v_outbox_182_, 1);
lean_inc(v_state_192_);
v___x_193_ = lean_st_ref_take(v_state_192_);
v_failed_206_ = lean_ctor_get_uint8(v___x_193_, sizeof(void*)*5 + 1);
if (v_failed_206_ == 0)
{
uint8_t v_writing_207_; 
v_writing_207_ = lean_ctor_get_uint8(v___x_193_, sizeof(void*)*5);
if (v_writing_207_ == 0)
{
lean_object* v_queued_208_; lean_object* v_queuedBytes_209_; lean_object* v_error_210_; lean_object* v_idle_211_; lean_object* v_idleSince_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_221_; 
lean_del_object(v___x_188_);
lean_dec(v_size_186_);
v_queued_208_ = lean_ctor_get(v___x_193_, 0);
v_queuedBytes_209_ = lean_ctor_get(v___x_193_, 1);
v_error_210_ = lean_ctor_get(v___x_193_, 2);
v_idle_211_ = lean_ctor_get(v___x_193_, 3);
v_idleSince_212_ = lean_ctor_get(v___x_193_, 4);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_193_);
if (v_isSharedCheck_221_ == 0)
{
v___x_214_ = v___x_193_;
v_isShared_215_ = v_isSharedCheck_221_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_idleSince_212_);
lean_inc(v_idle_211_);
lean_inc(v_error_210_);
lean_inc(v_queuedBytes_209_);
lean_inc(v_queued_208_);
lean_dec(v___x_193_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_221_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
uint8_t v___x_216_; lean_object* v___x_217_; lean_object* v___x_219_; 
v___x_216_ = 1;
v___x_217_ = ((lean_object*)(l_Std_Http_Internal_Outbox_send___redArg___closed__1));
if (v_isShared_215_ == 0)
{
v___x_219_ = v___x_214_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_queued_208_);
lean_ctor_set(v_reuseFailAlloc_220_, 1, v_queuedBytes_209_);
lean_ctor_set(v_reuseFailAlloc_220_, 2, v_error_210_);
lean_ctor_set(v_reuseFailAlloc_220_, 3, v_idle_211_);
lean_ctor_set(v_reuseFailAlloc_220_, 4, v_idleSince_212_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*5 + 1, v_failed_206_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
lean_ctor_set_uint8(v___x_219_, sizeof(void*)*5, v___x_216_);
v_fst_195_ = v___x_217_;
v_snd_196_ = v___x_219_;
goto v___jp_194_;
}
}
}
else
{
lean_object* v_queued_222_; lean_object* v_queuedBytes_223_; lean_object* v_error_224_; lean_object* v_idle_225_; lean_object* v_idleSince_226_; lean_object* v___x_228_; uint8_t v_isShared_229_; uint8_t v_isSharedCheck_240_; 
v_queued_222_ = lean_ctor_get(v___x_193_, 0);
v_queuedBytes_223_ = lean_ctor_get(v___x_193_, 1);
v_error_224_ = lean_ctor_get(v___x_193_, 2);
v_idle_225_ = lean_ctor_get(v___x_193_, 3);
v_idleSince_226_ = lean_ctor_get(v___x_193_, 4);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_193_);
if (v_isSharedCheck_240_ == 0)
{
v___x_228_ = v___x_193_;
v_isShared_229_ = v_isSharedCheck_240_;
goto v_resetjp_227_;
}
else
{
lean_inc(v_idleSince_226_);
lean_inc(v_idle_225_);
lean_inc(v_error_224_);
lean_inc(v_queuedBytes_223_);
lean_inc(v_queued_222_);
lean_dec(v___x_193_);
v___x_228_ = lean_box(0);
v_isShared_229_ = v_isSharedCheck_240_;
goto v_resetjp_227_;
}
v_resetjp_227_:
{
lean_object* v_queuedBytes_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_234_; 
v_queuedBytes_230_ = lean_nat_add(v_queuedBytes_223_, v_size_186_);
lean_dec(v_size_186_);
lean_dec(v_queuedBytes_223_);
lean_inc(v_queuedBytes_230_);
v___x_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_231_, 0, v_queuedBytes_230_);
v___x_232_ = lean_box(v_failed_206_);
if (v_isShared_189_ == 0)
{
lean_ctor_set(v___x_188_, 1, v___x_231_);
lean_ctor_set(v___x_188_, 0, v___x_232_);
v___x_234_ = v___x_188_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v___x_231_);
v___x_234_ = v_reuseFailAlloc_239_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
lean_object* v___x_235_; lean_object* v___x_237_; 
lean_inc_ref(v_data_185_);
v___x_235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_235_, 0, v_data_185_);
lean_ctor_set(v___x_235_, 1, v_queued_222_);
if (v_isShared_229_ == 0)
{
lean_ctor_set(v___x_228_, 1, v_queuedBytes_230_);
lean_ctor_set(v___x_228_, 0, v___x_235_);
v___x_237_ = v___x_228_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v___x_235_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v_queuedBytes_230_);
lean_ctor_set(v_reuseFailAlloc_238_, 2, v_error_224_);
lean_ctor_set(v_reuseFailAlloc_238_, 3, v_idle_225_);
lean_ctor_set(v_reuseFailAlloc_238_, 4, v_idleSince_226_);
lean_ctor_set_uint8(v_reuseFailAlloc_238_, sizeof(void*)*5, v_writing_207_);
lean_ctor_set_uint8(v_reuseFailAlloc_238_, sizeof(void*)*5 + 1, v_failed_206_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
v_fst_195_ = v___x_234_;
v_snd_196_ = v___x_237_;
goto v___jp_194_;
}
}
}
}
}
else
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_244_; 
lean_dec(v_size_186_);
v___x_241_ = lean_box(0);
v___x_242_ = lean_box(v___x_191_);
if (v_isShared_189_ == 0)
{
lean_ctor_set(v___x_188_, 1, v___x_241_);
lean_ctor_set(v___x_188_, 0, v___x_242_);
v___x_244_ = v___x_188_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_242_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v___x_241_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
v_fst_195_ = v___x_244_;
v_snd_196_ = v___x_193_;
goto v___jp_194_;
}
}
v___jp_194_:
{
lean_object* v___x_197_; lean_object* v_fst_198_; uint8_t v___x_199_; 
v___x_197_ = lean_st_ref_put(v_state_192_, v_snd_196_);
v_fst_198_ = lean_ctor_get(v_fst_195_, 0);
v___x_199_ = lean_unbox(v_fst_198_);
if (v___x_199_ == 0)
{
lean_object* v_snd_200_; 
lean_dec(v_state_192_);
lean_dec_ref(v_data_185_);
lean_dec_ref(v_outbox_182_);
lean_dec_ref(v_inst_181_);
v_snd_200_ = lean_ctor_get(v_fst_195_, 1);
lean_inc(v_snd_200_);
lean_dec_ref(v_fst_195_);
return v_snd_200_;
}
else
{
lean_object* v_snd_201_; lean_object* v___x_202_; lean_object* v___x_203_; uint8_t v_failed_204_; 
v_snd_201_ = lean_ctor_get(v_fst_195_, 1);
lean_inc(v_snd_201_);
lean_dec_ref(v_fst_195_);
v___x_202_ = l___private_Std_Http_Transport_Outbox_0__Std_Http_Internal_Outbox_write___redArg(v_inst_181_, v_outbox_182_, v_data_185_);
v___x_203_ = lean_st_ref_get(v_state_192_);
lean_dec(v_state_192_);
v_failed_204_ = lean_ctor_get_uint8(v___x_203_, sizeof(void*)*5 + 1);
lean_dec(v___x_203_);
if (v_failed_204_ == 0)
{
return v_snd_201_;
}
else
{
lean_object* v___x_205_; 
lean_dec(v_snd_201_);
v___x_205_ = lean_box(0);
return v___x_205_;
}
}
}
}
else
{
lean_object* v_state_246_; lean_object* v___x_247_; uint8_t v_failed_248_; 
lean_del_object(v___x_188_);
lean_dec(v_size_186_);
lean_dec_ref(v_data_185_);
lean_dec_ref(v_inst_181_);
v_state_246_ = lean_ctor_get(v_outbox_182_, 1);
lean_inc(v_state_246_);
lean_dec_ref(v_outbox_182_);
v___x_247_ = lean_st_ref_get(v_state_246_);
lean_dec(v_state_246_);
v_failed_248_ = lean_ctor_get_uint8(v___x_247_, sizeof(void*)*5 + 1);
lean_dec(v___x_247_);
if (v_failed_248_ == 0)
{
lean_object* v___x_249_; 
v___x_249_ = ((lean_object*)(l_Std_Http_Internal_Outbox_send___redArg___closed__0));
return v___x_249_;
}
else
{
lean_object* v___x_250_; 
v___x_250_ = lean_box(0);
return v___x_250_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_send___redArg___boxed(lean_object* v_inst_252_, lean_object* v_outbox_253_, lean_object* v_buffer_254_, lean_object* v_a_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Std_Http_Internal_Outbox_send___redArg(v_inst_252_, v_outbox_253_, v_buffer_254_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_send(lean_object* v_00_u03b1_257_, lean_object* v_inst_258_, lean_object* v_outbox_259_, lean_object* v_buffer_260_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = l_Std_Http_Internal_Outbox_send___redArg(v_inst_258_, v_outbox_259_, v_buffer_260_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_send___boxed(lean_object* v_00_u03b1_263_, lean_object* v_inst_264_, lean_object* v_outbox_265_, lean_object* v_buffer_266_, lean_object* v_a_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Std_Http_Internal_Outbox_send(v_00_u03b1_263_, v_inst_264_, v_outbox_265_, v_buffer_266_);
return v_res_268_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Outbox_writing___redArg(lean_object* v_outbox_269_){
_start:
{
lean_object* v_state_271_; lean_object* v___x_272_; uint8_t v_writing_273_; 
v_state_271_ = lean_ctor_get(v_outbox_269_, 1);
v___x_272_ = lean_st_ref_get(v_state_271_);
v_writing_273_ = lean_ctor_get_uint8(v___x_272_, sizeof(void*)*5);
lean_dec(v___x_272_);
return v_writing_273_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_writing___redArg___boxed(lean_object* v_outbox_274_, lean_object* v_a_275_){
_start:
{
uint8_t v_res_276_; lean_object* v_r_277_; 
v_res_276_ = l_Std_Http_Internal_Outbox_writing___redArg(v_outbox_274_);
lean_dec_ref(v_outbox_274_);
v_r_277_ = lean_box(v_res_276_);
return v_r_277_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Outbox_writing(lean_object* v_00_u03b1_278_, lean_object* v_outbox_279_){
_start:
{
uint8_t v___x_281_; 
v___x_281_ = l_Std_Http_Internal_Outbox_writing___redArg(v_outbox_279_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_writing___boxed(lean_object* v_00_u03b1_282_, lean_object* v_outbox_283_, lean_object* v_a_284_){
_start:
{
uint8_t v_res_285_; lean_object* v_r_286_; 
v_res_285_ = l_Std_Http_Internal_Outbox_writing(v_00_u03b1_282_, v_outbox_283_);
lean_dec_ref(v_outbox_283_);
v_r_286_ = lean_box(v_res_285_);
return v_r_286_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idle_x3f___redArg(lean_object* v_outbox_287_){
_start:
{
lean_object* v_state_289_; lean_object* v___x_290_; uint8_t v_writing_291_; 
v_state_289_ = lean_ctor_get(v_outbox_287_, 1);
v___x_290_ = lean_st_ref_get(v_state_289_);
v_writing_291_ = lean_ctor_get_uint8(v___x_290_, sizeof(void*)*5);
lean_dec(v___x_290_);
if (v_writing_291_ == 0)
{
lean_object* v___x_292_; 
v___x_292_ = lean_box(0);
return v___x_292_;
}
else
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v_fst_296_; lean_object* v_snd_297_; uint8_t v_writing_299_; 
v___x_293_ = lean_io_promise_new();
v___x_294_ = lean_st_ref_take(v_state_289_);
v_writing_299_ = lean_ctor_get_uint8(v___x_294_, sizeof(void*)*5);
if (v_writing_299_ == 0)
{
lean_object* v___x_300_; 
lean_dec(v___x_293_);
v___x_300_ = lean_box(0);
v_fst_296_ = v___x_300_;
v_snd_297_ = v___x_294_;
goto v___jp_295_;
}
else
{
lean_object* v_idle_301_; 
v_idle_301_ = lean_ctor_get(v___x_294_, 3);
lean_inc(v_idle_301_);
if (lean_obj_tag(v_idle_301_) == 0)
{
lean_object* v_queued_302_; lean_object* v_queuedBytes_303_; uint8_t v_failed_304_; lean_object* v_error_305_; lean_object* v_idleSince_306_; lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_316_; 
v_queued_302_ = lean_ctor_get(v___x_294_, 0);
v_queuedBytes_303_ = lean_ctor_get(v___x_294_, 1);
v_failed_304_ = lean_ctor_get_uint8(v___x_294_, sizeof(void*)*5 + 1);
v_error_305_ = lean_ctor_get(v___x_294_, 2);
v_idleSince_306_ = lean_ctor_get(v___x_294_, 4);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_294_);
if (v_isSharedCheck_316_ == 0)
{
lean_object* v_unused_317_; 
v_unused_317_ = lean_ctor_get(v___x_294_, 3);
lean_dec(v_unused_317_);
v___x_308_ = v___x_294_;
v_isShared_309_ = v_isSharedCheck_316_;
goto v_resetjp_307_;
}
else
{
lean_inc(v_idleSince_306_);
lean_inc(v_error_305_);
lean_inc(v_queuedBytes_303_);
lean_inc(v_queued_302_);
lean_dec(v___x_294_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_316_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_314_; 
v___x_310_ = lean_io_promise_result_opt(v___x_293_);
v___x_311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
v___x_312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_312_, 0, v___x_293_);
if (v_isShared_309_ == 0)
{
lean_ctor_set(v___x_308_, 3, v___x_312_);
v___x_314_ = v___x_308_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_queued_302_);
lean_ctor_set(v_reuseFailAlloc_315_, 1, v_queuedBytes_303_);
lean_ctor_set(v_reuseFailAlloc_315_, 2, v_error_305_);
lean_ctor_set(v_reuseFailAlloc_315_, 3, v___x_312_);
lean_ctor_set(v_reuseFailAlloc_315_, 4, v_idleSince_306_);
lean_ctor_set_uint8(v_reuseFailAlloc_315_, sizeof(void*)*5, v_writing_299_);
lean_ctor_set_uint8(v_reuseFailAlloc_315_, sizeof(void*)*5 + 1, v_failed_304_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
v_fst_296_ = v___x_311_;
v_snd_297_ = v___x_314_;
goto v___jp_295_;
}
}
}
else
{
lean_object* v_val_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_326_; 
lean_dec(v___x_293_);
v_val_318_ = lean_ctor_get(v_idle_301_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v_idle_301_);
if (v_isSharedCheck_326_ == 0)
{
v___x_320_ = v_idle_301_;
v_isShared_321_ = v_isSharedCheck_326_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_val_318_);
lean_dec(v_idle_301_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_326_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_322_; lean_object* v___x_324_; 
v___x_322_ = lean_io_promise_result_opt(v_val_318_);
lean_dec(v_val_318_);
if (v_isShared_321_ == 0)
{
lean_ctor_set(v___x_320_, 0, v___x_322_);
v___x_324_ = v___x_320_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_322_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
v_fst_296_ = v___x_324_;
v_snd_297_ = v___x_294_;
goto v___jp_295_;
}
}
}
}
v___jp_295_:
{
lean_object* v___x_298_; 
v___x_298_ = lean_st_ref_put(v_state_289_, v_snd_297_);
return v_fst_296_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idle_x3f___redArg___boxed(lean_object* v_outbox_327_, lean_object* v_a_328_){
_start:
{
lean_object* v_res_329_; 
v_res_329_ = l_Std_Http_Internal_Outbox_idle_x3f___redArg(v_outbox_327_);
lean_dec_ref(v_outbox_327_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idle_x3f(lean_object* v_00_u03b1_330_, lean_object* v_outbox_331_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Std_Http_Internal_Outbox_idle_x3f___redArg(v_outbox_331_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idle_x3f___boxed(lean_object* v_00_u03b1_334_, lean_object* v_outbox_335_, lean_object* v_a_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Std_Http_Internal_Outbox_idle_x3f(v_00_u03b1_334_, v_outbox_335_);
lean_dec_ref(v_outbox_335_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0(lean_object* v_x_340_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = ((lean_object*)(l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0___closed__0));
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0___boxed(lean_object* v_x_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__0(v_x_342_);
lean_dec(v_x_342_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1(lean_object* v___f_346_, lean_object* v_x_347_){
_start:
{
if (lean_obj_tag(v_x_347_) == 0)
{
lean_object* v_a_349_; lean_object* v___x_351_; uint8_t v_isShared_352_; uint8_t v_isSharedCheck_357_; 
lean_dec_ref(v___f_346_);
v_a_349_ = lean_ctor_get(v_x_347_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v_x_347_);
if (v_isSharedCheck_357_ == 0)
{
v___x_351_ = v_x_347_;
v_isShared_352_ = v_isSharedCheck_357_;
goto v_resetjp_350_;
}
else
{
lean_inc(v_a_349_);
lean_dec(v_x_347_);
v___x_351_ = lean_box(0);
v_isShared_352_ = v_isSharedCheck_357_;
goto v_resetjp_350_;
}
v_resetjp_350_:
{
lean_object* v___x_354_; 
if (v_isShared_352_ == 0)
{
v___x_354_ = v___x_351_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_a_349_);
v___x_354_ = v_reuseFailAlloc_356_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
lean_object* v___x_355_; 
v___x_355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_355_, 0, v___x_354_);
return v___x_355_;
}
}
}
else
{
lean_object* v_a_358_; 
v_a_358_ = lean_ctor_get(v_x_347_, 0);
lean_inc(v_a_358_);
lean_dec_ref_known(v_x_347_, 1);
if (lean_obj_tag(v_a_358_) == 1)
{
lean_object* v_val_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_369_; 
v_val_359_ = lean_ctor_get(v_a_358_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v_a_358_);
if (v_isSharedCheck_369_ == 0)
{
v___x_361_ = v_a_358_;
v_isShared_362_ = v_isSharedCheck_369_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_val_359_);
lean_dec(v_a_358_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_369_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_363_; uint8_t v___x_364_; lean_object* v___x_365_; lean_object* v___x_367_; 
v___x_363_ = lean_unsigned_to_nat(0u);
v___x_364_ = 1;
v___x_365_ = lean_task_map(v___f_346_, v_val_359_, v___x_363_, v___x_364_);
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 0, v___x_365_);
v___x_367_ = v___x_361_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v___x_365_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
else
{
lean_object* v___x_370_; 
lean_dec(v_a_358_);
lean_dec_ref(v___f_346_);
v___x_370_ = ((lean_object*)(l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1___closed__0));
return v___x_370_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1___boxed(lean_object* v___f_371_, lean_object* v_x_372_, lean_object* v___y_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Std_Http_Internal_Outbox_awaitIdle___redArg___lam__1(v___f_371_, v_x_372_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg(lean_object* v_outbox_378_){
_start:
{
lean_object* v___f_380_; lean_object* v___x_381_; uint8_t v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v___f_380_ = ((lean_object*)(l_Std_Http_Internal_Outbox_awaitIdle___redArg___closed__1));
v___x_381_ = lean_unsigned_to_nat(0u);
v___x_382_ = 0;
v___x_383_ = l_Std_Http_Internal_Outbox_idle_x3f___redArg(v_outbox_378_);
v___x_384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
v___x_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_385_, 0, v___x_384_);
v___x_386_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_381_, v___x_382_, v___x_385_, v___f_380_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___redArg___boxed(lean_object* v_outbox_387_, lean_object* v_a_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Std_Http_Internal_Outbox_awaitIdle___redArg(v_outbox_387_);
lean_dec_ref(v_outbox_387_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle(lean_object* v_00_u03b1_390_, lean_object* v_outbox_391_){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = l_Std_Http_Internal_Outbox_awaitIdle___redArg(v_outbox_391_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitIdle___boxed(lean_object* v_00_u03b1_394_, lean_object* v_outbox_395_, lean_object* v_a_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Std_Http_Internal_Outbox_awaitIdle(v_00_u03b1_394_, v_outbox_395_);
lean_dec_ref(v_outbox_395_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idleFor_x3f___redArg(lean_object* v_outbox_398_){
_start:
{
lean_object* v_state_400_; lean_object* v___x_401_; uint8_t v_writing_402_; 
v_state_400_ = lean_ctor_get(v_outbox_398_, 1);
v___x_401_ = lean_st_ref_get(v_state_400_);
v_writing_402_ = lean_ctor_get_uint8(v___x_401_, sizeof(void*)*5);
if (v_writing_402_ == 0)
{
lean_object* v_idleSince_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v_idleSince_403_ = lean_ctor_get(v___x_401_, 4);
lean_inc(v_idleSince_403_);
lean_dec(v___x_401_);
v___x_404_ = lean_io_mono_ms_now();
v___x_405_ = lean_nat_sub(v___x_404_, v_idleSince_403_);
lean_dec(v_idleSince_403_);
lean_dec(v___x_404_);
v___x_406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
return v___x_406_;
}
else
{
lean_object* v___x_407_; 
lean_dec(v___x_401_);
v___x_407_ = lean_box(0);
return v___x_407_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idleFor_x3f___redArg___boxed(lean_object* v_outbox_408_, lean_object* v_a_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_Std_Http_Internal_Outbox_idleFor_x3f___redArg(v_outbox_408_);
lean_dec_ref(v_outbox_408_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idleFor_x3f(lean_object* v_00_u03b1_411_, lean_object* v_outbox_412_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l_Std_Http_Internal_Outbox_idleFor_x3f___redArg(v_outbox_412_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_idleFor_x3f___boxed(lean_object* v_00_u03b1_415_, lean_object* v_outbox_416_, lean_object* v_a_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Std_Http_Internal_Outbox_idleFor_x3f(v_00_u03b1_415_, v_outbox_416_);
lean_dec_ref(v_outbox_416_);
return v_res_418_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Outbox_failed___redArg(lean_object* v_outbox_419_){
_start:
{
lean_object* v_state_421_; lean_object* v___x_422_; uint8_t v_failed_423_; 
v_state_421_ = lean_ctor_get(v_outbox_419_, 1);
v___x_422_ = lean_st_ref_get(v_state_421_);
v_failed_423_ = lean_ctor_get_uint8(v___x_422_, sizeof(void*)*5 + 1);
lean_dec(v___x_422_);
return v_failed_423_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_failed___redArg___boxed(lean_object* v_outbox_424_, lean_object* v_a_425_){
_start:
{
uint8_t v_res_426_; lean_object* v_r_427_; 
v_res_426_ = l_Std_Http_Internal_Outbox_failed___redArg(v_outbox_424_);
lean_dec_ref(v_outbox_424_);
v_r_427_ = lean_box(v_res_426_);
return v_r_427_;
}
}
LEAN_EXPORT uint8_t l_Std_Http_Internal_Outbox_failed(lean_object* v_00_u03b1_428_, lean_object* v_outbox_429_){
_start:
{
uint8_t v___x_431_; 
v___x_431_ = l_Std_Http_Internal_Outbox_failed___redArg(v_outbox_429_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_failed___boxed(lean_object* v_00_u03b1_432_, lean_object* v_outbox_433_, lean_object* v_a_434_){
_start:
{
uint8_t v_res_435_; lean_object* v_r_436_; 
v_res_435_ = l_Std_Http_Internal_Outbox_failed(v_00_u03b1_432_, v_outbox_433_);
lean_dec_ref(v_outbox_433_);
v_r_436_ = lean_box(v_res_435_);
return v_r_436_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__0(lean_object* v_x_437_){
_start:
{
uint8_t v___y_440_; 
if (lean_obj_tag(v_x_437_) == 0)
{
lean_object* v___x_444_; 
v___x_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_444_, 0, v_x_437_);
return v___x_444_;
}
else
{
lean_object* v_a_445_; uint8_t v___x_446_; 
v_a_445_ = lean_ctor_get(v_x_437_, 0);
lean_inc(v_a_445_);
lean_dec_ref_known(v_x_437_, 1);
v___x_446_ = lean_unbox(v_a_445_);
lean_dec(v_a_445_);
if (v___x_446_ == 0)
{
uint8_t v___x_447_; 
v___x_447_ = 1;
v___y_440_ = v___x_447_;
goto v___jp_439_;
}
else
{
uint8_t v___x_448_; 
v___x_448_ = 0;
v___y_440_ = v___x_448_;
goto v___jp_439_;
}
}
v___jp_439_:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_441_ = lean_box(v___y_440_);
v___x_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
v___x_443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_443_, 0, v___x_442_);
return v___x_443_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__0___boxed(lean_object* v_x_449_, lean_object* v___y_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__0(v_x_449_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__1(lean_object* v_outbox_452_, lean_object* v___f_453_, lean_object* v_x_454_){
_start:
{
if (lean_obj_tag(v_x_454_) == 0)
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_464_; 
lean_dec_ref(v___f_453_);
v_a_456_ = lean_ctor_get(v_x_454_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v_x_454_);
if (v_isSharedCheck_464_ == 0)
{
v___x_458_ = v_x_454_;
v_isShared_459_ = v_isSharedCheck_464_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v_x_454_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_464_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_461_; 
if (v_isShared_459_ == 0)
{
v___x_461_ = v___x_458_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_456_);
v___x_461_ = v_reuseFailAlloc_463_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
lean_object* v___x_462_; 
v___x_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
return v___x_462_;
}
}
}
else
{
lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_477_; 
v_isSharedCheck_477_ = !lean_is_exclusive(v_x_454_);
if (v_isSharedCheck_477_ == 0)
{
lean_object* v_unused_478_; 
v_unused_478_ = lean_ctor_get(v_x_454_, 0);
lean_dec(v_unused_478_);
v___x_466_ = v_x_454_;
v_isShared_467_ = v_isSharedCheck_477_;
goto v_resetjp_465_;
}
else
{
lean_dec(v_x_454_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_477_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_468_; uint8_t v___x_469_; uint8_t v___x_470_; lean_object* v___x_471_; lean_object* v___x_473_; 
v___x_468_ = lean_unsigned_to_nat(0u);
v___x_469_ = 0;
v___x_470_ = l_Std_Http_Internal_Outbox_failed___redArg(v_outbox_452_);
v___x_471_ = lean_box(v___x_470_);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 0, v___x_471_);
v___x_473_ = v___x_466_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v___x_471_);
v___x_473_ = v_reuseFailAlloc_476_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_474_, 0, v___x_473_);
v___x_475_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_468_, v___x_469_, v___x_474_, v___f_453_);
return v___x_475_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__1___boxed(lean_object* v_outbox_479_, lean_object* v___f_480_, lean_object* v_x_481_, lean_object* v___y_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__1(v_outbox_479_, v___f_480_, v_x_481_);
lean_dec_ref(v_outbox_479_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg(lean_object* v_outbox_485_){
_start:
{
lean_object* v___f_487_; lean_object* v___f_488_; lean_object* v___x_489_; uint8_t v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v___f_487_ = ((lean_object*)(l_Std_Http_Internal_Outbox_awaitWritten___redArg___closed__0));
lean_inc_ref(v_outbox_485_);
v___f_488_ = lean_alloc_closure((void*)(l_Std_Http_Internal_Outbox_awaitWritten___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_488_, 0, v_outbox_485_);
lean_closure_set(v___f_488_, 1, v___f_487_);
v___x_489_ = lean_unsigned_to_nat(0u);
v___x_490_ = 0;
v___x_491_ = l_Std_Http_Internal_Outbox_awaitIdle___redArg(v_outbox_485_);
lean_dec_ref(v_outbox_485_);
v___x_492_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_489_, v___x_490_, v___x_491_, v___f_488_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___redArg___boxed(lean_object* v_outbox_493_, lean_object* v_a_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Std_Http_Internal_Outbox_awaitWritten___redArg(v_outbox_493_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten(lean_object* v_00_u03b1_496_, lean_object* v_outbox_497_){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = l_Std_Http_Internal_Outbox_awaitWritten___redArg(v_outbox_497_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_awaitWritten___boxed(lean_object* v_00_u03b1_500_, lean_object* v_outbox_501_, lean_object* v_a_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Std_Http_Internal_Outbox_awaitWritten(v_00_u03b1_500_, v_outbox_501_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_takeError_x3f___redArg(lean_object* v_outbox_504_){
_start:
{
lean_object* v_state_506_; lean_object* v___x_507_; lean_object* v_queued_508_; lean_object* v_queuedBytes_509_; uint8_t v_writing_510_; uint8_t v_failed_511_; lean_object* v_error_512_; lean_object* v_idle_513_; lean_object* v_idleSince_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_523_; 
v_state_506_ = lean_ctor_get(v_outbox_504_, 1);
v___x_507_ = lean_st_ref_take(v_state_506_);
v_queued_508_ = lean_ctor_get(v___x_507_, 0);
v_queuedBytes_509_ = lean_ctor_get(v___x_507_, 1);
v_writing_510_ = lean_ctor_get_uint8(v___x_507_, sizeof(void*)*5);
v_failed_511_ = lean_ctor_get_uint8(v___x_507_, sizeof(void*)*5 + 1);
v_error_512_ = lean_ctor_get(v___x_507_, 2);
v_idle_513_ = lean_ctor_get(v___x_507_, 3);
v_idleSince_514_ = lean_ctor_get(v___x_507_, 4);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_507_);
if (v_isSharedCheck_523_ == 0)
{
v___x_516_ = v___x_507_;
v_isShared_517_ = v_isSharedCheck_523_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_idleSince_514_);
lean_inc(v_idle_513_);
lean_inc(v_error_512_);
lean_inc(v_queuedBytes_509_);
lean_inc(v_queued_508_);
lean_dec(v___x_507_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_523_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_518_; lean_object* v___x_520_; 
v___x_518_ = lean_box(0);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 2, v___x_518_);
v___x_520_ = v___x_516_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_queued_508_);
lean_ctor_set(v_reuseFailAlloc_522_, 1, v_queuedBytes_509_);
lean_ctor_set(v_reuseFailAlloc_522_, 2, v___x_518_);
lean_ctor_set(v_reuseFailAlloc_522_, 3, v_idle_513_);
lean_ctor_set(v_reuseFailAlloc_522_, 4, v_idleSince_514_);
lean_ctor_set_uint8(v_reuseFailAlloc_522_, sizeof(void*)*5, v_writing_510_);
lean_ctor_set_uint8(v_reuseFailAlloc_522_, sizeof(void*)*5 + 1, v_failed_511_);
v___x_520_ = v_reuseFailAlloc_522_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
lean_object* v___x_521_; 
v___x_521_ = lean_st_ref_put(v_state_506_, v___x_520_);
return v_error_512_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_takeError_x3f___redArg___boxed(lean_object* v_outbox_524_, lean_object* v_a_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Std_Http_Internal_Outbox_takeError_x3f___redArg(v_outbox_524_);
lean_dec_ref(v_outbox_524_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_takeError_x3f(lean_object* v_00_u03b1_527_, lean_object* v_outbox_528_){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = l_Std_Http_Internal_Outbox_takeError_x3f___redArg(v_outbox_528_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_takeError_x3f___boxed(lean_object* v_00_u03b1_531_, lean_object* v_outbox_532_, lean_object* v_a_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Std_Http_Internal_Outbox_takeError_x3f(v_00_u03b1_531_, v_outbox_532_);
lean_dec_ref(v_outbox_532_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___redArg___lam__0(lean_object* v_limit_540_, lean_object* v_outbox_541_, lean_object* v_x_542_){
_start:
{
if (lean_obj_tag(v_x_542_) == 0)
{
lean_object* v_a_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_552_; 
lean_dec_ref(v_outbox_541_);
v_a_544_ = lean_ctor_get(v_x_542_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v_x_542_);
if (v_isSharedCheck_552_ == 0)
{
v___x_546_ = v_x_542_;
v_isShared_547_ = v_isSharedCheck_552_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_a_544_);
lean_dec(v_x_542_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_552_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
if (v_isShared_547_ == 0)
{
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_a_544_);
v___x_549_ = v_reuseFailAlloc_551_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
lean_object* v___x_550_; 
v___x_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
return v___x_550_;
}
}
}
else
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_572_; 
v_a_553_ = lean_ctor_get(v_x_542_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v_x_542_);
if (v_isSharedCheck_572_ == 0)
{
v___x_555_ = v_x_542_;
v_isShared_556_ = v_isSharedCheck_572_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v_x_542_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_572_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
if (lean_obj_tag(v_a_553_) == 0)
{
lean_object* v___x_557_; 
lean_del_object(v___x_555_);
lean_dec_ref(v_outbox_541_);
v___x_557_ = ((lean_object*)(l_Std_Http_Internal_Outbox_push___redArg___lam__0___closed__1));
return v___x_557_;
}
else
{
lean_object* v_val_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_571_; 
v_val_558_ = lean_ctor_get(v_a_553_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v_a_553_);
if (v_isSharedCheck_571_ == 0)
{
v___x_560_ = v_a_553_;
v_isShared_561_ = v_isSharedCheck_571_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_val_558_);
lean_dec(v_a_553_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_571_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
uint8_t v___x_562_; 
v___x_562_ = lean_nat_dec_le(v_val_558_, v_limit_540_);
lean_dec(v_val_558_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; 
lean_del_object(v___x_560_);
lean_del_object(v___x_555_);
v___x_563_ = l_Std_Http_Internal_Outbox_awaitWritten___redArg(v_outbox_541_);
return v___x_563_;
}
else
{
lean_object* v___x_564_; lean_object* v___x_566_; 
lean_dec_ref(v_outbox_541_);
v___x_564_ = lean_box(v___x_562_);
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 0, v___x_564_);
v___x_566_ = v___x_555_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v___x_564_);
v___x_566_ = v_reuseFailAlloc_570_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
lean_object* v___x_568_; 
if (v_isShared_561_ == 0)
{
lean_ctor_set_tag(v___x_560_, 0);
lean_ctor_set(v___x_560_, 0, v___x_566_);
v___x_568_ = v___x_560_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v___x_566_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___redArg___lam__0___boxed(lean_object* v_limit_573_, lean_object* v_outbox_574_, lean_object* v_x_575_, lean_object* v___y_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = l_Std_Http_Internal_Outbox_push___redArg___lam__0(v_limit_573_, v_outbox_574_, v_x_575_);
lean_dec(v_limit_573_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___redArg(lean_object* v_inst_578_, lean_object* v_outbox_579_, lean_object* v_buffer_580_, lean_object* v_limit_581_){
_start:
{
lean_object* v___f_583_; lean_object* v___x_584_; uint8_t v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
lean_inc_ref(v_outbox_579_);
v___f_583_ = lean_alloc_closure((void*)(l_Std_Http_Internal_Outbox_push___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_583_, 0, v_limit_581_);
lean_closure_set(v___f_583_, 1, v_outbox_579_);
v___x_584_ = lean_unsigned_to_nat(0u);
v___x_585_ = 0;
v___x_586_ = l_Std_Http_Internal_Outbox_send___redArg(v_inst_578_, v_outbox_579_, v_buffer_580_);
v___x_587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_587_, 0, v___x_586_);
v___x_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
v___x_589_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask(lean_box(0), lean_box(0), v___x_584_, v___x_585_, v___x_588_, v___f_583_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___redArg___boxed(lean_object* v_inst_590_, lean_object* v_outbox_591_, lean_object* v_buffer_592_, lean_object* v_limit_593_, lean_object* v_a_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = l_Std_Http_Internal_Outbox_push___redArg(v_inst_590_, v_outbox_591_, v_buffer_592_, v_limit_593_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push(lean_object* v_00_u03b1_596_, lean_object* v_inst_597_, lean_object* v_outbox_598_, lean_object* v_buffer_599_, lean_object* v_limit_600_){
_start:
{
lean_object* v___x_602_; 
v___x_602_ = l_Std_Http_Internal_Outbox_push___redArg(v_inst_597_, v_outbox_598_, v_buffer_599_, v_limit_600_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Std_Http_Internal_Outbox_push___boxed(lean_object* v_00_u03b1_603_, lean_object* v_inst_604_, lean_object* v_outbox_605_, lean_object* v_buffer_606_, lean_object* v_limit_607_, lean_object* v_a_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Std_Http_Internal_Outbox_push(v_00_u03b1_603_, v_inst_604_, v_outbox_605_, v_buffer_606_, v_limit_607_);
return v_res_609_;
}
}
lean_object* runtime_initialize_Std_Http_Transport(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Http_Transport_Outbox(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Http_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Http_Transport_Outbox(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Http_Transport(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Http_Transport_Outbox(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Http_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Http_Transport_Outbox(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Http_Transport_Outbox(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Http_Transport_Outbox(builtin);
}
#ifdef __cplusplus
}
#endif
