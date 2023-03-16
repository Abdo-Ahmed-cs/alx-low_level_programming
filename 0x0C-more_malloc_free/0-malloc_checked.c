#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: memory size
 *
 * Return: pointer to the allocated memory otherwise on failure NULL
 */

void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
	{
		exit(98);
	}
	return (malloc(b));
}
