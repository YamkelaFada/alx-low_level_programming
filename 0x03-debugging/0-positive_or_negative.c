#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * positive_or_negative - checks positive or nege num
* @i: passing value
* REturn: We are checking
*/

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
