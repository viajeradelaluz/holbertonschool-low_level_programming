#include <stdio.h>
/**
 * main - Print some letters of the alphabet
 * Return: Always 0
 */

int main(void)
{
	char apb = 'a';

	while (apb <= 'z')
	{
		if ((apb != 'e') && (apb != 'q'))
		{
			putchar(apb);
			apb++;
		}
		else
		{
			apb++;
		}
	}
	putchar('\n');
	return (0);
}
