#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draw a diagonal line on the terminal.
 * @n: How diagonal the line would be.
 * Return: No return.
 */
void print_diagonal(int n)
{
	int c, l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (c = 0; c < n; c++)
	{
		for (l = 0; l < c; l++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
