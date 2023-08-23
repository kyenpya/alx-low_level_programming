#include "main.h"

/**
 * leet - encodes string into 1337
 * @str: input string
 * Return: pointer to modified string
 */

char *leet(char *str)
{
	char *ptr = str;
	char c;

	while (*str)
	{
		c = *str;

		if (c == 'a' || c == 'A')
			str = '4';
		else if (c == 'e' || c == 'E')
			*str = '3';
		else if (c == 'o' || c == 'O')
			*str = '0';
		else if (c == 't' || c == 'T')
			*str = '7';
		else if (c == 'l' || c == 'L')
			*str = '1';
		str++;
	}
	return (ptr);
}
