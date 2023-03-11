#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * check - checking from integer
 * @s: string pointer
 *
 * Return: 1 if integer 0 if not
 */

int check(char *s)
{
	int count = 0;

	while (count < strlen(s))
	{
		if (!isdigit(s[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}


/**
 * main - entry point
 *
 * Description: 'program that adds positive numbers'
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: return the multi value
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (check(argv[i]))
		{
			sum = sum + num;
		} else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
