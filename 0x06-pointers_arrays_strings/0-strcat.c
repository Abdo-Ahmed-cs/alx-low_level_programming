#include "main.h"

/**
 * *_strcat - concat two strings
 *
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src(j) != '\0')
	{
		dest[i] = src[i]
		i++;
		j++;
	}
	return (dest);
}
