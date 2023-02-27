#include "main.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: pointer for a string
 */

void print_rev(char *s)
{
	int counter = 0;

	while(*s++)
	{
		counter++;
	}

	for (counter -= 1; couter >= 0; counter--)
	{
		_putchar(*s[counter]);
	}

	_putchar('\n');
}
