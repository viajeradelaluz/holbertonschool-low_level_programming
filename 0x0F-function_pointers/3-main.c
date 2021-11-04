#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Performs simple operations.
 * @argc: number of parameters.
 * @argv: input numbers.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]), b = atoi(argv[3]), result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = f(a, b);
	if (result == -1)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", result);
	return (0);
}
