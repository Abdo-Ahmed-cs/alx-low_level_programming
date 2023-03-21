#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * *new_dog - creating a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: null on fail otherwise pointer on success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	dog = malloc(sizeof(dog_t));
	char *dname = *name;
	char *downer = *owner;

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = dname;
	dog->age = age;
	dog->owner = downer;

	return (dog);
}
