#include "monty.h"
/**
 * add_element - Entry point.
 * @head: head
 * @counter: number
 * Return: 0 always
*/
void add_element(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		
		free(bus.content);
		
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	gt = *head;
	
	qq = gt->n + gt->next->n;
	gt->next->n = qq;
	
	*head = gt->next;
	
	free(gt);
}
