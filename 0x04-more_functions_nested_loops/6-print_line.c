#include "main.h"

/**
 * print_line - print a line of character _
 *
 * @n: number of _ character
 */

void print_line(int n)
{
	int i;
	int r = n;

	for (i = 0; i < r; i++)
	{
		if (r <= 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
