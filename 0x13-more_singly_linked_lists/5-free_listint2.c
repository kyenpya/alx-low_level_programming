#include "lists.h"

/**
 * free_listint2 - frees listint_t list
 * @head: points to a pointer that points to the head node
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
