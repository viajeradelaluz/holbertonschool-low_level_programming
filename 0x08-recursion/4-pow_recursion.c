#include "main.h"
/**
 * _pow_recursion - Returns the value of x to the power of y.
 * @x: value to be powered.
 * @y: value to power with.
 * Return: number raised, -1 if 'y' is lower than zero.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
