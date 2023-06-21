#include <stdio.h>
/**
 * main - numbers between zero to nine and letters between a to f
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
