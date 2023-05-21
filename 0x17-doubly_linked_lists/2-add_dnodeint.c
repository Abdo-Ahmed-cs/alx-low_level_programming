#include "lists.h"

/**
 * add_dnodeint - add a new node to the start
 * @head: head of dlinked list
 * @n: value of the new node
 *
 * Return: address of new element or NULL on failure.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (*head);
}
