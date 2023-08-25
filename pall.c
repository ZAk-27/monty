#include "monty.h"
/**
 * fnc_pall - printing stack
 * @head: stack head
 * @counterl: no
 * Return: no return
*/
void fnc_pall(stack_t **head, unsigned int counterl)
{
	stack_t *h;
	(void)counterl;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
