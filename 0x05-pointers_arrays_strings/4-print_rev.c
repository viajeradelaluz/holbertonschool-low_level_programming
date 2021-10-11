#include "main.h"
#include <string.h>

/**
 * print_rev - Print a string
 * @s: String input.
 * Return: no return.
 */
void print_rev(char *s)
{
	int c = 0;

	for (; *(s + c); c++)
	{
	}
	c = c - 1;
	for (; c >= 0; c--)
	{
		_putchar(*(s + c));
	}
	_putchar('\n');
}
