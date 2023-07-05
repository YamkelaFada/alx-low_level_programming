#include "main.h"
/**
 * long_1 - check palindrome
 * @s: pass vaue
 * Return: 0
 */
int long_1(char *s)
{
	if (*s != '\0')
	{
		return (1 + long_1(s + 1));
	}
	return (0);

}

/**
 * compare - comparing
 * @s: value onr
 * @l: value two
 * Return: 0
 */

int compare(char *s, int l)
{
	if (l <= 0)
	{
		return (1);
	}
	if (*s == *(s + (l - 1)))
	{
		return (compare(s + 1, l - 2));
	}
	else
	{
		return (0);
	}
}


/**
 * is_palindrome - main function
 * @s: pass value
 * Return: 0
 */
int is_palindrome(char *s)
{
	int x;

	x = long_1(s);
	return (compare(s, x));
}
