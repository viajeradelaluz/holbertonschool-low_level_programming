#include "main.h"
/**
 * _strstr - Find first occurrence of a substring.
 * @haystack: String in which look at.
 * @needle: Target to locate.
 * Return: Beginning of located string or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ph = haystack;

	while (*needle != '\0')
	{
		for (haystack = ph; *haystack != '\0'; haystack++)
		{
			if (*needle == *haystack)
			{
				return (haystack);
			}
		}
		needle++;
	}
	return (NULL);
}
