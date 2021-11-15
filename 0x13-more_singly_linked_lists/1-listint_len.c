#include "lists.h"
/**
 * listint_len - Print numbers of elements in a listint_len list.
 * @h: Pointer to the list to print.
 * Return: Number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_elem = 0;

	while (h)
	{
		h = h->next;
		num_elem++;
	}
	return (num_elem);
}
