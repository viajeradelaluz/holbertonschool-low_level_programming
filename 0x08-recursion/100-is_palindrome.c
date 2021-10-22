#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String to count.
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * _cmp - Compare begining and end of a string
 * @a: string to compare.
 * @n: length of the string.
 * @b: initial position.
 * Return: 1 if are equal, 0 if it's not.
 */
int _cmp(char *a, int n, int b)
{
	if (n == 0 || n == 1)
		return (1);
	else if (a[b] == a[n])
		return (_cmp(a, n -= 1, b += 1));
	return (0);
}
/**
 * is_palindrome - Return if a string is a palindrome.
 * @s: string to evaluate.
 * Return: 1 if a string is palindrome, 0 if it's not.
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s) - 1;

	return (_cmp(s, n, 0));
}
