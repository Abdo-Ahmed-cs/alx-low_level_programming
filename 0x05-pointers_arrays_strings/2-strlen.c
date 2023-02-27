#include "main.h"
#include <stdio.h>

/**
 * _strlen - gives the length of a string
 * @s: a pointer to the array of characters
 *
 * Return: return the lenght of str
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
