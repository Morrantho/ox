#include"../../include/std/list_node.h"
#include"../../include/std/shorttypes.h"

#define node_t ox_std_list_node_t
#define node_p ox_std_list_node_p
#define node_p2 ox_std_list_node_p2
#define new ox_std_list_node_new
#define delete ox_std_list_node_delete

node_p new(void_p value)
{
	node_p node;
	node=malloc(sizeof(node_t));
	node->directions[0]=0;
	node->directions[1]=0;
	node->value=value;
	return node;
}

void_t delete(node_p2 node)
{
	if(!*node) return;
	delete(&(*node)->directions[1]);
	free(*node);
}