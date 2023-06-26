#include "main.h"
#include "string.h"

/**
 * rev_string - reversing string
 * @s: passing value
**/

void rev_string(char *s)
{
	int i;
	int x = strlen(s);
	int y = 0;
	char z;

	for (i = x - 1; i >= x / 2; i--)
	{
		z = s[i];
		s[i] = s[y];
		s[y] = z;
		y++;
	}
}
