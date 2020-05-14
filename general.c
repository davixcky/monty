#include "monty.h"
#include "stack.h"
#include "queue.h"

void print_all(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	if (strcmp(info.type, "stack") == 0)
		s_print_all(head);
	else
		q_print_all(head);
}

void push(stack_t **head, unsigned int line_number)
{
	stack_t *new_node, *prev;
	char *msg;
	int n;

	for (; *head != NULL; head = &(*head)->next)
		prev = *head;

	if (!check_argument("push") || !to_number(info.arg, &n))
	{
		//asprintf(&msg, "L%u: usage: push integer", line_number);
		custom_error(msg);
	}

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		malloc_error();

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = prev;
	*head = new_node;

	info.len++;
}

void pop(stack_t **head, unsigned int line_number)
{
	char *msg;

	if (info.len == 0)
	{
		//asprintf(&msg, "L%u: can't pop an empty stack", line_number);
		custom_error(msg);
	}

	if (strcmp(info.type, "stack") == 0)
		s_pop(head);
	else
		q_pop(head);

	info.len--;
}

void pint(stack_t **head, unsigned int line_number)
{
	char *msg;

	if (info.len == 0)
	{
		//asprintf(&msg, "L%u: can't pint, stack empty", line_number);
		custom_error(msg);
	}

	if (strcmp(info.type, "stack") == 0)
		s_pint(head);
	else
		q_pint(head);
}


void swap(stack_t **head, unsigned int line_number)
{
	char *msg;

	if (info.len < 2)
	{
		//asprintf(&msg, "L%u: can't swap, stack too short", line_number);
		custom_error(msg);
	}

	if (strcmp(info.type, "stack") == 0)
		s_swap(head);
	else
		q_swap(head);
}

