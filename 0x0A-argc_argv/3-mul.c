#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two values
 * @argc: num of arg
 * @argv: arr arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res = 1;
	int j;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (j = 1; j < argc; j++)
		{
			res *= atoi(argv[j]);
		}
		printf("%d\n", res);
	}
	return (0);
}
