#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'sum of even fib numbers less than 400000'
 *
 * Return: return 0
 */

int main(void)
{
	long fib1 = 1;
	long fib2 = 2;
	long fib3;
	long sum = 2;

	while (fib3 < 4000000)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;

		if (fib3 % 2 == 0)
		{
			sum += fib3;
		}
	}

	printf("%li\n", sum);
	return (0);
}
