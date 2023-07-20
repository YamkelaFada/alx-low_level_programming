#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator: pass value
 * @n: pass value
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);

		if (string)
		{
			printf("%s", string);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
