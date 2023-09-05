#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns ptr to new allocated space containing cpy of input string
 * @str: string to duplicate
 * Return: NULL if string NULL, else ptr to duplicate string
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[len] = '\0';

	return (dup);
}
