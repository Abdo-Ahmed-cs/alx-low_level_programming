#include "main.h"

/**
 * print_diagonal - print a line of character _
 *
 * @n: number of \ character
 */

void print_diagonal(int n)
{
	int i, j;
	int r = n;

	for (i = 0; i < r; i++)
	{
		if (r <= 0)
		{
			break;
		}
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
