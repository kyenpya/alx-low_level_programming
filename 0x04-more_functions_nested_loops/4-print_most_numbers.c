#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 (excluding 2 and 4)
 */

void print_most_numbers(void)
{
	char most;

	for (most = 48; most <= 57; most++)
	{
		if (most != 50 && most != 52)
			_putchar(most);
	}
	_putchar('\n');
}
