#include "monty.h"
/**
 * fnc_add - adding top 2 elements of the stack.
 * @head: stack head
 * @counterl: line_number
 * Return: no return
*/
void fnc_add(stack_t **head, unsigned int counterl)
{
	stack_t *h;
	int ln = 0, ax;

	h = *head;
	while (h)
	{
		h = h->next;
		ln++;
	}
	if (ln < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counterl);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	ax = h->n + h->next->n;
	h->next->n = ax;
	*head = h->next;
	free(h);
}