#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a struct of type dog
 *
 * @d: struct of type dog to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
