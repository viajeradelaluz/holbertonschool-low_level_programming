#include "main.h"

/**
 * print_array - Print element of arrays.
 * @a: Input string.
 * @n: input lenght.
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c == n - 1)
			printf("%d", a[c]);
		else
			printf("%d, ", a[c]);
	}
	printf("\n");
}
