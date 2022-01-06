#include "lists.h"

/**
 * get_dnodeint_at_index - Locate a node at specific index
 * @head: pointer to the current node of the linked list
 * @index: position of the node to locate
 * Return: the node at the index, NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (index)
		head = head->next, index--;

	return (head);
}
