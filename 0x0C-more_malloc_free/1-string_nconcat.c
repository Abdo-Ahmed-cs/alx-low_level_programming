#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concat two strings
 * @s1: string pointer
 * @s2: string pointer
 * @n: number of bytes
 *
 * Return: pointer of s1 + n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k;
	char *str;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 == "";
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
	str = malloc(sizeof(char) * (i + j + 1));
	for (k = 0; k < i; k++)
	{
		str[k] = s1[k];
	}
	for (; k < n + i; k++)
	{
		str[k] = s2[k - i];
	}
	str[k] = '\0';
	return (str);

}
