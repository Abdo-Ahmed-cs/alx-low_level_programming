#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concat two strings
 * @s1: string one
 * @s2: string two
 * @n: bytes of string 2
 *
 * Return: pointer of two strings ncancated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n > j)
	{
		n = j;
	}
	str = malloc(sizeof(char) * (i + n + 1));
	if (str)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		str[k] = s1[k];
	}
	for (; k < i + n; k++)
	{
		str[k] = s2[k - i];
	}
	str[k] = '\0';
	return (str);

}
