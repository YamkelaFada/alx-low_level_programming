#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: first value
 * @s2: second value
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (s1[x] != '\0' & y == 0)
	{
		y = s1[x] - s2[x];

		x++;
	}
	return (y);
}
