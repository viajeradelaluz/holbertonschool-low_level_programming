#include "main.h"
/**
 * clear_bit - Set a bit as false, or 0.
 * @n: integer to check into binary notation.
 * @index: position of the bit to set.
 * Return: 1 on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
