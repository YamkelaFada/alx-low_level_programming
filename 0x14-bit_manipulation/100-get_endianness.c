#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 * Return: 0, else 1
 */

int get_endianness(void)
{
	int x;
	char *endianness = (char *)&x;

	x = 1;
	if (*endianness == x)
	{
		return (1);
	}
	return (0);
}
