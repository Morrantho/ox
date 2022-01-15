#include"../../include/std/stack.h"
#include"../../include/std/shorttypes.h"

#define stack_t ox_std_stack_t
#define stack_p ox_std_stack_p
#define stack_p2 ox_std_stack_p2
#define new ox_std_stack_new
#define delete ox_std_stack_delete
#define push ox_std_stack_push
#define pop ox_std_stack_pop

stack_p new(void_p v)
{
	stack_p s;
	s=malloc(sizeof(stack_t));
	s->next=0;
	s->value=v;
}

void delete(stack_p2 s)
{
	if(!*s) return;
	delete(&(*s)->next);
	free(*s);
}

void push(stack_p2 s,void_p v)
{
	stack_p oldtop;
	oldtop=*s;
	*s=new(v);/* newtop */
	(*s)->next=oldtop;/* newtop->next=oldtop */
}

void_p pop(stack_p2 s)
{
	stack_p oldtop;
	void_p oldv;
	oldtop=*s;
	oldv=(*s)->value;
	*s=(*s)->next;/* oldtop=next */
	free(oldtop);
	return oldv;
}