#include "monty.c"
/**
 * add - Adds the top two elements of the stack.
 * @stack: Double pointer to the beginning of the stack.
 *
 * Description: This function adds the top two elements of the stack
 * if the stack contains at least two elements. If the stack contains
 * less than two elements, it prints an error message and exits with
 * EXIT_FAILURE. The result is stored in the second top element of the stack,
 * and the top element is removed.
 */
void add(stack_t **stack)
{
	unsigned int line_number = 0;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	pop(stack);
}
