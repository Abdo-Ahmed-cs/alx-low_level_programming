#include "main.h"

/**
 * puts_half - half of a string, followed by a new line.
 *
 * @str: pointer for string
 */

void puts_half(char *str)
{
	int index = 0;
	int len = 0;

	while (str[index++])
	{
		len++;
	}

	index = 0;

	while (str[index])
	{
		if (index > (len - 1) / 2)
		{
			putchar(str[index]);
		}
		index++;
	}
	putchar('\n');
}
