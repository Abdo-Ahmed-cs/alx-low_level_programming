#include <stdio.h>
/**
 * premain - run code before main
 */

void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
