#include "lists.h"

/**
 * free_list - frees the list_t list
 * @head: points to the start of the list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
