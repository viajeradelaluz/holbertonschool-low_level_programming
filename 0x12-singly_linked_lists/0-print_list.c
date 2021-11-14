#include "lists.h"
/**
 * print_list - Print all elements of a list_t list.
 * @h: Pointer to the list to print.
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
