#include "main.h"

int cp(char *s, int start, int end);
int _strlen(char *s);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if s is palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
		return (1);
	return (cp(s, 0, len - 1));
}

/**
 * cp - recursively checks if a string is a palindrome
 * @s: String to check
 * @start: start of the comparison
 * @end: end of the comparison
 * Return: 1 if s is a palindrome, 0 if not
 */

int cp(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (cp(s, start + 1, end - 1));
}

/**
 * _strlen - computes len of string
 * @s: string to compute the len of
 * Return: len of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
