#include "main.h"
#include <unistd.h>
/**
 * _putchar - writing the char c to stdout
 * @c: the character to print
 *
 * Return: 1
 * Error: -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
