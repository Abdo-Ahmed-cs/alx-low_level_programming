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
	char *pr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pr = malloc(size * nmemb);

	if (pr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size * nmemb; i++)
	{
		pr[i] = 0;
	}
	return (pr);
}
