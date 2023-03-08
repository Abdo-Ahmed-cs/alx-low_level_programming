#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string pointer
 */

void _print_rev_recursion(char *s)
{
	if(s*)
	{
		s++;
		_print_rev_recursion(s);	
	}
	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
}
