#include "monty.h"
#include "stack.h"

/**
 *s_add - add command
 *@head: head of the list
 *Return: Nothing
 */
void s_add(stack_t **head)
{
	stack_t *tail, *prev;
	int a, b;
	(void) head;

	tail = *info.tail_list;
	prev = tail->prev;

	a = tail->n;
	b = tail->prev->n;
	prev->n = a + b;
	free(tail);
	prev->next = NULL;
	*info.tail_list = prev;

}
/**
 *s_pop - pop command
 *@head: head of the list
 *Return: Nothing
 */
void s_pop(stack_t **head)
{
	stack_t *second_last;
	(void) head;

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
/**
 *s_print_all - s_print_all command
 *@head: head of the list
 *Return: Nothing
 */

void s_print_all(stack_t **head)
{
	stack_t *tail;
	(void) head;

	if (info.state == 1)
	{
		tail = *info.head_list;
		if (tail == NULL)
			return;
		while (tail->next != NULL && tail)
		{
			printf("%d\n", tail->n);
			
			tail = tail->next;
		}
		if (tail != NULL)
			printf("%d\n", tail->n);
	}
	else if (info.state == 0)
	{
		tail = *info.tail_list;
		if (tail == NULL)
			return;
		while (tail->prev != NULL && tail)
		{
			printf("%d\n", tail->n);
			
			tail = tail->prev;
		}
		if (tail != NULL)
			printf("%d\n", tail->n);
	}

}

/**
 *s_pint - s_pint command
 *@head: head of the list
 *Return: Nothing
 */
void s_pint(stack_t **head)
{
	stack_t *tail;

	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;

	printf("%d\n", tail->n);
}

/**
 *s_swap - s_swap command
 *@head: head of the list
 *Return: Nothing
 */
void s_swap(stack_t **head)
{
	stack_t *tail;
	int n;
	(void) head;

	tail = *info.tail_list;

	n = tail->n;
	tail->n = tail->prev->n;
	tail->prev->n = n;
}
