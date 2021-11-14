#include "lists.h"
/**
 * free_list - Free a list_t list.
 * @head: Points to the head of the linked list.
 * Return: No return.
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);
		free(head->str);
		free(head);
	}
}
