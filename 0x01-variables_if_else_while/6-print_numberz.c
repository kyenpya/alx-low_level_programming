#include <stdio.h>

/**
 * main - Entry point
 * Description - prinPrint numbers using the putchar()
 * Return: 0 (success)
 */

int main(void)
{
	int numbs;

	for (numbs = 0; numbs <= 9; numbs++)
	{
		putchar(numbs + '0');
	}
	putchar('\n');
	return (0);
}
