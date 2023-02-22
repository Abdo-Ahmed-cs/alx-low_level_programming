#include "main.h"
#include <stdio.h>

/**
 * main - test a file to avoide infinite loop
 *
 * Return: return 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	i = 0;
	/**
	* while (i < 10)
	* {
	*	putchar(i);
	*}
	*/
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
