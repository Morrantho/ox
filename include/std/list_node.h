#ifndef __OX_STD_LIST_NODE_H__
#define __OX_STD_LIST_NODE_H__
#include<stdlib.h>
#include"types.h"
#define ox_std_list_node_t struct ox_std_list_node_tag
#define ox_std_list_node_p struct ox_std_list_node_tag*
#define ox_std_list_node_p2 struct ox_std_list_node_tag**
struct ox_std_list_node_tag
{
	ox_std_list_node_p directions[2];
	ox_void_p value;
};
ox_global ox_std_list_node_p ox_std_list_node_new(ox_void_p);
ox_global ox_void_t ox_std_list_node_delete(ox_std_list_node_p2);
#endif/*__OX_STD_LIST_NODE_H__*/