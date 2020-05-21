#include "monty.h"

/**
 *pchar_error - pop error
 *Return: Nothing
 */
void pchar_error(void)
{
	fprintf(stderr, "L%d: can't pchar, value out of range\n", info.line_number);
	exit(EXIT_FAILURE);
}