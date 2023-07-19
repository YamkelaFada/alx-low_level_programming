#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * @array: value one
 * @action: value two
 * @size: size
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (array == NULL || action == NULL)
		return;
	for (s = 0; s < size; s++)
	{
		action(array[i]);
	}
}
