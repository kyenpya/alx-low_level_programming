#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t list
 * @head: points to the head node
 * @index: index of the node, starting at 0
 * Return: pointer to the nth node or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind = 0;

	while (head != NULL)
	{
		if (ind == index)
			return (head);
		head = head->next;
		ind++;
	}
	return (NULL);
}
