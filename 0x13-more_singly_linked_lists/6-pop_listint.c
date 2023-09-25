#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t linked list
 * @head: points to a pointer that  points to the head node
 * Return: head node's data, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int d = 0;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	d = temp->n;
	free(temp);

	return (d);
}
