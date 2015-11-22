#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "stack_fun.h"

/*
This function adds some element to stack 
and returns it
*/
struct stack * add_to_stack(struct stack *last, struct stack *next)
{
next->next = last->next;
last->next = next;
return next;
}

/*
This function deletes next element
*/
void rm_from_stack(struct stack *prev_del)
{
	struct stack *pointer = prev_del->next;
	prev_del->next = prev_del->next->next;
	free(pointer);
}

/*
This function adds new element to sorted stack
*/
struct stack * add_sort(struct stack *last, struct stack *next)
{
	struct stack *local;
	local = last;
	if ((local->data) >= (next->data))
	{
		return add_to_stack(local, next);
	}
	else
	while ((local->next->data) > (next->data))
	{
		local = local->next;
	}
	return add_to_stack(local, next);
}
void interface(void)
{
	printf("1 - To add element\n");
	printf("2 - To print all elements\n");
	printf("3 - To delete next element\n");
	printf("4 - To exit from program\n");
}