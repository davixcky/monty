#include "monty.h"
#include "queue.h"

/**
 *q_sub - add command
 *@head: head of the list
 *Return: nothing
 */
void q_sub(stack_t **head)
{
	(void) head;
}
/**
 *q_div - add command
 *@head: head of the list
 *Return: nothing
 */
void q_div(stack_t **head)
{
	(void) head;
}

/**
 *q_mul - add command
 *@head: head of the list
 *Return: nothing
 */
void q_mul(stack_t **head)
{
	(void) head;
}

/**
 *q_mod - add command
 *@head: head of the list
 *Return: nothing
 */
void q_mod(stack_t **head)
{
	(void) head;
}

/**
 *q_pchar - add command
 *@head: head of the list
 *Return: nothing
 */
void q_pchar(stack_t **head)
{
	(void) head;
}


/**
 *q_print_all - q_print_all command
 *@head: head of the list
 *Return: nothing
 */

void q_print_string(stack_t **head)
{
	stack_t *h;

	for (h = *head; h != NULL; h = h->next)
		printf("%d\n", h->n);
}
