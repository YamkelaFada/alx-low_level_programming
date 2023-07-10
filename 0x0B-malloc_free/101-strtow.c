#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - a function main
 * @grid: pass value one
 * @height: pass hieght value
 */

void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - a function that splits a string
 * @str: pass value
 * Return: 0
 */

char **strtow(char *str)
{
	unsigned int k, height;
	unsigned int i, j, z;
	char **x;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (k = height = 0; str[k] != '\0'; k++)
		if (str[k] != ' ' && (str[k + 1] == ' ' || str[k + 1] == '\0'))
			height++;
	x = malloc((height + 1) * sizeof(char *));
	if (x == NULL || height == 0)
	{
		free(x);
		return (NULL);
	}
	for (i = z = 0; i < height; i++)
	{
		for (k = z; str[k] != '\0'; k++)
		{
			if (str[k] == ' ')
				z++;
			if (str[k] != ' ' && (str[k + 1] == ' ' || str[k + 1] == '\0'))
			{
				x[i] = malloc((k - z + 2) * sizeof(char));
				if (x[i] == NULL)
				{
					ch_free_grid(x, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; z <= k; z++, j++)
			x[i][j] = str[z];
		x[i][j] = '\0';
	}
	x[i] = NULL;
	return (x);
}
