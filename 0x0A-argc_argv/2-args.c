#include <stdio.h>
#include "main.h"

/**
 * main - total of arguments received
 * @argc: num arg
 * @argv: arr arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
