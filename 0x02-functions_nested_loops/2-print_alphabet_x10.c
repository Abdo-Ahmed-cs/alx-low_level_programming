#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char ch_l = 'a';
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(ch_l + j);
		}
		_putchar('\n');
	}
}
