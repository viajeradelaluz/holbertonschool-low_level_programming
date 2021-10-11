#include "main.h"

/**
 * swap_int - Swap the value of two integers.
 * @a: Input value.
 * @b: Input value.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int ch;

	ch = *a;
	*a = *b;
	*b = ch;
}
