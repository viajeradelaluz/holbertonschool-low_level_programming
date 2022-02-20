#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print numbers from 0 to 14, 10 times.
 * Return: nothing.
 */
void more_numbers(void)
{
	int times, numbers;

	for (times = 0; times < 10; times++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers >= 10)
				putchar((numbers / 10) + '0');

			putchar((numbers % 10) + '0');
		}
		putchar('\n');
	}
}
