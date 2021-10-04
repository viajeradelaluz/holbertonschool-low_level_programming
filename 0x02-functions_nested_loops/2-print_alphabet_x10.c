#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Print alphabet ten times
 * Returns: Always 0
 */

void print_alphabet_x10(void)
{
	char t = 0;
	char p;

	while (t <= 9)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar(p);
		}
		_putchar('\n');
		t++;
	}
}
