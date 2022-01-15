#ifndef __OX_STD_BST_H__
#define __OX_STD_BST_H__
#include"list_node.h"
#define ox_std_bst_t ox_std_list_node_t
#define ox_std_bst_p ox_std_list_node_p
#define ox_std_bst_p2 ox_std_list_node_p2
ox_global ox_std_bst_p ox_std_bst_new(ox_void_p);
ox_global ox_void_t ox_std_bst_delete(ox_std_bst_p);
#endif/*__OX_STD_BST_H__*/