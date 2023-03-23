#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all arguments
 * @n: number of arguments
 *
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list list;
	int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);
	return (sum);
}
