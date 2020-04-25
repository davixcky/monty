#include "monty.h"
void free_(char **parsed_buffer)
{
	int i;

	for (i = 0; parsed_buffer[i] != NULL; i++)
		free(parsed_buffer[i]);
	free(parsed_buffer);
}

void free_2_(char ***parsed_buffer)
{
	if (*parsed_buffer != NULL)
		free_(*parsed_buffer);
	*parsed_buffer = NULL;
}

char ** mall_c(int a)
{
	char **arguments_;

	arguments_ = malloc (3 * sizeof(char*));
	if (arguments_ == NULL)
	{
		if (a == 1)
			free_all(1,1,1,1,1);
		if (a == 2)
			free_all(0,0,0,1,1);
		malloc_error();
	}
	return arguments_;
}

void free_all(int a, int b, int c, int d, int e)
{
	if (info.arguments_ != NULL && a == 1)
		free_2_(info.arguments_),free(*info.arguments_), *info.arguments_ = NULL;

	if (info.cpy_line != NULL && b == 1)
		free(info.cpy_line), info.cpy_line = NULL;

	if (info.file_ != NULL && c == 1)
		fclose(info.file_), info.file_ = NULL;

	if (info.buffer_line != NULL && d == 1)
		free(info.buffer_line), info.buffer_line = NULL;

	if (info.head_list != NULL && e == 1)
		free_dlistint();
}

void fill_info(char ***arguments_, FILE **file_, char **buffer_line, char **cpy_line)
{

	if (info.arguments_ == NULL)
		info.arguments_ = arguments_;
	info.file_ = *file_;
	info.buffer_line = *buffer_line;
	info.cpy_line = *cpy_line;
}
