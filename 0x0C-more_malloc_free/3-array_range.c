#include "main.h"
/**
 * array_range - Create an array of integers.
 * @min: minimun value of integers.
 * @max: maximun value of integers.
 * Return: *range on success, NULL on failure.
 */
int *array_range(int min, int max)
{
	int *range = NULL;
	int total = 0, counter = 0;

	if (min > max)
		return (NULL);

	total = max - min + 1;
	range = malloc(sizeof(int) * total);
	if (range == NULL)
		return (NULL);

	for (counter = 0; min <= max; counter++)
	{
		range[counter] = min;
		min++;
	}
	
	return (range);
}
