#include "monty.h"

void malloc_error()
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

void number_arguments_error()
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

void unknown_ins()
{
	fprintf(stderr, "L%u: unknown instruction %s\n", info.line_number, *(info.arguments_[0]));
	free_all(1,1,1,1,1);
	exit(EXIT_FAILURE);
}
void file_error(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
	exit(EXIT_FAILURE);
}
void add_error()
{
	fprintf(stderr,"L%d: can't add, stack too short\n", info.line_number);
	exit(EXIT_FAILURE);
}


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
