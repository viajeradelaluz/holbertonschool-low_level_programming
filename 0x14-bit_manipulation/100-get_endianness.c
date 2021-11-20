#include "main.h"
/**
 * get_endianness - Checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int number = 1;

	int *big_lit = &number;

	if (*big_lit == 0x01)
		return (1);
	else
		return (0);
}
