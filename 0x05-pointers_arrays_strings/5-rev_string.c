#include "main.h"

/**
 * rev_string - Prints a string in reverse order
 * @s: Pointer to the string to be reversed
 */

void rev_string(char *s)
{
	if (s != 0)
	{
		int length = 0, a = 0, b;
		char c;

		while (s[length] != '\0')
		{
			length++;
		}
		b = length - 1;

		while (a < b)
		{
			c = s[a];
			s[a] = s[b];
			s[b] = c;
			a++;
			b--;
		}
	}
}
