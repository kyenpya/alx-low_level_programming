#include <stdio.h>

/**
 * main - Entry point
 * Description - print zero to nine and a to f
 * Return: 0 (success)
 */

int main(void)
{
	int num;
	char bets;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	for (bets = 'a'; bets <= 'f'; bets++)
	{
		putchar(bets);
	}
	putchar('\n');
	return (0);
}
