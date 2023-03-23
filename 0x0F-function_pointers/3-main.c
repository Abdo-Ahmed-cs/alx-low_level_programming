#include "3-calc.h"

/**
 * main - entry point
 *
 * Description: 'calculation over 2 number'
 *
 * @argc: number of args
 * @argv: array of arguments
 *
 * Return: the result of the caluclaton of exit status
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (!f)
	{
		printf("Error\n");
		exit(99);	
	}

	if (argv[2] == '/' || argv[2] == '%' && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(num1, num2));
	return (0);
}
