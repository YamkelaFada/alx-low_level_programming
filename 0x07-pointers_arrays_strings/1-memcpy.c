#include "main.h"
/**
 * _memcpy - copy memroy area
 * @dest: variable one
 * @src: variable two
 * @n: variable three
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int x = 0;

	for (i = n; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
