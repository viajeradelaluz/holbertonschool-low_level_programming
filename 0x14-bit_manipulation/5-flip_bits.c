#include "main.h"
/**
 * flip_bits - Return the number of bits you would need
 * to flip to get from one number to another.
 * @n: first number.
 * @m: second number.
 * Return: Number of bits flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits = 0;

	while (n ^ m)
	{
		num_bits += (n ^ m) & 1;
		n >>= 1, m >>= 1;
	}
	return (num_bits);
}
