#include "main.h"

/**
 * *_strncpy - copiy a string
 * @dest: destination pointer
 * @src: source pointer
 * @n: bits number
 *
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
