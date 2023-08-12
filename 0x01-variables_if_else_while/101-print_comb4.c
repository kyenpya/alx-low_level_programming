#include <stdio.h>

/**
 * main - Entry point
 * Description - double numbers will be printed
 * Return: 0 (success)
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 8; a++)
	{
		for (b = a + 1; b < 9; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');

				if (a != 7 || b != 8 || c != 9)
					{
					putchar(44);
					putchar(32);
					}
			}
		}
	}
	putchar(10);
	return (0);
}
