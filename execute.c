#include "monty.h"
/**
* execute - executing the opcode
* @stack: head - stack
* @counterl: line_number
* @file: ptrr to monty file
* @content: line contnt
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int counterl, FILE *file)
{
	instruction_t oppst[] = {
				{"push", fnc_push}, {"pall", fnc_pall}, {"pint", fnc_pint},
				{"pop", fnc_pop},
				{"swap", fnc_swap},
				{"add", fnc_add},
				{"nop", fnc_nop},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *opp;

	opp = strtok(content, " \n\t");
	if (opp && opp[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (oppst[i].opcode && opp)
	{
		if (strcmp(opp, oppst[i].opcode) == 0)
		{	oppst[i].f(stack, counterl);
			return (0);
		}
		i++;
	}
	if (opp && oppst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counterl, opp);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
