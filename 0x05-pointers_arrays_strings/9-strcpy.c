#include "main.h"

/**
 * _strcpy - copies string pointed to by src to dest
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	size_t i;

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
