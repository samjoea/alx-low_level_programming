#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory occupied by a 2 dimensional array
 * @grind: pointer to 2 dimentional array
 * @height: defining the row of the array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
