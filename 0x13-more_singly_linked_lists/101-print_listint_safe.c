#include "lists.h"
/**
 * print_listint_safe - Print a single and circular linked list.
 * @head: Points to the first node of the linked list.
 * Return: Number of nodes of the linked list, 98 on failure.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	const listint_t *new_head = NULL, *tail = NULL;

	if (head == NULL)
		exit(98);

	new_head = head;
	while (new_head)
	{
		tail = new_head;
		printf("[%p] %d\n", (void *)new_head, new_head->n);
		new_head = new_head->next;
		num_nodes++;
		if (tail < new_head)
		{
			printf("-> [%p] %d\n", (void *)new_head, new_head->n);
			break;
		}
	}
	return (num_nodes);
}
