#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: first variable
 * @b: second variable
 * @n: third variable
 * Return: new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; x > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
