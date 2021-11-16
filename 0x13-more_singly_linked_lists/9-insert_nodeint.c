#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a new node at a certain position.
 * @head: Points to the first node of the linked list.
 * @idx: Position of the list to insert the new node.
 * @n: Data to insert into the new node.
 * Return: Address of the new node, NULL on failure.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp_node = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	if (idx != 0)
	{
		while (--idx)
		{
			tmp_node = tmp_node->next;
			if (tmp_node == NULL)
			{
				free(new_node);
				return (NULL);
			}
		}
		new_node->next = tmp_node->next;
		tmp_node->next = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
