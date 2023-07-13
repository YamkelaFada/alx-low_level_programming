#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate strings
 * @s1: value one
 * @s2: value two
 * @n: value three
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int x;
	char *y;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	y = malloc(sizeof(char) * (i + j + 1));
	if (y == NULL)
		return (NULL);
	for (x = 0; x < i; x++)
		y[x] = s1[x];
	for (x = 0; x < j; x++)
		y[x + i] = s2[x];
	y[i + j] = '\0';
	return (y);
}
