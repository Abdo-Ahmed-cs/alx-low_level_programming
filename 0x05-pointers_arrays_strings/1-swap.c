#include "main.h"

/**
 * swap_int - this function below swaps the value of two integers
 * @a: the first pointer
 * @b: the second pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* this function below swaps the value of two integers */
{
	int z = *a;
	*a = *b;
	*b = z;

}
