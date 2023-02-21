#include "main.h"

/**
 * print_to_98 - print from n to 98
 *
 * @n: the number of start index
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i > 9)
		{
			_putchar('0' + ((i - (i % 10)) / 10));
			_putchar('0' + (i % 10));
		} else
		{
			_putchar('0' + i);
		}

		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
