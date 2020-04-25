#include "monty.h"

int main(int argc, char * argv[])
{

	FILE *file_;
	char *buffer_line, *cpy_line, **arguments_;
	size_t n_bytes_line, largo;
	void (*f)(stack_t **, unsigned int);

	buffer_line = NULL, n_bytes_line = 0;
	largo = 0;
	info.head_list = NULL;

	if (argc != 2)
		number_arguments_error();

	file_ = fopen(argv[1], "r");
	if (file_ == NULL)
		file_error(argv[1]);

	info.line_number = 0;
	while (1)
	{
		if (getline(&buffer_line, &n_bytes_line, file_) == EOF)
		{
			free_all(1,1,1,1);
			break;
		}

		if (buffer_line != NULL)
		{
			if (_is_empty(buffer_line) == 1)
				continue;
			arguments_ = mall_c(2);
			cpy_line = ft_strdup(buffer_line);
			parser(cpy_line, arguments_);
			printf("----------------------------\n");
			for(largo = 0;arguments_[largo] != NULL; largo++)
			{
				printf("%s\n", arguments_[largo]);
			}
			printf("-----------------------\n");
			fill_info(&arguments_, &file_, &buffer_line, &cpy_line);
			f = get_format(arguments_[0]);
			if (f == NULL)
				unknown_ins();
			f(info.head_list, info.line_number);
			free_all(1,1,0,0);
		}

	}
	return (0);
}
