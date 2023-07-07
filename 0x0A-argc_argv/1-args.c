#include <stdio.h>
#include "main.h"

/**
 * main - print the number of variables passed
 * @argc: num arg
 * @argv: array of an arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
