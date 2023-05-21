#include "lists.h"

/**
 * free_dlistint - free dlinked list
 * @head: head node
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}

	free(head);
}
