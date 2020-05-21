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
