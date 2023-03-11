#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: 'programthat prints the minimum number of
 * coins to make change for an amount of money.'
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: minumum number of coins
 */

int main(int argc, char *argv[])
{
	int coins = 0;
	int cents;

	if (argc == 2)
	{
		cents = atoi(argv[1]);	
	}

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	} else if (cents < 0)
	{
		printf("0\n");
	} else
	{

		while (cents > 0)
		{
			if (cents >= 25)
			{
				cents -= 25;
				coins++;

			} else if (cents >= 10)
			{
				cents -= 10;
				coins++;
			} else if (cents >= 5)
			{
				cents -= 5;
				coins++;
			} else if (cents >= 2)
			{
				cents -= 2;
				coins++;
			} else
			{
				 cents -= 1;
				 coins++;
			}
		}
		printf("%d\n", coins);
	}
	return (0);
}
