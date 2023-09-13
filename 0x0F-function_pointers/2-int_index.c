#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: points to the array
 * @size: size of the array
 * @cmp: points to the comparison fn
 * Return: index if not 0, else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
