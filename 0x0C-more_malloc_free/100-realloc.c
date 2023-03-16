#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free it
 * @ptr: pointer to memory previously allocated
 * @old_size: the ptr old size
 * @new_size: the ptr new size
 *
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *p2;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	} else if (new_size > old_size)
	{
		p = malloc(new_size);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	} else if (ptr != NULL)
	{
		p2 = ptr;
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (p2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (old_size || i < new_size); i++)
	{
		p[i] = p2[i];
	}
	free(ptr);
	return (p);
}
