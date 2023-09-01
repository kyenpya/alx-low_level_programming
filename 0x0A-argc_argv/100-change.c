#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum no of coins to make change for
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 means success
 */

int main(int argc, char *argv[])
{
	int cents, quarts, dimes, nicks, ones, tcoins;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	quarts = cents / 25;
	cents %= 25;
	
	dimes = cents / 10;
	cents %= 10;

	nicks = cents / 5;
	cents %= 5;

	ones = cents;

	tcoins = quarts + dimes + nicks + ones;
	printf("%d\n", tcoins);
	return (0);
}
