#include "main.h"
#include <string.h>

/**
 * _strcat - concatenaing
 * @dest: pass first value
 * @src: pass second value
 * Return: destination
**/

char *_strcat(char *dest, char *src)
{
	int str = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[str + i] = src[i];

	des[str + i] = '\0';

	return (dest);
}
