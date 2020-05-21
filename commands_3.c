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