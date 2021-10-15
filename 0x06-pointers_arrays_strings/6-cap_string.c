#include "main.h"

/**
 * cap_string - Capitalize words of a string.
 * @s: String to capitalize.
 * Return: String capitalized.
 */
char *cap_string(char *str)
{
	char ar[] = " \t\n,;.!?\"(){}"; /* Array of special characters */
	char *par = &ar[0]; /* Pointer to the array */

	if (*str > 96 && *str < 123)
		*str -= 32;

	while (*str != '\0')
	{
		for (par = &ar[0]; *par != '\0'; par++)
		{
			if (*str == *par)
			{
				str++;
				if (*str > 96 && *str < 123)
					*str -= 32;
				else
					par = &ar[0];
			}
		}
		str++;
	}
	return (str);
}
