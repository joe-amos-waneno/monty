#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

typedef struct stack_s
{
	int n;

	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

typedef struct bus_s
{
	char *arg;
	int lifi;

	FILE *file;
	char *content;

}  bus_t;

extern bus_t bus;

typedef struct instruction_s
{
	char *opcode;

	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void pushPull(stack_t **head, unsigned int count);
void p_int(stack_t **head, unsigned int count);
void pop_element(stack_t **head, unsigned int count);
void swap_element(stack_t **head, unsigned int count);
void add_element(stack_t **head, unsigned int counter);
void do_nothing(stack_t **head, unsigned int count);

#endif
