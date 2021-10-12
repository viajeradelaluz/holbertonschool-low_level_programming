#include "main.h"

/**
 * puts2 - Print every other character of a string.
 * @str: Input.
 * Return: no return.
 */
void puts2(char *str)
{
	int c;

	for (c = 0; *(str + c); c++)
	{
		if (c % 2 == 0)
			_putchar(*(str + c));
	}
	_putchar('\n');
}
