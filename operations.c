#include "monty.h"

/**
 * push - Pushes an element onto the stack.
 * @stack: Double pointer to the beginning of the stack.
 * @value: The value to be pushed onto the stack.
 *
 * Description: This function pushes a new node with the given value
 * onto the top of the stack.
 */
void push(stack_t **stack, int value)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = value;
	new_node->prev = NULL;
	if (*stack != NULL)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
	}
*stack = new_node;
}
/**
 * pall - Prints all the values on the stack.
 * @stack: Double pointer to the beginning of the stack.
 *
 * Description: This function prints all the values stored in the stack,
 * starting from the top of the stack.
 */
void pall(stack_t **stack)
{
	stack_t *current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
