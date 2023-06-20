#include <stdio.h>
/**
 * main - print alphabet in lowercase except q and e
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x >= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
