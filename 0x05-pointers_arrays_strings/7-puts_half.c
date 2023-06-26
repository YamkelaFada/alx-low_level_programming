#include "main.h"
#include <string.h>

/**
 * puts_half - Printing half of a string
 *
 * @str: pass value
**/

void puts_half(char *str)
{
	int i;
	int x = strlen(str);

	if (x % 2 != 0)
	{
		x = x / 2 + 1;
	}
	else
	{
		x /= 2;
	}

	for (i = x; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
