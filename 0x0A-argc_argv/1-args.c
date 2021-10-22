#include "main.h"
/**
 * main - Print the number of arguments.
 * @argc: Argument's counter.
 * @argv: Argument's strings.
 * Return: 0 for the numbers.
 */
int main(int argc, char *argv[])
{
	if (argc >= 1 && *argv != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
