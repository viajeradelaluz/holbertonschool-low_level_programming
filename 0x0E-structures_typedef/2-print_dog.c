#include "dog.h"
#include <stdio.h>
/**
 * print_dog - See dog's information.
 * @d: dog's information.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->owner == NULL)
		printf("(nil)\n");
	if (d->name == NULL)
		printf("Name: (nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
