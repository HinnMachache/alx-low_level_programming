#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a function that searches for an integer.
 * @array: Array to consider
 * @size: array size
 * @cmp: Function Pointer
 * Return: Return integer found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
