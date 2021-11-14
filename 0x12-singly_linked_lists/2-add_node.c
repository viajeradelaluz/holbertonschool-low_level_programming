#include "lists.h"
/**
 * add_node - Add a new node at the beginning of a list_t list.
 * @head: Points to the head of the linked list.
 * @str: String to add into the new node.
 * Return: Address of the new element, NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
