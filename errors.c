#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

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

void custom_error(char *msg)
{
	fprintf(stderr, "%s\n", msg);
	free(msg);
	exit(EXIT_FAILURE);
}

void file_error()
{
	fprintf(stderr, "Error: Can't open file %s\n", info.name_file);
	exit(EXIT_FAILURE);
}

void error_on_line()
{
	fprintf(stderr, "L%u: unknown instruction %s\n", info.line_number, info.type);
	//free_all_info(0);
	//free_all_info(1);
	exit(EXIT_FAILURE);
}

