#include "main.h"

/**
  * _strspn - gets length of a prefix substring
  * @s: points to the string to search
  * @accept: pointer to string with chars to accept
  * Return: no of bytes in initial segment of s
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int f = 1;
	char *a;

	while (*s && f)
	{
		f = 0;
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				l++;
				f = 1;
				break;
			}
		}
		s++;
	}
	return (l);
}
