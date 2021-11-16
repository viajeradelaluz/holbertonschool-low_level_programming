#include "lists.h"
/**
 * print_listint - Print all elements of a listint_t list.
 * @h: Pointer to the list to print.
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
