#include "main.h"

/**
 * _strlen -  Calculates the length of a string
 * @s: A pointer to string
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	if (s != 0)
	{
		while (*s != '\0')
		{
			count++;
			s++;
		}
	}
	return (count);
}
