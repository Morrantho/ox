#ifndef __OX_STD_QUEUE_H__
#define __OX_STD_QUEUE_H__
#include"list_node.h"
#define ox_std_queue_t ox_std_list_node_t
#define ox_std_queue_p ox_std_list_node_p
#define ox_std_queue_p2 ox_std_list_node_p2
ox_global ox_std_queue_p ox_std_queue_new();
ox_global ox_void_t ox_std_queue_delete(ox_std_queue_p);
ox_global ox_void_t ox_std_queue_push(ox_std_queue_p,ox_void_p);
ox_global ox_void_p ox_std_queue_pop(ox_std_queue_p);
#endif/*__OX_STD_QUEUE_H__*/