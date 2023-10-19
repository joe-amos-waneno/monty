#include "monty.h"
/**
 * pop_element - Entry points
 * @head: head
 * @counter: number
 * Return: 0 always
*/

void pop_element(stack_t **head, unsigned int count)
{
	stack_t *gt;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		
		free(bus.content);
		free_stack(*head);
		
		exit(EXIT_FAILURE);
	}
	
	gt = *head;
	
	*head = gt->next;
	free(gt);
}
