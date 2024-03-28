#include "monty.h"
/**
 * pop - Removes the top element of the stack.
 * @stack: Double pointer to the beginning of the stack.
 *
 * Description: This function removes the top element of the stack if it's not empty.
 * If the stack is empty, it prints an error message and exits with EXIT_FAILURE.
 */
void pop(stack_t **stack)
{
	unsigned int line_number = 0;
	stack_t *temp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	free(temp);
}
