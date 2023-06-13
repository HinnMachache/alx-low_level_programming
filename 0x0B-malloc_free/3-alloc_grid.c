#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width
 * @height: height
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **gridPointer;
	int row, column;

	if (width <= 0 || height <= 0)
		return (NULL);
	gridPointer = malloc(sizeof(int *) * height);
	if (gridPointer == NULL)
		return (NULL);
	for (row = 0; row < height; row++)
	{
		gridPointer[row] = malloc(sizeof(int) * width);
		if (gridPointer[row] == NULL)
		{
			for (; row >= 0; row--)
				free(gridPointer[row]);
			free(gridPointer);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
			gridPointer[row][column] = 0;
	}
	return (gridPointer);
}
