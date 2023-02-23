#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'the largest prime factor of choosen number'
 *
 * Return: return 0
 */

int main(void)
{
	long int num = 612852475143;
	int div = 2;

	while (1)
	{
		if (num / div == 1 && num % div == 0)
		{
			printf("%d\n", div);
			break;
		}
		if (num % div == 0)
		{
			num = num / div;
		} else
		{
			div++;
		}
	}
	return (0);
}
