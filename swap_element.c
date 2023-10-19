#include "monty.h"
/**
 * swap_element - Entry level
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void swap_element(stack_t **head, unsigned int count)
{
	stack_t *gt;
	int ls = 0, qq;

	gt = *head;
	
	while (gt)
	{
		gt = gt->next;
		ls++;
	}
	
	if (ls < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		
		free(bus.content);
		free_stack(*head);
		
		exit(EXIT_FAILURE);
	}
	
	gt = *head;
	qq = gt->n;
	
	gt->n = gt->next->n;
	gt->next->n = qq;
}
