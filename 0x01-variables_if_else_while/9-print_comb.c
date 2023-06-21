#include <stdio.h>
/**
 * main - single digit numbers
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 42; x <= 52; x++)
	{
		putchar(x);
		if (x != 51)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
