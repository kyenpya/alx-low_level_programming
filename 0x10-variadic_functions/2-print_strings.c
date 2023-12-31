#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed
 * @n: number of strings
 * @...: variable no of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int ind;
	char *alps;

	va_list args;

	va_start(args, n);

	for (ind = 0; ind < n; ind++)
	{
		alps = va_arg(args, char *);
		if (alps == NULL)
			printf("(nil)");
		else
			printf("%s", alps);
		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
