#include "main.h"
/**
 * leet - encodes a string
 * @str: the string to encode
 *
 * Return: the encode string
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	while (str[i] != '\0')
	{
		while (x[j] != '\0')
		{
			if (str[i] == x[j])
			{
				str[i] = y[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
