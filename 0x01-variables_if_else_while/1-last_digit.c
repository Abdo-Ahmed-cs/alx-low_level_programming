#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: 'program using if to compare the last number of integer number'
 *
 * Return: return 0 and exit the program
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0", n, n % 10);
	} else if (n % 10 > 5)
	{
		if (n > 0)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
		} else
		{
			printf("Last digit of %d is -%d and is greater than 5\n", n, n % 10);
		}
	} else if (n % 10 < 6)
	{
		if (n > 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
		} else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
		}
	}
	return (0);
}
