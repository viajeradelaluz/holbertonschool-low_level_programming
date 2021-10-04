#include "main.h"
#include <stdio.h>
/**
 * main - Print _putchar followed by a new line
 * Return: Always 0
 */

int main(void)
{
	char *p = "_putchar\n";

	while (*p)
	{
		_putchar(*p++);
	}
	return (0);
}
