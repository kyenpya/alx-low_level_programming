#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of listint_t list
 * @head: points to the head node
 * Return: sum of all the data in the list or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int data_sum = 0;

	while (head != NULL)
	{
		data_sum += head->n;
		head = head->next;
	}
	return (data_sum);
}
