#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'prints all arguments it receives'
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: all args followed by new line
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
