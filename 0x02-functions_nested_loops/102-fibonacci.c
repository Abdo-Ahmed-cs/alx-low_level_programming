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
	long long int fib1, fib2, fib3, i;

	fib1 = 1;
	fib2 = 2;

	printf("%lli, %lli, ", fib1, fib2);

	for (i = 0; i < 48; i++)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		if (i != 47)
		{
			printf("%lli, ", fib3);
		} else
		{
			printf("%lli\n", fib3);
		}
	}

	return (0);
}
