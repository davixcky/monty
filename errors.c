#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

void malloc_error()
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

void error_on_line(unsigned int line, char *opcode)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line, opcode);
	exit(EXIT_FAILURE);
}
