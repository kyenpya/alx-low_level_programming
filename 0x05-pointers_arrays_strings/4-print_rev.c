#include "main.h"


/**
 * print_rev - Prints a string in reverse, then a new line
 * @s: Pointer to the string to be reversed
 */

void print_rev(char *s)
{
	if (s != 0)
	{
		int length = 0;
		int i;

		while (s[length] != '\0')
		{
			length++;
		}
		for (i = length - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
}
