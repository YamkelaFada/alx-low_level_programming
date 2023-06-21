#include "main.h"
/**
 * jack_bauer - printing minutes
 * from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 23)
	{
		y = 0;
		while (y <= 59)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
			y++;
		}
		x++;
	}
}

