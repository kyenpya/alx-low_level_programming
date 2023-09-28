#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: points to numto change
 * @index: index to clear
 * Return: 1 means success, otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
