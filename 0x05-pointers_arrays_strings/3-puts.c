#include "main.h"

/**
 * _puts - Print a string.
 * @str: Input value.
 * Return: no return.
 */
void _puts(char *str)
{
	int c;

	for (; *str != ('\0'); c++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
