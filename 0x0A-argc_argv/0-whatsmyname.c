#include "main.h"
/**
 * main - Print the name of the program
 * @argc: Argument's counter.
 * @argv: Argument's strings.
 * Return: Program's name.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", *argv);
	return (0);
}
