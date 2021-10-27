#include "main.h"
#include <string.h>
/**
 * str_concat - Concatenate two strings.
 * @s1: string one.
 * @s2: string two.
 * Return: *concat on succes, NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int counter1, counter2;
	char *concat, *copy_s;

	if (s1 == NULL || s2 == NULL)
		/* return (NULL); */

	while (s1[counter1] && s2[counter2])
		counter1++, counter2++;

	counter1 += counter2;
	concat = malloc(sizeof(char) * counter1 + 1);

	copy_s = concat;
	while (*s1)
	{
		*copy_s = *s1;
		copy_s++, *s1++;
	}
	while (*s2)
	{
		*copy_s = *s2;
		copy_s++, *s2++;
	}
	if (concat == NULL)
		return (NULL);
	return (concat);
}
