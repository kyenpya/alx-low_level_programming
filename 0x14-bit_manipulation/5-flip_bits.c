#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip from one no to anor
 * @n: first num
 * @m: second num
 * Return: num of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, b = n ^ m;
	int count = 0, i;

	for (i = 63; i >= 0; i--)
	{
		a = b >> i;
		if (a & 1)
			count++;
	}
	return (count);
}
