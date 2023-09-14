#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: String to be printed
 * @n: Number of ints
 * @...: Variable no of int args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int ind;
	va_list args;

	va_start(args, n);

	for (ind = 0; ind < n; ind++)
	{
		if (!separator)
			printf("%d", va_arg(args, int));
		else if (separator && ind == 0)
			printf("%d", va_arg(args, int));
		else
			printf("%s%d", separator, va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
