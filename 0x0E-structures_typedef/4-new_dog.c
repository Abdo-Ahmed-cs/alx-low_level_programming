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

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
