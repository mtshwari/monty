#include "monty.h"
/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Double pointer to the beginning of the stack.
 *
 * Description: This function swaps the top two elements of the stack
 * if the stack contains at least two elements. If the stack contains
 * less than two elements, it prints an error message and exits with
 * EXIT_FAILURE.
 */
void swap(stack_t **stack)
{
	unsigned int line_number = 0;
	int temp = (*stack)->n;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
