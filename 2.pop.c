#include "monty.h"
/**
 * fnc_pop - printing the top
 * @head: stack head
 * @counterl: line_number
 * Return: no return
*/
void fnc_pop(stack_t **head, unsigned int counterl)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counterl);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}