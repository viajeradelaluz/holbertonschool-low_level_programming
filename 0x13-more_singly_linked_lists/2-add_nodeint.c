#include "lists.h"
/**
 * add_nodeint - Add a new node at the beginning of a listint_t list.
 * @head: Points to the head of the linked list.
 * @n: Integer to add into the new node.
 * Return: Address of the new element, NULL on failure.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
