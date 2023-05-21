#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    size_t count = 0;

    head = NULL;
    new = add_dnodeint(&head, 0);
    new = add_dnodeint(&head, 1);
    new = add_dnodeint(&head, 2);
    new = add_dnodeint(&head, 3);
    new = add_dnodeint(&head, 4);
    new = add_dnodeint(&head, 98);
    new = add_dnodeint(&head, 402);
    new = add_dnodeint(&head, 1024);
    count = print_dlistint(head);
    printf("-> %lu elements\n", count);
    return (EXIT_SUCCESS);
}
