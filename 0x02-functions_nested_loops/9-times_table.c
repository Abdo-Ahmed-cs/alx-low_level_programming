#include "main.h"

/**
 * times_table - prints 9 times table starting with 0
 */

void times_table(void)
{
	int i;
	int j;
	int z;
	int u;
	int d;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
