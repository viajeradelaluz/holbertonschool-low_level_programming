#include "variadic_functions.h"
/**
 * print_strings - Print strings.
 * @separator: string with ',' separator.
 * @n: number of strings to print.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter = 0;
	const char *str;
	va_list args;

	va_start(args, n);

	while (counter < n)
	{
		str = va_arg(args, const char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (counter < n - 1 && separator)
			printf("%s", separator);
		counter++;
	}
	printf("\n");
	va_end(args);
}
