#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 1
 */

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, q, 59);
	return (1);
}
