#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *ops;

	ops = malloc(b);

	if (ops == NULL)
		exit(98);
	else
		return (ops);
}
