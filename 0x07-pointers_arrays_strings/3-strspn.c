#include "main.h"
/**
 * _strspn - Return the length of a string.
 * @s: String to count.
 * @accept: Character searched.
 * Return: No return value.
 */
unsigned int _strspn(char *s, char *accept)
{
	char *pa = accept;
	int c = 0;

	while (*s != '\0')
	{
		for (accept = pa; *accept != '\0'; accept++)
		{
			if (*s == *accept)
			{
				c++;
				break;
			}
		}
		if (*accept == '\0')
			break;
		s++;
	}
	return (c);
}
