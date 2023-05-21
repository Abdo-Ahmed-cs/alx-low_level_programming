#include "lists.h"

/**
 * sum_dlistint - git the sum of all data
 * @head: head of the dlinked list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
	{
		return (sum);
	}
	tmp = head;
	if (head == NULL)
	{
		return (sum);
	}
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	tmp = NULL;
	free(tmp);
	return (sum);
}
