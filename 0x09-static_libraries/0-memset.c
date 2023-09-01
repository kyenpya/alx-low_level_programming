#include "main.h"

/**
  *_memset - fills memory with a constant byte
  *@s: pointer to the memory area
  *@b: constant byte to fill memory with
  *@n: number of byte to fill
  *Return: pointer to the memory
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
