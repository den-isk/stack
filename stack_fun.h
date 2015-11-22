#ifndef STACK_FUN_H
#define STACK_FUN_H
#include "stack_fun.h"
struct stack
{
	int data;
	struct stack *next;
};
struct stack *add_to_stack(struct stack *, struct stack *);
struct stack *add_sort(struct stack *, struct stack *);
void rm_from_stack(struct stack *);
void interface(void);
#endif