#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes
 * @size: size of the array to be created
 * @c: char to be initialized
 * Return: NULL if size = 0, otherwise a ptr
 */

char *create_array(unsigned int size, char c)
{
	char *apt;
	unsigned int i;

	if (size == 0)
		return (NULL);
	apt = malloc(sizeof(char) * size);

	if (apt == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		apt[i] = c;
	}
	return (apt);
}
