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

	if (str != NULL)
	{	/* Get the length of str */
		while (str[str_size])
			str_size++;
	}
	else
		return (NULL);
	/* Allocate memory for duplicate */
	dup_str = malloc(sizeof(char) * str_size + 1);
	/* Always ask NULL return for the malloc function */
	if (dup_str == NULL)
		return (NULL);
	/* Copy the string with the 2nd. pointer */
	make_dup = dup_str;
	while (*str)
	{
		*make_dup = *str;
		make_dup++, *str++;
	}
	return (dup_str);
}
