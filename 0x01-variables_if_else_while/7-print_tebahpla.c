#include <stdio.h>
/**
 * main - numbers between 0 to 9 and letters between a to f.
 * Return 0
 */
int maint(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
