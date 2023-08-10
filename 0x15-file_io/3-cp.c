#include "main.h"
#include <stdio.h>

/**
 * error_file - Main entry
 * @file_from: pass value
 * @file_to: pass value
 * @argv: pass args
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - main entry
 * @argc: pass value
 * @argv: pass args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char c[1024];
	int from, err, to;
	ssize_t xox, wrt;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(from, to, argv);
	xox = 1024;
	while (xox == 1024)
	{
		xox = read(from, c, 1024);
		if (xox == -1)
			error_file(-1, 0, argv);
		wrt = write(to, c, xox);
		if (wrt == -1)
			error_file(0, -1, argv);
	}
	err = close(from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	err = close(to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	return (0);
}
