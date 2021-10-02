#include <stdio.h>
/**
 * main - Print some letters of the alphabet
 * Return: Always 0
 */

int main(void)
{
	char apb = 'a';

	while ((apb != 'e') && (apb != 'q') && (apb <= 'z'))
	{
		putchar(apb);
		apb++;
	}
	putchar('\n');
	return (0);
}
