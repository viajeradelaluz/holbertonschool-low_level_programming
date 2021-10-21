#include "main.h"
/**
 * _print_rev_recursion - Print a string in reverse.
 * @s: String to print.
 * Return: no return.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
