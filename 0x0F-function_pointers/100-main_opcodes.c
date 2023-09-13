#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opscode of its own main function
 * @argc: number of arguments
 * @argv: points to arguments
 * Return: 0 means success
 */

int main(int argc, char *argv[])
{
	int bits, i, (*addy)(int, char **) = main;
	unsigned char ops;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bits = atoi(argv[1]);

	if (bits < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bits; i++)
	{
		ops = *(unsigned char *)addy;
		printf("%.2x", ops);

		if (i == bits - 1)
			continue;
		printf(" ");
		addy++;
	}
	printf("\n");
	return (0);
}
