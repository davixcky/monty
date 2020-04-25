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
	(void) line_number;
	int n;
	if (check_argument("push") != 1 || to_number(&n) != 1)
	{
		invalid_args();
	}
	add_dnodeint_end(head, n);
}

void pop(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	if (info.len == 0)
	{
		free_all(1,1,1,1,1);
		pop_error();
	}

	if (strcmp(info.type, "stack") == 0)
		s_pop(head);
	else
		q_pop(head);

	info.len--;
}

void pint(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	if (info.len == 0)
	{
		free_all(1,1,1,1,1);
		pint_error();
	}

	if (strcmp(info.type, "stack") == 0)
		s_pint(head);
	else
		q_pint(head);
}


void swap(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	if (info.len < 2)
	{
		//asprintf(&msg, "L%u: can't swap, stack too short", line_number);
	}

	if (strcmp(info.type, "stack") == 0)
		s_swap(head);
	else
		q_swap(head);
}

stack_t *add_dnodeint_end(stack_t **head, int n)
{
	stack_t *new_node, *temp_node;

	new_node = new_node_(n);
	temp_node = *info.head_list;
	if (*head == NULL)
	{
		*head = new_node;
		*info.tail_list = new_node;
		info.len++;
		return (new_node);
	}
	while (temp_node && temp_node->next)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = new_node;
	new_node->prev = temp_node;

	*info.tail_list = new_node;
	info.len++;
	return (new_node);
}

void free_dlistint()
{
	stack_t *temp, *head;
	temp = *info.head_list;
	head =  *info.head_list;

	while (head && head->next)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
	free(temp);
	head = NULL;
}
