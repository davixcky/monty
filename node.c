#include "monty.h"

/**
 *add_dnodeint_end - add node to the end of list
 *@head: head of the list
 *@n: number to be added to the node
 *Return: return the new node
 */
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
/**
 *free_dlistint - free list
 *Return: nothing
 */
void free_dlistint(void)
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
/**
 *new_node_ - function for creating node
 *@n: number to be added
 *Return: new node
 */
stack_t *new_node_(int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		free_all(1, 1, 1, 1, 1);
		malloc_error();
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}
