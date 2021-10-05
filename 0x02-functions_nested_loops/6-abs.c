#include "main.h"
#include "stdio.h"

/**
 * _abs - Compute the obsolute value of an integer
 * @j: Number to check
 * Return: Absolute value j
 */
int _abs(int j)
{
	if (j >= 0)
	{
		return (j);
	}
	else
	{
		j *= -1;
		return (j);
	}
}
