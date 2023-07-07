#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: pass value
 * @argv: pass value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int tot;
	int count;
	int i;

	count = 1;
	tot = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		tot += atoi(argv[count]);
		count++;
	}
	printf("%d\n", tot);
	return (0);
}
