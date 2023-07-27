#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - a function that adds a new node
 * @head: pass double pointer
 * @str: pass string value
 * Return: the address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *xox;
	unsigned int len = 0;

	while (str[len])
		len++;
	xox = malloc(sizeof(list_t));
	if (!xox)
	{
		return (NULL);
	}
	xox->str = strdup(str);
	xox->len = len;
	xox->next = (*head);
	(*head) = xox;
	return (*head);
}
