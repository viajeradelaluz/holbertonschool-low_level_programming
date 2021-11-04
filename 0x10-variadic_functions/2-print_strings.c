#include "variadic_functions.h"
/**
 * print_strings - Print strings.
 * @separator: string with ',' separator.
 * @n: number of strings to print.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* unsigned int counter = 0; */
	const char *str = separator;
	va_list args;

	va_start(args, n);

	while (*str)
	{
		if (str == NULL)
			printf("(nil)");
		else if (str[n] || separator == NULL)
			printf("%s", va_arg(args, const char *));
		else
			printf("%s%s", va_arg(args, const char *), separator);
		str++;
	}
	printf("\n");
	va_end(args);
}
