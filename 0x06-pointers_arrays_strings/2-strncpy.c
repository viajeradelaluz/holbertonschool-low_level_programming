#include "main.h"

/**
 * _strncpy - Copy fixed length strings.
 * @dest: String's destination.
 * @src: String's source.
 * @n: Restrict length.
 * Return: Destination.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while ((c < n) && (src[c] != '\0'))
		dest[c] = src[c], c++;

	while (c < n)
		dest[c] = '\0', c++;

	return (dest);
}
