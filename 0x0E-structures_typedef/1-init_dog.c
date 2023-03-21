#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializing a new dog object
 * @d: struct dog pointer variable
 * @name: dog name
 * @age: dog age
 * @owner: owener name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
