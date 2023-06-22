#include "main.h"
/**
 * print_sign - printing signs
 * @n: checking from this
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int x;
	char a;

	x = 1;
	a = '-';

	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
		return (a + b);
	else if (n == 0)
		return (0);
}
