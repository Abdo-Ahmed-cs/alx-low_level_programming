#include "lists.h"

/**
 * print_dlistint - print a double linked list
 * @h: header of the linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (i);
	}

	while (h->prev)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
