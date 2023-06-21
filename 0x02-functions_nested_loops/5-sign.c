#include "main.h"
/**
 * print_sign - printing signs
 * @n: checking values
 * Return: 1 and prints + if n is greater than zero, else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return ('-'1);
	}
	else if (n == 0)
		return (0);
}
