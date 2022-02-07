#include "variadic_functions.h"
/**
 * sum_them_all - Sum all the parameters.
 * @n: variable arguments to sum.
 * Return: sum on success.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter = 0;
	unsigned int sum = 0;
	va_list args;

	va_start(args, n);

	while (counter < n)
	{
		sum += va_arg(args, unsigned int);
		counter++;
	}
	va_end(args);

	return (sum);
}
