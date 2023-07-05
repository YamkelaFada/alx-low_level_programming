#include "main.h"
/**
 * prime_a - checking prime number
 * @a: pass value
 * @b: pass value
 * Return: 0
 *
 */

int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

/**
 * is_prime_number - calling function
 * @n: pass value
 * Return: 0
 */

int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
