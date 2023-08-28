#include "main.h"

/**
  * _memcpy - copies memory area from src to dest
  * @dest: pointer to destination memory area
  * @src: pointer to source memory area
  * @n: bytes tocopy
  *Return: pointer to destination memory area
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
