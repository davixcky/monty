#include "monty.h"
#include "queue.h"
/**
 *q_add - add command
 *@head: head of the list
 *Return: nothing
 */
void q_add(stack_t **head)
{
	(void) head;
}
/**
 *q_pop - pop command
 *@head: head of the list
 *Return: nothing
 */

void q_pop(stack_t **head)
{
	stack_t *current;

	current = *head;
	current->prev = NULL;
	free(*head);
	*head = current;
}
/**
 *q_print_all - q_print_all command
 *@head: head of the list
 *Return: nothing
 */

void q_print_all(stack_t **head)
{
	stack_t *h;

	for (h = *head; h != NULL; h = h->next)
		printf("%d\n", h->n);
}
/**
 *q_pint - q_pint command
 *@head: head of the list
 *Return: nothing
 */

void q_pint(stack_t **head)
{
	printf("%d\n", (*head)->n);
}
/**
 *q_swap - q_swap command
 *@head: head of the list
 *Return: nothing
 */

void q_swap(stack_t **head)
{
	int n;
	stack_t *tmp;

	tmp = *head;
	n = tmp->n;
	tmp->n = tmp->next->n;
	tmp->next->n = n;
}

