#include <stdio.h>

/**
 * main - program prints all the arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 means success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
