#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: pass value
 * @size: pass value
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	x = malloc(nmemb * size);
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		x[i] = 0;
	}
	return (x);
}
