#include "main.h"

/**
 * cap_string - Capitalize words of a string.
 * @s: String to fix.
 * Return: String capitalized.
 */
char *cap_string(char *s)
{
	char *str = s; /* Pointer to string in main */
	char ar[] = {" \t\n,;.!?\"(){}"}; /* Array of special characters */
	char *par = ar; /* Pointer to the array */

	while (*str != '\0')
	{
		for (par = &ar[0]; *par != '\0'; par++)
		{
			if (*str == *par)
			{
				str++, par++;
				if (*str > 96 && *str < 123)
					*str -= 32;
				break;
			}
		}
		str++;
	}
	return (str);
}
