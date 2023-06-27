#include "main.h"
#include <string.h>
/**
 * puts_half - printing half of a string
 * @str: passing value
 */
void puts_half(char *str)
{
	int x;
	int y = strlen(str);

	if (y % 2 != 0)
	{
		y = y / 2 + 1;
	}
	else
	{
		y /= 2;
	}
	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
