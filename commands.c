#include "monty.h"
#include "stack.h"
#include "queue.h"
/**
 *nop - function that does nothing
 *@head: head of the list
 *@line_number: line_number
 *Return: Nothing
 */
void nop(stack_t **head, unsigned int line_number)
{
	(void) head;
	(void) line_number;
}

/**
 *print_all - print all elements in the list
 *@head: head of the list
 *@line_number: line_number
 *Return: Nothing
 */

void print_all(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	if (strcmp(info.type, "stack") == 0)
		s_print_all(head);
	else
		q_print_all(head);
}

/**
 *push - push node to stack or queue
 *@head: head of the list
 *@line_number: line_number
 *Return: Nothing
 */
void push(stack_t **head, unsigned int line_number)
{
	int n;
	(void) line_number;

	if (check_argument("push") != 1 || to_number(&n) != 1)
	{
		invalid_args();
	}
	add_dnodeint_end(head, n);
}

/**
 *pop - function that deletes head or tail node
 *@head: head of the list
 *@line_number: line_number
 *Return: Nothing
 */
void pop(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	if (info.len == 0)
	{
		free_all(1, 1, 1, 1, 1);
		pop_error();
	}

	if (strcmp(info.type, "stack") == 0)
		s_pop(head);
	else
		q_pop(head);

	info.len--;
}

/**
 *pint - function the head or tail
 *@head: head of the list
 *@line_number: line_number
 *Return: Nothing
 */
void pint(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	if (info.len == 0)
	{
		free_all(1, 1, 1, 1, 1);
		pint_error();
	}

	if (strcmp(info.type, "stack") == 0)
		s_pint(head);
	else
		q_pint(head);
}

