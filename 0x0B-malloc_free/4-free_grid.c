#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @height: height dimension of grid
 * Return: Empty grid 
 *
 */
void free_grid(int **grid, int height)
{
	int counter;
		
	for (counter = 0; counter < height; counter++)
	{
		free(grid[counter]);
	}
	free(grid);
}
