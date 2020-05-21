#include "monty.h"
/**
 *pop_error - pop error
 *Return: Nothing
 */
void pop_error(void)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", info.line_number);
	exit(EXIT_FAILURE);
}
/**
 *swap_error - pop error
 *Return: Nothing
 */
void swap_error(void)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", info.line_number);
	exit(EXIT_FAILURE);
}
/**
 *pint_error - pop error
 *Return: Nothing
 */
void pint_error(void)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", info.line_number);
	exit(EXIT_FAILURE);
}
/**
 *invalid_args - pop error
 *Return: Nothing
 */
void invalid_args(void)
{
	fprintf(stderr, "L%d: usage: push integer\n", info.line_number);
	free_all(1, 1, 1, 1, 1);
	exit(EXIT_FAILURE);
}

/**
 *sub_error - pop error
 *Return: Nothing
 */
void sub_error(void)
{
	fprintf(stderr, "L%d: can't sub, stack too short\n", info.line_number);
	exit(EXIT_FAILURE);
}
