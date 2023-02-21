#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet
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

/**
 * main - entry point
 *
 * Description: 'this program use _putchar to print the alphapet'
 *
 * Return: return 0 and exit the program
 */

int main(void)
{
	print_alphabet();
	return (0);
}
