#include "main.h"

/**
  * _strchr - locates a char in a string
  * @s: points to the string to be located
  * @c: the char to find
  * Return: points to first occurence of char c in s, or 0 if not found
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
