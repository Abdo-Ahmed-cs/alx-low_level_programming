#include "main.h"
#include <ctype.h>

/**
 *int _islower - checks if the letter is lowercse or upper case
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
