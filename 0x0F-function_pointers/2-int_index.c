#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function searches an integer
 * @array: value one
 * @size: size of funct
 * @cmp: value two
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
