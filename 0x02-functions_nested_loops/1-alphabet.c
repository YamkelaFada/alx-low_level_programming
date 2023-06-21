#include "main.h"
/**
 * print_alphabet - a to z lowercase
 */
void print_alphabet(void)
{
	char alaphabets;

	for (alaphabets = 'a'; alaphabets <= 'z'; alaphabets++)
	{
		_putchar(alaphabets);
	}
	_putchar('\n');
}
