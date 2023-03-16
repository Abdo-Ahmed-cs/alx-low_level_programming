#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum value integer
 * @max: maximum value integer
 *
 * Return: pointer of integer values
 */

int *array_range(int min, int max)
{
	int i;
	int j = 0;
	int *p;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
