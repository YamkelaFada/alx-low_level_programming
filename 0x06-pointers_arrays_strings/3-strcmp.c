#include "main.h"

/**
 * _strcmp - comparering strings
 * @s1: pass first value
 * @s2: pass second value
 * Return: 0 if equal or b if is different
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && j == 0)
	{
		j = s1[i] - s2[i];
		i++;
	}
	return (j);
}
