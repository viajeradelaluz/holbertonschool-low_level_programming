#include "main.h"

/**
 * print_diagsums - Print the sum of the two diagonals.
 * @a: Pointer to the array.
 * @size: Number of rows and columns of the array.
 * Return: No return.
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	j = (size * size) - size;

	for (i = 0; i < (size * size);)
	{
		sum1 += a[i];
		sum2 += a[j];
		j -= size - 1;
		i += size + 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
