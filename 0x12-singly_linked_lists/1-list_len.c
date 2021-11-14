#include "lists.h"
/**
 * list_len - Print number of elements in a list_t list.
 * @h: Pointer to the list to print.
 * Return: Number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t num_elem = 0;

	while (h)
	{
		h = h->next;
		num_elem++;
	}
	return (num_elem);
}
