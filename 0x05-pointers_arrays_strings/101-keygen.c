#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: Always 0 (Success)
**/

int main(void)
{
	int x;
	char i;

	srand(time(NULL));
	x = 0;

	while (x <= 2645)
	{
		i = rand() % 128;
		x += i;
		putchar(i);
	}
	putchar(2772 - x);
	return (0);
}
