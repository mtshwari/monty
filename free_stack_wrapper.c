#include "monty.h"
/**
 * free_stack_wrapper - Wrapper function for free_stack
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number being executed
 */
void free_stack_wrapper(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	free_stack(*stack);
}
