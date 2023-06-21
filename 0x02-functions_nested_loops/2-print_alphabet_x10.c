#include "main.h"
/**
 * print_alphabet_x10 - outputs ten  times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int i;
	char x;

	i = 0;

	while (i < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		i++
	}
}
