#include "main.h"
/**
 * set_string - Set the value of a pointer to a char.
 * @s: Pointer to a char.
 * @to: Char to be pointed to.
 * Return: No return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
