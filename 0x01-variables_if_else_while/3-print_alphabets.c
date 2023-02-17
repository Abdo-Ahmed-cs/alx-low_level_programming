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
	char ch_l = 'a';
	char ch_k = 'A';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ch_l);
		ch_l++;
	}
	for (i = 0; i < 26; i++)
	{
		putchar(ch_k);
		ch_k++;
	}
	putchar('\n');
	return (0);
}
