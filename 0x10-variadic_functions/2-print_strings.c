#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - printing strings
 * @separator: seperator character
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(list, char *);

		if (!separator)
		{
			printf("%s", str);
		} else if (str == NULL)
		{
			printf("(nil)");
		} else if (i == n - 1)
		{
			printf("%s", str);
		} else
		{
			printf("%s%s", str, separator);
		}
	}
	printf("\n");
	va_end(list);
}
