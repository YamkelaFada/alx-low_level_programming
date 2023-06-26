#include "main.h"

/**
 * _puts - print a string and a new line
 * @str: pasing a value
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
