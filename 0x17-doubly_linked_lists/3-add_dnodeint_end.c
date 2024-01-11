#include "lists.h"
/**
 * add_dnodeint_end - Adds node at end of list
 * @head: Head pointer
 * @n: Data to be added
 * @Return: Addredd of node created
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
		newNode->prev = temp;
		temp = newNode;
	}

	return (newNode);
}
