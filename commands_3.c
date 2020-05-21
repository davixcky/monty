#include "monty.h"
#include "stack.h"
#include "queue.h"


/**
 *mod_ - swap last two numbers
 *@head: head of the list
 *@line_number: line_number
 *Return: Nothing
 */
void mod_(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	if (info.len < 2)
	{
		free_all(1, 1, 1, 1, 1);
		mod_error();
	}
    if ((*info.tail_list)->n == 0)
	{
		free_all(1, 1, 1, 1, 1);
		div_error_2();
	}

	if (strcmp(info.type, "stack") == 0)
		s_mod(head);
	else
		q_mod(head);
}


/**
 *pchar_ - swap last two numbers
 *@head: head of the list
 *@line_number: line_number
 *Return: Nothing
 */
void pchar_(stack_t **head, unsigned int line_number)
{
	(void) line_number;

	if (info.len == 0)
	{
		free_all(1, 1, 1, 1, 1);
		pchar_error();
	}

    if ((*info.tail_list)->n < 32 && (*info.tail_list)->n > 126)
    {
        free_all(1, 1, 1, 1, 1);
        pchar_error_2();
    }

	if (strcmp(info.type, "stack") == 0)
		s_pchar(head);
	else
		q_pchar(head);
}

/**
 *print_string - print all elements in the list
 *@head: head of the list
 *@line_number: line_number
 *Return: Nothing
 */

void print_string(stack_t **head, unsigned int line_number)
{
	(void) line_number;
	if (info.len == 0)
	{
		printf("\n");
		return;
	}

	if (strcmp(info.type, "stack") == 0)
		s_print_string(head);
	else
		q_print_string(head);
}


void rot_(stack_t **head, unsigned int line_number)
{
	static stack_t *temp,*temp_2, *temp_3, *prev;

	(void) line_number;
	/*info.state = 1;*/
	if (info.len < 2)
		return;
	temp = *info.tail_list;
	prev = (*info.tail_list)->prev;
	temp_3 = (*info.head_list)->next;
	prev->next = NULL;
	temp->prev = NULL;
	temp->next = *info.head_list;
	(*info.head_list)->prev = temp;
	*info.head_list = temp;
	*info.tail_list = prev;
}