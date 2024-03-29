#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @index: index of the node that should be deleted
 * @head: pointer to the head of a listint_t list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *holder, *copy = *head;
	unsigned int i;

	if (copy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}

	holder = copy->next;
	copy->next = holder->next;
	free(holder);
	return (1);
}
