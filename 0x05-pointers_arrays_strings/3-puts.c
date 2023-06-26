#include "main.h"

/**
 * _puts - print a string, followed by a new line
 * @str: pass value
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		i_putchar(str[i]);
	}

	i_putchar('\n');
}
