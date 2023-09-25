#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at node index of listint_t list
 * @head: points to a pointer that points to head node
 * @index: ind of the node to be deleted
 * Return: 1 if success, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *present, *temp;
	unsigned int ind = 0;

	if (*head == NULL)
		return (-1);
	present = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(present);
		return (1);
	}
	while (present != NULL && ind < (index - 1))
	{
		present = present->next;
		ind++;
	}
	if (present == NULL || present->next == NULL || ind != (index - 1))
		return (-1);
	temp = present->next;
	present->next = temp->next;
	free(temp);

	return (1);
}
