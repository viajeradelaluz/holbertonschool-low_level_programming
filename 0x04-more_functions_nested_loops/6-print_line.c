#include "main.h"
#include <stdio.h>

/**
 * print_line - Drawing straight lines.
 * @n: How long the line would be.
 * Return: No return.
 */
void print_line(int n)
{
	int l;

	for (l = 1; l <= n ; l++)
	{
		putchar('_');
	}
	putchar('\n');
}
