#include "main.h"

/**
 * string_toupper - converts lowercase letterstouppercase letters
 * @str: input string
 * Return: pointer to uppercased string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (ptr);
}
