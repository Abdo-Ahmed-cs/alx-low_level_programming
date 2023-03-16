#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated
 * @old_size: the ptr old size
 * @new_size: the ptr new size
 *
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
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
		p = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		return (NULL);
	}

	for(i = 0; i <= old_size; i++)
	{
		p[i] = ptr[i];
	}
	free(ptr);
	return (p);
}
