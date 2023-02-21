#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from n to 98
 *
 * @n: the number of start index
 */

void print_to_98(int n)
{
	int i = n;

	while (i != 98)
	{
		printf("%d", i);

		if (i != 98)
		{
			printf(", ");
		}

		if (n < 98)
		{
			i++;
		} else
		{
			i--;
		}
	}
	printf("98\n");
}
