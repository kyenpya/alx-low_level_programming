#include "main.h"

/**
 * wildcmp - compares 2 strings with a wildcard
 * @s1: first string
 * @s2: second string with the wildcard
 * Return: 1 if strings can be considered identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (!*s1)
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
