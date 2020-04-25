#include "monty.h"

int main(int argc, char * argv[])
{
	stack_t * head_list;
	FILE *file_;
	char *buffer_line, *cpy_line, **arguments_;
	size_t n_bytes_line, largo;
	void (*f)(stack_t **, unsigned int);

	buffer_line = NULL, n_bytes_line = 0;
	largo = 0;
	head_list = NULL;

	if (argc != 2)
		number_arguments_error();

	file_ = fopen(argv[1], "r");
	if (file_ == NULL)
		file_error(argv[1]);

	arguments_ = mall_c();

	info.line_number = 0;
	while (getline(&buffer_line, &n_bytes_line, file_) != EOF)
	{
		if (buffer_line != NULL)
		{
			if (_is_empty(buffer_line) == 1)
				continue;
			cpy_line = ft_strdup(buffer_line);
			parser(cpy_line, arguments_);
			printf("----------------------------\n");
			for(largo = 0;arguments_[largo] != NULL; largo++)
			{
				printf("%s\n", arguments_[largo]);
			}
			printf("-----------------------\n");

			f = get_format(arguments_[0]);
			if (f == NULL)
			{
				fprintf(stderr, "L%u: unknown instruction %s\n", info.line_number, info.type);
				free_2_(&arguments_);
				free(arguments_), arguments_ = NULL;
				free(cpy_line), cpy_line = NULL;
				fclose(file_);
				free(buffer_line), buffer_line = NULL;
				exit(EXIT_FAILURE);
			}

			//			free_2_(&arguments_);
			free(arguments_), arguments_ = NULL;
			free(cpy_line), cpy_line = NULL;
			arguments_ = mall_c();

		}

	}
	free(arguments_);
	fclose(file_);
	free(buffer_line), buffer_line = NULL;
	return (0);
}
