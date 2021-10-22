#include "main.h"
/**
 *  _math - Do square root process.
 * @n: numbert to calculate.
 * @r: result of calculation.
 * Return: n for the result.
 */
int _math(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r > n)
		return (-1);
	return (_math(n, 1 + r));
}
/**
 * _sqrt_recursion - Return the natural square root of a number.
 * @n: number to calculate.
 * Return: square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_math(n, 1));
}
