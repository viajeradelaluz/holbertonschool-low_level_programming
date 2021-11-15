#include "lists.h"
/**
 * sum_listint - Sum all the data of a linked list.
 * @head: Pointer to the header of the linked list.
 * Return: Sum of the data, 0 is the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
