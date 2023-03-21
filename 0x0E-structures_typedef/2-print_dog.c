#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print all dog data
 * @d: struct dog pointer variable
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (dog->name == NULL)
	{
		printf("Name: (nil)");
	} else
	{
		printf("Name: %s", d->name);
	}
	if (dog->age == 0)
	{
		printf("Age: (nil)");
	} else
	{
		printf("Age : %f", d->age);
	}
	if (dog->owner == NULL)
	{
		printf("Owner: (nil)");
	} else
	{
		printf("Owner: %s", d->owner);
	}
}
