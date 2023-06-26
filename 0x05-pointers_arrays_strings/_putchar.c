#include <unistd.h>
/**
 * _putchar - printing the char c to standard output
 * @c: passing the value
 * Return: 1 if successful
 * On error, -1 is returned, an error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
