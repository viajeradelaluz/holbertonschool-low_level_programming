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
	int cn, co;
	char *i_name, *i_owner;

	input = malloc(sizeof(dog_t));
	if (input == NULL)
		return (NULL);

	if (name != NULL)
	{
		i_name = malloc(slen(name) + 1);
		if (i_name == NULL)
		{
			free(input);
			return (NULL);
		}
		for (cn = 0; name[cn]; cn++)
			i_name[cn] = name[cn];
		input->name = i_name;
	}
	else
		input->name = NULL;
	input->age = age;

	if (owner != NULL)
	{
		i_owner = malloc(slen(owner) + 1);
		if (i_owner == NULL)
		{
			free(i_name);
			free(input);
			return (NULL);
		}
		for (co = 0; owner[co]; co++)
			i_owner[co] = owner[co];
		input->owner = i_owner;
	}
	else
		input->owner = NULL;
	return (input);
}
