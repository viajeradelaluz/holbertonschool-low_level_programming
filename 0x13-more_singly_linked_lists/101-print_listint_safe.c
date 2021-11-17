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

	new_head = head;
	if (new_head == NULL)
		exit(98);

	while (new_head && new_head->next)
	{
		printf("[%p] %d\n", (void *)new_head, new_head->n);
		num_nodes++;
		tail = new_head;
		new_head = new_head->next;
		
		if (tail < new_head)
		{
			printf("-> [%p] %d\n", (void *)new_head, new_head->n);
			num_nodes++;
			break;
		}
	}
	return (num_nodes);
}
