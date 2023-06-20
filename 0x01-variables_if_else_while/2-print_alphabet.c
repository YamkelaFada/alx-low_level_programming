#include <stdio.h>
/**
 * main - print in lowercase
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(tolower(i));
	}
	return (0);
}
