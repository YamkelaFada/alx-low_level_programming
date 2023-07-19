#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - printing the opcodes
 * @a: pass value
 * @n: pass value
 */

void print_opcodes(char *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%.2hhx", a[x]);
		if (x < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - main entry
 * @argc: num args
 * @argv: avalue args
 * Return: 0
 */

int main(int argc, char **argv)
{
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, j);
	return (0);
}
