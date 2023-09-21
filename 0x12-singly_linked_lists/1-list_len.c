#include "lists.h"

/**
 * list_len - returns the no of elements in the list_t list
 * @h: points to the start of the list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
