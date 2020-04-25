#include "monty.h"

void pop_error()
{
	fprintf(stderr,"L%d: can't pop an stack empty\n", info.line_number);
	exit(EXIT_FAILURE);

}

void swap_error()
{
	fprintf(stderr,"L%d: can't swap, stack too short\n", info.line_number);
	exit(EXIT_FAILURE);
}
void pint_error()
{
	fprintf(stderr,"L%d: can't pint, stack empty\n", info.line_number);
	exit(EXIT_FAILURE);
}
void invalid_args()
{
	fprintf(stderr,"L%d: usage: push integer\n", info.line_number);
	free_all(1,1,1,1,1);
	exit(EXIT_FAILURE);
}
