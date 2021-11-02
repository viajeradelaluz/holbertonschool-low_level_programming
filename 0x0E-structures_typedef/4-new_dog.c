#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * slen - Print the length of a string.
 * @s: string.
 * Return: total lenght.
 */
int slen(char *s)
{
	char *p = s;

	while (*p)
		p++;
	return (p - s);
}
/**
 * new_dog - Store dog's info.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner's dog.
 * Return: NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *input;
	int namel, ownerl, counter;

	input = malloc(sizeof(dog_t));
	if (input == NULL)
		return (NULL);

	namel = slen(name);
	ownerl = slen(owner);

	input->name = malloc(sizeof(input->name) * namel);
	if (input->name == NULL)
	{
		free(input);
		return (NULL);
	}
	for (counter = 0; counter <= namel; counter++)
		input->name[counter] = name[counter];

	input->age = age;

	input->owner = malloc(sizeof(input->owner) * ownerl);
	if (input->owner == NULL)
	{
		free(input->name), free(input);
		return (NULL);
	}
	for (counter = 0; counter <= ownerl; counter++)
		input->owner[counter] = owner[counter];
	
	return (input);
}
