#include <stdio.h>

/**
 * main - Lists the natural numbers below 1024(excluded)
 * that are multiples of 3 || 5
 * Return: 0 (success)
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
