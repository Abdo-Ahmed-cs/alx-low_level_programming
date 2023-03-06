#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: array pointer
 * @size: array seize
 */

void print_diagsums(int *a, int size)
{
	int i;
	int di1 = 0;
	int di2 = 0;

	for (i = 0; i < size; i++)
	{
		di1 += a[i][i];
		di2 += a[i][size - 1 - i];
	}
	printf("%d, %d\n", di1, di2);
}
