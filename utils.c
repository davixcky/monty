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

