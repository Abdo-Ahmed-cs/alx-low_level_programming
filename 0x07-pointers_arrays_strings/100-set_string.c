#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s : pointer that points to a pointer
 * @to: pointer to an array or charachters
 */

void set_string(char **s, char *to)
{
	*s = to;
}
