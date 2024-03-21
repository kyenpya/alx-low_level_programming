#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a double linked list
 * @h: head node
 *
 * Return: number of elements in a double linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
