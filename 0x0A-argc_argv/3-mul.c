#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Description: 'program that multiplies two numbers'
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: return the multi value
 */

int main(int argc, char *argv[])
{
	int i;
	int multi;

	if (argc == 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		multi = num1 * num2;
	} else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", multi);
	return (0);

}
