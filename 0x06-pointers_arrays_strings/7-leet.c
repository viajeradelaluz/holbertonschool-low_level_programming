#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: String to encode.
 * Return: String encoded.
 */
char *leet(char *str)
{
	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char number[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '\0'};
	int a = 0;
	int b = 0;

	for (; str[a] != '\0'; a++)
	{
		for (b = 0; letter[b] != '\0'; b++)
		{
			if (str[a] == letter[b])
			{
				str[a] = number[b];
			}
		}
	}
	return (str);
}
