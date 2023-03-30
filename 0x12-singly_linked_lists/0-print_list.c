#include "lists.h"

/**
 * print_list - print all the elemnts of a list
 * @h: header to the list
 * Return: the number of elements
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0, j = 1;

	while (1)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			i++;
		} else
		{
			printf("[0] (nil)\n");
			i++;
		}
		if (h->next == NULL)
		{
			break;
		}

		h = h->next;
	}
	return (i);
}
