#include "main.h"

/**
 * flip_bits - num of bits you would need to flip
 * @n: passed value
 * @m: passed value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned long int x;

	num = n ^ m;
	x = 0;

	while (num > 0)
	{
		x += (num & 1);
		num >>= 1;
	}

	return (x);
}
