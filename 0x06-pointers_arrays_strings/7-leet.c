#include "main.h"

/**
 * leet - encoding
 * @str: pass variable
 * Return: encoded string
 */

char *leet(char *str)
{
	int a;
	int b;
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (x[b] != '\0')
		{
			if (str[a] == x[b])
			{
				str[a] = y[b];
			}
			b++;
		}
		a++;
	}
	return (str);
}
