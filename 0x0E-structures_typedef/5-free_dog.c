#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - Free dogs.
 * @d: pointer to free.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
