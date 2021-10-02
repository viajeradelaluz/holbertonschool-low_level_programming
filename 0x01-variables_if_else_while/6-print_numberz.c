#include <stdio.h>
/**
 * main - Print numbers base 10 with putchar
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
