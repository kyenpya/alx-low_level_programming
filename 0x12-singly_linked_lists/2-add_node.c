#include "lists.h"

/**
 * add_node - add a new node at the beginning of the list_t list
 * @head: point to a ptr to the  start of  the list
 * @str: string to duplicate
 * Return: address of new node or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);

	new->next = *head;

	*head = new;
	return (new);
}
