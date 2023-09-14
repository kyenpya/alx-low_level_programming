#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: no of paramters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int ind;
	int res = 0;

	va_list ls;

	va_start(ls, n);

	for (ind = 0; ind < n; ind++)
		res += va_arg(ls, int);
	va_end(ls);
	return (res);
}
