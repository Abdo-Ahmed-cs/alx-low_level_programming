#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - printing list of numbers
 * @separator: spearator character
 * @n: number of elements in the list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			printf("%d", va_arg(list, int));
		} else if (i == n - 1)
		{
			printf("%d", va_arg(list, int));
		} else
		{
			printf("%d%s", va_arg(list, int), separator);
		}
	}
	printf("\n");
	va_end(list);
}
