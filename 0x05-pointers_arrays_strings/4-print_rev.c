#include "main.h"
#include "string.h"

/**
 * print_rev - printing a string in reverse
 * @s: passing value
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
