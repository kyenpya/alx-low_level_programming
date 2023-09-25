#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of listint_t list
 * @head: points to the head node
 * @n: int value to be put in the new node
 * Return: address of new node or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	new_element = malloc(sizeof(listint_t));

	if (new_element == NULL)
		return (NULL);
	new_element->n = n;
	new_element->next = *head;
	*head = new_element;
	return (new_element);
}
