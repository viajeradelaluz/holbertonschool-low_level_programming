#include "main.h"

/**
 * string_toupper - Change all lowercase letters
 * @s: String input.
 * Return: String in uppercase.
 */
char *string_toupper(char *s)
{
	int a, b;
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (a = 0; s[a]; a++)
	{
		for (b = 0; lower[b]; b++)
		{
			if (lower[b] == s[a])
			{
				s[a] = upper[b];
				break;
			}
		}
	}
	return (s);
}

/**
 * string_toupper - Change all lowercase letters
 * char *string_toupper(char *str)
 * {
 *	int i = 0;
 *	while (str[i])
 *	{
 *		if (str[i] > 96 && str[i] < 123)
 *		{
 *			str[i] = str[i] - 32;
 *		}
 *	i++;
 *	}
 *	return (str);
 * }
 */
