#ifndef __OX_STD_STACK_H__
#define __OX_STD_STACK_H__
#include<stdlib.h>
#include"types.h"
#define ox_std_stack_t struct ox_std_stack_tag
#define ox_std_stack_p struct ox_std_stack_tag*
#define ox_std_stack_p2 struct ox_std_stack_tag**
struct ox_std_stack_tag
{
	ox_std_stack_p next;
	ox_void_p value;
};
ox_global ox_std_stack_p ox_std_stack_new(ox_void_p);
ox_global ox_void_t ox_std_stack_delete(ox_std_stack_p2);
ox_global ox_void_t ox_std_stack_push(ox_std_stack_p2,ox_void_p);
ox_global ox_void_p ox_std_stack_pop(ox_std_stack_p2);
#endif/*__OX_STD_STACK_H__*/