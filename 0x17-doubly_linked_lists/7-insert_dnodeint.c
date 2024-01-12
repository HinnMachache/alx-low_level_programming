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

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = holder;
		*h = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (holder == NULL || holder->next == NULL)
			return (NULL);
		holder = holder->next;
	}
	new->next = holder->next;
	holder->next = new;

	return (new);
}
