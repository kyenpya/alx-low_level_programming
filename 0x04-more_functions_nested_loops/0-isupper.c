#include "main.h"

/**
 * _isupper - Checks for uppercase alphabets
 * Description - isupper checks for uppercase alphabets
 * @c: Character to be checked
 * Return: 1 for uppercase alphabets or 0 for anyhthing else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
