#include "lists.h"
/**
 * free_listint2 - Free a likend list.
 * @head: Points to the head of the linked list.
 * Return: No return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_pointer = NULL;

	while (*head)
	{
		tmp_pointer = (*head)->next;
		free(*head);
		*head = tmp_pointer;
	}
}
