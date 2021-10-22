#include "main.h"
/**
 * main - Multiplies two numbers
 * @argc: Argument's counter.
 * @argv: Argument's strings.
 * Return: 0 for the numbers.
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
