#include "main.h"
/**
 * get_bit - Return the bit value at index.
 * @n: integer to check into binary notation.
 * @index: position of the bit.
 * Return: bit value, -1 on failure.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_value = 0;

	if (index > (sizeof(n) * 8))
		return (-1);
	bit_value = (n >> index) & 1;
	return (bit_value);
}
