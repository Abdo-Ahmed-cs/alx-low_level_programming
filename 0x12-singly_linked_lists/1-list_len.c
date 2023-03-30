#include "lists.h"

/**
 * list_len - print all the elemnts of a list
 * @h: header to the list
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0, j = 1;

	if (h == NULL)
	{
		return (i);
	}
	while (j)
	{
		i++;
		if (h->next == NULL)
		{
			j = 0;
		}
		h = h->next;
	}
	return (i);
}
