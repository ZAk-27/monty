#include "monty.h"
/**
 * addnode - adds node to the head of the stack
 * @head: stack head
 * @n: int value
 *
 * Return: void
 */
void addnode(stack_t **head, int n)
{
	stack_t *ax, *new_item;

	ax = *head;
	new_item = malloc(sizeof(stack_t));
	if (new_item == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (ax)
		ax->prev = new_item;
	new_item->n = n;
	new_item->next = *head;
	new_item->next = NULL;
	*head = new_item;
}
