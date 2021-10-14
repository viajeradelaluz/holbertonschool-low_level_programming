#include "main.h"

/**
 * reverse_array - Reverse the content of an array.
 * @a: Input of the string.
 * @n: Lengh of the string.
 * Return: no return.
 */
void reverse_array(int *a, int n)
{
	int *p = a; /* Point to the string */
	int c = 0; /* Initial position */
	int temp; /* Temporal position */

	n--; /* no null */
	while (c < n)
	{
		temp = *(p + c);
		*(p + c) = *(p + n);
		*(p + n) = temp;
		c++;
		n--; /* Decrece the position */
	}
}
