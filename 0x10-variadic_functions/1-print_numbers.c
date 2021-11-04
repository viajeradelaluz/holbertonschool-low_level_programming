#include "variadic_functions.h"
/**
 * print_numbers - Print numbers.
 * @separator: strinf with ',' separator.
 * @n: variable arguments to print.
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter = 0;
	va_list args;

	va_start(args, n);

	while (counter < n)
	{
		if (counter == n - 1 || separator == NULL)
			printf("%d", va_arg(args, unsigned int));
		else
			printf("%d%s", va_arg(args, unsigned int), separator);
		counter++;
	}
	printf("\n");

	va_end(args);
}
