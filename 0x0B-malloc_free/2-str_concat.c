#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenating two strings
 * @s1: var one
 * @s2: var two
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int s_a;
	unsigned int s_b;
	char *x;
	char *y;

	s_a = 0;
	s_b = 0;

	x = s1;
	if (s1)
		while (*x++)
			s_a++;
	else
		s1 = "";

	x = s2;

	if (s2)
		while (*x++)
			s_b++;
	else
		s2 = "";

	y = malloc(s_a + s_b + 1);
	if (!y)
		return (NULL);

	x = y;
	while (*s1)
		*x++ = *s1++;
	while (*s2)
		*x++ = *s2++;
	*x = 0;

	return (y);
}
