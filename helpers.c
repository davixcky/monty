#include "monty.h"
#include <ctype.h>
/**
 * to_number - check if is a digit
 *@number: number to be converted
 *Return: return 0 if fail 1 success
 */
int to_number(int *number)
{
	char *tmp;
	char **args;

	args = *info.arguments_;

	if (args[1] == NULL)
	{
		return (0);
	}

	for (tmp = args[1]; *tmp != '\0'; tmp++)
	{
		if (*tmp == '-' || *tmp == '+')
			continue;

		if (isdigit(*tmp) == 0)
		{
			return (0);
		}
	}

	*number = atoi(args[1]);
	return (1);
	/*1 sucesss 0 no digit*/
}


/**
 *check_argument - check if arguments_
 *@op_code: arguments_
 *Return: return 1 success 0 error
 */
int check_argument(char *op_code)
{
	char *codes[] = {"push"};
	int i;

	for (i = 0; codes[i] != NULL; i++)
		if (strcmp(op_code, codes[i]) == 0)
			return (1);
	return (0);/* 1 success 0 otherwise*/
}

