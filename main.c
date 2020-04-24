#include "monty.h"

int main(int argc, char * argv[])
{
	FILE *file_;
	char c, *buffer_line, *cpy_line, *arguments_;
	size_t n_bytes_line;

	buffer_line = NULL, n_bytes_line = 0;

	if (argc != 2)
		number_arguments_error();

	info.name_file = argv[1];/*name of the file*/
	file_ = fopen(argv[1], "r");
	if (file_ == NULL)
		file_error();

	arguments_ = malloc (3 * sizeof(char*));
	if (arguments_ == NULL)
		malloc_error();

	while (getline(&buffer_line, &n_bytes_line, file_) != EOF)
	{
		if (buffer_line != NULL)
		{
			/*check if its a blank line*/
			if (_is_empty(buffer_line) == 1)
				continue;
			cpy_line = ft_strdup(buffer_line);
			printf("%s\n",cpy_line);
			free(cpy_line), cpy_line = NULL;
		}
	}
	free(arguments_);
	c = fgetc(file_);
	printf("valor obtenido del file %c\n", c);
	fclose(file_);
	free(buffer_line);
	return (0);
}