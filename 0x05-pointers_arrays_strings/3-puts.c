#include "main.h"

/**
 * _puts - printing a string
 * @str: passing value
 * Return: Nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
