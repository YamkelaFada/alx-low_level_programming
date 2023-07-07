#include <stdio.h>
#include "main.h"

/**
 * main - printing the name of the program
 * @argc: total number of arguements
 * @argv: values of an array
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
