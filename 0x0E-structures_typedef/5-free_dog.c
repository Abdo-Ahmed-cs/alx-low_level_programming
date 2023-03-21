#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog pointers
 * @d: dog pointer
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
