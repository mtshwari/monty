#include "monty.h"
/**
 * pint - Prints the value at the top of the stack.
 * @stack: Double pointer to the beginning of the stack.
 *
 * Description: This function prints the value at the top of the stack,
 * followed by a new line.
 */
void pint(stack_t **stack)
{
	unsigned int line_number = 0;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
