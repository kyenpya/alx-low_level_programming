#include "main.h"

/**
 * _puts - Prints a string to stdout followed by a new line
 * @str: Pointer to the string
 */

void _puts(char *str)
{
	if (str != 0)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
}
