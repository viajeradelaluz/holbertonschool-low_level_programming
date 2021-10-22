#include "main.h"
/**
 *  _math - Do the division process..
 * @n: numbert to calculate.
 * @x: start division in 1.
 * @c: count number of divisions.
 * Return: 1 for prime number, 0 if not.
 */
int _math(int n, int x, int c)
{
	if (x <= n)
	{
		if (n % x == 0)
			c += 1;
		x += 1;
		return (_math(n, x, c));
	}
	else if (c == 2)
		return (1);
	return (0);
}
/**
 * is_prime_number - Return a prime number.
 * @n: number to calculate.
 * Return: prime number
 */
int is_prime_number(int n)
{
	if (n >= 0)
		return (_math(n, 1, 0));
	return (0);
}
