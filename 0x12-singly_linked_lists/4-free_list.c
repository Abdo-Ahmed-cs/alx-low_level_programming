#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: first node
 */

void free_list(list_t *head)
{
	list_t *free_me;

	if (head == NULL)
	{
		return;
	}
	free_me = head;

	if (head->next != NULL)
	{
		head = head->next;
	}
	if (free_me->str != NULL)
	{
		free(free_me->str);
	}
	if (free_me->next != NULL)
	{
		free(free_me->next);
	}
	free(free_me);
}
