#include "lists.h"

/**
 * add_node - aadd new node at the beginning of the list
 * @head: first node
 * @str: string array to be duplicated
 * Return: the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new;
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
	new->next = *head;
	*head = new;
	return (*head);
}
