#include "main.h"
/**
 * print_triangle - entry point
 * Description - printing a triangle using #
 * @size: prints the size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int row, hash, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
