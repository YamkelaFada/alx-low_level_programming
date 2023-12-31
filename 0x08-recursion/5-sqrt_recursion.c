#include "main.h"
/**
 * sqrt_a - square root
 * @a: pass first value
 * @b: pass sec value
 * Return: 0
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - caling function
 * @n: Pass value
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
