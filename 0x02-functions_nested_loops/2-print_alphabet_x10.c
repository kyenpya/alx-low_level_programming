#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets x10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char albets;
	int i;

	i = 0;
	while (i < 10)

	{
	for (albets = 'a'; albets <= 'z'; albets++)
	{
	_putchar(albets);
	}
	_putchar('\n');
	i++;
	}
}
