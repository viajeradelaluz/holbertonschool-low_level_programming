#include "main.h"
#include <stdio.h>
/**
 * int _islower - Check for lowercase character
 * Returns: 1 for lowercase character, 0 otherwise
 */

int _islower(int c)
{
  if ((c = 97) && (c <= 122))
    {
      return (1);
    }
  else
    {
      return (0);
    }
  _putchar('\n');
}
