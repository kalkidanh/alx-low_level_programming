#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initiate a variable
 * @d: header
 * @name: name
 * @age: age
 * @owner: owner of dog
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
