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
	const char *data_type = format;

	va_start(args, format);

	while (*data_type)
	{
		switch (*data_type++)
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
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
			continue;
		}
		if (*(data_type))
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
