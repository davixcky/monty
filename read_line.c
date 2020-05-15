#include "monty.h"
#define TOKEN_DELIMITERS "\t\n\v\f\r "
/**
 *parser - obtain arguments from line
 *@buffer_line: line
 *@pieces: storage for arguments
 *Return: nothing
 */
void parser(char *buffer_line, char **pieces)
{
	int i;
	char *piece;

	piece = strtok(buffer_line,  TOKEN_DELIMITERS);
	i = 0;
	/* at max only 3 letters*/
	info.number_args = 0;
	while (piece != NULL && i < 2)
	{
		if (_is_empty(buffer_line) == 0)
		{
			info.number_args++;
			pieces[i] = ft_strdup(piece);/*space for the string*/
		}
		i++;
		piece = strtok(NULL,  TOKEN_DELIMITERS);
	}
	pieces[i] = NULL;
}
