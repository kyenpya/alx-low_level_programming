#include "main.h"

/**
 * _strlen_recursion - Returns length of a string
 * @s: String whose length is to be calculated
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
