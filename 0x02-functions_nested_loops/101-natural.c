#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'this program prints numbers that can be divided by 5 of 3'
 *
 * Return: return 0 and exit the program
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);

}
