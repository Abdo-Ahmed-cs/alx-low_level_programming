#include "main.h"

/**
 * *_strstr - locate a substing
 * @haystack: array pointer
 * @needle: array pointer
 *
 * Return: pointer to the beginning of the located substring, or
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
