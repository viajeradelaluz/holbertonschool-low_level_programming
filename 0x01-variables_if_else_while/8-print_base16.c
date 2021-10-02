#include <stdio.h>
/**
 * main - Print numbers base 16
 * Return: Always 0
 */

int main(void)
{
	int n, a;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
