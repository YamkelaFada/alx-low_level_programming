#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a linked list
 * @head: pass values
 */

void free_list(list_t *head)
{
	list_t *xox;

	while (head)
	{
		xox = head->next;
		free(head->str);
		free(head);
		head = xox;
	}
}
