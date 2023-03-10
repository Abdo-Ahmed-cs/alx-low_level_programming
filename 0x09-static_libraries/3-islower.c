#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if the letter is lowercse or upper case
 *
 * @c: character letter
 *
 * Return: return 1 if is lower else return 0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
