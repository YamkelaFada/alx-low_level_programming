#include <stdio.h>

/**
 * main - display largest prime factor
 * Return: 0
**/

int main(void)
{
	long int i;
	long int x;
	long int y;

	x = 612852475143;

	for (i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			if (x == i)
			{
				printf("%ld\n", i);
				break;
			}
			y = x / i;
			x = y;
			i = 1;
		}
	}
	return (0);
}
