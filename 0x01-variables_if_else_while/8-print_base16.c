#include <stdio.h>
/**
 * main - numbers of base sixteen in lowercase
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 48; a <= 58; a++)
	{
		putchar(a);
	}
	for (a = 97; a < 103; a++)
	{
		putchar(a);
	}
	putchar("\n");
	return (0);
}
