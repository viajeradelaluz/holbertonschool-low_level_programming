#include <stdio.h>
/**
 * main - Print alphABET
 * Return: Always 0
 */

int main(void)
{
	char apb, APB;

	for (apb = 'a'; apb <= 'z'; apb++)
	{
		putchar(apb);
	}
	for (APB = 'A'; APB <= 'Z'; APB++)
	{
		putchar(APB);
	}
	putchar('\n');
	return (0);
}
