#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Print the last digit of a number
 * @j: Number to check
 * Return: Last digit
 */
int print_last_digit(int j)
{
	int p, f = j % 10;

	if (f < 0)
	{
		p = (f * -1);
		_putchar(p + '0');
	}
	else
	{
		_putchar(f + '0');
	}
	return (p);
}
