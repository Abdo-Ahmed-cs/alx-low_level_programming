#include <stdio.h>

/**
 * main - entry point
 *
 * Description: 'this program prints all the numbers of base 16 in lowercase'
 *
 * Return: return 0 and exit
 */

int main(void)
{
	char ch_l = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}

	for (i = 0; i < 6; i++)
	{
		putchar(ch_l);
		ch_l++;
	}
	putchar('\n');
	return (0);
}
