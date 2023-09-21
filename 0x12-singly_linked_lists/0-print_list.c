#include "lists.h"

/**
 * print_list - prints all the elements of the  list_t list
 * @h:  points to the start of the node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_nums = 0;

	while (h != NULL)
	{
		if (h->str ==  NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		node_nums++;
	}
	return (node_nums);
}
