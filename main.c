#include "monty.h"

/**
 *main - main task is to open the file
 *@argc: number of arguments cmd
 *@argv: number of commands in cmd
 *Return: return 0 if no problem exit(1) fail
 */
int main(int argc, char *argv[])
{
	FILE *file_;

	stack_t *head_list, *tail_list;

	head_list = NULL, tail_list = NULL;
	info.head_list = &head_list;
	info.tail_list = &tail_list;

	/*intitizle heap*/
	initilize_heap_();
	if (argc != 2)
		number_arguments_error();
	/*file handling*/
	file_ = fopen(argv[1], "r");
	if (file_ == NULL)
		file_error(argv[1]);
	/*execute*/
	info.file_ = file_;
	execute_file();

	return (0);
}

