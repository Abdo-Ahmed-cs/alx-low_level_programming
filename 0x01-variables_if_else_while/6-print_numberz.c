#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'this program prints the numbers from 0 to 9'
 *
 * Return: return 0 and exit
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
