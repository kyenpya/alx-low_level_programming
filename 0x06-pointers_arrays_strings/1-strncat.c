#include "main.h"

/**
 * _strncat - concatenates two strings but limits the number of chars
 * @dest: destination string
 * @src: source string
 * @n: maximum number of chars to concat
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (ptr);
}
