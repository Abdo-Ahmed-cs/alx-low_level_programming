#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'this program prints the size of every data type'
 *
 * Return: return 0 and exit the program 
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char: %d\n byte(s)",sizeof(a));
	printf("Size of a int: %d\n byte(s)",sizeof(b));
	printf("Size of a long int: %d\n byte(s)",sizeof(c));
	printf("Size of a long long int: %d\n byte(s)",sizeof(d));
	printf("Size of a float: %d\n byte(s)",sizeof(e));
	return (0);
}
