#include "monty.h"

/**
 *free_ - free 2d array
 *@parsed_buffer: array to be free
 *Return: nothing
 */
void free_(char **parsed_buffer)
{
	int i;

	for (i = 0; parsed_buffer[i] != NULL; i++)
		free(parsed_buffer[i]);
	free(parsed_buffer);
}

/**
 *free_2_ - free 2d array
 *@parsed_buffer: array to be free
 *Return: nothing
 */
void free_2_(char ***parsed_buffer)
{
	if (*parsed_buffer != NULL)
		free_(*parsed_buffer);
	*parsed_buffer = NULL;
}

/**
 *mall_c - alloc space for 3 pointers
 *@a: depending on case do some free
 *Return: a pointer to a space in heap
 */
char **mall_c(int a)
{
	char **arguments_;

	arguments_ = malloc(3 * sizeof(char *));
	if (arguments_ == NULL)
	{
		if (a == 1)
			free_all(1, 1, 1, 1, 1);
		if (a == 2)
			free_all(0, 0, 0, 1, 1);
		malloc_error();
	}
	return (arguments_);
}

/**
 *free_all - free heap
 *@a: case arguments_r
 *@b: case  cpy_line
 *@c: case file
 *@d: case buffer_line
 *@e: case list
 *Return: nothing
 */
void free_all(int a, int b, int c, int d, int e)
{
	if (info.arguments_ != NULL && a == 1)
		free_2_(info.arguments_), free(*info.arguments_), *info.arguments_ = NULL;

	if (info.cpy_line != NULL && b == 1)
		free(info.cpy_line), info.cpy_line = NULL;

	if (info.file_ != NULL && c == 1)
		fclose(info.file_), info.file_ = NULL;

	if (info.buffer_line != NULL && d == 1)
		free(info.buffer_line), info.buffer_line = NULL;

	if (info.head_list != NULL && e == 1)
		free_dlistint();
}

/**
 *fill_info - fill struct
 *@arguments_: array to be free
 *@file_: file opened
 *@buffer_line: line taken from file
 *@cpy_line: copy of buffer_line
 *Return: nothing
 */
void fill_info(char ***arguments_, FILE **file_,
		char **buffer_line, char **cpy_line)
{

	if (info.arguments_ == NULL)
		info.arguments_ = arguments_;
	info.file_ = *file_;
	info.buffer_line = *buffer_line;
	info.cpy_line = *cpy_line;
}
