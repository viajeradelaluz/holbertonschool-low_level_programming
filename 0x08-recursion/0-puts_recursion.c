#include "main.h"

/**
 * _puts_recursion - Print a string with recursion.
 * @s: String to print.
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
