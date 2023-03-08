#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: string pointer
 *
 * Return: the length of s
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
