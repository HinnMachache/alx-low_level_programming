#include "lists.h"
/**
 * free_dlistint - Frees List
 * @head: Pointer to head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
