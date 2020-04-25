#include "monty.h"

void (*get_format(char *formato))(stack_t **, unsigned int)
{
	int i;

	instruction_t opcodes_cases[] = {
		{"push", push},
		{"pall",print_all},
		{"pint",pint},
		{"pop",pop},
		{"nop",nop},
		{"NULLo", NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (strcmp(formato, opcodes_cases[i].opcode) == 0)
			return (opcodes_cases[i].f);
		i++;
	}
	return (NULL);
}