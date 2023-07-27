#include "lists.h"

/**
 * list_len - a function that calculate the number of elements
 * @h: Pass values
 * Return: the value int
 */

size_t list_len(const list_t *h)
{
	const list_t *x;
	unsigned int y = 0;

	x = h;
	while (x)
	{
		y++;
		x = x->next;
	}
	return (y);
}
