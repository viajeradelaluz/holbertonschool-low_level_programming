#include "lists.h"
/**
 * add_node - Add a new node at the beginning of a list_t list.
 * @head: Points to the head of the linked list.
 * @str: String to add into the new node.
 * Return: Address of the new element, NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
