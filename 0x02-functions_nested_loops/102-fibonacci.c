#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'print first 50 fib numbers'
 *
 * Return: return 0
 */

int main(void)
{
	long int fib1, fib2, fib3, i;

	fib1 = 1;
	fib2 = 2;

	printf("%li, %li, ", fib1, fib2);

	for (i = 0; i < 48; i++)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		if (i != 47)
		{
			printf("%li, ", fib3);
		} else
		{
			printf("%li\n", fib3);
		}
	}

	return (0);
}
