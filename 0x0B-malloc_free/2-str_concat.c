#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: array pointer
 * @s2: array poibter
 *
 * Return: s1 + s2 otherwise on failure return NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k;
	int l;
	char *s;

	while (s1[i] != '\0' && *s1 != "")
	{
		i++;
	}
	while (s2[j] != '\0' && *s2 != "")
	{
		j++;
	}
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		s[k] = s1[k];
	}
	for (l = i + 1; l <= j + i; l++)
	{
		s[l] = s2[l];
	}
	s[i + j + 1] = '\0';
	return (s);
}
