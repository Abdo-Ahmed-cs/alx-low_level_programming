#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'prints the name of the program itself'
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: argc
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
