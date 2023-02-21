#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabet
 */
void print_alphabet(void)
{
	char ch_l = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(ch_l);
		ch_l++;
	}
	_putchar('\n');
}
