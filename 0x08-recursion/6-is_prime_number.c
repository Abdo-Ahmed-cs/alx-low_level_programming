#include "main.h"

/**
 * evaluate - loop recursion
 * @a: integer
 * @n: integer
 *
 * Return: 1 if prime otherwise 0
 */

int evaluate(int n, int a)
{
	if (n % a == 0)
	{
		return (0);
	}
	if (a == 2)
	{
		return (1);
	}
	return (evaluate(n, a - 1));
}

/**
 * is_prime_number - loop recursion
 * @n: integer
 *
 * Return: return value of evaluate
 */

int is_prime_number(int n)
{
	int a = n / 2;

	if (n == 0 || n == 1 || n == -1)
	{
		return (0);
	}
	return (evaluate(n, a));
}
