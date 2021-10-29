#include "main.h"
/**
 * _calloc - Allocate memory for an array.
 * @nmemb: elements of the array.
 * @size:  size of the array.
 * Return: *palloc on success, NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *palloc;
	unsigned int counter = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	palloc = (void *)malloc(size * nmemb);
	if (palloc == NULL)
		return (NULL);

	while (counter < (size * nmemb))
	{
		palloc[counter] = 0;
		counter++;
	}
	return (palloc);
}
