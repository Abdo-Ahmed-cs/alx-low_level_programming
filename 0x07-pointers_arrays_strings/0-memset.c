#include "main.h"

/**
 * *_memset - fill the first n byte of memory with const byte
 * @s: pointer to an array
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
