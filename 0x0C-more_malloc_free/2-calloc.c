#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of element
 *
 * Return: returns pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
