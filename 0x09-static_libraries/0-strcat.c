#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: A pointer to the concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
