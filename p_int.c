#include "monty.h"
/**
 * p_int - Entry point
 * @head: head
 * @counter: line
 * Return: 0 allways
*/

void p_int(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		
		fclose(bus.file);
		
		free(bus.content);
		free_stack(*head);
		
		exit(EXIT_FAILURE);
	}
	
	printf("%d\n", (*head)->n);
}
