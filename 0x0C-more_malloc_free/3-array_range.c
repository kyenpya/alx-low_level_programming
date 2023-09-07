#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of ints
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int i, len;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
