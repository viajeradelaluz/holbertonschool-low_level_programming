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
	int c, s, add = 0;

	for (c = 1; c < argc; c++)
	{
		for (s = 0; argv[c][s] != '\0'; s++)
		{
			if (!isdigit(argv[c][s]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[c]);
	}
	printf("%d\n", add);
	return (0);
}
