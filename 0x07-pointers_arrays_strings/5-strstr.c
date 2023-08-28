#include "main.h"

/**
* _strstr - locates a substring in a string
* @haystack: pointer to string to search in
* @needle: points to substring to locate
* Return: pointer to beginning of located string, or 0 if not found
*/

char *_strstr(char *haystack, char *needle)
{
	char *h;

	while (*haystack)
	{
		h = haystack;
		while (*needle && *h == *needle)
		{
			h++;
			needle++;
		}
		if (*needle == '\0')
		return (haystack);

		haystack++;
	}
	return (0);
}
