#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: pass value
 * @c: pass value two
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
		{
			return (&s[j]);
		}
	}
	return (0);
}
