#include "main.h"
/**
 * cap_string - to Upper string
 * @str:passing values
 * Return: cap
 */
char *cap_string(char *str)
{
	int a;
	int x;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	a = 0;

	while (str[a] != '\0')
	{
		if (a == 0 && str[a] >= 97 && str[a] <= 122)
		{
			str[a] = str[a] - 32;
		}
		x = 0;
		while (c[x] != '\0')
		{
			if (c[x] == str[a] && (str[a + 1] >= 97 && str[a + 1] <= 122))
			{
				str[a + 1] = str[a + 1] - 32;
			}
			x++;
		}
		a++;
	}
	return (str);
}
