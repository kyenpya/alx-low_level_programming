#include "main.h"

/**
 * _sqrt_recursion - computes the sqr root of a non-negative int
 * @n: The number to calculate its square root
 * Return: Natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (helper(n, 1));
	}
}

/**
 * helper - recursive function to compute sqr root of n
 * @n: non-negative int for which sqr root is calculated
 * @i: current int being tested for sqr root
 * Return: int sqr root of n or -1 if otherwise
 */
int helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		int res = helper(n, i + 1);

		if (res != -1)
		{
			return (res);
		}
	}
	return (-1);
}
