#include <stdio.h>

/**
 * main - Entry point
 * Description - prints a combination of two digit numbers
 * Return: 0 (success)
 */

int main(void)
{
	int e;
	int f;

	for (e = 0; e < 100; ++e)
	{
		for (f = 0; e < 100; ++f)
		{
			putchar((e / 10) + '0');
			putchar((e % 10) + '0');
			putchar(' ');
			putchar((f / 10) + '0');
			putchar((f % 10) + '0');
				if (e != 98 || f != 99)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	return (0);
}
