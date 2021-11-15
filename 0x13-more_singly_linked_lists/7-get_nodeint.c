#include "lists.h"
/**
 * get_nodeint_at_index - Get the data of a node at index
 * @head: Points to the head of the linked list.
 * @index: Node index starting at 0.
 * Return: Data of node at index, NULL if the node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		counter++;
	}
	return (head);
}
