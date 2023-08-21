#include "main.h"

/**
 * swap_int - Swaps the values of2 ints
 * @a: Pointer to first int
 * @b: Pointer to second int
 */

void swap_int(int *a, int *b)
{
	int c;

	if (a != 0 && b != 0)
	{
		c = *a;
		*a = *b;
		*b = c;
	}
}
