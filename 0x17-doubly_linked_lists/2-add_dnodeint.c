#include "lists.h"
/**
 * add_dnodeint - Adds node in the beginnig of a list
 * @head: Head pointer
 * @n: Integer to be added
 * Return: Address of newNode created
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
