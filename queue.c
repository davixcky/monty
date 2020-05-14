#include "monty.h"
#include "queue.h"

void q_add(stack_t **head)
{
	(void) head;
}
void q_pop(stack_t **head)
{
	stack_t *current;

	current = *head;
	current->prev = NULL;
	free(*head);
	*head = current;
}

void q_print_all(stack_t **head)
{
	stack_t *h;

	for (h = *head; h != NULL; h = h->next)
		printf("%d\n", h->n);
}

void q_pint(stack_t **head)
{
	printf("%d\n", (*head)->n);
}

void q_swap(stack_t **head)
{
	int n;
	stack_t *tmp;

	tmp = *head;
	n = tmp->n;
	tmp->n = tmp->next->n;
	tmp->next->n = n;
}

