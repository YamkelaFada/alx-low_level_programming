#include "main.h"
#include "string.h"

/**
 * print_rev - printing a string in reverse
 * @s: passing value
**/

void print_rev(char *s)
{
	int x;

	for (x = strlen(s) - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');
}
