#include "lists.h"
/**
 * sum_dlistint - Returns sum of a data(n)
 * @head: pointer tp head of list
 * Return: Return Sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
