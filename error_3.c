
#include "monty.h"

/**
 *div_error - pop error
 *Return: Nothing
 */
void div_error(void)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", info.line_number);
	exit(EXIT_FAILURE);
}

/**
 *div_error_2 - pop error
 *Return: Nothing
 */
void div_error_2(void)
{
	fprintf(stderr, "L%d: division by zero\n", info.line_number);
	exit(EXIT_FAILURE);
}