#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: file name
 * @text_content: text content
 * Return: -1
 */

int create_file(const char *filename, char *text_content)
{
	int xox, str, i;

	if (!filename)
	{
		return (-1);
	}

	xox = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (xox == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	for (i = 0; text_content[i]; i++)
		;
	str = write(xox, text_content, i);
	if (str == -1)
	{
		return (-1);
	}
	close(xox);
	return (1);
}
