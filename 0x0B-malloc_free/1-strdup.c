#include "main.h"
/**
 * _strdup - Duplicate a string.
 * @str: string to duplicate
 * Return: NULL if the str is NULL,
 * and *dup_str on success.
 */
char *_strdup(char *str)
{
	unsigned int str_size = 0;
	char *dup_str, *make_dup;

	while (str[str_size])
		str_size++;

	dup_str = malloc(sizeof(char) * str_size);

	if (str_size > 1 && str != NULL)
	{
		make_dup = dup_str;
		while (*str)
		{
			*make_dup = *str;
			make_dup++, *str++;
		}
		return (dup_str);
	}
	return (NULL);
}
