#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'print the first 98 fibbonitchi numbers'
 *
 * Return: return 0
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}

	fib1_half1 = fib1 / 
	return (0);
}
