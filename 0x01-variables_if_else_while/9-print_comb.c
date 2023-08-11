#include <stdio.h>

/**
 * main - Entry point
 * Description - print numbers using commas as separators
 * Return: 0 (success)
 */

int main(void)
{
	int coms;

	for (coms = 0; coms <= 9; coms++)
	{
		putchar(coms + '0');
		if (coms != 9)
		{
			if (coms < 9)
		{
			putchar(',');
			putchar(' ');
		}

		}
	}
	putchar('$');
	putchar('\n');
	return (0);
}
