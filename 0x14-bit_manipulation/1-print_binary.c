#include "main.h"

/**
 * print_binary - prints the binary rep of a number
 * @n: number to be printed
 */

void print_binary(unsigned long int n)
{
	unsigned long int present;
	int count = 0, i;

	for (i = 63; i >= 0; i--)
	{
		present = n >> i;
		if (present & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
