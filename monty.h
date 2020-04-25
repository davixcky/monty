#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct setting
{
	char *arg;
	char *type;
	size_t len;
	unsigned int number_args;
	unsigned int line_number;
	char *name_file;
	char **arguments_;
	char *buffer_line;
	char *cpy_line;
	FILE *file_;
} setting_t;

extern setting_t info;
setting_t info;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* general.c */
void print_all(stack_t **stack, unsigned int line_number); //pall
void push(stack_t **stack, unsigned int line_number); //push
void pop(stack_t **head, unsigned int line_number); //pop

/* strings.c */
int to_number(char *number_string, int *number);

/* errors.c */
void malloc_error();
<<<<<<< Updated upstream
void error_on_line(unsigned int line, char *opcode);
void custom_error(char *msg);
=======
void error_on_line();
>>>>>>> Stashed changes
void number_arguments_error();
void file_error();

/* utils.c*/
int _isspace(int c);
int _is_empty(char *s);
char *ft_strdup(char *src);
void free_(char **parsed_buffer);
void free_2_(char ***parsed_buffer);
char ** mall_c();
void free_all_info(int case_);

/* opcode_.c*/
void (*get_format(char * formato))(stack_t **, unsigned int);

/*string_utils.c*/
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest,  char *src);
int _strncmp(char *s1, char *s2, size_t n);
int _strcmp(char *s1, char *s2);

/*parser.c*/

void parser(char *buffer_line, char **pieces);



void prueba(stack_t ** stack, unsigned int);

#endif /* MONTY_H */
