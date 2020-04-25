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
	fprintf(stderr, "L%u: unknown instruction %s\n", info.line_number, info.type);
	free_all(1,1,1,1,1);
	exit(EXIT_FAILURE);
}
void file_error(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
	exit(EXIT_FAILURE);
}

void invalid_args()
{
	fprintf(stderr,"L%d: usage: push integer\n", info.line_number);
	free_all(1,1,1,1,1);
	exit(EXIT_FAILURE);
}
