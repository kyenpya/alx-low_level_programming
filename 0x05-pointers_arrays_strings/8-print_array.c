#include <stdio.h>

/**
 * print_array - Prints n elements of array of integers, then a new line
 * @a: Pointer to the array of integers
 * @n: Number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	if (a != 0 && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);

			if (i < n - 1)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
