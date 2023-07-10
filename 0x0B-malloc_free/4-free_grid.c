#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  a function that frees a 2 dimensional grid previously created
 * @grid: first value passed
 * @height: second value passed
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid != NULL || height != 0)
	{
		for (j = 0; j < height; j++)
		{
			free(grid[j]);
		}
		free(grid);
	}
}
