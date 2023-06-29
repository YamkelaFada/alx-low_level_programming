#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenating a string
 * @dest: first variable
 * @src: second variable
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
int x;
int i;

x = strlen(dest);

for (i = 0; src[i] != '\0'; i++)
{
	dest[x + i] = src[i];
}
dest[x + i] = '\0';
return (dest);
}
