#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - min coins
 * @argc: args
 * @argv: passing
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i;
	int x;
	int tot;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	tot = 0;

	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && x >= 0; i++)
	{
		while (x >= coins[i])
		{
			tot++;
			x -= coins[i];
		}
	}
	printf("%d\n", tot);
	return (0);
}
