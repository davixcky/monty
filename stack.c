#include "monty.h"

stack_t *s_pop(stack_t **stack)
{
  return *stack;
}


void s_print_all(stack_t **head)
{
  stack_t *tail;

  tail = *head;
  while(tail->next != NULL)
    tail = tail->next;

  while(tail != *head)
  {
    printf("%d\n", tail->n);
    tail = tail->prev;
  }

  printf("%d\n", tail->n);
}