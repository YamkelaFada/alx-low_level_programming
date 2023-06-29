#include <unistd.h>
/**
 * _putchar - character c to stdout
 * @c: Passing the value
 * Return: 1 on success
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
