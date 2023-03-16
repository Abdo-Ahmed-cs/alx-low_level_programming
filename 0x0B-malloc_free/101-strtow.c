#include "main.h"
#include <stdlib.h>

/**
 * **strtow - splits a string into words
 * @str: string pointer
 *
 * Return: null on faliur otherwise return pointer of words
 */

char **strtow(char *str)
{
	int i, j;
	int k = 0;
	int wlength = 1;
	int words = 0;
	int r = 0;
	char **s;


	if (str == NULL || str == "")
	{
		return (NULL);
	}
	while (*str)
	{
		wlength++;
		if (str[k] == ' ' && str[k + 1] != ' ')
		{
			words++;
		}
		if (str[k] != ' ')
		{
			k++;
		}
	}
	s = (char **) malloc(sizeof(char *) * words);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < words; i++)
	{
		s[i] = (char *) malloc(sizeof(char) * k);
		for (j = 0; j < wlength; j++)
		{
			s[i][j] = str[r];
			r++;
		}
		s[i][r++] = '\0';
	}
	return (s);
}
