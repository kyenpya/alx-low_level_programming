#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: head node
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

		if (h == NULL)
			return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
