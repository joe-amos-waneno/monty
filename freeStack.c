#include "monty.h"
/**
* free_stack - Entry point
* @head: head
* 
*/

void free_stack(stack_t *head)
{
	stack_t *sonek;

	sonek = head;
	
	while (head)
	{
		sonek = head->next;
		
		free(head);
		
		head = sonek;
	}
	
	
}
