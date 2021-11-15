#include "lists.h"
/**
 * free_listint - Free a listint_t list.
 * @head: Points to the head of the linked list.
 * Return: No return.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp_pointer;

	while (head)
	{
		tmp_pointer = head;
		head = head->next;
		free(tmp_pointer);
	}
}
