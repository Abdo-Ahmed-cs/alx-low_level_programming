#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: the name pointer variable
 * @f: funciton pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
