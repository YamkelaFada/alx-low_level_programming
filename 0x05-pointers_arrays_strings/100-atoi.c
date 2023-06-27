#include "main.h"
/**
 * _atoi - convert a string to integer
 * @s: pass value
 * Return: converted value
 */
int _atoi(char *s)
{
	int x;
	unsigned int y;

	x = 1;
	y = 0;

	while (*s++)
	{
		if (*s == '-')
		{
			x *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			y = (y * 10) + (*s - '0');
		}
		else if (y > 0)
		{
			break;
		}
	}
	return (y * x);
}
