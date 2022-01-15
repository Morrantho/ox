#ifndef __OX_STD_LIST_H__
#define __OX_STD_LIST_H__
#include"queue.h"
#define ox_std_list_t ox_std_queue_t
#define ox_std_list_p ox_std_queue_p
#define ox_std_list_p2 ox_std_queue_p2
#define ox_std_list_new ox_std_queue_new
#define ox_std_list_delete ox_std_queue_delete
#define ox_std_list_push ox_std_queue_push
#define ox_std_list_pop ox_std_queue_pop
ox_global ox_void_t ox_std_list_push_at(ox_std_list_p,ox_u16_t,ox_void_p);
ox_global ox_void_p ox_std_list_pop_at(ox_std_list_p,ox_u16_t);
#endif/*__OX_STD_LIST_H__*/