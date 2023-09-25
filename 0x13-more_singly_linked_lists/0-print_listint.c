#include "lists.h"

/**
 * print_listint - prints all the elements of the listint_t list
 * @h: points to the head of the list
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t noct = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		noct++;
	}
	return (noct);
}
