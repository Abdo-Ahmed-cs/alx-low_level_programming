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
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i == 4 || i == 16)
		{
			ch_l++;
			continue;
		}
		putchar(ch_l);
		ch_l++;
	}
	putchar('\n');
	return (0);
}
