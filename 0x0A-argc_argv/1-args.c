#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'prints the number of the arguments we have'
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: argc
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
