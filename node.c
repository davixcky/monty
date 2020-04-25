#include "monty.h"


stack_t *add_dnodeint_end(stack_t **head, int n)
{
	stack_t *new_node, *temp_node;

	new_node = new_node_(n);
	temp_node = *info.head_list;
	if (*head == NULL)
	{
		*head = new_node;
		*info.tail_list = new_node;
		info.len++;
		return (new_node);
	}
	while (temp_node && temp_node->next)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = new_node;
	new_node->prev = temp_node;

	*info.tail_list = new_node;
	info.len++;
	return (new_node);
}

void free_dlistint()
{
	stack_t *temp, *head;
	temp = *info.head_list;
	head =  *info.head_list;

	while (head && head->next)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
	free(temp);
	head = NULL;
}

stack_t * new_node_(int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		free_all(1,1,1,1,1);
		malloc_error();
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}
