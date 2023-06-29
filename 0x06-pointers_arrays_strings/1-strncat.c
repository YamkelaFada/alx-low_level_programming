#include "main.h"

/**
 * _strncat - concatinating strings
 * @dest: variable one
 * @src: variable two
 * @n: third variable
 * Return: Destination
 */

char *_strncat(char *dest, char *src, int n)
{

	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != 0)
	{
		x++;
	}
	while (src[y] != 0 && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
