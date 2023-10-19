#include "monty.h"
/**
 * pushPull - add node
 * @head: head
 * @counter: line
 * Return: 0 always
*/
void pushPull(stack_t **head, unsigned int count)
{
	int n, tx = 0, ggg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			tx++;
		for (; bus.arg[tx] != '\0'; tx++)
		{
			if (bus.arg[tx] > 57 || bus.arg[tx] < 48)
				ggg = 1; }
		if (ggg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	
	
	if (bus.lifi == 0)
		addnode(head, n);
	
	else
		addqueue(head, n);
}
