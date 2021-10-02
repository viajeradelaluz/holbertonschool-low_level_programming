#include <stdio.h>
/**
 * main - Print combinations of single-digit number
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 48; n <= 58; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
