#include "main.h"

/**
 * rev_string - Reverse a string.
 * @s: String input.
 * Return: no return.
 */
void rev_string(char *s)
{
	char *begin = s;
	char t;

	/*Set pointer at the end*/
	for (; *(s); s++)
	{
	}
	s--; /*no null*/

	/*Loop to change the letters*/
	for (; s >= begin; s--)
	{
		t = *begin;
		*begin = *s;
		*s = t;
		begin++;
	}
}
