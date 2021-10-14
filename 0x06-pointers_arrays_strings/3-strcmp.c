#include "main.h"

/**
 * _strcmp - Compare two string without locate account.
 * @s1: String to compare.
 * @s2: String to compare.
 * Return: An integer.
 */
int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (((s1[c] != '\0') && (s2[c] != '\0')) && (s1[c] == s2[c]))
		c++;

	return (s1[c] - s2[c]);
}
