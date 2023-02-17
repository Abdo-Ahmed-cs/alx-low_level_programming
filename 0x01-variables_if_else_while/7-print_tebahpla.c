#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'this program prints the alphapit in lower case reversed'
 *
 * Return: return 0 and exit
 */

int main(void)
{
	char ch_l = 'z';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ch_l);
		ch_l--;
	}
	putchar('\n');
	return (0);
}
