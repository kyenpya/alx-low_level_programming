#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: the character to be checked
 * Return: 1 for alphabetic character or 0 anything else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
