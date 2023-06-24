#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
**/

void more_numbers(void)
{
	int i;
	int y;

	for (i = 0; i <= 9; i++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
