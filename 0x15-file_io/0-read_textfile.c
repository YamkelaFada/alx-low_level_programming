#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdo
 * @filename: file name
 * @letters: letters
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *std;
	ssize_t xox;
	int x;
	ssize_t lt;

	if (!filename)
	{
		return (0);
	}

	x = open(filename, O_RDONLY);
	if (x == -1)
	{
		return (0);
	}

	std = malloc(sizeof(char) * (letters));
	if (!std)
	{
		return (0);
	}
	xox = read(x, std, letters);
	lt = write(STDOUT_FILENO, std, xox);
	close(x);
	free(std);
	return (lt);
}
