#include "monty.h"
/**
 * monty - Main Monty interpreter function
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * @stack: Pointer to the stack structure
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int monty(char *argv[])
{
	FILE *file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	processFile(file);
	fclose(file);
	return (EXIT_SUCCESS);
}
