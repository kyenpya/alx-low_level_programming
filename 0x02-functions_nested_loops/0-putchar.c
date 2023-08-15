#include <stdio.h>

/**
 * main - entry point
 * Description - printing a string without printf or puts
 * Return: 0 (success)
 */

int main(void)
{
	char message[] = "_putchar";

	int a = 0;

	while (message[a] != '\0')
		{
		putchar(message[a]);
		a++;
		}
	putchar('\n');
return (0);
}
