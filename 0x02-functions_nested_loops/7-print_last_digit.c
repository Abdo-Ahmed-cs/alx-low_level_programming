#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - return the value of the last digit
 *
 * @n: an integer number
 *
 * Return: return the last digit of n
 */

int print_last_digit(int n)
{
	int last = abs(n % 10);

	_putchar('0' + last);
	return (last);
}
