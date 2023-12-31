#include "main.h"

/**
 * _isdigit - Checks for integers zero to nine
 * Description - isdigit checks for digits
 * @c: Character to be checked
 * Return: 1 for digits or 0 for anyhthing else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
