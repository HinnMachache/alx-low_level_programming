#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: ponter to the head ot listint_t list
 * @index: nth value
 * Return:  nth node of a listint_t linked list or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
