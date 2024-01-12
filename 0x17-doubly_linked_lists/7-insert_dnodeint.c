#include "lists.h"
/**
 * insert_nodeint_at_index -inserts new node at a given position
 * @head: pointer to the head of a listint-t list
 * @idx: position to insert the node
 * @n: value to be held in the new inserted node
 * Return: address to the new node or NULL incase of failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *holder = *h;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = holder;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (holder == NULL || holder->next == NULL)
			return (NULL);
		holder = holder->next;
	}
	new->prev = holder;
	new->next = holder->next;
	holder->next = new;
	new->next->prev = new;

	return (new);
}
