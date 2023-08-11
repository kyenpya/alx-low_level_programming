#include <stdio.h>

/**
 * main - Entry point
 * Description - print numbers using commas as separators
 * Return: 0 (success)
 */

int main(void)
{
	int coms;

	for (coms = 0; coms < 10; coms++)
	{
		putchar(coms + '0');
		if (coms != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
