#include "lists.h"

/**
 * dlistint_len - print a double linked list length
 * @h: header of the linked list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
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
		h = h->next;
	}
	return (i);
}
