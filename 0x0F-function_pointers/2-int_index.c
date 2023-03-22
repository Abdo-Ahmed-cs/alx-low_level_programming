#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - search for integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: return index of found number or -1 on failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
