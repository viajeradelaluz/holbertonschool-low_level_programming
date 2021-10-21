#include "main.h"
/**
 * factorial - Returns the factorial of a given number.
 * @n: Number to calculate the factorial.
 * Return: the factorial number, 1 if the number is zero,
 * and -1 if the number is negative.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
