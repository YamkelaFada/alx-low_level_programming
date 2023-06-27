#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - crack me
 * Return: 0
 */

int main(void)
{
	int x;
	int y;

	srand(time(NULL));
	x = 0;
	while (x <= 2645)
	{
		y = rand() % 128;
		x = x + y;
		putchar(y);
	}
	putchar(2772 - x);
	return (0);
}
