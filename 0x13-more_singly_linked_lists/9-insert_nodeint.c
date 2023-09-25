#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: points to the head node
 * @idx: index at which new node should be inserted
 * @n: int value to be stored in the new node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_element, *temp;
	unsigned int ind = 0;

	new_element = malloc(sizeof(listint_t));

	if (new_element == NULL)
		return (NULL);
	new_element->n = n;

	if (idx == 0)
	{
		new_element->next = *head;
		*head = new_element;
		return (new_element);
	}
	temp = *head;

	while (temp != NULL && ind < (idx - 1))
	{
		temp = temp->next;
		ind++;
	}
	if (temp == NULL || ind != (idx - 1))
	{
		free(new_element);
		return (NULL);
	}
	new_element->next = temp->next;
	temp->next = new_element;

	return (new_element);
}
