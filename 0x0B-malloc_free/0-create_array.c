#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: Array size
 * @c: Array elements
 * Return: array Pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int counter;
	char *charPointer;

	if (size == 0)
		return (NULL);
	charPointer = (char *)malloc(sizeof(char) * size);
	if (charPointer == NULL)
		return (NULL);
	for (counter = 0; counter < size; counter++)
		*charPointer = c;
	return (charPointer);
}
