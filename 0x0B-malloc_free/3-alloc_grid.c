#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: width number
 * @height: height number
 *
 * Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **s;

	if (height <= 0 || width <=0)
	{
		return (NULL);
	}

	s = (int**) malloc(height * sizeof(int*));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = (int*) malloc(width * sizeof(int));
	}
	return (s);
}
