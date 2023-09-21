#include "lists.h"

/**
 * add_node_end - adds a node at the end of the list_t list
 * @head: points to the start of the node
 * @str: the string to be duplicated
 * Return: address of new node or NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_n, *temp;

	node_n = malloc(sizeof(list_t));

	if (node_n == NULL)
		return (NULL);

	node_n->str = strdup(str);

	if (node_n->str == NULL)
	{
		free(node_n);
		return (NULL);
	}
	node_n->len = strlen(str);
	node_n->next = NULL;

	if (*head == NULL)
	{
		*head = node_n;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node_n;
	}
	return (node_n);
}
