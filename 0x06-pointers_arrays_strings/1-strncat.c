#include "main.h"

/**
 * _strncat - Append strings with not more than n bytes.
 * @dest: String destination.
 * @src: String input.
 * @n: Rectrcit of bytes.
 * Return: Destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	char *p2 = src;
	int c = 0;

	while (*p != '\0')
		p++;

	while (*p2 != '\0')
		c++, p2++;

	if (n > c)
		n = c;

	while ((n > 0) && (*src != '\0'))
	{
		*p++ = *src++;
		n--;
	}
	*p = '\0';

	return (dest);
}
