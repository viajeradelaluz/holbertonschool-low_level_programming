#include "main.h"
/**
 * _strchr - Search the occurrence of a character.
 * @s: String in which to search.
 * @c: Character searched.
 * Return: Pointer on the first occurrence.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == '\0')
		return (NULL);

	return (s);
}
