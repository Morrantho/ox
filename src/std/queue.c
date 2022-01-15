#include"../../include/std/queue.h"
#include"../../include/std/shorttypes.h"

#define node_p ox_std_list_node_p
#define node_new ox_std_list_node_new
#define node_delete ox_std_list_node_delete
#define queue_t ox_std_queue_t
#define queue_p ox_std_queue_p
#define queue_p2 ox_std_queue_p2
#define new ox_std_queue_new
#define delete ox_std_queue_delete
#define push ox_std_queue_push
#define pop ox_std_queue_pop

queue_p new()
{
	queue_p queue;
	queue=malloc(sizeof(queue_t));
	queue->directions[0]=0;
	queue->directions[1]=0;
	queue->value=0;
	return queue;
}

void delete(queue_p queue)
{
	node_delete(&queue->directions[0]);
	free(queue);
}

void push(queue_p queue,void_p value)
{
	if(!queue->directions[0])
	{
		queue->directions[0]=node_new(value);
		queue->directions[1]=queue->directions[0];
		queue->value=1;
		return;
	}
	queue->directions[1]->directions[1]=node_new(value);
	queue->directions[1]->directions[1]->directions[0]=queue->directions[1];
	queue->directions[1]=queue->directions[1]->directions[1];
	queue->value++;
}

void_p pop(queue_p queue)
{
	void_p value;
	node_p node;
	if(!queue->directions[1]) return 0;
	value=queue->directions[1]->value;
	node=queue->directions[1];
	queue->directions[1]=queue->directions[1]->directions[0];
	queue->directions[1]->directions[1]=0;
	free(node);
	queue->value--;
	return value;
}