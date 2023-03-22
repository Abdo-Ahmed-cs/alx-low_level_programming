#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - prints every element of array
 * @array: pointer array
 * @size: array size
 * @action: function to print array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
