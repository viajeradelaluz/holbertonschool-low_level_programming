#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - ID for a dog.
 * struct dog - ID for dogs.
 * @d: my_dog structure.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
