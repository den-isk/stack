#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "stack_fun.h"
int counter = 0;
int main()
{
	struct stack *local, *new;
	int change = 0;
	int local_counter = 0;

	local = malloc(sizeof(struct stack));
	local->next = NULL;
	while(change != 4)
	{
		interface();
		scanf("%d",&change);
		switch(change)
		{
			case 1:
				new=malloc(sizeof(struct stack));
				scanf("%d",&(new->data));
				if ((local->next) == NULL )
				{
					local=add_sort(new, new);
				}
				else
				local = add_sort(local,new);
				counter++;
				break;
			case 2:
				printf("\n");
				while(local_counter != counter)
				{
					printf("%d ", local->data);
					local = local->next;
					local_counter++;
				}
				printf("\n");
				local_counter = 0;
				break;
			case 3:
				rm_from_stack(local);
				break;
			case 4:
				while(local_counter != counter)
				{
					rm_from_stack(local);
					local_counter++;
				}
				exit(1);
				break;
			default:
				printf("Incorrect number. Please, enter:\n");
				break;
		}

	}
}