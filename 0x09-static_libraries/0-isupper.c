#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for upper case ch
 *
 * @c: character
 *
 * Return: 1 if upper , 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
