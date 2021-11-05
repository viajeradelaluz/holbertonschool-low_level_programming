#include "variadic_functions.h"
/**
 * print_all - Print any data type.
 * @format: type of data.
 * Return: nothing.
 */
void print_all(const char *const format, ...)
{
	va_list args;
	char *sval;
	int counter = 0;

	va_start(args, format);
	while (format && format[counter])
	{
		switch (format[counter])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 's':
			sval = va_arg(args, char *);
			if (!sval)
			{
				printf("(nil)");
				break;
			}
			printf("%s", sval);
			break;
		default:
			counter++;
			continue;
		}
		if (format[counter + 1] != '\0')
			printf(", ");
		counter++;
	}
	printf("\n");
	va_end(args);
}
