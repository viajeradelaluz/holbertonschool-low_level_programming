#include "main.h"

/**
 * cap_string - Capitalize words of a string.
 * @s: String to fix.
 * Return: String capitalized.
 */
char *cap_string(char *s)
{
	char ar[] = {" \t\n,;.!?\"(){}"};
	int c = 0;
	int par = 0;

	for (; s[c] != '\0'; c++)
	{
		for (par = 0; ar[par]; par++)
		{
			if (s[c] >= 97 && s[c] <= 122)
			{
				if (s[c - 1] == ar[par])
				{
					s[c] = s[c] - 32;
				}
				else if (c == 0)
				{
					s[c] = s[c] - 32;
				}
			}
		}
	}
	return (s);
}
