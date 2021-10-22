#include "main.h"
/**
 * main - Print all arguments received.
 * @argc: Argument's counter.
 * @argv: Argument's strings.
 * Return: 0 for the numbers.
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
