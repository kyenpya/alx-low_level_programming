#include "main.h"

/**
 * print_alphabet - will print the alphabets
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char albets;
		for (albets = 'a'; albets <= 'z'; albets++)
			_putchar(albets);
	_putchar('\n');
}
