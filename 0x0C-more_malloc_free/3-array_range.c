#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: pass value
 * @max: pass value
 * Return: 0
 */

int *array_range(int min, int max)
{
	int i;
	int j;
	int *x;

	if (min > max)
	{
		return (NULL);
	}

	j = max - min + 1;

	x = malloc(sizeof(int) * j);
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++, min++)
	{
		x[i] = min;
	}
	return (x);
}
