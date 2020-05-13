#include "monty.h"

stack_t *q_pop(stack_t **stack)
{
  return *stack;
}

void q_print_all(stack_t **head)
{
  stack_t *h;

  for (h = *head; h != NULL; h = h->next)
    printf("%d\n", h->n);
}
