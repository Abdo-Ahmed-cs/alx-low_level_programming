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
	if (str == NULL)
	{
		return (NULL);
	}
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	char *s;

	s = malloc(sizeof(char) * i);
	if (s == NULL)
	{
		return (NULL);
	}
	int j;

	for (j = 0; j < i; j++)
	{
		s[j] = str[i];
	}
	return (s);
}
