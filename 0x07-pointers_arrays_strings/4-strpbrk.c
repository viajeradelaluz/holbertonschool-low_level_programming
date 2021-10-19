#include "main.h"
/**
 * _strpbrk - Locate the first occurrence in a string.
 * @s: String to search.
 * @accept: Character to be match.
 * Return: Pointer since the first occurrence.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	while (*s != '\0')
	{
		for (accept = a; *accept != '\0'; accept++)
		{
			if (*s == *accept)
				return (s);
		}
		s++;
	}

	if (*s != *accept)
		return (NULL);

	return (s);
}
