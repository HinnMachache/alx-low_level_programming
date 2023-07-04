#include "lists.h"
#include <string.h>
/**
 * add_node - adda a new node at the beginning of a list_t list
 * @head: pointer to the head of list_t list
 * @str: string to be duplicated in the new wode
 * Return: address of the new element or NULL in case of failure
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	i = strlen(str);
	temp->len = i;
	temp->next = *head;

	*head = temp;
	return (temp);
}
