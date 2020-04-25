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
		malloc_error();
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
	*parsed_buffer = mall_c();
}


char ** mall_c()
{
	char **arguments_;

	arguments_ = malloc (4 * sizeof(char*));
	if (arguments_ == NULL)
		malloc_error();
	return arguments_;
}
void free_all_info(int case_)
{
	if (case_ == 0)
	{
		free_2_(&info.arguments_);
		free(info.arguments_), info.arguments_ = NULL;
		free(info.cpy_line), info.cpy_line = NULL;
	}
	if (case_ == 1)
	{
		fclose(info.file_);
		free(info.buffer_line), info.buffer_line = NULL, info.type = NULL;
	}
}
void prueba(stack_t ** stack, unsigned int integer_)
{

	printf("hemosito aprobaste %d \n", integer_);

}
