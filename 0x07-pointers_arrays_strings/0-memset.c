#include "main.h"
/**
 * _memset - Fill the first n bytes of the memory.
 * @s: String input.
 * @b: Constar byte to replace.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
