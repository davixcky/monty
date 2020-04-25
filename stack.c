#include "monty.h"
#include "stack.h"

void s_pop(stack_t **head)
{
	(void) head;
	stack_t *second_last;
	if (info.len == 1)
	{
		free(*info.tail_list), *info.tail_list = NULL;
		*info.head_list = NULL;
		return;
	}
	second_last = (*info.tail_list)->prev;
	if (second_last != NULL)
		second_last->next = NULL;
	free(*info.tail_list);
	*info.tail_list = second_last;

}


void s_print_all(stack_t **head)
{
	(void) head;
	stack_t *tail;

	tail = *info.tail_list;

	if (tail == NULL)
		return;
	while(tail->prev != NULL && tail)
	{
		printf("%d\n", tail->n);
		tail = tail->prev;
	}
	if (tail != NULL)
		printf("%d\n", tail->n);
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
