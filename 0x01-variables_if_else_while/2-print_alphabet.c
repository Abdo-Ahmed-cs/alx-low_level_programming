#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'this program prints the alphapit in lower case'
 *
 * Return: return 0 and exit
 */

int main(void)
{
	char character = 'a';

	for (int i = 0; i < 26; i++)
	{
		putchar(character);
		character++;
	}
	putchar('\n');
	return (0);
}
