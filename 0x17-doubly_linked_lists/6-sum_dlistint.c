#include "lists.h"

/**
 * sum_dlistint - gets the sum of all the data(n) of a
 * doubly linked list
 * @head: head node
 *
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
