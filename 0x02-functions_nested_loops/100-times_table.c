#include "main.h"

/**
 * print_times_table - prints n times table starting with 0
 *
 * @n: integer number for the number of columns and rows
 */

void print_times_table(int n)
{
	int i;
	int j;
	int z;
	int u;
	int d;

	for (i = 0; i < n + 1; i++)
	{
		if (n > 15 || n < 0)
		{
			break;
		}
		for (j = 0; j < n + 1; j++)
		{
			z = i * j;

			if (z > 9)
			{
				u = z % 10;
				d = (z - u) / 10;

				_putchar(44);
				_putchar(32);
				_putchar('0' + d);
				_putchar('0' + u);
			} else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
