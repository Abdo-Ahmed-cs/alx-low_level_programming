#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: mul two integers in base 10
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: status 98 on failure
 */

int main(int argc; char **argv)
{
	long num1, num2;

	if (argc == 3)
	{
		long num1 = atoi(argv[0]);
		long num2 = atoi(argv[1]);
	} else
	{
		printf("Error\n");
		exit(98);
	}
	printf("%l", num1 * num2);
}
