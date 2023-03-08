#include "main.h"

/**
 * evaluate - loops recursion
 * @n: integer number
 * @a: integer number
 *
 * Return: -1 if not sqrt otherwise sqrt of n
 */

int evaluate(int n, int a)
{
	if (a >= n / 2)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return (a);
	}
	return (evaluate(n, a + 1));
}

/**
 * _sqrt_recursion - loops recursion
 * @n: integer number
 *
 * Return: the return value of evaluate
 */

int _sqrt_recursion(int n)
{
	int a = 0;

	if (n == 1)
	{
		return (1);
	}

	return (evaluate(n, a));
}
