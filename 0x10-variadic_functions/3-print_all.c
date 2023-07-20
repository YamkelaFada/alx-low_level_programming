#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: pass value
 */

void print_all(const char * const format, ...)
{
	const char word[] = "cifs";
	va_list list;
	unsigned int x = 0, i = 0, y;
	char *string;

	va_start(list, format);
	while (format && format[i])
	{
		y = 0;
		while (word[y])
		{
			if (format[i] == word[y] && x)
			{
				printf(", ");
				break;
			} y++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int)), x = 1;
			break;
		case 'i':
			printf("%d", va_arg(list, int)), x = 1;
			break;
		case 'f':
			printf("%f", va_arg(list, double)), x = 1;
			break;
		case 's':
			string = va_arg(list, char *), x = 1;
			if (!string)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string);
			break;
		} i++;
	}
	printf("\n"), va_end(list);
}
