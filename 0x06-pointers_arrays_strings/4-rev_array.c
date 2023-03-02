#include "main.h"

/**
 * reverse_array - prints array in reverse
 * @a: array of integers
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
