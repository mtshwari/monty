#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L

#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Struct for the stack (or queue) */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
}
stack_t;
extern stack_t *stack;
/* Struct for instructions */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
}
instruction_t;
/* Function prototypes */
int main(int argc, char *argv[], stack_t *stack);
void processFile(FILE *file);
void push(stack_t **stack, int value);
void executeInstruction(char *line, unsigned int line_number);
void pall(stack_t **stack);
void pint(stack_t **stack);
void pop(stack_t **stack);
void swap(stack_t **stack);
void add(stack_t **stack);
void nop(stack_t **stack);

#endif /* MONTY_H */
