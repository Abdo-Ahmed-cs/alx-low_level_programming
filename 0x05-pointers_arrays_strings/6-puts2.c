#include "main.h"

/**
 * puts2 - prints a string, followed by a new line, to stdout.
 * @str: pointer for cahracters
 */

void puts2(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
		index++;
	}
	_putchar('\n');
}
