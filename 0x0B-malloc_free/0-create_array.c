#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars and initialize it with a
 * specific char
 *
 * @size: the size of the array
 * @c: the character used to fill the array
 *
 * Return: null if size = 0 or if it fails
 * otherwise return a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
