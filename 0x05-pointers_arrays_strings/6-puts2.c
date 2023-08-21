#include "main.h"

/**
 * puts2 - Prins every other char of a string followed by a new line
 * @str: Pointer to the string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
