#include "lists.h"
/**
 * pop_listint - Delete the head node of a likend list.
 * @head: Points to the head of the linked list.
 * Return: Data in the head node, 0 if the linkend list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp_node;
	int node_data;

	if (*head == NULL)
		return (0);

	tmp_node = *head;
	node_data = tmp_node->n;
	*head = tmp_node->next;
	free(tmp_node);
	return (node_data);
}
