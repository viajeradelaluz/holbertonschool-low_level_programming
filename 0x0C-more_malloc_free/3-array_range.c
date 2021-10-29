#include "main.h"
/**
 * array_range - Create an array of integers.
 * @min: minimun value of integers.
 * @max: maximun value of integers.
 * Return: *range on success, NULL on failure.
 */
int *array_range(int min, int max)
{
	int values = 0;
	int *range, *array;

	if (min > max)
		return (NULL);

	values = max - min + 1;
	range = malloc(sizeof(int) * values);
	if (range == NULL)
		return (NULL);

	array = range;
	while (min <= max)
		*array++ = min++;

	return (range);
}
