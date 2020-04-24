#include "monty.h"

void (*get_format(char *format))(stack_t **, unsigned int)
{
	int i;

	instruction_t opcodes_cases[] = {
		{"push", },
		{'\0', NULL}
	};

	i = 0;
	while (i < 2)
	{
		if (format == opcodes_cases[i].opcode)
			return (opcodes_cases[i].f);
		i++;
	}
	return (NULL);
}