#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Print the alphabet
 * Return: Always 0
 */

void print_alphabet(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		_putchar(p);
	}
	_putchar('\n');
}
