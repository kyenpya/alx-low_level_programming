#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 means success, 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int numa = atoi(argv[1]);
	int numb = atoi(argv[2]);
	int result = numa * numb;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);
	return (0);
}
