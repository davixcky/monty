#include "monty.h"
/**
 *_isspace - check if for delimiters
 *@c: character to be evaluated
 *Return: return 1 on success 0 failure
 */
int _isspace(int c)
{
	return (c == '\t' || c == '\n' ||
			c == '\v' || c == '\f' || c == '\r' || c == ' ' ? 1 : 0);
}
/**
 *_is_empty - check for blank line
 *@s: line to be evaluated
 *Return: return 1 on success 0 failure
 */
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

/**
 *ft_strdup - allocate some space str
 *@src: string to be copied
 *Return: return pointer to heap
 */
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

