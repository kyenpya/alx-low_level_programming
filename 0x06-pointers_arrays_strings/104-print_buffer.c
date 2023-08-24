#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_buffer -prints a buffer
 * @b: buffer
 * @size: size
 * Return: 0 (success)
 */
void print_buffer(char *b, int size)
{
	int a, c;

	if (size <= 0)
	{
		printf("\n");
			return;
	}
	for (a = 0; a < size; a += 10)
	{
		printf("%08x: ", a);

		for (c = a; c < a + 10; c++)
		{
			if (c < size)
				printf("%02x", b[c]);
			else
				printf(" ");
			if (c % 2)
				printf(" ");
		}
		for (c = a; c < a + 10; c++)
		{
			if (c >= size)
				break;
			if (isprint(b[c]))
				printf("%c", b[c]);
			else
				printf(".");
		}
		printf("\n");
	}
}
