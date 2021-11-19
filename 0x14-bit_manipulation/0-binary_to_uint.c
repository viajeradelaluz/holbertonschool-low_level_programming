#include "main.h"
/**
 * binary_to_uint - Convert a binary number to an integer.
 * @b: Points to the string with the binary number.
 * Return: The converted number, 0 or NULL on failure.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int integer = 0, index = 0, n = 0;

	if (b == NULL)
		return (0);

	index = strlen(b);
	while (index--)
	{
		if (b[index] == '0' || b[index] == '1')
		{
			/* Left Shif "<<" multiplies b[index] * 2^n */
			integer += (b[index] - '0') << n;
			n++;
		}
		else
			return (0);
	}
	return (integer);
}
