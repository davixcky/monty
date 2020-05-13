#include "monty.h"
#include "stack.h"
#include "queue.h"

void print_all(stack_t **head, unsigned int line_number)
{
  (void) line_number;

  if (strcmp(info.type, "stack") == 0)
    s_print_all(head);
  else
    q_print_all(head);
}

void push(stack_t **head, unsigned int line_number)
{
  stack_t *new_node, *prev;

  (void) line_number;

  new_node = malloc(sizeof(stack_t));
  if (new_node == NULL)
    malloc_error();

  for (; *head != NULL; head = &(*head)->next)
    prev = *head;

  new_node->n = atoi(info.arg);
  new_node->next = NULL;
  new_node->prev = prev;
  *head = new_node;

  info.len++;
}

void pop(stack_t **head, unsigned int line_number)
{
  stack_t *new_node;

  (void) line_number;

  if (strcmp(info.type, "stack") == 0)
    new_node = s_pop(head);
  else
    new_node = q_pop(head);

  if (new_node == NULL)
    malloc_error();

  info.len--;
}
