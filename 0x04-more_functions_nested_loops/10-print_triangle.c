#include "main.h"

/**
 * print_triangle - printing a triangle
 * @size: pass size
**/

void print_triangle(int size)
{
	int i;
	int x;

	if (size > 0)
	{
		for (i = 0; i <  size; i++)
		{
			for (x = 0; x < size; x++)
			{
				if (x < size - (i + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
