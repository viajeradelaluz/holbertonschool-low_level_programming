#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Print the last digit of a number
 * @j: Number to check
 * Return: Last digit
 */
int print_last_digit(int j)
{
	int f = j % 10;

	if (f < 0)
	{
		return (0 + f);
	}
	else
	{
		return (f);
	}
}
