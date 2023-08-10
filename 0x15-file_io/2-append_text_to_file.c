#include "main.h"

/**
 * append_text_to_file - a function thata appends
 * @filename: file name
 * @text_content: text content
 * Return: -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int wrt, xox, i;

	if (!filename)
	{
		return (-1);
	}
	xox = open(filename, O_WRONLY | O_APPEND);
	if (xox == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		wrt = write(xox, text_content, i);
		if (wrt == -1)
		{
			return (-1);
		}
	}
	close(xox);
	return (1);
}
