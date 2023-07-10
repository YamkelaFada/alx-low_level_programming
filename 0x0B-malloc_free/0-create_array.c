#include "main.h"
#include <stdlib.h>

/**
 * create_array - func creates an array of chars
 * @size: pass value
 * @c: pass another value
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
		char *x;
		unsigned int i;

		if (size == 0)
		{
			return (NULL);
		}

		x = malloc(sizeof(char) * size);

		if (x == NULL)
		{

			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			x[i] = c;
		}

		return (x);
}
