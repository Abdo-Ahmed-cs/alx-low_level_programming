#include "main.h"

/**
 * print_number - print a number using _putchar
 *
 * @n: integer
 */

void print_number(int n)
{
	int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('-');
	}

	k /= 10;
	if (k != 0)
	{
		print_number(k);
		_putchar((unsigned int) n % 10 + '0');
	}
}
