#include "lists.h"
/**
 * print_dlistint - Prints Elements of a list
 * @h: Head pointer to Lists
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
