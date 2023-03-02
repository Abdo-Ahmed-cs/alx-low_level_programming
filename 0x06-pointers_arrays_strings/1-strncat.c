#include "main.h"

/**
 * *_strncat - concat two strings with at most n bytes from src
 *
 * @dest: destination pointer
 * @src: source pointer
 * @n: n bytes
 *
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n);
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
