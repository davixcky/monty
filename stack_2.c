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
	prev->n = b - a;
	free(tail);
	prev->next = NULL;
	*info.tail_list = prev;

}

/**
 *s_div - add command
 *@head: head of the list
 *Return: Nothing
 */

void s_div(stack_t **head)
{
	stack_t *tail, *prev;
	int a, b;
	(void) head;
	tail = *info.tail_list;
	prev = tail->prev;

	a = tail->n;
	b = tail->prev->n;
	prev->n = b / a;
	free(tail);
	prev->next = NULL;
	*info.tail_list = prev;

}
/**
 *s_mul - add command
 *@head: head of the list
 *Return: Nothing
 */

void s_mul(stack_t **head)
{
	stack_t *tail, *prev;
	int a, b;
	(void) head;
	tail = *info.tail_list;
	prev = tail->prev;

	a = tail->n;
	b = tail->prev->n;
	prev->n = b * a;
	free(tail);
	prev->next = NULL;
	*info.tail_list = prev;

}

/**
 *s_mod - add command
 *@head: head of the list
 *Return: Nothing
 */

void s_mod(stack_t **head)
{
	stack_t *tail, *prev;
	int a, b;
	(void) head;
	tail = *info.tail_list;
	prev = tail->prev;

	a = tail->n;
	b = tail->prev->n;
	prev->n = b % a;
	free(tail);
	prev->next = NULL;
	*info.tail_list = prev;
}

/**
 *s_pchar - add command
 *@head: head of the list
 *Return: Nothing
 */

void s_pchar(stack_t **head)
{
	stack_t *tail, *prev;
	int a, b;
	(void) head;
	tail = *info.tail_list;
	a = tail->n;
	printf("%c\n", a);

}


/**
 *s_print_string - s_print_all command
 *@head: head of the list
 *Return: Nothing
 */

void s_print_string(stack_t **head)
{
	stack_t *tail;
	(void) head;

	tail = *info.tail_list;

	if (tail == NULL)
		printf("\n");
	while (tail)
	{
		if ((tail->n < 32 || tail->n > 126) || tail->n == 0)
			break;
		printf("%c", tail->n);
		tail = tail->prev;
	}
	if (tail != NULL || info.len == 1)
		printf("\n");
}




