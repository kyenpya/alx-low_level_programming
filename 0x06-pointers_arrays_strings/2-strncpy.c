#include "main.h"

/**
 * _strncpy - copies a string with a specified max length
 * @dest: destination string
 * @src: source string
 * @n: maximum number of chars to copy
 * Return: pointer to the result
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (ptr);
}
