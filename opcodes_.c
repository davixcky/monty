#include "monty.h"

void (*get_format(char *formato))(stack_t **, unsigned int)
{
	int i;

	instruction_t opcodes_cases[] = {
		{"push", push},
		{"pall",print_all},
		{"NULLo", NULL}
	};

	i = 0;
	while (i < 3)
	{
		printf("formato es %s \n", formato);
		printf("%d valor de strcmp\n",strcmp(opcodes_cases[i].opcode, formato) );
		if (strcmp(formato, opcodes_cases[i].opcode) == 0)
			return (opcodes_cases[i].f);
		i++;
	}
	printf("paso por aqu\n");
	return (NULL);
}