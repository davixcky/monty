#include "monty.h"

int _isspace(int c)
{
	return (c == '\t' || c == '\n' ||
			c == '\v' || c == '\f' || c == '\r' || c == ' ' ? 1 : 0);
}

int _is_empty(char *s)
{
	while (*s != '\0')
	{
		if (_isspace((unsigned char)*s) == 0)
			return (0);
		s++;
	}
	return (1);
}


char *ft_strdup(char *src)
{
	char *str;
	char *p;
	int len = 0;

	while (src[len])
		len++;
	str = malloc(len + 1);
	if (str == NULL)
	{
		free(str);
		malloc_error();
	}
	p = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}


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
	mall_c();
}

char ** mall_c()
{
	char **arguments_;

	arguments_ = malloc (4 * sizeof(char*));
	if (arguments_ == NULL)
		malloc_error();
	return arguments_;
}

void free_all(int a, int b, int c, int d)
{
	if (info.arguments_ != NULL && a == 1)
		free_2_(info.arguments_),free(*info.arguments_), *info.arguments_ = NULL;

	if (info.cpy_line != NULL && b == 1)
		free(info.cpy_line), info.cpy_line = NULL;

	if (info.file_ != NULL && c == 1)
		fclose(info.file_), info.file_ = NULL;

	if (info.buffer_line != NULL && d == 1)
		free(info.buffer_line), info.buffer_line = NULL;
}
void prueba(stack_t ** stack, unsigned int integer_)
{

	printf("hemosito aprobaste %d \n", integer_);

}
void fill_info(char ***arguments_, FILE **file_, char **buffer_line, char **cpy_line)
{
	char **args;

	args = *arguments_;

	info.line_number++;
	info.type = args[0];
	info.arguments_ = arguments_;
	info.file_ = *file_;
	info.buffer_line = *buffer_line;
	info.cpy_line = *cpy_line;
}
