#include "monty.h"
/**
 * executeInstruction - Execute Monty bytecode instruction
 * @line: Pointer to the current line of Monty bytecode
 * @line_number: Current line number in the bytecode file
 *
 * Description: Tokenizes the instruction from the line, identifies the opcode,
 * and executes the corresponding operation.
 */
void executeInstruction(char *line, unsigned int line_number)
{
	char *arg = argv[1];
	int value = atoi(arg);
	char *opcode;

	*opcode = strtok(line, " \n\t");
	if (opcode == NULL)
	{
		return;
	}
	if (strcmp(opcode, "push") == 0)
	{
		char *arg = strtok(NULL, " \n\t");

		if (arg == NULL || !isdigit(*arg))
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		push(&stack, value);
			else if (strcmp(opcode, "pall") == 0)
			{
				pall(&stack);
			}
			else
			{
				fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
				exit(EXIT_FAILURE);
			}
	}
}
