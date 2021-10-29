#include "main.h"
/**
 * _calloc - Allocate memory for an array.
 * @nmemb: elements of the array.
 * @size:  size of the array.
 * Return: *palloc on success, NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *palloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	palloc = (void *)malloc(sizeof(size) * nmemb);
	if (palloc == NULL)
		return (NULL);

	while (*palloc)
	{
		palloc[nmemb] = 0;
		nmemb--;
	}
	return (palloc);
}
