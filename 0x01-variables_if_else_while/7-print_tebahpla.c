#include <stdio.h>

/**
 * main - Entry point
 * Description- print z to a
 * Return: 0 (success)
 */

int main(void)
{
	char mirror;

	for (mirror = 'z'; mirror >= 'a'; mirror--)
	{
		putchar(mirror);
	}
	putchar('\n');
	return (0);
}
