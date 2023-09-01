#include "main.h"

/**
 * _atoi - Converts a string to an int
 * @s: Pointer to the string to be inputed
 * Return: The int value of the string, 0 if no valid int found
 */

int _atoi(char *s)
{
	int a = 1, b = 0, d;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			a *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			break;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		d = *s - '0';
		b = b * 10 + d;
		s++;
	}
	return (b * a);
}
