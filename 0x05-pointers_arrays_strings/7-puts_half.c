#include "main.h"

/**
 * puts_half - Prints second half of a string then a new line
 * @str: Pointer to the string
 */

void puts_half(char *str)
{
	int length = 0, a;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		a = length / 2;
	}
	else
	{
		a = (length - 1) / 2;
	}
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
