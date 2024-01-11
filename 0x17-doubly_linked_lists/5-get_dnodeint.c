#include "lists.h"
/**
 * get_dnodeint_at_index - Returns nth node of a list
 * @head: Pointer to head of list
 * @index: INdex of node
 * Return: The nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	int i;
	int counter;
	counter = 0;
	temp = head;
	
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	if (index >= counter)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
