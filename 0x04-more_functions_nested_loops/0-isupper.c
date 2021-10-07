#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check for uppercase characters.
 * @c: Input character.
 * Return: 1 if the character is uppercase, 0 otherwise
 */
int _isupper(int c)
{
    if (c >= 65 && c <= 90)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}