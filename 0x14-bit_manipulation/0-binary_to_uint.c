#include "main.h"

/**
 * binary_to_uint - a functon that converts a binary number
 * @b: pointing to a string
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	int base;
	unsigned int num;
	int i;

	if (!b)
	{
		return (0);
	}

	num = 0;

	for (i = 0; b[i] != '\0'; i++)
		;
	for (i--, base = 1; i >= 0; i--, base *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] & 1)
			num += base;
	}
	return (num);
}
