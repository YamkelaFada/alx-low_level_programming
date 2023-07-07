#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: pass value
 * Return: 1
 * on error: -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
