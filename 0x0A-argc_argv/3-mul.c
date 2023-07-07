#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: value one
 * @argv: value two
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			x *= atoi(argv[i]);
		}
		printf("%d\n", x);
	}
	return (0);
}
