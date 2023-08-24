#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string
 * Return: pointer to modified string
 */

char *rot13(char *str)
{
	char *ptr = str;
	char c;

	while (*str)
	{
		c = *str;

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';

			*str = (c - base + 13) % 26 + base;
		}
		str++;
	}
	return (ptr);
}
