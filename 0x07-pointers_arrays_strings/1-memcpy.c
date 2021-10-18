#include "main.h"
/**
 * _memcpy - Copy n numbers of characters from memory.
 * @n: Number of characters to copy.
 * @src: Source of sata to copy.
 * @dest: Destination of the copy.
 * Return: Pointer to destination string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}

	return (dest);
}
