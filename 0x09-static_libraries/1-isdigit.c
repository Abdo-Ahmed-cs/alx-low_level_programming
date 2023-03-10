#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for digits
 *
 * @c: character
 *
 * Return: 1 if digit otherwise 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
