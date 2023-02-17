#include <stdlib.h>
#include <time.h>

/**
 *main - entry point
 *Description: 'this program compares a random number with 0'
 *Return: return 0 and exit the program
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
