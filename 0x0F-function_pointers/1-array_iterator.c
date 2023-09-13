#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: points to the array
 * @size: array size
 * @action: points to function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
