#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly list stack 
 * @n: integer
 * @prev: points to the previous stack element 
 * @next: points to the next stack element 
 *
 * Description: doubly list node struct
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - var -args, file, line content
 * @arg: value
 * @file: ptr to monty file
 * @content: line content
 * @lf: flag  stack to queue
 * Description: alx programm
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lf;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcodes functions
 * @opcode: the opcode
 * @f: function hndling the opcode
 *
 * Description: opcodes functions
 * for stack, queues, LIFO, FIFO alx
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void fnc_push(stack_t **head, unsigned int number);
void fnc_pall(stack_t **head, unsigned int number);
void fnc_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counterl, FILE *file);
void free_stack(stack_t *head);
void fnc_pop(stack_t **head, unsigned int counterl);
void fnc_swap(stack_t **head, unsigned int counterl);
void fnc_add(stack_t **head, unsigned int counterl);
void fnc_nop(stack_t **head, unsigned int counterl);
#endif
