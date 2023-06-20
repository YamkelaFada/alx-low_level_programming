#include <stdio.h>
/**
 * main - except q and e
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putschar(x);
		}
	}
	putchar('\n');
	return (0);
}
