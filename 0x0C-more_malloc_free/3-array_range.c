#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @min: The minimal value
 * @max: the max value
 * Return: pointer to th array
 */
int *array_range(int min, int max)
{
	int *arrayPointer;
	int counter, arraySize;

	if (min > max)
		return (NULL);
	arraySize = (max - min) + 1;
	arrayPointer = malloc(sizeof(int) * arraySize);
	if (arrayPointer == NULL)
		return (NULL);
	for (counter = 0; min <= max; counter++)
		arrayPointer[counter] = min++;
	return (arrayPointer);
}
