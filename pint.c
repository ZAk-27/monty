#include "monty.h"
/**
 * fnc_pint - printing the top
 * @head: stack head
 * @counterl: line_number
 * Return: no return
*/
void fnc_pint(stack_t **head, unsigned int counterl)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counterl);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
