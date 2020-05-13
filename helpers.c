#include "monty.h"
#include <ctype.h>

int to_number(char *number_string, int *number)
{
	char *tmp;

	if (number_string == NULL)
		return (0);

	for (tmp = number_string; *tmp != '\0'; tmp++)
	{
		if (*tmp == '-' || *tmp == '+')
			continue;

		if (!isdigit(*tmp))
			return (0);
	}

	*number = atoi(number_string);
	return (1);
}

int check_argument(char *op_code)
{
	char *codes[] = {"push"};
	int i;

	for (i = 0; codes[i] != NULL; i++)
		if (strcmp(codes[i], op_code) == 0)
			return (info.arg == NULL);

	return (-1);
}
