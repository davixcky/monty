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


/**
 * struct setting - representation of  heap
 *@type: type of list stack or queue
 *@len: len of list
 *@number_args: number of args after parsing
 *@line_number: line of executed command
 *@arguments_: arguments after parsing
 *@cpy_line: cpy of line  after getline
 *@file_: file executed
 *@buffer_line: line allocated by getline
 *@head_list: head of the list
 *@tail_list: tail of the list
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct setting
{
	char *type;
	size_t len;
	unsigned int number_args;
	unsigned int line_number;
	/*memory free*/
	char ***arguments_;
	char *cpy_line;
	FILE *file_;
	char *buffer_line;
	/*head of the list*/
	stack_t **head_list, **tail_list;
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


/* commands.c */
void print_all(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void pop(stack_t **head, unsigned int line_number);
void pint(stack_t **head, unsigned int line_number);
void swap(stack_t **head, unsigned int line_number);

/*commands_2.c*/
void add(stack_t **head, unsigned int line_number);
void nop(stack_t **head, unsigned int line_number);

/* helpers.c */
int to_number(int *number);
int check_argument(char *opcode);

/*execute*/
void execute_file(void);
void execute_line_(void);
void initilize_heap_(void);


/*node.c*/
stack_t *new_node_(int n);
void free_dlistint(void);
stack_t *add_dnodeint_end(stack_t **head, int n);


/* errors.c */
void malloc_error(void);
void invalid_args(void);
void pint_error(void);
void number_arguments_error(void);
void file_error(char *msg);

/*errors_2.c*/
void unknown_ins(void);
void pop_error(void);
void swap_error(void);
void add_error(void);


/* utils.c*/
int _isspace(int c);
int _is_empty(char *s);
char *ft_strdup(char *src);

/*memory_clean.c*/
void free_(char **parsed_buffer);
void free_2_(char ***parsed_buffer);
char **mall_c(int a);
void free_all(int, int, int, int, int);
void fill_info(char ***, FILE **, char **, char **);

/* get_command.c*/
void (*get_format(char *formato))(stack_t **, unsigned int);

/*read_line.c*/
void parser(char *buffer_line, char **pieces);


#endif /* MONTY_H */

