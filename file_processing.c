#include "monty.h"
/**
 * processFile - Process the Monty bytecode file line by line
 * @file: Pointer to the opened Monty bytecode file
 *
 * Description: Reads each line of the file, tokenizes it, and executes
 * the corresponding Monty bytecode instruction.
 */
void processFile(FILE *file)
{
	 unsigned int line_number = 0;
	char *line = NULL;
	size_t len = 0;

	ssize_t = 0;

	while ((read = getline(&line, &len, file)) != -1)
	{
		line_number++;
		executeInstruction(line, line_number);
	}

	free(line);
}
