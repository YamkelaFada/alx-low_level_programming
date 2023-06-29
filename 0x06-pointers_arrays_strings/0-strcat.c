#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - concatenating
 * @dest: variable one
 * @src: variable two
 * Return: Dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int x_len = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[x_len + i] = src[i];
	}
	dest[x_len + i] = '\0';
	return (dest);
}
