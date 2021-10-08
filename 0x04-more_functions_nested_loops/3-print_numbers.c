#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Print numbers 0 to 9.
 * Return: No return.
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
}
