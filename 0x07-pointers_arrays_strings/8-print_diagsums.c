#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum
 * @a: var one
 * @size: size var
 */

void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		x += a[i];
		y += a[size - i - 1];
		a += size;
	}
	printf("%d, ", x);
	printf("%d\n", y);
}
