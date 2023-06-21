#include "main.h"
/**
 * print_last_digit - printing the last digit
 * @i: getting from n
 * Return: the last digit
 */
int print_last_digit(int i)
{
	int x;

	if (i < 0)
		i = -i;
	x = i % 10;
	if (x < 10)
		x = -x;
	_putchar(x + '0');
	return (x);
}
