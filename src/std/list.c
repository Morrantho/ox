#include"../../include/std/list.h"
#include"../../include/std/shorttypes.h"

#define list_p ox_std_list_p
#define node_p ox_std_list_node_p
#define node_new ox_std_list_node_new
#define push_at ox_std_list_push_at
#define pop_at ox_std_list_pop_at

void push_at(list_p list,u16_t index,void_p value)
{
	if(index<0||index>list->value) return;
	node_p old_node;
	for(old_node=list->directions[0];index;index--,old_node=old_node->directions[1]){}
	node_p new_node=node_new(value);
	new_node->directions[1]=old_node;
	new_node->directions[0]=old_node->directions[0];
	old_node->directions[0]->directions[1]=new_node;
	old_node->directions[0]=new_node;
	list->value++;/* Use as size */
}

void_p pop_at(list_p list,u16_t index)
{
	if(index<0||index>list->value) return 0;
	node_p node;
	void_p value;
	for(node=list->directions[0];index;index--,node=node->directions[1]){}
	value=node->value;
	node->directions[0]->directions[1]=node->directions[1];
	node->directions[1]->directions[0]=node->directions[0];
	free(node);
	list->value--;/* Use as size */
	return value;
}