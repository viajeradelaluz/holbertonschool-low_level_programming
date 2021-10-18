#include "main.h"
/**
 * _memset - Fill the first n bytes of the memory.
 * @n: Number of bytes to fill.
 * @s: Space in memory to fill.
 * @b: Value to be set.
 * Return: Pointer to the block of memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		if (*s == '\0')
			*s = b;
		s++;
		n--;
	}
	return (s);
}
