#include "function_pointers.h"
/**
 * array_iterator - Print an array.
 * @array: array to print.
 * @size: length of the array.
 * @action: pointer to function to print.
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t counter = 0;

	if (array != NULL && action != NULL)
	{
		while (size--)
			action(array[counter++]);
	}
}
