#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'this program prints all possile compination 10'
 *
 * Return: return 0 and exit
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
