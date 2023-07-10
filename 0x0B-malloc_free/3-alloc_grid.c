#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a pointer to a two dec arr of integer
 * @width: pass value
 * @height: pass value
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **x;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = malloc(height * sizeof(int *));
	if (x == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		x[i] = malloc(width * sizeof(int));
		if (x[i] == NULL)
		{
			while (i >= 0)
				free(x[i--]);
			free(x);
			return (NULL);
		}


		for (k = 0; k < width; k++)
			x[i][k] = 0;
	}

	return (x);
}
