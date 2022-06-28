#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a tow dimensional array
 * @width: defining the width of the array
 * @height: defining the height of the array
 *
 * Return: a pointer or a NULL on fail
 */

int **alloc_grid(int width, int height)
{
	int i, j, **g;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(height * sizeof(*g));

	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(width * sizeof(**g));
		if (g[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(g[i]);
			free(g);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			g[i][j] = 0;
		}
	}

	return (g);
}
