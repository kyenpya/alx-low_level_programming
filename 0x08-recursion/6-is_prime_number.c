#include "main.h"

int ap(int n, int i);

/**
 * is_prime_number - checks if an int is prime
 * @n: int to be checked
 * Return: 1 if n is prime, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (ap(n, n - 1));
}

/**
 * ap - recursively calculates if number is prime
 * @n: number to be evaluated
 * @i: iterator used in the calculation
 * Return: 1 if n is prime, 0 otherwise
 */

int ap(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (ap(n, i - 1));
}
