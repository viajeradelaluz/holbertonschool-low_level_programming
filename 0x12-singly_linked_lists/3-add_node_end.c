#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list_t list.
 * @head: Points to the head of the linked list.
 * @str: String to copy into the new node.
 * Return: Address of the new element, NULL on failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp_node = *head;
		while (tmp_node->next != NULL)
			tmp_node = tmp_node->next;
		tmp_node->next = new_node;
	}
	return (new_node);
}
