#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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


typedef struct setting
{
	char *type;
	size_t len;
	unsigned int number_args;
	unsigned int line_number;
	/*memory free*/
	char *** arguments_;
	char *cpy_line;
	FILE *file_;
	char *buffer_line;
	/*head of the list*/
	stack_t ** head_list, **tail_list;
} setting_t;

extern setting_t info;
setting_t info;


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
void print_all(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void pop(stack_t **head, unsigned int line_number);
void pint(stack_t **head, unsigned int line_number);
void swap(stack_t **head, unsigned int line_number);
void add(stack_t **head, unsigned int line_number);

/* helpers.c */
int to_number(int *number);
int check_argument(char *opcode);
stack_t * new_node_(int n);
void free_dlistint();
stack_t *add_dnodeint_end(stack_t **head, int n);


/* errors.c */
void malloc_error();
void invalid_args();
void pint_error();
void number_arguments_error();
void file_error(char *file);
void unknown_ins();
void pop_error();

/* utils.c*/
int _isspace(int c);
int _is_empty(char *s);
char *ft_strdup(char *src);
void free_(char **parsed_buffer);
void free_2_(char ***parsed_buffer);
char ** mall_c(int a);
void free_all(int, int, int, int, int);
void fill_info(char ***, FILE **, char **, char **);

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
