#include "lists.h"
/**
 * delete_nodeint_at_index - Delete a node at index position in a linked list.
 * @head: Points to the first node of the linked list.
 * @index: Position of the linked list to delete the node.
 * Return: 1 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head;
	listint_t *current = *head;

	if (*head == NULL)
		return (-1);

	if (index != 0)
	{
		while (index--)
		{
			previous = current;
			current = current->next;
			if (current == NULL)
				return (-1);
		}
		previous->next = current->next;
		free(current);
	}
	else
	{
		*head = current->next;
		free(current);
	}
	return (1);
}
