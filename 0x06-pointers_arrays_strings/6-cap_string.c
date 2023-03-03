#include "main.h"

/**
 * *cap_string -  capitalizes all words of a string.
 * @n: string pointer
 *
 * Return: return string n
 */

char *cap_string(char *n)
{
	int i = 0;

	while (n[i]  != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			if (n[i] == ' ' ||
			(n[i] == '\t' ||
			(n[i] == '\n' ||
			(n[i] == ',' ||
			(n[i] == ';' ||
			(n[i] == '.' ||
			(n[i] == '!' ||
			(n[i] == '?' ||
			(n[i] == '"' ||
			(n[i] == '(' ||
			(n[i] == ')' ||
			(n[i] == '{' ||
			(n[i] == '}')
				n[i + 1] -= 32;
		}
		i++;

	}
	return (n);
}
