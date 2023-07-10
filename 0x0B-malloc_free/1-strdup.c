#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory
 * @str: pass value
 * Return: 0
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int len;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	a = malloc(sizeof(char) * (len + 1));
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		a[i] = str[i];
	}
	a[len] = '\0';

	return (a);
}
