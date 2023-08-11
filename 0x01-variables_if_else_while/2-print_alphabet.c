#include <stdio.h>

/**
 * main - Entry point
 * Description - Using putchar to print a-z
 * Return: 0 (succes)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
