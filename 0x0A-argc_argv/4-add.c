#include "main.h"
#include <ctype.h>
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
			if (atoi(argv[c]) < 0)
				continue;
			else if (!isdigit(*argv[c]))
			{
				printf("Error\n");
				return (1);
			}
			add += atoi(argv[c]);
		}
		printf("%d\n", add);
	}
	else
		printf("%d\n", 0);
	return (0);
}
