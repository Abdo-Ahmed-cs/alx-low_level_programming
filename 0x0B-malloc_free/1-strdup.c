#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 *
 * @str: pointer to a string
 *
 * Return: pointer on success otherwise null
 */

char *_strdup(char *str)
{
	int i = 0;
	char *s;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * i);
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		s[j] = str[i];
	}
	return (s);
}
