#include "main.h"
#include <stdio.h>
/**
 * _islower - Check for lowercase character
 * @c: Characters to check
 * Return: 1 for lowercase character, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
