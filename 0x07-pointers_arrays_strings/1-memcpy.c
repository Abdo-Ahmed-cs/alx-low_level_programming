#include "main.h"

/**
 * *_memcpy - copies n bytes from memort area scr to dest
 * @dest: destination array pointer
 * @src: source array pointer
 * @n: number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
