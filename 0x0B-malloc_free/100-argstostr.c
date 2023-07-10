#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenate all the args
 * @ac: pass val one
 * @av: pass val two
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *conc;
	int i;
	int l;
	int x = 0;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (l = 0; av[i][l]; l++)
			len++;
	}
	len += ac;

	conc = malloc(sizeof(char) * len + 1);
	if (conc == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (l = 0; av[i][l]; l++)
		{
			conc[x] = av[i][l];
			x++;
		}
		if (conc[x] == '\0')
		{
			conc[x++] = '\n';
		}
	}
	return (conc);
}
