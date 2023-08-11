#include <stdio.h>

/**
 * main - Entry point
 * Description - Exclude the alphabets e and q in the output
 * Return: (0) success
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}
