#include "monty.h"

void (*get_format(char *formato))(stack_t **, unsigned int)
{
	int i;

	instruction_t opcodes_cases[] = {
		{"push", push},
		{"pall",print_all},
		{"pint",pint},
		{"pop",pop},
		{"NULLo", NULL}
	};

	i = 0;
	while (i < 4)
	{
		if (strcmp(formato, opcodes_cases[i].opcode) == 0)
			return (opcodes_cases[i].f);
		i++;
	}
	return (NULL);
}