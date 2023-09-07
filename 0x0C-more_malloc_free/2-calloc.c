#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc- allocates memory for an array, using malloc
 * @nmemb: array members
 * @size: size of array
 * Return: pointer to new memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = calloc(nmemb, size);
	if (result == NULL)
		return (NULL);
	else
		return (result);
}
