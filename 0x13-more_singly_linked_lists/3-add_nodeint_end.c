#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: points to the head node
 * @n: int value to be added at the end node
 * Return: address of the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element, *temp;

	new_element = malloc(sizeof(listint_t));

	if (new_element == NULL)
		return (NULL);
	new_element->n = n;
	new_element->next = NULL;

	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_element;

	return (new_element);
}
