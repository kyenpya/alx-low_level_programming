#include "main.h"

/**
 * _islower - Checks for lowercase alphabets
 * @c: Character to be checked
 * Return: 1 for lowercase alphabets or 0 for anyhthing else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
