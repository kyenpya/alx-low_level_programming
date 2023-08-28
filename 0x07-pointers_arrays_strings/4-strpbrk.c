#include "main.h"
/**
  * _strpbrk - searches string for any of a set of bytes
  * @s: pointer to the string to search
  * @accept: pointer to the string with accepted bytes
  * Return: points to matching byte in s, or 0 if not found
  */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (0);
}
