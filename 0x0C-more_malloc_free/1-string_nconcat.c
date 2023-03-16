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
	int i, k, l, j = 0;
	int bytes = n;
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
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	if (bytes > j)
		bytes = j;
	while (k <= i)
	{
		str[k] = s1[k];
		k++;
	}
	l = k;
	while (l <= i + bytes)
	{
		str[l - 1] = s2[l - i - 1];
		l++;
	}
	str[l - 1] = '\0';
	return (str);
}
