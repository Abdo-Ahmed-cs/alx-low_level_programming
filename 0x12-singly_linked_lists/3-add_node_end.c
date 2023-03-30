#include "lists.h"

/**
 * add_node_end - add new node at the end of the list
 * @head: first node
 * @str: string array to be duplicated
 * Return: the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0, j = 1;
	list_t *new;
	list_t *h;

	h = *head;
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	while (str[i] != '\0')
	{
		i++;
	}
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (j)
	{
		if (h->next == NULL)
		{
			h->next = new;
			j = 0;
		}
		h = h->next;
	}
	return (new);
}
