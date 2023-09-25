#include "lists.h"

/**
 * listint_len - returns the number of elements in the listint_t list
 * @h: points to the head of the list
 * Return: number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t noct = 0;

	while (h != NULL)
	{
		h = h->next;
		noct++;
	}
	return (noct);
}
