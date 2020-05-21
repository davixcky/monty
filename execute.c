#include "monty.h"
/**
 *initilize_heap_ - initilize variables
 *Return: return nothing
 */
void initilize_heap_(void)
{
	info.type = "stack";
	info.len = 0;
	info.line_number = 1;
	info.arguments_ = NULL;
	info.cpy_line = NULL;
	info.file_ = NULL;
	info.buffer_line = NULL;
	info.state = 0;

}
/**
 *execute_file - execute_file
 *Return: exit if error
 */
void execute_file(void)
{
	char *buffer_line;
	size_t n_bytes_line;

	buffer_line = NULL, n_bytes_line = 0;
	while (1)
	{
		if (getline(&buffer_line, &n_bytes_line, info.file_) == EOF)
		{
			free_all(1, 1, 1, 1, 1);
			break;
		}

		if (buffer_line != NULL)
		{
			if (_is_empty(buffer_line) == 1)
			{
				info.line_number++;
				continue;
			}
			info.buffer_line = buffer_line;
			execute_line_();
		}
	}

}
/**
 *execute_line_ - execute line of the file
 *Return: return error if found
 */
void execute_line_(void)
{
	char *cpy_line, **arguments_;
	void (*f)(stack_t **, unsigned int);

	arguments_ = mall_c(2);

	cpy_line = ft_strdup(info.buffer_line);

	parser(cpy_line, arguments_);

	info.arguments_ = &arguments_;
	info.cpy_line = cpy_line;

	f = get_format(arguments_[0]);
	if (f == NULL)
		unknown_ins();
	f(info.head_list, info.line_number);
	info.line_number++;
	free_all(1, 1, 0, 0, 0);
	info.arguments_ = NULL;
	info.cpy_line = NULL;

}

