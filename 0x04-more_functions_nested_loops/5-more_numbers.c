#include "main.h"

/**
 * more_numbers - prints nums from 0 to 9
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + 1);
			}
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
