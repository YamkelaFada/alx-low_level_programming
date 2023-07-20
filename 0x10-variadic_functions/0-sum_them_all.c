#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns sum
 * @n: pass value
 * Return: result
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int result = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(list, int);
	}

	va_end(list);

	return (result);
}
