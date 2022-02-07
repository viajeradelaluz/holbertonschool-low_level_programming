#include "main.h"
#include <ctype.h>
/**
 * _argv - Evaluate *argv for special characters.
 * @s: string input.
 * Return: string evaluated.
 */
int _argv(char *s)
{
	if (!isdigit(*s))
		return(*s++);
	printf("Error\n");
	return (1);
}
/**
 * main - Adds positive numbers.
 * @argc: Argument's counter.
 * @argv: Argument's strings.
 * Return: 0 for the add, 1 for error.
 */
int main(int argc, char *argv[])
{
	int c, add = 0;

	if (argc > 1)
	{
		for (c = 1; c < argc; c++)
		{
 			if (atoi(argv[c]))
				add += atoi(argv[c]);
			else if (!isdigit(*argv[c]))
				return (_argv(*argv));
			add += atoi(argv[c]);
		}
		printf("%d\n", add);
	}
	else
		printf("%d\n", 0);
	return (0);
}
