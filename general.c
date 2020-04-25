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
	char **args = *info.arguments_;
	printf("dentro del push info.arg %s\n",args[1]);
	if (check_argument("push") != 1)
	{
		// || to_number(&n) != 1)
		printf("entro aqui\n");
		invalid_args();
	}
	info.len++;
	new_node = new_node_(atoi(args[1]));
	if(head == NULL)
	{
		head = &new_node;
		return;
	}
	/*move only if args is valid*/
	for (; *head != NULL; head = &(*head)->next)
		prev = *head;
	new_node->prev = prev;
	*head = new_node;

}

void pop(stack_t **head, unsigned int line_number)
{
	char *msg;

	if (info.len == 0)
	{
		//asprintf(&msg, "L%u: can't pop an empty stack", line_number);
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
	}

	if (strcmp(info.type, "stack") == 0)
		s_swap(head);
	else
		q_swap(head);
}

