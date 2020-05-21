#include "monty.h"
#include "stack.h"

/**
 *s_sub - add command
 *@head: head of the list
 *Return: Nothing
 */
void s_sub(stack_t **head)
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