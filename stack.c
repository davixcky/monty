#include "monty.h"
#include "stack.h"

void s_pop(stack_t **head)
{
	stack_t *second_last;

	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}

	second_last = *head;
	while(second_last->next->next != NULL)
		second_last = second_last->next;

	free(second_last->next);
	second_last->next = NULL;
}


void s_print_all(stack_t **head)
{
	stack_t *tail;

	tail = *info.tail_list;

	if (tail == NULL)
		return;
	while(tail->prev != NULL && tail)
	{
		printf("valor en stack es %d\n", tail->n);
		tail = tail->prev;
	}
	if (tail != NULL)
		printf("valor en el stack es %d\n", tail->n);
}


void s_pint(stack_t **head)
{
	stack_t *tail;

	tail = *head;
	while(tail->next != NULL)
		tail = tail->next;

	printf("%d\n", tail->n);
}


void s_swap(stack_t **head)
{
	stack_t *tail;
	int n;

	tail = *head;
	while(tail->next != NULL)
		tail = tail->next;

	n = tail->n;
	tail->n = tail->prev->n;
	tail->prev->n = n;
}
