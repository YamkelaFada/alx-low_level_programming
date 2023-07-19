#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Comparing
 * @s: value in s
 * Return: function
**/

int (*get_op_func(char *s))(int, int)
{
	int i;

	i = 0;
	op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div}, {"%", op_mod}, {NULL, NULL}};
	while (ops[i].op != NULL)
	{
		if (!strcmp(ops[i].op, s))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
