#include "main.h"
/**
 * reverse_array - reversing the content of an arrayy
 * @a: variable one
 * @n: variable two
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}
