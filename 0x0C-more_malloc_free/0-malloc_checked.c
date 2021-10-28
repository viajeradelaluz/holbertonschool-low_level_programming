#include "main.h"
/**
 * malloc_checked - Allocate memory using malloc
 * @b: memory needed.
 * Return: *allocate_mem on success, 98 on failure.
 */
void *malloc_checked(unsigned int b)
{
	void *allocate_mem;

	allocate_mem = malloc(b);

	if (allocate_mem == NULL)
		exit(98);

	return (allocate_mem);
}
