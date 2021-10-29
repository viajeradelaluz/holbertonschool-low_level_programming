#include "main.h"
/**
 * string_nconcat - Concatenate two strings.
 * @s1: string one.
 * @s2: string two.
 * @n: first bytes of string two.
 * Return: *concat on success, NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count1 = 0, count2 = 0;
	char *concat, *copy_s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[count1])
		count1++;
	while (s2[count2])
		count2++;

	if (n >= count2)
		count1 += count2;
	else
		count1 += n;

	concat = malloc(sizeof(char) * (count1 + 2));
	if (concat == NULL)
		return (NULL);

	copy_s = concat;
	while (*s1)
		*copy_s++ = *s1++;

	while (*s2 && n--)
		*copy_s++ = *s2++;
	*copy_s = '\0';
	return (concat);
}
